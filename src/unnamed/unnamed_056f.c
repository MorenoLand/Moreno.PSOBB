#include "protos.h"

void f_0056f1d8(void) /* sub_56F1D8 */
{
    FN_ENTER(0x0056f1d8);
    /* 0056f1d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056f1d9: mov ebp, esp */ r_ebp = r_esp;
    /* 0056f1db: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056f1dd: push 0x8d6e50 */ { u32 v = 0x8d6e50u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f1e2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056f1e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056f1e9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0056f1f0: sub esp, 0x7c */ {  u32 a = r_esp; u32 b = 0x7cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056f1f3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0056f1f6: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0056f1f9: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 0056f1fc: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 0056f1ff: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0056f206: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0056f209: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0056f20c: je 0x56f4a5 */ if (fZ) goto L_0056f4a5;
L_0056f212:; BB(0x0056f212);
    /* 0056f212: mov eax, ecx */ r_eax = r_ecx;
    /* 0056f214: mov edx, dword ptr [eax + 0x3c0] */ r_edx = R32((u32)(r_eax+0x3c0u));
    /* 0056f21a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0056f21c: jle 0x56f4d9 */ if ((fZ||fS!=fO)) goto L_0056f4d9;
L_0056f222:; BB(0x0056f222);
    /* 0056f222: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056f225: mov ebx, dword ptr [eax + 0x3b0] */ r_ebx = R32((u32)(r_eax+0x3b0u));
    /* 0056f22b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f22d: jne 0x56f254 */ if (!fZ) goto L_0056f254;
L_0056f22f:; BB(0x0056f22f);
    /* 0056f22f: mov esi, eax */ r_esi = r_eax;
    /* 0056f231: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 0056f236: movsx ecx, word ptr [esi + 0x334] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi+0x334u));
    /* 0056f23d: movsx edi, word ptr [esi + 0x2bc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x2bcu));
    /* 0056f244: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056f246: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0056f249: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0056f24b: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056f24d: jle 0x56f27f */ if ((fZ||fS!=fO)) goto L_0056f27f;
L_0056f24f:; BB(0x0056f24f);
    /* 0056f24f: jmp 0x56f430 */ goto L_0056f430;
L_0056f254:; BB(0x0056f254);
    /* 0056f254: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f257: jne 0x56f429 */ if (!fZ) goto L_0056f429;
L_0056f25d:; BB(0x0056f25d);
    /* 0056f25d: movsx ecx, word ptr [eax + 0x334] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x334u));
    /* 0056f264: movsx edx, word ptr [eax + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x2bcu));
    /* 0056f26b: mov esi, edx */ r_esi = r_edx;
    /* 0056f26d: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0056f26f: shr esi, 0x1e */ { u32 c = (30u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0056f272: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0056f274: sar esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0056f277: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056f279: jg 0x56f430 */ if ((!fZ&&fS==fO)) goto L_0056f430;
L_0056f27f:; BB(0x0056f27f);
    /* 0056f27f: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056f282: jge 0x56f430 */ if ((fS==fO)) goto L_0056f430;
L_0056f288:; BB(0x0056f288);
    /* 0056f288: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056f28b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0056f28e: mov dword ptr [eax + 0x3b0], ebx */ W32((u32)(r_eax+0x3b0u), r_ebx);
    /* 0056f294: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f297: jne 0x56f2b4 */ if (!fZ) goto L_0056f2b4;
L_0056f299:; BB(0x0056f299);
    /* 0056f299: mov ecx, eax */ r_ecx = r_eax;
    /* 0056f29b: mov dword ptr [ecx + 0x394], 5 */ W32((u32)(r_ecx+0x394u), 0x5u);
    /* 0056f2a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056f2a7: mov edx, 5 */ r_edx = 0x5u;
    /* 0056f2ac: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0056f2af: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0056f2b2: jmp 0x56f2dc */ goto L_0056f2dc;
L_0056f2b4:; BB(0x0056f2b4);
    /* 0056f2b4: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f2b7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0056f2ba: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0056f2bd: jne 0x56f2dc */ if (!fZ) goto L_0056f2dc;
L_0056f2bf:; BB(0x0056f2bf);
    /* 0056f2bf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056f2c2: mov dword ptr [ecx + 0x394], 0xd */ W32((u32)(r_ecx+0x394u), 0xdu);
    /* 0056f2cc: mov eax, 5 */ r_eax = 0x5u;
    /* 0056f2d1: mov edx, 0xd */ r_edx = 0xdu;
    /* 0056f2d6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0056f2d9: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
L_0056f2dc:; BB(0x0056f2dc);
    /* 0056f2dc: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056f2df: call 0x52cac0 */ r_esp -= 4; W32(r_esp, 0x56f2e4u); f_0052cac0();
    /* 0056f2e4: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056f2e7: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056f2ea: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056f2ec: jge 0x56f4ca */ if ((fS==fO)) goto L_0056f4ca;
L_0056f2f2:; BB(0x0056f2f2);
    /* 0056f2f2: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056f2f5: movzx ebx, word ptr [ebx*2 + 0x9be8a8] */ r_ebx = (u32)R16((u32)(r_ebx*2+0x9be8a8u));
    /* 0056f2fd: movsx edx, word ptr [ebx*2 + 0x9be87c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx*2+0x9be87cu));
    /* 0056f305: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056f308: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 0056f30a: lea eax, [ebp - 0x88] */ r_eax = (u32)(r_ebp+0xffffff78u);
    /* 0056f310: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056f311: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f312: call dword ptr [esi + 0x10c] */ { u32 t = R32((u32)(r_esi+0x10cu)); r_esp -= 4; W32(r_esp, 0x56f318u); call_ind(t); }
    /* 0056f318: mov eax, 0x926660 */ r_eax = 0x926660u;
    /* 0056f31d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0056f31f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0056f322: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 0056f325: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 0056f328: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 0056f32b: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 0056f32e: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 0056f331: mov dword ptr [ebp - 0x74], esi */ W32((u32)(r_ebp+0xffffff8cu), r_esi);
    /* 0056f334: mov dword ptr [ebp - 0x70], edi */ W32((u32)(r_ebp+0xffffff90u), r_edi);
    /* 0056f337: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 0056f33a: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0056f33d: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 0056f340: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0056f343: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0056f346: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0056f349: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0056f34c: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 0056f34f: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 0056f352: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 0056f355: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0056f358: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0056f35b: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 0056f35e: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 0056f361: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0056f364: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0056f367: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 0056f36a: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0056f36d: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0056f370: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 0056f373: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 0056f376: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 0056f379: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0056f37c: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0056f37f: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0056f382: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 0056f385: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 0056f388: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 0056f38b: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0056f38e: mov eax, dword ptr [ebp - 0x88] */ r_eax = R32((u32)(r_ebp+0xffffff78u));
    /* 0056f394: mov edx, dword ptr [ebp - 0x84] */ r_edx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0056f39a: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0056f39d: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0056f3a0: mov edi, dword ptr [esi + 0x3c] */ r_edi = R32((u32)(r_esi+0x3cu));
    /* 0056f3a3: mov ebx, dword ptr [ebx*4 + 0xa73ea4] */ r_ebx = R32((u32)(r_ebx*4+0xa73ea4u));
    /* 0056f3aa: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0056f3b1: mov dword ptr [ebp - 0x70], eax */ W32((u32)(r_ebp+0xffffff90u), r_eax);
    /* 0056f3b4: mov eax, dword ptr [0xa73ed8] */ r_eax = R32((u32)(0xa73ed8u));
    /* 0056f3b9: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 0056f3bf: mov dword ptr [ebp - 0x6c], edx */ W32((u32)(r_ebp+0xffffff94u), r_edx);
    /* 0056f3c2: mov dword ptr [ebp - 0x68], ecx */ W32((u32)(r_ebp+0xffffff98u), r_ecx);
    /* 0056f3c5: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 0056f3c8: mov dword ptr [ebp - 0x3c], ebx */ W32((u32)(r_ebp+0xffffffc4u), r_ebx);
    /* 0056f3cb: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f3d0: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 0056f3d3: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0056f3d6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56f3dbu); f_005caba4();
    /* 0056f3db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056f3dc: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0056f3df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f3e1: je 0x56f409 */ if (fZ) goto L_0056f409;
L_0056f3e3:; BB(0x0056f3e3);
    /* 0056f3e3: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 0056f3ea: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056f3f1: lea edx, [ebp - 0x7c] */ r_edx = (u32)(r_ebp+0xffffff84u);
    /* 0056f3f4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f3f5: mov ecx, eax */ r_ecx = r_eax;
    /* 0056f3f7: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056f3fd: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x56f402u); f_006441f4();
    /* 0056f402: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_0056f409:; BB(0x0056f409);
    /* 0056f409: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056f410: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056f413: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056f416: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056f419: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0056f41c: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056f41e: jl 0x56f2f2 */ if ((fS!=fO)) goto L_0056f2f2;
L_0056f424:; BB(0x0056f424);
    /* 0056f424: jmp 0x56f4bc */ goto L_0056f4bc;
L_0056f429:; BB(0x0056f429);
    /* 0056f429: movsx ecx, word ptr [eax + 0x334] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x334u));
L_0056f430:; BB(0x0056f430);
    /* 0056f430: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056f433: push 0x134 */ { u32 v = 0x134u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f438: mov word ptr [eax + 0x346], cx */ W16((u32)(r_eax+0x346u), (u16)r_ecx);
    /* 0056f43f: mov ecx, eax */ r_ecx = r_eax;
    /* 0056f441: call 0x7879b8 */ r_esp -= 4; W32(r_esp, 0x56f446u); f_007879b8();
    /* 0056f446: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056f449: lea ebx, [edx + 0x38] */ r_ebx = (u32)(r_edx+0x38u);
    /* 0056f44c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0056f44e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f44f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f450: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f451: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056f452: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x56f457u); f_00814298();
    /* 0056f457: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056f45a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056f45d: mov ecx, dword ptr [eax + 0x390] */ r_ecx = R32((u32)(r_eax+0x390u));
    /* 0056f463: test ecx, 0x40000 */ {  u32 a = r_ecx; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f469: jne 0x56f498 */ if (!fZ) goto L_0056f498;
L_0056f46b:; BB(0x0056f46b);
    /* 0056f46b: movsx eax, word ptr [eax + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 0056f472: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f475: je 0x56f48a */ if (fZ) goto L_0056f48a;
L_0056f477:; BB(0x0056f477);
    /* 0056f477: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056f47a: mov dword ptr [edx + 0x37c], 4 */ W32((u32)(r_edx+0x37cu), 0x4u);
    /* 0056f484: mov dword ptr [edx + 0x388], eax */ W32((u32)(r_edx+0x388u), r_eax);
L_0056f48a:; BB(0x0056f48a);
    /* 0056f48a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056f48d: or ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056f490: mov dword ptr [eax + 0x390], ecx */ W32((u32)(r_eax+0x390u), r_ecx);
    /* 0056f496: jmp 0x56f4a5 */ goto L_0056f4a5;
L_0056f498:; BB(0x0056f498);
    /* 0056f498: mov edx, eax */ r_edx = r_eax;
    /* 0056f49a: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 0056f49d: and eax, 0xffdffdff */ {  u32 a = r_eax; u32 b = 0xffdffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056f4a2: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
L_0056f4a5:; BB(0x0056f4a5);
    /* 0056f4a5: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0056f4a8: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056f4ab: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056f4ae: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056f4b1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056f4b8: mov esp, ebp */ r_esp = r_ebp;
    /* 0056f4ba: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056f4bb: ret  */ FN_RET(0x0056f1d8); r_esp += 4; return;
L_0056f4bc:; BB(0x0056f4bc);
    /* 0056f4bc: mov eax, esi */ r_eax = r_esi;
    /* 0056f4be: movsx ecx, word ptr [eax + 0x334] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x334u));
    /* 0056f4c5: jmp 0x56f430 */ goto L_0056f430;
L_0056f4ca:; BB(0x0056f4ca);
    /* 0056f4ca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056f4cd: movsx ecx, word ptr [eax + 0x334] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x334u));
    /* 0056f4d4: jmp 0x56f430 */ goto L_0056f430;
L_0056f4d9:; BB(0x0056f4d9);
    /* 0056f4d9: mov dword ptr [ecx + 0x3c0], 0x3c */ W32((u32)(r_ecx+0x3c0u), 0x3cu);
    /* 0056f4e3: call 0x56f4f0 */ r_esp -= 4; W32(r_esp, 0x56f4e8u); f_0056f4f0();
    /* 0056f4e8: jmp 0x56f222 */ goto L_0056f222;
}

void f_0056f4f0(void) /* sub_56F4F0 */
{
    FN_ENTER(0x0056f4f0);
    /* 0056f4f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056f4f1: mov ebp, esp */ r_ebp = r_esp;
    /* 0056f4f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056f4f5: push 0x8d6eae */ { u32 v = 0x8d6eaeu; r_esp -= 4; W32(r_esp, v); }
    /* 0056f4fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056f500: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056f501: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0056f508: sub esp, 0x104 */ {  u32 a = r_esp; u32 b = 0x104u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056f50e: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0056f511: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0056f514: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0056f517: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0056f51a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0056f51c: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 0056f51f: fld dword ptr [0x9267fc] */ FPUSH(R_F32((u32)(0x9267fcu)));
    /* 0056f525: fadd dword ptr [ebx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x3cu));
    /* 0056f528: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 0056f52b: mov eax, 0x926780 */ r_eax = 0x926780u;
    /* 0056f530: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0056f532: mov dword ptr [ebp - 0x110], esi */ W32((u32)(r_ebp+0xfffffef0u), r_esi);
    /* 0056f538: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 0056f53b: mov dword ptr [ebp - 0x10c], esi */ W32((u32)(r_ebp+0xfffffef4u), r_esi);
    /* 0056f541: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 0056f544: mov dword ptr [ebp - 0x108], esi */ W32((u32)(r_ebp+0xfffffef8u), r_esi);
    /* 0056f54a: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 0056f54d: mov dword ptr [ebp - 0x104], esi */ W32((u32)(r_ebp+0xfffffefcu), r_esi);
    /* 0056f553: mov esi, dword ptr [eax + 0x10] */ r_esi = R32((u32)(r_eax+0x10u));
    /* 0056f556: mov dword ptr [ebp - 0x100], esi */ W32((u32)(r_ebp+0xffffff00u), r_esi);
    /* 0056f55c: mov esi, dword ptr [eax + 0x14] */ r_esi = R32((u32)(r_eax+0x14u));
    /* 0056f55f: mov dword ptr [ebp - 0xfc], esi */ W32((u32)(r_ebp+0xffffff04u), r_esi);
    /* 0056f565: mov esi, dword ptr [eax + 0x18] */ r_esi = R32((u32)(r_eax+0x18u));
    /* 0056f568: mov dword ptr [ebp - 0xf8], esi */ W32((u32)(r_ebp+0xffffff08u), r_esi);
    /* 0056f56e: mov esi, dword ptr [eax + 0x1c] */ r_esi = R32((u32)(r_eax+0x1cu));
    /* 0056f571: mov dword ptr [ebp - 0xf4], esi */ W32((u32)(r_ebp+0xffffff0cu), r_esi);
    /* 0056f577: mov esi, dword ptr [eax + 0x20] */ r_esi = R32((u32)(r_eax+0x20u));
    /* 0056f57a: mov dword ptr [ebp - 0xf0], esi */ W32((u32)(r_ebp+0xffffff10u), r_esi);
    /* 0056f580: mov esi, dword ptr [eax + 0x24] */ r_esi = R32((u32)(r_eax+0x24u));
    /* 0056f583: mov dword ptr [ebp - 0xec], esi */ W32((u32)(r_ebp+0xffffff14u), r_esi);
    /* 0056f589: mov esi, dword ptr [eax + 0x28] */ r_esi = R32((u32)(r_eax+0x28u));
    /* 0056f58c: mov dword ptr [ebp - 0xe8], esi */ W32((u32)(r_ebp+0xffffff18u), r_esi);
    /* 0056f592: mov esi, dword ptr [eax + 0x2c] */ r_esi = R32((u32)(r_eax+0x2cu));
    /* 0056f595: mov dword ptr [ebp - 0xe4], esi */ W32((u32)(r_ebp+0xffffff1cu), r_esi);
    /* 0056f59b: mov esi, dword ptr [eax + 0x30] */ r_esi = R32((u32)(r_eax+0x30u));
    /* 0056f59e: mov dword ptr [ebp - 0xe0], esi */ W32((u32)(r_ebp+0xffffff20u), r_esi);
    /* 0056f5a4: mov esi, dword ptr [eax + 0x34] */ r_esi = R32((u32)(r_eax+0x34u));
    /* 0056f5a7: mov dword ptr [ebp - 0xdc], esi */ W32((u32)(r_ebp+0xffffff24u), r_esi);
    /* 0056f5ad: mov esi, dword ptr [eax + 0x38] */ r_esi = R32((u32)(r_eax+0x38u));
    /* 0056f5b0: mov dword ptr [ebp - 0xd8], esi */ W32((u32)(r_ebp+0xffffff28u), r_esi);
    /* 0056f5b6: mov esi, dword ptr [eax + 0x3c] */ r_esi = R32((u32)(r_eax+0x3cu));
    /* 0056f5b9: mov dword ptr [ebp - 0xd4], esi */ W32((u32)(r_ebp+0xffffff2cu), r_esi);
    /* 0056f5bf: mov esi, dword ptr [eax + 0x40] */ r_esi = R32((u32)(r_eax+0x40u));
    /* 0056f5c2: mov dword ptr [ebp - 0xd0], esi */ W32((u32)(r_ebp+0xffffff30u), r_esi);
    /* 0056f5c8: mov esi, dword ptr [eax + 0x44] */ r_esi = R32((u32)(r_eax+0x44u));
    /* 0056f5cb: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 0056f5ce: mov dword ptr [ebp - 0xcc], esi */ W32((u32)(r_ebp+0xffffff34u), r_esi);
    /* 0056f5d4: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 0056f5da: mov edi, dword ptr [0xa73ed8] */ r_edi = R32((u32)(0xa73ed8u));
    /* 0056f5e0: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 0056f5e3: fst dword ptr [ebp - 0x100] */ W_F32((u32)(r_ebp+0xffffff00u), ST(0));
    /* 0056f5e9: mov dword ptr [ebp - 0x104], ecx */ W32((u32)(r_ebp+0xfffffefcu), r_ecx);
    /* 0056f5ef: mov dword ptr [ebp - 0xfc], edx */ W32((u32)(r_ebp+0xffffff04u), r_edx);
    /* 0056f5f5: mov dword ptr [ebp - 0xd8], esi */ W32((u32)(r_ebp+0xffffff28u), r_esi);
    /* 0056f5fb: mov esi, dword ptr [edi + 0x42c] */ r_esi = R32((u32)(r_edi+0x42cu));
    /* 0056f601: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 0056f604: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 0056f60a: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 0056f60d: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 0056f613: mov eax, 0x926720 */ r_eax = 0x926720u;
    /* 0056f618: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0056f61a: mov dword ptr [ebp - 0xc4], esi */ W32((u32)(r_ebp+0xffffff3cu), r_esi);
    /* 0056f620: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 0056f623: mov dword ptr [ebp - 0xc0], esi */ W32((u32)(r_ebp+0xffffff40u), r_esi);
    /* 0056f629: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 0056f62c: mov dword ptr [ebp - 0xbc], esi */ W32((u32)(r_ebp+0xffffff44u), r_esi);
    /* 0056f632: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 0056f635: mov dword ptr [ebp - 0xb8], esi */ W32((u32)(r_ebp+0xffffff48u), r_esi);
    /* 0056f63b: mov esi, dword ptr [eax + 0x10] */ r_esi = R32((u32)(r_eax+0x10u));
    /* 0056f63e: mov dword ptr [ebp - 0xb4], esi */ W32((u32)(r_ebp+0xffffff4cu), r_esi);
    /* 0056f644: mov esi, dword ptr [eax + 0x14] */ r_esi = R32((u32)(r_eax+0x14u));
    /* 0056f647: mov dword ptr [ebp - 0xb0], esi */ W32((u32)(r_ebp+0xffffff50u), r_esi);
    /* 0056f64d: mov esi, dword ptr [eax + 0x18] */ r_esi = R32((u32)(r_eax+0x18u));
    /* 0056f650: mov dword ptr [ebp - 0xac], esi */ W32((u32)(r_ebp+0xffffff54u), r_esi);
    /* 0056f656: mov esi, dword ptr [eax + 0x1c] */ r_esi = R32((u32)(r_eax+0x1cu));
    /* 0056f659: mov dword ptr [ebp - 0xa8], esi */ W32((u32)(r_ebp+0xffffff58u), r_esi);
    /* 0056f65f: mov esi, dword ptr [eax + 0x20] */ r_esi = R32((u32)(r_eax+0x20u));
    /* 0056f662: mov dword ptr [ebp - 0xa4], esi */ W32((u32)(r_ebp+0xffffff5cu), r_esi);
    /* 0056f668: mov esi, dword ptr [eax + 0x24] */ r_esi = R32((u32)(r_eax+0x24u));
    /* 0056f66b: mov dword ptr [ebp - 0xa0], esi */ W32((u32)(r_ebp+0xffffff60u), r_esi);
    /* 0056f671: mov esi, dword ptr [eax + 0x28] */ r_esi = R32((u32)(r_eax+0x28u));
    /* 0056f674: mov dword ptr [ebp - 0x9c], esi */ W32((u32)(r_ebp+0xffffff64u), r_esi);
    /* 0056f67a: mov esi, dword ptr [eax + 0x2c] */ r_esi = R32((u32)(r_eax+0x2cu));
    /* 0056f67d: mov dword ptr [ebp - 0x98], esi */ W32((u32)(r_ebp+0xffffff68u), r_esi);
    /* 0056f683: mov esi, dword ptr [eax + 0x30] */ r_esi = R32((u32)(r_eax+0x30u));
    /* 0056f686: mov dword ptr [ebp - 0x94], esi */ W32((u32)(r_ebp+0xffffff6cu), r_esi);
    /* 0056f68c: mov esi, dword ptr [eax + 0x34] */ r_esi = R32((u32)(r_eax+0x34u));
    /* 0056f68f: mov dword ptr [ebp - 0x90], esi */ W32((u32)(r_ebp+0xffffff70u), r_esi);
    /* 0056f695: mov esi, dword ptr [eax + 0x38] */ r_esi = R32((u32)(r_eax+0x38u));
    /* 0056f698: mov dword ptr [ebp - 0x8c], esi */ W32((u32)(r_ebp+0xffffff74u), r_esi);
    /* 0056f69e: mov esi, dword ptr [eax + 0x3c] */ r_esi = R32((u32)(r_eax+0x3cu));
    /* 0056f6a1: mov dword ptr [ebp - 0x88], esi */ W32((u32)(r_ebp+0xffffff78u), r_esi);
    /* 0056f6a7: mov esi, dword ptr [eax + 0x40] */ r_esi = R32((u32)(r_eax+0x40u));
    /* 0056f6aa: mov dword ptr [ebp - 0x84], esi */ W32((u32)(r_ebp+0xffffff7cu), r_esi);
    /* 0056f6b0: mov esi, dword ptr [eax + 0x44] */ r_esi = R32((u32)(r_eax+0x44u));
    /* 0056f6b3: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 0056f6b6: mov dword ptr [ebp - 0x80], esi */ W32((u32)(r_ebp+0xffffff80u), r_esi);
    /* 0056f6b9: mov dword ptr [ebp - 0x7c], eax */ W32((u32)(r_ebp+0xffffff84u), r_eax);
    /* 0056f6bc: mov edi, dword ptr [0xa73ed8] */ r_edi = R32((u32)(0xa73ed8u));
    /* 0056f6c2: mov esi, dword ptr [ebx + 0x3c] */ r_esi = R32((u32)(r_ebx+0x3cu));
    /* 0056f6c5: fst dword ptr [ebp - 0xb4] */ W_F32((u32)(r_ebp+0xffffff4cu), ST(0));
    /* 0056f6cb: mov dword ptr [ebp - 0xb8], ecx */ W32((u32)(r_ebp+0xffffff48u), r_ecx);
    /* 0056f6d1: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 0056f6d7: mov dword ptr [ebp - 0x8c], esi */ W32((u32)(r_ebp+0xffffff74u), r_esi);
    /* 0056f6dd: mov esi, dword ptr [edi + 0x42c] */ r_esi = R32((u32)(r_edi+0x42cu));
    /* 0056f6e3: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 0056f6e6: mov dword ptr [ebp - 0x84], eax */ W32((u32)(r_ebp+0xffffff7cu), r_eax);
    /* 0056f6ec: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 0056f6ef: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0056f6f2: mov eax, 0x9266c0 */ r_eax = 0x9266c0u;
    /* 0056f6f7: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0056f6f9: mov dword ptr [ebp - 0x78], esi */ W32((u32)(r_ebp+0xffffff88u), r_esi);
    /* 0056f6fc: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 0056f6ff: mov dword ptr [ebp - 0x74], esi */ W32((u32)(r_ebp+0xffffff8cu), r_esi);
    /* 0056f702: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 0056f705: mov dword ptr [ebp - 0x70], esi */ W32((u32)(r_ebp+0xffffff90u), r_esi);
    /* 0056f708: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 0056f70b: mov dword ptr [ebp - 0x6c], esi */ W32((u32)(r_ebp+0xffffff94u), r_esi);
    /* 0056f70e: mov esi, dword ptr [eax + 0x10] */ r_esi = R32((u32)(r_eax+0x10u));
    /* 0056f711: mov dword ptr [ebp - 0x68], esi */ W32((u32)(r_ebp+0xffffff98u), r_esi);
    /* 0056f714: mov esi, dword ptr [eax + 0x14] */ r_esi = R32((u32)(r_eax+0x14u));
    /* 0056f717: mov dword ptr [ebp - 0x64], esi */ W32((u32)(r_ebp+0xffffff9cu), r_esi);
    /* 0056f71a: mov esi, dword ptr [eax + 0x18] */ r_esi = R32((u32)(r_eax+0x18u));
    /* 0056f71d: mov dword ptr [ebp - 0x60], esi */ W32((u32)(r_ebp+0xffffffa0u), r_esi);
    /* 0056f720: mov esi, dword ptr [eax + 0x1c] */ r_esi = R32((u32)(r_eax+0x1cu));
    /* 0056f723: mov dword ptr [ebp - 0x5c], esi */ W32((u32)(r_ebp+0xffffffa4u), r_esi);
    /* 0056f726: mov esi, dword ptr [eax + 0x20] */ r_esi = R32((u32)(r_eax+0x20u));
    /* 0056f729: mov dword ptr [ebp - 0x58], esi */ W32((u32)(r_ebp+0xffffffa8u), r_esi);
    /* 0056f72c: mov esi, dword ptr [eax + 0x24] */ r_esi = R32((u32)(r_eax+0x24u));
    /* 0056f72f: mov dword ptr [ebp - 0x54], esi */ W32((u32)(r_ebp+0xffffffacu), r_esi);
    /* 0056f732: mov esi, dword ptr [eax + 0x28] */ r_esi = R32((u32)(r_eax+0x28u));
    /* 0056f735: mov dword ptr [ebp - 0x50], esi */ W32((u32)(r_ebp+0xffffffb0u), r_esi);
    /* 0056f738: mov esi, dword ptr [eax + 0x2c] */ r_esi = R32((u32)(r_eax+0x2cu));
    /* 0056f73b: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 0056f73e: mov esi, dword ptr [eax + 0x30] */ r_esi = R32((u32)(r_eax+0x30u));
    /* 0056f741: mov dword ptr [ebp - 0x48], esi */ W32((u32)(r_ebp+0xffffffb8u), r_esi);
    /* 0056f744: mov esi, dword ptr [eax + 0x34] */ r_esi = R32((u32)(r_eax+0x34u));
    /* 0056f747: mov dword ptr [ebp - 0x44], esi */ W32((u32)(r_ebp+0xffffffbcu), r_esi);
    /* 0056f74a: mov esi, dword ptr [eax + 0x38] */ r_esi = R32((u32)(r_eax+0x38u));
    /* 0056f74d: mov dword ptr [ebp - 0x40], esi */ W32((u32)(r_ebp+0xffffffc0u), r_esi);
    /* 0056f750: mov esi, dword ptr [eax + 0x3c] */ r_esi = R32((u32)(r_eax+0x3cu));
    /* 0056f753: mov dword ptr [ebp - 0x3c], esi */ W32((u32)(r_ebp+0xffffffc4u), r_esi);
    /* 0056f756: mov esi, dword ptr [eax + 0x40] */ r_esi = R32((u32)(r_eax+0x40u));
    /* 0056f759: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 0056f75c: mov esi, dword ptr [eax + 0x44] */ r_esi = R32((u32)(r_eax+0x44u));
    /* 0056f75f: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 0056f762: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 0056f765: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0056f768: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 0056f76b: fstp dword ptr [ebp - 0x68] */ W_F32((u32)(r_ebp+0xffffff98u), ST(0)); FPOP();
    /* 0056f76e: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 0056f771: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0056f778: mov dword ptr [ebp - 0x64], edx */ W32((u32)(r_ebp+0xffffff9cu), r_edx);
    /* 0056f77b: mov edx, dword ptr [0xa73ed8] */ r_edx = R32((u32)(0xa73ed8u));
    /* 0056f781: mov ebx, dword ptr [edx + 0x42c] */ r_ebx = R32((u32)(r_edx+0x42cu));
    /* 0056f787: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 0056f78a: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 0056f78d: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0056f790: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f795: mov esi, dword ptr [ebx + 0x2c] */ r_esi = R32((u32)(r_ebx+0x2cu));
    /* 0056f798: mov dword ptr [ebp - 0x34], esi */ W32((u32)(r_ebp+0xffffffccu), r_esi);
    /* 0056f79b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56f7a0u); f_005caba4();
    /* 0056f7a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056f7a1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0056f7a4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f7a6: je 0x56f7d2 */ if (fZ) goto L_0056f7d2;
L_0056f7a8:; BB(0x0056f7a8);
    /* 0056f7a8: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0056f7af: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056f7b6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0056f7b9: lea eax, [ebp - 0x110] */ r_eax = (u32)(r_ebp+0xfffffef0u);
    /* 0056f7bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056f7c0: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056f7c6: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x56f7cbu); f_006441f4();
    /* 0056f7cb: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0056f7d2:; BB(0x0056f7d2);
    /* 0056f7d2: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056f7d9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0056f7e0: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f7e5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56f7eau); f_005caba4();
    /* 0056f7ea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056f7eb: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0056f7ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f7f0: je 0x56f81c */ if (fZ) goto L_0056f81c;
L_0056f7f2:; BB(0x0056f7f2);
    /* 0056f7f2: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0056f7f9: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0056f800: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0056f803: lea eax, [ebp - 0xc4] */ r_eax = (u32)(r_ebp+0xffffff3cu);
    /* 0056f809: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056f80a: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056f810: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x56f815u); f_006441f4();
    /* 0056f815: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0056f81c:; BB(0x0056f81c);
    /* 0056f81c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056f823: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0056f82a: push 0x234 */ { u32 v = 0x234u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f82f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56f834u); f_005caba4();
    /* 0056f834: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056f835: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0056f838: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056f83a: je 0x56f863 */ if (fZ) goto L_0056f863;
L_0056f83c:; BB(0x0056f83c);
    /* 0056f83c: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 0056f843: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0056f84a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0056f84d: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 0056f850: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056f851: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056f857: call 0x6441f4 */ r_esp -= 4; W32(r_esp, 0x56f85cu); f_006441f4();
    /* 0056f85c: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_0056f863:; BB(0x0056f863);
    /* 0056f863: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056f866: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056f869: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056f86c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056f86f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056f876: mov esp, ebp */ r_esp = r_ebp;
    /* 0056f878: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056f879: ret  */ FN_RET(0x0056f4f0); r_esp += 4; return;
}

void f_0056f87c(void) /* sub_56F87C */
{
    FN_ENTER(0x0056f87c);
    /* 0056f87c: mov eax, dword ptr [ecx + 0x37c] */ r_eax = R32((u32)(r_ecx+0x37cu));
    /* 0056f882: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0056f885: je 0x56f888 */ if (fZ) goto L_0056f888;
L_0056f887:; BB(0x0056f887);
    /* 0056f887: ret  */ FN_RET(0x0056f87c); r_esp += 4; return;
L_0056f888:; BB(0x0056f888);
    /* 0056f888: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 0056f88e: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0056f891: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 0056f897: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056f899: jne 0x56f887 */ if (!fZ) goto L_0056f887;
L_0056f89b:; BB(0x0056f89b);
    /* 0056f89b: movsx eax, word ptr [ecx + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32eu));
    /* 0056f8a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056f8a4: je 0x56f887 */ if (fZ) goto L_0056f887;
L_0056f8a6:; BB(0x0056f8a6);
    /* 0056f8a6: mov dword ptr [ecx + 0x37c], 0 */ W32((u32)(r_ecx+0x37cu), 0x0u);
    /* 0056f8b0: mov dword ptr [ecx + 0x388], eax */ W32((u32)(r_ecx+0x388u), r_eax);
    /* 0056f8b6: ret  */ FN_RET(0x0056f87c); r_esp += 4; return;
}

void f_0056f8b8(void)
{
    FN_ENTER(0x0056f8b8);
    /* 0056f8b8: mov ecx, dword ptr [0xa73ed8] */ r_ecx = R32((u32)(0xa73ed8u));
    /* 0056f8be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f8c0: je 0x56f8d5 */ if (fZ) goto L_0056f8d5;
L_0056f8c2:; BB(0x0056f8c2);
    /* 0056f8c2: je 0x56f8cb */ if (fZ) goto L_0056f8cb;
L_0056f8c4:; BB(0x0056f8c4);
    /* 0056f8c4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f8c6: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x56f8cbu); f_004066a8();
L_0056f8cb:; BB(0x0056f8cb);
    /* 0056f8cb: mov dword ptr [0xa73ed8], 0 */ W32((u32)(0xa73ed8u), 0x0u);
L_0056f8d5:; BB(0x0056f8d5);
    /* 0056f8d5: mov ecx, dword ptr [0xa73eec] */ r_ecx = R32((u32)(0xa73eecu));
    /* 0056f8db: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056f8dd: je 0x56f8f1 */ if (fZ) goto L_0056f8f1;
L_0056f8df:; BB(0x0056f8df);
    /* 0056f8df: je 0x56f8e7 */ if (fZ) goto L_0056f8e7;
L_0056f8e1:; BB(0x0056f8e1);
    /* 0056f8e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f8e3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0056f8e5: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x56f8e7u); call_ind(t); }
L_0056f8e7:; BB(0x0056f8e7);
    /* 0056f8e7: mov dword ptr [0xa73eec], 0 */ W32((u32)(0xa73eecu), 0x0u);
L_0056f8f1:; BB(0x0056f8f1);
    /* 0056f8f1: ret  */ FN_RET(0x0056f8b8); r_esp += 4; return;
}

void f_0056f8f4(void)
{
    FN_ENTER(0x0056f8f4);
    /* 0056f8f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056f8f5: mov ebp, esp */ r_ebp = r_esp;
    /* 0056f8f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056f8f9: push 0x8d6f32 */ { u32 v = 0x8d6f32u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f8fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056f904: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056f905: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0056f90c: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056f90f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0056f912: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0056f915: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0056f918: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0056f91b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f91d: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0056f924: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56f929u); f_005caba4();
    /* 0056f929: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0056f92c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056f92f: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0056f932: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f934: je 0x56fbc4 */ if (fZ) goto L_0056fbc4;
L_0056f93a:; BB(0x0056f93a);
    /* 0056f93a: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0056f941: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056f948: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056f94e: mov ecx, eax */ r_ecx = r_eax;
    /* 0056f950: call 0x787a4c */ r_esp -= 4; W32(r_esp, 0x56f955u); f_00787a4c();
    /* 0056f955: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0056f95c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056f963: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0056f96a: push 0x464 */ { u32 v = 0x464u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f96f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x56f974u); f_005caba4();
    /* 0056f974: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0056f977: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056f97a: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0056f97d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056f97f: je 0x56fbbd */ if (fZ) goto L_0056fbbd;
L_0056f985:; BB(0x0056f985);
    /* 0056f985: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0056f98c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0056f993: mov ecx, eax */ r_ecx = r_eax;
    /* 0056f995: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056f998: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0056f99b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056f99c: call 0x52c3fc */ r_esp -= 4; W32(r_esp, 0x56f9a1u); f_0052c3fc();
    /* 0056f9a1: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0056f9a8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056f9ab: mov dword ptr [eax], 0xb05f80 */ W32((u32)(r_eax), 0xb05f80u);
    /* 0056f9b1: lea ecx, [eax + 0x3d8] */ r_ecx = (u32)(r_eax+0x3d8u);
    /* 0056f9b7: call 0x576a48 */ r_esp -= 4; W32(r_esp, 0x56f9bcu); f_00576a48();
    /* 0056f9bc: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0056f9c3: push 0x5770ec */ { u32 v = 0x5770ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0056f9c8: push 0x57713c */ { u32 v = 0x57713cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056f9cd: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056f9d0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0056f9d2: lea edx, [eax + 0x3f4] */ r_edx = (u32)(r_eax+0x3f4u);
    /* 0056f9d8: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056f9da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f9db: call 0x858736 */ r_esp -= 4; W32(r_esp, 0x56f9e0u); f_00858736();
    /* 0056f9e0: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0056f9e7: mov eax, dword ptr [0x9be814] */ r_eax = R32((u32)(0x9be814u));
    /* 0056f9ec: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056f9ef: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0056f9f2: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 0056f9f4: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0056f9f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056f9f8: call dword ptr [ebx + 0x14c] */ { u32 t = R32((u32)(r_ebx+0x14cu)); r_esp -= 4; W32(r_esp, 0x56f9feu); call_ind(t); }
    /* 0056f9fe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056fa01: mov esi, dword ptr [0xa73ed8] */ r_esi = R32((u32)(0xa73ed8u));
    /* 0056fa07: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fa09: mov eax, dword ptr [ecx + 0x38] */ r_eax = R32((u32)(r_ecx+0x38u));
    /* 0056fa0c: mov edx, dword ptr [ecx + 0x3c] */ r_edx = R32((u32)(r_ecx+0x3cu));
    /* 0056fa0f: mov ebx, dword ptr [ecx + 0x40] */ r_ebx = R32((u32)(r_ecx+0x40u));
    /* 0056fa12: push 0x9be834 */ { u32 v = 0x9be834u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fa17: mov dword ptr [ecx + 0x2a4], eax */ W32((u32)(r_ecx+0x2a4u), r_eax);
    /* 0056fa1d: mov dword ptr [ecx + 0x2a8], edx */ W32((u32)(r_ecx+0x2a8u), r_edx);
    /* 0056fa23: mov dword ptr [ecx + 0x2ac], ebx */ W32((u32)(r_ecx+0x2acu), r_ebx);
    /* 0056fa29: mov dword ptr [ecx + 0x298], eax */ W32((u32)(r_ecx+0x298u), r_eax);
    /* 0056fa2f: mov dword ptr [ecx + 0x29c], edx */ W32((u32)(r_ecx+0x29cu), r_edx);
    /* 0056fa35: mov dword ptr [ecx + 0x2a0], ebx */ W32((u32)(r_ecx+0x2a0u), r_ebx);
    /* 0056fa3b: mov edi, dword ptr [esi + 0x430] */ r_edi = R32((u32)(r_esi+0x430u));
    /* 0056fa41: mov dword ptr [ecx + 0xdc], edi */ W32((u32)(r_ecx+0xdcu), r_edi);
    /* 0056fa47: mov dword ptr [ecx + 0xd8], 0x9be740 */ W32((u32)(r_ecx+0xd8u), 0x9be740u);
    /* 0056fa51: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x56fa56u); f_007b9a88();
    /* 0056fa56: push dword ptr [0xa73ee0] */ { u32 v = R32((u32)(0xa73ee0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056fa5c: push dword ptr [0xa73ee4] */ { u32 v = R32((u32)(0xa73ee4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056fa62: push dword ptr [0xa73ee8] */ { u32 v = R32((u32)(0xa73ee8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056fa68: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056fa6b: mov dword ptr [ecx + 0x370], 0 */ W32((u32)(r_ecx+0x370u), 0x0u);
    /* 0056fa75: mov dword ptr [ecx + 0x358], 0x9be818 */ W32((u32)(r_ecx+0x358u), 0x9be818u);
    /* 0056fa7f: call 0x7868f8 */ r_esp -= 4; W32(r_esp, 0x56fa84u); f_007868f8();
    /* 0056fa84: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056fa87: call 0x56d5a4 */ r_esp -= 4; W32(r_esp, 0x56fa8cu); f_0056d5a4();
    /* 0056fa8c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056fa8f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056fa91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056fa92: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 0056fa99: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x56fa9eu); f_007aa4c8();
    /* 0056fa9e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056faa1: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 0056faa6: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0056faa8: movzx ebx, word ptr [ecx + 0xb8] */ r_ebx = (u32)R16((u32)(r_ecx+0xb8u));
    /* 0056faaf: movsx edi, word ptr [ecx + 0x2bc] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0x2bcu));
    /* 0056fab6: movzx esi, word ptr [ecx + 0x2be] */ r_esi = (u32)R16((u32)(r_ecx+0x2beu));
    /* 0056fabd: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0056fabf: mov word ptr [ecx + 0xb8], bx */ W16((u32)(r_ecx+0xb8u), (u16)r_ebx);
    /* 0056fac6: mov word ptr [ecx + 0x334], di */ W16((u32)(r_ecx+0x334u), (u16)r_edi);
    /* 0056facd: mov word ptr [ecx + 0x336], si */ W16((u32)(r_ecx+0x336u), (u16)r_esi);
    /* 0056fad4: mov word ptr [ecx + 0x346], di */ W16((u32)(r_ecx+0x346u), (u16)r_edi);
    /* 0056fadb: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 0056fade: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0056fae0: mov dword ptr [ecx + 0x3b8], edx */ W32((u32)(r_ecx+0x3b8u), r_edx);
    /* 0056fae6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056fae8: mov dword ptr [ecx + 0x394], eax */ W32((u32)(r_ecx+0x394u), r_eax);
    /* 0056faee: mov dword ptr [ecx + 0x3b0], eax */ W32((u32)(r_ecx+0x3b0u), r_eax);
    /* 0056faf4: mov dword ptr [ecx + 0x3b4], eax */ W32((u32)(r_ecx+0x3b4u), r_eax);
    /* 0056fafa: mov dword ptr [ecx + 0x3bc], eax */ W32((u32)(r_ecx+0x3bcu), r_eax);
    /* 0056fb00: mov dword ptr [ecx + 0x3c0], eax */ W32((u32)(r_ecx+0x3c0u), r_eax);
    /* 0056fb06: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x56fb0bu); f_00787550();
    /* 0056fb0b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056fb0e: mov eax, dword ptr [ecx + 0x2e8] */ r_eax = R32((u32)(r_ecx+0x2e8u));
    /* 0056fb14: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0056fb17: mov dword ptr [ecx + 0x2e8], eax */ W32((u32)(r_ecx+0x2e8u), r_eax);
    /* 0056fb1d: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x56fb22u); f_0078730c();
    /* 0056fb22: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056fb25: call 0x786bbc */ r_esp -= 4; W32(r_esp, 0x56fb2au); f_00786bbc();
    /* 0056fb2a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056fb2d: mov esi, dword ptr [0xa73ed8] */ r_esi = R32((u32)(0xa73ed8u));
    /* 0056fb33: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 0056fb36: or edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0056fb3c: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 0056fb3f: mov ecx, dword ptr [esi + 0x42c] */ r_ecx = R32((u32)(r_esi+0x42cu));
    /* 0056fb45: mov ebx, dword ptr [ecx + 0x38] */ r_ebx = R32((u32)(r_ecx+0x38u));
    /* 0056fb48: mov dword ptr [eax + 0x34], ebx */ W32((u32)(r_eax+0x34u), r_ebx);
    /* 0056fb4b: mov edi, dword ptr [esi + 0x42c] */ r_edi = R32((u32)(r_esi+0x42cu));
    /* 0056fb51: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 0056fb54: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0056fb57: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056fb5a: movsx eax, word ptr [eax + 0xa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xau));
    /* 0056fb5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056fb60: je 0x56fb6a */ if (fZ) goto L_0056fb6a;
L_0056fb62:; BB(0x0056fb62);
    /* 0056fb62: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056fb65: call 0x52ca40 */ r_esp -= 4; W32(r_esp, 0x56fb6au); f_0052ca40();
L_0056fb6a:; BB(0x0056fb6a);
    /* 0056fb6a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0056fb6c:; BB(0x0056fb6c);
    /* 0056fb6c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056fb6f: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 0056fb72: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0056fb74: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 0056fb77: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0056fb79: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0056fb7b: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0056fb7d: lea ecx, [edx + esi + 0x3f4] */ r_ecx = (u32)(r_edx+r_esi+0x3f4u);
    /* 0056fb84: call 0x57739c */ r_esp -= 4; W32(r_esp, 0x56fb89u); f_0057739c();
    /* 0056fb89: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0056fb8c: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056fb8f: jl 0x56fb6c */ if ((fS!=fO)) goto L_0056fb6c;
L_0056fb91:; BB(0x0056fb91);
    /* 0056fb91: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056fb94: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0056fb96: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x56fb9cu); call_ind(t); }
    /* 0056fb9c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0056fba3:; BB(0x0056fba3);
    /* 0056fba3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0056fba6: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0056fba9: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056fbac: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056fbaf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056fbb2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056fbb9: mov esp, ebp */ r_esp = r_ebp;
    /* 0056fbbb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056fbbc: ret  */ FN_RET(0x0056f8f4); r_esp += 4; return;
L_0056fbbd:; BB(0x0056fbbd);
    /* 0056fbbd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056fbbf: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0056fbc2: jmp 0x56fba3 */ goto L_0056fba3;
L_0056fbc4:; BB(0x0056fbc4);
    /* 0056fbc4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056fbc6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0056fbc9: jmp 0x56f95c */ f_0056f95c(); return;
}

void f_0056fc10(void)
{
    FN_ENTER(0x0056fc10);
    /* 0056fc10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056fc11: mov ebp, esp */ r_ebp = r_esp;
    /* 0056fc13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056fc15: push 0x8d6f72 */ { u32 v = 0x8d6f72u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fc1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056fc20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056fc21: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0056fc28: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056fc2b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0056fc2e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0056fc31: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0056fc34: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0056fc37: call 0x520e6c */ r_esp -= 4; W32(r_esp, 0x56fc3cu); f_00520e6c();
    /* 0056fc3c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056fc3e: je 0x56fc59 */ if (fZ) goto L_0056fc59;
L_0056fc40:; BB(0x0056fc40);
    /* 0056fc40: push 0x9269ac */ { u32 v = 0x9269acu; r_esp -= 4; W32(r_esp, v); }
    /* 0056fc45: push 0x9be804 */ { u32 v = 0x9be804u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fc4a: call 0x51f674 */ r_esp -= 4; W32(r_esp, 0x56fc4fu); f_0051f674();
    /* 0056fc4f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056fc52: mov dword ptr [0xa73ed8], eax */ W32((u32)(0xa73ed8u), r_eax);
    /* 0056fc57: jmp 0x56fcae */ goto L_0056fcae;
L_0056fc59:; BB(0x0056fc59);
    /* 0056fc59: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0056fc60: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fc65: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x56fc6au); f_008581c5();
    /* 0056fc6a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056fc6b: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0056fc6e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056fc70: je 0x56feef */ if (fZ) goto L_0056feef;
L_0056fc76:; BB(0x0056fc76);
    /* 0056fc76: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 0056fc7d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056fc84: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056fc87: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056fc89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056fc8a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056fc8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056fc8c: push 0x9be804 */ { u32 v = 0x9be804u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fc91: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fc93: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x56fc98u); f_005b7a84();
    /* 0056fc98: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 0056fc9b: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 0056fca2: mov dword ptr [0xa73ed8], eax */ W32((u32)(0xa73ed8u), r_eax);
    /* 0056fca7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_0056fcae:; BB(0x0056fcae);
    /* 0056fcae: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0056fcb0:; BB(0x0056fcb0);
    /* 0056fcb0: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0056fcb6: movsx eax, word ptr [ebx*2 + 0x9be87c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx*2+0x9be87cu));
    /* 0056fcbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056fcbf: push dword ptr [edx + 0x38] */ { u32 v = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056fcc2: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x56fcc7u); f_0078e934();
    /* 0056fcc7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056fcca: mov dword ptr [ebx*4 + 0xa73e00], eax */ W32((u32)(r_ebx*4+0xa73e00u), r_eax);
    /* 0056fcd1: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0056fcd4: cmp ebx, 0x16 */ {  u32 a = r_ebx; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056fcd7: jge 0x56fce0 */ if ((fS==fO)) goto L_0056fce0;
L_0056fcd9:; BB(0x0056fcd9);
    /* 0056fcd9: mov eax, dword ptr [0xa73ed8] */ r_eax = R32((u32)(0xa73ed8u));
    /* 0056fcde: jmp 0x56fcb0 */ goto L_0056fcb0;
L_0056fce0:; BB(0x0056fce0);
    /* 0056fce0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0056fce2:; BB(0x0056fce2);
    /* 0056fce2: mov eax, dword ptr [0xa73ed8] */ r_eax = R32((u32)(0xa73ed8u));
    /* 0056fce7: movsx edx, word ptr [ebx*2 + 0x9be87c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx*2+0x9be87cu));
    /* 0056fcef: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056fcf0: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 0056fcf6: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056fcf9: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x56fcfeu); f_0078e934();
    /* 0056fcfe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056fd01: mov dword ptr [ebx*4 + 0xa73ea4], eax */ W32((u32)(r_ebx*4+0xa73ea4u), r_eax);
    /* 0056fd08: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0056fd0b: cmp ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0056fd0e: jl 0x56fce2 */ if ((fS!=fO)) goto L_0056fce2;
L_0056fd10:; BB(0x0056fd10);
    /* 0056fd10: mov edx, dword ptr [0xa73ea4] */ r_edx = R32((u32)(0xa73ea4u));
    /* 0056fd16: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fd18: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056fd1a: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0056fd1d: mov ecx, dword ptr [0xa73ea8] */ r_ecx = R32((u32)(0xa73ea8u));
    /* 0056fd23: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 0056fd26: mov ebx, dword ptr [0xa73eac] */ r_ebx = R32((u32)(0xa73eacu));
    /* 0056fd2c: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 0056fd2f: mov esi, dword ptr [0xa73eb0] */ r_esi = R32((u32)(0xa73eb0u));
    /* 0056fd35: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 0056fd38: mov edi, dword ptr [0xa73eb4] */ r_edi = R32((u32)(0xa73eb4u));
    /* 0056fd3e: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 0056fd41: mov edx, dword ptr [0xa73eb8] */ r_edx = R32((u32)(0xa73eb8u));
    /* 0056fd47: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0056fd4a: mov edx, dword ptr [0xa73ebc] */ r_edx = R32((u32)(0xa73ebcu));
    /* 0056fd50: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0056fd53: mov edx, dword ptr [0xa73ec0] */ r_edx = R32((u32)(0xa73ec0u));
    /* 0056fd59: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0056fd5c: mov edx, dword ptr [0xa73ec4] */ r_edx = R32((u32)(0xa73ec4u));
    /* 0056fd62: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0056fd65: mov edx, dword ptr [0xa73ec8] */ r_edx = R32((u32)(0xa73ec8u));
    /* 0056fd6b: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0056fd6e: mov edx, dword ptr [0xa73ecc] */ r_edx = R32((u32)(0xa73eccu));
    /* 0056fd74: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0056fd77: mov edx, dword ptr [0xa73ed0] */ r_edx = R32((u32)(0xa73ed0u));
    /* 0056fd7d: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0056fd80: mov edx, dword ptr [0xa73ed4] */ r_edx = R32((u32)(0xa73ed4u));
    /* 0056fd86: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 0056fd89: mov eax, dword ptr [0xa73ed8] */ r_eax = R32((u32)(0xa73ed8u));
    /* 0056fd8e: mov eax, dword ptr [eax + 0x42c] */ r_eax = R32((u32)(r_eax+0x42cu));
    /* 0056fd94: push dword ptr [eax + 0x38] */ { u32 v = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056fd97: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x56fd9cu); f_0078e934();
    /* 0056fd9c: mov dword ptr [0xa73e58], eax */ W32((u32)(0xa73e58u), r_eax);
    /* 0056fda1: mov eax, dword ptr [0xa73ed8] */ r_eax = R32((u32)(0xa73ed8u));
    /* 0056fda6: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0056fda8: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 0056fdae: push dword ptr [edx + 0x38] */ { u32 v = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056fdb1: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x56fdb6u); f_0078e934();
    /* 0056fdb6: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0056fdbd: mov dword ptr [0xa73e5c], eax */ W32((u32)(0xa73e5cu), r_eax);
    /* 0056fdc2: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fdc4: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x56fdc9u); f_008581c5();
    /* 0056fdc9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0056fdcc: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0056fdcf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0056fdd1: je 0x56fee8 */ if (fZ) goto L_0056fee8;
L_0056fdd7:; BB(0x0056fdd7);
    /* 0056fdd7: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 0056fdde: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 0056fde5: mov ecx, dword ptr [0xa73ed8] */ r_ecx = R32((u32)(0xa73ed8u));
    /* 0056fdeb: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fded: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x56fdf2u); f_005b8638();
    /* 0056fdf2: push 0x42580000 */ { u32 v = 0x42580000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fdf7: mov edx, dword ptr [0xa73ed8] */ r_edx = R32((u32)(0xa73ed8u));
    /* 0056fdfd: mov ebx, dword ptr [edx + 0x42c] */ r_ebx = R32((u32)(r_edx+0x42cu));
    /* 0056fe03: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0056fe06: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe07: push dword ptr [ebx + 0x38] */ { u32 v = R32((u32)(r_ebx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056fe0a: call 0x511bb4 */ r_esp -= 4; W32(r_esp, 0x56fe0fu); f_00511bb4();
    /* 0056fe0f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0056fe12: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 0056fe19: mov dword ptr [0xa73eec], eax */ W32((u32)(0xa73eecu), r_eax);
    /* 0056fe1e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056fe25: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe27: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x56fe2cu); f_0077a684();
    /* 0056fe2c: mov dword ptr [0xa73ee8], eax */ W32((u32)(0xa73ee8u), r_eax);
    /* 0056fe31: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe33: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x56fe38u); f_0077a698();
    /* 0056fe38: mov dword ptr [0xa73ee4], eax */ W32((u32)(0xa73ee4u), r_eax);
    /* 0056fe3d: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe3f: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x56fe44u); f_0077a6b4();
    /* 0056fe44: mov dword ptr [0xa73ee0], eax */ W32((u32)(0xa73ee0u), r_eax);
    /* 0056fe49: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe4b: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x56fe50u); f_0077a6cc();
    /* 0056fe50: movzx edx, word ptr [0x9267d4] */ r_edx = (u32)R16((u32)(0x9267d4u));
    /* 0056fe57: movzx ecx, word ptr [0x9267d6] */ r_ecx = (u32)R16((u32)(0x9267d6u));
    /* 0056fe5e: movzx ebx, word ptr [0x9267d8] */ r_ebx = (u32)R16((u32)(0x9267d8u));
    /* 0056fe65: mov edi, dword ptr [0xa73ed8] */ r_edi = R32((u32)(0xa73ed8u));
    /* 0056fe6b: mov esi, dword ptr [edi + 0x430] */ r_esi = R32((u32)(r_edi+0x430u));
    /* 0056fe71: mov dword ptr [0xa73edc], eax */ W32((u32)(0xa73edcu), r_eax);
    /* 0056fe76: mov eax, dword ptr [0x9267d0] */ r_eax = R32((u32)(0x9267d0u));
    /* 0056fe7b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0056fe7e: mov word ptr [ebp - 0x24], dx */ W16((u32)(r_ebp+0xffffffdcu), (u16)r_edx);
    /* 0056fe82: mov edx, dword ptr [edi + 0x42c] */ r_edx = R32((u32)(r_edi+0x42cu));
    /* 0056fe88: mov word ptr [ebp - 0x22], cx */ W16((u32)(r_ebp+0xffffffdeu), (u16)r_ecx);
    /* 0056fe8c: mov word ptr [ebp - 0x20], bx */ W16((u32)(r_ebp+0xffffffe0u), (u16)r_ebx);
    /* 0056fe90: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 0056fe93: lea eax, [ebp - 0x2c] */ r_eax = (u32)(r_ebp+0xffffffd4u);
    /* 0056fe96: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe97: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe99: push 0x41900000 */ { u32 v = 0x41900000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fe9e: push dword ptr [edx + 0x3c] */ { u32 v = R32((u32)(r_edx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056fea1: push dword ptr [edx + 0x38] */ { u32 v = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056fea4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fea6: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x56feabu); f_00608470();
    /* 0056feab: mov eax, dword ptr [0xa73ed8] */ r_eax = R32((u32)(0xa73ed8u));
    /* 0056feb0: lea edx, [ebp - 0x2c] */ r_edx = (u32)(r_ebp+0xffffffd4u);
    /* 0056feb3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0056feb4: mov ecx, dword ptr [eax + 0x42c] */ r_ecx = R32((u32)(r_eax+0x42cu));
    /* 0056feba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0056febc: push 0x41900000 */ { u32 v = 0x41900000u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fec1: push dword ptr [ecx + 0x3c] */ { u32 v = R32((u32)(r_ecx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0056fec4: push dword ptr [ecx + 0x48] */ { u32 v = R32((u32)(r_ecx+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056fec7: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0056fec9: call 0x608470 */ r_esp -= 4; W32(r_esp, 0x56feceu); f_00608470();
    /* 0056fece: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0056fed1: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0056fed4: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0056fed7: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056feda: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056fedd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056fee4: mov esp, ebp */ r_esp = r_ebp;
    /* 0056fee6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056fee7: ret  */ FN_RET(0x0056fc10); r_esp += 4; return;
L_0056fee8:; BB(0x0056fee8);
    /* 0056fee8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056feea: jmp 0x56fe19 */ f_0056fe19(); return;
L_0056feef:; BB(0x0056feef);
    /* 0056feef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0056fef1: jmp 0x56fca2 */ f_0056fca2(); return;
}

void f_0056fef8(void) /* sub_56FEF8 */
{
    FN_ENTER(0x0056fef8);
    /* 0056fef8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056fef9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0056fefb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0056fefd: call 0x56ff1c */ r_esp -= 4; W32(r_esp, 0x56ff02u); f_0056ff1c();
    /* 0056ff02: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0056ff06: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0056ff08: jne 0x56ff0e */ if (!fZ) goto L_0056ff0e;
L_0056ff0a:; BB(0x0056ff0a);
    /* 0056ff0a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056ff0b: ret 4 */ FN_RET(0x0056fef8); r_esp += 8; return;
L_0056ff0e:; BB(0x0056ff0e);
    /* 0056ff0e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0056ff0f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x56ff14u); f_005c2f74();
    /* 0056ff14: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056ff15: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0056ff16: ret 4 */ FN_RET(0x0056fef8); r_esp += 8; return;
}

void f_0056ff1c(void) /* sub_56FF1C */
{
    FN_ENTER(0x0056ff1c);
    /* 0056ff1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056ff1d: mov ebp, esp */ r_ebp = r_esp;
    /* 0056ff1f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056ff21: push 0x8d6f8c */ { u32 v = 0x8d6f8cu; r_esp -= 4; W32(r_esp, v); }
    /* 0056ff26: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056ff2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056ff2d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0056ff34: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056ff37: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0056ff3a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0056ff3d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0056ff40: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0056ff43: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0056ff46: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056ff4d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056ff50: mov dword ptr [eax], 0xb06130 */ W32((u32)(r_eax), 0xb06130u);
    /* 0056ff56: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056ff57: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x56ff5cu); f_007b4e84();
    /* 0056ff5c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056ff5d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056ff60: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x56ff65u); f_007b9c8c();
    /* 0056ff65: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0056ff6c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056ff6f: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x56ff74u); f_007b4aec();
    /* 0056ff74: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0056ff77: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056ff7e: mov esp, ebp */ r_esp = r_ebp;
    /* 0056ff80: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0056ff81: ret  */ FN_RET(0x0056ff1c); r_esp += 4; return;
}

void f_0056ff84(void) /* sub_56FF84 */
{
    FN_ENTER(0x0056ff84);
    /* 0056ff84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0056ff85: mov ebp, esp */ r_ebp = r_esp;
    /* 0056ff87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0056ff89: push 0x8d6fa8 */ { u32 v = 0x8d6fa8u; r_esp -= 4; W32(r_esp, v); }
    /* 0056ff8e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0056ff94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0056ff95: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0056ff9c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0056ff9f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0056ffa2: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0056ffa5: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0056ffa8: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0056ffab: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0056ffae: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0056ffb4: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0056ffb7: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0056ffba: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0056ffbd: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0056ffc0: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0056ffc3: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0056ffc6: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0056ffc9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0056ffcc: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x56ffd1u); f_007b4b48();
    /* 0056ffd1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0056ffd8: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0056ffdb: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0056ffde: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0056ffe1: mov dword ptr [eax], 0xb06130 */ W32((u32)(r_eax), 0xb06130u);
    /* 0056ffe7: mov esi, dword ptr [ebx] */ r_esi = R32((u32)(r_ebx));
    /* 0056ffe9: mov dword ptr [eax + 0x38], esi */ W32((u32)(r_eax+0x38u), r_esi);
    /* 0056ffec: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 0056ffef: fadd dword ptr [0x926a00] */ ST(0) = ST(0) + R_F32((u32)(0x926a00u));
    /* 0056fff5: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 0056fff8: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 0056fffb: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 0056fffe: fstp dword ptr [eax + 0xe4] */ W_F32((u32)(r_eax+0xe4u), ST(0)); FPOP();
    /* 00570004: mov dword ptr [eax + 0x40], edi */ W32((u32)(r_eax+0x40u), r_edi);
    /* 00570007: mov dword ptr [eax + 0xe0], esi */ W32((u32)(r_eax+0xe0u), r_esi);
    /* 0057000d: mov dword ptr [eax + 0xe8], edi */ W32((u32)(r_eax+0xe8u), r_edi);
    /* 00570013: mov dword ptr [eax + 0xdc], ecx */ W32((u32)(r_eax+0xdcu), r_ecx);
    /* 00570019: mov ecx, dword ptr [0xa73ed8] */ r_ecx = R32((u32)(0xa73ed8u));
    /* 0057001f: mov edx, dword ptr [ecx + 0x42c] */ r_edx = R32((u32)(r_ecx+0x42cu));
    /* 00570025: mov edx, dword ptr [edx + 0x58] */ r_edx = R32((u32)(r_edx+0x58u));
    /* 00570028: mov dword ptr [eax + 0xc4], edx */ W32((u32)(r_eax+0xc4u), r_edx);
    /* 0057002e: mov edx, dword ptr [ecx + 0x42c] */ r_edx = R32((u32)(r_ecx+0x42cu));
    /* 00570034: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00570037: mov edx, dword ptr [edx + 0x5c] */ r_edx = R32((u32)(r_edx+0x5cu));
    /* 0057003a: mov dword ptr [eax + 0xc8], edx */ W32((u32)(r_eax+0xc8u), r_edx);
    /* 00570040: movzx edx, word ptr [ecx + 0x28] */ r_edx = (u32)R16((u32)(r_ecx+0x28u));
    /* 00570044: mov word ptr [eax + 0x28], dx */ W16((u32)(r_eax+0x28u), (u16)r_edx);
    /* 00570048: movzx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 0057004c: mov dword ptr [eax + 0xc0], 0xffffc000 */ W32((u32)(r_eax+0xc0u), 0xffffc000u);
    /* 00570056: mov word ptr [eax + 0xd8], dx */ W16((u32)(r_eax+0xd8u), (u16)r_edx);
    /* 0057005d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057005f: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00570062: add edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00570068: mov dword ptr [eax + 0xb8], ecx */ W32((u32)(r_eax+0xb8u), r_ecx);
    /* 0057006e: mov dword ptr [eax + 0xbc], edx */ W32((u32)(r_eax+0xbcu), r_edx);
    /* 00570074: mov dword ptr [eax + 0xcc], ecx */ W32((u32)(r_eax+0xccu), r_ecx);
    /* 0057007a: mov dword ptr [eax + 0xd0], ecx */ W32((u32)(r_eax+0xd0u), r_ecx);
    /* 00570080: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 00570085: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x57008au); f_0082d990();
    /* 0057008a: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0057008d: mov edx, dword ptr [eax + 0xbc] */ r_edx = R32((u32)(r_eax+0xbcu));
    /* 00570093: mov dword ptr [eax + 0xac], 0 */ W32((u32)(r_eax+0xacu), 0x0u);
    /* 0057009d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0057009f: mov dword ptr [eax + 0xb0], 0 */ W32((u32)(r_eax+0xb0u), 0x0u);
    /* 005700a9: mov dword ptr [eax + 0xb4], 0x3f000000 */ W32((u32)(r_eax+0xb4u), 0x3f000000u);
    /* 005700b3: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5700b8u); f_0082d8bc();
    /* 005700b8: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005700bb: add edx, 0xac */ {  u32 a = r_edx; u32 b = 0xacu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005700c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005700c2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005700c4: call 0x82eab8 */ r_esp -= 4; W32(r_esp, 0x5700c9u); f_0082eab8();
    /* 005700c9: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5700ceu); f_0082da80();
    /* 005700ce: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005700d1: mov dword ptr [ecx + 0xd4], 0 */ W32((u32)(r_ecx+0xd4u), 0x0u);
    /* 005700db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005700dd: push 0x9be8e4 */ { u32 v = 0x9be8e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005700e2: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x5700e7u); f_007b9a88();
    /* 005700e7: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 005700ea: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 005700ed: mov edx, dword ptr [eax + 0xa4] */ r_edx = R32((u32)(r_eax+0xa4u));
    /* 005700f3: mov dword ptr [edx + 0xc], 0x40400000 */ W32((u32)(r_edx+0xcu), 0x40400000u);
    /* 005700fa: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x5700ffu); f_007b4f54();
    /* 005700ff: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00570102: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00570105: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00570108: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0057010b: mov dword ptr [eax + 0xec], 0xf */ W32((u32)(r_eax+0xecu), 0xfu);
    /* 00570115: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00570118: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0057011f: mov esp, ebp */ r_esp = r_ebp;
    /* 00570121: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00570122: ret 0x10 */ FN_RET(0x0056ff84); r_esp += 20; return;
}

