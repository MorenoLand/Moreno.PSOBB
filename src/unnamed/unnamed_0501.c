#include "protos.h"

void f_00501068(void) /* sub_501068 */
{
    FN_ENTER(0x00501068);
    /* 00501068: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00501069: mov ebp, esp */ r_ebp = r_esp;
    /* 0050106b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0050106d: push 0x8d360c */ { u32 v = 0x8d360cu; r_esp -= 4; W32(r_esp, v); }
    /* 00501072: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00501078: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00501079: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00501080: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00501083: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00501086: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00501089: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0050108c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0050108f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00501092: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00501098: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0050109b: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 0050109e: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005010a1: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 005010a4: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x5010a9u); f_00770748();
    /* 005010a9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005010b0: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005010b3: mov dword ptr [eax], 0xafe680 */ W32((u32)(r_eax), 0xafe680u);
    /* 005010b9: mov ecx, dword ptr [0xa72838] */ r_ecx = R32((u32)(0xa72838u));
    /* 005010bf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005010c1: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x5010c6u); f_005b8610();
    /* 005010c6: mov edx, eax */ r_edx = r_eax;
    /* 005010c8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005010cb: mov dword ptr [eax + 0x34], edx */ W32((u32)(r_eax+0x34u), r_edx);
    /* 005010ce: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005010d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005010d3: je 0x50127a */ if (fZ) goto L_0050127a;
L_005010d9:; BB(0x005010d9);
    /* 005010d9: mov esi, edx */ r_esi = r_edx;
    /* 005010db: mov dword ptr [eax + 0x360], esi */ W32((u32)(r_eax+0x360u), r_esi);
    /* 005010e1: movzx edx, word ptr [esi + 0x1c] */ r_edx = (u32)R16((u32)(r_esi+0x1cu));
    /* 005010e5: mov word ptr [eax + 0x364], dx */ W16((u32)(r_eax+0x364u), (u16)r_edx);
    /* 005010ec: mov ecx, dword ptr [esi + 0x38] */ r_ecx = R32((u32)(r_esi+0x38u));
    /* 005010ef: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005010f2: mov dword ptr [eax + 0x368], ecx */ W32((u32)(r_eax+0x368u), r_ecx);
    /* 005010f8: mov ebx, dword ptr [esi + 0x3c] */ r_ebx = R32((u32)(r_esi+0x3cu));
    /* 005010fb: mov dword ptr [eax + 0x36c], ebx */ W32((u32)(r_eax+0x36cu), r_ebx);
    /* 00501101: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
    /* 00501104: mov dword ptr [eax + 0x370], edi */ W32((u32)(r_eax+0x370u), r_edi);
    /* 0050110a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050110c: je 0x5011ce */ if (fZ) goto L_005011ce;
L_00501112:; BB(0x00501112);
    /* 00501112: mov esi, edx */ r_esi = r_edx;
    /* 00501114: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 00501117: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 0050111a: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 0050111d: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 00501120: mov ebx, dword ptr [esi + 0x24] */ r_ebx = R32((u32)(r_esi+0x24u));
    /* 00501123: mov dword ptr [eax + 0x40], ebx */ W32((u32)(r_eax+0x40u), r_ebx);
    /* 00501126: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00501129: fld dword ptr [esi + 0xc] */ FPUSH(R_F32((u32)(r_esi+0xcu)));
    /* 0050112c: fmul dword ptr [0x91eef8] */ ST(0) = ST(0) * R_F32((u32)(0x91eef8u));
    /* 00501132: mov ecx, dword ptr [eax + 0x360] */ r_ecx = R32((u32)(r_eax+0x360u));
    /* 00501138: fstp dword ptr [eax + 0x340] */ W_F32((u32)(r_eax+0x340u), ST(0)); FPOP();
L_0050113e:; BB(0x0050113e);
    /* 0050113e: push 0x12e */ { u32 v = 0x12eu; r_esp -= 4; W32(r_esp, v); }
    /* 00501143: mov edx, dword ptr [ecx + 0x60] */ r_edx = R32((u32)(r_ecx+0x60u));
    /* 00501146: mov dword ptr [eax + 0x60], edx */ W32((u32)(r_eax+0x60u), r_edx);
    /* 00501149: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050114b: mov dword ptr [eax + 0x33c], ecx */ W32((u32)(r_eax+0x33cu), r_ecx);
    /* 00501151: mov dword ptr [eax + 0x70], 0 */ W32((u32)(r_eax+0x70u), 0x0u);
    /* 00501158: mov dword ptr [eax + 0x344], ecx */ W32((u32)(r_eax+0x344u), r_ecx);
    /* 0050115e: mov dword ptr [eax + 0x6c], 0 */ W32((u32)(r_eax+0x6cu), 0x0u);
    /* 00501165: mov dword ptr [eax + 0x68], 0 */ W32((u32)(r_eax+0x68u), 0x0u);
    /* 0050116c: mov dword ptr [eax + 0x348], 0 */ W32((u32)(r_eax+0x348u), 0x0u);
    /* 00501176: mov dword ptr [eax + 0x34c], 0 */ W32((u32)(r_eax+0x34cu), 0x0u);
    /* 00501180: mov dword ptr [eax + 0x350], 0 */ W32((u32)(r_eax+0x350u), 0x0u);
    /* 0050118a: mov dword ptr [eax + 0x354], 0 */ W32((u32)(r_eax+0x354u), 0x0u);
    /* 00501194: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00501197: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00501198: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x50119du); f_00509590();
    /* 0050119d: mov edx, eax */ r_edx = r_eax;
    /* 0050119f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005011a2: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005011a5: mov dword ptr [eax + 0x35c], 0 */ W32((u32)(r_eax+0x35cu), 0x0u);
    /* 005011af: mov dword ptr [eax + 0x358], edx */ W32((u32)(r_eax+0x358u), r_edx);
L_005011b5:; BB(0x005011b5);
    /* 005011b5: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 005011b8: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 005011bb: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 005011be: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005011c1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005011c8: mov esp, ebp */ r_esp = r_ebp;
    /* 005011ca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005011cb: ret 0xc */ FN_RET(0x00501068); r_esp += 16; return;
L_005011ce:; BB(0x005011ce);
    /* 005011ce: mov edx, esi */ r_edx = r_esi;
    /* 005011d0: mov ecx, dword ptr [edx + 0xa4] */ r_ecx = R32((u32)(r_edx+0xa4u));
    /* 005011d6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005011d8: je 0x501227 */ if (fZ) goto L_00501227;
L_005011da:; BB(0x005011da);
    /* 005011da: mov eax, edx */ r_eax = r_edx;
    /* 005011dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005011dd: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x5011e2u); f_007b999c();
    /* 005011e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005011e3: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 005011e6: mov eax, dword ptr [edi + 0x360] */ r_eax = R32((u32)(r_edi+0x360u));
    /* 005011ec: mov ebx, dword ptr [eax + 0xa4] */ r_ebx = R32((u32)(r_eax+0xa4u));
    /* 005011f2: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 005011f5: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 005011f8: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 005011fb: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 005011fe: mov dword ptr [edi + 0x3c], ecx */ W32((u32)(r_edi+0x3cu), r_ecx);
    /* 00501201: mov esi, dword ptr [ebx + 0x24] */ r_esi = R32((u32)(r_ebx+0x24u));
    /* 00501204: mov dword ptr [edi + 0x40], esi */ W32((u32)(r_edi+0x40u), r_esi);
    /* 00501207: mov ecx, dword ptr [eax + 0x360] */ r_ecx = R32((u32)(r_eax+0x360u));
    /* 0050120d: mov edx, dword ptr [ecx + 0xa4] */ r_edx = R32((u32)(r_ecx+0xa4u));
    /* 00501213: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00501216: fmul dword ptr [0x91eef8] */ ST(0) = ST(0) * R_F32((u32)(0x91eef8u));
    /* 0050121c: fstp dword ptr [eax + 0x340] */ W_F32((u32)(r_eax+0x340u), ST(0)); FPOP();
    /* 00501222: jmp 0x50113e */ goto L_0050113e;
L_00501227:; BB(0x00501227);
    /* 00501227: mov ebx, edx */ r_ebx = r_edx;
    /* 00501229: mov edx, dword ptr [ebx + 0x300] */ r_edx = R32((u32)(r_ebx+0x300u));
    /* 0050122f: mov dword ptr [eax + 0x38], edx */ W32((u32)(r_eax+0x38u), r_edx);
    /* 00501232: mov ecx, dword ptr [ebx + 0x304] */ r_ecx = R32((u32)(r_ebx+0x304u));
    /* 00501238: mov dword ptr [eax + 0x3c], ecx */ W32((u32)(r_eax+0x3cu), r_ecx);
    /* 0050123b: mov esi, dword ptr [ebx + 0x308] */ r_esi = R32((u32)(r_ebx+0x308u));
    /* 00501241: mov dword ptr [eax + 0x40], esi */ W32((u32)(r_eax+0x40u), r_esi);
    /* 00501244: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00501247: mov ecx, dword ptr [eax + 0x360] */ r_ecx = R32((u32)(r_eax+0x360u));
    /* 0050124d: mov edx, dword ptr [ecx + 0x2b4] */ r_edx = R32((u32)(r_ecx+0x2b4u));
    /* 00501253: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00501255: je 0x50126b */ if (fZ) goto L_0050126b;
L_00501257:; BB(0x00501257);
    /* 00501257: fld dword ptr [edx + 0x10] */ FPUSH(R_F32((u32)(r_edx+0x10u)));
    /* 0050125a: fmul dword ptr [0x91eefc] */ ST(0) = ST(0) * R_F32((u32)(0x91eefcu));
    /* 00501260: fstp dword ptr [eax + 0x340] */ W_F32((u32)(r_eax+0x340u), ST(0)); FPOP();
    /* 00501266: jmp 0x50113e */ goto L_0050113e;
L_0050126b:; BB(0x0050126b);
    /* 0050126b: mov dword ptr [eax + 0x340], 0x3fc00000 */ W32((u32)(r_eax+0x340u), 0x3fc00000u);
    /* 00501275: jmp 0x50113e */ goto L_0050113e;
L_0050127a:; BB(0x0050127a);
    /* 0050127a: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 0050127e: mov dword ptr [eax + 0x358], 0 */ W32((u32)(r_eax+0x358u), 0x0u);
    /* 00501288: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050128e: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 00501292: jmp 0x5011b5 */ goto L_005011b5;
}

