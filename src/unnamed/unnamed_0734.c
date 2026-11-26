#include "protos.h"

void f_00734000(void) /* sub_734000 */
{
    FN_ENTER(0x00734000);
    /* 00734000: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00734001: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00734003: call 0x73824c */ r_esp -= 4; W32(r_esp, 0x734008u); f_0073824c();
    /* 00734008: mov esi, eax */ r_esi = r_eax;
    /* 0073400a: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0073400c: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x734011u); f_0079317c();
    /* 00734011: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00734014: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00734016: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00734017: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00734018: mov ecx, esi */ r_ecx = r_esi;
    /* 0073401a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073401b: call 0x738a04 */ r_esp -= 4; W32(r_esp, 0x734020u); f_00738a04();
    /* 00734020: push 0x61 */ { u32 v = 0x61u; r_esp -= 4; W32(r_esp, v); }
    /* 00734022: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x734027u); f_0079317c();
    /* 00734027: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00734028: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073402a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073402c: mov ecx, esi */ r_ecx = r_esi;
    /* 0073402e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073402f: call 0x738a04 */ r_esp -= 4; W32(r_esp, 0x734034u); f_00738a04();
    /* 00734034: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 00734036: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73403bu); f_0079317c();
    /* 0073403b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073403c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0073403e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00734040: mov ecx, esi */ r_ecx = r_esi;
    /* 00734042: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734043: call 0x738a04 */ r_esp -= 4; W32(r_esp, 0x734048u); f_00738a04();
    /* 00734048: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0073404a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73404fu); f_0079317c();
    /* 0073404f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00734050: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00734052: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00734054: mov ecx, esi */ r_ecx = r_esi;
    /* 00734056: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734057: call 0x738a04 */ r_esp -= 4; W32(r_esp, 0x73405cu); f_00738a04();
    /* 0073405c: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0073405e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x734063u); f_0079317c();
    /* 00734063: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00734064: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00734066: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734067: mov ecx, esi */ r_ecx = r_esi;
    /* 00734069: call 0x7389cc */ r_esp -= 4; W32(r_esp, 0x73406eu); f_007389cc();
    /* 0073406e: mov eax, esi */ r_eax = r_esi;
    /* 00734070: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00734071: ret  */ FN_RET(0x00734000); r_esp += 4; return;
}

void f_00734079(void) /* sub_734079 */
{
    FN_ENTER(0x00734079);
    /* 00734079: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 0073407c: add edx, 0x139 */ {  u32 a = r_edx; u32 b = 0x139u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00734082: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00734083: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x734088u); f_0079317c();
    /* 00734088: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00734089: ret  */ FN_RET(0x00734079); r_esp += 4; return;
}

void f_00734091(void) /* sub_734091 */
{
    FN_ENTER(0x00734091);
    /* 00734091: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 00734094: add edx, 0x13d */ {  u32 a = r_edx; u32 b = 0x13du; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0073409a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0073409b: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7340a0u); f_0079317c();
    /* 007340a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007340a1: ret  */ FN_RET(0x00734091); r_esp += 4; return;
}

void f_007340a4(void) /* sub_7340A4 */
{
    FN_ENTER(0x007340a4);
    /* 007340a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007340a5: mov ebp, esp */ r_ebp = r_esp;
    /* 007340a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007340a9: push 0x8f187a */ { u32 v = 0x8f187au; r_esp -= 4; W32(r_esp, v); }
    /* 007340ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007340b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007340b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007340bc: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007340bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007340c2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 007340c5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 007340c8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 007340cb: movzx eax, byte ptr [ecx + 0x1c] */ r_eax = (u32)R8((u32)(r_ecx+0x1cu));
    /* 007340cf: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 007340d2: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007340d5: ja 0x7344e6 */ if ((!fC&&!fZ)) goto L_007344e6;
L_007340db:; BB(0x007340db);
    /* 007340db: mov eax, dword ptr [eax*4 + 0x971324] */ r_eax = R32((u32)(r_eax*4+0x971324u));
    /* 007340e2: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_007344e6:; BB(0x007344e6);
    /* 007344e6: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007344e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007344ec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007344f3: mov esp, ebp */ r_esp = r_ebp;
    /* 007344f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007344f6: ret  */ FN_RET(0x007340a4); r_esp += 4; return;
}

void f_007340e4(void)
{
    FN_ENTER(0x007340e4);
    /* 007340e4: mov eax, ecx */ r_eax = r_ecx;
    /* 007340e6: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 007340e9: jmp 0x7340fa */ goto L_007340fa;
L_007340fa:; BB(0x007340fa);
    /* 007340fa: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 00734101: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00734104: je 0x73411b */ if (fZ) goto L_0073411b;
L_00734106:; BB(0x00734106);
    /* 00734106: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00734109: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073410d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00734110: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00734117: mov esp, ebp */ r_esp = r_ebp;
    /* 00734119: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073411a: ret  */ FN_RET(0x007340e4); r_esp += 4; return;
L_0073411b:; BB(0x0073411b);
    /* 0073411b: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073411e: je 0x7344e6 */ if (fZ) goto L_007344e6;
L_00734124:; BB(0x00734124);
    /* 00734124: mov ecx, eax */ r_ecx = r_eax;
    /* 00734126: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x73412bu); f_007365f4();
    /* 0073412b: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0073412e: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00734131: mov byte ptr [esi + 0x1f], al */ W8((u32)(r_esi+0x1fu), (u8)r_eax);
    /* 00734134: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00734135: call 0x734091 */ r_esp -= 4; W32(r_esp, 0x73413au); f_00734091();
    /* 0073413a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073413b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0073413d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073413e: mov eax, esi */ r_eax = r_esi;
    /* 00734140: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00734143: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x734148u); f_00738a40();
    /* 00734148: mov eax, esi */ r_eax = r_esi;
    /* 0073414a: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073414e: jmp 0x7344e6 */ goto L_007344e6;
L_007344e6:; BB(0x007344e6);
    /* 007344e6: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007344e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007344ec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007344f3: mov esp, ebp */ r_esp = r_ebp;
    /* 007344f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007344f6: ret  */ FN_RET(0x007340e4); r_esp += 4; return;
}

void f_007340eb(void)
{
    FN_ENTER(0x007340eb);
    /* 007340eb: call 0x734628 */ r_esp -= 4; W32(r_esp, 0x7340f0u); f_00734628();
    /* 007340f0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007340f3: mov byte ptr [edx + 0x1c], 0xa */ W8((u32)(r_edx+0x1cu), 0xau);
    /* 007340f7: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 007340fa: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 00734101: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00734104: je 0x73411b */ if (fZ) goto L_0073411b;
L_00734106:; BB(0x00734106);
    /* 00734106: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00734109: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073410d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00734110: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00734117: mov esp, ebp */ r_esp = r_ebp;
    /* 00734119: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0073411a: ret  */ FN_RET(0x007340eb); r_esp += 4; return;
L_0073411b:; BB(0x0073411b);
    /* 0073411b: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073411e: je 0x7344e6 */ if (fZ) goto L_007344e6;
L_00734124:; BB(0x00734124);
    /* 00734124: mov ecx, eax */ r_ecx = r_eax;
    /* 00734126: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x73412bu); f_007365f4();
    /* 0073412b: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0073412e: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00734131: mov byte ptr [esi + 0x1f], al */ W8((u32)(r_esi+0x1fu), (u8)r_eax);
    /* 00734134: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00734135: call 0x734091 */ r_esp -= 4; W32(r_esp, 0x73413au); f_00734091();
    /* 0073413a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073413b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0073413d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073413e: mov eax, esi */ r_eax = r_esi;
    /* 00734140: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00734143: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x734148u); f_00738a40();
    /* 00734148: mov eax, esi */ r_eax = r_esi;
    /* 0073414a: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073414e: jmp 0x7344e6 */ goto L_007344e6;
L_007344e6:; BB(0x007344e6);
    /* 007344e6: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007344e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007344ec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007344f3: mov esp, ebp */ r_esp = r_ebp;
    /* 007344f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007344f6: ret  */ FN_RET(0x007340eb); r_esp += 4; return;
}

void f_00734153(void)
{
    FN_ENTER(0x00734153);
    /* 00734153: mov eax, ecx */ r_eax = r_ecx;
    /* 00734155: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00734158: jmp 0x734169 */ goto L_00734169;
L_00734169:; BB(0x00734169);
    /* 00734169: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 00734170: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00734173: je 0x73418a */ if (fZ) goto L_0073418a;
L_00734175:; BB(0x00734175);
    /* 00734175: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00734178: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073417c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073417f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00734186: mov esp, ebp */ r_esp = r_ebp;
    /* 00734188: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00734189: ret  */ FN_RET(0x00734153); r_esp += 4; return;
L_0073418a:; BB(0x0073418a);
    /* 0073418a: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073418d: je 0x7344e6 */ if (fZ) goto L_007344e6;
L_00734193:; BB(0x00734193);
    /* 00734193: mov ecx, eax */ r_ecx = r_eax;
    /* 00734195: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x73419au); f_007365f4();
    /* 0073419a: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0073419d: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 007341a0: mov byte ptr [esi + 0x1e], al */ W8((u32)(r_esi+0x1eu), (u8)r_eax);
    /* 007341a3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007341a4: call 0x734079 */ r_esp -= 4; W32(r_esp, 0x7341a9u); f_00734079();
    /* 007341a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007341aa: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007341ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007341ad: mov eax, esi */ r_eax = r_esi;
    /* 007341af: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 007341b2: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x7341b7u); f_00738a40();
    /* 007341b7: mov ecx, esi */ r_ecx = r_esi;
    /* 007341b9: call 0x734608 */ r_esp -= 4; W32(r_esp, 0x7341beu); f_00734608();
    /* 007341be: mov eax, esi */ r_eax = r_esi;
    /* 007341c0: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 007341c4: jmp 0x7344e6 */ goto L_007344e6;
L_007344e6:; BB(0x007344e6);
    /* 007344e6: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007344e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007344ec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007344f3: mov esp, ebp */ r_esp = r_ebp;
    /* 007344f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007344f6: ret  */ FN_RET(0x00734153); r_esp += 4; return;
}

