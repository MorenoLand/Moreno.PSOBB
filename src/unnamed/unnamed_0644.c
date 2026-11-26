#include "protos.h"

void f_00644064(void) /* sub_644064 */
{
    FN_ENTER(0x00644064);
    /* 00644064: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00644065: mov ebp, esp */ r_ebp = r_esp;
    /* 00644067: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00644069: push 0x8e5924 */ { u32 v = 0x8e5924u; r_esp -= 4; W32(r_esp, v); }
    /* 0064406e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00644074: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00644075: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0064407c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064407f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00644082: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00644085: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00644088: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0064408b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064408d: mov dword ptr [0xa8f3cc], eax */ W32((u32)(0xa8f3ccu), r_eax);
    /* 00644092: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00644095: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 0064409a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x64409fu); f_008581c5();
    /* 0064409f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006440a0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006440a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006440a5: je 0x6440f7 */ if (fZ) goto L_006440f7;
L_006440a7:; BB(0x006440a7);
    /* 006440a7: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006440ae: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006440b5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006440b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006440ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006440bb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006440bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006440bd: push 0x9c700c */ { u32 v = 0x9c700cu; r_esp -= 4; W32(r_esp, v); }
    /* 006440c2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006440c4: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6440c9u); f_005b7a84();
    /* 006440c9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006440cc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006440d3:; BB(0x006440d3);
    /* 006440d3: mov dword ptr [0xa8f3d0], ecx */ W32((u32)(0xa8f3d0u), r_ecx);
    /* 006440d9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006440e0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006440e2: je 0x6440e9 */ if (fZ) goto L_006440e9;
L_006440e4:; BB(0x006440e4);
    /* 006440e4: call 0x5b90d0 */ r_esp -= 4; W32(r_esp, 0x6440e9u); f_005b90d0();
L_006440e9:; BB(0x006440e9);
    /* 006440e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006440ec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006440f3: mov esp, ebp */ r_esp = r_ebp;
    /* 006440f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006440f6: ret  */ FN_RET(0x00644064); r_esp += 4; return;
L_006440f7:; BB(0x006440f7);
    /* 006440f7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006440f9: jmp 0x6440d3 */ goto L_006440d3;
}

void f_006440fc(void) /* sub_6440FC */
{
    FN_ENTER(0x006440fc);
    /* 006440fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006440fd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006440ff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00644101: call 0x644120 */ r_esp -= 4; W32(r_esp, 0x644106u); f_00644120();
    /* 00644106: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0064410a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064410c: jne 0x644112 */ if (!fZ) goto L_00644112;
L_0064410e:; BB(0x0064410e);
    /* 0064410e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064410f: ret 4 */ FN_RET(0x006440fc); r_esp += 8; return;
L_00644112:; BB(0x00644112);
    /* 00644112: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00644113: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x644118u); f_005c2f74();
    /* 00644118: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00644119: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0064411a: ret 4 */ FN_RET(0x006440fc); r_esp += 8; return;
}

void f_00644120(void) /* sub_644120 */
{
    FN_ENTER(0x00644120);
    /* 00644120: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00644121: mov ebp, esp */ r_ebp = r_esp;
    /* 00644123: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00644125: push 0x8e5940 */ { u32 v = 0x8e5940u; r_esp -= 4; W32(r_esp, v); }
    /* 0064412a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00644130: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00644131: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00644138: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064413b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0064413e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00644141: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00644144: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00644147: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0064414a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0064414d: mov dword ptr [ecx], 0xb2f2c8 */ W32((u32)(r_ecx), 0xb2f2c8u);
    /* 00644153: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0064415a: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x64415fu); f_008171e8();
    /* 0064415f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00644162: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00644169: mov esp, ebp */ r_esp = r_ebp;
    /* 0064416b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0064416c: ret  */ FN_RET(0x00644120); r_esp += 4; return;
}

void f_00644170(void) /* sub_644170 */
{
    FN_ENTER(0x00644170);
    /* 00644170: mov eax, ecx */ r_eax = r_ecx;
    /* 00644172: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00644176: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00644178: mov dword ptr [eax], ecx */ W32((u32)(r_eax), r_ecx);
    /* 0064417a: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 0064417d: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 00644180: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00644183: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00644186: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00644189: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 0064418c: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 0064418f: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
    /* 00644192: mov ecx, dword ptr [edx + 0x14] */ r_ecx = R32((u32)(r_edx+0x14u));
    /* 00644195: mov dword ptr [eax + 0x14], ecx */ W32((u32)(r_eax+0x14u), r_ecx);
    /* 00644198: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0064419b: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 0064419e: mov ecx, dword ptr [edx + 0x1c] */ r_ecx = R32((u32)(r_edx+0x1cu));
    /* 006441a1: mov dword ptr [eax + 0x1c], ecx */ W32((u32)(r_eax+0x1cu), r_ecx);
    /* 006441a4: mov ecx, dword ptr [edx + 0x20] */ r_ecx = R32((u32)(r_edx+0x20u));
    /* 006441a7: mov dword ptr [eax + 0x20], ecx */ W32((u32)(r_eax+0x20u), r_ecx);
    /* 006441aa: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 006441ad: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 006441b0: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 006441b3: mov dword ptr [eax + 0x28], ecx */ W32((u32)(r_eax+0x28u), r_ecx);
    /* 006441b6: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 006441b9: mov dword ptr [eax + 0x2c], ecx */ W32((u32)(r_eax+0x2cu), r_ecx);
    /* 006441bc: mov ecx, dword ptr [edx + 0x30] */ r_ecx = R32((u32)(r_edx+0x30u));
    /* 006441bf: mov dword ptr [eax + 0x30], ecx */ W32((u32)(r_eax+0x30u), r_ecx);
    /* 006441c2: mov ecx, dword ptr [edx + 0x34] */ r_ecx = R32((u32)(r_edx+0x34u));
    /* 006441c5: mov dword ptr [eax + 0x34], ecx */ W32((u32)(r_eax+0x34u), r_ecx);
    /* 006441c8: mov ecx, dword ptr [edx + 0x38] */ r_ecx = R32((u32)(r_edx+0x38u));
    /* 006441cb: mov dword ptr [eax + 0x38], ecx */ W32((u32)(r_eax+0x38u), r_ecx);
    /* 006441ce: mov ecx, dword ptr [edx + 0x3c] */ r_ecx = R32((u32)(r_edx+0x3cu));
    /* 006441d1: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 006441d4: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 006441d7: mov dword ptr [eax + 0x40], ecx */ W32((u32)(r_eax+0x40u), r_ecx);
    /* 006441da: mov ecx, dword ptr [edx + 0x44] */ r_ecx = R32((u32)(r_edx+0x44u));
    /* 006441dd: mov dword ptr [eax + 0x44], ecx */ W32((u32)(r_eax+0x44u), r_ecx);
    /* 006441e0: mov edx, dword ptr [edx + 0x48] */ r_edx = R32((u32)(r_edx+0x48u));
    /* 006441e3: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
    /* 006441e6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006441e8: mov dword ptr [eax + 0x54], edx */ W32((u32)(r_eax+0x54u), r_edx);
    /* 006441eb: mov dword ptr [eax + 0x50], edx */ W32((u32)(r_eax+0x50u), r_edx);
    /* 006441ee: mov dword ptr [eax + 0x4c], edx */ W32((u32)(r_eax+0x4cu), r_edx);
    /* 006441f1: ret 4 */ FN_RET(0x00644170); r_esp += 8; return;
}

void f_006441f4(void) /* sub_6441F4 */
{
    FN_ENTER(0x006441f4);
    /* 006441f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006441f5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006441f6: mov edi, ecx */ r_edi = r_ecx;
    /* 006441f8: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 006441fc: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00644200: mov ecx, edi */ r_ecx = r_edi;
    /* 00644202: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x644207u); f_008193cc();
    /* 00644207: mov dword ptr [edi], 0xb2f2c8 */ W32((u32)(r_edi), 0xb2f2c8u);
    /* 0064420d: mov edx, dword ptr [0x9c7020] */ r_edx = R32((u32)(0x9c7020u));
    /* 00644213: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00644216: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00644218: lea eax, [edi + 0x24] */ r_eax = (u32)(r_edi+0x24u);
    /* 0064421b: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0064421d: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00644220: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00644223: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 00644226: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00644229: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 0064422c: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 0064422f: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 00644232: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 00644235: mov edx, dword ptr [esi + 0x14] */ r_edx = R32((u32)(r_esi+0x14u));
    /* 00644238: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 0064423b: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 0064423e: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00644241: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 00644244: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 00644247: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 0064424a: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 0064424d: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 00644250: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 00644253: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 00644256: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 00644259: mov edx, dword ptr [esi + 0x2c] */ r_edx = R32((u32)(r_esi+0x2cu));
    /* 0064425c: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 0064425f: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00644262: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 00644265: mov edx, dword ptr [esi + 0x34] */ r_edx = R32((u32)(r_esi+0x34u));
    /* 00644268: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 0064426b: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 0064426e: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 00644271: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00644274: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 00644277: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 0064427a: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 0064427d: mov edx, dword ptr [esi + 0x44] */ r_edx = R32((u32)(r_esi+0x44u));
    /* 00644280: mov esi, dword ptr [esi + 0x48] */ r_esi = R32((u32)(r_esi+0x48u));
    /* 00644283: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 00644286: mov dword ptr [eax + 0x48], esi */ W32((u32)(r_eax+0x48u), r_esi);
    /* 00644289: mov dword ptr [edi + 0x1c], 0x43480000 */ W32((u32)(r_edi+0x1cu), 0x43480000u);
    /* 00644290: mov ecx, edi */ r_ecx = r_edi;
    /* 00644292: mov dword ptr [edi + 0x20], 0x42200000 */ W32((u32)(r_edi+0x20u), 0x42200000u);
    /* 00644299: mov dword ptr [edi + 0x230], 1 */ W32((u32)(r_edi+0x230u), 0x1u);
    /* 006442a3: call 0x644cd0 */ r_esp -= 4; W32(r_esp, 0x6442a8u); f_00644cd0();
    /* 006442a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006442aa: jne 0x6442b6 */ if (!fZ) goto L_006442b6;
L_006442ac:; BB(0x006442ac);
    /* 006442ac: mov dword ptr [edi + 0x230], 0 */ W32((u32)(r_edi+0x230u), 0x0u);
L_006442b6:; BB(0x006442b6);
    /* 006442b6: mov eax, edi */ r_eax = r_edi;
    /* 006442b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006442b9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006442ba: ret 8 */ FN_RET(0x006441f4); r_esp += 12; return;
}