void f_00501298(void) /* sub_501298 */
{
    FN_ENTER(0x00501298);
    /* 00501298: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0050129c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050129e: je 0x5012c8 */ if (fZ) goto L_005012c8;
L_005012a0:; BB(0x005012a0);
    /* 005012a0: mov eax, dword ptr [ecx + 0x360] */ r_eax = R32((u32)(r_ecx+0x360u));
    /* 005012a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005012a8: je 0x5012c8 */ if (fZ) goto L_005012c8;
L_005012aa:; BB(0x005012aa);
    /* 005012aa: mov eax, dword ptr [ecx + 0x35c] */ r_eax = R32((u32)(r_ecx+0x35cu));
    /* 005012b0: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005012b3: mov dword ptr [ecx + 0x35c], eax */ W32((u32)(r_ecx+0x35cu), r_eax);
    /* 005012b9: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005012bc: jl 0x5012c8 */ if ((fS!=fO)) goto L_005012c8;
L_005012be:; BB(0x005012be);
    /* 005012be: mov dword ptr [ecx + 0x33c], 2 */ W32((u32)(r_ecx+0x33cu), 0x2u);
L_005012c8:; BB(0x005012c8);
    /* 005012c8: fld dword ptr [0x91eef0] */ FPUSH(R_F32((u32)(0x91eef0u)));
    /* 005012ce: ret 8 */ FN_RET(0x00501298); r_esp += 12; return;
}

void f_005012d4(void) /* sub_5012D4 */
{
    FN_ENTER(0x005012d4);
    /* 005012d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005012d5: mov ebp, esp */ r_ebp = r_esp;
    /* 005012d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005012d9: push 0x8d3634 */ { u32 v = 0x8d3634u; r_esp -= 4; W32(r_esp, v); }
    /* 005012de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005012e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005012e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005012ec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005012ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005012f2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005012f5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005012f8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005012fb: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00501300: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00501307: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x50130cu); f_008581c5();
    /* 0050130c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050130d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00501310: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00501312: je 0x501353 */ if (fZ) goto L_00501353;
L_00501314:; BB(0x00501314);
    /* 00501314: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0050131b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00501322: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00501325: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00501327: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00501328: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00501329: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050132a: push 0x9b9498 */ { u32 v = 0x9b9498u; r_esp -= 4; W32(r_esp, v); }
    /* 0050132f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00501331: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x501336u); f_005b7a84();
    /* 00501336: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00501339: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00501340:; BB(0x00501340);
    /* 00501340: mov dword ptr [0xa72838], eax */ W32((u32)(0xa72838u), r_eax);
    /* 00501345: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00501348: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0050134f: mov esp, ebp */ r_esp = r_ebp;
    /* 00501351: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00501352: ret  */ FN_RET(0x005012d4); r_esp += 4; return;
L_00501353:; BB(0x00501353);
    /* 00501353: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00501355: jmp 0x501340 */ goto L_00501340;
}

void f_00501358(void) /* sub_501358 */
{
    FN_ENTER(0x00501358);
    /* 00501358: mov dword ptr [0xa72840], 0x3f800000 */ W32((u32)(0xa72840u), 0x3f800000u);
    /* 00501362: mov dword ptr [0xa72844], 0x41000000 */ W32((u32)(0xa72844u), 0x41000000u);
    /* 0050136c: mov dword ptr [0xa72848], 0x3fc00000 */ W32((u32)(0xa72848u), 0x3fc00000u);
    /* 00501376: ret  */ FN_RET(0x00501358); r_esp += 4; return;
}

void f_00501378(void) /* sub_501378 */
{
    FN_ENTER(0x00501378);
    /* 00501378: mov dword ptr [0xa7284c], 0x3f800000 */ W32((u32)(0xa7284cu), 0x3f800000u);
    /* 00501382: mov dword ptr [0xa72850], 0x41000000 */ W32((u32)(0xa72850u), 0x41000000u);
    /* 0050138c: mov dword ptr [0xa72854], 0x3fc00000 */ W32((u32)(0xa72854u), 0x3fc00000u);
    /* 00501396: ret  */ FN_RET(0x00501378); r_esp += 4; return;
}

void f_00501398(void) /* sub_501398 */
{
    FN_ENTER(0x00501398);
    /* 00501398: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00501399: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0050139b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0050139d: call 0x5013bc */ r_esp -= 4; W32(r_esp, 0x5013a2u); f_005013bc();
    /* 005013a2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005013a6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005013a8: jne 0x5013ae */ if (!fZ) goto L_005013ae;
L_005013aa:; BB(0x005013aa);
    /* 005013aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005013ab: ret 4 */ FN_RET(0x00501398); r_esp += 8; return;
L_005013ae:; BB(0x005013ae);
    /* 005013ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005013af: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5013b4u); f_005c2f74();
    /* 005013b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005013b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005013b6: ret 4 */ FN_RET(0x00501398); r_esp += 8; return;
}

void f_005013bc(void) /* sub_5013BC */
{
    FN_ENTER(0x005013bc);
    /* 005013bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005013bd: mov ebp, esp */ r_ebp = r_esp;
    /* 005013bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005013c1: push 0x8d3650 */ { u32 v = 0x8d3650u; r_esp -= 4; W32(r_esp, v); }
    /* 005013c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005013cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005013cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005013d4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005013d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005013da: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005013dd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005013e0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005013e3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005013e6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005013e9: mov dword ptr [ecx], 0xafe830 */ W32((u32)(r_ecx), 0xafe830u);
    /* 005013ef: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005013f6: call 0x5017b0 */ r_esp -= 4; W32(r_esp, 0x5013fbu); f_005017b0();
    /* 005013fb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005013fe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00501405: mov esp, ebp */ r_esp = r_ebp;
    /* 00501407: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00501408: ret  */ FN_RET(0x005013bc); r_esp += 4; return;
}

void f_0050140c(void) /* sub_50140C */
{
    FN_ENTER(0x0050140c);
    /* 0050140c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050140d: mov ebp, esp */ r_ebp = r_esp;
    /* 0050140f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00501411: push 0x8d3678 */ { u32 v = 0x8d3678u; r_esp -= 4; W32(r_esp, v); }
    /* 00501416: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0050141c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050141d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00501424: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00501427: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0050142a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0050142d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00501430: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00501433: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 00501435: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0050143c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x501441u); f_005caba4();
    /* 00501441: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00501442: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00501445: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00501447: je 0x501469 */ if (fZ) goto L_00501469;
L_00501449:; BB(0x00501449);
    /* 00501449: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00501450: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00501457: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050145a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0050145d: call 0x501478 */ r_esp -= 4; W32(r_esp, 0x501462u); f_00501478();
    /* 00501462: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00501469:; BB(0x00501469);
    /* 00501469: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0050146c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00501473: mov esp, ebp */ r_esp = r_ebp;
    /* 00501475: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00501476: ret  */ FN_RET(0x0050140c); r_esp += 4; return;
}

void f_00501478(void) /* sub_501478 */
{
    FN_ENTER(0x00501478);
    /* 00501478: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00501479: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050147a: mov esi, ecx */ r_esi = r_ecx;
    /* 0050147c: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00501480: mov ecx, esi */ r_ecx = r_esi;
    /* 00501482: call 0x501860 */ r_esp -= 4; W32(r_esp, 0x501487u); f_00501860();
    /* 00501487: mov dword ptr [esi], 0xafe830 */ W32((u32)(r_esi), 0xafe830u);
    /* 0050148d: mov edx, dword ptr [0x9b94f4] */ r_edx = R32((u32)(0x9b94f4u));
    /* 00501493: mov dword ptr [esi + 4], edx */ W32((u32)(r_esi+0x4u), r_edx);
    /* 00501496: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00501499: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 0050149c: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 0050149f: mov dword ptr [esi + 0x24], eax */ W32((u32)(r_esi+0x24u), r_eax);
    /* 005014a2: mov ebp, dword ptr [ebp + 8] */ r_ebp = R32((u32)(r_ebp+0x8u));
    /* 005014a5: mov dword ptr [esi + 0x28], ebp */ W32((u32)(r_esi+0x28u), r_ebp);
    /* 005014a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005014aa: mov dword ptr [esi + 0x2c], 0x3f800000 */ W32((u32)(r_esi+0x2cu), 0x3f800000u);
    /* 005014b1: mov dword ptr [esi + 0x70], eax */ W32((u32)(r_esi+0x70u), r_eax);
    /* 005014b4: mov dword ptr [esi + 0x74], eax */ W32((u32)(r_esi+0x74u), r_eax);
    /* 005014b7: mov eax, esi */ r_eax = r_esi;
    /* 005014b9: mov dword ptr [esi + 0x30], 0x3f800000 */ W32((u32)(r_esi+0x30u), 0x3f800000u);
    /* 005014c0: mov dword ptr [esi + 0x34], 0x3f800000 */ W32((u32)(r_esi+0x34u), 0x3f800000u);
    /* 005014c7: mov dword ptr [esi + 0x38], 0x3f800000 */ W32((u32)(r_esi+0x38u), 0x3f800000u);
    /* 005014ce: mov dword ptr [esi + 0x3c], 0x3f800000 */ W32((u32)(r_esi+0x3cu), 0x3f800000u);
    /* 005014d5: mov dword ptr [esi + 0x40], 0x3f800000 */ W32((u32)(r_esi+0x40u), 0x3f800000u);
    /* 005014dc: mov dword ptr [esi + 0x44], 0x3f800000 */ W32((u32)(r_esi+0x44u), 0x3f800000u);
    /* 005014e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005014e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005014e5: ret 4 */ FN_RET(0x00501478); r_esp += 8; return;
}