void f_0073415a(void)
{
    FN_ENTER(0x0073415a);
    /* 0073415a: call 0x734578 */ r_esp -= 4; W32(r_esp, 0x73415fu); f_00734578();
    /* 0073415f: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00734162: mov byte ptr [edx + 0x1c], 8 */ W8((u32)(r_edx+0x1cu), 0x8u);
    /* 00734166: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00734169: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 00734170: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00734173: je 0x73418a */ if (fZ) goto L_0073418a;
L_00734175:; BB(0x00734175);
    /* 00734175: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00734178: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 0073417c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073417f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00734186: mov esp, ebp */ r_esp = r_ebp;
    /* 00734188: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00734189: ret  */ FN_RET(0x0073415a); r_esp += 4; return;
L_0073418a:; BB(0x0073418a);
    /* 0073418a: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073418d: je 0x7344e6 */ if (fZ) goto L_007344e6;
L_00734193:; BB(0x00734193);
    /* 00734193: mov ecx, eax */ r_ecx = r_eax;
    /* 00734195: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x73419au); f_007365f4();
    /* 0073419a: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 0073419d: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 007341a0: mov byte ptr [esi + 0x1e], al */ W8((u32)(r_esi+0x1eu), (u8)r_eax);
    /* 007341a3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007341a4: call 0x734079 */ r_esp -= 4; W32(r_esp, 0x7341a9u); f_00734079();
    /* 007341a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007341aa: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007341ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007341ad: mov eax, esi */ r_eax = r_esi;
    /* 007341af: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 007341b2: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x7341b7u); f_00738a40();
    /* 007341b7: mov ecx, esi */ r_ecx = r_esi;
    /* 007341b9: call 0x734608 */ r_esp -= 4; W32(r_esp, 0x7341beu); f_00734608();
    /* 007341be: mov eax, esi */ r_eax = r_esi;
    /* 007341c0: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 007341c4: jmp 0x7344e6 */ goto L_007344e6;
L_007344e6:; BB(0x007344e6);
    /* 007344e6: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007344e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007344ec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007344f3: mov esp, ebp */ r_esp = r_ebp;
    /* 007344f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007344f6: ret  */ FN_RET(0x0073415a); r_esp += 4; return;
}

void f_007341c9(void)
{
    FN_ENTER(0x007341c9);
    /* 007341c9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007341d0: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 007341d2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7341d7u); f_005caba4();
    /* 007341d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007341d8: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 007341db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007341dd: je 0x7344f7 */ if (fZ) goto L_007344f7;
L_007341e3:; BB(0x007341e3);
    /* 007341e3: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007341ea: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007341f1: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007341f7: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007341fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007341fc: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007341ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734200: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734201: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00734203: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00734204: call 0x78eba4 */ r_esp -= 4; W32(r_esp, 0x734209u); f_0078eba4();
    /* 00734209: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0073420c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00734213:; BB(0x00734213);
    /* 00734213: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00734216: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 00734219: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00734220: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 00734225: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x73422au); f_0073ec50();
    /* 0073422a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073422b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073422c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073422f: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00734232: call 0x78ed84 */ r_esp -= 4; W32(r_esp, 0x734237u); f_0078ed84();
    /* 00734237: push 0x47166400 */ { u32 v = 0x47166400u; r_esp -= 4; W32(r_esp, v); }
    /* 0073423c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073423f: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00734242: call 0x78ee24 */ r_esp -= 4; W32(r_esp, 0x734247u); f_0078ee24();
    /* 00734247: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073424a: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073424d: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00734250: call 0x78ed74 */ r_esp -= 4; W32(r_esp, 0x734255u); f_0078ed74();
    /* 00734255: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00734258: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0073425b: call 0x78ee74 */ r_esp -= 4; W32(r_esp, 0x734260u); f_0078ee74();
    /* 00734260: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00734263: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00734265: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00734267: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0073426a: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x73426fu); f_00738a40();
    /* 0073426f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00734272: mov byte ptr [eax + 0x1c], 6 */ W8((u32)(r_eax+0x1cu), 0x6u);
    /* 00734276: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00734279: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0073427c: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x734281u); f_0078ed20();
    /* 00734281: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734283: je 0x73429c */ if (fZ) goto L_0073429c;
L_00734285:; BB(0x00734285);
    /* 00734285: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00734288: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073428a: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073428d: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00734290: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x734295u); f_00738a40();
    /* 00734295: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00734298: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
L_0073429c:; BB(0x0073429c);
    /* 0073429c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073429f: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 007342a2: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x7342a7u); f_0078ed14();
    /* 007342a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007342a9: je 0x7344e6 */ if (fZ) goto L_007344e6;
L_007342af:; BB(0x007342af);
    /* 007342af: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007342b2: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 007342b5: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7342bau); f_00857e98();
    /* 007342ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007342bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007342be: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 007342c1: call 0x78ed4c */ r_esp -= 4; W32(r_esp, 0x7342c6u); f_0078ed4c();
    /* 007342c6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007342c9: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 007342cc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007342ce: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 007342d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007342d2: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x7342d7u); f_00738a40();
    /* 007342d7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007342da: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 007342de: jmp 0x7344e6 */ goto L_007344e6;
L_007344e6:; BB(0x007344e6);
    /* 007344e6: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007344e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007344ec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007344f3: mov esp, ebp */ r_esp = r_ebp;
    /* 007344f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007344f6: ret  */ FN_RET(0x007341c9); r_esp += 4; return;
L_007344f7:; BB(0x007344f7);
    /* 007344f7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007344f9: jmp 0x734213 */ goto L_00734213;
}

void f_00734276(void)
{
    FN_ENTER(0x00734276);
    /* 00734276: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00734279: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0073427c: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x734281u); f_0078ed20();
    /* 00734281: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734283: je 0x73429c */ if (fZ) goto L_0073429c;
L_00734285:; BB(0x00734285);
    /* 00734285: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00734288: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073428a: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 0073428d: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00734290: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x734295u); f_00738a40();
    /* 00734295: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00734298: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
L_0073429c:; BB(0x0073429c);
    /* 0073429c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073429f: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 007342a2: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x7342a7u); f_0078ed14();
    /* 007342a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007342a9: je 0x7344e6 */ if (fZ) goto L_007344e6;
L_007342af:; BB(0x007342af);
    /* 007342af: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007342b2: push dword ptr [eax + 0x28] */ { u32 v = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 007342b5: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7342bau); f_00857e98();
    /* 007342ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007342bb: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007342be: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 007342c1: call 0x78ed4c */ r_esp -= 4; W32(r_esp, 0x7342c6u); f_0078ed4c();
    /* 007342c6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007342c9: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 007342cc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007342ce: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 007342d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007342d2: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x7342d7u); f_00738a40();
    /* 007342d7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007342da: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 007342de: jmp 0x7344e6 */ goto L_007344e6;
L_007344e6:; BB(0x007344e6);
    /* 007344e6: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007344e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007344ec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007344f3: mov esp, ebp */ r_esp = r_ebp;
    /* 007344f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007344f6: ret  */ FN_RET(0x00734276); r_esp += 4; return;
}

void f_007342e3(void)
{
    FN_ENTER(0x007342e3);
    /* 007342e3: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 007342ea: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 007342ec: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7342f1u); f_005caba4();
    /* 007342f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007342f2: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 007342f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007342f7: je 0x7344fe */ if (fZ) goto L_007344fe;
L_007342fd:; BB(0x007342fd);
    /* 007342fd: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00734304: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0073430b: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00734311: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00734314: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00734317: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00734319: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0073431b: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0073431d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073431e: call 0x78eba4 */ r_esp -= 4; W32(r_esp, 0x734323u); f_0078eba4();
    /* 00734323: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00734326: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0073432d:; BB(0x0073432d);
    /* 0073432d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00734330: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 00734333: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0073433a: push 0xdf */ { u32 v = 0xdfu; r_esp -= 4; W32(r_esp, v); }
    /* 0073433f: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x734344u); f_0073ec50();
    /* 00734344: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00734345: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734346: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00734349: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0073434c: call 0x78ed84 */ r_esp -= 4; W32(r_esp, 0x734351u); f_0078ed84();
    /* 00734351: push 0x47166400 */ { u32 v = 0x47166400u; r_esp -= 4; W32(r_esp, v); }
    /* 00734356: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00734359: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 0073435c: call 0x78ee24 */ r_esp -= 4; W32(r_esp, 0x734361u); f_0078ee24();
    /* 00734361: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00734364: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00734367: call 0x78ed3c */ r_esp -= 4; W32(r_esp, 0x73436cu); f_0078ed3c();
    /* 0073436c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073436f: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00734372: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00734375: call 0x78ed74 */ r_esp -= 4; W32(r_esp, 0x73437au); f_0078ed74();
    /* 0073437a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073437d: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00734380: call 0x78ee74 */ r_esp -= 4; W32(r_esp, 0x734385u); f_0078ee74();
    /* 00734385: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00734388: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 0073438b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0073438d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073438e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073438f: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x734394u); f_00738a40();
    /* 00734394: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00734397: mov byte ptr [eax + 0x1c], 4 */ W8((u32)(r_eax+0x1cu), 0x4u);
    /* 0073439b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073439e: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 007343a1: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x7343a6u); f_0078ed20();
    /* 007343a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007343a8: je 0x7343c1 */ if (fZ) goto L_007343c1;
L_007343aa:; BB(0x007343aa);
    /* 007343aa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007343ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007343af: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007343b2: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 007343b5: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x7343bau); f_00738a40();
    /* 007343ba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007343bd: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
L_007343c1:; BB(0x007343c1);
    /* 007343c1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007343c4: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 007343c7: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x7343ccu); f_0078ed14();
    /* 007343cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007343ce: je 0x7344e6 */ if (fZ) goto L_007344e6;
L_007343d4:; BB(0x007343d4);
    /* 007343d4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007343d7: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007343da: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7343dfu); f_00857e98();
    /* 007343df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007343e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007343e3: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 007343e6: call 0x78ed4c */ r_esp -= 4; W32(r_esp, 0x7343ebu); f_0078ed4c();
    /* 007343eb: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 007343f0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007343f3: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 007343f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007343f7: call 0x813a78 */ r_esp -= 4; W32(r_esp, 0x7343fcu); f_00813a78();
    /* 007343fc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007343ff: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00734402: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x734407u); f_00858009();
    /* 00734407: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734408: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073440d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00734410: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00734413: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x734418u); f_00857dec();
    /* 00734418: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073441b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073441e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00734420: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00734423: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00734426: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x73442bu); f_00738a40();
    /* 0073442b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073442e: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00734432: jmp 0x7344e6 */ goto L_007344e6;
L_007344e6:; BB(0x007344e6);
    /* 007344e6: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007344e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007344ec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007344f3: mov esp, ebp */ r_esp = r_ebp;
    /* 007344f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007344f6: ret  */ FN_RET(0x007342e3); r_esp += 4; return;
L_007344fe:; BB(0x007344fe);
    /* 007344fe: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00734500: jmp 0x73432d */ goto L_0073432d;
}

