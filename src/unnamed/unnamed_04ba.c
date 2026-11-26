#include "protos.h"

void f_004ba0ac(void) /* sub_4BA0AC */
{
    FN_ENTER(0x004ba0ac);
    /* 004ba0ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ba0ad: mov esi, ecx */ r_esi = r_ecx;
    /* 004ba0af: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x4ba0b4u); f_004f7c84();
    /* 004ba0b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ba0b6: je 0x4ba0ba */ if (fZ) goto L_004ba0ba;
L_004ba0b8:; BB(0x004ba0b8);
    /* 004ba0b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ba0b9: ret  */ FN_RET(0x004ba0ac); r_esp += 4; return;
L_004ba0ba:; BB(0x004ba0ba);
    /* 004ba0ba: mov ecx, dword ptr [esi + 0x3c8] */ r_ecx = R32((u32)(r_esi+0x3c8u));
    /* 004ba0c0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 004ba0c2: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 004ba0c5: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 004ba0c8: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 004ba0cb: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 004ba0ce: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 004ba0d1: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004ba0d3: mov ecx, esi */ r_ecx = r_esi;
    /* 004ba0d5: call dword ptr [eax + 0x154] */ { u32 t = R32((u32)(r_eax+0x154u)); r_esp -= 4; W32(r_esp, 0x4ba0dbu); call_ind(t); }
    /* 004ba0db: mov ecx, esi */ r_ecx = r_esi;
    /* 004ba0dd: call 0x435484 */ r_esp -= 4; W32(r_esp, 0x4ba0e2u); f_00435484();
    /* 004ba0e2: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 004ba0e4: mov ecx, esi */ r_ecx = r_esi;
    /* 004ba0e6: call dword ptr [eax + 0x168] */ { u32 t = R32((u32)(r_eax+0x168u)); r_esp -= 4; W32(r_esp, 0x4ba0ecu); call_ind(t); }
    /* 004ba0ec: mov eax, dword ptr [esi + 0xa4] */ r_eax = R32((u32)(r_esi+0xa4u));
    /* 004ba0f2: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 004ba0f5: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ba0f8: je 0x4ba11e */ if (fZ) goto L_004ba11e;
L_004ba0fa:; BB(0x004ba0fa);
    /* 004ba0fa: mov ecx, esi */ r_ecx = r_esi;
    /* 004ba0fc: call 0x6401f0 */ r_esp -= 4; W32(r_esp, 0x4ba101u); f_006401f0();
    /* 004ba101: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ba104: mov eax, 1 */ r_eax = 0x1u;
    /* 004ba109: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba10a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba10b: push 0x3f99999a */ { u32 v = 0x3f99999au; r_esp -= 4; W32(r_esp, v); }
    /* 004ba110: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 004ba115: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ba116: call 0x80575c */ r_esp -= 4; W32(r_esp, 0x4ba11bu); f_0080575c();
    /* 004ba11b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_004ba11e:; BB(0x004ba11e);
    /* 004ba11e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ba11f: ret  */ FN_RET(0x004ba0ac); r_esp += 4; return;
}

