#include "protos.h"

void f_00788050(void) /* sub_788050 */
{
    FN_ENTER(0x00788050);
    /* 00788050: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00788051: mov ebp, esp */ r_ebp = r_esp;
    /* 00788053: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00788055: push 0x8f49b6 */ { u32 v = 0x8f49b6u; r_esp -= 4; W32(r_esp, v); }
    /* 0078805a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00788060: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00788061: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00788068: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078806b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078806e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00788071: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00788074: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00788077: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 0078807d: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00788080: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x788085u); f_008193cc();
    /* 00788085: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0078808c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078808f: mov dword ptr [eax], 0xb44d70 */ W32((u32)(r_eax), 0xb44d70u);
    /* 00788095: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00788097: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 0078809e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7880a3u); f_005caba4();
    /* 007880a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007880a4: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 007880a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007880a9: je 0x7880cb */ if (fZ) goto L_007880cb;
L_007880ab:; BB(0x007880ab);
    /* 007880ab: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 007880b2: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007880b9: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007880bc: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 007880bf: call 0x4010b0 */ r_esp -= 4; W32(r_esp, 0x7880c4u); f_004010b0();
    /* 007880c4: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_007880cb:; BB(0x007880cb);
    /* 007880cb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007880d2: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 007880d9: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 007880db: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7880e0u); f_005caba4();
    /* 007880e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007880e1: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 007880e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007880e6: je 0x788108 */ if (fZ) goto L_00788108;
L_007880e8:; BB(0x007880e8);
    /* 007880e8: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 007880ef: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 007880f6: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007880f9: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007880fc: call 0x4012cc */ r_esp -= 4; W32(r_esp, 0x788101u); f_004012cc();
    /* 00788101: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00788108:; BB(0x00788108);
    /* 00788108: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0078810f: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00788111: call 0x7a6198 */ r_esp -= 4; W32(r_esp, 0x788116u); f_007a6198();
    /* 00788116: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00788117: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078811a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078811c: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 0078811f: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 00788122: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00788125: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078812c: mov esp, ebp */ r_esp = r_ebp;
    /* 0078812e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078812f: ret  */ FN_RET(0x00788050); r_esp += 4; return;
}

void f_00788130(void) /* sub_788130 */
{
    FN_ENTER(0x00788130);
    /* 00788130: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00788131: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00788133: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00788135: call 0x787fd4 */ r_esp -= 4; W32(r_esp, 0x78813au); f_00787fd4();
    /* 0078813a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0078813e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00788140: jne 0x788146 */ if (!fZ) goto L_00788146;
L_00788142:; BB(0x00788142);
    /* 00788142: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00788143: ret 4 */ FN_RET(0x00788130); r_esp += 8; return;
L_00788146:; BB(0x00788146);
    /* 00788146: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00788147: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x78814cu); f_005c2f74();
    /* 0078814c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0078814d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078814e: ret 4 */ FN_RET(0x00788130); r_esp += 8; return;
}

