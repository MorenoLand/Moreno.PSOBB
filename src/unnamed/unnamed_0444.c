#include "protos.h"

void f_0044401c(void) /* sub_44401C */
{
    FN_ENTER(0x0044401c);
    /* 0044401c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0044401d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0044401f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00444021: call 0x444040 */ r_esp -= 4; W32(r_esp, 0x444026u); f_00444040();
    /* 00444026: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0044402a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044402c: jne 0x444032 */ if (!fZ) goto L_00444032;
L_0044402e:; BB(0x0044402e);
    /* 0044402e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044402f: ret 4 */ FN_RET(0x0044401c); r_esp += 8; return;
L_00444032:; BB(0x00444032);
    /* 00444032: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00444033: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x444038u); f_005c2f74();
    /* 00444038: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00444039: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044403a: ret 4 */ FN_RET(0x0044401c); r_esp += 8; return;
}

void f_00444040(void) /* sub_444040 */
{
    FN_ENTER(0x00444040);
    /* 00444040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444041: mov ebp, esp */ r_ebp = r_esp;
    /* 00444043: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00444045: push 0x8ce780 */ { u32 v = 0x8ce780u; r_esp -= 4; W32(r_esp, v); }
    /* 0044404a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00444050: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444051: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00444058: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044405b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044405e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00444061: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00444064: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00444067: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0044406a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00444071: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00444074: mov dword ptr [ecx], 0xaf6220 */ W32((u32)(r_ecx), 0xaf6220u);
    /* 0044407a: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x44407fu); f_007b9c8c();
    /* 0044407f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00444082: mov edx, dword ptr [eax + 0x47c] */ r_edx = R32((u32)(r_eax+0x47cu));
    /* 00444088: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044408a: je 0x4440a6 */ if (fZ) goto L_004440a6;
L_0044408c:; BB(0x0044408c);
    /* 0044408c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00444090: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00444095: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00444099: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044409c: mov dword ptr [eax + 0x47c], 0 */ W32((u32)(r_eax+0x47cu), 0x0u);
L_004440a6:; BB(0x004440a6);
    /* 004440a6: mov edx, dword ptr [eax + 0x480] */ r_edx = R32((u32)(r_eax+0x480u));
    /* 004440ac: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004440ae: je 0x4440ca */ if (fZ) goto L_004440ca;
L_004440b0:; BB(0x004440b0);
    /* 004440b0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004440b4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004440b9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004440bd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004440c0: mov dword ptr [eax + 0x480], 0 */ W32((u32)(r_eax+0x480u), 0x0u);
L_004440ca:; BB(0x004440ca);
    /* 004440ca: mov edx, dword ptr [eax + 0x3ec] */ r_edx = R32((u32)(r_eax+0x3ecu));
    /* 004440d0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004440d2: je 0x4440ee */ if (fZ) goto L_004440ee;
L_004440d4:; BB(0x004440d4);
    /* 004440d4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004440d8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004440dd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004440e1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004440e4: mov dword ptr [eax + 0x3ec], 0 */ W32((u32)(r_eax+0x3ecu), 0x0u);
L_004440ee:; BB(0x004440ee);
    /* 004440ee: mov edx, dword ptr [eax + 0x3f0] */ r_edx = R32((u32)(r_eax+0x3f0u));
    /* 004440f4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004440f6: je 0x444112 */ if (fZ) goto L_00444112;
L_004440f8:; BB(0x004440f8);
    /* 004440f8: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004440fc: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00444101: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00444105: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00444108: mov dword ptr [eax + 0x3f0], 0 */ W32((u32)(r_eax+0x3f0u), 0x0u);
L_00444112:; BB(0x00444112);
    /* 00444112: mov edx, dword ptr [eax + 0x3f4] */ r_edx = R32((u32)(r_eax+0x3f4u));
    /* 00444118: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044411a: je 0x444136 */ if (fZ) goto L_00444136;
L_0044411c:; BB(0x0044411c);
    /* 0044411c: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00444120: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00444125: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00444129: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044412c: mov dword ptr [eax + 0x3f4], 0 */ W32((u32)(r_eax+0x3f4u), 0x0u);
L_00444136:; BB(0x00444136);
    /* 00444136: mov edx, dword ptr [eax + 0x3f8] */ r_edx = R32((u32)(r_eax+0x3f8u));
    /* 0044413c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044413e: je 0x44415a */ if (fZ) goto L_0044415a;
L_00444140:; BB(0x00444140);
    /* 00444140: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00444144: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00444149: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0044414d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00444150: mov dword ptr [eax + 0x3f8], 0 */ W32((u32)(r_eax+0x3f8u), 0x0u);
L_0044415a:; BB(0x0044415a);
    /* 0044415a: mov edx, dword ptr [eax + 0x500] */ r_edx = R32((u32)(r_eax+0x500u));
    /* 00444160: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444162: je 0x44417e */ if (fZ) goto L_0044417e;
L_00444164:; BB(0x00444164);
    /* 00444164: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00444168: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044416d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00444171: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00444174: mov dword ptr [eax + 0x500], 0 */ W32((u32)(r_eax+0x500u), 0x0u);
L_0044417e:; BB(0x0044417e);
    /* 0044417e: mov edx, dword ptr [eax + 0x504] */ r_edx = R32((u32)(r_eax+0x504u));
    /* 00444184: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444186: je 0x4441a2 */ if (fZ) goto L_004441a2;
L_00444188:; BB(0x00444188);
    /* 00444188: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0044418c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00444191: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00444195: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00444198: mov dword ptr [eax + 0x504], 0 */ W32((u32)(r_eax+0x504u), 0x0u);
L_004441a2:; BB(0x004441a2);
    /* 004441a2: mov edx, dword ptr [eax + 0x508] */ r_edx = R32((u32)(r_eax+0x508u));
    /* 004441a8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004441aa: je 0x4441c6 */ if (fZ) goto L_004441c6;
L_004441ac:; BB(0x004441ac);
    /* 004441ac: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004441b0: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004441b5: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004441b9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004441bc: mov dword ptr [eax + 0x508], 0 */ W32((u32)(r_eax+0x508u), 0x0u);
L_004441c6:; BB(0x004441c6);
    /* 004441c6: mov edx, dword ptr [eax + 0x50c] */ r_edx = R32((u32)(r_eax+0x50cu));
    /* 004441cc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004441ce: je 0x4441ee */ if (fZ) goto L_004441ee;
L_004441d4:; BB(0x004441d4);
    /* 004441d4: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004441d8: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004441dd: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004441e1: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004441e4: mov dword ptr [edx + 0x50c], 0 */ W32((u32)(r_edx+0x50cu), 0x0u);
L_004441ee:; BB(0x004441ee);
    /* 004441ee: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 004441f5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004441f8: add ecx, 0x498 */ {  u32 a = r_ecx; u32 b = 0x498u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004441fe: call 0x5770ec */ r_esp -= 4; W32(r_esp, 0x444203u); f_005770ec();
    /* 00444203: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044420a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044420d: call 0x52bf84 */ r_esp -= 4; W32(r_esp, 0x444212u); f_0052bf84();
    /* 00444212: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444215: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044421c: mov esp, ebp */ r_esp = r_ebp;
    /* 0044421e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044421f: ret  */ FN_RET(0x00444040); r_esp += 4; return;
}

void f_00444145(void)
{
    FN_ENTER(0x00444145);
    /* 00444145: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    UNSUP(0x00444147, "falls out of decoded code");
}

void f_00444220(void) /* sub_444220 */
{
    FN_ENTER(0x00444220);
    /* 00444220: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00444221: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00444222: mov esi, ecx */ r_esi = r_ecx;
    /* 00444224: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00444227: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044422c: je 0x444231 */ if (fZ) goto L_00444231;
L_0044422e:; BB(0x0044422e);
    /* 0044422e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044422f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00444230: ret  */ FN_RET(0x00444220); r_esp += 4; return;
L_00444231:; BB(0x00444231);
    /* 00444231: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00444236: mov ecx, esi */ r_ecx = r_esi;
    /* 00444238: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0044423a: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0044423f: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x444242u); call_ind(t); }
    /* 00444242: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00444244: je 0x4442d2 */ if (fZ) goto L_004442d2;
L_0044424a:; BB(0x0044424a);
    /* 0044424a: lea ebx, [esi + 0x498] */ r_ebx = (u32)(r_esi+0x498u);
    /* 00444250: lea eax, [esi + 0x300] */ r_eax = (u32)(r_esi+0x300u);
    /* 00444256: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444257: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00444259: call 0x57725c */ r_esp -= 4; W32(r_esp, 0x44425eu); f_0057725c();
    /* 0044425e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444260: je 0x44426d */ if (fZ) goto L_0044426d;
L_00444262:; BB(0x00444262);
    /* 00444262: mov eax, dword ptr [esi + 0x498] */ r_eax = R32((u32)(r_esi+0x498u));
    /* 00444268: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0044426a: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x44426du); call_ind(t); }
L_0044426d:; BB(0x0044426d);
    /* 0044426d: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00444270: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x444275u); f_00829cc8();
    /* 00444275: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00444276: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x44427bu); f_00794548();
    /* 0044427b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044427c: call 0x578b38 */ r_esp -= 4; W32(r_esp, 0x444281u); f_00578b38();
    /* 00444281: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x444286u); f_0082d7b0();
    /* 00444286: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0044428b: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00444290: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00444295: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00444298: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x44429du); f_0082d838();
    /* 0044429d: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 004442a0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004442a2: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4442a7u); f_0082d8bc();
    /* 004442a7: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x4442acu); f_004f7c84();
    /* 004442ac: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004442af: je 0x4442d5 */ if (fZ) goto L_004442d5;
L_004442b1:; BB(0x004442b1);
    /* 004442b1: mov ecx, esi */ r_ecx = r_esi;
    /* 004442b3: call 0x7aa668 */ r_esp -= 4; W32(r_esp, 0x4442b8u); f_007aa668();
L_004442b8:; BB(0x004442b8);
    /* 004442b8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4442bdu); f_0082da80();
    /* 004442bd: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x4442c2u); f_00794750();
    /* 004442c2: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x4442c7u); f_0082dab0();
    /* 004442c7: mov eax, dword ptr [esi + 0x498] */ r_eax = R32((u32)(r_esi+0x498u));
    /* 004442cd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004442cf: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x4442d2u); call_ind(t); }
L_004442d2:; BB(0x004442d2);
    /* 004442d2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004442d3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004442d4: ret  */ FN_RET(0x00444220); r_esp += 4; return;
L_004442d5:; BB(0x004442d5);
    /* 004442d5: push dword ptr [esi + 0x34] */ { u32 v = R32((u32)(r_esi+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 004442d8: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x4442ddu); f_0082e1e8();
    /* 004442dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004442de: jmp 0x4442b8 */ goto L_004442b8;
}

void f_004442e0(void) /* sub_4442E0 */
{
    FN_ENTER(0x004442e0);
    /* 004442e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004442e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004442e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004442e3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004442e4: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004442e7: mov esi, ecx */ r_esi = r_ecx;
    /* 004442e9: mov ecx, dword ptr [esi + 0x484] */ r_ecx = R32((u32)(r_esi+0x484u));
    /* 004442ef: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4442f4u); f_0082dcbc();
    /* 004442f4: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004442f8: fld dword ptr [esi + 0x48c] */ FPUSH(R_F32((u32)(r_esi+0x48cu)));
    /* 004442fe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004442ff: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 00444303: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00444306: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x44430bu); f_0082e900();
    /* 0044430b: mov edx, dword ptr [0xa44b60] */ r_edx = R32((u32)(0xa44b60u));
    /* 00444311: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00444315: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 0044431a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044431f: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00444323: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00444327: fistp qword ptr [esp + 0x1c] */ W64((u32)(r_esp+0x1cu), (u64)fx_int64(ST(0))); FPOP();
    /* 0044432b: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0044432f: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00444333: mov byte ptr [edx + 6], al */ W8((u32)(r_edx+0x6u), (u8)r_eax);
    /* 00444336: fld dword ptr [esi + 0x490] */ FPUSH(R_F32((u32)(r_esi+0x490u)));
    /* 0044433c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044433d: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 00444341: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00444344: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x444349u); f_0082e900();
    /* 00444349: mov edx, dword ptr [0xa44b60] */ r_edx = R32((u32)(0xa44b60u));
    /* 0044434f: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00444353: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00444358: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044435d: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00444361: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 00444365: fistp qword ptr [esp + 0x1c] */ W64((u32)(r_esp+0x1cu), (u64)fx_int64(ST(0))); FPOP();
    /* 00444369: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 0044436d: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 00444371: mov byte ptr [edx + 5], al */ W8((u32)(r_edx+0x5u), (u8)r_eax);
    /* 00444374: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00444375: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 00444379: fmul dword ptr [esi + 0x494] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x494u));
    /* 0044437f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00444382: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x444387u); f_0082e900();
    /* 00444387: mov edx, dword ptr [0xa44b60] */ r_edx = R32((u32)(0xa44b60u));
    /* 0044438d: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 00444391: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 00444396: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0044439b: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 0044439f: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 004443a3: fistp qword ptr [esp + 0x1c] */ W64((u32)(r_esp+0x1cu), (u64)fx_int64(ST(0))); FPOP();
    /* 004443a7: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 004443ab: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 004443af: mov byte ptr [edx + 4], al */ W8((u32)(r_edx+0x4u), (u8)r_eax);
    /* 004443b2: mov ebx, dword ptr [esi + 0x488] */ r_ebx = R32((u32)(r_esi+0x488u));
    /* 004443b8: add dword ptr [esi + 0x484], ebx */ { u32 ad = (u32)(r_esi+0x484u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004443be: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x4443c3u); f_004f7c84();
    /* 004443c3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004443c6: je 0x4446af */ if (fZ) goto L_004446af;
L_004443cc:; BB(0x004443cc);
    /* 004443cc: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004443ce: mov ecx, esi */ r_ecx = r_esi;
    /* 004443d0: call dword ptr [eax + 0x8c] */ { u32 t = R32((u32)(r_eax+0x8cu)); r_esp -= 4; W32(r_esp, 0x4443d6u); call_ind(t); }
    /* 004443d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004443d8: je 0x4443ec */ if (fZ) goto L_004443ec;
L_004443da:; BB(0x004443da);
    /* 004443da: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004443dc: mov ecx, esi */ r_ecx = r_esi;
    /* 004443de: call dword ptr [eax + 0x104] */ { u32 t = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, 0x4443e4u); call_ind(t); }
    /* 004443e4: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 004443e7: jmp 0x4445f1 */ goto L_004445f1;
L_004443ec:; BB(0x004443ec);
    /* 004443ec: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004443ee: mov ecx, esi */ r_ecx = r_esi;
    /* 004443f0: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x4443f6u); call_ind(t); }
    /* 004443f6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004443f8: jne 0x444402 */ if (!fZ) goto L_00444402;
L_004443fa:; BB(0x004443fa);
    /* 004443fa: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 004443fd: jmp 0x4445f1 */ goto L_004445f1;
L_00444402:; BB(0x00444402);
    /* 00444402: mov eax, dword ptr [0xa447c0] */ r_eax = R32((u32)(0xa447c0u));
    /* 00444407: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444409: je 0x4445e4 */ if (fZ) goto L_004445e4;
L_0044440f:; BB(0x0044440f);
    /* 0044440f: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00444412: mov ebx, dword ptr [esi + 0x390] */ r_ebx = R32((u32)(r_esi+0x390u));
    /* 00444418: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0044441e: test ebx, 0x400000 */ {  u32 a = r_ebx; u32 b = 0x400000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444424: je 0x4445c4 */ if (fZ) goto L_004445c4;
L_0044442a:; BB(0x0044442a);
    /* 0044442a: mov eax, 0x800000 */ r_eax = 0x800000u;
    /* 0044442f: movsx ebp, word ptr [esi + 0x4b4] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esi+0x4b4u));
    /* 00444436: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00444438: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044443a: jle 0x44444e */ if ((fZ||fS!=fO)) goto L_0044444e;
L_0044443c:; BB(0x0044443c);
    /* 0044443c: test ebx, 0x800000 */ {  u32 a = r_ebx; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444442: je 0x444449 */ if (fZ) goto L_00444449;
L_00444444:; BB(0x00444444);
    /* 00444444: mov ecx, 1 */ r_ecx = 0x1u;
L_00444449:; BB(0x00444449);
    /* 00444449: mov eax, 0x1000000 */ r_eax = 0x1000000u;
L_0044444e:; BB(0x0044444e);
    /* 0044444e: movsx edi, word ptr [esi + 0x4b6] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x4b6u));
    /* 00444455: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00444459: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044445b: jle 0x444466 */ if ((fZ||fS!=fO)) goto L_00444466;
L_0044445d:; BB(0x0044445d);
    /* 0044445d: test eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044445f: je 0x444464 */ if (fZ) goto L_00444464;
L_00444461:; BB(0x00444461);
    /* 00444461: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_00444464:; BB(0x00444464);
    /* 00444464: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00444466:; BB(0x00444466);
    /* 00444466: movsx edi, word ptr [esi + 0x4b8] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x4b8u));
    /* 0044446d: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 00444471: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00444473: jle 0x44447e */ if ((fZ||fS!=fO)) goto L_0044447e;
L_00444475:; BB(0x00444475);
    /* 00444475: test eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444477: je 0x44447c */ if (fZ) goto L_0044447c;
L_00444479:; BB(0x00444479);
    /* 00444479: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_0044447c:; BB(0x0044447c);
    /* 0044447c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_0044447e:; BB(0x0044447e);
    /* 0044447e: movsx edi, word ptr [esi + 0x4ba] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x4bau));
    /* 00444485: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 00444489: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044448b: jle 0x444494 */ if ((fZ||fS!=fO)) goto L_00444494;
L_0044448d:; BB(0x0044448d);
    /* 0044448d: test eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044448f: je 0x444494 */ if (fZ) goto L_00444494;
L_00444491:; BB(0x00444491);
    /* 00444491: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_00444494:; BB(0x00444494);
    /* 00444494: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00444496: jle 0x4445c4 */ if ((fZ||fS!=fO)) goto L_004445c4;
L_0044449c:; BB(0x0044449c);
    /* 0044449c: movsx eax, word ptr [esi + 0x346] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x346u));
    /* 004444a3: movsx edi, word ptr [esi + 0x334] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 004444aa: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004444ad: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004444af: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004444b1: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004444b4: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004444b5: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004444b5, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004444b5, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004444b7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004444b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004444bb: jg 0x4444bf */ if ((!fZ&&fS==fO)) goto L_004444bf;
L_004444bd:; BB(0x004444bd);
    /* 004444bd: mov eax, edx */ r_eax = r_edx;
L_004444bf:; BB(0x004444bf);
    /* 004444bf: test ebx, 0x800000 */ {  u32 a = r_ebx; u32 b = 0x800000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004444c5: je 0x4444ee */ if (fZ) goto L_004444ee;
L_004444c7:; BB(0x004444c7);
    /* 004444c7: movsx ebp, word ptr [esi + 0x4b4] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esi+0x4b4u));
    /* 004444ce: and ebx, 0xff7fffff */ {  u32 a = r_ebx; u32 b = 0xff7fffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 004444d4: mov dword ptr [esi + 0x390], ebx */ W32((u32)(r_esi+0x390u), r_ebx);
    /* 004444da: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004444dc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004444de: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004444e0: jg 0x4444e4 */ if ((!fZ&&fS==fO)) goto L_004444e4;
L_004444e2:; BB(0x004444e2);
    /* 004444e2: mov ebp, edx */ r_ebp = r_edx;
L_004444e4:; BB(0x004444e4);
    /* 004444e4: movsx ebp, bp */ r_ebp = (u32)(i32)(i16)(u16)r_ebp;
    /* 004444e7: mov word ptr [esi + 0x4b4], bp */ W16((u32)(r_esi+0x4b4u), (u16)r_ebp);
L_004444ee:; BB(0x004444ee);
    /* 004444ee: test ebx, 0x1000000 */ {  u32 a = r_ebx; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004444f4: je 0x444521 */ if (fZ) goto L_00444521;
L_004444f6:; BB(0x004444f6);
    /* 004444f6: movsx edi, word ptr [esi + 0x4b6] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x4b6u));
    /* 004444fd: and ebx, 0xfeffffff */ {  u32 a = r_ebx; u32 b = 0xfeffffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00444503: mov dword ptr [esi + 0x390], ebx */ W32((u32)(r_esi+0x390u), r_ebx);
    /* 00444509: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0044450b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044450d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0044450f: jg 0x444513 */ if ((!fZ&&fS==fO)) goto L_00444513;
L_00444511:; BB(0x00444511);
    /* 00444511: mov edi, edx */ r_edi = r_edx;
L_00444513:; BB(0x00444513);
    /* 00444513: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 00444516: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 0044451a: mov word ptr [esi + 0x4b6], dx */ W16((u32)(r_esi+0x4b6u), (u16)r_edx);
L_00444521:; BB(0x00444521);
    /* 00444521: test ebx, 0x2000000 */ {  u32 a = r_ebx; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444527: je 0x444554 */ if (fZ) goto L_00444554;
L_00444529:; BB(0x00444529);
    /* 00444529: movsx edi, word ptr [esi + 0x4b8] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x4b8u));
    /* 00444530: and ebx, 0xfdffffff */ {  u32 a = r_ebx; u32 b = 0xfdffffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00444536: mov dword ptr [esi + 0x390], ebx */ W32((u32)(r_esi+0x390u), r_ebx);
    /* 0044453c: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0044453e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00444540: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00444542: jg 0x444546 */ if ((!fZ&&fS==fO)) goto L_00444546;
L_00444544:; BB(0x00444544);
    /* 00444544: mov edi, edx */ r_edi = r_edx;
L_00444546:; BB(0x00444546);
    /* 00444546: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 00444549: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0044454d: mov word ptr [esi + 0x4b8], dx */ W16((u32)(r_esi+0x4b8u), (u16)r_edx);
L_00444554:; BB(0x00444554);
    /* 00444554: test ebx, 0x4000000 */ {  u32 a = r_ebx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044455a: je 0x444587 */ if (fZ) goto L_00444587;
L_0044455c:; BB(0x0044455c);
    /* 0044455c: movsx edx, word ptr [esi + 0x4ba] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x4bau));
    /* 00444563: and ebx, 0xfbffffff */ {  u32 a = r_ebx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00444569: mov dword ptr [esi + 0x390], ebx */ W32((u32)(r_esi+0x390u), r_ebx);
    /* 0044456f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00444571: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00444573: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00444575: jg 0x444579 */ if ((!fZ&&fS==fO)) goto L_00444579;
L_00444577:; BB(0x00444577);
    /* 00444577: mov edx, eax */ r_edx = r_eax;
L_00444579:; BB(0x00444579);
    /* 00444579: movsx ebx, dx */ r_ebx = (u32)(i32)(i16)(u16)r_edx;
    /* 0044457c: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 00444580: mov word ptr [esi + 0x4ba], bx */ W16((u32)(r_esi+0x4bau), (u16)r_ebx);
L_00444587:; BB(0x00444587);
    /* 00444587: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0044458b: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0044458f: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00444593: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00444598: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0044459b: mov byte ptr [esp], 0x18 */ W8((u32)(r_esp), 0x18u);
    /* 0044459f: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 004445a4: mov word ptr [esp + 4], bp */ W16((u32)(r_esp+0x4u), (u16)r_ebp);
    /* 004445a9: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 004445ad: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 004445b2: mov word ptr [esp + 8], bx */ W16((u32)(r_esp+0x8u), (u16)r_ebx);
    /* 004445b7: mov word ptr [esp + 0xa], bp */ W16((u32)(r_esp+0xau), (u16)r_ebp);
    /* 004445bc: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4445c1u); f_008003e0();
    /* 004445c1: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
L_004445c4:; BB(0x004445c4);
    /* 004445c4: movzx eax, word ptr [esi + 0x334] */ r_eax = (u32)R16((u32)(r_esi+0x334u));
    /* 004445cb: mov dword ptr [esi + 0x3c], 0 */ W32((u32)(r_esi+0x3cu), 0x0u);
    /* 004445d2: mov word ptr [esi + 0x346], ax */ W16((u32)(r_esi+0x346u), (u16)r_eax);
    /* 004445d9: and edx, 0xfffffdff */ {  u32 a = r_edx; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004445df: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004445e2: jmp 0x4445f1 */ goto L_004445f1;
L_004445e4:; BB(0x004445e4);
    /* 004445e4: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004445e6: mov ecx, esi */ r_ecx = r_esi;
    /* 004445e8: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x4445eeu); call_ind(t); }
    /* 004445ee: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
L_004445f1:; BB(0x004445f1);
    /* 004445f1: test edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004445f7: jne 0x4446b7 */ if (!fZ) goto L_004446b7;
L_004445fd:; BB(0x004445fd);
    /* 004445fd: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00444604: mov ebx, dword ptr [esi + 0x37c] */ r_ebx = R32((u32)(r_esi+0x37cu));
    /* 0044460a: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044460c: je 0x444654 */ if (fZ) goto L_00444654;
L_0044460e:; BB(0x0044460e);
    /* 0044460e: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 00444614: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444617: je 0x44463d */ if (fZ) goto L_0044463d;
L_00444619:; BB(0x00444619);
    /* 00444619: mov dword ptr [esi + 0x384], 0xffffffff */ W32((u32)(r_esi+0x384u), 0xffffffffu);
    /* 00444623: mov dword ptr [esi + 0x478], eax */ W32((u32)(r_esi+0x478u), r_eax);
    /* 00444629: mov ecx, esi */ r_ecx = r_esi;
    /* 0044462b: call 0x4446fc */ r_esp -= 4; W32(r_esp, 0x444630u); f_004446fc();
    /* 00444630: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00444637: mov ebx, dword ptr [esi + 0x37c] */ r_ebx = R32((u32)(r_esi+0x37cu));
L_0044463d:; BB(0x0044463d);
    /* 0044463d: mov dword ptr [esi + 0x384], 0 */ W32((u32)(r_esi+0x384u), 0x0u);
    /* 00444647: mov dword ptr [esi + 0x388], edx */ W32((u32)(r_esi+0x388u), r_edx);
    /* 0044464d: mov word ptr [esi + 0x32e], bx */ W16((u32)(r_esi+0x32eu), (u16)r_ebx);
L_00444654:; BB(0x00444654);
    /* 00444654: mov ecx, esi */ r_ecx = r_esi;
    /* 00444656: call 0x4446fc */ r_esp -= 4; W32(r_esp, 0x44465bu); f_004446fc();
    /* 0044465b: mov ecx, esi */ r_ecx = r_esi;
    /* 0044465d: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x444662u); f_0078730c();
    /* 00444662: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00444664: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00444665: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0044466b: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 00444671: mov ebx, dword ptr [esi + 0x308] */ r_ebx = R32((u32)(r_esi+0x308u));
    /* 00444677: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0044467a: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0044467d: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 00444680: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x444685u); f_006946a8();
    /* 00444685: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00444687: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00444689: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0044468c: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00444691: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444692: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x444697u); f_00805608();
    /* 00444697: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044469a: lea ecx, [esi + 0x498] */ r_ecx = (u32)(r_esi+0x498u);
    /* 004446a0: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x4446a5u); f_005771a4();
    /* 004446a5: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004446a7: mov ecx, esi */ r_ecx = r_esi;
    /* 004446a9: call dword ptr [eax + 0xe4] */ { u32 t = R32((u32)(r_eax+0xe4u)); r_esp -= 4; W32(r_esp, 0x4446afu); call_ind(t); }
L_004446af:; BB(0x004446af);
    /* 004446af: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004446b2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004446b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004446b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004446b5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004446b6: ret  */ FN_RET(0x004442e0); r_esp += 4; return;
L_004446b7:; BB(0x004446b7);
    /* 004446b7: mov eax, dword ptr [esi + 0x294] */ r_eax = R32((u32)(r_esi+0x294u));
    /* 004446bd: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004446c0: mov dword ptr [esi + 0x294], eax */ W32((u32)(r_esi+0x294u), r_eax);
    /* 004446c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004446c8: jle 0x4446d2 */ if ((fZ||fS!=fO)) goto L_004446d2;
L_004446ca:; BB(0x004446ca);
    /* 004446ca: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004446cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004446ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004446cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004446d0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004446d1: ret  */ FN_RET(0x004442e0); r_esp += 4; return;
L_004446d2:; BB(0x004446d2);
    /* 004446d2: mov dword ptr [esi + 0x290], 0 */ W32((u32)(r_esi+0x290u), 0x0u);
    /* 004446dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004446de: mov dword ptr [esi + 0x28c], eax */ W32((u32)(r_esi+0x28cu), r_eax);
    /* 004446e4: mov dword ptr [esi + 0x294], eax */ W32((u32)(r_esi+0x294u), r_eax);
    /* 004446ea: and edx, 0xffffbfff */ {  u32 a = r_edx; u32 b = 0xffffbfffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004446f0: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004446f3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004446f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004446f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004446f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004446f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004446fa: ret  */ FN_RET(0x004442e0); r_esp += 4; return;
}

void f_00444548(void)
{
    FN_ENTER(0x00444548);
    /* 00444548: xlatb  */ r_eax = (r_eax & 0xffffff00u) | R8(r_ebx + (r_eax & 0xffu));
    /* 00444549: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0044454d: mov word ptr [esi + 0x4b8], dx */ W16((u32)(r_esi+0x4b8u), (u16)r_edx);
    /* 00444554: test ebx, 0x4000000 */ {  u32 a = r_ebx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044455a: je 0x444587 */ if (fZ) goto L_00444587;
L_0044455c:; BB(0x0044455c);
    /* 0044455c: movsx edx, word ptr [esi + 0x4ba] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x4bau));
    /* 00444563: and ebx, 0xfbffffff */ {  u32 a = r_ebx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00444569: mov dword ptr [esi + 0x390], ebx */ W32((u32)(r_esi+0x390u), r_ebx);
    /* 0044456f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00444571: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00444573: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00444575: jg 0x444579 */ if ((!fZ&&fS==fO)) goto L_00444579;
L_00444577:; BB(0x00444577);
    /* 00444577: mov edx, eax */ r_edx = r_eax;
L_00444579:; BB(0x00444579);
    /* 00444579: movsx ebx, dx */ r_ebx = (u32)(i32)(i16)(u16)r_edx;
    /* 0044457c: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 00444580: mov word ptr [esi + 0x4ba], bx */ W16((u32)(r_esi+0x4bau), (u16)r_ebx);
L_00444587:; BB(0x00444587);
    /* 00444587: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0044458b: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0044458f: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00444593: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00444598: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0044459b: mov byte ptr [esp], 0x18 */ W8((u32)(r_esp), 0x18u);
    /* 0044459f: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 004445a4: mov word ptr [esp + 4], bp */ W16((u32)(r_esp+0x4u), (u16)r_ebp);
    /* 004445a9: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 004445ad: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 004445b2: mov word ptr [esp + 8], bx */ W16((u32)(r_esp+0x8u), (u16)r_ebx);
    /* 004445b7: mov word ptr [esp + 0xa], bp */ W16((u32)(r_esp+0xau), (u16)r_ebp);
    /* 004445bc: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4445c1u); f_008003e0();
    /* 004445c1: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 004445c4: movzx eax, word ptr [esi + 0x334] */ r_eax = (u32)R16((u32)(r_esi+0x334u));
    /* 004445cb: mov dword ptr [esi + 0x3c], 0 */ W32((u32)(r_esi+0x3cu), 0x0u);
    /* 004445d2: mov word ptr [esi + 0x346], ax */ W16((u32)(r_esi+0x346u), (u16)r_eax);
    /* 004445d9: and edx, 0xfffffdff */ {  u32 a = r_edx; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004445df: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004445e2: jmp 0x4445f1 */ goto L_004445f1;
L_004445f1:; BB(0x004445f1);
    /* 004445f1: test edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004445f7: jne 0x4446b7 */ if (!fZ) goto L_004446b7;
L_004445fd:; BB(0x004445fd);
    /* 004445fd: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00444604: mov ebx, dword ptr [esi + 0x37c] */ r_ebx = R32((u32)(r_esi+0x37cu));
    /* 0044460a: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044460c: je 0x444654 */ if (fZ) goto L_00444654;
L_0044460e:; BB(0x0044460e);
    /* 0044460e: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 00444614: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444617: je 0x44463d */ if (fZ) goto L_0044463d;
L_00444619:; BB(0x00444619);
    /* 00444619: mov dword ptr [esi + 0x384], 0xffffffff */ W32((u32)(r_esi+0x384u), 0xffffffffu);
    /* 00444623: mov dword ptr [esi + 0x478], eax */ W32((u32)(r_esi+0x478u), r_eax);
    /* 00444629: mov ecx, esi */ r_ecx = r_esi;
    /* 0044462b: call 0x4446fc */ r_esp -= 4; W32(r_esp, 0x444630u); f_004446fc();
    /* 00444630: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00444637: mov ebx, dword ptr [esi + 0x37c] */ r_ebx = R32((u32)(r_esi+0x37cu));
L_0044463d:; BB(0x0044463d);
    /* 0044463d: mov dword ptr [esi + 0x384], 0 */ W32((u32)(r_esi+0x384u), 0x0u);
    /* 00444647: mov dword ptr [esi + 0x388], edx */ W32((u32)(r_esi+0x388u), r_edx);
    /* 0044464d: mov word ptr [esi + 0x32e], bx */ W16((u32)(r_esi+0x32eu), (u16)r_ebx);
L_00444654:; BB(0x00444654);
    /* 00444654: mov ecx, esi */ r_ecx = r_esi;
    /* 00444656: call 0x4446fc */ r_esp -= 4; W32(r_esp, 0x44465bu); f_004446fc();
    /* 0044465b: mov ecx, esi */ r_ecx = r_esi;
    /* 0044465d: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x444662u); f_0078730c();
    /* 00444662: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00444664: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00444665: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0044466b: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 00444671: mov ebx, dword ptr [esi + 0x308] */ r_ebx = R32((u32)(r_esi+0x308u));
    /* 00444677: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0044467a: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0044467d: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 00444680: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x444685u); f_006946a8();
    /* 00444685: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00444687: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00444689: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0044468c: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00444691: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444692: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x444697u); f_00805608();
    /* 00444697: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044469a: lea ecx, [esi + 0x498] */ r_ecx = (u32)(r_esi+0x498u);
    /* 004446a0: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x4446a5u); f_005771a4();
    /* 004446a5: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004446a7: mov ecx, esi */ r_ecx = r_esi;
    /* 004446a9: call dword ptr [eax + 0xe4] */ { u32 t = R32((u32)(r_eax+0xe4u)); r_esp -= 4; W32(r_esp, 0x4446afu); call_ind(t); }
    /* 004446af: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004446b2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004446b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004446b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004446b5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004446b6: ret  */ FN_RET(0x00444548); r_esp += 4; return;
L_004446b7:; BB(0x004446b7);
    /* 004446b7: mov eax, dword ptr [esi + 0x294] */ r_eax = R32((u32)(r_esi+0x294u));
    /* 004446bd: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004446c0: mov dword ptr [esi + 0x294], eax */ W32((u32)(r_esi+0x294u), r_eax);
    /* 004446c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004446c8: jle 0x4446d2 */ if ((fZ||fS!=fO)) goto L_004446d2;
L_004446ca:; BB(0x004446ca);
    /* 004446ca: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004446cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004446ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004446cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004446d0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004446d1: ret  */ FN_RET(0x00444548); r_esp += 4; return;
L_004446d2:; BB(0x004446d2);
    /* 004446d2: mov dword ptr [esi + 0x290], 0 */ W32((u32)(r_esi+0x290u), 0x0u);
    /* 004446dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004446de: mov dword ptr [esi + 0x28c], eax */ W32((u32)(r_esi+0x28cu), r_eax);
    /* 004446e4: mov dword ptr [esi + 0x294], eax */ W32((u32)(r_esi+0x294u), r_eax);
    /* 004446ea: and edx, 0xffffbfff */ {  u32 a = r_edx; u32 b = 0xffffbfffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004446f0: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004446f3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004446f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004446f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004446f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004446f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004446fa: ret  */ FN_RET(0x00444548); r_esp += 4; return;
}

void f_00444552(void)
{
    FN_ENTER(0x00444552);
    /* 00444552: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00444554: test ebx, 0x4000000 */ {  u32 a = r_ebx; u32 b = 0x4000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044455a: je 0x444587 */ if (fZ) goto L_00444587;
L_0044455c:; BB(0x0044455c);
    /* 0044455c: movsx edx, word ptr [esi + 0x4ba] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x4bau));
    /* 00444563: and ebx, 0xfbffffff */ {  u32 a = r_ebx; u32 b = 0xfbffffffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00444569: mov dword ptr [esi + 0x390], ebx */ W32((u32)(r_esi+0x390u), r_ebx);
    /* 0044456f: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00444571: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00444573: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00444575: jg 0x444579 */ if ((!fZ&&fS==fO)) goto L_00444579;
L_00444577:; BB(0x00444577);
    /* 00444577: mov edx, eax */ r_edx = r_eax;
L_00444579:; BB(0x00444579);
    /* 00444579: movsx ebx, dx */ r_ebx = (u32)(i32)(i16)(u16)r_edx;
    /* 0044457c: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 00444580: mov word ptr [esi + 0x4ba], bx */ W16((u32)(r_esi+0x4bau), (u16)r_ebx);
L_00444587:; BB(0x00444587);
    /* 00444587: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0044458b: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0044458f: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00444593: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00444598: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0044459b: mov byte ptr [esp], 0x18 */ W8((u32)(r_esp), 0x18u);
    /* 0044459f: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 004445a4: mov word ptr [esp + 4], bp */ W16((u32)(r_esp+0x4u), (u16)r_ebp);
    /* 004445a9: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 004445ad: mov word ptr [esp + 6], dx */ W16((u32)(r_esp+0x6u), (u16)r_edx);
    /* 004445b2: mov word ptr [esp + 8], bx */ W16((u32)(r_esp+0x8u), (u16)r_ebx);
    /* 004445b7: mov word ptr [esp + 0xa], bp */ W16((u32)(r_esp+0xau), (u16)r_ebp);
    /* 004445bc: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4445c1u); f_008003e0();
    /* 004445c1: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 004445c4: movzx eax, word ptr [esi + 0x334] */ r_eax = (u32)R16((u32)(r_esi+0x334u));
    /* 004445cb: mov dword ptr [esi + 0x3c], 0 */ W32((u32)(r_esi+0x3cu), 0x0u);
    /* 004445d2: mov word ptr [esi + 0x346], ax */ W16((u32)(r_esi+0x346u), (u16)r_eax);
    /* 004445d9: and edx, 0xfffffdff */ {  u32 a = r_edx; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004445df: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004445e2: jmp 0x4445f1 */ goto L_004445f1;
L_004445f1:; BB(0x004445f1);
    /* 004445f1: test edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004445f7: jne 0x4446b7 */ if (!fZ) goto L_004446b7;
L_004445fd:; BB(0x004445fd);
    /* 004445fd: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00444604: mov ebx, dword ptr [esi + 0x37c] */ r_ebx = R32((u32)(r_esi+0x37cu));
    /* 0044460a: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044460c: je 0x444654 */ if (fZ) goto L_00444654;
L_0044460e:; BB(0x0044460e);
    /* 0044460e: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 00444614: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444617: je 0x44463d */ if (fZ) goto L_0044463d;
L_00444619:; BB(0x00444619);
    /* 00444619: mov dword ptr [esi + 0x384], 0xffffffff */ W32((u32)(r_esi+0x384u), 0xffffffffu);
    /* 00444623: mov dword ptr [esi + 0x478], eax */ W32((u32)(r_esi+0x478u), r_eax);
    /* 00444629: mov ecx, esi */ r_ecx = r_esi;
    /* 0044462b: call 0x4446fc */ r_esp -= 4; W32(r_esp, 0x444630u); f_004446fc();
    /* 00444630: movsx edx, word ptr [esi + 0x32e] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00444637: mov ebx, dword ptr [esi + 0x37c] */ r_ebx = R32((u32)(r_esi+0x37cu));
L_0044463d:; BB(0x0044463d);
    /* 0044463d: mov dword ptr [esi + 0x384], 0 */ W32((u32)(r_esi+0x384u), 0x0u);
    /* 00444647: mov dword ptr [esi + 0x388], edx */ W32((u32)(r_esi+0x388u), r_edx);
    /* 0044464d: mov word ptr [esi + 0x32e], bx */ W16((u32)(r_esi+0x32eu), (u16)r_ebx);
L_00444654:; BB(0x00444654);
    /* 00444654: mov ecx, esi */ r_ecx = r_esi;
    /* 00444656: call 0x4446fc */ r_esp -= 4; W32(r_esp, 0x44465bu); f_004446fc();
    /* 0044465b: mov ecx, esi */ r_ecx = r_esi;
    /* 0044465d: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x444662u); f_0078730c();
    /* 00444662: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00444664: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00444665: mov eax, dword ptr [esi + 0x300] */ r_eax = R32((u32)(r_esi+0x300u));
    /* 0044466b: mov edx, dword ptr [esi + 0x304] */ r_edx = R32((u32)(r_esi+0x304u));
    /* 00444671: mov ebx, dword ptr [esi + 0x308] */ r_ebx = R32((u32)(r_esi+0x308u));
    /* 00444677: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 0044467a: mov dword ptr [esi + 0x78], edx */ W32((u32)(r_esi+0x78u), r_edx);
    /* 0044467d: mov dword ptr [esi + 0x7c], ebx */ W32((u32)(r_esi+0x7cu), r_ebx);
    /* 00444680: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x444685u); f_006946a8();
    /* 00444685: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00444687: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00444689: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 0044468c: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00444691: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444692: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x444697u); f_00805608();
    /* 00444697: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044469a: lea ecx, [esi + 0x498] */ r_ecx = (u32)(r_esi+0x498u);
    /* 004446a0: call 0x5771a4 */ r_esp -= 4; W32(r_esp, 0x4446a5u); f_005771a4();
    /* 004446a5: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004446a7: mov ecx, esi */ r_ecx = r_esi;
    /* 004446a9: call dword ptr [eax + 0xe4] */ { u32 t = R32((u32)(r_eax+0xe4u)); r_esp -= 4; W32(r_esp, 0x4446afu); call_ind(t); }
    /* 004446af: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004446b2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004446b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004446b4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004446b5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004446b6: ret  */ FN_RET(0x00444552); r_esp += 4; return;
L_004446b7:; BB(0x004446b7);
    /* 004446b7: mov eax, dword ptr [esi + 0x294] */ r_eax = R32((u32)(r_esi+0x294u));
    /* 004446bd: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004446c0: mov dword ptr [esi + 0x294], eax */ W32((u32)(r_esi+0x294u), r_eax);
    /* 004446c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004446c8: jle 0x4446d2 */ if ((fZ||fS!=fO)) goto L_004446d2;
L_004446ca:; BB(0x004446ca);
    /* 004446ca: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004446cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004446ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004446cf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004446d0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004446d1: ret  */ FN_RET(0x00444552); r_esp += 4; return;
L_004446d2:; BB(0x004446d2);
    /* 004446d2: mov dword ptr [esi + 0x290], 0 */ W32((u32)(r_esi+0x290u), 0x0u);
    /* 004446dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004446de: mov dword ptr [esi + 0x28c], eax */ W32((u32)(r_esi+0x28cu), r_eax);
    /* 004446e4: mov dword ptr [esi + 0x294], eax */ W32((u32)(r_esi+0x294u), r_eax);
    /* 004446ea: and edx, 0xffffbfff */ {  u32 a = r_edx; u32 b = 0xffffbfffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 004446f0: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 004446f3: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004446f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004446f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004446f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004446f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004446fa: ret  */ FN_RET(0x00444552); r_esp += 4; return;
}

void f_00444553(void)
{
    FN_ENTER(0x00444553);
    /* 00444553: add bh, dh */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 00444555: ret  */ FN_RET(0x00444553); r_esp += 4; return;
}

void f_004446fc(void) /* sub_4446FC */
{
    FN_ENTER(0x004446fc);
    /* 004446fc: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 00444703: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00444706: ja 0x444755 */ if ((!fC&&!fZ)) goto L_00444755;
L_00444708:; BB(0x00444708);
    /* 00444708: mov eax, dword ptr [eax*4 + 0x8fe588] */ r_eax = R32((u32)(r_eax*4+0x8fe588u));
    /* 0044470f: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00444755:; BB(0x00444755);
    /* 00444755: ret  */ FN_RET(0x004446fc); r_esp += 4; return;
}

void f_00444711(void)
{
    FN_ENTER(0x00444711);
    /* 00444711: call 0x444758 */ r_esp -= 4; W32(r_esp, 0x444716u); f_00444758();
    /* 00444716: jmp 0x444755 */ goto L_00444755;
L_00444755:; BB(0x00444755);
    /* 00444755: ret  */ FN_RET(0x00444711); r_esp += 4; return;
}

void f_00444718(void)
{
    FN_ENTER(0x00444718);
    /* 00444718: call 0x44534c */ r_esp -= 4; W32(r_esp, 0x44471du); f_0044534c();
    /* 0044471d: jmp 0x444755 */ goto L_00444755;
L_00444755:; BB(0x00444755);
    /* 00444755: ret  */ FN_RET(0x00444718); r_esp += 4; return;
}

void f_0044471f(void)
{
    FN_ENTER(0x0044471f);
    /* 0044471f: call 0x445874 */ r_esp -= 4; W32(r_esp, 0x444724u); f_00445874();
    /* 00444724: jmp 0x444755 */ goto L_00444755;
L_00444755:; BB(0x00444755);
    /* 00444755: ret  */ FN_RET(0x0044471f); r_esp += 4; return;
}

void f_00444726(void)
{
    FN_ENTER(0x00444726);
    /* 00444726: call 0x445e84 */ r_esp -= 4; W32(r_esp, 0x44472bu); f_00445e84();
    /* 0044472b: jmp 0x444755 */ goto L_00444755;
L_00444755:; BB(0x00444755);
    /* 00444755: ret  */ FN_RET(0x00444726); r_esp += 4; return;
}

void f_0044472d(void)
{
    FN_ENTER(0x0044472d);
    /* 0044472d: call 0x446838 */ r_esp -= 4; W32(r_esp, 0x444732u); f_00446838();
    /* 00444732: jmp 0x444755 */ goto L_00444755;
L_00444755:; BB(0x00444755);
    /* 00444755: ret  */ FN_RET(0x0044472d); r_esp += 4; return;
}

void f_00444734(void)
{
    FN_ENTER(0x00444734);
    /* 00444734: call 0x446948 */ r_esp -= 4; W32(r_esp, 0x444739u); f_00446948();
    /* 00444739: jmp 0x444755 */ goto L_00444755;
L_00444755:; BB(0x00444755);
    /* 00444755: ret  */ FN_RET(0x00444734); r_esp += 4; return;
}

void f_0044473b(void)
{
    FN_ENTER(0x0044473b);
    /* 0044473b: call 0x446d08 */ r_esp -= 4; W32(r_esp, 0x444740u); f_00446d08();
    /* 00444740: jmp 0x444755 */ goto L_00444755;
L_00444755:; BB(0x00444755);
    /* 00444755: ret  */ FN_RET(0x0044473b); r_esp += 4; return;
}

void f_00444742(void)
{
    FN_ENTER(0x00444742);
    /* 00444742: call 0x446f90 */ r_esp -= 4; W32(r_esp, 0x444747u); f_00446f90();
    /* 00444747: jmp 0x444755 */ goto L_00444755;
L_00444755:; BB(0x00444755);
    /* 00444755: ret  */ FN_RET(0x00444742); r_esp += 4; return;
}

void f_00444749(void)
{
    FN_ENTER(0x00444749);
    /* 00444749: call 0x448328 */ r_esp -= 4; W32(r_esp, 0x44474eu); f_00448328();
    /* 0044474e: jmp 0x444755 */ goto L_00444755;
L_00444755:; BB(0x00444755);
    /* 00444755: ret  */ FN_RET(0x00444749); r_esp += 4; return;
}

void f_00444750(void)
{
    FN_ENTER(0x00444750);
    /* 00444750: call 0x44833c */ r_esp -= 4; W32(r_esp, 0x444755u); f_0044833c();
    /* 00444755: ret  */ FN_RET(0x00444750); r_esp += 4; return;
}

void f_00444755(void)
{
    FN_ENTER(0x00444755);
    /* 00444755: ret  */ FN_RET(0x00444755); r_esp += 4; return;
}

void f_00444758(void) /* sub_444758 */
{
    FN_ENTER(0x00444758);
    /* 00444758: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00444759: mov ebx, esp */ r_ebx = r_esp;
    /* 0044475b: and esp, 0xfffffff8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0044475e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044475f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00444760: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 00444763: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00444767: mov ebp, esp */ r_ebp = r_esp;
    /* 00444769: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0044476b: push 0x8ce822 */ { u32 v = 0x8ce822u; r_esp -= 4; W32(r_esp, v); }
    /* 00444770: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00444776: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444777: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0044477e: sub esp, 0xac */ {  u32 a = r_esp; u32 b = 0xacu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00444784: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00444787: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0044478a: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 0044478d: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00444790: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 00444796: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00444799: test eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044479e: je 0x4447ac */ if (fZ) goto L_004447ac;
L_004447a0:; BB(0x004447a0);
    /* 004447a0: mov eax, ecx */ r_eax = r_ecx;
    /* 004447a2: mov dword ptr [eax + 0x37c], 0 */ W32((u32)(r_eax+0x37cu), 0x0u);
L_004447ac:; BB(0x004447ac);
    /* 004447ac: mov eax, ecx */ r_eax = r_ecx;
    /* 004447ae: mov eax, dword ptr [eax + 0x384] */ r_eax = R32((u32)(r_eax+0x384u));
    /* 004447b4: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 004447b7: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004447ba: ja 0x444fb6 */ if ((!fC&&!fZ)) goto L_00444fb6;
L_004447c0:; BB(0x004447c0);
    /* 004447c0: mov eax, dword ptr [eax*4 + 0x8fe5d8] */ r_eax = R32((u32)(r_eax*4+0x8fe5d8u));
    /* 004447c7: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00444fb6:; BB(0x00444fb6);
    /* 00444fb6: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00444fb9: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00444fbc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444fbf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00444fc6: mov esp, ebp */ r_esp = r_ebp;
    /* 00444fc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444fc9: mov esp, ebx */ r_esp = r_ebx;
    /* 00444fcb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00444fcc: ret  */ FN_RET(0x00444758); r_esp += 4; return;
}

void f_004447c9(void)
{
    FN_ENTER(0x004447c9);
    /* 004447c9: mov eax, ecx */ r_eax = r_ecx;
    /* 004447cb: movsx edx, word ptr [eax + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 004447d2: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004447d5: mov word ptr [eax + 0x344], dx */ W16((u32)(r_eax+0x344u), (u16)r_edx);
    /* 004447dc: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 004447df: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004447e1: jg 0x44482d */ if ((!fZ&&fS==fO)) goto L_0044482d;
L_004447e3:; BB(0x004447e3);
    /* 004447e3: movsx edx, word ptr [eax + 0x3a2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a2u));
    /* 004447ea: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004447ed: mov word ptr [eax + 0x3a2], dx */ W16((u32)(r_eax+0x3a2u), (u16)r_edx);
    /* 004447f4: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 004447f7: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004447fa: jge 0x444808 */ if ((fS==fO)) goto L_00444808;
L_004447fc:; BB(0x004447fc);
    /* 004447fc: mov dword ptr [eax + 0x384], 3 */ W32((u32)(r_eax+0x384u), 0x3u);
    /* 00444806: jmp 0x44482d */ goto L_0044482d;
L_00444808:; BB(0x00444808);
    /* 00444808: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 0044480b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0044480d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044480e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044480f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444810: push 0x351 */ { u32 v = 0x351u; r_esp -= 4; W32(r_esp, v); }
    /* 00444815: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x44481au); f_00814298();
    /* 0044481a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044481d: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444820: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00444822: call dword ptr [eax + 0xf0] */ { u32 t = R32((u32)(r_eax+0xf0u)); r_esp -= 4; W32(r_esp, 0x444828u); call_ind(t); }
    /* 00444828: jmp 0x444fb6 */ goto L_00444fb6;
L_0044482d:; BB(0x0044482d);
    /* 0044482d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044482f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00444832:; BB(0x00444832);
    /* 00444832: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00444835: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444838: mov esi, dword ptr [edx + ecx*4 + 0x500] */ r_esi = R32((u32)(r_edx+r_ecx*4+0x500u));
    /* 0044483f: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00444842: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444844: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00444847: je 0x444fcd */ if (fZ) goto L_00444fcd;
L_0044484d:; BB(0x0044484d);
    /* 0044484d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00444850: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444853: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00444856: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00444859: jl 0x444832 */ if ((fS!=fO)) goto L_00444832;
L_0044485b:; BB(0x0044485b);
    /* 0044485b: jmp 0x444fb6 */ goto L_00444fb6;
L_00444fb6:; BB(0x00444fb6);
    /* 00444fb6: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00444fb9: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00444fbc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444fbf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00444fc6: mov esp, ebp */ r_esp = r_ebp;
    /* 00444fc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444fc9: mov esp, ebx */ r_esp = r_ebx;
    /* 00444fcb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00444fcc: ret  */ FN_RET(0x004447c9); r_esp += 4; return;
L_00444fcd:; BB(0x00444fcd);
    /* 00444fcd: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 00444fd4: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00444fd6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x444fdbu); f_005caba4();
    /* 00444fdb: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00444fde: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444fe1: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 00444fe4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444fe6: je 0x445040 */ if (fZ) goto L_00445040;
L_00444fe8:; BB(0x00444fe8);
    /* 00444fe8: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 00444fef: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 00444ff6: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444ff9: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00444ffc: lea eax, [edi + 0x3e0] */ r_eax = (u32)(r_edi+0x3e0u);
    /* 00445002: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00445005: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00445007: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 0044500a: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044500c: lea edx, [edi + ecx + 0x4d0] */ r_edx = (u32)(r_edi+r_ecx+0x4d0u);
    /* 00445013: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00445016: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00445017: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445018: call 0x4496f0 */ r_esp -= 4; W32(r_esp, 0x44501du); f_004496f0();
    /* 0044501d: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_00445024:; BB(0x00445024);
    /* 00445024: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00445027: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044502a: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044502d: mov dword ptr [edx + ecx*2 + 0x500], eax */ W32((u32)(r_edx+r_ecx*2+0x500u), r_eax);
    /* 00445034: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044503b: jmp 0x44484d */ goto L_0044484d;
L_00445040:; BB(0x00445040);
    /* 00445040: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00445042: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00445045: jmp 0x445024 */ goto L_00445024;
}

void f_00444860(void)
{
    FN_ENTER(0x00444860);
    /* 00444860: mov eax, ecx */ r_eax = r_ecx;
    /* 00444862: movsx eax, word ptr [eax + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00444869: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044486c: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0044486f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00444871: jle 0x4450c1 */ if ((fZ||fS!=fO)) goto L_004450c1;
L_00444877:; BB(0x00444877);
    /* 00444877: mov edx, ecx */ r_edx = r_ecx;
    /* 00444879: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
L_00444880:; BB(0x00444880);
    /* 00444880: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00444882: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00444885:; BB(0x00444885);
    /* 00444885: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00444888: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044488b: mov esi, dword ptr [edx + ecx*4 + 0x500] */ r_esi = R32((u32)(r_edx+r_ecx*4+0x500u));
    /* 00444892: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00444895: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444897: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0044489a: je 0x445047 */ if (fZ) goto L_00445047;
L_004448a0:; BB(0x004448a0);
    /* 004448a0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004448a3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004448a6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004448a9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004448ac: jl 0x444885 */ if ((fS!=fO)) goto L_00444885;
L_004448ae:; BB(0x004448ae);
    /* 004448ae: jmp 0x444fb6 */ goto L_00444fb6;
L_00444fb6:; BB(0x00444fb6);
    /* 00444fb6: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00444fb9: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00444fbc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444fbf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00444fc6: mov esp, ebp */ r_esp = r_ebp;
    /* 00444fc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444fc9: mov esp, ebx */ r_esp = r_ebx;
    /* 00444fcb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00444fcc: ret  */ FN_RET(0x00444860); r_esp += 4; return;
L_00445047:; BB(0x00445047);
    /* 00445047: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 0044504e: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00445050: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x445055u); f_005caba4();
    /* 00445055: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00445058: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044505b: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0044505e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445060: je 0x4450ba */ if (fZ) goto L_004450ba;
L_00445062:; BB(0x00445062);
    /* 00445062: mov dword ptr [ebp - 0x58], 1 */ W32((u32)(r_ebp+0xffffffa8u), 0x1u);
    /* 00445069: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 00445070: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00445073: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00445076: lea eax, [edi + 0x3e0] */ r_eax = (u32)(r_edi+0x3e0u);
    /* 0044507c: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 0044507f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00445081: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 00445084: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00445086: lea edx, [edi + ecx + 0x4d0] */ r_edx = (u32)(r_edi+r_ecx+0x4d0u);
    /* 0044508d: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00445090: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00445091: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445092: call 0x4496f0 */ r_esp -= 4; W32(r_esp, 0x445097u); f_004496f0();
    /* 00445097: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
L_0044509e:; BB(0x0044509e);
    /* 0044509e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004450a1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004450a4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004450a7: mov dword ptr [edx + ecx*2 + 0x500], eax */ W32((u32)(r_edx+r_ecx*2+0x500u), r_eax);
    /* 004450ae: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004450b5: jmp 0x4448a0 */ goto L_004448a0;
L_004450ba:; BB(0x004450ba);
    /* 004450ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004450bc: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004450bf: jmp 0x44509e */ goto L_0044509e;
L_004450c1:; BB(0x004450c1);
    /* 004450c1: mov edx, ecx */ r_edx = r_ecx;
    /* 004450c3: mov dword ptr [edx + 0x384], 8 */ W32((u32)(r_edx+0x384u), 0x8u);
    /* 004450cd: mov eax, 5 */ r_eax = 0x5u;
    /* 004450d2: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
    /* 004450d9: jmp 0x444880 */ goto L_00444880;
}

void f_004448b3(void)
{
    FN_ENTER(0x004448b3);
    /* 004448b3: mov eax, ecx */ r_eax = r_ecx;
    /* 004448b5: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 004448b8: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 004448bb: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004448be: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004448c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004448c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004448c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004448c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004448c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004448c7: push 0x350 */ { u32 v = 0x350u; r_esp -= 4; W32(r_esp, v); }
    /* 004448cc: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4448d1u); f_008144b0();
    /* 004448d1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004448d4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004448d7: movsx eax, word ptr [eax + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 004448de: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004448e1: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004448e4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004448e6: jle 0x445158 */ if ((fZ||fS!=fO)) goto L_00445158;
L_004448ec:; BB(0x004448ec);
    /* 004448ec: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004448ef: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
L_004448f6:; BB(0x004448f6);
    /* 004448f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004448f8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_004448fb:; BB(0x004448fb);
    /* 004448fb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004448fe: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444901: mov esi, dword ptr [edx + ecx*4 + 0x500] */ r_esi = R32((u32)(r_edx+r_ecx*4+0x500u));
    /* 00444908: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0044490b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044490d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00444910: je 0x4450de */ if (fZ) goto L_004450de;
L_00444916:; BB(0x00444916);
    /* 00444916: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00444919: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044491c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044491f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00444922: jl 0x4448fb */ if ((fS!=fO)) goto L_004448fb;
L_00444924:; BB(0x00444924);
    /* 00444924: jmp 0x444fb6 */ goto L_00444fb6;
L_00444fb6:; BB(0x00444fb6);
    /* 00444fb6: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00444fb9: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00444fbc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444fbf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00444fc6: mov esp, ebp */ r_esp = r_ebp;
    /* 00444fc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444fc9: mov esp, ebx */ r_esp = r_ebx;
    /* 00444fcb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00444fcc: ret  */ FN_RET(0x004448b3); r_esp += 4; return;
L_004450de:; BB(0x004450de);
    /* 004450de: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 004450e5: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004450e7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4450ecu); f_005caba4();
    /* 004450ec: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004450ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004450f2: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 004450f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004450f7: je 0x445151 */ if (fZ) goto L_00445151;
L_004450f9:; BB(0x004450f9);
    /* 004450f9: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
    /* 00445100: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00445107: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044510a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044510d: lea eax, [edi + 0x3e0] */ r_eax = (u32)(r_edi+0x3e0u);
    /* 00445113: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00445116: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00445118: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 0044511b: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044511d: lea edx, [edi + ecx + 0x4d0] */ r_edx = (u32)(r_edi+r_ecx+0x4d0u);
    /* 00445124: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00445127: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00445128: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445129: call 0x4496f0 */ r_esp -= 4; W32(r_esp, 0x44512eu); f_004496f0();
    /* 0044512e: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_00445135:; BB(0x00445135);
    /* 00445135: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00445138: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044513b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044513e: mov dword ptr [edx + ecx*2 + 0x500], eax */ W32((u32)(r_edx+r_ecx*2+0x500u), r_eax);
    /* 00445145: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044514c: jmp 0x444916 */ goto L_00444916;
L_00445151:; BB(0x00445151);
    /* 00445151: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00445153: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00445156: jmp 0x445135 */ goto L_00445135;
L_00445158:; BB(0x00445158);
    /* 00445158: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044515b: mov dword ptr [edx + 0x384], 7 */ W32((u32)(r_edx+0x384u), 0x7u);
    /* 00445165: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0044516a: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
    /* 00445171: jmp 0x4448f6 */ goto L_004448f6;
}

void f_00444929(void)
{
    FN_ENTER(0x00444929);
    goto L_00444929;
L_004448bb:; BB(0x004448bb);
    /* 004448bb: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004448be: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004448c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004448c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004448c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004448c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004448c6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004448c7: push 0x350 */ { u32 v = 0x350u; r_esp -= 4; W32(r_esp, v); }
    /* 004448cc: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4448d1u); f_008144b0();
    /* 004448d1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004448d4: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004448d7: movsx eax, word ptr [eax + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 004448de: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004448e1: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 004448e4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004448e6: jle 0x445158 */ if ((fZ||fS!=fO)) goto L_00445158;
L_004448ec:; BB(0x004448ec);
    /* 004448ec: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004448ef: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
L_004448f6:; BB(0x004448f6);
    /* 004448f6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004448f8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_004448fb:; BB(0x004448fb);
    /* 004448fb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004448fe: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444901: mov esi, dword ptr [edx + ecx*4 + 0x500] */ r_esi = R32((u32)(r_edx+r_ecx*4+0x500u));
    /* 00444908: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 0044490b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044490d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00444910: je 0x4450de */ if (fZ) goto L_004450de;
L_00444916:; BB(0x00444916);
    /* 00444916: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00444919: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0044491c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044491f: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00444922: jl 0x4448fb */ if ((fS!=fO)) goto L_004448fb;
L_00444924:; BB(0x00444924);
    /* 00444924: jmp 0x444fb6 */ goto L_00444fb6;
L_00444929:; BB(0x00444929);
    /* 00444929: mov eax, dword ptr [0xa44bbc] */ r_eax = R32((u32)(0xa44bbcu));
    /* 0044492e: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00444931: mov word ptr [ecx + 0x344], dx */ W16((u32)(r_ecx+0x344u), (u16)r_edx);
    /* 00444938: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0044493a: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
L_0044493d:; BB(0x0044493d);
    /* 0044493d: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
    /* 00444944: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00444949: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x44494eu); f_005caba4();
    /* 0044494e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044494f: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 00444952: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444954: je 0x44498b */ if (fZ) goto L_0044498b;
L_00444956:; BB(0x00444956);
    /* 00444956: mov dword ptr [ebp - 0x74], 1 */ W32((u32)(r_ebp+0xffffff8cu), 0x1u);
    /* 0044495d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00444964: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00444967: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044496a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0044496b: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 0044496e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00444970: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 00444973: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00444975: lea edx, [ecx + edi + 0x4d0] */ r_edx = (u32)(r_ecx+r_edi+0x4d0u);
    /* 0044497c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0044497d: mov ecx, eax */ r_ecx = r_eax;
    /* 0044497f: call 0x44b0bc */ r_esp -= 4; W32(r_esp, 0x444984u); f_0044b0bc();
    /* 00444984: mov dword ptr [ebp - 0x74], 0 */ W32((u32)(r_ebp+0xffffff8cu), 0x0u);
L_0044498b:; BB(0x0044498b);
    /* 0044498b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00444992: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00444995: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444998: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0044499b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044499e: jl 0x44493d */ if ((fS!=fO)) goto L_0044493d;
L_004449a0:; BB(0x004449a0);
    /* 004449a0: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004449a3: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 004449a6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004449a9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004449ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004449ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004449ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004449ae: push 0x35c */ { u32 v = 0x35cu; r_esp -= 4; W32(r_esp, v); }
    /* 004449b3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4449b8u); f_00814298();
    /* 004449b8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004449bb: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004449be: mov dword ptr [eax + 0x384], 6 */ W32((u32)(r_eax+0x384u), 0x6u);
    /* 004449c8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 004449ca: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004449cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004449d1: jle 0x4448bb */ if ((fZ||fS!=fO)) goto L_004448bb;
L_004449d7:; BB(0x004449d7);
    /* 004449d7: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 004449de: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004449e0: je 0x444ab1 */ if (fZ) goto L_00444ab1;
L_004449e6:; BB(0x004449e6);
    /* 004449e6: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 004449ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004449eb: call 0x7ba9ec */ r_esp -= 4; W32(r_esp, 0x4449f0u); f_007ba9ec();
    /* 004449f0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004449f1: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 004449f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004449f6: je 0x444a02 */ if (fZ) goto L_00444a02;
L_004449f8:; BB(0x004449f8);
    /* 004449f8: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 004449fd: jmp 0x444ab1 */ goto L_00444ab1;
L_00444a02:; BB(0x00444a02);
    /* 00444a02: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00444a05: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00444a08: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444a09: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00444a0a: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x444a0fu); f_0078ea50();
    /* 00444a0f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444a12: fcomp dword ptr [0x8fe80c] */ fx_compare(ST(0), R_F32((u32)(0x8fe80cu))); FPOP();
    /* 00444a18: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00444a1a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00444a1b: jbe 0x444a27 */ if ((fC||fZ)) goto L_00444a27;
L_00444a1d:; BB(0x00444a1d);
    /* 00444a1d: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00444a22: jmp 0x444ab1 */ goto L_00444ab1;
L_00444a27:; BB(0x00444a27);
    /* 00444a27: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00444a2a: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 00444a2d: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00444a30: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 00444a33: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 00444a36: mov dword ptr [ebp - 0x68], eax */ W32((u32)(r_ebp+0xffffff98u), r_eax);
    /* 00444a39: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00444a3c: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 00444a3f: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x444a44u); f_0082f9c4();
    /* 00444a44: fld dword ptr [ebp - 0x64] */ FPUSH(R_F32((u32)(r_ebp+0xffffff9cu)));
    /* 00444a47: fld dword ptr [ebp - 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff94u)));
    /* 00444a4a: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00444a4c: fmul qword ptr [0x8fe718] */ ST(0) = ST(0) * R_F64((u32)(0x8fe718u));
    /* 00444a52: fdiv qword ptr [0x8fe710] */ ST(0) = ST(0) / R_F64((u32)(0x8fe710u));
    /* 00444a58: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 00444a5b: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 00444a5f: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00444a64: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00444a67: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00444a6a: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00444a6d: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 00444a70: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00444a73: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00444a76: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x444a7bu); f_0082ddd8();
    /* 00444a7b: fmul dword ptr [0x8fe804] */ ST(0) = ST(0) * R_F32((u32)(0x8fe804u));
    /* 00444a81: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00444a84: fstp dword ptr [ebp - 0x6c] */ W_F32((u32)(r_ebp+0xffffff94u), ST(0)); FPOP();
    /* 00444a87: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x444a8cu); f_0082dcbc();
    /* 00444a8c: fmul dword ptr [0x8fe804] */ ST(0) = ST(0) * R_F32((u32)(0x8fe804u));
    /* 00444a92: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00444a95: fstp dword ptr [ebp - 0x64] */ W_F32((u32)(r_ebp+0xffffff9cu), ST(0)); FPOP();
    /* 00444a98: lea ecx, [ebp - 0x6c] */ r_ecx = (u32)(r_ebp+0xffffff94u);
    /* 00444a9b: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x444aa0u); f_0082ebac();
    /* 00444aa0: mov eax, dword ptr [ebp - 0x6c] */ r_eax = R32((u32)(r_ebp+0xffffff94u));
    /* 00444aa3: mov edx, dword ptr [ebp - 0x64] */ r_edx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00444aa6: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00444aa9: mov eax, dword ptr [0xaae168] */ r_eax = R32((u32)(0xaae168u));
    /* 00444aae: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
L_00444ab1:; BB(0x00444ab1);
    /* 00444ab1: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00444ab4: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00444ab6: jl 0x4449d7 */ if ((fS!=fO)) goto L_004449d7;
L_00444abc:; BB(0x00444abc);
    /* 00444abc: jmp 0x4448bb */ goto L_004448bb;
L_00444fb6:; BB(0x00444fb6);
    /* 00444fb6: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00444fb9: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00444fbc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444fbf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00444fc6: mov esp, ebp */ r_esp = r_ebp;
    /* 00444fc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444fc9: mov esp, ebx */ r_esp = r_ebx;
    /* 00444fcb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00444fcc: ret  */ FN_RET(0x00444929); r_esp += 4; return;
L_004450de:; BB(0x004450de);
    /* 004450de: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
    /* 004450e5: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 004450e7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4450ecu); f_005caba4();
    /* 004450ec: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004450ef: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004450f2: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 004450f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004450f7: je 0x445151 */ if (fZ) goto L_00445151;
L_004450f9:; BB(0x004450f9);
    /* 004450f9: mov dword ptr [ebp - 0x60], 1 */ W32((u32)(r_ebp+0xffffffa0u), 0x1u);
    /* 00445100: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00445107: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044510a: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044510d: lea eax, [edi + 0x3e0] */ r_eax = (u32)(r_edi+0x3e0u);
    /* 00445113: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00445116: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00445118: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 0044511b: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044511d: lea edx, [edi + ecx + 0x4d0] */ r_edx = (u32)(r_edi+r_ecx+0x4d0u);
    /* 00445124: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00445127: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00445128: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445129: call 0x4496f0 */ r_esp -= 4; W32(r_esp, 0x44512eu); f_004496f0();
    /* 0044512e: mov dword ptr [ebp - 0x60], 0 */ W32((u32)(r_ebp+0xffffffa0u), 0x0u);
L_00445135:; BB(0x00445135);
    /* 00445135: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00445138: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044513b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044513e: mov dword ptr [edx + ecx*2 + 0x500], eax */ W32((u32)(r_edx+r_ecx*2+0x500u), r_eax);
    /* 00445145: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044514c: jmp 0x444916 */ goto L_00444916;
L_00445151:; BB(0x00445151);
    /* 00445151: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00445153: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00445156: jmp 0x445135 */ goto L_00445135;
L_00445158:; BB(0x00445158);
    /* 00445158: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044515b: mov dword ptr [edx + 0x384], 7 */ W32((u32)(r_edx+0x384u), 0x7u);
    /* 00445165: mov eax, 0x14 */ r_eax = 0x14u;
    /* 0044516a: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
    /* 00445171: jmp 0x4448f6 */ goto L_004448f6;
}

void f_00444ac1(void)
{
    FN_ENTER(0x00444ac1);
    /* 00444ac1: mov eax, ecx */ r_eax = r_ecx;
    /* 00444ac3: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 00444ac6: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 00444ac9: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00444acc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444acf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00444ad1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444ad2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444ad3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00444ad4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444ad5: push 0x350 */ { u32 v = 0x350u; r_esp -= 4; W32(r_esp, v); }
    /* 00444ada: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x444adfu); f_008144b0();
    /* 00444adf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444ae2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444ae5: mov eax, dword ptr [ecx + 0x4c8] */ r_eax = R32((u32)(r_ecx+0x4c8u));
    /* 00444aeb: mov edx, dword ptr [ecx + 0x4cc] */ r_edx = R32((u32)(r_ecx+0x4ccu));
    /* 00444af1: movsx esi, word ptr [ecx + 0x3a2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x3a2u));
    /* 00444af8: add eax, 0x180 */ {  u32 a = r_eax; u32 b = 0x180u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444afd: mov dword ptr [ecx + 0x4c8], eax */ W32((u32)(r_ecx+0x4c8u), r_eax);
    /* 00444b03: add edx, 0xfffffe80 */ {  u32 a = r_edx; u32 b = 0xfffffe80u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00444b09: mov dword ptr [ecx + 0x4cc], edx */ W32((u32)(r_ecx+0x4ccu), r_edx);
    /* 00444b0f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444b11: jne 0x444b41 */ if (!fZ) goto L_00444b41;
L_00444b13:; BB(0x00444b13);
    /* 00444b13: mov eax, ecx */ r_eax = r_ecx;
    /* 00444b15: mov ecx, dword ptr [eax + 0x514] */ r_ecx = R32((u32)(r_eax+0x514u));
    /* 00444b1b: add ecx, 0x400 */ {  u32 a = r_ecx; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00444b21: mov dword ptr [eax + 0x514], ecx */ W32((u32)(r_eax+0x514u), r_ecx);
    /* 00444b27: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x444b2cu); f_0082dcbc();
    /* 00444b2c: fmul dword ptr [0x8fe7fc] */ ST(0) = ST(0) * R_F32((u32)(0x8fe7fcu));
    /* 00444b32: fadd dword ptr [0x8fe800] */ ST(0) = ST(0) + R_F32((u32)(0x8fe800u));
    /* 00444b38: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444b3b: fstp dword ptr [eax + 0x510] */ W_F32((u32)(r_eax+0x510u), ST(0)); FPOP();
L_00444b41:; BB(0x00444b41);
    /* 00444b41: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00444b46: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x444b4bu); f_0082d990();
    /* 00444b4b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444b4e: mov eax, dword ptr [esi + 0x510] */ r_eax = R32((u32)(r_esi+0x510u));
    /* 00444b54: mov edx, dword ptr [esi + 0x4c8] */ r_edx = R32((u32)(r_esi+0x4c8u));
    /* 00444b5a: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00444b5d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00444b5f: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 00444b69: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
    /* 00444b73: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x444b78u); f_0082d8bc();
    /* 00444b78: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00444b7a:; BB(0x00444b7a);
    /* 00444b7a: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444b7d: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00444b80: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444b82: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00444b85: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00444b87: lea edi, [edi + edx + 0x4d0] */ r_edi = (u32)(r_edi+r_edx+0x4d0u);
    /* 00444b8e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00444b8f: lea edx, [ebp - 0x88] */ r_edx = (u32)(r_ebp+0xffffff78u);
    /* 00444b95: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00444b97: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x444b9cu); f_00830aa0();
    /* 00444b9c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00444b9f: mov ecx, edi */ r_ecx = r_edi;
    /* 00444ba1: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x444ba6u); f_0082ebac();
    /* 00444ba6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00444ba8: mov edx, 0x4000 */ r_edx = 0x4000u;
    /* 00444bad: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x444bb2u); f_0082d8bc();
    /* 00444bb2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00444bb5: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00444bb8: jl 0x444b7a */ if ((fS!=fO)) goto L_00444b7a;
L_00444bba:; BB(0x00444bba);
    /* 00444bba: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x444bbfu); f_0082da80();
    /* 00444bbf: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444bc2: mov edx, dword ptr [eax + 0x4cc] */ r_edx = R32((u32)(r_eax+0x4ccu));
    /* 00444bc8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00444bca: jle 0x4451f0 */ if ((fZ||fS!=fO)) goto L_004451f0;
L_00444bd0:; BB(0x00444bd0);
    /* 00444bd0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00444bd2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00444bd5:; BB(0x00444bd5);
    /* 00444bd5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00444bd8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444bdb: mov esi, dword ptr [edx + ecx*4 + 0x500] */ r_esi = R32((u32)(r_edx+r_ecx*4+0x500u));
    /* 00444be2: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00444be5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444be7: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00444bea: je 0x445176 */ if (fZ) goto L_00445176;
L_00444bf0:; BB(0x00444bf0);
    /* 00444bf0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00444bf3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444bf6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00444bf9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00444bfc: jl 0x444bd5 */ if ((fS!=fO)) goto L_00444bd5;
L_00444bfe:; BB(0x00444bfe);
    /* 00444bfe: jmp 0x444fb6 */ goto L_00444fb6;
L_00444fb6:; BB(0x00444fb6);
    /* 00444fb6: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00444fb9: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00444fbc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444fbf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00444fc6: mov esp, ebp */ r_esp = r_ebp;
    /* 00444fc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444fc9: mov esp, ebx */ r_esp = r_ebx;
    /* 00444fcb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00444fcc: ret  */ FN_RET(0x00444ac1); r_esp += 4; return;
L_00445176:; BB(0x00445176);
    /* 00445176: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 0044517d: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0044517f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x445184u); f_005caba4();
    /* 00445184: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00445187: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044518a: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0044518d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044518f: je 0x4451e9 */ if (fZ) goto L_004451e9;
L_00445191:; BB(0x00445191);
    /* 00445191: mov dword ptr [ebp - 0x7c], 1 */ W32((u32)(r_ebp+0xffffff84u), 0x1u);
    /* 00445198: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044519f: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004451a2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004451a5: lea eax, [edi + 0x3e0] */ r_eax = (u32)(r_edi+0x3e0u);
    /* 004451ab: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 004451ae: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004451b0: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 004451b3: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004451b5: lea edx, [edi + ecx + 0x4d0] */ r_edx = (u32)(r_edi+r_ecx+0x4d0u);
    /* 004451bc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004451bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004451c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004451c1: call 0x4496f0 */ r_esp -= 4; W32(r_esp, 0x4451c6u); f_004496f0();
    /* 004451c6: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_004451cd:; BB(0x004451cd);
    /* 004451cd: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004451d0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004451d3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004451d6: mov dword ptr [edx + ecx*2 + 0x500], eax */ W32((u32)(r_edx+r_ecx*2+0x500u), r_eax);
    /* 004451dd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004451e4: jmp 0x444bf0 */ goto L_00444bf0;
L_004451e9:; BB(0x004451e9);
    /* 004451e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004451eb: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004451ee: jmp 0x4451cd */ goto L_004451cd;
L_004451f0:; BB(0x004451f0);
    /* 004451f0: movsx edx, word ptr [eax + 0x3a2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a2u));
    /* 004451f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004451f9: jne 0x445288 */ if (!fZ) goto L_00445288;
L_004451ff:; BB(0x004451ff);
    /* 004451ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00445201: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_00445204:; BB(0x00445204);
    /* 00445204: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00445207: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445208: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x44520du); f_0068d5a8();
    /* 0044520d: mov esi, eax */ r_esi = r_eax;
    /* 0044520f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445212: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445214: je 0x44524c */ if (fZ) goto L_0044524c;
L_00445216:; BB(0x00445216);
    /* 00445216: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00445218: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0044521b:; BB(0x0044521b);
    /* 0044521b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044521e: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 00445221: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445223: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00445226: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445228: lea edx, [ecx + eax + 0x4d0] */ r_edx = (u32)(r_ecx+r_eax+0x4d0u);
    /* 0044522f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00445230: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00445231: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x445236u); f_0078ea50();
    /* 00445236: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445239: fcomp dword ptr [0x8fe808] */ fx_compare(ST(0), R_F32((u32)(0x8fe808u))); FPOP();
    /* 0044523f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00445241: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00445242: jbe 0x445297 */ if ((fC||fZ)) goto L_00445297;
L_00445244:; BB(0x00445244);
    /* 00445244: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00445247: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044524a: jl 0x44521b */ if ((fS!=fO)) goto L_0044521b;
L_0044524c:; BB(0x0044524c);
    /* 0044524c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044524f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445252: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00445255: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445258: jl 0x445204 */ if ((fS!=fO)) goto L_00445204;
L_0044525a:; BB(0x0044525a);
    /* 0044525a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044525d: movsx edx, word ptr [eax + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00445264: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445267: mov word ptr [eax + 0x344], dx */ W16((u32)(r_eax+0x344u), (u16)r_edx);
    /* 0044526e: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 00445271: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00445273: jg 0x444bd0 */ if ((!fZ&&fS==fO)) goto L_00444bd0;
L_00445279:; BB(0x00445279);
    /* 00445279: mov dword ptr [eax + 0x384], 5 */ W32((u32)(r_eax+0x384u), 0x5u);
    /* 00445283: jmp 0x444bd0 */ goto L_00444bd0;
L_00445288:; BB(0x00445288);
    /* 00445288: mov dword ptr [eax + 0x384], 5 */ W32((u32)(r_eax+0x384u), 0x5u);
    /* 00445292: jmp 0x444bd0 */ goto L_00444bd0;
L_00445297:; BB(0x00445297);
    /* 00445297: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044529a: mov dword ptr [eax + 0x384], 5 */ W32((u32)(r_eax+0x384u), 0x5u);
    /* 004452a4: mov edx, 4 */ r_edx = 0x4u;
    /* 004452a9: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004452ac: jmp 0x44524c */ goto L_0044524c;
}

void f_00444c03(void)
{
    FN_ENTER(0x00444c03);
    goto L_00444c03;
L_00444ac9:; BB(0x00444ac9);
    /* 00444ac9: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00444acc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444acf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00444ad1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444ad2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444ad3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00444ad4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444ad5: push 0x350 */ { u32 v = 0x350u; r_esp -= 4; W32(r_esp, v); }
    /* 00444ada: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x444adfu); f_008144b0();
    /* 00444adf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444ae2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444ae5: mov eax, dword ptr [ecx + 0x4c8] */ r_eax = R32((u32)(r_ecx+0x4c8u));
    /* 00444aeb: mov edx, dword ptr [ecx + 0x4cc] */ r_edx = R32((u32)(r_ecx+0x4ccu));
    /* 00444af1: movsx esi, word ptr [ecx + 0x3a2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x3a2u));
    /* 00444af8: add eax, 0x180 */ {  u32 a = r_eax; u32 b = 0x180u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444afd: mov dword ptr [ecx + 0x4c8], eax */ W32((u32)(r_ecx+0x4c8u), r_eax);
    /* 00444b03: add edx, 0xfffffe80 */ {  u32 a = r_edx; u32 b = 0xfffffe80u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00444b09: mov dword ptr [ecx + 0x4cc], edx */ W32((u32)(r_ecx+0x4ccu), r_edx);
    /* 00444b0f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444b11: jne 0x444b41 */ if (!fZ) goto L_00444b41;
L_00444b13:; BB(0x00444b13);
    /* 00444b13: mov eax, ecx */ r_eax = r_ecx;
    /* 00444b15: mov ecx, dword ptr [eax + 0x514] */ r_ecx = R32((u32)(r_eax+0x514u));
    /* 00444b1b: add ecx, 0x400 */ {  u32 a = r_ecx; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00444b21: mov dword ptr [eax + 0x514], ecx */ W32((u32)(r_eax+0x514u), r_ecx);
    /* 00444b27: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x444b2cu); f_0082dcbc();
    /* 00444b2c: fmul dword ptr [0x8fe7fc] */ ST(0) = ST(0) * R_F32((u32)(0x8fe7fcu));
    /* 00444b32: fadd dword ptr [0x8fe800] */ ST(0) = ST(0) + R_F32((u32)(0x8fe800u));
    /* 00444b38: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444b3b: fstp dword ptr [eax + 0x510] */ W_F32((u32)(r_eax+0x510u), ST(0)); FPOP();
L_00444b41:; BB(0x00444b41);
    /* 00444b41: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00444b46: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x444b4bu); f_0082d990();
    /* 00444b4b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444b4e: mov eax, dword ptr [esi + 0x510] */ r_eax = R32((u32)(r_esi+0x510u));
    /* 00444b54: mov edx, dword ptr [esi + 0x4c8] */ r_edx = R32((u32)(r_esi+0x4c8u));
    /* 00444b5a: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00444b5d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00444b5f: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 00444b69: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
    /* 00444b73: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x444b78u); f_0082d8bc();
    /* 00444b78: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00444b7a:; BB(0x00444b7a);
    /* 00444b7a: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444b7d: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00444b80: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444b82: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00444b85: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00444b87: lea edi, [edi + edx + 0x4d0] */ r_edi = (u32)(r_edi+r_edx+0x4d0u);
    /* 00444b8e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00444b8f: lea edx, [ebp - 0x88] */ r_edx = (u32)(r_ebp+0xffffff78u);
    /* 00444b95: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00444b97: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x444b9cu); f_00830aa0();
    /* 00444b9c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00444b9f: mov ecx, edi */ r_ecx = r_edi;
    /* 00444ba1: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x444ba6u); f_0082ebac();
    /* 00444ba6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00444ba8: mov edx, 0x4000 */ r_edx = 0x4000u;
    /* 00444bad: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x444bb2u); f_0082d8bc();
    /* 00444bb2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00444bb5: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00444bb8: jl 0x444b7a */ if ((fS!=fO)) goto L_00444b7a;
L_00444bba:; BB(0x00444bba);
    /* 00444bba: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x444bbfu); f_0082da80();
    /* 00444bbf: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444bc2: mov edx, dword ptr [eax + 0x4cc] */ r_edx = R32((u32)(r_eax+0x4ccu));
    /* 00444bc8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00444bca: jle 0x4451f0 */ if ((fZ||fS!=fO)) goto L_004451f0;
L_00444bd0:; BB(0x00444bd0);
    /* 00444bd0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00444bd2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00444bd5:; BB(0x00444bd5);
    /* 00444bd5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00444bd8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444bdb: mov esi, dword ptr [edx + ecx*4 + 0x500] */ r_esi = R32((u32)(r_edx+r_ecx*4+0x500u));
    /* 00444be2: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00444be5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444be7: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00444bea: je 0x445176 */ if (fZ) goto L_00445176;
L_00444bf0:; BB(0x00444bf0);
    /* 00444bf0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00444bf3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444bf6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00444bf9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00444bfc: jl 0x444bd5 */ if ((fS!=fO)) goto L_00444bd5;
L_00444bfe:; BB(0x00444bfe);
    /* 00444bfe: jmp 0x444fb6 */ goto L_00444fb6;
L_00444c03:; BB(0x00444c03);
    /* 00444c03: mov eax, ecx */ r_eax = r_ecx;
    /* 00444c05: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 00444c0b: mov dword ptr [eax + 0x384], 4 */ W32((u32)(r_eax+0x384u), 0x4u);
    /* 00444c15: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00444c17: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00444c19: jle 0x4452ee */ if ((fZ||fS!=fO)) goto L_004452ee;
L_00444c1f:; BB(0x00444c1f);
    /* 00444c1f: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 00444c22: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
L_00444c25:; BB(0x00444c25);
    /* 00444c25: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 00444c2c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444c2e: je 0x444d23 */ if (fZ) goto L_00444d23;
L_00444c34:; BB(0x00444c34);
    /* 00444c34: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00444c38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444c39: call 0x7ba9ec */ r_esp -= 4; W32(r_esp, 0x444c3eu); f_007ba9ec();
    /* 00444c3e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00444c3f: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00444c42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444c44: je 0x444c51 */ if (fZ) goto L_00444c51;
L_00444c46:; BB(0x00444c46);
    /* 00444c46: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 00444c4c: jmp 0x444d23 */ goto L_00444d23;
L_00444c51:; BB(0x00444c51);
    /* 00444c51: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00444c54: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00444c57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444c58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00444c59: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x444c5eu); f_0078ea50();
    /* 00444c5e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444c61: fcomp dword ptr [0x8fe80c] */ fx_compare(ST(0), R_F32((u32)(0x8fe80cu))); FPOP();
    /* 00444c67: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00444c69: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00444c6a: jbe 0x444c77 */ if ((fC||fZ)) goto L_00444c77;
L_00444c6c:; BB(0x00444c6c);
    /* 00444c6c: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 00444c72: jmp 0x444d23 */ goto L_00444d23;
L_00444c77:; BB(0x00444c77);
    /* 00444c77: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00444c7a: lea ecx, [ebp - 0x94] */ r_ecx = (u32)(r_ebp+0xffffff6cu);
    /* 00444c80: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00444c83: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 00444c89: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 00444c8c: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00444c92: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00444c95: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00444c9b: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x444ca0u); f_0082f9c4();
    /* 00444ca0: fld dword ptr [ebp - 0x8c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff74u)));
    /* 00444ca6: fld dword ptr [ebp - 0x94] */ FPUSH(R_F32((u32)(r_ebp+0xffffff6cu)));
    /* 00444cac: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00444cae: fmul qword ptr [0x8fe718] */ ST(0) = ST(0) * R_F64((u32)(0x8fe718u));
    /* 00444cb4: fdiv qword ptr [0x8fe710] */ ST(0) = ST(0) / R_F64((u32)(0x8fe710u));
    /* 00444cba: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 00444cbd: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 00444cc1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00444cc6: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00444cc9: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00444ccc: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00444ccf: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 00444cd2: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00444cd5: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00444cd8: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x444cddu); f_0082ddd8();
    /* 00444cdd: fmul dword ptr [0x8fe804] */ ST(0) = ST(0) * R_F32((u32)(0x8fe804u));
    /* 00444ce3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00444ce6: fstp dword ptr [ebp - 0x94] */ W_F32((u32)(r_ebp+0xffffff6cu), ST(0)); FPOP();
    /* 00444cec: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x444cf1u); f_0082dcbc();
    /* 00444cf1: fmul dword ptr [0x8fe804] */ ST(0) = ST(0) * R_F32((u32)(0x8fe804u));
    /* 00444cf7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00444cfa: fstp dword ptr [ebp - 0x8c] */ W_F32((u32)(r_ebp+0xffffff74u), ST(0)); FPOP();
    /* 00444d00: lea ecx, [ebp - 0x94] */ r_ecx = (u32)(r_ebp+0xffffff6cu);
    /* 00444d06: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x444d0bu); f_0082ebac();
    /* 00444d0b: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 00444d11: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 00444d17: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 00444d1d: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00444d20: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
L_00444d23:; BB(0x00444d23);
    /* 00444d23: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00444d26: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00444d28: jl 0x444c25 */ if ((fS!=fO)) goto L_00444c25;
L_00444d2e:; BB(0x00444d2e);
    /* 00444d2e: jmp 0x4452ae */ goto L_004452ae;
L_00444fb6:; BB(0x00444fb6);
    /* 00444fb6: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00444fb9: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00444fbc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444fbf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00444fc6: mov esp, ebp */ r_esp = r_ebp;
    /* 00444fc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444fc9: mov esp, ebx */ r_esp = r_ebx;
    /* 00444fcb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00444fcc: ret  */ FN_RET(0x00444c03); r_esp += 4; return;
L_00445176:; BB(0x00445176);
    /* 00445176: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 0044517d: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0044517f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x445184u); f_005caba4();
    /* 00445184: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00445187: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044518a: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0044518d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044518f: je 0x4451e9 */ if (fZ) goto L_004451e9;
L_00445191:; BB(0x00445191);
    /* 00445191: mov dword ptr [ebp - 0x7c], 1 */ W32((u32)(r_ebp+0xffffff84u), 0x1u);
    /* 00445198: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044519f: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004451a2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004451a5: lea eax, [edi + 0x3e0] */ r_eax = (u32)(r_edi+0x3e0u);
    /* 004451ab: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 004451ae: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004451b0: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 004451b3: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004451b5: lea edx, [edi + ecx + 0x4d0] */ r_edx = (u32)(r_edi+r_ecx+0x4d0u);
    /* 004451bc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004451bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004451c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004451c1: call 0x4496f0 */ r_esp -= 4; W32(r_esp, 0x4451c6u); f_004496f0();
    /* 004451c6: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_004451cd:; BB(0x004451cd);
    /* 004451cd: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004451d0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004451d3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004451d6: mov dword ptr [edx + ecx*2 + 0x500], eax */ W32((u32)(r_edx+r_ecx*2+0x500u), r_eax);
    /* 004451dd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004451e4: jmp 0x444bf0 */ goto L_00444bf0;
L_004451e9:; BB(0x004451e9);
    /* 004451e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004451eb: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004451ee: jmp 0x4451cd */ goto L_004451cd;
L_004451f0:; BB(0x004451f0);
    /* 004451f0: movsx edx, word ptr [eax + 0x3a2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a2u));
    /* 004451f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004451f9: jne 0x445288 */ if (!fZ) goto L_00445288;
L_004451ff:; BB(0x004451ff);
    /* 004451ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00445201: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_00445204:; BB(0x00445204);
    /* 00445204: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00445207: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445208: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x44520du); f_0068d5a8();
    /* 0044520d: mov esi, eax */ r_esi = r_eax;
    /* 0044520f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445212: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445214: je 0x44524c */ if (fZ) goto L_0044524c;
L_00445216:; BB(0x00445216);
    /* 00445216: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00445218: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0044521b:; BB(0x0044521b);
    /* 0044521b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044521e: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 00445221: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445223: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00445226: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445228: lea edx, [ecx + eax + 0x4d0] */ r_edx = (u32)(r_ecx+r_eax+0x4d0u);
    /* 0044522f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00445230: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00445231: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x445236u); f_0078ea50();
    /* 00445236: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445239: fcomp dword ptr [0x8fe808] */ fx_compare(ST(0), R_F32((u32)(0x8fe808u))); FPOP();
    /* 0044523f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00445241: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00445242: jbe 0x445297 */ if ((fC||fZ)) goto L_00445297;
L_00445244:; BB(0x00445244);
    /* 00445244: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00445247: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044524a: jl 0x44521b */ if ((fS!=fO)) goto L_0044521b;
L_0044524c:; BB(0x0044524c);
    /* 0044524c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044524f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445252: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00445255: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445258: jl 0x445204 */ if ((fS!=fO)) goto L_00445204;
L_0044525a:; BB(0x0044525a);
    /* 0044525a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044525d: movsx edx, word ptr [eax + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00445264: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445267: mov word ptr [eax + 0x344], dx */ W16((u32)(r_eax+0x344u), (u16)r_edx);
    /* 0044526e: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 00445271: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00445273: jg 0x444bd0 */ if ((!fZ&&fS==fO)) goto L_00444bd0;
L_00445279:; BB(0x00445279);
    /* 00445279: mov dword ptr [eax + 0x384], 5 */ W32((u32)(r_eax+0x384u), 0x5u);
    /* 00445283: jmp 0x444bd0 */ goto L_00444bd0;
L_00445288:; BB(0x00445288);
    /* 00445288: mov dword ptr [eax + 0x384], 5 */ W32((u32)(r_eax+0x384u), 0x5u);
    /* 00445292: jmp 0x444bd0 */ goto L_00444bd0;
L_00445297:; BB(0x00445297);
    /* 00445297: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044529a: mov dword ptr [eax + 0x384], 5 */ W32((u32)(r_eax+0x384u), 0x5u);
    /* 004452a4: mov edx, 4 */ r_edx = 0x4u;
    /* 004452a9: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004452ac: jmp 0x44524c */ goto L_0044524c;
L_004452ae:; BB(0x004452ae);
    /* 004452ae: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004452b1: movsx edx, word ptr [eax + 0x3a2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a2u));
    /* 004452b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004452ba: je 0x4452c3 */ if (fZ) goto L_004452c3;
L_004452bc:; BB(0x004452bc);
    /* 004452bc: mov eax, 0x1555 */ r_eax = 0x1555u;
    /* 004452c1: jmp 0x4452e0 */ goto L_004452e0;
L_004452c3:; BB(0x004452c3);
    /* 004452c3: mov eax, dword ptr [0xa44c54] */ r_eax = R32((u32)(0xa44c54u));
    /* 004452c8: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 004452cb: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004452ce: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004452d0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004452d2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004452d4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004452d6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004452d8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004452da: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004452dc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004452de: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_004452e0:; BB(0x004452e0);
    /* 004452e0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004452e3: mov dword ptr [edx + 0x4cc], eax */ W32((u32)(r_edx+0x4ccu), r_eax);
    /* 004452e9: jmp 0x444ac9 */ goto L_00444ac9;
L_004452ee:; BB(0x004452ee);
    /* 004452ee: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 004452f1: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 004452f4: jmp 0x4452ae */ goto L_004452ae;
}

void f_00444c4e(void)
{
    FN_ENTER(0x00444c4e);
    goto L_00444c4e;
L_00444ac9:; BB(0x00444ac9);
    /* 00444ac9: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00444acc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444acf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00444ad1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444ad2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444ad3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00444ad4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00444ad5: push 0x350 */ { u32 v = 0x350u; r_esp -= 4; W32(r_esp, v); }
    /* 00444ada: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x444adfu); f_008144b0();
    /* 00444adf: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444ae2: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444ae5: mov eax, dword ptr [ecx + 0x4c8] */ r_eax = R32((u32)(r_ecx+0x4c8u));
    /* 00444aeb: mov edx, dword ptr [ecx + 0x4cc] */ r_edx = R32((u32)(r_ecx+0x4ccu));
    /* 00444af1: movsx esi, word ptr [ecx + 0x3a2] */ r_esi = (u32)(i32)(i16)R16((u32)(r_ecx+0x3a2u));
    /* 00444af8: add eax, 0x180 */ {  u32 a = r_eax; u32 b = 0x180u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444afd: mov dword ptr [ecx + 0x4c8], eax */ W32((u32)(r_ecx+0x4c8u), r_eax);
    /* 00444b03: add edx, 0xfffffe80 */ {  u32 a = r_edx; u32 b = 0xfffffe80u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00444b09: mov dword ptr [ecx + 0x4cc], edx */ W32((u32)(r_ecx+0x4ccu), r_edx);
    /* 00444b0f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444b11: jne 0x444b41 */ if (!fZ) goto L_00444b41;
L_00444b13:; BB(0x00444b13);
    /* 00444b13: mov eax, ecx */ r_eax = r_ecx;
    /* 00444b15: mov ecx, dword ptr [eax + 0x514] */ r_ecx = R32((u32)(r_eax+0x514u));
    /* 00444b1b: add ecx, 0x400 */ {  u32 a = r_ecx; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00444b21: mov dword ptr [eax + 0x514], ecx */ W32((u32)(r_eax+0x514u), r_ecx);
    /* 00444b27: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x444b2cu); f_0082dcbc();
    /* 00444b2c: fmul dword ptr [0x8fe7fc] */ ST(0) = ST(0) * R_F32((u32)(0x8fe7fcu));
    /* 00444b32: fadd dword ptr [0x8fe800] */ ST(0) = ST(0) + R_F32((u32)(0x8fe800u));
    /* 00444b38: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444b3b: fstp dword ptr [eax + 0x510] */ W_F32((u32)(r_eax+0x510u), ST(0)); FPOP();
L_00444b41:; BB(0x00444b41);
    /* 00444b41: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00444b46: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x444b4bu); f_0082d990();
    /* 00444b4b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444b4e: mov eax, dword ptr [esi + 0x510] */ r_eax = R32((u32)(r_esi+0x510u));
    /* 00444b54: mov edx, dword ptr [esi + 0x4c8] */ r_edx = R32((u32)(r_esi+0x4c8u));
    /* 00444b5a: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 00444b5d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00444b5f: mov dword ptr [ebp - 0x88], 0 */ W32((u32)(r_ebp+0xffffff78u), 0x0u);
    /* 00444b69: mov dword ptr [ebp - 0x84], 0 */ W32((u32)(r_ebp+0xffffff7cu), 0x0u);
    /* 00444b73: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x444b78u); f_0082d8bc();
    /* 00444b78: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_00444b7a:; BB(0x00444b7a);
    /* 00444b7a: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444b7d: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00444b80: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444b82: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00444b85: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00444b87: lea edi, [edi + edx + 0x4d0] */ r_edi = (u32)(r_edi+r_edx+0x4d0u);
    /* 00444b8e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00444b8f: lea edx, [ebp - 0x88] */ r_edx = (u32)(r_ebp+0xffffff78u);
    /* 00444b95: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00444b97: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x444b9cu); f_00830aa0();
    /* 00444b9c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00444b9f: mov ecx, edi */ r_ecx = r_edi;
    /* 00444ba1: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x444ba6u); f_0082ebac();
    /* 00444ba6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00444ba8: mov edx, 0x4000 */ r_edx = 0x4000u;
    /* 00444bad: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x444bb2u); f_0082d8bc();
    /* 00444bb2: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00444bb5: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00444bb8: jl 0x444b7a */ if ((fS!=fO)) goto L_00444b7a;
L_00444bba:; BB(0x00444bba);
    /* 00444bba: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x444bbfu); f_0082da80();
    /* 00444bbf: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444bc2: mov edx, dword ptr [eax + 0x4cc] */ r_edx = R32((u32)(r_eax+0x4ccu));
    /* 00444bc8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00444bca: jle 0x4451f0 */ if ((fZ||fS!=fO)) goto L_004451f0;
L_00444bd0:; BB(0x00444bd0);
    /* 00444bd0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00444bd2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_00444bd5:; BB(0x00444bd5);
    /* 00444bd5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00444bd8: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444bdb: mov esi, dword ptr [edx + ecx*4 + 0x500] */ r_esi = R32((u32)(r_edx+r_ecx*4+0x500u));
    /* 00444be2: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00444be5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444be7: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00444bea: je 0x445176 */ if (fZ) goto L_00445176;
L_00444bf0:; BB(0x00444bf0);
    /* 00444bf0: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00444bf3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444bf6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00444bf9: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00444bfc: jl 0x444bd5 */ if ((fS!=fO)) goto L_00444bd5;
L_00444bfe:; BB(0x00444bfe);
    /* 00444bfe: jmp 0x444fb6 */ goto L_00444fb6;
L_00444c25:; BB(0x00444c25);
    /* 00444c25: mov esi, dword ptr [edi*4 + 0xaad720] */ r_esi = R32((u32)(r_edi*4+0xaad720u));
    /* 00444c2c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444c2e: je 0x444d23 */ if (fZ) goto L_00444d23;
L_00444c34:; BB(0x00444c34);
    /* 00444c34: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00444c38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444c39: call 0x7ba9ec */ r_esp -= 4; W32(r_esp, 0x444c3eu); f_007ba9ec();
    /* 00444c3e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00444c3f: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 00444c42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444c44: je 0x444c51 */ if (fZ) goto L_00444c51;
L_00444c46:; BB(0x00444c46);
    /* 00444c46: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 00444c4c: jmp 0x444d23 */ goto L_00444d23;
L_00444c4e:; BB(0x00444c4e);
    /* 00444c4e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00444c50: add byte ptr [ebx + 0x468ddc55], cl */ { u32 ad = (u32)(r_ebx+0x468ddc55u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_00444c51:; BB(0x00444c51);
    /* 00444c51: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00444c54: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 00444c56: cmp byte ptr [eax + 0x52], dl */ {  u32 a = R8((u32)(r_eax+0x52u)); u32 b = (u8)r_edx; u32 r = (a - b) & 0xffu;   }
    /* 00444c57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444c58: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00444c59: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x444c5eu); f_0078ea50();
    /* 00444c5e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444c61: fcomp dword ptr [0x8fe80c] */ fx_compare(ST(0), R_F32((u32)(0x8fe80cu))); FPOP();
    /* 00444c67: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00444c69: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00444c6a: jbe 0x444c77 */ if ((fC||fZ)) goto L_00444c77;
L_00444c6c:; BB(0x00444c6c);
    /* 00444c6c: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 00444c72: jmp 0x444d23 */ goto L_00444d23;
L_00444c77:; BB(0x00444c77);
    /* 00444c77: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00444c7a: lea ecx, [ebp - 0x94] */ r_ecx = (u32)(r_ebp+0xffffff6cu);
    /* 00444c80: mov eax, dword ptr [esi + 0x38] */ r_eax = R32((u32)(r_esi+0x38u));
    /* 00444c83: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 00444c89: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 00444c8c: mov dword ptr [ebp - 0x90], eax */ W32((u32)(r_ebp+0xffffff70u), r_eax);
    /* 00444c92: mov eax, dword ptr [esi + 0x40] */ r_eax = R32((u32)(r_esi+0x40u));
    /* 00444c95: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00444c9b: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x444ca0u); f_0082f9c4();
    /* 00444ca0: fld dword ptr [ebp - 0x8c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff74u)));
    /* 00444ca6: fld dword ptr [ebp - 0x94] */ FPUSH(R_F32((u32)(r_ebp+0xffffff6cu)));
    /* 00444cac: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00444cae: fmul qword ptr [0x8fe718] */ ST(0) = ST(0) * R_F64((u32)(0x8fe718u));
    /* 00444cb4: fdiv qword ptr [0x8fe710] */ ST(0) = ST(0) / R_F64((u32)(0x8fe710u));
    /* 00444cba: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 00444cbd: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 00444cc1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00444cc6: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00444cc9: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 00444ccc: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00444ccf: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 00444cd2: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00444cd5: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00444cd8: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x444cddu); f_0082ddd8();
    /* 00444cdd: fmul dword ptr [0x8fe804] */ ST(0) = ST(0) * R_F32((u32)(0x8fe804u));
    /* 00444ce3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00444ce6: fstp dword ptr [ebp - 0x94] */ W_F32((u32)(r_ebp+0xffffff6cu), ST(0)); FPOP();
    /* 00444cec: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x444cf1u); f_0082dcbc();
    /* 00444cf1: fmul dword ptr [0x8fe804] */ ST(0) = ST(0) * R_F32((u32)(0x8fe804u));
    /* 00444cf7: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00444cfa: fstp dword ptr [ebp - 0x8c] */ W_F32((u32)(r_ebp+0xffffff74u), ST(0)); FPOP();
    /* 00444d00: lea ecx, [ebp - 0x94] */ r_ecx = (u32)(r_ebp+0xffffff6cu);
    /* 00444d06: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x444d0bu); f_0082ebac();
    /* 00444d0b: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 00444d11: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 00444d17: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 00444d1d: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00444d20: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
L_00444d23:; BB(0x00444d23);
    /* 00444d23: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00444d26: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00444d28: jl 0x444c25 */ if ((fS!=fO)) goto L_00444c25;
L_00444d2e:; BB(0x00444d2e);
    /* 00444d2e: jmp 0x4452ae */ goto L_004452ae;
L_00444fb6:; BB(0x00444fb6);
    /* 00444fb6: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00444fb9: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00444fbc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444fbf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00444fc6: mov esp, ebp */ r_esp = r_ebp;
    /* 00444fc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444fc9: mov esp, ebx */ r_esp = r_ebx;
    /* 00444fcb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00444fcc: ret  */ FN_RET(0x00444c4e); r_esp += 4; return;
L_00445176:; BB(0x00445176);
    /* 00445176: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
    /* 0044517d: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0044517f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x445184u); f_005caba4();
    /* 00445184: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00445187: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044518a: mov dword ptr [ebp - 0x78], eax */ W32((u32)(r_ebp+0xffffff88u), r_eax);
    /* 0044518d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044518f: je 0x4451e9 */ if (fZ) goto L_004451e9;
L_00445191:; BB(0x00445191);
    /* 00445191: mov dword ptr [ebp - 0x7c], 1 */ W32((u32)(r_ebp+0xffffff84u), 0x1u);
    /* 00445198: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044519f: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004451a2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004451a5: lea eax, [edi + 0x3e0] */ r_eax = (u32)(r_edi+0x3e0u);
    /* 004451ab: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 004451ae: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004451b0: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 004451b3: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004451b5: lea edx, [edi + ecx + 0x4d0] */ r_edx = (u32)(r_edi+r_ecx+0x4d0u);
    /* 004451bc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004451bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004451c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004451c1: call 0x4496f0 */ r_esp -= 4; W32(r_esp, 0x4451c6u); f_004496f0();
    /* 004451c6: mov dword ptr [ebp - 0x7c], 0 */ W32((u32)(r_ebp+0xffffff84u), 0x0u);
L_004451cd:; BB(0x004451cd);
    /* 004451cd: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 004451d0: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004451d3: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004451d6: mov dword ptr [edx + ecx*2 + 0x500], eax */ W32((u32)(r_edx+r_ecx*2+0x500u), r_eax);
    /* 004451dd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004451e4: jmp 0x444bf0 */ goto L_00444bf0;
L_004451e9:; BB(0x004451e9);
    /* 004451e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004451eb: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004451ee: jmp 0x4451cd */ goto L_004451cd;
L_004451f0:; BB(0x004451f0);
    /* 004451f0: movsx edx, word ptr [eax + 0x3a2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a2u));
    /* 004451f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004451f9: jne 0x445288 */ if (!fZ) goto L_00445288;
L_004451ff:; BB(0x004451ff);
    /* 004451ff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00445201: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_00445204:; BB(0x00445204);
    /* 00445204: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00445207: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00445208: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x44520du); f_0068d5a8();
    /* 0044520d: mov esi, eax */ r_esi = r_eax;
    /* 0044520f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445212: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445214: je 0x44524c */ if (fZ) goto L_0044524c;
L_00445216:; BB(0x00445216);
    /* 00445216: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00445218: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_0044521b:; BB(0x0044521b);
    /* 0044521b: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044521e: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 00445221: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445223: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00445226: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445228: lea edx, [ecx + eax + 0x4d0] */ r_edx = (u32)(r_ecx+r_eax+0x4d0u);
    /* 0044522f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00445230: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00445231: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x445236u); f_0078ea50();
    /* 00445236: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00445239: fcomp dword ptr [0x8fe808] */ fx_compare(ST(0), R_F32((u32)(0x8fe808u))); FPOP();
    /* 0044523f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00445241: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00445242: jbe 0x445297 */ if ((fC||fZ)) goto L_00445297;
L_00445244:; BB(0x00445244);
    /* 00445244: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00445247: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044524a: jl 0x44521b */ if ((fS!=fO)) goto L_0044521b;
L_0044524c:; BB(0x0044524c);
    /* 0044524c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0044524f: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00445252: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00445255: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00445258: jl 0x445204 */ if ((fS!=fO)) goto L_00445204;
L_0044525a:; BB(0x0044525a);
    /* 0044525a: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044525d: movsx edx, word ptr [eax + 0x344] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00445264: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00445267: mov word ptr [eax + 0x344], dx */ W16((u32)(r_eax+0x344u), (u16)r_edx);
    /* 0044526e: movsx ecx, dx */ r_ecx = (u32)(i32)(i16)(u16)r_edx;
    /* 00445271: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00445273: jg 0x444bd0 */ if ((!fZ&&fS==fO)) goto L_00444bd0;
L_00445279:; BB(0x00445279);
    /* 00445279: mov dword ptr [eax + 0x384], 5 */ W32((u32)(r_eax+0x384u), 0x5u);
    /* 00445283: jmp 0x444bd0 */ goto L_00444bd0;
L_00445288:; BB(0x00445288);
    /* 00445288: mov dword ptr [eax + 0x384], 5 */ W32((u32)(r_eax+0x384u), 0x5u);
    /* 00445292: jmp 0x444bd0 */ goto L_00444bd0;
L_00445297:; BB(0x00445297);
    /* 00445297: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0044529a: mov dword ptr [eax + 0x384], 5 */ W32((u32)(r_eax+0x384u), 0x5u);
    /* 004452a4: mov edx, 4 */ r_edx = 0x4u;
    /* 004452a9: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 004452ac: jmp 0x44524c */ goto L_0044524c;
L_004452ae:; BB(0x004452ae);
    /* 004452ae: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 004452b1: movsx edx, word ptr [eax + 0x3a2] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x3a2u));
    /* 004452b8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004452ba: je 0x4452c3 */ if (fZ) goto L_004452c3;
L_004452bc:; BB(0x004452bc);
    /* 004452bc: mov eax, 0x1555 */ r_eax = 0x1555u;
    /* 004452c1: jmp 0x4452e0 */ goto L_004452e0;
L_004452c3:; BB(0x004452c3);
    /* 004452c3: mov eax, dword ptr [0xa44c54] */ r_eax = R32((u32)(0xa44c54u));
    /* 004452c8: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 004452cb: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004452ce: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004452d0: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004452d2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004452d4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004452d6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004452d8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004452da: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004452dc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004452de: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_004452e0:; BB(0x004452e0);
    /* 004452e0: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004452e3: mov dword ptr [edx + 0x4cc], eax */ W32((u32)(r_edx+0x4ccu), r_eax);
    /* 004452e9: jmp 0x444ac9 */ goto L_00444ac9;
}

void f_00444d33(void)
{
    FN_ENTER(0x00444d33);
    /* 00444d33: mov edx, ecx */ r_edx = r_ecx;
    /* 00444d35: lea esi, [edx + 0x38] */ r_esi = (u32)(r_edx+0x38u);
    /* 00444d38: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00444d3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444d3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444d3c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00444d3d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00444d3e: push 0x350 */ { u32 v = 0x350u; r_esp -= 4; W32(r_esp, v); }
    /* 00444d43: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x444d48u); f_008144b0();
    /* 00444d48: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444d4b: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00444d50: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x444d55u); f_0082d990();
    /* 00444d55: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444d58: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 00444d5b: mov dword ptr [ebp - 0xac], 0x42180000 */ W32((u32)(r_ebp+0xffffff54u), 0x42180000u);
    /* 00444d65: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00444d67: mov dword ptr [ebp - 0xa8], 0x41f80000 */ W32((u32)(r_ebp+0xffffff58u), 0x41f80000u);
    /* 00444d71: mov dword ptr [ebp - 0xa4], 0 */ W32((u32)(r_ebp+0xffffff5cu), 0x0u);
    /* 00444d7b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x444d80u); f_0082d8bc();
    /* 00444d80: lea eax, [ebp - 0xa0] */ r_eax = (u32)(r_ebp+0xffffff60u);
    /* 00444d86: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444d87: lea edx, [ebp - 0xac] */ r_edx = (u32)(r_ebp+0xffffff54u);
    /* 00444d8d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00444d8f: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x444d94u); f_00830aa0();
    /* 00444d94: lea ecx, [ebp - 0xa0] */ r_ecx = (u32)(r_ebp+0xffffff60u);
    /* 00444d9a: mov edx, esi */ r_edx = r_esi;
    /* 00444d9c: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x444da1u); f_0082ebac();
    /* 00444da1: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x444da6u); f_0082da80();
    /* 00444da6: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444da9: mov ecx, dword ptr [eax + 0x480] */ r_ecx = R32((u32)(r_eax+0x480u));
    /* 00444daf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444db1: je 0x444dbf */ if (fZ) goto L_00444dbf;
L_00444db3:; BB(0x00444db3);
    /* 00444db3: lea eax, [ebp - 0xa0] */ r_eax = (u32)(r_ebp+0xffffff60u);
    /* 00444db9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444dba: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x444dbfu); f_00508db8();
L_00444dbf:; BB(0x00444dbf);
    /* 00444dbf: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444dc2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00444dc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444dc5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444dc6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00444dc7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00444dc8: push 0x354 */ { u32 v = 0x354u; r_esp -= 4; W32(r_esp, v); }
    /* 00444dcd: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x444dd2u); f_008144b0();
    /* 00444dd2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444dd5: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444dd8: movsx eax, word ptr [eax + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x344u));
    /* 00444ddf: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00444de2: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00444de5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00444de7: jle 0x4452f6 */ if ((fZ||fS!=fO)) goto L_004452f6;
L_00444ded:; BB(0x00444ded);
    /* 00444ded: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444df0: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
    /* 00444df7: jmp 0x444fb6 */ goto L_00444fb6;
L_00444fb6:; BB(0x00444fb6);
    /* 00444fb6: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00444fb9: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00444fbc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444fbf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00444fc6: mov esp, ebp */ r_esp = r_ebp;
    /* 00444fc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444fc9: mov esp, ebx */ r_esp = r_ebx;
    /* 00444fcb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00444fcc: ret  */ FN_RET(0x00444d33); r_esp += 4; return;
L_004452f6:; BB(0x004452f6);
    /* 004452f6: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004452f9: mov edx, dword ptr [edx + 0x480] */ r_edx = R32((u32)(r_edx+0x480u));
    /* 004452ff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00445301: je 0x445324 */ if (fZ) goto L_00445324;
L_00445303:; BB(0x00445303);
    /* 00445303: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00445306: mov word ptr [ecx + 0x344], ax */ W16((u32)(r_ecx+0x344u), (u16)r_eax);
    /* 0044530d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00445311: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00445316: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0044531a: mov dword ptr [ecx + 0x480], 0 */ W32((u32)(r_ecx+0x480u), 0x0u);
L_00445324:; BB(0x00445324);
    /* 00445324: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00445327: mov dword ptr [ecx + 0x384], 3 */ W32((u32)(r_ecx+0x384u), 0x3u);
    /* 00445331: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00445333: mov word ptr [ecx + 0x3a2], ax */ W16((u32)(r_ecx+0x3a2u), (u16)r_eax);
    /* 0044533a: mov edx, 0x12c */ r_edx = 0x12cu;
    /* 0044533f: mov word ptr [ecx + 0x344], dx */ W16((u32)(r_ecx+0x344u), (u16)r_edx);
    /* 00445346: jmp 0x444fb6 */ goto L_00444fb6;
}

void f_00444dfc(void)
{
    FN_ENTER(0x00444dfc);
    /* 00444dfc: mov edx, ecx */ r_edx = r_ecx;
    /* 00444dfe: lea esi, [edx + 0x38] */ r_esi = (u32)(r_edx+0x38u);
    /* 00444e01: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00444e03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444e04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444e05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00444e06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00444e07: push 0x350 */ { u32 v = 0x350u; r_esp -= 4; W32(r_esp, v); }
    /* 00444e0c: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x444e11u); f_008144b0();
    /* 00444e11: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444e14: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444e17: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x444e1cu); f_007aa094();
    /* 00444e1c: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444e1f: fld dword ptr [edx + 0xc0] */ FPUSH(R_F32((u32)(r_edx+0xc0u)));
    /* 00444e25: fcomp dword ptr [0x8fe814] */ fx_compare(ST(0), R_F32((u32)(0x8fe814u))); FPOP();
    /* 00444e2b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00444e2d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00444e2e: jb 0x444e7e */ if (fC) goto L_00444e7e;
L_00444e30:; BB(0x00444e30);
    /* 00444e30: mov ecx, edx */ r_ecx = r_edx;
    /* 00444e32: call 0x52cac0 */ r_esp -= 4; W32(r_esp, 0x444e37u); f_0052cac0();
    /* 00444e37: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444e3a: lea eax, [ebp - 0xb8] */ r_eax = (u32)(r_ebp+0xffffff48u);
    /* 00444e40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444e41: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00444e43: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 00444e45: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x444e4bu); call_ind(t); }
    /* 00444e4b: lea eax, [ebp - 0xb8] */ r_eax = (u32)(r_ebp+0xffffff48u);
    /* 00444e51: push 0x1a0 */ { u32 v = 0x1a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00444e56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444e57: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x444e5cu); f_00509590();
    /* 00444e5c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444e5f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444e62: mov dword ptr [edx + 0x384], 2 */ W32((u32)(r_edx+0x384u), 0x2u);
    /* 00444e6c: mov dword ptr [edx + 0x480], eax */ W32((u32)(r_edx+0x480u), r_eax);
    /* 00444e72: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00444e77: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
L_00444e7e:; BB(0x00444e7e);
    /* 00444e7e: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 00444e83: mov ecx, edx */ r_ecx = r_edx;
    /* 00444e85: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x444e8au); f_007aaa30();
    /* 00444e8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00444e8c: je 0x444fb6 */ if (fZ) goto L_00444fb6;
L_00444e92:; BB(0x00444e92);
    /* 00444e92: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00444e94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444e95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444e96: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00444e97: push 0x352 */ { u32 v = 0x352u; r_esp -= 4; W32(r_esp, v); }
    /* 00444e9c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x444ea1u); f_00814298();
    /* 00444ea1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00444ea4: jmp 0x444fb6 */ goto L_00444fb6;
L_00444fb6:; BB(0x00444fb6);
    /* 00444fb6: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00444fb9: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00444fbc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444fbf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00444fc6: mov esp, ebp */ r_esp = r_ebp;
    /* 00444fc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444fc9: mov esp, ebx */ r_esp = r_ebx;
    /* 00444fcb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00444fcc: ret  */ FN_RET(0x00444dfc); r_esp += 4; return;
}

void f_00444e41(void)
{
    FN_ENTER(0x00444e41);
    /* 00444e41: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00444e43: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 00444e45: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x444e4bu); call_ind(t); }
    /* 00444e4b: lea eax, [ebp - 0xb8] */ r_eax = (u32)(r_ebp+0xffffff48u);
    /* 00444e51: push 0x1a0 */ { u32 v = 0x1a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00444e56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444e57: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x444e5cu); f_00509590();
    /* 00444e5c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444e5f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444e62: mov dword ptr [edx + 0x384], 2 */ W32((u32)(r_edx+0x384u), 0x2u);
    /* 00444e6c: mov dword ptr [edx + 0x480], eax */ W32((u32)(r_edx+0x480u), r_eax);
    /* 00444e72: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00444e77: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
    /* 00444e7e: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 00444e83: mov ecx, edx */ r_ecx = r_edx;
    /* 00444e85: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x444e8au); f_007aaa30();
    /* 00444e8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00444e8c: je 0x444fb6 */ if (fZ) goto L_00444fb6;
L_00444e92:; BB(0x00444e92);
    /* 00444e92: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00444e94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444e95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444e96: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00444e97: push 0x352 */ { u32 v = 0x352u; r_esp -= 4; W32(r_esp, v); }
    /* 00444e9c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x444ea1u); f_00814298();
    /* 00444ea1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00444ea4: jmp 0x444fb6 */ goto L_00444fb6;
L_00444fb6:; BB(0x00444fb6);
    /* 00444fb6: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00444fb9: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00444fbc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444fbf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00444fc6: mov esp, ebp */ r_esp = r_ebp;
    /* 00444fc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444fc9: mov esp, ebx */ r_esp = r_ebx;
    /* 00444fcb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00444fcc: ret  */ FN_RET(0x00444e41); r_esp += 4; return;
}

void f_00444e45(void)
{
    FN_ENTER(0x00444e45);
    /* 00444e45: call dword ptr [edx + 0x10c] */ { u32 t = R32((u32)(r_edx+0x10cu)); r_esp -= 4; W32(r_esp, 0x444e4bu); call_ind(t); }
    /* 00444e4b: lea eax, [ebp - 0xb8] */ r_eax = (u32)(r_ebp+0xffffff48u);
    /* 00444e51: push 0x1a0 */ { u32 v = 0x1a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00444e56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444e57: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x444e5cu); f_00509590();
    /* 00444e5c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444e5f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444e62: mov dword ptr [edx + 0x384], 2 */ W32((u32)(r_edx+0x384u), 0x2u);
    /* 00444e6c: mov dword ptr [edx + 0x480], eax */ W32((u32)(r_edx+0x480u), r_eax);
    /* 00444e72: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00444e77: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
    /* 00444e7e: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 00444e83: mov ecx, edx */ r_ecx = r_edx;
    /* 00444e85: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x444e8au); f_007aaa30();
    /* 00444e8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00444e8c: je 0x444fb6 */ if (fZ) goto L_00444fb6;
L_00444e92:; BB(0x00444e92);
    /* 00444e92: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00444e94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444e95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444e96: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00444e97: push 0x352 */ { u32 v = 0x352u; r_esp -= 4; W32(r_esp, v); }
    /* 00444e9c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x444ea1u); f_00814298();
    /* 00444ea1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00444ea4: jmp 0x444fb6 */ goto L_00444fb6;
L_00444fb6:; BB(0x00444fb6);
    /* 00444fb6: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00444fb9: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00444fbc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444fbf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00444fc6: mov esp, ebp */ r_esp = r_ebp;
    /* 00444fc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444fc9: mov esp, ebx */ r_esp = r_ebx;
    /* 00444fcb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00444fcc: ret  */ FN_RET(0x00444e45); r_esp += 4; return;
}

void f_00444e49(void)
{
    FN_ENTER(0x00444e49);
    /* 00444e49: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00444e4b: lea eax, [ebp - 0xb8] */ r_eax = (u32)(r_ebp+0xffffff48u);
    /* 00444e51: push 0x1a0 */ { u32 v = 0x1a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00444e56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444e57: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x444e5cu); f_00509590();
    /* 00444e5c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444e5f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444e62: mov dword ptr [edx + 0x384], 2 */ W32((u32)(r_edx+0x384u), 0x2u);
    /* 00444e6c: mov dword ptr [edx + 0x480], eax */ W32((u32)(r_edx+0x480u), r_eax);
    /* 00444e72: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00444e77: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
    /* 00444e7e: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 00444e83: mov ecx, edx */ r_ecx = r_edx;
    /* 00444e85: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x444e8au); f_007aaa30();
    /* 00444e8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00444e8c: je 0x444fb6 */ if (fZ) goto L_00444fb6;
L_00444e92:; BB(0x00444e92);
    /* 00444e92: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00444e94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444e95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444e96: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00444e97: push 0x352 */ { u32 v = 0x352u; r_esp -= 4; W32(r_esp, v); }
    /* 00444e9c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x444ea1u); f_00814298();
    /* 00444ea1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00444ea4: jmp 0x444fb6 */ goto L_00444fb6;
L_00444fb6:; BB(0x00444fb6);
    /* 00444fb6: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00444fb9: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00444fbc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444fbf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00444fc6: mov esp, ebp */ r_esp = r_ebp;
    /* 00444fc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444fc9: mov esp, ebx */ r_esp = r_ebx;
    /* 00444fcb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00444fcc: ret  */ FN_RET(0x00444e49); r_esp += 4; return;
}

void f_00444e55(void)
{
    FN_ENTER(0x00444e55);
    /* 00444e55: add byte ptr [eax - 0x18], dl */ { u32 ad = (u32)(r_eax+0xffffffe8u);  u32 a = R8(ad); u32 b = (u8)r_edx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00444e58: xor al, 0x47 */ {  u32 a = (u8)r_eax; u32 b = 0x47u; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00444e5a: or al, 0 */ {  u32 a = (u8)r_eax; u32 b = 0x0u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00444e5c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00444e5f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444e62: mov dword ptr [edx + 0x384], 2 */ W32((u32)(r_edx+0x384u), 0x2u);
    /* 00444e6c: mov dword ptr [edx + 0x480], eax */ W32((u32)(r_edx+0x480u), r_eax);
    /* 00444e72: mov eax, 0x1e */ r_eax = 0x1eu;
    /* 00444e77: mov word ptr [edx + 0x344], ax */ W16((u32)(r_edx+0x344u), (u16)r_eax);
    /* 00444e7e: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 00444e83: mov ecx, edx */ r_ecx = r_edx;
    /* 00444e85: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x444e8au); f_007aaa30();
    /* 00444e8a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00444e8c: je 0x444fb6 */ if (fZ) goto L_00444fb6;
L_00444e92:; BB(0x00444e92);
    /* 00444e92: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00444e94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444e95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00444e96: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00444e97: push 0x352 */ { u32 v = 0x352u; r_esp -= 4; W32(r_esp, v); }
    /* 00444e9c: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x444ea1u); f_00814298();
    /* 00444ea1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00444ea4: jmp 0x444fb6 */ goto L_00444fb6;
L_00444fb6:; BB(0x00444fb6);
    /* 00444fb6: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00444fb9: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00444fbc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444fbf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00444fc6: mov esp, ebp */ r_esp = r_ebp;
    /* 00444fc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444fc9: mov esp, ebx */ r_esp = r_ebx;
    /* 00444fcb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00444fcc: ret  */ FN_RET(0x00444e55); r_esp += 4; return;
}

void f_00444ea9(void)
{
    FN_ENTER(0x00444ea9);
    /* 00444ea9: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x444eaeu); f_007aa094();
    /* 00444eae: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00444eb1: mov edx, dword ptr [edi + 0x38] */ r_edx = R32((u32)(r_edi+0x38u));
    /* 00444eb4: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 00444eb7: mov eax, 2 */ r_eax = 0x2u;
    /* 00444ebc: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00444ec3: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00444ec5: mov dword ptr [edi + 0x3e4], 0x42a00000 */ W32((u32)(r_edi+0x3e4u), 0x42a00000u);
    /* 00444ecf: mov word ptr [edi + 0x3a0], si */ W16((u32)(r_edi+0x3a0u), (u16)r_esi);
    /* 00444ed6: mov dword ptr [edi + 0x4c8], esi */ W32((u32)(r_edi+0x4c8u), r_esi);
    /* 00444edc: mov dword ptr [edi + 0x3e0], edx */ W32((u32)(r_edi+0x3e0u), r_edx);
    /* 00444ee2: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
    /* 00444eec: mov dword ptr [edi + 0x3e8], ecx */ W32((u32)(r_edi+0x3e8u), r_ecx);
    /* 00444ef2: mov dword ptr [edi + 0x514], esi */ W32((u32)(r_edi+0x514u), r_esi);
    /* 00444ef8: jmp 0x444fb6 */ goto L_00444fb6;
L_00444fb6:; BB(0x00444fb6);
    /* 00444fb6: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00444fb9: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00444fbc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444fbf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00444fc6: mov esp, ebp */ r_esp = r_ebp;
    /* 00444fc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444fc9: mov esp, ebx */ r_esp = r_ebx;
    /* 00444fcb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00444fcc: ret  */ FN_RET(0x00444ea9); r_esp += 4; return;
}

void f_00444efd(void)
{
    FN_ENTER(0x00444efd);
    /* 00444efd: mov eax, ecx */ r_eax = r_ecx;
    /* 00444eff: mov edx, dword ptr [eax + 0x500] */ r_edx = R32((u32)(r_eax+0x500u));
    /* 00444f05: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444f07: je 0x444f22 */ if (fZ) goto L_00444f22;
L_00444f09:; BB(0x00444f09);
    /* 00444f09: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00444f0d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00444f12: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00444f16: mov edx, ecx */ r_edx = r_ecx;
    /* 00444f18: mov dword ptr [edx + 0x500], 0 */ W32((u32)(r_edx+0x500u), 0x0u);
L_00444f22:; BB(0x00444f22);
    /* 00444f22: mov eax, ecx */ r_eax = r_ecx;
    /* 00444f24: mov edx, dword ptr [eax + 0x504] */ r_edx = R32((u32)(r_eax+0x504u));
    /* 00444f2a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444f2c: je 0x444f47 */ if (fZ) goto L_00444f47;
L_00444f2e:; BB(0x00444f2e);
    /* 00444f2e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00444f32: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00444f37: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00444f3b: mov edx, ecx */ r_edx = r_ecx;
    /* 00444f3d: mov dword ptr [edx + 0x504], 0 */ W32((u32)(r_edx+0x504u), 0x0u);
L_00444f47:; BB(0x00444f47);
    /* 00444f47: mov eax, ecx */ r_eax = r_ecx;
    /* 00444f49: mov edx, dword ptr [eax + 0x508] */ r_edx = R32((u32)(r_eax+0x508u));
    /* 00444f4f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444f51: je 0x444f6c */ if (fZ) goto L_00444f6c;
L_00444f53:; BB(0x00444f53);
    /* 00444f53: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00444f57: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00444f5c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00444f60: mov edx, ecx */ r_edx = r_ecx;
    /* 00444f62: mov dword ptr [edx + 0x508], 0 */ W32((u32)(r_edx+0x508u), 0x0u);
L_00444f6c:; BB(0x00444f6c);
    /* 00444f6c: mov eax, ecx */ r_eax = r_ecx;
    /* 00444f6e: mov edx, dword ptr [eax + 0x50c] */ r_edx = R32((u32)(r_eax+0x50cu));
    /* 00444f74: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00444f76: je 0x444f91 */ if (fZ) goto L_00444f91;
L_00444f78:; BB(0x00444f78);
    /* 00444f78: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00444f7c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00444f81: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00444f85: mov edx, ecx */ r_edx = r_ecx;
    /* 00444f87: mov dword ptr [edx + 0x50c], 0 */ W32((u32)(r_edx+0x50cu), 0x0u);
L_00444f91:; BB(0x00444f91);
    /* 00444f91: mov eax, ecx */ r_eax = r_ecx;
    /* 00444f93: mov edx, dword ptr [eax + 0x480] */ r_edx = R32((u32)(r_eax+0x480u));
    /* 00444f99: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00444f9b: je 0x444fb6 */ if (fZ) goto L_00444fb6;
L_00444f9d:; BB(0x00444f9d);
    /* 00444f9d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00444fa1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00444fa6: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00444faa: mov edx, ecx */ r_edx = r_ecx;
    /* 00444fac: mov dword ptr [edx + 0x480], 0 */ W32((u32)(r_edx+0x480u), 0x0u);
L_00444fb6:; BB(0x00444fb6);
    /* 00444fb6: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00444fb9: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00444fbc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00444fbf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00444fc6: mov esp, ebp */ r_esp = r_ebp;
    /* 00444fc8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00444fc9: mov esp, ebx */ r_esp = r_ebx;
    /* 00444fcb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00444fcc: ret  */ FN_RET(0x00444efd); r_esp += 4; return;
}