void f_004ba120(void) /* sub_4BA120 */
{
    FN_ENTER(0x004ba120);
    /* 004ba120: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ba121: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ba122: mov edi, ecx */ r_edi = r_ecx;
    /* 004ba124: movsx edx, word ptr [edi + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x2bcu));
    /* 004ba12b: movsx ebp, word ptr [edi + 0x334] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_edi+0x334u));
    /* 004ba132: mov eax, dword ptr [edi + 0x3c4] */ r_eax = R32((u32)(r_edi+0x3c4u));
    /* 004ba138: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004ba13a: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004ba13c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004ba13e: jne 0x4ba154 */ if (!fZ) goto L_004ba154;
L_004ba140:; BB(0x004ba140);
    /* 004ba140: mov eax, dword ptr [edi + 0x3cc] */ r_eax = R32((u32)(r_edi+0x3ccu));
    /* 004ba146: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 004ba148: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ba14a: jle 0x4ba19b */ if ((fZ||fS!=fO)) goto L_004ba19b;
L_004ba14c:; BB(0x004ba14c);
    /* 004ba14c: mov dword ptr [edi + 0x3cc], eax */ W32((u32)(r_edi+0x3ccu), r_eax);
    /* 004ba152: jmp 0x4ba182 */ goto L_004ba182;
L_004ba154:; BB(0x004ba154);
    /* 004ba154: push 0x41400000 */ { u32 v = 0x41400000u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba159: push 0x41700000 */ { u32 v = 0x41700000u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba15e: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 004ba161: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba162: call 0x4b96bc */ r_esp -= 4; W32(r_esp, 0x4ba167u); f_004b96bc();
    /* 004ba167: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba16a: movzx eax, word ptr [edi + 0x2d8] */ r_eax = (u32)R16((u32)(r_edi+0x2d8u));
    /* 004ba171: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba172: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ba173: mov ecx, dword ptr [edi + 0x14] */ r_ecx = R32((u32)(r_edi+0x14u));
    /* 004ba176: call 0x4b966c */ r_esp -= 4; W32(r_esp, 0x4ba17bu); f_004b966c();
    /* 004ba17b: movsx edx, word ptr [edi + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x2bcu));
L_004ba182:; BB(0x004ba182);
    /* 004ba182: mov ecx, dword ptr [edi + 0x14] */ r_ecx = R32((u32)(r_edi+0x14u));
    /* 004ba185: mov word ptr [edi + 0x334], dx */ W16((u32)(r_edi+0x334u), (u16)r_edx);
    /* 004ba18c: call 0x4b95b4 */ r_esp -= 4; W32(r_esp, 0x4ba191u); f_004b95b4();
    /* 004ba191: mov ecx, edi */ r_ecx = r_edi;
    /* 004ba193: call 0x51f81c */ r_esp -= 4; W32(r_esp, 0x4ba198u); f_0051f81c();
    /* 004ba198: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ba199: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ba19a: ret  */ FN_RET(0x004ba120); r_esp += 4; return;
L_004ba19b:; BB(0x004ba19b);
    /* 004ba19b: mov dword ptr [edi + 0x3cc], 0 */ W32((u32)(r_edi+0x3ccu), 0x0u);
    /* 004ba1a5: mov ecx, edi */ r_ecx = r_edi;
    /* 004ba1a7: call 0x4ba1b8 */ r_esp -= 4; W32(r_esp, 0x4ba1acu); f_004ba1b8();
    /* 004ba1ac: movsx edx, word ptr [edi + 0x2bc] */ r_edx = (u32)(i32)(i16)R16((u32)(r_edi+0x2bcu));
    /* 004ba1b3: jmp 0x4ba182 */ goto L_004ba182;
}

void f_004ba1b8(void) /* sub_4BA1B8 */
{
    FN_ENTER(0x004ba1b8);
    /* 004ba1b8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ba1b9: mov ebp, esp */ r_ebp = r_esp;
    /* 004ba1bb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ba1bd: push 0x8d0ed8 */ { u32 v = 0x8d0ed8u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba1c2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ba1c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba1c9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ba1d0: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ba1d3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ba1d6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004ba1d9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004ba1dc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004ba1df: mov eax, dword ptr [ecx + 0x3c4] */ r_eax = R32((u32)(r_ecx+0x3c4u));
    /* 004ba1e5: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 004ba1e8: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba1ea: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ba1ed: mov dword ptr [ecx + 0x3c4], eax */ W32((u32)(r_ecx+0x3c4u), r_eax);
    /* 004ba1f3: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x4ba1f8u); f_0077a684();
    /* 004ba1f8: mov esi, eax */ r_esi = r_eax;
    /* 004ba1fa: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004ba1fc: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x4ba201u); f_0077a698();
    /* 004ba201: mov ebx, eax */ r_ebx = r_eax;
    /* 004ba203: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba205: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x4ba20au); f_0077a6b4();
    /* 004ba20a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba20d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ba210: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba211: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ba212: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ba213: call 0x520c98 */ r_esp -= 4; W32(r_esp, 0x4ba218u); f_00520c98();
    /* 004ba218: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ba21b: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 004ba222: mov eax, 0x4e20 */ r_eax = 0x4e20u;
    /* 004ba227: mov word ptr [edx + 0x334], ax */ W16((u32)(r_edx+0x334u), (u16)r_eax);
    /* 004ba22e: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004ba230: mov word ptr [edx + 0x2bc], ax */ W16((u32)(r_edx+0x2bcu), (u16)r_eax);
    /* 004ba237: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4ba23cu); f_005caba4();
    /* 004ba23c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ba23d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 004ba240: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba242: je 0x4ba29c */ if (fZ) goto L_004ba29c;
L_004ba244:; BB(0x004ba244);
    /* 004ba244: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 004ba24b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ba252: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ba255: push dword ptr [eax + 0x3c0] */ { u32 v = R32((u32)(r_eax+0x3c0u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ba25b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004ba25e: lea ebx, [eax + 0x38] */ r_ebx = (u32)(r_eax+0x38u);
    /* 004ba261: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ba262: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba263: call 0x4acc98 */ r_esp -= 4; W32(r_esp, 0x4ba268u); f_004acc98();
    /* 004ba268: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_004ba26f:; BB(0x004ba26f);
    /* 004ba26f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ba276: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ba278: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba279: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba27a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ba27b: push 0x3f9 */ { u32 v = 0x3f9u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba280: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4ba285u); f_00814298();
    /* 004ba285: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004ba288: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 004ba28b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004ba28e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ba291: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ba298: mov esp, ebp */ r_esp = r_ebp;
    /* 004ba29a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ba29b: ret  */ FN_RET(0x004ba1b8); r_esp += 4; return;
L_004ba29c:; BB(0x004ba29c);
    /* 004ba29c: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004ba29f: lea ebx, [eax + 0x38] */ r_ebx = (u32)(r_eax+0x38u);
    /* 004ba2a2: jmp 0x4ba26f */ goto L_004ba26f;
}

void f_004ba2a4(void) /* sub_4BA2A4 */
{
    FN_ENTER(0x004ba2a4);
    /* 004ba2a4: mov eax, dword ptr [ecx + 0x3c4] */ r_eax = R32((u32)(r_ecx+0x3c4u));
    /* 004ba2aa: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ba2ad: ret  */ FN_RET(0x004ba2a4); r_esp += 4; return;
}

void f_004ba2e4(void) /* sub_4BA2E4 */
{
    FN_ENTER(0x004ba2e4);
    /* 004ba2e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004ba2e5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ba2e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ba2e7: mov edi, ecx */ r_edi = r_ecx;
    /* 004ba2e9: mov ecx, edi */ r_ecx = r_edi;
    /* 004ba2eb: call 0x521840 */ r_esp -= 4; W32(r_esp, 0x4ba2f0u); f_00521840();
    /* 004ba2f0: mov eax, dword ptr [0x9abc84] */ r_eax = R32((u32)(0x9abc84u));
    /* 004ba2f5: mov edx, dword ptr [0x9abc88] */ r_edx = R32((u32)(0x9abc88u));
    /* 004ba2fb: mov ebx, dword ptr [0x9abc8c] */ r_ebx = R32((u32)(0x9abc8cu));
    /* 004ba301: mov ebp, dword ptr [0x9abc90] */ r_ebp = R32((u32)(0x9abc90u));
    /* 004ba307: mov dword ptr [edi + 0x394], eax */ W32((u32)(r_edi+0x394u), r_eax);
    /* 004ba30d: mov eax, dword ptr [0x9abc94] */ r_eax = R32((u32)(0x9abc94u));
    /* 004ba312: mov dword ptr [edi + 0x398], edx */ W32((u32)(r_edi+0x398u), r_edx);
    /* 004ba318: mov dword ptr [edi + 0x39c], ebx */ W32((u32)(r_edi+0x39cu), r_ebx);
    /* 004ba31e: mov dword ptr [edi + 0x3a0], ebp */ W32((u32)(r_edi+0x3a0u), r_ebp);
    /* 004ba324: mov dword ptr [edi + 0x3a4], eax */ W32((u32)(r_edi+0x3a4u), r_eax);
    /* 004ba32a: mov ecx, edi */ r_ecx = r_edi;
    /* 004ba32c: mov eax, dword ptr [0x9abc98] */ r_eax = R32((u32)(0x9abc98u));
    /* 004ba331: mov dword ptr [edi + 0x3a8], eax */ W32((u32)(r_edi+0x3a8u), r_eax);
    /* 004ba337: mov eax, dword ptr [0x9abc9c] */ r_eax = R32((u32)(0x9abc9cu));
    /* 004ba33c: mov dword ptr [edi + 0x3ac], eax */ W32((u32)(r_edi+0x3acu), r_eax);
    /* 004ba342: mov eax, dword ptr [0x9abca0] */ r_eax = R32((u32)(0x9abca0u));
    /* 004ba347: mov dword ptr [edi + 0x3b0], eax */ W32((u32)(r_edi+0x3b0u), r_eax);
    /* 004ba34d: mov eax, dword ptr [0x9abca4] */ r_eax = R32((u32)(0x9abca4u));
    /* 004ba352: mov dword ptr [edi + 0x3b4], eax */ W32((u32)(r_edi+0x3b4u), r_eax);
    /* 004ba358: mov eax, dword ptr [0x9abca8] */ r_eax = R32((u32)(0x9abca8u));
    /* 004ba35d: mov dword ptr [edi + 0x3b8], eax */ W32((u32)(r_edi+0x3b8u), r_eax);
    /* 004ba363: mov eax, dword ptr [0x9abcac] */ r_eax = R32((u32)(0x9abcacu));
    /* 004ba368: mov dword ptr [edi + 0x3bc], eax */ W32((u32)(r_edi+0x3bcu), r_eax);
    /* 004ba36e: lea eax, [edi + 0x394] */ r_eax = (u32)(r_edi+0x394u);
    /* 004ba374: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba375: call 0x7b9ccc */ r_esp -= 4; W32(r_esp, 0x4ba37au); f_007b9ccc();
    /* 004ba37a: mov ecx, edi */ r_ecx = r_edi;
    /* 004ba37c: call 0x51ffdc */ r_esp -= 4; W32(r_esp, 0x4ba381u); f_0051ffdc();
    /* 004ba381: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba383: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x4ba388u); f_0077a684();
    /* 004ba388: mov ebp, eax */ r_ebp = r_eax;
    /* 004ba38a: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004ba38c: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x4ba391u); f_0077a698();
    /* 004ba391: mov ebx, eax */ r_ebx = r_eax;
    /* 004ba393: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba395: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x4ba39au); f_0077a6b4();
    /* 004ba39a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba39d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba39e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ba39f: mov ecx, edi */ r_ecx = r_edi;
    /* 004ba3a1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ba3a2: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4ba3a7u); f_00520c70();
    /* 004ba3a7: mov eax, 0x4e20 */ r_eax = 0x4e20u;
    /* 004ba3ac: mov word ptr [edi + 0x334], ax */ W16((u32)(r_edi+0x334u), (u16)r_eax);
    /* 004ba3b3: mov word ptr [edi + 0x2bc], ax */ W16((u32)(r_edi+0x2bcu), (u16)r_eax);
    /* 004ba3ba: mov ecx, edi */ r_ecx = r_edi;
    /* 004ba3bc: call 0x520360 */ r_esp -= 4; W32(r_esp, 0x4ba3c1u); f_00520360();
    /* 004ba3c1: movzx eax, word ptr [edi + 0x2bc] */ r_eax = (u32)R16((u32)(r_edi+0x2bcu));
    /* 004ba3c8: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004ba3ca: mov dword ptr [edi + 0x358], 0x9abcb0 */ W32((u32)(r_edi+0x358u), 0x9abcb0u);
    /* 004ba3d4: mov word ptr [edi + 0x346], ax */ W16((u32)(r_edi+0x346u), (u16)r_eax);
    /* 004ba3db: mov dword ptr [edi + 0x384], 0x40400000 */ W32((u32)(r_edi+0x384u), 0x40400000u);
    /* 004ba3e5: mov ecx, edi */ r_ecx = r_edi;
    /* 004ba3e7: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4ba3edu); call_ind(t); }
    /* 004ba3ed: mov dword ptr [edi + 0x3c4], 0 */ W32((u32)(r_edi+0x3c4u), 0x0u);
    /* 004ba3f7: call 0x4b98d0 */ r_esp -= 4; W32(r_esp, 0x4ba3fcu); f_004b98d0();
    /* 004ba3fc: mov dword ptr [edi + 0x3cc], eax */ W32((u32)(r_edi+0x3ccu), r_eax);
    /* 004ba402: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ba403: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ba404: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004ba405: ret  */ FN_RET(0x004ba2e4); r_esp += 4; return;
}

void f_004ba408(void) /* sub_4BA408 */
{
    FN_ENTER(0x004ba408);
    /* 004ba408: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ba409: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004ba40b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004ba40d: call 0x4ba42c */ r_esp -= 4; W32(r_esp, 0x4ba412u); f_004ba42c();
    /* 004ba412: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004ba416: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ba418: jne 0x4ba41e */ if (!fZ) goto L_004ba41e;
L_004ba41a:; BB(0x004ba41a);
    /* 004ba41a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ba41b: ret 4 */ FN_RET(0x004ba408); r_esp += 8; return;
L_004ba41e:; BB(0x004ba41e);
    /* 004ba41e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004ba41f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4ba424u); f_005c2f74();
    /* 004ba424: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ba425: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004ba426: ret 4 */ FN_RET(0x004ba408); r_esp += 8; return;
}

void f_004ba42c(void) /* sub_4BA42C */
{
    FN_ENTER(0x004ba42c);
    /* 004ba42c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ba42d: mov ebp, esp */ r_ebp = r_esp;
    /* 004ba42f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ba431: push 0x8d0ef4 */ { u32 v = 0x8d0ef4u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba436: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ba43c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba43d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ba444: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ba447: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ba44a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ba44d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ba450: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ba453: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004ba456: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ba45d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ba460: mov eax, dword ptr [ecx + 0x40] */ r_eax = R32((u32)(r_ecx+0x40u));
    /* 004ba463: mov dword ptr [ecx], 0xafafd8 */ W32((u32)(r_ecx), 0xafafd8u);
    /* 004ba469: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba46b: je 0x4ba47e */ if (fZ) goto L_004ba47e;
L_004ba46d:; BB(0x004ba46d);
    /* 004ba46d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba46e: call 0x795994 */ r_esp -= 4; W32(r_esp, 0x4ba473u); f_00795994();
    /* 004ba473: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ba474: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ba477: mov dword ptr [ecx + 0x40], 0 */ W32((u32)(r_ecx+0x40u), 0x0u);
L_004ba47e:; BB(0x004ba47e);
    /* 004ba47e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ba485: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4ba48au); f_008171e8();
    /* 004ba48a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ba48d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ba494: mov esp, ebp */ r_esp = r_ebp;
    /* 004ba496: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ba497: ret  */ FN_RET(0x004ba42c); r_esp += 4; return;
}

void f_004ba498(void) /* sub_4BA498 */
{
    FN_ENTER(0x004ba498);
    /* 004ba498: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ba499: mov ebp, esp */ r_ebp = r_esp;
    /* 004ba49b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ba49d: push 0x8d0f10 */ { u32 v = 0x8d0f10u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba4a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ba4a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba4a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ba4b0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ba4b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ba4b6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004ba4b9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004ba4bc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004ba4bf: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004ba4c2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ba4c5: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004ba4c8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004ba4cb: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4ba4d0u); f_008193cc();
    /* 004ba4d0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004ba4d7: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004ba4da: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004ba4dd: mov dword ptr [ebx], 0xafafd8 */ W32((u32)(r_ebx), 0xafafd8u);
    /* 004ba4e3: mov eax, dword ptr [0x9abccc] */ r_eax = R32((u32)(0x9abcccu));
    /* 004ba4e8: mov dword ptr [ebx + 0x28], 0x3f800000 */ W32((u32)(r_ebx+0x28u), 0x3f800000u);
    /* 004ba4ef: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 004ba4f2: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 004ba4f5: mov dword ptr [ebx + 0x2c], 0x3f800000 */ W32((u32)(r_ebx+0x2cu), 0x3f800000u);
    /* 004ba4fc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004ba4fe: mov dword ptr [ebx + 0x20], ecx */ W32((u32)(r_ebx+0x20u), r_ecx);
    /* 004ba501: mov dword ptr [ebx + 0x24], ecx */ W32((u32)(r_ebx+0x24u), r_ecx);
    /* 004ba504: mov dword ptr [ebx + 0x30], 0x3e4ccccd */ W32((u32)(r_ebx+0x30u), 0x3e4ccccdu);
    /* 004ba50b: mov dword ptr [ebx + 0x34], 0x40000000 */ W32((u32)(r_ebx+0x34u), 0x40000000u);
    /* 004ba512: mov dword ptr [ebx + 0x38], 0 */ W32((u32)(r_ebx+0x38u), 0x0u);
    /* 004ba519: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
    /* 004ba520: call 0x7958fc */ r_esp -= 4; W32(r_esp, 0x4ba525u); f_007958fc();
    /* 004ba525: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004ba528: mov dword ptr [ecx + 0x40], eax */ W32((u32)(r_ecx+0x40u), r_eax);
    /* 004ba52b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba52d: je 0x4ba56a */ if (fZ) goto L_004ba56a;
L_004ba52f:; BB(0x004ba52f);
    /* 004ba52f: mov ecx, eax */ r_ecx = r_eax;
    /* 004ba531: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4ba536u); f_0061cdb0();
    /* 004ba536: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004ba539: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004ba53c: lea eax, [edx + 0x28] */ r_eax = (u32)(r_edx+0x28u);
    /* 004ba53f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba540: call 0x7958b4 */ r_esp -= 4; W32(r_esp, 0x4ba545u); f_007958b4();
    /* 004ba545: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 004ba548: mov ecx, dword ptr [edx + 0x40] */ r_ecx = R32((u32)(r_edx+0x40u));
    /* 004ba54b: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 004ba54e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba54f: call 0x7958e8 */ r_esp -= 4; W32(r_esp, 0x4ba554u); f_007958e8();
    /* 004ba554: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004ba557: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004ba55a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ba55d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ba564: mov esp, ebp */ r_esp = r_ebp;
    /* 004ba566: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ba567: ret 8 */ FN_RET(0x004ba498); r_esp += 12; return;
L_004ba56a:; BB(0x004ba56a);
    /* 004ba56a: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004ba56d: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 004ba571: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ba577: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 004ba57b: mov eax, ecx */ r_eax = r_ecx;
    /* 004ba57d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ba580: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ba587: mov esp, ebp */ r_esp = r_ebp;
    /* 004ba589: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ba58a: ret 8 */ FN_RET(0x004ba498); r_esp += 12; return;
}

void f_004ba590(void) /* sub_4BA590 */
{
    FN_ENTER(0x004ba590);
    /* 004ba590: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ba591: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ba592: mov esi, ecx */ r_esi = r_ecx;
    /* 004ba594: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
    /* 004ba597: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba599: je 0x4ba5c6 */ if (fZ) goto L_004ba5c6;
L_004ba59b:; BB(0x004ba59b);
    /* 004ba59b: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba59e: je 0x4ba5c6 */ if (fZ) goto L_004ba5c6;
L_004ba5a0:; BB(0x004ba5a0);
    /* 004ba5a0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004ba5a2: jle 0x4ba5e7 */ if ((fZ||fS!=fO)) goto L_004ba5e7;
L_004ba5a4:; BB(0x004ba5a4);
    /* 004ba5a4: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ba5a7: jg 0x4ba5e7 */ if ((!fZ&&fS==fO)) goto L_004ba5e7;
L_004ba5a9:; BB(0x004ba5a9);
    /* 004ba5a9: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 004ba5ac: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba5af: jne 0x4ba5e7 */ if (!fZ) goto L_004ba5e7;
L_004ba5b1:; BB(0x004ba5b1);
    /* 004ba5b1: mov dword ptr [esi + 0x24], 0 */ W32((u32)(r_esi+0x24u), 0x0u);
    /* 004ba5b8: mov edx, 3 */ r_edx = 0x3u;
    /* 004ba5bd: mov dword ptr [esi + 0x20], 3 */ W32((u32)(r_esi+0x20u), 0x3u);
    /* 004ba5c4: jmp 0x4ba5e7 */ goto L_004ba5e7;
L_004ba5c6:; BB(0x004ba5c6);
    /* 004ba5c6: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 004ba5c9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba5cc: jne 0x4ba5e7 */ if (!fZ) goto L_004ba5e7;
L_004ba5ce:; BB(0x004ba5ce);
    /* 004ba5ce: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 004ba5d1: mov dword ptr [esi + 0x24], 0 */ W32((u32)(r_esi+0x24u), 0x0u);
    /* 004ba5d8: mov dword ptr [esi + 0x20], 1 */ W32((u32)(r_esi+0x20u), 0x1u);
    /* 004ba5df: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4ba5e4u); f_0061cdb0();
    /* 004ba5e4: mov edx, dword ptr [esi + 0x20] */ r_edx = R32((u32)(r_esi+0x20u));
L_004ba5e7:; BB(0x004ba5e7);
    /* 004ba5e7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ba5e9: je 0x4ba6b2 */ if (fZ) goto L_004ba6b2;
L_004ba5ef:; BB(0x004ba5ef);
    /* 004ba5ef: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba5f2: je 0x4ba668 */ if (fZ) goto L_004ba668;
L_004ba5f4:; BB(0x004ba5f4);
    /* 004ba5f4: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba5f7: jne 0x4ba607 */ if (!fZ) goto L_004ba607;
L_004ba5f9:; BB(0x004ba5f9);
    /* 004ba5f9: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ba5fc: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 004ba5ff: call 0x7958d0 */ r_esp -= 4; W32(r_esp, 0x4ba604u); f_007958d0();
    /* 004ba604: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ba605: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ba606: ret  */ FN_RET(0x004ba590); r_esp += 4; return;
L_004ba607:; BB(0x004ba607);
    /* 004ba607: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ba60a: jne 0x4ba6b2 */ if (!fZ) goto L_004ba6b2;
L_004ba610:; BB(0x004ba610);
    /* 004ba610: fld dword ptr [esi + 0x38] */ FPUSH(R_F32((u32)(r_esi+0x38u)));
    /* 004ba613: fsub dword ptr [0x9071c8] */ ST(0) = ST(0) - R_F32((u32)(0x9071c8u));
    /* 004ba619: fcom dword ptr [0x9071d0] */ fx_compare(ST(0), R_F32((u32)(0x9071d0u))); 
    /* 004ba61f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ba621: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004ba624: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ba625: ja 0x4ba63f */ if ((!fC&&!fZ)) goto L_004ba63f;
L_004ba627:; BB(0x004ba627);
    /* 004ba627: fld dword ptr [0x9071d0] */ FPUSH(R_F32((u32)(0x9071d0u)));
    /* 004ba62d: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 004ba630: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004ba633: mov dword ptr [esi + 0x20], 0 */ W32((u32)(r_esi+0x20u), 0x0u);
    /* 004ba63a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x4ba63fu); f_0061cdb0();
L_004ba63f:; BB(0x004ba63f);
    /* 004ba63f: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004ba642: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 004ba645: fst dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0));
    /* 004ba648: fadd dword ptr [0x9071c4] */ ST(0) = ST(0) + R_F32((u32)(0x9071c4u));
    /* 004ba64e: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 004ba651: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 004ba654: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba655: call 0x7958e8 */ r_esp -= 4; W32(r_esp, 0x4ba65au); f_007958e8();
    /* 004ba65a: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ba65d: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 004ba660: call 0x7958d0 */ r_esp -= 4; W32(r_esp, 0x4ba665u); f_007958d0();
    /* 004ba665: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ba666: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ba667: ret  */ FN_RET(0x004ba590); r_esp += 4; return;
L_004ba668:; BB(0x004ba668);
    /* 004ba668: fld dword ptr [0x9071c8] */ FPUSH(R_F32((u32)(0x9071c8u)));
    /* 004ba66e: fadd dword ptr [esi + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x38u));
    /* 004ba671: fcom dword ptr [0x9071c0] */ fx_compare(ST(0), R_F32((u32)(0x9071c0u))); 
    /* 004ba677: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004ba679: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004ba67a: jb 0x4ba68b */ if (fC) goto L_004ba68b;
L_004ba67c:; BB(0x004ba67c);
    /* 004ba67c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004ba67e: fld dword ptr [0x9071cc] */ FPUSH(R_F32((u32)(0x9071ccu)));
    /* 004ba684: mov dword ptr [esi + 0x20], 2 */ W32((u32)(r_esi+0x20u), 0x2u);
L_004ba68b:; BB(0x004ba68b);
    /* 004ba68b: fld dword ptr [0x9071c4] */ FPUSH(R_F32((u32)(0x9071c4u)));
    /* 004ba691: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 004ba694: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004ba696: fst dword ptr [esi + 0x38] */ W_F32((u32)(r_esi+0x38u), ST(0));
    /* 004ba699: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004ba69b: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 004ba69e: lea eax, [esi + 0x38] */ r_eax = (u32)(r_esi+0x38u);
    /* 004ba6a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba6a2: call 0x7958e8 */ r_esp -= 4; W32(r_esp, 0x4ba6a7u); f_007958e8();
    /* 004ba6a7: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004ba6aa: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 004ba6ad: call 0x7958d0 */ r_esp -= 4; W32(r_esp, 0x4ba6b2u); f_007958d0();
L_004ba6b2:; BB(0x004ba6b2);
    /* 004ba6b2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004ba6b3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ba6b4: ret  */ FN_RET(0x004ba590); r_esp += 4; return;
}

void f_004ba6b8(void) /* sub_4BA6B8 */
{
    FN_ENTER(0x004ba6b8);
    /* 004ba6b8: mov dword ptr [ecx + 0x24], 1 */ W32((u32)(r_ecx+0x24u), 0x1u);
    /* 004ba6bf: ret  */ FN_RET(0x004ba6b8); r_esp += 4; return;
}

void f_004ba6c0(void) /* sub_4BA6C0 */
{
    FN_ENTER(0x004ba6c0);
    /* 004ba6c0: mov dword ptr [ecx + 0x24], 2 */ W32((u32)(r_ecx+0x24u), 0x2u);
    /* 004ba6c7: ret  */ FN_RET(0x004ba6c0); r_esp += 4; return;
}

void f_004ba6c8(void) /* sub_4BA6C8 */
{
    FN_ENTER(0x004ba6c8);
    /* 004ba6c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ba6c9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004ba6cb: mov ecx, dword ptr [ebp + 0x11c] */ r_ecx = R32((u32)(r_ebp+0x11cu));
    /* 004ba6d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba6d3: je 0x4ba76c */ if (fZ) goto L_004ba76c;
L_004ba6d9:; BB(0x004ba6d9);
    /* 004ba6d9: mov eax, dword ptr [ebp + 0x120] */ r_eax = R32((u32)(r_ebp+0x120u));
    /* 004ba6df: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba6e1: je 0x4ba743 */ if (fZ) goto L_004ba743;
L_004ba6e3:; BB(0x004ba6e3);
    /* 004ba6e3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba6e6: jne 0x4ba737 */ if (!fZ) goto L_004ba737;
L_004ba6e8:; BB(0x004ba6e8);
    /* 004ba6e8: mov eax, dword ptr [ebp + 0x110] */ r_eax = R32((u32)(r_ebp+0x110u));
    /* 004ba6ee: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ba6f0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ba6f2: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004ba6f5: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ba6f7: lea eax, [ebp + edx + 0x1c] */ r_eax = (u32)(r_ebp+r_edx+0x1cu);
    /* 004ba6fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba6fc: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4ba701u); f_00508db8();
    /* 004ba701: mov eax, dword ptr [ebp + 0x110] */ r_eax = R32((u32)(r_ebp+0x110u));
    /* 004ba707: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ba70a: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ba70d: jl 0x4ba71d */ if ((fS!=fO)) goto L_004ba71d;
L_004ba70f:; BB(0x004ba70f);
    /* 004ba70f: mov dword ptr [ebp + 0x110], 0 */ W32((u32)(r_ebp+0x110u), 0x0u);
    /* 004ba719: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004ba71b: jmp 0x4ba723 */ goto L_004ba723;
L_004ba71d:; BB(0x004ba71d);
    /* 004ba71d: mov dword ptr [ebp + 0x110], eax */ W32((u32)(r_ebp+0x110u), r_eax);
L_004ba723:; BB(0x004ba723);
    /* 004ba723: cmp eax, dword ptr [ebp + 0x10c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ba729: jne 0x4ba76a */ if (!fZ) goto L_004ba76a;
L_004ba72b:; BB(0x004ba72b);
    /* 004ba72b: mov dword ptr [ebp + 0x120], 2 */ W32((u32)(r_ebp+0x120u), 0x2u);
    /* 004ba735: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ba736: ret  */ FN_RET(0x004ba6c8); r_esp += 4; return;
L_004ba737:; BB(0x004ba737);
    /* 004ba737: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ba73a: jne 0x4ba76a */ if (!fZ) goto L_004ba76a;
L_004ba73c:; BB(0x004ba73c);
    /* 004ba73c: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4ba741u); f_00508f48();
    /* 004ba741: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ba742: ret  */ FN_RET(0x004ba6c8); r_esp += 4; return;
L_004ba743:; BB(0x004ba743);
    /* 004ba743: mov eax, dword ptr [ebp + 0x10c] */ r_eax = R32((u32)(r_ebp+0x10cu));
    /* 004ba749: cmp eax, dword ptr [ebp + 0x114] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x114u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004ba74f: jl 0x4ba765 */ if ((fS!=fO)) goto L_004ba765;
L_004ba751:; BB(0x004ba751);
    /* 004ba751: mov dword ptr [ebp + 0x120], 1 */ W32((u32)(r_ebp+0x120u), 0x1u);
    /* 004ba75b: mov dword ptr [ebp + 0x110], 0 */ W32((u32)(r_ebp+0x110u), 0x0u);
L_004ba765:; BB(0x004ba765);
    /* 004ba765: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4ba76au); f_00508f48();
L_004ba76a:; BB(0x004ba76a);
    /* 004ba76a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ba76b: ret  */ FN_RET(0x004ba6c8); r_esp += 4; return;
L_004ba76c:; BB(0x004ba76c);
    /* 004ba76c: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004ba76e: push dword ptr [ebp + 0x118] */ { u32 v = R32((u32)(r_ebp+0x118u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ba774: lea eax, [ebp + 0x1c] */ r_eax = (u32)(r_ebp+0x1cu);
    /* 004ba777: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba778: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4ba77du); f_0050981c();
    /* 004ba77d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004ba780: mov dword ptr [ebp + 0x11c], eax */ W32((u32)(r_ebp+0x11cu), r_eax);
    /* 004ba786: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ba788: je 0x4ba76a */ if (fZ) goto L_004ba76a;
L_004ba78a:; BB(0x004ba78a);
    /* 004ba78a: mov ecx, eax */ r_ecx = r_eax;
    /* 004ba78c: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4ba791u); f_00508f48();
    /* 004ba791: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ba792: ret  */ FN_RET(0x004ba6c8); r_esp += 4; return;
}

void f_004ba794(void) /* sub_4BA794 */
{
    FN_ENTER(0x004ba794);
    /* 004ba794: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004ba795: mov esi, dword ptr [ecx + 0x10c] */ r_esi = R32((u32)(r_ecx+0x10cu));
    /* 004ba79b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ba79d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004ba7a1: fld dword ptr [0x9071bc] */ FPUSH(R_F32((u32)(0x9071bcu)));
    /* 004ba7a7: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ba7a9: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 004ba7ac: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ba7ae: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 004ba7b0: mov dword ptr [edx + ecx + 0x1c], esi */ W32((u32)(r_edx+r_ecx+0x1cu), r_esi);
    /* 004ba7b4: mov edx, dword ptr [ecx + 0x10c] */ r_edx = R32((u32)(r_ecx+0x10cu));
    /* 004ba7ba: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ba7bc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ba7be: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 004ba7c1: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ba7c3: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004ba7c6: mov dword ptr [esi + ecx + 0x20], edx */ W32((u32)(r_esi+r_ecx+0x20u), r_edx);
    /* 004ba7ca: mov esi, dword ptr [ecx + 0x10c] */ r_esi = R32((u32)(r_ecx+0x10cu));
    /* 004ba7d0: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004ba7d3: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ba7d5: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004ba7d7: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 004ba7da: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ba7dc: mov dword ptr [edx + ecx + 0x24], eax */ W32((u32)(r_edx+r_ecx+0x24u), r_eax);
    /* 004ba7e0: mov eax, dword ptr [ecx + 0x10c] */ r_eax = R32((u32)(r_ecx+0x10cu));
    /* 004ba7e6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ba7e8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ba7ea: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004ba7ed: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004ba7ef: fadd dword ptr [edx + ecx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_edx+r_ecx+0x20u));
    /* 004ba7f3: fstp dword ptr [edx + ecx + 0x20] */ W_F32((u32)(r_edx+r_ecx+0x20u), ST(0)); FPOP();
    /* 004ba7f7: mov eax, dword ptr [ecx + 0x10c] */ r_eax = R32((u32)(r_ecx+0x10cu));
    /* 004ba7fd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004ba800: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004ba803: jl 0x4ba813 */ if ((fS!=fO)) goto L_004ba813;
L_004ba805:; BB(0x004ba805);
    /* 004ba805: mov dword ptr [ecx + 0x10c], 0 */ W32((u32)(r_ecx+0x10cu), 0x0u);
    /* 004ba80f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ba810: ret 4 */ FN_RET(0x004ba794); r_esp += 8; return;
L_004ba813:; BB(0x004ba813);
    /* 004ba813: mov dword ptr [ecx + 0x10c], eax */ W32((u32)(r_ecx+0x10cu), r_eax);
    /* 004ba819: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004ba81a: ret 4 */ FN_RET(0x004ba794); r_esp += 8; return;
}

void f_004ba820(void) /* sub_4BA820 */
{
    FN_ENTER(0x004ba820);
    /* 004ba820: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ba821: mov ebp, esp */ r_ebp = r_esp;
    /* 004ba823: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004ba825: push 0x8d0f2c */ { u32 v = 0x8d0f2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004ba82a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004ba830: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004ba831: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004ba838: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004ba83b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004ba83e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004ba841: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004ba844: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004ba847: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004ba84a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ba84d: mov edx, dword ptr [ecx + 0x11c] */ r_edx = R32((u32)(r_ecx+0x11cu));
    /* 004ba853: mov dword ptr [ecx], 0xafafe8 */ W32((u32)(r_ecx), 0xafafe8u);
    /* 004ba859: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004ba85b: je 0x4ba877 */ if (fZ) goto L_004ba877;
L_004ba85d:; BB(0x004ba85d);
    /* 004ba85d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004ba860: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004ba864: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004ba869: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004ba86d: mov dword ptr [ecx + 0x11c], 0 */ W32((u32)(r_ecx+0x11cu), 0x0u);
L_004ba877:; BB(0x004ba877);
    /* 004ba877: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004ba87e: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4ba883u); f_008171e8();
    /* 004ba883: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004ba886: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004ba88d: mov esp, ebp */ r_esp = r_ebp;
    /* 004ba88f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004ba890: ret  */ FN_RET(0x004ba820); r_esp += 4; return;
}

void f_004ba894(void) /* sub_4BA894 */
{
    FN_ENTER(0x004ba894);
    /* 004ba894: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004ba895: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004ba897: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004ba89b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004ba89d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4ba8a2u); f_008193cc();
    /* 004ba8a2: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004ba8a6: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004ba8aa: mov dword ptr [ebp], 0xafafe8 */ W32((u32)(r_ebp), 0xafafe8u);
    /* 004ba8b1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004ba8b3: mov dword ptr [ebp + 0x1c], 0 */ W32((u32)(r_ebp+0x1cu), 0x0u);
    /* 004ba8ba: mov dword ptr [ebp + 0x10c], ecx */ W32((u32)(r_ebp+0x10cu), r_ecx);
    /* 004ba8c0: mov dword ptr [ebp + 0x110], ecx */ W32((u32)(r_ebp+0x110u), r_ecx);
    /* 004ba8c6: mov dword ptr [ebp + 0x114], edx */ W32((u32)(r_ebp+0x114u), r_edx);
    /* 004ba8cc: mov dword ptr [ebp + 0x20], 0 */ W32((u32)(r_ebp+0x20u), 0x0u);
    /* 004ba8d3: mov dword ptr [ebp + 0x118], eax */ W32((u32)(r_ebp+0x118u), r_eax);
    /* 004ba8d9: mov dword ptr [ebp + 0x11c], ecx */ W32((u32)(r_ebp+0x11cu), r_ecx);
    /* 004ba8df: mov dword ptr [ebp + 0x120], ecx */ W32((u32)(r_ebp+0x120u), r_ecx);
    /* 004ba8e5: mov dword ptr [ebp + 0x24], 0 */ W32((u32)(r_ebp+0x24u), 0x0u);
    /* 004ba8ec: mov eax, ebp */ r_eax = r_ebp;
    /* 004ba8ee: mov dword ptr [ebp + 0x28], 0 */ W32((u32)(r_ebp+0x28u), 0x0u);
    /* 004ba8f5: mov dword ptr [ebp + 0x2c], 0 */ W32((u32)(r_ebp+0x2cu), 0x0u);
    /* 004ba8fc: mov dword ptr [ebp + 0x30], 0 */ W32((u32)(r_ebp+0x30u), 0x0u);
    /* 004ba903: mov dword ptr [ebp + 0x34], 0 */ W32((u32)(r_ebp+0x34u), 0x0u);
    /* 004ba90a: mov dword ptr [ebp + 0x38], 0 */ W32((u32)(r_ebp+0x38u), 0x0u);
    /* 004ba911: mov dword ptr [ebp + 0x3c], 0 */ W32((u32)(r_ebp+0x3cu), 0x0u);
    /* 004ba918: mov dword ptr [ebp + 0x40], 0 */ W32((u32)(r_ebp+0x40u), 0x0u);
    /* 004ba91f: mov dword ptr [ebp + 0x44], 0 */ W32((u32)(r_ebp+0x44u), 0x0u);
    /* 004ba926: mov dword ptr [ebp + 0x48], 0 */ W32((u32)(r_ebp+0x48u), 0x0u);
    /* 004ba92d: mov dword ptr [ebp + 0x4c], 0 */ W32((u32)(r_ebp+0x4cu), 0x0u);
    /* 004ba934: mov dword ptr [ebp + 0x50], 0 */ W32((u32)(r_ebp+0x50u), 0x0u);
    /* 004ba93b: mov dword ptr [ebp + 0x54], 0 */ W32((u32)(r_ebp+0x54u), 0x0u);
    /* 004ba942: mov dword ptr [ebp + 0x58], 0 */ W32((u32)(r_ebp+0x58u), 0x0u);
    /* 004ba949: mov dword ptr [ebp + 0x5c], 0 */ W32((u32)(r_ebp+0x5cu), 0x0u);
    /* 004ba950: mov dword ptr [ebp + 0x60], 0 */ W32((u32)(r_ebp+0x60u), 0x0u);
    /* 004ba957: mov dword ptr [ebp + 0x64], 0 */ W32((u32)(r_ebp+0x64u), 0x0u);
    /* 004ba95e: mov dword ptr [ebp + 0x68], 0 */ W32((u32)(r_ebp+0x68u), 0x0u);
    /* 004ba965: mov dword ptr [ebp + 0x6c], 0 */ W32((u32)(r_ebp+0x6cu), 0x0u);
    /* 004ba96c: mov dword ptr [ebp + 0x70], 0 */ W32((u32)(r_ebp+0x70u), 0x0u);
    /* 004ba973: mov dword ptr [ebp + 0x74], 0 */ W32((u32)(r_ebp+0x74u), 0x0u);
    /* 004ba97a: mov dword ptr [ebp + 0x78], 0 */ W32((u32)(r_ebp+0x78u), 0x0u);
    /* 004ba981: mov dword ptr [ebp + 0x7c], 0 */ W32((u32)(r_ebp+0x7cu), 0x0u);
    /* 004ba988: mov dword ptr [ebp + 0x80], 0 */ W32((u32)(r_ebp+0x80u), 0x0u);
    /* 004ba992: mov dword ptr [ebp + 0x84], 0 */ W32((u32)(r_ebp+0x84u), 0x0u);
    /* 004ba99c: mov dword ptr [ebp + 0x88], 0 */ W32((u32)(r_ebp+0x88u), 0x0u);
    /* 004ba9a6: mov dword ptr [ebp + 0x8c], 0 */ W32((u32)(r_ebp+0x8cu), 0x0u);
    /* 004ba9b0: mov dword ptr [ebp + 0x90], 0 */ W32((u32)(r_ebp+0x90u), 0x0u);
    /* 004ba9ba: mov dword ptr [ebp + 0x94], 0 */ W32((u32)(r_ebp+0x94u), 0x0u);
    /* 004ba9c4: mov dword ptr [ebp + 0x98], 0 */ W32((u32)(r_ebp+0x98u), 0x0u);
    /* 004ba9ce: mov dword ptr [ebp + 0x9c], 0 */ W32((u32)(r_ebp+0x9cu), 0x0u);
    /* 004ba9d8: mov dword ptr [ebp + 0xa0], 0 */ W32((u32)(r_ebp+0xa0u), 0x0u);
    /* 004ba9e2: mov dword ptr [ebp + 0xa4], 0 */ W32((u32)(r_ebp+0xa4u), 0x0u);
    /* 004ba9ec: mov dword ptr [ebp + 0xa8], 0 */ W32((u32)(r_ebp+0xa8u), 0x0u);
    /* 004ba9f6: mov dword ptr [ebp + 0xac], 0 */ W32((u32)(r_ebp+0xacu), 0x0u);
    /* 004baa00: mov dword ptr [ebp + 0xb0], 0 */ W32((u32)(r_ebp+0xb0u), 0x0u);
    /* 004baa0a: mov dword ptr [ebp + 0xb4], 0 */ W32((u32)(r_ebp+0xb4u), 0x0u);
    /* 004baa14: mov dword ptr [ebp + 0xb8], 0 */ W32((u32)(r_ebp+0xb8u), 0x0u);
    /* 004baa1e: mov dword ptr [ebp + 0xbc], 0 */ W32((u32)(r_ebp+0xbcu), 0x0u);
    /* 004baa28: mov dword ptr [ebp + 0xc0], 0 */ W32((u32)(r_ebp+0xc0u), 0x0u);
    /* 004baa32: mov dword ptr [ebp + 0xc4], 0 */ W32((u32)(r_ebp+0xc4u), 0x0u);
    /* 004baa3c: mov dword ptr [ebp + 0xc8], 0 */ W32((u32)(r_ebp+0xc8u), 0x0u);
    /* 004baa46: mov dword ptr [ebp + 0xcc], 0 */ W32((u32)(r_ebp+0xccu), 0x0u);
    /* 004baa50: mov dword ptr [ebp + 0xd0], 0 */ W32((u32)(r_ebp+0xd0u), 0x0u);
    /* 004baa5a: mov dword ptr [ebp + 0xd4], 0 */ W32((u32)(r_ebp+0xd4u), 0x0u);
    /* 004baa64: mov dword ptr [ebp + 0xd8], 0 */ W32((u32)(r_ebp+0xd8u), 0x0u);
    /* 004baa6e: mov dword ptr [ebp + 0xdc], 0 */ W32((u32)(r_ebp+0xdcu), 0x0u);
    /* 004baa78: mov dword ptr [ebp + 0xe0], 0 */ W32((u32)(r_ebp+0xe0u), 0x0u);
    /* 004baa82: mov dword ptr [ebp + 0xe4], 0 */ W32((u32)(r_ebp+0xe4u), 0x0u);
    /* 004baa8c: mov dword ptr [ebp + 0xe8], 0 */ W32((u32)(r_ebp+0xe8u), 0x0u);
    /* 004baa96: mov dword ptr [ebp + 0xec], 0 */ W32((u32)(r_ebp+0xecu), 0x0u);
    /* 004baaa0: mov dword ptr [ebp + 0xf0], 0 */ W32((u32)(r_ebp+0xf0u), 0x0u);
    /* 004baaaa: mov dword ptr [ebp + 0xf4], 0 */ W32((u32)(r_ebp+0xf4u), 0x0u);
    /* 004baab4: mov dword ptr [ebp + 0xf8], 0 */ W32((u32)(r_ebp+0xf8u), 0x0u);
    /* 004baabe: mov dword ptr [ebp + 0xfc], 0 */ W32((u32)(r_ebp+0xfcu), 0x0u);
    /* 004baac8: mov dword ptr [ebp + 0x100], 0 */ W32((u32)(r_ebp+0x100u), 0x0u);
    /* 004baad2: mov dword ptr [ebp + 0x104], 0 */ W32((u32)(r_ebp+0x104u), 0x0u);
    /* 004baadc: mov dword ptr [ebp + 0x108], 0 */ W32((u32)(r_ebp+0x108u), 0x0u);
    /* 004baae6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004baae7: ret 0xc */ FN_RET(0x004ba894); r_esp += 16; return;
}

void f_004baaec(void) /* sub_4BAAEC */
{
    FN_ENTER(0x004baaec);
    /* 004baaec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004baaed: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004baaef: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004baaf1: call 0x4ba820 */ r_esp -= 4; W32(r_esp, 0x4baaf6u); f_004ba820();
    /* 004baaf6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004baafa: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004baafc: jne 0x4bab02 */ if (!fZ) goto L_004bab02;
L_004baafe:; BB(0x004baafe);
    /* 004baafe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004baaff: ret 4 */ FN_RET(0x004baaec); r_esp += 8; return;
L_004bab02:; BB(0x004bab02);
    /* 004bab02: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bab03: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4bab08u); f_005c2f74();
    /* 004bab08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bab09: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bab0a: ret 4 */ FN_RET(0x004baaec); r_esp += 8; return;
}

void f_004bab10(void) /* sub_4BAB10 */
{
    FN_ENTER(0x004bab10);
    /* 004bab10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bab11: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004bab13: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004bab15: call 0x4bab34 */ r_esp -= 4; W32(r_esp, 0x4bab1au); f_004bab34();
    /* 004bab1a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004bab1e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bab20: jne 0x4bab26 */ if (!fZ) goto L_004bab26;
L_004bab22:; BB(0x004bab22);
    /* 004bab22: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bab23: ret 4 */ FN_RET(0x004bab10); r_esp += 8; return;
L_004bab26:; BB(0x004bab26);
    /* 004bab26: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bab27: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4bab2cu); f_005c2f74();
    /* 004bab2c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004bab2d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bab2e: ret 4 */ FN_RET(0x004bab10); r_esp += 8; return;
}

void f_004bab34(void) /* sub_4BAB34 */
{
    FN_ENTER(0x004bab34);
    /* 004bab34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004bab35: mov ebp, esp */ r_ebp = r_esp;
    /* 004bab37: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004bab39: push 0x8d0f48 */ { u32 v = 0x8d0f48u; r_esp -= 4; W32(r_esp, v); }
    /* 004bab3e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004bab44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bab45: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004bab4c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bab4f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004bab52: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004bab55: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004bab58: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004bab5b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004bab5e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004bab61: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 004bab64: mov dword ptr [ecx], 0xafb048 */ W32((u32)(r_ecx), 0xafb048u);
    /* 004bab6a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bab6c: je 0x4bab82 */ if (fZ) goto L_004bab82;
L_004bab6e:; BB(0x004bab6e);
    /* 004bab6e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004bab72: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bab77: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004bab7b: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
L_004bab82:; BB(0x004bab82);
    /* 004bab82: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 004bab85: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bab87: je 0x4bab9d */ if (fZ) goto L_004bab9d;
L_004bab89:; BB(0x004bab89);
    /* 004bab89: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004bab8d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bab92: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004bab96: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
L_004bab9d:; BB(0x004bab9d);
    /* 004bab9d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004baba4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004baba7: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4babacu); f_008171e8();
    /* 004babac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004babaf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004babb6: mov esp, ebp */ r_esp = r_ebp;
    /* 004babb8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004babb9: ret  */ FN_RET(0x004bab34); r_esp += 4; return;
}

void f_004babbc(void) /* sub_4BABBC */
{
    FN_ENTER(0x004babbc);
    /* 004babbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004babbd: mov ebp, esp */ r_ebp = r_esp;
    /* 004babbf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004babc1: push 0x8d0f64 */ { u32 v = 0x8d0f64u; r_esp -= 4; W32(r_esp, v); }
    /* 004babc6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004babcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004babcd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004babd4: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004babd7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004babda: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 004babdd: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004babe0: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004babe3: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004babe6: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004babe9: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 004babec: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 004babef: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004babf2: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 004babf5: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4babfau); f_008193cc();
    /* 004babfa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004bac01: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004bac04: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 004bac07: mov dword ptr [ecx], 0xafb048 */ W32((u32)(r_ecx), 0xafb048u);
    /* 004bac0d: mov eax, dword ptr [0x9abcd0] */ r_eax = R32((u32)(0x9abcd0u));
    /* 004bac12: mov dword ptr [ecx + 0x4c], 0x42a00000 */ W32((u32)(r_ecx+0x4cu), 0x42a00000u);
    /* 004bac19: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004bac1c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004bac1e: mov dword ptr [ecx + 0x54], edx */ W32((u32)(r_ecx+0x54u), r_edx);
    /* 004bac21: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
    /* 004bac24: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004bac27: mov ebx, dword ptr [edi] */ r_ebx = R32((u32)(r_edi));
    /* 004bac29: mov dword ptr [ecx + 0x20], ebx */ W32((u32)(r_ecx+0x20u), r_ebx);
    /* 004bac2c: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 004bac2f: mov dword ptr [ecx + 0x24], esi */ W32((u32)(r_ecx+0x24u), r_esi);
    /* 004bac32: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 004bac35: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 004bac38: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 004bac3a: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 004bac3d: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 004bac40: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 004bac43: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004bac46: mov dword ptr [ecx + 0x34], eax */ W32((u32)(r_ecx+0x34u), r_eax);
    /* 004bac49: call 0x4bac98 */ r_esp -= 4; W32(r_esp, 0x4bac4eu); f_004bac98();
    /* 004bac4e: mov eax, edi */ r_eax = r_edi;
    /* 004bac50: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bac52: push 0x204 */ { u32 v = 0x204u; r_esp -= 4; W32(r_esp, v); }
    /* 004bac57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bac58: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4bac5du); f_0050981c();
    /* 004bac5d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004bac60: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bac62: push 0x205 */ { u32 v = 0x205u; r_esp -= 4; W32(r_esp, v); }
    /* 004bac67: mov dword ptr [edx + 0x44], eax */ W32((u32)(r_edx+0x44u), r_eax);
    /* 004bac6a: mov eax, edi */ r_eax = r_edi;
    /* 004bac6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bac6d: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4bac72u); f_0050981c();
    /* 004bac72: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004bac75: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004bac78: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004bac7b: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004bac7e: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004bac81: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 004bac84: mov eax, edx */ r_eax = r_edx;
    /* 004bac86: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004bac89: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004bac90: mov esp, ebp */ r_esp = r_ebp;
    /* 004bac92: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004bac93: ret 0xc */ FN_RET(0x004babbc); r_esp += 16; return;
}

void f_004bac98(void) /* sub_4BAC98 */
{
    FN_ENTER(0x004bac98);
    /* 004bac98: fld dword ptr [0x906bb0] */ FPUSH(R_F32((u32)(0x906bb0u)));
    /* 004bac9e: fsub dword ptr [ecx + 0x24] */ ST(0) = ST(0) - R_F32((u32)(r_ecx+0x24u));
    /* 004baca1: fld dword ptr [ecx + 0x4c] */ FPUSH(R_F32((u32)(r_ecx+0x4cu)));
    /* 004baca4: fld dword ptr [ecx + 0x2c] */ FPUSH(R_F32((u32)(r_ecx+0x2cu)));
    /* 004baca7: fld dword ptr [ecx + 0x34] */ FPUSH(R_F32((u32)(r_ecx+0x34u)));
    /* 004bacaa: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bacac: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 004bacae: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bacb0: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004bacb2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bacb4: fstp dword ptr [ecx + 0x3c] */ W_F32((u32)(r_ecx+0x3cu), ST(0)); FPOP();
    /* 004bacb7: fstp dword ptr [ecx + 0x38] */ W_F32((u32)(r_ecx+0x38u), ST(0)); FPOP();
    /* 004bacba: fstp dword ptr [ecx + 0x40] */ W_F32((u32)(r_ecx+0x40u), ST(0)); FPOP();
    /* 004bacbd: ret  */ FN_RET(0x004bac98); r_esp += 4; return;
}

void f_004bacc0(void) /* sub_4BACC0 */
{
    FN_ENTER(0x004bacc0);
    /* 004bacc0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004bacc1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004bacc2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004bacc3: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004bacc6: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004bacc8: lea edx, [ebx + 0x44] */ r_edx = (u32)(r_ebx+0x44u);
    /* 004baccb: mov eax, 2 */ r_eax = 0x2u;
    /* 004bacd0: mov esi, eax */ r_esi = r_eax;
    /* 004bacd2: mov edi, edx */ r_edi = r_edx;
L_004bacd4:; BB(0x004bacd4);
    /* 004bacd4: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 004bacd6: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004bacd9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bacdb: je 0x4baced */ if (fZ) goto L_004baced;
L_004bacdd:; BB(0x004bacdd);
    /* 004bacdd: mov eax, edi */ r_eax = r_edi;
    /* 004bacdf: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004bace2: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 004bace5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bace6: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 004bace8: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4bacedu); f_00508db8();
L_004baced:; BB(0x004baced);
    /* 004baced: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004bacef: jg 0x4bacd4 */ if ((!fZ&&fS==fO)) goto L_004bacd4;
L_004bacf1:; BB(0x004bacf1);
    /* 004bacf1: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004bacf4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bacf7: je 0x4bad00 */ if (fZ) goto L_004bad00;
L_004bacf9:; BB(0x004bacf9);
    /* 004bacf9: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004bacfc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bacfd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004bacfe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004bacff: ret  */ FN_RET(0x004bacc0); r_esp += 4; return;
L_004bad00:; BB(0x004bad00);
    /* 004bad00: fld dword ptr [0x907220] */ FPUSH(R_F32((u32)(0x907220u)));
    /* 004bad06: fadd dword ptr [ebx + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4cu));
    /* 004bad09: fstp dword ptr [ebx + 0x4c] */ W_F32((u32)(r_ebx+0x4cu), ST(0)); FPOP();
    /* 004bad0c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004bad0e: call 0x4bac98 */ r_esp -= 4; W32(r_esp, 0x4bad13u); f_004bac98();
    /* 004bad13: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004bad16: mov edx, dword ptr [ebx + 0x38] */ r_edx = R32((u32)(r_ebx+0x38u));
    /* 004bad19: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 004bad1c: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004bad1f: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004bad23: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 004bad26: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004bad2a: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 004bad2d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004bad31: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 004bad34: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004bad38: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 004bad3b: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 004bad3f: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4bad44u); f_0082df08();
    /* 004bad44: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004bad46: fld dword ptr [0x90721c] */ FPUSH(R_F32((u32)(0x90721cu)));
    /* 004bad4c: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004bad4f: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bad51: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004bad55: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004bad59: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bad5b: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 004bad5d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004bad5f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004bad61: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004bad63: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 004bad66: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004bad68: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004bad6c: fst dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0));
    /* 004bad70: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004bad72: fmul qword ptr [0x907200] */ ST(0) = ST(0) * R_F64((u32)(0x907200u));
    /* 004bad78: fdiv qword ptr [0x9071f8] */ ST(0) = ST(0) / R_F64((u32)(0x9071f8u));
    /* 004bad7e: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 004bad82: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 004bad87: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bad8c: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004bad90: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 004bad94: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004bad98: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 004bad9c: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004bad9f: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 004bada3: lea eax, [esp + 0x20] */ r_eax = (u32)(r_esp+0x20u);
    /* 004bada7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bada8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004bada9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004badaa: call 0x7a8d98 */ r_esp -= 4; W32(r_esp, 0x4badafu); f_007a8d98();
    /* 004badaf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004badb2: fld dword ptr [ebx + 0x4c] */ FPUSH(R_F32((u32)(r_ebx+0x4cu)));
    /* 004badb5: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 004badb9: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 004badbe: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004badc3: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 004badc7: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 004badcb: fist dword ptr [esp + 0x34] */ W32((u32)(r_esp+0x34u), (u32)fx_int32(ST(0)));
    /* 004badcf: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 004badd3: mov eax, 0x80000001 */ r_eax = 0x80000001u;
    /* 004badd8: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 004baddc: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 004badde: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004bade0: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 004bade3: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 004bade6: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004bade8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004badea: je 0x4bae33 */ if (fZ) goto L_004bae33;
L_004badec:; BB(0x004badec);
    /* 004badec: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004badee: mov esi, edx */ r_esi = r_edx;
L_004badf0:; BB(0x004badf0);
    /* 004badf0: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004badf4: lea eax, [esp + 0x18] */ r_eax = (u32)(r_esp+0x18u);
    /* 004badf8: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004badfa: push 0x206 */ { u32 v = 0x206u; r_esp -= 4; W32(r_esp, v); }
    /* 004badff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bae00: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bae01: call 0x50bd5c */ r_esp -= 4; W32(r_esp, 0x4bae06u); f_0050bd5c();
    /* 004bae06: lea ecx, [esp + 0x1c] */ r_ecx = (u32)(r_esp+0x1cu);
    /* 004bae0a: lea eax, [esp + 0x28] */ r_eax = (u32)(r_esp+0x28u);
    /* 004bae0e: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004bae10: push 0x207 */ { u32 v = 0x207u; r_esp -= 4; W32(r_esp, v); }
    /* 004bae15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004bae16: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004bae17: call 0x50bd5c */ r_esp -= 4; W32(r_esp, 0x4bae1cu); f_0050bd5c();
    /* 004bae1c: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004bae1f: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 004bae23: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004bae26: call 0x82ebac */ r_esp -= 4; W32(r_esp, 0x4bae2bu); f_0082ebac();
    /* 004bae2b: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 004bae2e: jne 0x4badf0 */ if (!fZ) goto L_004badf0;
L_004bae30:; BB(0x004bae30);
    /* 004bae30: fld dword ptr [ebx + 0x4c] */ FPUSH(R_F32((u32)(r_ebx+0x4cu)));
L_004bae33:; BB(0x004bae33);
    /* 004bae33: fcomp dword ptr [0x907218] */ fx_compare(ST(0), R_F32((u32)(0x907218u))); FPOP();
    /* 004bae39: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004bae3b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004bae3c: jb 0x4bacf9 */ if (fC) goto L_004bacf9;
L_004bae42:; BB(0x004bae42);
    /* 004bae42: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 004bae45: mov dword ptr [ebx + 0x1c], 2 */ W32((u32)(r_ebx+0x1cu), 0x2u);
    /* 004bae4c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bae4e: je 0x4bae64 */ if (fZ) goto L_004bae64;
L_004bae50:; BB(0x004bae50);
    /* 004bae50: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004bae54: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bae59: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004bae5d: mov dword ptr [ebx + 0x44], 0 */ W32((u32)(r_ebx+0x44u), 0x0u);
L_004bae64:; BB(0x004bae64);
    /* 004bae64: mov edx, dword ptr [ebx + 0x48] */ r_edx = R32((u32)(r_ebx+0x48u));
    /* 004bae67: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004bae69: je 0x4bacf9 */ if (fZ) goto L_004bacf9;
L_004bae6f:; BB(0x004bae6f);
    /* 004bae6f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004bae73: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004bae78: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004bae7c: mov dword ptr [ebx + 0x48], 0 */ W32((u32)(r_ebx+0x48u), 0x0u);
    /* 004bae83: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004bae86: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004bae87: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004bae88: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004bae89: ret  */ FN_RET(0x004bacc0); r_esp += 4; return;
}

void f_004bae8c(void) /* sub_4BAE8C */
{
    FN_ENTER(0x004bae8c);
    /* 004bae8c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004bae90: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004bae94: fld dword ptr [eax] */ FPUSH(R_F32((u32)(r_eax)));
    /* 004bae96: fld dword ptr [0x907210] */ FPUSH(R_F32((u32)(0x907210u)));
    /* 004bae9c: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004bae9e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004baea0: fmul dword ptr [0x907214] */ ST(0) = ST(0) * R_F32((u32)(0x907214u));
    /* 004baea6: fadd dword ptr [edx] */ ST(0) = ST(0) + R_F32((u32)(r_edx));
    /* 004baea8: fstp dword ptr [ecx + 0x20] */ W_F32((u32)(r_ecx+0x20u), ST(0)); FPOP();
    /* 004baeab: fld dword ptr [eax + 4] */ FPUSH(R_F32((u32)(r_eax+0x4u)));
    /* 004baeae: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004baeb0: fadd dword ptr [edx + 4] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x4u));
    /* 004baeb3: fstp dword ptr [ecx + 0x24] */ W_F32((u32)(r_ecx+0x24u), ST(0)); FPOP();
    /* 004baeb6: fld dword ptr [eax + 8] */ FPUSH(R_F32((u32)(r_eax+0x8u)));
    /* 004baeb9: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004baebb: fadd dword ptr [edx + 8] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x8u));
    /* 004baebe: fstp dword ptr [ecx + 0x28] */ W_F32((u32)(r_ecx+0x28u), ST(0)); FPOP();
    /* 004baec1: ret 8 */ FN_RET(0x004bae8c); r_esp += 12; return;
}

void f_004baec4(void) /* sub_4BAEC4 */
{
    FN_ENTER(0x004baec4);
    /* 004baec4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004baec5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004baec6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004baec7: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004baeca: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004baecc: mov edx, dword ptr [ebp + 0x44] */ r_edx = R32((u32)(r_ebp+0x44u));
    /* 004baecf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004baed1: je 0x4baee7 */ if (fZ) goto L_004baee7;
L_004baed3:; BB(0x004baed3);
    /* 004baed3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004baed7: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004baedc: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004baee0: mov dword ptr [ebp + 0x44], 0 */ W32((u32)(r_ebp+0x44u), 0x0u);
L_004baee7:; BB(0x004baee7);
    /* 004baee7: mov edx, dword ptr [ebp + 0x48] */ r_edx = R32((u32)(r_ebp+0x48u));
    /* 004baeea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004baeec: je 0x4baf02 */ if (fZ) goto L_004baf02;
L_004baeee:; BB(0x004baeee);
    /* 004baeee: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004baef2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004baef7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004baefb: mov dword ptr [ebp + 0x48], 0 */ W32((u32)(r_ebp+0x48u), 0x0u);
L_004baf02:; BB(0x004baf02);
    /* 004baf02: lea esi, [ebp + 0x2c] */ r_esi = (u32)(r_ebp+0x2cu);
    /* 004baf05: lea edi, [ebp + 0x20] */ r_edi = (u32)(r_ebp+0x20u);
    /* 004baf08: mov ecx, esi */ r_ecx = r_esi;
    /* 004baf0a: mov edx, edi */ r_edx = r_edi;
    /* 004baf0c: call 0x82f9c4 */ r_esp -= 4; W32(r_esp, 0x4baf11u); f_0082f9c4();
    /* 004baf11: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004baf12: call 0x7828e4 */ r_esp -= 4; W32(r_esp, 0x4baf17u); f_007828e4();
    /* 004baf17: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004baf19: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004baf1c: fld dword ptr [ebp + 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0x2cu)));
    /* 004baf1f: fld dword ptr [ebp + 0x34] */ FPUSH(R_F32((u32)(r_ebp+0x34u)));
    /* 004baf22: mov dword ptr [ebp + 0x30], 0 */ W32((u32)(r_ebp+0x30u), 0x0u);
    /* 004baf29: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004baf2b: fmul qword ptr [0x9071f0] */ ST(0) = ST(0) * R_F64((u32)(0x9071f0u));
    /* 004baf31: fdiv qword ptr [0x9071e8] */ ST(0) = ST(0) / R_F64((u32)(0x9071e8u));
    /* 004baf37: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004baf3a: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004baf3e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004baf43: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004baf47: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004baf4b: fistp dword ptr [ebp + 0x54] */ W32((u32)(r_ebp+0x54u), (u32)fx_int32(ST(0))); FPOP();
    /* 004baf4e: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004baf51: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004baf53: push 0x20a */ { u32 v = 0x20au; r_esp -= 4; W32(r_esp, v); }
    /* 004baf58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004baf59: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4baf5eu); f_0050b7a4();
    /* 004baf5e: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004baf60: push 0x177 */ { u32 v = 0x177u; r_esp -= 4; W32(r_esp, v); }
    /* 004baf65: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004baf66: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4baf6bu); f_0050981c();
    /* 004baf6b: mov dword ptr [ebp + 0x1c], 1 */ W32((u32)(r_ebp+0x1cu), 0x1u);
    /* 004baf72: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 004baf75: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004baf78: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004baf79: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004baf7a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004baf7b: ret  */ FN_RET(0x004baec4); r_esp += 4; return;
}

void f_004baf7c(void) /* sub_4BAF7C */
{
    FN_ENTER(0x004baf7c);
    /* 004baf7c: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 004baf7f: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004baf82: mov eax, 0 */ r_eax = 0x0u;
    /* 004baf87: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 004baf8a: ret  */ FN_RET(0x004baf7c); r_esp += 4; return;
}

void f_004baf8c(void) /* sub_4BAF8C */
{
    FN_ENTER(0x004baf8c);
    /* 004baf8c: mov edx, dword ptr [ecx + 0x44] */ r_edx = R32((u32)(r_ecx+0x44u));
    /* 004baf8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004baf91: je 0x4bafa7 */ if (fZ) goto L_004bafa7;
L_004baf93:; BB(0x004baf93);
    /* 004baf93: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004baf97: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004baf9c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004bafa0: mov dword ptr [ecx + 0x44], 0 */ W32((u32)(r_ecx+0x44u), 0x0u);
L_004bafa7:; BB(0x004bafa7);
    /* 004bafa7: mov edx, dword ptr [ecx + 0x48] */ r_edx = R32((u32)(r_ecx+0x48u));
    /* 004bafaa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bafac: je 0x4bafc2 */ if (fZ) goto L_004bafc2;
L_004bafae:; BB(0x004bafae);
    /* 004bafae: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 004bafb2: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bafb7: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 004bafbb: mov dword ptr [ecx + 0x48], 0 */ W32((u32)(r_ecx+0x48u), 0x0u);
L_004bafc2:; BB(0x004bafc2);
    /* 004bafc2: ret  */ FN_RET(0x004baf8c); r_esp += 4; return;
}

void f_004bafc4(void) /* sub_4BAFC4 */
{
    FN_ENTER(0x004bafc4);
    /* 004bafc4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004bafc8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004bafca: je 0x4bafe6 */ if (fZ) goto L_004bafe6;
L_004bafcc:; BB(0x004bafcc);
    /* 004bafcc: fld dword ptr [ecx + 0x20] */ FPUSH(R_F32((u32)(r_ecx+0x20u)));
    /* 004bafcf: fadd dword ptr [ecx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x38u));
    /* 004bafd2: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 004bafd4: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 004bafd7: fadd dword ptr [ecx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x3cu));
    /* 004bafda: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 004bafdd: fld dword ptr [ecx + 0x28] */ FPUSH(R_F32((u32)(r_ecx+0x28u)));
    /* 004bafe0: fadd dword ptr [ecx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x40u));
    /* 004bafe3: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
L_004bafe6:; BB(0x004bafe6);
    /* 004bafe6: ret 4 */ FN_RET(0x004bafc4); r_esp += 8; return;
}

void f_004bafec(void) /* sub_4BAFEC */
{
    FN_ENTER(0x004bafec);
    /* 004bafec: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004baff0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004baff2: je 0x4bb029 */ if (fZ) goto L_004bb029;
L_004baff4:; BB(0x004baff4);
    /* 004baff4: fld dword ptr [0x907208] */ FPUSH(R_F32((u32)(0x907208u)));
    /* 004baffa: fld dword ptr [0x906bb0] */ FPUSH(R_F32((u32)(0x906bb0u)));
    /* 004bb000: fld dword ptr [ecx + 0x24] */ FPUSH(R_F32((u32)(r_ecx+0x24u)));
    /* 004bb003: fsub st(2), st(0) */ ST(2) = ST(2) - ST(0);
    /* 004bb005: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004bb007: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004bb009: fld dword ptr [ecx + 0x38] */ FPUSH(R_F32((u32)(r_ecx+0x38u)));
    /* 004bb00c: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bb00e: fadd dword ptr [ecx + 0x20] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x20u));
    /* 004bb011: fstp dword ptr [eax] */ W_F32((u32)(r_eax), ST(0)); FPOP();
    /* 004bb013: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 004bb016: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004bb018: fadd dword ptr [ecx + 0x24] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x24u));
    /* 004bb01b: fstp dword ptr [eax + 4] */ W_F32((u32)(r_eax+0x4u), ST(0)); FPOP();
    /* 004bb01e: fld dword ptr [ecx + 0x40] */ FPUSH(R_F32((u32)(r_ecx+0x40u)));
    /* 004bb021: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004bb023: fadd dword ptr [ecx + 0x28] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0x28u));
    /* 004bb026: fstp dword ptr [eax + 8] */ W_F32((u32)(r_eax+0x8u), ST(0)); FPOP();
L_004bb029:; BB(0x004bb029);
    /* 004bb029: ret 4 */ FN_RET(0x004bafec); r_esp += 8; return;
}