void f_006442c0(void) /* sub_6442C0 */
{
    FN_ENTER(0x006442c0);
    /* 006442c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006442c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006442c2: mov edi, ecx */ r_edi = r_ecx;
    /* 006442c4: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 006442c8: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006442cc: mov ecx, edi */ r_ecx = r_edi;
    /* 006442ce: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6442d3u); f_008193cc();
    /* 006442d3: mov dword ptr [edi], 0xb2f2c8 */ W32((u32)(r_edi), 0xb2f2c8u);
    /* 006442d9: mov edx, dword ptr [0x9c7020] */ r_edx = R32((u32)(0x9c7020u));
    /* 006442df: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 006442e2: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 006442e4: lea eax, [edi + 0x24] */ r_eax = (u32)(r_edi+0x24u);
    /* 006442e7: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 006442e9: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 006442ec: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 006442ef: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 006442f2: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 006442f5: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 006442f8: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 006442fb: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 006442fe: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 00644301: mov edx, dword ptr [esi + 0x14] */ r_edx = R32((u32)(r_esi+0x14u));
    /* 00644304: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00644307: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 0064430a: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 0064430d: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 00644310: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 00644313: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 00644316: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 00644319: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 0064431c: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 0064431f: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 00644322: mov dword ptr [eax + 0x28], edx */ W32((u32)(r_eax+0x28u), r_edx);
    /* 00644325: mov edx, dword ptr [esi + 0x2c] */ r_edx = R32((u32)(r_esi+0x2cu));
    /* 00644328: mov dword ptr [eax + 0x2c], edx */ W32((u32)(r_eax+0x2cu), r_edx);
    /* 0064432b: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 0064432e: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 00644331: mov edx, dword ptr [esi + 0x34] */ r_edx = R32((u32)(r_esi+0x34u));
    /* 00644334: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 00644337: mov edx, dword ptr [esi + 0x38] */ r_edx = R32((u32)(r_esi+0x38u));
    /* 0064433a: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 0064433d: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 00644340: mov dword ptr [eax + 0x3c], edx */ W32((u32)(r_eax+0x3cu), r_edx);
    /* 00644343: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 00644346: mov dword ptr [eax + 0x40], edx */ W32((u32)(r_eax+0x40u), r_edx);
    /* 00644349: mov edx, dword ptr [esi + 0x44] */ r_edx = R32((u32)(r_esi+0x44u));
    /* 0064434c: mov dword ptr [eax + 0x44], edx */ W32((u32)(r_eax+0x44u), r_edx);
    /* 0064434f: mov edx, dword ptr [esi + 0x48] */ r_edx = R32((u32)(r_esi+0x48u));
    /* 00644352: mov dword ptr [eax + 0x48], edx */ W32((u32)(r_eax+0x48u), r_edx);
    /* 00644355: mov dword ptr [edi + 0x1c], 0x43480000 */ W32((u32)(r_edi+0x1cu), 0x43480000u);
    /* 0064435c: lea eax, [esi + 0x4c] */ r_eax = (u32)(r_esi+0x4cu);
    /* 0064435f: mov ecx, edi */ r_ecx = r_edi;
    /* 00644361: mov dword ptr [edi + 0x20], 0x42200000 */ W32((u32)(r_edi+0x20u), 0x42200000u);
    /* 00644368: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00644369: mov dword ptr [edi + 0x230], 1 */ W32((u32)(r_edi+0x230u), 0x1u);
    /* 00644373: call 0x644b3c */ r_esp -= 4; W32(r_esp, 0x644378u); f_00644b3c();
    /* 00644378: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0064437a: jne 0x644386 */ if (!fZ) goto L_00644386;
L_0064437c:; BB(0x0064437c);
    /* 0064437c: mov dword ptr [edi + 0x230], 0 */ W32((u32)(r_edi+0x230u), 0x0u);
L_00644386:; BB(0x00644386);
    /* 00644386: mov eax, edi */ r_eax = r_edi;
    /* 00644388: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00644389: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064438a: ret 8 */ FN_RET(0x006442c0); r_esp += 12; return;
}

void f_00644390(void) /* sub_644390 */
{
    FN_ENTER(0x00644390);
    /* 00644390: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00644391: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00644393: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00644396: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00644398: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x64439bu); call_ind(t); }
    /* 0064439b: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0064439e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006443a0: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x6443a3u); call_ind(t); }
    /* 006443a3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006443a6: je 0x6443aa */ if (fZ) goto L_006443aa;
L_006443a8:; BB(0x006443a8);
    /* 006443a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006443a9: ret  */ FN_RET(0x00644390); r_esp += 4; return;
L_006443aa:; BB(0x006443aa);
    /* 006443aa: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006443ae: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006443b3: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 006443b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006443b8: ret  */ FN_RET(0x00644390); r_esp += 4; return;
}

void f_006443bc(void) /* sub_6443BC */
{
    FN_ENTER(0x006443bc);
    /* 006443bc: mov edx, dword ptr [ecx + 0x230] */ r_edx = R32((u32)(r_ecx+0x230u));
    /* 006443c2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006443c4: mov eax, 0 */ r_eax = 0x0u;
    /* 006443c9: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 006443cc: ret  */ FN_RET(0x006443bc); r_esp += 4; return;
}