void f_0073439b(void)
{
    FN_ENTER(0x0073439b);
    /* 0073439b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073439e: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 007343a1: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x7343a6u); f_0078ed20();
    /* 007343a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007343a8: je 0x7343c1 */ if (fZ) goto L_007343c1;
L_007343aa:; BB(0x007343aa);
    /* 007343aa: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007343ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007343af: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007343b2: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 007343b5: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x7343bau); f_00738a40();
    /* 007343ba: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007343bd: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
L_007343c1:; BB(0x007343c1);
    /* 007343c1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007343c4: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 007343c7: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x7343ccu); f_0078ed14();
    /* 007343cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007343ce: je 0x7344e6 */ if (fZ) goto L_007344e6;
L_007343d4:; BB(0x007343d4);
    /* 007343d4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007343d7: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 007343da: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x7343dfu); f_00857e98();
    /* 007343df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007343e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007343e3: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 007343e6: call 0x78ed4c */ r_esp -= 4; W32(r_esp, 0x7343ebu); f_0078ed4c();
    /* 007343eb: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 007343f0: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007343f3: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 007343f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007343f7: call 0x813a78 */ r_esp -= 4; W32(r_esp, 0x7343fcu); f_00813a78();
    /* 007343fc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007343ff: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00734402: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x734407u); f_00858009();
    /* 00734407: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734408: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0073440d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00734410: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00734413: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x734418u); f_00857dec();
    /* 00734418: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0073441b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073441e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00734420: push dword ptr [eax + 0x24] */ { u32 v = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 00734423: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00734426: call 0x738a40 */ r_esp -= 4; W32(r_esp, 0x73442bu); f_00738a40();
    /* 0073442b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073442e: mov byte ptr [eax + 0x1c], 1 */ W8((u32)(r_eax+0x1cu), 0x1u);
    /* 00734432: jmp 0x7344e6 */ goto L_007344e6;
L_007344e6:; BB(0x007344e6);
    /* 007344e6: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007344e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007344ec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007344f3: mov esp, ebp */ r_esp = r_ebp;
    /* 007344f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007344f6: ret  */ FN_RET(0x0073439b); r_esp += 4; return;
}

void f_00734437(void)
{
    FN_ENTER(0x00734437);
    /* 00734437: mov eax, ecx */ r_eax = r_ecx;
    /* 00734439: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 0073443c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073443e: je 0x734456 */ if (fZ) goto L_00734456;
L_00734440:; BB(0x00734440);
    /* 00734440: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00734444: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00734449: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0073444d: mov edx, ecx */ r_edx = r_ecx;
    /* 0073444f: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
L_00734456:; BB(0x00734456);
    /* 00734456: mov eax, ecx */ r_eax = r_ecx;
    /* 00734458: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0073445b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073445d: je 0x73446e */ if (fZ) goto L_0073446e;
L_0073445f:; BB(0x0073445f);
    /* 0073445f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x734464u); f_007127b0();
    /* 00734464: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00734467: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0073446e:; BB(0x0073446e);
    /* 0073446e: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 00734471: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 00734478: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0073447e: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 00734485: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 00734488: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073448a: je 0x734493 */ if (fZ) goto L_00734493;
L_0073448c:; BB(0x0073448c);
    /* 0073448c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0073448e: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x734493u); f_00760acc();
L_00734493:; BB(0x00734493);
    /* 00734493: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00734496: call 0x734508 */ r_esp -= 4; W32(r_esp, 0x73449bu); f_00734508();
    /* 0073449b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0073449e: mov byte ptr [eax + 0x1c], 2 */ W8((u32)(r_eax+0x1cu), 0x2u);
    /* 007344a2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007344a5: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 007344a8: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 007344af: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007344b1: je 0x7344d4 */ if (fZ) goto L_007344d4;
L_007344b3:; BB(0x007344b3);
    /* 007344b3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007344b6: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 007344ba: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007344bf: mov byte ptr [edx + 0x1c], 0xb */ W8((u32)(r_edx+0x1cu), 0xbu);
    /* 007344c3: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 007344c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007344c9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007344d0: mov esp, ebp */ r_esp = r_ebp;
    /* 007344d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007344d3: ret  */ FN_RET(0x00734437); r_esp += 4; return;
L_007344d4:; BB(0x007344d4);
    /* 007344d4: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007344d6: je 0x7344e6 */ if (fZ) goto L_007344e6;
L_007344d8:; BB(0x007344d8);
    /* 007344d8: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x7344ddu); f_00737d90();
    /* 007344dd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007344e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007344e1: call 0x73452c */ r_esp -= 4; W32(r_esp, 0x7344e6u); f_0073452c();
L_007344e6:; BB(0x007344e6);
    /* 007344e6: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007344e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007344ec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007344f3: mov esp, ebp */ r_esp = r_ebp;
    /* 007344f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007344f6: ret  */ FN_RET(0x00734437); r_esp += 4; return;
}

void f_007344a2(void)
{
    FN_ENTER(0x007344a2);
    /* 007344a2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007344a5: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 007344a8: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 007344af: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007344b1: je 0x7344d4 */ if (fZ) goto L_007344d4;
L_007344b3:; BB(0x007344b3);
    /* 007344b3: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 007344b6: movzx eax, byte ptr [edx + 0x1d] */ r_eax = (u32)R8((u32)(r_edx+0x1du));
    /* 007344ba: or eax, 0xffffff02 */ {  u32 a = r_eax; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007344bf: mov byte ptr [edx + 0x1c], 0xb */ W8((u32)(r_edx+0x1cu), 0xbu);
    /* 007344c3: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 007344c6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007344c9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007344d0: mov esp, ebp */ r_esp = r_ebp;
    /* 007344d2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007344d3: ret  */ FN_RET(0x007344a2); r_esp += 4; return;
L_007344d4:; BB(0x007344d4);
    /* 007344d4: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007344d6: je 0x7344e6 */ if (fZ) goto L_007344e6;
L_007344d8:; BB(0x007344d8);
    /* 007344d8: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x7344ddu); f_00737d90();
    /* 007344dd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 007344e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007344e1: call 0x73452c */ r_esp -= 4; W32(r_esp, 0x7344e6u); f_0073452c();
L_007344e6:; BB(0x007344e6);
    /* 007344e6: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007344e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007344ec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007344f3: mov esp, ebp */ r_esp = r_ebp;
    /* 007344f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007344f6: ret  */ FN_RET(0x007344a2); r_esp += 4; return;
}

void f_00734508(void) /* sub_734508 */
{
    FN_ENTER(0x00734508);
    /* 00734508: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 0073450b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073450d: je 0x734521 */ if (fZ) goto L_00734521;
L_0073450f:; BB(0x0073450f);
    /* 0073450f: movzx eax, word ptr [eax] */ r_eax = (u32)R16((u32)(r_eax));
    /* 00734512: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734514: je 0x734521 */ if (fZ) goto L_00734521;
L_00734516:; BB(0x00734516);
    /* 00734516: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00734518: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 0073451b: call 0x738b08 */ r_esp -= 4; W32(r_esp, 0x734520u); f_00738b08();
    /* 00734520: ret  */ FN_RET(0x00734508); r_esp += 4; return;
L_00734521:; BB(0x00734521);
    /* 00734521: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00734523: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 00734526: call 0x738a9c */ r_esp -= 4; W32(r_esp, 0x73452bu); f_00738a9c();
    /* 0073452b: ret  */ FN_RET(0x00734508); r_esp += 4; return;
}

void f_0073452c(void) /* sub_73452C */
{
    FN_ENTER(0x0073452c);
    /* 0073452c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00734530: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00734532: je 0x734570 */ if (fZ) goto L_00734570;
L_00734534:; BB(0x00734534);
    /* 00734534: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00734537: je 0x734569 */ if (fZ) goto L_00734569;
L_00734539:; BB(0x00734539);
    /* 00734539: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073453c: je 0x734562 */ if (fZ) goto L_00734562;
L_0073453e:; BB(0x0073453e);
    /* 0073453e: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00734541: jne 0x73454a */ if (!fZ) goto L_0073454a;
L_00734543:; BB(0x00734543);
    /* 00734543: mov byte ptr [ecx + 0x1c], 9 */ W8((u32)(r_ecx+0x1cu), 0x9u);
    /* 00734547: ret 4 */ FN_RET(0x0073452c); r_esp += 8; return;
L_0073454a:; BB(0x0073454a);
    /* 0073454a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0073454d: jne 0x734566 */ if (!fZ) goto L_00734566;
L_0073454f:; BB(0x0073454f);
    /* 0073454f: movzx eax, byte ptr [ecx + 0x1d] */ r_eax = (u32)R8((u32)(r_ecx+0x1du));
    /* 00734553: mov byte ptr [ecx + 0x1c], 0xb */ W8((u32)(r_ecx+0x1cu), 0xbu);
    /* 00734557: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0073455c: mov byte ptr [ecx + 0x1d], al */ W8((u32)(r_ecx+0x1du), (u8)r_eax);
    /* 0073455f: ret 4 */ FN_RET(0x0073452c); r_esp += 8; return;
L_00734562:; BB(0x00734562);
    /* 00734562: mov byte ptr [ecx + 0x1c], 7 */ W8((u32)(r_ecx+0x1cu), 0x7u);
L_00734566:; BB(0x00734566);
    /* 00734566: ret 4 */ FN_RET(0x0073452c); r_esp += 8; return;
L_00734569:; BB(0x00734569);
    /* 00734569: mov byte ptr [ecx + 0x1c], 5 */ W8((u32)(r_ecx+0x1cu), 0x5u);
    /* 0073456d: ret 4 */ FN_RET(0x0073452c); r_esp += 8; return;
L_00734570:; BB(0x00734570);
    /* 00734570: mov byte ptr [ecx + 0x1c], 3 */ W8((u32)(r_ecx+0x1cu), 0x3u);
    /* 00734574: ret 4 */ FN_RET(0x0073452c); r_esp += 8; return;
}

void f_00734578(void) /* sub_734578 */
{
    FN_ENTER(0x00734578);
    /* 00734578: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00734579: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0073457a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0073457c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0073457e: push 0x971350 */ { u32 v = 0x971350u; r_esp -= 4; W32(r_esp, v); }
    /* 00734583: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x734588u); f_00735708();
    /* 00734588: mov ebx, eax */ r_ebx = r_eax;
    /* 0073458a: push 0x139 */ { u32 v = 0x139u; r_esp -= 4; W32(r_esp, v); }
    /* 0073458f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x734594u); f_0079317c();
    /* 00734594: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00734597: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00734599: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0073459b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0073459d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073459e: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7345a3u); f_00735c90();
    /* 007345a3: push 0x13a */ { u32 v = 0x13au; r_esp -= 4; W32(r_esp, v); }
    /* 007345a8: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7345adu); f_0079317c();
    /* 007345ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007345ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007345b0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007345b2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007345b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007345b5: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7345bau); f_00735c90();
    /* 007345ba: push 0x13b */ { u32 v = 0x13bu; r_esp -= 4; W32(r_esp, v); }
    /* 007345bf: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7345c4u); f_0079317c();
    /* 007345c4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007345c5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007345c7: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007345c9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007345cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007345cc: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7345d1u); f_00735c90();
    /* 007345d1: push 0x13c */ { u32 v = 0x13cu; r_esp -= 4; W32(r_esp, v); }
    /* 007345d6: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7345dbu); f_0079317c();
    /* 007345db: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007345dc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007345de: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007345e0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007345e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007345e3: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7345e8u); f_00735c90();
    /* 007345e8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007345ea: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x7345efu); f_0073608c();
    /* 007345ef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007345f1: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x7345f6u); f_00736458();
    /* 007345f6: movsx edx, byte ptr [ebp + 0x1e] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebp+0x1eu));
    /* 007345fa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007345fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007345fd: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x734602u); f_00736510();
    /* 00734602: mov eax, ebx */ r_eax = r_ebx;
    /* 00734604: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00734605: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00734606: ret  */ FN_RET(0x00734578); r_esp += 4; return;
}

void f_00734608(void) /* sub_734608 */
{
    FN_ENTER(0x00734608);
    /* 00734608: movsx eax, byte ptr [ecx + 0x1e] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x1eu));
    /* 0073460c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073460f: je 0x73461c */ if (fZ) goto L_0073461c;
L_00734611:; BB(0x00734611);
    /* 00734611: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00734613: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 00734616: call 0x738b08 */ r_esp -= 4; W32(r_esp, 0x73461bu); f_00738b08();
    /* 0073461b: ret  */ FN_RET(0x00734608); r_esp += 4; return;
L_0073461c:; BB(0x0073461c);
    /* 0073461c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0073461e: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 00734621: call 0x738a9c */ r_esp -= 4; W32(r_esp, 0x734626u); f_00738a9c();
    /* 00734626: ret  */ FN_RET(0x00734608); r_esp += 4; return;
}

void f_00734628(void) /* sub_734628 */
{
    FN_ENTER(0x00734628);
    /* 00734628: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00734629: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0073462a: mov edi, ecx */ r_edi = r_ecx;
    /* 0073462c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0073462e: push 0x971358 */ { u32 v = 0x971358u; r_esp -= 4; W32(r_esp, v); }
    /* 00734633: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x734638u); f_00735708();
    /* 00734638: mov esi, eax */ r_esi = r_eax;
    /* 0073463a: push 0x13d */ { u32 v = 0x13du; r_esp -= 4; W32(r_esp, v); }
    /* 0073463f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x734644u); f_0079317c();
    /* 00734644: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00734647: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00734649: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0073464b: mov ecx, esi */ r_ecx = r_esi;
    /* 0073464d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073464e: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x734653u); f_00735c90();
    /* 00734653: push 0x13e */ { u32 v = 0x13eu; r_esp -= 4; W32(r_esp, v); }
    /* 00734658: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x73465du); f_0079317c();
    /* 0073465d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073465e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00734660: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00734662: mov ecx, esi */ r_ecx = r_esi;
    /* 00734664: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734665: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x73466au); f_00735c90();
    /* 0073466a: push 0x13f */ { u32 v = 0x13fu; r_esp -= 4; W32(r_esp, v); }
    /* 0073466f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x734674u); f_0079317c();
    /* 00734674: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00734675: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00734677: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00734679: mov ecx, esi */ r_ecx = r_esi;
    /* 0073467b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073467c: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x734681u); f_00735c90();
    /* 00734681: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 00734684: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734687: je 0x7346b2 */ if (fZ) goto L_007346b2;
L_00734689:; BB(0x00734689);
    /* 00734689: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0073468c: je 0x7346b2 */ if (fZ) goto L_007346b2;
L_0073468e:; BB(0x0073468e);
    /* 0073468e: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734691: je 0x7346b2 */ if (fZ) goto L_007346b2;
L_00734693:; BB(0x00734693);
    /* 00734693: mov ecx, esi */ r_ecx = r_esi;
    /* 00734695: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x73469au); f_0073608c();
    /* 0073469a: mov ecx, esi */ r_ecx = r_esi;
    /* 0073469c: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x7346a1u); f_00736458();
    /* 007346a1: movsx edx, byte ptr [edi + 0x1f] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x1fu));
    /* 007346a5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007346a6: mov ecx, esi */ r_ecx = r_esi;
    /* 007346a8: call 0x736510 */ r_esp -= 4; W32(r_esp, 0x7346adu); f_00736510();
    /* 007346ad: mov eax, esi */ r_eax = r_esi;
    /* 007346af: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007346b0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007346b1: ret  */ FN_RET(0x00734628); r_esp += 4; return;
L_007346b2:; BB(0x007346b2);
    /* 007346b2: push 0x140 */ { u32 v = 0x140u; r_esp -= 4; W32(r_esp, v); }
    /* 007346b7: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7346bcu); f_0079317c();
    /* 007346bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007346bd: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007346bf: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007346c1: mov ecx, esi */ r_ecx = r_esi;
    /* 007346c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007346c4: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7346c9u); f_00735c90();
    /* 007346c9: jmp 0x734693 */ goto L_00734693;
}

void f_007346cc(void) /* sub_7346CC */
{
    FN_ENTER(0x007346cc);
    /* 007346cc: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 007346cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007346d1: je 0x7346d4 */ if (fZ) goto L_007346d4;
L_007346d3:; BB(0x007346d3);
    /* 007346d3: ret  */ FN_RET(0x007346cc); r_esp += 4; return;
L_007346d4:; BB(0x007346d4);
    /* 007346d4: mov eax, 0x8f8818 */ r_eax = 0x8f8818u;
    /* 007346d9: ret  */ FN_RET(0x007346cc); r_esp += 4; return;
}

void f_007346dc(void) /* sub_7346DC */
{
    FN_ENTER(0x007346dc);
    /* 007346dc: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 007346df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007346e1: je 0x7346e4 */ if (fZ) goto L_007346e4;
L_007346e3:; BB(0x007346e3);
    /* 007346e3: ret  */ FN_RET(0x007346dc); r_esp += 4; return;
L_007346e4:; BB(0x007346e4);
    /* 007346e4: mov eax, 0x8f8818 */ r_eax = 0x8f8818u;
    /* 007346e9: ret  */ FN_RET(0x007346dc); r_esp += 4; return;
}

void f_007346ec(void) /* sub_7346EC */
{
    FN_ENTER(0x007346ec);
    /* 007346ec: movsx eax, byte ptr [ecx + 0x1e] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x1eu));
    /* 007346f0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007346f3: je 0x7346fa */ if (fZ) goto L_007346fa;
L_007346f5:; BB(0x007346f5);
    /* 007346f5: movsx eax, byte ptr [ecx + 0x1f] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0x1fu));
    /* 007346f9: ret  */ FN_RET(0x007346ec); r_esp += 4; return;
L_007346fa:; BB(0x007346fa);
    /* 007346fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007346fc: ret  */ FN_RET(0x007346ec); r_esp += 4; return;
}

void f_00734700(void) /* sub_734700 */
{
    FN_ENTER(0x00734700);
    /* 00734700: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00734701: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00734703: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00734705: call 0x734724 */ r_esp -= 4; W32(r_esp, 0x73470au); f_00734724();
    /* 0073470a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0073470e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00734710: jne 0x734716 */ if (!fZ) goto L_00734716;
L_00734712:; BB(0x00734712);
    /* 00734712: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00734713: ret 4 */ FN_RET(0x00734700); r_esp += 8; return;
L_00734716:; BB(0x00734716);
    /* 00734716: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00734717: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x73471cu); f_005c2f74();
    /* 0073471c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073471d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073471e: ret 4 */ FN_RET(0x00734700); r_esp += 8; return;
}

void f_00734724(void) /* sub_734724 */
{
    FN_ENTER(0x00734724);
    /* 00734724: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00734725: mov ebp, esp */ r_ebp = r_esp;
    /* 00734727: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00734729: push 0x8f1894 */ { u32 v = 0x8f1894u; r_esp -= 4; W32(r_esp, v); }
    /* 0073472e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00734734: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734735: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0073473c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0073473f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00734742: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00734745: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00734748: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0073474b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0073474e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00734755: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00734758: mov ecx, dword ptr [eax + 0x64] */ r_ecx = R32((u32)(r_eax+0x64u));
    /* 0073475b: mov dword ptr [eax], 0xb40a38 */ W32((u32)(r_eax), 0xb40a38u);
    /* 00734761: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734763: je 0x73476f */ if (fZ) goto L_0073476f;
L_00734765:; BB(0x00734765);
    /* 00734765: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00734767: call 0x721474 */ r_esp -= 4; W32(r_esp, 0x73476cu); f_00721474();
    /* 0073476c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_0073476f:; BB(0x0073476f);
    /* 0073476f: mov ecx, dword ptr [eax + 0x60] */ r_ecx = R32((u32)(r_eax+0x60u));
    /* 00734772: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734774: je 0x734780 */ if (fZ) goto L_00734780;
L_00734776:; BB(0x00734776);
    /* 00734776: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00734778: call 0x728a10 */ r_esp -= 4; W32(r_esp, 0x73477du); f_00728a10();
    /* 0073477d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_00734780:; BB(0x00734780);
    /* 00734780: push dword ptr [eax + 0x98] */ { u32 v = R32((u32)(r_eax+0x98u)); r_esp -= 4; W32(r_esp, v); }
    /* 00734786: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x73478bu); f_00857e98();
    /* 0073478b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0073478c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00734793: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00734796: call 0x710788 */ r_esp -= 4; W32(r_esp, 0x73479bu); f_00710788();
    /* 0073479b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0073479e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007347a5: mov esp, ebp */ r_esp = r_ebp;
    /* 007347a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007347a8: ret  */ FN_RET(0x00734724); r_esp += 4; return;
}

void f_007347ac(void) /* sub_7347AC */
{
    FN_ENTER(0x007347ac);
    /* 007347ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007347ad: mov ebp, esp */ r_ebp = r_esp;
    /* 007347af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007347b1: push 0x8f18b0 */ { u32 v = 0x8f18b0u; r_esp -= 4; W32(r_esp, v); }
    /* 007347b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007347bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007347bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007347c4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007347c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007347ca: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 007347cd: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 007347d0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 007347d3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 007347d6: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 007347d9: movsx edx, word ptr [ebp + 0xc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 007347dd: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 007347e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007347e1: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 007347e4: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 007347e7: push 0x9f310c */ { u32 v = 0x9f310cu; r_esp -= 4; W32(r_esp, v); }
    /* 007347ec: call 0x7108c4 */ r_esp -= 4; W32(r_esp, 0x7347f1u); f_007108c4();
    /* 007347f1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007347f8: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007347fb: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 007347fe: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00734801: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00734803: mov word ptr [esi + 0x86], dx */ W16((u32)(r_esi+0x86u), (u16)r_edx);
    /* 0073480a: mov word ptr [esi + 0x88], dx */ W16((u32)(r_esi+0x88u), (u16)r_edx);
    /* 00734811: mov dword ptr [esi], 0xb40a38 */ W32((u32)(r_esi), 0xb40a38u);
    /* 00734817: mov eax, dword ptr [0x9f30e4] */ r_eax = R32((u32)(0x9f30e4u));
    /* 0073481c: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 0073481f: mov word ptr [esi + 0x8a], di */ W16((u32)(r_esi+0x8au), (u16)r_edi);
    /* 00734826: mov word ptr [esi + 0x8c], dx */ W16((u32)(r_esi+0x8cu), (u16)r_edx);
    /* 0073482d: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 00734834: mov word ptr [esi + 0x20], cx */ W16((u32)(r_esi+0x20u), (u16)r_ecx);
    /* 00734838: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 0073483d: mov word ptr [esi + 0x8e], bx */ W16((u32)(r_esi+0x8eu), (u16)r_ebx);
    /* 00734844: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 00734847: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00734849: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073484b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0073484c: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x734851u); f_008581c5();
    /* 00734851: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00734852: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00734855: mov ecx, edi */ r_ecx = r_edi;
    /* 00734857: mov dword ptr [ebx + 0x98], eax */ W32((u32)(r_ebx+0x98u), r_eax);
    /* 0073485d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0073485f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00734861: jbe 0x7348ab */ if ((fC||fZ)) goto L_007348ab;
L_00734863:; BB(0x00734863);
    /* 00734863: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00734866: jb 0x734894 */ if (fC) goto L_00734894;
L_00734868:; BB(0x00734868);
    /* 00734868: lea ebx, [ecx - 6] */ r_ebx = (u32)(r_ecx+0xfffffffau);
L_0073486b:; BB(0x0073486b);
    /* 0073486b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0073486d: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0073486f: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00734872: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00734875: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 00734878: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 0073487b: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 0073487e: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 00734881: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 00734884: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 00734887: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 0073488a: add eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073488d: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00734890: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00734892: jbe 0x73486b */ if ((fC||fZ)) goto L_0073486b;
L_00734894:; BB(0x00734894);
    /* 00734894: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00734897: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00734899: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0073489b: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 0073489e: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007348a1: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007348a4: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007348a6: jb 0x734894 */ if (fC) goto L_00734894;
L_007348a8:; BB(0x007348a8);
    /* 007348a8: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
L_007348ab:; BB(0x007348ab);
    /* 007348ab: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007348ae: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007348b1: mov dword ptr [ebx + 0x94], 0 */ W32((u32)(r_ebx+0x94u), 0x0u);
    /* 007348bb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007348bd: mov dword ptr [ebx + 0x60], edx */ W32((u32)(r_ebx+0x60u), r_edx);
    /* 007348c0: mov dword ptr [ebx + 0x64], edx */ W32((u32)(r_ebx+0x64u), r_edx);
    /* 007348c3: mov eax, ebx */ r_eax = r_ebx;
    /* 007348c5: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007348c8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007348cb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007348d2: mov esp, ebp */ r_esp = r_ebp;
    /* 007348d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007348d5: ret 0xc */ FN_RET(0x007347ac); r_esp += 16; return;
}

void f_007348d8(void) /* sub_7348D8 */
{
    FN_ENTER(0x007348d8);
    /* 007348d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007348d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007348da: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007348db: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007348de: mov esi, ecx */ r_esi = r_ecx;
    /* 007348e0: fld dword ptr [0x9714c0] */ FPUSH(R_F32((u32)(0x9714c0u)));
    /* 007348e6: movsx edx, word ptr [esi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 007348ed: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007348ef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 007348f1: jbe 0x7350ba */ if ((fC||fZ)) goto L_007350ba;
L_007348f7:; BB(0x007348f7);
    /* 007348f7: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 007348fa: mov eax, dword ptr [eax + ecx*4] */ r_eax = R32((u32)(r_eax+r_ecx*4));
    /* 007348fd: mov ebx, dword ptr [eax + 0x20] */ r_ebx = R32((u32)(r_eax+0x20u));
    /* 00734900: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734902: je 0x73492e */ if (fZ) goto L_0073492e;
L_00734904:; BB(0x00734904);
    /* 00734904: fld dword ptr [eax + 0x14] */ FPUSH(R_F32((u32)(r_eax+0x14u)));
    /* 00734907: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00734909: fst dword ptr [eax + 0xc] */ W_F32((u32)(r_eax+0xcu), ST(0));
    /* 0073490c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0073490e: fcom qword ptr [0x9713a0] */ fx_compare(ST(0), R_F64((u32)(0x9713a0u))); 
    /* 00734914: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00734916: movsx edx, word ptr [esi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 0073491d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0073491e: ja 0x734924 */ if ((!fC&&!fZ)) goto L_00734924;
L_00734920:; BB(0x00734920);
    /* 00734920: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00734922: jmp 0x73492e */ goto L_0073492e;
L_00734924:; BB(0x00734924);
    /* 00734924: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00734926: fadd dword ptr [0x9714bc] */ ST(0) = ST(0) + R_F32((u32)(0x9714bcu));
    /* 0073492c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
L_0073492e:; BB(0x0073492e);
    /* 0073492e: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00734931: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00734933: jb 0x7348f7 */ if (fC) goto L_007348f7;
L_00734935:; BB(0x00734935);
    /* 00734935: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00734937:; BB(0x00734937);
    /* 00734937: fld dword ptr [0x9714b8] */ FPUSH(R_F32((u32)(0x9714b8u)));
    /* 0073493d: fld dword ptr [esi + 0x94] */ FPUSH(R_F32((u32)(r_esi+0x94u)));
    /* 00734943: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00734945: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00734947: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 0073494a: fstp dword ptr [esi + 0x94] */ W_F32((u32)(r_esi+0x94u), ST(0)); FPOP();
    /* 00734950: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00734952: jne 0x734962 */ if (!fZ) goto L_00734962;
L_00734954:; BB(0x00734954);
    /* 00734954: mov dword ptr [esi + 0x5c], 0x1000000 */ W32((u32)(r_esi+0x5cu), 0x1000000u);
    /* 0073495b: mov edx, 0x1000000 */ r_edx = 0x1000000u;
    /* 00734960: jmp 0x734965 */ goto L_00734965;
L_00734962:; BB(0x00734962);
    /* 00734962: mov edx, dword ptr [esi + 0x5c] */ r_edx = R32((u32)(r_esi+0x5cu));
L_00734965:; BB(0x00734965);
    /* 00734965: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0073496c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073496e: jne 0x734f4d */ if (!fZ) goto L_00734f4d;
L_00734974:; BB(0x00734974);
    /* 00734974: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00734977: jle 0x734f4d */ if ((fZ||fS!=fO)) goto L_00734f4d;
L_0073497d:; BB(0x0073497d);
    /* 0073497d: call 0x719a48 */ r_esp -= 4; W32(r_esp, 0x734982u); f_00719a48();
    /* 00734982: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734984: jne 0x73498e */ if (!fZ) goto L_0073498e;
L_00734986:; BB(0x00734986);
    /* 00734986: mov edx, dword ptr [esi + 0x5c] */ r_edx = R32((u32)(r_esi+0x5cu));
    /* 00734989: jmp 0x734f4d */ goto L_00734f4d;
L_0073498e:; BB(0x0073498e);
    /* 0073498e: mov ecx, esi */ r_ecx = r_esi;
    /* 00734990: call 0x712480 */ r_esp -= 4; W32(r_esp, 0x734995u); f_00712480();
    /* 00734995: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734997: je 0x734f4a */ if (fZ) goto L_00734f4a;
L_0073499d:; BB(0x0073499d);
    /* 0073499d: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 007349a4: test edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007349aa: je 0x734a2e */ if (fZ) goto L_00734a2e;
L_007349b0:; BB(0x007349b0);
    /* 007349b0: and edx, 0x9fff */ {  u32 a = r_edx; u32 b = 0x9fffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007349b6: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 007349ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007349bb: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 007349c2: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x7349c7u); f_00719140();
    /* 007349c7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007349c8: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 007349cf: and edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 007349d2: jne 0x734a31 */ if (!fZ) goto L_00734a31;
L_007349d4:; BB(0x007349d4);
    /* 007349d4: push dword ptr [0xa0f684] */ { u32 v = R32((u32)(0xa0f684u)); r_esp -= 4; W32(r_esp, v); }
    /* 007349da: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 007349dd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007349df: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007349e1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007349e3: lea ebx, [eax + eax + 0xaae75c] */ r_ebx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 007349ea: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007349ec: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x7349f1u); f_007c1160();
    /* 007349f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007349f3: je 0x734a03 */ if (fZ) goto L_00734a03;
L_007349f5:; BB(0x007349f5);
    /* 007349f5: mov ecx, esi */ r_ecx = r_esi;
    /* 007349f7: call 0x7350fc */ r_esp -= 4; W32(r_esp, 0x7349fcu); f_007350fc();
    /* 007349fc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007349ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00734a00: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00734a01: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00734a02: ret  */ FN_RET(0x007348d8); r_esp += 4; return;
L_00734a03:; BB(0x00734a03);
    /* 00734a03: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 00734a09: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00734a0b: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x734a10u); f_007c1160();
    /* 00734a10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734a12: je 0x734a22 */ if (fZ) goto L_00734a22;
L_00734a14:; BB(0x00734a14);
    /* 00734a14: mov ecx, esi */ r_ecx = r_esi;
    /* 00734a16: call 0x7350c4 */ r_esp -= 4; W32(r_esp, 0x734a1bu); f_007350c4();
    /* 00734a1b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00734a1e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00734a1f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00734a20: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00734a21: ret  */ FN_RET(0x007348d8); r_esp += 4; return;
L_00734a22:; BB(0x00734a22);
    /* 00734a22: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 00734a29: and edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00734a2c: jmp 0x734a31 */ goto L_00734a31;
L_00734a2e:; BB(0x00734a2e);
    /* 00734a2e: and edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
L_00734a31:; BB(0x00734a31);
    /* 00734a31: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734a33: je 0x734a3d */ if (fZ) goto L_00734a3d;
L_00734a35:; BB(0x00734a35);
    /* 00734a35: mov edx, dword ptr [esi + 0x5c] */ r_edx = R32((u32)(r_esi+0x5cu));
    /* 00734a38: jmp 0x734f4d */ goto L_00734f4d;
L_00734a3d:; BB(0x00734a3d);
    /* 00734a3d: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 00734a41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734a42: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x734a47u); f_00719140();
    /* 00734a47: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00734a48: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 00734a4f: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00734a52: je 0x734ca1 */ if (fZ) goto L_00734ca1;
L_00734a58:; BB(0x00734a58);
    /* 00734a58: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734a5e: je 0x734b7c */ if (fZ) goto L_00734b7c;
L_00734a64:; BB(0x00734a64);
    /* 00734a64: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00734a66: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00734a68: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00734a6b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00734a6d: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 00734a73: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00734a75: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00734a77: lea ebx, [eax + eax + 0xaae75c] */ r_ebx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00734a7e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00734a80: call 0x7c0768 */ r_esp -= 4; W32(r_esp, 0x734a85u); f_007c0768();
    /* 00734a85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734a87: je 0x734aec */ if (fZ) goto L_00734aec;
L_00734a89:; BB(0x00734a89);
    /* 00734a89: movsx edi, word ptr [esi + 0x8c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x8cu));
    /* 00734a90: mov eax, dword ptr [esi + 0x98] */ r_eax = R32((u32)(r_esi+0x98u));
    /* 00734a96: mov edx, dword ptr [eax + edi*8] */ r_edx = R32((u32)(r_eax+r_edi*8));
    /* 00734a99: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734a9f: jne 0x734ab3 */ if (!fZ) goto L_00734ab3;
L_00734aa1:; BB(0x00734aa1);
    /* 00734aa1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00734aa3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734aa4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734aa5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734aa6: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00734aab: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x734ab0u); f_00814298();
    /* 00734ab0: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00734ab3:; BB(0x00734ab3);
    /* 00734ab3: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00734ab6: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 00734ab9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00734abb: jl 0x73502e */ if ((fS!=fO)) goto L_0073502e;
L_00734ac1:; BB(0x00734ac1);
    /* 00734ac1: cmp dx, word ptr [esi + 0x8c] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esi+0x8cu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00734ac8: je 0x734aec */ if (fZ) goto L_00734aec;
L_00734aca:; BB(0x00734aca);
    /* 00734aca: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00734acd: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 00734ad0: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 00734ad4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00734ad6: je 0x734adf */ if (fZ) goto L_00734adf;
L_00734ad8:; BB(0x00734ad8);
    /* 00734ad8: mov eax, 1 */ r_eax = 0x1u;
    /* 00734add: jmp 0x734ae1 */ goto L_00734ae1;
L_00734adf:; BB(0x00734adf);
    /* 00734adf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00734ae1:; BB(0x00734ae1);
    /* 00734ae1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734ae3: je 0x734ab3 */ if (fZ) goto L_00734ab3;
L_00734ae5:; BB(0x00734ae5);
    /* 00734ae5: mov word ptr [esi + 0x8c], di */ W16((u32)(r_esi+0x8cu), (u16)r_edi);
L_00734aec:; BB(0x00734aec);
    /* 00734aec: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00734aee: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00734af0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00734af2: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 00734af8: call 0x7c0768 */ r_esp -= 4; W32(r_esp, 0x734afdu); f_007c0768();
    /* 00734afd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734aff: je 0x734f03 */ if (fZ) goto L_00734f03;
L_00734b05:; BB(0x00734b05);
    /* 00734b05: movsx edi, word ptr [esi + 0x8c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x8cu));
    /* 00734b0c: mov eax, dword ptr [esi + 0x98] */ r_eax = R32((u32)(r_esi+0x98u));
    /* 00734b12: mov edx, dword ptr [eax + edi*8] */ r_edx = R32((u32)(r_eax+r_edi*8));
    /* 00734b15: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734b1b: jne 0x734b2f */ if (!fZ) goto L_00734b2f;
L_00734b1d:; BB(0x00734b1d);
    /* 00734b1d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00734b1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734b20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734b21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734b22: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00734b27: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x734b2cu); f_00814298();
    /* 00734b2c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00734b2f:; BB(0x00734b2f);
    /* 00734b2f: movsx eax, word ptr [esi + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
L_00734b36:; BB(0x00734b36);
    /* 00734b36: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00734b39: movsx ecx, di */ r_ecx = (u32)(i32)(i16)(u16)r_edi;
    /* 00734b3c: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00734b3e: jl 0x734b54 */ if ((fS!=fO)) goto L_00734b54;
L_00734b40:; BB(0x00734b40);
    /* 00734b40: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 00734b47: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00734b4a: jne 0x734f03 */ if (!fZ) goto L_00734f03;
L_00734b50:; BB(0x00734b50);
    /* 00734b50: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00734b52: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00734b54:; BB(0x00734b54);
    /* 00734b54: cmp cx, word ptr [esi + 0x8c] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_esi+0x8cu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00734b5b: je 0x734f03 */ if (fZ) goto L_00734f03;
L_00734b61:; BB(0x00734b61);
    /* 00734b61: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 00734b64: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 00734b67: movzx edx, word ptr [edx + 4] */ r_edx = (u32)R16((u32)(r_edx+0x4u));
    /* 00734b6b: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00734b6e: je 0x734b36 */ if (fZ) goto L_00734b36;
L_00734b70:; BB(0x00734b70);
    /* 00734b70: mov word ptr [esi + 0x8c], di */ W16((u32)(r_esi+0x8cu), (u16)r_edi);
    /* 00734b77: jmp 0x734f03 */ goto L_00734f03;
L_00734b7c:; BB(0x00734b7c);
    /* 00734b7c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00734b7e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00734b80: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00734b83: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00734b85: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 00734b8b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00734b8d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00734b8f: lea ebx, [eax + eax + 0xaae75c] */ r_ebx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00734b96: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00734b98: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x734b9du); f_007c09fc();
    /* 00734b9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734b9f: je 0x734c04 */ if (fZ) goto L_00734c04;
L_00734ba1:; BB(0x00734ba1);
    /* 00734ba1: movsx edi, word ptr [esi + 0x8c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x8cu));
    /* 00734ba8: mov eax, dword ptr [esi + 0x98] */ r_eax = R32((u32)(r_esi+0x98u));
    /* 00734bae: mov edx, dword ptr [eax + edi*8] */ r_edx = R32((u32)(r_eax+r_edi*8));
    /* 00734bb1: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734bb7: jne 0x734bcb */ if (!fZ) goto L_00734bcb;
L_00734bb9:; BB(0x00734bb9);
    /* 00734bb9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00734bbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734bbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734bbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734bbe: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00734bc3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x734bc8u); f_00814298();
    /* 00734bc8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00734bcb:; BB(0x00734bcb);
    /* 00734bcb: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00734bce: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 00734bd1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00734bd3: jl 0x735051 */ if ((fS!=fO)) goto L_00735051;
L_00734bd9:; BB(0x00734bd9);
    /* 00734bd9: cmp dx, word ptr [esi + 0x8c] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esi+0x8cu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00734be0: je 0x734c04 */ if (fZ) goto L_00734c04;
L_00734be2:; BB(0x00734be2);
    /* 00734be2: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00734be5: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 00734be8: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 00734bec: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00734bee: je 0x734bf7 */ if (fZ) goto L_00734bf7;
L_00734bf0:; BB(0x00734bf0);
    /* 00734bf0: mov eax, 1 */ r_eax = 0x1u;
    /* 00734bf5: jmp 0x734bf9 */ goto L_00734bf9;
L_00734bf7:; BB(0x00734bf7);
    /* 00734bf7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00734bf9:; BB(0x00734bf9);
    /* 00734bf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734bfb: je 0x734bcb */ if (fZ) goto L_00734bcb;
L_00734bfd:; BB(0x00734bfd);
    /* 00734bfd: mov word ptr [esi + 0x8c], di */ W16((u32)(r_esi+0x8cu), (u16)r_edi);
L_00734c04:; BB(0x00734c04);
    /* 00734c04: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00734c06: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00734c08: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00734c0a: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 00734c10: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x734c15u); f_007c09fc();
    /* 00734c15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734c17: je 0x734f03 */ if (fZ) goto L_00734f03;
L_00734c1d:; BB(0x00734c1d);
    /* 00734c1d: movsx edi, word ptr [esi + 0x8c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x8cu));
    /* 00734c24: mov eax, dword ptr [esi + 0x98] */ r_eax = R32((u32)(r_esi+0x98u));
    /* 00734c2a: mov edx, dword ptr [eax + edi*8] */ r_edx = R32((u32)(r_eax+r_edi*8));
    /* 00734c2d: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734c33: jne 0x734c47 */ if (!fZ) goto L_00734c47;
L_00734c35:; BB(0x00734c35);
    /* 00734c35: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00734c37: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734c38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734c39: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734c3a: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00734c3f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x734c44u); f_00814298();
    /* 00734c44: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00734c47:; BB(0x00734c47);
    /* 00734c47: movsx eax, word ptr [esi + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
L_00734c4e:; BB(0x00734c4e);
    /* 00734c4e: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00734c51: movsx ecx, di */ r_ecx = (u32)(i32)(i16)(u16)r_edi;
    /* 00734c54: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00734c56: jl 0x734c6c */ if ((fS!=fO)) goto L_00734c6c;
L_00734c58:; BB(0x00734c58);
    /* 00734c58: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 00734c5f: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00734c62: jne 0x734f03 */ if (!fZ) goto L_00734f03;
L_00734c68:; BB(0x00734c68);
    /* 00734c68: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00734c6a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00734c6c:; BB(0x00734c6c);
    /* 00734c6c: cmp cx, word ptr [esi + 0x8c] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_esi+0x8cu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00734c73: je 0x734f03 */ if (fZ) goto L_00734f03;
L_00734c79:; BB(0x00734c79);
    /* 00734c79: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 00734c7c: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 00734c7f: movzx edx, word ptr [edx + 4] */ r_edx = (u32)R16((u32)(r_edx+0x4u));
    /* 00734c83: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00734c86: je 0x734c8f */ if (fZ) goto L_00734c8f;
L_00734c88:; BB(0x00734c88);
    /* 00734c88: mov edx, 1 */ r_edx = 0x1u;
    /* 00734c8d: jmp 0x734c91 */ goto L_00734c91;
L_00734c8f:; BB(0x00734c8f);
    /* 00734c8f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00734c91:; BB(0x00734c91);
    /* 00734c91: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734c93: je 0x734c4e */ if (fZ) goto L_00734c4e;
L_00734c95:; BB(0x00734c95);
    /* 00734c95: mov word ptr [esi + 0x8c], di */ W16((u32)(r_esi+0x8cu), (u16)r_edi);
    /* 00734c9c: jmp 0x734f03 */ goto L_00734f03;
L_00734ca1:; BB(0x00734ca1);
    /* 00734ca1: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734ca7: je 0x734def */ if (fZ) goto L_00734def;
L_00734cad:; BB(0x00734cad);
    /* 00734cad: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00734caf: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00734cb1: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00734cb4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00734cb6: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 00734cbc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00734cbe: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00734cc0: lea ebx, [eax + eax + 0xaae75c] */ r_ebx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00734cc7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00734cc9: call 0x7c04f4 */ r_esp -= 4; W32(r_esp, 0x734cceu); f_007c04f4();
    /* 00734cce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734cd0: jne 0x734ce7 */ if (!fZ) goto L_00734ce7;
L_00734cd2:; BB(0x00734cd2);
    /* 00734cd2: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00734cd4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00734cd6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00734cd8: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 00734cde: call 0x7c0768 */ r_esp -= 4; W32(r_esp, 0x734ce3u); f_007c0768();
    /* 00734ce3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734ce5: je 0x734d4a */ if (fZ) goto L_00734d4a;
L_00734ce7:; BB(0x00734ce7);
    /* 00734ce7: movsx edi, word ptr [esi + 0x8c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x8cu));
    /* 00734cee: mov eax, dword ptr [esi + 0x98] */ r_eax = R32((u32)(r_esi+0x98u));
    /* 00734cf4: mov edx, dword ptr [eax + edi*8] */ r_edx = R32((u32)(r_eax+r_edi*8));
    /* 00734cf7: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734cfd: jne 0x734d11 */ if (!fZ) goto L_00734d11;
L_00734cff:; BB(0x00734cff);
    /* 00734cff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00734d01: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734d02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734d03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734d04: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00734d09: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x734d0eu); f_00814298();
    /* 00734d0e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00734d11:; BB(0x00734d11);
    /* 00734d11: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00734d14: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 00734d17: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00734d19: jl 0x735074 */ if ((fS!=fO)) goto L_00735074;
L_00734d1f:; BB(0x00734d1f);
    /* 00734d1f: cmp dx, word ptr [esi + 0x8c] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esi+0x8cu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00734d26: je 0x734d4a */ if (fZ) goto L_00734d4a;
L_00734d28:; BB(0x00734d28);
    /* 00734d28: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00734d2b: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 00734d2e: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 00734d32: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00734d34: je 0x734d3d */ if (fZ) goto L_00734d3d;
L_00734d36:; BB(0x00734d36);
    /* 00734d36: mov eax, 1 */ r_eax = 0x1u;
    /* 00734d3b: jmp 0x734d3f */ goto L_00734d3f;
L_00734d3d:; BB(0x00734d3d);
    /* 00734d3d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00734d3f:; BB(0x00734d3f);
    /* 00734d3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734d41: je 0x734d11 */ if (fZ) goto L_00734d11;
L_00734d43:; BB(0x00734d43);
    /* 00734d43: mov word ptr [esi + 0x8c], di */ W16((u32)(r_esi+0x8cu), (u16)r_edi);
L_00734d4a:; BB(0x00734d4a);
    /* 00734d4a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00734d4c: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00734d4e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00734d50: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 00734d56: call 0x7c04f4 */ r_esp -= 4; W32(r_esp, 0x734d5bu); f_007c04f4();
    /* 00734d5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734d5d: jne 0x734d78 */ if (!fZ) goto L_00734d78;
L_00734d5f:; BB(0x00734d5f);
    /* 00734d5f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00734d61: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00734d63: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00734d65: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 00734d6b: call 0x7c0768 */ r_esp -= 4; W32(r_esp, 0x734d70u); f_007c0768();
    /* 00734d70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734d72: je 0x734f03 */ if (fZ) goto L_00734f03;
L_00734d78:; BB(0x00734d78);
    /* 00734d78: movsx edi, word ptr [esi + 0x8c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x8cu));
    /* 00734d7f: mov eax, dword ptr [esi + 0x98] */ r_eax = R32((u32)(r_esi+0x98u));
    /* 00734d85: mov edx, dword ptr [eax + edi*8] */ r_edx = R32((u32)(r_eax+r_edi*8));
    /* 00734d88: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734d8e: jne 0x734da2 */ if (!fZ) goto L_00734da2;
L_00734d90:; BB(0x00734d90);
    /* 00734d90: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00734d92: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734d93: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734d94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734d95: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00734d9a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x734d9fu); f_00814298();
    /* 00734d9f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00734da2:; BB(0x00734da2);
    /* 00734da2: movsx eax, word ptr [esi + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
L_00734da9:; BB(0x00734da9);
    /* 00734da9: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00734dac: movsx ecx, di */ r_ecx = (u32)(i32)(i16)(u16)r_edi;
    /* 00734daf: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00734db1: jl 0x734dc7 */ if ((fS!=fO)) goto L_00734dc7;
L_00734db3:; BB(0x00734db3);
    /* 00734db3: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 00734dba: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00734dbd: jne 0x734f03 */ if (!fZ) goto L_00734f03;
L_00734dc3:; BB(0x00734dc3);
    /* 00734dc3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00734dc5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00734dc7:; BB(0x00734dc7);
    /* 00734dc7: cmp cx, word ptr [esi + 0x8c] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_esi+0x8cu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00734dce: je 0x734f03 */ if (fZ) goto L_00734f03;
L_00734dd4:; BB(0x00734dd4);
    /* 00734dd4: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 00734dd7: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 00734dda: movzx edx, word ptr [edx + 4] */ r_edx = (u32)R16((u32)(r_edx+0x4u));
    /* 00734dde: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00734de1: je 0x734da9 */ if (fZ) goto L_00734da9;
L_00734de3:; BB(0x00734de3);
    /* 00734de3: mov word ptr [esi + 0x8c], di */ W16((u32)(r_esi+0x8cu), (u16)r_edi);
    /* 00734dea: jmp 0x734f03 */ goto L_00734f03;
L_00734def:; BB(0x00734def);
    /* 00734def: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00734df1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00734df3: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00734df6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00734df8: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 00734dfe: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00734e00: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00734e02: lea ebx, [eax + eax + 0xaae75c] */ r_ebx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00734e09: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00734e0b: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x734e10u); f_007c0c6c();
    /* 00734e10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734e12: je 0x734e77 */ if (fZ) goto L_00734e77;