void f_005014e8(void) /* sub_5014E8 */
{
    FN_ENTER(0x005014e8);
    /* 005014e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005014e9: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005014ec: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005014ee: mov eax, dword ptr [ebx + 0x74] */ r_eax = R32((u32)(r_ebx+0x74u));
    /* 005014f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005014f3: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005014fa: mov dword ptr [esp + 4], 0x3f800000 */ W32((u32)(r_esp+0x4u), 0x3f800000u);
    /* 00501502: mov dword ptr [esp + 8], 0x3f800000 */ W32((u32)(r_esp+0x8u), 0x3f800000u);
    /* 0050150a: mov dword ptr [esp + 0xc], 0x3f800000 */ W32((u32)(r_esp+0xcu), 0x3f800000u);
    /* 00501512: mov dword ptr [esp + 0x10], 0x40000000 */ W32((u32)(r_esp+0x10u), 0x40000000u);
    /* 0050151a: mov dword ptr [esp + 0x14], 0x40000000 */ W32((u32)(r_esp+0x14u), 0x40000000u);
    /* 00501522: mov dword ptr [esp + 0x18], 0x40000000 */ W32((u32)(r_esp+0x18u), 0x40000000u);
    /* 0050152a: jne 0x5015ac */ if (!fZ) goto L_005015ac;
L_00501530:; BB(0x00501530);
    /* 00501530: mov dword ptr [esp + 0x28], esi */ W32((u32)(r_esp+0x28u), r_esi);
    /* 00501534: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00501536: mov esi, eax */ r_esi = r_eax;
L_00501538:; BB(0x00501538);
    /* 00501538: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050153a: je 0x50160a */ if (fZ) goto L_0050160a;
L_00501540:; BB(0x00501540);
    /* 00501540: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00501543: je 0x50158b */ if (fZ) goto L_0050158b;
L_00501545:; BB(0x00501545);
    /* 00501545: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00501548: jne 0x501576 */ if (!fZ) goto L_00501576;
L_0050154a:; BB(0x0050154a);
    /* 0050154a: fld dword ptr [0x91f040] */ FPUSH(R_F32((u32)(0x91f040u)));
    /* 00501550: fadd dword ptr [ebx + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x24u));
    /* 00501553: mov edx, dword ptr [ebx + 0x20] */ r_edx = R32((u32)(r_ebx+0x20u));
    /* 00501556: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0050155a: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0050155e: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 00501561: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00501565: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 00501569: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0050156b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0050156c: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x501571u); f_0050b510();
    /* 00501571: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00501574: jmp 0x501599 */ goto L_00501599;
L_00501576:; BB(0x00501576);
    /* 00501576: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00501579: jne 0x501599 */ if (!fZ) goto L_00501599;
L_0050157b:; BB(0x0050157b);
    /* 0050157b: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0050157d: lea edx, [ebx + 0x20] */ r_edx = (u32)(r_ebx+0x20u);
    /* 00501580: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00501581: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x501586u); f_0050b510();
    /* 00501586: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00501589: jmp 0x501599 */ goto L_00501599;
L_0050158b:; BB(0x0050158b);
    /* 0050158b: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0050158d: lea edx, [ebx + 0x20] */ r_edx = (u32)(r_ebx+0x20u);
    /* 00501590: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00501591: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x501596u); f_0050b510();
    /* 00501596: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00501599:; BB(0x00501599);
    /* 00501599: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0050159c: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050159f: jl 0x501538 */ if ((fS!=fO)) goto L_00501538;
L_005015a1:; BB(0x005015a1);
    /* 005015a1: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 005015a5: mov dword ptr [ebx + 0x74], 1 */ W32((u32)(r_ebx+0x74u), 0x1u);
L_005015ac:; BB(0x005015ac);
    /* 005015ac: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005015af: push dword ptr [0x9b9500] */ { u32 v = R32((u32)(0x9b9500u)); r_esp -= 4; W32(r_esp, v); }
    /* 005015b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005015b6: lea edx, [ebx + 0x2c] */ r_edx = (u32)(r_ebx+0x2cu);
    /* 005015b9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005015ba: call 0x501b34 */ r_esp -= 4; W32(r_esp, 0x5015bfu); f_00501b34();
    /* 005015bf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005015c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005015c4: je 0x5015d8 */ if (fZ) goto L_005015d8;
L_005015c6:; BB(0x005015c6);
    /* 005015c6: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 005015ca: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005015cf: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 005015d3: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005015d6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005015d7: ret  */ FN_RET(0x005014e8); r_esp += 4; return;
L_005015d8:; BB(0x005015d8);
    /* 005015d8: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 005015dc: push 0x3e4ccccd */ { u32 v = 0x3e4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005015e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005015e2: lea edx, [ebx + 0x3c] */ r_edx = (u32)(r_ebx+0x3cu);
    /* 005015e5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005015e6: call 0x501bb0 */ r_esp -= 4; W32(r_esp, 0x5015ebu); f_00501bb0();
    /* 005015eb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005015ee: mov eax, dword ptr [ebx + 0x70] */ r_eax = R32((u32)(r_ebx+0x70u));
    /* 005015f1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005015f4: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005015f7: jl 0x501602 */ if ((fS!=fO)) goto L_00501602;
L_005015f9:; BB(0x005015f9);
    /* 005015f9: mov dword ptr [ebx + 0x70], 0 */ W32((u32)(r_ebx+0x70u), 0x0u);
    /* 00501600: jmp 0x501605 */ goto L_00501605;
L_00501602:; BB(0x00501602);
    /* 00501602: mov dword ptr [ebx + 0x70], eax */ W32((u32)(r_ebx+0x70u), r_eax);
L_00501605:; BB(0x00501605);
    /* 00501605: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00501608: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00501609: ret  */ FN_RET(0x005014e8); r_esp += 4; return;
L_0050160a:; BB(0x0050160a);
    /* 0050160a: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0050160c: lea edx, [ebx + 0x20] */ r_edx = (u32)(r_ebx+0x20u);
    /* 0050160f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00501610: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x501615u); f_0050b510();
    /* 00501615: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00501618: jmp 0x501599 */ goto L_00501599;
}

void f_00501620(void) /* sub_501620 */
{
    FN_ENTER(0x00501620);
    /* 00501620: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00501621: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00501624: mov edi, ecx */ r_edi = r_ecx;
    /* 00501626: call 0x7a9380 */ r_esp -= 4; W32(r_esp, 0x50162bu); f_007a9380();
    /* 0050162b: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00501631: mov eax, dword ptr [edi + 0x70] */ r_eax = R32((u32)(r_edi+0x70u));
    /* 00501634: mov dword ptr [esp], 0x9cf92c */ W32((u32)(r_esp), 0x9cf92cu);
    /* 0050163b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050163e: mov dword ptr [esp + 4], 0x9b94f8 */ W32((u32)(r_esp+0x4u), 0x9b94f8u);
    /* 00501646: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0050164a: lea eax, [edi + 0x2c] */ r_eax = (u32)(r_edi+0x2cu);
    /* 0050164d: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 00501655: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 0050165b: or edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0050165e: mov dword ptr [0xaf034c], edx */ W32((u32)(0xaf034cu), r_edx);
    /* 00501664: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00501665: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x50166au); f_0082d710();
    /* 0050166a: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0050166e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0050166f: call 0x501900 */ r_esp -= 4; W32(r_esp, 0x501674u); f_00501900();
    /* 00501674: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00501677: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x50167cu); f_0082d7b0();
    /* 0050167c: mov ecx, 0x9b94f8 */ r_ecx = 0x9b94f8u;
    /* 00501681: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x501686u); f_00829cc8();
    /* 00501686: lea ecx, [edi + 0x20] */ r_ecx = (u32)(r_edi+0x20u);
    /* 00501689: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x50168eu); f_0082d838();
    /* 0050168e: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 00501693: mov edx, dword ptr [eax + 0x194] */ r_edx = R32((u32)(r_eax+0x194u));
    /* 00501699: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0050169b: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5016a0u); f_0082d8bc();
    /* 005016a0: push dword ptr [edi + 0x44] */ { u32 v = R32((u32)(r_edi+0x44u)); r_esp -= 4; W32(r_esp, v); }
    /* 005016a3: push dword ptr [edi + 0x40] */ { u32 v = R32((u32)(r_edi+0x40u)); r_esp -= 4; W32(r_esp, v); }
    /* 005016a6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005016a8: push dword ptr [edi + 0x3c] */ { u32 v = R32((u32)(r_edi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005016ab: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x5016b0u); f_0082fa0c();
    /* 005016b0: mov eax, dword ptr [0xa72958] */ r_eax = R32((u32)(0xa72958u));
    /* 005016b5: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 005016b7: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x5016bcu); f_0082e1e8();
    /* 005016bc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005016bd: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5016c2u); f_0082da80();
    /* 005016c2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005016c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005016c6: call 0x501988 */ r_esp -= 4; W32(r_esp, 0x5016cbu); f_00501988();
    /* 005016cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005016cc: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 005016d1: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 005016d6: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x5016dbu); f_007a9318();
    /* 005016db: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005016de: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005016df: ret  */ FN_RET(0x00501620); r_esp += 4; return;
}

void f_005016e0(void) /* sub_5016E0 */
{
    FN_ENTER(0x005016e0);
    /* 005016e0: mov dword ptr [0xa7285c], 0x3f800000 */ W32((u32)(0xa7285cu), 0x3f800000u);
    /* 005016ea: mov dword ptr [0xa72860], 0x41000000 */ W32((u32)(0xa72860u), 0x41000000u);
    /* 005016f4: mov dword ptr [0xa72864], 0x3fc00000 */ W32((u32)(0xa72864u), 0x3fc00000u);
    /* 005016fe: ret  */ FN_RET(0x005016e0); r_esp += 4; return;
}

void f_00501700(void) /* sub_501700 */
{
    FN_ENTER(0x00501700);
    /* 00501700: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 00501707: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050170a: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x50170fu); f_00829de0();
    /* 0050170f: ret  */ FN_RET(0x00501700); r_esp += 4; return;
}

void f_00501710(void) /* sub_501710 */
{
    FN_ENTER(0x00501710);
    /* 00501710: mov dword ptr [0xa72870], 0x3f800000 */ W32((u32)(0xa72870u), 0x3f800000u);
    /* 0050171a: mov dword ptr [0xa72874], 0x41000000 */ W32((u32)(0xa72874u), 0x41000000u);
    /* 00501724: mov dword ptr [0xa72878], 0x3fc00000 */ W32((u32)(0xa72878u), 0x3fc00000u);
    /* 0050172e: ret  */ FN_RET(0x00501710); r_esp += 4; return;
}

void f_00501730(void) /* sub_501730 */
{
    FN_ENTER(0x00501730);
    /* 00501730: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00501731: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00501734: mov edi, ecx */ r_edi = r_ecx;
    /* 00501736: lea eax, [edi + 0x10] */ r_eax = (u32)(r_edi+0x10u);
    /* 00501739: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 0050173c: mov dword ptr [edi + 0x20], 1 */ W32((u32)(r_edi+0x20u), 0x1u);
    /* 00501743: call 0x502e40 */ r_esp -= 4; W32(r_esp, 0x501748u); f_00502e40();
    /* 00501748: push dword ptr [0xaf0354] */ { u32 v = R32((u32)(0xaf0354u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050174e: push dword ptr [0xaf0350] */ { u32 v = R32((u32)(0xaf0350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00501754: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00501755: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00501759: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050175b: call 0x82a9dc */ r_esp -= 4; W32(r_esp, 0x501760u); f_0082a9dc();
    /* 00501760: push 0x8800000 */ { u32 v = 0x8800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00501765: push 0x901 */ { u32 v = 0x901u; r_esp -= 4; W32(r_esp, v); }
    /* 0050176a: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 0050176d: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00501771: call 0x82aa0c */ r_esp -= 4; W32(r_esp, 0x501776u); f_0082aa0c();
    /* 00501776: lea ecx, [edi + 0x1c] */ r_ecx = (u32)(r_edi+0x1cu);
    /* 00501779: mov edx, 1 */ r_edx = 0x1u;
    /* 0050177e: call 0x829e74 */ r_esp -= 4; W32(r_esp, 0x501783u); f_00829e74();
    /* 00501783: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 00501786: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00501789: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050178a: ret  */ FN_RET(0x00501730); r_esp += 4; return;
}

void f_0050178c(void) /* sub_50178C */
{
    FN_ENTER(0x0050178c);
    /* 0050178c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050178d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0050178f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00501791: call 0x5017b0 */ r_esp -= 4; W32(r_esp, 0x501796u); f_005017b0();
    /* 00501796: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0050179a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050179c: jne 0x5017a2 */ if (!fZ) goto L_005017a2;
L_0050179e:; BB(0x0050179e);
    /* 0050179e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050179f: ret 4 */ FN_RET(0x0050178c); r_esp += 8; return;
L_005017a2:; BB(0x005017a2);
    /* 005017a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005017a3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5017a8u); f_005c2f74();
    /* 005017a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005017a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005017aa: ret 4 */ FN_RET(0x0050178c); r_esp += 8; return;
}

void f_005017b0(void) /* sub_5017B0 */
{
    FN_ENTER(0x005017b0);
    /* 005017b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005017b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005017b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005017b5: push 0x8d3694 */ { u32 v = 0x8d3694u; r_esp -= 4; W32(r_esp, v); }
    /* 005017ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005017c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005017c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005017c8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005017cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005017ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005017d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005017d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005017d7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005017da: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005017dd: mov dword ptr [ecx], 0xafe868 */ W32((u32)(r_ecx), 0xafe868u);
    /* 005017e3: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 005017ea: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005017f1: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5017f6u); f_008171e8();
    /* 005017f6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005017f9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00501800: mov esp, ebp */ r_esp = r_ebp;
    /* 00501802: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00501803: ret  */ FN_RET(0x005017b0); r_esp += 4; return;
}

void f_00501804(void) /* sub_501804 */
{
    FN_ENTER(0x00501804);
    /* 00501804: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00501806: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00501808:; BB(0x00501808);
    /* 00501808: mov ecx, dword ptr [eax*4 + 0xa72880] */ r_ecx = R32((u32)(r_eax*4+0xa72880u));
    /* 0050180f: cmp ecx, dword ptr [esp + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00501813: je 0x501820 */ if (fZ) goto L_00501820;
L_00501815:; BB(0x00501815);
    /* 00501815: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00501818: cmp eax, 0x36 */ {  u32 a = r_eax; u32 b = 0x36u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0050181b: jl 0x501808 */ if ((fS!=fO)) goto L_00501808;
L_0050181d:; BB(0x0050181d);
    /* 0050181d: mov eax, edx */ r_eax = r_edx;
    /* 0050181f: ret  */ FN_RET(0x00501804); r_esp += 4; return;
L_00501820:; BB(0x00501820);
    /* 00501820: mov edx, eax */ r_edx = r_eax;
    /* 00501822: jmp 0x50181d */ goto L_0050181d;
}

void f_00501824(void) /* sub_501824 */
{
    FN_ENTER(0x00501824);
    /* 00501824: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00501828: cmp eax, 0x36 */ {  u32 a = r_eax; u32 b = 0x36u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0050182b: jl 0x501833 */ if ((fS!=fO)) goto L_00501833;
L_0050182d:; BB(0x0050182d);
    /* 0050182d: mov eax, 0x35 */ r_eax = 0x35u;
    /* 00501832: ret  */ FN_RET(0x00501824); r_esp += 4; return;
L_00501833:; BB(0x00501833);
    /* 00501833: mov eax, dword ptr [eax*4 + 0xa72880] */ r_eax = R32((u32)(r_eax*4+0xa72880u));
    /* 0050183a: ret  */ FN_RET(0x00501824); r_esp += 4; return;
}

void f_0050183c(void) /* sub_50183C */
{
    FN_ENTER(0x0050183c);
    /* 0050183c: mov ecx, 0x9b97a8 */ r_ecx = 0x9b97a8u;
    /* 00501841: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x501846u); f_00829de0();
    /* 00501846: push dword ptr [0xa72958] */ { u32 v = R32((u32)(0xa72958u)); r_esp -= 4; W32(r_esp, v); }
    /* 0050184c: call 0x5b9bac */ r_esp -= 4; W32(r_esp, 0x501851u); f_005b9bac();
    /* 00501851: mov dword ptr [0xa72958], 0 */ W32((u32)(0xa72958u), 0x0u);
    /* 0050185b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0050185c: ret  */ FN_RET(0x0050183c); r_esp += 4; return;
}

void f_00501860(void) /* sub_501860 */
{
    FN_ENTER(0x00501860);
    /* 00501860: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00501861: mov edi, ecx */ r_edi = r_ecx;
    /* 00501863: push dword ptr [0xaca334] */ { u32 v = R32((u32)(0xaca334u)); r_esp -= 4; W32(r_esp, v); }
    /* 00501869: mov ecx, edi */ r_ecx = r_edi;
    /* 0050186b: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x501870u); f_008193cc();
    /* 00501870: mov dword ptr [edi], 0xafe868 */ W32((u32)(r_edi), 0xafe868u);
    /* 00501876: mov edx, dword ptr [0x9b950c] */ r_edx = R32((u32)(0x9b950cu));
    /* 0050187c: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 0050187f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00501881: mov dword ptr [edi + 0x20], 0 */ W32((u32)(r_edi+0x20u), 0x0u);
    /* 00501888: mov dword ptr [edi + 0x54], eax */ W32((u32)(r_edi+0x54u), r_eax);
    /* 0050188b: mov dword ptr [edi + 0x58], eax */ W32((u32)(r_edi+0x58u), r_eax);
    /* 0050188e: mov dword ptr [edi + 0x5c], eax */ W32((u32)(r_edi+0x5cu), r_eax);
    /* 00501891: mov dword ptr [edi + 0x24], 0 */ W32((u32)(r_edi+0x24u), 0x0u);
    /* 00501898: mov dword ptr [edi + 0x68], eax */ W32((u32)(r_edi+0x68u), r_eax);
    /* 0050189b: mov dword ptr [edi + 0x6c], eax */ W32((u32)(r_edi+0x6cu), r_eax);
    /* 0050189e: mov dword ptr [edi + 0x1c], eax */ W32((u32)(r_edi+0x1cu), r_eax);
    /* 005018a1: mov dword ptr [edi + 0x28], 0 */ W32((u32)(r_edi+0x28u), 0x0u);
    /* 005018a8: mov eax, edi */ r_eax = r_edi;
    /* 005018aa: mov dword ptr [edi + 0x2c], 0 */ W32((u32)(r_edi+0x2cu), 0x0u);
    /* 005018b1: mov dword ptr [edi + 0x30], 0 */ W32((u32)(r_edi+0x30u), 0x0u);
    /* 005018b8: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
    /* 005018bf: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
    /* 005018c6: mov dword ptr [edi + 0x3c], 0x3f800000 */ W32((u32)(r_edi+0x3cu), 0x3f800000u);
    /* 005018cd: mov dword ptr [edi + 0x40], 0x3f800000 */ W32((u32)(r_edi+0x40u), 0x3f800000u);
    /* 005018d4: mov dword ptr [edi + 0x44], 0x3f800000 */ W32((u32)(r_edi+0x44u), 0x3f800000u);
    /* 005018db: mov dword ptr [edi + 0x48], 0 */ W32((u32)(r_edi+0x48u), 0x0u);
    /* 005018e2: mov dword ptr [edi + 0x4c], 0 */ W32((u32)(r_edi+0x4cu), 0x0u);
    /* 005018e9: mov dword ptr [edi + 0x50], 0 */ W32((u32)(r_edi+0x50u), 0x0u);
    /* 005018f0: mov dword ptr [edi + 0x60], 0 */ W32((u32)(r_edi+0x60u), 0x0u);
    /* 005018f7: mov dword ptr [edi + 0x64], 0 */ W32((u32)(r_edi+0x64u), 0x0u);
    /* 005018fe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005018ff: ret  */ FN_RET(0x00501860); r_esp += 4; return;
}

void f_00501900(void) /* sub_501900 */
{
    FN_ENTER(0x00501900);
    /* 00501900: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00501901: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00501902: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00501903: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00501907: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00501909: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 0050190c: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 0050190f: mov esi, dword ptr [eax + 0xc] */ r_esi = R32((u32)(r_eax+0xcu));
    /* 00501912: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00501914: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00501916: lea ebp, [edx + edx] */ r_ebp = (u32)(r_edx+r_edx);
    /* 00501919: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0050191b: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0050191d: mov edx, dword ptr [ebp + edx + 8] */ r_edx = R32((u32)(r_ebp+r_edx+0x8u));
    /* 00501921: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00501923: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00501925: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 00501928: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050192a: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 0050192c: mov dword ptr [ecx + esi + 8], edx */ W32((u32)(r_ecx+r_esi+0x8u), r_edx);
    /* 00501930: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 00501932: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00501935: mov esi, dword ptr [ebp] */ r_esi = R32((u32)(r_ebp));
    /* 00501938: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 0050193b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050193d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050193f: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 00501942: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00501944: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00501947: mov edx, dword ptr [edx + esi + 4] */ r_edx = R32((u32)(r_edx+r_esi+0x4u));
    /* 0050194b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050194d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050194f: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 00501952: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00501954: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 00501957: mov dword ptr [edi + ecx + 4], edx */ W32((u32)(r_edi+r_ecx+0x4u), r_edx);
    /* 0050195b: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 0050195d: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00501960: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 00501963: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00501966: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 00501968: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050196a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050196c: lea ebp, [edx + edx] */ r_ebp = (u32)(r_edx+r_edx);
    /* 0050196f: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00501971: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00501973: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00501975: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00501977: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 0050197a: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0050197c: mov eax, dword ptr [ebp + edx] */ r_eax = R32((u32)(r_ebp+r_edx));
    /* 00501980: mov dword ptr [ecx + esi], eax */ W32((u32)(r_ecx+r_esi), r_eax);
    /* 00501983: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00501984: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00501985: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00501986: ret  */ FN_RET(0x00501900); r_esp += 4; return;
}

void f_00501988(void) /* sub_501988 */
{
    FN_ENTER(0x00501988);
    /* 00501988: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00501989: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050198a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050198b: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0050198f: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00501992: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 00501995: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00501997: mov esi, dword ptr [eax + 8] */ r_esi = R32((u32)(r_eax+0x8u));
    /* 0050199a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050199c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050199e: lea ebp, [edx + edx] */ r_ebp = (u32)(r_edx+r_edx);
    /* 005019a1: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005019a3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005019a5: mov edx, dword ptr [ebp + edx + 8] */ r_edx = R32((u32)(r_ebp+r_edx+0x8u));
    /* 005019a9: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005019ab: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005019ad: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 005019b0: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005019b2: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 005019b4: mov dword ptr [ecx + esi + 8], edx */ W32((u32)(r_ecx+r_esi+0x8u), r_edx);
    /* 005019b8: mov ebp, dword ptr [eax + 4] */ r_ebp = R32((u32)(r_eax+0x4u));
    /* 005019bb: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 005019be: mov esi, dword ptr [ebp] */ r_esi = R32((u32)(r_ebp));
    /* 005019c1: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 005019c3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005019c5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005019c7: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 005019ca: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005019cc: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 005019cf: mov edx, dword ptr [edx + esi + 4] */ r_edx = R32((u32)(r_edx+r_esi+0x4u));
    /* 005019d3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005019d5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005019d7: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 005019da: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005019dc: mov ecx, dword ptr [ebp] */ r_ecx = R32((u32)(r_ebp));
    /* 005019df: mov dword ptr [edi + ecx + 4], edx */ W32((u32)(r_edi+r_ecx+0x4u), r_edx);
    /* 005019e3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005019e6: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005019e9: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 005019eb: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 005019ee: mov esi, dword ptr [esi] */ r_esi = R32((u32)(r_esi));
    /* 005019f0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005019f2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005019f4: lea ebp, [edx + edx] */ r_ebp = (u32)(r_edx+r_edx);
    /* 005019f7: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005019f9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005019fb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005019fd: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005019ff: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00501a02: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00501a04: mov eax, dword ptr [ebp + edx] */ r_eax = R32((u32)(r_ebp+r_edx));
    /* 00501a08: mov dword ptr [ecx + esi], eax */ W32((u32)(r_ecx+r_esi), r_eax);
    /* 00501a0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00501a0c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00501a0d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00501a0e: ret  */ FN_RET(0x00501988); r_esp += 4; return;
}

void f_00501a10(void) /* sub_501A10 */
{
    FN_ENTER(0x00501a10);
    /* 00501a10: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00501a14: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00501a18: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00501a1c: fld dword ptr [ecx + 4] */ FPUSH(R_F32((u32)(r_ecx+0x4u)));
    /* 00501a1f: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00501a22: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00501a24: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00501a26: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00501a27: jbe 0x501a52 */ if ((fC||fZ)) goto L_00501a52;
L_00501a29:; BB(0x00501a29);
    /* 00501a29: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00501a2b: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00501a2d: fld dword ptr [0x91f07c] */ FPUSH(R_F32((u32)(0x91f07cu)));
    /* 00501a33: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00501a35: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00501a37: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00501a38: jbe 0x501a40 */ if ((fC||fZ)) goto L_00501a40;
L_00501a3a:; BB(0x00501a3a);
    /* 00501a3a: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00501a3c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00501a3e: jmp 0x501a4d */ goto L_00501a4d;
L_00501a40:; BB(0x00501a40);
    /* 00501a40: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00501a42: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00501a44: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00501a46: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00501a47: ja 0x501a4b */ if ((!fC&&!fZ)) goto L_00501a4b;
L_00501a49:; BB(0x00501a49);
    /* 00501a49: fst st(1) */ ST(1) = ST(0);
L_00501a4b:; BB(0x00501a4b);
    /* 00501a4b: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00501a4d:; BB(0x00501a4d);
    /* 00501a4d: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
    /* 00501a50: jmp 0x501a79 */ goto L_00501a79;
L_00501a52:; BB(0x00501a52);
    /* 00501a52: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00501a54: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00501a56: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00501a58: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00501a5a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00501a5b: jae 0x501a61 */ if (!fC) goto L_00501a61;
L_00501a5d:; BB(0x00501a5d);
    /* 00501a5d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00501a5f: jmp 0x501a76 */ goto L_00501a76;
L_00501a61:; BB(0x00501a61);
    /* 00501a61: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00501a63: fld dword ptr [0x91f080] */ FPUSH(R_F32((u32)(0x91f080u)));
    /* 00501a69: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00501a6b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00501a6d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00501a6e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00501a70: jbe 0x501a74 */ if ((fC||fZ)) goto L_00501a74;
L_00501a72:; BB(0x00501a72);
    /* 00501a72: fst st(1) */ ST(1) = ST(0);
L_00501a74:; BB(0x00501a74);
    /* 00501a74: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00501a76:; BB(0x00501a76);
    /* 00501a76: fstp dword ptr [ecx + 4] */ W_F32((u32)(r_ecx+0x4u), ST(0)); FPOP();
L_00501a79:; BB(0x00501a79);
    /* 00501a79: fld dword ptr [ecx + 8] */ FPUSH(R_F32((u32)(r_ecx+0x8u)));
    /* 00501a7c: fld dword ptr [edx + 8] */ FPUSH(R_F32((u32)(r_edx+0x8u)));
    /* 00501a7f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00501a81: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00501a83: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00501a84: jbe 0x501aaf */ if ((fC||fZ)) goto L_00501aaf;
L_00501a86:; BB(0x00501a86);
    /* 00501a86: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00501a88: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00501a8a: fld dword ptr [0x91f07c] */ FPUSH(R_F32((u32)(0x91f07cu)));
    /* 00501a90: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00501a92: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00501a94: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00501a95: jbe 0x501a9d */ if ((fC||fZ)) goto L_00501a9d;
L_00501a97:; BB(0x00501a97);
    /* 00501a97: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00501a99: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00501a9b: jmp 0x501aaa */ goto L_00501aaa;
L_00501a9d:; BB(0x00501a9d);
    /* 00501a9d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00501a9f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00501aa1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00501aa3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00501aa4: ja 0x501aa8 */ if ((!fC&&!fZ)) goto L_00501aa8;
L_00501aa6:; BB(0x00501aa6);
    /* 00501aa6: fst st(1) */ ST(1) = ST(0);
L_00501aa8:; BB(0x00501aa8);
    /* 00501aa8: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00501aaa:; BB(0x00501aaa);
    /* 00501aaa: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 00501aad: jmp 0x501ad6 */ goto L_00501ad6;
L_00501aaf:; BB(0x00501aaf);
    /* 00501aaf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00501ab1: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 00501ab3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00501ab5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00501ab7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00501ab8: jae 0x501abe */ if (!fC) goto L_00501abe;
L_00501aba:; BB(0x00501aba);
    /* 00501aba: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00501abc: jmp 0x501ad3 */ goto L_00501ad3;
L_00501abe:; BB(0x00501abe);
    /* 00501abe: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00501ac0: fld dword ptr [0x91f080] */ FPUSH(R_F32((u32)(0x91f080u)));
    /* 00501ac6: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00501ac8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00501aca: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00501acb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00501acd: jbe 0x501ad1 */ if ((fC||fZ)) goto L_00501ad1;
L_00501acf:; BB(0x00501acf);
    /* 00501acf: fst st(1) */ ST(1) = ST(0);
L_00501ad1:; BB(0x00501ad1);
    /* 00501ad1: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00501ad3:; BB(0x00501ad3);
    /* 00501ad3: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
L_00501ad6:; BB(0x00501ad6);
    /* 00501ad6: fld dword ptr [ecx + 0xc] */ FPUSH(R_F32((u32)(r_ecx+0xcu)));
    /* 00501ad9: fld dword ptr [edx + 0xc] */ FPUSH(R_F32((u32)(r_edx+0xcu)));
    /* 00501adc: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00501ade: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00501ae0: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00501ae1: jbe 0x501b0b */ if ((fC||fZ)) goto L_00501b0b;
L_00501ae3:; BB(0x00501ae3);
    /* 00501ae3: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00501ae5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00501ae7: fld dword ptr [0x91f07c] */ FPUSH(R_F32((u32)(0x91f07cu)));
    /* 00501aed: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00501aef: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00501af1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00501af2: jbe 0x501afa */ if ((fC||fZ)) goto L_00501afa;
L_00501af4:; BB(0x00501af4);
    /* 00501af4: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00501af6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00501af8: jmp 0x501b07 */ goto L_00501b07;
L_00501afa:; BB(0x00501afa);
    /* 00501afa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00501afc: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00501afe: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00501b00: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00501b01: ja 0x501b05 */ if ((!fC&&!fZ)) goto L_00501b05;
L_00501b03:; BB(0x00501b03);
    /* 00501b03: fst st(1) */ ST(1) = ST(0);
L_00501b05:; BB(0x00501b05);
    /* 00501b05: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00501b07:; BB(0x00501b07);
    /* 00501b07: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 00501b0a: ret  */ FN_RET(0x00501a10); r_esp += 4; return;
L_00501b0b:; BB(0x00501b0b);
    /* 00501b0b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00501b0d: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00501b0f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00501b11: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00501b13: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00501b14: jae 0x501b1a */ if (!fC) goto L_00501b1a;
L_00501b16:; BB(0x00501b16);
    /* 00501b16: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00501b18: jmp 0x501b2f */ goto L_00501b2f;
L_00501b1a:; BB(0x00501b1a);
    /* 00501b1a: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00501b1c: fld dword ptr [0x91f080] */ FPUSH(R_F32((u32)(0x91f080u)));
    /* 00501b22: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00501b24: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00501b26: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00501b27: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00501b29: jbe 0x501b2d */ if ((fC||fZ)) goto L_00501b2d;
L_00501b2b:; BB(0x00501b2b);
    /* 00501b2b: fst st(1) */ ST(1) = ST(0);
L_00501b2d:; BB(0x00501b2d);
    /* 00501b2d: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00501b2f:; BB(0x00501b2f);
    /* 00501b2f: fstp dword ptr [ecx + 0xc] */ W_F32((u32)(r_ecx+0xcu), ST(0)); FPOP();
    /* 00501b32: ret  */ FN_RET(0x00501a10); r_esp += 4; return;
}

void f_00501b34(void) /* sub_501B34 */
{
    FN_ENTER(0x00501b34);
    /* 00501b34: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00501b38: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00501b3c: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00501b3e: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 00501b40: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00501b42: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00501b44: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00501b45: je 0x501ba5 */ if (fZ) goto L_00501ba5;
L_00501b47:; BB(0x00501b47);
    /* 00501b47: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00501b49: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00501b4b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00501b4c: jbe 0x501b7a */ if ((fC||fZ)) goto L_00501b7a;
L_00501b4e:; BB(0x00501b4e);
    /* 00501b4e: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00501b52: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 00501b54: fld dword ptr [0x91f074] */ FPUSH(R_F32((u32)(0x91f074u)));
    /* 00501b5a: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00501b5c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00501b5e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00501b5f: jbe 0x501b67 */ if ((fC||fZ)) goto L_00501b67;
L_00501b61:; BB(0x00501b61);
    /* 00501b61: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00501b63: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00501b65: jmp 0x501b76 */ goto L_00501b76;
L_00501b67:; BB(0x00501b67);
    /* 00501b67: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00501b69: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00501b6b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00501b6d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00501b6e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00501b70: jb 0x501b74 */ if (fC) goto L_00501b74;
L_00501b72:; BB(0x00501b72);
    /* 00501b72: fst st(1) */ ST(1) = ST(0);
L_00501b74:; BB(0x00501b74);
    /* 00501b74: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00501b76:; BB(0x00501b76);
    /* 00501b76: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
    /* 00501b78: jmp 0x501ba2 */ goto L_00501ba2;
L_00501b7a:; BB(0x00501b7a);
    /* 00501b7a: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 00501b7e: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 00501b80: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00501b82: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00501b84: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00501b85: jbe 0x501b8b */ if ((fC||fZ)) goto L_00501b8b;
L_00501b87:; BB(0x00501b87);
    /* 00501b87: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00501b89: jmp 0x501ba0 */ goto L_00501ba0;
L_00501b8b:; BB(0x00501b8b);
    /* 00501b8b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00501b8d: fld dword ptr [0x91f078] */ FPUSH(R_F32((u32)(0x91f078u)));
    /* 00501b93: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00501b95: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00501b97: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00501b98: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00501b9a: jbe 0x501b9e */ if ((fC||fZ)) goto L_00501b9e;
L_00501b9c:; BB(0x00501b9c);
    /* 00501b9c: fst st(1) */ ST(1) = ST(0);
L_00501b9e:; BB(0x00501b9e);
    /* 00501b9e: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00501ba0:; BB(0x00501ba0);
    /* 00501ba0: fstp dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0)); FPOP();
L_00501ba2:; BB(0x00501ba2);
    /* 00501ba2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00501ba4: ret  */ FN_RET(0x00501b34); r_esp += 4; return;
L_00501ba5:; BB(0x00501ba5);
    /* 00501ba5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00501ba7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00501ba9: mov eax, 1 */ r_eax = 0x1u;
    /* 00501bae: ret  */ FN_RET(0x00501b34); r_esp += 4; return;
}

void f_00501bb0(void) /* sub_501BB0 */
{
    FN_ENTER(0x00501bb0);
    /* 00501bb0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00501bb1: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00501bb4: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00501bb8: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00501bbb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00501bbc: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00501bc0: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00501bc4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00501bc5: call 0x7a8f28 */ r_esp -= 4; W32(r_esp, 0x501bcau); f_007a8f28();
    /* 00501bca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00501bcc: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00501bd0: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00501bd2: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00501bd6: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00501bd9: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00501bdd: mov dword ptr [edi + 8], ecx */ W32((u32)(r_edi+0x8u), r_ecx);
    /* 00501be0: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00501be3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00501be4: ret  */ FN_RET(0x00501bb0); r_esp += 4; return;
}

void f_00501bc0(void)
{
    FN_ENTER(0x00501bc0);
    /* 00501bc0: push dword ptr [esp + 0x20] */ { u32 v = R32((u32)(r_esp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00501bc4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00501bc5: call 0x7a8f28 */ r_esp -= 4; W32(r_esp, 0x501bcau); f_007a8f28();
    /* 00501bca: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00501bcc: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00501bd0: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00501bd2: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00501bd6: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 00501bd9: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00501bdd: mov dword ptr [edi + 8], ecx */ W32((u32)(r_edi+0x8u), r_ecx);
    /* 00501be0: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00501be3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00501be4: ret  */ FN_RET(0x00501bc0); r_esp += 4; return;
}

void f_00501be8(void) /* sub_501BE8 */
{
    FN_ENTER(0x00501be8);
    /* 00501be8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00501be9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00501bea: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00501bed: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 00501bf1: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 00501bf5: lea ecx, [esp + 0x10] */ r_ecx = (u32)(r_esp+0x10u);
    /* 00501bf9: fld dword ptr [edi] */ FPUSH(R_F32((u32)(r_edi)));
    /* 00501bfb: fsub dword ptr [ebp] */ ST(0) = ST(0) - R_F32((u32)(r_ebp));
    /* 00501bfe: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00501c02: fld dword ptr [edi + 4] */ FPUSH(R_F32((u32)(r_edi+0x4u)));
    /* 00501c05: fsub dword ptr [ebp + 4] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x4u));
    /* 00501c08: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00501c0c: fld dword ptr [edi + 8] */ FPUSH(R_F32((u32)(r_edi+0x8u)));
    /* 00501c0f: fsub dword ptr [ebp + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x8u));
    /* 00501c12: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 00501c16: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x501c1bu); f_0083173c();
    /* 00501c1b: fcom dword ptr [esp + 0x30] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x30u))); 
    /* 00501c1f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00501c21: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00501c22: ja 0x501c2c */ if ((!fC&&!fZ)) goto L_00501c2c;
L_00501c24:; BB(0x00501c24);
    /* 00501c24: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00501c26: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00501c29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00501c2a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00501c2b: ret  */ FN_RET(0x00501be8); r_esp += 4; return;
L_00501c2c:; BB(0x00501c2c);
    /* 00501c2c: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 00501c30: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00501c34: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00501c37: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00501c3b: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00501c3f: call 0x7a8f28 */ r_esp -= 4; W32(r_esp, 0x501c44u); f_007a8f28();
    /* 00501c44: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00501c46: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00501c49: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00501c4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00501c4b: ret  */ FN_RET(0x00501be8); r_esp += 4; return;
}

void f_00501c4c(void) /* sub_501C4C */
{
    FN_ENTER(0x00501c4c);
    /* 00501c4c: push 0x91f0a4 */ { u32 v = 0x91f0a4u; r_esp -= 4; W32(r_esp, v); }
    /* 00501c51: call 0x5b938c */ r_esp -= 4; W32(r_esp, 0x501c56u); f_005b938c();
    /* 00501c56: push 0x9b97a8 */ { u32 v = 0x9b97a8u; r_esp -= 4; W32(r_esp, v); }
    /* 00501c5b: push 0x91f094 */ { u32 v = 0x91f094u; r_esp -= 4; W32(r_esp, v); }
    /* 00501c60: mov dword ptr [0xa72958], eax */ W32((u32)(0xa72958u), r_eax);
    /* 00501c65: call 0x81a7d8 */ r_esp -= 4; W32(r_esp, 0x501c6au); f_0081a7d8();
    /* 00501c6a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00501c6d: mov edx, dword ptr [0x9b97a8] */ r_edx = R32((u32)(0x9b97a8u));
    /* 00501c73: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00501c76: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00501c78:; BB(0x00501c78);
    /* 00501c78: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00501c7a: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00501c7d: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00501c7f: mov dword ptr [eax + 0xa72880], ecx */ W32((u32)(r_eax+0xa72880u), r_ecx);
    /* 00501c85: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00501c88: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00501c8b: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00501c8d: mov dword ptr [eax + 0xa72884], ecx */ W32((u32)(r_eax+0xa72884u), r_ecx);
    /* 00501c93: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 00501c96: mov ecx, dword ptr [ecx + 0xc] */ r_ecx = R32((u32)(r_ecx+0xcu));
    /* 00501c99: mov ecx, dword ptr [ecx] */ r_ecx = R32((u32)(r_ecx));
    /* 00501c9b: mov dword ptr [eax + 0xa72888], ecx */ W32((u32)(r_eax+0xa72888u), r_ecx);
    /* 00501ca1: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00501ca4: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00501ca7: cmp eax, 0xd8 */ {  u32 a = r_eax; u32 b = 0xd8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00501cac: jl 0x501c78 */ if ((fS!=fO)) goto L_00501c78;
L_00501cae:; BB(0x00501cae);
    /* 00501cae: ret  */ FN_RET(0x00501c4c); r_esp += 4; return;
}

void f_00501cb0(void) /* sub_501CB0 */
{
    FN_ENTER(0x00501cb0);
    /* 00501cb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00501cb1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00501cb3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00501cb5: call 0x501cd4 */ r_esp -= 4; W32(r_esp, 0x501cbau); f_00501cd4();
    /* 00501cba: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00501cbe: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00501cc0: jne 0x501cc6 */ if (!fZ) goto L_00501cc6;
L_00501cc2:; BB(0x00501cc2);
    /* 00501cc2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00501cc3: ret 4 */ FN_RET(0x00501cb0); r_esp += 8; return;
L_00501cc6:; BB(0x00501cc6);
    /* 00501cc6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00501cc7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x501cccu); f_005c2f74();
    /* 00501ccc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00501ccd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00501cce: ret 4 */ FN_RET(0x00501cb0); r_esp += 8; return;
}

void f_00501cd4(void) /* sub_501CD4 */
{
    FN_ENTER(0x00501cd4);
    /* 00501cd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00501cd5: mov ebp, esp */ r_ebp = r_esp;
    /* 00501cd7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00501cd9: push 0x8d36b0 */ { u32 v = 0x8d36b0u; r_esp -= 4; W32(r_esp, v); }
    /* 00501cde: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00501ce4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00501ce5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00501cec: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00501cef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00501cf2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00501cf5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00501cf8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00501cfb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00501cfe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00501d01: mov dword ptr [ecx], 0xafe8d8 */ W32((u32)(r_ecx), 0xafe8d8u);
    /* 00501d07: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00501d0e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x501d13u); f_008171e8();
    /* 00501d13: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00501d16: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00501d1d: mov esp, ebp */ r_esp = r_ebp;
    /* 00501d1f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00501d20: ret  */ FN_RET(0x00501cd4); r_esp += 4; return;
}

void f_00501d24(void) /* sub_501D24 */
{
    FN_ENTER(0x00501d24);
    /* 00501d24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00501d25: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00501d27: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00501d29: call 0x501d48 */ r_esp -= 4; W32(r_esp, 0x501d2eu); f_00501d48();
    /* 00501d2e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00501d32: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00501d34: jne 0x501d3a */ if (!fZ) goto L_00501d3a;
L_00501d36:; BB(0x00501d36);
    /* 00501d36: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00501d37: ret 4 */ FN_RET(0x00501d24); r_esp += 8; return;
L_00501d3a:; BB(0x00501d3a);
    /* 00501d3a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00501d3b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x501d40u); f_005c2f74();
    /* 00501d40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00501d41: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00501d42: ret 4 */ FN_RET(0x00501d24); r_esp += 8; return;
}

void f_00501d48(void) /* sub_501D48 */
{
    FN_ENTER(0x00501d48);
    /* 00501d48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00501d49: mov ebp, esp */ r_ebp = r_esp;
    /* 00501d4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00501d4d: push 0x8d36cc */ { u32 v = 0x8d36ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00501d52: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00501d58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00501d59: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00501d60: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00501d63: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00501d66: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00501d69: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00501d6c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00501d6f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00501d72: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00501d75: mov dword ptr [ecx], 0xafe8c8 */ W32((u32)(r_ecx), 0xafe8c8u);
    /* 00501d7b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00501d82: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x501d87u); f_008171e8();
    /* 00501d87: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00501d8a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00501d91: mov esp, ebp */ r_esp = r_ebp;
    /* 00501d93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00501d94: ret  */ FN_RET(0x00501d48); r_esp += 4; return;
}

void f_00501d98(void) /* sub_501D98 */
{
    FN_ENTER(0x00501d98);
    /* 00501d98: mov byte ptr [0xa72ae4], 0 */ W8((u32)(0xa72ae4u), 0x0u);
    /* 00501d9f: call 0x501da8 */ r_esp -= 4; W32(r_esp, 0x501da4u); f_00501da8();
    /* 00501da4: ret  */ FN_RET(0x00501d98); r_esp += 4; return;
}

void f_00501da8(void) /* sub_501DA8 */
{
    FN_ENTER(0x00501da8);
    /* 00501da8: mov eax, dword ptr [0x9ba3f4] */ r_eax = R32((u32)(0x9ba3f4u));
    /* 00501dad: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00501db0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00501db2: je 0x501dbe */ if (fZ) goto L_00501dbe;
L_00501db4:; BB(0x00501db4);
    /* 00501db4: mov ecx, 0x9ba3f4 */ r_ecx = 0x9ba3f4u;
    /* 00501db9: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x501dbeu); f_00829de0();
L_00501dbe:; BB(0x00501dbe);
    /* 00501dbe: mov eax, dword ptr [0x9ba3ec] */ r_eax = R32((u32)(0x9ba3ecu));
    /* 00501dc3: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00501dc6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00501dc8: je 0x501dd4 */ if (fZ) goto L_00501dd4;
L_00501dca:; BB(0x00501dca);
    /* 00501dca: mov ecx, 0x9ba3ec */ r_ecx = 0x9ba3ecu;
    /* 00501dcf: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x501dd4u); f_00829de0();
L_00501dd4:; BB(0x00501dd4);
    /* 00501dd4: ret  */ FN_RET(0x00501da8); r_esp += 4; return;
}

void f_00501dd8(void) /* sub_501DD8 */
{
    FN_ENTER(0x00501dd8);
    /* 00501dd8: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x501dddu); f_00482a10();
    /* 00501ddd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00501ddf: jne 0x501de2 */ if (!fZ) goto L_00501de2;
L_00501de1:; BB(0x00501de1);
    /* 00501de1: ret  */ FN_RET(0x00501dd8); r_esp += 4; return;
L_00501de2:; BB(0x00501de2);
    /* 00501de2: mov ecx, 0x9ba3ec */ r_ecx = 0x9ba3ecu;
    /* 00501de7: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x501decu); f_00829cc8();
    /* 00501dec: call 0x501df4 */ r_esp -= 4; W32(r_esp, 0x501df1u); f_00501df4();
    /* 00501df1: ret  */ FN_RET(0x00501dd8); r_esp += 4; return;
}

void f_00501df4(void) /* sub_501DF4 */
{
    FN_ENTER(0x00501df4);
    /* 00501df4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00501df6: mov edx, 0xa21740 */ r_edx = 0xa21740u;
    /* 00501dfb: call 0x835cfc */ r_esp -= 4; W32(r_esp, 0x501e00u); f_00835cfc();
    /* 00501e00: ret  */ FN_RET(0x00501df4); r_esp += 4; return;
}

void f_00501e04(void) /* sub_501E04 */
{
    FN_ENTER(0x00501e04);
    /* 00501e04: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00501e07: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x501e0cu); f_00482a10();
    /* 00501e0c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00501e0e: je 0x501efa */ if (fZ) goto L_00501efa;
L_00501e14:; BB(0x00501e14);
    /* 00501e14: movzx eax, byte ptr [0xa72ae4] */ r_eax = (u32)R8((u32)(0xa72ae4u));
    /* 00501e1b: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00501e1d: je 0x501e23 */ if (fZ) goto L_00501e23;
L_00501e1f:; BB(0x00501e1f);
    /* 00501e1f: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00501e22: ret  */ FN_RET(0x00501e04); r_esp += 4; return;
L_00501e23:; BB(0x00501e23);
    /* 00501e23: mov ecx, 0x9ba3ec */ r_ecx = 0x9ba3ecu;
    /* 00501e28: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x501e2du); f_00829cc8();
    /* 00501e2d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00501e2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00501e30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00501e31: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00501e33: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00501e35: call 0x82aa38 */ r_esp -= 4; W32(r_esp, 0x501e3au); f_0082aa38();
    /* 00501e3a: call 0x4d28a4 */ r_esp -= 4; W32(r_esp, 0x501e3fu); f_004d28a4();
    /* 00501e3f: mov ecx, 0x9ba3f4 */ r_ecx = 0x9ba3f4u;
    /* 00501e44: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x501e49u); f_00829cc8();
    /* 00501e49: call 0x835e40 */ r_esp -= 4; W32(r_esp, 0x501e4eu); f_00835e40();
    /* 00501e4e: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x501e53u); f_00482a10();
    /* 00501e53: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00501e55: je 0x501ef0 */ if (fZ) goto L_00501ef0;
L_00501e5b:; BB(0x00501e5b);
    /* 00501e5b: call 0x82f500 */ r_esp -= 4; W32(r_esp, 0x501e60u); f_0082f500();
    /* 00501e60: mov ecx, 0x9ba3ec */ r_ecx = 0x9ba3ecu;
    /* 00501e65: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x501e6au); f_00829cc8();
    /* 00501e6a: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x501e6fu); f_007a9044();
    /* 00501e6f: call 0x7a93d8 */ r_esp -= 4; W32(r_esp, 0x501e74u); f_007a93d8();
    /* 00501e74: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 00501e7b: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00501e83: mov dword ptr [esp + 8], 0x43000000 */ W32((u32)(r_esp+0x8u), 0x43000000u);
    /* 00501e8b: mov dword ptr [esp + 0xc], 0x43000000 */ W32((u32)(r_esp+0xcu), 0x43000000u);
    /* 00501e93: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00501e9b: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00501ea3: mov dword ptr [esp + 0x18], 0x3f800000 */ W32((u32)(r_esp+0x18u), 0x3f800000u);
    /* 00501eab: mov dword ptr [esp + 0x1c], 0x3f800000 */ W32((u32)(r_esp+0x1cu), 0x3f800000u);
    /* 00501eb3: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x501eb8u); f_0082dbac();
    /* 00501eb8: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00501ebd: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x501ec2u); f_0082bb30();
    /* 00501ec2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00501ec4: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00501ec9: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x501eceu); f_0082bb60();
    /* 00501ece: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00501ed3: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00501ed7: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x501edcu); f_0082b440();
    /* 00501edc: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x501ee1u); f_004ac444();
    /* 00501ee1: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x501ee6u); f_0082dab0();
    /* 00501ee6: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x501eebu); f_007a9318();
    /* 00501eeb: call 0x82f4d8 */ r_esp -= 4; W32(r_esp, 0x501ef0u); f_0082f4d8();
L_00501ef0:; BB(0x00501ef0);
    /* 00501ef0: call 0x835e60 */ r_esp -= 4; W32(r_esp, 0x501ef5u); f_00835e60();
    /* 00501ef5: call 0x4d2968 */ r_esp -= 4; W32(r_esp, 0x501efau); f_004d2968();
L_00501efa:; BB(0x00501efa);
    /* 00501efa: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00501efd: ret  */ FN_RET(0x00501e04); r_esp += 4; return;
}

void f_00501f00(void) /* sub_501F00 */
{
    FN_ENTER(0x00501f00);
    /* 00501f00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00501f01: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00501f04: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 00501f08: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x501f0du); f_00482a10();
    /* 00501f0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00501f0f: jne 0x501f16 */ if (!fZ) goto L_00501f16;
L_00501f11:; BB(0x00501f11);
    /* 00501f11: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00501f14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00501f15: ret  */ FN_RET(0x00501f00); r_esp += 4; return;
L_00501f16:; BB(0x00501f16);
    /* 00501f16: call 0x82f500 */ r_esp -= 4; W32(r_esp, 0x501f1bu); f_0082f500();
    /* 00501f1b: mov ecx, 0x9ba3ec */ r_ecx = 0x9ba3ecu;
    /* 00501f20: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x501f25u); f_00829cc8();
    /* 00501f25: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x501f2au); f_007a9044();
    /* 00501f2a: call 0x7a93d8 */ r_esp -= 4; W32(r_esp, 0x501f2fu); f_007a93d8();
    /* 00501f2f: mov ecx, dword ptr [esp + 0x30] */ r_ecx = R32((u32)(r_esp+0x30u));
    /* 00501f33: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00501f36: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00501f39: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 00501f3c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00501f40: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 00501f43: fadd dword ptr [ecx] */ ST(0) = ST(0) + R_F32((u32)(r_ecx));
    /* 00501f45: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00501f49: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 00501f4c: mov ebp, dword ptr [esp + 0x30] */ r_ebp = R32((u32)(r_esp+0x30u));
    /* 00501f50: fadd dword ptr [ebp + 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x4u));
    /* 00501f53: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00501f57: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00501f5f: mov dword ptr [esp + 0x14], 0 */ W32((u32)(r_esp+0x14u), 0x0u);
    /* 00501f67: mov dword ptr [esp + 0x18], 0x3f800000 */ W32((u32)(r_esp+0x18u), 0x3f800000u);
    /* 00501f6f: mov dword ptr [esp + 0x1c], 0x3f800000 */ W32((u32)(r_esp+0x1cu), 0x3f800000u);
    /* 00501f77: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x501f7cu); f_0082dbac();
    /* 00501f7c: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00501f81: call 0x82bb30 */ r_esp -= 4; W32(r_esp, 0x501f86u); f_0082bb30();
    /* 00501f86: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00501f8a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00501f8c: call 0x82bb60 */ r_esp -= 4; W32(r_esp, 0x501f91u); f_0082bb60();
    /* 00501f91: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00501f96: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00501f9a: call 0x82b440 */ r_esp -= 4; W32(r_esp, 0x501f9fu); f_0082b440();
    /* 00501f9f: call 0x4ac444 */ r_esp -= 4; W32(r_esp, 0x501fa4u); f_004ac444();
    /* 00501fa4: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x501fa9u); f_0082dab0();
    /* 00501fa9: call 0x7a9318 */ r_esp -= 4; W32(r_esp, 0x501faeu); f_007a9318();
    /* 00501fae: call 0x82f4d8 */ r_esp -= 4; W32(r_esp, 0x501fb3u); f_0082f4d8();
    /* 00501fb3: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00501fb6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00501fb7: ret  */ FN_RET(0x00501f00); r_esp += 4; return;
}

void f_00501fb8(void) /* sub_501FB8 */
{
    FN_ENTER(0x00501fb8);
    /* 00501fb8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00501fb9: mov ebx, esp */ r_ebx = r_esp;
    /* 00501fbb: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00501fbe: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00501fc1: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x501fc6u); f_00482a10();
    /* 00501fc6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00501fc8: je 0x502114 */ if (fZ) goto L_00502114;
L_00501fce:; BB(0x00501fce);
    /* 00501fce: mov edx, dword ptr [0x9ba414] */ r_edx = R32((u32)(0x9ba414u));
    /* 00501fd4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00501fd6: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00501fdb: call 0x835e68 */ r_esp -= 4; W32(r_esp, 0x501fe0u); f_00835e68();
    /* 00501fe0: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00501fe5: mov edx, 1 */ r_edx = 0x1u;
    /* 00501fea: call 0x835ee0 */ r_esp -= 4; W32(r_esp, 0x501fefu); f_00835ee0();
    /* 00501fef: call 0x482a10 */ r_esp -= 4; W32(r_esp, 0x501ff4u); f_00482a10();
    /* 00501ff4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00501ff6: je 0x502103 */ if (fZ) goto L_00502103;
L_00501ffc:; BB(0x00501ffc);
    /* 00501ffc: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00502000: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00502001: call 0x82f548 */ r_esp -= 4; W32(r_esp, 0x502006u); f_0082f548();
    /* 00502006: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00502007: fild dword ptr [0xaf0350] */ FPUSH((long double)(i32)R32((u32)(0xaf0350u)));
    /* 0050200d: fild dword ptr [0xaf0354] */ FPUSH((long double)(i32)R32((u32)(0xaf0354u)));
    /* 00502013: fld dword ptr [esp + 0x40] */ FPUSH(R_F32((u32)(r_esp+0x40u)));
    /* 00502017: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 00502019: fld dword ptr [esp + 0x44] */ FPUSH(R_F32((u32)(r_esp+0x44u)));
    /* 0050201d: fdiv st(2) */ ST(0) = ST(0) / ST(2);
    /* 0050201f: fld dword ptr [0x91fc34] */ FPUSH(R_F32((u32)(0x91fc34u)));
    /* 00502025: fld dword ptr [esp + 0x48] */ FPUSH(R_F32((u32)(r_esp+0x48u)));
    /* 00502029: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0050202b: fdivrp st(5) */ ST(5) = ST(0) / ST(5); FPOP();
    /* 0050202d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0050202f: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00502031: fld dword ptr [esp + 0x4c] */ FPUSH(R_F32((u32)(r_esp+0x4cu)));
    /* 00502035: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 00502037: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00502039: fdivp st(2) */ ST(2) = ST(2) / ST(0); FPOP();
    /* 0050203b: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0050203d: mov eax, dword ptr [0x91fa80] */ r_eax = R32((u32)(0x91fa80u));
    /* 00502042: mov ecx, dword ptr [0x91fa84] */ r_ecx = R32((u32)(0x91fa84u));
    /* 00502048: mov edx, dword ptr [0x91fa88] */ r_edx = R32((u32)(0x91fa88u));
    /* 0050204e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00502050: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00502052: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00502054: fchs  */ ST(0) = -ST(0);
    /* 00502056: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00502059: mov eax, dword ptr [0x91fa8c] */ r_eax = R32((u32)(0x91fa8cu));
    /* 0050205e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00502060: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00502063: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00502067: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0050206b: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0050206f: mov eax, dword ptr [0x91fa90] */ r_eax = R32((u32)(0x91fa90u));
    /* 00502074: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00502078: mov eax, dword ptr [0x91fa94] */ r_eax = R32((u32)(0x91fa94u));
    /* 0050207d: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00502081: mov eax, dword ptr [0x91fa98] */ r_eax = R32((u32)(0x91fa98u));
    /* 00502086: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0050208a: mov edx, 0xacc040 */ r_edx = 0xacc040u;
    /* 0050208f: mov eax, dword ptr [0x91fa9c] */ r_eax = R32((u32)(0x91fa9cu));
    /* 00502094: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 00502098: mov eax, dword ptr [0x91faa0] */ r_eax = R32((u32)(0x91faa0u));
    /* 0050209d: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005020a1: mov eax, dword ptr [0x91faa4] */ r_eax = R32((u32)(0x91faa4u));
    /* 005020a6: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 005020aa: mov eax, dword ptr [0x91faa8] */ r_eax = R32((u32)(0x91faa8u));
    /* 005020af: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005020b3: mov eax, dword ptr [0x91faac] */ r_eax = R32((u32)(0x91faacu));
    /* 005020b8: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 005020bc: mov eax, dword ptr [0x91fab0] */ r_eax = R32((u32)(0x91fab0u));
    /* 005020c1: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 005020c5: mov eax, dword ptr [0x91fab4] */ r_eax = R32((u32)(0x91fab4u));
    /* 005020ca: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 005020ce: mov eax, dword ptr [0x91fab8] */ r_eax = R32((u32)(0x91fab8u));
    /* 005020d3: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 005020d7: mov eax, dword ptr [0x91fabc] */ r_eax = R32((u32)(0x91fabcu));
    /* 005020dc: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 005020e0: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 005020e2: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 005020e6: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005020ea: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005020ee: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005020f1: call 0x831308 */ r_esp -= 4; W32(r_esp, 0x5020f6u); f_00831308();
    /* 005020f6: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005020f9: mov ecx, 1 */ r_ecx = 0x1u;
    /* 005020fe: call 0x835cfc */ r_esp -= 4; W32(r_esp, 0x502103u); f_00835cfc();
L_00502103:; BB(0x00502103);
    /* 00502103: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00502105: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0050210a: mov edx, 1 */ r_edx = 0x1u;
    /* 0050210f: call 0x835e1c */ r_esp -= 4; W32(r_esp, 0x502114u); f_00835e1c();
L_00502114:; BB(0x00502114);
    /* 00502114: mov esp, ebx */ r_esp = r_ebx;
    /* 00502116: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00502117: ret  */ FN_RET(0x00501fb8); r_esp += 4; return;
}

