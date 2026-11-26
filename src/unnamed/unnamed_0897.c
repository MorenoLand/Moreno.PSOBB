#include "protos.h"

void f_008970d5(void) /* sub_8970D5 */
{
    FN_ENTER(0x008970d5);
    /* 008970d5: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008970d8: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 008970da: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 008970dd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008970de: mov ebp, dword ptr [eax + 0x18] */ r_ebp = R32((u32)(r_eax+0x18u));
    /* 008970e1: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 008970e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008970e5: mov esi, dword ptr [edx + 0x105c] */ r_esi = R32((u32)(r_edx+0x105cu));
    /* 008970eb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008970ec: mov edi, dword ptr [edx + 0x1050] */ r_edi = R32((u32)(r_edx+0x1050u));
    /* 008970f2: imul esi, edi */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_edi; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008970f5: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008970f7: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008970f9: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 008970fd: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00897101: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00897105: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 00897109: jae 0x89720b */ if (!fC) goto L_0089720b;
L_0089710f:; BB(0x0089710f);
    /* 0089710f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
L_00897110:; BB(0x00897110);
    /* 00897110: mov edx, dword ptr [edx + 0x1058] */ r_edx = R32((u32)(r_edx+0x1058u));
    /* 00897116: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00897118: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0089711a: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089711c: mov ebx, eax */ r_ebx = r_eax;
    /* 0089711e: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00897122: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 00897126: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0089712a: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0089712e: jae 0x8971e6 */ if (!fC) goto L_008971e6;
L_00897134:; BB(0x00897134);
    /* 00897134: movzx ebp, byte ptr [ebx] */ r_ebp = (u32)R8((u32)(r_ebx));
    /* 00897137: movzx esi, byte ptr [ebx + 1] */ r_esi = (u32)R8((u32)(r_ebx+0x1u));
    /* 0089713b: movzx eax, byte ptr [edi + 1] */ r_eax = (u32)R8((u32)(r_edi+0x1u));
    /* 0089713f: movzx edi, byte ptr [edi] */ r_edi = (u32)R8((u32)(r_edi));
    /* 00897142: mov edx, eax */ r_edx = r_eax;
    /* 00897144: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00897146: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00897147: and edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00897149: mov ebx, ebp */ r_ebx = r_ebp;
    /* 0089714b: and ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0089714d: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089714f: mov ebx, edi */ r_ebx = r_edi;
    /* 00897151: and ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00897153: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00897155: mov ebx, esi */ r_ebx = r_esi;
    /* 00897157: and ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00897159: lea edx, [edx + ebx + 8] */ r_edx = (u32)(r_edx+r_ebx+0x8u);
    /* 0089715d: mov ecx, eax */ r_ecx = r_eax;
    /* 0089715f: and ecx, 0xffff00e3 */ {  u32 a = r_ecx; u32 b = 0xffff00e3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00897165: mov ebx, ebp */ r_ebx = r_ebp;
    /* 00897167: and ebx, 0xffff00e3 */ {  u32 a = r_ebx; u32 b = 0xffff00e3u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0089716d: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089716f: mov ebx, edi */ r_ebx = r_edi;
    /* 00897171: and ebx, 0xffff00e3 */ {  u32 a = r_ebx; u32 b = 0xffff00e3u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00897177: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00897179: mov ebx, esi */ r_ebx = r_esi;
    /* 0089717b: and ebx, 0xffff00e3 */ {  u32 a = r_ebx; u32 b = 0xffff00e3u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00897181: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00897184: lea ecx, [ecx + ebx + 0x42] */ r_ecx = (u32)(r_ecx+r_ebx+0x42u);
    /* 00897188: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0089718c: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0089718f: xor dl, cl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ecx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00897191: mov ecx, 0xe3 */ r_ecx = 0xe3u;
    /* 00897196: and ax, cx */ {  u32 a = (u16)r_eax; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00897199: and bp, cx */ {  u32 a = (u16)r_ebp; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu; r_ebp = (r_ebp & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0089719c: and di, cx */ {  u32 a = (u16)r_edi; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu; r_edi = (r_edi & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0089719f: and si, cx */ {  u32 a = (u16)r_esi; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu; r_esi = (r_esi & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008971a2: and dl, 0x1c */ {  u32 a = (u8)r_edx; u32 b = 0x1cu; u32 r = (a & b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008971a5: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008971a7: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008971a9: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 008971ad: lea eax, [eax + esi + 0x42] */ r_eax = (u32)(r_eax+r_esi+0x42u);
    /* 008971b1: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008971b4: xor dl, al */ {  u32 a = (u8)r_edx; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008971b6: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008971ba: inc dword ptr [esp + 0x10] */ { u32 ad = (u32)(r_esp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008971be: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008971bf: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008971c0: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008971c1: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008971c2: cmp ebx, dword ptr [esp + 0x24] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008971c6: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 008971c8: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 008971cc: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 008971d0: jb 0x897134 */ if (fC) goto L_00897134;
L_008971d6:; BB(0x008971d6);
    /* 008971d6: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 008971da: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 008971de: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 008971e2: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
L_008971e6:; BB(0x008971e6);
    /* 008971e6: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 008971e9: add ebp, dword ptr [edx + 0x1050] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx+0x1050u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008971ef: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 008971f1: mov edi, dword ptr [edx + 0x1050] */ r_edi = R32((u32)(r_edx+0x1050u));
    /* 008971f7: lea eax, [eax + edi*2] */ r_eax = (u32)(r_eax+r_edi*2);
    /* 008971fa: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008971fc: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 00897200: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00897204: jb 0x897110 */ if (fC) goto L_00897110;
L_0089720a:; BB(0x0089720a);
    /* 0089720a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0089720b:; BB(0x0089720b);
    /* 0089720b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089720c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089720d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0089720f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00897210: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00897213: ret  */ FN_RET(0x008970d5); r_esp += 4; return;
}

void f_00897214(void) /* sub_897214 */
{
    FN_ENTER(0x00897214);
    /* 00897214: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00897215: mov ebp, esp */ r_ebp = r_esp;
    /* 00897217: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089721a: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0089721d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089721e: mov ebx, dword ptr [eax + 0x18] */ r_ebx = R32((u32)(r_eax+0x18u));
    /* 00897221: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00897223: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00897226: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00897227: mov esi, dword ptr [eax + 0x105c] */ r_esi = R32((u32)(r_eax+0x105cu));
    /* 0089722d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089722e: mov edi, dword ptr [eax + 0x1050] */ r_edi = R32((u32)(r_eax+0x1050u));
    /* 00897234: imul esi, edi */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_edi; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00897237: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00897239: jmp 0x8972a1 */ goto L_008972a1;
L_0089723b:; BB(0x0089723b);
    /* 0089723b: mov eax, dword ptr [eax + 0x1058] */ r_eax = R32((u32)(r_eax+0x1058u));
    /* 00897241: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00897243: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00897245: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 00897248: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
    /* 0089724b: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089724d: jmp 0x897285 */ goto L_00897285;
L_0089724f:; BB(0x0089724f);
    /* 0089724f: movzx edi, byte ptr [edi + 1] */ r_edi = (u32)R8((u32)(r_edi+0x1u));
    /* 00897253: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00897256: movzx ebx, byte ptr [ebx + 1] */ r_ebx = (u32)R8((u32)(r_ebx+0x1u));
    /* 0089725a: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0089725c: mov ebx, dword ptr [ebp - 0xc] */ r_ebx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0089725f: movzx ebx, byte ptr [ebx] */ r_ebx = (u32)R8((u32)(r_ebx));
    /* 00897262: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00897264: mov ebx, dword ptr [ebp - 4] */ r_ebx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00897267: movzx ebx, byte ptr [ebx] */ r_ebx = (u32)R8((u32)(r_ebx));
    /* 0089726a: add dword ptr [ebp - 4], 2 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089726e: lea ebx, [edi + ebx + 2] */ r_ebx = (u32)(r_edi+r_ebx+0x2u);
    /* 00897272: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
    /* 00897275: shr ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00897278: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089727b: mov byte ptr [edi], bl */ W8((u32)(r_edi), (u8)r_ebx);
    /* 0089727d: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 00897280: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00897281: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00897282: cmp dword ptr [ebp - 4], eax */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
L_00897285:; BB(0x00897285);
    /* 00897285: mov dword ptr [ebp - 0xc], edi */ W32((u32)(r_ebp+0xfffffff4u), r_edi);
    /* 00897288: jb 0x89724f */ if (fC) goto L_0089724f;
L_0089728a:; BB(0x0089728a);
    /* 0089728a: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0089728d: mov ebx, dword ptr [ebp - 0x10] */ r_ebx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00897290: add ebx, dword ptr [eax + 0x1050] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x1050u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00897296: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00897298: mov edi, dword ptr [eax + 0x1050] */ r_edi = R32((u32)(r_eax+0x1050u));
    /* 0089729e: lea edx, [edx + edi*2] */ r_edx = (u32)(r_edx+r_edi*2);
L_008972a1:; BB(0x008972a1);
    /* 008972a1: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008972a3: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 008972a6: jb 0x89723b */ if (fC) goto L_0089723b;
L_008972a8:; BB(0x008972a8);
    /* 008972a8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008972a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008972aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008972ac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008972ad: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008972ae: ret  */ FN_RET(0x00897214); r_esp += 4; return;
}

void f_008972af(void) /* sub_8972AF */
{
    FN_ENTER(0x008972af);
    /* 008972af: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008972b2: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 008972b4: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 008972b7: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 008972ba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008972bb: mov ebp, dword ptr [edx + 0x1050] */ r_ebp = R32((u32)(r_edx+0x1050u));
    /* 008972c1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008972c2: mov edi, dword ptr [edx + 0x105c] */ r_edi = R32((u32)(r_edx+0x105cu));
    /* 008972c8: imul edi, ebp */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_ebp; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008972cb: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 008972cf: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 008972d2: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008972d4: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008972d6: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 008972da: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 008972de: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 008972e2: jae 0x8973f3 */ if (!fC) goto L_008973f3;
L_008972e8:; BB(0x008972e8);
    /* 008972e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008972e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008972ea: mov esi, 0xff1c */ r_esi = 0xff1cu;
L_008972ef:; BB(0x008972ef);
    /* 008972ef: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 008972f3: mov edx, dword ptr [edx + 0x1058] */ r_edx = R32((u32)(r_edx+0x1058u));
    /* 008972f9: lea edx, [eax + edx*2] */ r_edx = (u32)(r_eax+r_edx*2);
    /* 008972fc: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00897300: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00897302: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00897304: mov ebx, eax */ r_ebx = r_eax;
    /* 00897306: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0089730a: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0089730e: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 00897312: jae 0x8973cd */ if (!fC) goto L_008973cd;
L_00897318:; BB(0x00897318);
    /* 00897318: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 0089731b: movzx edi, word ptr [ebx + 2] */ r_edi = (u32)R16((u32)(r_ebx+0x2u));
    /* 0089731f: movzx eax, word ptr [ebp + 2] */ r_eax = (u32)R16((u32)(r_ebp+0x2u));
    /* 00897323: movzx ebp, word ptr [ebp] */ r_ebp = (u32)R16((u32)(r_ebp));
    /* 00897327: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0089732b: mov ebx, eax */ r_ebx = r_eax;
    /* 0089732d: mov ecx, 0xe3 */ r_ecx = 0xe3u;
    /* 00897332: and bx, cx */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00897335: and dx, cx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00897338: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0089733a: mov edx, ebp */ r_edx = r_ebp;
    /* 0089733c: and dx, cx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0089733f: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00897341: mov edx, edi */ r_edx = r_edi;
    /* 00897343: and dx, cx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00897346: mov ecx, eax */ r_ecx = r_eax;
    /* 00897348: and cx, si */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_esi; u32 r = (a & b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0089734b: and eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0089734d: lea edx, [ebx + edx + 0x42] */ r_edx = (u32)(r_ebx+r_edx+0x42u);
    /* 00897351: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00897355: and bx, si */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_esi; u32 r = (a & b) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00897358: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0089735b: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089735d: mov ebx, ebp */ r_ebx = r_ebp;
    /* 0089735f: and bx, si */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_esi; u32 r = (a & b) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00897362: and ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00897364: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00897366: mov ebx, edi */ r_ebx = r_edi;
    /* 00897368: and bx, si */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_esi; u32 r = (a & b) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0089736b: and edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0089736d: lea ecx, [ecx + ebx + 0x208] */ r_ecx = (u32)(r_ecx+r_ebx+0x208u);
    /* 00897374: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 00897378: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0089737b: xor dl, cl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ecx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0089737d: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00897381: and ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00897383: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00897385: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00897387: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 0089738b: lea eax, [eax + edi + 0x208] */ r_eax = (u32)(r_eax+r_edi+0x208u);
    /* 00897392: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00897395: and edx, 0xffff00e3 */ {  u32 a = r_edx; u32 b = 0xffff00e3u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0089739b: xor edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0089739d: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008973a1: add dword ptr [esp + 0x10], 2 */ { u32 ad = (u32)(r_esp+0x10u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008973a6: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008973a9: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008973ac: cmp ebx, dword ptr [esp + 0x28] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008973b0: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 008973b3: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 008973b7: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 008973bb: jb 0x897318 */ if (fC) goto L_00897318;
L_008973c1:; BB(0x008973c1);
    /* 008973c1: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 008973c5: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 008973c9: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_008973cd:; BB(0x008973cd);
    /* 008973cd: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 008973d0: mov edx, dword ptr [edx + 0x1050] */ r_edx = R32((u32)(r_edx+0x1050u));
    /* 008973d6: add dword ptr [esp + 0x14], edx */ { u32 ad = (u32)(r_esp+0x14u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008973da: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 008973dc: mov ebp, dword ptr [edx + 0x1050] */ r_ebp = R32((u32)(r_edx+0x1050u));
    /* 008973e2: lea eax, [eax + ebp*2] */ r_eax = (u32)(r_eax+r_ebp*2);
    /* 008973e5: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008973e7: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 008973eb: jb 0x8972ef */ if (fC) goto L_008972ef;
L_008973f1:; BB(0x008973f1);
    /* 008973f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008973f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_008973f3:; BB(0x008973f3);
    /* 008973f3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008973f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008973f6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008973f7: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008973fa: ret  */ FN_RET(0x008972af); r_esp += 4; return;
}

void f_008973fb(void) /* sub_8973FB */
{
    FN_ENTER(0x008973fb);
    /* 008973fb: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008973fe: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00897401: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00897402: mov ebp, dword ptr [eax + 0x18] */ r_ebp = R32((u32)(r_eax+0x18u));
    /* 00897405: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00897407: mov edx, dword ptr [eax + 0x105c] */ r_edx = R32((u32)(r_eax+0x105cu));
    /* 0089740d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089740e: mov esi, dword ptr [eax + 0x18] */ r_esi = R32((u32)(r_eax+0x18u));
    /* 00897411: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00897412: mov edi, dword ptr [eax + 0x1050] */ r_edi = R32((u32)(r_eax+0x1050u));
    /* 00897418: imul edx, edi */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edi; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089741b: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089741d: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089741f: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 00897423: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00897427: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 0089742b: jae 0x897513 */ if (!fC) goto L_00897513;
L_00897431:; BB(0x00897431);
    /* 00897431: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
L_00897432:; BB(0x00897432);
    /* 00897432: mov eax, dword ptr [eax + 0x1058] */ r_eax = R32((u32)(r_eax+0x1058u));
    /* 00897438: lea eax, [esi + eax*2] */ r_eax = (u32)(r_esi+r_eax*2);
    /* 0089743b: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0089743d: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089743f: mov ebx, esi */ r_ebx = r_esi;
    /* 00897441: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00897445: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 00897449: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0089744d: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00897451: jae 0x8974f2 */ if (!fC) goto L_008974f2;
L_00897457:; BB(0x00897457);
    /* 00897457: movzx edx, word ptr [ebx + 2] */ r_edx = (u32)R16((u32)(r_ebx+0x2u));
    /* 0089745b: movzx eax, word ptr [edi + 2] */ r_eax = (u32)R16((u32)(r_edi+0x2u));
    /* 0089745f: movzx ebx, word ptr [ebx] */ r_ebx = (u32)R16((u32)(r_ebx));
    /* 00897462: movzx edi, word ptr [edi] */ r_edi = (u32)R16((u32)(r_edi));
    /* 00897465: mov ecx, eax */ r_ecx = r_eax;
    /* 00897467: mov ebp, ebx */ r_ebp = r_ebx;
    /* 00897469: and ebp, 0xffff00f0 */ {  u32 a = r_ebp; u32 b = 0xffff00f0u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0089746f: and ecx, 0xffff00f0 */ {  u32 a = r_ecx; u32 b = 0xffff00f0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00897475: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00897477: mov ebp, edi */ r_ebp = r_edi;
    /* 00897479: and ebp, 0xffff00f0 */ {  u32 a = r_ebp; u32 b = 0xffff00f0u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0089747f: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00897481: mov ebp, edx */ r_ebp = r_edx;
    /* 00897483: and ebp, 0xffff00f0 */ {  u32 a = r_ebp; u32 b = 0xffff00f0u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00897489: lea ebp, [ecx + ebp + 0x20] */ r_ebp = (u32)(r_ecx+r_ebp+0x20u);
    /* 0089748d: mov ecx, 0xf0f */ r_ecx = 0xf0fu;
    /* 00897492: and ax, cx */ {  u32 a = (u16)r_eax; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00897495: and bx, cx */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00897498: and di, cx */ {  u32 a = (u16)r_edi; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu; r_edi = (r_edi & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0089749b: and dx, cx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0089749e: shr ebp, 2 */ { u32 c = (2u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 008974a1: and ebp, 0xffff00f0 */ {  u32 a = r_ebp; u32 b = 0xffff00f0u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008974a7: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008974a9: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 008974ad: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008974af: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 008974b3: lea eax, [eax + edx + 0x202] */ r_eax = (u32)(r_eax+r_edx+0x202u);
    /* 008974ba: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008974bd: and ax, cx */ {  u32 a = (u16)r_eax; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008974c0: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008974c3: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008974c6: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 008974ca: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 008974ce: or ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 008974d0: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 008974d4: add dword ptr [esp + 0x10], 2 */ { u32 ad = (u32)(r_esp+0x10u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008974d9: cmp ebx, dword ptr [esp + 0x20] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008974dd: mov word ptr [eax], bp */ W16((u32)(r_eax), (u16)r_ebp);
    /* 008974e0: jb 0x897457 */ if (fC) goto L_00897457;
L_008974e6:; BB(0x008974e6);
    /* 008974e6: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 008974ea: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 008974ee: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
L_008974f2:; BB(0x008974f2);
    /* 008974f2: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 008974f5: add ebp, dword ptr [eax + 0x1050] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_eax+0x1050u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008974fb: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008974fd: mov edi, dword ptr [eax + 0x1050] */ r_edi = R32((u32)(r_eax+0x1050u));
    /* 00897503: lea esi, [esi + edi*2] */ r_esi = (u32)(r_esi+r_edi*2);
    /* 00897506: cmp esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00897508: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 0089750c: jb 0x897432 */ if (fC) goto L_00897432;
L_00897512:; BB(0x00897512);
    /* 00897512: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_00897513:; BB(0x00897513);
    /* 00897513: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00897514: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00897515: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00897517: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00897518: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0089751b: ret  */ FN_RET(0x008973fb); r_esp += 4; return;
}

void f_0089751c(void) /* sub_89751C */
{
    FN_ENTER(0x0089751c);
    /* 0089751c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089751f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00897521: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00897524: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 00897527: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00897528: mov ebp, dword ptr [edx + 0x1050] */ r_ebp = R32((u32)(r_edx+0x1050u));
    /* 0089752e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089752f: mov edi, dword ptr [edx + 0x105c] */ r_edi = R32((u32)(r_edx+0x105cu));
    /* 00897535: imul edi, ebp */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_ebp; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00897538: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0089753c: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 0089753f: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00897541: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00897543: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00897547: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0089754b: mov dword ptr [esp + 0x28], edi */ W32((u32)(r_esp+0x28u), r_edi);
    /* 0089754f: jae 0x897660 */ if (!fC) goto L_00897660;
L_00897555:; BB(0x00897555);
    /* 00897555: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00897556: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00897557: mov esi, 0xff00 */ r_esi = 0xff00u;
L_0089755c:; BB(0x0089755c);
    /* 0089755c: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 00897560: mov edx, dword ptr [edx + 0x1058] */ r_edx = R32((u32)(r_edx+0x1058u));
    /* 00897566: lea edx, [eax + edx*2] */ r_edx = (u32)(r_eax+r_edx*2);
    /* 00897569: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0089756d: add ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0089756f: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00897571: mov ebx, eax */ r_ebx = r_eax;
    /* 00897573: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00897577: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 0089757b: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0089757f: jae 0x89763a */ if (!fC) goto L_0089763a;
L_00897585:; BB(0x00897585);
    /* 00897585: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 00897588: movzx edi, word ptr [ebx + 2] */ r_edi = (u32)R16((u32)(r_ebx+0x2u));
    /* 0089758c: movzx eax, word ptr [ebp + 2] */ r_eax = (u32)R16((u32)(r_ebp+0x2u));
    /* 00897590: movzx ebp, word ptr [ebp] */ r_ebp = (u32)R16((u32)(r_ebp));
    /* 00897594: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00897598: mov ebx, eax */ r_ebx = r_eax;
    /* 0089759a: mov ecx, 0xff */ r_ecx = 0xffu;
    /* 0089759f: and bx, cx */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008975a2: and dx, cx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008975a5: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008975a7: mov edx, ebp */ r_edx = r_ebp;
    /* 008975a9: and dx, cx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008975ac: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008975ae: mov edx, edi */ r_edx = r_edi;
    /* 008975b0: and dx, cx */ {  u32 a = (u16)r_edx; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu; r_edx = (r_edx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008975b3: mov ecx, eax */ r_ecx = r_eax;
    /* 008975b5: and cx, si */ {  u32 a = (u16)r_ecx; u32 b = (u16)r_esi; u32 r = (a & b) & 0xffffu; r_ecx = (r_ecx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008975b8: and eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008975ba: lea edx, [ebx + edx + 2] */ r_edx = (u32)(r_ebx+r_edx+0x2u);
    /* 008975be: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 008975c2: and bx, si */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_esi; u32 r = (a & b) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008975c5: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008975c8: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008975ca: mov ebx, ebp */ r_ebx = r_ebp;
    /* 008975cc: and bx, si */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_esi; u32 r = (a & b) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008975cf: and ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008975d1: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008975d3: mov ebx, edi */ r_ebx = r_edi;
    /* 008975d5: and bx, si */ {  u32 a = (u16)r_ebx; u32 b = (u16)r_esi; u32 r = (a & b) & 0xffffu; r_ebx = (r_ebx & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 008975d8: and edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 008975da: lea ecx, [ecx + ebx + 0x200] */ r_ecx = (u32)(r_ecx+r_ebx+0x200u);
    /* 008975e1: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 008975e5: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008975e8: xor dl, cl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ecx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008975ea: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 008975ee: and ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008975f0: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008975f2: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008975f4: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 008975f8: lea eax, [eax + edi + 0x200] */ r_eax = (u32)(r_eax+r_edi+0x200u);
    /* 008975ff: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00897602: and edx, 0xffff00ff */ {  u32 a = r_edx; u32 b = 0xffff00ffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00897608: xor edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0089760a: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0089760e: add dword ptr [esp + 0x10], 2 */ { u32 ad = (u32)(r_esp+0x10u);  u32 a = R32(ad); u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00897613: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00897616: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00897619: cmp ebx, dword ptr [esp + 0x28] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089761d: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 00897620: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 00897624: mov dword ptr [esp + 0x20], ebp */ W32((u32)(r_esp+0x20u), r_ebp);
    /* 00897628: jb 0x897585 */ if (fC) goto L_00897585;
L_0089762e:; BB(0x0089762e);
    /* 0089762e: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00897632: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00897636: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
L_0089763a:; BB(0x0089763a);
    /* 0089763a: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0089763d: mov edx, dword ptr [edx + 0x1050] */ r_edx = R32((u32)(r_edx+0x1050u));
    /* 00897643: add dword ptr [esp + 0x14], edx */ { u32 ad = (u32)(r_esp+0x14u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00897647: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00897649: mov ebp, dword ptr [edx + 0x1050] */ r_ebp = R32((u32)(r_edx+0x1050u));
    /* 0089764f: lea eax, [eax + ebp*2] */ r_eax = (u32)(r_eax+r_ebp*2);
    /* 00897652: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00897654: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00897658: jb 0x89755c */ if (fC) goto L_0089755c;
L_0089765e:; BB(0x0089765e);
    /* 0089765e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0089765f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_00897660:; BB(0x00897660);
    /* 00897660: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00897661: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00897663: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00897664: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00897667: ret  */ FN_RET(0x0089751c); r_esp += 4; return;
}

void f_00897668(void) /* sub_897668 */
{
    FN_ENTER(0x00897668);
    /* 00897668: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0089766b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0089766d: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00897670: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00897671: mov ebp, dword ptr [eax + 0x18] */ r_ebp = R32((u32)(r_eax+0x18u));
    /* 00897674: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 00897677: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00897678: mov esi, dword ptr [edx + 0x105c] */ r_esi = R32((u32)(r_edx+0x105cu));
    /* 0089767e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0089767f: mov edi, dword ptr [edx + 0x1050] */ r_edi = R32((u32)(r_edx+0x1050u));
    /* 00897685: imul esi, edi */ { i64 t = (i64)(i32)r_esi * (i64)(i32)r_edi; r_esi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00897688: add esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0089768a: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089768c: mov dword ptr [esp + 0x24], ecx */ W32((u32)(r_esp+0x24u), r_ecx);
    /* 00897690: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00897694: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00897698: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 0089769c: jae 0x89779e */ if (!fC) goto L_0089779e;
L_008976a2:; BB(0x008976a2);
    /* 008976a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
L_008976a3:; BB(0x008976a3);
    /* 008976a3: mov edx, dword ptr [edx + 0x1058] */ r_edx = R32((u32)(r_edx+0x1058u));
    /* 008976a9: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008976ab: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008976ad: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008976af: mov ebx, eax */ r_ebx = r_eax;
    /* 008976b1: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 008976b5: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 008976b9: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 008976bd: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 008976c1: jae 0x897779 */ if (!fC) goto L_00897779;
L_008976c7:; BB(0x008976c7);
    /* 008976c7: movzx ebp, byte ptr [ebx] */ r_ebp = (u32)R8((u32)(r_ebx));
    /* 008976ca: movzx esi, byte ptr [ebx + 1] */ r_esi = (u32)R8((u32)(r_ebx+0x1u));
    /* 008976ce: movzx eax, byte ptr [edi + 1] */ r_eax = (u32)R8((u32)(r_edi+0x1u));
    /* 008976d2: movzx edi, byte ptr [edi] */ r_edi = (u32)R8((u32)(r_edi));
    /* 008976d5: mov edx, eax */ r_edx = r_eax;
    /* 008976d7: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 008976d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008976da: and edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 008976dc: mov ebx, ebp */ r_ebx = r_ebp;
    /* 008976de: and ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008976e0: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008976e2: mov ebx, edi */ r_ebx = r_edi;
    /* 008976e4: and ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008976e6: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008976e8: mov ebx, esi */ r_ebx = r_esi;
    /* 008976ea: and ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 008976ec: lea edx, [edx + ebx + 2] */ r_edx = (u32)(r_edx+r_ebx+0x2u);
    /* 008976f0: mov ecx, eax */ r_ecx = r_eax;
    /* 008976f2: and ecx, 0xffff00f0 */ {  u32 a = r_ecx; u32 b = 0xffff00f0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008976f8: mov ebx, ebp */ r_ebx = r_ebp;
    /* 008976fa: and ebx, 0xffff00f0 */ {  u32 a = r_ebx; u32 b = 0xffff00f0u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00897700: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00897702: mov ebx, edi */ r_ebx = r_edi;
    /* 00897704: and ebx, 0xffff00f0 */ {  u32 a = r_ebx; u32 b = 0xffff00f0u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0089770a: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089770c: mov ebx, esi */ r_ebx = r_esi;
    /* 0089770e: and ebx, 0xffff00f0 */ {  u32 a = r_ebx; u32 b = 0xffff00f0u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 00897714: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00897717: lea ecx, [ecx + ebx + 0x20] */ r_ecx = (u32)(r_ecx+r_ebx+0x20u);
    /* 0089771b: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0089771f: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00897722: xor dl, cl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_ecx; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00897724: mov ecx, 0xf0 */ r_ecx = 0xf0u;
    /* 00897729: and ax, cx */ {  u32 a = (u16)r_eax; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu; r_eax = (r_eax & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0089772c: and bp, cx */ {  u32 a = (u16)r_ebp; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu; r_ebp = (r_ebp & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 0089772f: and di, cx */ {  u32 a = (u16)r_edi; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu; r_edi = (r_edi & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00897732: and si, cx */ {  u32 a = (u16)r_esi; u32 b = (u16)r_ecx; u32 r = (a & b) & 0xffffu; r_esi = (r_esi & 0xffff0000u) | ((r) & 0xffffu);  }
    /* 00897735: and dl, 0xf */ {  u32 a = (u8)r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00897738: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089773a: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0089773c: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00897740: lea eax, [eax + esi + 0x20] */ r_eax = (u32)(r_eax+r_esi+0x20u);
    /* 00897744: shr eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00897747: xor dl, al */ {  u32 a = (u8)r_edx; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00897749: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0089774d: inc dword ptr [esp + 0x10] */ { u32 ad = (u32)(r_esp+0x10u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00897751: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00897752: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00897753: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00897754: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00897755: cmp ebx, dword ptr [esp + 0x24] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00897759: mov byte ptr [eax], dl */ W8((u32)(r_eax), (u8)r_edx);
    /* 0089775b: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 0089775f: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 00897763: jb 0x8976c7 */ if (fC) goto L_008976c7;
L_00897769:; BB(0x00897769);
    /* 00897769: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0089776d: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00897771: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00897775: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
L_00897779:; BB(0x00897779);
    /* 00897779: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0089777c: add ebp, dword ptr [edx + 0x1050] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edx+0x1050u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00897782: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00897784: mov edi, dword ptr [edx + 0x1050] */ r_edi = R32((u32)(r_edx+0x1050u));
    /* 0089778a: lea eax, [eax + edi*2] */ r_eax = (u32)(r_eax+r_edi*2);
    /* 0089778d: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0089778f: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 00897793: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 00897797: jb 0x8976a3 */ if (fC) goto L_008976a3;
L_0089779d:; BB(0x0089779d);
    /* 0089779d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_0089779e:; BB(0x0089779e);
    /* 0089779e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0089779f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008977a0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008977a2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008977a3: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008977a6: ret  */ FN_RET(0x00897668); r_esp += 4; return;
}

void f_008977a7(void) /* sub_8977A7 */
{
    FN_ENTER(0x008977a7);
    /* 008977a7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008977a8: mov ebp, esp */ r_ebp = r_esp;
    /* 008977aa: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008977ad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008977ae: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008977b0: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008977b3: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008977b5: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 008977b8: cmp edx, dword ptr [ecx + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008977bb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008977bc: mov dword ptr [ebp - 8], ebx */ W32((u32)(r_ebp+0xfffffff8u), r_ebx);
    /* 008977bf: je 0x8977cb */ if (fZ) goto L_008977cb;
L_008977c1:; BB(0x008977c1);
    /* 008977c1: mov eax, 0x80004005 */ r_eax = 0x80004005u;
    /* 008977c6: jmp 0x8978db */ goto L_008978db;
L_008977cb:; BB(0x008977cb);
    /* 008977cb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008977cc: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008977ce: cmp dword ptr [ecx + 0x10], esi */ {  u32 a = R32((u32)(r_ecx+0x10u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008977d1: jne 0x8978d5 */ if (!fZ) goto L_008978d5;
L_008977d7:; BB(0x008977d7);
    /* 008977d7: mov edx, dword ptr [eax + 0x1058] */ r_edx = R32((u32)(r_eax+0x1058u));
    /* 008977dd: cmp edx, dword ptr [ecx + 0x1058] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008977e3: jne 0x8978d5 */ if (!fZ) goto L_008978d5;
L_008977e9:; BB(0x008977e9);
    /* 008977e9: mov edx, dword ptr [eax + 0x105c] */ r_edx = R32((u32)(r_eax+0x105cu));
    /* 008977ef: cmp edx, dword ptr [ecx + 0x105c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x105cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008977f5: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 008977f8: jne 0x8978d5 */ if (!fZ) goto L_008978d5;
L_008977fe:; BB(0x008977fe);
    /* 008977fe: mov edx, dword ptr [eax + 0x1060] */ r_edx = R32((u32)(r_eax+0x1060u));
    /* 00897804: cmp edx, dword ptr [ecx + 0x1060] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1060u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0089780a: jne 0x8978d5 */ if (!fZ) goto L_008978d5;
L_00897810:; BB(0x00897810);
    /* 00897810: cmp dword ptr [eax + 0xc], esi */ {  u32 a = R32((u32)(r_eax+0xcu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00897813: jne 0x897821 */ if (!fZ) goto L_00897821;
L_00897815:; BB(0x00897815);
    /* 00897815: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00897817: call 0x896644 */ r_esp -= 4; W32(r_esp, 0x89781cu); f_00896644();
    /* 0089781c: jmp 0x8978da */ goto L_008978da;
L_00897821:; BB(0x00897821);
    /* 00897821: cmp dword ptr [eax + 0x14], esi */ {  u32 a = R32((u32)(r_eax+0x14u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00897824: je 0x89783f */ if (fZ) goto L_0089783f;
L_00897826:; BB(0x00897826);
    /* 00897826: lea esi, [eax + 0x30] */ r_esi = (u32)(r_eax+0x30u);
    /* 00897829: lea edi, [ecx + 0x30] */ r_edi = (u32)(r_ecx+0x30u);
    /* 0089782c: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089782e: je 0x89783f */ if (fZ) goto L_0089783f;
L_00897830:; BB(0x00897830);
    /* 00897830: mov ecx, 0x100 */ r_ecx = 0x100u;
    /* 00897835: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00897837: repe cmpsd dword ptr [esi], dword ptr es:[edi] */ while (r_ecx) { { u32 a = R32(r_esi); u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); } r_ecx--; if (!fZ) break; }
    /* 00897839: jne 0x8978d5 */ if (!fZ) goto L_008978d5;
L_0089783f:; BB(0x0089783f);
    /* 0089783f: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00897843: cmp dword ptr [eax + 0x1060], 0 */ {  u32 a = R32((u32)(r_eax+0x1060u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0089784a: jbe 0x8978d1 */ if ((fC||fZ)) goto L_008978d1;
L_00897850:; BB(0x00897850);
    /* 00897850: jmp 0x897855 */ goto L_00897855;
L_00897852:; BB(0x00897852);
    /* 00897852: mov ebx, dword ptr [ebp - 8] */ r_ebx = R32((u32)(r_ebp+0xfffffff8u));
L_00897855:; BB(0x00897855);
    /* 00897855: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00897857: mov ebx, dword ptr [ecx + 0x1054] */ r_ebx = R32((u32)(r_ecx+0x1054u));
    /* 0089785d: mov edx, dword ptr [eax + 0x1054] */ r_edx = R32((u32)(r_eax+0x1054u));
    /* 00897863: imul ebx, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00897867: imul edx, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0089786b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0089786e: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00897870: add edx, dword ptr [eax + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x18u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00897873: add ebx, dword ptr [ecx + 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0x18u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00897876: and dword ptr [ebp - 0xc], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0089787a: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0089787e: jbe 0x8978bd */ if ((fC||fZ)) goto L_008978bd;
L_00897880:; BB(0x00897880);
    /* 00897880: mov ecx, dword ptr [eax + 0x1064] */ r_ecx = R32((u32)(r_eax+0x1064u));
    /* 00897886: mov eax, ecx */ r_eax = r_ecx;
    /* 00897888: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0089788b: mov esi, ebx */ r_esi = r_ebx;
    /* 0089788d: mov edi, edx */ r_edi = r_edx;
    /* 0089788f: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00897891: mov ecx, eax */ r_ecx = r_eax;
    /* 00897893: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00897896: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00897898: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0089789b: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0089789e: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 008978a0: add ebx, dword ptr [ecx + 0x1050] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0x1050u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008978a6: add edx, dword ptr [eax + 0x1050] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x1050u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008978ac: mov ecx, dword ptr [eax + 0x105c] */ r_ecx = R32((u32)(r_eax+0x105cu));
    /* 008978b2: inc dword ptr [ebp - 0xc] */ { u32 ad = (u32)(r_ebp+0xfffffff4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008978b5: cmp dword ptr [ebp - 0xc], ecx */ {  u32 a = R32((u32)(r_ebp+0xfffffff4u)); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008978b8: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
    /* 008978bb: jb 0x897880 */ if (fC) goto L_00897880;
L_008978bd:; BB(0x008978bd);
    /* 008978bd: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008978c0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008978c3: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 008978c6: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008978c9: cmp ecx, dword ptr [eax + 0x1060] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x1060u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008978cf: jb 0x897852 */ if (fC) goto L_00897852;
L_008978d1:; BB(0x008978d1);
    /* 008978d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008978d3: jmp 0x8978da */ goto L_008978da;
L_008978d5:; BB(0x008978d5);
    /* 008978d5: mov eax, 0x80004005 */ r_eax = 0x80004005u;
L_008978da:; BB(0x008978da);
    /* 008978da: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008978db:; BB(0x008978db);
    /* 008978db: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008978dc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008978dd: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008978de: ret  */ FN_RET(0x008977a7); r_esp += 4; return;
}

void f_008979d0(void) /* sub_8979D0 */
{
    FN_ENTER(0x008979d0);
    /* 008979d0: mov eax, 0x8cb635 */ r_eax = 0x8cb635u;
    /* 008979d5: call 0x8cb064 */ r_esp -= 4; W32(r_esp, 0x8979dau); f_008cb064();
    /* 008979da: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008979dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008979de: mov esi, ecx */ r_esi = r_ecx;
    /* 008979e0: cmp byte ptr [esi + 8], 1 */ {  u32 a = R8((u32)(r_esi+0x8u)); u32 b = 0x1u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008979e4: je 0x8979f0 */ if (fZ) goto L_008979f0;
L_008979e6:; BB(0x008979e6);
    /* 008979e6: mov eax, 0x80004005 */ r_eax = 0x80004005u;
    /* 008979eb: jmp 0x897bc5 */ goto L_00897bc5;
L_008979f0:; BB(0x008979f0);
    /* 008979f0: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008979f3: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008979f5: mov edx, dword ptr [eax + 0x1058] */ r_edx = R32((u32)(r_eax+0x1058u));
    /* 008979fb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008979fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008979fd: mov edi, dword ptr [ecx + 0x1058] */ r_edi = R32((u32)(r_ecx+0x1058u));
    /* 00897a03: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00897a05: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00897a08: ja 0x897a0d */ if ((!fC&&!fZ)) goto L_00897a0d;
L_00897a0a:; BB(0x00897a0a);
    /* 00897a0a: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
L_00897a0d:; BB(0x00897a0d);
    /* 00897a0d: mov edx, dword ptr [eax + 0x105c] */ r_edx = R32((u32)(r_eax+0x105cu));
    /* 00897a13: mov edi, dword ptr [ecx + 0x105c] */ r_edi = R32((u32)(r_ecx+0x105cu));
    /* 00897a19: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00897a1b: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 00897a1e: jb 0x897a23 */ if (fC) goto L_00897a23;
L_00897a20:; BB(0x00897a20);
    /* 00897a20: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
L_00897a23:; BB(0x00897a23);
    /* 00897a23: mov eax, dword ptr [eax + 0x1060] */ r_eax = R32((u32)(r_eax+0x1060u));
    /* 00897a29: mov ecx, dword ptr [ecx + 0x1060] */ r_ecx = R32((u32)(r_ecx+0x1060u));
    /* 00897a2f: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00897a31: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00897a34: jb 0x897a39 */ if (fC) goto L_00897a39;
L_00897a36:; BB(0x00897a36);
    /* 00897a36: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
L_00897a39:; BB(0x00897a39);
    /* 00897a39: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00897a3c: shl edi, 4 */ { u32 c = (4u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00897a3f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00897a40: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x897a45u); f_008581c5();
    /* 00897a45: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00897a46: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00897a49: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00897a4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00897a4f: mov ebx, 0x88f917 */ r_ebx = 0x88f917u;
    /* 00897a54: je 0x897a6a */ if (fZ) goto L_00897a6a;
L_00897a56:; BB(0x00897a56);
    /* 00897a56: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00897a57: push dword ptr [ebp - 0x18] */ { u32 v = R32((u32)(r_ebp+0xffffffe8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00897a5a: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00897a5c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00897a5d: call 0x88fd17 */ r_esp -= 4; W32(r_esp, 0x897a62u); f_0088fd17();
    /* 00897a62: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00897a65: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00897a68: jmp 0x897a6e */ goto L_00897a6e;
L_00897a6a:; BB(0x00897a6a);
    /* 00897a6a: and dword ptr [ebp - 0x10], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00897a6e:; BB(0x00897a6e);
    /* 00897a6e: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00897a72: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00897a76: jne 0x897a82 */ if (!fZ) goto L_00897a82;
L_00897a78:; BB(0x00897a78);
    /* 00897a78: mov eax, 0x80004005 */ r_eax = 0x80004005u;
    /* 00897a7d: jmp 0x897bc3 */ goto L_00897bc3;
L_00897a82:; BB(0x00897a82);
    /* 00897a82: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00897a85: mov eax, dword ptr [eax + 0x1058] */ r_eax = R32((u32)(r_eax+0x1058u));
    /* 00897a8b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00897a8e: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00897a91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00897a92: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x897a97u); f_008581c5();
    /* 00897a97: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00897a98: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00897a9b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00897a9d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00897aa4: je 0x897aba */ if (fZ) goto L_00897aba;
L_00897aa6:; BB(0x00897aa6);
    /* 00897aa6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00897aa7: push dword ptr [ebp - 0x18] */ { u32 v = R32((u32)(r_ebp+0xffffffe8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00897aaa: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00897aac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00897aad: call 0x88fd17 */ r_esp -= 4; W32(r_esp, 0x897ab2u); f_0088fd17();
    /* 00897ab2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00897ab5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00897ab8: jmp 0x897abe */ goto L_00897abe;
L_00897aba:; BB(0x00897aba);
    /* 00897aba: and dword ptr [ebp - 0x18], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00897abe:; BB(0x00897abe);
    /* 00897abe: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00897ac2: cmp dword ptr [ebp - 0x18], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00897ac6: jne 0x897ada */ if (!fZ) goto L_00897ada;
L_00897ac8:; BB(0x00897ac8);
    /* 00897ac8: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00897acb: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x897ad0u); f_00857e98();
    /* 00897ad0: mov eax, 0x80004005 */ r_eax = 0x80004005u;
    /* 00897ad5: jmp 0x897bc2 */ goto L_00897bc2;
L_00897ada:; BB(0x00897ada);
    /* 00897ada: mov ecx, edi */ r_ecx = r_edi;
    /* 00897adc: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 00897adf: mov edx, ecx */ r_edx = r_ecx;
    /* 00897ae1: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00897ae4: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00897ae7: and dword ptr [ebp - 0x14], 0 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00897aeb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00897aed: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00897aef: mov ecx, edx */ r_ecx = r_edx;
    /* 00897af1: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00897af4: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00897af6: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00897af9: mov ecx, dword ptr [eax + 0x1058] */ r_ecx = R32((u32)(r_eax+0x1058u));
    /* 00897aff: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00897b02: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00897b05: mov edx, ecx */ r_edx = r_ecx;
    /* 00897b07: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00897b0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00897b0c: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00897b0e: mov ecx, edx */ r_ecx = r_edx;
    /* 00897b10: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00897b13: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00897b15: rep stosb byte ptr es:[edi], al */ while (r_ecx) { W8(r_edi, (u8)r_eax); r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00897b17: jbe 0x897b74 */ if ((fC||fZ)) goto L_00897b74;
L_00897b19:; BB(0x00897b19);
    /* 00897b19: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00897b1c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00897b1e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00897b20: jbe 0x897b44 */ if ((fC||fZ)) goto L_00897b44;
L_00897b22:; BB(0x00897b22);
    /* 00897b22: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00897b25: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00897b27: push dword ptr [ebp - 0x14] */ { u32 v = R32((u32)(r_ebp+0xffffffecu)); r_esp -= 4; W32(r_esp, v); }
    /* 00897b2a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00897b2c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00897b2d: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x897b30u); call_ind(t); }
    /* 00897b30: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00897b33: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00897b36: push dword ptr [ebp - 0x14] */ { u32 v = R32((u32)(r_ebp+0xffffffecu)); r_esp -= 4; W32(r_esp, v); }
    /* 00897b39: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00897b3b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00897b3c: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x897b3fu); call_ind(t); }
    /* 00897b3f: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00897b40: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00897b42: jb 0x897b22 */ if (fC) goto L_00897b22;
L_00897b44:; BB(0x00897b44);
    /* 00897b44: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00897b47: cmp ebx, dword ptr [ecx + 0x105c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0x105cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00897b4d: mov edi, ebx */ r_edi = r_ebx;
    /* 00897b4f: jae 0x897b69 */ if (!fC) goto L_00897b69;
L_00897b51:; BB(0x00897b51);
    /* 00897b51: push dword ptr [ebp - 0x18] */ { u32 v = R32((u32)(r_ebp+0xffffffe8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00897b54: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00897b56: push dword ptr [ebp - 0x14] */ { u32 v = R32((u32)(r_ebp+0xffffffecu)); r_esp -= 4; W32(r_esp, v); }
    /* 00897b59: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00897b5a: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x897b5du); call_ind(t); }
    /* 00897b5d: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00897b60: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00897b61: cmp edi, dword ptr [ecx + 0x105c] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+0x105cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00897b67: jb 0x897b51 */ if (fC) goto L_00897b51;
L_00897b69:; BB(0x00897b69);
    /* 00897b69: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00897b6c: inc dword ptr [ebp - 0x14] */ { u32 ad = (u32)(r_ebp+0xffffffecu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00897b6f: cmp dword ptr [ebp - 0x14], ebx */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00897b72: jb 0x897b19 */ if (fC) goto L_00897b19;
L_00897b74:; BB(0x00897b74);
    /* 00897b74: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00897b77: cmp ebx, dword ptr [ecx + 0x1060] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0x1060u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00897b7d: jae 0x897baf */ if (!fC) goto L_00897baf;
L_00897b7f:; BB(0x00897b7f);
    /* 00897b7f: mov eax, dword ptr [ecx + 0x105c] */ r_eax = R32((u32)(r_ecx+0x105cu));
L_00897b85:; BB(0x00897b85);
    /* 00897b85: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00897b87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00897b89: jbe 0x897ba3 */ if ((fC||fZ)) goto L_00897ba3;
L_00897b8b:; BB(0x00897b8b);
    /* 00897b8b: push dword ptr [ebp - 0x18] */ { u32 v = R32((u32)(r_ebp+0xffffffe8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00897b8e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00897b90: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00897b91: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00897b92: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x897b95u); call_ind(t); }
    /* 00897b95: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00897b98: mov eax, dword ptr [ecx + 0x105c] */ r_eax = R32((u32)(r_ecx+0x105cu));
    /* 00897b9e: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00897b9f: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00897ba1: jb 0x897b8b */ if (fC) goto L_00897b8b;
L_00897ba3:; BB(0x00897ba3);
    /* 00897ba3: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00897ba6: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00897ba7: cmp ebx, dword ptr [ecx + 0x1060] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0x1060u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00897bad: jb 0x897b85 */ if (fC) goto L_00897b85;
L_00897baf:; BB(0x00897baf);
    /* 00897baf: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00897bb2: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x897bb7u); f_00857e98();
    /* 00897bb7: push dword ptr [ebp - 0x18] */ { u32 v = R32((u32)(r_ebp+0xffffffe8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00897bba: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x897bbfu); f_00857e98();
    /* 00897bbf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00897bc0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00897bc2:; BB(0x00897bc2);
    /* 00897bc2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00897bc3:; BB(0x00897bc3);
    /* 00897bc3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00897bc4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
L_00897bc5:; BB(0x00897bc5);
    /* 00897bc5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00897bc8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00897bc9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00897bd0: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00897bd1: ret  */ FN_RET(0x008979d0); r_esp += 4; return;
}

void f_00897bd2(void) /* sub_897BD2 */
{
    FN_ENTER(0x00897bd2);
    /* 00897bd2: mov eax, 0x8cb653 */ r_eax = 0x8cb653u;
    /* 00897bd7: call 0x8cb064 */ r_esp -= 4; W32(r_esp, 0x897bdcu); f_008cb064();
    /* 00897bdc: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00897bdf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00897be0: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00897be2: cmp byte ptr [ebx + 8], 2 */ {  u32 a = R8((u32)(r_ebx+0x8u)); u32 b = 0x2u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 00897be6: je 0x897bf2 */ if (fZ) goto L_00897bf2;
L_00897be8:; BB(0x00897be8);
    /* 00897be8: mov eax, 0x80004005 */ r_eax = 0x80004005u;
    /* 00897bed: jmp 0x897dc9 */ goto L_00897dc9;
L_00897bf2:; BB(0x00897bf2);
    /* 00897bf2: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00897bf4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00897bf5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00897bf6: mov edi, dword ptr [eax + 0x1058] */ r_edi = R32((u32)(r_eax+0x1058u));
    /* 00897bfc: mov eax, edi */ r_eax = r_edi;
    /* 00897bfe: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00897c01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00897c02: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x897c07u); f_008581c5();
    /* 00897c07: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00897c08: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00897c0b: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00897c0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00897c11: mov esi, 0x88f917 */ r_esi = 0x88f917u;
    /* 00897c16: je 0x897c2a */ if (fZ) goto L_00897c2a;
L_00897c18:; BB(0x00897c18);
    /* 00897c18: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00897c19: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00897c1a: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00897c1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00897c1d: call 0x88fd17 */ r_esp -= 4; W32(r_esp, 0x897c22u); f_0088fd17();
    /* 00897c22: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00897c25: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00897c28: jmp 0x897c2e */ goto L_00897c2e;
L_00897c2a:; BB(0x00897c2a);
    /* 00897c2a: and dword ptr [ebp - 0x10], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00897c2e:; BB(0x00897c2e);
    /* 00897c2e: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00897c32: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00897c36: jne 0x897c42 */ if (!fZ) goto L_00897c42;
L_00897c38:; BB(0x00897c38);
    /* 00897c38: mov eax, 0x8007000e */ r_eax = 0x8007000eu;
    /* 00897c3d: jmp 0x897dc7 */ goto L_00897dc7;
L_00897c42:; BB(0x00897c42);
    /* 00897c42: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00897c45: mov edi, dword ptr [eax + 0x1058] */ r_edi = R32((u32)(r_eax+0x1058u));
    /* 00897c4b: mov eax, edi */ r_eax = r_edi;
    /* 00897c4d: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00897c50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00897c51: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x897c56u); f_008581c5();
    /* 00897c56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00897c57: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 00897c5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00897c5c: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00897c63: je 0x897c77 */ if (fZ) goto L_00897c77;
L_00897c65:; BB(0x00897c65);
    /* 00897c65: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00897c66: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00897c67: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00897c69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00897c6a: call 0x88fd17 */ r_esp -= 4; W32(r_esp, 0x897c6fu); f_0088fd17();
    /* 00897c6f: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00897c72: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00897c75: jmp 0x897c7b */ goto L_00897c7b;
L_00897c77:; BB(0x00897c77);
    /* 00897c77: and dword ptr [ebp - 0x14], 0 */ { u32 ad = (u32)(r_ebp+0xffffffecu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00897c7b:; BB(0x00897c7b);
    /* 00897c7b: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00897c7f: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00897c83: jne 0x897c97 */ if (!fZ) goto L_00897c97;
L_00897c85:; BB(0x00897c85);
    /* 00897c85: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00897c88: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x897c8du); f_00857e98();
    /* 00897c8d: mov eax, 0x8007000e */ r_eax = 0x8007000eu;
    /* 00897c92: jmp 0x897dc6 */ goto L_00897dc6;
L_00897c97:; BB(0x00897c97);
    /* 00897c97: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00897c99: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 00897c9c: mov eax, dword ptr [ecx + 0x1058] */ r_eax = R32((u32)(r_ecx+0x1058u));
    /* 00897ca2: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00897ca5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00897ca7: div dword ptr [esi + 0x1058] */ { u32 d = R32((u32)(r_esi+0x1058u)); if (!d) UNSUP(0x00897ca7, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x00897ca7, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00897cad: mov edi, dword ptr [esi + 0x105c] */ r_edi = R32((u32)(r_esi+0x105cu));
    /* 00897cb3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00897cb5: mov esi, dword ptr [esi + 0x1060] */ r_esi = R32((u32)(r_esi+0x1060u));
    /* 00897cbb: and dword ptr [ebp - 0x28], 0 */ { u32 ad = (u32)(r_ebp+0xffffffd8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00897cbf: and dword ptr [ebp - 0x1c], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00897cc3: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00897cc6: mov eax, dword ptr [ecx + 0x105c] */ r_eax = R32((u32)(r_ecx+0x105cu));
    /* 00897ccc: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00897ccf: div edi */ { u32 d = r_edi; if (!d) UNSUP(0x00897ccf, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x00897ccf, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00897cd1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00897cd3: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 00897cd6: mov eax, dword ptr [ecx + 0x1060] */ r_eax = R32((u32)(r_ecx+0x1060u));
    /* 00897cdc: shl eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00897cdf: div esi */ { u32 d = r_esi; if (!d) UNSUP(0x00897cdf, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x00897cdf, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00897ce1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00897ce3: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00897ce6: jbe 0x897db3 */ if ((fC||fZ)) goto L_00897db3;
L_00897cec:; BB(0x00897cec);
    /* 00897cec: or dword ptr [ebp - 0x2c], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xffffffd4u);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00897cf0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00897cf2: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00897cf4: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 00897cf7: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00897cfa: jbe 0x897d98 */ if ((fC||fZ)) goto L_00897d98;
L_00897d00:; BB(0x00897d00);
    /* 00897d00: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00897d03: and dword ptr [ebp - 0x20], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00897d07: and dword ptr [ebp - 0x24], 0 */ { u32 ad = (u32)(r_ebp+0xffffffdcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00897d0b: xor eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00897d0d: test eax, 0xffff0000 */ {  u32 a = r_eax; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00897d12: je 0x897d2e */ if (fZ) goto L_00897d2e;
L_00897d14:; BB(0x00897d14);
    /* 00897d14: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00897d17: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00897d1a: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00897d1c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00897d1e: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00897d21: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00897d22: mov edx, esi */ r_edx = r_esi;
    /* 00897d24: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00897d27: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00897d28: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x897d2bu); call_ind(t); }
    /* 00897d2b: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
L_00897d2e:; BB(0x00897d2e);
    /* 00897d2e: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00897d31: cmp dword ptr [eax + 0x1058], 0 */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00897d38: jbe 0x897d69 */ if ((fC||fZ)) goto L_00897d69;
L_00897d3a:; BB(0x00897d3a);
    /* 00897d3a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
L_00897d3d:; BB(0x00897d3d);
    /* 00897d3d: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00897d40: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00897d43: add dword ptr [ebp - 0x20], ecx */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00897d46: shr esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00897d49: shl esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00897d4c: add esi, dword ptr [ebp - 0x10] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xfffffff0u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00897d4f: inc dword ptr [ebp - 0x24] */ { u32 ad = (u32)(r_ebp+0xffffffdcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00897d52: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00897d55: mov edi, eax */ r_edi = r_eax;
    /* 00897d57: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00897d58: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00897d59: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00897d5a: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00897d5b: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00897d5e: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00897d61: cmp edx, dword ptr [ecx + 0x1058] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00897d67: jb 0x897d3d */ if (fC) goto L_00897d3d;
L_00897d69:; BB(0x00897d69);
    /* 00897d69: push dword ptr [ebp - 0x14] */ { u32 v = R32((u32)(r_ebp+0xffffffecu)); r_esp -= 4; W32(r_esp, v); }
    /* 00897d6c: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 00897d6f: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00897d72: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00897d74: push dword ptr [ebp - 0x18] */ { u32 v = R32((u32)(r_ebp+0xffffffe8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00897d77: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x897d7au); call_ind(t); }
    /* 00897d7a: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 00897d7d: add esi, dword ptr [ebp - 0x38] */ {  u32 a = r_esi; u32 b = R32((u32)(r_ebp+0xffffffc8u)); u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00897d80: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00897d83: inc dword ptr [ebp - 0x18] */ { u32 ad = (u32)(r_ebp+0xffffffe8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00897d86: mov edi, dword ptr [eax + 0x105c] */ r_edi = R32((u32)(r_eax+0x105cu));
    /* 00897d8c: cmp dword ptr [ebp - 0x18], edi */ {  u32 a = R32((u32)(r_ebp+0xffffffe8u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00897d8f: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 00897d92: jb 0x897d00 */ if (fC) goto L_00897d00;
L_00897d98:; BB(0x00897d98);
    /* 00897d98: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00897d9b: add dword ptr [ebp - 0x28], eax */ { u32 ad = (u32)(r_ebp+0xffffffd8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00897d9e: inc dword ptr [ebp - 0x1c] */ { u32 ad = (u32)(r_ebp+0xffffffe4u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00897da1: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00897da4: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00897da7: cmp ecx, dword ptr [eax + 0x1060] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x1060u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00897dad: jb 0x897cec */ if (fC) goto L_00897cec;
L_00897db3:; BB(0x00897db3);
    /* 00897db3: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00897db6: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x897dbbu); f_00857e98();
    /* 00897dbb: push dword ptr [ebp - 0x14] */ { u32 v = R32((u32)(r_ebp+0xffffffecu)); r_esp -= 4; W32(r_esp, v); }
    /* 00897dbe: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x897dc3u); f_00857e98();
    /* 00897dc3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00897dc4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00897dc6:; BB(0x00897dc6);
    /* 00897dc6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00897dc7:; BB(0x00897dc7);
    /* 00897dc7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00897dc8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_00897dc9:; BB(0x00897dc9);
    /* 00897dc9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00897dcc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00897dcd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00897dd4: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 00897dd5: ret  */ FN_RET(0x00897bd2); r_esp += 4; return;
}

void f_00897dd6(void) /* sub_897DD6 */
{
    FN_ENTER(0x00897dd6);
    /* 00897dd6: mov eax, 0x8cb67b */ r_eax = 0x8cb67bu;
    /* 00897ddb: call 0x8cb064 */ r_esp -= 4; W32(r_esp, 0x897de0u); f_008cb064();
    /* 00897de0: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00897de3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00897de4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00897de6: cmp byte ptr [ebx + 8], 5 */ {  u32 a = R8((u32)(r_ebx+0x8u)); u32 b = 0x5u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 00897dea: je 0x897df6 */ if (fZ) goto L_00897df6;
L_00897dec:; BB(0x00897dec);
    /* 00897dec: mov eax, 0x80004005 */ r_eax = 0x80004005u;
    /* 00897df1: jmp 0x8981cc */ goto L_008981cc;
L_00897df6:; BB(0x00897df6);
    /* 00897df6: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00897df8: mov eax, dword ptr [ecx + 0x1058] */ r_eax = R32((u32)(r_ecx+0x1058u));
    /* 00897dfe: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00897e01: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00897e02: mov esi, dword ptr [edx + 0x1058] */ r_esi = R32((u32)(r_edx+0x1058u));
    /* 00897e08: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00897e09: mov edi, eax */ r_edi = r_eax;
    /* 00897e0b: shr edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00897e0d: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00897e0f: je 0x897e22 */ if (fZ) goto L_00897e22;
L_00897e11:; BB(0x00897e11);
    /* 00897e11: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00897e14: jne 0x8981c5 */ if (!fZ) goto L_008981c5;
L_00897e1a:; BB(0x00897e1a);
    /* 00897e1a: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00897e1c: jne 0x8981c5 */ if (!fZ) goto L_008981c5;
L_00897e22:; BB(0x00897e22);
    /* 00897e22: mov edi, dword ptr [ecx + 0x105c] */ r_edi = R32((u32)(r_ecx+0x105cu));
    /* 00897e28: mov esi, dword ptr [edx + 0x105c] */ r_esi = R32((u32)(r_edx+0x105cu));
    /* 00897e2e: shr edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00897e30: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00897e32: je 0x897e49 */ if (fZ) goto L_00897e49;
L_00897e34:; BB(0x00897e34);
    /* 00897e34: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00897e37: jne 0x8981c5 */ if (!fZ) goto L_008981c5;
L_00897e3d:; BB(0x00897e3d);
    /* 00897e3d: cmp dword ptr [ecx + 0x105c], esi */ {  u32 a = R32((u32)(r_ecx+0x105cu)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00897e43: jne 0x8981c5 */ if (!fZ) goto L_008981c5;
L_00897e49:; BB(0x00897e49);
    /* 00897e49: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00897e4b: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00897e4c: cmp dword ptr [edx + 0x1060], esi */ {  u32 a = R32((u32)(r_edx+0x1060u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00897e52: jne 0x8981c5 */ if (!fZ) goto L_008981c5;
L_00897e58:; BB(0x00897e58);
    /* 00897e58: cmp dword ptr [ecx + 0x1060], esi */ {  u32 a = R32((u32)(r_ecx+0x1060u)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00897e5e: jne 0x8981c5 */ if (!fZ) goto L_008981c5;
L_00897e64:; BB(0x00897e64);
    /* 00897e64: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00897e66: jbe 0x897e83 */ if ((fC||fZ)) goto L_00897e83;
L_00897e68:; BB(0x00897e68);
    /* 00897e68: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00897e6a: je 0x897e83 */ if (fZ) goto L_00897e83;
L_00897e6c:; BB(0x00897e6c);
    /* 00897e6c: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00897e6f: mov dword ptr [ecx + 0x1058], eax */ W32((u32)(r_ecx+0x1058u), r_eax);
    /* 00897e75: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00897e77: mov ecx, dword ptr [eax + 0x1068] */ r_ecx = R32((u32)(r_eax+0x1068u));
    /* 00897e7d: sub dword ptr [eax + 0x1064], ecx */ { u32 ad = (u32)(r_eax+0x1064u);  u32 a = R32(ad); u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
L_00897e83:; BB(0x00897e83);
    /* 00897e83: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00897e85: lea ecx, [eax + 0x105c] */ r_ecx = (u32)(r_eax+0x105cu);
    /* 00897e8b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00897e8d: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00897e8f: jbe 0x897e96 */ if ((fC||fZ)) goto L_00897e96;
L_00897e91:; BB(0x00897e91);
    /* 00897e91: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00897e94: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_00897e96:; BB(0x00897e96);
    /* 00897e96: test byte ptr [ebx + 0xa], 8 */ {  u32 a = R8((u32)(r_ebx+0xau)); u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00897e9a: jne 0x897f75 */ if (!fZ) goto L_00897f75;
L_00897ea0:; BB(0x00897ea0);
    /* 00897ea0: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00897ea2: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00897ea5: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00897ea8: cmp ecx, dword ptr [edx + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00897eab: jne 0x897f75 */ if (!fZ) goto L_00897f75;
L_00897eb1:; BB(0x00897eb1);
    /* 00897eb1: cmp dword ptr [eax + 0x1058], 2 */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00897eb8: jb 0x897f75 */ if (fC) goto L_00897f75;
L_00897ebe:; BB(0x00897ebe);
    /* 00897ebe: cmp dword ptr [eax + 0x105c], 2 */ {  u32 a = R32((u32)(r_eax+0x105cu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00897ec5: jb 0x897f75 */ if (fC) goto L_00897f75;
L_00897ecb:; BB(0x00897ecb);
    /* 00897ecb: cmp ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00897ece: jg 0x897f24 */ if ((!fZ&&fS==fO)) goto L_00897f24;
L_00897ed0:; BB(0x00897ed0);
    /* 00897ed0: je 0x897f51 */ if (fZ) goto L_00897f51;
L_00897ed2:; BB(0x00897ed2);
    /* 00897ed2: sub ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00897ed5: cmp ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00897ed8: ja 0x897f75 */ if ((!fC&&!fZ)) goto L_00897f75;
L_00897ede:; BB(0x00897ede);
    /* 00897ede: jmp dword ptr [ecx*4 + 0x8981d9] */ { u32 t = R32((u32)(r_ecx*4+0x8981d9u)); switch (t) { case 0x897f75u: goto L_00897f75; case 0x897ee5u: goto L_00897ee5; case 0x897eeeu: goto L_00897eee; case 0x897ef7u: goto L_00897ef7; case 0x897f00u: goto L_00897f00; case 0x897f09u: goto L_00897f09; case 0x897f12u: goto L_00897f12; case 0x897f1bu: goto L_00897f1b; default: UNSUP(0x00897ede, "jump table entry is not a known target"); } }
L_00897ee5:; BB(0x00897ee5);
    /* 00897ee5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00897ee7: call 0x8968f8 */ r_esp -= 4; W32(r_esp, 0x897eecu); f_008968f8();
    /* 00897eec: jmp 0x897f6a */ goto L_00897f6a;
L_00897eee:; BB(0x00897eee);
    /* 00897eee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00897ef0: call 0x896b8e */ r_esp -= 4; W32(r_esp, 0x897ef5u); f_00896b8e();
    /* 00897ef5: jmp 0x897f6a */ goto L_00897f6a;
L_00897ef7:; BB(0x00897ef7);
    /* 00897ef7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00897ef9: call 0x896bbf */ r_esp -= 4; W32(r_esp, 0x897efeu); f_00896bbf();
    /* 00897efe: jmp 0x897f6a */ goto L_00897f6a;
L_00897f00:; BB(0x00897f00);
    /* 00897f00: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00897f02: call 0x896d0f */ r_esp -= 4; W32(r_esp, 0x897f07u); f_00896d0f();
    /* 00897f07: jmp 0x897f6a */ goto L_00897f6a;
L_00897f09:; BB(0x00897f09);
    /* 00897f09: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00897f0b: call 0x896e33 */ r_esp -= 4; W32(r_esp, 0x897f10u); f_00896e33();
    /* 00897f10: jmp 0x897f6a */ goto L_00897f6a;
L_00897f12:; BB(0x00897f12);
    /* 00897f12: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00897f14: call 0x896f82 */ r_esp -= 4; W32(r_esp, 0x897f19u); f_00896f82();
    /* 00897f19: jmp 0x897f6a */ goto L_00897f6a;
L_00897f1b:; BB(0x00897f1b);
    /* 00897f1b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00897f1d: call 0x8970d5 */ r_esp -= 4; W32(r_esp, 0x897f22u); f_008970d5();
    /* 00897f22: jmp 0x897f6a */ goto L_00897f6a;
L_00897f24:; BB(0x00897f24);
    /* 00897f24: sub ecx, 0x1d */ {  u32 a = r_ecx; u32 b = 0x1du; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00897f27: je 0x897f63 */ if (fZ) goto L_00897f63;
L_00897f29:; BB(0x00897f29);
    /* 00897f29: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00897f2a: je 0x897f5a */ if (fZ) goto L_00897f5a;
L_00897f2c:; BB(0x00897f2c);
    /* 00897f2c: sub ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00897f2f: je 0x897f75 */ if (fZ) goto L_00897f75;
L_00897f31:; BB(0x00897f31);
    /* 00897f31: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00897f32: je 0x897f75 */ if (fZ) goto L_00897f75;
L_00897f34:; BB(0x00897f34);
    /* 00897f34: sub ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00897f37: je 0x897f51 */ if (fZ) goto L_00897f51;
L_00897f39:; BB(0x00897f39);
    /* 00897f39: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00897f3a: je 0x897f48 */ if (fZ) goto L_00897f48;
L_00897f3c:; BB(0x00897f3c);
    /* 00897f3c: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00897f3d: jne 0x897f75 */ if (!fZ) goto L_00897f75;
L_00897f3f:; BB(0x00897f3f);
    /* 00897f3f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00897f41: call 0x897668 */ r_esp -= 4; W32(r_esp, 0x897f46u); f_00897668();
    /* 00897f46: jmp 0x897f6a */ goto L_00897f6a;
L_00897f48:; BB(0x00897f48);
    /* 00897f48: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00897f4a: call 0x89751c */ r_esp -= 4; W32(r_esp, 0x897f4fu); f_0089751c();
    /* 00897f4f: jmp 0x897f6a */ goto L_00897f6a;
L_00897f51:; BB(0x00897f51);
    /* 00897f51: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00897f53: call 0x897214 */ r_esp -= 4; W32(r_esp, 0x897f58u); f_00897214();
    /* 00897f58: jmp 0x897f6a */ goto L_00897f6a;
L_00897f5a:; BB(0x00897f5a);
    /* 00897f5a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00897f5c: call 0x8973fb */ r_esp -= 4; W32(r_esp, 0x897f61u); f_008973fb();
    /* 00897f61: jmp 0x897f6a */ goto L_00897f6a;
L_00897f63:; BB(0x00897f63);
    /* 00897f63: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00897f65: call 0x8972af */ r_esp -= 4; W32(r_esp, 0x897f6au); f_008972af();
L_00897f6a:; BB(0x00897f6a);
    /* 00897f6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00897f6c: jl 0x897f75 */ if ((fS!=fO)) goto L_00897f75;
L_00897f6e:; BB(0x00897f6e);
    /* 00897f6e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00897f70: jmp 0x8981ca */ goto L_008981ca;
L_00897f75:; BB(0x00897f75);
    /* 00897f75: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 00897f78: mov esi, dword ptr [eax + 0x1058] */ r_esi = R32((u32)(r_eax+0x1058u));
    /* 00897f7e: mov eax, esi */ r_eax = r_esi;
    /* 00897f80: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00897f83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00897f84: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x897f89u); f_008581c5();
    /* 00897f89: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00897f8a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00897f8d: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00897f91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00897f93: mov edi, 0x88f917 */ r_edi = 0x88f917u;
    /* 00897f98: je 0x897fac */ if (fZ) goto L_00897fac;
L_00897f9a:; BB(0x00897f9a);
    /* 00897f9a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00897f9b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00897f9c: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00897f9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00897f9f: call 0x88fd17 */ r_esp -= 4; W32(r_esp, 0x897fa4u); f_0088fd17();
    /* 00897fa4: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00897fa7: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00897faa: jmp 0x897fb0 */ goto L_00897fb0;
L_00897fac:; BB(0x00897fac);
    /* 00897fac: and dword ptr [ebp - 0x1c], 0 */ { u32 ad = (u32)(r_ebp+0xffffffe4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_00897fb0:; BB(0x00897fb0);
    /* 00897fb0: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00897fb4: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00897fb8: jne 0x897fc4 */ if (!fZ) goto L_00897fc4;
L_00897fba:; BB(0x00897fba);
    /* 00897fba: mov eax, 0x8007000e */ r_eax = 0x8007000eu;
    /* 00897fbf: jmp 0x8981ca */ goto L_008981ca;
L_00897fc4:; BB(0x00897fc4);
    /* 00897fc4: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00897fc6: cmp dword ptr [eax + 0x105c], 1 */ {  u32 a = R32((u32)(r_eax+0x105cu)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00897fcd: mov esi, dword ptr [eax + 0x1058] */ r_esi = R32((u32)(r_eax+0x1058u));
    /* 00897fd3: jne 0x89800c */ if (!fZ) goto L_0089800c;
L_00897fd5:; BB(0x00897fd5);
    /* 00897fd5: mov eax, esi */ r_eax = r_esi;
    /* 00897fd7: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00897fda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00897fdb: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x897fe0u); f_008581c5();
    /* 00897fe0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00897fe1: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00897fe4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00897fe6: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00897fed: je 0x897ffe */ if (fZ) goto L_00897ffe;
L_00897fef:; BB(0x00897fef);
    /* 00897fef: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00897ff0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00897ff1: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00897ff3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00897ff4: call 0x88fd17 */ r_esp -= 4; W32(r_esp, 0x897ff9u); f_0088fd17();
    /* 00897ff9: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00897ffc: jmp 0x898000 */ goto L_00898000;
L_00897ffe:; BB(0x00897ffe);
    /* 00897ffe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00898000:; BB(0x00898000);
    /* 00898000: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00898004: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00898007: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0089800a: jmp 0x898050 */ goto L_00898050;
L_0089800c:; BB(0x0089800c);
    /* 0089800c: shl esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 0089800e: mov eax, esi */ r_eax = r_esi;
    /* 00898010: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00898013: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00898014: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x898019u); f_008581c5();
    /* 00898019: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0089801a: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0089801d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089801f: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00898026: je 0x898037 */ if (fZ) goto L_00898037;
L_00898028:; BB(0x00898028);
    /* 00898028: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00898029: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0089802a: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0089802c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0089802d: call 0x88fd17 */ r_esp -= 4; W32(r_esp, 0x898032u); f_0088fd17();
    /* 00898032: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00898035: jmp 0x898039 */ goto L_00898039;
L_00898037:; BB(0x00898037);
    /* 00898037: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00898039:; BB(0x00898039);
    /* 00898039: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0089803b: mov eax, dword ptr [eax + 0x1058] */ r_eax = R32((u32)(r_eax+0x1058u));
    /* 00898041: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 00898045: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 00898048: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0089804b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0089804e: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00898050:; BB(0x00898050);
    /* 00898050: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00898053: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00898055: cmp dword ptr [ebp - 0x24], eax */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00898058: jne 0x898064 */ if (!fZ) goto L_00898064;
L_0089805a:; BB(0x0089805a);
    /* 0089805a: mov esi, 0x8007000e */ r_esi = 0x8007000eu;
    /* 0089805f: jmp 0x8981b8 */ goto L_008981b8;
L_00898064:; BB(0x00898064);
    /* 00898064: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00898066: cmp dword ptr [ecx + 0x1058], 1 */ {  u32 a = R32((u32)(r_ecx+0x1058u)); u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0089806d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00898070: jne 0x89807a */ if (!fZ) goto L_0089807a;
L_00898072:; BB(0x00898072);
    /* 00898072: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00898075: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00898078: jmp 0x898086 */ goto L_00898086;
L_0089807a:; BB(0x0089807a);
    /* 0089807a: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0089807d: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00898080: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00898083: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_00898086:; BB(0x00898086);
    /* 00898086: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00898089: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 0089808c: cmp dword ptr [ecx + 0x105c], eax */ {  u32 a = R32((u32)(r_ecx+0x105cu)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00898092: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00898095: jbe 0x8981ad */ if ((fC||fZ)) goto L_008981ad;
L_0089809b:; BB(0x0089809b);
    /* 0089809b: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0089809e: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 008980a1: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008980a3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008980a5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008980a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008980a8: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008980aa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008980ab: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8980aeu); call_ind(t); }
    /* 008980ae: cmp dword ptr [ebp - 0x10], edi */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008980b1: je 0x8980c1 */ if (fZ) goto L_008980c1;
L_008980b3:; BB(0x008980b3);
    /* 008980b3: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008980b6: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 008980b8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008980ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008980bc: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008980bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008980be: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8980c1u); call_ind(t); }
L_008980c1:; BB(0x008980c1);
    /* 008980c1: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008980c4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008980c6: cmp dword ptr [eax + 0x1058], edx */ {  u32 a = R32((u32)(r_eax+0x1058u)); u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008980cc: jbe 0x898188 */ if ((fC||fZ)) goto L_00898188;
L_008980d2:; BB(0x008980d2);
    /* 008980d2: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 008980d5: fld dword ptr [0x99b9f4] */ FPUSH(R_F32((u32)(0x99b9f4u)));
    /* 008980db: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
L_008980de:; BB(0x008980de);
    /* 008980de: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 008980e1: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 008980e4: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 008980e7: shl esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 008980ea: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008980ec: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 008980ee: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008980f0: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 008980f2: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 008980f5: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 008980f8: add dword ptr [ebp - 0x20], 0x10 */ { u32 ad = (u32)(r_ebp+0xffffffe0u);  u32 a = R32(ad); u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008980fc: fadd dword ptr [ecx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x4u));
    /* 008980ff: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 00898102: fadd dword ptr [ecx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x8u));
    /* 00898105: fstp dword ptr [ebp - 0x44] */ W_F32((u32)(r_ebp+0xffffffbcu), ST(0)); FPOP();
    /* 00898108: fld dword ptr [eax + 0xc] */ FPUSH(R_F32((u32)(r_eax+0xcu)));
    /* 0089810b: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0089810e: fadd dword ptr [ecx + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xcu));
    /* 00898111: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00898113: fstp dword ptr [ebp - 0x40] */ W_F32((u32)(r_ebp+0xffffffc0u), ST(0)); FPOP();
    /* 00898116: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00898118: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 0089811a: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 0089811d: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 00898120: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00898122: fld dword ptr [ebp - 0x44] */ FPUSH(R_F32((u32)(r_ebp+0xffffffbcu)));
    /* 00898125: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 00898128: fld dword ptr [ebp - 0x40] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc0u)));
    /* 0089812b: fadd dword ptr [eax + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0xcu));
    /* 0089812e: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00898131: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00898133: lea esi, [ebp - 0x3c] */ r_esi = (u32)(r_ebp+0xffffffc4u);
    /* 00898136: fstp dword ptr [ebp - 0x50] */ W_F32((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 00898139: fld dword ptr [ebp - 0x5c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffa4u)));
    /* 0089813c: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0089813d: fadd dword ptr [eax] */ ST(0) = ST(0) + R_F32((u32)(r_eax));
    /* 0089813f: fstp dword ptr [ebp - 0x6c] */ W_F32((u32)(r_ebp+0xffffff94u), ST(0)); FPOP();
    /* 00898142: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00898144: fadd dword ptr [eax + 4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x4u));
    /* 00898147: fstp dword ptr [ebp - 0x68] */ W_F32((u32)(r_ebp+0xffffff98u), ST(0)); FPOP();
    /* 0089814a: fadd dword ptr [eax + 8] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x8u));
    /* 0089814d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0089814f: fld dword ptr [ebp - 0x50] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb0u)));
    /* 00898152: fadd dword ptr [eax + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0xcu));
    /* 00898155: fld dword ptr [ebp - 0x6c] */ FPUSH(R_F32((u32)(r_ebp+0xffffff94u)));
    /* 00898158: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0089815a: fstp dword ptr [ebp - 0x3c] */ W_F32((u32)(r_ebp+0xffffffc4u), ST(0)); FPOP();
    /* 0089815d: fld dword ptr [ebp - 0x68] */ FPUSH(R_F32((u32)(r_ebp+0xffffff98u)));
    /* 00898160: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00898162: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 00898165: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00898167: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00898169: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 0089816c: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0089816e: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 00898171: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00898172: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00898174: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00898175: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00898176: movsd dword ptr es:[edi], dword ptr [esi] */ W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;
    /* 00898177: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0089817a: cmp edx, dword ptr [eax + 0x1058] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00898180: jb 0x8980de */ if (fC) goto L_008980de;
L_00898186:; BB(0x00898186);
    /* 00898186: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00898188:; BB(0x00898188);
    /* 00898188: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089818b: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 0089818e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00898190: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00898192: push dword ptr [ebp - 0x18] */ { u32 v = R32((u32)(r_ebp+0xffffffe8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00898195: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x898198u); call_ind(t); }
    /* 00898198: inc dword ptr [ebp - 0x18] */ { u32 ad = (u32)(r_ebp+0xffffffe8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0089819b: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 0089819e: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 008981a1: cmp ecx, dword ptr [eax + 0x105c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x105cu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008981a7: jb 0x89809b */ if (fC) goto L_0089809b;
L_008981ad:; BB(0x008981ad);
    /* 008981ad: push dword ptr [ebp - 0x24] */ { u32 v = R32((u32)(r_ebp+0xffffffdcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008981b0: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8981b5u); f_00857e98();
    /* 008981b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008981b6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_008981b8:; BB(0x008981b8);
    /* 008981b8: push dword ptr [ebp - 0x1c] */ { u32 v = R32((u32)(r_ebp+0xffffffe4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008981bb: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8981c0u); f_00857e98();
    /* 008981c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008981c1: mov eax, esi */ r_eax = r_esi;
    /* 008981c3: jmp 0x8981ca */ goto L_008981ca;
L_008981c5:; BB(0x008981c5);
    /* 008981c5: mov eax, 0x80004005 */ r_eax = 0x80004005u;
L_008981ca:; BB(0x008981ca);
    /* 008981ca: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008981cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008981cc:; BB(0x008981cc);
    /* 008981cc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008981cf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008981d0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008981d7: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008981d8: ret  */ FN_RET(0x00897dd6); r_esp += 4; return;
}