L_00734e14:; BB(0x00734e14);
    /* 00734e14: movsx edi, word ptr [esi + 0x8c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x8cu));
    /* 00734e1b: mov eax, dword ptr [esi + 0x98] */ r_eax = R32((u32)(r_esi+0x98u));
    /* 00734e21: mov edx, dword ptr [eax + edi*8] */ r_edx = R32((u32)(r_eax+r_edi*8));
    /* 00734e24: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734e2a: jne 0x734e3e */ if (!fZ) goto L_00734e3e;
L_00734e2c:; BB(0x00734e2c);
    /* 00734e2c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00734e2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734e2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734e30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734e31: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00734e36: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x734e3bu); f_00814298();
    /* 00734e3b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00734e3e:; BB(0x00734e3e);
    /* 00734e3e: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00734e41: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 00734e44: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00734e46: jl 0x735097 */ if ((fS!=fO)) goto L_00735097;
L_00734e4c:; BB(0x00734e4c);
    /* 00734e4c: cmp dx, word ptr [esi + 0x8c] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_esi+0x8cu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00734e53: je 0x734e77 */ if (fZ) goto L_00734e77;
L_00734e55:; BB(0x00734e55);
    /* 00734e55: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00734e58: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 00734e5b: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 00734e5f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00734e61: je 0x734e6a */ if (fZ) goto L_00734e6a;
