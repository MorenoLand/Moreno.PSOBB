#include "protos.h"

void f_006e806c(void) /* sub_6E806C */
{
    FN_ENTER(0x006e806c);
    /* 006e806c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e806d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e8070: mov edi, ecx */ r_edi = r_ecx;
    /* 006e8072: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 006e8075: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e8078: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 006e807d: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006e807f: mov dword ptr [edi + 0x2c], ecx */ W32((u32)(r_edi+0x2cu), r_ecx);
    /* 006e8082: mov eax, ecx */ r_eax = r_ecx;
    /* 006e8084: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 006e8087: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 006e808a: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 006e808c: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 006e808f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e8091: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e8093: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e8095: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 006e8097: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8099: jne 0x6e80c9 */ if (!fZ) goto L_006e80c9;
L_006e809b:; BB(0x006e809b);
    /* 006e809b: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006e809e: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 006e80a2: lea edx, [edi + 0x20] */ r_edx = (u32)(r_edi+0x20u);
    /* 006e80a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e80a7: mov ebp, eax */ r_ebp = r_eax;
    /* 006e80a9: mov esi, edx */ r_esi = r_edx;
L_006e80ab:; BB(0x006e80ab);
    /* 006e80ab: push dword ptr [ebp + 0x9cf950] */ { u32 v = R32((u32)(r_ebp+0x9cf950u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e80b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e80b2: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6e80b7u); f_0050b510();
    /* 006e80b7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e80ba: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006e80bd: cmp ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e80c0: jl 0x6e80ab */ if ((fS!=fO)) goto L_006e80ab;
L_006e80c2:; BB(0x006e80c2);
    /* 006e80c2: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006e80c5: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_006e80c9:; BB(0x006e80c9);
    /* 006e80c9: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 006e80cc: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 006e80d2: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e80d8: je 0x6e80e1 */ if (fZ) goto L_006e80e1;
L_006e80da:; BB(0x006e80da);
    /* 006e80da: mov eax, 1 */ r_eax = 0x1u;
    /* 006e80df: jmp 0x6e80e3 */ goto L_006e80e3;
L_006e80e1:; BB(0x006e80e1);
    /* 006e80e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006e80e3:; BB(0x006e80e3);
    /* 006e80e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e80e5: je 0x6e8108 */ if (fZ) goto L_006e8108;
L_006e80e7:; BB(0x006e80e7);
    /* 006e80e7: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 006e80ea: cmp eax, 0xb4 */ {  u32 a = r_eax; u32 b = 0xb4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e80ef: jl 0x6e8103 */ if ((fS!=fO)) goto L_006e8103;
L_006e80f1:; BB(0x006e80f1);
    /* 006e80f1: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006e80f5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e80fa: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006e80fe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e8101: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e8102: ret  */ FN_RET(0x006e806c); r_esp += 4; return;
L_006e8103:; BB(0x006e8103);
    /* 006e8103: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e8106: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e8107: ret  */ FN_RET(0x006e806c); r_esp += 4; return;
L_006e8108:; BB(0x006e8108);
    /* 006e8108: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 006e810c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e8111: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 006e8115: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e8118: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e8119: ret  */ FN_RET(0x006e806c); r_esp += 4; return;
}

void f_006e811c(void) /* sub_6E811C */
{
    FN_ENTER(0x006e811c);
    /* 006e811c: mov dword ptr [0xa96748], 0x3f800000 */ W32((u32)(0xa96748u), 0x3f800000u);
    /* 006e8126: mov dword ptr [0xa9674c], 0x41000000 */ W32((u32)(0xa9674cu), 0x41000000u);
    /* 006e8130: mov dword ptr [0xa96750], 0x3fc00000 */ W32((u32)(0xa96750u), 0x3fc00000u);
    /* 006e813a: ret  */ FN_RET(0x006e811c); r_esp += 4; return;
}

void f_006e813c(void) /* sub_6E813C */
{
    FN_ENTER(0x006e813c);
    /* 006e813c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e813d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006e813f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e8141: call 0x6e8160 */ r_esp -= 4; W32(r_esp, 0x6e8146u); f_006e8160();
    /* 006e8146: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006e814a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e814c: jne 0x6e8152 */ if (!fZ) goto L_006e8152;
L_006e814e:; BB(0x006e814e);
    /* 006e814e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e814f: ret 4 */ FN_RET(0x006e813c); r_esp += 8; return;
L_006e8152:; BB(0x006e8152);
    /* 006e8152: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e8153: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6e8158u); f_005c2f74();
    /* 006e8158: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e8159: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e815a: ret 4 */ FN_RET(0x006e813c); r_esp += 8; return;
}

void f_006e8160(void) /* sub_6E8160 */
{
    FN_ENTER(0x006e8160);
    /* 006e8160: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e8161: mov ebp, esp */ r_ebp = r_esp;
    /* 006e8163: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e8165: push 0x8ef1ac */ { u32 v = 0x8ef1acu; r_esp -= 4; W32(r_esp, v); }
    /* 006e816a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e8170: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e8171: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e8178: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e817b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e817e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006e8181: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e8184: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e8187: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006e818a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e8191: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e8194: mov dword ptr [eax], 0xb3dae0 */ W32((u32)(r_eax), 0xb3dae0u);
    /* 006e819a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e819b: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x6e81a0u); f_007b4e84();
    /* 006e81a0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e81a1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e81a4: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x6e81a9u); f_007b9c8c();
    /* 006e81a9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e81ac: mov dword ptr [ecx + 0xb0], 0 */ W32((u32)(r_ecx+0xb0u), 0x0u);
    /* 006e81b6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e81bd: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x6e81c2u); f_007b4aec();
    /* 006e81c2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e81c5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e81cc: mov esp, ebp */ r_esp = r_ebp;
    /* 006e81ce: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e81cf: ret  */ FN_RET(0x006e8160); r_esp += 4; return;
}

void f_006e81d0(void) /* sub_6E81D0 */
{
    FN_ENTER(0x006e81d0);
    /* 006e81d0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e81d1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006e81d3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e81d5: call 0x6e81f4 */ r_esp -= 4; W32(r_esp, 0x6e81dau); f_006e81f4();
    /* 006e81da: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006e81de: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e81e0: jne 0x6e81e6 */ if (!fZ) goto L_006e81e6;
L_006e81e2:; BB(0x006e81e2);
    /* 006e81e2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e81e3: ret 4 */ FN_RET(0x006e81d0); r_esp += 8; return;
L_006e81e6:; BB(0x006e81e6);
    /* 006e81e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e81e7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6e81ecu); f_005c2f74();
    /* 006e81ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e81ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e81ee: ret 4 */ FN_RET(0x006e81d0); r_esp += 8; return;
}

void f_006e81f4(void) /* sub_6E81F4 */
{
    FN_ENTER(0x006e81f4);
    /* 006e81f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e81f5: mov ebp, esp */ r_ebp = r_esp;
    /* 006e81f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e81f9: push 0x8ef1c8 */ { u32 v = 0x8ef1c8u; r_esp -= 4; W32(r_esp, v); }
    /* 006e81fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e8204: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e8205: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e820c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e820f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e8212: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006e8215: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e8218: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e821b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006e821e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e8225: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e8228: mov edx, dword ptr [eax + 0xf8] */ r_edx = R32((u32)(r_eax+0xf8u));
    /* 006e822e: mov dword ptr [eax], 0xb3db10 */ W32((u32)(r_eax), 0xb3db10u);
    /* 006e8234: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8236: je 0x6e8252 */ if (fZ) goto L_006e8252;
L_006e8238:; BB(0x006e8238);
    /* 006e8238: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006e823c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e8241: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006e8245: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e8248: mov dword ptr [eax + 0xf8], 0 */ W32((u32)(r_eax+0xf8u), 0x0u);
L_006e8252:; BB(0x006e8252);
    /* 006e8252: mov ecx, dword ptr [eax + 0xec] */ r_ecx = R32((u32)(r_eax+0xecu));
    /* 006e8258: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e825a: je 0x6e8271 */ if (fZ) goto L_006e8271;
L_006e825c:; BB(0x006e825c);
    /* 006e825c: je 0x6e8267 */ if (fZ) goto L_006e8267;
L_006e825e:; BB(0x006e825e);
    /* 006e825e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8260: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006e8262: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x6e8264u); call_ind(t); }
    /* 006e8264: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_006e8267:; BB(0x006e8267);
    /* 006e8267: mov dword ptr [eax + 0xec], 0 */ W32((u32)(r_eax+0xecu), 0x0u);
L_006e8271:; BB(0x006e8271);
    /* 006e8271: mov edx, dword ptr [eax + 0xf0] */ r_edx = R32((u32)(r_eax+0xf0u));
    /* 006e8277: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8279: je 0x6e828b */ if (fZ) goto L_006e828b;
L_006e827b:; BB(0x006e827b);
    /* 006e827b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006e827f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e8284: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006e8288: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_006e828b:; BB(0x006e828b);
    /* 006e828b: mov dword ptr [eax + 0xf0], 0 */ W32((u32)(r_eax+0xf0u), 0x0u);
    /* 006e8295: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e829c: mov ecx, eax */ r_ecx = r_eax;
    /* 006e829e: call 0x6de56c */ r_esp -= 4; W32(r_esp, 0x6e82a3u); f_006de56c();
    /* 006e82a3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e82a6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e82ad: mov esp, ebp */ r_esp = r_ebp;
    /* 006e82af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e82b0: ret  */ FN_RET(0x006e81f4); r_esp += 4; return;
}

void f_006e82b4(void) /* sub_6E82B4 */
{
    FN_ENTER(0x006e82b4);
    /* 006e82b4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e82b5: mov ebp, esp */ r_ebp = r_esp;
    /* 006e82b7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e82b9: push 0x8ef1e4 */ { u32 v = 0x8ef1e4u; r_esp -= 4; W32(r_esp, v); }
    /* 006e82be: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e82c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e82c5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e82cc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e82cf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e82d2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006e82d5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006e82d8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006e82db: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 006e82de: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006e82e1: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e82e8: mov eax, ecx */ r_eax = r_ecx;
    /* 006e82ea: mov dword ptr [eax], 0xb3db30 */ W32((u32)(r_eax), 0xb3db30u);
    /* 006e82f0: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006e82f2:; BB(0x006e82f2);
    /* 006e82f2: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e82f5: push dword ptr [eax + esi*4 + 0x1c] */ { u32 v = R32((u32)(r_eax+r_esi*4+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e82f9: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 006e82fc: call 0x6ea700 */ r_esp -= 4; W32(r_esp, 0x6e8301u); f_006ea700();
    /* 006e8301: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e8302: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8304: je 0x6e8322 */ if (fZ) goto L_006e8322;
L_006e8306:; BB(0x006e8306);
    /* 006e8306: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e8309: mov edx, dword ptr [ecx + ebx*2 + 0x1c] */ r_edx = R32((u32)(r_ecx+r_ebx*2+0x1cu));
    /* 006e830d: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006e8311: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e8316: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006e831a: mov dword ptr [ecx + ebx*2 + 0x1c], 0 */ W32((u32)(r_ecx+r_ebx*2+0x1cu), 0x0u);
L_006e8322:; BB(0x006e8322);
    /* 006e8322: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006e8325: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e8328: jl 0x6e82f2 */ if ((fS!=fO)) goto L_006e82f2;
L_006e832a:; BB(0x006e832a);
    /* 006e832a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e832d: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 006e8330: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8332: je 0x6e834b */ if (fZ) goto L_006e834b;
L_006e8334:; BB(0x006e8334);
    /* 006e8334: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006e8338: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e833d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006e8341: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e8344: mov dword ptr [edx + 0x28], 0 */ W32((u32)(r_edx+0x28u), 0x0u);
L_006e834b:; BB(0x006e834b);
    /* 006e834b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e8352: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e8355: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6e835au); f_008171e8();
    /* 006e835a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006e835d: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e835f: jne 0x6e837a */ if (!fZ) goto L_006e837a;
L_006e8361:; BB(0x006e8361);
    /* 006e8361: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e8364: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e8367: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e836a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e836d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e8374: mov esp, ebp */ r_esp = r_ebp;
    /* 006e8376: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e8377: ret 4 */ FN_RET(0x006e82b4); r_esp += 8; return;
L_006e837a:; BB(0x006e837a);
    /* 006e837a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e837d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e837e: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6e8383u); f_005c2f74();
    /* 006e8383: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e8384: jmp 0x6e8361 */ goto L_006e8361;
}

void f_006e8388(void) /* sub_6E8388 */
{
    FN_ENTER(0x006e8388);
    /* 006e8388: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 006e838d: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 006e8390: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e8392: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 006e8396: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 006e8399: ret 4 */ FN_RET(0x006e8388); r_esp += 8; return;
}

void f_006e839c(void) /* sub_6E839C */
{
    FN_ENTER(0x006e839c);
    /* 006e839c: movsx eax, word ptr [ecx + 2] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2u));
    /* 006e83a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e83a2: je 0x6e83aa */ if (fZ) goto L_006e83aa;
L_006e83a4:; BB(0x006e83a4);
    /* 006e83a4: mov eax, 1 */ r_eax = 0x1u;
    /* 006e83a9: ret  */ FN_RET(0x006e839c); r_esp += 4; return;
L_006e83aa:; BB(0x006e83aa);
    /* 006e83aa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e83ac: ret  */ FN_RET(0x006e839c); r_esp += 4; return;
}

void f_006e83b0(void) /* sub_6E83B0 */
{
    FN_ENTER(0x006e83b0);
    /* 006e83b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e83b1: mov ebp, esp */ r_ebp = r_esp;
    /* 006e83b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e83b5: push 0x8ef200 */ { u32 v = 0x8ef200u; r_esp -= 4; W32(r_esp, v); }
    /* 006e83ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e83c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e83c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e83c8: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e83cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e83ce: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006e83d1: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006e83d4: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006e83d7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 006e83da: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e83dd: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006e83e0: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006e83e3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006e83e6: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 006e83e9: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6e83eeu); f_007b4b48();
    /* 006e83ee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e83f5: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e83f8: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e83fb: mov dword ptr [ecx], 0xb3dae0 */ W32((u32)(r_ecx), 0xb3dae0u);
    /* 006e8401: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006e8403: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8405: push 0x9cf95c */ { u32 v = 0x9cf95cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e840a: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 006e840d: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 006e8410: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 006e8413: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 006e8416: mov dword ptr [ecx + 0x40], esi */ W32((u32)(r_ecx+0x40u), r_esi);
    /* 006e8419: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6e841eu); f_007b9a88();
    /* 006e841e: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e8421: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 006e8424: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e8429: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 006e842c: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6e8431u); f_007b4f54();
    /* 006e8431: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e8434: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e8437: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e843a: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e843d: mov dword ptr [eax + 0x98], 6 */ W32((u32)(r_eax+0x98u), 0x6u);
    /* 006e8447: mov dword ptr [eax + 0xac], edx */ W32((u32)(r_eax+0xacu), r_edx);
    /* 006e844d: mov dword ptr [eax + 0xb0], 0 */ W32((u32)(r_eax+0xb0u), 0x0u);
    /* 006e8457: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e845a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e8461: mov esp, ebp */ r_esp = r_ebp;
    /* 006e8463: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e8464: ret 0xc */ FN_RET(0x006e83b0); r_esp += 16; return;
}

void f_006e8468(void) /* sub_6E8468 */
{
    FN_ENTER(0x006e8468);
    /* 006e8468: mov dword ptr [ecx + 0xb0], 1 */ W32((u32)(r_ecx+0xb0u), 0x1u);
    /* 006e8472: ret 4 */ FN_RET(0x006e8468); r_esp += 8; return;
}

void f_006e8478(void) /* sub_6E8478 */
{
    FN_ENTER(0x006e8478);
    /* 006e8478: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e8479: mov ebp, esp */ r_ebp = r_esp;
    /* 006e847b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e847d: push 0x8ef228 */ { u32 v = 0x8ef228u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8482: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e8488: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e8489: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e8490: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e8493: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e8496: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006e8499: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006e849c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006e849f: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 006e84a4: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006e84ab: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e84b0u); f_005caba4();
    /* 006e84b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e84b1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e84b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e84b6: je 0x6e84e1 */ if (fZ) goto L_006e84e1;
L_006e84b8:; BB(0x006e84b8);
    /* 006e84b8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006e84bf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e84c6: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e84c9: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e84cc: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e84cf: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e84d2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e84d5: call 0x6e84f0 */ r_esp -= 4; W32(r_esp, 0x6e84dau); f_006e84f0();
    /* 006e84da: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006e84e1:; BB(0x006e84e1);
    /* 006e84e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e84e4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e84eb: mov esp, ebp */ r_esp = r_ebp;
    /* 006e84ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e84ee: ret  */ FN_RET(0x006e8478); r_esp += 4; return;
}

void f_006e84f0(void) /* sub_6E84F0 */
{
    FN_ENTER(0x006e84f0);
    /* 006e84f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e84f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006e84f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e84f5: push 0x8ef25e */ { u32 v = 0x8ef25eu; r_esp -= 4; W32(r_esp, v); }
    /* 006e84fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e8500: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e8501: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e8508: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e850b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e850e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006e8511: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006e8514: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006e8517: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 006e851a: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 006e851d: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 006e8520: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e8521: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 006e8524: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006e8527: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e8528: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e852b: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e852e: call 0x6de5f0 */ r_esp -= 4; W32(r_esp, 0x6e8533u); f_006de5f0();
    /* 006e8533: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e853a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e853d: mov dword ptr [eax], 0xb3db10 */ W32((u32)(r_eax), 0xb3db10u);
    /* 006e8543: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006e8545: mov edx, dword ptr [0x9cf958] */ r_edx = R32((u32)(0x9cf958u));
    /* 006e854b: mov ecx, dword ptr [0xaafca0] */ r_ecx = R32((u32)(0xaafca0u));
    /* 006e8551: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 006e8554: mov dword ptr [eax + 0x108], ebx */ W32((u32)(r_eax+0x108u), r_ebx);
    /* 006e855a: mov dword ptr [eax + 0x10c], ebx */ W32((u32)(r_eax+0x10cu), r_ebx);
    /* 006e8560: mov dword ptr [eax + 0xf0], ebx */ W32((u32)(r_eax+0xf0u), r_ebx);
    /* 006e8566: mov dword ptr [eax + 0xf8], ebx */ W32((u32)(r_eax+0xf8u), r_ebx);
    /* 006e856c: mov word ptr [eax + 0xf4], cx */ W16((u32)(r_eax+0xf4u), (u16)r_ecx);
    /* 006e8573: mov dword ptr [eax + 0xec], ebx */ W32((u32)(r_eax+0xecu), r_ebx);
    /* 006e8579: mov ebx, dword ptr [eax + 0x1c] */ r_ebx = R32((u32)(r_eax+0x1cu));
    /* 006e857c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e857e: je 0x6e858d */ if (fZ) goto L_006e858d;
L_006e8580:; BB(0x006e8580);
    /* 006e8580: movzx ecx, word ptr [ebx + 0x1c] */ r_ecx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 006e8584: mov word ptr [eax + 0xb4], cx */ W16((u32)(r_eax+0xb4u), (u16)r_ecx);
    /* 006e858b: jmp 0x6e8594 */ goto L_006e8594;
L_006e858d:; BB(0x006e858d);
    /* 006e858d: movzx ecx, word ptr [eax + 0xb4] */ r_ecx = (u32)R16((u32)(r_eax+0xb4u));
L_006e8594:; BB(0x006e8594);
    /* 006e8594: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 006e859a: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e859c: je 0x6e85ce */ if (fZ) goto L_006e85ce;
L_006e859e:; BB(0x006e859e);
    /* 006e859e: mov word ptr [eax + 0xf6], dx */ W16((u32)(r_eax+0xf6u), (u16)r_edx);
    /* 006e85a5: mov edx, dword ptr [ebx + 0x90c] */ r_edx = R32((u32)(r_ebx+0x90cu));
    /* 006e85ab: mov dword ptr [eax + 0xfc], edx */ W32((u32)(r_eax+0xfcu), r_edx);
    /* 006e85b1: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e85b4: mov ecx, dword ptr [ebx + 0x910] */ r_ecx = R32((u32)(r_ebx+0x910u));
    /* 006e85ba: mov dword ptr [eax + 0x100], ecx */ W32((u32)(r_eax+0x100u), r_ecx);
    /* 006e85c0: mov ebx, dword ptr [ebx + 0x914] */ r_ebx = R32((u32)(r_ebx+0x914u));
    /* 006e85c6: mov dword ptr [eax + 0x104], ebx */ W32((u32)(r_eax+0x104u), r_ebx);
    /* 006e85cc: jmp 0x6e85fd */ goto L_006e85fd;
L_006e85ce:; BB(0x006e85ce);
    /* 006e85ce: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e85d1: mov word ptr [eax + 0xf6], cx */ W16((u32)(r_eax+0xf6u), (u16)r_ecx);
    /* 006e85d8: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e85db: jne 0x6e862e */ if (!fZ) goto L_006e862e;
L_006e85dd:; BB(0x006e85dd);
    /* 006e85dd: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e85e0: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006e85e2: mov dword ptr [eax + 0xfc], edx */ W32((u32)(r_eax+0xfcu), r_edx);
    /* 006e85e8: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e85eb: mov ecx, dword ptr [ebx + 4] */ r_ecx = R32((u32)(r_ebx+0x4u));
    /* 006e85ee: mov dword ptr [eax + 0x100], ecx */ W32((u32)(r_eax+0x100u), r_ecx);
    /* 006e85f4: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 006e85f7: mov dword ptr [eax + 0x104], esi */ W32((u32)(r_eax+0x104u), r_esi);
L_006e85fd:; BB(0x006e85fd);
    /* 006e85fd: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e8600: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e8602: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e8603: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e8604: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e8605: push 0x9f */ { u32 v = 0x9fu; r_esp -= 4; W32(r_esp, v); }
    /* 006e860a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e860fu); f_00814298();
    /* 006e860f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e8612: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e8615: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e8618: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e861b: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e861e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e8621: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e8628: mov esp, ebp */ r_esp = r_ebp;
    /* 006e862a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e862b: ret 0x10 */ FN_RET(0x006e84f0); r_esp += 20; return;
L_006e862e:; BB(0x006e862e);
    /* 006e862e: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006e8635: push 0xa8 */ { u32 v = 0xa8u; r_esp -= 4; W32(r_esp, v); }
    /* 006e863a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6e863fu); f_008581c5();
    /* 006e863f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e8640: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 006e8643: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8645: je 0x6e8745 */ if (fZ) goto L_006e8745;
L_006e864b:; BB(0x006e864b);
    /* 006e864b: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 006e8652: lea edx, [eax + 8] */ r_edx = (u32)(r_eax+0x8u);
    /* 006e8655: mov ecx, 8 */ r_ecx = 0x8u;
L_006e865a:; BB(0x006e865a);
    /* 006e865a: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 006e8660: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e8663: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 006e8666: jne 0x6e865a */ if (!fZ) goto L_006e865a;
L_006e8668:; BB(0x006e8668);
    /* 006e8668: mov dword ptr [eax + 4], 0 */ W32((u32)(r_eax+0x4u), 0x0u);
    /* 006e866f: lea esi, [eax + 0x28] */ r_esi = (u32)(r_eax+0x28u);
    /* 006e8672: mov edi, 8 */ r_edi = 0x8u;
    /* 006e8677: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006e8679: mov dword ptr [eax], 0xb39cdc */ W32((u32)(r_eax), 0xb39cdcu);
    /* 006e867f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006e8681: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006e8683:; BB(0x006e8683);
    /* 006e8683: mov dword ptr [esi], 0 */ W32((u32)(r_esi), 0x0u);
    /* 006e8689: mov dword ptr [esi + 0xc], edx */ W32((u32)(r_esi+0xcu), r_edx);
    /* 006e868c: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 006e868f: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 006e8692: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006e8695: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 006e8698: jne 0x6e8683 */ if (!fZ) goto L_006e8683;
L_006e869a:; BB(0x006e869a);
    /* 006e869a: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_006e86a1:; BB(0x006e86a1);
    /* 006e86a1: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e86a4: mov dword ptr [edx + 0xec], eax */ W32((u32)(r_edx+0xecu), r_eax);
    /* 006e86aa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e86b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e86b3: je 0x6e85fd */ if (fZ) goto L_006e85fd;
L_006e86b9:; BB(0x006e86b9);
    /* 006e86b9: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006e86c0: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 006e86c5: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006e86cc: mov dword ptr [ebp - 0x2c], 0x3e4ccccd */ W32((u32)(r_ebp+0xffffffd4u), 0x3e4ccccdu);
    /* 006e86d3: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x6e86d8u); f_0082d990();
    /* 006e86d8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e86db: mov ebx, dword ptr [eax + 0x1c] */ r_ebx = R32((u32)(r_eax+0x1cu));
    /* 006e86de: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 006e86e1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006e86e3: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6e86e8u); f_0082d8bc();
    /* 006e86e8: lea eax, [ebp - 0x34] */ r_eax = (u32)(r_ebp+0xffffffccu);
    /* 006e86eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e86ec: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 006e86ef: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006e86f1: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x6e86f6u); f_00830aa0();
    /* 006e86f6: mov ecx, 1 */ r_ecx = 0x1u;
    /* 006e86fb: call 0x82eb80 */ r_esp -= 4; W32(r_esp, 0x6e8700u); f_0082eb80();
    /* 006e8700: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e8703: fld dword ptr [ebp - 0x34] */ FPUSH(R_F32((u32)(r_ebp+0xffffffccu)));
    /* 006e8706: fld dword ptr [0x96d96c] */ FPUSH(R_F32((u32)(0x96d96cu)));
    /* 006e870c: fadd dword ptr [ebp - 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffd0u));
    /* 006e870f: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 006e8712: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e8714: fadd dword ptr [eax + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x38u));
    /* 006e8717: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006e8719: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 006e871c: fld dword ptr [ebp - 0x2c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffd4u)));
    /* 006e871f: fadd dword ptr [eax + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x40u));
    /* 006e8722: mov ecx, dword ptr [ebx + 0xec] */ r_ecx = R32((u32)(r_ebx+0xecu));
    /* 006e8728: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006e872a: fstp dword ptr [ebp - 0x34] */ W_F32((u32)(r_ebp+0xffffffccu), ST(0)); FPOP();
    /* 006e872d: fstp dword ptr [ebp - 0x30] */ W_F32((u32)(r_ebp+0xffffffd0u), ST(0)); FPOP();
    /* 006e8730: fstp dword ptr [ebp - 0x2c] */ W_F32((u32)(r_ebp+0xffffffd4u), ST(0)); FPOP();
    /* 006e8733: lea edx, [ebp - 0x34] */ r_edx = (u32)(r_ebp+0xffffffccu);
    /* 006e8736: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e8737: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e8738: call 0x6a3df0 */ r_esp -= 4; W32(r_esp, 0x6e873du); f_006a3df0();
    /* 006e873d: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e8740: jmp 0x6e85fd */ goto L_006e85fd;
L_006e8745:; BB(0x006e8745);
    /* 006e8745: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e8747: jmp 0x6e86a1 */ goto L_006e86a1;
}

void f_006e874c(void) /* sub_6E874C */
{
    FN_ENTER(0x006e874c);
    /* 006e874c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e874d: mov ebp, esp */ r_ebp = r_esp;
    /* 006e874f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e8751: push 0x8ef284 */ { u32 v = 0x8ef284u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8756: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e875c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e875d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e8764: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e8767: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e876a: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 006e876d: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 006e8770: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 006e8773: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006e8777: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e8778: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6e877du); f_0068d5a8();
    /* 006e877d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006e8780: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e8783: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e8785: je 0x6e87db */ if (fZ) goto L_006e87db;
L_006e8787:; BB(0x006e8787);
    /* 006e8787: mov edx, eax */ r_edx = r_eax;
    /* 006e8789: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006e8790: lea eax, [edx + 0x38] */ r_eax = (u32)(r_edx+0x38u);
    /* 006e8793: lea ecx, [edx + 0x300] */ r_ecx = (u32)(r_edx+0x300u);
    /* 006e8799: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006e879c: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006e879f: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 006e87a4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e87a9u); f_005caba4();
    /* 006e87a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e87aa: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006e87ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e87af: je 0x6e87db */ if (fZ) goto L_006e87db;
L_006e87b1:; BB(0x006e87b1);
    /* 006e87b1: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006e87b8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e87bf: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e87c2: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e87c5: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006e87c8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e87ca: mov ecx, eax */ r_ecx = r_eax;
    /* 006e87cc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e87cd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e87ce: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e87cf: call 0x6e84f0 */ r_esp -= 4; W32(r_esp, 0x6e87d4u); f_006e84f0();
    /* 006e87d4: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_006e87db:; BB(0x006e87db);
    /* 006e87db: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e87de: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e87e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e87e4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e87eb: mov esp, ebp */ r_esp = r_ebp;
    /* 006e87ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e87ee: ret  */ FN_RET(0x006e874c); r_esp += 4; return;
}

void f_006e87f0(void) /* sub_6E87F0 */
{
    FN_ENTER(0x006e87f0);
    /* 006e87f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e87f1: mov ebp, esp */ r_ebp = r_esp;
    /* 006e87f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e87f5: push 0x8ef2ac */ { u32 v = 0x8ef2acu; r_esp -= 4; W32(r_esp, v); }
    /* 006e87fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e8800: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e8801: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e8808: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e880b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e880e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006e8811: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006e8814: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006e8817: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006e881b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e881c: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6e8821u); f_0068d5a8();
    /* 006e8821: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006e8824: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e8827: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e8829: je 0x6e886b */ if (fZ) goto L_006e886b;
L_006e882b:; BB(0x006e882b);
    /* 006e882b: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006e8832: push 0x110 */ { u32 v = 0x110u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8837: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e883cu); f_005caba4();
    /* 006e883c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e883d: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006e8840: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e8842: je 0x6e886b */ if (fZ) goto L_006e886b;
L_006e8844:; BB(0x006e8844);
    /* 006e8844: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006e884b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e8852: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 006e8855: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e8858: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006e885a: mov ecx, eax */ r_ecx = r_eax;
    /* 006e885c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e885d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e885e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e885f: call 0x6e84f0 */ r_esp -= 4; W32(r_esp, 0x6e8864u); f_006e84f0();
    /* 006e8864: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_006e886b:; BB(0x006e886b);
    /* 006e886b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e886e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e8871: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e8878: mov esp, ebp */ r_esp = r_ebp;
    /* 006e887a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e887b: ret  */ FN_RET(0x006e87f0); r_esp += 4; return;
}

void f_006e887c(void) /* sub_6E887C */
{
    FN_ENTER(0x006e887c);
    /* 006e887c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006e887e: mov byte ptr [0xa96760], al */ W8((u32)(0xa96760u), (u8)r_eax);
    /* 006e8883: mov byte ptr [0xa96761], al */ W8((u32)(0xa96761u), (u8)r_eax);
    /* 006e8888: mov byte ptr [0xa96762], al */ W8((u32)(0xa96762u), (u8)r_eax);
    /* 006e888d: mov byte ptr [0xa96763], al */ W8((u32)(0xa96763u), (u8)r_eax);
    /* 006e8892: ret  */ FN_RET(0x006e887c); r_esp += 4; return;
}

void f_006e8894(void) /* sub_6E8894 */
{
    FN_ENTER(0x006e8894);
    /* 006e8894: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e8895: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e8898: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 006e889c: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006e889f: mov dword ptr [esp], 0xe */ W32((u32)(r_esp), 0xeu);
    /* 006e88a6: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006e88ab: mov dword ptr [esp + 4], 0x41200000 */ W32((u32)(r_esp+0x4u), 0x41200000u);
    /* 006e88b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e88b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e88b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e88b7: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 006e88bc: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 006e88be: push dword ptr [ecx + 0x1c] */ { u32 v = R32((u32)(r_ecx+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006e88c1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006e88c3: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x6e88c6u); call_ind(t); }
    /* 006e88c6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006e88c8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e88cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e88cc: ret 4 */ FN_RET(0x006e8894); r_esp += 8; return;
}

void f_006e88d0(void) /* sub_6E88D0 */
{
    FN_ENTER(0x006e88d0);
    /* 006e88d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e88d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e88d2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e88d3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e88d6: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006e88d8: movzx eax, word ptr [ebx + 0xb4] */ r_eax = (u32)R16((u32)(r_ebx+0xb4u));
    /* 006e88df: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e88e0: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6e88e5u); f_007b4d18();
    /* 006e88e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e88e6: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 006e88e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e88eb: je 0x6e8c7b */ if (fZ) goto L_006e8c7b;
L_006e88f1:; BB(0x006e88f1);
    /* 006e88f1: mov edx, dword ptr [ebx + 0x108] */ r_edx = R32((u32)(r_ebx+0x108u));
    /* 006e88f7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e88f9: je 0x6e8b96 */ if (fZ) goto L_006e8b96;
L_006e88ff:; BB(0x006e88ff);
    /* 006e88ff: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8902: je 0x6e8a7d */ if (fZ) goto L_006e8a7d;
L_006e8908:; BB(0x006e8908);
    /* 006e8908: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e890b: je 0x6e8a58 */ if (fZ) goto L_006e8a58;
L_006e8911:; BB(0x006e8911);
    /* 006e8911: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8914: jne 0x6e8a3f */ if (!fZ) goto L_006e8a3f;
L_006e891a:; BB(0x006e891a);
    /* 006e891a: movzx edi, word ptr [eax + 0x1c] */ r_edi = (u32)R16((u32)(r_eax+0x1cu));
    /* 006e891e: movzx eax, word ptr [ebx + 0xf6] */ r_eax = (u32)R16((u32)(r_ebx+0xf6u));
    /* 006e8925: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e8926: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6e892bu); f_0068d5a8();
    /* 006e892b: mov esi, eax */ r_esi = r_eax;
    /* 006e892d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e8930: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8932: je 0x6e89b9 */ if (fZ) goto L_006e89b9;
L_006e8938:; BB(0x006e8938);
    /* 006e8938: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 006e893b: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8941: je 0x6e8975 */ if (fZ) goto L_006e8975;
L_006e8943:; BB(0x006e8943);
    /* 006e8943: mov dword ptr [ebx + 0x108], 1 */ W32((u32)(r_ebx+0x108u), 0x1u);
    /* 006e894d: call 0x717f38 */ r_esp -= 4; W32(r_esp, 0x6e8952u); f_00717f38();
    /* 006e8952: mov eax, dword ptr [ebx + 0xf0] */ r_eax = R32((u32)(r_ebx+0xf0u));
    /* 006e8958: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e895a: je 0x6e8c67 */ if (fZ) goto L_006e8c67;
L_006e8960:; BB(0x006e8960);
    /* 006e8960: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e8962: mov dword ptr [eax + 0xb0], edx */ W32((u32)(r_eax+0xb0u), r_edx);
    /* 006e8968: mov dword ptr [ebx + 0x10c], edx */ W32((u32)(r_ebx+0x10cu), r_edx);
    /* 006e896e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e8971: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e8972: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e8973: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e8974: ret  */ FN_RET(0x006e88d0); r_esp += 4; return;
L_006e8975:; BB(0x006e8975);
    /* 006e8975: mov dword ptr [esi + 0x91c], edi */ W32((u32)(r_esi+0x91cu), r_edi);
    /* 006e897b: mov edx, dword ptr [0xaafdb8] */ r_edx = R32((u32)(0xaafdb8u));
    /* 006e8981: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8983: je 0x6e89b0 */ if (fZ) goto L_006e89b0;
L_006e8985:; BB(0x006e8985);
    /* 006e8985: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8988: jne 0x6e8995 */ if (!fZ) goto L_006e8995;
L_006e898a:; BB(0x006e898a);
    /* 006e898a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e898c: mov ecx, esi */ r_ecx = r_esi;
    /* 006e898e: call 0x692398 */ r_esp -= 4; W32(r_esp, 0x6e8993u); f_00692398();
    /* 006e8993: jmp 0x6e89b9 */ goto L_006e89b9;
L_006e8995:; BB(0x006e8995);
    /* 006e8995: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8998: jne 0x6e89a5 */ if (!fZ) goto L_006e89a5;
L_006e899a:; BB(0x006e899a);
    /* 006e899a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e899c: mov ecx, esi */ r_ecx = r_esi;
    /* 006e899e: call 0x692398 */ r_esp -= 4; W32(r_esp, 0x6e89a3u); f_00692398();
    /* 006e89a3: jmp 0x6e89b9 */ goto L_006e89b9;
L_006e89a5:; BB(0x006e89a5);
    /* 006e89a5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e89a7: mov ecx, esi */ r_ecx = r_esi;
    /* 006e89a9: call 0x692398 */ r_esp -= 4; W32(r_esp, 0x6e89aeu); f_00692398();
    /* 006e89ae: jmp 0x6e89b9 */ goto L_006e89b9;
L_006e89b0:; BB(0x006e89b0);
    /* 006e89b0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e89b2: mov ecx, esi */ r_ecx = r_esi;
    /* 006e89b4: call 0x692398 */ r_esp -= 4; W32(r_esp, 0x6e89b9u); f_00692398();
L_006e89b9:; BB(0x006e89b9);
    /* 006e89b9: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_006e89bb:; BB(0x006e89bb);
    /* 006e89bb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e89bc: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6e89c1u); f_0068d5a8();
    /* 006e89c1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e89c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e89c4: je 0x6e8a16 */ if (fZ) goto L_006e8a16;
L_006e89c6:; BB(0x006e89c6);
    /* 006e89c6: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 006e89cd: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e89d0: jne 0x6e8a16 */ if (!fZ) goto L_006e8a16;
L_006e89d2:; BB(0x006e89d2);
    /* 006e89d2: mov dword ptr [eax + 0x91c], edi */ W32((u32)(r_eax+0x91cu), r_edi);
    /* 006e89d8: mov edx, dword ptr [0xaafdb8] */ r_edx = R32((u32)(0xaafdb8u));
    /* 006e89de: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e89e0: je 0x6e8a0d */ if (fZ) goto L_006e8a0d;
L_006e89e2:; BB(0x006e89e2);
    /* 006e89e2: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e89e5: jne 0x6e89f2 */ if (!fZ) goto L_006e89f2;
L_006e89e7:; BB(0x006e89e7);
    /* 006e89e7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e89e9: mov ecx, esi */ r_ecx = r_esi;
    /* 006e89eb: call 0x692398 */ r_esp -= 4; W32(r_esp, 0x6e89f0u); f_00692398();
    /* 006e89f0: jmp 0x6e8a16 */ goto L_006e8a16;
L_006e89f2:; BB(0x006e89f2);
    /* 006e89f2: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e89f5: jne 0x6e8a02 */ if (!fZ) goto L_006e8a02;
L_006e89f7:; BB(0x006e89f7);
    /* 006e89f7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e89f9: mov ecx, esi */ r_ecx = r_esi;
    /* 006e89fb: call 0x692398 */ r_esp -= 4; W32(r_esp, 0x6e8a00u); f_00692398();
    /* 006e8a00: jmp 0x6e8a16 */ goto L_006e8a16;
L_006e8a02:; BB(0x006e8a02);
    /* 006e8a02: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8a04: mov ecx, esi */ r_ecx = r_esi;
    /* 006e8a06: call 0x692398 */ r_esp -= 4; W32(r_esp, 0x6e8a0bu); f_00692398();
    /* 006e8a0b: jmp 0x6e8a16 */ goto L_006e8a16;
L_006e8a0d:; BB(0x006e8a0d);
    /* 006e8a0d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8a0f: mov ecx, esi */ r_ecx = r_esi;
    /* 006e8a11: call 0x692398 */ r_esp -= 4; W32(r_esp, 0x6e8a16u); f_00692398();
L_006e8a16:; BB(0x006e8a16);
    /* 006e8a16: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006e8a19: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e8a1c: jl 0x6e89bb */ if ((fS!=fO)) goto L_006e89bb;
L_006e8a1e:; BB(0x006e8a1e);
    /* 006e8a1e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8a20: call 0x80c2a4 */ r_esp -= 4; W32(r_esp, 0x6e8a25u); f_0080c2a4();
    /* 006e8a25: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e8a26: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e8a27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8a29: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 006e8a2e: call 0x815590 */ r_esp -= 4; W32(r_esp, 0x6e8a33u); f_00815590();
    /* 006e8a33: call 0x7a6114 */ r_esp -= 4; W32(r_esp, 0x6e8a38u); f_007a6114();
    /* 006e8a38: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e8a3b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e8a3c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e8a3d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e8a3e: ret  */ FN_RET(0x006e88d0); r_esp += 4; return;
L_006e8a3f:; BB(0x006e8a3f);
    /* 006e8a3f: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8a42: jne 0x6e8a76 */ if (!fZ) goto L_006e8a76;
L_006e8a44:; BB(0x006e8a44);
    /* 006e8a44: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006e8a48: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e8a4d: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006e8a51: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e8a54: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e8a55: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e8a56: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e8a57: ret  */ FN_RET(0x006e88d0); r_esp += 4; return;
L_006e8a58:; BB(0x006e8a58);
    /* 006e8a58: mov eax, dword ptr [ebx + 0x10c] */ r_eax = R32((u32)(r_ebx+0x10cu));
    /* 006e8a5e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e8a61: mov dword ptr [ebx + 0x10c], eax */ W32((u32)(r_ebx+0x10cu), r_eax);
    /* 006e8a67: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e8a6a: jle 0x6e8a76 */ if ((fZ||fS!=fO)) goto L_006e8a76;
L_006e8a6c:; BB(0x006e8a6c);
    /* 006e8a6c: mov dword ptr [ebx + 0x108], 3 */ W32((u32)(r_ebx+0x108u), 0x3u);
L_006e8a76:; BB(0x006e8a76);
    /* 006e8a76: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e8a79: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e8a7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e8a7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e8a7c: ret  */ FN_RET(0x006e88d0); r_esp += 4; return;
L_006e8a7d:; BB(0x006e8a7d);
    /* 006e8a7d: movzx edx, word ptr [ebx + 0xb4] */ r_edx = (u32)R16((u32)(r_ebx+0xb4u));
    /* 006e8a84: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e8a87: jge 0x6e8a90 */ if ((fS==fO)) goto L_006e8a90;
L_006e8a89:; BB(0x006e8a89);
    /* 006e8a89: add byte ptr [edx + 0xa96760], 1 */ { u32 ad = (u32)(r_edx+0xa96760u);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_006e8a90:; BB(0x006e8a90);
    /* 006e8a90: movsx edi, word ptr [ebx + 0xf4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0xf4u));
    /* 006e8a97: movzx edx, word ptr [ebx + 0xf6] */ r_edx = (u32)R16((u32)(r_ebx+0xf6u));
    /* 006e8a9e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e8a9f: lea esi, [ebx + 0xfc] */ r_esi = (u32)(r_ebx+0xfcu);
    /* 006e8aa5: add eax, 0x904 */ {  u32 a = r_eax; u32 b = 0x904u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e8aaa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e8aab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e8aac: mov ecx, eax */ r_ecx = r_eax;
    /* 006e8aae: call 0x6e9104 */ r_esp -= 4; W32(r_esp, 0x6e8ab3u); f_006e9104();
    /* 006e8ab3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8ab5: je 0x6e8acb */ if (fZ) goto L_006e8acb;
L_006e8ab7:; BB(0x006e8ab7);
    /* 006e8ab7: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006e8abb: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e8ac0: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006e8ac4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e8ac7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e8ac8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e8ac9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e8aca: ret  */ FN_RET(0x006e88d0); r_esp += 4; return;
L_006e8acb:; BB(0x006e8acb);
    /* 006e8acb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e8acd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e8ace: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e8acf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e8ad0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e8ad1: push 0xa0 */ { u32 v = 0xa0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8ad6: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x6e8adbu); f_008144b0();
    /* 006e8adb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e8ade: mov eax, dword ptr [ebx + 0xf0] */ r_eax = R32((u32)(r_ebx+0xf0u));
    /* 006e8ae4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8ae6: je 0x6e8c8f */ if (fZ) goto L_006e8c8f;
L_006e8aec:; BB(0x006e8aec);
    /* 006e8aec: movzx eax, word ptr [ebx + 0xf6] */ r_eax = (u32)R16((u32)(r_ebx+0xf6u));
    /* 006e8af3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e8af4: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6e8af9u); f_0068d5a8();
    /* 006e8af9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006e8afa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8afc: je 0x6e8a76 */ if (fZ) goto L_006e8a76;
L_006e8b02:; BB(0x006e8b02);
    /* 006e8b02: mov eax, dword ptr [ebx + 0xf0] */ r_eax = R32((u32)(r_ebx+0xf0u));
    /* 006e8b08: mov edx, dword ptr [eax + 0xb0] */ r_edx = R32((u32)(r_eax+0xb0u));
    /* 006e8b0e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8b10: je 0x6e8a76 */ if (fZ) goto L_006e8a76;
L_006e8b16:; BB(0x006e8b16);
    /* 006e8b16: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8b18: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e8b19: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8b1e: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x6e8b23u); f_007083d4();
    /* 006e8b23: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e8b26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8b28: je 0x6e8a76 */ if (fZ) goto L_006e8a76;
L_006e8b2e:; BB(0x006e8b2e);
    /* 006e8b2e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006e8b31: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8b36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e8b37: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e8b38: call 0x6ea73c */ r_esp -= 4; W32(r_esp, 0x6e8b3du); f_006ea73c();
    /* 006e8b3d: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 006e8b41: push 0xb3 */ { u32 v = 0xb3u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8b46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e8b47: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6e8b4cu); f_0050b510();
    /* 006e8b4c: movzx eax, word ptr [ebx + 0xf6] */ r_eax = (u32)R16((u32)(r_ebx+0xf6u));
    /* 006e8b53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e8b54: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6e8b59u); f_0068d5a8();
    /* 006e8b59: mov esi, eax */ r_esi = r_eax;
    /* 006e8b5b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e8b5e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8b60: je 0x6e8b80 */ if (fZ) goto L_006e8b80;
L_006e8b62:; BB(0x006e8b62);
    /* 006e8b62: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006e8b64: mov ecx, esi */ r_ecx = r_esi;
    /* 006e8b66: call 0x6854a8 */ r_esp -= 4; W32(r_esp, 0x6e8b6bu); f_006854a8();
    /* 006e8b6b: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006e8b6e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e8b70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e8b71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e8b72: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e8b73: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8b78: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e8b7du); f_00814298();
    /* 006e8b7d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006e8b80:; BB(0x006e8b80);
    /* 006e8b80: call 0x717f74 */ r_esp -= 4; W32(r_esp, 0x6e8b85u); f_00717f74();
    /* 006e8b85: mov dword ptr [ebx + 0x108], 2 */ W32((u32)(r_ebx+0x108u), 0x2u);
    /* 006e8b8f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e8b92: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e8b93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e8b94: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e8b95: ret  */ FN_RET(0x006e88d0); r_esp += 4; return;
L_006e8b96:; BB(0x006e8b96);
    /* 006e8b96: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 006e8b9a: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8ba0: je 0x6e8a76 */ if (fZ) goto L_006e8a76;
L_006e8ba6:; BB(0x006e8ba6);
    /* 006e8ba6: cmp edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006e8ba9: jbe 0x6e8bbc */ if ((fC||fZ)) goto L_006e8bbc;
L_006e8bab:; BB(0x006e8bab);
    /* 006e8bab: mov dword ptr [ebx + 0x108], 4 */ W32((u32)(r_ebx+0x108u), 0x4u);
    /* 006e8bb5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e8bb8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e8bb9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e8bba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e8bbb: ret  */ FN_RET(0x006e88d0); r_esp += 4; return;
L_006e8bbc:; BB(0x006e8bbc);
    /* 006e8bbc: mov edx, dword ptr [ebx + 0xec] */ r_edx = R32((u32)(r_ebx+0xecu));
    /* 006e8bc2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8bc4: je 0x6e8c59 */ if (fZ) goto L_006e8c59;
L_006e8bca:; BB(0x006e8bca);
    /* 006e8bca: mov edx, dword ptr [edx + 8] */ r_edx = R32((u32)(r_edx+0x8u));
    /* 006e8bcd: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8bd0: jne 0x6e8bd9 */ if (!fZ) goto L_006e8bd9;
L_006e8bd2:; BB(0x006e8bd2);
    /* 006e8bd2: mov edx, 1 */ r_edx = 0x1u;
    /* 006e8bd7: jmp 0x6e8bdb */ goto L_006e8bdb;
L_006e8bd9:; BB(0x006e8bd9);
    /* 006e8bd9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006e8bdb:; BB(0x006e8bdb);
    /* 006e8bdb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8bdd: je 0x6e8a76 */ if (fZ) goto L_006e8a76;
L_006e8be3:; BB(0x006e8be3);
    /* 006e8be3: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006e8be6: mov dword ptr [ebx + 0xfc], edx */ W32((u32)(r_ebx+0xfcu), r_edx);
    /* 006e8bec: mov esi, dword ptr [eax + 0x3c] */ r_esi = R32((u32)(r_eax+0x3cu));
    /* 006e8bef: movzx edx, word ptr [ebx + 0xf6] */ r_edx = (u32)R16((u32)(r_ebx+0xf6u));
    /* 006e8bf6: mov dword ptr [ebx + 0x100], esi */ W32((u32)(r_ebx+0x100u), r_esi);
    /* 006e8bfc: mov edi, dword ptr [eax + 0x40] */ r_edi = R32((u32)(r_eax+0x40u));
    /* 006e8bff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e8c00: mov dword ptr [ebx + 0x104], edi */ W32((u32)(r_ebx+0x104u), r_edi);
    /* 006e8c06: movsx edi, word ptr [ebx + 0xf4] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+0xf4u));
    /* 006e8c0d: add eax, 0x904 */ {  u32 a = r_eax; u32 b = 0x904u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006e8c12: lea esi, [ebx + 0xfc] */ r_esi = (u32)(r_ebx+0xfcu);
    /* 006e8c18: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e8c19: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e8c1a: mov ecx, eax */ r_ecx = r_eax;
    /* 006e8c1c: call 0x6e9104 */ r_esp -= 4; W32(r_esp, 0x6e8c21u); f_006e9104();
    /* 006e8c21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8c23: jne 0x6e8c4b */ if (!fZ) goto L_006e8c4b;
L_006e8c25:; BB(0x006e8c25);
    /* 006e8c25: movzx eax, word ptr [ebx + 0xb4] */ r_eax = (u32)R16((u32)(r_ebx+0xb4u));
    /* 006e8c2c: movsx edx, byte ptr [eax + 0xa96760] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0xa96760u));
    /* 006e8c33: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006e8c35: jle 0x6e8c4b */ if ((fZ||fS!=fO)) goto L_006e8c4b;
L_006e8c37:; BB(0x006e8c37);
    /* 006e8c37: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006e8c3b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e8c40: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006e8c44: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e8c47: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e8c48: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e8c49: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e8c4a: ret  */ FN_RET(0x006e88d0); r_esp += 4; return;
L_006e8c4b:; BB(0x006e8c4b);
    /* 006e8c4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e8c4d: call 0x6e8ca4 */ r_esp -= 4; W32(r_esp, 0x6e8c52u); f_006e8ca4();
    /* 006e8c52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e8c55: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e8c56: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e8c57: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e8c58: ret  */ FN_RET(0x006e88d0); r_esp += 4; return;
L_006e8c59:; BB(0x006e8c59);
    /* 006e8c59: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006e8c5b: call 0x6e8ca4 */ r_esp -= 4; W32(r_esp, 0x6e8c60u); f_006e8ca4();
    /* 006e8c60: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e8c63: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e8c64: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e8c65: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e8c66: ret  */ FN_RET(0x006e88d0); r_esp += 4; return;
L_006e8c67:; BB(0x006e8c67);
    /* 006e8c67: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006e8c6b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e8c70: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006e8c74: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e8c77: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e8c78: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e8c79: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e8c7a: ret  */ FN_RET(0x006e88d0); r_esp += 4; return;
L_006e8c7b:; BB(0x006e8c7b);
    /* 006e8c7b: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006e8c7f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e8c84: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006e8c88: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e8c8b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e8c8c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e8c8d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e8c8e: ret  */ FN_RET(0x006e88d0); r_esp += 4; return;
L_006e8c8f:; BB(0x006e8c8f);
    /* 006e8c8f: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006e8c93: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e8c98: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006e8c9c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e8c9f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e8ca0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e8ca1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e8ca2: ret  */ FN_RET(0x006e88d0); r_esp += 4; return;
}

void f_006e8b1b(void)
{
    FN_ENTER(0x006e8b1b);
    goto L_006e8b1b;
L_006e8a76:; BB(0x006e8a76);
    /* 006e8a76: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e8a79: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e8a7a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e8a7b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e8a7c: ret  */ FN_RET(0x006e8b1b); r_esp += 4; return;
L_006e8b1b:; BB(0x006e8b1b);
    /* 006e8b1b: add byte ptr [eax], ah */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 006e8b1d: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e8b1e: call 0x7083d4 */ r_esp -= 4; W32(r_esp, 0x6e8b23u); f_007083d4();
    /* 006e8b23: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e8b26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8b28: je 0x6e8a76 */ if (fZ) goto L_006e8a76;
L_006e8b2e:; BB(0x006e8b2e);
    /* 006e8b2e: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006e8b31: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8b36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e8b37: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e8b38: call 0x6ea73c */ r_esp -= 4; W32(r_esp, 0x6e8b3du); f_006ea73c();
    /* 006e8b3d: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 006e8b41: push 0xb3 */ { u32 v = 0xb3u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8b46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e8b47: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x6e8b4cu); f_0050b510();
    /* 006e8b4c: movzx eax, word ptr [ebx + 0xf6] */ r_eax = (u32)R16((u32)(r_ebx+0xf6u));
    /* 006e8b53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e8b54: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6e8b59u); f_0068d5a8();
    /* 006e8b59: mov esi, eax */ r_esi = r_eax;
    /* 006e8b5b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e8b5e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8b60: je 0x6e8b80 */ if (fZ) goto L_006e8b80;
L_006e8b62:; BB(0x006e8b62);
    /* 006e8b62: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 006e8b64: mov ecx, esi */ r_ecx = r_esi;
    /* 006e8b66: call 0x6854a8 */ r_esp -= 4; W32(r_esp, 0x6e8b6bu); f_006854a8();
    /* 006e8b6b: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006e8b6e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e8b70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e8b71: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e8b72: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006e8b73: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8b78: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6e8b7du); f_00814298();
    /* 006e8b7d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006e8b80:; BB(0x006e8b80);
    /* 006e8b80: call 0x717f74 */ r_esp -= 4; W32(r_esp, 0x6e8b85u); f_00717f74();
    /* 006e8b85: mov dword ptr [ebx + 0x108], 2 */ W32((u32)(r_ebx+0x108u), 0x2u);
    /* 006e8b8f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006e8b92: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006e8b93: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006e8b94: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006e8b95: ret  */ FN_RET(0x006e8b1b); r_esp += 4; return;
}

void f_006e8ca4(void) /* sub_6E8CA4 */
{
    FN_ENTER(0x006e8ca4);
    /* 006e8ca4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006e8ca5: mov ebp, esp */ r_ebp = r_esp;
    /* 006e8ca7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006e8ca9: push 0x8ef328 */ { u32 v = 0x8ef328u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8cae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006e8cb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e8cb5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006e8cbc: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006e8cbf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006e8cc2: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 006e8cc5: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 006e8cc8: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 006e8ccb: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 006e8cce: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 006e8cd2: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 006e8cd9: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 006e8cdc: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 006e8cdf: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8ce1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e8ce6u); f_005caba4();
    /* 006e8ce6: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006e8ce9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e8cec: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 006e8cef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8cf1: je 0x6e9061 */ if (fZ) goto L_006e9061;
L_006e8cf7:; BB(0x006e8cf7);
    /* 006e8cf7: mov dword ptr [ebp - 0x5c], 1 */ W32((u32)(r_ebp+0xffffffa4u), 0x1u);
    /* 006e8cfe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006e8d05: mov ecx, eax */ r_ecx = r_eax;
    /* 006e8d07: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e8d0a: mov ebx, dword ptr [0xaca344] */ r_ebx = R32((u32)(0xaca344u));
    /* 006e8d10: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 006e8d13: lea edx, [eax + 0xfc] */ r_edx = (u32)(r_eax+0xfcu);
    /* 006e8d19: mov dword ptr [ebp - 0x78], edx */ W32((u32)(r_ebp+0xffffff88u), r_edx);
    /* 006e8d1c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e8d1d: mov dword ptr [ebp - 0x70], ebx */ W32((u32)(r_ebp+0xffffff90u), r_ebx);
    /* 006e8d20: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6e8d25u); f_008193cc();
    /* 006e8d25: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006e8d2c: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 006e8d2f: mov dword ptr [esi], 0xb3db30 */ W32((u32)(r_esi), 0xb3db30u);
    /* 006e8d35: lea edi, [esi + 0x2c] */ r_edi = (u32)(r_esi+0x2cu);
    /* 006e8d38: mov ecx, dword ptr [ebp - 0x78] */ r_ecx = R32((u32)(r_ebp+0xffffff88u));
    /* 006e8d3b: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8d40: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e8d41: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006e8d43: mov dword ptr [esi + 0x2c], eax */ W32((u32)(r_esi+0x2cu), r_eax);
    /* 006e8d46: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006e8d49: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 006e8d4c: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 006e8d4f: mov dword ptr [esi + 0x34], ebx */ W32((u32)(r_esi+0x34u), r_ebx);
    /* 006e8d52: call 0x780630 */ r_esp -= 4; W32(r_esp, 0x6e8d57u); f_00780630();
    /* 006e8d57: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e8d5a: mov edx, dword ptr [esi + 0x2c] */ r_edx = R32((u32)(r_esi+0x2cu));
    /* 006e8d5d: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 006e8d60: mov ebx, dword ptr [esi + 0x34] */ r_ebx = R32((u32)(r_esi+0x34u));
    /* 006e8d63: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 006e8d66: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 006e8d69: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
    /* 006e8d6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8d6e: je 0x6e8d84 */ if (fZ) goto L_006e8d84;
L_006e8d70:; BB(0x006e8d70);
    /* 006e8d70: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 006e8d73: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006e8d75: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 006e8d78: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 006e8d7b: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 006e8d7e: mov ebx, dword ptr [ecx + 8] */ r_ebx = R32((u32)(r_ecx+0x8u));
    /* 006e8d81: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
L_006e8d84:; BB(0x006e8d84);
    /* 006e8d84: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e8d87: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006e8d89: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006e8d8c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006e8d8e: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 006e8d91: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e8d93: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
L_006e8d96:; BB(0x006e8d96);
    /* 006e8d96: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8d99: jne 0x6e8df4 */ if (!fZ) goto L_006e8df4;
L_006e8d9b:; BB(0x006e8d9b);
    /* 006e8d9b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e8d9e: fld dword ptr [0x96d960] */ FPUSH(R_F32((u32)(0x96d960u)));
    /* 006e8da4: fadd dword ptr [edx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x3cu));
    /* 006e8da7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e8daa: mov ebx, dword ptr [edx + 0x38] */ r_ebx = R32((u32)(r_edx+0x38u));
    /* 006e8dad: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 006e8db0: fstp dword ptr [ebp - 0x50] */ W_F32((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 006e8db3: mov dword ptr [ebp - 0x54], ebx */ W32((u32)(r_ebp+0xffffffacu), r_ebx);
    /* 006e8db6: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 006e8db9: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 006e8dbc: lea edi, [ebp - 0x54] */ r_edi = (u32)(r_ebp+0xffffffacu);
    /* 006e8dbf: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8dc1: push dword ptr [ecx + esi*4 + 0x96d800] */ { u32 v = R32((u32)(r_ecx+r_esi*4+0x96d800u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e8dc8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e8dc9: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x6e8dceu); f_0050981c();
    /* 006e8dce: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e8dd1: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e8dd4: mov dword ptr [edx + ebx*2 + 0x1c], eax */ W32((u32)(r_edx+r_ebx*2+0x1cu), r_eax);
    /* 006e8dd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8dda: je 0x6e8e33 */ if (fZ) goto L_006e8e33;
L_006e8ddc:; BB(0x006e8ddc);
    /* 006e8ddc: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e8ddf: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8de2: je 0x6e8e33 */ if (fZ) goto L_006e8e33;
L_006e8de4:; BB(0x006e8de4);
    /* 006e8de4: push dword ptr [edx*4 + 0x96d928] */ { u32 v = R32((u32)(r_edx*4+0x96d928u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e8deb: mov ecx, eax */ r_ecx = r_eax;
    /* 006e8ded: call 0x508ee4 */ r_esp -= 4; W32(r_esp, 0x6e8df2u); f_00508ee4();
    /* 006e8df2: jmp 0x6e8e33 */ goto L_006e8e33;
L_006e8df4:; BB(0x006e8df4);
    /* 006e8df4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e8df7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006e8dfa: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8dfc: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 006e8dff: lea ecx, [eax + 0x38] */ r_ecx = (u32)(r_eax+0x38u);
    /* 006e8e02: push dword ptr [edx + esi*4 + 0x96d800] */ { u32 v = R32((u32)(r_edx+r_esi*4+0x96d800u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e8e09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006e8e0a: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x6e8e0fu); f_0050981c();
    /* 006e8e0f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e8e12: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e8e15: mov dword ptr [edx + ebx*2 + 0x1c], eax */ W32((u32)(r_edx+r_ebx*2+0x1cu), r_eax);
    /* 006e8e19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8e1b: je 0x6e8e33 */ if (fZ) goto L_006e8e33;
L_006e8e1d:; BB(0x006e8e1d);
    /* 006e8e1d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e8e20: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8e23: je 0x6e8e33 */ if (fZ) goto L_006e8e33;
L_006e8e25:; BB(0x006e8e25);
    /* 006e8e25: push dword ptr [edx*4 + 0x96d928] */ { u32 v = R32((u32)(r_edx*4+0x96d928u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e8e2c: mov ecx, eax */ r_ecx = r_eax;
    /* 006e8e2e: call 0x508ee4 */ r_esp -= 4; W32(r_esp, 0x6e8e33u); f_00508ee4();
L_006e8e33:; BB(0x006e8e33);
    /* 006e8e33: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006e8e36: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006e8e39: jl 0x6e8d96 */ if ((fS!=fO)) goto L_006e8d96;
L_006e8e3f:; BB(0x006e8e3f);
    /* 006e8e3f: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e8e42: fld dword ptr [0x96d95c] */ FPUSH(R_F32((u32)(0x96d95cu)));
    /* 006e8e48: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 006e8e4b: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 006e8e4e: mov ebx, dword ptr [ecx + 0x34] */ r_ebx = R32((u32)(r_ecx+0x34u));
    /* 006e8e51: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 006e8e54: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 006e8e5b: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 006e8e5e: fadd dword ptr [ebp - 0x44] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffbcu));
    /* 006e8e61: fstp dword ptr [ebp - 0x44] */ W_F32((u32)(r_ebp+0xffffffbcu), ST(0)); FPOP();
    /* 006e8e64: mov dword ptr [ebp - 0x40], ebx */ W32((u32)(r_ebp+0xffffffc0u), r_ebx);
    /* 006e8e67: push 0x44 */ { u32 v = 0x44u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8e69: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e8e6eu); f_005caba4();
    /* 006e8e6e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e8e71: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e8e74: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 006e8e77: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8e79: je 0x6e9057 */ if (fZ) goto L_006e9057;
L_006e8e7f:; BB(0x006e8e7f);
    /* 006e8e7f: mov dword ptr [ebp - 0x3c], 1 */ W32((u32)(r_ebp+0xffffffc4u), 0x1u);
    /* 006e8e86: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006e8e8d: mov ecx, eax */ r_ecx = r_eax;
    /* 006e8e8f: lea edx, [ebp - 0x48] */ r_edx = (u32)(r_ebp+0xffffffb8u);
    /* 006e8e92: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e8e94: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e8e95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e8e96: push dword ptr [0xaca330] */ { u32 v = R32((u32)(0xaca330u)); r_esp -= 4; W32(r_esp, v); }
    /* 006e8e9c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8e9e: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 006e8ea0: push 0x3ff33333 */ { u32 v = 0x3ff33333u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8ea5: push 0x3ff33333 */ { u32 v = 0x3ff33333u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8eaa: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e8eab: call 0x503450 */ r_esp -= 4; W32(r_esp, 0x6e8eb0u); f_00503450();
    /* 006e8eb0: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
L_006e8eb7:; BB(0x006e8eb7);
    /* 006e8eb7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e8eba: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006e8ebd: mov dword ptr [ebp - 0x5c], 0 */ W32((u32)(r_ebp+0xffffffa4u), 0x0u);
    /* 006e8ec4: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
L_006e8ec7:; BB(0x006e8ec7);
    /* 006e8ec7: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e8eca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006e8ecd: mov dword ptr [edx + 0xf8], eax */ W32((u32)(r_edx+0xf8u), r_eax);
    /* 006e8ed3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e8eda: mov eax, edx */ r_eax = r_edx;
    /* 006e8edc: mov esi, dword ptr [eax + 0xf0] */ r_esi = R32((u32)(r_eax+0xf0u));
    /* 006e8ee2: mov dword ptr [eax + 0x108], 1 */ W32((u32)(r_eax+0x108u), 0x1u);
    /* 006e8eec: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8eee: je 0x6e8f8a */ if (fZ) goto L_006e8f8a;
L_006e8ef4:; BB(0x006e8ef4);
    /* 006e8ef4: mov ecx, eax */ r_ecx = r_eax;
    /* 006e8ef6: mov eax, dword ptr [ecx + 0xfc] */ r_eax = R32((u32)(r_ecx+0xfcu));
    /* 006e8efc: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 006e8eff: mov edx, dword ptr [ecx + 0x100] */ r_edx = R32((u32)(r_ecx+0x100u));
    /* 006e8f05: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 006e8f08: mov ebx, dword ptr [ecx + 0x104] */ r_ebx = R32((u32)(r_ecx+0x104u));
    /* 006e8f0e: mov dword ptr [esi + 0x40], ebx */ W32((u32)(r_esi+0x40u), r_ebx);
L_006e8f11:; BB(0x006e8f11);
    /* 006e8f11: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e8f14: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006e8f17: movzx ebx, word ptr [ecx + 0x1c] */ r_ebx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006e8f1b: movzx edx, word ptr [eax + 0xf6] */ r_edx = (u32)R16((u32)(r_eax+0xf6u));
    /* 006e8f22: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006e8f24: jne 0x6e8f73 */ if (!fZ) goto L_006e8f73;
L_006e8f26:; BB(0x006e8f26);
    /* 006e8f26: mov eax, dword ptr [0xaafca0] */ r_eax = R32((u32)(0xaafca0u));
    /* 006e8f2b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e8f2e: mov word ptr [edx + 0xf4], ax */ W16((u32)(r_edx+0xf4u), (u16)r_eax);
    /* 006e8f35: movzx ebx, word ptr [ecx + 0x1c] */ r_ebx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006e8f39: call 0x7ba980 */ r_esp -= 4; W32(r_esp, 0x6e8f3eu); f_007ba980();
    /* 006e8f3e: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e8f41: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 006e8f44: movsx edx, word ptr [esi + 0xf4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0xf4u));
    /* 006e8f4b: add ecx, 0x904 */ {  u32 a = r_ecx; u32 b = 0x904u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e8f51: lea edi, [esi + 0xfc] */ r_edi = (u32)(r_esi+0xfcu);
    /* 006e8f57: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006e8f5a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006e8f5b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006e8f5c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006e8f5d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e8f5e: call 0x6e906c */ r_esp -= 4; W32(r_esp, 0x6e8f63u); f_006e906c();
    /* 006e8f63: mov eax, esi */ r_eax = r_esi;
    /* 006e8f65: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006e8f68: add ecx, 0x904 */ {  u32 a = r_ecx; u32 b = 0x904u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006e8f6e: call 0x6e90b8 */ r_esp -= 4; W32(r_esp, 0x6e8f73u); f_006e90b8();
L_006e8f73:; BB(0x006e8f73);
    /* 006e8f73: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006e8f76: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006e8f79: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006e8f7c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006e8f7f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006e8f86: mov esp, ebp */ r_esp = r_ebp;
    /* 006e8f88: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006e8f89: ret  */ FN_RET(0x006e8ca4); r_esp += 4; return;
L_006e8f8a:; BB(0x006e8f8a);
    /* 006e8f8a: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006e8f91: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8f96: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6e8f9bu); f_005caba4();
    /* 006e8f9b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e8f9e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006e8fa1: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006e8fa4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006e8fa6: je 0x6e9050 */ if (fZ) goto L_006e9050;
L_006e8fac:; BB(0x006e8fac);
    /* 006e8fac: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006e8fb3: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 006e8fba: mov ecx, eax */ r_ecx = r_eax;
    /* 006e8fbc: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e8fbf: mov ebx, dword ptr [0xaca350] */ r_ebx = R32((u32)(0xaca350u));
    /* 006e8fc5: mov dword ptr [ebp - 0x6c], ecx */ W32((u32)(r_ebp+0xffffff94u), r_ecx);
    /* 006e8fc8: lea edx, [eax + 0xfc] */ r_edx = (u32)(r_eax+0xfcu);
    /* 006e8fce: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 006e8fd1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006e8fd2: mov dword ptr [ebp - 0x64], ebx */ W32((u32)(r_ebp+0xffffff9cu), r_ebx);
    /* 006e8fd5: call 0x7b4b48 */ r_esp -= 4; W32(r_esp, 0x6e8fdau); f_007b4b48();
    /* 006e8fda: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 006e8fe1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e8fe4: mov dword ptr [ecx], 0xb3dae0 */ W32((u32)(r_ecx), 0xb3dae0u);
    /* 006e8fea: mov ebx, dword ptr [ebp - 0x68] */ r_ebx = R32((u32)(r_ebp+0xffffff98u));
    /* 006e8fed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006e8fef: push 0x9cf95c */ { u32 v = 0x9cf95cu; r_esp -= 4; W32(r_esp, v); }
    /* 006e8ff4: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006e8ff6: mov dword ptr [ecx + 0x38], eax */ W32((u32)(r_ecx+0x38u), r_eax);
    /* 006e8ff9: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 006e8ffc: mov dword ptr [ecx + 0x3c], edx */ W32((u32)(r_ecx+0x3cu), r_edx);
    /* 006e8fff: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 006e9002: mov dword ptr [ecx + 0x40], esi */ W32((u32)(r_ecx+0x40u), r_esi);
    /* 006e9005: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x6e900au); f_007b9a88();
    /* 006e900a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e900d: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 006e9010: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006e9015: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 006e9018: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x6e901du); f_007b4f54();
    /* 006e901d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006e9020: mov dword ptr [eax + 0x98], 6 */ W32((u32)(r_eax+0x98u), 0x6u);
    /* 006e902a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006e902c: mov dword ptr [eax + 0xb0], edx */ W32((u32)(r_eax+0xb0u), r_edx);
    /* 006e9032: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 006e9035: mov dword ptr [eax + 0xac], edx */ W32((u32)(r_eax+0xacu), r_edx);
L_006e903b:; BB(0x006e903b);
    /* 006e903b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006e903e: mov dword ptr [edx + 0xf0], eax */ W32((u32)(r_edx+0xf0u), r_eax);
    /* 006e9044: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006e904b: jmp 0x6e8f11 */ goto L_006e8f11;
L_006e9050:; BB(0x006e9050);
    /* 006e9050: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e9052: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e9055: jmp 0x6e903b */ goto L_006e903b;
L_006e9057:; BB(0x006e9057);
    /* 006e9057: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e9059: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006e905c: jmp 0x6e8eb7 */ goto L_006e8eb7;
L_006e9061:; BB(0x006e9061);
    /* 006e9061: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006e9063: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006e9066: jmp 0x6e8ec7 */ goto L_006e8ec7;
}

