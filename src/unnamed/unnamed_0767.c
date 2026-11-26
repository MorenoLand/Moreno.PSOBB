#include "protos.h"

void f_00767044(void) /* sub_767044 */
{
    FN_ENTER(0x00767044);
    /* 00767044: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00767045: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00767047: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00767049: call 0x767068 */ r_esp -= 4; W32(r_esp, 0x76704eu); f_00767068();
    /* 0076704e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00767052: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00767054: jne 0x76705a */ if (!fZ) goto L_0076705a;
L_00767056:; BB(0x00767056);
    /* 00767056: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00767057: ret 4 */ FN_RET(0x00767044); r_esp += 8; return;
L_0076705a:; BB(0x0076705a);
    /* 0076705a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076705b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x767060u); f_005c2f74();
    /* 00767060: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00767061: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00767062: ret 4 */ FN_RET(0x00767044); r_esp += 8; return;
}

void f_00767068(void) /* sub_767068 */
{
    FN_ENTER(0x00767068);
    /* 00767068: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00767069: mov ebp, esp */ r_ebp = r_esp;
    /* 0076706b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0076706d: push 0x8f39b0 */ { u32 v = 0x8f39b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00767072: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00767078: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00767079: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00767080: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00767083: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00767086: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00767089: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0076708c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0076708f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00767092: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00767095: mov dword ptr [ecx], 0xb435a8 */ W32((u32)(r_ecx), 0xb435a8u);
    /* 0076709b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007670a2: call 0x765570 */ r_esp -= 4; W32(r_esp, 0x7670a7u); f_00765570();
    /* 007670a7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007670aa: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007670b1: mov esp, ebp */ r_esp = r_ebp;
    /* 007670b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007670b4: ret  */ FN_RET(0x00767068); r_esp += 4; return;
}

void f_007670b8(void) /* sub_7670B8 */
{
    FN_ENTER(0x007670b8);
    /* 007670b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007670b9: mov ebp, esp */ r_ebp = r_esp;
    /* 007670bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007670bd: push 0x8f39cc */ { u32 v = 0x8f39ccu; r_esp -= 4; W32(r_esp, v); }
    /* 007670c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007670c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007670c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007670d0: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007670d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007670d6: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 007670d9: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 007670dc: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 007670df: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 007670e2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007670e5: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 007670e8: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 007670eb: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 007670ee: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 007670f1: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 007670f4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007670f7: call 0x765a14 */ r_esp -= 4; W32(r_esp, 0x7670fcu); f_00765a14();
    /* 007670fc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00767103: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00767106: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00767109: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076710c: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0076710f: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 00767112: mov dword ptr [ecx], 0xb435a8 */ W32((u32)(r_ecx), 0xb435a8u);
    /* 00767118: mov eax, dword ptr [0x9f5bb4] */ r_eax = R32((u32)(0x9f5bb4u));
    /* 0076711d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00767120: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
    /* 00767127: mov dword ptr [ebp - 0x34], ebx */ W32((u32)(r_ebp+0xffffffccu), r_ebx);
    /* 0076712a: mov dword ptr [ebp - 0x30], 0xffffffff */ W32((u32)(r_ebp+0xffffffd0u), 0xffffffffu);
    /* 00767131: lea esi, [ebp - 0x34] */ r_esi = (u32)(r_ebp+0xffffffccu);
    /* 00767134: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00767135: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00767136: call 0x765638 */ r_esp -= 4; W32(r_esp, 0x76713bu); f_00765638();
    /* 0076713b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0076713e: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00767141: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00767144: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00767147: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0076714a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00767151: mov esp, ebp */ r_esp = r_ebp;
    /* 00767153: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00767154: ret 0x10 */ FN_RET(0x007670b8); r_esp += 20; return;
}

void f_00767158(void) /* sub_767158 */
{
    FN_ENTER(0x00767158);
    /* 00767158: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00767159: mov esi, ecx */ r_esi = r_ecx;
    /* 0076715b: mov ecx, esi */ r_ecx = r_esi;
    /* 0076715d: call 0x765a40 */ r_esp -= 4; W32(r_esp, 0x767162u); f_00765a40();
    /* 00767162: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00767165: mov ecx, esi */ r_ecx = r_esi;
    /* 00767167: call 0x765714 */ r_esp -= 4; W32(r_esp, 0x76716cu); f_00765714();
    /* 0076716c: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0076716f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00767171: je 0x76717a */ if (fZ) goto L_0076717a;
L_00767173:; BB(0x00767173);
    /* 00767173: mov ecx, esi */ r_ecx = r_esi;
    /* 00767175: call 0x765768 */ r_esp -= 4; W32(r_esp, 0x76717au); f_00765768();
L_0076717a:; BB(0x0076717a);
    /* 0076717a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0076717b: ret  */ FN_RET(0x00767158); r_esp += 4; return;
}

void f_0076717c(void) /* sub_76717C */
{
    FN_ENTER(0x0076717c);
    /* 0076717c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076717d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076717f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00767181: call 0x7671a0 */ r_esp -= 4; W32(r_esp, 0x767186u); f_007671a0();
    /* 00767186: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0076718a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076718c: jne 0x767192 */ if (!fZ) goto L_00767192;
L_0076718e:; BB(0x0076718e);
    /* 0076718e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076718f: ret 4 */ FN_RET(0x0076717c); r_esp += 8; return;
L_00767192:; BB(0x00767192);
    /* 00767192: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00767193: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x767198u); f_005c2f74();
    /* 00767198: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00767199: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076719a: ret 4 */ FN_RET(0x0076717c); r_esp += 8; return;
}

void f_007671a0(void) /* sub_7671A0 */
{
    FN_ENTER(0x007671a0);
    /* 007671a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007671a1: mov ebp, esp */ r_ebp = r_esp;
    /* 007671a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007671a5: push 0x8f39e8 */ { u32 v = 0x8f39e8u; r_esp -= 4; W32(r_esp, v); }
    /* 007671aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007671b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007671b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007671b8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007671bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007671be: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007671c1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007671c4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007671c7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007671ca: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007671cd: mov dword ptr [ecx], 0xb43630 */ W32((u32)(r_ecx), 0xb43630u);
    /* 007671d3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007671da: call 0x765570 */ r_esp -= 4; W32(r_esp, 0x7671dfu); f_00765570();
    /* 007671df: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007671e2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007671e9: mov esp, ebp */ r_esp = r_ebp;
    /* 007671eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007671ec: ret  */ FN_RET(0x007671a0); r_esp += 4; return;
}

void f_007671f0(void) /* sub_7671F0 */
{
    FN_ENTER(0x007671f0);
    /* 007671f0: mov eax, dword ptr [0xa9afe8] */ r_eax = R32((u32)(0xa9afe8u));
    /* 007671f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007671f7: jne 0x767206 */ if (!fZ) goto L_00767206;
L_007671f9:; BB(0x007671f9);
    /* 007671f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007671fb: call 0x765920 */ r_esp -= 4; W32(r_esp, 0x767200u); f_00765920();
    /* 00767200: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00767201: mov eax, dword ptr [0xa9afe8] */ r_eax = R32((u32)(0xa9afe8u));
L_00767206:; BB(0x00767206);
    /* 00767206: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00767209: mov dword ptr [0xa9afe8], eax */ W32((u32)(0xa9afe8u), r_eax);
    /* 0076720e: ret  */ FN_RET(0x007671f0); r_esp += 4; return;
}

void f_00767210(void) /* sub_767210 */
{
    FN_ENTER(0x00767210);
    /* 00767210: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00767211: mov ebp, esp */ r_ebp = r_esp;
    /* 00767213: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00767215: push 0x8f3a04 */ { u32 v = 0x8f3a04u; r_esp -= 4; W32(r_esp, v); }
    /* 0076721a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00767220: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00767221: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00767228: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076722b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076722e: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00767231: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00767234: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00767237: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0076723a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076723d: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00767240: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00767243: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00767246: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00767249: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0076724c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0076724f: call 0x765a14 */ r_esp -= 4; W32(r_esp, 0x767254u); f_00765a14();
    /* 00767254: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0076725b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0076725e: mov dword ptr [eax], 0xb43630 */ W32((u32)(r_eax), 0xb43630u);
    /* 00767264: mov ebx, dword ptr [0x9f6938] */ r_ebx = R32((u32)(0x9f6938u));
    /* 0076726a: mov ecx, dword ptr [0xa9b03c] */ r_ecx = R32((u32)(0xa9b03cu));
    /* 00767270: mov dword ptr [eax + 4], ebx */ W32((u32)(r_eax+0x4u), r_ebx);
    /* 00767273: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767275: je 0x767371 */ if (fZ) goto L_00767371;
L_0076727b:; BB(0x0076727b);
    /* 0076727b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076727e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00767280: jl 0x76733f */ if ((fS!=fO)) goto L_0076733f;
L_00767286:; BB(0x00767286);
    /* 00767286: cmp edx, 0x2d */ {  u32 a = r_edx; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00767289: jg 0x76733f */ if ((!fZ&&fS==fO)) goto L_0076733f;
L_0076728f:; BB(0x0076728f);
    /* 0076728f: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00767292: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00767294: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00767296: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 00767299: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 0076729c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0076729f: mov dword ptr [eax + 0x28], ebx */ W32((u32)(r_eax+0x28u), r_ebx);
    /* 007672a2: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 007672a5: mov dword ptr [eax + 0x2c], edi */ W32((u32)(r_eax+0x2cu), r_edi);
    /* 007672a8: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 007672ab: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 007672ae: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x7672b3u); f_005b8610();
    /* 007672b3: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 007672b6: mov ecx, dword ptr [0xa9b03c] */ r_ecx = R32((u32)(0xa9b03cu));
    /* 007672bc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007672be: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 007672c1: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x7672c6u); f_005b8624();
    /* 007672c6: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 007672c9: mov ecx, dword ptr [0xa9b03c] */ r_ecx = R32((u32)(0xa9b03cu));
    /* 007672cf: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 007672d2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007672d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007672d6: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x7672dbu); f_005b8638();
    /* 007672db: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 007672de: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007672e1: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
    /* 007672e8: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 007672eb: mov dword ptr [ecx + 0x40], ebx */ W32((u32)(r_ecx+0x40u), r_ebx);
    /* 007672ee: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 007672f1: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 007672f4: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007672f7: fadd dword ptr [edx*4 + 0x976300] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x976300u));
    /* 007672fe: fadd dword ptr [0x97630c] */ ST(0) = ST(0) + R_F32((u32)(0x97630cu));
    /* 00767304: lea edi, [ebx + ebx*8] */ r_edi = (u32)(r_ebx+r_ebx*8);
    /* 00767307: fstp dword ptr [ecx + 0x48] */ W_F32((u32)(r_ecx+0x48u), ST(0)); FPOP();
    /* 0076730a: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0076730d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076730f: lea esi, [eax + eax + 0x9f5bc4] */ r_esi = (u32)(r_eax+r_eax+0x9f5bc4u);
    /* 00767316: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00767317: push dword ptr [edi*8 + 0x9f5bc0] */ { u32 v = R32((u32)(r_edi*8+0x9f5bc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0076731e: call 0x765638 */ r_esp -= 4; W32(r_esp, 0x767323u); f_00765638();
    /* 00767323: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00767326: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00767329: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0076732c: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076732f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00767332: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00767339: mov esp, ebp */ r_esp = r_ebp;
    /* 0076733b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076733c: ret 0x10 */ FN_RET(0x00767210); r_esp += 20; return;
L_0076733f:; BB(0x0076733f);
    /* 0076733f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00767340: push 0x97686c */ { u32 v = 0x97686cu; r_esp -= 4; W32(r_esp, v); }
    /* 00767345: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x76734au); f_0061cdb0();
    /* 0076734a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0076734d: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00767350: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00767353: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00767357: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076735d: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00767361: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00767364: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076736b: mov esp, ebp */ r_esp = r_ebp;
    /* 0076736d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076736e: ret 0x10 */ FN_RET(0x00767210); r_esp += 20; return;
L_00767371:; BB(0x00767371);
    /* 00767371: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00767374: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00767378: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076737e: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00767382: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00767385: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076738c: mov esp, ebp */ r_esp = r_ebp;
    /* 0076738e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0076738f: ret 0x10 */ FN_RET(0x00767210); r_esp += 20; return;
}

void f_00767394(void) /* sub_767394 */
{
    FN_ENTER(0x00767394);
    /* 00767394: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00767395: mov edi, ecx */ r_edi = r_ecx;
    /* 00767397: mov ecx, edi */ r_ecx = r_edi;
    /* 00767399: call 0x765a40 */ r_esp -= 4; W32(r_esp, 0x76739eu); f_00765a40();
    /* 0076739e: mov ecx, edi */ r_ecx = r_edi;
    /* 007673a0: call 0x7673f0 */ r_esp -= 4; W32(r_esp, 0x7673a5u); f_007673f0();
    /* 007673a5: fld dword ptr [0x976308] */ FPUSH(R_F32((u32)(0x976308u)));
    /* 007673ab: fadd dword ptr [edi + 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x44u));
    /* 007673ae: fld dword ptr [edi + 0x48] */ FPUSH(R_F32((u32)(r_edi+0x48u)));
    /* 007673b1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 007673b3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 007673b5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007673b7: fst dword ptr [edi + 0x44] */ W_F32((u32)(r_edi+0x44u), ST(0));
    /* 007673ba: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 007673bb: ja 0x7673e8 */ if ((!fC&&!fZ)) goto L_007673e8;
L_007673bd:; BB(0x007673bd);
    /* 007673bd: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 007673c0: lea edx, [eax + eax*8] */ r_edx = (u32)(r_eax+r_eax*8);
    /* 007673c3: mov eax, dword ptr [edx*8 + 0x9f5c04] */ r_eax = R32((u32)(r_edx*8+0x9f5c04u));
    /* 007673ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007673cc: je 0x7673d5 */ if (fZ) goto L_007673d5;
L_007673ce:; BB(0x007673ce);
    /* 007673ce: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 007673d0: fst dword ptr [edi + 0x44] */ W_F32((u32)(r_edi+0x44u), ST(0));
    /* 007673d3: jmp 0x7673e8 */ goto L_007673e8;
L_007673d5:; BB(0x007673d5);
    /* 007673d5: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007673d7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007673d9: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 007673dd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007673e2: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 007673e6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007673e7: ret  */ FN_RET(0x00767394); r_esp += 4; return;
L_007673e8:; BB(0x007673e8);
    /* 007673e8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007673ea: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007673ec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007673ed: ret  */ FN_RET(0x00767394); r_esp += 4; return;
}

void f_007673f0(void) /* sub_7673F0 */
{
    FN_ENTER(0x007673f0);
    /* 007673f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007673f1: mov edi, ecx */ r_edi = r_ecx;
    /* 007673f3: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x7673f8u); f_0082d7b0();
    /* 007673f8: lea ecx, [edi + 0x24] */ r_ecx = (u32)(r_edi+0x24u);
    /* 007673fb: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x767400u); f_0082d838();
    /* 00767400: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00767403: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00767405: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x76740au); f_0082d8bc();
    /* 0076740a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0076740c: mov ecx, edi */ r_ecx = r_edi;
    /* 0076740e: call 0x7657c8 */ r_esp -= 4; W32(r_esp, 0x767413u); f_007657c8();
    /* 00767413: mov ecx, 0x7671f0 */ r_ecx = 0x7671f0u;
    /* 00767418: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x76741du); f_0082fac4();
    /* 0076741d: push dword ptr [edi + 0x44] */ { u32 v = R32((u32)(r_edi+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 00767420: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 00767423: mov edx, dword ptr [edi + 0x3c] */ r_edx = R32((u32)(r_edi+0x3cu));
    /* 00767426: call 0x830590 */ r_esp -= 4; W32(r_esp, 0x76742bu); f_00830590();
    /* 0076742b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0076742d: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x767432u); f_0082fac4();
    /* 00767432: mov ecx, edi */ r_ecx = r_edi;
    /* 00767434: call 0x7657e4 */ r_esp -= 4; W32(r_esp, 0x767439u); f_007657e4();
    /* 00767439: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x76743eu); f_0082da80();
    /* 0076743e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0076743f: ret  */ FN_RET(0x007673f0); r_esp += 4; return;
}

void f_00767440(void) /* sub_767440 */
{
    FN_ENTER(0x00767440);
    /* 00767440: mov ecx, dword ptr [0xa9b03c] */ r_ecx = R32((u32)(0xa9b03cu));
    /* 00767446: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00767448: je 0x76745d */ if (fZ) goto L_0076745d;
L_0076744a:; BB(0x0076744a);
    /* 0076744a: je 0x767453 */ if (fZ) goto L_00767453;
L_0076744c:; BB(0x0076744c);
    /* 0076744c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0076744e: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x767453u); f_004066a8();
L_00767453:; BB(0x00767453);
    /* 00767453: mov dword ptr [0xa9b03c], 0 */ W32((u32)(0xa9b03cu), 0x0u);
L_0076745d:; BB(0x0076745d);
    /* 0076745d: ret  */ FN_RET(0x00767440); r_esp += 4; return;
}

void f_00767460(void) /* sub_767460 */
{
    FN_ENTER(0x00767460);
    /* 00767460: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00767461: mov ebp, esp */ r_ebp = r_esp;
    /* 00767463: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00767465: push 0x8f3a2c */ { u32 v = 0x8f3a2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0076746a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00767470: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00767471: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00767478: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0076747b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076747e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00767481: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00767484: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00767487: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0076748c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00767493: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x767498u); f_008581c5();
    /* 00767498: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00767499: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0076749c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076749e: je 0x767541 */ if (fZ) goto L_00767541;
L_007674a4:; BB(0x007674a4);
    /* 007674a4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007674ab: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007674b2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007674b5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007674b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007674b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007674b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007674ba: push 0x9f6944 */ { u32 v = 0x9f6944u; r_esp -= 4; W32(r_esp, v); }
    /* 007674bf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007674c1: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x7674c6u); f_005b7a84();
    /* 007674c6: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007674c9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007674d0:; BB(0x007674d0);
    /* 007674d0: mov dword ptr [0xa9b03c], edx */ W32((u32)(0xa9b03cu), r_edx);
    /* 007674d6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007674dd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007674df: je 0x767503 */ if (fZ) goto L_00767503;
L_007674e1:; BB(0x007674e1);
    /* 007674e1: mov eax, dword ptr [edx + 0x42c] */ r_eax = R32((u32)(r_edx+0x42cu));
    /* 007674e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007674e9: je 0x767503 */ if (fZ) goto L_00767503;
L_007674eb:; BB(0x007674eb);
    /* 007674eb: mov eax, dword ptr [edx + 0x430] */ r_eax = R32((u32)(r_edx+0x430u));
    /* 007674f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007674f3: je 0x767503 */ if (fZ) goto L_00767503;
L_007674f5:; BB(0x007674f5);
    /* 007674f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007674f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007674ff: mov esp, ebp */ r_esp = r_ebp;
    /* 00767501: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00767502: ret  */ FN_RET(0x00767460); r_esp += 4; return;
L_00767503:; BB(0x00767503);
    /* 00767503: push dword ptr [0x9f6944] */ { u32 v = R32((u32)(0x9f6944u)); r_esp -= 4; W32(r_esp, v); }
    /* 00767509: push 0x92b154 */ { u32 v = 0x92b154u; r_esp -= 4; W32(r_esp, v); }
    /* 0076750e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x767513u); f_0061cdb0();
    /* 00767513: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00767516: mov ecx, dword ptr [0xa9b03c] */ r_ecx = R32((u32)(0xa9b03cu));
    /* 0076751c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076751e: je 0x767533 */ if (fZ) goto L_00767533;
L_00767520:; BB(0x00767520);
    /* 00767520: je 0x767529 */ if (fZ) goto L_00767529;
L_00767522:; BB(0x00767522);
    /* 00767522: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00767524: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x767529u); f_004066a8();
L_00767529:; BB(0x00767529);
    /* 00767529: mov dword ptr [0xa9b03c], 0 */ W32((u32)(0xa9b03cu), 0x0u);
L_00767533:; BB(0x00767533);
    /* 00767533: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00767536: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076753d: mov esp, ebp */ r_esp = r_ebp;
    /* 0076753f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00767540: ret  */ FN_RET(0x00767460); r_esp += 4; return;
L_00767541:; BB(0x00767541);
    /* 00767541: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00767543: jmp 0x7674d0 */ goto L_007674d0;
}

void f_00767548(void) /* sub_767548 */
{
    FN_ENTER(0x00767548);
    /* 00767548: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00767549: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0076754b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0076754d: call 0x767740 */ r_esp -= 4; W32(r_esp, 0x767552u); f_00767740();
    /* 00767552: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00767556: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00767558: jne 0x76755e */ if (!fZ) goto L_0076755e;
L_0076755a:; BB(0x0076755a);
    /* 0076755a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076755b: ret 4 */ FN_RET(0x00767548); r_esp += 8; return;
L_0076755e:; BB(0x0076755e);
    /* 0076755e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0076755f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x767564u); f_00857e98();
    /* 00767564: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00767565: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00767566: ret 4 */ FN_RET(0x00767548); r_esp += 8; return;
}

void f_0076756c(void) /* sub_76756C */
{
    FN_ENTER(0x0076756c);
    /* 0076756c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0076756d: mov ebp, esp */ r_ebp = r_esp;
    /* 0076756f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00767571: push 0x8f3aaa */ { u32 v = 0x8f3aaau; r_esp -= 4; W32(r_esp, v); }
    /* 00767576: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0076757c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076757d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00767584: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00767587: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0076758a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0076758d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00767590: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00767593: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00767596: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00767599: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 007675a0: mov eax, ecx */ r_eax = r_ecx;
    /* 007675a2: mov dword ptr [eax], 0xb43880 */ W32((u32)(r_eax), 0xb43880u);
    /* 007675a8: mov dword ptr [0x9f766c], 1 */ W32((u32)(0x9f766cu), 0x1u);
    /* 007675b2: call 0x767748 */ r_esp -= 4; W32(r_esp, 0x7675b7u); f_00767748();
    /* 007675b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007675b9: je 0x7675c7 */ if (fZ) goto L_007675c7;
L_007675bb:; BB(0x007675bb);
    /* 007675bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007675be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007675bf: call 0x8113e4 */ r_esp -= 4; W32(r_esp, 0x7675c4u); f_008113e4();
    /* 007675c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007675c5: jmp 0x7675db */ goto L_007675db;
L_007675c7:; BB(0x007675c7);
    /* 007675c7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007675ca: movsx eax, word ptr [eax + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x32eu));
    /* 007675d1: cmp eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007675d4: je 0x7675bb */ if (fZ) goto L_007675bb;
L_007675d6:; BB(0x007675d6);
    /* 007675d6: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007675d9: je 0x7675bb */ if (fZ) goto L_007675bb;
L_007675db:; BB(0x007675db);
    /* 007675db: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007675de: mov ecx, dword ptr [eax + 0x3c8] */ r_ecx = R32((u32)(r_eax+0x3c8u));
    /* 007675e4: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 007675e8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007675ea: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007675f0: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 007675f4: mov esi, dword ptr [eax + 0x3cc] */ r_esi = R32((u32)(r_eax+0x3ccu));
    /* 007675fa: mov dword ptr [0xa9b07c], edi */ W32((u32)(0xa9b07cu), r_edi);
    /* 00767600: mov dword ptr [eax + 0x3c8], edi */ W32((u32)(r_eax+0x3c8u), r_edi);
    /* 00767606: movzx ebx, word ptr [esi + 8] */ r_ebx = (u32)R16((u32)(r_esi+0x8u));
    /* 0076760a: or ebx, 0xffff0001 */ {  u32 a = r_ebx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00767610: mov word ptr [esi + 8], bx */ W16((u32)(r_esi+0x8u), (u16)r_ebx);
    /* 00767614: mov ecx, dword ptr [eax + 0xfb4] */ r_ecx = R32((u32)(r_eax+0xfb4u));
    /* 0076761a: mov dword ptr [eax + 0x3cc], edi */ W32((u32)(r_eax+0x3ccu), r_edi);
    /* 00767620: mov edx, 7 */ r_edx = 0x7u;
L_00767625:; BB(0x00767625);
    /* 00767625: mov ebx, dword ptr [ecx + edx*4] */ r_ebx = R32((u32)(r_ecx+r_edx*4));
    /* 00767628: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0076762b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076762d: je 0x767653 */ if (fZ) goto L_00767653;
L_0076762f:; BB(0x0076762f);
    /* 0076762f: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00767632: movzx ecx, word ptr [ebx + 8] */ r_ecx = (u32)R16((u32)(r_ebx+0x8u));
    /* 00767636: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 0076763c: mov word ptr [ebx + 8], cx */ W16((u32)(r_ebx+0x8u), (u16)r_ecx);
    /* 00767640: mov ebx, dword ptr [esi + 0xfb4] */ r_ebx = R32((u32)(r_esi+0xfb4u));
    /* 00767646: mov dword ptr [ebx + eax*2], 0 */ W32((u32)(r_ebx+r_eax*2), 0x0u);
    /* 0076764d: mov ecx, dword ptr [esi + 0xfb4] */ r_ecx = R32((u32)(r_esi+0xfb4u));
L_00767653:; BB(0x00767653);
    /* 00767653: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00767656: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00767658: jge 0x767625 */ if ((fS==fO)) goto L_00767625;
L_0076765a:; BB(0x0076765a);
    /* 0076765a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076765c: je 0x767672 */ if (fZ) goto L_00767672;
L_0076765e:; BB(0x0076765e);
    /* 0076765e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0076765f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x767664u); f_00857e98();
    /* 00767664: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00767665: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00767668: mov dword ptr [eax + 0xfb4], 0 */ W32((u32)(r_eax+0xfb4u), 0x0u);
L_00767672:; BB(0x00767672);
    /* 00767672: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00767675: mov ecx, dword ptr [eax + 0xfb0] */ r_ecx = R32((u32)(r_eax+0xfb0u));
    /* 0076767b: mov edx, 0x12 */ r_edx = 0x12u;
L_00767680:; BB(0x00767680);
    /* 00767680: mov ebx, dword ptr [ecx + edx*4] */ r_ebx = R32((u32)(r_ecx+r_edx*4));
    /* 00767683: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00767686: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767688: je 0x7676ae */ if (fZ) goto L_007676ae;
L_0076768a:; BB(0x0076768a);
    /* 0076768a: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0076768d: movzx ecx, word ptr [ebx + 8] */ r_ecx = (u32)R16((u32)(r_ebx+0x8u));
    /* 00767691: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00767697: mov word ptr [ebx + 8], cx */ W16((u32)(r_ebx+0x8u), (u16)r_ecx);
    /* 0076769b: mov ebx, dword ptr [esi + 0xfb0] */ r_ebx = R32((u32)(r_esi+0xfb0u));
    /* 007676a1: mov dword ptr [ebx + eax*2], 0 */ W32((u32)(r_ebx+r_eax*2), 0x0u);
    /* 007676a8: mov ecx, dword ptr [esi + 0xfb0] */ r_ecx = R32((u32)(r_esi+0xfb0u));
L_007676ae:; BB(0x007676ae);
    /* 007676ae: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007676b1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007676b3: jge 0x767680 */ if ((fS==fO)) goto L_00767680;
L_007676b5:; BB(0x007676b5);
    /* 007676b5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007676b7: je 0x7676d1 */ if (fZ) goto L_007676d1;
L_007676bd:; BB(0x007676bd);
    /* 007676bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007676be: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7676c3u); f_00857e98();
    /* 007676c3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007676c4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007676c7: mov dword ptr [eax + 0xfb0], 0 */ W32((u32)(r_eax+0xfb0u), 0x0u);
L_007676d1:; BB(0x007676d1);
    /* 007676d1: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 007676d8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007676db: lea ecx, [eax + 0xf58] */ r_ecx = (u32)(r_eax+0xf58u);
    /* 007676e1: call 0x5770ec */ r_esp -= 4; W32(r_esp, 0x7676e6u); f_005770ec();
    /* 007676e6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007676e9: mov dword ptr [eax + 0xf3c], 0xb3a260 */ W32((u32)(r_eax+0xf3cu), 0xb3a260u);
    /* 007676f3: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 007676fa: lea ecx, [eax + 0xed4] */ r_ecx = (u32)(r_eax+0xed4u);
    /* 00767700: call 0x767740 */ r_esp -= 4; W32(r_esp, 0x767705u); f_00767740();
    /* 00767705: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0076770c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0076770f: call 0x51f4fc */ r_esp -= 4; W32(r_esp, 0x767714u); f_0051f4fc();
    /* 00767714: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00767717: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00767719: jne 0x767734 */ if (!fZ) goto L_00767734;
L_0076771b:; BB(0x0076771b);
    /* 0076771b: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0076771e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00767721: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00767724: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00767727: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0076772e: mov esp, ebp */ r_esp = r_ebp;
    /* 00767730: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00767731: ret 4 */ FN_RET(0x0076756c); r_esp += 8; return;
L_00767734:; BB(0x00767734);
    /* 00767734: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00767737: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00767738: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x76773du); f_005c2f74();
    /* 0076773d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0076773e: jmp 0x76771b */ goto L_0076771b;
}

void f_00767740(void) /* sub_767740 */
{
    FN_ENTER(0x00767740);
    /* 00767740: mov dword ptr [ecx], 0xb43878 */ W32((u32)(r_ecx), 0xb43878u);
    /* 00767746: ret  */ FN_RET(0x00767740); r_esp += 4; return;
}

void f_00767748(void) /* sub_767748 */
{
    FN_ENTER(0x00767748);
    /* 00767748: mov eax, dword ptr [0xa9b07c] */ r_eax = R32((u32)(0xa9b07cu));
    /* 0076774d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076774f: je 0x76775b */ if (fZ) goto L_0076775b;
L_00767751:; BB(0x00767751);
    /* 00767751: mov eax, dword ptr [0xa9b074] */ r_eax = R32((u32)(0xa9b074u));
    /* 00767756: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00767759: je 0x76775e */ if (fZ) goto L_0076775e;
L_0076775b:; BB(0x0076775b);
    /* 0076775b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076775d: ret  */ FN_RET(0x00767748); r_esp += 4; return;
L_0076775e:; BB(0x0076775e);
    /* 0076775e: mov eax, 1 */ r_eax = 0x1u;
    /* 00767763: ret  */ FN_RET(0x00767748); r_esp += 4; return;
}

void f_00767764(void) /* sub_767764 */
{
    FN_ENTER(0x00767764);
    /* 00767764: movsx edx, word ptr [esp + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x4u));
    /* 00767769: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0076776b: jl 0x767772 */ if ((fS!=fO)) goto L_00767772;
L_0076776d:; BB(0x0076776d);
    /* 0076776d: cmp edx, dword ptr [ecx + 0x10] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x10u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00767770: jle 0x767775 */ if ((fZ||fS!=fO)) goto L_00767775;
L_00767772:; BB(0x00767772);
    /* 00767772: ret 4 */ FN_RET(0x00767764); r_esp += 8; return;
L_00767775:; BB(0x00767775);
    /* 00767775: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 00767778: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 0076777b: mov dword ptr [ecx + 0x54], 0 */ W32((u32)(r_ecx+0x54u), 0x0u);
    /* 00767782: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 00767785: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0076778a: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 0076778d: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 00767790: mov dword ptr [ecx + 0x1c], eax */ W32((u32)(r_ecx+0x1cu), r_eax);
    /* 00767793: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 00767796: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00767799: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 0076779c: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 0076779f: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 007677a2: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 007677a5: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 007677a8: mov dword ptr [ecx + 0x3c], eax */ W32((u32)(r_ecx+0x3cu), r_eax);
    /* 007677ab: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 007677ae: mov dword ptr [ecx + 0x44], eax */ W32((u32)(r_ecx+0x44u), r_eax);
    /* 007677b1: mov dword ptr [ecx + 0x48], eax */ W32((u32)(r_ecx+0x48u), r_eax);
    /* 007677b4: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
    /* 007677b7: mov dword ptr [ecx + 0x50], eax */ W32((u32)(r_ecx+0x50u), r_eax);
    /* 007677ba: ret 4 */ FN_RET(0x00767764); r_esp += 8; return;
}

void f_007677c0(void) /* sub_7677C0 */
{
    FN_ENTER(0x007677c0);
    /* 007677c0: mov eax, dword ptr [ecx + 0xf74] */ r_eax = R32((u32)(r_ecx+0xf74u));
    /* 007677c6: test al, 0x25 */ {  u32 a = (u8)r_eax; u32 b = 0x25u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007677c8: je 0x7677d1 */ if (fZ) goto L_007677d1;
L_007677ca:; BB(0x007677ca);
    /* 007677ca: mov eax, 1 */ r_eax = 0x1u;
    /* 007677cf: jmp 0x7677d3 */ goto L_007677d3;
L_007677d1:; BB(0x007677d1);
    /* 007677d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007677d3:; BB(0x007677d3);
    /* 007677d3: movzx edx, word ptr [esp + 4] */ r_edx = (u32)R16((u32)(r_esp+0x4u));
    /* 007677d8: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 007677db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007677dd: jne 0x7677eb */ if (!fZ) goto L_007677eb;
L_007677df:; BB(0x007677df);
    /* 007677df: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 007677e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007677e3: call 0x767ce0 */ r_esp -= 4; W32(r_esp, 0x7677e8u); f_00767ce0();
    /* 007677e8: ret 4 */ FN_RET(0x007677c0); r_esp += 8; return;
L_007677eb:; BB(0x007677eb);
    /* 007677eb: sar edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 007677ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007677ef: call 0x76bf88 */ r_esp -= 4; W32(r_esp, 0x7677f4u); f_0076bf88();
    /* 007677f4: ret 4 */ FN_RET(0x007677c0); r_esp += 8; return;
}

void f_007677f8(void) /* sub_7677F8 */
{
    FN_ENTER(0x007677f8);
    /* 007677f8: mov eax, dword ptr [ecx + 0xf74] */ r_eax = R32((u32)(r_ecx+0xf74u));
    /* 007677fe: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00767803: mov dword ptr [ecx + 0xf74], eax */ W32((u32)(r_ecx+0xf74u), r_eax);
    /* 00767809: ret 4 */ FN_RET(0x007677f8); r_esp += 8; return;
}

void f_0076780c(void) /* sub_76780C */
{
    FN_ENTER(0x0076780c);
    /* 0076780c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0076780d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0076780e: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00767811: mov edi, ecx */ r_edi = r_ecx;
    /* 00767813: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 00767818: call 0x4d3250 */ r_esp -= 4; W32(r_esp, 0x76781du); f_004d3250();
    /* 0076781d: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00767821: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00767824: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00767825: mov ecx, edi */ r_ecx = r_edi;
    /* 00767827: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00767828: movsx eax, word ptr [esp + 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x1cu));
    /* 0076782d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0076782e: call 0x7678c8 */ r_esp -= 4; W32(r_esp, 0x767833u); f_007678c8();
    /* 00767833: mov eax, dword ptr [0xa9b070] */ r_eax = R32((u32)(0xa9b070u));
    /* 00767838: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0076783b: and eax, 0xfffffc7f */ {  u32 a = r_eax; u32 b = 0xfffffc7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00767840: shl edx, 7 */ { u32 c = (7u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00767843: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00767845: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076784a: je 0x767853 */ if (fZ) goto L_00767853;
L_0076784c:; BB(0x0076784c);
    /* 0076784c: mov edx, 1 */ r_edx = 0x1u;
    /* 00767851: jmp 0x767855 */ goto L_00767855;
L_00767853:; BB(0x00767853);
    /* 00767853: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00767855:; BB(0x00767855);
    /* 00767855: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767857: je 0x76785e */ if (fZ) goto L_0076785e;
L_00767859:; BB(0x00767859);
    /* 00767859: mov esi, 4 */ r_esi = 0x4u;
L_0076785e:; BB(0x0076785e);
    /* 0076785e: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767863: je 0x76786c */ if (fZ) goto L_0076786c;
L_00767865:; BB(0x00767865);
    /* 00767865: mov edx, 1 */ r_edx = 0x1u;
    /* 0076786a: jmp 0x76786e */ goto L_0076786e;
L_0076786c:; BB(0x0076786c);
    /* 0076786c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0076786e:; BB(0x0076786e);
    /* 0076786e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767870: je 0x767877 */ if (fZ) goto L_00767877;
L_00767872:; BB(0x00767872);
    /* 00767872: mov esi, 5 */ r_esi = 0x5u;
L_00767877:; BB(0x00767877);
    /* 00767877: test eax, 0x200 */ {  u32 a = r_eax; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076787c: je 0x767885 */ if (fZ) goto L_00767885;
L_0076787e:; BB(0x0076787e);
    /* 0076787e: mov edx, 1 */ r_edx = 0x1u;
    /* 00767883: jmp 0x767887 */ goto L_00767887;
L_00767885:; BB(0x00767885);
    /* 00767885: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00767887:; BB(0x00767887);
    /* 00767887: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767889: je 0x767890 */ if (fZ) goto L_00767890;
L_0076788b:; BB(0x0076788b);
    /* 0076788b: mov esi, 6 */ r_esi = 0x6u;
L_00767890:; BB(0x00767890);
    /* 00767890: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00767894: mov dword ptr [edi + 0xc0], edx */ W32((u32)(r_edi+0xc0u), r_edx);
    /* 0076789a: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0076789d: mov dword ptr [0xa9b070], eax */ W32((u32)(0xa9b070u), r_eax);
    /* 007678a2: call 0x76f4f4 */ r_esp -= 4; W32(r_esp, 0x7678a7u); f_0076f4f4();
    /* 007678a7: mov eax, dword ptr [0xa9b070] */ r_eax = R32((u32)(0xa9b070u));
    /* 007678ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007678ad: and eax, 0xfffffc7f */ {  u32 a = r_eax; u32 b = 0xfffffc7fu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007678b2: mov dword ptr [0xa9b070], eax */ W32((u32)(0xa9b070u), r_eax);
    /* 007678b7: mov ecx, edi */ r_ecx = r_edi;
    /* 007678b9: call 0x767ce0 */ r_esp -= 4; W32(r_esp, 0x7678beu); f_00767ce0();
    /* 007678be: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007678c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007678c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007678c3: ret 4 */ FN_RET(0x0076780c); r_esp += 8; return;
}

void f_007678c8(void) /* sub_7678C8 */
{
    FN_ENTER(0x007678c8);
    /* 007678c8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007678cb: movzx ecx, word ptr [esp + 0xc] */ r_ecx = (u32)R16((u32)(r_esp+0xcu));
    /* 007678d0: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 007678d4: mov eax, ecx */ r_eax = r_ecx;
    /* 007678d6: sar eax, 0xd */ { u32 c = (13u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 007678d9: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007678dc: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 007678de: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007678e2: and ecx, 0x1fff */ {  u32 a = r_ecx; u32 b = 0x1fffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007678e8: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 007678eb: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 007678ee: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 007678f0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007678f3: ret 0xc */ FN_RET(0x007678c8); r_esp += 16; return;
}

void f_007678f8(void) /* sub_7678F8 */
{
    FN_ENTER(0x007678f8);
    /* 007678f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007678f9: movsx edx, word ptr [esp + 8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x8u));
    /* 007678fe: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 00767903: mov dword ptr [ecx + 0xf80], edx */ W32((u32)(r_ecx+0xf80u), r_edx);
    /* 00767909: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0076790c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0076790e: mov ebx, dword ptr [eax + edx*8 + 0x9f75f4] */ r_ebx = R32((u32)(r_eax+r_edx*8+0x9f75f4u));
    /* 00767915: mov dword ptr [ecx + 0x2a4], ebx */ W32((u32)(r_ecx+0x2a4u), r_ebx);
    /* 0076791b: mov ebx, dword ptr [eax + edx*8 + 0x9f75f8] */ r_ebx = R32((u32)(r_eax+r_edx*8+0x9f75f8u));
    /* 00767922: mov eax, dword ptr [eax + edx*8 + 0x9f75fc] */ r_eax = R32((u32)(r_eax+r_edx*8+0x9f75fcu));
    /* 00767929: mov dword ptr [ecx + 0x2a8], ebx */ W32((u32)(r_ecx+0x2a8u), r_ebx);
    /* 0076792f: mov dword ptr [ecx + 0x2ac], eax */ W32((u32)(r_ecx+0x2acu), r_eax);
    /* 00767935: call 0x772358 */ r_esp -= 4; W32(r_esp, 0x76793au); f_00772358();
    /* 0076793a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0076793b: ret 4 */ FN_RET(0x007678f8); r_esp += 8; return;
}

void f_00767940(void) /* sub_767940 */
{
    FN_ENTER(0x00767940);
    /* 00767940: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00767941: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00767943: mov edx, dword ptr [ebp + 0xf80] */ r_edx = R32((u32)(r_ebp+0xf80u));
    /* 00767949: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076794b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0076794d: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00767950: lea eax, [edx + ecx + 0x9f75f4] */ r_eax = (u32)(r_edx+r_ecx+0x9f75f4u);
    /* 00767957: lea edx, [edx + ecx + 0x9f7630] */ r_edx = (u32)(r_edx+r_ecx+0x9f7630u);
    /* 0076795e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00767960: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00767961: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00767962: call 0x7679d0 */ r_esp -= 4; W32(r_esp, 0x767967u); f_007679d0();
    /* 00767967: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00767969: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0076796b: call 0x76bf88 */ r_esp -= 4; W32(r_esp, 0x767970u); f_0076bf88();
    /* 00767970: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00767977: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0076797a: je 0x7679c9 */ if (fZ) goto L_007679c9;
L_0076797c:; BB(0x0076797c);
    /* 0076797c: mov eax, dword ptr [ebp + 0xf74] */ r_eax = R32((u32)(r_ebp+0xf74u));
    /* 00767982: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00767984: je 0x76798d */ if (fZ) goto L_0076798d;
L_00767986:; BB(0x00767986);
    /* 00767986: mov eax, 1 */ r_eax = 0x1u;
    /* 0076798b: jmp 0x76798f */ goto L_0076798f;
L_0076798d:; BB(0x0076798d);
    /* 0076798d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0076798f:; BB(0x0076798f);
    /* 0076798f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00767991: jne 0x7679c9 */ if (!fZ) goto L_007679c9;
L_00767993:; BB(0x00767993);
    /* 00767993: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00767995: call 0x76af64 */ r_esp -= 4; W32(r_esp, 0x76799au); f_0076af64();
    /* 0076799a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0076799c: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0076799f: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 007679a6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007679a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007679a9: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x7679afu); call_ind(t); }
    /* 007679af: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007679b1: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 007679b4: mov eax, 0xc */ r_eax = 0xcu;
    /* 007679b9: mov word ptr [ebp + 0x32e], ax */ W16((u32)(r_ebp+0x32eu), (u16)r_eax);
    /* 007679c0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007679c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007679c3: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x7679c9u); call_ind(t); }
L_007679c9:; BB(0x007679c9);
    /* 007679c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007679ca: ret 4 */ FN_RET(0x00767940); r_esp += 8; return;
}

void f_007679d0(void) /* sub_7679D0 */
{
    FN_ENTER(0x007679d0);
    /* 007679d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007679d1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007679d2: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007679d4: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 007679d8: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 007679dc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007679de: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007679e0: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 007679e3: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 007679e6: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 007679e9: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 007679ec: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 007679ef: lea eax, [ebx + 0x38] */ r_eax = (u32)(r_ebx+0x38u);
    /* 007679f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007679f4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007679f5: call 0x7b4c58 */ r_esp -= 4; W32(r_esp, 0x7679fau); f_007b4c58();
    /* 007679fa: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 007679fd: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 00767a00: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 00767a03: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00767a06: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 00767a09: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 00767a0c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00767a0e: je 0x767a21 */ if (fZ) goto L_00767a21;
L_00767a10:; BB(0x00767a10);
    /* 00767a10: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00767a12: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 00767a15: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00767a18: mov dword ptr [ebx + 0x60], edx */ W32((u32)(r_ebx+0x60u), r_edx);
    /* 00767a1b: mov esi, dword ptr [esi + 8] */ r_esi = R32((u32)(r_esi+0x8u));
    /* 00767a1e: mov dword ptr [ebx + 0x64], esi */ W32((u32)(r_ebx+0x64u), r_esi);
L_00767a21:; BB(0x00767a21);
    /* 00767a21: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00767a22: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00767a23: ret 8 */ FN_RET(0x007679d0); r_esp += 12; return;
}

void f_00767a28(void) /* sub_767A28 */
{
    FN_ENTER(0x00767a28);
    /* 00767a28: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00767a2c: mov edx, dword ptr [ecx + 0x3d0] */ r_edx = R32((u32)(r_ecx+0x3d0u));
    /* 00767a32: mov eax, dword ptr [edx + eax*4 + 0x18] */ r_eax = R32((u32)(r_edx+r_eax*4+0x18u));
    /* 00767a36: ret 4 */ FN_RET(0x00767a28); r_esp += 8; return;
}

void f_00767a3c(void) /* sub_767A3C */
{
    FN_ENTER(0x00767a3c);
    /* 00767a3c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00767a3d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00767a3e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00767a3f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00767a40: mov edi, ecx */ r_edi = r_ecx;
    /* 00767a42: movsx esi, word ptr [esp + 0x14] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esp+0x14u));
    /* 00767a47: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00767a49: jl 0x767b2b */ if ((fS!=fO)) goto L_00767b2b;
L_00767a4f:; BB(0x00767a4f);
    /* 00767a4f: cmp esi, 0x1b */ {  u32 a = r_esi; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00767a52: jg 0x767b2b */ if ((!fZ&&fS==fO)) goto L_00767b2b;
L_00767a58:; BB(0x00767a58);
    /* 00767a58: mov eax, dword ptr [edi + 0xf74] */ r_eax = R32((u32)(r_edi+0xf74u));
    /* 00767a5e: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00767a60: je 0x767a69 */ if (fZ) goto L_00767a69;
L_00767a62:; BB(0x00767a62);
    /* 00767a62: mov eax, 1 */ r_eax = 0x1u;
    /* 00767a67: jmp 0x767a6b */ goto L_00767a6b;
L_00767a69:; BB(0x00767a69);
    /* 00767a69: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00767a6b:; BB(0x00767a6b);
    /* 00767a6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767a6d: je 0x767a78 */ if (fZ) goto L_00767a78;
L_00767a6f:; BB(0x00767a6f);
    /* 00767a6f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00767a71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00767a72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00767a73: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00767a74: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00767a75: ret 8 */ FN_RET(0x00767a3c); r_esp += 12; return;
L_00767a78:; BB(0x00767a78);
    /* 00767a78: mov ecx, dword ptr [0xa9b06c] */ r_ecx = R32((u32)(0xa9b06cu));
    /* 00767a7e: mov ebx, dword ptr [edi + 0xd8] */ r_ebx = R32((u32)(r_edi+0xd8u));
    /* 00767a84: lea ebp, [esi + esi] */ r_ebp = (u32)(r_esi+r_esi);
    /* 00767a87: push dword ptr [ebx + ebp*8 + 4] */ { u32 v = R32((u32)(r_ebx+r_ebp*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00767a8b: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x767a90u); f_005b8638();
    /* 00767a90: mov dword ptr [edi + 0xf4c], 0 */ W32((u32)(r_edi+0xf4cu), 0x0u);
    /* 00767a9a: mov dword ptr [edi + 0xf44], eax */ W32((u32)(r_edi+0xf44u), r_eax);
    /* 00767aa0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767aa2: mov dword ptr [edi + 0xf50], 0 */ W32((u32)(r_edi+0xf50u), 0x0u);
    /* 00767aac: mov dword ptr [edi + 0xf54], 0 */ W32((u32)(r_edi+0xf54u), 0x0u);
    /* 00767ab6: je 0x767ad6 */ if (fZ) goto L_00767ad6;
L_00767ab8:; BB(0x00767ab8);
    /* 00767ab8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00767aba: mov dword ptr [edi + 0xf48], edx */ W32((u32)(r_edi+0xf48u), r_edx);
    /* 00767ac0: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00767ac3: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00767ac6: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00767ac9: fadd dword ptr [edx*4 + 0x977088] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x977088u));
    /* 00767ad0: fstp dword ptr [edi + 0xf4c] */ W_F32((u32)(r_edi+0xf4cu), ST(0)); FPOP();
L_00767ad6:; BB(0x00767ad6);
    /* 00767ad6: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 00767ada: mov dword ptr [edi + 0xf48], eax */ W32((u32)(r_edi+0xf48u), r_eax);
    /* 00767ae0: mov edx, dword ptr [ebx + ebp*8 + 8] */ r_edx = R32((u32)(r_ebx+r_ebp*8+0x8u));
    /* 00767ae4: mov dword ptr [edi + 0xf50], edx */ W32((u32)(r_edi+0xf50u), r_edx);
    /* 00767aea: movsx ebx, word ptr [ebx + ebp*8] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebx+r_ebp*8));
    /* 00767aee: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767af1: jne 0x767aff */ if (!fZ) goto L_00767aff;
L_00767af3:; BB(0x00767af3);
    /* 00767af3: mov dword ptr [edi + 0xf54], 0 */ W32((u32)(r_edi+0xf54u), 0x0u);
    /* 00767afd: jmp 0x767b09 */ goto L_00767b09;
L_00767aff:; BB(0x00767aff);
    /* 00767aff: mov dword ptr [edi + 0xf54], 2 */ W32((u32)(r_edi+0xf54u), 0x2u);
L_00767b09:; BB(0x00767b09);
    /* 00767b09: mov edx, dword ptr [edi + 0xf74] */ r_edx = R32((u32)(r_edi+0xf74u));
    /* 00767b0f: mov word ptr [edi + 0xfa4], si */ W16((u32)(r_edi+0xfa4u), (u16)r_esi);
    /* 00767b16: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00767b19: mov dword ptr [edi + 0xf74], edx */ W32((u32)(r_edi+0xf74u), r_edx);
    /* 00767b1f: mov eax, 1 */ r_eax = 0x1u;
    /* 00767b24: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00767b25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00767b26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00767b27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00767b28: ret 8 */ FN_RET(0x00767a3c); r_esp += 12; return;
L_00767b2b:; BB(0x00767b2b);
    /* 00767b2b: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00767b2e: push 0x977830 */ { u32 v = 0x977830u; r_esp -= 4; W32(r_esp, v); }
    /* 00767b33: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x767b38u); f_0061cdb0();
    /* 00767b38: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00767b3a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00767b3d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00767b3e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00767b3f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00767b40: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00767b41: ret 8 */ FN_RET(0x00767a3c); r_esp += 12; return;
}

void f_00767a74(void)
{
    FN_ENTER(0x00767a74);
    /* 00767a74: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00767a75: ret 8 */ FN_RET(0x00767a74); r_esp += 12; return;
}

void f_00767b44(void) /* sub_767B44 */
{
    FN_ENTER(0x00767b44);
    /* 00767b44: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00767b45: mov eax, dword ptr [0xa9b098] */ r_eax = R32((u32)(0xa9b098u));
    /* 00767b4a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767b4c: je 0x767b50 */ if (fZ) goto L_00767b50;
L_00767b4e:; BB(0x00767b4e);
    /* 00767b4e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x767b50u); call_ind(t); }
L_00767b50:; BB(0x00767b50);
    /* 00767b50: mov eax, dword ptr [0xa9b08c] */ r_eax = R32((u32)(0xa9b08cu));
    /* 00767b55: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00767b57:; BB(0x00767b57);
    /* 00767b57: cmp eax, dword ptr [ebx*4 + 0x9f6960] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx*4+0x9f6960u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767b5e: je 0x767b72 */ if (fZ) goto L_00767b72;
L_00767b60:; BB(0x00767b60);
    /* 00767b60: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00767b63: cmp ebx, 0x2b */ {  u32 a = r_ebx; u32 b = 0x2bu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00767b66: jl 0x767b57 */ if ((fS!=fO)) goto L_00767b57;
L_00767b68:; BB(0x00767b68);
    /* 00767b68: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00767b6b: mov dword ptr [0xa9b08c], eax */ W32((u32)(0xa9b08cu), r_eax);
    /* 00767b70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00767b71: ret  */ FN_RET(0x00767b44); r_esp += 4; return;
L_00767b72:; BB(0x00767b72);
    /* 00767b72: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x767b77u); f_0082d7b0();
    /* 00767b77: call 0x4d455c */ r_esp -= 4; W32(r_esp, 0x767b7cu); f_004d455c();
    /* 00767b7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00767b7d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00767b7f: call 0x83a668 */ r_esp -= 4; W32(r_esp, 0x767b84u); f_0083a668();
    /* 00767b84: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00767b87: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00767b89: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00767b8b: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00767b8d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00767b8f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00767b91: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00767b93: add ebx, dword ptr [0xa9b09c] */ {  u32 a = r_ebx; u32 b = R32((u32)(0xa9b09cu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00767b99: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00767b9b: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x767ba0u); f_00831650();
    /* 00767ba0: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x767ba5u); f_0082da80();
    /* 00767ba5: mov eax, dword ptr [0xa9b08c] */ r_eax = R32((u32)(0xa9b08cu));
    /* 00767baa: jmp 0x767b68 */ goto L_00767b68;
}

void f_00767bac(void) /* sub_767BAC */
{
    FN_ENTER(0x00767bac);
    /* 00767bac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00767bad: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00767bb0: mov ecx, dword ptr [0xa9b08c] */ r_ecx = R32((u32)(0xa9b08cu));
    /* 00767bb6: cmp ecx, 0x16 */ {  u32 a = r_ecx; u32 b = 0x16u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00767bb9: jl 0x767bf2 */ if ((fS!=fO)) goto L_00767bf2;
L_00767bbb:; BB(0x00767bbb);
    /* 00767bbb: cmp ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00767bbe: jg 0x767bf2 */ if ((!fZ&&fS==fO)) goto L_00767bf2;
L_00767bc0:; BB(0x00767bc0);
    /* 00767bc0: mov edx, dword ptr [0xa9b094] */ r_edx = R32((u32)(0xa9b094u));
    /* 00767bc6: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00767bc9: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 00767bcb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00767bcd: mov eax, dword ptr [ebp + ecx*8 + 4] */ r_eax = R32((u32)(r_ebp+r_ecx*8+0x4u));
    /* 00767bd1: mov ebp, dword ptr [ebp + ecx*8 + 0xc] */ r_ebp = R32((u32)(r_ebp+r_ecx*8+0xcu));
    /* 00767bd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767bd7: je 0x767bf2 */ if (fZ) goto L_00767bf2;
L_00767bd9:; BB(0x00767bd9);
    /* 00767bd9: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00767bdc: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00767bdd: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00767be0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00767be1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00767be2: call 0x842cbc */ r_esp -= 4; W32(r_esp, 0x767be7u); f_00842cbc();
    /* 00767be7: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00767bea: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00767bed: call 0x8431a4 */ r_esp -= 4; W32(r_esp, 0x767bf2u); f_008431a4();
L_00767bf2:; BB(0x00767bf2);
    /* 00767bf2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00767bf5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00767bf6: ret  */ FN_RET(0x00767bac); r_esp += 4; return;
}

void f_00767bf8(void) /* sub_767BF8 */
{
    FN_ENTER(0x00767bf8);
    /* 00767bf8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00767bf9: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00767bfc: mov eax, dword ptr [0xa9b08c] */ r_eax = R32((u32)(0xa9b08cu));
    /* 00767c01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767c03: jne 0x767c48 */ if (!fZ) goto L_00767c48;
L_00767c05:; BB(0x00767c05);
    /* 00767c05: mov edx, dword ptr [0xa9b094] */ r_edx = R32((u32)(0xa9b094u));
    /* 00767c0b: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00767c0e: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00767c10: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00767c13: mov ebp, dword ptr [ecx + 0x38] */ r_ebp = R32((u32)(r_ecx+0x38u));
    /* 00767c16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767c18: je 0x767c48 */ if (fZ) goto L_00767c48;
L_00767c1a:; BB(0x00767c1a);
    /* 00767c1a: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00767c1d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00767c1e: push dword ptr [edx + 0xc] */ { u32 v = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00767c21: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00767c22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00767c23: call 0x842d04 */ r_esp -= 4; W32(r_esp, 0x767c28u); f_00842d04();
    /* 00767c28: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00767c2b: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00767c33: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00767c36: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x767c3bu); f_0082d838();
    /* 00767c3b: mov edx, dword ptr [0xa9b090] */ r_edx = R32((u32)(0xa9b090u));
    /* 00767c41: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00767c43: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x767c48u); f_0082d8bc();
L_00767c48:; BB(0x00767c48);
    /* 00767c48: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00767c4b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00767c4c: ret  */ FN_RET(0x00767bf8); r_esp += 4; return;
}

void f_00767c50(void) /* sub_767C50 */
{
    FN_ENTER(0x00767c50);
    /* 00767c50: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00767c53: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00767c57: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00767c5a: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00767c5d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00767c60: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00767c62: jl 0x767c69 */ if ((fS!=fO)) goto L_00767c69;
L_00767c64:; BB(0x00767c64);
    /* 00767c64: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00767c67: jle 0x767c6d */ if ((fZ||fS!=fO)) goto L_00767c6d;
L_00767c69:; BB(0x00767c69);
    /* 00767c69: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00767c6c: ret  */ FN_RET(0x00767c50); r_esp += 4; return;
L_00767c6d:; BB(0x00767c6d);
    /* 00767c6d: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00767c70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00767c71: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00767c74: call 0x767c98 */ r_esp -= 4; W32(r_esp, 0x767c79u); f_00767c98();
    /* 00767c79: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00767c7c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00767c80: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00767c84: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 00767c87: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00767c8b: mov dword ptr [eax + 0x60], ecx */ W32((u32)(r_eax+0x60u), r_ecx);
    /* 00767c8e: mov dword ptr [eax + 0x64], edx */ W32((u32)(r_eax+0x64u), r_edx);
    /* 00767c91: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00767c94: ret  */ FN_RET(0x00767c50); r_esp += 4; return;
}

void f_00767c98(void) /* sub_767C98 */
{
    FN_ENTER(0x00767c98);
    /* 00767c98: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00767c99: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00767c9a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00767c9c: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00767ca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00767ca1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00767ca3: call 0x768964 */ r_esp -= 4; W32(r_esp, 0x767ca8u); f_00768964();
    /* 00767ca8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00767caa: jne 0x767cb1 */ if (!fZ) goto L_00767cb1;
L_00767cac:; BB(0x00767cac);
    /* 00767cac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00767cad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00767cae: ret 8 */ FN_RET(0x00767c98); r_esp += 12; return;
L_00767cb1:; BB(0x00767cb1);
    /* 00767cb1: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00767cb5: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 00767cb9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00767cbb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00767cbd: mov edx, dword ptr [ebx + ecx*8 + 0x444] */ r_edx = R32((u32)(r_ebx+r_ecx*8+0x444u));
    /* 00767cc4: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00767cc6: mov ebp, dword ptr [ebx + ecx*8 + 0x448] */ r_ebp = R32((u32)(r_ebx+r_ecx*8+0x448u));
    /* 00767ccd: mov dword ptr [eax + 4], ebp */ W32((u32)(r_eax+0x4u), r_ebp);
    /* 00767cd0: mov ebx, dword ptr [ebx + ecx*8 + 0x44c] */ r_ebx = R32((u32)(r_ebx+r_ecx*8+0x44cu));
    /* 00767cd7: mov dword ptr [eax + 8], ebx */ W32((u32)(r_eax+0x8u), r_ebx);
    /* 00767cda: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00767cdb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00767cdc: ret 8 */ FN_RET(0x00767c98); r_esp += 12; return;
}

void f_00767ce0(void) /* sub_767CE0 */
{
    FN_ENTER(0x00767ce0);
    /* 00767ce0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00767ce1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00767ce2: mov edi, ecx */ r_edi = r_ecx;
    /* 00767ce4: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00767ce8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00767cea: jl 0x767d7a */ if ((fS!=fO)) goto L_00767d7a;
L_00767cf0:; BB(0x00767cf0);
    /* 00767cf0: cmp esi, 0x1e */ {  u32 a = r_esi; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00767cf3: jle 0x767d0c */ if ((fZ||fS!=fO)) goto L_00767d0c;
L_00767cf5:; BB(0x00767cf5);
    /* 00767cf5: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00767cf8: push 0x977884 */ { u32 v = 0x977884u; r_esp -= 4; W32(r_esp, v); }
    /* 00767cfd: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x767d02u); f_0061cdb0();
    /* 00767d02: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00767d05:; BB(0x00767d05);
    /* 00767d05: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00767d07: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00767d08: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00767d09: ret 4 */ FN_RET(0x00767ce0); r_esp += 8; return;
L_00767d0c:; BB(0x00767d0c);
    /* 00767d0c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00767d0e: mov ecx, edi */ r_ecx = r_edi;
    /* 00767d10: call 0x76bf88 */ r_esp -= 4; W32(r_esp, 0x767d15u); f_0076bf88();
    /* 00767d15: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00767d1c: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767d1e: je 0x767d37 */ if (fZ) goto L_00767d37;
L_00767d20:; BB(0x00767d20);
    /* 00767d20: mov eax, dword ptr [edi + 0xf74] */ r_eax = R32((u32)(r_edi+0xf74u));
    /* 00767d26: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00767d28: je 0x767d31 */ if (fZ) goto L_00767d31;
L_00767d2a:; BB(0x00767d2a);
    /* 00767d2a: mov eax, 1 */ r_eax = 0x1u;
    /* 00767d2f: jmp 0x767d33 */ goto L_00767d33;
L_00767d31:; BB(0x00767d31);
    /* 00767d31: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00767d33:; BB(0x00767d33);
    /* 00767d33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767d35: je 0x767d3e */ if (fZ) goto L_00767d3e;
L_00767d37:; BB(0x00767d37);
    /* 00767d37: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00767d39: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00767d3a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00767d3b: ret 4 */ FN_RET(0x00767ce0); r_esp += 8; return;
L_00767d3e:; BB(0x00767d3e);
    /* 00767d3e: mov ecx, edi */ r_ecx = r_edi;
    /* 00767d40: call 0x76af64 */ r_esp -= 4; W32(r_esp, 0x767d45u); f_0076af64();
    /* 00767d45: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00767d47: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00767d49: movsx eax, word ptr [edi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32eu));
    /* 00767d50: mov ecx, edi */ r_ecx = r_edi;
    /* 00767d52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00767d53: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x767d59u); call_ind(t); }
    /* 00767d59: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00767d5b: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00767d5d: movsx eax, si */ r_eax = (u32)(i32)(i16)(u16)r_esi;
    /* 00767d60: mov word ptr [edi + 0x32e], ax */ W16((u32)(r_edi+0x32eu), (u16)r_eax);
    /* 00767d67: mov ecx, edi */ r_ecx = r_edi;
    /* 00767d69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00767d6a: call dword ptr [edx + 0x164] */ { u32 t = R32((u32)(r_edx+0x164u)); r_esp -= 4; W32(r_esp, 0x767d70u); call_ind(t); }
    /* 00767d70: mov eax, 1 */ r_eax = 0x1u;
    /* 00767d75: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00767d76: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00767d77: ret 4 */ FN_RET(0x00767ce0); r_esp += 8; return;
L_00767d7a:; BB(0x00767d7a);
    /* 00767d7a: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767d7d: jne 0x767cf5 */ if (!fZ) goto L_00767cf5;
L_00767d83:; BB(0x00767d83);
    /* 00767d83: jmp 0x767d05 */ goto L_00767d05;
}

void f_00767d88(void) /* sub_767D88 */
{
    FN_ENTER(0x00767d88);
    /* 00767d88: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00767d89: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00767d8a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00767d8b: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00767d8e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00767d90: mov eax, dword ptr [0xa9b074] */ r_eax = R32((u32)(0xa9b074u));
    /* 00767d95: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767d98: je 0x767da3 */ if (fZ) goto L_00767da3;
L_00767d9a:; BB(0x00767d9a);
    /* 00767d9a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00767d9c: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00767d9f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00767da0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00767da1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00767da2: ret  */ FN_RET(0x00767d88); r_esp += 4; return;
L_00767da3:; BB(0x00767da3);
    /* 00767da3: movsx edi, word ptr [ebx + 0x32e] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0x32eu));
    /* 00767daa: cmp edi, 0x18 */ {  u32 a = r_edi; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767dad: jne 0x767ee7 */ if (!fZ) goto L_00767ee7;
L_00767db3:; BB(0x00767db3);
    /* 00767db3: mov ebp, dword ptr [ebx + 0xf74] */ r_ebp = R32((u32)(r_ebx+0xf74u));
    /* 00767db9: test ebp, 0x400 */ {  u32 a = r_ebp; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767dbf: je 0x767dc8 */ if (fZ) goto L_00767dc8;
L_00767dc1:; BB(0x00767dc1);
    /* 00767dc1: mov eax, 1 */ r_eax = 0x1u;
    /* 00767dc6: jmp 0x767dca */ goto L_00767dca;
L_00767dc8:; BB(0x00767dc8);
    /* 00767dc8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00767dca:; BB(0x00767dca);
    /* 00767dca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767dcc: je 0x767e45 */ if (fZ) goto L_00767e45;
L_00767dce:; BB(0x00767dce);
    /* 00767dce: mov dword ptr [esp + 8], 3 */ W32((u32)(r_esp+0x8u), 0x3u);
    /* 00767dd6: mov edi, 0xffff */ r_edi = 0xffffu;
    /* 00767ddb: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00767de0: mov byte ptr [esp + 0x30], 0xdc */ W8((u32)(r_esp+0x30u), 0xdcu);
    /* 00767de5: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00767de9: mov eax, 2 */ r_eax = 0x2u;
    /* 00767dee: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00767df2: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00767df6: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00767df9: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 00767dfd: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00767e01: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00767e03: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00767e07: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00767e0b: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00767e0f: mov word ptr [esp + 0x32], di */ W16((u32)(r_esp+0x32u), (u16)r_edi);
    /* 00767e14: mov byte ptr [esp + 0x31], al */ W8((u32)(r_esp+0x31u), (u8)r_eax);
    /* 00767e18: mov ecx, 0x1c */ r_ecx = 0x1cu;
    /* 00767e1d: mov word ptr [esp + 0x34], dx */ W16((u32)(r_esp+0x34u), (u16)r_edx);
    /* 00767e22: mov word ptr [esp + 0x36], cx */ W16((u32)(r_esp+0x36u), (u16)r_ecx);
    /* 00767e27: call 0x52cf54 */ r_esp -= 4; W32(r_esp, 0x767e2cu); f_0052cf54();
    /* 00767e2c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767e2e: je 0x767e39 */ if (fZ) goto L_00767e39;
L_00767e30:; BB(0x00767e30);
    /* 00767e30: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 00767e34: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x767e39u); f_008003e0();
L_00767e39:; BB(0x00767e39);
    /* 00767e39: mov eax, 1 */ r_eax = 0x1u;
    /* 00767e3e: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00767e41: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00767e42: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00767e43: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00767e44: ret  */ FN_RET(0x00767d88); r_esp += 4; return;
L_00767e45:; BB(0x00767e45);
    /* 00767e45: test ebp, 0x200 */ {  u32 a = r_ebp; u32 b = 0x200u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767e4b: je 0x767e54 */ if (fZ) goto L_00767e54;
L_00767e4d:; BB(0x00767e4d);
    /* 00767e4d: mov eax, 1 */ r_eax = 0x1u;
    /* 00767e52: jmp 0x767e56 */ goto L_00767e56;
L_00767e54:; BB(0x00767e54);
    /* 00767e54: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00767e56:; BB(0x00767e56);
    /* 00767e56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767e58: je 0x767eed */ if (fZ) goto L_00767eed;
L_00767e5e:; BB(0x00767e5e);
    /* 00767e5e: mov dword ptr [esp + 8], 3 */ W32((u32)(r_esp+0x8u), 0x3u);
    /* 00767e66: mov ebp, 0xffff */ r_ebp = 0xffffu;
    /* 00767e6b: mov edx, 1 */ r_edx = 0x1u;
    /* 00767e70: mov byte ptr [esp + 0x28], 0xdc */ W8((u32)(r_esp+0x28u), 0xdcu);
    /* 00767e75: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00767e79: mov eax, 2 */ r_eax = 0x2u;
    /* 00767e7e: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 00767e82: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00767e86: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00767e89: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00767e8d: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00767e91: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00767e93: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 00767e97: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 00767e9b: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 00767e9f: mov word ptr [esp + 0x2a], bp */ W16((u32)(r_esp+0x2au), (u16)r_ebp);
    /* 00767ea4: mov byte ptr [esp + 0x29], al */ W8((u32)(r_esp+0x29u), (u8)r_eax);
    /* 00767ea8: mov eax, 0x17 */ r_eax = 0x17u;
    /* 00767ead: mov word ptr [esp + 0x2c], di */ W16((u32)(r_esp+0x2cu), (u16)r_edi);
    /* 00767eb2: mov word ptr [esp + 0x2e], ax */ W16((u32)(r_esp+0x2eu), (u16)r_eax);
    /* 00767eb7: call 0x52cf54 */ r_esp -= 4; W32(r_esp, 0x767ebcu); f_0052cf54();
    /* 00767ebc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767ebe: je 0x767ec9 */ if (fZ) goto L_00767ec9;
L_00767ec0:; BB(0x00767ec0);
    /* 00767ec0: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 00767ec4: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x767ec9u); f_008003e0();
L_00767ec9:; BB(0x00767ec9);
    /* 00767ec9: mov edx, dword ptr [ebx + 0xf74] */ r_edx = R32((u32)(r_ebx+0xf74u));
    /* 00767ecf: and edx, 0xfffffdff */ {  u32 a = r_edx; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00767ed5: mov dword ptr [ebx + 0xf74], edx */ W32((u32)(r_ebx+0xf74u), r_edx);
    /* 00767edb: mov eax, 1 */ r_eax = 0x1u;
    /* 00767ee0: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00767ee3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00767ee4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00767ee5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00767ee6: ret  */ FN_RET(0x00767d88); r_esp += 4; return;
L_00767ee7:; BB(0x00767ee7);
    /* 00767ee7: mov ebp, dword ptr [ebx + 0xf74] */ r_ebp = R32((u32)(r_ebx+0xf74u));
L_00767eed:; BB(0x00767eed);
    /* 00767eed: test ebp, 0x100 */ {  u32 a = r_ebp; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767ef3: je 0x767efc */ if (fZ) goto L_00767efc;
L_00767ef5:; BB(0x00767ef5);
    /* 00767ef5: mov eax, 1 */ r_eax = 0x1u;
    /* 00767efa: jmp 0x767efe */ goto L_00767efe;
L_00767efc:; BB(0x00767efc);
    /* 00767efc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00767efe:; BB(0x00767efe);
    /* 00767efe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767f00: je 0x767d9a */ if (fZ) goto L_00767d9a;
L_00767f06:; BB(0x00767f06);
    /* 00767f06: mov dword ptr [esp + 8], 3 */ W32((u32)(r_esp+0x8u), 0x3u);
    /* 00767f0e: mov eax, 1 */ r_eax = 0x1u;
    /* 00767f13: mov edx, 2 */ r_edx = 0x2u;
    /* 00767f18: cmp edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00767f1b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00767f1f: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00767f23: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00767f27: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00767f2a: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00767f2e: mov edx, 0 */ r_edx = 0x0u;
    /* 00767f33: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 00767f37: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00767f3b: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00767f3f: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00767f43: mov edx, dword ptr [ebx + 0xf7c] */ r_edx = R32((u32)(r_ebx+0xf7cu));
    /* 00767f49: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00767f4c: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00767f4f: mov eax, dword ptr [esp + eax + 0x14] */ r_eax = R32((u32)(r_esp+r_eax+0x14u));
    /* 00767f53: jl 0x767f73 */ if ((fS!=fO)) goto L_00767f73;
L_00767f55:; BB(0x00767f55);
    /* 00767f55: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00767f58: jg 0x767f73 */ if ((!fZ&&fS==fO)) goto L_00767f73;
L_00767f5a:; BB(0x00767f5a);
    /* 00767f5a: add edx, dword ptr [esp + ecx*2] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+r_ecx*2)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00767f5d: mov ecx, dword ptr [0xa9b070] */ r_ecx = R32((u32)(0xa9b070u));
    /* 00767f63: mov eax, 1 */ r_eax = 0x1u;
    /* 00767f68: mov dword ptr [ebx + 0xf7c], edx */ W32((u32)(r_ebx+0xf7cu), r_edx);
    /* 00767f6e: jmp 0x767ff2 */ goto L_00767ff2;
L_00767f73:; BB(0x00767f73);
    /* 00767f73: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767f76: je 0x767fab */ if (fZ) goto L_00767fab;
L_00767f78:; BB(0x00767f78);
    /* 00767f78: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767f7b: je 0x767fab */ if (fZ) goto L_00767fab;
L_00767f7d:; BB(0x00767f7d);
    /* 00767f7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767f7f: jne 0x767f89 */ if (!fZ) goto L_00767f89;
L_00767f81:; BB(0x00767f81);
    /* 00767f81: mov ecx, dword ptr [0xa9b070] */ r_ecx = R32((u32)(0xa9b070u));
    /* 00767f87: jmp 0x767fe9 */ goto L_00767fe9;
L_00767f89:; BB(0x00767f89);
    /* 00767f89: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00767f8c: jl 0x767fa3 */ if ((fS!=fO)) goto L_00767fa3;
L_00767f8e:; BB(0x00767f8e);
    /* 00767f8e: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00767f91: jg 0x767f9b */ if ((!fZ&&fS==fO)) goto L_00767f9b;
L_00767f93:; BB(0x00767f93);
    /* 00767f93: mov ecx, dword ptr [0xa9b070] */ r_ecx = R32((u32)(0xa9b070u));
    /* 00767f99: jmp 0x767fe9 */ goto L_00767fe9;
L_00767f9b:; BB(0x00767f9b);
    /* 00767f9b: mov ecx, dword ptr [0xa9b070] */ r_ecx = R32((u32)(0xa9b070u));
    /* 00767fa1: jmp 0x767ff2 */ goto L_00767ff2;
L_00767fa3:; BB(0x00767fa3);
    /* 00767fa3: mov ecx, dword ptr [0xa9b070] */ r_ecx = R32((u32)(0xa9b070u));
    /* 00767fa9: jmp 0x767ff2 */ goto L_00767ff2;
L_00767fab:; BB(0x00767fab);
    /* 00767fab: mov edi, dword ptr [ebx + 0xf9c] */ r_edi = R32((u32)(r_ebx+0xf9cu));
    /* 00767fb1: cmp edi, 0x1518 */ {  u32 a = r_edi; u32 b = 0x1518u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00767fb7: jl 0x767fc1 */ if ((fS!=fO)) goto L_00767fc1;
L_00767fb9:; BB(0x00767fb9);
    /* 00767fb9: mov ecx, dword ptr [0xa9b070] */ r_ecx = R32((u32)(0xa9b070u));
    /* 00767fbf: jmp 0x767fe9 */ goto L_00767fe9;
L_00767fc1:; BB(0x00767fc1);
    /* 00767fc1: mov ecx, dword ptr [0xa9b070] */ r_ecx = R32((u32)(0xa9b070u));
    /* 00767fc7: test ecx, 0x800 */ {  u32 a = r_ecx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767fcd: je 0x767fd6 */ if (fZ) goto L_00767fd6;
L_00767fcf:; BB(0x00767fcf);
    /* 00767fcf: mov edi, 1 */ r_edi = 0x1u;
    /* 00767fd4: jmp 0x767fd8 */ goto L_00767fd8;
L_00767fd6:; BB(0x00767fd6);
    /* 00767fd6: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00767fd8:; BB(0x00767fd8);
    /* 00767fd8: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00767fda: jne 0x767fe9 */ if (!fZ) goto L_00767fe9;
L_00767fdc:; BB(0x00767fdc);
    /* 00767fdc: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00767fdf: mov dword ptr [ebx + 0xf7c], edx */ W32((u32)(r_ebx+0xf7cu), r_edx);
    /* 00767fe5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00767fe7: jmp 0x767ff2 */ goto L_00767ff2;
L_00767fe9:; BB(0x00767fe9);
    /* 00767fe9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00767fec: mov dword ptr [ebx + 0xf7c], edx */ W32((u32)(r_ebx+0xf7cu), r_edx);
L_00767ff2:; BB(0x00767ff2);
    /* 00767ff2: cmp edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00767ff5: jl 0x76800f */ if ((fS!=fO)) goto L_0076800f;
L_00767ff7:; BB(0x00767ff7);
    /* 00767ff7: mov dword ptr [ebx + 0xf7c], 0 */ W32((u32)(r_ebx+0xf7cu), 0x0u);
    /* 00768001: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00768003: or ebp, 0x200 */ {  u32 a = r_ebp; u32 b = 0x200u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00768009: mov dword ptr [ebx + 0xf74], ebp */ W32((u32)(r_ebx+0xf74u), r_ebp);
L_0076800f:; BB(0x0076800f);
    /* 0076800f: test ecx, 0x400 */ {  u32 a = r_ecx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768015: je 0x76801e */ if (fZ) goto L_0076801e;
L_00768017:; BB(0x00768017);
    /* 00768017: mov edi, 1 */ r_edi = 0x1u;
    /* 0076801c: jmp 0x768020 */ goto L_00768020;
L_0076801e:; BB(0x0076801e);
    /* 0076801e: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00768020:; BB(0x00768020);
    /* 00768020: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768022: je 0x768036 */ if (fZ) goto L_00768036;
L_00768024:; BB(0x00768024);
    /* 00768024: mov edi, 3 */ r_edi = 0x3u;
    /* 00768029: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0076802c: jg 0x768030 */ if ((!fZ&&fS==fO)) goto L_00768030;
L_0076802e:; BB(0x0076802e);
    /* 0076802e: mov edx, edi */ r_edx = r_edi;
L_00768030:; BB(0x00768030);
    /* 00768030: mov dword ptr [ebx + 0xf7c], edx */ W32((u32)(r_ebx+0xf7cu), r_edx);
L_00768036:; BB(0x00768036);
    /* 00768036: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768038: jne 0x768053 */ if (!fZ) goto L_00768053;
L_0076803a:; BB(0x0076803a);
    /* 0076803a: test ebp, 0x400 */ {  u32 a = r_ebp; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00768040: je 0x768049 */ if (fZ) goto L_00768049;
L_00768042:; BB(0x00768042);
    /* 00768042: mov eax, 1 */ r_eax = 0x1u;
    /* 00768047: jmp 0x76804b */ goto L_0076804b;
L_00768049:; BB(0x00768049);
    /* 00768049: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0076804b:; BB(0x0076804b);
    /* 0076804b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076804d: je 0x767d9a */ if (fZ) goto L_00767d9a;
L_00768053:; BB(0x00768053);
    /* 00768053: mov byte ptr [esp + 0x38], 0xdc */ W8((u32)(r_esp+0x38u), 0xdcu);
    /* 00768058: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0076805d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0076805f: mov byte ptr [esp + 0x39], 2 */ W8((u32)(r_esp+0x39u), 0x2u);
    /* 00768064: mov word ptr [esp + 0x3a], ax */ W16((u32)(r_esp+0x3au), (u16)r_eax);
    /* 00768069: mov ecx, 0x18 */ r_ecx = 0x18u;
    /* 0076806e: mov word ptr [esp + 0x3c], dx */ W16((u32)(r_esp+0x3cu), (u16)r_edx);
    /* 00768073: mov word ptr [esp + 0x3e], cx */ W16((u32)(r_esp+0x3eu), (u16)r_ecx);
    /* 00768078: call 0x52cf54 */ r_esp -= 4; W32(r_esp, 0x76807du); f_0052cf54();
    /* 0076807d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0076807f: je 0x76808a */ if (fZ) goto L_0076808a;
L_00768081:; BB(0x00768081);
    /* 00768081: lea ecx, [esp + 0x38] */ r_ecx = (u32)(r_esp+0x38u);
    /* 00768085: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x76808au); f_008003e0();
L_0076808a:; BB(0x0076808a);
    /* 0076808a: mov eax, 1 */ r_eax = 0x1u;
    /* 0076808f: add esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00768092: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00768093: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00768094: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00768095: ret  */ FN_RET(0x00767d88); r_esp += 4; return;
}