void f_00788154(void) /* sub_788154 */
{
    FN_ENTER(0x00788154);
    /* 00788154: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00788155: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00788156: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00788157: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00788158: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078815b: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 0078815f: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 00788162: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 00788165: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 00788169: mov edx, 9 */ r_edx = 0x9u;
    /* 0078816e: mov esi, ebx */ r_esi = r_ebx;
L_00788170:; BB(0x00788170);
    /* 00788170: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00788173: jne 0x788182 */ if (!fZ) goto L_00788182;
L_00788175:; BB(0x00788175);
    /* 00788175: mov edx, ecx */ r_edx = r_ecx;
    /* 00788177: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0078817a: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078817d: mov edx, 8 */ r_edx = 0x8u;
L_00788182:; BB(0x00788182);
    /* 00788182: mov edi, eax */ r_edi = r_eax;
    /* 00788184: and edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00788187: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00788189: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078818c: jne 0x78819f */ if (!fZ) goto L_0078819f;
L_0078818e:; BB(0x0078818e);
    /* 0078818e: mov edi, ecx */ r_edi = r_ecx;
    /* 00788190: movzx ebx, byte ptr [edi] */ r_ebx = (u32)R8((u32)(r_edi));
    /* 00788193: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00788196: mov edi, esi */ r_edi = r_esi;
    /* 00788198: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0078819b: mov byte ptr [edi], bl */ W8((u32)(r_edi), (u8)r_ebx);
    /* 0078819d: jmp 0x788170 */ goto L_00788170;
L_0078819f:; BB(0x0078819f);
    /* 0078819f: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 007881a2: jne 0x7881b1 */ if (!fZ) goto L_007881b1;
L_007881a4:; BB(0x007881a4);
    /* 007881a4: mov edx, ecx */ r_edx = r_ecx;
    /* 007881a6: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 007881a9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007881ac: mov edx, 8 */ r_edx = 0x8u;
L_007881b1:; BB(0x007881b1);
    /* 007881b1: mov edi, eax */ r_edi = r_eax;
    /* 007881b3: and edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 007881b6: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007881b8: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007881bb: jne 0x7881f8 */ if (!fZ) goto L_007881f8;
L_007881bd:; BB(0x007881bd);
    /* 007881bd: movzx ebx, byte ptr [ecx] */ r_ebx = (u32)R8((u32)(r_ecx));
    /* 007881c0: movzx edi, byte ptr [ecx + 1] */ r_edi = (u32)R8((u32)(r_ecx+0x1u));
    /* 007881c4: shl edi, 8 */ { u32 c = (8u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 007881c7: or edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 007881c9: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007881cc: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007881ce: je 0x7882aa */ if (fZ) goto L_007882aa;
L_007881d4:; BB(0x007881d4);
    /* 007881d4: shr edi, 3 */ { u32 c = (3u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 007881d7: or edi, 0xffffe000 */ {  u32 a = r_edi; u32 b = 0xffffe000u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 007881dd: and ebx, 7 */ {  u32 a = r_ebx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 007881e0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007881e2: jne 0x7881f1 */ if (!fZ) goto L_007881f1;
L_007881e4:; BB(0x007881e4);
    /* 007881e4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007881e6: movzx ebx, byte ptr [ebx] */ r_ebx = (u32)R8((u32)(r_ebx));
    /* 007881e9: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007881ec: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007881ef: jmp 0x7881f4 */ goto L_007881f4;
L_007881f1:; BB(0x007881f1);
    /* 007881f1: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_007881f4:; BB(0x007881f4);
    /* 007881f4: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007881f6: jmp 0x788241 */ goto L_00788241;
L_007881f8:; BB(0x007881f8);
    /* 007881f8: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 007881fb: jne 0x78820a */ if (!fZ) goto L_0078820a;
L_007881fd:; BB(0x007881fd);
    /* 007881fd: mov edx, ecx */ r_edx = r_ecx;
    /* 007881ff: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00788202: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00788205: mov edx, 8 */ r_edx = 0x8u;
L_0078820a:; BB(0x0078820a);
    /* 0078820a: mov ebx, eax */ r_ebx = r_eax;
    /* 0078820c: and ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0078820f: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00788211: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00788214: jne 0x788223 */ if (!fZ) goto L_00788223;
L_00788216:; BB(0x00788216);
    /* 00788216: mov edx, ecx */ r_edx = r_ecx;
    /* 00788218: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 0078821b: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078821e: mov edx, 8 */ r_edx = 0x8u;
L_00788223:; BB(0x00788223);
    /* 00788223: mov edi, eax */ r_edi = r_eax;
    /* 00788225: and edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00788228: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0078822a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0078822c: or ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0078822e: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00788231: mov edi, ecx */ r_edi = r_ecx;
    /* 00788233: movzx edi, byte ptr [edi] */ r_edi = (u32)R8((u32)(r_edi));
    /* 00788236: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00788239: or edi, 0xffffff00 */ {  u32 a = r_edi; u32 b = 0xffffff00u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 0078823f: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_00788241:; BB(0x00788241);
    /* 00788241: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00788243: je 0x788170 */ if (fZ) goto L_00788170;
L_00788249:; BB(0x00788249);
    /* 00788249: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0078824c: jb 0x788293 */ if (fC) goto L_00788293;
L_0078824e:; BB(0x0078824e);
    /* 0078824e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00788252: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00788256: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
L_00788259:; BB(0x00788259);
    /* 00788259: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 0078825c: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 0078825e: movzx edx, byte ptr [edi + 1] */ r_edx = (u32)R8((u32)(r_edi+0x1u));
    /* 00788262: mov byte ptr [esi + 1], dl */ W8((u32)(r_esi+0x1u), (u8)r_edx);
    /* 00788265: movzx ecx, byte ptr [edi + 2] */ r_ecx = (u32)R8((u32)(r_edi+0x2u));
    /* 00788269: mov byte ptr [esi + 2], cl */ W8((u32)(r_esi+0x2u), (u8)r_ecx);
    /* 0078826c: movzx eax, byte ptr [edi + 3] */ r_eax = (u32)R8((u32)(r_edi+0x3u));
    /* 00788270: mov byte ptr [esi + 3], al */ W8((u32)(r_esi+0x3u), (u8)r_eax);
    /* 00788273: movzx eax, byte ptr [edi + 4] */ r_eax = (u32)R8((u32)(r_edi+0x4u));
    /* 00788277: mov byte ptr [esi + 4], al */ W8((u32)(r_esi+0x4u), (u8)r_eax);
    /* 0078827a: add edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0078827d: add ebx, -5 */ {  u32 a = r_ebx; u32 b = 0xfffffffbu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00788280: add esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00788283: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00788286: jae 0x788259 */ if (!fC) goto L_00788259;
L_00788288:; BB(0x00788288);
    /* 00788288: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0078828c: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00788290: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
L_00788293:; BB(0x00788293);
    /* 00788293: mov ebp, ebx */ r_ebp = r_ebx;
L_00788295:; BB(0x00788295);
    /* 00788295: movzx ebx, byte ptr [edi] */ r_ebx = (u32)R8((u32)(r_edi));
    /* 00788298: mov byte ptr [esi], bl */ W8((u32)(r_esi), (u8)r_ebx);
    /* 0078829a: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0078829d: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007882a0: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 007882a3: jne 0x788295 */ if (!fZ) goto L_00788295;
L_007882a5:; BB(0x007882a5);
    /* 007882a5: jmp 0x788170 */ goto L_00788170;
L_007882aa:; BB(0x007882aa);
    /* 007882aa: mov ebx, esi */ r_ebx = r_esi;
    /* 007882ac: sub ebx, dword ptr [esp + 0x24] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 007882b0: mov eax, ebx */ r_eax = r_ebx;
    /* 007882b2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007882b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007882b6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007882b7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007882b8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007882b9: ret  */ FN_RET(0x00788154); r_esp += 4; return;
}

void f_007882bc(void) /* sub_7882BC */
{
    FN_ENTER(0x007882bc);
    /* 007882bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007882bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007882be: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007882bf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007882c0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007882c3: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 007882c7: movzx ebx, byte ptr [edx] */ r_ebx = (u32)R8((u32)(r_edx));
    /* 007882ca: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 007882cd: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 007882d1: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 007882d5: mov edx, 9 */ r_edx = 0x9u;
    /* 007882da: mov esi, edx */ r_esi = r_edx;
L_007882dc:; BB(0x007882dc);
    /* 007882dc: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 007882df: jne 0x7882ee */ if (!fZ) goto L_007882ee;
L_007882e1:; BB(0x007882e1);
    /* 007882e1: mov edx, eax */ r_edx = r_eax;
    /* 007882e3: movzx ebx, byte ptr [edx] */ r_ebx = (u32)R8((u32)(r_edx));
    /* 007882e6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007882e9: mov esi, 8 */ r_esi = 0x8u;
L_007882ee:; BB(0x007882ee);
    /* 007882ee: mov edi, ebx */ r_edi = r_ebx;
    /* 007882f0: and edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 007882f3: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 007882f5: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007882f8: jne 0x788319 */ if (!fZ) goto L_00788319;
L_007882fa:; BB(0x007882fa);
    /* 007882fa: mov edi, ecx */ r_edi = r_ecx;
    /* 007882fc: sub edi, dword ptr [esp + 0x24] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00788300: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00788302: jbe 0x78848b */ if ((fC||fZ)) goto L_0078848b;
L_00788308:; BB(0x00788308);
    /* 00788308: mov edi, eax */ r_edi = r_eax;
    /* 0078830a: movzx edx, byte ptr [edi] */ r_edx = (u32)R8((u32)(r_edi));
    /* 0078830d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00788310: mov edi, ecx */ r_edi = r_ecx;
    /* 00788312: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00788315: mov byte ptr [edi], dl */ W8((u32)(r_edi), (u8)r_edx);
    /* 00788317: jmp 0x7882dc */ goto L_007882dc;
L_00788319:; BB(0x00788319);
    /* 00788319: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 0078831c: jne 0x78832b */ if (!fZ) goto L_0078832b;
L_0078831e:; BB(0x0078831e);
    /* 0078831e: mov edx, eax */ r_edx = r_eax;
    /* 00788320: movzx ebx, byte ptr [edx] */ r_ebx = (u32)R8((u32)(r_edx));
    /* 00788323: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00788326: mov esi, 8 */ r_esi = 0x8u;
L_0078832b:; BB(0x0078832b);
    /* 0078832b: mov edi, ebx */ r_edi = r_ebx;
    /* 0078832d: and edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00788330: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00788332: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00788335: jne 0x788372 */ if (!fZ) goto L_00788372;
L_00788337:; BB(0x00788337);
    /* 00788337: movzx edi, byte ptr [eax] */ r_edi = (u32)R8((u32)(r_eax));
    /* 0078833a: movzx edx, byte ptr [eax + 1] */ r_edx = (u32)R8((u32)(r_eax+0x1u));
    /* 0078833e: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00788341: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00788343: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00788346: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00788348: je 0x788495 */ if (fZ) goto L_00788495;
L_0078834e:; BB(0x0078834e);
    /* 0078834e: shr edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00788351: or edx, 0xffffe000 */ {  u32 a = r_edx; u32 b = 0xffffe000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00788357: and edi, 7 */ {  u32 a = r_edi; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 0078835a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0078835c: jne 0x78836b */ if (!fZ) goto L_0078836b;
L_0078835e:; BB(0x0078835e);
    /* 0078835e: mov edi, eax */ r_edi = r_eax;
    /* 00788360: movzx edi, byte ptr [edi] */ r_edi = (u32)R8((u32)(r_edi));
    /* 00788363: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00788366: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00788369: jmp 0x78836e */ goto L_0078836e;
L_0078836b:; BB(0x0078836b);
    /* 0078836b: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_0078836e:; BB(0x0078836e);
    /* 0078836e: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00788370: jmp 0x7883bb */ goto L_007883bb;
L_00788372:; BB(0x00788372);
    /* 00788372: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 00788375: jne 0x788384 */ if (!fZ) goto L_00788384;
L_00788377:; BB(0x00788377);
    /* 00788377: mov edx, eax */ r_edx = r_eax;
    /* 00788379: movzx ebx, byte ptr [edx] */ r_ebx = (u32)R8((u32)(r_edx));
    /* 0078837c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0078837f: mov esi, 8 */ r_esi = 0x8u;
L_00788384:; BB(0x00788384);
    /* 00788384: mov edi, ebx */ r_edi = r_ebx;
    /* 00788386: and edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00788389: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0078838b: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 0078838e: jne 0x78839d */ if (!fZ) goto L_0078839d;
L_00788390:; BB(0x00788390);
    /* 00788390: mov edx, eax */ r_edx = r_eax;
    /* 00788392: movzx ebx, byte ptr [edx] */ r_ebx = (u32)R8((u32)(r_edx));
    /* 00788395: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00788398: mov esi, 8 */ r_esi = 0x8u;
L_0078839d:; BB(0x0078839d);
    /* 0078839d: mov edx, ebx */ r_edx = r_ebx;
    /* 0078839f: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007883a2: shr ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 007883a4: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007883a6: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 007883a8: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007883ab: mov edx, eax */ r_edx = r_eax;
    /* 007883ad: movzx edx, byte ptr [edx] */ r_edx = (u32)R8((u32)(r_edx));
    /* 007883b0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007883b3: or edx, 0xffffff00 */ {  u32 a = r_edx; u32 b = 0xffffff00u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007883b9: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_007883bb:; BB(0x007883bb);
    /* 007883bb: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007883bd: je 0x7882dc */ if (fZ) goto L_007882dc;
L_007883c3:; BB(0x007883c3);
    /* 007883c3: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007883c6: jb 0x788452 */ if (fC) goto L_00788452;
L_007883cc:; BB(0x007883cc);
    /* 007883cc: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 007883d0: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 007883d4: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_007883d7:; BB(0x007883d7);
    /* 007883d7: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 007883db: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007883dd: sub ebp, dword ptr [esp + 0x24] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 007883e1: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007883e3: jbe 0x788481 */ if ((fC||fZ)) goto L_00788481;
L_007883e9:; BB(0x007883e9);
    /* 007883e9: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 007883ed: movzx ebx, byte ptr [edx] */ r_ebx = (u32)R8((u32)(r_edx));
    /* 007883f0: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 007883f2: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007883f5: mov esi, ecx */ r_esi = r_ecx;
    /* 007883f7: sub esi, dword ptr [esp + 0x24] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 007883fb: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007883fd: jbe 0x788481 */ if ((fC||fZ)) goto L_00788481;
L_00788403:; BB(0x00788403);
    /* 00788403: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 00788407: movzx ebx, byte ptr [edx + 1] */ r_ebx = (u32)R8((u32)(r_edx+0x1u));
    /* 0078840b: mov byte ptr [ecx], bl */ W8((u32)(r_ecx), (u8)r_ebx);
    /* 0078840d: lea esi, [ecx + 1] */ r_esi = (u32)(r_ecx+0x1u);
    /* 00788410: sub esi, dword ptr [esp + 0x24] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00788414: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00788416: jbe 0x788481 */ if ((fC||fZ)) goto L_00788481;
L_00788418:; BB(0x00788418);
    /* 00788418: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 0078841c: movzx ebx, byte ptr [edx + 2] */ r_ebx = (u32)R8((u32)(r_edx+0x2u));
    /* 00788420: mov byte ptr [ecx + 1], bl */ W8((u32)(r_ecx+0x1u), (u8)r_ebx);
    /* 00788423: lea esi, [ecx + 2] */ r_esi = (u32)(r_ecx+0x2u);
    /* 00788426: sub esi, dword ptr [esp + 0x24] */ {  u32 a = r_esi; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0078842a: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0078842c: jbe 0x788481 */ if ((fC||fZ)) goto L_00788481;
L_0078842e:; BB(0x0078842e);
    /* 0078842e: movzx ebx, byte ptr [edx + 3] */ r_ebx = (u32)R8((u32)(r_edx+0x3u));
    /* 00788432: mov byte ptr [ecx + 2], bl */ W8((u32)(r_ecx+0x2u), (u8)r_ebx);
    /* 00788435: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00788438: add edi, -4 */ {  u32 a = r_edi; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0078843b: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0078843e: cmp edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00788441: jae 0x7883d7 */ if (!fC) goto L_007883d7;
L_00788443:; BB(0x00788443);
    /* 00788443: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00788447: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0078844b: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0078844e: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
L_00788452:; BB(0x00788452);
    /* 00788452: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00788456: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00788459: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
L_0078845d:; BB(0x0078845d);
    /* 0078845d: mov eax, ecx */ r_eax = r_ecx;
    /* 0078845f: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00788461: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00788463: jbe 0x788481 */ if ((fC||fZ)) goto L_00788481;
L_00788465:; BB(0x00788465);
    /* 00788465: movzx eax, byte ptr [edx] */ r_eax = (u32)R8((u32)(r_edx));
    /* 00788468: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 0078846a: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0078846d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00788470: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00788473: jne 0x78845d */ if (!fZ) goto L_0078845d;
L_00788475:; BB(0x00788475);
    /* 00788475: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00788479: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 0078847c: jmp 0x7882dc */ goto L_007882dc;
L_00788481:; BB(0x00788481);
    /* 00788481: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00788483: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00788486: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00788487: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00788488: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00788489: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078848a: ret  */ FN_RET(0x007882bc); r_esp += 4; return;
L_0078848b:; BB(0x0078848b);
    /* 0078848b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0078848d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00788490: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00788491: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00788492: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00788493: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00788494: ret  */ FN_RET(0x007882bc); r_esp += 4; return;
L_00788495:; BB(0x00788495);
    /* 00788495: sub ecx, dword ptr [esp + 0x24] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x24u)); u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00788499: mov eax, ecx */ r_eax = r_ecx;
    /* 0078849b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0078849e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078849f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007884a0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007884a1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007884a2: ret  */ FN_RET(0x007882bc); r_esp += 4; return;
}

void f_007884a4(void) /* sub_7884A4 */
{
    FN_ENTER(0x007884a4);
    /* 007884a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007884a5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007884a7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007884a9: call 0x7884c8 */ r_esp -= 4; W32(r_esp, 0x7884aeu); f_007884c8();
    /* 007884ae: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007884b2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007884b4: jne 0x7884ba */ if (!fZ) goto L_007884ba;
L_007884b6:; BB(0x007884b6);
    /* 007884b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007884b7: ret 4 */ FN_RET(0x007884a4); r_esp += 8; return;
L_007884ba:; BB(0x007884ba);
    /* 007884ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007884bb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7884c0u); f_005c2f74();
    /* 007884c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007884c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007884c2: ret 4 */ FN_RET(0x007884a4); r_esp += 8; return;
}

void f_007884c8(void) /* sub_7884C8 */
{
    FN_ENTER(0x007884c8);
    /* 007884c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007884c9: mov ebp, esp */ r_ebp = r_esp;
    /* 007884cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007884cd: push 0x8f49de */ { u32 v = 0x8f49deu; r_esp -= 4; W32(r_esp, v); }
    /* 007884d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007884d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007884d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007884e0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007884e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007884e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007884e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007884ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007884ef: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007884f2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007884f5: mov dword ptr [eax], 0xb44e98 */ W32((u32)(r_eax), 0xb44e98u);
    /* 007884fb: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 007884fe: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00788505: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00788508: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x78850du); f_008171e8();
    /* 0078850d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00788510: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00788517: mov esp, ebp */ r_esp = r_ebp;
    /* 00788519: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078851a: ret  */ FN_RET(0x007884c8); r_esp += 4; return;
}

void f_0078851c(void) /* sub_78851C */
{
    FN_ENTER(0x0078851c);
    /* 0078851c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078851d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0078851f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00788521: call 0x788540 */ r_esp -= 4; W32(r_esp, 0x788526u); f_00788540();
    /* 00788526: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0078852a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0078852c: jne 0x788532 */ if (!fZ) goto L_00788532;
L_0078852e:; BB(0x0078852e);
    /* 0078852e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078852f: ret 4 */ FN_RET(0x0078851c); r_esp += 8; return;
L_00788532:; BB(0x00788532);
    /* 00788532: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00788533: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x788538u); f_005c2f74();
    /* 00788538: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00788539: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0078853a: ret 4 */ FN_RET(0x0078851c); r_esp += 8; return;
}

void f_00788540(void) /* sub_788540 */
{
    FN_ENTER(0x00788540);
    /* 00788540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00788541: mov ebp, esp */ r_ebp = r_esp;
    /* 00788543: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00788545: push 0x8f4a06 */ { u32 v = 0x8f4a06u; r_esp -= 4; W32(r_esp, v); }
    /* 0078854a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00788550: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00788551: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00788558: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0078855b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0078855e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00788561: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00788564: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00788567: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0078856a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078856d: mov dword ptr [eax], 0xb44ea8 */ W32((u32)(r_eax), 0xb44ea8u);
    /* 00788573: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00788576: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078857d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00788580: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x788585u); f_008171e8();
    /* 00788585: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00788588: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078858f: mov esp, ebp */ r_esp = r_ebp;
    /* 00788591: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00788592: ret  */ FN_RET(0x00788540); r_esp += 4; return;
}

void f_00788594(void) /* sub_788594 */
{
    FN_ENTER(0x00788594);
    /* 00788594: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00788595: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00788597: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00788599: call 0x7885b8 */ r_esp -= 4; W32(r_esp, 0x78859eu); f_007885b8();
    /* 0078859e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007885a2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007885a4: jne 0x7885aa */ if (!fZ) goto L_007885aa;
L_007885a6:; BB(0x007885a6);
    /* 007885a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007885a7: ret 4 */ FN_RET(0x00788594); r_esp += 8; return;
L_007885aa:; BB(0x007885aa);
    /* 007885aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007885ab: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7885b0u); f_005c2f74();
    /* 007885b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007885b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007885b2: ret 4 */ FN_RET(0x00788594); r_esp += 8; return;
}

void f_007885b8(void) /* sub_7885B8 */
{
    FN_ENTER(0x007885b8);
    /* 007885b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007885b9: mov ebp, esp */ r_ebp = r_esp;
    /* 007885bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007885bd: push 0x8f4a2e */ { u32 v = 0x8f4a2eu; r_esp -= 4; W32(r_esp, v); }
    /* 007885c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007885c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007885c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007885d0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007885d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007885d6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007885d9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007885dc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007885df: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007885e2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007885e9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007885ec: mov dword ptr [eax], 0xb44e88 */ W32((u32)(r_eax), 0xb44e88u);
    /* 007885f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007885f4: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007885f7: call 0x719948 */ r_esp -= 4; W32(r_esp, 0x7885fcu); f_00719948();
    /* 007885fc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007885ff: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00788602: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00788605: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078860c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0078860f: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x788614u); f_008171e8();
    /* 00788614: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00788617: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078861e: mov esp, ebp */ r_esp = r_ebp;
    /* 00788620: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00788621: ret  */ FN_RET(0x007885b8); r_esp += 4; return;
}

void f_00788624(void) /* sub_788624 */
{
    FN_ENTER(0x00788624);
    /* 00788624: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00788625: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00788627: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00788629: call 0x788648 */ r_esp -= 4; W32(r_esp, 0x78862eu); f_00788648();
    /* 0078862e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00788632: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00788634: jne 0x78863a */ if (!fZ) goto L_0078863a;
L_00788636:; BB(0x00788636);
    /* 00788636: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00788637: ret 4 */ FN_RET(0x00788624); r_esp += 8; return;
L_0078863a:; BB(0x0078863a);
    /* 0078863a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078863b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x788640u); f_005c2f74();
    /* 00788640: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00788641: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00788642: ret 4 */ FN_RET(0x00788624); r_esp += 8; return;
}

void f_00788648(void) /* sub_788648 */
{
    FN_ENTER(0x00788648);
    /* 00788648: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00788649: mov ebp, esp */ r_ebp = r_esp;
    /* 0078864b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0078864d: push 0x8f4a48 */ { u32 v = 0x8f4a48u; r_esp -= 4; W32(r_esp, v); }
    /* 00788652: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00788658: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00788659: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00788660: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00788663: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00788666: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00788669: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0078866c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0078866f: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00788672: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00788679: mov esi, dword ptr [ebp - 0x48] */ r_esi = R32((u32)(r_ebp+0xffffffb8u));
    /* 0078867c: fld dword ptr [0x97a748] */ FPUSH(R_F32((u32)(0x97a748u)));
    /* 00788682: movzx edi, byte ptr [esi + 0x2b] */ r_edi = (u32)R8((u32)(r_esi+0x2bu));
    /* 00788686: movzx eax, byte ptr [esi + 0x2f] */ r_eax = (u32)R8((u32)(r_esi+0x2fu));
    /* 0078868a: movzx edx, byte ptr [esi + 0x2e] */ r_edx = (u32)R8((u32)(r_esi+0x2eu));
    /* 0078868e: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00788690: mov dword ptr [esi], 0xb44eb8 */ W32((u32)(r_esi), 0xb44eb8u);
    /* 00788696: mov dword ptr [ebp - 0x44], edi */ W32((u32)(r_ebp+0xffffffbcu), r_edi);
    /* 00788699: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 0078869c: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0078869f: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 007886a2: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007886a4: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007886a6: fnstcw word ptr [ebp - 0x34] */ W16((u32)(r_ebp+0xffffffccu), fcw);
    /* 007886a9: movzx eax, word ptr [ebp - 0x34] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffccu));
    /* 007886ad: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007886b2: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 007886b5: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 007886b8: fistp qword ptr [ebp - 0x24] */ W64((u32)(r_ebp+0xffffffdcu), (u64)fx_int64(ST(0))); FPOP();
    /* 007886bb: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 007886be: movzx eax, byte ptr [esi + 0x2a] */ r_eax = (u32)R8((u32)(r_esi+0x2au));
    /* 007886c2: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007886c5: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 007886c8: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 007886cb: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 007886cd: shl ebx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 007886d0: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 007886d3: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 007886d6: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 007886d8: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 007886da: movzx edx, byte ptr [esi + 0x2d] */ r_edx = (u32)R8((u32)(r_esi+0x2du));
    /* 007886de: fnstcw word ptr [ebp - 0x34] */ W16((u32)(r_ebp+0xffffffccu), fcw);
    /* 007886e1: movzx eax, word ptr [ebp - 0x34] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffccu));
    /* 007886e5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007886ea: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 007886ed: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 007886f0: fistp qword ptr [ebp - 0x24] */ W64((u32)(r_ebp+0xffffffdcu), (u64)fx_int64(ST(0))); FPOP();
    /* 007886f3: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 007886f6: movzx eax, byte ptr [esi + 0x29] */ r_eax = (u32)R8((u32)(r_esi+0x29u));
    /* 007886fa: movzx ecx, byte ptr [ebp - 0x24] */ r_ecx = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 007886fe: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00788701: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 00788704: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00788706: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00788709: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 0078870c: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0078870e: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00788711: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00788713: fnstcw word ptr [ebp - 0x34] */ W16((u32)(r_ebp+0xffffffccu), fcw);
    /* 00788716: movzx eax, word ptr [ebp - 0x34] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffccu));
    /* 0078871a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0078871f: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00788722: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 00788725: fistp qword ptr [ebp - 0x24] */ W64((u32)(r_ebp+0xffffffdcu), (u64)fx_int64(ST(0))); FPOP();
    /* 00788728: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 0078872b: movzx eax, byte ptr [esi + 0x28] */ r_eax = (u32)R8((u32)(r_esi+0x28u));
    /* 0078872f: movzx edx, byte ptr [ebp - 0x24] */ r_edx = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 00788733: movzx esi, byte ptr [esi + 0x2c] */ r_esi = (u32)R8((u32)(r_esi+0x2cu));
    /* 00788737: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0078873a: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 0078873d: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0078873f: mov dword ptr [ebp - 0x3c], esi */ W32((u32)(r_ebp+0xffffffc4u), r_esi);
    /* 00788742: fild dword ptr [ebp - 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffc4u)));
    /* 00788745: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00788747: or ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00788749: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0078874b: fnstcw word ptr [ebp - 0x34] */ W16((u32)(r_ebp+0xffffffccu), fcw);
    /* 0078874e: movzx eax, word ptr [ebp - 0x34] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffccu));
    /* 00788752: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00788757: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0078875a: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 0078875d: fistp qword ptr [ebp - 0x24] */ W64((u32)(r_ebp+0xffffffdcu), (u64)fx_int64(ST(0))); FPOP();
    /* 00788760: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 00788763: movzx eax, byte ptr [ebp - 0x24] */ r_eax = (u32)R8((u32)(r_ebp+0xffffffdcu));
    /* 00788767: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0078876a: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0078876c: or ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 0078876e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0078876f: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00788775: call 0x719948 */ r_esp -= 4; W32(r_esp, 0x78877au); f_00719948();
    /* 0078877a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0078877d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00788784: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00788787: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x78878cu); f_008171e8();
    /* 0078878c: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0078878f: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00788792: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00788795: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00788798: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078879f: mov esp, ebp */ r_esp = r_ebp;
    /* 007887a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007887a2: ret  */ FN_RET(0x00788648); r_esp += 4; return;
}

void f_007887a4(void) /* sub_7887A4 */
{
    FN_ENTER(0x007887a4);
    /* 007887a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007887a5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007887a7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007887a9: call 0x7887c8 */ r_esp -= 4; W32(r_esp, 0x7887aeu); f_007887c8();
    /* 007887ae: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007887b2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007887b4: jne 0x7887ba */ if (!fZ) goto L_007887ba;
L_007887b6:; BB(0x007887b6);
    /* 007887b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007887b7: ret 4 */ FN_RET(0x007887a4); r_esp += 8; return;
L_007887ba:; BB(0x007887ba);
    /* 007887ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007887bb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7887c0u); f_005c2f74();
    /* 007887c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007887c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007887c2: ret 4 */ FN_RET(0x007887a4); r_esp += 8; return;
}

void f_007887c8(void) /* sub_7887C8 */
{
    FN_ENTER(0x007887c8);
    /* 007887c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007887c9: mov ebp, esp */ r_ebp = r_esp;
    /* 007887cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007887cd: push 0x8f4a64 */ { u32 v = 0x8f4a64u; r_esp -= 4; W32(r_esp, v); }
    /* 007887d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007887d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007887d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007887e0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007887e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007887e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007887e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007887ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007887ef: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007887f2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007887f5: mov dword ptr [ecx], 0xb44ec8 */ W32((u32)(r_ecx), 0xb44ec8u);
    /* 007887fb: mov dword ptr [0xa9c480], 0 */ W32((u32)(0xa9c480u), 0x0u);
    /* 00788805: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0078880c: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x788811u); f_008171e8();
    /* 00788811: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00788814: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0078881b: mov esp, ebp */ r_esp = r_ebp;
    /* 0078881d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0078881e: ret  */ FN_RET(0x007887c8); r_esp += 4; return;
}

void f_00788820(void) /* sub_788820 */
{
    FN_ENTER(0x00788820);
    /* 00788820: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00788821: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00788824: mov edi, ecx */ r_edi = r_ecx;
    /* 00788826: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x78882bu); f_004d28a4();
    /* 0078882b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0078882d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0078882f: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x788834u); f_0082acfc();
    /* 00788834: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00788836: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00788838: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x78883du); f_0082acfc();
    /* 0078883d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00788840: fld dword ptr [edi + 0x1c] */ FPUSH(R_F32((u32)(r_edi+0x1cu)));
    /* 00788843: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 0078884b: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0078884e: mov dword ptr [esp + 0x2c], 4 */ W32((u32)(r_esp+0x2cu), 0x4u);
    /* 00788856: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0078885a: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 0078885e: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00788862: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 00788866: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 0078886b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00788870: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00788874: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 00788878: fistp qword ptr [esp + 0x50] */ W64((u32)(r_esp+0x50u), (u64)fx_int64(ST(0))); FPOP();
    /* 0078887c: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 00788880: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00788884: mov byte ptr [edi + 0x23], al */ W8((u32)(r_edi+0x23u), (u8)r_eax);
    /* 00788887: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0078888e: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00788896: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0078889a: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 0078889d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0078889f: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007888a3: mov dword ptr [eax + 8], 0x44200000 */ W32((u32)(r_eax+0x8u), 0x44200000u);
    /* 007888aa: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007888ae: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
    /* 007888b5: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 007888b9: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 007888bc: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007888bf: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007888c3: mov dword ptr [eax + 0x10], 0x44200000 */ W32((u32)(r_eax+0x10u), 0x44200000u);
    /* 007888ca: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007888ce: mov dword ptr [eax + 0x14], 0x43f00000 */ W32((u32)(r_eax+0x14u), 0x43f00000u);
    /* 007888d5: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 007888d9: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 007888dc: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 007888df: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007888e3: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 007888ea: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007888ee: mov dword ptr [eax + 0x1c], 0x43f00000 */ W32((u32)(r_eax+0x1cu), 0x43f00000u);
    /* 007888f5: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 007888f9: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 007888fc: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 007888ff: movzx ecx, byte ptr [edi + 0x23] */ r_ecx = (u32)R8((u32)(r_edi+0x23u));
    /* 00788903: mov dword ptr [esp + 0x58], ecx */ W32((u32)(r_esp+0x58u), r_ecx);
    /* 00788907: fild dword ptr [esp + 0x58] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x58u)));
    /* 0078890b: fcomp dword ptr [0x97a744] */ fx_compare(ST(0), R_F32((u32)(0x97a744u))); FPOP();
    /* 00788911: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00788913: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00788914: je 0x78892c */ if (fZ) goto L_0078892c;
L_00788916:; BB(0x00788916);
    /* 00788916: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 0078891a: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 0078891c: push 0xc1200000 */ { u32 v = 0xc1200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00788921: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00788923: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00788924: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x788929u); f_0082b5d8();
    /* 00788929: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0078892c:; BB(0x0078892c);
    /* 0078892c: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x788931u); f_004d2968();
    /* 00788931: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00788934: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00788935: ret  */ FN_RET(0x00788820); r_esp += 4; return;
}

void f_00788938(void) /* sub_788938 */
{
    FN_ENTER(0x00788938);
    /* 00788938: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00788939: mov edi, ecx */ r_edi = r_ecx;
    /* 0078893b: push dword ptr [0xaca324] */ { u32 v = R32((u32)(0xaca324u)); r_esp -= 4; W32(r_esp, v); }
    /* 00788941: mov ecx, edi */ r_ecx = r_edi;
    /* 00788943: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x788948u); f_008193cc();
    /* 00788948: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0078894c: mov dword ptr [edi], 0xb44e98 */ W32((u32)(r_edi), 0xb44e98u);
    /* 00788952: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 00788955: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00788957: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
    /* 0078895e: mov byte ptr [edi + 0x22], al */ W8((u32)(r_edi+0x22u), (u8)r_eax);
    /* 00788961: mov byte ptr [edi + 0x21], al */ W8((u32)(r_edi+0x21u), (u8)r_eax);
    /* 00788964: mov byte ptr [edi + 0x20], al */ W8((u32)(r_edi+0x20u), (u8)r_eax);
    /* 00788967: mov eax, edi */ r_eax = r_edi;
    /* 00788969: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0078896a: ret 8 */ FN_RET(0x00788938); r_esp += 12; return;
}

void f_00788970(void) /* sub_788970 */
{
    FN_ENTER(0x00788970);
    /* 00788970: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00788971: mov edi, ecx */ r_edi = r_ecx;
    /* 00788973: fld dword ptr [0x97a730] */ FPUSH(R_F32((u32)(0x97a730u)));
    /* 00788979: fadd dword ptr [edi + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x1cu));
    /* 0078897c: fcom dword ptr [0x97a72c] */ fx_compare(ST(0), R_F32((u32)(0x97a72cu))); 
    /* 00788982: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00788984: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00788985: jb 0x7889ab */ if (fC) goto L_007889ab;
L_00788987:; BB(0x00788987);
    /* 00788987: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00788989: mov eax, 0x437f0000 */ r_eax = 0x437f0000u;
    /* 0078898e: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 00788991: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 00788994: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00788996: je 0x78899c */ if (fZ) goto L_0078899c;
L_00788998:; BB(0x00788998);
    /* 00788998: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00788999: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x78899bu); call_ind(t); }
    /* 0078899b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0078899c:; BB(0x0078899c);
    /* 0078899c: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 007889a0: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007889a5: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 007889a9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007889aa: ret  */ FN_RET(0x00788970); r_esp += 4; return;
L_007889ab:; BB(0x007889ab);
    /* 007889ab: fstp dword ptr [edi + 0x1c] */ W_F32((u32)(r_edi+0x1cu), ST(0)); FPOP();
    /* 007889ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007889af: ret  */ FN_RET(0x00788970); r_esp += 4; return;
}

void f_007889b0(void) /* sub_7889B0 */
{
    FN_ENTER(0x007889b0);
    /* 007889b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007889b1: mov edi, ecx */ r_edi = r_ecx;
    /* 007889b3: push dword ptr [0xaca324] */ { u32 v = R32((u32)(0xaca324u)); r_esp -= 4; W32(r_esp, v); }
    /* 007889b9: mov ecx, edi */ r_ecx = r_edi;
    /* 007889bb: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7889c0u); f_008193cc();
    /* 007889c0: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 007889c4: mov dword ptr [edi], 0xb44ea8 */ W32((u32)(r_edi), 0xb44ea8u);
    /* 007889ca: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 007889cd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007889cf: mov dword ptr [edi + 0x1c], 0x437f0000 */ W32((u32)(r_edi+0x1cu), 0x437f0000u);
    /* 007889d6: mov byte ptr [edi + 0x22], al */ W8((u32)(r_edi+0x22u), (u8)r_eax);
    /* 007889d9: mov byte ptr [edi + 0x21], al */ W8((u32)(r_edi+0x21u), (u8)r_eax);
    /* 007889dc: mov byte ptr [edi + 0x20], al */ W8((u32)(r_edi+0x20u), (u8)r_eax);
    /* 007889df: mov eax, edi */ r_eax = r_edi;
    /* 007889e1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007889e2: ret 8 */ FN_RET(0x007889b0); r_esp += 12; return;
}

void f_007889e8(void) /* sub_7889E8 */
{
    FN_ENTER(0x007889e8);
    /* 007889e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007889e9: mov edi, ecx */ r_edi = r_ecx;
    /* 007889eb: fld dword ptr [0x97a724] */ FPUSH(R_F32((u32)(0x97a724u)));
    /* 007889f1: fadd dword ptr [edi + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x1cu));
    /* 007889f4: fcom dword ptr [0x97a720] */ fx_compare(ST(0), R_F32((u32)(0x97a720u))); 
    /* 007889fa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007889fc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007889fd: ja 0x788a20 */ if ((!fC&&!fZ)) goto L_00788a20;
L_007889ff:; BB(0x007889ff);
    /* 007889ff: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00788a01: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00788a03: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 00788a06: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 00788a09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00788a0b: je 0x788a11 */ if (fZ) goto L_00788a11;
L_00788a0d:; BB(0x00788a0d);
    /* 00788a0d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00788a0e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x788a10u); call_ind(t); }
    /* 00788a10: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00788a11:; BB(0x00788a11);
    /* 00788a11: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00788a15: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00788a1a: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00788a1e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00788a1f: ret  */ FN_RET(0x007889e8); r_esp += 4; return;
L_00788a20:; BB(0x00788a20);
    /* 00788a20: fstp dword ptr [edi + 0x1c] */ W_F32((u32)(r_edi+0x1cu), ST(0)); FPOP();
    /* 00788a23: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00788a24: ret  */ FN_RET(0x007889e8); r_esp += 4; return;
}

void f_00788a28(void) /* sub_788A28 */
{
    FN_ENTER(0x00788a28);
    /* 00788a28: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00788a29: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00788a2b: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00788a2f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00788a31: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x788a36u); f_008193cc();
    /* 00788a36: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00788a3a: mov dword ptr [ebx], 0xb44e88 */ W32((u32)(r_ebx), 0xb44e88u);
    /* 00788a40: mov dword ptr [ebx + 0x28], edx */ W32((u32)(r_ebx+0x28u), r_edx);
    /* 00788a43: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00788a45: mov dword ptr [ebx + 0x1c], 0 */ W32((u32)(r_ebx+0x1cu), 0x0u);
    /* 00788a4c: mov byte ptr [ebx + 0x21], al */ W8((u32)(r_ebx+0x21u), (u8)r_eax);
    /* 00788a4f: mov byte ptr [ebx + 0x20], al */ W8((u32)(r_ebx+0x20u), (u8)r_eax);
    /* 00788a52: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00788a56: mov byte ptr [ebx + 0x22], 0xff */ W8((u32)(r_ebx+0x22u), 0xffu);
    /* 00788a5a: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 00788a5d: mov eax, ebx */ r_eax = r_ebx;
    /* 00788a5f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00788a60: ret 0xc */ FN_RET(0x00788a28); r_esp += 16; return;
}

void f_00788a64(void) /* sub_788A64 */
{
    FN_ENTER(0x00788a64);
    /* 00788a64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00788a65: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00788a68: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00788a6a: fld dword ptr [0x97a718] */ FPUSH(R_F32((u32)(0x97a718u)));
    /* 00788a70: fadd dword ptr [ebp + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x1cu));
    /* 00788a73: fcom dword ptr [0x97a714] */ fx_compare(ST(0), R_F32((u32)(0x97a714u))); 
    /* 00788a79: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00788a7b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00788a7c: jb 0x788aad */ if (fC) goto L_00788aad;
L_00788a7e:; BB(0x00788a7e);
    /* 00788a7e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00788a80: fld dword ptr [0x97a714] */ FPUSH(R_F32((u32)(0x97a714u)));
    /* 00788a86: mov eax, 0x43000000 */ r_eax = 0x43000000u;
    /* 00788a8b: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 00788a8e: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 00788a91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00788a93: je 0x788a9e */ if (fZ) goto L_00788a9e;
L_00788a95:; BB(0x00788a95);
    /* 00788a95: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00788a97: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00788a98: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x788a9au); call_ind(t); }
    /* 00788a9a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00788a9b: fld dword ptr [ebp + 0x1c] */ FPUSH(R_F32((u32)(r_ebp+0x1cu)));
L_00788a9e:; BB(0x00788a9e);
    /* 00788a9e: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00788aa2: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00788aa7: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 00788aab: jmp 0x788ab0 */ goto L_00788ab0;
L_00788aad:; BB(0x00788aad);
    /* 00788aad: fst dword ptr [ebp + 0x1c] */ W_F32((u32)(r_ebp+0x1cu), ST(0));
L_00788ab0:; BB(0x00788ab0);
    /* 00788ab0: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00788ab3: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00788ab7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00788abc: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00788ac0: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00788ac4: fistp qword ptr [esp + 0x10] */ W64((u32)(r_esp+0x10u), (u64)fx_int64(ST(0))); FPOP();
    /* 00788ac8: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00788acb: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00788acf: mov byte ptr [ebp + 0x23], al */ W8((u32)(r_ebp+0x23u), (u8)r_eax);
    /* 00788ad2: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00788ad5: push dword ptr [ebp + 0x24] */ { u32 v = R32((u32)(r_ebp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00788ad8: call 0x719948 */ r_esp -= 4; W32(r_esp, 0x788addu); f_00719948();
    /* 00788add: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00788ae0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00788ae1: ret  */ FN_RET(0x00788a64); r_esp += 4; return;
}

void f_00788ae4(void) /* sub_788AE4 */
{
    FN_ENTER(0x00788ae4);
    /* 00788ae4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00788ae5: mov ebp, esp */ r_ebp = r_esp;
    /* 00788ae7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00788ae9: push 0x8f4a80 */ { u32 v = 0x8f4a80u; r_esp -= 4; W32(r_esp, v); }
    /* 00788aee: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00788af4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00788af5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00788afc: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00788aff: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00788b02: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 00788b05: mov dword ptr [ebp - 0x30], esi */ W32((u32)(r_ebp+0xffffffd0u), r_esi);
    /* 00788b08: mov dword ptr [ebp - 0x2c], ebx */ W32((u32)(r_ebp+0xffffffd4u), r_ebx);
    /* 00788b0b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00788b0e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00788b11: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00788b14: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00788b17: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00788b1a: movzx eax, byte ptr [ebp + 0x14] */ r_eax = (u32)R8((u32)(r_ebp+0x14u));
    /* 00788b1e: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 00788b21: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00788b24: movzx eax, byte ptr [ebp + 0x18] */ r_eax = (u32)R8((u32)(r_ebp+0x18u));
    /* 00788b28: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00788b2b: movzx eax, byte ptr [ebp + 0x1c] */ r_eax = (u32)R8((u32)(r_ebp+0x1cu));
    /* 00788b2f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00788b32: movzx eax, byte ptr [ebp + 0x20] */ r_eax = (u32)R8((u32)(r_ebp+0x20u));
    /* 00788b36: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00788b39: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x788b3eu); f_008193cc();
    /* 00788b3e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00788b45: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00788b48: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00788b4b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00788b4e: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 00788b51: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 00788b54: mov dword ptr [ecx], 0xb44eb8 */ W32((u32)(r_ecx), 0xb44eb8u);
    /* 00788b5a: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00788b60: mov dword ptr [ecx + 0x20], 0 */ W32((u32)(r_ecx+0x20u), 0x0u);
    /* 00788b67: call 0x719968 */ r_esp -= 4; W32(r_esp, 0x788b6cu); f_00719968();
    /* 00788b6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00788b6d: mov edx, eax */ r_edx = r_eax;
    /* 00788b6f: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00788b72: mov ecx, edx */ r_ecx = r_edx;
    /* 00788b74: shr ecx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00788b77: mov byte ptr [eax + 0x2b], cl */ W8((u32)(r_eax+0x2bu), (u8)r_ecx);
    /* 00788b7a: mov ebx, edx */ r_ebx = r_edx;
    /* 00788b7c: shr ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00788b7f: mov byte ptr [eax + 0x2a], bl */ W8((u32)(r_eax+0x2au), (u8)r_ebx);
    /* 00788b82: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00788b85: mov ecx, edx */ r_ecx = r_edx;
    /* 00788b87: shr ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r; fC = (c <= 32) ? ((a >> (c - 1)) & 1) : 0; fO = (a >> 31) & 1; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00788b8a: mov byte ptr [eax + 0x29], cl */ W8((u32)(r_eax+0x29u), (u8)r_ecx);
    /* 00788b8d: mov byte ptr [eax + 0x28], dl */ W8((u32)(r_eax+0x28u), (u8)r_edx);
    /* 00788b90: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00788b93: mov byte ptr [eax + 0x2f], dl */ W8((u32)(r_eax+0x2fu), (u8)r_edx);
    /* 00788b96: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00788b99: mov byte ptr [eax + 0x2e], dl */ W8((u32)(r_eax+0x2eu), (u8)r_edx);
    /* 00788b9c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00788b9f: mov byte ptr [eax + 0x2d], dl */ W8((u32)(r_eax+0x2du), (u8)r_edx);
    /* 00788ba2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00788ba5: mov byte ptr [eax + 0x2c], dl */ W8((u32)(r_eax+0x2cu), (u8)r_edx);
    /* 00788ba8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00788bab: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00788bb2: mov esp, ebp */ r_esp = r_ebp;
    /* 00788bb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00788bb5: ret 0x1c */ FN_RET(0x00788ae4); r_esp += 32; return;
}

void f_00788bb8(void) /* sub_788BB8 */
{
    FN_ENTER(0x00788bb8);
    /* 00788bb8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00788bb9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00788bbb: fild dword ptr [ebp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x20u)));
    /* 00788bbe: fild dword ptr [ebp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x24u)));
    /* 00788bc1: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 00788bc3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00788bc4: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00788bc7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00788bc9: call 0x788bfc */ r_esp -= 4; W32(r_esp, 0x788bceu); f_00788bfc();
    /* 00788bce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00788bcf: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00788bd5: call 0x719948 */ r_esp -= 4; W32(r_esp, 0x788bdau); f_00719948();
    /* 00788bda: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00788bdd: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 00788be0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00788be3: cmp eax, dword ptr [ebp + 0x24] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00788be6: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 00788be9: jle 0x788bf8 */ if ((fZ||fS!=fO)) goto L_00788bf8;
L_00788beb:; BB(0x00788beb);
    /* 00788beb: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 00788bef: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00788bf4: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
L_00788bf8:; BB(0x00788bf8);
    /* 00788bf8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00788bf9: ret  */ FN_RET(0x00788bb8); r_esp += 4; return;
}

void f_00788bfc(void) /* sub_788BFC */
{
    FN_ENTER(0x00788bfc);
    /* 00788bfc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00788bfd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00788bfe: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00788c01: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00788c05: movzx eax, byte ptr [ecx + 0x2b] */ r_eax = (u32)R8((u32)(r_ecx+0x2bu));
    /* 00788c09: movzx edx, byte ptr [ecx + 0x2f] */ r_edx = (u32)R8((u32)(r_ecx+0x2fu));
    /* 00788c0d: movzx esi, byte ptr [ecx + 0x2d] */ r_esi = (u32)R8((u32)(r_ecx+0x2du));
    /* 00788c11: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00788c14: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00788c17: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00788c19: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00788c1d: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00788c21: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00788c23: movzx edx, byte ptr [ecx + 0x2e] */ r_edx = (u32)R8((u32)(r_ecx+0x2eu));
    /* 00788c27: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00788c29: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00788c2d: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00788c32: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00788c37: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00788c3b: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00788c3f: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 00788c43: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00788c47: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00788c4b: movzx eax, byte ptr [ecx + 0x2a] */ r_eax = (u32)R8((u32)(r_ecx+0x2au));
    /* 00788c4f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00788c53: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00788c57: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00788c59: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00788c5d: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00788c61: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00788c63: shl edi, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 00788c66: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00788c68: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00788c6c: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00788c71: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00788c76: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00788c7a: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00788c7e: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 00788c82: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00788c86: movzx eax, byte ptr [ecx + 0x29] */ r_eax = (u32)R8((u32)(r_ecx+0x29u));
    /* 00788c8a: movzx edx, byte ptr [esp + 0x20] */ r_edx = (u32)R8((u32)(r_esp+0x20u));
    /* 00788c8f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00788c93: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00788c97: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00788c99: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00788c9d: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00788ca1: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00788ca3: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00788ca6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00788ca8: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00788cac: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00788cb1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00788cb6: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00788cba: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00788cbe: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 00788cc2: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00788cc6: movzx eax, byte ptr [ecx + 0x28] */ r_eax = (u32)R8((u32)(r_ecx+0x28u));
    /* 00788cca: movzx esi, byte ptr [esp + 0x20] */ r_esi = (u32)R8((u32)(r_esp+0x20u));
    /* 00788ccf: movzx ecx, byte ptr [ecx + 0x2c] */ r_ecx = (u32)R8((u32)(r_ecx+0x2cu));
    /* 00788cd3: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00788cd7: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00788cdb: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00788cdd: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00788ce1: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00788ce5: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00788ce7: or edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00788ce9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00788ceb: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00788cef: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00788cf4: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00788cf9: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00788cfd: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00788d01: fistp qword ptr [esp + 0x20] */ W64((u32)(r_esp+0x20u), (u64)fx_int64(ST(0))); FPOP();
    /* 00788d05: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00788d09: movzx eax, byte ptr [esp + 0x20] */ r_eax = (u32)R8((u32)(r_esp+0x20u));
    /* 00788d0e: shl esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00788d11: or edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00788d13: or edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 00788d15: mov eax, edi */ r_eax = r_edi;
    /* 00788d17: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00788d1a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00788d1b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00788d1c: ret 4 */ FN_RET(0x00788bfc); r_esp += 8; return;
}

void f_00788d20(void) /* sub_788D20 */
{
    FN_ENTER(0x00788d20);
    /* 00788d20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00788d21: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00788d23: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00788d27: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00788d29: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x788d2eu); f_008193cc();
    /* 00788d2e: mov dword ptr [ebp], 0xb44ec8 */ W32((u32)(r_ebp), 0xb44ec8u);
    /* 00788d35: mov dword ptr [0xa9c480], ebp */ W32((u32)(0xa9c480u), r_ebp);
    /* 00788d3b: mov eax, ebp */ r_eax = r_ebp;
    /* 00788d3d: mov dword ptr [ebp + 0x24], 0 */ W32((u32)(r_ebp+0x24u), 0x0u);
    /* 00788d44: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00788d45: ret 4 */ FN_RET(0x00788d20); r_esp += 8; return;
}

void f_00788d48(void) /* sub_788D48 */
{
    FN_ENTER(0x00788d48);
    /* 00788d48: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 00788d4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00788d4d: je 0x788d6f */ if (fZ) goto L_00788d6f;
L_00788d4f:; BB(0x00788d4f);
    /* 00788d4f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00788d52: je 0x788d6a */ if (fZ) goto L_00788d6a;
L_00788d54:; BB(0x00788d54);
    /* 00788d54: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00788d57: jne 0x788d5f */ if (!fZ) goto L_00788d5f;
L_00788d59:; BB(0x00788d59);
    /* 00788d59: call 0x788dac */ r_esp -= 4; W32(r_esp, 0x788d5eu); f_00788dac();
    /* 00788d5e: ret  */ FN_RET(0x00788d48); r_esp += 4; return;
L_00788d5f:; BB(0x00788d5f);
    /* 00788d5f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00788d62: jne 0x788d6f */ if (!fZ) goto L_00788d6f;
L_00788d64:; BB(0x00788d64);
    /* 00788d64: call 0x788d70 */ r_esp -= 4; W32(r_esp, 0x788d69u); f_00788d70();
    /* 00788d69: ret  */ FN_RET(0x00788d48); r_esp += 4; return;
L_00788d6a:; BB(0x00788d6a);
    /* 00788d6a: call 0x788de8 */ r_esp -= 4; W32(r_esp, 0x788d6fu); f_00788de8();
L_00788d6f:; BB(0x00788d6f);
    /* 00788d6f: ret  */ FN_RET(0x00788d48); r_esp += 4; return;
}

void f_00788d70(void) /* sub_788D70 */
{
    FN_ENTER(0x00788d70);
    /* 00788d70: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00788d71: mov edi, ecx */ r_edi = r_ecx;
    /* 00788d73: fld dword ptr [0x97a710] */ FPUSH(R_F32((u32)(0x97a710u)));
    /* 00788d79: fadd dword ptr [edi + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x1cu));
    /* 00788d7c: fcom dword ptr [0x97a70c] */ fx_compare(ST(0), R_F32((u32)(0x97a70cu))); 
    /* 00788d82: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00788d84: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00788d85: jb 0x788da5 */ if (fC) goto L_00788da5;
L_00788d87:; BB(0x00788d87);
    /* 00788d87: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00788d89: mov eax, 0x43000000 */ r_eax = 0x43000000u;
    /* 00788d8e: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 00788d91: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 00788d94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00788d96: je 0x788d9c */ if (fZ) goto L_00788d9c;
L_00788d98:; BB(0x00788d98);
    /* 00788d98: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00788d99: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x788d9bu); call_ind(t); }
    /* 00788d9b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00788d9c:; BB(0x00788d9c);
    /* 00788d9c: mov dword ptr [edi + 0x24], 0 */ W32((u32)(r_edi+0x24u), 0x0u);
    /* 00788da3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00788da4: ret  */ FN_RET(0x00788d70); r_esp += 4; return;
L_00788da5:; BB(0x00788da5);
    /* 00788da5: fstp dword ptr [edi + 0x1c] */ W_F32((u32)(r_edi+0x1cu), ST(0)); FPOP();
    /* 00788da8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00788da9: ret  */ FN_RET(0x00788d70); r_esp += 4; return;
}

void f_00788dac(void) /* sub_788DAC */
{
    FN_ENTER(0x00788dac);
    /* 00788dac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00788dad: mov edi, ecx */ r_edi = r_ecx;
    /* 00788daf: fld dword ptr [0x97a708] */ FPUSH(R_F32((u32)(0x97a708u)));
    /* 00788db5: fadd dword ptr [edi + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x1cu));
    /* 00788db8: fcom dword ptr [0x97a704] */ fx_compare(ST(0), R_F32((u32)(0x97a704u))); 
    /* 00788dbe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00788dc0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00788dc1: jb 0x788de1 */ if (fC) goto L_00788de1;
L_00788dc3:; BB(0x00788dc3);
    /* 00788dc3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00788dc5: mov eax, 0x437f0000 */ r_eax = 0x437f0000u;
    /* 00788dca: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 00788dcd: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 00788dd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00788dd2: je 0x788dd8 */ if (fZ) goto L_00788dd8;
L_00788dd4:; BB(0x00788dd4);
    /* 00788dd4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00788dd5: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x788dd7u); call_ind(t); }
    /* 00788dd7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00788dd8:; BB(0x00788dd8);
    /* 00788dd8: mov dword ptr [edi + 0x24], 0 */ W32((u32)(r_edi+0x24u), 0x0u);
    /* 00788ddf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00788de0: ret  */ FN_RET(0x00788dac); r_esp += 4; return;
L_00788de1:; BB(0x00788de1);
    /* 00788de1: fstp dword ptr [edi + 0x1c] */ W_F32((u32)(r_edi+0x1cu), ST(0)); FPOP();
    /* 00788de4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00788de5: ret  */ FN_RET(0x00788dac); r_esp += 4; return;
}

void f_00788de8(void) /* sub_788DE8 */
{
    FN_ENTER(0x00788de8);
    /* 00788de8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00788de9: mov edi, ecx */ r_edi = r_ecx;
    /* 00788deb: fld dword ptr [0x97a700] */ FPUSH(R_F32((u32)(0x97a700u)));
    /* 00788df1: fadd dword ptr [edi + 0x1c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x1cu));
    /* 00788df4: fcom dword ptr [0x97a6fc] */ fx_compare(ST(0), R_F32((u32)(0x97a6fcu))); 
    /* 00788dfa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00788dfc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00788dfd: ja 0x788e1a */ if ((!fC&&!fZ)) goto L_00788e1a;
L_00788dff:; BB(0x00788dff);
    /* 00788dff: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00788e01: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00788e03: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 00788e06: mov eax, dword ptr [edi + 0x28] */ r_eax = R32((u32)(r_edi+0x28u));
    /* 00788e09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00788e0b: je 0x788e11 */ if (fZ) goto L_00788e11;
L_00788e0d:; BB(0x00788e0d);
    /* 00788e0d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00788e0e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x788e10u); call_ind(t); }
    /* 00788e10: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00788e11:; BB(0x00788e11);
    /* 00788e11: mov dword ptr [edi + 0x24], 0 */ W32((u32)(r_edi+0x24u), 0x0u);
    /* 00788e18: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00788e19: ret  */ FN_RET(0x00788de8); r_esp += 4; return;
L_00788e1a:; BB(0x00788e1a);
    /* 00788e1a: fstp dword ptr [edi + 0x1c] */ W_F32((u32)(r_edi+0x1cu), ST(0)); FPOP();
    /* 00788e1d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00788e1e: ret  */ FN_RET(0x00788de8); r_esp += 4; return;
}

void f_00788e20(void) /* sub_788E20 */
{
    FN_ENTER(0x00788e20);
    /* 00788e20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00788e21: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00788e24: mov edi, ecx */ r_edi = r_ecx;
    /* 00788e26: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x788e2bu); f_004d28a4();
    /* 00788e2b: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00788e2d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00788e2f: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x788e34u); f_0082acfc();
    /* 00788e34: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00788e36: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00788e38: call 0x82acfc */ r_esp -= 4; W32(r_esp, 0x788e3du); f_0082acfc();
    /* 00788e3d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00788e40: fld dword ptr [edi + 0x1c] */ FPUSH(R_F32((u32)(r_edi+0x1cu)));
    /* 00788e43: mov dword ptr [esp + 0x28], 0 */ W32((u32)(r_esp+0x28u), 0x0u);
    /* 00788e4b: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00788e4e: mov dword ptr [esp + 0x2c], 4 */ W32((u32)(r_esp+0x2cu), 0x4u);
    /* 00788e56: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00788e5a: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 00788e5e: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00788e62: fnstcw word ptr [esp + 0x40] */ W16((u32)(r_esp+0x40u), fcw);
    /* 00788e66: movzx eax, word ptr [esp + 0x40] */ r_eax = (u32)R16((u32)(r_esp+0x40u));
    /* 00788e6b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00788e70: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 00788e74: fldcw word ptr [esp + 0x48] */ fcw = R16((u32)(r_esp+0x48u));
    /* 00788e78: fistp qword ptr [esp + 0x50] */ W64((u32)(r_esp+0x50u), (u64)fx_int64(ST(0))); FPOP();
    /* 00788e7c: fldcw word ptr [esp + 0x40] */ fcw = R16((u32)(r_esp+0x40u));
    /* 00788e80: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00788e84: mov byte ptr [edi + 0x23], al */ W8((u32)(r_edi+0x23u), (u8)r_eax);
    /* 00788e87: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00788e8e: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00788e96: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00788e9a: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 00788e9d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00788e9f: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00788ea3: mov dword ptr [eax + 8], 0x44200000 */ W32((u32)(r_eax+0x8u), 0x44200000u);
    /* 00788eaa: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00788eae: mov dword ptr [eax + 0xc], 0 */ W32((u32)(r_eax+0xcu), 0x0u);
    /* 00788eb5: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00788eb9: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 00788ebc: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00788ebf: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00788ec3: mov dword ptr [eax + 0x10], 0x44200000 */ W32((u32)(r_eax+0x10u), 0x44200000u);
    /* 00788eca: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00788ece: mov dword ptr [eax + 0x14], 0x43f00000 */ W32((u32)(r_eax+0x14u), 0x43f00000u);
    /* 00788ed5: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00788ed9: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 00788edc: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00788edf: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00788ee3: mov dword ptr [eax + 0x18], 0 */ W32((u32)(r_eax+0x18u), 0x0u);
    /* 00788eea: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00788eee: mov dword ptr [eax + 0x1c], 0x43f00000 */ W32((u32)(r_eax+0x1cu), 0x43f00000u);
    /* 00788ef5: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 00788ef9: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 00788efc: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00788eff: movzx ecx, byte ptr [edi + 0x23] */ r_ecx = (u32)R8((u32)(r_edi+0x23u));
    /* 00788f03: mov dword ptr [esp + 0x58], ecx */ W32((u32)(r_esp+0x58u), r_ecx);
    /* 00788f07: fild dword ptr [esp + 0x58] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x58u)));
    /* 00788f0b: fcomp dword ptr [0x97a6f8] */ fx_compare(ST(0), R_F32((u32)(0x97a6f8u))); FPOP();
    /* 00788f11: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00788f13: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00788f14: je 0x788f2c */ if (fZ) goto L_00788f2c;
L_00788f16:; BB(0x00788f16);
    /* 00788f16: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 00788f1a: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 00788f1c: push 0xc1200000 */ { u32 v = 0xc1200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00788f21: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00788f23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00788f24: call 0x82b5d8 */ r_esp -= 4; W32(r_esp, 0x788f29u); f_0082b5d8();
    /* 00788f29: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00788f2c:; BB(0x00788f2c);
    /* 00788f2c: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x788f31u); f_004d2968();
    /* 00788f31: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00788f34: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00788f35: ret  */ FN_RET(0x00788e20); r_esp += 4; return;
}

void f_00788f38(void) /* sub_788F38 */
{
    FN_ENTER(0x00788f38);
    /* 00788f38: mov ecx, dword ptr [0xa9c480] */ r_ecx = R32((u32)(0xa9c480u));
    /* 00788f3e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00788f40: je 0x788f62 */ if (fZ) goto L_00788f62;
L_00788f42:; BB(0x00788f42);
    /* 00788f42: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00788f46: mov dword ptr [ecx + 0x1c], 0x437f0000 */ W32((u32)(r_ecx+0x1cu), 0x437f0000u);
    /* 00788f4d: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 00788f50: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00788f52: mov dword ptr [ecx + 0x24], 1 */ W32((u32)(r_ecx+0x24u), 0x1u);
    /* 00788f59: mov byte ptr [ecx + 0x22], dl */ W8((u32)(r_ecx+0x22u), (u8)r_edx);
    /* 00788f5c: mov byte ptr [ecx + 0x21], dl */ W8((u32)(r_ecx+0x21u), (u8)r_edx);
    /* 00788f5f: mov byte ptr [ecx + 0x20], dl */ W8((u32)(r_ecx+0x20u), (u8)r_edx);
L_00788f62:; BB(0x00788f62);
    /* 00788f62: ret  */ FN_RET(0x00788f38); r_esp += 4; return;
}

void f_00788f64(void) /* sub_788F64 */
{
    FN_ENTER(0x00788f64);
    /* 00788f64: mov ecx, dword ptr [0xa9c480] */ r_ecx = R32((u32)(0xa9c480u));
    /* 00788f6a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00788f6c: je 0x788f8e */ if (fZ) goto L_00788f8e;
L_00788f6e:; BB(0x00788f6e);
    /* 00788f6e: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00788f72: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 00788f79: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 00788f7c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00788f7e: mov dword ptr [ecx + 0x24], 2 */ W32((u32)(r_ecx+0x24u), 0x2u);
    /* 00788f85: mov byte ptr [ecx + 0x22], dl */ W8((u32)(r_ecx+0x22u), (u8)r_edx);
    /* 00788f88: mov byte ptr [ecx + 0x21], dl */ W8((u32)(r_ecx+0x21u), (u8)r_edx);
    /* 00788f8b: mov byte ptr [ecx + 0x20], dl */ W8((u32)(r_ecx+0x20u), (u8)r_edx);
L_00788f8e:; BB(0x00788f8e);
    /* 00788f8e: ret  */ FN_RET(0x00788f64); r_esp += 4; return;
}

void f_00788f90(void) /* sub_788F90 */
{
    FN_ENTER(0x00788f90);
    /* 00788f90: mov eax, dword ptr [0xa9c480] */ r_eax = R32((u32)(0xa9c480u));
    /* 00788f95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00788f97: je 0x788f9d */ if (fZ) goto L_00788f9d;
L_00788f99:; BB(0x00788f99);
    /* 00788f99: mov eax, dword ptr [eax + 0x24] */ r_eax = R32((u32)(r_eax+0x24u));
    /* 00788f9c: ret  */ FN_RET(0x00788f90); r_esp += 4; return;
L_00788f9d:; BB(0x00788f9d);
    /* 00788f9d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00788f9f: ret  */ FN_RET(0x00788f90); r_esp += 4; return;
}

void f_00788fa0(void) /* sub_788FA0 */
{
    FN_ENTER(0x00788fa0);
    /* 00788fa0: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00788fa3: movzx eax, byte ptr [esp + 0x14] */ r_eax = (u32)R8((u32)(r_esp+0x14u));
    /* 00788fa8: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00788fac: fld dword ptr [0x97a7d8] */ FPUSH(R_F32((u32)(0x97a7d8u)));
    /* 00788fb2: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00788fb5: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00788fb7: mov ecx, eax */ r_ecx = r_eax;
    /* 00788fb9: and ecx, 0xf */ {  u32 a = r_ecx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00788fbc: shl ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00788fbf: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00788fc2: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00788fc5: mov ecx, eax */ r_ecx = r_eax;
    /* 00788fc7: and ecx, 0xf0 */ {  u32 a = r_ecx; u32 b = 0xf0u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00788fcd: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00788fd1: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00788fd5: mov ecx, dword ptr [0xa9c484] */ r_ecx = R32((u32)(0xa9c484u));
    /* 00788fdb: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00788fdd: fadd dword ptr [ecx + eax*8 - 0xfc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*8+0xffffff04u));
    /* 00788fe4: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00788fe6: fadd dword ptr [0x97a7dc] */ ST(0) = ST(0) + R_F32((u32)(0x97a7dcu));
    /* 00788fec: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00788fee: fst dword ptr [edx + 4] */ W_F32((u32)(r_edx+0x4u), ST(0));
    /* 00788ff1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00788ff3: fadd dword ptr [ecx + eax*8 - 0x100] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+r_eax*8+0xffffff00u));
    /* 00788ffa: fstp dword ptr [edx + 8] */ W_F32((u32)(r_edx+0x8u), ST(0)); FPOP();
    /* 00788ffd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00788fff: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00789001: fld dword ptr [0x97a7d4] */ FPUSH(R_F32((u32)(0x97a7d4u)));
    /* 00789007: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00789009: fstp dword ptr [edx + 0xc] */ W_F32((u32)(r_edx+0xcu), ST(0)); FPOP();
    /* 0078900c: fld dword ptr [0x97a7d4] */ FPUSH(R_F32((u32)(0x97a7d4u)));
    /* 00789012: fdivr st(2) */ ST(0) = ST(2) / ST(0);
    /* 00789014: fstp dword ptr [edx + 0x10] */ W_F32((u32)(r_edx+0x10u), ST(0)); FPOP();
    /* 00789017: fld dword ptr [0x97a7d4] */ FPUSH(R_F32((u32)(0x97a7d4u)));
    /* 0078901d: fdivr st(3) */ ST(0) = ST(3) / ST(0);
    /* 0078901f: fstp dword ptr [edx + 0x14] */ W_F32((u32)(r_edx+0x14u), ST(0)); FPOP();
    /* 00789022: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00789024: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00789026: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00789028: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0078902a: fld dword ptr [ecx + eax*8 - 0x100] */ FPUSH(R_F32((u32)(r_ecx+r_eax*8+0xffffff00u)));
    /* 00789031: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00789033: fstp dword ptr [edx + 0x1c] */ W_F32((u32)(r_edx+0x1cu), ST(0)); FPOP();
    /* 00789036: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00789038: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 0078903a: fstp dword ptr [edx + 0x18] */ W_F32((u32)(r_edx+0x18u), ST(0)); FPOP();
    /* 0078903d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00789040: ret  */ FN_RET(0x00788fa0); r_esp += 4; return;
}