void f_006443d0(void) /* sub_6443D0 */
{
    FN_ENTER(0x006443d0);
    /* 006443d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006443d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006443d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006443d3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006443d4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006443d7: mov esi, ecx */ r_esi = r_ecx;
    /* 006443d9: mov eax, dword ptr [esi + 0x54] */ r_eax = R32((u32)(r_esi+0x54u));
    /* 006443dc: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006443de: lea ecx, [esi + 0x70] */ r_ecx = (u32)(r_esi+0x70u);
    /* 006443e1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006443e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006443e5: jle 0x6445b0 */ if ((fZ||fS!=fO)) goto L_006445b0;
L_006443eb:; BB(0x006443eb);
    /* 006443eb: mov ebp, dword ptr [ecx + 0x34] */ r_ebp = R32((u32)(r_ecx+0x34u));
    /* 006443ee: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006443f0: jne 0x64441d */ if (!fZ) goto L_0064441d;
L_006443f2:; BB(0x006443f2);
    /* 006443f2: mov ebp, dword ptr [esi + 0x6c] */ r_ebp = R32((u32)(r_esi+0x6cu));
    /* 006443f5: test ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006443fb: je 0x64459e */ if (fZ) goto L_0064459e;
L_00644401:; BB(0x00644401);
    /* 00644401: fld dword ptr [ecx + 0x30] */ FPUSH(R_F32((u32)(r_ecx+0x30u)));
    /* 00644404: fsub dword ptr [0x93550c] */ ST(0) = ST(0) - R_F32((u32)(0x93550cu));
    /* 0064440a: fcom dword ptr [0x93551c] */ fx_compare(ST(0), R_F32((u32)(0x93551cu))); 
    /* 00644410: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00644412: fstp dword ptr [ecx + 0x30] */ W_F32((u32)(r_ecx+0x30u), ST(0)); FPOP();
    /* 00644415: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00644416: jbe 0x644426 */ if ((fC||fZ)) goto L_00644426;
L_00644418:; BB(0x00644418);
    /* 00644418: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0064441b: jmp 0x644426 */ goto L_00644426;
L_0064441d:; BB(0x0064441d);
    /* 0064441d: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00644420: mov dword ptr [ecx + 0x34], ebp */ W32((u32)(r_ecx+0x34u), r_ebp);
    /* 00644423: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00644426:; BB(0x00644426);
    /* 00644426: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 00644429: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 0064442c: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 0064442f: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 00644432: fld dword ptr [ecx + 0x14] */ FPUSH(R_F32((u32)(r_ecx+0x14u)));
    /* 00644435: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00644437: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 0064443a: mov ebp, dword ptr [ecx + 0x24] */ r_ebp = R32((u32)(r_ecx+0x24u));
    /* 0064443d: mov edi, dword ptr [ecx + 0x28] */ r_edi = R32((u32)(r_ecx+0x28u));
    /* 00644440: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 00644444: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00644446: fchs  */ ST(0) = -ST(0);
    /* 00644448: fmul dword ptr [esi + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x28u));
    /* 0064444b: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 0064444d: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0064444f: fst dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0));
    /* 00644452: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00644454: fchs  */ ST(0) = -ST(0);
    /* 00644456: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00644458: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 0064445a: fld dword ptr [esi + 0x2c] */ FPUSH(R_F32((u32)(r_esi+0x2cu)));
    /* 0064445d: fsubr st(4) */ ST(0) = ST(4) - ST(0);
    /* 0064445f: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00644461: fchs  */ ST(0) = -ST(0);
    /* 00644463: fmul dword ptr [0x935518] */ ST(0) = ST(0) * R_F32((u32)(0x935518u));
    /* 00644469: faddp st(4) */ ST(4) = ST(4) + ST(0); FPOP();
    /* 0064446b: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 0064446e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00644470: fst dword ptr [ecx + 0x10] */ W_F32((u32)(r_ecx+0x10u), ST(0));
    /* 00644473: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00644475: fmul dword ptr [esi + 0x28] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x28u));
    /* 00644478: fxch st(6) */ { long double t = ST(0); ST(0) = ST(6); ST(6) = t; }
    /* 0064447a: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 0064447c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0064447e: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00644480: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00644482: fst dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0));
    /* 00644485: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00644487: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00644489: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0064448b: fst dword ptr [ecx + 0x14] */ W_F32((u32)(r_ecx+0x14u), ST(0));
    /* 0064448e: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00644490: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00644492: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 00644495: add dword ptr [ecx + 0x18], ebp */ { u32 ad = (u32)(r_ecx+0x18u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00644498: mov ebp, dword ptr [ecx + 0x2c] */ r_ebp = R32((u32)(r_ecx+0x2cu));
    /* 0064449b: add dword ptr [ecx + 0x1c], edi */ { u32 ad = (u32)(r_ecx+0x1cu);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0064449e: add dword ptr [ecx + 0x20], ebp */ { u32 ad = (u32)(r_ecx+0x20u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006444a1: mov eax, dword ptr [esi + 0x6c] */ r_eax = R32((u32)(r_esi+0x6cu));
    /* 006444a4: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006444a6: je 0x644593 */ if (fZ) goto L_00644593;
L_006444ac:; BB(0x006444ac);
    /* 006444ac: mov eax, dword ptr [esi + 0x5c] */ r_eax = R32((u32)(r_esi+0x5cu));
    /* 006444af: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 006444b3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006444b5: fcomp dword ptr [esi + 0x5c] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x5cu))); FPOP();
    /* 006444b8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006444ba: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006444bb: jae 0x644588 */ if (!fC) goto L_00644588;
L_006444c1:; BB(0x006444c1);
    /* 006444c1: fcom dword ptr [0x93551c] */ fx_compare(ST(0), R_F32((u32)(0x93551cu))); 
    /* 006444c7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006444c9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006444ca: jae 0x64457d */ if (!fC) goto L_0064457d;
L_006444d0:; BB(0x006444d0);
    /* 006444d0: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 006444d4: fld dword ptr [0x935514] */ FPUSH(R_F32((u32)(0x935514u)));
    /* 006444da: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 006444dc: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 006444de: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006444e0: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 006444e3: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 006444e7: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006444ea: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006444ee: fld dword ptr [esi + 0x24] */ FPUSH(R_F32((u32)(r_esi+0x24u)));
    /* 006444f1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006444f3: fstp dword ptr [ecx + 0x14] */ W_F32((u32)(r_ecx+0x14u), ST(0)); FPOP();
    /* 006444f6: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006444f9: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006444fc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006444fe: fchs  */ ST(0) = -ST(0);
    /* 00644500: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00644502: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00644504: fstp dword ptr [ecx + 0x10] */ W_F32((u32)(r_ecx+0x10u), ST(0)); FPOP();
    /* 00644507: fld dword ptr [0x935510] */ FPUSH(R_F32((u32)(0x935510u)));
    /* 0064450d: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 0064450f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00644511: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00644515: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0064451a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0064451f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00644523: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00644527: fistp dword ptr [ecx + 0x24] */ W32((u32)(r_ecx+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 0064452a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 0064452e: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00644532: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00644534: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00644538: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 0064453d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00644542: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00644546: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 0064454a: fistp dword ptr [ecx + 0x28] */ W32((u32)(r_ecx+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 0064454d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00644551: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 00644555: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 00644559: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0064455b: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 0064455f: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00644564: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00644569: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0064456d: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00644571: fistp dword ptr [ecx + 0x2c] */ W32((u32)(r_ecx+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00644574: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00644578: mov eax, dword ptr [esi + 0x54] */ r_eax = R32((u32)(r_esi+0x54u));
    /* 0064457b: jmp 0x64459e */ goto L_0064459e;
L_0064457d:; BB(0x0064457d);
    /* 0064457d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0064457f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00644581: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00644583: mov eax, dword ptr [esi + 0x54] */ r_eax = R32((u32)(r_esi+0x54u));
    /* 00644586: jmp 0x64459e */ goto L_0064459e;
L_00644588:; BB(0x00644588);
    /* 00644588: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0064458a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0064458c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0064458e: mov eax, dword ptr [esi + 0x54] */ r_eax = R32((u32)(r_esi+0x54u));
    /* 00644591: jmp 0x64459e */ goto L_0064459e;
L_00644593:; BB(0x00644593);
    /* 00644593: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00644595: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00644597: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00644599: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0064459b: mov eax, dword ptr [esi + 0x54] */ r_eax = R32((u32)(r_esi+0x54u));
L_0064459e:; BB(0x0064459e);
    /* 0064459e: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006445a1: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006445a4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006445a6: jl 0x6443eb */ if ((fS!=fO)) goto L_006443eb;
L_006445ac:; BB(0x006445ac);
    /* 006445ac: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006445ae: jne 0x6445ba */ if (!fZ) goto L_006445ba;
L_006445b0:; BB(0x006445b0);
    /* 006445b0: mov dword ptr [esi + 0x230], 0 */ W32((u32)(r_esi+0x230u), 0x0u);
L_006445ba:; BB(0x006445ba);
    /* 006445ba: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006445bd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006445be: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006445bf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006445c0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006445c1: ret  */ FN_RET(0x006443d0); r_esp += 4; return;
}

void f_006445c4(void) /* sub_6445C4 */
{
    FN_ENTER(0x006445c4);
    /* 006445c4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006445c5: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006445c8: mov ebx, dword ptr [esp + 0x2c] */ r_ebx = R32((u32)(r_esp+0x2cu));
    /* 006445cc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006445ce: mov edx, ebx */ r_edx = r_ebx;
    /* 006445d0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006445d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006445d4: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x6445d9u); f_00830aa0();
    /* 006445d9: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006445dd: fld dword ptr [0x935508] */ FPUSH(R_F32((u32)(0x935508u)));
    /* 006445e3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006445e5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006445e7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006445e8: jb 0x6446d6 */ if (fC) goto L_006446d6;
L_006445ee:; BB(0x006445ee);
    /* 006445ee: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 006445f2: fchs  */ ST(0) = -ST(0);
    /* 006445f4: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 006445f6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006445f8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006445fa: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006445fc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006445fd: ja 0x6446ef */ if ((!fC&&!fZ)) goto L_006446ef;
L_00644603:; BB(0x00644603);
    /* 00644603: fcomp dword ptr [esp] */ fx_compare(ST(0), R_F32((u32)(r_esp))); FPOP();
    /* 00644606: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00644608: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00644609: jbe 0x64466c */ if ((fC||fZ)) goto L_0064466c;
L_0064460b:; BB(0x0064460b);
    /* 0064460b: fld dword ptr [0xa489e8] */ FPUSH(R_F32((u32)(0xa489e8u)));
    /* 00644611: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00644615: fld dword ptr [0xa489ec] */ FPUSH(R_F32((u32)(0xa489ecu)));
    /* 0064461b: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0064461d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0064461f: fchs  */ ST(0) = -ST(0);
    /* 00644621: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00644623: fadd dword ptr [ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx));
    /* 00644625: fld dword ptr [0xa489f0] */ FPUSH(R_F32((u32)(0xa489f0u)));
    /* 0064462b: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0064462d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00644630: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00644632: fadd dword ptr [ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4u));
    /* 00644635: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00644639: fadd dword ptr [ebx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x8u));
    /* 0064463c: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 00644640: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00644644: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00644645: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00644647: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0064464b: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x644650u); f_0082f09c();
    /* 00644650: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 00644654: fcomp dword ptr [0x935508] */ fx_compare(ST(0), R_F32((u32)(0x935508u))); FPOP();
    /* 0064465a: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0064465c: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0064465d: jae 0x6446e3 */ if (!fC) goto L_006446e3;
L_00644663:; BB(0x00644663);
    /* 00644663: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00644665: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00644668: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00644669: ret 0xc */ FN_RET(0x006445c4); r_esp += 16; return;
L_0064466c:; BB(0x0064466c);
    /* 0064466c: fld dword ptr [0xa489e8] */ FPUSH(R_F32((u32)(0xa489e8u)));
    /* 00644672: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 00644676: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00644678: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0064467a: fadd dword ptr [ebx] */ ST(0) = ST(0) + R_F32((u32)(r_ebx));
    /* 0064467c: fld dword ptr [0xa489ec] */ FPUSH(R_F32((u32)(0xa489ecu)));
    /* 00644682: fld dword ptr [0xa489f0] */ FPUSH(R_F32((u32)(0xa489f0u)));
    /* 00644688: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0064468a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0064468d: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00644691: fchs  */ ST(0) = -ST(0);
    /* 00644693: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00644695: fadd dword ptr [ebx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4u));
    /* 00644698: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0064469c: fchs  */ ST(0) = -ST(0);
    /* 0064469e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 006446a0: fadd dword ptr [ebx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x8u));
    /* 006446a3: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006446a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006446a8: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006446ac: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006446ae: call 0x82f09c */ r_esp -= 4; W32(r_esp, 0x6446b3u); f_0082f09c();
    /* 006446b3: movsx ecx, word ptr [0xa48a4c] */ r_ecx = (u32)(i32)(i16)R16((u32)(0xa48a4cu));
    /* 006446ba: movsx edx, word ptr [0x9acb68] */ r_edx = (u32)(i32)(i16)R16((u32)(0x9acb68u));
    /* 006446c1: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006446c3: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 006446c7: fild dword ptr [esp + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x1cu)));
    /* 006446cb: fcomp dword ptr [esp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_esp+0xcu))); FPOP();
    /* 006446cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006446d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006446d2: jb 0x6446da */ if (fC) goto L_006446da;
L_006446d4:; BB(0x006446d4);
    /* 006446d4: jmp 0x6446e3 */ goto L_006446e3;
L_006446d6:; BB(0x006446d6);
    /* 006446d6: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 006446d8: fstp st(0) */ ST(0) = ST(0); FPOP();
L_006446da:; BB(0x006446da);
    /* 006446da: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006446dc: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006446df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006446e0: ret 0xc */ FN_RET(0x006445c4); r_esp += 16; return;
L_006446e3:; BB(0x006446e3);
    /* 006446e3: mov eax, 1 */ r_eax = 0x1u;
    /* 006446e8: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006446eb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006446ec: ret 0xc */ FN_RET(0x006445c4); r_esp += 16; return;
L_006446ef:; BB(0x006446ef);
    /* 006446ef: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006446f1: jmp 0x6446da */ goto L_006446da;
}

void f_006446f4(void) /* sub_6446F4 */
{
    FN_ENTER(0x006446f4);
    /* 006446f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006446f5: mov edi, ecx */ r_edi = r_ecx;
    /* 006446f7: mov ecx, dword ptr [edi + 0x68] */ r_ecx = R32((u32)(r_edi+0x68u));
    /* 006446fa: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6446ffu); f_00829cc8();
    /* 006446ff: mov eax, dword ptr [edi + 0x6c] */ r_eax = R32((u32)(r_edi+0x6cu));
    /* 00644702: test al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00644704: je 0x64470f */ if (fZ) goto L_0064470f;
L_00644706:; BB(0x00644706);
    /* 00644706: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00644708: mov ecx, edi */ r_ecx = r_edi;
    /* 0064470a: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x64470du); call_ind(t); }
    /* 0064470d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0064470e: ret  */ FN_RET(0x006446f4); r_esp += 4; return;
L_0064470f:; BB(0x0064470f);
    /* 0064470f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00644711: mov ecx, edi */ r_ecx = r_edi;
    /* 00644713: call dword ptr [eax + 0x2c] */ { u32 t = R32((u32)(r_eax+0x2cu)); r_esp -= 4; W32(r_esp, 0x644716u); call_ind(t); }
    /* 00644716: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00644717: ret  */ FN_RET(0x006446f4); r_esp += 4; return;
}

void f_00644718(void) /* sub_644718 */
{
    FN_ENTER(0x00644718);
    /* 00644718: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00644719: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064471a: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0064471d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0064471f: mov eax, dword ptr [ebx + 0x6c] */ r_eax = R32((u32)(r_ebx+0x6cu));
    /* 00644722: lea esi, [ebx + 0x70] */ r_esi = (u32)(r_ebx+0x70u);
    /* 00644725: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00644727: jne 0x644786 */ if (!fZ) goto L_00644786;
L_00644729:; BB(0x00644729);
    /* 00644729: mov edx, dword ptr [ebx + 0x54] */ r_edx = R32((u32)(r_ebx+0x54u));
    /* 0064472c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064472e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00644730: jle 0x644874 */ if ((fZ||fS!=fO)) goto L_00644874;
L_00644736:; BB(0x00644736);
    /* 00644736: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00644739: mov edi, ebx */ r_edi = r_ebx;
    /* 0064473b: mov ebx, eax */ r_ebx = r_eax;
L_0064473d:; BB(0x0064473d);
    /* 0064473d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x644742u); f_0082d7b0();
    /* 00644742: mov ecx, esi */ r_ecx = r_esi;
    /* 00644744: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x644749u); f_0082d838();
    /* 00644749: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064474c: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0064474f: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 00644752: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00644754: call 0x83a314 */ r_esp -= 4; W32(r_esp, 0x644759u); f_0083a314();
    /* 00644759: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0064475c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064475d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064475e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00644760: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00644761: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x644766u); f_0082fa0c();
    /* 00644766: mov ecx, dword ptr [edi + 0x64] */ r_ecx = R32((u32)(r_edi+0x64u));
    /* 00644769: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x64476eu); f_00831758();
    /* 0064476e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x644773u); f_0082da80();
    /* 00644773: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00644776: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00644779: cmp ebx, dword ptr [edi + 0x54] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x54u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064477c: jl 0x64473d */ if ((fS!=fO)) goto L_0064473d;
L_0064477e:; BB(0x0064477e);
    /* 0064477e: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00644781: jmp 0x644874 */ goto L_00644874;
L_00644786:; BB(0x00644786);
    /* 00644786: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 0064478c: mov eax, dword ptr [0xaf0360] */ r_eax = R32((u32)(0xaf0360u));
    /* 00644791: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 00644797: mov dword ptr [0xaab504], eax */ W32((u32)(0xaab504u), r_eax);
    /* 0064479c: mov eax, dword ptr [0xaf0364] */ r_eax = R32((u32)(0xaf0364u));
    /* 006447a1: mov dword ptr [0xaab500], eax */ W32((u32)(0xaab500u), r_eax);
    /* 006447a6: or edx, 0x8011 */ {  u32 a = r_edx; u32 b = 0x8011u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006447ac: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 006447b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006447b4: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006447b9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006447bb: mov edx, 4 */ r_edx = 0x4u;
    /* 006447c0: call 0x836248 */ r_esp -= 4; W32(r_esp, 0x6447c5u); f_00836248();
    /* 006447c5: mov edx, dword ptr [ebx + 0x54] */ r_edx = R32((u32)(r_ebx+0x54u));
    /* 006447c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006447ca: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006447cc: jle 0x644852 */ if ((fZ||fS!=fO)) goto L_00644852;
L_006447d2:; BB(0x006447d2);
    /* 006447d2: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006447d5: mov edi, ebx */ r_edi = r_ebx;
    /* 006447d7: mov ebx, eax */ r_ebx = r_eax;
L_006447d9:; BB(0x006447d9);
    /* 006447d9: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 006447dc: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 006447e4: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006447e8: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 006447f0: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006447f4: mov dword ptr [esp + 0x10], 0x3f800000 */ W32((u32)(r_esp+0x10u), 0x3f800000u);
    /* 006447fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006447fd: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x644802u); f_0082d710();
    /* 00644802: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00644803: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x644808u); f_0082d7b0();
    /* 00644808: mov ecx, esi */ r_ecx = r_esi;
    /* 0064480a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x64480fu); f_0082d838();
    /* 0064480f: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00644812: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00644815: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 00644818: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0064481a: call 0x83a314 */ r_esp -= 4; W32(r_esp, 0x64481fu); f_0083a314();
    /* 0064481f: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00644822: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00644823: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00644824: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00644826: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00644827: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x64482cu); f_0082fa0c();
    /* 0064482c: mov ecx, dword ptr [edi + 0x64] */ r_ecx = R32((u32)(r_edi+0x64u));
    /* 0064482f: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x644834u); f_00831758();
    /* 00644834: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x644839u); f_0082da80();
    /* 00644839: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0064483e: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x644843u); f_0082d710();
    /* 00644843: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00644844: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00644847: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0064484a: cmp ebx, dword ptr [edi + 0x54] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x54u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064484d: jl 0x6447d9 */ if ((fS!=fO)) goto L_006447d9;
L_0064484f:; BB(0x0064484f);
    /* 0064484f: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00644852:; BB(0x00644852);
    /* 00644852: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00644857: mov edx, dword ptr [0xaab504] */ r_edx = R32((u32)(0xaab504u));
    /* 0064485d: mov ecx, dword ptr [0xaab500] */ r_ecx = R32((u32)(0xaab500u));
    /* 00644863: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00644868: mov dword ptr [0xaf0360], edx */ W32((u32)(0xaf0360u), r_edx);
    /* 0064486e: mov dword ptr [0xaf0364], ecx */ W32((u32)(0xaf0364u), r_ecx);
L_00644874:; BB(0x00644874);
    /* 00644874: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00644877: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00644878: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00644879: ret  */ FN_RET(0x00644718); r_esp += 4; return;
}

void f_0064487c(void) /* sub_64487C */
{
    FN_ENTER(0x0064487c);
    /* 0064487c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0064487d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0064487e: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00644881: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00644883: mov eax, dword ptr [ebx + 0x6c] */ r_eax = R32((u32)(r_ebx+0x6cu));
    /* 00644886: lea esi, [ebx + 0x70] */ r_esi = (u32)(r_ebx+0x70u);
    /* 00644889: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0064488b: je 0x6449e5 */ if (fZ) goto L_006449e5;
L_00644891:; BB(0x00644891);
    /* 00644891: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00644893: jne 0x6448f3 */ if (!fZ) goto L_006448f3;
L_00644895:; BB(0x00644895);
    /* 00644895: mov edx, dword ptr [ebx + 0x54] */ r_edx = R32((u32)(r_ebx+0x54u));
    /* 00644898: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0064489a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0064489c: jle 0x644b34 */ if ((fZ||fS!=fO)) goto L_00644b34;
L_006448a2:; BB(0x006448a2);
    /* 006448a2: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006448a5: mov edi, ebx */ r_edi = r_ebx;
    /* 006448a7: mov ebx, eax */ r_ebx = r_eax;
L_006448a9:; BB(0x006448a9);
    /* 006448a9: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6448aeu); f_0082d7b0();
    /* 006448ae: mov ecx, esi */ r_ecx = r_esi;
    /* 006448b0: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6448b5u); f_0082d838();
    /* 006448b5: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 006448b8: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006448bb: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 006448be: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006448c0: call 0x83a314 */ r_esp -= 4; W32(r_esp, 0x6448c5u); f_0083a314();
    /* 006448c5: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 006448c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006448c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006448ca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006448cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006448cd: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x6448d2u); f_0082fa0c();
    /* 006448d2: push dword ptr [edi + 0x64] */ { u32 v = R32((u32)(r_edi+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 006448d5: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x6448dau); f_0082e1e8();
    /* 006448da: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006448db: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6448e0u); f_0082da80();
    /* 006448e0: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006448e3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006448e6: cmp ebx, dword ptr [edi + 0x54] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x54u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006448e9: jl 0x6448a9 */ if ((fS!=fO)) goto L_006448a9;
L_006448eb:; BB(0x006448eb);
    /* 006448eb: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 006448ee: jmp 0x644b34 */ goto L_00644b34;
L_006448f3:; BB(0x006448f3);
    /* 006448f3: mov ecx, dword ptr [0xaf034c] */ r_ecx = R32((u32)(0xaf034cu));
    /* 006448f9: mov eax, dword ptr [0xaf0360] */ r_eax = R32((u32)(0xaf0360u));
    /* 006448fe: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 00644904: mov dword ptr [0xaab518], ecx */ W32((u32)(0xaab518u), r_ecx);
    /* 0064490a: or ecx, 0x810 */ {  u32 a = r_ecx; u32 b = 0x810u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00644910: mov dword ptr [0xaab504], eax */ W32((u32)(0xaab504u), r_eax);
    /* 00644915: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 0064491b: mov dword ptr [0xaf034c], ecx */ W32((u32)(0xaf034cu), r_ecx);
    /* 00644921: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 00644926: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00644928: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x64492du); f_0082d6fc();
    /* 0064492d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00644930: mov edx, dword ptr [ebx + 0x54] */ r_edx = R32((u32)(r_ebx+0x54u));
    /* 00644933: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00644935: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00644937: jle 0x6449be */ if ((fZ||fS!=fO)) goto L_006449be;
L_0064493d:; BB(0x0064493d);
    /* 0064493d: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00644940: mov edi, ebx */ r_edi = r_ebx;
    /* 00644942: mov ebx, eax */ r_ebx = r_eax;
L_00644944:; BB(0x00644944);
    /* 00644944: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00644947: mov dword ptr [esp + 0x18], 0x3f800000 */ W32((u32)(r_esp+0x18u), 0x3f800000u);
    /* 0064494f: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00644953: mov dword ptr [esp + 0x1c], 0x3f800000 */ W32((u32)(r_esp+0x1cu), 0x3f800000u);
    /* 0064495b: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 0064495f: mov dword ptr [esp + 0x20], 0x3f800000 */ W32((u32)(r_esp+0x20u), 0x3f800000u);
    /* 00644967: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00644968: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x64496du); f_0082d710();
    /* 0064496d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0064496e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x644973u); f_0082d7b0();
    /* 00644973: mov ecx, esi */ r_ecx = r_esi;
    /* 00644975: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x64497au); f_0082d838();
    /* 0064497a: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064497d: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00644980: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 00644983: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00644985: call 0x83a314 */ r_esp -= 4; W32(r_esp, 0x64498au); f_0083a314();
    /* 0064498a: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 0064498d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064498e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0064498f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00644991: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00644992: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x644997u); f_0082fa0c();
    /* 00644997: push dword ptr [edi + 0x64] */ { u32 v = R32((u32)(r_edi+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064499a: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x64499fu); f_0082e1e8();
    /* 0064499f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006449a0: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6449a5u); f_0082da80();
    /* 006449a5: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 006449aa: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x6449afu); f_0082d710();
    /* 006449af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006449b0: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006449b3: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006449b6: cmp ebx, dword ptr [edi + 0x54] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x54u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006449b9: jl 0x644944 */ if ((fS!=fO)) goto L_00644944;
L_006449bb:; BB(0x006449bb);
    /* 006449bb: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_006449be:; BB(0x006449be);
    /* 006449be: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 006449c3: mov edx, dword ptr [0xaab504] */ r_edx = R32((u32)(0xaab504u));
    /* 006449c9: mov ecx, dword ptr [0xaab500] */ r_ecx = R32((u32)(0xaab500u));
    /* 006449cf: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 006449d4: mov dword ptr [0xaf0360], edx */ W32((u32)(0xaf0360u), r_edx);
    /* 006449da: mov dword ptr [0xaf0364], ecx */ W32((u32)(0xaf0364u), r_ecx);
    /* 006449e0: jmp 0x644b34 */ goto L_00644b34;
L_006449e5:; BB(0x006449e5);
    /* 006449e5: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006449e7: jne 0x644a47 */ if (!fZ) goto L_00644a47;
L_006449e9:; BB(0x006449e9);
    /* 006449e9: mov edx, dword ptr [ebx + 0x54] */ r_edx = R32((u32)(r_ebx+0x54u));
    /* 006449ec: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006449ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006449f0: jle 0x644b34 */ if ((fZ||fS!=fO)) goto L_00644b34;
L_006449f6:; BB(0x006449f6);
    /* 006449f6: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006449f9: mov edi, ebx */ r_edi = r_ebx;
    /* 006449fb: mov ebx, eax */ r_ebx = r_eax;
L_006449fd:; BB(0x006449fd);
    /* 006449fd: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x644a02u); f_0082d7b0();
    /* 00644a02: mov ecx, esi */ r_ecx = r_esi;
    /* 00644a04: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x644a09u); f_0082d838();
    /* 00644a09: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00644a0c: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00644a0f: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 00644a12: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00644a14: call 0x83a314 */ r_esp -= 4; W32(r_esp, 0x644a19u); f_0083a314();
    /* 00644a19: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00644a1c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00644a1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00644a1e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00644a20: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00644a21: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x644a26u); f_0082fa0c();
    /* 00644a26: push dword ptr [edi + 0x64] */ { u32 v = R32((u32)(r_edi+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 00644a29: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x644a2eu); f_0082e1e8();
    /* 00644a2e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00644a2f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x644a34u); f_0082da80();
    /* 00644a34: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00644a37: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00644a3a: cmp ebx, dword ptr [edi + 0x54] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x54u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00644a3d: jl 0x6449fd */ if ((fS!=fO)) goto L_006449fd;
L_00644a3f:; BB(0x00644a3f);
    /* 00644a3f: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00644a42: jmp 0x644b34 */ goto L_00644b34;
L_00644a47:; BB(0x00644a47);
    /* 00644a47: mov ecx, dword ptr [0xaf034c] */ r_ecx = R32((u32)(0xaf034cu));
    /* 00644a4d: mov eax, dword ptr [0xaf0360] */ r_eax = R32((u32)(0xaf0360u));
    /* 00644a52: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 00644a58: mov dword ptr [0xaab518], ecx */ W32((u32)(0xaab518u), r_ecx);
    /* 00644a5e: or ecx, 0x810 */ {  u32 a = r_ecx; u32 b = 0x810u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00644a64: mov dword ptr [0xaab504], eax */ W32((u32)(0xaab504u), r_eax);
    /* 00644a69: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 00644a6f: mov dword ptr [0xaf034c], ecx */ W32((u32)(0xaf034cu), r_ecx);
    /* 00644a75: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 00644a7a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00644a7c: call 0x82d6fc */ r_esp -= 4; W32(r_esp, 0x644a81u); f_0082d6fc();
    /* 00644a81: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00644a84: mov edx, dword ptr [ebx + 0x54] */ r_edx = R32((u32)(r_ebx+0x54u));
    /* 00644a87: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00644a89: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00644a8b: jle 0x644b12 */ if ((fZ||fS!=fO)) goto L_00644b12;
L_00644a91:; BB(0x00644a91);
    /* 00644a91: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00644a94: mov edi, ebx */ r_edi = r_ebx;
    /* 00644a96: mov ebx, eax */ r_ebx = r_eax;
L_00644a98:; BB(0x00644a98);
    /* 00644a98: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00644a9b: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 00644aa3: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00644aa7: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 00644aaf: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00644ab3: mov dword ptr [esp + 0x10], 0x3f800000 */ W32((u32)(r_esp+0x10u), 0x3f800000u);
    /* 00644abb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00644abc: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x644ac1u); f_0082d710();
    /* 00644ac1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00644ac2: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x644ac7u); f_0082d7b0();
    /* 00644ac7: mov ecx, esi */ r_ecx = r_esi;
    /* 00644ac9: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x644aceu); f_0082d838();
    /* 00644ace: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00644ad1: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00644ad4: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 00644ad7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00644ad9: call 0x83a314 */ r_esp -= 4; W32(r_esp, 0x644adeu); f_0083a314();
    /* 00644ade: mov edx, dword ptr [edi + 0x60] */ r_edx = R32((u32)(r_edi+0x60u));
    /* 00644ae1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00644ae2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00644ae3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00644ae5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00644ae6: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x644aebu); f_0082fa0c();
    /* 00644aeb: push dword ptr [edi + 0x64] */ { u32 v = R32((u32)(r_edi+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 00644aee: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x644af3u); f_0082e1e8();
    /* 00644af3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00644af4: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x644af9u); f_0082da80();
    /* 00644af9: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00644afe: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x644b03u); f_0082d710();
    /* 00644b03: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00644b04: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00644b07: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00644b0a: cmp ebx, dword ptr [edi + 0x54] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x54u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00644b0d: jl 0x644a98 */ if ((fS!=fO)) goto L_00644a98;
L_00644b0f:; BB(0x00644b0f);
    /* 00644b0f: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00644b12:; BB(0x00644b12);
    /* 00644b12: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00644b17: mov edx, dword ptr [0xaab504] */ r_edx = R32((u32)(0xaab504u));
    /* 00644b1d: mov ecx, dword ptr [0xaab500] */ r_ecx = R32((u32)(0xaab500u));
    /* 00644b23: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00644b28: mov dword ptr [0xaf0360], edx */ W32((u32)(0xaf0360u), r_edx);
    /* 00644b2e: mov dword ptr [0xaf0364], ecx */ W32((u32)(0xaf0364u), r_ecx);
L_00644b34:; BB(0x00644b34);
    /* 00644b34: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00644b37: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00644b38: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00644b39: ret  */ FN_RET(0x0064487c); r_esp += 4; return;
}

void f_00644b3c(void) /* sub_644B3C */
{
    FN_ENTER(0x00644b3c);
    /* 00644b3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00644b3d: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00644b40: mov edx, ecx */ r_edx = r_ecx;
    /* 00644b42: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 00644b45: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00644b48: jg 0x644cc6 */ if ((!fZ&&fS==fO)) goto L_00644cc6;
L_00644b4e:; BB(0x00644b4e);
    /* 00644b4e: lea eax, [edx + 0x70] */ r_eax = (u32)(r_edx+0x70u);
    /* 00644b51: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00644b53: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00644b55: jle 0x644cba */ if ((fZ||fS!=fO)) goto L_00644cba;
L_00644b5b:; BB(0x00644b5b);
    /* 00644b5b: mov dword ptr [esp + 0x24], esi */ W32((u32)(r_esp+0x24u), r_esi);
    /* 00644b5f: mov esi, edx */ r_esi = r_edx;
    /* 00644b61: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 00644b65: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00644b69: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 00644b6d: mov ebp, eax */ r_ebp = r_eax;
L_00644b6f:; BB(0x00644b6f);
    /* 00644b6f: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 00644b72: mov dword ptr [ebp], ecx */ W32((u32)(r_ebp), r_ecx);
    /* 00644b75: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 00644b78: mov dword ptr [ebp + 4], ecx */ W32((u32)(r_ebp+0x4u), r_ecx);
    /* 00644b7b: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 00644b7e: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 00644b81: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x644b86u); f_008587a5();
    /* 00644b86: fld dword ptr [0x935504] */ FPUSH(R_F32((u32)(0x935504u)));
    /* 00644b8c: fld dword ptr [esi + 0x3c] */ FPUSH(R_F32((u32)(r_esi+0x3cu)));
    /* 00644b8f: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00644b91: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00644b94: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00644b97: fdiv dword ptr [0x935500] */ ST(0) = ST(0) / R_F32((u32)(0x935500u));
    /* 00644b9d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00644b9f: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00644ba1: fstp dword ptr [ebp + 0xc] */ W_F32((u32)(r_ebp+0xcu), ST(0)); FPOP();
    /* 00644ba4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x644ba9u); f_008587a5();
    /* 00644ba9: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00644bad: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00644bb1: fdiv dword ptr [0x935500] */ ST(0) = ST(0) / R_F32((u32)(0x935500u));
    /* 00644bb7: fmul dword ptr [esi + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_esi+0x40u));
    /* 00644bba: fstp dword ptr [ebp + 0x10] */ W_F32((u32)(r_ebp+0x10u), ST(0)); FPOP();
    /* 00644bbd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x644bc2u); f_008587a5();
    /* 00644bc2: fld dword ptr [0x935504] */ FPUSH(R_F32((u32)(0x935504u)));
    /* 00644bc8: fld dword ptr [esi + 0x44] */ FPUSH(R_F32((u32)(r_esi+0x44u)));
    /* 00644bcb: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00644bcd: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00644bd1: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00644bd5: fdiv dword ptr [0x935500] */ ST(0) = ST(0) / R_F32((u32)(0x935500u));
    /* 00644bdb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00644bdd: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00644bdf: fstp dword ptr [ebp + 0x14] */ W_F32((u32)(r_ebp+0x14u), ST(0)); FPOP();
    /* 00644be2: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 00644be4: mov dword ptr [ebp + 0x18], ecx */ W32((u32)(r_ebp+0x18u), r_ecx);
    /* 00644be7: mov ecx, dword ptr [edi + 4] */ r_ecx = R32((u32)(r_edi+0x4u));
    /* 00644bea: mov dword ptr [ebp + 0x1c], ecx */ W32((u32)(r_ebp+0x1cu), r_ecx);
    /* 00644bed: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 00644bf0: mov dword ptr [ebp + 0x20], ecx */ W32((u32)(r_ebp+0x20u), r_ecx);
    /* 00644bf3: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x644bf8u); f_008587a5();
    /* 00644bf8: fild dword ptr [esi + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x48u)));
    /* 00644bfb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00644bff: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00644c03: fdiv dword ptr [0x935500] */ ST(0) = ST(0) / R_F32((u32)(0x935500u));
    /* 00644c09: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00644c0b: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00644c0f: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00644c14: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00644c19: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00644c1d: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00644c21: fistp dword ptr [ebp + 0x24] */ W32((u32)(r_ebp+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00644c24: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00644c28: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x644c2du); f_008587a5();
    /* 00644c2d: fild dword ptr [esi + 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x4cu)));
    /* 00644c30: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00644c34: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00644c38: fdiv dword ptr [0x935500] */ ST(0) = ST(0) / R_F32((u32)(0x935500u));
    /* 00644c3e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00644c40: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00644c44: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00644c49: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00644c4e: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00644c52: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00644c56: fistp dword ptr [ebp + 0x28] */ W32((u32)(r_ebp+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00644c59: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00644c5d: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x644c62u); f_008587a5();
    /* 00644c62: fild dword ptr [esi + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x50u)));
    /* 00644c65: mov dword ptr [ebp + 0x30], 0x3f800000 */ W32((u32)(r_ebp+0x30u), 0x3f800000u);
    /* 00644c6c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00644c6f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00644c73: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00644c77: fdiv dword ptr [0x935500] */ ST(0) = ST(0) / R_F32((u32)(0x935500u));
    /* 00644c7d: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00644c7f: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00644c83: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00644c88: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00644c8d: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00644c91: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00644c95: fistp dword ptr [ebp + 0x2c] */ W32((u32)(r_ebp+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00644c98: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00644c9c: mov ecx, dword ptr [esi + 0x58] */ r_ecx = R32((u32)(r_esi+0x58u));
    /* 00644c9f: mov dword ptr [ebp + 0x34], ecx */ W32((u32)(r_ebp+0x34u), r_ecx);
    /* 00644ca2: add ebp, 0x38 */ {  u32 a = r_ebp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00644ca5: cmp ebx, dword ptr [esi + 0x54] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x54u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00644ca8: jl 0x644b6f */ if ((fS!=fO)) goto L_00644b6f;
L_00644cae:; BB(0x00644cae);
    /* 00644cae: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00644cb2: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00644cb6: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
L_00644cba:; BB(0x00644cba);
    /* 00644cba: mov eax, 1 */ r_eax = 0x1u;
    /* 00644cbf: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00644cc2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00644cc3: ret 4 */ FN_RET(0x00644b3c); r_esp += 8; return;
L_00644cc6:; BB(0x00644cc6);
    /* 00644cc6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00644cc8: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00644ccb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00644ccc: ret 4 */ FN_RET(0x00644b3c); r_esp += 8; return;
}

void f_00644cd0(void) /* sub_644CD0 */
{
    FN_ENTER(0x00644cd0);
    /* 00644cd0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00644cd1: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00644cd4: mov edx, ecx */ r_edx = r_ecx;
    /* 00644cd6: mov ecx, dword ptr [edx + 0x54] */ r_ecx = R32((u32)(r_edx+0x54u));
    /* 00644cd9: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00644cdc: jg 0x644e45 */ if ((!fZ&&fS==fO)) goto L_00644e45;
L_00644ce2:; BB(0x00644ce2);
    /* 00644ce2: lea eax, [edx + 0x70] */ r_eax = (u32)(r_edx+0x70u);
    /* 00644ce5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00644ce7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00644ce9: jle 0x644e3b */ if ((fZ||fS!=fO)) goto L_00644e3b;
L_00644cef:; BB(0x00644cef);
    /* 00644cef: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 00644cf3: mov esi, eax */ r_esi = r_eax;
    /* 00644cf5: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 00644cf9: mov edi, edx */ r_edi = r_edx;
L_00644cfb:; BB(0x00644cfb);
    /* 00644cfb: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00644cfe: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 00644d00: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 00644d03: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 00644d06: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 00644d09: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 00644d0c: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x644d11u); f_008587a5();
    /* 00644d11: fld dword ptr [0x9354f8] */ FPUSH(R_F32((u32)(0x9354f8u)));
    /* 00644d17: fld dword ptr [edi + 0x3c] */ FPUSH(R_F32((u32)(r_edi+0x3cu)));
    /* 00644d1a: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00644d1c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00644d1f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00644d22: fdiv dword ptr [0x9354f4] */ ST(0) = ST(0) / R_F32((u32)(0x9354f4u));
    /* 00644d28: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00644d2a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00644d2c: fstp dword ptr [esi + 0xc] */ W_F32((u32)(r_esi+0xcu), ST(0)); FPOP();
    /* 00644d2f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x644d34u); f_008587a5();
    /* 00644d34: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00644d38: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00644d3c: fdiv dword ptr [0x9354f4] */ ST(0) = ST(0) / R_F32((u32)(0x9354f4u));
    /* 00644d42: fmul dword ptr [edi + 0x40] */ ST(0) = ST(0) * R_F32((u32)(r_edi+0x40u));
    /* 00644d45: fstp dword ptr [esi + 0x10] */ W_F32((u32)(r_esi+0x10u), ST(0)); FPOP();
    /* 00644d48: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x644d4du); f_008587a5();
    /* 00644d4d: fld dword ptr [0x9354f8] */ FPUSH(R_F32((u32)(0x9354f8u)));
    /* 00644d53: fld dword ptr [edi + 0x44] */ FPUSH(R_F32((u32)(r_edi+0x44u)));
    /* 00644d56: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00644d58: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00644d5c: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00644d60: fdiv dword ptr [0x9354f4] */ ST(0) = ST(0) / R_F32((u32)(0x9354f4u));
    /* 00644d66: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00644d68: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00644d6a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00644d6c: fstp dword ptr [esi + 0x14] */ W_F32((u32)(r_esi+0x14u), ST(0)); FPOP();
    /* 00644d6f: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 00644d72: mov dword ptr [esi + 0x1c], ecx */ W32((u32)(r_esi+0x1cu), r_ecx);
    /* 00644d75: mov dword ptr [esi + 0x20], ecx */ W32((u32)(r_esi+0x20u), r_ecx);
    /* 00644d78: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x644d7du); f_008587a5();
    /* 00644d7d: fild dword ptr [edi + 0x48] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x48u)));
    /* 00644d80: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00644d84: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00644d88: fdiv dword ptr [0x9354f4] */ ST(0) = ST(0) / R_F32((u32)(0x9354f4u));
    /* 00644d8e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00644d90: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00644d94: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00644d99: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00644d9e: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00644da2: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00644da6: fistp dword ptr [esi + 0x24] */ W32((u32)(r_esi+0x24u), (u32)fx_int32(ST(0))); FPOP();
    /* 00644da9: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00644dad: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x644db2u); f_008587a5();
    /* 00644db2: fild dword ptr [edi + 0x4c] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x4cu)));
    /* 00644db5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00644db9: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00644dbd: fdiv dword ptr [0x9354f4] */ ST(0) = ST(0) / R_F32((u32)(0x9354f4u));
    /* 00644dc3: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00644dc5: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00644dc9: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00644dce: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00644dd3: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00644dd7: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00644ddb: fistp dword ptr [esi + 0x28] */ W32((u32)(r_esi+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 00644dde: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00644de2: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x644de7u); f_008587a5();
    /* 00644de7: fild dword ptr [edi + 0x50] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x50u)));
    /* 00644dea: mov dword ptr [esi + 0x30], 0x3f800000 */ W32((u32)(r_esi+0x30u), 0x3f800000u);
    /* 00644df1: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00644df4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00644df8: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00644dfc: fdiv dword ptr [0x9354f4] */ ST(0) = ST(0) / R_F32((u32)(0x9354f4u));
    /* 00644e02: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00644e04: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00644e08: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00644e0d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00644e12: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00644e16: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00644e1a: fistp dword ptr [esi + 0x2c] */ W32((u32)(r_esi+0x2cu), (u32)fx_int32(ST(0))); FPOP();
    /* 00644e1d: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00644e21: mov ecx, dword ptr [edi + 0x58] */ r_ecx = R32((u32)(r_edi+0x58u));
    /* 00644e24: mov dword ptr [esi + 0x34], ecx */ W32((u32)(r_esi+0x34u), r_ecx);
    /* 00644e27: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00644e2a: cmp ebx, dword ptr [edi + 0x54] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi+0x54u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00644e2d: jl 0x644cfb */ if ((fS!=fO)) goto L_00644cfb;
L_00644e33:; BB(0x00644e33);
    /* 00644e33: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 00644e37: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
L_00644e3b:; BB(0x00644e3b);
    /* 00644e3b: mov eax, 1 */ r_eax = 0x1u;
    /* 00644e40: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00644e43: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00644e44: ret  */ FN_RET(0x00644cd0); r_esp += 4; return;
L_00644e45:; BB(0x00644e45);
    /* 00644e45: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00644e47: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00644e4a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00644e4b: ret  */ FN_RET(0x00644cd0); r_esp += 4; return;
}

void f_00644e4c(void) /* sub_644E4C */
{
    FN_ENTER(0x00644e4c);
    /* 00644e4c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00644e4d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00644e4f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00644e51: call 0x644e70 */ r_esp -= 4; W32(r_esp, 0x644e56u); f_00644e70();
    /* 00644e56: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00644e5a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00644e5c: jne 0x644e62 */ if (!fZ) goto L_00644e62;
L_00644e5e:; BB(0x00644e5e);
    /* 00644e5e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00644e5f: ret 4 */ FN_RET(0x00644e4c); r_esp += 8; return;
L_00644e62:; BB(0x00644e62);
    /* 00644e62: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00644e63: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x644e68u); f_005c2f74();
    /* 00644e68: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00644e69: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00644e6a: ret 4 */ FN_RET(0x00644e4c); r_esp += 8; return;
}

void f_00644e70(void) /* sub_644E70 */
{
    FN_ENTER(0x00644e70);
    /* 00644e70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00644e71: mov ebp, esp */ r_ebp = r_esp;
    /* 00644e73: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00644e75: push 0x8e595c */ { u32 v = 0x8e595cu; r_esp -= 4; W32(r_esp, v); }
    /* 00644e7a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00644e80: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00644e81: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00644e88: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00644e8b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00644e8e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00644e91: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00644e94: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00644e97: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00644e9a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00644e9d: mov edx, dword ptr [ecx + 0xa8] */ r_edx = R32((u32)(r_ecx+0xa8u));
    /* 00644ea3: mov dword ptr [ecx], 0xb2f3b0 */ W32((u32)(r_ecx), 0xb2f3b0u);
    /* 00644ea9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00644eab: je 0x644ec7 */ if (fZ) goto L_00644ec7;
L_00644ead:; BB(0x00644ead);
    /* 00644ead: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00644eb0: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00644eb4: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00644eb9: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00644ebd: mov dword ptr [ecx + 0xa8], 0 */ W32((u32)(r_ecx+0xa8u), 0x0u);
L_00644ec7:; BB(0x00644ec7);
    /* 00644ec7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00644ece: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x644ed3u); f_007ba1f0();
    /* 00644ed3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00644ed6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00644edd: mov esp, ebp */ r_esp = r_ebp;
    /* 00644edf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00644ee0: ret  */ FN_RET(0x00644e70); r_esp += 4; return;
}

void f_00644ee4(void) /* sub_644EE4 */
{
    FN_ENTER(0x00644ee4);
    /* 00644ee4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00644ee5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00644ee7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00644ee9: call 0x644f08 */ r_esp -= 4; W32(r_esp, 0x644eeeu); f_00644f08();
    /* 00644eee: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00644ef2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00644ef4: jne 0x644efa */ if (!fZ) goto L_00644efa;
L_00644ef6:; BB(0x00644ef6);
    /* 00644ef6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00644ef7: ret 4 */ FN_RET(0x00644ee4); r_esp += 8; return;
L_00644efa:; BB(0x00644efa);
    /* 00644efa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00644efb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x644f00u); f_005c2f74();
    /* 00644f00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00644f01: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00644f02: ret 4 */ FN_RET(0x00644ee4); r_esp += 8; return;
}

void f_00644f08(void) /* sub_644F08 */
{
    FN_ENTER(0x00644f08);
    /* 00644f08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00644f09: mov ebp, esp */ r_ebp = r_esp;
    /* 00644f0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00644f0d: push 0x8e5978 */ { u32 v = 0x8e5978u; r_esp -= 4; W32(r_esp, v); }
    /* 00644f12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00644f18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00644f19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00644f20: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00644f23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00644f26: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00644f29: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00644f2c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00644f2f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00644f32: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00644f35: mov dword ptr [ecx], 0xb2f3a0 */ W32((u32)(r_ecx), 0xb2f3a0u);
    /* 00644f3b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00644f42: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x644f47u); f_008171e8();
    /* 00644f47: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00644f4a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00644f51: mov esp, ebp */ r_esp = r_ebp;
    /* 00644f53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00644f54: ret  */ FN_RET(0x00644f08); r_esp += 4; return;
}

void f_00644f58(void) /* sub_644F58 */
{
    FN_ENTER(0x00644f58);
    /* 00644f58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00644f59: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00644f5a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00644f5b: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00644f5e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00644f60: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00644f64: mov eax, dword ptr [ebp + 0x98] */ r_eax = R32((u32)(r_ebp+0x98u));
    /* 00644f6a: fld dword ptr [ebp + 0x90] */ FPUSH(R_F32((u32)(r_ebp+0x90u)));
    /* 00644f70: call 0x6450d4 */ r_esp -= 4; W32(r_esp, 0x644f75u); f_006450d4();
    /* 00644f75: fld dword ptr [0x9355e8] */ FPUSH(R_F32((u32)(0x9355e8u)));
    /* 00644f7b: fadd dword ptr [ebp + 0x90] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x90u));
    /* 00644f81: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00644f85: mov eax, dword ptr [ebp + 0x98] */ r_eax = R32((u32)(r_ebp+0x98u));
    /* 00644f8b: call 0x6450d4 */ r_esp -= 4; W32(r_esp, 0x644f90u); f_006450d4();
    /* 00644f90: mov ebx, eax */ r_ebx = r_eax;
    /* 00644f92: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00644f96: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00644f9a: mov dword ptr [ebp + 0x38], edi */ W32((u32)(r_ebp+0x38u), r_edi);
    /* 00644f9d: mov dword ptr [ebp + 0x3c], edx */ W32((u32)(r_ebp+0x3cu), r_edx);
    /* 00644fa0: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 00644fa3: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 00644fa7: mov dword ptr [ebp + 0x40], edx */ W32((u32)(r_ebp+0x40u), r_edx);
    /* 00644faa: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 00644fae: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x644fb3u); f_0082ebac();
    /* 00644fb3: fld dword ptr [0x9355ec] */ FPUSH(R_F32((u32)(0x9355ecu)));
    /* 00644fb9: fld dword ptr [esp + 0x18] */ FPUSH(R_F32((u32)(r_esp+0x18u)));
    /* 00644fbd: fsub dword ptr [esp + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0xcu));
    /* 00644fc1: fld dword ptr [ebp + 0x38] */ FPUSH(R_F32((u32)(r_ebp+0x38u)));
    /* 00644fc4: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00644fc6: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 00644fca: fsub dword ptr [esp + 0x14] */ ST(0) = ST(0) - R_F32((u32)(r_esp+0x14u));
    /* 00644fce: fld dword ptr [ebp + 0x3c] */ FPUSH(R_F32((u32)(r_ebp+0x3cu)));
    /* 00644fd1: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 00644fd4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00644fd6: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00644fd8: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00644fda: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00644fdc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00644fde: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 00644fe1: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00644fe3: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 00644fe6: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 00644fe9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00644feb: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 00644fed: fmul qword ptr [0x935540] */ ST(0) = ST(0) * R_F64((u32)(0x935540u));
    /* 00644ff3: fdiv qword ptr [0x935538] */ ST(0) = ST(0) / R_F64((u32)(0x935538u));
    /* 00644ff9: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 00644ffd: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 00645002: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00645007: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0064500b: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0064500f: fistp dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0))); FPOP();
    /* 00645013: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 00645017: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 0064501b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0064501c: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 0064501f: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x645024u); f_007a900c();
    /* 00645024: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00645027: mov edx, dword ptr [ebp + 0x64] */ r_edx = R32((u32)(r_ebp+0x64u));
    /* 0064502a: mov ecx, dword ptr [ebp + 0x5c] */ r_ecx = R32((u32)(r_ebp+0x5cu));
    /* 0064502d: mov dword ptr [ebp + 0x60], edi */ W32((u32)(r_ebp+0x60u), r_edi);
    /* 00645030: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00645033: jle 0x645060 */ if ((fZ||fS!=fO)) goto L_00645060;
L_00645035:; BB(0x00645035);
    /* 00645035: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00645037: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00645039: jle 0x64503d */ if ((fZ||fS!=fO)) goto L_0064503d;
L_0064503b:; BB(0x0064503b);
    /* 0064503b: mov ecx, edi */ r_ecx = r_edi;
L_0064503d:; BB(0x0064503d);
    /* 0064503d: add ecx, -0x40 */ {  u32 a = r_ecx; u32 b = 0xffffffc0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00645040: mov edi, 0xfffffe00 */ r_edi = 0xfffffe00u;
    /* 00645045: cmp ecx, 0xfffffe00 */ {  u32 a = r_ecx; u32 b = 0xfffffe00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064504b: jge 0x64504f */ if ((fS==fO)) goto L_0064504f;
L_0064504d:; BB(0x0064504d);
    /* 0064504d: mov ecx, edi */ r_ecx = r_edi;
L_0064504f:; BB(0x0064504f);
    /* 0064504f: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00645051: cmp edx, 0xffffc800 */ {  u32 a = r_edx; u32 b = 0xffffc800u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00645057: jge 0x6450b7 */ if ((fS==fO)) goto L_006450b7;
L_00645059:; BB(0x00645059);
    /* 00645059: mov edx, 0xffffc800 */ r_edx = 0xffffc800u;
    /* 0064505e: jmp 0x6450b7 */ goto L_006450b7;
L_00645060:; BB(0x00645060);
    /* 00645060: cmp eax, -0x30 */ {  u32 a = r_eax; u32 b = 0xffffffd0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00645063: jge 0x645090 */ if ((fS==fO)) goto L_00645090;
L_00645065:; BB(0x00645065);
    /* 00645065: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00645067: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00645069: jge 0x64506d */ if ((fS==fO)) goto L_0064506d;
L_0064506b:; BB(0x0064506b);
    /* 0064506b: mov ecx, edi */ r_ecx = r_edi;
L_0064506d:; BB(0x0064506d);
    /* 0064506d: add ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00645070: mov edi, 0x200 */ r_edi = 0x200u;
    /* 00645075: cmp ecx, 0x200 */ {  u32 a = r_ecx; u32 b = 0x200u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0064507b: jle 0x64507f */ if ((fZ||fS!=fO)) goto L_0064507f;
L_0064507d:; BB(0x0064507d);
    /* 0064507d: mov ecx, edi */ r_ecx = r_edi;
L_0064507f:; BB(0x0064507f);
    /* 0064507f: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00645081: cmp edx, 0x3800 */ {  u32 a = r_edx; u32 b = 0x3800u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00645087: jle 0x6450b7 */ if ((fZ||fS!=fO)) goto L_006450b7;
L_00645089:; BB(0x00645089);
    /* 00645089: mov edx, 0x3800 */ r_edx = 0x3800u;
    /* 0064508e: jmp 0x6450b7 */ goto L_006450b7;
L_00645090:; BB(0x00645090);
    /* 00645090: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00645092: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00645098: jle 0x6450a2 */ if ((fZ||fS!=fO)) goto L_006450a2;
L_0064509a:; BB(0x0064509a);
    /* 0064509a: add edx, 0xffffff00 */ {  u32 a = r_edx; u32 b = 0xffffff00u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006450a0: jmp 0x6450b7 */ goto L_006450b7;
L_006450a2:; BB(0x006450a2);
    /* 006450a2: mov edi, 0xffffff00 */ r_edi = 0xffffff00u;
    /* 006450a7: cmp edx, 0xffffff00 */ {  u32 a = r_edx; u32 b = 0xffffff00u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006450ad: jl 0x6450b1 */ if ((fS!=fO)) goto L_006450b1;
L_006450af:; BB(0x006450af);
    /* 006450af: mov edx, edi */ r_edx = r_edi;
L_006450b1:; BB(0x006450b1);
    /* 006450b1: add edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_006450b7:; BB(0x006450b7);
    /* 006450b7: mov dword ptr [ebp + 0x64], edx */ W32((u32)(r_ebp+0x64u), r_edx);
    /* 006450ba: mov dword ptr [ebp + 0x5c], ecx */ W32((u32)(r_ebp+0x5cu), r_ecx);
    /* 006450bd: mov eax, ebx */ r_eax = r_ebx;
    /* 006450bf: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006450c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006450c3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006450c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006450c5: ret  */ FN_RET(0x00644f58); r_esp += 4; return;
}

