#include "protos.h"

void f_006db13c(void) /* sub_6DB13C */
{
    FN_ENTER(0x006db13c);
    /* 006db13c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006db13d: mov esi, ecx */ r_esi = r_ecx;
    /* 006db13f: mov eax, dword ptr [esi + 0x40c] */ r_eax = R32((u32)(r_esi+0x40cu));
    /* 006db145: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006db147: je 0x6db16a */ if (fZ) goto L_006db16a;
L_006db149:; BB(0x006db149);
    /* 006db149: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006db14d: call 0x6dbe14 */ r_esp -= 4; W32(r_esp, 0x6db152u); f_006dbe14();
    /* 006db152: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006db153: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006db157: mov ecx, dword ptr [esi + 0x40c] */ r_ecx = R32((u32)(r_esi+0x40cu));
    /* 006db15d: or edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006db163: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006db164: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006db165: call 0x73c8a0 */ r_esp -= 4; W32(r_esp, 0x6db16au); f_0073c8a0();
L_006db16a:; BB(0x006db16a);
    /* 006db16a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006db16b: ret 8 */ FN_RET(0x006db13c); r_esp += 12; return;
}

void f_006db170(void) /* sub_6DB170 */
{
    FN_ENTER(0x006db170);
    /* 006db170: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006db171: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006db172: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006db173: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006db179: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006db17b: mov eax, dword ptr [ebp + 0x40c] */ r_eax = R32((u32)(r_ebp+0x40cu));
    /* 006db181: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db183: je 0x6db342 */ if (fZ) goto L_006db342;
L_006db189:; BB(0x006db189);
    /* 006db189: push dword ptr [esp + 0x98] */ { u32 v = R32((u32)(r_esp+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 006db190: call 0x6dbe50 */ r_esp -= 4; W32(r_esp, 0x6db195u); f_006dbe50();
    /* 006db195: mov edi, eax */ r_edi = r_eax;
    /* 006db197: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 006db19c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006db19e: lea esi, [ebp + 4] */ r_esi = (u32)(r_ebp+0x4u);
    /* 006db1a1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006db1a2: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6db1a7u); f_0086b688();
    /* 006db1a7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006db1aa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006db1ab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006db1ac: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006db1ae: call 0x6dbc68 */ r_esp -= 4; W32(r_esp, 0x6db1b3u); f_006dbc68();
    /* 006db1b3: mov eax, dword ptr [ebp + 0x404] */ r_eax = R32((u32)(r_ebp+0x404u));
    /* 006db1b9: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006db1bc: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006db1bf: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
L_006db1c3:; BB(0x006db1c3);
    /* 006db1c3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db1c5: jne 0x6db200 */ if (!fZ) goto L_006db200;
L_006db1c7:; BB(0x006db1c7);
    /* 006db1c7: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006db1ca: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006db1ce: mov edi, dword ptr [ebp + 0x408] */ r_edi = R32((u32)(r_ebp+0x408u));
    /* 006db1d4: lea eax, [edi + 2] */ r_eax = (u32)(r_edi+0x2u);
    /* 006db1d7: mov dword ptr [ebp + 0x408], eax */ W32((u32)(r_ebp+0x408u), r_eax);
    /* 006db1dd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006db1df: mov eax, dword ptr [esp + 0x9c] */ r_eax = R32((u32)(r_esp+0x9cu));
    /* 006db1e6: mov word ptr [edi], dx */ W16((u32)(r_edi), (u16)r_edx);
    /* 006db1e9: mov ecx, dword ptr [ebp + 0x40c] */ r_ecx = R32((u32)(r_ebp+0x40cu));
    /* 006db1ef: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006db1f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006db1f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006db1f6: call 0x73c8a0 */ r_esp -= 4; W32(r_esp, 0x6db1fbu); f_0073c8a0();
    /* 006db1fb: jmp 0x6db342 */ goto L_006db342;
L_006db200:; BB(0x006db200);
    /* 006db200: lea edx, [eax + 2] */ r_edx = (u32)(r_eax+0x2u);
    /* 006db203: mov dword ptr [ebp + 0x404], edx */ W32((u32)(r_ebp+0x404u), r_edx);
    /* 006db209: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006db20c: cmp edx, 0x3c */ {  u32 a = r_edx; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db20f: jne 0x6db318 */ if (!fZ) goto L_006db318;
L_006db215:; BB(0x006db215);
    /* 006db215: mov eax, 0x96c4e0 */ r_eax = 0x96c4e0u;
    /* 006db21a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006db21c: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 006db21f: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 006db222: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 006db225: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006db229: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006db22c: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 006db230: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 006db234: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 006db238: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 006db23c: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006db23f: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 006db243: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006db246: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 006db24a: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006db24d: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 006db251: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006db254: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 006db258: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006db25b: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 006db25f: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 006db262: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 006db266: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006db269: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 006db26d: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006db270: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 006db274: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006db277: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 006db27b: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006db27e: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 006db281: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 006db285: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006db289: mov eax, dword ptr [ebp + 0x404] */ r_eax = R32((u32)(r_ebp+0x404u));
    /* 006db28f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006db291: jmp 0x6db29a */ goto L_006db29a;
L_006db293:; BB(0x006db293);
    /* 006db293: mov byte ptr [esp + ebx + 0x48], dl */ W8((u32)(r_esp+r_ebx+0x48u), (u8)r_edx);
    /* 006db297: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_006db29a:; BB(0x006db29a);
    /* 006db29a: cmp ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006db29d: jae 0x6db34e */ if (!fC) goto L_006db34e;
L_006db2a3:; BB(0x006db2a3);
    /* 006db2a3: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006db2a6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db2a8: je 0x6db1c3 */ if (fZ) goto L_006db1c3;
L_006db2ae:; BB(0x006db2ae);
    /* 006db2ae: mov esi, eax */ r_esi = r_eax;
    /* 006db2b0: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006db2b3: mov dword ptr [ebp + 0x404], eax */ W32((u32)(r_ebp+0x404u), r_eax);
    /* 006db2b9: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 006db2bc: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 006db2bf: cmp edx, 0x3e */ {  u32 a = r_edx; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db2c2: jne 0x6db293 */ if (!fZ) goto L_006db293;
L_006db2c4:; BB(0x006db2c4);
    /* 006db2c4: mov byte ptr [esp + ebx + 0x48], 0 */ W8((u32)(r_esp+r_ebx+0x48u), 0x0u);
    /* 006db2c9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006db2cb:; BB(0x006db2cb);
    /* 006db2cb: mov edi, dword ptr [esp + ebx*8 + 8] */ r_edi = R32((u32)(r_esp+r_ebx*8+0x8u));
    /* 006db2cf: lea esi, [esp + 0x48] */ r_esi = (u32)(r_esp+0x48u);
L_006db2d3:; BB(0x006db2d3);
    /* 006db2d3: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 006db2d5: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 006db2d7: jne 0x6db2f3 */ if (!fZ) goto L_006db2f3;
L_006db2d9:; BB(0x006db2d9);
    /* 006db2d9: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 006db2db: je 0x6db2ef */ if (fZ) goto L_006db2ef;
L_006db2dd:; BB(0x006db2dd);
    /* 006db2dd: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 006db2e0: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 006db2e3: jne 0x6db2f3 */ if (!fZ) goto L_006db2f3;
L_006db2e5:; BB(0x006db2e5);
    /* 006db2e5: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006db2e8: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006db2eb: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 006db2ed: jne 0x6db2d3 */ if (!fZ) goto L_006db2d3;
L_006db2ef:; BB(0x006db2ef);
    /* 006db2ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006db2f1: jmp 0x6db2f8 */ goto L_006db2f8;
L_006db2f3:; BB(0x006db2f3);
    /* 006db2f3: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 006db2f5: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_006db2f8:; BB(0x006db2f8);
    /* 006db2f8: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006db2fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db2fd: jne 0x6db305 */ if (!fZ) goto L_006db305;
L_006db2ff:; BB(0x006db2ff);
    /* 006db2ff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006db301: call dword ptr [esp + ebx*8 + 4] */ { u32 t = R32((u32)(r_esp+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, 0x6db305u); call_ind(t); }
L_006db305:; BB(0x006db305);
    /* 006db305: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006db308: jb 0x6db2cb */ if (fC) goto L_006db2cb;
L_006db30a:; BB(0x006db30a);
    /* 006db30a: mov eax, dword ptr [ebp + 0x404] */ r_eax = R32((u32)(r_ebp+0x404u));
    /* 006db310: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006db313: jmp 0x6db1c3 */ goto L_006db1c3;
L_006db318:; BB(0x006db318);
    /* 006db318: cmp edx, 0x3e */ {  u32 a = r_edx; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db31b: je 0x6db33d */ if (fZ) goto L_006db33d;
L_006db31d:; BB(0x006db31d);
    /* 006db31d: mov ebx, dword ptr [ebp + 0x408] */ r_ebx = R32((u32)(r_ebp+0x408u));
    /* 006db323: lea eax, [ebx + 2] */ r_eax = (u32)(r_ebx+0x2u);
    /* 006db326: mov dword ptr [ebp + 0x408], eax */ W32((u32)(r_ebp+0x408u), r_eax);
    /* 006db32c: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 006db32f: mov eax, dword ptr [ebp + 0x404] */ r_eax = R32((u32)(r_ebp+0x404u));
    /* 006db335: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006db338: jmp 0x6db1c3 */ goto L_006db1c3;
L_006db33d:; BB(0x006db33d);
    /* 006db33d: jmp 0x6db33d */ goto L_006db33d;
L_006db342:; BB(0x006db342);
    /* 006db342: add esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006db348: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006db349: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006db34a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006db34b: ret 8 */ FN_RET(0x006db170); r_esp += 12; return;
L_006db34e:; BB(0x006db34e);
    /* 006db34e: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006db351: jmp 0x6db1c3 */ goto L_006db1c3;
}

void f_006db358(void) /* sub_6DB358 */
{
    FN_ENTER(0x006db358);
    /* 006db358: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006db359: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006db35a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006db35b: sub esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006db361: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006db363: mov eax, dword ptr [ebp + 0x40c] */ r_eax = R32((u32)(r_ebp+0x40cu));
    /* 006db369: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db36b: je 0x6db531 */ if (fZ) goto L_006db531;
L_006db371:; BB(0x006db371);
    /* 006db371: push dword ptr [esp + 0x9c] */ { u32 v = R32((u32)(r_esp+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006db378: push dword ptr [esp + 0x9c] */ { u32 v = R32((u32)(r_esp+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006db37f: call 0x6dbde4 */ r_esp -= 4; W32(r_esp, 0x6db384u); f_006dbde4();
    /* 006db384: mov edi, eax */ r_edi = r_eax;
    /* 006db386: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 006db38b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006db38d: lea esi, [ebp + 4] */ r_esi = (u32)(r_ebp+0x4u);
    /* 006db390: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006db391: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6db396u); f_0086b688();
    /* 006db396: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006db399: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006db39a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006db39b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006db39d: call 0x6dbc68 */ r_esp -= 4; W32(r_esp, 0x6db3a2u); f_006dbc68();
    /* 006db3a2: mov eax, dword ptr [ebp + 0x404] */ r_eax = R32((u32)(r_ebp+0x404u));
    /* 006db3a8: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006db3ab: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006db3ae: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
L_006db3b2:; BB(0x006db3b2);
    /* 006db3b2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db3b4: jne 0x6db3ef */ if (!fZ) goto L_006db3ef;
L_006db3b6:; BB(0x006db3b6);
    /* 006db3b6: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006db3b9: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006db3bd: mov edi, dword ptr [ebp + 0x408] */ r_edi = R32((u32)(r_ebp+0x408u));
    /* 006db3c3: lea eax, [edi + 2] */ r_eax = (u32)(r_edi+0x2u);
    /* 006db3c6: mov dword ptr [ebp + 0x408], eax */ W32((u32)(r_ebp+0x408u), r_eax);
    /* 006db3cc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006db3ce: mov eax, dword ptr [esp + 0xa0] */ r_eax = R32((u32)(r_esp+0xa0u));
    /* 006db3d5: mov word ptr [edi], dx */ W16((u32)(r_edi), (u16)r_edx);
    /* 006db3d8: mov ecx, dword ptr [ebp + 0x40c] */ r_ecx = R32((u32)(r_ebp+0x40cu));
    /* 006db3de: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006db3e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006db3e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006db3e5: call 0x73c8a0 */ r_esp -= 4; W32(r_esp, 0x6db3eau); f_0073c8a0();
    /* 006db3ea: jmp 0x6db531 */ goto L_006db531;
L_006db3ef:; BB(0x006db3ef);
    /* 006db3ef: lea edx, [eax + 2] */ r_edx = (u32)(r_eax+0x2u);
    /* 006db3f2: mov dword ptr [ebp + 0x404], edx */ W32((u32)(r_ebp+0x404u), r_edx);
    /* 006db3f8: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006db3fb: cmp edx, 0x3c */ {  u32 a = r_edx; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db3fe: jne 0x6db507 */ if (!fZ) goto L_006db507;
L_006db404:; BB(0x006db404);
    /* 006db404: mov eax, 0x96c520 */ r_eax = 0x96c520u;
    /* 006db409: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006db40b: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 006db40e: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 006db411: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 006db414: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006db418: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006db41b: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 006db41f: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 006db423: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 006db427: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 006db42b: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006db42e: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 006db432: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006db435: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 006db439: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006db43c: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 006db440: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006db443: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 006db447: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006db44a: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 006db44e: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 006db451: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 006db455: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006db458: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 006db45c: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006db45f: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 006db463: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006db466: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 006db46a: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006db46d: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 006db470: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 006db474: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006db478: mov eax, dword ptr [ebp + 0x404] */ r_eax = R32((u32)(r_ebp+0x404u));
    /* 006db47e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006db480: jmp 0x6db489 */ goto L_006db489;
L_006db482:; BB(0x006db482);
    /* 006db482: mov byte ptr [esp + ebx + 0x48], dl */ W8((u32)(r_esp+r_ebx+0x48u), (u8)r_edx);
    /* 006db486: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_006db489:; BB(0x006db489);
    /* 006db489: cmp ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006db48c: jae 0x6db53d */ if (!fC) goto L_006db53d;
L_006db492:; BB(0x006db492);
    /* 006db492: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006db495: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db497: je 0x6db3b2 */ if (fZ) goto L_006db3b2;
L_006db49d:; BB(0x006db49d);
    /* 006db49d: mov esi, eax */ r_esi = r_eax;
    /* 006db49f: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006db4a2: mov dword ptr [ebp + 0x404], eax */ W32((u32)(r_ebp+0x404u), r_eax);
    /* 006db4a8: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 006db4ab: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 006db4ae: cmp edx, 0x3e */ {  u32 a = r_edx; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db4b1: jne 0x6db482 */ if (!fZ) goto L_006db482;
L_006db4b3:; BB(0x006db4b3);
    /* 006db4b3: mov byte ptr [esp + ebx + 0x48], 0 */ W8((u32)(r_esp+r_ebx+0x48u), 0x0u);
    /* 006db4b8: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006db4ba:; BB(0x006db4ba);
    /* 006db4ba: mov edi, dword ptr [esp + ebx*8 + 8] */ r_edi = R32((u32)(r_esp+r_ebx*8+0x8u));
    /* 006db4be: lea esi, [esp + 0x48] */ r_esi = (u32)(r_esp+0x48u);
L_006db4c2:; BB(0x006db4c2);
    /* 006db4c2: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 006db4c4: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 006db4c6: jne 0x6db4e2 */ if (!fZ) goto L_006db4e2;
L_006db4c8:; BB(0x006db4c8);
    /* 006db4c8: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 006db4ca: je 0x6db4de */ if (fZ) goto L_006db4de;
L_006db4cc:; BB(0x006db4cc);
    /* 006db4cc: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 006db4cf: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 006db4d2: jne 0x6db4e2 */ if (!fZ) goto L_006db4e2;
L_006db4d4:; BB(0x006db4d4);
    /* 006db4d4: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006db4d7: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006db4da: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 006db4dc: jne 0x6db4c2 */ if (!fZ) goto L_006db4c2;
L_006db4de:; BB(0x006db4de);
    /* 006db4de: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006db4e0: jmp 0x6db4e7 */ goto L_006db4e7;
L_006db4e2:; BB(0x006db4e2);
    /* 006db4e2: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 006db4e4: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_006db4e7:; BB(0x006db4e7);
    /* 006db4e7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006db4ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db4ec: jne 0x6db4f4 */ if (!fZ) goto L_006db4f4;
L_006db4ee:; BB(0x006db4ee);
    /* 006db4ee: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006db4f0: call dword ptr [esp + ebx*8 + 4] */ { u32 t = R32((u32)(r_esp+r_ebx*8+0x4u)); r_esp -= 4; W32(r_esp, 0x6db4f4u); call_ind(t); }
L_006db4f4:; BB(0x006db4f4);
    /* 006db4f4: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006db4f7: jb 0x6db4ba */ if (fC) goto L_006db4ba;
L_006db4f9:; BB(0x006db4f9);
    /* 006db4f9: mov eax, dword ptr [ebp + 0x404] */ r_eax = R32((u32)(r_ebp+0x404u));
    /* 006db4ff: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006db502: jmp 0x6db3b2 */ goto L_006db3b2;
L_006db507:; BB(0x006db507);
    /* 006db507: cmp edx, 0x3e */ {  u32 a = r_edx; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db50a: je 0x6db52c */ if (fZ) goto L_006db52c;
L_006db50c:; BB(0x006db50c);
    /* 006db50c: mov ebx, dword ptr [ebp + 0x408] */ r_ebx = R32((u32)(r_ebp+0x408u));
    /* 006db512: lea eax, [ebx + 2] */ r_eax = (u32)(r_ebx+0x2u);
    /* 006db515: mov dword ptr [ebp + 0x408], eax */ W32((u32)(r_ebp+0x408u), r_eax);
    /* 006db51b: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 006db51e: mov eax, dword ptr [ebp + 0x404] */ r_eax = R32((u32)(r_ebp+0x404u));
    /* 006db524: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006db527: jmp 0x6db3b2 */ goto L_006db3b2;
L_006db52c:; BB(0x006db52c);
    /* 006db52c: jmp 0x6db52c */ goto L_006db52c;
L_006db531:; BB(0x006db531);
    /* 006db531: add esp, 0x88 */ {  u32 a = r_esp; u32 b = 0x88u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006db537: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006db538: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006db539: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006db53a: ret 0xc */ FN_RET(0x006db358); r_esp += 16; return;
L_006db53d:; BB(0x006db53d);
    /* 006db53d: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006db540: jmp 0x6db3b2 */ goto L_006db3b2;
}

void f_006db548(void) /* sub_6DB548 */
{
    FN_ENTER(0x006db548);
    /* 006db548: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006db549: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006db54a: sub esp, 0xa00 */ {  u32 a = r_esp; u32 b = 0xa00u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006db550: mov esi, ecx */ r_esi = r_ecx;
    /* 006db552: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006db555: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 006db55a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006db55c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006db55d: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6db562u); f_0086b688();
    /* 006db562: lea eax, [esp + 0x20c] */ r_eax = (u32)(r_esp+0x20cu);
    /* 006db569: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 006db56e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006db570: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006db571: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6db576u); f_0086b688();
    /* 006db576: push dword ptr [esp + 0xa24] */ { u32 v = R32((u32)(r_esp+0xa24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006db57d: call 0x6dbdb8 */ r_esp -= 4; W32(r_esp, 0x6db582u); f_006dbdb8();
    /* 006db582: mov ebp, eax */ r_ebp = r_eax;
    /* 006db584: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 006db588: push dword ptr [esp + 0xa30] */ { u32 v = R32((u32)(r_esp+0xa30u)); r_esp -= 4; W32(r_esp, v); }
    /* 006db58f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006db590: call 0x5c9be4 */ r_esp -= 4; W32(r_esp, 0x6db595u); f_005c9be4();
    /* 006db595: lea eax, [esp + 0x224] */ r_eax = (u32)(r_esp+0x224u);
    /* 006db59c: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 006db5a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006db5a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006db5a2: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 006db5a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006db5a8: call 0x859d66 */ r_esp -= 4; W32(r_esp, 0x6db5adu); f_00859d66();
    /* 006db5ad: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006db5b0: lea eax, [esp + 0x200] */ r_eax = (u32)(r_esp+0x200u);
    /* 006db5b7: push dword ptr [esp + 0xa10] */ { u32 v = R32((u32)(r_esp+0xa10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006db5be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006db5bf: mov ecx, esi */ r_ecx = r_esi;
    /* 006db5c1: call 0x6db5d4 */ r_esp -= 4; W32(r_esp, 0x6db5c6u); f_006db5d4();
    /* 006db5c6: add esp, 0xa00 */ {  u32 a = r_esp; u32 b = 0xa00u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006db5cc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006db5cd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006db5ce: ret 0xc */ FN_RET(0x006db548); r_esp += 16; return;
}

void f_006db5d4(void) /* sub_6DB5D4 */
{
    FN_ENTER(0x006db5d4);
    /* 006db5d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006db5d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006db5d6: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006db5dc: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006db5de: mov eax, dword ptr [ebp + 0x40c] */ r_eax = R32((u32)(r_ebp+0x40cu));
    /* 006db5e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db5e6: je 0x6db7a5 */ if (fZ) goto L_006db7a5;
L_006db5ec:; BB(0x006db5ec);
    /* 006db5ec: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 006db5f1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006db5f3: lea edi, [ebp + 4] */ r_edi = (u32)(r_ebp+0x4u);
    /* 006db5f6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006db5f7: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6db5fcu); f_0086b688();
    /* 006db5fc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006db5ff: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006db600: push dword ptr [esp + 0x9c] */ { u32 v = R32((u32)(r_esp+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006db607: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006db609: call 0x6dbc68 */ r_esp -= 4; W32(r_esp, 0x6db60eu); f_006dbc68();
    /* 006db60e: mov eax, dword ptr [ebp + 0x404] */ r_eax = R32((u32)(r_ebp+0x404u));
    /* 006db614: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006db617: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006db61a: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006db61e: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
L_006db622:; BB(0x006db622);
    /* 006db622: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db624: jne 0x6db663 */ if (!fZ) goto L_006db663;
L_006db626:; BB(0x006db626);
    /* 006db626: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 006db629: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006db62d: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 006db631: mov ecx, dword ptr [ebp + 0x408] */ r_ecx = R32((u32)(r_ebp+0x408u));
    /* 006db637: lea eax, [ecx + 2] */ r_eax = (u32)(r_ecx+0x2u);
    /* 006db63a: mov dword ptr [ebp + 0x408], eax */ W32((u32)(r_ebp+0x408u), r_eax);
    /* 006db640: mov eax, dword ptr [esp + 0x9c] */ r_eax = R32((u32)(r_esp+0x9cu));
    /* 006db647: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006db649: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 006db64c: mov ecx, dword ptr [ebp + 0x40c] */ r_ecx = R32((u32)(r_ebp+0x40cu));
    /* 006db652: or eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006db657: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006db658: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006db659: call 0x73c8a0 */ r_esp -= 4; W32(r_esp, 0x6db65eu); f_0073c8a0();
    /* 006db65e: jmp 0x6db7a5 */ goto L_006db7a5;
L_006db663:; BB(0x006db663);
    /* 006db663: lea edx, [eax + 2] */ r_edx = (u32)(r_eax+0x2u);
    /* 006db666: mov dword ptr [ebp + 0x404], edx */ W32((u32)(r_ebp+0x404u), r_edx);
    /* 006db66c: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006db66f: cmp edx, 0x3c */ {  u32 a = r_edx; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db672: jne 0x6db77b */ if (!fZ) goto L_006db77b;
L_006db678:; BB(0x006db678);
    /* 006db678: mov eax, 0x96c560 */ r_eax = 0x96c560u;
    /* 006db67d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006db67f: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 006db682: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 006db685: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 006db688: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006db68c: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006db68f: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 006db693: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 006db697: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 006db69b: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 006db69f: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006db6a2: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 006db6a6: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006db6a9: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 006db6ad: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006db6b0: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 006db6b4: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006db6b7: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 006db6bb: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006db6be: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 006db6c2: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 006db6c5: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 006db6c9: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006db6cc: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 006db6d0: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006db6d3: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 006db6d7: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006db6da: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 006db6de: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006db6e1: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 006db6e4: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 006db6e8: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006db6ec: mov eax, dword ptr [ebp + 0x404] */ r_eax = R32((u32)(r_ebp+0x404u));
    /* 006db6f2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006db6f4: jmp 0x6db6fd */ goto L_006db6fd;
L_006db6f6:; BB(0x006db6f6);
    /* 006db6f6: mov byte ptr [esp + ebx + 0x4c], dl */ W8((u32)(r_esp+r_ebx+0x4cu), (u8)r_edx);
    /* 006db6fa: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_006db6fd:; BB(0x006db6fd);
    /* 006db6fd: cmp ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006db700: jae 0x6db7b0 */ if (!fC) goto L_006db7b0;
L_006db706:; BB(0x006db706);
    /* 006db706: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006db709: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db70b: je 0x6db622 */ if (fZ) goto L_006db622;
L_006db711:; BB(0x006db711);
    /* 006db711: mov esi, eax */ r_esi = r_eax;
    /* 006db713: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006db716: mov dword ptr [ebp + 0x404], eax */ W32((u32)(r_ebp+0x404u), r_eax);
    /* 006db71c: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 006db71f: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 006db722: cmp edx, 0x3e */ {  u32 a = r_edx; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db725: jne 0x6db6f6 */ if (!fZ) goto L_006db6f6;
L_006db727:; BB(0x006db727);
    /* 006db727: mov byte ptr [esp + ebx + 0x4c], 0 */ W8((u32)(r_esp+r_ebx+0x4cu), 0x0u);
    /* 006db72c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006db72e:; BB(0x006db72e);
    /* 006db72e: mov edi, dword ptr [esp + ebx*8 + 0xc] */ r_edi = R32((u32)(r_esp+r_ebx*8+0xcu));
    /* 006db732: lea esi, [esp + 0x4c] */ r_esi = (u32)(r_esp+0x4cu);
L_006db736:; BB(0x006db736);
    /* 006db736: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 006db738: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 006db73a: jne 0x6db756 */ if (!fZ) goto L_006db756;
L_006db73c:; BB(0x006db73c);
    /* 006db73c: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 006db73e: je 0x6db752 */ if (fZ) goto L_006db752;
L_006db740:; BB(0x006db740);
    /* 006db740: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 006db743: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 006db746: jne 0x6db756 */ if (!fZ) goto L_006db756;
L_006db748:; BB(0x006db748);
    /* 006db748: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006db74b: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006db74e: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 006db750: jne 0x6db736 */ if (!fZ) goto L_006db736;
L_006db752:; BB(0x006db752);
    /* 006db752: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006db754: jmp 0x6db75b */ goto L_006db75b;
L_006db756:; BB(0x006db756);
    /* 006db756: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 006db758: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_006db75b:; BB(0x006db75b);
    /* 006db75b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006db75e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db760: jne 0x6db768 */ if (!fZ) goto L_006db768;
L_006db762:; BB(0x006db762);
    /* 006db762: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006db764: call dword ptr [esp + ebx*8 + 8] */ { u32 t = R32((u32)(r_esp+r_ebx*8+0x8u)); r_esp -= 4; W32(r_esp, 0x6db768u); call_ind(t); }
L_006db768:; BB(0x006db768);
    /* 006db768: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006db76b: jb 0x6db72e */ if (fC) goto L_006db72e;
L_006db76d:; BB(0x006db76d);
    /* 006db76d: mov eax, dword ptr [ebp + 0x404] */ r_eax = R32((u32)(r_ebp+0x404u));
    /* 006db773: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006db776: jmp 0x6db622 */ goto L_006db622;
L_006db77b:; BB(0x006db77b);
    /* 006db77b: cmp edx, 0x3e */ {  u32 a = r_edx; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db77e: je 0x6db7a0 */ if (fZ) goto L_006db7a0;
L_006db780:; BB(0x006db780);
    /* 006db780: mov ebx, dword ptr [ebp + 0x408] */ r_ebx = R32((u32)(r_ebp+0x408u));
    /* 006db786: lea eax, [ebx + 2] */ r_eax = (u32)(r_ebx+0x2u);
    /* 006db789: mov dword ptr [ebp + 0x408], eax */ W32((u32)(r_ebp+0x408u), r_eax);
    /* 006db78f: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 006db792: mov eax, dword ptr [ebp + 0x404] */ r_eax = R32((u32)(r_ebp+0x404u));
    /* 006db798: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006db79b: jmp 0x6db622 */ goto L_006db622;
L_006db7a0:; BB(0x006db7a0);
    /* 006db7a0: jmp 0x6db7a0 */ goto L_006db7a0;
L_006db7a5:; BB(0x006db7a5);
    /* 006db7a5: add esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006db7ab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006db7ac: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006db7ad: ret 8 */ FN_RET(0x006db5d4); r_esp += 12; return;
L_006db7b0:; BB(0x006db7b0);
    /* 006db7b0: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006db7b3: jmp 0x6db622 */ goto L_006db622;
}

void f_006db7b8(void) /* sub_6DB7B8 */
{
    FN_ENTER(0x006db7b8);
    /* 006db7b8: mov ecx, dword ptr [ecx + 0x40c] */ r_ecx = R32((u32)(r_ecx+0x40cu));
    /* 006db7be: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006db7c0: je 0x6db7c8 */ if (fZ) goto L_006db7c8;
L_006db7c2:; BB(0x006db7c2);
    /* 006db7c2: call 0x73c91c */ r_esp -= 4; W32(r_esp, 0x6db7c7u); f_0073c91c();
    /* 006db7c7: ret  */ FN_RET(0x006db7b8); r_esp += 4; return;
L_006db7c8:; BB(0x006db7c8);
    /* 006db7c8: mov eax, 1 */ r_eax = 0x1u;
    /* 006db7cd: ret  */ FN_RET(0x006db7b8); r_esp += 4; return;
}

void f_006db7d0(void) /* sub_6DB7D0 */
{
    FN_ENTER(0x006db7d0);
    /* 006db7d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006db7d1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006db7d2: sub esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006db7d8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006db7da: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 006db7df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006db7e1: lea edi, [ebp + 4] */ r_edi = (u32)(r_ebp+0x4u);
    /* 006db7e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006db7e5: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6db7eau); f_0086b688();
    /* 006db7ea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006db7ed: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006db7ee: push dword ptr [esp + 0x9c] */ { u32 v = R32((u32)(r_esp+0x9cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006db7f5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006db7f7: call 0x6dbc68 */ r_esp -= 4; W32(r_esp, 0x6db7fcu); f_006dbc68();
    /* 006db7fc: mov eax, dword ptr [ebp + 0x404] */ r_eax = R32((u32)(r_ebp+0x404u));
    /* 006db802: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006db805: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006db809: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 006db80d: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_006db810:; BB(0x006db810);
    /* 006db810: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db812: jne 0x6db840 */ if (!fZ) goto L_006db840;
L_006db814:; BB(0x006db814);
    /* 006db814: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 006db818: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 006db81c: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006db81f: mov eax, dword ptr [ebp + 0x408] */ r_eax = R32((u32)(r_ebp+0x408u));
    /* 006db825: lea edx, [eax + 2] */ r_edx = (u32)(r_eax+0x2u);
    /* 006db828: mov dword ptr [ebp + 0x408], edx */ W32((u32)(r_ebp+0x408u), r_edx);
    /* 006db82e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006db830: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
    /* 006db833: mov eax, edi */ r_eax = r_edi;
    /* 006db835: add esp, 0x8c */ {  u32 a = r_esp; u32 b = 0x8cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006db83b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006db83c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006db83d: ret 4 */ FN_RET(0x006db7d0); r_esp += 8; return;
L_006db840:; BB(0x006db840);
    /* 006db840: lea edx, [eax + 2] */ r_edx = (u32)(r_eax+0x2u);
    /* 006db843: mov dword ptr [ebp + 0x404], edx */ W32((u32)(r_ebp+0x404u), r_edx);
    /* 006db849: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006db84c: cmp edx, 0x3c */ {  u32 a = r_edx; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db84f: jne 0x6db958 */ if (!fZ) goto L_006db958;
L_006db855:; BB(0x006db855);
    /* 006db855: mov eax, 0x96c5a0 */ r_eax = 0x96c5a0u;
    /* 006db85a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006db85c: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 006db85f: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 006db862: mov edi, dword ptr [eax + 0xc] */ r_edi = R32((u32)(r_eax+0xcu));
    /* 006db865: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006db869: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 006db86c: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 006db870: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 006db874: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 006db878: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 006db87c: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 006db87f: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 006db883: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 006db886: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 006db88a: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 006db88d: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 006db891: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 006db894: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 006db898: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 006db89b: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 006db89f: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 006db8a2: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 006db8a6: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006db8a9: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 006db8ad: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 006db8b0: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 006db8b4: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 006db8b7: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 006db8bb: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006db8be: mov eax, dword ptr [eax + 0x3c] */ r_eax = R32((u32)(r_eax+0x3cu));
    /* 006db8c1: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 006db8c5: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006db8c9: mov eax, dword ptr [ebp + 0x404] */ r_eax = R32((u32)(r_ebp+0x404u));
    /* 006db8cf: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006db8d1: jmp 0x6db8da */ goto L_006db8da;
L_006db8d3:; BB(0x006db8d3);
    /* 006db8d3: mov byte ptr [esp + ebx + 0x4c], dl */ W8((u32)(r_esp+r_ebx+0x4cu), (u8)r_edx);
    /* 006db8d7: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_006db8da:; BB(0x006db8da);
    /* 006db8da: cmp ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006db8dd: jae 0x6db982 */ if (!fC) goto L_006db982;
L_006db8e3:; BB(0x006db8e3);
    /* 006db8e3: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006db8e6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db8e8: je 0x6db810 */ if (fZ) goto L_006db810;
L_006db8ee:; BB(0x006db8ee);
    /* 006db8ee: mov esi, eax */ r_esi = r_eax;
    /* 006db8f0: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006db8f3: mov dword ptr [ebp + 0x404], eax */ W32((u32)(r_ebp+0x404u), r_eax);
    /* 006db8f9: movzx edx, word ptr [esi] */ r_edx = (u32)R16((u32)(r_esi));
    /* 006db8fc: movsx edx, dl */ r_edx = (u32)(i32)(i8)(u8)r_edx;
    /* 006db8ff: cmp edx, 0x3e */ {  u32 a = r_edx; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db902: jne 0x6db8d3 */ if (!fZ) goto L_006db8d3;
L_006db904:; BB(0x006db904);
    /* 006db904: mov byte ptr [esp + ebx + 0x4c], 0 */ W8((u32)(r_esp+r_ebx+0x4cu), 0x0u);
    /* 006db909: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006db90b:; BB(0x006db90b);
    /* 006db90b: mov edi, dword ptr [esp + ebx*8 + 0xc] */ r_edi = R32((u32)(r_esp+r_ebx*8+0xcu));
    /* 006db90f: lea esi, [esp + 0x4c] */ r_esi = (u32)(r_esp+0x4cu);
L_006db913:; BB(0x006db913);
    /* 006db913: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 006db915: cmp dl, byte ptr [esi] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 006db917: jne 0x6db933 */ if (!fZ) goto L_006db933;
L_006db919:; BB(0x006db919);
    /* 006db919: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 006db91b: je 0x6db92f */ if (fZ) goto L_006db92f;
L_006db91d:; BB(0x006db91d);
    /* 006db91d: mov dl, byte ptr [edi + 1] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi+0x1u))) & 0xffu);
    /* 006db920: cmp dl, byte ptr [esi + 1] */ {  u32 a = (u8)r_edx; u32 b = R8((u32)(r_esi+0x1u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); fC = (a < b); }
    /* 006db923: jne 0x6db933 */ if (!fZ) goto L_006db933;
L_006db925:; BB(0x006db925);
    /* 006db925: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006db928: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006db92b: or dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a | b) & 0xffu; r_edx = (r_edx & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); }
    /* 006db92d: jne 0x6db913 */ if (!fZ) goto L_006db913;
L_006db92f:; BB(0x006db92f);
    /* 006db92f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006db931: jmp 0x6db938 */ goto L_006db938;
L_006db933:; BB(0x006db933);
    /* 006db933: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 006db935: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
L_006db938:; BB(0x006db938);
    /* 006db938: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006db93b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db93d: jne 0x6db945 */ if (!fZ) goto L_006db945;
L_006db93f:; BB(0x006db93f);
    /* 006db93f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006db941: call dword ptr [esp + ebx*8 + 8] */ { u32 t = R32((u32)(r_esp+r_ebx*8+0x8u)); r_esp -= 4; W32(r_esp, 0x6db945u); call_ind(t); }
L_006db945:; BB(0x006db945);
    /* 006db945: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006db948: jb 0x6db90b */ if (fC) goto L_006db90b;
L_006db94a:; BB(0x006db94a);
    /* 006db94a: mov eax, dword ptr [ebp + 0x404] */ r_eax = R32((u32)(r_ebp+0x404u));
    /* 006db950: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006db953: jmp 0x6db810 */ goto L_006db810;
L_006db958:; BB(0x006db958);
    /* 006db958: cmp edx, 0x3e */ {  u32 a = r_edx; u32 b = 0x3eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db95b: je 0x6db97d */ if (fZ) goto L_006db97d;
L_006db95d:; BB(0x006db95d);
    /* 006db95d: mov ebx, dword ptr [ebp + 0x408] */ r_ebx = R32((u32)(r_ebp+0x408u));
    /* 006db963: lea eax, [ebx + 2] */ r_eax = (u32)(r_ebx+0x2u);
    /* 006db966: mov dword ptr [ebp + 0x408], eax */ W32((u32)(r_ebp+0x408u), r_eax);
    /* 006db96c: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 006db96f: mov eax, dword ptr [ebp + 0x404] */ r_eax = R32((u32)(r_ebp+0x404u));
    /* 006db975: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006db978: jmp 0x6db810 */ goto L_006db810;
L_006db97d:; BB(0x006db97d);
    /* 006db97d: jmp 0x6db97d */ goto L_006db97d;
L_006db982:; BB(0x006db982);
    /* 006db982: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 006db985: jmp 0x6db810 */ goto L_006db810;
}

void f_006db98c(void) /* sub_6DB98C */
{
    FN_ENTER(0x006db98c);
    /* 006db98c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006db98d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006db98e: mov edi, ecx */ r_edi = r_ecx;
    /* 006db990: call 0x6bc290 */ r_esp -= 4; W32(r_esp, 0x6db995u); f_006bc290();
    /* 006db995: mov esi, eax */ r_esi = r_eax;
    /* 006db997: push 0x969a48 */ { u32 v = 0x969a48u; r_esp -= 4; W32(r_esp, v); }
    /* 006db99c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006db99d: call 0x858c4d */ r_esp -= 4; W32(r_esp, 0x6db9a2u); f_00858c4d();
    /* 006db9a2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006db9a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006db9a7: jne 0x6db9b4 */ if (!fZ) goto L_006db9b4;
L_006db9a9:; BB(0x006db9a9);
    /* 006db9a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006db9aa: mov ecx, edi */ r_ecx = r_edi;
    /* 006db9ac: call 0x6db9c0 */ r_esp -= 4; W32(r_esp, 0x6db9b1u); f_006db9c0();
    /* 006db9b1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006db9b2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006db9b3: ret  */ FN_RET(0x006db98c); r_esp += 4; return;
L_006db9b4:; BB(0x006db9b4);
    /* 006db9b4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006db9b5: mov ecx, edi */ r_ecx = r_edi;
    /* 006db9b7: call 0x6db9c0 */ r_esp -= 4; W32(r_esp, 0x6db9bcu); f_006db9c0();
    /* 006db9bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006db9bd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006db9be: ret  */ FN_RET(0x006db98c); r_esp += 4; return;
}

void f_006db9c0(void) /* sub_6DB9C0 */
{
    FN_ENTER(0x006db9c0);
    /* 006db9c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006db9c1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006db9c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006db9c3: mov esi, ecx */ r_esi = r_ecx;
    /* 006db9c5: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 006db9c9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006db9ca: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x6db9cfu); f_00858009();
    /* 006db9cf: mov ebp, eax */ r_ebp = r_eax;
    /* 006db9d1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006db9d2: push dword ptr [esi + 0x408] */ { u32 v = R32((u32)(r_esi+0x408u)); r_esp -= 4; W32(r_esp, v); }
    /* 006db9d8: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x6db9ddu); f_00857fed();
    /* 006db9dd: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006db9df: add dword ptr [esi + 0x408], ebp */ { u32 ad = (u32)(r_esi+0x408u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006db9e5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006db9e8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006db9e9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006db9ea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006db9eb: ret 4 */ FN_RET(0x006db9c0); r_esp += 8; return;
}

void f_006db9f0(void) /* sub_6DB9F0 */
{
    FN_ENTER(0x006db9f0);
    /* 006db9f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006db9f1: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006db9f4: mov esi, ecx */ r_esi = r_ecx;
    /* 006db9f6: call 0x6c00b4 */ r_esp -= 4; W32(r_esp, 0x6db9fbu); f_006c00b4();
    /* 006db9fb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006db9fd: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006dba00: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006dba04: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006dba08: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006dba0c: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006dba10: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 006dba14: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 006dba18: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 006dba1c: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 006dba20: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 006dba24: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 006dba28: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 006dba2c: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 006dba30: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 006dba34: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 006dba38: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 006dba3c: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006dba3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dba40: push 0x9699fc */ { u32 v = 0x9699fcu; r_esp -= 4; W32(r_esp, v); }
    /* 006dba45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006dba46: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x6dba4bu); f_00857e29();
    /* 006dba4b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dba4e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006dba51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dba52: mov ecx, esi */ r_ecx = r_esi;
    /* 006dba54: call 0x6db9c0 */ r_esp -= 4; W32(r_esp, 0x6dba59u); f_006db9c0();
    /* 006dba59: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006dba5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006dba5d: ret  */ FN_RET(0x006db9f0); r_esp += 4; return;
}

void f_006dba60(void) /* sub_6DBA60 */
{
    FN_ENTER(0x006dba60);
    /* 006dba60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006dba61: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006dba63: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6dba68u); f_006dc358();
    /* 006dba68: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dba6b: je 0x6dba8e */ if (fZ) goto L_006dba8e;
L_006dba6d:; BB(0x006dba6d);
    /* 006dba6d: call 0x6d0544 */ r_esp -= 4; W32(r_esp, 0x6dba72u); f_006d0544();
L_006dba72:; BB(0x006dba72);
    /* 006dba72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dba74: je 0x6dba80 */ if (fZ) goto L_006dba80;
L_006dba76:; BB(0x006dba76);
    /* 006dba76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dba77: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006dba79: call 0x6db9c0 */ r_esp -= 4; W32(r_esp, 0x6dba7eu); f_006db9c0();
    /* 006dba7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006dba7f: ret  */ FN_RET(0x006dba60); r_esp += 4; return;
L_006dba80:; BB(0x006dba80);
    /* 006dba80: push 0x969a48 */ { u32 v = 0x969a48u; r_esp -= 4; W32(r_esp, v); }
    /* 006dba85: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006dba87: call 0x6db9c0 */ r_esp -= 4; W32(r_esp, 0x6dba8cu); f_006db9c0();
    /* 006dba8c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006dba8d: ret  */ FN_RET(0x006dba60); r_esp += 4; return;
L_006dba8e:; BB(0x006dba8e);
    /* 006dba8e: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x6dba93u); f_0078b1c4();
    /* 006dba93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006dba95: jle 0x6dba80 */ if ((fZ||fS!=fO)) goto L_006dba80;
L_006dba97:; BB(0x006dba97);
    /* 006dba97: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dba9a: jg 0x6dba80 */ if ((!fZ&&fS==fO)) goto L_006dba80;
L_006dba9c:; BB(0x006dba9c);
    /* 006dba9c: call 0x6cf154 */ r_esp -= 4; W32(r_esp, 0x6dbaa1u); f_006cf154();
    /* 006dbaa1: jmp 0x6dba72 */ goto L_006dba72;
}

void f_006dbaa4(void) /* sub_6DBAA4 */
{
    FN_ENTER(0x006dbaa4);
    /* 006dbaa4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006dbaa5: mov edi, ecx */ r_edi = r_ecx;
    /* 006dbaa7: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 006dbaae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dbaaf: call 0x4da5f0 */ r_esp -= 4; W32(r_esp, 0x6dbab4u); f_004da5f0();
    /* 006dbab4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dbab5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dbab7: je 0x6dbac3 */ if (fZ) goto L_006dbac3;
L_006dbab9:; BB(0x006dbab9);
    /* 006dbab9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dbaba: mov ecx, edi */ r_ecx = r_edi;
    /* 006dbabc: call 0x6db9c0 */ r_esp -= 4; W32(r_esp, 0x6dbac1u); f_006db9c0();
    /* 006dbac1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006dbac2: ret  */ FN_RET(0x006dbaa4); r_esp += 4; return;
L_006dbac3:; BB(0x006dbac3);
    /* 006dbac3: push 0x969a48 */ { u32 v = 0x969a48u; r_esp -= 4; W32(r_esp, v); }
    /* 006dbac8: mov ecx, edi */ r_ecx = r_edi;
    /* 006dbaca: call 0x6db9c0 */ r_esp -= 4; W32(r_esp, 0x6dbacfu); f_006db9c0();
    /* 006dbacf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006dbad0: ret  */ FN_RET(0x006dbaa4); r_esp += 4; return;
}

void f_006dbad4(void) /* sub_6DBAD4 */
{
    FN_ENTER(0x006dbad4);
    /* 006dbad4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006dbad5: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006dbad8: mov esi, ecx */ r_esi = r_ecx;
    /* 006dbada: call 0x6c00c8 */ r_esp -= 4; W32(r_esp, 0x6dbadfu); f_006c00c8();
    /* 006dbadf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006dbae1: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006dbae4: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006dbae8: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006dbaec: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006dbaf0: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006dbaf4: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 006dbaf8: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 006dbafc: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 006dbb00: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 006dbb04: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 006dbb08: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 006dbb0c: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 006dbb10: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 006dbb14: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 006dbb18: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 006dbb1c: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 006dbb20: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006dbb23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dbb24: push 0x9699fc */ { u32 v = 0x9699fcu; r_esp -= 4; W32(r_esp, v); }
    /* 006dbb29: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006dbb2a: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x6dbb2fu); f_00857e29();
    /* 006dbb2f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dbb32: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006dbb35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dbb36: mov ecx, esi */ r_ecx = r_esi;
    /* 006dbb38: call 0x6db9c0 */ r_esp -= 4; W32(r_esp, 0x6dbb3du); f_006db9c0();
    /* 006dbb3d: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006dbb40: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006dbb41: ret  */ FN_RET(0x006dbad4); r_esp += 4; return;
}

void f_006dbb44(void) /* sub_6DBB44 */
{
    FN_ENTER(0x006dbb44);
    /* 006dbb44: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006dbb45: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006dbb48: mov esi, ecx */ r_esi = r_ecx;
    /* 006dbb4a: call 0x6c00dc */ r_esp -= 4; W32(r_esp, 0x6dbb4fu); f_006c00dc();
    /* 006dbb4f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006dbb51: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006dbb54: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006dbb58: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 006dbb5c: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006dbb60: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006dbb64: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 006dbb68: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 006dbb6c: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 006dbb70: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 006dbb74: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 006dbb78: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 006dbb7c: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 006dbb80: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
    /* 006dbb84: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 006dbb88: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 006dbb8c: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 006dbb90: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006dbb93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dbb94: push 0x9699fc */ { u32 v = 0x9699fcu; r_esp -= 4; W32(r_esp, v); }
    /* 006dbb99: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006dbb9a: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x6dbb9fu); f_00857e29();
    /* 006dbb9f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dbba2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006dbba5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dbba6: mov ecx, esi */ r_ecx = r_esi;
    /* 006dbba8: call 0x6db9c0 */ r_esp -= 4; W32(r_esp, 0x6dbbadu); f_006db9c0();
    /* 006dbbad: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006dbbb0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006dbbb1: ret  */ FN_RET(0x006dbb44); r_esp += 4; return;
}

void f_006dbbb4(void) /* sub_6DBBB4 */
{
    FN_ENTER(0x006dbbb4);
    /* 006dbbb4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006dbbb5: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006dbbb8: mov esi, ecx */ r_esi = r_ecx;
    /* 006dbbba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006dbbbc: mov edx, dword ptr [0xa95d38] */ r_edx = R32((u32)(0xa95d38u));
    /* 006dbbc2: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006dbbc5: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006dbbc9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006dbbcd: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006dbbd1: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006dbbd5: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006dbbd9: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006dbbdd: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006dbbe1: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006dbbe5: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 006dbbe9: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 006dbbed: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 006dbbf1: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 006dbbf5: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 006dbbf9: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006dbbfd: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 006dbc01: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006dbc04: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006dbc05: push 0x9699fc */ { u32 v = 0x9699fcu; r_esp -= 4; W32(r_esp, v); }
    /* 006dbc0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dbc0b: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x6dbc10u); f_00857e29();
    /* 006dbc10: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dbc13: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006dbc16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dbc17: mov ecx, esi */ r_ecx = r_esi;
    /* 006dbc19: call 0x6db9c0 */ r_esp -= 4; W32(r_esp, 0x6dbc1eu); f_006db9c0();
    /* 006dbc1e: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006dbc21: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006dbc22: ret  */ FN_RET(0x006dbbb4); r_esp += 4; return;
}

void f_006dbc24(void) /* sub_6DBC24 */
{
    FN_ENTER(0x006dbc24);
    /* 006dbc24: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006dbc25: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006dbc27: call 0x6d2ac4 */ r_esp -= 4; W32(r_esp, 0x6dbc2cu); f_006d2ac4();
    /* 006dbc2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dbc2e: je 0x6dbc3a */ if (fZ) goto L_006dbc3a;
L_006dbc30:; BB(0x006dbc30);
    /* 006dbc30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dbc31: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006dbc33: call 0x6db9c0 */ r_esp -= 4; W32(r_esp, 0x6dbc38u); f_006db9c0();
    /* 006dbc38: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006dbc39: ret  */ FN_RET(0x006dbc24); r_esp += 4; return;
L_006dbc3a:; BB(0x006dbc3a);
    /* 006dbc3a: push 0x969a3c */ { u32 v = 0x969a3cu; r_esp -= 4; W32(r_esp, v); }
    /* 006dbc3f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006dbc41: call 0x6db9c0 */ r_esp -= 4; W32(r_esp, 0x6dbc46u); f_006db9c0();
    /* 006dbc46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006dbc47: ret  */ FN_RET(0x006dbc24); r_esp += 4; return;
}

void f_006dbc37(void)
{
    FN_ENTER(0x006dbc37);
    /* 006dbc37: call ptr [ebp - 0x3d] */ { u32 t = R32((u32)(r_ebp+0xffffffc3u)); r_esp -= 4; W32(r_esp, 0x6dbc3au); call_ind(t); }
    /* 006dbc3a: push 0x969a3c */ { u32 v = 0x969a3cu; r_esp -= 4; W32(r_esp, v); }
    /* 006dbc3f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006dbc41: call 0x6db9c0 */ r_esp -= 4; W32(r_esp, 0x6dbc46u); f_006db9c0();
    /* 006dbc46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006dbc47: ret  */ FN_RET(0x006dbc37); r_esp += 4; return;
}

void f_006dbc48(void) /* sub_6DBC48 */
{
    FN_ENTER(0x006dbc48);
    /* 006dbc48: mov dword ptr [0xa96320], 0x3f800000 */ W32((u32)(0xa96320u), 0x3f800000u);
    /* 006dbc52: mov dword ptr [0xa96324], 0x41000000 */ W32((u32)(0xa96324u), 0x41000000u);
    /* 006dbc5c: mov dword ptr [0xa96328], 0x3fc00000 */ W32((u32)(0xa96328u), 0x3fc00000u);
    /* 006dbc66: ret  */ FN_RET(0x006dbc48); r_esp += 4; return;
}

void f_006dbc68(void) /* sub_6DBC68 */
{
    FN_ENTER(0x006dbc68);
    /* 006dbc68: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006dbc6c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006dbc70: mov dword ptr [ecx + 0x404], eax */ W32((u32)(r_ecx+0x404u), r_eax);
    /* 006dbc76: mov dword ptr [ecx + 0x408], edx */ W32((u32)(r_ecx+0x408u), r_edx);
    /* 006dbc7c: ret 8 */ FN_RET(0x006dbc68); r_esp += 12; return;
}

void f_006dbc80(void) /* sub_6DBC80 */
{
    FN_ENTER(0x006dbc80);
    /* 006dbc80: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006dbc81: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006dbc82: mov edi, ecx */ r_edi = r_ecx;
    /* 006dbc84: call 0x78b208 */ r_esp -= 4; W32(r_esp, 0x6dbc89u); f_0078b208();
    /* 006dbc89: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dbc8c: jle 0x6dbc99 */ if ((fZ||fS!=fO)) goto L_006dbc99;
L_006dbc8e:; BB(0x006dbc8e);
    /* 006dbc8e: fld dword ptr [0x96c668] */ FPUSH(R_F32((u32)(0x96c668u)));
    /* 006dbc94: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006dbc97: jmp 0x6dbca2 */ goto L_006dbca2;
L_006dbc99:; BB(0x006dbc99);
    /* 006dbc99: fld dword ptr [0x96c66c] */ FPUSH(R_F32((u32)(0x96c66cu)));
    /* 006dbc9f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_006dbca2:; BB(0x006dbca2);
    /* 006dbca2: mov eax, dword ptr [edi + 0x40c] */ r_eax = R32((u32)(r_edi+0x40cu));
    /* 006dbca8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dbcaa: je 0x6dbcb3 */ if (fZ) goto L_006dbcb3;
L_006dbcac:; BB(0x006dbcac);
    /* 006dbcac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dbcae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dbcaf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006dbcb0: ret 0xc */ FN_RET(0x006dbc80); r_esp += 16; return;
L_006dbcb3:; BB(0x006dbcb3);
    /* 006dbcb3: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dbcb7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006dbcb9: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dbcbd: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dbcc1: call 0x73c71c */ r_esp -= 4; W32(r_esp, 0x6dbcc6u); f_0073c71c();
    /* 006dbcc6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dbcc9: mov dword ptr [edi + 0x40c], eax */ W32((u32)(r_edi+0x40cu), r_eax);
    /* 006dbccf: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dbcd2: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006dbcd6: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 006dbcd9: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006dbcdd: mov ecx, eax */ r_ecx = r_eax;
    /* 006dbcdf: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6dbce4u); f_0070f5a4();
    /* 006dbce4: mov eax, dword ptr [edi + 0x40c] */ r_eax = R32((u32)(r_edi+0x40cu));
    /* 006dbcea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dbceb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006dbcec: ret 0xc */ FN_RET(0x006dbc80); r_esp += 16; return;
}

void f_006dbcf0(void) /* sub_6DBCF0 */
{
    FN_ENTER(0x006dbcf0);
    /* 006dbcf0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006dbcf1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006dbcf2: mov edi, ecx */ r_edi = r_ecx;
    /* 006dbcf4: call 0x78b208 */ r_esp -= 4; W32(r_esp, 0x6dbcf9u); f_0078b208();
    /* 006dbcf9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dbcfc: jle 0x6dbd09 */ if ((fZ||fS!=fO)) goto L_006dbd09;
L_006dbcfe:; BB(0x006dbcfe);
    /* 006dbcfe: fld dword ptr [0x96c660] */ FPUSH(R_F32((u32)(0x96c660u)));
    /* 006dbd04: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006dbd07: jmp 0x6dbd12 */ goto L_006dbd12;
L_006dbd09:; BB(0x006dbd09);
    /* 006dbd09: fld dword ptr [0x96c664] */ FPUSH(R_F32((u32)(0x96c664u)));
    /* 006dbd0f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
L_006dbd12:; BB(0x006dbd12);
    /* 006dbd12: mov eax, dword ptr [edi + 0x40c] */ r_eax = R32((u32)(r_edi+0x40cu));
    /* 006dbd18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dbd1a: je 0x6dbd23 */ if (fZ) goto L_006dbd23;
L_006dbd1c:; BB(0x006dbd1c);
    /* 006dbd1c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dbd1e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dbd1f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006dbd20: ret 8 */ FN_RET(0x006dbcf0); r_esp += 12; return;
L_006dbd23:; BB(0x006dbd23);
    /* 006dbd23: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006dbd25: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dbd29: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dbd2d: call 0x73c7e8 */ r_esp -= 4; W32(r_esp, 0x6dbd32u); f_0073c7e8();
    /* 006dbd32: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dbd35: mov dword ptr [edi + 0x40c], eax */ W32((u32)(r_edi+0x40cu), r_eax);
    /* 006dbd3b: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006dbd3e: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006dbd42: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 006dbd45: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006dbd49: mov ecx, eax */ r_ecx = r_eax;
    /* 006dbd4b: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x6dbd50u); f_0070f5a4();
    /* 006dbd50: mov eax, dword ptr [edi + 0x40c] */ r_eax = R32((u32)(r_edi+0x40cu));
    /* 006dbd56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dbd57: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006dbd58: ret 8 */ FN_RET(0x006dbcf0); r_esp += 12; return;
}

void f_006dbd5c(void) /* sub_6DBD5C */
{
    FN_ENTER(0x006dbd5c);
    /* 006dbd5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dbd5d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006dbd5f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006dbd61: call 0x70b04c */ r_esp -= 4; W32(r_esp, 0x6dbd66u); f_0070b04c();
    /* 006dbd66: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006dbd6a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dbd6c: jne 0x6dbd72 */ if (!fZ) goto L_006dbd72;
L_006dbd6e:; BB(0x006dbd6e);
    /* 006dbd6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006dbd6f: ret 4 */ FN_RET(0x006dbd5c); r_esp += 8; return;
L_006dbd72:; BB(0x006dbd72);
    /* 006dbd72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dbd73: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x6dbd78u); f_00857e98();
    /* 006dbd78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dbd79: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006dbd7a: ret 4 */ FN_RET(0x006dbd5c); r_esp += 8; return;
}

void f_006dbd80(void) /* sub_6DBD80 */
{
    FN_ENTER(0x006dbd80);
    /* 006dbd80: mov ecx, dword ptr [0xa96338] */ r_ecx = R32((u32)(0xa96338u));
    /* 006dbd86: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dbd88: je 0x6dbd91 */ if (fZ) goto L_006dbd91;
L_006dbd8a:; BB(0x006dbd8a);
    /* 006dbd8a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006dbd8c: call 0x6dbd5c */ r_esp -= 4; W32(r_esp, 0x6dbd91u); f_006dbd5c();
L_006dbd91:; BB(0x006dbd91);
    /* 006dbd91: mov eax, dword ptr [0xa9633c] */ r_eax = R32((u32)(0xa9633cu));
    /* 006dbd96: mov dword ptr [0xa96338], 0 */ W32((u32)(0xa96338u), 0x0u);
    /* 006dbda0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dbda2: je 0x6dbdb5 */ if (fZ) goto L_006dbdb5;
L_006dbda4:; BB(0x006dbda4);
    /* 006dbda4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006dbda5: call 0x5b9bac */ r_esp -= 4; W32(r_esp, 0x6dbdaau); f_005b9bac();
    /* 006dbdaa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dbdab: mov dword ptr [0xa9633c], 0 */ W32((u32)(0xa9633cu), 0x0u);
L_006dbdb5:; BB(0x006dbdb5);
    /* 006dbdb5: ret  */ FN_RET(0x006dbd80); r_esp += 4; return;
}

void f_006dbdb8(void) /* sub_6DBDB8 */
{
    FN_ENTER(0x006dbdb8);
    /* 006dbdb8: mov ecx, dword ptr [0xa96338] */ r_ecx = R32((u32)(0xa96338u));
    /* 006dbdbe: call 0x70b080 */ r_esp -= 4; W32(r_esp, 0x6dbdc3u); f_0070b080();
    /* 006dbdc3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dbdc5: jle 0x6dbddc */ if ((fZ||fS!=fO)) goto L_006dbddc;
L_006dbdc7:; BB(0x006dbdc7);
    /* 006dbdc7: mov ecx, dword ptr [0xa96338] */ r_ecx = R32((u32)(0xa96338u));
    /* 006dbdcd: call 0x70b070 */ r_esp -= 4; W32(r_esp, 0x6dbdd2u); f_0070b070();
    /* 006dbdd2: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006dbdd6: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006dbdd8: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 006dbddb: ret  */ FN_RET(0x006dbdb8); r_esp += 4; return;
L_006dbddc:; BB(0x006dbddc);
    /* 006dbddc: mov eax, dword ptr [0x9cf224] */ r_eax = R32((u32)(0x9cf224u));
    /* 006dbde1: ret  */ FN_RET(0x006dbdb8); r_esp += 4; return;
}

void f_006dbde4(void) /* sub_6DBDE4 */
{
    FN_ENTER(0x006dbde4);
    /* 006dbde4: mov ecx, dword ptr [0xa96338] */ r_ecx = R32((u32)(0xa96338u));
    /* 006dbdea: call 0x70b080 */ r_esp -= 4; W32(r_esp, 0x6dbdefu); f_0070b080();
    /* 006dbdef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dbdf1: jle 0x6dbe0d */ if ((fZ||fS!=fO)) goto L_006dbe0d;
L_006dbdf3:; BB(0x006dbdf3);
    /* 006dbdf3: mov ecx, dword ptr [0xa96338] */ r_ecx = R32((u32)(0xa96338u));
    /* 006dbdf9: call 0x70b070 */ r_esp -= 4; W32(r_esp, 0x6dbdfeu); f_0070b070();
    /* 006dbdfe: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006dbe02: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 006dbe05: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006dbe09: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 006dbe0c: ret  */ FN_RET(0x006dbde4); r_esp += 4; return;
L_006dbe0d:; BB(0x006dbe0d);
    /* 006dbe0d: mov eax, dword ptr [0x9cf224] */ r_eax = R32((u32)(0x9cf224u));
    /* 006dbe12: ret  */ FN_RET(0x006dbde4); r_esp += 4; return;
}

void f_006dbe14(void) /* sub_6DBE14 */
{
    FN_ENTER(0x006dbe14);
    /* 006dbe14: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dbe15: mov ecx, dword ptr [0xa96338] */ r_ecx = R32((u32)(0xa96338u));
    /* 006dbe1b: call 0x70b080 */ r_esp -= 4; W32(r_esp, 0x6dbe20u); f_0070b080();
    /* 006dbe20: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dbe22: jle 0x6dbe47 */ if ((fZ||fS!=fO)) goto L_006dbe47;
L_006dbe24:; BB(0x006dbe24);
    /* 006dbe24: mov eax, dword ptr [0xa962bc] */ r_eax = R32((u32)(0xa962bcu));
    /* 006dbe29: mov ebx, dword ptr [eax*4 + 0x96c6ec] */ r_ebx = R32((u32)(r_eax*4+0x96c6ecu));
    /* 006dbe30: mov ecx, dword ptr [0xa96338] */ r_ecx = R32((u32)(0xa96338u));
    /* 006dbe36: call 0x70b070 */ r_esp -= 4; W32(r_esp, 0x6dbe3bu); f_0070b070();
    /* 006dbe3b: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006dbe3f: mov edx, dword ptr [eax + ebx*4] */ r_edx = R32((u32)(r_eax+r_ebx*4));
    /* 006dbe42: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 006dbe45: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006dbe46: ret  */ FN_RET(0x006dbe14); r_esp += 4; return;
L_006dbe47:; BB(0x006dbe47);
    /* 006dbe47: mov eax, dword ptr [0x9cf224] */ r_eax = R32((u32)(0x9cf224u));
    /* 006dbe4c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006dbe4d: ret  */ FN_RET(0x006dbe14); r_esp += 4; return;
}

void f_006dbe50(void) /* sub_6DBE50 */
{
    FN_ENTER(0x006dbe50);
    /* 006dbe50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006dbe51: mov ecx, dword ptr [0xa96338] */ r_ecx = R32((u32)(0xa96338u));
    /* 006dbe57: call 0x70b080 */ r_esp -= 4; W32(r_esp, 0x6dbe5cu); f_0070b080();
    /* 006dbe5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006dbe5e: jle 0x6dbe83 */ if ((fZ||fS!=fO)) goto L_006dbe83;
L_006dbe60:; BB(0x006dbe60);
    /* 006dbe60: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x6dbe65u); f_0078b1c4();
    /* 006dbe65: mov edi, dword ptr [eax*4 + 0x96c714] */ r_edi = R32((u32)(r_eax*4+0x96c714u));
    /* 006dbe6c: mov ecx, dword ptr [0xa96338] */ r_ecx = R32((u32)(0xa96338u));
    /* 006dbe72: call 0x70b070 */ r_esp -= 4; W32(r_esp, 0x6dbe77u); f_0070b070();
    /* 006dbe77: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006dbe7b: mov edx, dword ptr [eax + edi*4] */ r_edx = R32((u32)(r_eax+r_edi*4));
    /* 006dbe7e: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 006dbe81: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006dbe82: ret  */ FN_RET(0x006dbe50); r_esp += 4; return;
L_006dbe83:; BB(0x006dbe83);
    /* 006dbe83: mov eax, dword ptr [0x9cf224] */ r_eax = R32((u32)(0x9cf224u));
    /* 006dbe88: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006dbe89: ret  */ FN_RET(0x006dbe50); r_esp += 4; return;
}

void f_006dbe8c(void) /* sub_6DBE8C */
{
    FN_ENTER(0x006dbe8c);
    /* 006dbe8c: mov dword ptr [0xa9632c], 0x3f800000 */ W32((u32)(0xa9632cu), 0x3f800000u);
    /* 006dbe96: mov dword ptr [0xa96330], 0x41000000 */ W32((u32)(0xa96330u), 0x41000000u);
    /* 006dbea0: mov dword ptr [0xa96334], 0x3fc00000 */ W32((u32)(0xa96334u), 0x3fc00000u);
    /* 006dbeaa: ret  */ FN_RET(0x006dbe8c); r_esp += 4; return;
}

void f_006dbeac(void)
{
    FN_ENTER(0x006dbeac);
    /* 006dbeac: mov eax, dword ptr [0xa962bc] */ r_eax = R32((u32)(0xa962bcu));
    /* 006dbeb1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006dbeb3: jl 0x6dbeba */ if ((fS!=fO)) goto L_006dbeba;
L_006dbeb5:; BB(0x006dbeb5);
    /* 006dbeb5: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dbeb8: jle 0x6dbec4 */ if ((fZ||fS!=fO)) goto L_006dbec4;
L_006dbeba:; BB(0x006dbeba);
    /* 006dbeba: mov dword ptr [0xa962bc], 0 */ W32((u32)(0xa962bcu), 0x0u);
L_006dbec4:; BB(0x006dbec4);
    /* 006dbec4: mov eax, dword ptr [0xa9cd44] */ r_eax = R32((u32)(0xa9cd44u));
    /* 006dbec9: push dword ptr [eax*4 + 0x9cf204] */ { u32 v = R32((u32)(r_eax*4+0x9cf204u)); r_esp -= 4; W32(r_esp, v); }
    /* 006dbed0: call 0x70b084 */ r_esp -= 4; W32(r_esp, 0x6dbed5u); f_0070b084();
    /* 006dbed5: mov dword ptr [0xa96338], eax */ W32((u32)(0xa96338u), r_eax);
    /* 006dbeda: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006dbedb: ret  */ FN_RET(0x006dbeac); r_esp += 4; return;
}

void f_006dbedc(void) /* sub_6DBEDC */
{
    FN_ENTER(0x006dbedc);
    /* 006dbedc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006dbedd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006dbede: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006dbedf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006dbee0: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006dbee3: mov edx, dword ptr [esp + 0x70] */ r_edx = R32((u32)(r_esp+0x70u));
    /* 006dbee7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006dbee9: lea eax, [edx - 1] */ r_eax = (u32)(r_edx+0xffffffffu);
    /* 006dbeec: mov esi, dword ptr [esp + 0x74] */ r_esi = R32((u32)(r_esp+0x74u));
    /* 006dbef0: mov ebx, edx */ r_ebx = r_edx;
    /* 006dbef2: jmp 0x6dbefe */ goto L_006dbefe;
L_006dbef4:; BB(0x006dbef4);
    /* 006dbef4: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 006dbef8: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 006dbefc: mov ecx, edx */ r_ecx = r_edx;
L_006dbefe:; BB(0x006dbefe);
    /* 006dbefe: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dbf00: jge 0x6dc1da */ if ((fS==fO)) goto L_006dc1da;
L_006dbf06:; BB(0x006dbf06);
    /* 006dbf06: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 006dbf0a: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 006dbf0d: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 006dbf11: mov ebp, edx */ r_ebp = r_edx;
    /* 006dbf13: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 006dbf16: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006dbf18: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 006dbf1a: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 006dbf1e: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
L_006dbf22:; BB(0x006dbf22);
    /* 006dbf22: cmp ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dbf24: jge 0x6dbef4 */ if ((fS==fO)) goto L_006dbef4;
L_006dbf26:; BB(0x006dbf26);
    /* 006dbf26: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dbf28: je 0x6dc115 */ if (fZ) goto L_006dc115;
L_006dbf2e:; BB(0x006dbf2e);
    /* 006dbf2e: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dbf31: jne 0x6dc015 */ if (!fZ) goto L_006dc015;
L_006dbf37:; BB(0x006dbf37);
    /* 006dbf37: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 006dbf3b: movzx eax, byte ptr [edi + eax*8] */ r_eax = (u32)R8((u32)(r_edi+r_eax*8));
    /* 006dbf3f: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 006dbf43: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006dbf45: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006dbf47: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 006dbf4b: movzx ecx, byte ptr [edi + ecx*8] */ r_ecx = (u32)R8((u32)(r_edi+r_ecx*8));
    /* 006dbf4f: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dbf51: jg 0x6dbf73 */ if ((!fZ&&fS==fO)) goto L_006dbf73;
L_006dbf53:; BB(0x006dbf53);
    /* 006dbf53: jne 0x6dc1d2 */ if (!fZ) goto L_006dc1d2;
L_006dbf59:; BB(0x006dbf59);
    /* 006dbf59: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 006dbf5d: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 006dbf61: movzx eax, byte ptr [edi + eax*8 + 1] */ r_eax = (u32)R8((u32)(r_edi+r_eax*8+0x1u));
    /* 006dbf66: movzx ecx, byte ptr [edi + ecx*8 + 1] */ r_ecx = (u32)R8((u32)(r_edi+r_ecx*8+0x1u));
    /* 006dbf6b: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dbf6d: jle 0x6dc1d2 */ if ((fZ||fS!=fO)) goto L_006dc1d2;
L_006dbf73:; BB(0x006dbf73);
    /* 006dbf73: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 006dbf77: call 0x6c8960 */ r_esp -= 4; W32(r_esp, 0x6dbf7cu); f_006c8960();
    /* 006dbf7c: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 006dbf80: mov ecx, dword ptr [edi + edx*8] */ r_ecx = R32((u32)(r_edi+r_edx*8));
    /* 006dbf83: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 006dbf87: mov eax, dword ptr [edi + edx*8 + 4] */ r_eax = R32((u32)(r_edi+r_edx*8+0x4u));
    /* 006dbf8b: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006dbf8f: mov eax, dword ptr [edi + edx*8 + 8] */ r_eax = R32((u32)(r_edi+r_edx*8+0x8u));
    /* 006dbf93: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006dbf97: mov eax, dword ptr [edi + edx*8 + 0xc] */ r_eax = R32((u32)(r_edi+r_edx*8+0xcu));
    /* 006dbf9b: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 006dbf9f: mov eax, dword ptr [edi + edx*8 + 0x10] */ r_eax = R32((u32)(r_edi+r_edx*8+0x10u));
    /* 006dbfa3: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 006dbfa7: mov eax, dword ptr [edi + edx*8 + 0x14] */ r_eax = R32((u32)(r_edi+r_edx*8+0x14u));
    /* 006dbfab: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 006dbfaf: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 006dbfb3: mov ecx, dword ptr [edi + eax*8] */ r_ecx = R32((u32)(r_edi+r_eax*8));
    /* 006dbfb6: mov dword ptr [edi + edx*8], ecx */ W32((u32)(r_edi+r_edx*8), r_ecx);
    /* 006dbfb9: mov ecx, dword ptr [edi + eax*8 + 4] */ r_ecx = R32((u32)(r_edi+r_eax*8+0x4u));
    /* 006dbfbd: mov dword ptr [edi + edx*8 + 4], ecx */ W32((u32)(r_edi+r_edx*8+0x4u), r_ecx);
    /* 006dbfc1: mov ecx, dword ptr [edi + eax*8 + 8] */ r_ecx = R32((u32)(r_edi+r_eax*8+0x8u));
    /* 006dbfc5: mov dword ptr [edi + edx*8 + 8], ecx */ W32((u32)(r_edi+r_edx*8+0x8u), r_ecx);
    /* 006dbfc9: mov ecx, dword ptr [edi + eax*8 + 0xc] */ r_ecx = R32((u32)(r_edi+r_eax*8+0xcu));
    /* 006dbfcd: mov dword ptr [edi + edx*8 + 0xc], ecx */ W32((u32)(r_edi+r_edx*8+0xcu), r_ecx);
    /* 006dbfd1: mov ecx, dword ptr [edi + eax*8 + 0x10] */ r_ecx = R32((u32)(r_edi+r_eax*8+0x10u));
    /* 006dbfd5: mov dword ptr [edi + edx*8 + 0x10], ecx */ W32((u32)(r_edi+r_edx*8+0x10u), r_ecx);
    /* 006dbfd9: mov ecx, dword ptr [edi + eax*8 + 0x14] */ r_ecx = R32((u32)(r_edi+r_eax*8+0x14u));
    /* 006dbfdd: mov dword ptr [edi + edx*8 + 0x14], ecx */ W32((u32)(r_edi+r_edx*8+0x14u), r_ecx);
    /* 006dbfe1: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 006dbfe5: mov dword ptr [edi + eax*8], ecx */ W32((u32)(r_edi+r_eax*8), r_ecx);
    /* 006dbfe8: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 006dbfec: mov dword ptr [edi + eax*8 + 4], ecx */ W32((u32)(r_edi+r_eax*8+0x4u), r_ecx);
    /* 006dbff0: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 006dbff4: mov dword ptr [edi + eax*8 + 8], ecx */ W32((u32)(r_edi+r_eax*8+0x8u), r_ecx);
    /* 006dbff8: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 006dbffc: mov dword ptr [edi + eax*8 + 0xc], ecx */ W32((u32)(r_edi+r_eax*8+0xcu), r_ecx);
    /* 006dc000: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 006dc004: mov dword ptr [edi + eax*8 + 0x10], ecx */ W32((u32)(r_edi+r_eax*8+0x10u), r_ecx);
    /* 006dc008: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 006dc00c: mov dword ptr [edi + eax*8 + 0x14], ecx */ W32((u32)(r_edi+r_eax*8+0x14u), r_ecx);
    /* 006dc010: jmp 0x6dc1d2 */ goto L_006dc1d2;
L_006dc015:; BB(0x006dc015);
    /* 006dc015: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006dc018: jne 0x6dc1d2 */ if (!fZ) goto L_006dc1d2;
L_006dc01e:; BB(0x006dc01e);
    /* 006dc01e: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 006dc022: movzx eax, byte ptr [edi + eax*8] */ r_eax = (u32)R8((u32)(r_edi+r_eax*8));
    /* 006dc026: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 006dc02a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006dc02c: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006dc02e: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 006dc032: movzx ecx, byte ptr [edi + ecx*8] */ r_ecx = (u32)R8((u32)(r_edi+r_ecx*8));
    /* 006dc036: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dc038: jg 0x6dc076 */ if ((!fZ&&fS==fO)) goto L_006dc076;
L_006dc03a:; BB(0x006dc03a);
    /* 006dc03a: jne 0x6dc1d2 */ if (!fZ) goto L_006dc1d2;
L_006dc040:; BB(0x006dc040);
    /* 006dc040: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 006dc044: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 006dc048: movzx eax, byte ptr [edi + eax*8 + 1] */ r_eax = (u32)R8((u32)(r_edi+r_eax*8+0x1u));
    /* 006dc04d: movzx ecx, byte ptr [edi + ecx*8 + 1] */ r_ecx = (u32)R8((u32)(r_edi+r_ecx*8+0x1u));
    /* 006dc052: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dc054: jg 0x6dc076 */ if ((!fZ&&fS==fO)) goto L_006dc076;
L_006dc056:; BB(0x006dc056);
    /* 006dc056: jne 0x6dc1d2 */ if (!fZ) goto L_006dc1d2;
L_006dc05c:; BB(0x006dc05c);
    /* 006dc05c: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 006dc060: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 006dc064: movzx eax, byte ptr [edi + eax*8 + 2] */ r_eax = (u32)R8((u32)(r_edi+r_eax*8+0x2u));
    /* 006dc069: movzx ecx, byte ptr [edi + ecx*8 + 2] */ r_ecx = (u32)R8((u32)(r_edi+r_ecx*8+0x2u));
    /* 006dc06e: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dc070: jle 0x6dc1d2 */ if ((fZ||fS!=fO)) goto L_006dc1d2;
L_006dc076:; BB(0x006dc076);
    /* 006dc076: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006dc079: call 0x6c8960 */ r_esp -= 4; W32(r_esp, 0x6dc07eu); f_006c8960();
    /* 006dc07e: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 006dc082: mov ecx, dword ptr [edi + edx*8] */ r_ecx = R32((u32)(r_edi+r_edx*8));
    /* 006dc085: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 006dc088: mov eax, dword ptr [edi + edx*8 + 4] */ r_eax = R32((u32)(r_edi+r_edx*8+0x4u));
    /* 006dc08c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006dc090: mov eax, dword ptr [edi + edx*8 + 8] */ r_eax = R32((u32)(r_edi+r_edx*8+0x8u));
    /* 006dc094: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006dc098: mov eax, dword ptr [edi + edx*8 + 0xc] */ r_eax = R32((u32)(r_edi+r_edx*8+0xcu));
    /* 006dc09c: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 006dc0a0: mov eax, dword ptr [edi + edx*8 + 0x10] */ r_eax = R32((u32)(r_edi+r_edx*8+0x10u));
    /* 006dc0a4: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006dc0a8: mov eax, dword ptr [edi + edx*8 + 0x14] */ r_eax = R32((u32)(r_edi+r_edx*8+0x14u));
    /* 006dc0ac: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006dc0b0: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 006dc0b4: mov ecx, dword ptr [edi + eax*8] */ r_ecx = R32((u32)(r_edi+r_eax*8));
    /* 006dc0b7: mov dword ptr [edi + edx*8], ecx */ W32((u32)(r_edi+r_edx*8), r_ecx);
    /* 006dc0ba: mov ecx, dword ptr [edi + eax*8 + 4] */ r_ecx = R32((u32)(r_edi+r_eax*8+0x4u));
    /* 006dc0be: mov dword ptr [edi + edx*8 + 4], ecx */ W32((u32)(r_edi+r_edx*8+0x4u), r_ecx);
    /* 006dc0c2: mov ecx, dword ptr [edi + eax*8 + 8] */ r_ecx = R32((u32)(r_edi+r_eax*8+0x8u));
    /* 006dc0c6: mov dword ptr [edi + edx*8 + 8], ecx */ W32((u32)(r_edi+r_edx*8+0x8u), r_ecx);
    /* 006dc0ca: mov ecx, dword ptr [edi + eax*8 + 0xc] */ r_ecx = R32((u32)(r_edi+r_eax*8+0xcu));
    /* 006dc0ce: mov dword ptr [edi + edx*8 + 0xc], ecx */ W32((u32)(r_edi+r_edx*8+0xcu), r_ecx);
    /* 006dc0d2: mov ecx, dword ptr [edi + eax*8 + 0x10] */ r_ecx = R32((u32)(r_edi+r_eax*8+0x10u));
    /* 006dc0d6: mov dword ptr [edi + edx*8 + 0x10], ecx */ W32((u32)(r_edi+r_edx*8+0x10u), r_ecx);
    /* 006dc0da: mov ecx, dword ptr [edi + eax*8 + 0x14] */ r_ecx = R32((u32)(r_edi+r_eax*8+0x14u));
    /* 006dc0de: mov dword ptr [edi + edx*8 + 0x14], ecx */ W32((u32)(r_edi+r_edx*8+0x14u), r_ecx);
    /* 006dc0e2: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 006dc0e5: mov dword ptr [edi + eax*8], ecx */ W32((u32)(r_edi+r_eax*8), r_ecx);
    /* 006dc0e8: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 006dc0ec: mov dword ptr [edi + eax*8 + 4], ecx */ W32((u32)(r_edi+r_eax*8+0x4u), r_ecx);
    /* 006dc0f0: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 006dc0f4: mov dword ptr [edi + eax*8 + 8], ecx */ W32((u32)(r_edi+r_eax*8+0x8u), r_ecx);
    /* 006dc0f8: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 006dc0fc: mov dword ptr [edi + eax*8 + 0xc], ecx */ W32((u32)(r_edi+r_eax*8+0xcu), r_ecx);
    /* 006dc100: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 006dc104: mov dword ptr [edi + eax*8 + 0x10], ecx */ W32((u32)(r_edi+r_eax*8+0x10u), r_ecx);
    /* 006dc108: mov ecx, dword ptr [esp + 0x14] */ r_ecx = R32((u32)(r_esp+0x14u));
    /* 006dc10c: mov dword ptr [edi + eax*8 + 0x14], ecx */ W32((u32)(r_edi+r_eax*8+0x14u), r_ecx);
    /* 006dc110: jmp 0x6dc1d2 */ goto L_006dc1d2;
L_006dc115:; BB(0x006dc115);
    /* 006dc115: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 006dc119: movzx eax, byte ptr [edi + eax*8] */ r_eax = (u32)R8((u32)(r_edi+r_eax*8));
    /* 006dc11d: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 006dc121: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006dc123: sub ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006dc125: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 006dc129: movzx ecx, byte ptr [edi + ecx*8] */ r_ecx = (u32)R8((u32)(r_edi+r_ecx*8));
    /* 006dc12d: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006dc12f: jle 0x6dc1d2 */ if ((fZ||fS!=fO)) goto L_006dc1d2;
L_006dc135:; BB(0x006dc135);
    /* 006dc135: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 006dc139: call 0x6c8960 */ r_esp -= 4; W32(r_esp, 0x6dc13eu); f_006c8960();
    /* 006dc13e: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 006dc142: mov ecx, dword ptr [edi + edx*8] */ r_ecx = R32((u32)(r_edi+r_edx*8));
    /* 006dc145: mov dword ptr [esp + 0x30], ecx */ W32((u32)(r_esp+0x30u), r_ecx);
    /* 006dc149: mov eax, dword ptr [edi + edx*8 + 4] */ r_eax = R32((u32)(r_edi+r_edx*8+0x4u));
    /* 006dc14d: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 006dc151: mov eax, dword ptr [edi + edx*8 + 8] */ r_eax = R32((u32)(r_edi+r_edx*8+0x8u));
    /* 006dc155: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 006dc159: mov eax, dword ptr [edi + edx*8 + 0xc] */ r_eax = R32((u32)(r_edi+r_edx*8+0xcu));
    /* 006dc15d: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 006dc161: mov eax, dword ptr [edi + edx*8 + 0x10] */ r_eax = R32((u32)(r_edi+r_edx*8+0x10u));
    /* 006dc165: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 006dc169: mov eax, dword ptr [edi + edx*8 + 0x14] */ r_eax = R32((u32)(r_edi+r_edx*8+0x14u));
    /* 006dc16d: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 006dc171: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 006dc175: mov ecx, dword ptr [edi + eax*8] */ r_ecx = R32((u32)(r_edi+r_eax*8));
    /* 006dc178: mov dword ptr [edi + edx*8], ecx */ W32((u32)(r_edi+r_edx*8), r_ecx);
    /* 006dc17b: mov ecx, dword ptr [edi + eax*8 + 4] */ r_ecx = R32((u32)(r_edi+r_eax*8+0x4u));
    /* 006dc17f: mov dword ptr [edi + edx*8 + 4], ecx */ W32((u32)(r_edi+r_edx*8+0x4u), r_ecx);
    /* 006dc183: mov ecx, dword ptr [edi + eax*8 + 8] */ r_ecx = R32((u32)(r_edi+r_eax*8+0x8u));
    /* 006dc187: mov dword ptr [edi + edx*8 + 8], ecx */ W32((u32)(r_edi+r_edx*8+0x8u), r_ecx);
    /* 006dc18b: mov ecx, dword ptr [edi + eax*8 + 0xc] */ r_ecx = R32((u32)(r_edi+r_eax*8+0xcu));
    /* 006dc18f: mov dword ptr [edi + edx*8 + 0xc], ecx */ W32((u32)(r_edi+r_edx*8+0xcu), r_ecx);
    /* 006dc193: mov ecx, dword ptr [edi + eax*8 + 0x10] */ r_ecx = R32((u32)(r_edi+r_eax*8+0x10u));
    /* 006dc197: mov dword ptr [edi + edx*8 + 0x10], ecx */ W32((u32)(r_edi+r_edx*8+0x10u), r_ecx);
    /* 006dc19b: mov ecx, dword ptr [edi + eax*8 + 0x14] */ r_ecx = R32((u32)(r_edi+r_eax*8+0x14u));
    /* 006dc19f: mov dword ptr [edi + edx*8 + 0x14], ecx */ W32((u32)(r_edi+r_edx*8+0x14u), r_ecx);
    /* 006dc1a3: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 006dc1a7: mov dword ptr [edi + eax*8], ecx */ W32((u32)(r_edi+r_eax*8), r_ecx);
    /* 006dc1aa: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 006dc1ae: mov dword ptr [edi + eax*8 + 4], ecx */ W32((u32)(r_edi+r_eax*8+0x4u), r_ecx);
    /* 006dc1b2: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 006dc1b6: mov dword ptr [edi + eax*8 + 8], ecx */ W32((u32)(r_edi+r_eax*8+0x8u), r_ecx);
    /* 006dc1ba: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 006dc1be: mov dword ptr [edi + eax*8 + 0xc], ecx */ W32((u32)(r_edi+r_eax*8+0xcu), r_ecx);
    /* 006dc1c2: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
    /* 006dc1c6: mov dword ptr [edi + eax*8 + 0x10], ecx */ W32((u32)(r_edi+r_eax*8+0x10u), r_ecx);
    /* 006dc1ca: mov ecx, dword ptr [esp + 0x44] */ r_ecx = R32((u32)(r_esp+0x44u));
    /* 006dc1ce: mov dword ptr [edi + eax*8 + 0x14], ecx */ W32((u32)(r_edi+r_eax*8+0x14u), r_ecx);
L_006dc1d2:; BB(0x006dc1d2);
    /* 006dc1d2: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006dc1d5: jmp 0x6dbf22 */ goto L_006dbf22;
L_006dc1da:; BB(0x006dc1da);
    /* 006dc1da: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006dc1dd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006dc1de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006dc1df: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006dc1e0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006dc1e1: ret  */ FN_RET(0x006dbedc); r_esp += 4; return;
}

