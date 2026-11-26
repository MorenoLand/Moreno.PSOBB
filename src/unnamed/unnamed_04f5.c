#include "protos.h"

void f_004f50c0(void) /* sub_4F50C0 */
{
    FN_ENTER(0x004f50c0);
    /* 004f50c0: mov dword ptr [0x9b91ac], 0xffffffff */ W32((u32)(0x9b91acu), 0xffffffffu);
    /* 004f50ca: ret  */ FN_RET(0x004f50c0); r_esp += 4; return;
}

void f_004f50cc(void) /* sub_4F50CC */
{
    FN_ENTER(0x004f50cc);
    /* 004f50cc: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004f50d0: cmp eax, dword ptr [0x9b91ac] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9b91acu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f50d6: je 0x4f50f9 */ if (fZ) goto L_004f50f9;
L_004f50d8:; BB(0x004f50d8);
    /* 004f50d8: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f50db: jl 0x4f50f9 */ if ((fS!=fO)) goto L_004f50f9;
L_004f50dd:; BB(0x004f50dd);
    /* 004f50dd: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f50e0: jge 0x4f50f9 */ if ((fS==fO)) goto L_004f50f9;
L_004f50e2:; BB(0x004f50e2);
    /* 004f50e2: mov dword ptr [0x9b91ac], eax */ W32((u32)(0x9b91acu), r_eax);
    /* 004f50e7: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f50ea: je 0x4f50f9 */ if (fZ) goto L_004f50f9;
L_004f50ec:; BB(0x004f50ec);
    /* 004f50ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f50ed: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f50f1: call 0x4f50fc */ r_esp -= 4; W32(r_esp, 0x4f50f6u); f_004f50fc();
    /* 004f50f6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_004f50f9:; BB(0x004f50f9);
    /* 004f50f9: ret  */ FN_RET(0x004f50cc); r_esp += 4; return;
}

void f_004f50fc(void) /* sub_4F50FC */
{
    FN_ENTER(0x004f50fc);
    /* 004f50fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f50fd: mov ebp, esp */ r_ebp = r_esp;
    /* 004f50ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f5101: push 0x8d2fe8 */ { u32 v = 0x8d2fe8u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5106: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f510c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f510d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f5114: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f5117: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f511a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f511d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f5120: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f5123: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5125: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004f512c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f5131u); f_005caba4();
    /* 004f5131: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f5132: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004f5135: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5137: je 0x4f516d */ if (fZ) goto L_004f516d;
L_004f5139:; BB(0x004f5139);
    /* 004f5139: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004f5140: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f5147: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f514a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f514d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f5150: call 0x4f5174 */ r_esp -= 4; W32(r_esp, 0x4f5155u); f_004f5174();
    /* 004f5155: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f5158: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004f515f:; BB(0x004f515f);
    /* 004f515f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f5162: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f5169: mov esp, ebp */ r_esp = r_ebp;
    /* 004f516b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f516c: ret  */ FN_RET(0x004f50fc); r_esp += 4; return;
L_004f516d:; BB(0x004f516d);
    /* 004f516d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f516f: jmp 0x4f515f */ goto L_004f515f;
}