L_00734e63:; BB(0x00734e63);
    /* 00734e63: mov eax, 1 */ r_eax = 0x1u;
    /* 00734e68: jmp 0x734e6c */ goto L_00734e6c;
L_00734e6a:; BB(0x00734e6a);
    /* 00734e6a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00734e6c:; BB(0x00734e6c);
    /* 00734e6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734e6e: je 0x734e3e */ if (fZ) goto L_00734e3e;
L_00734e70:; BB(0x00734e70);
    /* 00734e70: mov word ptr [esi + 0x8c], di */ W16((u32)(r_esi+0x8cu), (u16)r_edi);
L_00734e77:; BB(0x00734e77);
    /* 00734e77: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00734e79: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00734e7b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00734e7d: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 00734e83: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x734e88u); f_007c0c6c();
    /* 00734e88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734e8a: je 0x734f03 */ if (fZ) goto L_00734f03;
L_00734e8c:; BB(0x00734e8c);
    /* 00734e8c: movsx edi, word ptr [esi + 0x8c] */ r_edi = (u32)(i32)(i16)R16((u32)(r_esi+0x8cu));
    /* 00734e93: mov eax, dword ptr [esi + 0x98] */ r_eax = R32((u32)(r_esi+0x98u));
    /* 00734e99: mov edx, dword ptr [eax + edi*8] */ r_edx = R32((u32)(r_eax+r_edi*8));
    /* 00734e9c: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734ea2: jne 0x734eb6 */ if (!fZ) goto L_00734eb6;
