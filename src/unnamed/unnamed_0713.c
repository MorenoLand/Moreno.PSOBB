#include "protos.h"

void f_00713004(void) /* sub_713004 */
{
    FN_ENTER(0x00713004);
    /* 00713004: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00713005: mov ebp, esp */ r_ebp = r_esp;
    /* 00713007: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00713009: push 0x8f04c4 */ { u32 v = 0x8f04c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0071300e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00713014: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00713015: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0071301c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071301f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00713022: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00713025: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00713028: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0071302b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0071302e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00713031: mov dword ptr [ecx], 0xb3f2d0 */ W32((u32)(r_ecx), 0xb3f2d0u);
    /* 00713037: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0071303e: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x713043u); f_00710c28();
    /* 00713043: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00713046: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0071304d: mov esp, ebp */ r_esp = r_ebp;
    /* 0071304f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00713050: ret  */ FN_RET(0x00713004); r_esp += 4; return;
}

void f_00713054(void) /* sub_713054 */
{
    FN_ENTER(0x00713054);
    /* 00713054: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00713055: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00713057: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00713059: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x71305eu); f_00710db4();
    /* 0071305e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00713060: call 0x710ee4 */ r_esp -= 4; W32(r_esp, 0x713065u); f_00710ee4();
    /* 00713065: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00713066: ret  */ FN_RET(0x00713054); r_esp += 4; return;
}

void f_00713068(void) /* sub_713068 */
{
    FN_ENTER(0x00713068);
    /* 00713068: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00713069: mov edi, ecx */ r_edi = r_ecx;
    /* 0071306b: mov ecx, edi */ r_ecx = r_edi;
    /* 0071306d: call 0x712644 */ r_esp -= 4; W32(r_esp, 0x713072u); f_00712644();
    /* 00713072: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00713075: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713077: je 0x713080 */ if (fZ) goto L_00713080;
L_00713079:; BB(0x00713079);
    /* 00713079: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071307a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0071307b: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x71307du); call_ind(t); }
    /* 0071307d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00713080:; BB(0x00713080);
    /* 00713080: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00713081: ret  */ FN_RET(0x00713068); r_esp += 4; return;
}

void f_00713084(void) /* sub_713084 */
{
    FN_ENTER(0x00713084);
    /* 00713084: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00713085: call 0x73ec70 */ r_esp -= 4; W32(r_esp, 0x71308au); f_0073ec70();
    /* 0071308a: mov edi, eax */ r_edi = r_eax;
    /* 0071308c: call 0x73ec70 */ r_esp -= 4; W32(r_esp, 0x713091u); f_0073ec70();
    /* 00713091: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00713095: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00713096: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00713097: call 0x7130a4 */ r_esp -= 4; W32(r_esp, 0x71309cu); f_007130a4();
    /* 0071309c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0071309f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007130a0: ret  */ FN_RET(0x00713084); r_esp += 4; return;
}

void f_007130a4(void) /* sub_7130A4 */
{
    FN_ENTER(0x007130a4);
    /* 007130a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007130a5: mov ebp, esp */ r_ebp = r_esp;
    /* 007130a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007130a9: push 0x8f04ec */ { u32 v = 0x8f04ecu; r_esp -= 4; W32(r_esp, v); }
    /* 007130ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007130b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007130b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007130bc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007130bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007130c2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007130c5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007130c8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007130cb: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 007130cd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007130d4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7130d9u); f_005caba4();
    /* 007130d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007130da: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007130dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007130df: je 0x713118 */ if (fZ) goto L_00713118;
L_007130e1:; BB(0x007130e1);
    /* 007130e1: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007130e8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007130ef: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 007130f2: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 007130f5: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007130f8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007130fb: call 0x71311c */ r_esp -= 4; W32(r_esp, 0x713100u); f_0071311c();
    /* 00713100: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00713103: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0071310a:; BB(0x0071310a);
    /* 0071310a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0071310d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00713114: mov esp, ebp */ r_esp = r_ebp;
    /* 00713116: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00713117: ret  */ FN_RET(0x007130a4); r_esp += 4; return;
L_00713118:; BB(0x00713118);
    /* 00713118: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071311a: jmp 0x71310a */ goto L_0071310a;
}

void f_0071311c(void) /* sub_71311C */
{
    FN_ENTER(0x0071311c);
    /* 0071311c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071311d: mov ebp, esp */ r_ebp = r_esp;
    /* 0071311f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00713121: push 0x8f0508 */ { u32 v = 0x8f0508u; r_esp -= 4; W32(r_esp, v); }
    /* 00713126: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0071312c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071312d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00713134: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00713137: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0071313a: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0071313d: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00713140: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00713143: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00713146: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00713149: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0071314c: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0071314f: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00713152: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00713155: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00713157: push 0x9f1824 */ { u32 v = 0x9f1824u; r_esp -= 4; W32(r_esp, v); }
    /* 0071315c: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x713161u); f_00710d30();
    /* 00713161: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00713168: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0071316b: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0071316e: mov dword ptr [ecx], 0xb3f2d0 */ W32((u32)(r_ecx), 0xb3f2d0u);
    /* 00713174: mov eax, dword ptr [0x9f1820] */ r_eax = R32((u32)(0x9f1820u));
    /* 00713179: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0071317c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0071317e: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 00713181: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 00713184: mov dword ptr [ecx + 0x3c], esi */ W32((u32)(r_ecx+0x3cu), r_esi);
    /* 00713187: call 0x710f64 */ r_esp -= 4; W32(r_esp, 0x71318cu); f_00710f64();
    /* 0071318c: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0071318f: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00713192: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00713195: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00713198: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 0071319b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0071319e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007131a5: mov esp, ebp */ r_esp = r_ebp;
    /* 007131a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007131a8: ret 0xc */ FN_RET(0x0071311c); r_esp += 16; return;
}

void f_007131ac(void) /* sub_7131AC */
{
    FN_ENTER(0x007131ac);
    /* 007131ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007131ad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007131af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007131b1: call 0x7131d0 */ r_esp -= 4; W32(r_esp, 0x7131b6u); f_007131d0();
    /* 007131b6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007131ba: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007131bc: jne 0x7131c2 */ if (!fZ) goto L_007131c2;
L_007131be:; BB(0x007131be);
    /* 007131be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007131bf: ret 4 */ FN_RET(0x007131ac); r_esp += 8; return;
L_007131c2:; BB(0x007131c2);
    /* 007131c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007131c3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7131c8u); f_005c2f74();
    /* 007131c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007131c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007131ca: ret 4 */ FN_RET(0x007131ac); r_esp += 8; return;
}

void f_007131d0(void) /* sub_7131D0 */
{
    FN_ENTER(0x007131d0);
    /* 007131d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007131d1: mov ebp, esp */ r_ebp = r_esp;
    /* 007131d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007131d5: push 0x8f0524 */ { u32 v = 0x8f0524u; r_esp -= 4; W32(r_esp, v); }
    /* 007131da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007131e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007131e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007131e8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007131eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007131ee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007131f1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007131f4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007131f7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007131fa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007131fd: mov dword ptr [ecx], 0xb3f330 */ W32((u32)(r_ecx), 0xb3f330u);
    /* 00713203: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0071320a: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x71320fu); f_00710c28();
    /* 0071320f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00713212: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00713219: mov esp, ebp */ r_esp = r_ebp;
    /* 0071321b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071321c: ret  */ FN_RET(0x007131d0); r_esp += 4; return;
}

void f_00713220(void) /* sub_713220 */
{
    FN_ENTER(0x00713220);
    /* 00713220: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00713221: mov ebp, esp */ r_ebp = r_esp;
    /* 00713223: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00713225: push 0x8f0540 */ { u32 v = 0x8f0540u; r_esp -= 4; W32(r_esp, v); }
    /* 0071322a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00713230: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00713231: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00713238: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071323b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0071323e: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 00713241: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00713244: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00713247: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0071324a: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0071324d: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 00713250: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00713253: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 00713256: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00713259: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0071325c: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 0071325e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x713263u); f_0073ec50();
    /* 00713263: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713264: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00713267: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00713268: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0071326a: push 0x9f1914 */ { u32 v = 0x9f1914u; r_esp -= 4; W32(r_esp, v); }
    /* 0071326f: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x713274u); f_00710d30();
    /* 00713274: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0071327b: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0071327e: mov dword ptr [edx], 0xb3f330 */ W32((u32)(r_edx), 0xb3f330u);
    /* 00713284: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00713286: mov eax, dword ptr [0x9f1910] */ r_eax = R32((u32)(0x9f1910u));
    /* 0071328b: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
L_0071328e:; BB(0x0071328e);
    /* 0071328e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00713290: push dword ptr [ebx*4 + 0x9f1840] */ { u32 v = R32((u32)(r_ebx*4+0x9f1840u)); r_esp -= 4; W32(r_esp, v); }
    /* 00713297: mov eax, dword ptr [edx + 0x28] */ r_eax = R32((u32)(r_edx+0x28u));
    /* 0071329a: mov esi, dword ptr [eax + ebx*8] */ r_esi = R32((u32)(r_eax+r_ebx*8));
    /* 0071329d: mov ecx, esi */ r_ecx = r_esi;
    /* 0071329f: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7132a4u); f_0072db60();
    /* 007132a4: push 0x49742400 */ { u32 v = 0x49742400u; r_esp -= 4; W32(r_esp, v); }
    /* 007132a9: mov ecx, esi */ r_ecx = r_esi;
    /* 007132ab: call 0x72ddf4 */ r_esp -= 4; W32(r_esp, 0x7132b0u); f_0072ddf4();
    /* 007132b0: fld dword ptr [0x96f84c] */ FPUSH(R_F32((u32)(0x96f84cu)));
    /* 007132b6: fsub dword ptr [esi + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x10u));
    /* 007132b9: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 007132bc: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007132bf: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007132c2: jge 0x7132c9 */ if ((fS==fO)) goto L_007132c9;
L_007132c4:; BB(0x007132c4);
    /* 007132c4: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 007132c7: jmp 0x71328e */ goto L_0071328e;
L_007132c9:; BB(0x007132c9);
    /* 007132c9: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 007132cc: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007132cf: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007132d1: mov ebx, dword ptr [eax + 0x28] */ r_ebx = R32((u32)(r_eax+0x28u));
    /* 007132d4: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 007132d7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007132d8: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7132ddu); f_0072db60();
    /* 007132dd: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 007132e0: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 007132e3: mov ebx, dword ptr [edx + 0xc] */ r_ebx = R32((u32)(r_edx+0xcu));
    /* 007132e6: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x7132ebu); f_00816d30();
    /* 007132eb: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007132ee: mov eax, 0x91a2b3c5 */ r_eax = 0x91a2b3c5u;
    /* 007132f3: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 007132f5: mov esi, ecx */ r_esi = r_ecx;
    /* 007132f7: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 007132fa: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007132fc: sar edx, 0xb */ { u32 c = (11u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 007132ff: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00713301: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00713304: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00713306: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00713308: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 0071330a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0071330c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0071330e: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00713310: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00713312: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00713314: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00713316: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00713318: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0071331a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0071331c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0071331e: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00713320: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00713323: cmp edx, 0x63 */ {  u32 a = r_edx; u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00713326: jle 0x713335 */ if ((fZ||fS!=fO)) goto L_00713335;
L_00713328:; BB(0x00713328);
    /* 00713328: push 0x96f8a0 */ { u32 v = 0x96f8a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0071332d: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x713332u); f_00816cb8();
    /* 00713332: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713333: jmp 0x713392 */ goto L_00713392;
L_00713335:; BB(0x00713335);
    /* 00713335: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00713337: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00713338: call 0x816684 */ r_esp -= 4; W32(r_esp, 0x71333du); f_00816684();
    /* 0071333d: push 0x96f8b4 */ { u32 v = 0x96f8b4u; r_esp -= 4; W32(r_esp, v); }
    /* 00713342: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x713347u); f_00816cb8();
    /* 00713347: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0071334a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0071334c: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 00713351: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00713353: mov esi, ecx */ r_esi = r_ecx;
    /* 00713355: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00713358: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0071335a: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0071335d: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0071335f: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00713362: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00713364: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00713365: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 00713368: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0071336a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0071336c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0071336e: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00713370: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00713372: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00713375: call 0x816684 */ r_esp -= 4; W32(r_esp, 0x71337au); f_00816684();
    /* 0071337a: push 0x96f8b4 */ { u32 v = 0x96f8b4u; r_esp -= 4; W32(r_esp, v); }
    /* 0071337f: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x713384u); f_00816cb8();
    /* 00713384: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00713387: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00713389: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071338a: call 0x816684 */ r_esp -= 4; W32(r_esp, 0x71338fu); f_00816684();
    /* 0071338f: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00713392:; BB(0x00713392);
    /* 00713392: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00713394: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00713399: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0071339b: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7133a0u); f_0072db60();
    /* 007133a0: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 007133a3: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007133a6: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 007133a9: mov esi, dword ptr [edx + 0x14] */ r_esi = R32((u32)(r_edx+0x14u));
    /* 007133ac: mov dword ptr [esi + 0x20], ebx */ W32((u32)(r_esi+0x20u), r_ebx);
    /* 007133af: mov ecx, esi */ r_ecx = r_esi;
    /* 007133b1: call 0x72cdd0 */ r_esp -= 4; W32(r_esp, 0x7133b6u); f_0072cdd0();
    /* 007133b6: fld dword ptr [0x96f84c] */ FPUSH(R_F32((u32)(0x96f84cu)));
    /* 007133bc: fadd dword ptr [esi + 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x10u));
    /* 007133bf: mov eax, dword ptr [0xa48a3c] */ r_eax = R32((u32)(0xa48a3cu));
    /* 007133c4: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 007133c7: fstp dword ptr [esi + 8] */ W_F32((u32)(r_esi+0x8u), ST(0)); FPOP();
    /* 007133ca: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007133cd: je 0x7133f8 */ if (fZ) goto L_007133f8;
L_007133cf:; BB(0x007133cf);
    /* 007133cf: mov dword ptr [edx + 0x60], 0x3f800000 */ W32((u32)(r_edx+0x60u), 0x3f800000u);
    /* 007133d6: mov dword ptr [edx + 0x64], 0x3f800000 */ W32((u32)(r_edx+0x64u), 0x3f800000u);
L_007133dd:; BB(0x007133dd);
    /* 007133dd: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007133e0: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007133e3: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007133e6: mov eax, edx */ r_eax = r_edx;
    /* 007133e8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007133eb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007133f2: mov esp, ebp */ r_esp = r_ebp;
    /* 007133f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007133f5: ret 0xc */ FN_RET(0x00713220); r_esp += 16; return;
L_007133f8:; BB(0x007133f8);
    /* 007133f8: mov dword ptr [edx + 0x60], 0x3f2e147b */ W32((u32)(r_edx+0x60u), 0x3f2e147bu);
    /* 007133ff: mov dword ptr [edx + 0x64], 0x3f2e147b */ W32((u32)(r_edx+0x64u), 0x3f2e147bu);
    /* 00713406: jmp 0x7133dd */ goto L_007133dd;
}

void f_00713408(void) /* sub_713408 */
{
    FN_ENTER(0x00713408);
    /* 00713408: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00713409: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071340a: mov esi, ecx */ r_esi = r_ecx;
    /* 0071340c: lea eax, [esi + 0x60] */ r_eax = (u32)(r_esi+0x60u);
    /* 0071340f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00713410: mov ecx, esi */ r_ecx = r_esi;
    /* 00713412: call 0x712658 */ r_esp -= 4; W32(r_esp, 0x713417u); f_00712658();
    /* 00713417: mov ebp, eax */ r_ebp = r_eax;
    /* 00713419: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0071341a: mov ecx, esi */ r_ecx = r_esi;
    /* 0071341c: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x713421u); f_00710f80();
    /* 00713421: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00713422: lea edx, [esi + 0x24] */ r_edx = (u32)(r_esi+0x24u);
    /* 00713425: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00713426: mov ecx, esi */ r_ecx = r_esi;
    /* 00713428: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x71342du); f_0072a648();
    /* 0071342d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071342e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071342f: ret  */ FN_RET(0x00713408); r_esp += 4; return;
}

void f_00713430(void) /* sub_713430 */
{
    FN_ENTER(0x00713430);
    /* 00713430: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00713431: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00713433: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00713435: call 0x713454 */ r_esp -= 4; W32(r_esp, 0x71343au); f_00713454();
    /* 0071343a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0071343e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713440: jne 0x713446 */ if (!fZ) goto L_00713446;
L_00713442:; BB(0x00713442);
    /* 00713442: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00713443: ret 4 */ FN_RET(0x00713430); r_esp += 8; return;
L_00713446:; BB(0x00713446);
    /* 00713446: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00713447: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x71344cu); f_005c2f74();
    /* 0071344c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071344d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071344e: ret 4 */ FN_RET(0x00713430); r_esp += 8; return;
}

void f_00713454(void) /* sub_713454 */
{
    FN_ENTER(0x00713454);
    /* 00713454: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00713455: mov ebp, esp */ r_ebp = r_esp;
    /* 00713457: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00713459: push 0x8f055c */ { u32 v = 0x8f055cu; r_esp -= 4; W32(r_esp, v); }
    /* 0071345e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00713464: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00713465: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0071346c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071346f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00713472: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00713475: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00713478: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0071347b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0071347e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00713485: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00713488: mov dword ptr [eax], 0xb3f3c8 */ W32((u32)(r_eax), 0xb3f3c8u);
    /* 0071348e: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00713494: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x713499u); f_0068d5a8();
    /* 00713499: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071349a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071349c: je 0x71353a */ if (fZ) goto L_0071353a;
L_007134a2:; BB(0x007134a2);
    /* 007134a2: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007134a5: movzx edx, word ptr [ebx + 0x1e] */ r_edx = (u32)R16((u32)(r_ebx+0x1eu));
    /* 007134a9: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007134ac: jne 0x7134c9 */ if (!fZ) goto L_007134c9;
L_007134ae:; BB(0x007134ae);
    /* 007134ae: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007134b1: je 0x7134c9 */ if (fZ) goto L_007134c9;
L_007134b3:; BB(0x007134b3);
    /* 007134b3: mov ecx, eax */ r_ecx = r_eax;
    /* 007134b5: call 0x693728 */ r_esp -= 4; W32(r_esp, 0x7134bau); f_00693728();
    /* 007134ba: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007134c0: call 0x718048 */ r_esp -= 4; W32(r_esp, 0x7134c5u); f_00718048();
    /* 007134c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007134c6: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
L_007134c9:; BB(0x007134c9);
    /* 007134c9: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 007134cc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007134ce: je 0x7134e7 */ if (fZ) goto L_007134e7;
L_007134d0:; BB(0x007134d0);
    /* 007134d0: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007134d3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007134d7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007134dc: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007134e0: mov dword ptr [ebx + 0x28], 0 */ W32((u32)(r_ebx+0x28u), 0x0u);
L_007134e7:; BB(0x007134e7);
    /* 007134e7: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 007134ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007134ec: je 0x713505 */ if (fZ) goto L_00713505;
L_007134ee:; BB(0x007134ee);
    /* 007134ee: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007134f1: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007134f5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007134fa: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007134fe: mov dword ptr [ebx + 0x2c], 0 */ W32((u32)(r_ebx+0x2cu), 0x0u);
L_00713505:; BB(0x00713505);
    /* 00713505: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 00713508: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071350a: je 0x71351b */ if (fZ) goto L_0071351b;
L_0071350c:; BB(0x0071350c);
    /* 0071350c: call 0x730e34 */ r_esp -= 4; W32(r_esp, 0x713511u); f_00730e34();
    /* 00713511: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00713514: mov dword ptr [ebx + 0x20], 0 */ W32((u32)(r_ebx+0x20u), 0x0u);
L_0071351b:; BB(0x0071351b);
    /* 0071351b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00713522: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00713524: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x713529u); f_008171e8();
    /* 00713529: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0071352c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0071352f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00713536: mov esp, ebp */ r_esp = r_ebp;
    /* 00713538: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00713539: ret  */ FN_RET(0x00713454); r_esp += 4; return;
L_0071353a:; BB(0x0071353a);
    /* 0071353a: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0071353d: jmp 0x7134c9 */ goto L_007134c9;
}

void f_00713540(void) /* sub_713540 */
{
    FN_ENTER(0x00713540);
    /* 00713540: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00713541: mov ebp, esp */ r_ebp = r_esp;
    /* 00713543: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00713545: push 0x8f0592 */ { u32 v = 0x8f0592u; r_esp -= 4; W32(r_esp, v); }
    /* 0071354a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00713550: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00713551: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00713558: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0071355b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0071355e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00713561: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00713564: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00713567: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0071356a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071356d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00713570: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00713573: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x713578u); f_008193cc();
    /* 00713578: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0071357f: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00713582: mov dword ptr [edx], 0xb3f3c8 */ W32((u32)(r_edx), 0xb3f3c8u);
    /* 00713588: mov eax, dword ptr [0x9f1940] */ r_eax = R32((u32)(0x9f1940u));
    /* 0071358d: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00713590: call 0x713640 */ r_esp -= 4; W32(r_esp, 0x713595u); f_00713640();
    /* 00713595: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00713598: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071359a: je 0x7135a2 */ if (fZ) goto L_007135a2;
L_0071359c:; BB(0x0071359c);
    /* 0071359c: mov byte ptr [edx + 0x1c], 1 */ W8((u32)(r_edx+0x1cu), 0x1u);
    /* 007135a0: jmp 0x7135a6 */ goto L_007135a6;
L_007135a2:; BB(0x007135a2);
    /* 007135a2: mov byte ptr [edx + 0x1c], 0 */ W8((u32)(r_edx+0x1cu), 0x0u);
L_007135a6:; BB(0x007135a6);
    /* 007135a6: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 007135ad: push 0x624 */ { u32 v = 0x624u; r_esp -= 4; W32(r_esp, v); }
    /* 007135b2: mov eax, 2 */ r_eax = 0x2u;
    /* 007135b7: mov word ptr [edx + 0x1e], ax */ W16((u32)(r_edx+0x1eu), (u16)r_eax);
    /* 007135bb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7135c0u); f_005caba4();
    /* 007135c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007135c1: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 007135c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007135c6: je 0x71363a */ if (fZ) goto L_0071363a;
L_007135c8:; BB(0x007135c8);
    /* 007135c8: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 007135cf: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007135d6: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007135d9: call 0x72ebfc */ r_esp -= 4; W32(r_esp, 0x7135deu); f_0072ebfc();
    /* 007135de: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007135e1: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_007135e8:; BB(0x007135e8);
    /* 007135e8: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 007135eb: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 007135ee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007135f5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007135f7: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 007135fc: call 0x731300 */ r_esp -= 4; W32(r_esp, 0x713601u); f_00731300();
    /* 00713601: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00713604: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 00713606: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00713609: call 0x7312f0 */ r_esp -= 4; W32(r_esp, 0x71360eu); f_007312f0();
    /* 0071360e: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00713611: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00713614: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00713616: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 00713619: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 0071361c: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 0071361f: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00713622: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x713627u); f_007138e0();
    /* 00713627: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0071362a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0071362d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00713634: mov esp, ebp */ r_esp = r_ebp;
    /* 00713636: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00713637: ret 8 */ FN_RET(0x00713540); r_esp += 12; return;
L_0071363a:; BB(0x0071363a);
    /* 0071363a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0071363c: jmp 0x7135e8 */ goto L_007135e8;
}

void f_00713640(void) /* sub_713640 */
{
    FN_ENTER(0x00713640);
    /* 00713640: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x713645u); f_006dc358();
    /* 00713645: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713647: jne 0x71364c */ if (!fZ) goto L_0071364c;
L_00713649:; BB(0x00713649);
    /* 00713649: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071364b: ret  */ FN_RET(0x00713640); r_esp += 4; return;
L_0071364c:; BB(0x0071364c);
    /* 0071364c: mov eax, 1 */ r_eax = 0x1u;
    /* 00713651: ret  */ FN_RET(0x00713640); r_esp += 4; return;
}

void f_00713654(void) /* sub_713654 */
{
    FN_ENTER(0x00713654);
    /* 00713654: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00713655: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00713657: movzx eax, word ptr [ebp + 0x1e] */ r_eax = (u32)R16((u32)(r_ebp+0x1eu));
    /* 0071365b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071365d: je 0x713661 */ if (fZ) goto L_00713661;
L_0071365f:; BB(0x0071365f);
    /* 0071365f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00713660: ret  */ FN_RET(0x00713654); r_esp += 4; return;
L_00713661:; BB(0x00713661);
    /* 00713661: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713663: je 0x713667 */ if (fZ) goto L_00713667;
L_00713665:; BB(0x00713665);
    /* 00713665: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00713666: ret  */ FN_RET(0x00713654); r_esp += 4; return;
L_00713667:; BB(0x00713667);
    /* 00713667: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713669: je 0x71366d */ if (fZ) goto L_0071366d;
L_0071366b:; BB(0x0071366b);
    /* 0071366b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071366c: ret  */ FN_RET(0x00713654); r_esp += 4; return;
L_0071366d:; BB(0x0071366d);
    /* 0071366d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071366f: call 0x7136a8 */ r_esp -= 4; W32(r_esp, 0x713674u); f_007136a8();
    /* 00713674: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00713676: call 0x713ab0 */ r_esp -= 4; W32(r_esp, 0x71367bu); f_00713ab0();
    /* 0071367b: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 0071367e: call 0x72fe6c */ r_esp -= 4; W32(r_esp, 0x713683u); f_0072fe6c();
    /* 00713683: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713685: je 0x713696 */ if (fZ) goto L_00713696;
L_00713687:; BB(0x00713687);
    /* 00713687: movzx eax, word ptr [ebp + 0x1e] */ r_eax = (u32)R16((u32)(r_ebp+0x1eu));
    /* 0071368b: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713690: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 00713694: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00713695: ret  */ FN_RET(0x00713654); r_esp += 4; return;
L_00713696:; BB(0x00713696);
    /* 00713696: movzx eax, word ptr [ebp + 0x1e] */ r_eax = (u32)R16((u32)(r_ebp+0x1eu));
    /* 0071369a: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071369f: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 007136a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007136a4: ret  */ FN_RET(0x00713654); r_esp += 4; return;
}

void f_007136a8(void) /* sub_7136A8 */
{
    FN_ENTER(0x007136a8);
    /* 007136a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007136a9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007136aa: mov edi, ecx */ r_edi = r_ecx;
    /* 007136ac: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007136b2: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x7136b7u); f_0068d5a8();
    /* 007136b7: mov esi, eax */ r_esi = r_eax;
    /* 007136b9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007136bc: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007136be: je 0x71382d */ if (fZ) goto L_0071382d;
L_007136c4:; BB(0x007136c4);
    /* 007136c4: movzx edx, word ptr [edi + 0x1e] */ r_edx = (u32)R16((u32)(r_edi+0x1eu));
    /* 007136c8: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007136cb: je 0x713755 */ if (fZ) goto L_00713755;
L_007136d1:; BB(0x007136d1);
    /* 007136d1: mov ecx, esi */ r_ecx = r_esi;
    /* 007136d3: call 0x68ce14 */ r_esp -= 4; W32(r_esp, 0x7136d8u); f_0068ce14();
    /* 007136d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007136da: je 0x71379c */ if (fZ) goto L_0071379c;
L_007136e0:; BB(0x007136e0);
    /* 007136e0: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x7136e5u); f_00694c6c();
    /* 007136e5: push dword ptr [0xa0f680] */ { u32 v = R32((u32)(0xa0f680u)); r_esp -= 4; W32(r_esp, v); }
    /* 007136eb: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 007136ee: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007136f0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007136f2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007136f4: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 007136fb: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x713700u); f_007c1160();
    /* 00713700: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713702: jne 0x71371a */ if (!fZ) goto L_0071371a;
L_00713704:; BB(0x00713704);
    /* 00713704: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x713709u); f_00791b48();
    /* 00713709: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0071370b: mov ecx, eax */ r_ecx = r_eax;
    /* 0071370d: call 0x78fdfc */ r_esp -= 4; W32(r_esp, 0x713712u); f_0078fdfc();
    /* 00713712: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713714: je 0x71379c */ if (fZ) goto L_0071379c;
L_0071371a:; BB(0x0071371a);
    /* 0071371a: movzx edx, word ptr [edi + 0x1e] */ r_edx = (u32)R16((u32)(r_edi+0x1eu));
    /* 0071371e: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00713724: mov word ptr [edi + 0x1e], dx */ W16((u32)(r_edi+0x1eu), (u16)r_edx);
    /* 00713728: mov ecx, edi */ r_ecx = r_edi;
    /* 0071372a: call 0x7138a8 */ r_esp -= 4; W32(r_esp, 0x71372fu); f_007138a8();
    /* 0071372f: mov ecx, edi */ r_ecx = r_edi;
    /* 00713731: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x713736u); f_007138e0();
    /* 00713736: movzx edx, word ptr [edi + 0x1e] */ r_edx = (u32)R16((u32)(r_edi+0x1eu));
    /* 0071373a: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071373d: je 0x713752 */ if (fZ) goto L_00713752;
L_0071373f:; BB(0x0071373f);
    /* 0071373f: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00713745: call 0x718078 */ r_esp -= 4; W32(r_esp, 0x71374au); f_00718078();
    /* 0071374a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071374b: mov ecx, esi */ r_ecx = r_esi;
    /* 0071374d: call 0x6936ec */ r_esp -= 4; W32(r_esp, 0x713752u); f_006936ec();
L_00713752:; BB(0x00713752);
    /* 00713752: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00713753: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00713754: ret  */ FN_RET(0x007136a8); r_esp += 4; return;
L_00713755:; BB(0x00713755);
    /* 00713755: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 00713758: call 0x730f5c */ r_esp -= 4; W32(r_esp, 0x71375du); f_00730f5c();
    /* 0071375d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071375f: je 0x71379c */ if (fZ) goto L_0071379c;
L_00713761:; BB(0x00713761);
    /* 00713761: mov ecx, edi */ r_ecx = r_edi;
    /* 00713763: call 0x7138a8 */ r_esp -= 4; W32(r_esp, 0x713768u); f_007138a8();
    /* 00713768: movzx edx, word ptr [edi + 0x1e] */ r_edx = (u32)R16((u32)(r_edi+0x1eu));
    /* 0071376c: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00713772: mov word ptr [edi + 0x1e], dx */ W16((u32)(r_edi+0x1eu), (u16)r_edx);
    /* 00713776: mov ecx, edi */ r_ecx = r_edi;
    /* 00713778: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x71377du); f_007138e0();
    /* 0071377d: movzx edx, word ptr [edi + 0x1e] */ r_edx = (u32)R16((u32)(r_edi+0x1eu));
    /* 00713781: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713784: je 0x713799 */ if (fZ) goto L_00713799;
L_00713786:; BB(0x00713786);
    /* 00713786: mov ecx, esi */ r_ecx = r_esi;
    /* 00713788: call 0x693728 */ r_esp -= 4; W32(r_esp, 0x71378du); f_00693728();
    /* 0071378d: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00713793: call 0x718048 */ r_esp -= 4; W32(r_esp, 0x713798u); f_00718048();
    /* 00713798: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00713799:; BB(0x00713799);
    /* 00713799: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071379a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071379b: ret  */ FN_RET(0x007136a8); r_esp += 4; return;
L_0071379c:; BB(0x0071379c);
    /* 0071379c: movzx edx, word ptr [edi + 0x1e] */ r_edx = (u32)R16((u32)(r_edi+0x1eu));
    /* 007137a0: test edx, 0x240 */ {  u32 a = r_edx; u32 b = 0x240u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007137a6: je 0x713830 */ if (fZ) goto L_00713830;
L_007137ac:; BB(0x007137ac);
    /* 007137ac: mov ecx, esi */ r_ecx = r_esi;
    /* 007137ae: call 0x68ce14 */ r_esp -= 4; W32(r_esp, 0x7137b3u); f_0068ce14();
    /* 007137b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007137b5: je 0x713830 */ if (fZ) goto L_00713830;
L_007137b7:; BB(0x007137b7);
    /* 007137b7: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x7137bcu); f_00694c6c();
    /* 007137bc: push dword ptr [0xa0f680] */ { u32 v = R32((u32)(0xa0f680u)); r_esp -= 4; W32(r_esp, v); }
    /* 007137c2: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 007137c5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007137c7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007137c9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007137cb: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 007137d2: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7137d7u); f_007c1160();
    /* 007137d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007137d9: jne 0x7137ed */ if (!fZ) goto L_007137ed;
L_007137db:; BB(0x007137db);
    /* 007137db: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x7137e0u); f_00791b48();
    /* 007137e0: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007137e2: mov ecx, eax */ r_ecx = r_eax;
    /* 007137e4: call 0x78fdfc */ r_esp -= 4; W32(r_esp, 0x7137e9u); f_0078fdfc();
    /* 007137e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007137eb: je 0x713830 */ if (fZ) goto L_00713830;
L_007137ed:; BB(0x007137ed);
    /* 007137ed: mov ecx, edi */ r_ecx = r_edi;
    /* 007137ef: call 0x7138a8 */ r_esp -= 4; W32(r_esp, 0x7137f4u); f_007138a8();
    /* 007137f4: movzx edx, word ptr [edi + 0x1e] */ r_edx = (u32)R16((u32)(r_edi+0x1eu));
    /* 007137f8: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007137fe: mov word ptr [edi + 0x1e], dx */ W16((u32)(r_edi+0x1eu), (u16)r_edx);
    /* 00713802: mov ecx, edi */ r_ecx = r_edi;
    /* 00713804: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x713809u); f_007138e0();
    /* 00713809: movzx edx, word ptr [edi + 0x1e] */ r_edx = (u32)R16((u32)(r_edi+0x1eu));
    /* 0071380d: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00713810: je 0x713825 */ if (fZ) goto L_00713825;
L_00713812:; BB(0x00713812);
    /* 00713812: mov ecx, esi */ r_ecx = r_esi;
    /* 00713814: call 0x693728 */ r_esp -= 4; W32(r_esp, 0x713819u); f_00693728();
    /* 00713819: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071381f: call 0x718048 */ r_esp -= 4; W32(r_esp, 0x713824u); f_00718048();
    /* 00713824: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00713825:; BB(0x00713825);
    /* 00713825: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00713827: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x71382cu); f_00791748();
    /* 0071382c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0071382d:; BB(0x0071382d);
    /* 0071382d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0071382e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071382f: ret  */ FN_RET(0x007136a8); r_esp += 4; return;
L_00713830:; BB(0x00713830);
    /* 00713830: call 0x713640 */ r_esp -= 4; W32(r_esp, 0x713835u); f_00713640();
    /* 00713835: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713837: jne 0x7138a2 */ if (!fZ) goto L_007138a2;
L_00713839:; BB(0x00713839);
    /* 00713839: movzx eax, word ptr [edi + 0x1e] */ r_eax = (u32)R16((u32)(r_edi+0x1eu));
    /* 0071383d: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0071383f: je 0x713844 */ if (fZ) goto L_00713844;
L_00713841:; BB(0x00713841);
    /* 00713841: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00713842: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00713843: ret  */ FN_RET(0x007136a8); r_esp += 4; return;
L_00713844:; BB(0x00713844);
    /* 00713844: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x713849u); f_00694c6c();
    /* 00713849: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0071384f: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00713852: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00713854: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00713856: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00713858: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 0071385f: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x713864u); f_007c1160();
    /* 00713864: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713866: jne 0x71386b */ if (!fZ) goto L_0071386b;
L_00713868:; BB(0x00713868);
    /* 00713868: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00713869: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0071386a: ret  */ FN_RET(0x007136a8); r_esp += 4; return;
L_0071386b:; BB(0x0071386b);
    /* 0071386b: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 0071386e: call 0x730f5c */ r_esp -= 4; W32(r_esp, 0x713873u); f_00730f5c();
    /* 00713873: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713875: je 0x71387a */ if (fZ) goto L_0071387a;
L_00713877:; BB(0x00713877);
    /* 00713877: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00713878: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00713879: ret  */ FN_RET(0x007136a8); r_esp += 4; return;
L_0071387a:; BB(0x0071387a);
    /* 0071387a: mov ecx, edi */ r_ecx = r_edi;
    /* 0071387c: call 0x7138a8 */ r_esp -= 4; W32(r_esp, 0x713881u); f_007138a8();
    /* 00713881: movsx edx, byte ptr [edi + 0x1c] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x1cu));
    /* 00713885: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00713888: movsx eax, dl */ r_eax = (u32)(i32)(i8)(u8)r_edx;
    /* 0071388b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0071388e: jl 0x713898 */ if ((fS!=fO)) goto L_00713898;
L_00713890:; BB(0x00713890);
    /* 00713890: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00713893: mov byte ptr [edi + 0x1c], al */ W8((u32)(r_edi+0x1cu), (u8)r_eax);
    /* 00713896: jmp 0x71389b */ goto L_0071389b;
L_00713898:; BB(0x00713898);
    /* 00713898: mov byte ptr [edi + 0x1c], dl */ W8((u32)(r_edi+0x1cu), (u8)r_edx);
L_0071389b:; BB(0x0071389b);
    /* 0071389b: mov ecx, edi */ r_ecx = r_edi;
    /* 0071389d: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x7138a2u); f_007138e0();
L_007138a2:; BB(0x007138a2);
    /* 007138a2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007138a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007138a4: ret  */ FN_RET(0x007136a8); r_esp += 4; return;
}

void f_007138a8(void) /* sub_7138A8 */
{
    FN_ENTER(0x007138a8);
    /* 007138a8: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 007138ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007138ad: je 0x7138c3 */ if (fZ) goto L_007138c3;
L_007138af:; BB(0x007138af);
    /* 007138af: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007138b3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007138b8: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007138bc: mov dword ptr [ecx + 0x28], 0 */ W32((u32)(r_ecx+0x28u), 0x0u);
L_007138c3:; BB(0x007138c3);
    /* 007138c3: mov edx, dword ptr [ecx + 0x2c] */ r_edx = R32((u32)(r_ecx+0x2cu));
    /* 007138c6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007138c8: je 0x7138de */ if (fZ) goto L_007138de;
L_007138ca:; BB(0x007138ca);
    /* 007138ca: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007138ce: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007138d3: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007138d7: mov dword ptr [ecx + 0x2c], 0 */ W32((u32)(r_ecx+0x2cu), 0x0u);
L_007138de:; BB(0x007138de);
    /* 007138de: ret  */ FN_RET(0x007138a8); r_esp += 4; return;
}

void f_007138e0(void) /* sub_7138E0 */
{
    FN_ENTER(0x007138e0);
    /* 007138e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007138e1: mov ebp, esp */ r_ebp = r_esp;
    /* 007138e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007138e5: push 0x8f05d2 */ { u32 v = 0x8f05d2u; r_esp -= 4; W32(r_esp, v); }
    /* 007138ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007138f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007138f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007138f8: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007138fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007138fe: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00713901: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00713904: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00713907: movzx eax, word ptr [ecx + 0x1e] */ r_eax = (u32)R16((u32)(r_ecx+0x1eu));
    /* 0071390b: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0071390e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00713910: jne 0x713a42 */ if (!fZ) goto L_00713a42;
L_00713916:; BB(0x00713916);
    /* 00713916: mov eax, ecx */ r_eax = r_ecx;
    /* 00713918: movsx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x1cu));
    /* 0071391c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071391e: jne 0x7139ac */ if (!fZ) goto L_007139ac;
L_00713924:; BB(0x00713924);
    /* 00713924: mov eax, ecx */ r_eax = r_ecx;
    /* 00713926: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00713929: call 0x72ee28 */ r_esp -= 4; W32(r_esp, 0x71392eu); f_0072ee28();
    /* 0071392e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00713931: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00713934: call 0x7312d0 */ r_esp -= 4; W32(r_esp, 0x713939u); f_007312d0();
    /* 00713939: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0071393c: push 0x108 */ { u32 v = 0x108u; r_esp -= 4; W32(r_esp, v); }
    /* 00713941: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00713944: mov dword ptr [edx], 2 */ W32((u32)(r_edx), 0x2u);
    /* 0071394a: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00713951: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x713956u); f_005caba4();
    /* 00713956: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713957: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0071395a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0071395c: je 0x713a37 */ if (fZ) goto L_00713a37;
L_00713962:; BB(0x00713962);
    /* 00713962: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00713969: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00713970: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00713973: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00713976: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00713979: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0071397c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0071397d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0071397e: call 0x701b9c */ r_esp -= 4; W32(r_esp, 0x713983u); f_00701b9c();
    /* 00713983: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00713986: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_0071398d:; BB(0x0071398d);
    /* 0071398d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00713990: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 00713993: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0071399a: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 0071399d: call 0x730e5c */ r_esp -= 4; W32(r_esp, 0x7139a2u); f_00730e5c();
    /* 007139a2: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 007139a4: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x7139a9u); f_00791748();
    /* 007139a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007139aa: jmp 0x713a29 */ goto L_00713a29;
L_007139ac:; BB(0x007139ac);
    /* 007139ac: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007139af: jne 0x713a29 */ if (!fZ) goto L_00713a29;
L_007139b1:; BB(0x007139b1);
    /* 007139b1: mov eax, ecx */ r_eax = r_ecx;
    /* 007139b3: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 007139b6: call 0x72ee28 */ r_esp -= 4; W32(r_esp, 0x7139bbu); f_0072ee28();
    /* 007139bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007139be: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 007139c1: call 0x7312d0 */ r_esp -= 4; W32(r_esp, 0x7139c6u); f_007312d0();
    /* 007139c6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007139c9: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 007139cb: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 007139ce: mov dword ptr [edx], 3 */ W32((u32)(r_edx), 0x3u);
    /* 007139d4: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 007139db: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7139e0u); f_005caba4();
    /* 007139e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007139e1: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 007139e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007139e6: je 0x713a3e */ if (fZ) goto L_00713a3e;
L_007139e8:; BB(0x007139e8);
    /* 007139e8: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 007139ef: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007139f6: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007139f9: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 007139fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007139fd: call 0x7148c0 */ r_esp -= 4; W32(r_esp, 0x713a02u); f_007148c0();
    /* 00713a02: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00713a05: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00713a0c:; BB(0x00713a0c);
    /* 00713a0c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00713a0f: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 00713a12: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00713a19: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00713a1c: call 0x730e5c */ r_esp -= 4; W32(r_esp, 0x713a21u); f_00730e5c();
    /* 00713a21: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00713a23: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x713a28u); f_00791748();
    /* 00713a28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00713a29:; BB(0x00713a29);
    /* 00713a29: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00713a2c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00713a33: mov esp, ebp */ r_esp = r_ebp;
    /* 00713a35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00713a36: ret  */ FN_RET(0x007138e0); r_esp += 4; return;
L_00713a37:; BB(0x00713a37);
    /* 00713a37: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00713a39: jmp 0x71398d */ goto L_0071398d;
L_00713a3e:; BB(0x00713a3e);
    /* 00713a3e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00713a40: jmp 0x713a0c */ goto L_00713a0c;
L_00713a42:; BB(0x00713a42);
    /* 00713a42: mov eax, ecx */ r_eax = r_ecx;
    /* 00713a44: push 0xc9 */ { u32 v = 0xc9u; r_esp -= 4; W32(r_esp, v); }
    /* 00713a49: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00713a4c: mov dword ptr [edx], 1 */ W32((u32)(r_edx), 0x1u);
    /* 00713a52: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x713a57u); f_0073ec50();
    /* 00713a57: mov ebx, eax */ r_ebx = r_eax;
    /* 00713a59: push 0xc9 */ { u32 v = 0xc9u; r_esp -= 4; W32(r_esp, v); }
    /* 00713a5e: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x713a63u); f_0073ec50();
    /* 00713a63: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00713a66: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00713a69: push dword ptr [ebx] */ { u32 v = R32((u32)(r_ebx)); r_esp -= 4; W32(r_esp, v); }
    /* 00713a6b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00713a6e: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00713a71: call 0x73128c */ r_esp -= 4; W32(r_esp, 0x713a76u); f_0073128c();
    /* 00713a76: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00713a79: movzx edx, word ptr [eax + 0x1e] */ r_edx = (u32)R16((u32)(r_eax+0x1eu));
    /* 00713a7d: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00713a80: je 0x713a8e */ if (fZ) goto L_00713a8e;
L_00713a82:; BB(0x00713a82);
    /* 00713a82: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00713a84: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00713a87: call 0x7312c4 */ r_esp -= 4; W32(r_esp, 0x713a8cu); f_007312c4();
    /* 00713a8c: jmp 0x713a96 */ goto L_00713a96;
L_00713a8e:; BB(0x00713a8e);
    /* 00713a8e: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00713a91: call 0x731270 */ r_esp -= 4; W32(r_esp, 0x713a96u); f_00731270();
L_00713a96:; BB(0x00713a96);
    /* 00713a96: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00713a98: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x713a9du); f_00791748();
    /* 00713a9d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713a9e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00713aa1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00713aa4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00713aab: mov esp, ebp */ r_esp = r_ebp;
    /* 00713aad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00713aae: ret  */ FN_RET(0x007138e0); r_esp += 4; return;
}

void f_00713ab0(void) /* sub_713AB0 */
{
    FN_ENTER(0x00713ab0);
    /* 00713ab0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00713ab1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00713ab2: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00713ab4: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00713aba: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x713abfu); f_0068d5a8();
    /* 00713abf: mov esi, eax */ r_esi = r_eax;
    /* 00713ac1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00713ac4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713ac6: je 0x713c50 */ if (fZ) goto L_00713c50;
L_00713acc:; BB(0x00713acc);
    /* 00713acc: movzx edx, word ptr [ebp + 0x1e] */ r_edx = (u32)R16((u32)(r_ebp+0x1eu));
    /* 00713ad0: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00713ad3: jne 0x713b8a */ if (!fZ) goto L_00713b8a;
L_00713ad9:; BB(0x00713ad9);
    /* 00713ad9: movsx edx, byte ptr [ebp + 0x1c] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0x1cu));
    /* 00713add: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713adf: jne 0x713b37 */ if (!fZ) goto L_00713b37;
L_00713ae1:; BB(0x00713ae1);
    /* 00713ae1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00713ae3: call 0x713cf4 */ r_esp -= 4; W32(r_esp, 0x713ae8u); f_00713cf4();
    /* 00713ae8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713aea: je 0x713b87 */ if (fZ) goto L_00713b87;
L_00713af0:; BB(0x00713af0);
    /* 00713af0: movzx edx, word ptr [ebp + 0x1e] */ r_edx = (u32)R16((u32)(r_ebp+0x1eu));
    /* 00713af4: test edx, 0x240 */ {  u32 a = r_edx; u32 b = 0x240u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713afa: je 0x713b87 */ if (fZ) goto L_00713b87;
L_00713b00:; BB(0x00713b00);
    /* 00713b00: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00713b03: je 0x713b18 */ if (fZ) goto L_00713b18;
L_00713b05:; BB(0x00713b05);
    /* 00713b05: mov ecx, esi */ r_ecx = r_esi;
    /* 00713b07: call 0x693728 */ r_esp -= 4; W32(r_esp, 0x713b0cu); f_00693728();
    /* 00713b0c: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00713b12: call 0x718048 */ r_esp -= 4; W32(r_esp, 0x713b17u); f_00718048();
    /* 00713b17: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00713b18:; BB(0x00713b18);
    /* 00713b18: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00713b1a: call 0x7138a8 */ r_esp -= 4; W32(r_esp, 0x713b1fu); f_007138a8();
    /* 00713b1f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00713b21: movzx eax, word ptr [ebp + 0x1e] */ r_eax = (u32)R16((u32)(r_ebp+0x1eu));
    /* 00713b25: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00713b2a: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 00713b2e: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x713b33u); f_00791748();
    /* 00713b33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713b34: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00713b35: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00713b36: ret  */ FN_RET(0x00713ab0); r_esp += 4; return;
L_00713b37:; BB(0x00713b37);
    /* 00713b37: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00713b3a: jne 0x713b87 */ if (!fZ) goto L_00713b87;
L_00713b3c:; BB(0x00713b3c);
    /* 00713b3c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00713b3e: call 0x713c54 */ r_esp -= 4; W32(r_esp, 0x713b43u); f_00713c54();
    /* 00713b43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713b45: je 0x713b87 */ if (fZ) goto L_00713b87;
L_00713b47:; BB(0x00713b47);
    /* 00713b47: movzx edx, word ptr [ebp + 0x1e] */ r_edx = (u32)R16((u32)(r_ebp+0x1eu));
    /* 00713b4b: test edx, 0x240 */ {  u32 a = r_edx; u32 b = 0x240u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713b51: je 0x713b87 */ if (fZ) goto L_00713b87;
L_00713b53:; BB(0x00713b53);
    /* 00713b53: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00713b56: je 0x713b6b */ if (fZ) goto L_00713b6b;
L_00713b58:; BB(0x00713b58);
    /* 00713b58: mov ecx, esi */ r_ecx = r_esi;
    /* 00713b5a: call 0x693728 */ r_esp -= 4; W32(r_esp, 0x713b5fu); f_00693728();
    /* 00713b5f: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00713b65: call 0x718048 */ r_esp -= 4; W32(r_esp, 0x713b6au); f_00718048();
    /* 00713b6a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00713b6b:; BB(0x00713b6b);
    /* 00713b6b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00713b6d: call 0x7138a8 */ r_esp -= 4; W32(r_esp, 0x713b72u); f_007138a8();
    /* 00713b72: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00713b74: movzx eax, word ptr [ebp + 0x1e] */ r_eax = (u32)R16((u32)(r_ebp+0x1eu));
    /* 00713b78: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00713b7d: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 00713b81: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x713b86u); f_00791748();
    /* 00713b86: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00713b87:; BB(0x00713b87);
    /* 00713b87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00713b88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00713b89: ret  */ FN_RET(0x00713ab0); r_esp += 4; return;
L_00713b8a:; BB(0x00713b8a);
    /* 00713b8a: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00713b90: call 0x718e88 */ r_esp -= 4; W32(r_esp, 0x713b95u); f_00718e88();
    /* 00713b95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713b96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713b98: je 0x713be8 */ if (fZ) goto L_00713be8;
L_00713b9a:; BB(0x00713b9a);
    /* 00713b9a: push 0xcb */ { u32 v = 0xcbu; r_esp -= 4; W32(r_esp, v); }
    /* 00713b9f: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x713ba4u); f_0073ec50();
    /* 00713ba4: mov esi, eax */ r_esi = r_eax;
    /* 00713ba6: push 0xcb */ { u32 v = 0xcbu; r_esp -= 4; W32(r_esp, v); }
    /* 00713bab: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x713bb0u); f_0073ec50();
    /* 00713bb0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00713bb3: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00713bb6: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 00713bb8: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00713bbb: call 0x73128c */ r_esp -= 4; W32(r_esp, 0x713bc0u); f_0073128c();
    /* 00713bc0: push 0xce */ { u32 v = 0xceu; r_esp -= 4; W32(r_esp, v); }
    /* 00713bc5: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x713bcau); f_0073ec50();
    /* 00713bca: mov esi, eax */ r_esi = r_eax;
    /* 00713bcc: push 0xce */ { u32 v = 0xceu; r_esp -= 4; W32(r_esp, v); }
    /* 00713bd1: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x713bd6u); f_0073ec50();
    /* 00713bd6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00713bd9: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00713bdc: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 00713bde: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00713be1: call 0x7312a0 */ r_esp -= 4; W32(r_esp, 0x713be6u); f_007312a0();
    /* 00713be6: jmp 0x713c34 */ goto L_00713c34;
L_00713be8:; BB(0x00713be8);
    /* 00713be8: push 0xc9 */ { u32 v = 0xc9u; r_esp -= 4; W32(r_esp, v); }
    /* 00713bed: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x713bf2u); f_0073ec50();
    /* 00713bf2: mov esi, eax */ r_esi = r_eax;
    /* 00713bf4: push 0xc9 */ { u32 v = 0xc9u; r_esp -= 4; W32(r_esp, v); }
    /* 00713bf9: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x713bfeu); f_0073ec50();
    /* 00713bfe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00713c01: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00713c04: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 00713c06: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00713c09: call 0x73128c */ r_esp -= 4; W32(r_esp, 0x713c0eu); f_0073128c();
    /* 00713c0e: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00713c13: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x713c18u); f_0073ec50();
    /* 00713c18: mov esi, eax */ r_esi = r_eax;
    /* 00713c1a: push 0xcc */ { u32 v = 0xccu; r_esp -= 4; W32(r_esp, v); }
    /* 00713c1f: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x713c24u); f_0073ec50();
    /* 00713c24: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00713c27: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00713c2a: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 00713c2c: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00713c2f: call 0x7312a0 */ r_esp -= 4; W32(r_esp, 0x713c34u); f_007312a0();
L_00713c34:; BB(0x00713c34);
    /* 00713c34: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00713c36: call 0x713d40 */ r_esp -= 4; W32(r_esp, 0x713c3bu); f_00713d40();
    /* 00713c3b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00713c3d: call 0x713eb4 */ r_esp -= 4; W32(r_esp, 0x713c42u); f_00713eb4();
    /* 00713c42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713c44: jne 0x713c49 */ if (!fZ) goto L_00713c49;
L_00713c46:; BB(0x00713c46);
    /* 00713c46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00713c47: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00713c48: ret  */ FN_RET(0x00713ab0); r_esp += 4; return;
L_00713c49:; BB(0x00713c49);
    /* 00713c49: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00713c4b: call 0x7138a8 */ r_esp -= 4; W32(r_esp, 0x713c50u); f_007138a8();
L_00713c50:; BB(0x00713c50);
    /* 00713c50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00713c51: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00713c52: ret  */ FN_RET(0x00713ab0); r_esp += 4; return;
}

void f_00713c54(void) /* sub_713C54 */
{
    FN_ENTER(0x00713c54);
    /* 00713c54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00713c55: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00713c56: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00713c57: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00713c59: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00713c5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713c5e: je 0x713cab */ if (fZ) goto L_00713cab;
L_00713c60:; BB(0x00713c60);
    /* 00713c60: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 00713c63: movzx esi, word ptr [edx + 0x84] */ r_esi = (u32)R16((u32)(r_edx+0x84u));
    /* 00713c6a: test esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713c70: je 0x713c79 */ if (fZ) goto L_00713c79;
L_00713c72:; BB(0x00713c72);
    /* 00713c72: mov edx, 1 */ r_edx = 0x1u;
    /* 00713c77: jmp 0x713c7b */ goto L_00713c7b;
L_00713c79:; BB(0x00713c79);
    /* 00713c79: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00713c7b:; BB(0x00713c7b);
    /* 00713c7b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713c7d: je 0x713c96 */ if (fZ) goto L_00713c96;
L_00713c7f:; BB(0x00713c7f);
    /* 00713c7f: movzx edx, word ptr [ebx + 0x1e] */ r_edx = (u32)R16((u32)(r_ebx+0x1eu));
    /* 00713c83: or edx, 0xffff0020 */ {  u32 a = r_edx; u32 b = 0xffff0020u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713c89: mov word ptr [ebx + 0x1e], dx */ W16((u32)(r_ebx+0x1eu), (u16)r_edx);
    /* 00713c8d: mov eax, 1 */ r_eax = 0x1u;
    /* 00713c92: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00713c93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00713c94: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00713c95: ret  */ FN_RET(0x00713c54); r_esp += 4; return;
L_00713c96:; BB(0x00713c96);
    /* 00713c96: test esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713c9c: je 0x713ca5 */ if (fZ) goto L_00713ca5;
L_00713c9e:; BB(0x00713c9e);
    /* 00713c9e: mov edx, 1 */ r_edx = 0x1u;
    /* 00713ca3: jmp 0x713ca7 */ goto L_00713ca7;
L_00713ca5:; BB(0x00713ca5);
    /* 00713ca5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00713ca7:; BB(0x00713ca7);
    /* 00713ca7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713ca9: jne 0x713cb1 */ if (!fZ) goto L_00713cb1;
L_00713cab:; BB(0x00713cab);
    /* 00713cab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713cad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00713cae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00713caf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00713cb0: ret  */ FN_RET(0x00713c54); r_esp += 4; return;
L_00713cb1:; BB(0x00713cb1);
    /* 00713cb1: movzx edx, word ptr [ebx + 0x1e] */ r_edx = (u32)R16((u32)(r_ebx+0x1eu));
    /* 00713cb5: mov esi, dword ptr [ebx + 0x30] */ r_esi = R32((u32)(r_ebx+0x30u));
    /* 00713cb8: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00713cbe: mov word ptr [ebx + 0x1e], dx */ W16((u32)(r_ebx+0x1eu), (u16)r_edx);
    /* 00713cc2: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00713cc5: lea edi, [esi + 4] */ r_edi = (u32)(r_esi+0x4u);
    /* 00713cc8: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x713ccdu); f_007365f4();
    /* 00713ccd: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00713cd0: movzx eax, word ptr [ebx + 0x1e] */ r_eax = (u32)R16((u32)(r_ebx+0x1eu));
    /* 00713cd4: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713cd9: jne 0x713ce4 */ if (!fZ) goto L_00713ce4;
L_00713cdb:; BB(0x00713cdb);
    /* 00713cdb: mov eax, 1 */ r_eax = 0x1u;
    /* 00713ce0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00713ce1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00713ce2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00713ce3: ret  */ FN_RET(0x00713c54); r_esp += 4; return;
L_00713ce4:; BB(0x00713ce4);
    /* 00713ce4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00713ce5: call 0x77d8c0 */ r_esp -= 4; W32(r_esp, 0x713ceau); f_0077d8c0();
    /* 00713cea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713ceb: mov ecx, eax */ r_ecx = r_eax;
    /* 00713ced: call 0x77d880 */ r_esp -= 4; W32(r_esp, 0x713cf2u); f_0077d880();
    /* 00713cf2: jmp 0x713cdb */ goto L_00713cdb;
}

void f_00713cf4(void) /* sub_713CF4 */
{
    FN_ENTER(0x00713cf4);
    /* 00713cf4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00713cf5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00713cf7: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 00713cfa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713cfc: je 0x713d11 */ if (fZ) goto L_00713d11;
L_00713cfe:; BB(0x00713cfe);
    /* 00713cfe: call 0x707644 */ r_esp -= 4; W32(r_esp, 0x713d03u); f_00707644();
    /* 00713d03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713d05: je 0x713d11 */ if (fZ) goto L_00713d11;
L_00713d07:; BB(0x00713d07);
    /* 00713d07: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713d0a: je 0x713d15 */ if (fZ) goto L_00713d15;
L_00713d0c:; BB(0x00713d0c);
    /* 00713d0c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713d0f: je 0x713d2a */ if (fZ) goto L_00713d2a;
L_00713d11:; BB(0x00713d11);
    /* 00713d11: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713d13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00713d14: ret  */ FN_RET(0x00713cf4); r_esp += 4; return;
L_00713d15:; BB(0x00713d15);
    /* 00713d15: movzx edx, word ptr [ebp + 0x1e] */ r_edx = (u32)R16((u32)(r_ebp+0x1eu));
    /* 00713d19: or edx, 0xffff0020 */ {  u32 a = r_edx; u32 b = 0xffff0020u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713d1f: mov word ptr [ebp + 0x1e], dx */ W16((u32)(r_ebp+0x1eu), (u16)r_edx);
    /* 00713d23: mov eax, 1 */ r_eax = 0x1u;
    /* 00713d28: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00713d29: ret  */ FN_RET(0x00713cf4); r_esp += 4; return;
L_00713d2a:; BB(0x00713d2a);
    /* 00713d2a: movzx edx, word ptr [ebp + 0x1e] */ r_edx = (u32)R16((u32)(r_ebp+0x1eu));
    /* 00713d2e: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713d34: mov word ptr [ebp + 0x1e], dx */ W16((u32)(r_ebp+0x1eu), (u16)r_edx);
    /* 00713d38: mov eax, 1 */ r_eax = 0x1u;
    /* 00713d3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00713d3e: ret  */ FN_RET(0x00713cf4); r_esp += 4; return;
}

void f_00713d40(void) /* sub_713D40 */
{
    FN_ENTER(0x00713d40);
    /* 00713d40: movzx eax, word ptr [ecx + 0x1e] */ r_eax = (u32)R16((u32)(r_ecx+0x1eu));
    /* 00713d44: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713d46: je 0x713d49 */ if (fZ) goto L_00713d49;
L_00713d48:; BB(0x00713d48);
    /* 00713d48: ret  */ FN_RET(0x00713d40); r_esp += 4; return;
L_00713d49:; BB(0x00713d49);
    /* 00713d49: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 00713d4c: call 0x730f5c */ r_esp -= 4; W32(r_esp, 0x713d51u); f_00730f5c();
    /* 00713d51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713d53: je 0x713d56 */ if (fZ) goto L_00713d56;
L_00713d55:; BB(0x00713d55);
    /* 00713d55: ret  */ FN_RET(0x00713d40); r_esp += 4; return;
L_00713d56:; BB(0x00713d56);
    /* 00713d56: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00713d5c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x713d61u); f_0068d5a8();
    /* 00713d61: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713d62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713d64: je 0x713eb0 */ if (fZ) goto L_00713eb0;
L_00713d6a:; BB(0x00713d6a);
    /* 00713d6a: mov ecx, eax */ r_ecx = r_eax;
    /* 00713d6c: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x713d71u); f_00689410();
    /* 00713d71: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713d73: je 0x713d76 */ if (fZ) goto L_00713d76;
L_00713d75:; BB(0x00713d75);
    /* 00713d75: ret  */ FN_RET(0x00713d40); r_esp += 4; return;
L_00713d76:; BB(0x00713d76);
    /* 00713d76: call 0x7c00dc */ r_esp -= 4; W32(r_esp, 0x713d7bu); f_007c00dc();
    /* 00713d7b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713d7d: je 0x713d80 */ if (fZ) goto L_00713d80;
L_00713d7f:; BB(0x00713d7f);
    /* 00713d7f: ret  */ FN_RET(0x00713d40); r_esp += 4; return;
L_00713d80:; BB(0x00713d80);
    /* 00713d80: call 0x7c00d0 */ r_esp -= 4; W32(r_esp, 0x713d85u); f_007c00d0();
    /* 00713d85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713d87: je 0x713d8a */ if (fZ) goto L_00713d8a;
L_00713d89:; BB(0x00713d89);
    /* 00713d89: ret  */ FN_RET(0x00713d40); r_esp += 4; return;
L_00713d8a:; BB(0x00713d8a);
    /* 00713d8a: push 0x2000000 */ { u32 v = 0x2000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00713d8f: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00713d95: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x713d9au); f_007be19c();
    /* 00713d9a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00713d9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713d9f: je 0x713dab */ if (fZ) goto L_00713dab;
L_00713da1:; BB(0x00713da1);
    /* 00713da1: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x713da6u); f_007c00c4();
    /* 00713da6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713da8: je 0x713db5 */ if (fZ) goto L_00713db5;
L_00713daa:; BB(0x00713daa);
    /* 00713daa: ret  */ FN_RET(0x00713d40); r_esp += 4; return;
L_00713dab:; BB(0x00713dab);
    /* 00713dab: call 0x7c00c4 */ r_esp -= 4; W32(r_esp, 0x713db0u); f_007c00c4();
    /* 00713db0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713db2: jne 0x713db5 */ if (!fZ) goto L_00713db5;
L_00713db4:; BB(0x00713db4);
    /* 00713db4: ret  */ FN_RET(0x00713d40); r_esp += 4; return;
L_00713db5:; BB(0x00713db5);
    /* 00713db5: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00713db7: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x713dbcu); f_007bfff8();
    /* 00713dbc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713dbd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713dbf: je 0x713dca */ if (fZ) goto L_00713dca;
L_00713dc1:; BB(0x00713dc1);
    /* 00713dc1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00713dc3: call 0x77d6d0 */ r_esp -= 4; W32(r_esp, 0x713dc8u); f_0077d6d0();
    /* 00713dc8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713dc9: ret  */ FN_RET(0x00713d40); r_esp += 4; return;
L_00713dca:; BB(0x00713dca);
    /* 00713dca: push 0x41 */ { u32 v = 0x41u; r_esp -= 4; W32(r_esp, v); }
    /* 00713dcc: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x713dd1u); f_007bfff8();
    /* 00713dd1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713dd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713dd4: je 0x713ddf */ if (fZ) goto L_00713ddf;
L_00713dd6:; BB(0x00713dd6);
    /* 00713dd6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00713dd8: call 0x77d6d0 */ r_esp -= 4; W32(r_esp, 0x713dddu); f_0077d6d0();
    /* 00713ddd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713dde: ret  */ FN_RET(0x00713d40); r_esp += 4; return;
L_00713ddf:; BB(0x00713ddf);
    /* 00713ddf: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 00713de1: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x713de6u); f_007bfff8();
    /* 00713de6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713de7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713de9: je 0x713df4 */ if (fZ) goto L_00713df4;
L_00713deb:; BB(0x00713deb);
    /* 00713deb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00713ded: call 0x77d6d0 */ r_esp -= 4; W32(r_esp, 0x713df2u); f_0077d6d0();
    /* 00713df2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713df3: ret  */ FN_RET(0x00713d40); r_esp += 4; return;
L_00713df4:; BB(0x00713df4);
    /* 00713df4: push 0x43 */ { u32 v = 0x43u; r_esp -= 4; W32(r_esp, v); }
    /* 00713df6: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x713dfbu); f_007bfff8();
    /* 00713dfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713dfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713dfe: je 0x713e09 */ if (fZ) goto L_00713e09;
L_00713e00:; BB(0x00713e00);
    /* 00713e00: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00713e02: call 0x77d6d0 */ r_esp -= 4; W32(r_esp, 0x713e07u); f_0077d6d0();
    /* 00713e07: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713e08: ret  */ FN_RET(0x00713d40); r_esp += 4; return;
L_00713e09:; BB(0x00713e09);
    /* 00713e09: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 00713e0b: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x713e10u); f_007bfff8();
    /* 00713e10: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713e11: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713e13: je 0x713e1e */ if (fZ) goto L_00713e1e;
L_00713e15:; BB(0x00713e15);
    /* 00713e15: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00713e17: call 0x77d6d0 */ r_esp -= 4; W32(r_esp, 0x713e1cu); f_0077d6d0();
    /* 00713e1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713e1d: ret  */ FN_RET(0x00713d40); r_esp += 4; return;
L_00713e1e:; BB(0x00713e1e);
    /* 00713e1e: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 00713e20: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x713e25u); f_007bfff8();
    /* 00713e25: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713e26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713e28: je 0x713e33 */ if (fZ) goto L_00713e33;
L_00713e2a:; BB(0x00713e2a);
    /* 00713e2a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00713e2c: call 0x77d6d0 */ r_esp -= 4; W32(r_esp, 0x713e31u); f_0077d6d0();
    /* 00713e31: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713e32: ret  */ FN_RET(0x00713d40); r_esp += 4; return;
L_00713e33:; BB(0x00713e33);
    /* 00713e33: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 00713e35: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x713e3au); f_007bfff8();
    /* 00713e3a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713e3b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713e3d: je 0x713e48 */ if (fZ) goto L_00713e48;
L_00713e3f:; BB(0x00713e3f);
    /* 00713e3f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00713e41: call 0x77d6d0 */ r_esp -= 4; W32(r_esp, 0x713e46u); f_0077d6d0();
    /* 00713e46: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713e47: ret  */ FN_RET(0x00713d40); r_esp += 4; return;
L_00713e48:; BB(0x00713e48);
    /* 00713e48: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 00713e4a: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x713e4fu); f_007bfff8();
    /* 00713e4f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713e50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713e52: je 0x713e5d */ if (fZ) goto L_00713e5d;
L_00713e54:; BB(0x00713e54);
    /* 00713e54: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00713e56: call 0x77d6d0 */ r_esp -= 4; W32(r_esp, 0x713e5bu); f_0077d6d0();
    /* 00713e5b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713e5c: ret  */ FN_RET(0x00713d40); r_esp += 4; return;
L_00713e5d:; BB(0x00713e5d);
    /* 00713e5d: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00713e5f: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x713e64u); f_007bfff8();
    /* 00713e64: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713e65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713e67: je 0x713e72 */ if (fZ) goto L_00713e72;
L_00713e69:; BB(0x00713e69);
    /* 00713e69: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00713e6b: call 0x77d6d0 */ r_esp -= 4; W32(r_esp, 0x713e70u); f_0077d6d0();
    /* 00713e70: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713e71: ret  */ FN_RET(0x00713d40); r_esp += 4; return;
L_00713e72:; BB(0x00713e72);
    /* 00713e72: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 00713e74: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x713e79u); f_007bfff8();
    /* 00713e79: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713e7a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713e7c: je 0x713e87 */ if (fZ) goto L_00713e87;
L_00713e7e:; BB(0x00713e7e);
    /* 00713e7e: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00713e80: call 0x77d6d0 */ r_esp -= 4; W32(r_esp, 0x713e85u); f_0077d6d0();
    /* 00713e85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713e86: ret  */ FN_RET(0x00713d40); r_esp += 4; return;
L_00713e87:; BB(0x00713e87);
    /* 00713e87: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 00713e89: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x713e8eu); f_007bfff8();
    /* 00713e8e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713e8f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713e91: je 0x713e9c */ if (fZ) goto L_00713e9c;
L_00713e93:; BB(0x00713e93);
    /* 00713e93: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00713e95: call 0x77d6d0 */ r_esp -= 4; W32(r_esp, 0x713e9au); f_0077d6d0();
    /* 00713e9a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713e9b: ret  */ FN_RET(0x00713d40); r_esp += 4; return;
L_00713e9c:; BB(0x00713e9c);
    /* 00713e9c: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00713e9e: call 0x7bfff8 */ r_esp -= 4; W32(r_esp, 0x713ea3u); f_007bfff8();
    /* 00713ea3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713ea4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713ea6: je 0x713eb0 */ if (fZ) goto L_00713eb0;
L_00713ea8:; BB(0x00713ea8);
    /* 00713ea8: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00713eaa: call 0x77d6d0 */ r_esp -= 4; W32(r_esp, 0x713eafu); f_0077d6d0();
    /* 00713eaf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00713eb0:; BB(0x00713eb0);
    /* 00713eb0: ret  */ FN_RET(0x00713d40); r_esp += 4; return;
}

void f_00713eb4(void) /* sub_713EB4 */
{
    FN_ENTER(0x00713eb4);
    /* 00713eb4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00713eb5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00713eb6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00713eb7: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00713eb9: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00713ebc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713ebe: je 0x713ef4 */ if (fZ) goto L_00713ef4;
L_00713ec0:; BB(0x00713ec0);
    /* 00713ec0: call 0x730f68 */ r_esp -= 4; W32(r_esp, 0x713ec5u); f_00730f68();
    /* 00713ec5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713ec7: je 0x713ee8 */ if (fZ) goto L_00713ee8;
L_00713ec9:; BB(0x00713ec9);
    /* 00713ec9: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00713ecc: call 0x72ee28 */ r_esp -= 4; W32(r_esp, 0x713ed1u); f_0072ee28();
    /* 00713ed1: movzx edx, word ptr [ebp + 0x1e] */ r_edx = (u32)R16((u32)(r_ebp+0x1eu));
    /* 00713ed5: or edx, 0xffff0020 */ {  u32 a = r_edx; u32 b = 0xffff0020u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713edb: mov word ptr [ebp + 0x1e], dx */ W16((u32)(r_ebp+0x1eu), (u16)r_edx);
    /* 00713edf: mov eax, 1 */ r_eax = 0x1u;
    /* 00713ee4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00713ee5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00713ee6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00713ee7: ret  */ FN_RET(0x00713eb4); r_esp += 4; return;
L_00713ee8:; BB(0x00713ee8);
    /* 00713ee8: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00713eeb: call 0x730f7c */ r_esp -= 4; W32(r_esp, 0x713ef0u); f_00730f7c();
    /* 00713ef0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713ef2: jne 0x713efa */ if (!fZ) goto L_00713efa;
L_00713ef4:; BB(0x00713ef4);
    /* 00713ef4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713ef6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00713ef7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00713ef8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00713ef9: ret  */ FN_RET(0x00713eb4); r_esp += 4; return;
L_00713efa:; BB(0x00713efa);
    /* 00713efa: movzx eax, word ptr [ebp + 0x1e] */ r_eax = (u32)R16((u32)(r_ebp+0x1eu));
    /* 00713efe: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00713f01: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00713f06: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 00713f0a: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x713f0fu); f_006dc358();
    /* 00713f0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713f11: je 0x713f60 */ if (fZ) goto L_00713f60;
L_00713f13:; BB(0x00713f13);
    /* 00713f13: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00713f16: call 0x6a6f78 */ r_esp -= 4; W32(r_esp, 0x713f1bu); f_006a6f78();
    /* 00713f1b: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00713f1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00713f1f: call 0x77d66c */ r_esp -= 4; W32(r_esp, 0x713f24u); f_0077d66c();
    /* 00713f24: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713f25: mov edi, dword ptr [ebp + 0x30] */ r_edi = R32((u32)(r_ebp+0x30u));
    /* 00713f28: mov esi, eax */ r_esi = r_eax;
    /* 00713f2a: mov ecx, 0xa4 */ r_ecx = 0xa4u;
    /* 00713f2f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00713f30: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00713f33: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 00713f35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713f36: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00713f39: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 00713f3b: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 00713f3e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00713f40: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00713f43: jne 0x713f6f */ if (!fZ) goto L_00713f6f;
L_00713f45:; BB(0x00713f45);
    /* 00713f45: movzx eax, word ptr [ebp + 0x1e] */ r_eax = (u32)R16((u32)(r_ebp+0x1eu));
    /* 00713f49: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00713f4b: jne 0x713f6f */ if (!fZ) goto L_00713f6f;
L_00713f4d:; BB(0x00713f4d);
    /* 00713f4d: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00713f50: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00713f51: call 0x77d8c0 */ r_esp -= 4; W32(r_esp, 0x713f56u); f_0077d8c0();
    /* 00713f56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00713f57: mov ecx, eax */ r_ecx = r_eax;
    /* 00713f59: call 0x77d880 */ r_esp -= 4; W32(r_esp, 0x713f5eu); f_0077d880();
    /* 00713f5e: jmp 0x713f6f */ goto L_00713f6f;
L_00713f60:; BB(0x00713f60);
    /* 00713f60: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00713f63: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00713f66: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00713f69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00713f6a: call 0x730f90 */ r_esp -= 4; W32(r_esp, 0x713f6fu); f_00730f90();
L_00713f6f:; BB(0x00713f6f);
    /* 00713f6f: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00713f72: call 0x72ee28 */ r_esp -= 4; W32(r_esp, 0x713f77u); f_0072ee28();
    /* 00713f77: mov eax, 1 */ r_eax = 0x1u;
    /* 00713f7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00713f7d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00713f7e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00713f7f: ret  */ FN_RET(0x00713eb4); r_esp += 4; return;
}

void f_00713f80(void) /* sub_713F80 */
{
    FN_ENTER(0x00713f80);
    /* 00713f80: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00713f81: mov esi, ecx */ r_esi = r_ecx;
    /* 00713f83: movzx eax, word ptr [esi + 0x1e] */ r_eax = (u32)R16((u32)(r_esi+0x1eu));
    /* 00713f87: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713f89: je 0x713fd8 */ if (fZ) goto L_00713fd8;
L_00713f8b:; BB(0x00713f8b);
    /* 00713f8b: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00713f8d: je 0x713fa3 */ if (fZ) goto L_00713fa3;
L_00713f8f:; BB(0x00713f8f);
    /* 00713f8f: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00713f94: mov word ptr [esi + 0x1e], ax */ W16((u32)(r_esi+0x1eu), (u16)r_eax);
    /* 00713f98: mov ecx, esi */ r_ecx = r_esi;
    /* 00713f9a: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x713f9fu); f_007138e0();
    /* 00713f9f: movzx eax, word ptr [esi + 0x1e] */ r_eax = (u32)R16((u32)(r_esi+0x1eu));
L_00713fa3:; BB(0x00713fa3);
    /* 00713fa3: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00713fa5: je 0x713fbb */ if (fZ) goto L_00713fbb;
L_00713fa7:; BB(0x00713fa7);
    /* 00713fa7: and eax, 0xffdf */ {  u32 a = r_eax; u32 b = 0xffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00713fac: mov word ptr [esi + 0x1e], ax */ W16((u32)(r_esi+0x1eu), (u16)r_eax);
    /* 00713fb0: mov ecx, esi */ r_ecx = r_esi;
    /* 00713fb2: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x713fb7u); f_007138e0();
    /* 00713fb7: movzx eax, word ptr [esi + 0x1e] */ r_eax = (u32)R16((u32)(r_esi+0x1eu));
L_00713fbb:; BB(0x00713fbb);
    /* 00713fbb: and eax, 0xfffe */ {  u32 a = r_eax; u32 b = 0xfffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00713fc0: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 00713fc3: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00713fc8: mov word ptr [esi + 0x1e], ax */ W16((u32)(r_esi+0x1eu), (u16)r_eax);
    /* 00713fcc: call 0x730ea4 */ r_esp -= 4; W32(r_esp, 0x713fd1u); f_00730ea4();
    /* 00713fd1: mov ecx, esi */ r_ecx = r_esi;
    /* 00713fd3: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x713fd8u); f_007138e0();
L_00713fd8:; BB(0x00713fd8);
    /* 00713fd8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00713fd9: ret  */ FN_RET(0x00713f80); r_esp += 4; return;
}

void f_00713fdc(void) /* sub_713FDC */
{
    FN_ENTER(0x00713fdc);
    /* 00713fdc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00713fdd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00713fde: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00713fe0: movzx eax, word ptr [ebp + 0x1e] */ r_eax = (u32)R16((u32)(r_ebp+0x1eu));
    /* 00713fe4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00713fe6: je 0x713feb */ if (fZ) goto L_00713feb;
L_00713fe8:; BB(0x00713fe8);
    /* 00713fe8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00713fe9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00713fea: ret  */ FN_RET(0x00713fdc); r_esp += 4; return;
L_00713feb:; BB(0x00713feb);
    /* 00713feb: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00713fee: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00713ff0: je 0x714008 */ if (fZ) goto L_00714008;
L_00713ff2:; BB(0x00713ff2);
    /* 00713ff2: and eax, 0xffef */ {  u32 a = r_eax; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00713ff7: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 00713ffb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00713ffd: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x714002u); f_007138e0();
    /* 00714002: movzx eax, word ptr [ebp + 0x1e] */ r_eax = (u32)R16((u32)(r_ebp+0x1eu));
    /* 00714006: jmp 0x71400c */ goto L_0071400c;
L_00714008:; BB(0x00714008);
    /* 00714008: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
L_0071400c:; BB(0x0071400c);
    /* 0071400c: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071400e: je 0x714020 */ if (fZ) goto L_00714020;
L_00714010:; BB(0x00714010);
    /* 00714010: and eax, 0xffdf */ {  u32 a = r_eax; u32 b = 0xffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00714015: mov word ptr [ebp + 0x1e], ax */ W16((u32)(r_ebp+0x1eu), (u16)r_eax);
    /* 00714019: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071401b: call 0x7138e0 */ r_esp -= 4; W32(r_esp, 0x714020u); f_007138e0();
L_00714020:; BB(0x00714020);
    /* 00714020: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00714026: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x71402bu); f_0068d5a8();
    /* 0071402b: mov ebx, eax */ r_ebx = r_eax;
    /* 0071402d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00714030: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00714032: je 0x714075 */ if (fZ) goto L_00714075;
L_00714034:; BB(0x00714034);
    /* 00714034: movzx edx, word ptr [ebp + 0x1e] */ r_edx = (u32)R16((u32)(r_ebp+0x1eu));
    /* 00714038: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0071403b: jne 0x714075 */ if (!fZ) goto L_00714075;
L_0071403d:; BB(0x0071403d);
    /* 0071403d: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00714040: je 0x714075 */ if (fZ) goto L_00714075;
L_00714042:; BB(0x00714042);
    /* 00714042: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00714048: call 0x716ba0 */ r_esp -= 4; W32(r_esp, 0x71404du); f_00716ba0();
    /* 0071404d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071404e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00714050: jne 0x714069 */ if (!fZ) goto L_00714069;
L_00714052:; BB(0x00714052);
    /* 00714052: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00714058: call 0x716c08 */ r_esp -= 4; W32(r_esp, 0x71405du); f_00716c08();
    /* 0071405d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0071405e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00714060: jne 0x714069 */ if (!fZ) goto L_00714069;
L_00714062:; BB(0x00714062);
    /* 00714062: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00714064: call 0x693728 */ r_esp -= 4; W32(r_esp, 0x714069u); f_00693728();
L_00714069:; BB(0x00714069);
    /* 00714069: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0071406f: call 0x718048 */ r_esp -= 4; W32(r_esp, 0x714074u); f_00718048();
    /* 00714074: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00714075:; BB(0x00714075);
    /* 00714075: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00714078: call 0x72ee28 */ r_esp -= 4; W32(r_esp, 0x71407du); f_0072ee28();
    /* 0071407d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0071407f: call 0x7138a8 */ r_esp -= 4; W32(r_esp, 0x714084u); f_007138a8();
    /* 00714084: mov ecx, dword ptr [ebp + 0x20] */ r_ecx = R32((u32)(r_ebp+0x20u));
    /* 00714087: call 0x730e74 */ r_esp -= 4; W32(r_esp, 0x71408cu); f_00730e74();
    /* 0071408c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0071408d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0071408e: ret  */ FN_RET(0x00713fdc); r_esp += 4; return;
}

