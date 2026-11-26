#include "protos.h"

void f_005fe004(void) /* sub_5FE004 */
{
    FN_ENTER(0x005fe004);
    /* 005fe004: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fe005: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe006: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fe009: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fe00b: mov ebx, eax */ r_ebx = r_eax;
    /* 005fe00d: mov esi, ecx */ r_esi = r_ecx;
L_005fe00f:; BB(0x005fe00f);
    /* 005fe00f: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005fe012: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe013: push dword ptr [esi + ebx*4 + 0x240] */ { u32 v = R32((u32)(r_esi+r_ebx*4+0x240u)); r_esp -= 4; W32(r_esp, v); }
    /* 005fe01a: mov ecx, esi */ r_ecx = r_esi;
    /* 005fe01c: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5fe021u); f_005e83c8();
    /* 005fe021: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005fe024: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe026: push dword ptr [ebx*4 + 0x92dffc] */ { u32 v = R32((u32)(r_ebx*4+0x92dffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fe02d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe02e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe02f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005fe031: mov ecx, esi */ r_ecx = r_esi;
    /* 005fe033: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5fe039u); call_ind(t); }
    /* 005fe039: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe03b: jne 0x5fe04b */ if (!fZ) goto L_005fe04b;
L_005fe03d:; BB(0x005fe03d);
    /* 005fe03d: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005fe040: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe042: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe043: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5fe048u); f_0050b510();
    /* 005fe048: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005fe04b:; BB(0x005fe04b);
    /* 005fe04b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005fe04e: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005fe051: jb 0x5fe00f */ if (fC) goto L_005fe00f;
L_005fe053:; BB(0x005fe053);
    /* 005fe053: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fe056: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fe057: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005fe058: ret  */ FN_RET(0x005fe004); r_esp += 4; return;
}

void f_005fe05c(void) /* sub_5FE05C */
{
    FN_ENTER(0x005fe05c);
    /* 005fe05c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe05d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fe05f: mov eax, dword ptr [ebx + 0x268] */ r_eax = R32((u32)(r_ebx+0x268u));
    /* 005fe065: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005fe067: jle 0x5fe07f */ if ((fZ||fS!=fO)) goto L_005fe07f;
L_005fe069:; BB(0x005fe069);
    /* 005fe069: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe06b: push 0xffffe000 */ { u32 v = 0xffffe000u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe070: lea eax, [ebx + 0x268] */ r_eax = (u32)(r_ebx+0x268u);
    /* 005fe076: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe077: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5fe07cu); f_005dd6f8();
    /* 005fe07c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005fe07f:; BB(0x005fe07f);
    /* 005fe07f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe081: push 0x3f19999a */ { u32 v = 0x3f19999au; r_esp -= 4; W32(r_esp, v); }
    /* 005fe086: add ebx, 0x26c */ {  u32 a = r_ebx; u32 b = 0x26cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005fe08c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe08d: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5fe092u); f_005dd728();
    /* 005fe092: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fe095: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fe096: ret  */ FN_RET(0x005fe05c); r_esp += 4; return;
}

void f_005fe098(void) /* sub_5FE098 */
{
    FN_ENTER(0x005fe098);
    /* 005fe098: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe099: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fe09b: mov eax, dword ptr [ebx + 0x268] */ r_eax = R32((u32)(r_ebx+0x268u));
    /* 005fe0a1: cmp eax, 0x2000 */ {  u32 a = r_eax; u32 b = 0x2000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005fe0a6: jge 0x5fe0c1 */ if ((fS==fO)) goto L_005fe0c1;
L_005fe0a8:; BB(0x005fe0a8);
    /* 005fe0a8: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe0ad: push 0x2d8 */ { u32 v = 0x2d8u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe0b2: lea eax, [ebx + 0x268] */ r_eax = (u32)(r_ebx+0x268u);
    /* 005fe0b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe0b9: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5fe0beu); f_005dd6f8();
    /* 005fe0be: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005fe0c1:; BB(0x005fe0c1);
    /* 005fe0c1: push 0xbf99999a */ { u32 v = 0xbf99999au; r_esp -= 4; W32(r_esp, v); }
    /* 005fe0c6: push 0xbecccccd */ { u32 v = 0xbecccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005fe0cb: add ebx, 0x26c */ {  u32 a = r_ebx; u32 b = 0x26cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005fe0d1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe0d2: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5fe0d7u); f_005dd728();
    /* 005fe0d7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fe0da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fe0db: ret  */ FN_RET(0x005fe098); r_esp += 4; return;
}

void f_005fe0dc(void) /* sub_5FE0DC */
{
    FN_ENTER(0x005fe0dc);
    /* 005fe0dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fe0dd: mov ebp, esp */ r_ebp = r_esp;
    /* 005fe0df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fe0e1: push 0x8de4d8 */ { u32 v = 0x8de4d8u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe0e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fe0ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe0ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fe0f4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fe0f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fe0fa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fe0fd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fe100: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fe103: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fe106: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe108: je 0x5fe15f */ if (fZ) goto L_005fe15f;
L_005fe10a:; BB(0x005fe10a);
    /* 005fe10a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005fe111: push 0x274 */ { u32 v = 0x274u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe116: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fe11bu); f_005caba4();
    /* 005fe11b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fe11c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005fe11f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe121: je 0x5fe15b */ if (fZ) goto L_005fe15b;
L_005fe123:; BB(0x005fe123);
    /* 005fe123: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005fe12a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fe131: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fe134: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fe137: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe138: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fe13e: call 0x5fe170 */ r_esp -= 4; W32(r_esp, 0x5fe143u); f_005fe170();
    /* 005fe143: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fe146: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005fe14d:; BB(0x005fe14d);
    /* 005fe14d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fe150: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fe157: mov esp, ebp */ r_esp = r_ebp;
    /* 005fe159: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fe15a: ret  */ FN_RET(0x005fe0dc); r_esp += 4; return;
L_005fe15b:; BB(0x005fe15b);
    /* 005fe15b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fe15d: jmp 0x5fe14d */ goto L_005fe14d;
L_005fe15f:; BB(0x005fe15f);
    /* 005fe15f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fe161: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fe164: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fe16b: mov esp, ebp */ r_esp = r_ebp;
    /* 005fe16d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fe16e: ret  */ FN_RET(0x005fe0dc); r_esp += 4; return;
}

void f_005fe170(void) /* sub_5FE170 */
{
    FN_ENTER(0x005fe170);
    /* 005fe170: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fe171: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe172: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005fe174: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 005fe178: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe179: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005fe17b: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005fe17f: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5fe184u); f_005e959c();
    /* 005fe184: mov dword ptr [ebp], 0xb1b400 */ W32((u32)(r_ebp), 0xb1b400u);
    /* 005fe18b: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005fe190: mov dword ptr [ebp + 0x240], eax */ W32((u32)(r_ebp+0x240u), r_eax);
    /* 005fe196: mov dword ptr [ebp + 0x244], eax */ W32((u32)(r_ebp+0x244u), r_eax);
    /* 005fe19c: mov dword ptr [ebp + 0x238], 0 */ W32((u32)(r_ebp+0x238u), 0x0u);
    /* 005fe1a6: mov dword ptr [ebp + 0x248], eax */ W32((u32)(r_ebp+0x248u), r_eax);
    /* 005fe1ac: mov dword ptr [ebp + 0x24c], eax */ W32((u32)(r_ebp+0x24cu), r_eax);
    /* 005fe1b2: mov dword ptr [ebp + 0x250], eax */ W32((u32)(r_ebp+0x250u), r_eax);
    /* 005fe1b8: mov dword ptr [ebp + 0x234], 0x5cf288 */ W32((u32)(r_ebp+0x234u), 0x5cf288u);
    /* 005fe1c2: mov dword ptr [ebp + 0x254], eax */ W32((u32)(r_ebp+0x254u), r_eax);
    /* 005fe1c8: mov dword ptr [ebp + 0x258], eax */ W32((u32)(r_ebp+0x258u), r_eax);
    /* 005fe1ce: mov dword ptr [ebp + 0x25c], eax */ W32((u32)(r_ebp+0x25cu), r_eax);
    /* 005fe1d4: mov dword ptr [ebp + 0x208], 0x41700000 */ W32((u32)(r_ebp+0x208u), 0x41700000u);
    /* 005fe1de: mov dword ptr [ebp + 0x260], eax */ W32((u32)(r_ebp+0x260u), r_eax);
    /* 005fe1e4: mov dword ptr [ebp + 0x264], eax */ W32((u32)(r_ebp+0x264u), r_eax);
    /* 005fe1ea: mov dword ptr [ebp + 0x268], 0x2000 */ W32((u32)(r_ebp+0x268u), 0x2000u);
    /* 005fe1f4: mov dword ptr [ebp + 0x26c], 0 */ W32((u32)(r_ebp+0x26cu), 0x0u);
    /* 005fe1fe: movzx edx, byte ptr [ebx + 1] */ r_edx = (u32)R8((u32)(r_ebx+0x1u));
    /* 005fe202: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe205: jne 0x5fe3ff */ if (!fZ) goto L_005fe3ff;
L_005fe20b:; BB(0x005fe20b);
    /* 005fe20b: movzx eax, byte ptr [ebx + 2] */ r_eax = (u32)R8((u32)(r_ebx+0x2u));
    /* 005fe20f: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe212: je 0x5fe392 */ if (fZ) goto L_005fe392;
L_005fe218:; BB(0x005fe218);
    /* 005fe218: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe21b: jne 0x5fe297 */ if (!fZ) goto L_005fe297;
L_005fe21d:; BB(0x005fe21d);
    /* 005fe21d: mov edx, dword ptr [ebp + 0x1dc] */ r_edx = R32((u32)(r_ebp+0x1dcu));
    /* 005fe223: mov dword ptr [ebp + 0x238], 0x5e4678 */ W32((u32)(r_ebp+0x238u), 0x5e4678u);
    /* 005fe22d: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005fe232: mov word ptr [ebp + 0x1f0], ax */ W16((u32)(r_ebp+0x1f0u), (u16)r_eax);
    /* 005fe239: mov dword ptr [ebp + 0x240], 0xa */ W32((u32)(r_ebp+0x240u), 0xau);
    /* 005fe243: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fe246: mov dword ptr [ebp + 0x1dc], edx */ W32((u32)(r_ebp+0x1dcu), r_edx);
    /* 005fe24c: mov dword ptr [ebp + 0x244], 8 */ W32((u32)(r_ebp+0x244u), 0x8u);
    /* 005fe256: mov dword ptr [ebp + 0x248], 4 */ W32((u32)(r_ebp+0x248u), 0x4u);
    /* 005fe260: mov dword ptr [ebp + 0x24c], 7 */ W32((u32)(r_ebp+0x24cu), 0x7u);
    /* 005fe26a: mov dword ptr [ebp + 0x250], 3 */ W32((u32)(r_ebp+0x250u), 0x3u);
    /* 005fe274: mov dword ptr [ebp + 0x254], 5 */ W32((u32)(r_ebp+0x254u), 0x5u);
    /* 005fe27e: mov dword ptr [ebp + 0x258], 1 */ W32((u32)(r_ebp+0x258u), 0x1u);
    /* 005fe288: mov dword ptr [ebp + 0x264], 9 */ W32((u32)(r_ebp+0x264u), 0x9u);
    /* 005fe292: jmp 0x5fe45e */ goto L_005fe45e;
L_005fe297:; BB(0x005fe297);
    /* 005fe297: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe29a: jne 0x5fe32e */ if (!fZ) goto L_005fe32e;
L_005fe2a0:; BB(0x005fe2a0);
    /* 005fe2a0: mov edx, dword ptr [ebp + 0x1dc] */ r_edx = R32((u32)(r_ebp+0x1dcu));
    /* 005fe2a6: mov dword ptr [ebp + 0x238], 0x5e4678 */ W32((u32)(r_ebp+0x238u), 0x5e4678u);
    /* 005fe2b0: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005fe2b5: mov word ptr [ebp + 0x1f0], ax */ W16((u32)(r_ebp+0x1f0u), (u16)r_eax);
    /* 005fe2bc: mov dword ptr [ebp + 0x240], 0x13 */ W32((u32)(r_ebp+0x240u), 0x13u);
    /* 005fe2c6: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fe2c9: mov dword ptr [ebp + 0x1dc], edx */ W32((u32)(r_ebp+0x1dcu), r_edx);
    /* 005fe2cf: mov dword ptr [ebp + 0x244], 0xe */ W32((u32)(r_ebp+0x244u), 0xeu);
    /* 005fe2d9: mov dword ptr [ebp + 0x248], 0xa */ W32((u32)(r_ebp+0x248u), 0xau);
    /* 005fe2e3: mov dword ptr [ebp + 0x24c], 6 */ W32((u32)(r_ebp+0x24cu), 0x6u);
    /* 005fe2ed: mov dword ptr [ebp + 0x250], 2 */ W32((u32)(r_ebp+0x250u), 0x2u);
    /* 005fe2f7: mov dword ptr [ebp + 0x254], 3 */ W32((u32)(r_ebp+0x254u), 0x3u);
    /* 005fe301: mov dword ptr [ebp + 0x258], 0xb */ W32((u32)(r_ebp+0x258u), 0xbu);
    /* 005fe30b: mov dword ptr [ebp + 0x25c], 7 */ W32((u32)(r_ebp+0x25cu), 0x7u);
    /* 005fe315: mov dword ptr [ebp + 0x260], 0xf */ W32((u32)(r_ebp+0x260u), 0xfu);
    /* 005fe31f: mov dword ptr [ebp + 0x264], 1 */ W32((u32)(r_ebp+0x264u), 0x1u);
    /* 005fe329: jmp 0x5fe45e */ goto L_005fe45e;
L_005fe32e:; BB(0x005fe32e);
    /* 005fe32e: mov eax, dword ptr [ebp + 0x1dc] */ r_eax = R32((u32)(r_ebp+0x1dcu));
    /* 005fe334: mov dword ptr [ebp + 0x238], 0x5e4678 */ W32((u32)(r_ebp+0x238u), 0x5e4678u);
    /* 005fe33e: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fe341: mov dword ptr [ebp + 0x1dc], eax */ W32((u32)(r_ebp+0x1dcu), r_eax);
    /* 005fe347: mov dword ptr [ebp + 0x240], 7 */ W32((u32)(r_ebp+0x240u), 0x7u);
    /* 005fe351: mov dword ptr [ebp + 0x244], 3 */ W32((u32)(r_ebp+0x244u), 0x3u);
    /* 005fe35b: mov dword ptr [ebp + 0x248], 5 */ W32((u32)(r_ebp+0x248u), 0x5u);
    /* 005fe365: mov dword ptr [ebp + 0x24c], 2 */ W32((u32)(r_ebp+0x24cu), 0x2u);
    /* 005fe36f: mov dword ptr [ebp + 0x250], 6 */ W32((u32)(r_ebp+0x250u), 0x6u);
    /* 005fe379: mov dword ptr [ebp + 0x254], 1 */ W32((u32)(r_ebp+0x254u), 0x1u);
    /* 005fe383: mov dword ptr [ebp + 0x258], 4 */ W32((u32)(r_ebp+0x258u), 0x4u);
    /* 005fe38d: jmp 0x5fe45e */ goto L_005fe45e;
L_005fe392:; BB(0x005fe392);
    /* 005fe392: mov edx, dword ptr [ebp + 0x1dc] */ r_edx = R32((u32)(r_ebp+0x1dcu));
    /* 005fe398: mov dword ptr [ebp + 0x238], 0x5e4678 */ W32((u32)(r_ebp+0x238u), 0x5e4678u);
    /* 005fe3a2: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005fe3a7: mov word ptr [ebp + 0x1f0], ax */ W16((u32)(r_ebp+0x1f0u), (u16)r_eax);
    /* 005fe3ae: mov dword ptr [ebp + 0x240], 9 */ W32((u32)(r_ebp+0x240u), 0x9u);
    /* 005fe3b8: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fe3bb: mov dword ptr [ebp + 0x1dc], edx */ W32((u32)(r_ebp+0x1dcu), r_edx);
    /* 005fe3c1: mov dword ptr [ebp + 0x244], 4 */ W32((u32)(r_ebp+0x244u), 0x4u);
    /* 005fe3cb: mov dword ptr [ebp + 0x248], 8 */ W32((u32)(r_ebp+0x248u), 0x8u);
    /* 005fe3d5: mov dword ptr [ebp + 0x24c], 3 */ W32((u32)(r_ebp+0x24cu), 0x3u);
    /* 005fe3df: mov dword ptr [ebp + 0x250], 7 */ W32((u32)(r_ebp+0x250u), 0x7u);
    /* 005fe3e9: mov dword ptr [ebp + 0x254], 1 */ W32((u32)(r_ebp+0x254u), 0x1u);
    /* 005fe3f3: mov dword ptr [ebp + 0x258], 5 */ W32((u32)(r_ebp+0x258u), 0x5u);
    /* 005fe3fd: jmp 0x5fe45e */ goto L_005fe45e;
L_005fe3ff:; BB(0x005fe3ff);
    /* 005fe3ff: mov eax, dword ptr [ebp + 0x1dc] */ r_eax = R32((u32)(r_ebp+0x1dcu));
    /* 005fe405: mov dword ptr [ebp + 0x238], 0x5e4678 */ W32((u32)(r_ebp+0x238u), 0x5e4678u);
    /* 005fe40f: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fe412: mov dword ptr [ebp + 0x1dc], eax */ W32((u32)(r_ebp+0x1dcu), r_eax);
    /* 005fe418: mov dword ptr [ebp + 0x240], 7 */ W32((u32)(r_ebp+0x240u), 0x7u);
    /* 005fe422: mov dword ptr [ebp + 0x244], 3 */ W32((u32)(r_ebp+0x244u), 0x3u);
    /* 005fe42c: mov dword ptr [ebp + 0x248], 5 */ W32((u32)(r_ebp+0x248u), 0x5u);
    /* 005fe436: mov dword ptr [ebp + 0x24c], 2 */ W32((u32)(r_ebp+0x24cu), 0x2u);
    /* 005fe440: mov dword ptr [ebp + 0x250], 6 */ W32((u32)(r_ebp+0x250u), 0x6u);
    /* 005fe44a: mov dword ptr [ebp + 0x254], 1 */ W32((u32)(r_ebp+0x254u), 0x1u);
    /* 005fe454: mov dword ptr [ebp + 0x258], 4 */ W32((u32)(r_ebp+0x258u), 0x4u);
L_005fe45e:; BB(0x005fe45e);
    /* 005fe45e: mov eax, ebp */ r_eax = r_ebp;
    /* 005fe460: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fe461: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fe462: ret 8 */ FN_RET(0x005fe170); r_esp += 12; return;
}

void f_005fe468(void) /* sub_5FE468 */
{
    FN_ENTER(0x005fe468);
    /* 005fe468: mov dword ptr [0xa8e230], 0x3f800000 */ W32((u32)(0xa8e230u), 0x3f800000u);
    /* 005fe472: mov dword ptr [0xa8e234], 0x41000000 */ W32((u32)(0xa8e234u), 0x41000000u);
    /* 005fe47c: mov dword ptr [0xa8e238], 0x3fc00000 */ W32((u32)(0xa8e238u), 0x3fc00000u);
    /* 005fe486: ret  */ FN_RET(0x005fe468); r_esp += 4; return;
}

void f_005fe488(void) /* sub_5FE488 */
{
    FN_ENTER(0x005fe488);
    /* 005fe488: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fe489: mov ebp, esp */ r_ebp = r_esp;
    /* 005fe48b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fe48d: push 0x8de4f4 */ { u32 v = 0x8de4f4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe492: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fe498: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe499: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fe4a0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fe4a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fe4a6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005fe4a9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005fe4ac: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005fe4af: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005fe4b2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005fe4b5: mov eax, ecx */ r_eax = r_ecx;
    /* 005fe4b7: mov dword ptr [eax], 0xb1b640 */ W32((u32)(r_eax), 0xb1b640u);
    /* 005fe4bd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fe4c4: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5fe4c9u); f_005e61c8();
    /* 005fe4c9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fe4cc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fe4ce: jne 0x5fe4e0 */ if (!fZ) goto L_005fe4e0;
L_005fe4d0:; BB(0x005fe4d0);
    /* 005fe4d0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fe4d3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fe4da: mov esp, ebp */ r_esp = r_ebp;
    /* 005fe4dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fe4dd: ret 4 */ FN_RET(0x005fe488); r_esp += 8; return;
L_005fe4e0:; BB(0x005fe4e0);
    /* 005fe4e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fe4e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe4e4: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5fe4e9u); f_005c2f74();
    /* 005fe4e9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fe4ea: jmp 0x5fe4d0 */ goto L_005fe4d0;
}

void f_005fe4ec(void) /* sub_5FE4EC */
{
    FN_ENTER(0x005fe4ec);
    /* 005fe4ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fe4ed: mov ebp, esp */ r_ebp = r_esp;
    /* 005fe4ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fe4f1: push 0x8de510 */ { u32 v = 0x8de510u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe4f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fe4fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe4fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fe504: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fe507: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fe50a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005fe50d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005fe510: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005fe513: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005fe516: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005fe519: mov eax, ecx */ r_eax = r_ecx;
    /* 005fe51b: mov dword ptr [eax], 0xb1b740 */ W32((u32)(r_eax), 0xb1b740u);
    /* 005fe521: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fe528: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5fe52du); f_008171e8();
    /* 005fe52d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fe530: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fe532: jne 0x5fe544 */ if (!fZ) goto L_005fe544;
L_005fe534:; BB(0x005fe534);
    /* 005fe534: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fe537: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fe53e: mov esp, ebp */ r_esp = r_ebp;
    /* 005fe540: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fe541: ret 4 */ FN_RET(0x005fe4ec); r_esp += 8; return;
L_005fe544:; BB(0x005fe544);
    /* 005fe544: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fe547: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe548: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5fe54du); f_005c2f74();
    /* 005fe54d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fe54e: jmp 0x5fe534 */ goto L_005fe534;
}

void f_005fe550(void) /* sub_5FE550 */
{
    FN_ENTER(0x005fe550);
    /* 005fe550: movzx eax, byte ptr [ecx + 0xf3] */ r_eax = (u32)R8((u32)(r_ecx+0xf3u));
    /* 005fe557: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fe55a: jne 0x5fe57e */ if (!fZ) goto L_005fe57e;
L_005fe55c:; BB(0x005fe55c);
    /* 005fe55c: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005fe563: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fe566: jne 0x5fe57e */ if (!fZ) goto L_005fe57e;
L_005fe568:; BB(0x005fe568);
    /* 005fe568: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005fe56c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005fe570: mov dword ptr [eax + 0x78], 0x1be */ W32((u32)(r_eax+0x78u), 0x1beu);
    /* 005fe577: mov dword ptr [edx + 0x10], 1 */ W32((u32)(r_edx+0x10u), 0x1u);
L_005fe57e:; BB(0x005fe57e);
    /* 005fe57e: ret 4 */ FN_RET(0x005fe550); r_esp += 8; return;
}

void f_005fe584(void) /* sub_5FE584 */
{
    FN_ENTER(0x005fe584);
    /* 005fe584: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fe585: mov ebp, esp */ r_ebp = r_esp;
    /* 005fe587: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fe589: push 0x8de560 */ { u32 v = 0x8de560u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe58e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fe594: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe595: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fe59c: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fe59f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fe5a2: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 005fe5a5: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 005fe5a8: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 005fe5ab: movzx eax, byte ptr [ecx + 0xf3] */ r_eax = (u32)R8((u32)(r_ecx+0xf3u));
    /* 005fe5b2: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005fe5b5: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fe5b8: jne 0x5fe5d7 */ if (!fZ) goto L_005fe5d7;
L_005fe5ba:; BB(0x005fe5ba);
    /* 005fe5ba: mov eax, ecx */ r_eax = r_ecx;
    /* 005fe5bc: movzx edx, byte ptr [eax + 0xf4] */ r_edx = (u32)R8((u32)(r_eax+0xf4u));
    /* 005fe5c3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fe5c5: jne 0x5fe5d7 */ if (!fZ) goto L_005fe5d7;
L_005fe5c7:; BB(0x005fe5c7);
    /* 005fe5c7: mov eax, dword ptr [eax + 0x244] */ r_eax = R32((u32)(r_eax+0x244u));
    /* 005fe5cd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe5d0: je 0x5fe628 */ if (fZ) goto L_005fe628;
L_005fe5d2:; BB(0x005fe5d2);
    /* 005fe5d2: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fe5d5: je 0x5fe5ee */ if (fZ) goto L_005fe5ee;
L_005fe5d7:; BB(0x005fe5d7);
    /* 005fe5d7: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005fe5da: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005fe5dd: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fe5e0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fe5e3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fe5ea: mov esp, ebp */ r_esp = r_ebp;
    /* 005fe5ec: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fe5ed: ret  */ FN_RET(0x005fe584); r_esp += 4; return;
L_005fe5ee:; BB(0x005fe5ee);
    /* 005fe5ee: mov eax, ecx */ r_eax = r_ecx;
    /* 005fe5f0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe5f2: lea edx, [eax + 0x240] */ r_edx = (u32)(r_eax+0x240u);
    /* 005fe5f8: push 0x3e4ccccd */ { u32 v = 0x3e4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005fe5fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe5fe: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5fe603u); f_005dd728();
    /* 005fe603: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 005fe606: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fe609: fld dword ptr [edx + 0x240] */ FPUSH(R_F32((u32)(r_edx+0x240u)));
    /* 005fe60f: fcomp dword ptr [0x92e054] */ fx_compare(ST(0), R_F32((u32)(0x92e054u))); FPOP();
    /* 005fe615: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005fe617: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005fe618: jne 0x5fe5d7 */ if (!fZ) goto L_005fe5d7;
L_005fe61a:; BB(0x005fe61a);
    /* 005fe61a: mov eax, edx */ r_eax = r_edx;
    /* 005fe61c: mov dword ptr [eax + 0x244], 0 */ W32((u32)(r_eax+0x244u), 0x0u);
    /* 005fe626: jmp 0x5fe5d7 */ goto L_005fe5d7;
L_005fe628:; BB(0x005fe628);
    /* 005fe628: mov eax, ecx */ r_eax = r_ecx;
    /* 005fe62a: push 0xc0000000 */ { u32 v = 0xc0000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe62f: push 0xbf000000 */ { u32 v = 0xbf000000u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe634: lea edx, [eax + 0x240] */ r_edx = (u32)(r_eax+0x240u);
    /* 005fe63a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe63b: call 0x5dd728 */ r_esp -= 4; W32(r_esp, 0x5fe640u); f_005dd728();
    /* 005fe640: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 005fe643: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fe646: fld dword ptr [edx + 0x240] */ FPUSH(R_F32((u32)(r_edx+0x240u)));
    /* 005fe64c: fcomp dword ptr [0x92e04c] */ fx_compare(ST(0), R_F32((u32)(0x92e04cu))); FPOP();
    /* 005fe652: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005fe654: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005fe655: jne 0x5fe5d7 */ if (!fZ) goto L_005fe5d7;
L_005fe657:; BB(0x005fe657);
    /* 005fe657: mov eax, edx */ r_eax = r_edx;
    /* 005fe659: mov edx, dword ptr [eax + 0xf8] */ r_edx = R32((u32)(r_eax+0xf8u));
    /* 005fe65f: mov dword ptr [eax + 0x244], 2 */ W32((u32)(r_eax+0x244u), 0x2u);
    /* 005fe669: mov ebx, dword ptr [edx + 0x60] */ r_ebx = R32((u32)(r_edx+0x60u));
    /* 005fe66c: add ebx, 0x4000 */ {  u32 a = r_ebx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005fe672: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fe674: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5fe679u); f_0082dcbc();
    /* 005fe679: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 005fe67c: mov dword ptr [ebp - 0x58], 0 */ W32((u32)(r_ebp+0xffffffa8u), 0x0u);
    /* 005fe683: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fe685: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x5fe68au); f_0082ddd8();
    /* 005fe68a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fe68d: mov ecx, dword ptr [0xaca36c] */ r_ecx = R32((u32)(0xaca36cu));
    /* 005fe693: mov edx, dword ptr [eax + 0xf8] */ r_edx = R32((u32)(r_eax+0xf8u));
    /* 005fe699: mov edx, dword ptr [edx + 0x60] */ r_edx = R32((u32)(r_edx+0x60u));
    /* 005fe69c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fe69e: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 005fe6a1: je 0x8de552 */ if (fZ) goto L_008de552;
L_005fe6a7:; BB(0x005fe6a7);
    /* 005fe6a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fe6a9: je 0x8de559 */ if (fZ) goto L_008de559;
L_005fe6af:; BB(0x005fe6af);
    /* 005fe6af: mov ecx, eax */ r_ecx = r_eax;
    /* 005fe6b1: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 005fe6b4: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 005fe6b7: mov dword ptr [ebp - 0x48], 0 */ W32((u32)(r_ebp+0xffffffb8u), 0x0u);
    /* 005fe6be: lea eax, [ebp - 0x44] */ r_eax = (u32)(r_ebp+0xffffffbcu);
    /* 005fe6c1: mov dword ptr [ebp - 0x50], 0x4000 */ W32((u32)(r_ebp+0xffffffb0u), 0x4000u);
    /* 005fe6c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe6c9: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe6cb: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5fe6d0u); f_005e83c8();
    /* 005fe6d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fe6d2: je 0x5fe5d7 */ if (fZ) goto L_005fe5d7;
L_005fe6d8:; BB(0x005fe6d8);
    /* 005fe6d8: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 005fe6df: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe6e1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fe6e6u); f_005caba4();
    /* 005fe6e6: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005fe6e9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fe6ec: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 005fe6ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe6f1: je 0x5fe77f */ if (fZ) goto L_005fe77f;
L_005fe6f7:; BB(0x005fe6f7);
    /* 005fe6f7: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 005fe6fe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fe705: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 005fe708: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fe70b: mov ecx, eax */ r_ecx = r_eax;
    /* 005fe70d: lea ebx, [ebp - 0x44] */ r_ebx = (u32)(r_ebp+0xffffffbcu);
    /* 005fe710: lea edx, [ebp - 0x5c] */ r_edx = (u32)(r_ebp+0xffffffa4u);
    /* 005fe713: lea eax, [ebp - 0x50] */ r_eax = (u32)(r_ebp+0xffffffb0u);
    /* 005fe716: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe717: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe718: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe719: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fe71a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fe71b: call 0x5fe788 */ r_esp -= 4; W32(r_esp, 0x5fe720u); f_005fe788();
    /* 005fe720: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_005fe727:; BB(0x005fe727);
    /* 005fe727: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fe72e: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fe731: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fe733: je 0x5fe5d7 */ if (fZ) goto L_005fe5d7;
L_005fe739:; BB(0x005fe739);
    /* 005fe739: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005fe740: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe742: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fe747u); f_005caba4();
    /* 005fe747: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fe748: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005fe74b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fe74d: je 0x5fe5d7 */ if (fZ) goto L_005fe5d7;
L_005fe753:; BB(0x005fe753);
    /* 005fe753: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005fe75a: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005fe761: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fe764: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005fe766: push 0x5cea60 */ { u32 v = 0x5cea60u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe76b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe76c: mov ecx, eax */ r_ecx = r_eax;
    /* 005fe76e: call 0x5e5b88 */ r_esp -= 4; W32(r_esp, 0x5fe773u); f_005e5b88();
    /* 005fe773: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005fe77a: jmp 0x5fe5d7 */ goto L_005fe5d7;
L_005fe77f:; BB(0x005fe77f);
    /* 005fe77f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fe781: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 005fe784: jmp 0x5fe727 */ goto L_005fe727;
L_008de552:; BB(0x008de552);
    /* 008de552: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008de554: jmp 0x5fe5d7 */ goto L_005fe5d7;
L_008de559:; BB(0x008de559);
    /* 008de559: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008de55b: jmp 0x5fe5d7 */ goto L_005fe5d7;
}

void f_005fe788(void) /* sub_5FE788 */
{
    FN_ENTER(0x005fe788);
    /* 005fe788: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fe789: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fe78a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fe78b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe78c: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fe78f: mov edi, ecx */ r_edi = r_ecx;
    /* 005fe791: mov ecx, edi */ r_ecx = r_edi;
    /* 005fe793: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 005fe797: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 005fe79b: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 005fe79f: push dword ptr [esp + 0x24] */ { u32 v = R32((u32)(r_esp+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 005fe7a3: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5fe7a8u); f_008193cc();
    /* 005fe7a8: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005fe7ac: mov dword ptr [edi], 0xb1b740 */ W32((u32)(r_edi), 0xb1b740u);
    /* 005fe7b2: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 005fe7b8: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 005fe7bb: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005fe7bd: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 005fe7c0: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 005fe7c3: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 005fe7c6: mov ebx, dword ptr [ebx + 8] */ r_ebx = R32((u32)(r_ebx+0x8u));
    /* 005fe7c9: mov dword ptr [edi + 0x34], ebx */ W32((u32)(r_edi+0x34u), r_ebx);
    /* 005fe7cc: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005fe7cf: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 005fe7d2: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 005fe7d5: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 005fe7d8: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 005fe7db: mov dword ptr [edi + 0x40], ebp */ W32((u32)(r_edi+0x40u), r_ebp);
    /* 005fe7de: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 005fe7e0: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 005fe7e3: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 005fe7e6: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 005fe7e9: mov esi, dword ptr [esi + 8] */ r_esi = R32((u32)(r_esi+0x8u));
    /* 005fe7ec: mov dword ptr [edi + 0x28], esi */ W32((u32)(r_edi+0x28u), r_esi);
    /* 005fe7ef: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5fe7f4u); f_008587a5();
    /* 005fe7f4: fld dword ptr [0x92e044] */ FPUSH(R_F32((u32)(0x92e044u)));
    /* 005fe7fa: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005fe7fd: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005fe800: fdiv dword ptr [0x92e040] */ ST(0) = ST(0) / R_F32((u32)(0x92e040u));
    /* 005fe806: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005fe808: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005fe80a: fmul dword ptr [edi + 0x20] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x20u));
    /* 005fe80d: fstp dword ptr [edi + 0x20] */ W_F32((u32)(r_edi+0x20u), ST(0)); FPOP();
    /* 005fe810: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5fe815u); f_008587a5();
    /* 005fe815: fld dword ptr [0x92e044] */ FPUSH(R_F32((u32)(0x92e044u)));
    /* 005fe81b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005fe81f: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 005fe823: fdiv dword ptr [0x92e040] */ ST(0) = ST(0) / R_F32((u32)(0x92e040u));
    /* 005fe829: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005fe82b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005fe82d: fmul dword ptr [edi + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x24u));
    /* 005fe830: fstp dword ptr [edi + 0x24] */ W_F32((u32)(r_edi+0x24u), ST(0)); FPOP();
    /* 005fe833: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5fe838u); f_008587a5();
    /* 005fe838: fld dword ptr [0x92e044] */ FPUSH(R_F32((u32)(0x92e044u)));
    /* 005fe83e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005fe842: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 005fe846: fdiv dword ptr [0x92e040] */ ST(0) = ST(0) / R_F32((u32)(0x92e040u));
    /* 005fe84c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 005fe84e: mov eax, edi */ r_eax = r_edi;
    /* 005fe850: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005fe852: fmul dword ptr [edi + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x28u));
    /* 005fe855: fstp dword ptr [edi + 0x28] */ W_F32((u32)(r_edi+0x28u), ST(0)); FPOP();
    /* 005fe858: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fe85b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fe85c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fe85d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005fe85e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fe85f: ret 0x14 */ FN_RET(0x005fe788); r_esp += 24; return;
}

void f_005fe864(void) /* sub_5FE864 */
{
    FN_ENTER(0x005fe864);
    /* 005fe864: movzx eax, byte ptr [ecx + 0xf3] */ r_eax = (u32)R8((u32)(r_ecx+0xf3u));
    /* 005fe86b: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fe86e: jne 0x5fe886 */ if (!fZ) goto L_005fe886;
L_005fe870:; BB(0x005fe870);
    /* 005fe870: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005fe877: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fe87a: jne 0x5fe886 */ if (!fZ) goto L_005fe886;
L_005fe87c:; BB(0x005fe87c);
    /* 005fe87c: mov dword ptr [ecx + 0x22c], 0x3f800000 */ W32((u32)(r_ecx+0x22cu), 0x3f800000u);
L_005fe886:; BB(0x005fe886);
    /* 005fe886: ret  */ FN_RET(0x005fe864); r_esp += 4; return;
}

void f_005fe888(void) /* sub_5FE888 */
{
    FN_ENTER(0x005fe888);
    /* 005fe888: movzx eax, byte ptr [ecx + 0xf3] */ r_eax = (u32)R8((u32)(r_ecx+0xf3u));
    /* 005fe88f: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fe892: jne 0x5fe8d7 */ if (!fZ) goto L_005fe8d7;
L_005fe894:; BB(0x005fe894);
    /* 005fe894: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005fe89b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fe89e: jne 0x5fe8d7 */ if (!fZ) goto L_005fe8d7;
L_005fe8a0:; BB(0x005fe8a0);
    /* 005fe8a0: fld dword ptr [0x92e038] */ FPUSH(R_F32((u32)(0x92e038u)));
    /* 005fe8a6: fld dword ptr [ecx + 0x22c] */ FPUSH(R_F32((u32)(r_ecx+0x22cu)));
    /* 005fe8ac: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005fe8ae: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005fe8b0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005fe8b1: jbe 0x5fe8d8 */ if ((fC||fZ)) goto L_005fe8d8;
L_005fe8b3:; BB(0x005fe8b3);
    /* 005fe8b3: fld dword ptr [0x92e034] */ FPUSH(R_F32((u32)(0x92e034u)));
    /* 005fe8b9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005fe8bb: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005fe8bd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005fe8bf: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005fe8c1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005fe8c3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005fe8c4: jae 0x5fe8d1 */ if (!fC) goto L_005fe8d1;
L_005fe8c6:; BB(0x005fe8c6);
    /* 005fe8c6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005fe8c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fe8ca: mov dword ptr [ecx + 0x22c], eax */ W32((u32)(r_ecx+0x22cu), r_eax);
    /* 005fe8d0: ret  */ FN_RET(0x005fe888); r_esp += 4; return;
L_005fe8d1:; BB(0x005fe8d1);
    /* 005fe8d1: fstp dword ptr [ecx + 0x22c] */ W_F32((u32)(r_ecx+0x22cu), ST(0)); FPOP();
L_005fe8d7:; BB(0x005fe8d7);
    /* 005fe8d7: ret  */ FN_RET(0x005fe888); r_esp += 4; return;
L_005fe8d8:; BB(0x005fe8d8);
    /* 005fe8d8: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005fe8da: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005fe8dc: ret  */ FN_RET(0x005fe888); r_esp += 4; return;
}

void f_005fe8e0(void) /* sub_5FE8E0 */
{
    FN_ENTER(0x005fe8e0);
    /* 005fe8e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fe8e1: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fe8e4: mov edi, ecx */ r_edi = r_ecx;
    /* 005fe8e6: movzx eax, byte ptr [edi + 0xf3] */ r_eax = (u32)R8((u32)(r_edi+0xf3u));
    /* 005fe8ed: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe8f0: jne 0x5fe975 */ if (!fZ) goto L_005fe975;
L_005fe8f6:; BB(0x005fe8f6);
    /* 005fe8f6: movzx eax, byte ptr [edi + 0xf4] */ r_eax = (u32)R8((u32)(r_edi+0xf4u));
    /* 005fe8fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe8ff: je 0x5fe96b */ if (fZ) goto L_005fe96b;
L_005fe901:; BB(0x005fe901);
    /* 005fe901: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe904: jne 0x5fe930 */ if (!fZ) goto L_005fe930;
L_005fe906:; BB(0x005fe906);
    /* 005fe906: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005fe90a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe90b: mov ecx, edi */ r_ecx = r_edi;
    /* 005fe90d: call 0x5e7534 */ r_esp -= 4; W32(r_esp, 0x5fe912u); f_005e7534();
    /* 005fe912: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe914: je 0x5fe975 */ if (fZ) goto L_005fe975;
L_005fe916:; BB(0x005fe916);
    /* 005fe916: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 005fe91a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe91c: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005fe91e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005fe920: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe921: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe922: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe923: mov ecx, edi */ r_ecx = r_edi;
    /* 005fe925: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5fe92bu); call_ind(t); }
    /* 005fe92b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fe92e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fe92f: ret  */ FN_RET(0x005fe8e0); r_esp += 4; return;
L_005fe930:; BB(0x005fe930);
    /* 005fe930: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe933: jne 0x5fe975 */ if (!fZ) goto L_005fe975;
L_005fe935:; BB(0x005fe935);
    /* 005fe935: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005fe938: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe939: mov ecx, edi */ r_ecx = r_edi;
    /* 005fe93b: call 0x5e7534 */ r_esp -= 4; W32(r_esp, 0x5fe940u); f_005e7534();
    /* 005fe940: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe942: je 0x5fe975 */ if (fZ) goto L_005fe975;
L_005fe944:; BB(0x005fe944);
    /* 005fe944: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005fe947: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe949: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005fe94b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005fe94d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe94e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe94f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005fe950: mov ecx, edi */ r_ecx = r_edi;
    /* 005fe952: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5fe958u); call_ind(t); }
    /* 005fe958: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005fe95b: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe95d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fe95e: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5fe963u); f_0050b510();
    /* 005fe963: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fe966: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fe969: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fe96a: ret  */ FN_RET(0x005fe8e0); r_esp += 4; return;
L_005fe96b:; BB(0x005fe96b);
    /* 005fe96b: mov dword ptr [edi + 0x244], 1 */ W32((u32)(r_edi+0x244u), 0x1u);
L_005fe975:; BB(0x005fe975);
    /* 005fe975: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005fe978: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fe979: ret  */ FN_RET(0x005fe8e0); r_esp += 4; return;
}

void f_005fe97c(void) /* sub_5FE97C */
{
    FN_ENTER(0x005fe97c);
    /* 005fe97c: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005fe981: movzx edx, byte ptr [ecx + 0xf3] */ r_edx = (u32)R8((u32)(r_ecx+0xf3u));
    /* 005fe988: cmp edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fe98b: jne 0x5fe9ee */ if (!fZ) goto L_005fe9ee;
L_005fe98d:; BB(0x005fe98d);
    /* 005fe98d: movzx edx, byte ptr [ecx + 0xf4] */ r_edx = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005fe994: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe996: je 0x5fe9c4 */ if (fZ) goto L_005fe9c4;
L_005fe998:; BB(0x005fe998);
    /* 005fe998: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fe99b: jne 0x5fe9ae */ if (!fZ) goto L_005fe9ae;
L_005fe99d:; BB(0x005fe99d);
    /* 005fe99d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fe9a0: jne 0x5fe9ee */ if (!fZ) goto L_005fe9ee;
L_005fe9a2:; BB(0x005fe9a2);
    /* 005fe9a2: mov ecx, dword ptr [ecx + 0x230] */ r_ecx = R32((u32)(r_ecx+0x230u));
    /* 005fe9a8: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x5fe9adu); f_00831650();
    /* 005fe9ad: ret  */ FN_RET(0x005fe97c); r_esp += 4; return;
L_005fe9ae:; BB(0x005fe9ae);
    /* 005fe9ae: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fe9b1: jne 0x5fe9ee */ if (!fZ) goto L_005fe9ee;
L_005fe9b3:; BB(0x005fe9b3);
    /* 005fe9b3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fe9b6: jne 0x5fe9ee */ if (!fZ) goto L_005fe9ee;
L_005fe9b8:; BB(0x005fe9b8);
    /* 005fe9b8: mov ecx, dword ptr [ecx + 0x230] */ r_ecx = R32((u32)(r_ecx+0x230u));
    /* 005fe9be: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x5fe9c3u); f_00831650();
    /* 005fe9c3: ret  */ FN_RET(0x005fe97c); r_esp += 4; return;
L_005fe9c4:; BB(0x005fe9c4);
    /* 005fe9c4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fe9c7: jne 0x5fe9ee */ if (!fZ) goto L_005fe9ee;
L_005fe9c9:; BB(0x005fe9c9);
    /* 005fe9c9: fld dword ptr [ecx + 0x240] */ FPUSH(R_F32((u32)(r_ecx+0x240u)));
    /* 005fe9cf: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fe9d2: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005fe9d9: fchs  */ ST(0) = -ST(0);
    /* 005fe9db: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 005fe9df: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 005fe9e7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fe9e9: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x5fe9eeu); f_00830b74();
L_005fe9ee:; BB(0x005fe9ee);
    /* 005fe9ee: ret  */ FN_RET(0x005fe97c); r_esp += 4; return;
}

void f_005fe9f0(void) /* sub_5FE9F0 */
{
    FN_ENTER(0x005fe9f0);
    /* 005fe9f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fe9f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005fe9f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fe9f5: push 0x8de588 */ { u32 v = 0x8de588u; r_esp -= 4; W32(r_esp, v); }
    /* 005fe9fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fea00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fea01: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fea08: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fea0b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fea0e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fea11: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fea14: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fea17: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fea1a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fea1c: je 0x5fea73 */ if (fZ) goto L_005fea73;
L_005fea1e:; BB(0x005fea1e);
    /* 005fea1e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005fea25: push 0x248 */ { u32 v = 0x248u; r_esp -= 4; W32(r_esp, v); }
    /* 005fea2a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fea2fu); f_005caba4();
    /* 005fea2f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fea30: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005fea33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fea35: je 0x5fea6f */ if (fZ) goto L_005fea6f;
L_005fea37:; BB(0x005fea37);
    /* 005fea37: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005fea3e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fea45: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fea48: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fea4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fea4c: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fea52: call 0x5fea84 */ r_esp -= 4; W32(r_esp, 0x5fea57u); f_005fea84();
    /* 005fea57: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fea5a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005fea61:; BB(0x005fea61);
    /* 005fea61: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fea64: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fea6b: mov esp, ebp */ r_esp = r_ebp;
    /* 005fea6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fea6e: ret  */ FN_RET(0x005fe9f0); r_esp += 4; return;
L_005fea6f:; BB(0x005fea6f);
    /* 005fea6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fea71: jmp 0x5fea61 */ goto L_005fea61;
L_005fea73:; BB(0x005fea73);
    /* 005fea73: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fea75: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fea78: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fea7f: mov esp, ebp */ r_esp = r_ebp;
    /* 005fea81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fea82: ret  */ FN_RET(0x005fe9f0); r_esp += 4; return;
}

void f_005fea84(void) /* sub_5FEA84 */
{
    FN_ENTER(0x005fea84);
    /* 005fea84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fea85: mov ebp, esp */ r_ebp = r_esp;
    /* 005fea87: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fea89: push 0x8de5a4 */ { u32 v = 0x8de5a4u; r_esp -= 4; W32(r_esp, v); }
    /* 005fea8e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fea94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fea95: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fea9c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fea9f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005feaa2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005feaa5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005feaa8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005feaab: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005feaae: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005feab1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005feab2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005feab5: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005feab8: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5feabdu); f_005e959c();
    /* 005feabd: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005feac4: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005feac7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005feaca: mov dword ptr [eax], 0xb1b640 */ W32((u32)(r_eax), 0xb1b640u);
    /* 005fead0: movzx ecx, byte ptr [edx + 1] */ r_ecx = (u32)R8((u32)(r_edx+0x1u));
    /* 005fead4: cmp ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005fead7: jne 0x5febc8 */ if (!fZ) goto L_005febc8;
L_005feadd:; BB(0x005feadd);
    /* 005feadd: movzx edx, byte ptr [edx + 2] */ r_edx = (u32)R8((u32)(r_edx+0x2u));
    /* 005feae1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005feae3: je 0x5feb8c */ if (fZ) goto L_005feb8c;
L_005feae9:; BB(0x005feae9);
    /* 005feae9: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005feaec: jne 0x5feb38 */ if (!fZ) goto L_005feb38;
L_005feaee:; BB(0x005feaee);
    /* 005feaee: mov edx, dword ptr [eax + 0x1dc] */ r_edx = R32((u32)(r_eax+0x1dcu));
    /* 005feaf4: mov dword ptr [eax + 0x238], 0 */ W32((u32)(r_eax+0x238u), 0x0u);
    /* 005feafe: or edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005feb04: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 005feb06: mov dword ptr [eax + 0x1dc], edx */ W32((u32)(r_eax+0x1dcu), r_edx);
    /* 005feb0c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5feb11u); f_008581c5();
    /* 005feb11: mov edx, eax */ r_edx = r_eax;
    /* 005feb13: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005feb16: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005feb19: mov dword ptr [eax + 0x1a8], 1 */ W32((u32)(r_eax+0x1a8u), 0x1u);
    /* 005feb23: mov dword ptr [eax + 0x230], edx */ W32((u32)(r_eax+0x230u), r_edx);
    /* 005feb29: mov dword ptr [eax + 0x208], 0x41300000 */ W32((u32)(r_eax+0x208u), 0x41300000u);
    /* 005feb33: jmp 0x5febc8 */ goto L_005febc8;
L_005feb38:; BB(0x005feb38);
    /* 005feb38: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005feb3b: jne 0x5febc8 */ if (!fZ) goto L_005febc8;
L_005feb41:; BB(0x005feb41);
    /* 005feb41: mov edx, dword ptr [eax + 0x1dc] */ r_edx = R32((u32)(r_eax+0x1dcu));
    /* 005feb47: mov dword ptr [eax + 0x234], 0x5cf288 */ W32((u32)(r_eax+0x234u), 0x5cf288u);
    /* 005feb51: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005feb54: mov dword ptr [eax + 0x1dc], edx */ W32((u32)(r_eax+0x1dcu), r_edx);
    /* 005feb5a: mov dword ptr [eax + 0x238], 0 */ W32((u32)(r_eax+0x238u), 0x0u);
    /* 005feb64: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 005feb66: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5feb6bu); f_008581c5();
    /* 005feb6b: mov edx, eax */ r_edx = r_eax;
    /* 005feb6d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005feb70: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005feb73: mov dword ptr [eax + 0x1a8], 1 */ W32((u32)(r_eax+0x1a8u), 0x1u);
    /* 005feb7d: mov dword ptr [eax + 0x230], edx */ W32((u32)(r_eax+0x230u), r_edx);
    /* 005feb83: mov byte ptr [eax + 0x1f4], 5 */ W8((u32)(r_eax+0x1f4u), 0x5u);
    /* 005feb8a: jmp 0x5febc8 */ goto L_005febc8;
L_005feb8c:; BB(0x005feb8c);
    /* 005feb8c: mov dword ptr [eax + 0x240], 0 */ W32((u32)(r_eax+0x240u), 0x0u);
    /* 005feb96: mov dword ptr [eax + 0x234], 0x5cdd04 */ W32((u32)(r_eax+0x234u), 0x5cdd04u);
    /* 005feba0: mov dword ptr [eax + 0x244], 0 */ W32((u32)(r_eax+0x244u), 0x0u);
    /* 005febaa: mov dword ptr [eax + 0x23c], 0x5d15ec */ W32((u32)(r_eax+0x23cu), 0x5d15ecu);
    /* 005febb4: mov dword ptr [eax + 0x238], 0x5e42b8 */ W32((u32)(r_eax+0x238u), 0x5e42b8u);
    /* 005febbe: mov dword ptr [eax + 0x208], 0x41700000 */ W32((u32)(r_eax+0x208u), 0x41700000u);
L_005febc8:; BB(0x005febc8);
    /* 005febc8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005febcb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005febd2: mov esp, ebp */ r_esp = r_ebp;
    /* 005febd4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005febd5: ret 8 */ FN_RET(0x005fea84); r_esp += 12; return;
}

void f_005febd8(void) /* sub_5FEBD8 */
{
    FN_ENTER(0x005febd8);
    /* 005febd8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005febd9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005febdb: push dword ptr [ebx + 0x1c] */ { u32 v = R32((u32)(r_ebx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005febde: call 0x5c57ac */ r_esp -= 4; W32(r_esp, 0x5febe3u); f_005c57ac();
    /* 005febe3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005febe4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005febe6: je 0x5fec01 */ if (fZ) goto L_005fec01;
L_005febe8:; BB(0x005febe8);
    /* 005febe8: lea ecx, [ebx + 0x2c] */ r_ecx = (u32)(r_ebx+0x2cu);
    /* 005febeb: lea edx, [ebx + 0x20] */ r_edx = (u32)(r_ebx+0x20u);
    /* 005febee: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x5febf3u); f_0082ebac();
    /* 005febf3: fld dword ptr [0x92e020] */ FPUSH(R_F32((u32)(0x92e020u)));
    /* 005febf9: fadd dword ptr [ebx + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x24u));
    /* 005febfc: fstp dword ptr [ebx + 0x24] */ W_F32((u32)(r_ebx+0x24u), ST(0)); FPOP();
    /* 005febff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fec00: ret  */ FN_RET(0x005febd8); r_esp += 4; return;
L_005fec01:; BB(0x005fec01);
    /* 005fec01: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 005fec05: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fec0a: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 005fec0e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005fec0f: ret  */ FN_RET(0x005febd8); r_esp += 4; return;
}

void f_005fec10(void) /* sub_5FEC10 */
{
    FN_ENTER(0x005fec10);
    /* 005fec10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fec11: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fec12: mov esi, ecx */ r_esi = r_ecx;
    /* 005fec14: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fec17: call 0x5c57ac */ r_esp -= 4; W32(r_esp, 0x5fec1cu); f_005c57ac();
    /* 005fec1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fec1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fec1f: je 0x5fec6b */ if (fZ) goto L_005fec6b;
L_005fec21:; BB(0x005fec21);
    /* 005fec21: mov edi, dword ptr [eax + 0x1ac] */ r_edi = R32((u32)(r_eax+0x1acu));
    /* 005fec27: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fec29: je 0x5fec6b */ if (fZ) goto L_005fec6b;
L_005fec2b:; BB(0x005fec2b);
    /* 005fec2b: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 005fec2e: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x5fec33u); f_0081a9b8();
    /* 005fec33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fec34: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5fec39u); f_0082d7b0();
    /* 005fec39: lea ecx, [esi + 0x2c] */ r_ecx = (u32)(r_esi+0x2cu);
    /* 005fec3c: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5fec41u); f_0082d838();
    /* 005fec41: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 005fec44: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fec46: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5fec4bu); f_0082d8bc();
    /* 005fec4b: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 005fec4e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fec50: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x5fec55u); f_0082e9e4();
    /* 005fec55: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 005fec58: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005fec5a: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5fec5fu); f_00830c04();
    /* 005fec5f: mov ecx, edi */ r_ecx = r_edi;
    /* 005fec61: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x5fec66u); f_00831758();
    /* 005fec66: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5fec6bu); f_0082da80();
L_005fec6b:; BB(0x005fec6b);
    /* 005fec6b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005fec6c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005fec6d: ret  */ FN_RET(0x005fec10); r_esp += 4; return;
}

void f_005fec70(void) /* sub_5FEC70 */
{
    FN_ENTER(0x005fec70);
    /* 005fec70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fec71: mov ebp, esp */ r_ebp = r_esp;
    /* 005fec73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fec75: push 0x8de5e6 */ { u32 v = 0x8de5e6u; r_esp -= 4; W32(r_esp, v); }
    /* 005fec7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fec80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fec81: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fec88: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fec8b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fec8e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005fec91: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005fec94: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005fec97: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fec9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fec9c: je 0x5fed75 */ if (fZ) goto L_005fed75;
L_005feca2:; BB(0x005feca2);
    /* 005feca2: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005feca5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005feca7: je 0x5fed75 */ if (fZ) goto L_005fed75;
L_005fecad:; BB(0x005fecad);
    /* 005fecad: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005fecb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fecb2: je 0x5fed75 */ if (fZ) goto L_005fed75;
L_005fecb8:; BB(0x005fecb8);
    /* 005fecb8: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005fecbb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fecbd: je 0x5fed75 */ if (fZ) goto L_005fed75;
L_005fecc3:; BB(0x005fecc3);
    /* 005fecc3: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 005fecc6: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 005fecc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fecca: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005feccd: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5fecd2u); f_005e83c8();
    /* 005fecd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fecd4: je 0x5fed75 */ if (fZ) goto L_005fed75;
L_005fecda:; BB(0x005fecda);
    /* 005fecda: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005fece1: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 005fece3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fece8u); f_005caba4();
    /* 005fece8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005feceb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fecee: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005fecf1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fecf3: je 0x5fed8c */ if (fZ) goto L_005fed8c;
L_005fecf9:; BB(0x005fecf9);
    /* 005fecf9: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005fed00: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fed07: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005fed0a: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005fed0d: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 005fed10: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 005fed13: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fed16: lea ebx, [ebp - 0x3c] */ r_ebx = (u32)(r_ebp+0xffffffc4u);
    /* 005fed19: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fed1a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fed1b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fed1c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fed1d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fed1e: call 0x5fe788 */ r_esp -= 4; W32(r_esp, 0x5fed23u); f_005fe788();
    /* 005fed23: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005fed2a:; BB(0x005fed2a);
    /* 005fed2a: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fed31: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fed34: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fed36: je 0x5fed75 */ if (fZ) goto L_005fed75;
L_005fed38:; BB(0x005fed38);
    /* 005fed38: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005fed3f: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005fed41: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fed46u); f_005caba4();
    /* 005fed46: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fed47: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005fed4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fed4c: je 0x5fed75 */ if (fZ) goto L_005fed75;
L_005fed4e:; BB(0x005fed4e);
    /* 005fed4e: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005fed55: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005fed5c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fed5f: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005fed61: push 0x5cea60 */ { u32 v = 0x5cea60u; r_esp -= 4; W32(r_esp, v); }
    /* 005fed66: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fed67: mov ecx, eax */ r_ecx = r_eax;
    /* 005fed69: call 0x5e5b88 */ r_esp -= 4; W32(r_esp, 0x5fed6eu); f_005e5b88();
    /* 005fed6e: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005fed75:; BB(0x005fed75);
    /* 005fed75: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fed78: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fed7b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fed7e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fed81: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fed88: mov esp, ebp */ r_esp = r_ebp;
    /* 005fed8a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fed8b: ret  */ FN_RET(0x005fec70); r_esp += 4; return;
L_005fed8c:; BB(0x005fed8c);
    /* 005fed8c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005fed8e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005fed91: jmp 0x5fed2a */ goto L_005fed2a;
}

void f_005fed94(void) /* sub_5FED94 */
{
    FN_ENTER(0x005fed94);
    /* 005fed94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fed95: mov ebp, esp */ r_ebp = r_esp;
    /* 005fed97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fed99: push 0x8de626 */ { u32 v = 0x8de626u; r_esp -= 4; W32(r_esp, v); }
    /* 005fed9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005feda4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005feda5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fedac: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fedaf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fedb2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005fedb5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005fedb8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005fedbb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fedbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fedc0: je 0x5fee8d */ if (fZ) goto L_005fee8d;
L_005fedc6:; BB(0x005fedc6);
    /* 005fedc6: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005fedc9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fedcb: je 0x5fee8d */ if (fZ) goto L_005fee8d;
L_005fedd1:; BB(0x005fedd1);
    /* 005fedd1: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 005fedd4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fedd6: je 0x5fee8d */ if (fZ) goto L_005fee8d;
L_005feddc:; BB(0x005feddc);
    /* 005feddc: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 005feddf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fede1: je 0x5fee8d */ if (fZ) goto L_005fee8d;
L_005fede7:; BB(0x005fede7);
    /* 005fede7: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005fedea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fedec: je 0x5fee8d */ if (fZ) goto L_005fee8d;
L_005fedf2:; BB(0x005fedf2);
    /* 005fedf2: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 005fedf9: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 005fedfb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fee00u); f_005caba4();
    /* 005fee00: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005fee03: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005fee06: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 005fee09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fee0b: je 0x5feea4 */ if (fZ) goto L_005feea4;
L_005fee11:; BB(0x005fee11);
    /* 005fee11: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 005fee18: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fee1f: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 005fee22: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 005fee25: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 005fee28: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 005fee2b: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 005fee2e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fee31: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fee32: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fee33: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fee34: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005fee35: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005fee36: call 0x5fe788 */ r_esp -= 4; W32(r_esp, 0x5fee3bu); f_005fe788();
    /* 005fee3b: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_005fee42:; BB(0x005fee42);
    /* 005fee42: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fee49: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fee4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fee4e: je 0x5fee8d */ if (fZ) goto L_005fee8d;
L_005fee50:; BB(0x005fee50);
    /* 005fee50: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005fee57: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005fee59: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fee5eu); f_005caba4();
    /* 005fee5e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fee5f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005fee62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fee64: je 0x5fee8d */ if (fZ) goto L_005fee8d;
L_005fee66:; BB(0x005fee66);
    /* 005fee66: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005fee6d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005fee74: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005fee77: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 005fee79: push 0x5cea60 */ { u32 v = 0x5cea60u; r_esp -= 4; W32(r_esp, v); }
    /* 005fee7e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005fee7f: mov ecx, eax */ r_ecx = r_eax;
    /* 005fee81: call 0x5e5b88 */ r_esp -= 4; W32(r_esp, 0x5fee86u); f_005e5b88();
    /* 005fee86: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005fee8d:; BB(0x005fee8d);
    /* 005fee8d: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fee90: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005fee93: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005fee96: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fee99: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005feea0: mov esp, ebp */ r_esp = r_ebp;
    /* 005feea2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005feea3: ret  */ FN_RET(0x005fed94); r_esp += 4; return;
L_005feea4:; BB(0x005feea4);
    /* 005feea4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005feea6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005feea9: jmp 0x5fee42 */ goto L_005fee42;
}

void f_005feeac(void) /* sub_5FEEAC */
{
    FN_ENTER(0x005feeac);
    /* 005feeac: mov dword ptr [0xa8e23c], 0x3f800000 */ W32((u32)(0xa8e23cu), 0x3f800000u);
    /* 005feeb6: mov dword ptr [0xa8e240], 0x41000000 */ W32((u32)(0xa8e240u), 0x41000000u);
    /* 005feec0: mov dword ptr [0xa8e244], 0x3fc00000 */ W32((u32)(0xa8e244u), 0x3fc00000u);
    /* 005feeca: ret  */ FN_RET(0x005feeac); r_esp += 4; return;
}

void f_005feecc(void) /* sub_5FEECC */
{
    FN_ENTER(0x005feecc);
    /* 005feecc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005feecd: mov ebp, esp */ r_ebp = r_esp;
    /* 005feecf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005feed1: push 0x8de640 */ { u32 v = 0x8de640u; r_esp -= 4; W32(r_esp, v); }
    /* 005feed6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005feedc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005feedd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005feee4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005feee7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005feeea: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005feeed: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005feef0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005feef3: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005feef6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005feef9: mov eax, ecx */ r_eax = r_ecx;
    /* 005feefb: mov dword ptr [eax], 0xb1b7a0 */ W32((u32)(r_eax), 0xb1b7a0u);
    /* 005fef01: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fef08: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5fef0du); f_005e61c8();
    /* 005fef0d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fef10: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fef12: jne 0x5fef24 */ if (!fZ) goto L_005fef24;
L_005fef14:; BB(0x005fef14);
    /* 005fef14: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fef17: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fef1e: mov esp, ebp */ r_esp = r_ebp;
    /* 005fef20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fef21: ret 4 */ FN_RET(0x005feecc); r_esp += 8; return;
L_005fef24:; BB(0x005fef24);
    /* 005fef24: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fef27: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fef28: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5fef2du); f_005c2f74();
    /* 005fef2d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fef2e: jmp 0x5fef14 */ goto L_005fef14;
}

void f_005fef30(void) /* sub_5FEF30 */
{
    FN_ENTER(0x005fef30);
    /* 005fef30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005fef31: mov ebp, esp */ r_ebp = r_esp;
    /* 005fef33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005fef35: push 0x8de668 */ { u32 v = 0x8de668u; r_esp -= 4; W32(r_esp, v); }
    /* 005fef3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fef40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fef41: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fef48: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fef4b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fef4e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005fef51: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005fef54: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005fef57: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fef5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fef5c: je 0x5fefb3 */ if (fZ) goto L_005fefb3;
L_005fef5e:; BB(0x005fef5e);
    /* 005fef5e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005fef65: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005fef6a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5fef6fu); f_005caba4();
    /* 005fef6f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fef70: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005fef73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005fef75: je 0x5fefaf */ if (fZ) goto L_005fefaf;
L_005fef77:; BB(0x005fef77);
    /* 005fef77: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005fef7e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005fef85: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fef88: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fef8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fef8c: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fef92: call 0x5fefc4 */ r_esp -= 4; W32(r_esp, 0x5fef97u); f_005fefc4();
    /* 005fef97: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005fef9a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005fefa1:; BB(0x005fefa1);
    /* 005fefa1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fefa4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fefab: mov esp, ebp */ r_esp = r_ebp;
    /* 005fefad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fefae: ret  */ FN_RET(0x005fef30); r_esp += 4; return;
L_005fefaf:; BB(0x005fefaf);
    /* 005fefaf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fefb1: jmp 0x5fefa1 */ goto L_005fefa1;
L_005fefb3:; BB(0x005fefb3);
    /* 005fefb3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fefb5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fefb8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fefbf: mov esp, ebp */ r_esp = r_ebp;
    /* 005fefc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fefc2: ret  */ FN_RET(0x005fef30); r_esp += 4; return;
}

void f_005fefc4(void) /* sub_5FEFC4 */
{
    FN_ENTER(0x005fefc4);
    /* 005fefc4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005fefc5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005fefc7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fefcb: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005fefcf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005fefd1: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5fefd6u); f_005e959c();
    /* 005fefd6: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005fefdc: mov dword ptr [ebx], 0xb1b7a0 */ W32((u32)(r_ebx), 0xb1b7a0u);
    /* 005fefe2: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fefe5: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005fefeb: mov dword ptr [ebx + 0x23c], 0x5cf840 */ W32((u32)(r_ebx+0x23cu), 0x5cf840u);
    /* 005feff5: mov eax, ebx */ r_eax = r_ebx;
    /* 005feff7: mov dword ptr [ebx + 0x234], 0x5cfca8 */ W32((u32)(r_ebx+0x234u), 0x5cfca8u);
    /* 005ff001: mov dword ptr [ebx + 0x238], 0x5e4350 */ W32((u32)(r_ebx+0x238u), 0x5e4350u);
    /* 005ff00b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ff00c: ret 8 */ FN_RET(0x005fefc4); r_esp += 12; return;
}