L_00734ea4:; BB(0x00734ea4);
    /* 00734ea4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00734ea6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734ea7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734ea8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734ea9: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00734eae: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x734eb3u); f_00814298();
    /* 00734eb3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00734eb6:; BB(0x00734eb6);
    /* 00734eb6: movsx eax, word ptr [esi + 0x8a] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
L_00734ebd:; BB(0x00734ebd);
    /* 00734ebd: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00734ec0: movsx ecx, di */ r_ecx = (u32)(i32)(i16)(u16)r_edi;
    /* 00734ec3: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00734ec5: jl 0x734ed7 */ if ((fS!=fO)) goto L_00734ed7;
L_00734ec7:; BB(0x00734ec7);
    /* 00734ec7: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 00734ece: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00734ed1: jne 0x734f03 */ if (!fZ) goto L_00734f03;
L_00734ed3:; BB(0x00734ed3);
    /* 00734ed3: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00734ed5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00734ed7:; BB(0x00734ed7);
    /* 00734ed7: cmp cx, word ptr [esi + 0x8c] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_esi+0x8cu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00734ede: je 0x734f03 */ if (fZ) goto L_00734f03;
L_00734ee0:; BB(0x00734ee0);
    /* 00734ee0: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 00734ee3: mov edx, dword ptr [edx + ecx*4] */ r_edx = R32((u32)(r_edx+r_ecx*4));
    /* 00734ee6: movzx edx, word ptr [edx + 4] */ r_edx = (u32)R16((u32)(r_edx+0x4u));
    /* 00734eea: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00734eed: je 0x734ef6 */ if (fZ) goto L_00734ef6;