void f_004f5174(void) /* sub_4F5174 */
{
    FN_ENTER(0x004f5174);
    /* 004f5174: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f5175: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f5176: mov edi, ecx */ r_edi = r_ecx;
    /* 004f5178: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 004f517c: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f5180: mov ecx, edi */ r_ecx = r_edi;
    /* 004f5182: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4f5187u); f_008193cc();
    /* 004f5187: mov dword ptr [edi], 0xafdd48 */ W32((u32)(r_edi), 0xafdd48u);
    /* 004f518d: mov eax, dword ptr [0x9b91a8] */ r_eax = R32((u32)(0x9b91a8u));
    /* 004f5192: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 004f5195: mov dword ptr [edi + 0x20], esi */ W32((u32)(r_edi+0x20u), r_esi);
    /* 004f5198: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f519b: jg 0x4f51b2 */ if ((!fZ&&fS==fO)) goto L_004f51b2;
L_004f519d:; BB(0x004f519d);
    /* 004f519d: mov dword ptr [edi + 0x24], 0x12 */ W32((u32)(r_edi+0x24u), 0x12u);
    /* 004f51a4: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 004f51a7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f51a9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f51ab: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f51ad: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 004f51b0: jmp 0x4f51c8 */ goto L_004f51c8;
L_004f51b2:; BB(0x004f51b2);
    /* 004f51b2: mov dword ptr [edi + 0x24], 0x13 */ W32((u32)(r_edi+0x24u), 0x13u);
    /* 004f51b9: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 004f51bc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f51be: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f51c0: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004f51c2: add eax, -0x15 */ {  u32 a = r_eax; u32 b = 0xffffffebu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f51c5: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
L_004f51c8:; BB(0x004f51c8);
    /* 004f51c8: mov dword ptr [edi + 0x2c], 5 */ W32((u32)(r_edi+0x2cu), 0x5u);
    /* 004f51cf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f51d1: mov dword ptr [edi + 0x34], edx */ W32((u32)(r_edi+0x34u), r_edx);
    /* 004f51d4: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 004f51d7: mov dword ptr [edi + 0x30], 0 */ W32((u32)(r_edi+0x30u), 0x0u);
    /* 004f51de: mov eax, edi */ r_eax = r_edi;
    /* 004f51e0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f51e1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f51e2: ret 8 */ FN_RET(0x004f5174); r_esp += 12; return;
}

void f_004f51e8(void) /* sub_4F51E8 */
{
    FN_ENTER(0x004f51e8);
    /* 004f51e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f51e9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004f51eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f51ed: call 0x4f520c */ r_esp -= 4; W32(r_esp, 0x4f51f2u); f_004f520c();
    /* 004f51f2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004f51f6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f51f8: jne 0x4f51fe */ if (!fZ) goto L_004f51fe;
L_004f51fa:; BB(0x004f51fa);
    /* 004f51fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f51fb: ret 4 */ FN_RET(0x004f51e8); r_esp += 8; return;
L_004f51fe:; BB(0x004f51fe);
    /* 004f51fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f51ff: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4f5204u); f_005c2f74();
    /* 004f5204: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f5205: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f5206: ret 4 */ FN_RET(0x004f51e8); r_esp += 8; return;
}

void f_004f520c(void) /* sub_4F520C */
{
    FN_ENTER(0x004f520c);
    /* 004f520c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f520d: mov ebp, esp */ r_ebp = r_esp;
    /* 004f520f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f5211: push 0x8d3004 */ { u32 v = 0x8d3004u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5216: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f521c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f521d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f5224: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f5227: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f522a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f522d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f5230: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f5233: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004f5236: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f5239: mov dword ptr [ecx], 0xafdda8 */ W32((u32)(r_ecx), 0xafdda8u);
    /* 004f523f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f5246: call 0x4f4710 */ r_esp -= 4; W32(r_esp, 0x4f524bu); f_004f4710();
    /* 004f524b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f524e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f5255: mov esp, ebp */ r_esp = r_ebp;
    /* 004f5257: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f5258: ret  */ FN_RET(0x004f520c); r_esp += 4; return;
}

void f_004f525c(void) /* sub_4F525C */
{
    FN_ENTER(0x004f525c);
    /* 004f525c: mov eax, dword ptr [0xa7223c] */ r_eax = R32((u32)(0xa7223cu));
    /* 004f5261: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004f5263: jne 0x4f5282 */ if (!fZ) goto L_004f5282;
L_004f5265:; BB(0x004f5265);
    /* 004f5265: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 004f5268: mov edx, eax */ r_edx = r_eax;
    /* 004f526a: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004f526c: shr edx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004f526f: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f5271: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004f5274: cmp edx, dword ptr [0x9b8d90] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9b8d90u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f527a: jne 0x4f5293 */ if (!fZ) goto L_004f5293;
L_004f527c:; BB(0x004f527c);
    /* 004f527c: mov eax, 1 */ r_eax = 0x1u;
    /* 004f5281: ret  */ FN_RET(0x004f525c); r_esp += 4; return;
L_004f5282:; BB(0x004f5282);
    /* 004f5282: jle 0x4f5293 */ if ((fZ||fS!=fO)) goto L_004f5293;
L_004f5284:; BB(0x004f5284);
    /* 004f5284: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f5287: jg 0x4f5293 */ if ((!fZ&&fS==fO)) goto L_004f5293;
L_004f5289:; BB(0x004f5289);
    /* 004f5289: mov eax, dword ptr [0x9b8d94] */ r_eax = R32((u32)(0x9b8d94u));
    /* 004f528e: cmp eax, dword ptr [ecx + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f5291: je 0x4f527c */ if (fZ) goto L_004f527c;
L_004f5293:; BB(0x004f5293);
    /* 004f5293: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f5295: ret  */ FN_RET(0x004f525c); r_esp += 4; return;
}

void f_004f5298(void) /* sub_4F5298 */
{
    FN_ENTER(0x004f5298);
    /* 004f5298: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f5299: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f529c: mov esi, ecx */ r_esi = r_ecx;
    /* 004f529e: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f52a2: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f52a6: mov ecx, esi */ r_ecx = r_esi;
    /* 004f52a8: call 0x4f4760 */ r_esp -= 4; W32(r_esp, 0x4f52adu); f_004f4760();
    /* 004f52ad: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 004f52b0: mov dword ptr [esi], 0xafdda8 */ W32((u32)(r_esi), 0xafdda8u);
    /* 004f52b6: mov eax, dword ptr [0x9b91b0] */ r_eax = R32((u32)(0x9b91b0u));
    /* 004f52bb: mov dword ptr [esi + 0x28], 0x3d088889 */ W32((u32)(r_esi+0x28u), 0x3d088889u);
    /* 004f52c2: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 004f52c5: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004f52c7: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f52ca: mov dword ptr [esi + 0x2c], 0xbcb60b61 */ W32((u32)(r_esi+0x2cu), 0xbcb60b61u);
    /* 004f52d1: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004f52d4: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004f52d7: fmul dword ptr [0x91e4e4] */ ST(0) = ST(0) * R_F32((u32)(0x91e4e4u));
    /* 004f52dd: fadd dword ptr [0x91e4e8] */ ST(0) = ST(0) + R_F32((u32)(0x91e4e8u));
    /* 004f52e3: mov dword ptr [esi + 0x34], 0x3f2aaaab */ W32((u32)(r_esi+0x34u), 0x3f2aaaabu);
    /* 004f52ea: fstp dword ptr [esi + 0x40] */ W_F32((u32)(r_esi+0x40u), ST(0)); FPOP();
    /* 004f52ed: mov dword ptr [esi + 0x38], 0xbd888889 */ W32((u32)(r_esi+0x38u), 0xbd888889u);
    /* 004f52f4: mov ecx, esi */ r_ecx = r_esi;
    /* 004f52f6: mov dword ptr [esi + 0x3c], 0 */ W32((u32)(r_esi+0x3cu), 0x0u);
    /* 004f52fd: call 0x4f5314 */ r_esp -= 4; W32(r_esp, 0x4f5302u); f_004f5314();
    /* 004f5302: mov dword ptr [esi + 0x44], 0 */ W32((u32)(r_esi+0x44u), 0x0u);
    /* 004f5309: mov eax, esi */ r_eax = r_esi;
    /* 004f530b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f530e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f530f: ret 8 */ FN_RET(0x004f5298); r_esp += 12; return;
}

void f_004f5314(void) /* sub_4F5314 */
{
    FN_ENTER(0x004f5314);
    /* 004f5314: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f5315: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f5318: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004f531a: fild dword ptr [ebp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x20u)));
    /* 004f531d: fmul dword ptr [0x91e41c] */ ST(0) = ST(0) * R_F32((u32)(0x91e41cu));
    /* 004f5323: fadd dword ptr [0x91e4dc] */ ST(0) = ST(0) + R_F32((u32)(0x91e4dcu));
    /* 004f5329: fld dword ptr [0x91e4e0] */ FPUSH(R_F32((u32)(0x91e4e0u)));
    /* 004f532f: fld dword ptr [0x91e4d8] */ FPUSH(R_F32((u32)(0x91e4d8u)));
    /* 004f5335: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 004f5338: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004f533a: fstp dword ptr [ebp + 0x4c] */ W_F32((u32)(r_ebp+0x4cu), ST(0)); FPOP();
    /* 004f533d: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 004f5340: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 004f5342: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f5344: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f5345: ja 0x4f534d */ if ((!fC&&!fZ)) goto L_004f534d;
L_004f5347:; BB(0x004f5347);
    /* 004f5347: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f5349: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004f534b: jmp 0x4f539d */ goto L_004f539d;
L_004f534d:; BB(0x004f534d);
    /* 004f534d: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004f534f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f5351: mov edx, 0x42680000 */ r_edx = 0x42680000u;
    /* 004f5356: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004f5359: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 004f535b: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004f535d: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004f535f: fmul dword ptr [0x91e4d4] */ ST(0) = ST(0) * R_F32((u32)(0x91e4d4u));
    /* 004f5365: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004f5368: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004f536c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f5371: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f5375: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004f5379: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004f537d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004f5380: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004f5384: mov dword ptr [ebp + 0x48], edx */ W32((u32)(r_ebp+0x48u), r_edx);
    /* 004f5387: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4f538cu); f_0082ddd8();
    /* 004f538c: fld dword ptr [0x91e4d8] */ FPUSH(R_F32((u32)(0x91e4d8u)));
    /* 004f5392: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004f5394: fmul dword ptr [0x91e4d0] */ ST(0) = ST(0) * R_F32((u32)(0x91e4d0u));
    /* 004f539a: fld dword ptr [ebp + 0x48] */ FPUSH(R_F32((u32)(r_ebp+0x48u)));
L_004f539d:; BB(0x004f539d);
    /* 004f539d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f539f: fmul dword ptr [0x91e4cc] */ ST(0) = ST(0) * R_F32((u32)(0x91e4ccu));
    /* 004f53a5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f53a7: fadd dword ptr [0x91e418] */ ST(0) = ST(0) + R_F32((u32)(0x91e418u));
    /* 004f53ad: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f53af: fstp dword ptr [ebp + 0x48] */ W_F32((u32)(r_ebp+0x48u), ST(0)); FPOP();
    /* 004f53b2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f53b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f53b6: ret  */ FN_RET(0x004f5314); r_esp += 4; return;
}

void f_004f5345(void)
{
    FN_ENTER(0x004f5345);
    /* 004f5345: ja 0x4f534d */ if ((!fC&&!fZ)) goto L_004f534d;
L_004f5347:; BB(0x004f5347);
    /* 004f5347: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f5349: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004f534b: jmp 0x4f539d */ goto L_004f539d;
L_004f534d:; BB(0x004f534d);
    /* 004f534d: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 004f534f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f5351: mov edx, 0x42680000 */ r_edx = 0x42680000u;
    /* 004f5356: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004f5359: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 004f535b: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004f535d: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004f535f: fmul dword ptr [0x91e4d4] */ ST(0) = ST(0) * R_F32((u32)(0x91e4d4u));
    /* 004f5365: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004f5368: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004f536c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f5371: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f5375: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004f5379: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004f537d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004f5380: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004f5384: mov dword ptr [ebp + 0x48], edx */ W32((u32)(r_ebp+0x48u), r_edx);
    /* 004f5387: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4f538cu); f_0082ddd8();
    /* 004f538c: fld dword ptr [0x91e4d8] */ FPUSH(R_F32((u32)(0x91e4d8u)));
    /* 004f5392: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004f5394: fmul dword ptr [0x91e4d0] */ ST(0) = ST(0) * R_F32((u32)(0x91e4d0u));
    /* 004f539a: fld dword ptr [ebp + 0x48] */ FPUSH(R_F32((u32)(r_ebp+0x48u)));
L_004f539d:; BB(0x004f539d);
    /* 004f539d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f539f: fmul dword ptr [0x91e4cc] */ ST(0) = ST(0) * R_F32((u32)(0x91e4ccu));
    /* 004f53a5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f53a7: fadd dword ptr [0x91e418] */ ST(0) = ST(0) + R_F32((u32)(0x91e418u));
    /* 004f53ad: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f53af: fstp dword ptr [ebp + 0x48] */ W_F32((u32)(r_ebp+0x48u), ST(0)); FPOP();
    /* 004f53b2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f53b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f53b6: ret  */ FN_RET(0x004f5345); r_esp += 4; return;
}

void f_004f5350(void)
{
    FN_ENTER(0x004f5350);
    /* 004f5350: fdivr dword ptr [edx + 0x42680000] */ ST(0) = R_F32((u32)(r_edx+0x42680000u)) / ST(0);
    /* 004f5356: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004f5359: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 004f535b: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004f535d: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004f535f: fmul dword ptr [0x91e4d4] */ ST(0) = ST(0) * R_F32((u32)(0x91e4d4u));
    /* 004f5365: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004f5368: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004f536c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f5371: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f5375: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004f5379: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004f537d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004f5380: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004f5384: mov dword ptr [ebp + 0x48], edx */ W32((u32)(r_ebp+0x48u), r_edx);
    /* 004f5387: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4f538cu); f_0082ddd8();
    /* 004f538c: fld dword ptr [0x91e4d8] */ FPUSH(R_F32((u32)(0x91e4d8u)));
    /* 004f5392: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004f5394: fmul dword ptr [0x91e4d0] */ ST(0) = ST(0) * R_F32((u32)(0x91e4d0u));
    /* 004f539a: fld dword ptr [ebp + 0x48] */ FPUSH(R_F32((u32)(r_ebp+0x48u)));
    /* 004f539d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f539f: fmul dword ptr [0x91e4cc] */ ST(0) = ST(0) * R_F32((u32)(0x91e4ccu));
    /* 004f53a5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f53a7: fadd dword ptr [0x91e418] */ ST(0) = ST(0) + R_F32((u32)(0x91e418u));
    /* 004f53ad: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f53af: fstp dword ptr [ebp + 0x48] */ W_F32((u32)(r_ebp+0x48u), ST(0)); FPOP();
    /* 004f53b2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f53b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f53b6: ret  */ FN_RET(0x004f5350); r_esp += 4; return;
}

void f_004f53b8(void) /* sub_4F53B8 */
{
    FN_ENTER(0x004f53b8);
    /* 004f53b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f53b9: mov edi, ecx */ r_edi = r_ecx;
    /* 004f53bb: mov ecx, edi */ r_ecx = r_edi;
    /* 004f53bd: call 0x4f47bc */ r_esp -= 4; W32(r_esp, 0x4f53c2u); f_004f47bc();
    /* 004f53c2: mov ecx, edi */ r_ecx = r_edi;
    /* 004f53c4: call 0x4f5314 */ r_esp -= 4; W32(r_esp, 0x4f53c9u); f_004f5314();
    /* 004f53c9: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004f53cb: add dword ptr [edi + 0x44], 1 */ { u32 ad = (u32)(r_edi+0x44u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004f53cf: mov ecx, edi */ r_ecx = r_edi;
    /* 004f53d1: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4f53d4u); call_ind(t); }
    /* 004f53d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f53d6: je 0x4f53ec */ if (fZ) goto L_004f53ec;
L_004f53d8:; BB(0x004f53d8);
    /* 004f53d8: mov eax, dword ptr [0xaca33c] */ r_eax = R32((u32)(0xaca33cu));
    /* 004f53dd: cmp eax, dword ptr [edi + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f53e0: je 0x4f53fe */ if (fZ) goto L_004f53fe;
L_004f53e2:; BB(0x004f53e2);
    /* 004f53e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f53e3: mov ecx, edi */ r_ecx = r_edi;
    /* 004f53e5: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x4f53eau); f_008172d4();
    /* 004f53ea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f53eb: ret  */ FN_RET(0x004f53b8); r_esp += 4; return;
L_004f53ec:; BB(0x004f53ec);
    /* 004f53ec: mov eax, dword ptr [0xaca338] */ r_eax = R32((u32)(0xaca338u));
    /* 004f53f1: cmp eax, dword ptr [edi + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f53f4: je 0x4f53fe */ if (fZ) goto L_004f53fe;
L_004f53f6:; BB(0x004f53f6);
    /* 004f53f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f53f7: mov ecx, edi */ r_ecx = r_edi;
    /* 004f53f9: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x4f53feu); f_008172d4();
L_004f53fe:; BB(0x004f53fe);
    /* 004f53fe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f53ff: ret  */ FN_RET(0x004f53b8); r_esp += 4; return;
}

void f_004f5400(void) /* sub_4F5400 */
{
    FN_ENTER(0x004f5400);
    /* 004f5400: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f5401: mov edi, ecx */ r_edi = r_ecx;
    /* 004f5403: mov ecx, edi */ r_ecx = r_edi;
    /* 004f5405: call 0x4f541c */ r_esp -= 4; W32(r_esp, 0x4f540au); f_004f541c();
    /* 004f540a: mov ecx, edi */ r_ecx = r_edi;
    /* 004f540c: call 0x4f5590 */ r_esp -= 4; W32(r_esp, 0x4f5411u); f_004f5590();
    /* 004f5411: mov ecx, edi */ r_ecx = r_edi;
    /* 004f5413: call 0x4f5890 */ r_esp -= 4; W32(r_esp, 0x4f5418u); f_004f5890();
    /* 004f5418: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f5419: ret  */ FN_RET(0x004f5400); r_esp += 4; return;
}

void f_004f541c(void) /* sub_4F541C */
{
    FN_ENTER(0x004f541c);
    /* 004f541c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f541d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f541e: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f5421: mov esi, ecx */ r_esi = r_ecx;
    /* 004f5423: fld dword ptr [0x91e4c8] */ FPUSH(R_F32((u32)(0x91e4c8u)));
    /* 004f5429: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 004f542c: fld dword ptr [esi + 0x24] */ FPUSH(R_F32((u32)(r_esi+0x24u)));
    /* 004f542f: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 004f5432: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f5434: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f5436: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f5438: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004f543c: mov dword ptr [esp + 0x18], 0x411a0000 */ W32((u32)(r_esp+0x18u), 0x411a0000u);
    /* 004f5444: mov dword ptr [esp + 0x1c], 0x3f800000 */ W32((u32)(r_esp+0x1cu), 0x3f800000u);
    /* 004f544c: mov edi, edx */ r_edi = r_edx;
    /* 004f544e: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 004f5450: shr edi, 0x1e */ { u32 c = (30u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 004f5453: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f5455: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 004f5458: add edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f545b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f545c: jbe 0x4f546b */ if ((fC||fZ)) goto L_004f546b;
L_004f545e:; BB(0x004f545e);
    /* 004f545e: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 004f5461: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 004f5463: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 004f5465: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004f5467: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
L_004f546b:; BB(0x004f546b);
    /* 004f546b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004f546d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f546f: movzx eax, byte ptr [0xa72688] */ r_eax = (u32)R8((u32)(0xa72688u));
    /* 004f5476: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f5478: jne 0x4f548c */ if (!fZ) goto L_004f548c;
L_004f547a:; BB(0x004f547a);
    /* 004f547a: mov dword ptr [0xa7268c], 0x3ea00000 */ W32((u32)(0xa7268cu), 0x3ea00000u);
    /* 004f5484: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f5487: mov byte ptr [0xa72688], al */ W8((u32)(0xa72688u), (u8)r_eax);
L_004f548c:; BB(0x004f548c);
    /* 004f548c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f548e: jne 0x4f54a4 */ if (!fZ) goto L_004f54a4;
L_004f5490:; BB(0x004f5490);
    /* 004f5490: mov dword ptr [0xa72690], 0x3f400000 */ W32((u32)(0xa72690u), 0x3f400000u);
    /* 004f549a: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f549f: mov byte ptr [0xa72688], al */ W8((u32)(0xa72688u), (u8)r_eax);
L_004f54a4:; BB(0x004f54a4);
    /* 004f54a4: mov ecx, esi */ r_ecx = r_esi;
    /* 004f54a6: call 0x4f553c */ r_esp -= 4; W32(r_esp, 0x4f54abu); f_004f553c();
    /* 004f54ab: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004f54af: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004f54b1: mov ecx, esi */ r_ecx = r_esi;
    /* 004f54b3: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4f54b6u); call_ind(t); }
    /* 004f54b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f54b8: je 0x4f54c2 */ if (fZ) goto L_004f54c2;
L_004f54ba:; BB(0x004f54ba);
    /* 004f54ba: fld dword ptr [0x91e4bc] */ FPUSH(R_F32((u32)(0x91e4bcu)));
    /* 004f54c0: jmp 0x4f54d2 */ goto L_004f54d2;
L_004f54c2:; BB(0x004f54c2);
    /* 004f54c2: fld dword ptr [0xa7268c] */ FPUSH(R_F32((u32)(0xa7268cu)));
    /* 004f54c8: fmul dword ptr [esp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x28u));
    /* 004f54cc: fadd dword ptr [0x91e424] */ ST(0) = ST(0) + R_F32((u32)(0x91e424u));
L_004f54d2:; BB(0x004f54d2);
    /* 004f54d2: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004f54d6: fld dword ptr [0x91e4b8] */ FPUSH(R_F32((u32)(0x91e4b8u)));
    /* 004f54dc: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004f54e0: mov eax, dword ptr [esi + 0x48] */ r_eax = R32((u32)(r_esi+0x48u));
    /* 004f54e3: mov edx, dword ptr [esi + 0x4c] */ r_edx = R32((u32)(r_esi+0x4cu));
    /* 004f54e6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f54e8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004f54ea: fmul dword ptr [0xa72690] */ ST(0) = ST(0) * R_F32((u32)(0xa72690u));
    /* 004f54f0: fadd dword ptr [0x91e420] */ ST(0) = ST(0) + R_F32((u32)(0x91e420u));
    /* 004f54f6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f54f8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004f54fa: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004f54fc: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004f5500: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f5502: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004f5506: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f5508: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f550c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004f5510: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 004f5513: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004f5517: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 004f551b: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004f551f: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 004f5523: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 004f5527: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
    /* 004f552b: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 004f552f: call 0x4e9f40 */ r_esp -= 4; W32(r_esp, 0x4f5534u); f_004e9f40();
    /* 004f5534: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f5537: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f5538: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f5539: ret  */ FN_RET(0x004f541c); r_esp += 4; return;
}

void f_004f5449(void)
{
    FN_ENTER(0x004f5449);
    /* 004f5449: add byte ptr [eax - 0x2e0574c1], al */ { u32 ad = (u32)(r_eax+0xd1fa8b3fu);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 004f544f: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f5451: out dx, eax */ UNSUP(0x004f5451, "out dx, eax");
    /* 004f5452: push ds */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 004f5453: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f5455: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 004f5458: add edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f545b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f545c: jbe 0x4f546b */ if ((fC||fZ)) goto L_004f546b;
L_004f545e:; BB(0x004f545e);
    /* 004f545e: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 004f5461: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 004f5463: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 004f5465: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004f5467: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
L_004f546b:; BB(0x004f546b);
    /* 004f546b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004f546d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f546f: movzx eax, byte ptr [0xa72688] */ r_eax = (u32)R8((u32)(0xa72688u));
    /* 004f5476: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f5478: jne 0x4f548c */ if (!fZ) goto L_004f548c;
L_004f547a:; BB(0x004f547a);
    /* 004f547a: mov dword ptr [0xa7268c], 0x3ea00000 */ W32((u32)(0xa7268cu), 0x3ea00000u);
    /* 004f5484: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f5487: mov byte ptr [0xa72688], al */ W8((u32)(0xa72688u), (u8)r_eax);
L_004f548c:; BB(0x004f548c);
    /* 004f548c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f548e: jne 0x4f54a4 */ if (!fZ) goto L_004f54a4;
L_004f5490:; BB(0x004f5490);
    /* 004f5490: mov dword ptr [0xa72690], 0x3f400000 */ W32((u32)(0xa72690u), 0x3f400000u);
    /* 004f549a: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f549f: mov byte ptr [0xa72688], al */ W8((u32)(0xa72688u), (u8)r_eax);
L_004f54a4:; BB(0x004f54a4);
    /* 004f54a4: mov ecx, esi */ r_ecx = r_esi;
    /* 004f54a6: call 0x4f553c */ r_esp -= 4; W32(r_esp, 0x4f54abu); f_004f553c();
    /* 004f54ab: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004f54af: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004f54b1: mov ecx, esi */ r_ecx = r_esi;
    /* 004f54b3: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4f54b6u); call_ind(t); }
    /* 004f54b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f54b8: je 0x4f54c2 */ if (fZ) goto L_004f54c2;
L_004f54ba:; BB(0x004f54ba);
    /* 004f54ba: fld dword ptr [0x91e4bc] */ FPUSH(R_F32((u32)(0x91e4bcu)));
    /* 004f54c0: jmp 0x4f54d2 */ goto L_004f54d2;
L_004f54c2:; BB(0x004f54c2);
    /* 004f54c2: fld dword ptr [0xa7268c] */ FPUSH(R_F32((u32)(0xa7268cu)));
    /* 004f54c8: fmul dword ptr [esp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x28u));
    /* 004f54cc: fadd dword ptr [0x91e424] */ ST(0) = ST(0) + R_F32((u32)(0x91e424u));
L_004f54d2:; BB(0x004f54d2);
    /* 004f54d2: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004f54d6: fld dword ptr [0x91e4b8] */ FPUSH(R_F32((u32)(0x91e4b8u)));
    /* 004f54dc: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004f54e0: mov eax, dword ptr [esi + 0x48] */ r_eax = R32((u32)(r_esi+0x48u));
    /* 004f54e3: mov edx, dword ptr [esi + 0x4c] */ r_edx = R32((u32)(r_esi+0x4cu));
    /* 004f54e6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f54e8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004f54ea: fmul dword ptr [0xa72690] */ ST(0) = ST(0) * R_F32((u32)(0xa72690u));
    /* 004f54f0: fadd dword ptr [0x91e420] */ ST(0) = ST(0) + R_F32((u32)(0x91e420u));
    /* 004f54f6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f54f8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004f54fa: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004f54fc: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004f5500: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f5502: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004f5506: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f5508: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f550c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004f5510: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 004f5513: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004f5517: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 004f551b: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004f551f: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 004f5523: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 004f5527: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
    /* 004f552b: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 004f552f: call 0x4e9f40 */ r_esp -= 4; W32(r_esp, 0x4f5534u); f_004e9f40();
    /* 004f5534: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f5537: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f5538: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f5539: ret  */ FN_RET(0x004f5449); r_esp += 4; return;
}

void f_004f544f(void)
{
    FN_ENTER(0x004f544f);
    /* 004f544f: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004f5451: out dx, eax */ UNSUP(0x004f5451, "out dx, eax");
    /* 004f5452: push ds */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 004f5453: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f5455: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 004f5458: add edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f545b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f545c: jbe 0x4f546b */ if ((fC||fZ)) goto L_004f546b;
L_004f545e:; BB(0x004f545e);
    /* 004f545e: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 004f5461: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 004f5463: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 004f5465: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004f5467: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
L_004f546b:; BB(0x004f546b);
    /* 004f546b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004f546d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f546f: movzx eax, byte ptr [0xa72688] */ r_eax = (u32)R8((u32)(0xa72688u));
    /* 004f5476: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f5478: jne 0x4f548c */ if (!fZ) goto L_004f548c;
L_004f547a:; BB(0x004f547a);
    /* 004f547a: mov dword ptr [0xa7268c], 0x3ea00000 */ W32((u32)(0xa7268cu), 0x3ea00000u);
    /* 004f5484: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f5487: mov byte ptr [0xa72688], al */ W8((u32)(0xa72688u), (u8)r_eax);
L_004f548c:; BB(0x004f548c);
    /* 004f548c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f548e: jne 0x4f54a4 */ if (!fZ) goto L_004f54a4;
L_004f5490:; BB(0x004f5490);
    /* 004f5490: mov dword ptr [0xa72690], 0x3f400000 */ W32((u32)(0xa72690u), 0x3f400000u);
    /* 004f549a: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f549f: mov byte ptr [0xa72688], al */ W8((u32)(0xa72688u), (u8)r_eax);
L_004f54a4:; BB(0x004f54a4);
    /* 004f54a4: mov ecx, esi */ r_ecx = r_esi;
    /* 004f54a6: call 0x4f553c */ r_esp -= 4; W32(r_esp, 0x4f54abu); f_004f553c();
    /* 004f54ab: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004f54af: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004f54b1: mov ecx, esi */ r_ecx = r_esi;
    /* 004f54b3: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4f54b6u); call_ind(t); }
    /* 004f54b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f54b8: je 0x4f54c2 */ if (fZ) goto L_004f54c2;
L_004f54ba:; BB(0x004f54ba);
    /* 004f54ba: fld dword ptr [0x91e4bc] */ FPUSH(R_F32((u32)(0x91e4bcu)));
    /* 004f54c0: jmp 0x4f54d2 */ goto L_004f54d2;
L_004f54c2:; BB(0x004f54c2);
    /* 004f54c2: fld dword ptr [0xa7268c] */ FPUSH(R_F32((u32)(0xa7268cu)));
    /* 004f54c8: fmul dword ptr [esp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x28u));
    /* 004f54cc: fadd dword ptr [0x91e424] */ ST(0) = ST(0) + R_F32((u32)(0x91e424u));
L_004f54d2:; BB(0x004f54d2);
    /* 004f54d2: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004f54d6: fld dword ptr [0x91e4b8] */ FPUSH(R_F32((u32)(0x91e4b8u)));
    /* 004f54dc: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004f54e0: mov eax, dword ptr [esi + 0x48] */ r_eax = R32((u32)(r_esi+0x48u));
    /* 004f54e3: mov edx, dword ptr [esi + 0x4c] */ r_edx = R32((u32)(r_esi+0x4cu));
    /* 004f54e6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f54e8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004f54ea: fmul dword ptr [0xa72690] */ ST(0) = ST(0) * R_F32((u32)(0xa72690u));
    /* 004f54f0: fadd dword ptr [0x91e420] */ ST(0) = ST(0) + R_F32((u32)(0x91e420u));
    /* 004f54f6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f54f8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004f54fa: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004f54fc: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004f5500: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f5502: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004f5506: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f5508: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f550c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004f5510: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 004f5513: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004f5517: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 004f551b: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004f551f: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 004f5523: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 004f5527: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
    /* 004f552b: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 004f552f: call 0x4e9f40 */ r_esp -= 4; W32(r_esp, 0x4f5534u); f_004e9f40();
    /* 004f5534: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f5537: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f5538: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f5539: ret  */ FN_RET(0x004f544f); r_esp += 4; return;
}

void f_004f5454(void)
{
    FN_ENTER(0x004f5454);
    /* 004f5454: cli  */ UNSUP(0x004f5454, "cli ");
    /* 004f5455: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 004f5458: add edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004f545b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f545c: jbe 0x4f546b */ if ((fC||fZ)) goto L_004f546b;
L_004f545e:; BB(0x004f545e);
    /* 004f545e: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 004f5461: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 004f5463: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 004f5465: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 004f5467: fst dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0));
L_004f546b:; BB(0x004f546b);
    /* 004f546b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004f546d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f546f: movzx eax, byte ptr [0xa72688] */ r_eax = (u32)R8((u32)(0xa72688u));
    /* 004f5476: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f5478: jne 0x4f548c */ if (!fZ) goto L_004f548c;
L_004f547a:; BB(0x004f547a);
    /* 004f547a: mov dword ptr [0xa7268c], 0x3ea00000 */ W32((u32)(0xa7268cu), 0x3ea00000u);
    /* 004f5484: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f5487: mov byte ptr [0xa72688], al */ W8((u32)(0xa72688u), (u8)r_eax);
L_004f548c:; BB(0x004f548c);
    /* 004f548c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f548e: jne 0x4f54a4 */ if (!fZ) goto L_004f54a4;
L_004f5490:; BB(0x004f5490);
    /* 004f5490: mov dword ptr [0xa72690], 0x3f400000 */ W32((u32)(0xa72690u), 0x3f400000u);
    /* 004f549a: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f549f: mov byte ptr [0xa72688], al */ W8((u32)(0xa72688u), (u8)r_eax);
L_004f54a4:; BB(0x004f54a4);
    /* 004f54a4: mov ecx, esi */ r_ecx = r_esi;
    /* 004f54a6: call 0x4f553c */ r_esp -= 4; W32(r_esp, 0x4f54abu); f_004f553c();
    /* 004f54ab: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004f54af: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004f54b1: mov ecx, esi */ r_ecx = r_esi;
    /* 004f54b3: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4f54b6u); call_ind(t); }
    /* 004f54b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f54b8: je 0x4f54c2 */ if (fZ) goto L_004f54c2;
L_004f54ba:; BB(0x004f54ba);
    /* 004f54ba: fld dword ptr [0x91e4bc] */ FPUSH(R_F32((u32)(0x91e4bcu)));
    /* 004f54c0: jmp 0x4f54d2 */ goto L_004f54d2;
L_004f54c2:; BB(0x004f54c2);
    /* 004f54c2: fld dword ptr [0xa7268c] */ FPUSH(R_F32((u32)(0xa7268cu)));
    /* 004f54c8: fmul dword ptr [esp + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x28u));
    /* 004f54cc: fadd dword ptr [0x91e424] */ ST(0) = ST(0) + R_F32((u32)(0x91e424u));
L_004f54d2:; BB(0x004f54d2);
    /* 004f54d2: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004f54d6: fld dword ptr [0x91e4b8] */ FPUSH(R_F32((u32)(0x91e4b8u)));
    /* 004f54dc: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004f54e0: mov eax, dword ptr [esi + 0x48] */ r_eax = R32((u32)(r_esi+0x48u));
    /* 004f54e3: mov edx, dword ptr [esi + 0x4c] */ r_edx = R32((u32)(r_esi+0x4cu));
    /* 004f54e6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f54e8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004f54ea: fmul dword ptr [0xa72690] */ ST(0) = ST(0) * R_F32((u32)(0xa72690u));
    /* 004f54f0: fadd dword ptr [0x91e420] */ ST(0) = ST(0) + R_F32((u32)(0x91e420u));
    /* 004f54f6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f54f8: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004f54fa: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004f54fc: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004f5500: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f5502: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004f5506: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f5508: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f550c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004f5510: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 004f5513: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004f5517: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 004f551b: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004f551f: lea ecx, [esp + 0x20] */ r_ecx = (u32)(r_esp+0x20u);
    /* 004f5523: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 004f5527: lea esi, [esp + 0x18] */ r_esi = (u32)(r_esp+0x18u);
    /* 004f552b: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 004f552f: call 0x4e9f40 */ r_esp -= 4; W32(r_esp, 0x4f5534u); f_004e9f40();
    /* 004f5534: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f5537: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f5538: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f5539: ret  */ FN_RET(0x004f5454); r_esp += 4; return;
}

void f_004f553c(void) /* sub_4F553C */
{
    FN_ENTER(0x004f553c);
    /* 004f553c: mov eax, dword ptr [0xa7223c] */ r_eax = R32((u32)(0xa7223cu));
    /* 004f5541: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5543: je 0x4f555c */ if (fZ) goto L_004f555c;
L_004f5545:; BB(0x004f5545);
    /* 004f5545: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 004f5548: mov edx, eax */ r_edx = r_eax;
    /* 004f554a: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004f554c: shr edx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004f554f: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f5551: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004f5554: cmp edx, dword ptr [0x9b8d90] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9b8d90u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f555a: jne 0x4f558b */ if (!fZ) goto L_004f558b;
L_004f555c:; BB(0x004f555c);
    /* 004f555c: movzx eax, byte ptr [0xa72694] */ r_eax = (u32)R8((u32)(0xa72694u));
    /* 004f5563: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f5565: jne 0x4f557b */ if (!fZ) goto L_004f557b;
L_004f5567:; BB(0x004f5567);
    /* 004f5567: mov dword ptr [0xa72698], 0x3f19999a */ W32((u32)(0xa72698u), 0x3f19999au);
    /* 004f5571: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f5576: mov byte ptr [0xa72694], al */ W8((u32)(0xa72694u), (u8)r_eax);
L_004f557b:; BB(0x004f557b);
    /* 004f557b: fld dword ptr [0x91e430] */ FPUSH(R_F32((u32)(0x91e430u)));
    /* 004f5581: fmul dword ptr [ecx + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+0x30u));
    /* 004f5584: fadd dword ptr [0xa72698] */ ST(0) = ST(0) + R_F32((u32)(0xa72698u));
    /* 004f558a: ret  */ FN_RET(0x004f553c); r_esp += 4; return;
L_004f558b:; BB(0x004f558b);
    /* 004f558b: fld dword ptr [ecx + 0x30] */ FPUSH(R_F32((u32)(r_ecx+0x30u)));
    /* 004f558e: ret  */ FN_RET(0x004f553c); r_esp += 4; return;
}

void f_004f5590(void) /* sub_4F5590 */
{
    FN_ENTER(0x004f5590);
    /* 004f5590: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f5591: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f5594: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004f5596: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 004f5599: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 004f559c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f559e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f55a0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f55a1: fld dword ptr [0x91e4b0] */ FPUSH(R_F32((u32)(0x91e4b0u)));
    /* 004f55a7: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 004f55ab: jbe 0x4f55be */ if ((fC||fZ)) goto L_004f55be;
L_004f55ad:; BB(0x004f55ad);
    /* 004f55ad: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 004f55b0: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 004f55b2: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004f55b4: fdiv st(1), st(0) */ ST(1) = ST(1) / ST(0);
    /* 004f55b6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f55b8: fst dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0));
    /* 004f55bc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_004f55be:; BB(0x004f55be);
    /* 004f55be: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f55c0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f55c2: movzx eax, byte ptr [0xa7269c] */ r_eax = (u32)R8((u32)(0xa7269cu));
    /* 004f55c9: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f55cb: jne 0x4f55df */ if (!fZ) goto L_004f55df;
L_004f55cd:; BB(0x004f55cd);
    /* 004f55cd: mov dword ptr [0xa726a0], 0x3ea00000 */ W32((u32)(0xa726a0u), 0x3ea00000u);
    /* 004f55d7: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f55da: mov byte ptr [0xa7269c], al */ W8((u32)(0xa7269cu), (u8)r_eax);
L_004f55df:; BB(0x004f55df);
    /* 004f55df: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f55e1: jne 0x4f55f7 */ if (!fZ) goto L_004f55f7;
L_004f55e3:; BB(0x004f55e3);
    /* 004f55e3: mov dword ptr [0xa726a4], 0x3f400000 */ W32((u32)(0xa726a4u), 0x3f400000u);
    /* 004f55ed: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f55f2: mov byte ptr [0xa7269c], al */ W8((u32)(0xa7269cu), (u8)r_eax);
L_004f55f7:; BB(0x004f55f7);
    /* 004f55f7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004f55f9: call 0x4f553c */ r_esp -= 4; W32(r_esp, 0x4f55feu); f_004f553c();
    /* 004f55fe: fstp dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0)); FPOP();
    /* 004f5602: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004f5605: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004f5607: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4f560au); call_ind(t); }
    /* 004f560a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f560c: je 0x4f561a */ if (fZ) goto L_004f561a;
L_004f560e:; BB(0x004f560e);
    /* 004f560e: fld dword ptr [0x91e4a4] */ FPUSH(R_F32((u32)(0x91e4a4u)));
    /* 004f5614: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 004f5618: jmp 0x4f562e */ goto L_004f562e;
L_004f561a:; BB(0x004f561a);
    /* 004f561a: fld dword ptr [0xa726a0] */ FPUSH(R_F32((u32)(0xa726a0u)));
    /* 004f5620: fmul dword ptr [esp + 0x5c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x5cu));
    /* 004f5624: fadd dword ptr [0x91e458] */ ST(0) = ST(0) + R_F32((u32)(0x91e458u));
    /* 004f562a: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
L_004f562e:; BB(0x004f562e);
    /* 004f562e: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004f5632: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004f5636: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004f563a: mov eax, dword ptr [ebp + 0x48] */ r_eax = R32((u32)(r_ebp+0x48u));
    /* 004f563d: mov edx, dword ptr [ebp + 0x4c] */ r_edx = R32((u32)(r_ebp+0x4cu));
    /* 004f5640: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f5642: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004f5644: fmul dword ptr [0xa726a4] */ ST(0) = ST(0) * R_F32((u32)(0xa726a4u));
    /* 004f564a: fadd dword ptr [0x91e454] */ ST(0) = ST(0) + R_F32((u32)(0x91e454u));
    /* 004f5650: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f5652: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004f5654: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f5656: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004f565a: fst dword ptr [esp + 0x5c] */ W_F32((u32)(r_esp+0x5cu), ST(0));
    /* 004f565e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f5660: fst dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0));
    /* 004f5664: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f5668: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004f566c: mov dword ptr [esp + 0x18], 0x41e20000 */ W32((u32)(r_esp+0x18u), 0x41e20000u);
    /* 004f5674: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004f5678: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 004f567c: mov dword ptr [esp + 0x1c], 0x3f800000 */ W32((u32)(r_esp+0x1cu), 0x3f800000u);
    /* 004f5684: mov dword ptr [esp], 0x45 */ W32((u32)(r_esp), 0x45u);
    /* 004f568b: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 004f568f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f5693: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 004f5697: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004f569b: call 0x4e9f40 */ r_esp -= 4; W32(r_esp, 0x4f56a0u); f_004e9f40();
    /* 004f56a0: fld dword ptr [0x91e4a0] */ FPUSH(R_F32((u32)(0x91e4a0u)));
    /* 004f56a6: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 004f56aa: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004f56ae: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004f56b2: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004f56b6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004f56b8: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004f56bc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f56be: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004f56c2: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f56c6: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004f56ca: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 004f56ce: mov dword ptr [esp], 0x46 */ W32((u32)(r_esp), 0x46u);
    /* 004f56d5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f56d9: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 004f56dd: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004f56e1: call 0x4e9f40 */ r_esp -= 4; W32(r_esp, 0x4f56e6u); f_004e9f40();
    /* 004f56e6: fld dword ptr [0x91e49c] */ FPUSH(R_F32((u32)(0x91e49cu)));
    /* 004f56ec: mov eax, dword ptr [ebp + 0x48] */ r_eax = R32((u32)(r_ebp+0x48u));
    /* 004f56ef: mov edx, dword ptr [ebp + 0x4c] */ r_edx = R32((u32)(r_ebp+0x4cu));
    /* 004f56f2: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004f56f6: fadd dword ptr [esp + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x30u));
    /* 004f56fa: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 004f56fd: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 004f5701: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5703: mov dword ptr [esp + 0x28], 0x3f800000 */ W32((u32)(r_esp+0x28u), 0x3f800000u);
    /* 004f570b: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 004f570f: mov dword ptr [esp + 0x2c], 0x3f800000 */ W32((u32)(r_esp+0x2cu), 0x3f800000u);
    /* 004f5717: mov edx, 0x4c */ r_edx = 0x4cu;
    /* 004f571c: jne 0x4f5723 */ if (!fZ) goto L_004f5723;
L_004f571e:; BB(0x004f571e);
    /* 004f571e: mov edx, 0x48 */ r_edx = 0x48u;
L_004f5723:; BB(0x004f5723);
    /* 004f5723: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004f5727: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004f572b: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004f572f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f5731: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004f5735: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f5739: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004f573d: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004f5740: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 004f5744: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f5748: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 004f574c: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004f5750: call 0x4e9f40 */ r_esp -= 4; W32(r_esp, 0x4f5755u); f_004e9f40();
    /* 004f5755: fld dword ptr [0x91e4a0] */ FPUSH(R_F32((u32)(0x91e4a0u)));
    /* 004f575b: fadd dword ptr [esp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x34u));
    /* 004f575f: mov eax, dword ptr [ebp + 0x20] */ r_eax = R32((u32)(r_ebp+0x20u));
    /* 004f5762: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 004f5766: mov edx, 0x4e */ r_edx = 0x4eu;
    /* 004f576b: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f576e: jne 0x4f5775 */ if (!fZ) goto L_004f5775;
L_004f5770:; BB(0x004f5770);
    /* 004f5770: mov edx, 0x4a */ r_edx = 0x4au;
L_004f5775:; BB(0x004f5775);
    /* 004f5775: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004f5779: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004f577d: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004f5781: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f5783: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004f5787: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f578b: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004f578f: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004f5792: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 004f5796: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f579a: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 004f579e: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004f57a2: call 0x4e9f40 */ r_esp -= 4; W32(r_esp, 0x4f57a7u); f_004e9f40();
    /* 004f57a7: fld dword ptr [0x91e49c] */ FPUSH(R_F32((u32)(0x91e49cu)));
    /* 004f57ad: fld dword ptr [0x91e498] */ FPUSH(R_F32((u32)(0x91e498u)));
    /* 004f57b3: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004f57b7: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004f57bb: mov eax, dword ptr [ebp + 0x48] */ r_eax = R32((u32)(r_ebp+0x48u));
    /* 004f57be: mov edx, dword ptr [ebp + 0x4c] */ r_edx = R32((u32)(r_ebp+0x4cu));
    /* 004f57c1: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004f57c5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f57c7: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004f57cb: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f57cf: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004f57d3: mov dword ptr [esp + 0x38], 0x3f800000 */ W32((u32)(r_esp+0x38u), 0x3f800000u);
    /* 004f57db: mov dword ptr [esp + 0x3c], 0x3fe00000 */ W32((u32)(r_esp+0x3cu), 0x3fe00000u);
    /* 004f57e3: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 004f57e7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f57e9: fadd dword ptr [esp + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x40u));
    /* 004f57ed: fstp dword ptr [esp + 0x40] */ W_F32((u32)(r_esp+0x40u), ST(0)); FPOP();
    /* 004f57f1: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 004f57f5: fadd dword ptr [esp + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x44u));
    /* 004f57f9: fstp dword ptr [esp + 0x44] */ W_F32((u32)(r_esp+0x44u), ST(0)); FPOP();
    /* 004f57fd: mov dword ptr [esp], 0x44 */ W32((u32)(r_esp), 0x44u);
    /* 004f5804: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 004f5808: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f580c: lea eax, [esp + 0x38] */ r_eax = (u32)(r_esp+0x38u);
    /* 004f5810: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004f5814: call 0x4e9f40 */ r_esp -= 4; W32(r_esp, 0x4f5819u); f_004e9f40();
    /* 004f5819: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 004f581c: fcomp dword ptr [0x91e4b0] */ fx_compare(ST(0), R_F32((u32)(0x91e4b0u))); FPOP();
    /* 004f5822: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f5824: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f5825: jae 0x4f5889 */ if (!fC) goto L_004f5889;
L_004f5827:; BB(0x004f5827);
    /* 004f5827: fld dword ptr [0x91e494] */ FPUSH(R_F32((u32)(0x91e494u)));
    /* 004f582d: fld dword ptr [esp + 0x58] */ FPUSH(R_F32((u32)(r_esp+0x58u)));
    /* 004f5831: fld dword ptr [esp + 0x60] */ FPUSH(R_F32((u32)(r_esp+0x60u)));
    /* 004f5835: fld dword ptr [esp + 0x5c] */ FPUSH(R_F32((u32)(r_esp+0x5cu)));
    /* 004f5839: mov eax, dword ptr [ebp + 0x48] */ r_eax = R32((u32)(r_ebp+0x48u));
    /* 004f583c: mov edx, dword ptr [ebp + 0x4c] */ r_edx = R32((u32)(r_ebp+0x4cu));
    /* 004f583f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f5841: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004f5845: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f5849: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004f584d: mov dword ptr [esp + 0x48], 0x3f800000 */ W32((u32)(r_esp+0x48u), 0x3f800000u);
    /* 004f5855: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 004f5859: fadd dword ptr [esp + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x50u));
    /* 004f585d: fstp dword ptr [esp + 0x50] */ W_F32((u32)(r_esp+0x50u), ST(0)); FPOP();
    /* 004f5861: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 004f5865: mov dword ptr [esp + 0x4c], 0x40700000 */ W32((u32)(r_esp+0x4cu), 0x40700000u);
    /* 004f586d: mov dword ptr [esp], 0x43 */ W32((u32)(r_esp), 0x43u);
    /* 004f5874: lea ecx, [esp + 0x50] */ r_ecx = (u32)(r_esp+0x50u);
    /* 004f5878: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 004f587c: lea ebp, [esp + 0x48] */ r_ebp = (u32)(r_esp+0x48u);
    /* 004f5880: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 004f5884: call 0x4e9f40 */ r_esp -= 4; W32(r_esp, 0x4f5889u); f_004e9f40();
L_004f5889:; BB(0x004f5889);
    /* 004f5889: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f588c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f588d: ret  */ FN_RET(0x004f5590); r_esp += 4; return;
}

void f_004f5890(void) /* sub_4F5890 */
{
    FN_ENTER(0x004f5890);
    /* 004f5890: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f5891: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f5892: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f5895: mov esi, ecx */ r_esi = r_ecx;
    /* 004f5897: fld dword ptr [esi + 0x24] */ FPUSH(R_F32((u32)(r_esi+0x24u)));
    /* 004f589a: fld dword ptr [esi + 0x40] */ FPUSH(R_F32((u32)(r_esi+0x40u)));
    /* 004f589d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f589f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f58a1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f58a3: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 004f58a7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f58a8: jae 0x4f5a66 */ if (!fC) goto L_004f5a66;
L_004f58ae:; BB(0x004f58ae);
    /* 004f58ae: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 004f58b2: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004f58b4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f58b6: fsubr dword ptr [0x91e490] */ ST(0) = R_F32((u32)(0x91e490u)) - ST(0);
    /* 004f58bc: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004f58be: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 004f58c2: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 004f58c7: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004f58cb: movzx eax, byte ptr [0xa726a8] */ r_eax = (u32)R8((u32)(0xa726a8u));
    /* 004f58d2: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 004f58d7: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f58d9: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 004f58dd: jne 0x4f58f1 */ if (!fZ) goto L_004f58f1;
L_004f58df:; BB(0x004f58df);
    /* 004f58df: mov dword ptr [0xa726ac], 0x3ea00000 */ W32((u32)(0xa726acu), 0x3ea00000u);
    /* 004f58e9: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f58ec: mov byte ptr [0xa726a8], al */ W8((u32)(0xa726a8u), (u8)r_eax);
L_004f58f1:; BB(0x004f58f1);
    /* 004f58f1: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f58f3: jne 0x4f5909 */ if (!fZ) goto L_004f5909;
L_004f58f5:; BB(0x004f58f5);
    /* 004f58f5: mov dword ptr [0xa726b0], 0x3f400000 */ W32((u32)(0xa726b0u), 0x3f400000u);
    /* 004f58ff: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f5904: mov byte ptr [0xa726a8], al */ W8((u32)(0xa726a8u), (u8)r_eax);
L_004f5909:; BB(0x004f5909);
    /* 004f5909: mov ecx, esi */ r_ecx = r_esi;
    /* 004f590b: call 0x4f553c */ r_esp -= 4; W32(r_esp, 0x4f5910u); f_004f553c();
    /* 004f5910: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 004f5914: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004f5916: mov ecx, esi */ r_ecx = r_esi;
    /* 004f5918: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4f591bu); call_ind(t); }
    /* 004f591b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f591d: je 0x4f592b */ if (fZ) goto L_004f592b;
L_004f591f:; BB(0x004f591f);
    /* 004f591f: fld dword ptr [0x91e484] */ FPUSH(R_F32((u32)(0x91e484u)));
    /* 004f5925: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004f5929: jmp 0x4f593f */ goto L_004f593f;
L_004f592b:; BB(0x004f592b);
    /* 004f592b: fld dword ptr [0xa726ac] */ FPUSH(R_F32((u32)(0xa726acu)));
    /* 004f5931: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 004f5935: fadd dword ptr [0x91e464] */ ST(0) = ST(0) + R_F32((u32)(0x91e464u));
    /* 004f593b: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
L_004f593f:; BB(0x004f593f);
    /* 004f593f: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004f5943: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004f5945: fmul dword ptr [0xa726b0] */ ST(0) = ST(0) * R_F32((u32)(0xa726b0u));
    /* 004f594b: fadd dword ptr [0x91e460] */ ST(0) = ST(0) + R_F32((u32)(0x91e460u));
    /* 004f5951: mov ebx, dword ptr [esi + 0x48] */ r_ebx = R32((u32)(r_esi+0x48u));
    /* 004f5954: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004f5956: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 004f595a: fld dword ptr [0x91e480] */ FPUSH(R_F32((u32)(0x91e480u)));
    /* 004f5960: fld dword ptr [0x91e47c] */ FPUSH(R_F32((u32)(0x91e47cu)));
    /* 004f5966: fadd dword ptr [esi + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x4cu));
    /* 004f5969: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f596b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004f596d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004f596f: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 004f5973: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f5975: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004f5979: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f597b: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 004f597f: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004f5983: mov ecx, esi */ r_ecx = r_esi;
    /* 004f5985: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 004f5989: fadd dword ptr [esp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x20u));
    /* 004f598d: mov ebx, dword ptr [esi + 0x20] */ r_ebx = R32((u32)(r_esi+0x20u));
    /* 004f5990: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 004f5994: add ebx, 0x4f */ {  u32 a = r_ebx; u32 b = 0x4fu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f5997: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4f599au); call_ind(t); }
    /* 004f599a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f599c: je 0x4f59df */ if (fZ) goto L_004f59df;
L_004f599e:; BB(0x004f599e);
    /* 004f599e: mov ecx, dword ptr [esi + 0x44] */ r_ecx = R32((u32)(r_esi+0x44u));
    /* 004f59a1: shl ecx, 9 */ { u32 c = (9u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004f59a4: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4f59a9u); f_0082dcbc();
    /* 004f59a9: fmul dword ptr [0x91e45c] */ ST(0) = ST(0) * R_F32((u32)(0x91e45cu));
    /* 004f59af: fadd dword ptr [esp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x34u));
    /* 004f59b3: fld dword ptr [0x91e478] */ FPUSH(R_F32((u32)(0x91e478u)));
    /* 004f59b9: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f59bb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f59bd: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004f59c1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f59c2: jbe 0x4f59c8 */ if ((fC||fZ)) goto L_004f59c8;
L_004f59c4:; BB(0x004f59c4);
    /* 004f59c4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f59c6: jmp 0x4f59df */ goto L_004f59df;
L_004f59c8:; BB(0x004f59c8);
    /* 004f59c8: fld dword ptr [0x91e490] */ FPUSH(R_F32((u32)(0x91e490u)));
    /* 004f59ce: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f59d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f59d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f59d3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f59d5: jb 0x4f59d9 */ if (fC) goto L_004f59d9;
L_004f59d7:; BB(0x004f59d7);
    /* 004f59d7: fst st(1) */ ST(1) = ST(0);
L_004f59d9:; BB(0x004f59d9);
    /* 004f59d9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f59db: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
L_004f59df:; BB(0x004f59df);
    /* 004f59df: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004f59e3: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004f59e7: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004f59eb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f59ed: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004f59f1: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f59f5: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004f59f9: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004f59fc: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 004f5a00: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f5a04: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 004f5a08: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004f5a0c: call 0x4e9f40 */ r_esp -= 4; W32(r_esp, 0x4f5a11u); f_004e9f40();
    /* 004f5a11: fld dword ptr [0x91e470] */ FPUSH(R_F32((u32)(0x91e470u)));
    /* 004f5a17: fadd dword ptr [esi + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x4cu));
    /* 004f5a1a: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004f5a1e: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 004f5a22: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 004f5a25: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004f5a29: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004f5a2b: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004f5a2f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f5a31: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004f5a35: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f5a39: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004f5a3d: add eax, 0x5b */ {  u32 a = r_eax; u32 b = 0x5bu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f5a40: mov dword ptr [esp + 0x20], 0x43290000 */ W32((u32)(r_esp+0x20u), 0x43290000u);
    /* 004f5a48: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004f5a4b: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 004f5a4f: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004f5a53: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004f5a57: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 004f5a5b: call 0x4e9f40 */ r_esp -= 4; W32(r_esp, 0x4f5a60u); f_004e9f40();
    /* 004f5a60: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f5a63: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f5a64: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f5a65: ret  */ FN_RET(0x004f5890); r_esp += 4; return;
L_004f5a66:; BB(0x004f5a66);
    /* 004f5a66: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f5a68: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f5a6b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f5a6c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f5a6d: ret  */ FN_RET(0x004f5890); r_esp += 4; return;
}

void f_004f5947(void)
{
    FN_ENTER(0x004f5947);
    /* 004f5947: mov al, 0x26 */ r_eax = (r_eax & 0xffffff00u) | ((0x26u) & 0xffu);
    /* 004f5949: cmpsd dword ptr [esi], dword ptr es:[edi] */ { u32 a = R32(r_esi); u32 b = R32(r_edi); u32 r = (a - b) & 0xffffffffu; r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4;  }
    /* 004f594a: add al, bl */ {  u32 a = (u8)r_eax; u32 b = (u8)r_ebx; u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004f594c: add eax, 0x91e460 */ {  u32 a = r_eax; u32 b = 0x91e460u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f5951: mov ebx, dword ptr [esi + 0x48] */ r_ebx = R32((u32)(r_esi+0x48u));
    /* 004f5954: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004f5956: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 004f595a: fld dword ptr [0x91e480] */ FPUSH(R_F32((u32)(0x91e480u)));
    /* 004f5960: fld dword ptr [0x91e47c] */ FPUSH(R_F32((u32)(0x91e47cu)));
    /* 004f5966: fadd dword ptr [esi + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x4cu));
    /* 004f5969: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f596b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004f596d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004f596f: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 004f5973: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f5975: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004f5979: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f597b: fst dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0));
    /* 004f597f: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004f5983: mov ecx, esi */ r_ecx = r_esi;
    /* 004f5985: mov dword ptr [esp + 0x20], ebx */ W32((u32)(r_esp+0x20u), r_ebx);
    /* 004f5989: fadd dword ptr [esp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x20u));
    /* 004f598d: mov ebx, dword ptr [esi + 0x20] */ r_ebx = R32((u32)(r_esi+0x20u));
    /* 004f5990: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 004f5994: add ebx, 0x4f */ {  u32 a = r_ebx; u32 b = 0x4fu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f5997: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4f599au); call_ind(t); }
    /* 004f599a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f599c: je 0x4f59df */ if (fZ) goto L_004f59df;
L_004f599e:; BB(0x004f599e);
    /* 004f599e: mov ecx, dword ptr [esi + 0x44] */ r_ecx = R32((u32)(r_esi+0x44u));
    /* 004f59a1: shl ecx, 9 */ { u32 c = (9u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004f59a4: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4f59a9u); f_0082dcbc();
    /* 004f59a9: fmul dword ptr [0x91e45c] */ ST(0) = ST(0) * R_F32((u32)(0x91e45cu));
    /* 004f59af: fadd dword ptr [esp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x34u));
    /* 004f59b3: fld dword ptr [0x91e478] */ FPUSH(R_F32((u32)(0x91e478u)));
    /* 004f59b9: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f59bb: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f59bd: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004f59c1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f59c2: jbe 0x4f59c8 */ if ((fC||fZ)) goto L_004f59c8;
L_004f59c4:; BB(0x004f59c4);
    /* 004f59c4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f59c6: jmp 0x4f59df */ goto L_004f59df;
L_004f59c8:; BB(0x004f59c8);
    /* 004f59c8: fld dword ptr [0x91e490] */ FPUSH(R_F32((u32)(0x91e490u)));
    /* 004f59ce: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f59d0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f59d2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f59d3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f59d5: jb 0x4f59d9 */ if (fC) goto L_004f59d9;
L_004f59d7:; BB(0x004f59d7);
    /* 004f59d7: fst st(1) */ ST(1) = ST(0);
L_004f59d9:; BB(0x004f59d9);
    /* 004f59d9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f59db: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
L_004f59df:; BB(0x004f59df);
    /* 004f59df: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004f59e3: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004f59e7: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004f59eb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f59ed: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004f59f1: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f59f5: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004f59f9: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004f59fc: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 004f5a00: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f5a04: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 004f5a08: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004f5a0c: call 0x4e9f40 */ r_esp -= 4; W32(r_esp, 0x4f5a11u); f_004e9f40();
    /* 004f5a11: fld dword ptr [0x91e470] */ FPUSH(R_F32((u32)(0x91e470u)));
    /* 004f5a17: fadd dword ptr [esi + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x4cu));
    /* 004f5a1a: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004f5a1e: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 004f5a22: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 004f5a25: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004f5a29: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004f5a2b: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004f5a2f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f5a31: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004f5a35: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f5a39: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004f5a3d: add eax, 0x5b */ {  u32 a = r_eax; u32 b = 0x5bu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f5a40: mov dword ptr [esp + 0x20], 0x43290000 */ W32((u32)(r_esp+0x20u), 0x43290000u);
    /* 004f5a48: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004f5a4b: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 004f5a4f: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004f5a53: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 004f5a57: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 004f5a5b: call 0x4e9f40 */ r_esp -= 4; W32(r_esp, 0x4f5a60u); f_004e9f40();
    /* 004f5a60: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f5a63: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f5a64: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f5a65: ret  */ FN_RET(0x004f5947); r_esp += 4; return;
}

void f_004f5a70(void) /* sub_4F5A70 */
{
    FN_ENTER(0x004f5a70);
    /* 004f5a70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f5a71: mov ebp, esp */ r_ebp = r_esp;
    /* 004f5a73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f5a75: push 0x8d302c */ { u32 v = 0x8d302cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f5a7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f5a80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f5a81: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f5a88: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f5a8b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f5a8e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004f5a91: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004f5a94: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004f5a97: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f5a99: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_004f5a9c:; BB(0x004f5a9c);
    /* 004f5a9c: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004f5aa3: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5aa5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f5aaau); f_005caba4();
    /* 004f5aaa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f5aab: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004f5aae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5ab0: je 0x4f5ad8 */ if (fZ) goto L_004f5ad8;
L_004f5ab2:; BB(0x004f5ab2);
    /* 004f5ab2: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004f5ab9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f5ac0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f5ac3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f5ac4: mov ecx, eax */ r_ecx = r_eax;
    /* 004f5ac6: push dword ptr [0xaca338] */ { u32 v = R32((u32)(0xaca338u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f5acc: call 0x4f5298 */ r_esp -= 4; W32(r_esp, 0x4f5ad1u); f_004f5298();
    /* 004f5ad1: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004f5ad8:; BB(0x004f5ad8);
    /* 004f5ad8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f5adf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f5ae2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f5ae5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004f5ae8: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f5aeb: jl 0x4f5a9c */ if ((fS!=fO)) goto L_004f5a9c;
L_004f5aed:; BB(0x004f5aed);
    /* 004f5aed: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f5af0: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f5af3: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f5af6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f5af9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f5b00: mov esp, ebp */ r_esp = r_ebp;
    /* 004f5b02: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f5b03: ret  */ FN_RET(0x004f5a70); r_esp += 4; return;
}

void f_004f5b04(void) /* sub_4F5B04 */
{
    FN_ENTER(0x004f5b04);
    /* 004f5b04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f5b05: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004f5b07: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f5b09: call 0x4f5b28 */ r_esp -= 4; W32(r_esp, 0x4f5b0eu); f_004f5b28();
    /* 004f5b0e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004f5b12: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f5b14: jne 0x4f5b1a */ if (!fZ) goto L_004f5b1a;
L_004f5b16:; BB(0x004f5b16);
    /* 004f5b16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f5b17: ret 4 */ FN_RET(0x004f5b04); r_esp += 8; return;
L_004f5b1a:; BB(0x004f5b1a);
    /* 004f5b1a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f5b1b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4f5b20u); f_005c2f74();
    /* 004f5b20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f5b21: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f5b22: ret 4 */ FN_RET(0x004f5b04); r_esp += 8; return;
}

void f_004f5b28(void) /* sub_4F5B28 */
{
    FN_ENTER(0x004f5b28);
    /* 004f5b28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f5b29: mov ebp, esp */ r_ebp = r_esp;
    /* 004f5b2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f5b2d: push 0x8d3048 */ { u32 v = 0x8d3048u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5b32: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f5b38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f5b39: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f5b40: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f5b43: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f5b46: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f5b49: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f5b4c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f5b4f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004f5b52: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f5b55: mov dword ptr [ecx], 0xafde10 */ W32((u32)(r_ecx), 0xafde10u);
    /* 004f5b5b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f5b62: call 0x4f4710 */ r_esp -= 4; W32(r_esp, 0x4f5b67u); f_004f4710();
    /* 004f5b67: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f5b6a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f5b71: mov esp, ebp */ r_esp = r_ebp;
    /* 004f5b73: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f5b74: ret  */ FN_RET(0x004f5b28); r_esp += 4; return;
}

void f_004f5b78(void) /* sub_4F5B78 */
{
    FN_ENTER(0x004f5b78);
    /* 004f5b78: mov eax, dword ptr [0xa7223c] */ r_eax = R32((u32)(0xa7223cu));
    /* 004f5b7d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5b7f: jne 0x4f5b97 */ if (!fZ) goto L_004f5b97;
L_004f5b81:; BB(0x004f5b81);
    /* 004f5b81: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 004f5b84: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f5b87: jge 0x4f5baa */ if ((fS==fO)) goto L_004f5baa;
L_004f5b89:; BB(0x004f5b89);
    /* 004f5b89: cmp eax, dword ptr [0x9b8d90] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9b8d90u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f5b8f: jne 0x4f5baa */ if (!fZ) goto L_004f5baa;
L_004f5b91:; BB(0x004f5b91);
    /* 004f5b91: mov eax, 1 */ r_eax = 0x1u;
    /* 004f5b96: ret  */ FN_RET(0x004f5b78); r_esp += 4; return;
L_004f5b97:; BB(0x004f5b97);
    /* 004f5b97: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 004f5b9a: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f5b9d: jl 0x4f5baa */ if ((fS!=fO)) goto L_004f5baa;
L_004f5b9f:; BB(0x004f5b9f);
    /* 004f5b9f: add eax, -3 */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f5ba2: cmp eax, dword ptr [0x9b8d94] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9b8d94u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f5ba8: je 0x4f5b91 */ if (fZ) goto L_004f5b91;
L_004f5baa:; BB(0x004f5baa);
    /* 004f5baa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f5bac: ret  */ FN_RET(0x004f5b78); r_esp += 4; return;
}

void f_004f5bb0(void) /* sub_4F5BB0 */
{
    FN_ENTER(0x004f5bb0);
    /* 004f5bb0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004f5bb1: mov esi, ecx */ r_esi = r_ecx;
    /* 004f5bb3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f5bb7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f5bbb: mov ecx, esi */ r_ecx = r_esi;
    /* 004f5bbd: call 0x4f4760 */ r_esp -= 4; W32(r_esp, 0x4f5bc2u); f_004f4760();
    /* 004f5bc2: movzx eax, byte ptr [0xa726b8] */ r_eax = (u32)R8((u32)(0xa726b8u));
    /* 004f5bc9: mov dword ptr [esi], 0xafde10 */ W32((u32)(r_esi), 0xafde10u);
    /* 004f5bcf: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f5bd1: jne 0x4f5bed */ if (!fZ) goto L_004f5bed;
L_004f5bd3:; BB(0x004f5bd3);
    /* 004f5bd3: fld dword ptr [0x91e534] */ FPUSH(R_F32((u32)(0x91e534u)));
    /* 004f5bd9: mov dword ptr [0xa726bc], 0x3eaaaaab */ W32((u32)(0xa726bcu), 0x3eaaaaabu);
    /* 004f5be3: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004f5be6: mov byte ptr [0xa726b8], al */ W8((u32)(0xa726b8u), (u8)r_eax);
    /* 004f5beb: jmp 0x4f5bf3 */ goto L_004f5bf3;
L_004f5bed:; BB(0x004f5bed);
    /* 004f5bed: fld dword ptr [0xa726bc] */ FPUSH(R_F32((u32)(0xa726bcu)));
L_004f5bf3:; BB(0x004f5bf3);
    /* 004f5bf3: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f5bf5: jne 0x4f5c13 */ if (!fZ) goto L_004f5c13;
L_004f5bf7:; BB(0x004f5bf7);
    /* 004f5bf7: fld dword ptr [0x91e530] */ FPUSH(R_F32((u32)(0x91e530u)));
    /* 004f5bfd: mov dword ptr [0xa726c0], 0xbde38e39 */ W32((u32)(0xa726c0u), 0xbde38e39u);
    /* 004f5c07: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f5c0c: mov byte ptr [0xa726b8], al */ W8((u32)(0xa726b8u), (u8)r_eax);
    /* 004f5c11: jmp 0x4f5c19 */ goto L_004f5c19;
L_004f5c13:; BB(0x004f5c13);
    /* 004f5c13: fld dword ptr [0xa726c0] */ FPUSH(R_F32((u32)(0xa726c0u)));
L_004f5c19:; BB(0x004f5c19);
    /* 004f5c19: mov edx, dword ptr [0x9b91b4] */ r_edx = R32((u32)(0x9b91b4u));
    /* 004f5c1f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f5c21: fst dword ptr [esi + 0x28] */ W_F32((u32)(r_esi+0x28u), ST(0));
    /* 004f5c24: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f5c26: fst dword ptr [esi + 0x2c] */ W_F32((u32)(r_esi+0x2cu), ST(0));
    /* 004f5c29: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f5c2b: fstp dword ptr [esi + 0x34] */ W_F32((u32)(r_esi+0x34u), ST(0)); FPOP();
    /* 004f5c2e: fstp dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0)); FPOP();
    /* 004f5c31: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 004f5c34: mov eax, esi */ r_eax = r_esi;
    /* 004f5c36: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004f5c37: ret 8 */ FN_RET(0x004f5bb0); r_esp += 12; return;
}

void f_004f5c3c(void) /* sub_4F5C3C */
{
    FN_ENTER(0x004f5c3c);
    /* 004f5c3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f5c3d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004f5c3f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004f5c41: call 0x4f47bc */ r_esp -= 4; W32(r_esp, 0x4f5c46u); f_004f47bc();
    /* 004f5c46: add dword ptr [ebp + 0x3c], 1 */ { u32 ad = (u32)(r_ebp+0x3cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f5c4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f5c4b: ret  */ FN_RET(0x004f5c3c); r_esp += 4; return;
}

void f_004f5c4c(void) /* sub_4F5C4C */
{
    FN_ENTER(0x004f5c4c);
    /* 004f5c4c: call 0x4f5c54 */ r_esp -= 4; W32(r_esp, 0x4f5c51u); f_004f5c54();
    /* 004f5c51: ret  */ FN_RET(0x004f5c4c); r_esp += 4; return;
}

void f_004f5c54(void) /* sub_4F5C54 */
{
    FN_ENTER(0x004f5c54);
    /* 004f5c54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f5c55: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f5c56: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f5c59: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004f5c5b: fld dword ptr [ebp + 0x24] */ FPUSH(R_F32((u32)(r_ebp+0x24u)));
    /* 004f5c5e: fmul dword ptr [ebp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x30u));
    /* 004f5c61: fcom dword ptr [0x91e52c] */ fx_compare(ST(0), R_F32((u32)(0x91e52cu))); 
    /* 004f5c67: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f5c69: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004f5c6d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f5c6e: ja 0x4f5c76 */ if ((!fC&&!fZ)) goto L_004f5c76;
L_004f5c70:; BB(0x004f5c70);
    /* 004f5c70: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f5c73: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f5c74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f5c75: ret  */ FN_RET(0x004f5c54); r_esp += 4; return;
L_004f5c76:; BB(0x004f5c76);
    /* 004f5c76: mov eax, 0x42a40000 */ r_eax = 0x42a40000u;
    /* 004f5c7b: mov ebx, dword ptr [ebp] */ r_ebx = R32((u32)(r_ebp));
    /* 004f5c7e: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004f5c82: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004f5c84: mov edx, 0x43c48000 */ r_edx = 0x43c48000u;
    /* 004f5c89: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 004f5c8d: call dword ptr [ebx + 0x10] */ { u32 t = R32((u32)(r_ebx+0x10u)); r_esp -= 4; W32(r_esp, 0x4f5c90u); call_ind(t); }
    /* 004f5c90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5c92: je 0x4f5c9b */ if (fZ) goto L_004f5c9b;
L_004f5c94:; BB(0x004f5c94);
    /* 004f5c94: mov ebx, 0xc01c0000 */ r_ebx = 0xc01c0000u;
    /* 004f5c99: jmp 0x4f5ca0 */ goto L_004f5ca0;
L_004f5c9b:; BB(0x004f5c9b);
    /* 004f5c9b: mov ebx, 0xc0440000 */ r_ebx = 0xc0440000u;
L_004f5ca0:; BB(0x004f5ca0);
    /* 004f5ca0: fld dword ptr [0x91e52c] */ FPUSH(R_F32((u32)(0x91e52cu)));
    /* 004f5ca6: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004f5caa: fld dword ptr [0x91e51c] */ FPUSH(R_F32((u32)(0x91e51cu)));
    /* 004f5cb0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f5cb2: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 004f5cb4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f5cb6: fdiv dword ptr [0x91e520] */ ST(0) = ST(0) / R_F32((u32)(0x91e520u));
    /* 004f5cbc: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004f5cbe: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f5cc0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f5cc2: mov dword ptr [esp + 0x24], 0x3f800000 */ W32((u32)(r_esp+0x24u), 0x3f800000u);
    /* 004f5cca: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f5ccb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f5ccd: jbe 0x4f5cd1 */ if ((fC||fZ)) goto L_004f5cd1;
L_004f5ccf:; BB(0x004f5ccf);
    /* 004f5ccf: fst st(1) */ ST(1) = ST(0);
L_004f5cd1:; BB(0x004f5cd1);
    /* 004f5cd1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f5cd3: fld dword ptr [0x91e508] */ FPUSH(R_F32((u32)(0x91e508u)));
    /* 004f5cd9: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f5cdb: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 004f5cdd: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f5cdf: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f5ce0: mov dword ptr [esp + 0x20], 0x3f800000 */ W32((u32)(r_esp+0x20u), 0x3f800000u);
    /* 004f5ce8: jae 0x4f5d14 */ if (!fC) goto L_004f5d14;
L_004f5cea:; BB(0x004f5cea);
    /* 004f5cea: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004f5cec: fsub dword ptr [esp + 0x28] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x28u));
    /* 004f5cf0: fdivrp st(2) */ ST(2) = ST(0) / ST(2); FPOP();
    /* 004f5cf2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f5cf4: fmul dword ptr [0x91e504] */ ST(0) = ST(0) * R_F32((u32)(0x91e504u));
    /* 004f5cfa: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004f5cfe: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 004f5d00: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 004f5d04: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f5d06: fst dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0));
    /* 004f5d0a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f5d0c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004f5d0e: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004f5d12: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_004f5d14:; BB(0x004f5d14);
    /* 004f5d14: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004f5d16: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 004f5d19: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004f5d1c: jge 0x4f5d23 */ if ((fS==fO)) goto L_004f5d23;
L_004f5d1e:; BB(0x004f5d1e);
    /* 004f5d1e: add edx, 0x67 */ {  u32 a = r_edx; u32 b = 0x67u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004f5d21: jmp 0x4f5d35 */ goto L_004f5d35;
L_004f5d23:; BB(0x004f5d23);
    /* 004f5d23: lea eax, [edx - 3] */ r_eax = (u32)(r_edx+0xfffffffdu);
    /* 004f5d26: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 004f5d28: shr eax, 0x1e */ { u32 c = (30u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 004f5d2b: lea edx, [eax + edx - 3] */ r_edx = (u32)(r_eax+r_edx+0xfffffffdu);
    /* 004f5d2f: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004f5d32: add edx, 0x67 */ {  u32 a = r_edx; u32 b = 0x67u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_004f5d35:; BB(0x004f5d35);
    /* 004f5d35: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f5d39: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004f5d3c: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 004f5d40: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 004f5d44: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f5d48: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 004f5d4c: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004f5d50: mov ebx, 0x3f800000 */ r_ebx = 0x3f800000u;
    /* 004f5d55: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 004f5d59: call 0x4e9f40 */ r_esp -= 4; W32(r_esp, 0x4f5d5eu); f_004e9f40();
    /* 004f5d5e: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004f5d61: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004f5d63: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4f5d66u); call_ind(t); }
    /* 004f5d66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5d68: je 0x4f5e23 */ if (fZ) goto L_004f5e23;
L_004f5d6e:; BB(0x004f5d6e);
    /* 004f5d6e: fld dword ptr [0x91e508] */ FPUSH(R_F32((u32)(0x91e508u)));
    /* 004f5d74: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004f5d78: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 004f5d7a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f5d7c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f5d7d: jbe 0x4f5e29 */ if ((fC||fZ)) goto L_004f5e29;
L_004f5d83:; BB(0x004f5d83);
    /* 004f5d83: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004f5d87: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 004f5d89: fdiv dword ptr [0x91e518] */ ST(0) = ST(0) / R_F32((u32)(0x91e518u));
    /* 004f5d8f: mov ebx, dword ptr [ebp + 0x20] */ r_ebx = R32((u32)(r_ebp+0x20u));
    /* 004f5d92: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004f5d95: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004f5d99: add ebx, 0xb4 */ {  u32 a = r_ebx; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f5d9f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004f5da1: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4f5da4u); call_ind(t); }
    /* 004f5da4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5da6: jne 0x4f5db0 */ if (!fZ) goto L_004f5db0;
L_004f5da8:; BB(0x004f5da8);
    /* 004f5da8: fld dword ptr [0x91e51c] */ FPUSH(R_F32((u32)(0x91e51cu)));
    /* 004f5dae: jmp 0x4f5df7 */ goto L_004f5df7;
L_004f5db0:; BB(0x004f5db0);
    /* 004f5db0: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 004f5db3: shl ecx, 9 */ { u32 c = (9u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 004f5db6: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4f5dbbu); f_0082dcbc();
    /* 004f5dbb: fmul dword ptr [0x91e500] */ ST(0) = ST(0) * R_F32((u32)(0x91e500u));
    /* 004f5dc1: fadd dword ptr [esp + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x28u));
    /* 004f5dc5: fld dword ptr [0x91e52c] */ FPUSH(R_F32((u32)(0x91e52cu)));
    /* 004f5dcb: fld dword ptr [0x91e51c] */ FPUSH(R_F32((u32)(0x91e51cu)));
    /* 004f5dd1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004f5dd3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f5dd5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f5dd7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f5dd9: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004f5ddd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f5dde: jae 0x4f5de4 */ if (!fC) goto L_004f5de4;
L_004f5de0:; BB(0x004f5de0);
    /* 004f5de0: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f5de2: jmp 0x4f5df7 */ goto L_004f5df7;
L_004f5de4:; BB(0x004f5de4);
    /* 004f5de4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f5de6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f5de8: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 004f5dea: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f5deb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f5ded: ja 0x4f5df1 */ if ((!fC&&!fZ)) goto L_004f5df1;
L_004f5def:; BB(0x004f5def);
    /* 004f5def: fst st(1) */ ST(1) = ST(0);
L_004f5df1:; BB(0x004f5df1);
    /* 004f5df1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f5df3: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
L_004f5df7:; BB(0x004f5df7);
    /* 004f5df7: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004f5dfb: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 004f5dff: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004f5e03: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004f5e06: mov dword ptr [esp + 4], 0xc0080000 */ W32((u32)(r_esp+0x4u), 0xc0080000u);
    /* 004f5e0e: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 004f5e12: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f5e16: lea edx, [esp + 0x20] */ r_edx = (u32)(r_esp+0x20u);
    /* 004f5e1a: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004f5e1e: call 0x4e9f40 */ r_esp -= 4; W32(r_esp, 0x4f5e23u); f_004e9f40();
L_004f5e23:; BB(0x004f5e23);
    /* 004f5e23: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f5e26: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f5e27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f5e28: ret  */ FN_RET(0x004f5c54); r_esp += 4; return;
L_004f5e29:; BB(0x004f5e29);
    /* 004f5e29: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f5e2b: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f5e2e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f5e2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f5e30: ret  */ FN_RET(0x004f5c54); r_esp += 4; return;
}

void f_004f5e34(void) /* sub_4F5E34 */
{
    FN_ENTER(0x004f5e34);
    /* 004f5e34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f5e35: mov ebp, esp */ r_ebp = r_esp;
    /* 004f5e37: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f5e39: push 0x8d3070 */ { u32 v = 0x8d3070u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5e3e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f5e44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f5e45: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f5e4c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f5e4f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f5e52: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004f5e55: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004f5e58: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004f5e5b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004f5e5d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_004f5e60:; BB(0x004f5e60);
    /* 004f5e60: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004f5e67: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004f5e69: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4f5e6eu); f_005caba4();
    /* 004f5e6e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f5e6f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004f5e72: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5e74: je 0x4f5e9c */ if (fZ) goto L_004f5e9c;
L_004f5e76:; BB(0x004f5e76);
    /* 004f5e76: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004f5e7d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004f5e84: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004f5e87: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004f5e88: mov ecx, eax */ r_ecx = r_eax;
    /* 004f5e8a: push dword ptr [0xaca338] */ { u32 v = R32((u32)(0xaca338u)); r_esp -= 4; W32(r_esp, v); }
    /* 004f5e90: call 0x4f5bb0 */ r_esp -= 4; W32(r_esp, 0x4f5e95u); f_004f5bb0();
    /* 004f5e95: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004f5e9c:; BB(0x004f5e9c);
    /* 004f5e9c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f5ea3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004f5ea6: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004f5ea9: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004f5eac: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f5eaf: jl 0x4f5e60 */ if ((fS!=fO)) goto L_004f5e60;
L_004f5eb1:; BB(0x004f5eb1);
    /* 004f5eb1: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f5eb4: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004f5eb7: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004f5eba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f5ebd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f5ec4: mov esp, ebp */ r_esp = r_ebp;
    /* 004f5ec6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f5ec7: ret  */ FN_RET(0x004f5e34); r_esp += 4; return;
}

void f_004f5ec8(void) /* sub_4F5EC8 */
{
    FN_ENTER(0x004f5ec8);
    /* 004f5ec8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f5ec9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004f5ecb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004f5ecd: call 0x4f5eec */ r_esp -= 4; W32(r_esp, 0x4f5ed2u); f_004f5eec();
    /* 004f5ed2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004f5ed6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f5ed8: jne 0x4f5ede */ if (!fZ) goto L_004f5ede;
L_004f5eda:; BB(0x004f5eda);
    /* 004f5eda: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f5edb: ret 4 */ FN_RET(0x004f5ec8); r_esp += 8; return;
L_004f5ede:; BB(0x004f5ede);
    /* 004f5ede: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f5edf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4f5ee4u); f_005c2f74();
    /* 004f5ee4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004f5ee5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f5ee6: ret 4 */ FN_RET(0x004f5ec8); r_esp += 8; return;
}

void f_004f5eec(void) /* sub_4F5EEC */
{
    FN_ENTER(0x004f5eec);
    /* 004f5eec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004f5eed: mov ebp, esp */ r_ebp = r_esp;
    /* 004f5eef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004f5ef1: push 0x8d308c */ { u32 v = 0x8d308cu; r_esp -= 4; W32(r_esp, v); }
    /* 004f5ef6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004f5efc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f5efd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004f5f04: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f5f07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004f5f0a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004f5f0d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004f5f10: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004f5f13: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004f5f16: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004f5f19: mov dword ptr [ecx], 0xafde78 */ W32((u32)(r_ecx), 0xafde78u);
    /* 004f5f1f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004f5f26: call 0x4f4710 */ r_esp -= 4; W32(r_esp, 0x4f5f2bu); f_004f4710();
    /* 004f5f2b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004f5f2e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004f5f35: mov esp, ebp */ r_esp = r_ebp;
    /* 004f5f37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004f5f38: ret  */ FN_RET(0x004f5eec); r_esp += 4; return;
}

void f_004f5f3c(void) /* sub_4F5F3C */
{
    FN_ENTER(0x004f5f3c);
    /* 004f5f3c: mov eax, dword ptr [0x9b8d90] */ r_eax = R32((u32)(0x9b8d90u));
    /* 004f5f41: cmp eax, dword ptr [ecx + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f5f44: jne 0x4f5f4c */ if (!fZ) goto L_004f5f4c;
L_004f5f46:; BB(0x004f5f46);
    /* 004f5f46: mov eax, 1 */ r_eax = 0x1u;
    /* 004f5f4b: ret  */ FN_RET(0x004f5f3c); r_esp += 4; return;
L_004f5f4c:; BB(0x004f5f4c);
    /* 004f5f4c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004f5f4e: ret  */ FN_RET(0x004f5f3c); r_esp += 4; return;
}

void f_004f5f50(void) /* sub_4F5F50 */
{
    FN_ENTER(0x004f5f50);
    /* 004f5f50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f5f51: mov edi, ecx */ r_edi = r_ecx;
    /* 004f5f53: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f5f57: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 004f5f5b: mov ecx, edi */ r_ecx = r_edi;
    /* 004f5f5d: call 0x4f4760 */ r_esp -= 4; W32(r_esp, 0x4f5f62u); f_004f4760();
    /* 004f5f62: fild dword ptr [edi + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x20u)));
    /* 004f5f65: fmul dword ptr [0x91e538] */ ST(0) = ST(0) * R_F32((u32)(0x91e538u));
    /* 004f5f6b: fadd dword ptr [0x91e578] */ ST(0) = ST(0) + R_F32((u32)(0x91e578u));
    /* 004f5f71: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 004f5f74: mov eax, edi */ r_eax = r_edi;
    /* 004f5f76: mov dword ptr [edi], 0xafde78 */ W32((u32)(r_edi), 0xafde78u);
    /* 004f5f7c: mov edx, dword ptr [0x9b91b8] */ r_edx = R32((u32)(0x9b91b8u));
    /* 004f5f82: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 004f5f85: mov dword ptr [edi + 0x28], 0x3d088889 */ W32((u32)(r_edi+0x28u), 0x3d088889u);
    /* 004f5f8c: mov dword ptr [edi + 0x2c], 0xbcb60b61 */ W32((u32)(r_edi+0x2cu), 0xbcb60b61u);
    /* 004f5f93: mov dword ptr [edi + 0x34], 0x3f2aaaab */ W32((u32)(r_edi+0x34u), 0x3f2aaaabu);
    /* 004f5f9a: mov dword ptr [edi + 0x38], 0xbd888889 */ W32((u32)(r_edi+0x38u), 0xbd888889u);
    /* 004f5fa1: mov dword ptr [edi + 0x40], 0x3f800000 */ W32((u32)(r_edi+0x40u), 0x3f800000u);
    /* 004f5fa8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f5fa9: ret 8 */ FN_RET(0x004f5f50); r_esp += 12; return;
}

void f_004f5fac(void) /* sub_4F5FAC */
{
    FN_ENTER(0x004f5fac);
    /* 004f5fac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f5fad: mov edi, ecx */ r_edi = r_ecx;
    /* 004f5faf: mov ecx, edi */ r_ecx = r_edi;
    /* 004f5fb1: call 0x4f47bc */ r_esp -= 4; W32(r_esp, 0x4f5fb6u); f_004f47bc();
    /* 004f5fb6: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004f5fb8: mov ecx, edi */ r_ecx = r_edi;
    /* 004f5fba: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4f5fbdu); call_ind(t); }
    /* 004f5fbd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f5fbf: je 0x4f5fd5 */ if (fZ) goto L_004f5fd5;
L_004f5fc1:; BB(0x004f5fc1);
    /* 004f5fc1: mov eax, dword ptr [0xaca348] */ r_eax = R32((u32)(0xaca348u));
    /* 004f5fc6: cmp eax, dword ptr [edi + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f5fc9: je 0x4f5fe7 */ if (fZ) goto L_004f5fe7;
L_004f5fcb:; BB(0x004f5fcb);
    /* 004f5fcb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f5fcc: mov ecx, edi */ r_ecx = r_edi;
    /* 004f5fce: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x4f5fd3u); f_008172d4();
    /* 004f5fd3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f5fd4: ret  */ FN_RET(0x004f5fac); r_esp += 4; return;
L_004f5fd5:; BB(0x004f5fd5);
    /* 004f5fd5: mov eax, dword ptr [0xaca338] */ r_eax = R32((u32)(0xaca338u));
    /* 004f5fda: cmp eax, dword ptr [edi + 0x14] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004f5fdd: je 0x4f5fe7 */ if (fZ) goto L_004f5fe7;
L_004f5fdf:; BB(0x004f5fdf);
    /* 004f5fdf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004f5fe0: mov ecx, edi */ r_ecx = r_edi;
    /* 004f5fe2: call 0x8172d4 */ r_esp -= 4; W32(r_esp, 0x4f5fe7u); f_008172d4();
L_004f5fe7:; BB(0x004f5fe7);
    /* 004f5fe7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f5fe8: ret  */ FN_RET(0x004f5fac); r_esp += 4; return;
}

void f_004f5fec(void) /* sub_4F5FEC */
{
    FN_ENTER(0x004f5fec);
    /* 004f5fec: call 0x4f5ff4 */ r_esp -= 4; W32(r_esp, 0x4f5ff1u); f_004f5ff4();
    /* 004f5ff1: ret  */ FN_RET(0x004f5fec); r_esp += 4; return;
}

void f_004f5ff4(void) /* sub_4F5FF4 */
{
    FN_ENTER(0x004f5ff4);
    /* 004f5ff4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004f5ff5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004f5ff6: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004f5ff9: mov edi, ecx */ r_edi = r_ecx;
    /* 004f5ffb: mov ebx, dword ptr [edi + 0x20] */ r_ebx = R32((u32)(r_edi+0x20u));
    /* 004f5ffe: fld dword ptr [edi + 0x24] */ FPUSH(R_F32((u32)(r_edi+0x24u)));
    /* 004f6001: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 004f6004: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004f6006: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004f6008: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f600a: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004f600e: add ebx, 0x3d */ {  u32 a = r_ebx; u32 b = 0x3du; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004f6011: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004f6012: jae 0x4f6158 */ if (!fC) goto L_004f6158;
L_004f6018:; BB(0x004f6018);
    /* 004f6018: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004f601c: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 004f601e: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 004f6023: fld dword ptr [edi + 0x40] */ FPUSH(R_F32((u32)(r_edi+0x40u)));
    /* 004f6026: fsubrp st(2) */ ST(2) = ST(0) - ST(2); FPOP();
    /* 004f6028: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 004f602a: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004f602e: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004f6032: mov edx, 0x3f800000 */ r_edx = 0x3f800000u;
    /* 004f6037: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 004f603b: movzx edx, byte ptr [0xa726c8] */ r_edx = (u32)R8((u32)(0xa726c8u));
    /* 004f6042: mov eax, 0x42c80000 */ r_eax = 0x42c80000u;
    /* 004f6047: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 004f604b: mov eax, 0x42040000 */ r_eax = 0x42040000u;
    /* 004f6050: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004f6054: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f6057: jne 0x4f606c */ if (!fZ) goto L_004f606c;
L_004f6059:; BB(0x004f6059);
    /* 004f6059: mov dword ptr [0xa726cc], 0x3ea00000 */ W32((u32)(0xa726ccu), 0x3ea00000u);
    /* 004f6063: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f6066: mov byte ptr [0xa726c8], dl */ W8((u32)(0xa726c8u), (u8)r_edx);
L_004f606c:; BB(0x004f606c);
    /* 004f606c: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f606f: jne 0x4f6084 */ if (!fZ) goto L_004f6084;
L_004f6071:; BB(0x004f6071);
    /* 004f6071: mov dword ptr [0xa726d0], 0x3f400000 */ W32((u32)(0xa726d0u), 0x3f400000u);
    /* 004f607b: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f607e: mov byte ptr [0xa726c8], dl */ W8((u32)(0xa726c8u), (u8)r_edx);
L_004f6084:; BB(0x004f6084);
    /* 004f6084: mov eax, dword ptr [0xa7223c] */ r_eax = R32((u32)(0xa7223cu));
    /* 004f6089: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f608b: jne 0x4f60bd */ if (!fZ) goto L_004f60bd;
L_004f608d:; BB(0x004f608d);
    /* 004f608d: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004f6090: jne 0x4f60a8 */ if (!fZ) goto L_004f60a8;
L_004f6092:; BB(0x004f6092);
    /* 004f6092: mov dword ptr [0xa726d4], 0x3f19999a */ W32((u32)(0xa726d4u), 0x3f19999au);
    /* 004f609c: or edx, 0xffffff04 */ {  u32 a = r_edx; u32 b = 0xffffff04u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004f60a2: mov byte ptr [0xa726c8], dl */ W8((u32)(0xa726c8u), (u8)r_edx);
L_004f60a8:; BB(0x004f60a8);
    /* 004f60a8: fld dword ptr [0x91e548] */ FPUSH(R_F32((u32)(0x91e548u)));
    /* 004f60ae: fmul dword ptr [edi + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x30u));
    /* 004f60b1: fadd dword ptr [0xa726d4] */ ST(0) = ST(0) + R_F32((u32)(0xa726d4u));
    /* 004f60b7: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004f60bb: jmp 0x4f60c4 */ goto L_004f60c4;
L_004f60bd:; BB(0x004f60bd);
    /* 004f60bd: fld dword ptr [edi + 0x30] */ FPUSH(R_F32((u32)(r_edi+0x30u)));
    /* 004f60c0: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
L_004f60c4:; BB(0x004f60c4);
    /* 004f60c4: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004f60c6: mov ecx, edi */ r_ecx = r_edi;
    /* 004f60c8: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x4f60cbu); call_ind(t); }
    /* 004f60cb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004f60cd: je 0x4f60d7 */ if (fZ) goto L_004f60d7;
L_004f60cf:; BB(0x004f60cf);
    /* 004f60cf: fld dword ptr [0x91e564] */ FPUSH(R_F32((u32)(0x91e564u)));
    /* 004f60d5: jmp 0x4f60e7 */ goto L_004f60e7;
L_004f60d7:; BB(0x004f60d7);
    /* 004f60d7: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004f60db: fmul dword ptr [0xa726cc] */ ST(0) = ST(0) * R_F32((u32)(0xa726ccu));
    /* 004f60e1: fadd dword ptr [0x91e544] */ ST(0) = ST(0) + R_F32((u32)(0x91e544u));
L_004f60e7:; BB(0x004f60e7);
    /* 004f60e7: fild dword ptr [edi + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x20u)));
    /* 004f60ea: fmul dword ptr [0x91e53c] */ ST(0) = ST(0) * R_F32((u32)(0x91e53cu));
    /* 004f60f0: fadd dword ptr [esp + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x24u));
    /* 004f60f4: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004f60f8: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004f60fc: fsubr dword ptr [0x91e560] */ ST(0) = R_F32((u32)(0x91e560u)) - ST(0);
    /* 004f6102: fmul dword ptr [0x91e55c] */ ST(0) = ST(0) * R_F32((u32)(0x91e55cu));
    /* 004f6108: fadd dword ptr [esp + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x20u));
    /* 004f610c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f610e: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004f6110: fmul dword ptr [0xa726d0] */ ST(0) = ST(0) * R_F32((u32)(0xa726d0u));
    /* 004f6116: fadd dword ptr [0x91e540] */ ST(0) = ST(0) + R_F32((u32)(0x91e540u));
    /* 004f611c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f611e: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 004f6122: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f6124: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004f6128: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004f612a: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004f612e: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 004f6132: mov dword ptr [esp + 0x10], 0x3f800000 */ W32((u32)(r_esp+0x10u), 0x3f800000u);
    /* 004f613a: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004f613d: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 004f6141: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004f6145: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 004f6149: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004f614d: call 0x4e9f40 */ r_esp -= 4; W32(r_esp, 0x4f6152u); f_004e9f40();
    /* 004f6152: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f6155: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f6156: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f6157: ret  */ FN_RET(0x004f5ff4); r_esp += 4; return;
L_004f6158:; BB(0x004f6158);
    /* 004f6158: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004f615a: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004f615d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004f615e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004f615f: ret  */ FN_RET(0x004f5ff4); r_esp += 4; return;
}