L_00734eef:; BB(0x00734eef);
    /* 00734eef: mov edx, 1 */ r_edx = 0x1u;
    /* 00734ef4: jmp 0x734ef8 */ goto L_00734ef8;
L_00734ef6:; BB(0x00734ef6);
    /* 00734ef6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00734ef8:; BB(0x00734ef8);
    /* 00734ef8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734efa: je 0x734ebd */ if (fZ) goto L_00734ebd;
L_00734efc:; BB(0x00734efc);
    /* 00734efc: mov word ptr [esi + 0x8c], di */ W16((u32)(r_esi+0x8cu), (u16)r_edi);
L_00734f03:; BB(0x00734f03);
    /* 00734f03: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 00734f08: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00734f0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734f0f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00734f11: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x734f16u); f_007c1160();
    /* 00734f16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734f18: je 0x734f26 */ if (fZ) goto L_00734f26;
L_00734f1a:; BB(0x00734f1a);
    /* 00734f1a: mov ecx, esi */ r_ecx = r_esi;
    /* 00734f1c: call 0x735178 */ r_esp -= 4; W32(r_esp, 0x734f21u); f_00735178();
    /* 00734f21: mov edx, dword ptr [esi + 0x5c] */ r_edx = R32((u32)(r_esi+0x5cu));
    /* 00734f24: jmp 0x734f4d */ goto L_00734f4d;
L_00734f26:; BB(0x00734f26);
    /* 00734f26: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 00734f2b: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00734f2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00734f2e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00734f30: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x734f35u); f_007c1160();
    /* 00734f35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734f37: je 0x734f45 */ if (fZ) goto L_00734f45;
L_00734f39:; BB(0x00734f39);
    /* 00734f39: mov ecx, esi */ r_ecx = r_esi;
    /* 00734f3b: call 0x735134 */ r_esp -= 4; W32(r_esp, 0x734f40u); f_00735134();
    /* 00734f40: mov edx, dword ptr [esi + 0x5c] */ r_edx = R32((u32)(r_esi+0x5cu));
    /* 00734f43: jmp 0x734f4d */ goto L_00734f4d;
L_00734f45:; BB(0x00734f45);
    /* 00734f45: mov edx, dword ptr [esi + 0x5c] */ r_edx = R32((u32)(r_esi+0x5cu));
    /* 00734f48: jmp 0x734f4d */ goto L_00734f4d;
L_00734f4a:; BB(0x00734f4a);
    /* 00734f4a: mov edx, dword ptr [esi + 0x5c] */ r_edx = R32((u32)(r_esi+0x5cu));
L_00734f4d:; BB(0x00734f4d);
    /* 00734f4d: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00734f50: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00734f53: fcomp dword ptr [0x9714b4] */ fx_compare(ST(0), R_F32((u32)(0x9714b4u))); FPOP();
    /* 00734f59: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00734f5b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00734f5c: jb 0x734f76 */ if (fC) goto L_00734f76;
L_00734f5e:; BB(0x00734f5e);
    /* 00734f5e: mov ecx, dword ptr [esi + 0x60] */ r_ecx = R32((u32)(r_esi+0x60u));
    /* 00734f61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734f63: je 0x734f6a */ if (fZ) goto L_00734f6a;
L_00734f65:; BB(0x00734f65);
    /* 00734f65: call 0x761388 */ r_esp -= 4; W32(r_esp, 0x734f6au); f_00761388();
L_00734f6a:; BB(0x00734f6a);
    /* 00734f6a: mov ecx, dword ptr [esi + 0x64] */ r_ecx = R32((u32)(r_esi+0x64u));
    /* 00734f6d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734f6f: je 0x734f76 */ if (fZ) goto L_00734f76;
L_00734f71:; BB(0x00734f71);
    /* 00734f71: call 0x73f68c */ r_esp -= 4; W32(r_esp, 0x734f76u); f_0073f68c();
L_00734f76:; BB(0x00734f76);
    /* 00734f76: mov ecx, esi */ r_ecx = r_esi;
    /* 00734f78: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x734f7du); f_00710db4();
    /* 00734f7d: mov ecx, esi */ r_ecx = r_esi;
    /* 00734f7f: call 0x7351f0 */ r_esp -= 4; W32(r_esp, 0x734f84u); f_007351f0();
    /* 00734f84: mov ecx, esi */ r_ecx = r_esi;
    /* 00734f86: call 0x7107d8 */ r_esp -= 4; W32(r_esp, 0x734f8bu); f_007107d8();
    /* 00734f8b: mov ecx, esi */ r_ecx = r_esi;
    /* 00734f8d: call 0x735274 */ r_esp -= 4; W32(r_esp, 0x734f92u); f_00735274();
    /* 00734f92: mov ecx, esi */ r_ecx = r_esi;
    /* 00734f94: call 0x71087c */ r_esp -= 4; W32(r_esp, 0x734f99u); f_0071087c();
    /* 00734f99: movsx edx, word ptr [esi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 00734fa0: movsx eax, word ptr [esi + 0x88] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
    /* 00734fa7: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00734fa9: jge 0x73501c */ if ((fS==fO)) goto L_0073501c;
L_00734fab:; BB(0x00734fab);
    /* 00734fab: mov ebx, dword ptr [esi + 0x28] */ r_ebx = R32((u32)(r_esi+0x28u));
    /* 00734fae: mov ebx, dword ptr [ebx + eax*4] */ r_ebx = R32((u32)(r_ebx+r_eax*4));
    /* 00734fb1: mov edi, dword ptr [ebx + 0x20] */ r_edi = R32((u32)(r_ebx+0x20u));
    /* 00734fb4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00734fb6: je 0x73501c */ if (fZ) goto L_0073501c;
L_00734fb8:; BB(0x00734fb8);
    /* 00734fb8: movzx ebx, word ptr [ebx + 4] */ r_ebx = (u32)R16((u32)(r_ebx+0x4u));
    /* 00734fbc: test bl, 0x10 */ {  u32 a = (u8)r_ebx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00734fbf: jne 0x734fd1 */ if (!fZ) goto L_00734fd1;
L_00734fc1:; BB(0x00734fc1);
    /* 00734fc1: jmp 0x73501c */ goto L_0073501c;
L_00734fc3:; BB(0x00734fc3);
    /* 00734fc3: movsx edx, word ptr [esi + 0x8a] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x8au));
    /* 00734fca: movsx eax, word ptr [esi + 0x88] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x88u));
L_00734fd1:; BB(0x00734fd1);
    /* 00734fd1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00734fd4: mov word ptr [esi + 0x88], ax */ W16((u32)(r_esi+0x88u), (u16)r_eax);
    /* 00734fdb: movsx ebx, ax */ r_ebx = (u32)(i32)(i16)(u16)r_eax;
    /* 00734fde: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00734fe0: jge 0x73501c */ if ((fS==fO)) goto L_0073501c;
L_00734fe2:; BB(0x00734fe2);
    /* 00734fe2: mov ebx, dword ptr [esi + 0x98] */ r_ebx = R32((u32)(r_esi+0x98u));
    /* 00734fe8: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 00734feb: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 00734fee: mov eax, dword ptr [eax + edi*4] */ r_eax = R32((u32)(r_eax+r_edi*4));
    /* 00734ff1: mov edx, dword ptr [ebx + edi*8] */ r_edx = R32((u32)(r_ebx+r_edi*8));
    /* 00734ff4: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00734ff7: je 0x73500d */ if (fZ) goto L_0073500d;
L_00734ff9:; BB(0x00734ff9);
    /* 00734ff9: and edx, 0xfffffffd */ {  u32 a = r_edx; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00734ffc: mov dword ptr [ebx + edi*8], edx */ W32((u32)(r_ebx+r_edi*8), r_edx);
    /* 00734fff: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 00735003: and edx, 0xfff7 */ {  u32 a = r_edx; u32 b = 0xfff7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00735009: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
L_0073500d:; BB(0x0073500d);
    /* 0073500d: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00735010: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00735012: je 0x73501c */ if (fZ) goto L_0073501c;
L_00735014:; BB(0x00735014);
    /* 00735014: movzx eax, word ptr [eax + 4] */ r_eax = (u32)R16((u32)(r_eax+0x4u));
    /* 00735018: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073501a: jne 0x734fc3 */ if (!fZ) goto L_00734fc3;
L_0073501c:; BB(0x0073501c);
    /* 0073501c: lea eax, [esi + 0x24] */ r_eax = (u32)(r_esi+0x24u);
    /* 0073501f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00735020: mov ecx, esi */ r_ecx = r_esi;
    /* 00735022: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x735027u); f_0072a5ec();
    /* 00735027: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0073502a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0073502b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0073502c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0073502d: ret  */ FN_RET(0x007348d8); r_esp += 4; return;
L_0073502e:; BB(0x0073502e);
    /* 0073502e: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 00735035: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00735037: jne 0x734aec */ if (!fZ) goto L_00734aec;
L_0073503d:; BB(0x0073503d);
    /* 0073503d: movzx eax, word ptr [esi + 0x8a] */ r_eax = (u32)R16((u32)(r_esi+0x8au));
    /* 00735044: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00735047: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 0073504a: mov edx, edi */ r_edx = r_edi;
    /* 0073504c: jmp 0x734ac1 */ goto L_00734ac1;
L_00735051:; BB(0x00735051);
    /* 00735051: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 00735058: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073505a: jne 0x734c04 */ if (!fZ) goto L_00734c04;
L_00735060:; BB(0x00735060);
    /* 00735060: movzx eax, word ptr [esi + 0x8a] */ r_eax = (u32)R16((u32)(r_esi+0x8au));
    /* 00735067: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073506a: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 0073506d: mov edx, edi */ r_edx = r_edi;
    /* 0073506f: jmp 0x734bd9 */ goto L_00734bd9;
L_00735074:; BB(0x00735074);
    /* 00735074: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0073507b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0073507d: jne 0x734d4a */ if (!fZ) goto L_00734d4a;
L_00735083:; BB(0x00735083);
    /* 00735083: movzx eax, word ptr [esi + 0x8a] */ r_eax = (u32)R16((u32)(r_esi+0x8au));
    /* 0073508a: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0073508d: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 00735090: mov edx, edi */ r_edx = r_edi;
    /* 00735092: jmp 0x734d1f */ goto L_00734d1f;
L_00735097:; BB(0x00735097);
    /* 00735097: movzx eax, word ptr [esi + 0x84] */ r_eax = (u32)R16((u32)(r_esi+0x84u));
    /* 0073509e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007350a0: jne 0x734e77 */ if (!fZ) goto L_00734e77;
L_007350a6:; BB(0x007350a6);
    /* 007350a6: movzx eax, word ptr [esi + 0x8a] */ r_eax = (u32)R16((u32)(r_esi+0x8au));
    /* 007350ad: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007350b0: movsx edi, ax */ r_edi = (u32)(i32)(i16)(u16)r_eax;
    /* 007350b3: mov edx, edi */ r_edx = r_edi;
    /* 007350b5: jmp 0x734e4c */ goto L_00734e4c;
L_007350ba:; BB(0x007350ba);
    /* 007350ba: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007350bc: jmp 0x734937 */ goto L_00734937;
}

