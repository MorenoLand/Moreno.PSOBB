#include "protos.h"

void f_00792220(void) /* sub_792220 */
{
    FN_ENTER(0x00792220);
    /* 00792220: mov edx, dword ptr [0xa9ccec] */ r_edx = R32((u32)(0xa9ccecu));
    /* 00792226: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792228: je 0x792241 */ if (fZ) goto L_00792241;
L_0079222a:; BB(0x0079222a);
    /* 0079222a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0079222e: mov dword ptr [0xa9ccec], 0 */ W32((u32)(0xa9ccecu), 0x0u);
    /* 00792238: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079223d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00792241:; BB(0x00792241);
    /* 00792241: ret  */ FN_RET(0x00792220); r_esp += 4; return;
}

void f_00792244(void) /* sub_792244 */
{
    FN_ENTER(0x00792244);
    /* 00792244: mov eax, dword ptr [0xa9ccec] */ r_eax = R32((u32)(0xa9ccecu));
    /* 00792249: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079224b: je 0x79225f */ if (fZ) goto L_0079225f;
L_0079224d:; BB(0x0079224d);
    /* 0079224d: movsx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x1cu));
    /* 00792251: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00792254: jne 0x79225c */ if (!fZ) goto L_0079225c;
L_00792256:; BB(0x00792256);
    /* 00792256: mov eax, 1 */ r_eax = 0x1u;
    /* 0079225b: ret  */ FN_RET(0x00792244); r_esp += 4; return;
L_0079225c:; BB(0x0079225c);
    /* 0079225c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079225e: ret  */ FN_RET(0x00792244); r_esp += 4; return;
L_0079225f:; BB(0x0079225f);
    /* 0079225f: mov eax, 1 */ r_eax = 0x1u;
    /* 00792264: ret  */ FN_RET(0x00792244); r_esp += 4; return;
}

void f_00792268(void) /* sub_792268 */
{
    FN_ENTER(0x00792268);
    /* 00792268: mov eax, dword ptr [0xa9ccf0] */ r_eax = R32((u32)(0xa9ccf0u));
    /* 0079226d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079226f: je 0x792272 */ if (fZ) goto L_00792272;
L_00792271:; BB(0x00792271);
    /* 00792271: ret  */ FN_RET(0x00792268); r_esp += 4; return;
L_00792272:; BB(0x00792272);
    /* 00792272: call 0x792280 */ r_esp -= 4; W32(r_esp, 0x792277u); f_00792280();
    /* 00792277: mov dword ptr [0xa9ccf0], eax */ W32((u32)(0xa9ccf0u), r_eax);
    /* 0079227c: ret  */ FN_RET(0x00792268); r_esp += 4; return;
}

void f_00792280(void) /* sub_792280 */
{
    FN_ENTER(0x00792280);
    /* 00792280: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00792281: mov ebp, esp */ r_ebp = r_esp;
    /* 00792283: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00792285: push 0x8f4f9c */ { u32 v = 0x8f4f9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0079228a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00792290: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00792291: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00792298: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079229b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0079229e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007922a1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007922a4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007922a7: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 007922a9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007922b0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7922b5u); f_005caba4();
    /* 007922b5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007922b6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007922b9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007922bb: je 0x7922f1 */ if (fZ) goto L_007922f1;
L_007922bd:; BB(0x007922bd);
    /* 007922bd: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007922c4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007922cb: push dword ptr [0xaca338] */ { u32 v = R32((u32)(0xaca338u)); r_esp -= 4; W32(r_esp, v); }
    /* 007922d1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007922d4: call 0x7922f8 */ r_esp -= 4; W32(r_esp, 0x7922d9u); f_007922f8();
    /* 007922d9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007922dc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007922e3:; BB(0x007922e3);
    /* 007922e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007922e6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007922ed: mov esp, ebp */ r_esp = r_ebp;
    /* 007922ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007922f0: ret  */ FN_RET(0x00792280); r_esp += 4; return;
L_007922f1:; BB(0x007922f1);
    /* 007922f1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007922f3: jmp 0x7922e3 */ goto L_007922e3;
}

void f_007922d4(void)
{
    FN_ENTER(0x007922d4);
    /* 007922d4: call 0x7922f8 */ r_esp -= 4; W32(r_esp, 0x7922d9u); f_007922f8();
    /* 007922d9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007922dc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007922e3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007922e6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007922ed: mov esp, ebp */ r_esp = r_ebp;
    /* 007922ef: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007922f0: ret  */ FN_RET(0x007922d4); r_esp += 4; return;
}

void f_007922f8(void) /* sub_7922F8 */
{
    FN_ENTER(0x007922f8);
    /* 007922f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007922f9: mov ebp, esp */ r_ebp = r_esp;
    /* 007922fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007922fd: push 0x8f4fd8 */ { u32 v = 0x8f4fd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00792302: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00792308: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00792309: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00792310: sub esp, 0xac */ {  u32 a = r_esp; u32 b = 0xacu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00792316: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00792319: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0079231c: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0079231f: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00792322: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00792325: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00792328: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x79232du); f_008193cc();
    /* 0079232d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00792334: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00792337: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 0079233d: mov dword ptr [edx], 0xb45618 */ W32((u32)(r_edx), 0xb45618u);
    /* 00792343: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00792345: mov byte ptr [edx + 0x1c], al */ W8((u32)(r_edx+0x1cu), (u8)r_eax);
    /* 00792348: mov byte ptr [edx + 0x1d], al */ W8((u32)(r_edx+0x1du), (u8)r_eax);
    /* 0079234b: mov byte ptr [edx + 0x1e], al */ W8((u32)(r_edx+0x1eu), (u8)r_eax);
    /* 0079234e: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00792351: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00792354: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00792357: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00792359: mov esi, 0xa9ccd4 */ r_esi = 0xa9ccd4u;
    /* 0079235e: mov dword ptr [esi], ebx */ W32((u32)(r_esi), r_ebx);
    /* 00792360: mov dword ptr [ebp - 0xb8], 0x42c80000 */ W32((u32)(r_ebp+0xffffff48u), 0x42c80000u);
    /* 0079236a: mov ebx, 0x43dc0000 */ r_ebx = 0x43dc0000u;
    /* 0079236f: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00792371: mov dword ptr [ebp - 0xb4], 0x42700000 */ W32((u32)(r_ebp+0xffffff4cu), 0x42700000u);
    /* 0079237b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079237d: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x792382u); f_00792fe8();
    /* 00792382: lea edx, [ebp - 0xb8] */ r_edx = (u32)(r_ebp+0xffffff48u);
    /* 00792388: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00792389: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0079238b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079238c: call 0x735460 */ r_esp -= 4; W32(r_esp, 0x792391u); f_00735460();
    /* 00792391: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00792394: push 0x43af0000 */ { u32 v = 0x43af0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00792399: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0079239c: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0079239f: movzx esi, word ptr [eax + 0x84] */ r_esi = (u32)R16((u32)(r_eax+0x84u));
    /* 007923a6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007923a7: or esi, 0xffff0100 */ {  u32 a = r_esi; u32 b = 0xffff0100u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 007923ad: mov word ptr [eax + 0x84], si */ W16((u32)(r_eax+0x84u), (u16)r_esi);
    /* 007923b4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007923b7: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 007923ba: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007923bd: movzx edi, word ptr [ecx + 0x84] */ r_edi = (u32)R16((u32)(r_ecx+0x84u));
    /* 007923c4: or edi, 0xffff0010 */ {  u32 a = r_edi; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edi = r;  }
    /* 007923ca: mov word ptr [ecx + 0x84], di */ W16((u32)(r_ecx+0x84u), (u16)r_edi);
    /* 007923d1: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 007923d4: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x7923d9u); f_007361d0();
    /* 007923d9: push 0x3df5c28f */ { u32 v = 0x3df5c28fu; r_esp -= 4; W32(r_esp, v); }
    /* 007923de: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007923e1: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 007923e4: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7923e9u); f_00712624();
    /* 007923e9: fld dword ptr [0x97bb00] */ FPUSH(R_F32((u32)(0x97bb00u)));
    /* 007923ef: fadd dword ptr [ebp - 0xb4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffff4cu));
    /* 007923f5: fadd dword ptr [0x97bb08] */ ST(0) = ST(0) + R_F32((u32)(0x97bb08u));
    /* 007923fb: fstp dword ptr [ebp - 0xb4] */ W_F32((u32)(r_ebp+0xffffff4cu), ST(0)); FPOP();
    /* 00792401: mov dword ptr [ebp - 0xb8], 0x41200000 */ W32((u32)(r_ebp+0xffffff48u), 0x41200000u);
    /* 0079240b: lea eax, [ebp - 0xb8] */ r_eax = (u32)(r_ebp+0xffffff48u);
    /* 00792411: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00792413: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00792414: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x792419u); f_00735708();
    /* 00792419: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079241c: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0079241f: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00792422: fld dword ptr [ebp - 0xb8] */ FPUSH(R_F32((u32)(r_ebp+0xffffff48u)));
    /* 00792428: fadd st(0) */ ST(0) = ST(0) + ST(0);
    /* 0079242a: fsubr dword ptr [0x97bb0c] */ ST(0) = R_F32((u32)(0x97bb0cu)) - ST(0);
    /* 00792430: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00792433: movzx ebx, word ptr [eax + 0x84] */ r_ebx = (u32)R16((u32)(r_eax+0x84u));
    /* 0079243a: or ebx, 0xffff0040 */ {  u32 a = r_ebx; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 00792440: mov word ptr [eax + 0x84], bx */ W16((u32)(r_eax+0x84u), (u16)r_ebx);
    /* 00792447: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079244a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0079244d: mov edi, dword ptr [eax + 0x28] */ r_edi = R32((u32)(r_eax+0x28u));
    /* 00792450: movzx esi, word ptr [edi + 0x84] */ r_esi = (u32)R16((u32)(r_edi+0x84u));
    /* 00792457: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0079245a: or esi, 0xffff8000 */ {  u32 a = r_esi; u32 b = 0xffff8000u; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00792460: mov dword ptr [esp + 4], 0x42200000 */ W32((u32)(r_esp+0x4u), 0x42200000u);
    /* 00792468: mov word ptr [edi + 0x84], si */ W16((u32)(r_edi+0x84u), (u16)r_esi);
    /* 0079246f: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 00792472: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00792479: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079247e: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00792485: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00792488: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0079248b: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00792492: or eax, 0xffff0100 */ {  u32 a = r_eax; u32 b = 0xffff0100u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00792497: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0079249e: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007924a1: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 007924a4: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x7924a9u); f_007361d0();
    /* 007924a9: push 0x3dcccccd */ { u32 v = 0x3dcccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 007924ae: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007924b1: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 007924b4: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7924b9u); f_00712624();
    /* 007924b9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007924bb: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_007924be:; BB(0x007924be);
    /* 007924be: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
    /* 007924c8: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 007924ca: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7924cfu); f_008581c5();
    /* 007924cf: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 007924d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007924d5: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 007924db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007924dd: je 0x79272a */ if (fZ) goto L_0079272a;
L_007924e3:; BB(0x007924e3);
    /* 007924e3: mov dword ptr [ebp - 0xb0], 1 */ W32((u32)(r_ebp+0xffffff50u), 0x1u);
    /* 007924ed: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007924f4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 007924f7: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 007924fa: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007924fc: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 007924ff: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00792501: lea ebx, [edx + edx] */ r_ebx = (u32)(r_edx+r_edx);
    /* 00792504: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00792506: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00792508: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0079250a: lea esi, [ebx + 0x9ff200] */ r_esi = (u32)(r_ebx+0x9ff200u);
    /* 00792510: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00792511: call 0x72d8c0 */ r_esp -= 4; W32(r_esp, 0x792516u); f_0072d8c0();
    /* 00792516: mov dword ptr [ebp - 0xb0], 0 */ W32((u32)(r_ebp+0xffffff50u), 0x0u);
L_00792520:; BB(0x00792520);
    /* 00792520: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00792523: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00792526: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00792529: mov dword ptr [ecx + edx*4 + 0x2c], eax */ W32((u32)(r_ecx+r_edx*4+0x2cu), r_eax);
    /* 0079252d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00792534: mov eax, edx */ r_eax = r_edx;
    /* 00792536: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00792539: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0079253c: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079253f: jl 0x7924be */ if ((fS!=fO)) goto L_007924be;
L_00792545:; BB(0x00792545);
    /* 00792545: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 00792548: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x79254du); f_00736578();
    /* 0079254d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_0079254f:; BB(0x0079254f);
    /* 0079254f: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 00792552: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00792554: mov ecx, dword ptr [eax + ebx*4 + 0x2c] */ r_ecx = R32((u32)(r_eax+r_ebx*4+0x2cu));
    /* 00792558: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 0079255d: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x792562u); f_0072db60();
    /* 00792562: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00792565: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792568: jl 0x79254f */ if ((fS!=fO)) goto L_0079254f;
L_0079256a:; BB(0x0079256a);
    /* 0079256a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_0079256c:; BB(0x0079256c);
    /* 0079256c: mov ebx, dword ptr [esi*8 + 0x97b3a4] */ r_ebx = R32((u32)(r_esi*8+0x97b3a4u));
    /* 00792573: mov eax, dword ptr [esi*8 + 0x97b3a0] */ r_eax = R32((u32)(r_esi*8+0x97b3a0u));
    /* 0079257a: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079257d: je 0x792584 */ if (fZ) goto L_00792584;
L_0079257f:; BB(0x0079257f);
    /* 0079257f: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792582: jne 0x79259e */ if (!fZ) goto L_0079259e;
L_00792584:; BB(0x00792584);
    /* 00792584: push 0x800000 */ { u32 v = 0x800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00792589: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079258f: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x792594u); f_007be19c();
    /* 00792594: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00792597: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792599: je 0x79259e */ if (fZ) goto L_0079259e;
L_0079259b:; BB(0x0079259b);
    /* 0079259b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_0079259e:; BB(0x0079259e);
    /* 0079259e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079259f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007925a1: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7925a6u); f_00792fe8();
    /* 007925a6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007925a9: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007925ac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007925ad: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007925af: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 007925b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007925b3: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7925b8u); f_00735c90();
    /* 007925b8: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007925bb: jge 0x7925f3 */ if ((fS==fO)) goto L_007925f3;
L_007925bd:; BB(0x007925bd);
    /* 007925bd: movzx eax, byte ptr [esi*8 + 0x97b3a0] */ r_eax = (u32)R8((u32)(r_esi*8+0x97b3a0u));
    /* 007925c5: mov edx, dword ptr [0xa9ccd4] */ r_edx = R32((u32)(0xa9ccd4u));
    /* 007925cb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007925cd: je 0x7926f3 */ if (fZ) goto L_007926f3;
L_007925d3:; BB(0x007925d3);
    /* 007925d3: movsx eax, byte ptr [eax + edx] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+r_edx));
L_007925d7:; BB(0x007925d7);
    /* 007925d7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_007925d9:; BB(0x007925d9);
    /* 007925d9: cmp al, byte ptr [edx*8 + 0x97b260] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_edx*8+0x97b260u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 007925e0: je 0x7926d4 */ if (fZ) goto L_007926d4;
L_007925e6:; BB(0x007925e6);
    /* 007925e6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007925e9: cmp edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007925ec: jl 0x7925d9 */ if ((fS!=fO)) goto L_007925d9;
L_007925ee:; BB(0x007925ee);
    /* 007925ee: jmp 0x7926fa */ goto L_007926fa;
L_007925f3:; BB(0x007925f3);
    /* 007925f3: push 0x800000 */ { u32 v = 0x800000u; r_esp -= 4; W32(r_esp, v); }
    /* 007925f8: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007925fe: mov ebx, dword ptr [esi*8 + 0x97b3a0] */ r_ebx = R32((u32)(r_esi*8+0x97b3a0u));
    /* 00792605: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x79260au); f_007be19c();
    /* 0079260a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079260d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079260f: je 0x792627 */ if (fZ) goto L_00792627;
L_00792611:; BB(0x00792611);
    /* 00792611: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792614: je 0x792622 */ if (fZ) goto L_00792622;
L_00792616:; BB(0x00792616);
    /* 00792616: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792619: jne 0x792627 */ if (!fZ) goto L_00792627;
L_0079261b:; BB(0x0079261b);
    /* 0079261b: mov ebx, 5 */ r_ebx = 0x5u;
    /* 00792620: jmp 0x792627 */ goto L_00792627;
L_00792622:; BB(0x00792622);
    /* 00792622: mov ebx, 6 */ r_ebx = 0x6u;
L_00792627:; BB(0x00792627);
    /* 00792627: mov eax, dword ptr [0xa9ccd4] */ r_eax = R32((u32)(0xa9ccd4u));
    /* 0079262c: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 0079262f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792631: je 0x792723 */ if (fZ) goto L_00792723;
L_00792637:; BB(0x00792637);
    /* 00792637: mov edx, dword ptr [eax + ebx*4 + 4] */ r_edx = R32((u32)(r_eax+r_ebx*4+0x4u));
L_0079263b:; BB(0x0079263b);
    /* 0079263b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0079263d:; BB(0x0079263d);
    /* 0079263d: cmp edx, dword ptr [eax*8 + 0x97b2e0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*8+0x97b2e0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792644: je 0x792704 */ if (fZ) goto L_00792704;
L_0079264a:; BB(0x0079264a);
    /* 0079264a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079264d: cmp eax, 0x15 */ {  u32 a = r_eax; u32 b = 0x15u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792650: jl 0x79263d */ if ((fS!=fO)) goto L_0079263d;
L_00792652:; BB(0x00792652);
    /* 00792652: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 00792655: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00792657:; BB(0x00792657);
    /* 00792657: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0079265a: mov ecx, dword ptr [ebx + eax + 0x2c] */ r_ecx = R32((u32)(r_ebx+r_eax+0x2cu));
    /* 0079265e: call 0x72e0e4 */ r_esp -= 4; W32(r_esp, 0x792663u); f_0072e0e4();
    /* 00792663: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00792666: cmp esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792669: jl 0x79256c */ if ((fS!=fO)) goto L_0079256c;
L_0079266f:; BB(0x0079266f);
    /* 0079266f: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 00792671: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00792673: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x792678u); f_00792fe8();
    /* 00792678: lea edx, [ebp - 0xa8] */ r_edx = (u32)(r_ebp+0xffffff58u);
    /* 0079267e: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00792680: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00792681: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00792682: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x792687u); f_00857dec();
    /* 00792687: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079268a: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0079268d: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00792690: call 0x736578 */ r_esp -= 4; W32(r_esp, 0x792695u); f_00736578();
    /* 00792695: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00792698: lea eax, [ebp - 0xa8] */ r_eax = (u32)(r_ebp+0xffffff58u);
    /* 0079269e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007926a0: mov ecx, dword ptr [edx + 0x28] */ r_ecx = R32((u32)(r_edx+0x28u));
    /* 007926a3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007926a5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007926a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007926a8: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x7926adu); f_00735db8();
    /* 007926ad: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007926b0: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 007926b3: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x7926b8u); f_00736458();
    /* 007926b8: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007926bb: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 007926be: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 007926c1: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 007926c4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007926c7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007926ce: mov esp, ebp */ r_esp = r_ebp;
    /* 007926d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007926d1: ret 4 */ FN_RET(0x007922f8); r_esp += 8; return;
L_007926d4:; BB(0x007926d4);
    /* 007926d4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 007926d7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 007926d9: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 007926dc: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007926de: mov ecx, dword ptr [eax + ebx + 0x2c] */ r_ecx = R32((u32)(r_eax+r_ebx+0x2cu));
    /* 007926e2: push dword ptr [edx*8 + 0x97b264] */ { u32 v = R32((u32)(r_edx*8+0x97b264u)); r_esp -= 4; W32(r_esp, v); }
    /* 007926e9: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x7926eeu); f_0072db60();
    /* 007926ee: jmp 0x792657 */ goto L_00792657;
L_007926f3:; BB(0x007926f3);
    /* 007926f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007926f5: jmp 0x7925d7 */ goto L_007925d7;
L_007926fa:; BB(0x007926fa);
    /* 007926fa: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 007926fd: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007926ff: jmp 0x792657 */ goto L_00792657;
L_00792704:; BB(0x00792704);
    /* 00792704: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00792707: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00792709: lea ebx, [esi + esi] */ r_ebx = (u32)(r_esi+r_esi);
    /* 0079270c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079270e: mov ecx, dword ptr [edx + ebx + 0x2c] */ r_ecx = R32((u32)(r_edx+r_ebx+0x2cu));
    /* 00792712: push dword ptr [eax*8 + 0x97b2e4] */ { u32 v = R32((u32)(r_eax*8+0x97b2e4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00792719: call 0x72db60 */ r_esp -= 4; W32(r_esp, 0x79271eu); f_0072db60();
    /* 0079271e: jmp 0x792657 */ goto L_00792657;
L_00792723:; BB(0x00792723);
    /* 00792723: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00792725: jmp 0x79263b */ goto L_0079263b;
L_0079272a:; BB(0x0079272a);
    /* 0079272a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079272c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0079272f: jmp 0x792520 */ goto L_00792520;
}

void f_00792734(void) /* sub_792734 */
{
    FN_ENTER(0x00792734);
    /* 00792734: mov edx, dword ptr [0xa9ccf0] */ r_edx = R32((u32)(0xa9ccf0u));
    /* 0079273a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079273c: je 0x792755 */ if (fZ) goto L_00792755;
L_0079273e:; BB(0x0079273e);
    /* 0079273e: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00792742: mov dword ptr [0xa9ccf0], 0 */ W32((u32)(0xa9ccf0u), 0x0u);
    /* 0079274c: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792751: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_00792755:; BB(0x00792755);
    /* 00792755: ret  */ FN_RET(0x00792734); r_esp += 4; return;
}

void f_00792758(void) /* sub_792758 */
{
    FN_ENTER(0x00792758);
    /* 00792758: mov eax, dword ptr [0xa9ccf0] */ r_eax = R32((u32)(0xa9ccf0u));
    /* 0079275d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079275f: je 0x792773 */ if (fZ) goto L_00792773;
L_00792761:; BB(0x00792761);
    /* 00792761: movsx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_eax+0x1cu));
    /* 00792765: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00792768: jne 0x792770 */ if (!fZ) goto L_00792770;
L_0079276a:; BB(0x0079276a);
    /* 0079276a: mov eax, 1 */ r_eax = 0x1u;
    /* 0079276f: ret  */ FN_RET(0x00792758); r_esp += 4; return;
L_00792770:; BB(0x00792770);
    /* 00792770: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792772: ret  */ FN_RET(0x00792758); r_esp += 4; return;
L_00792773:; BB(0x00792773);
    /* 00792773: mov eax, 1 */ r_eax = 0x1u;
    /* 00792778: ret  */ FN_RET(0x00792758); r_esp += 4; return;
}

void f_00792818(void)
{
    FN_ENTER(0x00792818);
    /* 00792818: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00792819: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079281a: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00792820: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792822: je 0x792852 */ if (fZ) goto L_00792852;
L_00792824:; BB(0x00792824);
    /* 00792824: mov eax, 0xa9cb60 */ r_eax = 0xa9cb60u;
    /* 00792829: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0079282b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079282d: je 0x79284b */ if (fZ) goto L_0079284b;
L_0079282f:; BB(0x0079282f);
    /* 0079282f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00792831:; BB(0x00792831);
    /* 00792831: movzx edx, byte ptr [eax + 0xa9cb60] */ r_edx = (u32)R8((u32)(r_eax+0xa9cb60u));
    /* 00792838: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079283b: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079283e: jge 0x792ab8 */ if ((fS==fO)) goto L_00792ab8;
L_00792844:; BB(0x00792844);
    /* 00792844: cmp eax, 0x168 */ {  u32 a = r_eax; u32 b = 0x168u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792849: jl 0x792831 */ if ((fS!=fO)) goto L_00792831;
L_0079284b:; BB(0x0079284b);
    /* 0079284b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079284d: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x792852u); f_00792f98();
L_00792852:; BB(0x00792852);
    /* 00792852: mov eax, dword ptr [0xa9ccd8] */ r_eax = R32((u32)(0xa9ccd8u));
    /* 00792857: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792859: je 0x792ab5 */ if (fZ) goto L_00792ab5;
L_0079285f:; BB(0x0079285f);
    /* 0079285f: mov dword ptr [eax], 0xa9ccf4 */ W32((u32)(r_eax), 0xa9ccf4u);
    /* 00792865: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00792867: mov ebx, eax */ r_ebx = r_eax;
    /* 00792869: mov esi, edx */ r_esi = r_edx;
L_0079286b:; BB(0x0079286b);
    /* 0079286b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079286d: je 0x792b3f */ if (fZ) goto L_00792b3f;
L_00792873:; BB(0x00792873);
    /* 00792873: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792876: je 0x7928c0 */ if (fZ) goto L_007928c0;
L_00792878:; BB(0x00792878);
    /* 00792878: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079287b: jne 0x79289c */ if (!fZ) goto L_0079289c;
L_0079287d:; BB(0x0079287d);
    /* 0079287d: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0079287f: mov ecx, esi */ r_ecx = r_esi;
    /* 00792881: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00792887: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792889: je 0x792aca */ if (fZ) goto L_00792aca;
L_0079288f:; BB(0x0079288f);
    /* 0079288f: movsx ecx, byte ptr [ecx + eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax));
L_00792893:; BB(0x00792893);
    /* 00792893: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00792894: call 0x84265c */ r_esp -= 4; W32(r_esp, 0x792899u); f_0084265c();
    /* 00792899: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079289a: jmp 0x7928dd */ goto L_007928dd;
L_0079289c:; BB(0x0079289c);
    /* 0079289c: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079289f: jne 0x7928dd */ if (!fZ) goto L_007928dd;
L_007928a1:; BB(0x007928a1);
    /* 007928a1: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 007928a3: mov ecx, esi */ r_ecx = r_esi;
    /* 007928a5: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007928ab: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007928ad: je 0x792ad1 */ if (fZ) goto L_00792ad1;
L_007928b3:; BB(0x007928b3);
    /* 007928b3: movsx ecx, byte ptr [ecx + eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax));
L_007928b7:; BB(0x007928b7);
    /* 007928b7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007928b8: call 0x842668 */ r_esp -= 4; W32(r_esp, 0x7928bdu); f_00842668();
    /* 007928bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007928be: jmp 0x7928dd */ goto L_007928dd;
L_007928c0:; BB(0x007928c0);
    /* 007928c0: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 007928c2: mov ecx, esi */ r_ecx = r_esi;
    /* 007928c4: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007928ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007928cc: je 0x792b38 */ if (fZ) goto L_00792b38;
L_007928d2:; BB(0x007928d2);
    /* 007928d2: movsx ecx, byte ptr [ecx + eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax));
L_007928d6:; BB(0x007928d6);
    /* 007928d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007928d7: call 0x842650 */ r_esp -= 4; W32(r_esp, 0x7928dcu); f_00842650();
    /* 007928dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007928dd:; BB(0x007928dd);
    /* 007928dd: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007928e0: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007928e3: jl 0x79286b */ if ((fS!=fO)) goto L_0079286b;
L_007928e5:; BB(0x007928e5);
    /* 007928e5: mov eax, ebx */ r_eax = r_ebx;
    /* 007928e7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_007928e9:; BB(0x007928e9);
    /* 007928e9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007928eb: movzx esi, cl */ r_esi = (u32)(u8)r_ecx;
    /* 007928ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007928f0: je 0x7928fa */ if (fZ) goto L_007928fa;
L_007928f2:; BB(0x007928f2);
    /* 007928f2: mov ebx, dword ptr [edx + esi*4 + 4] */ r_ebx = R32((u32)(r_edx+r_esi*4+0x4u));
    /* 007928f6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007928f8: jne 0x792968 */ if (!fZ) goto L_00792968;
L_007928fa:; BB(0x007928fa);
    /* 007928fa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007928fc: jne 0x792902 */ if (!fZ) goto L_00792902;
L_007928fe:; BB(0x007928fe);
    /* 007928fe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792900: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_00792902:; BB(0x00792902);
    /* 00792902: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792905: jne 0x79290b */ if (!fZ) goto L_0079290b;
L_00792907:; BB(0x00792907);
    /* 00792907: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792909: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_0079290b:; BB(0x0079290b);
    /* 0079290b: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079290e: jne 0x792914 */ if (!fZ) goto L_00792914;
L_00792910:; BB(0x00792910);
    /* 00792910: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792912: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_00792914:; BB(0x00792914);
    /* 00792914: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792917: jne 0x79291d */ if (!fZ) goto L_0079291d;
L_00792919:; BB(0x00792919);
    /* 00792919: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079291b: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_0079291d:; BB(0x0079291d);
    /* 0079291d: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792920: jne 0x792926 */ if (!fZ) goto L_00792926;
L_00792922:; BB(0x00792922);
    /* 00792922: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792924: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_00792926:; BB(0x00792926);
    /* 00792926: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792929: jne 0x79292f */ if (!fZ) goto L_0079292f;
L_0079292b:; BB(0x0079292b);
    /* 0079292b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079292d: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_0079292f:; BB(0x0079292f);
    /* 0079292f: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792932: jne 0x792938 */ if (!fZ) goto L_00792938;
L_00792934:; BB(0x00792934);
    /* 00792934: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792936: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_00792938:; BB(0x00792938);
    /* 00792938: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079293b: jne 0x792941 */ if (!fZ) goto L_00792941;
L_0079293d:; BB(0x0079293d);
    /* 0079293d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079293f: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_00792941:; BB(0x00792941);
    /* 00792941: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792944: jne 0x79294a */ if (!fZ) goto L_0079294a;
L_00792946:; BB(0x00792946);
    /* 00792946: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792948: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_0079294a:; BB(0x0079294a);
    /* 0079294a: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079294d: jne 0x792953 */ if (!fZ) goto L_00792953;
L_0079294f:; BB(0x0079294f);
    /* 0079294f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792951: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_00792953:; BB(0x00792953);
    /* 00792953: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792956: jne 0x792968 */ if (!fZ) goto L_00792968;
L_00792958:; BB(0x00792958);
    /* 00792958: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079295a: je 0x792968 */ if (fZ) goto L_00792968;
L_0079295c:; BB(0x0079295c);
    /* 0079295c: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00792963: jmp 0x792aaa */ f_00792aaa(); return;
L_00792968:; BB(0x00792968);
    /* 00792968: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0079296b: ja 0x792a77 */ if ((!fC&&!fZ)) goto L_00792a77;
L_00792971:; BB(0x00792971);
    /* 00792971: mov ebx, dword ptr [ecx*4 + 0x97ac28] */ r_ebx = R32((u32)(r_ecx*4+0x97ac28u));
    /* 00792978: jmp ebx */ { u32 t = r_ebx; jmp_ind(t); return; }
L_00792a77:; BB(0x00792a77);
    /* 00792a77: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00792a7a: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792a7d: jl 0x7928e9 */ if ((fS!=fO)) goto L_007928e9;
L_00792a83:; BB(0x00792a83);
    /* 00792a83: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00792a89: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792a8b: je 0x792aaa */ if (fZ) goto L_00792aaa;
L_00792a8d:; BB(0x00792a8d);
    /* 00792a8d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00792a8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792a91: je 0x792aaa */ if (fZ) goto L_00792aaa;
L_00792a93:; BB(0x00792a93);
    /* 00792a93: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00792a95:; BB(0x00792a95);
    /* 00792a95: movzx ebx, byte ptr [edx + eax*8] */ r_ebx = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00792a99: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00792a9c: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792a9f: jge 0x792b2c */ if ((fS==fO)) goto L_00792b2c;
L_00792aa5:; BB(0x00792aa5);
    /* 00792aa5: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792aa8: jl 0x792a95 */ if ((fS!=fO)) goto L_00792a95;
L_00792aaa:; BB(0x00792aaa);
    /* 00792aaa: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 00792ab0: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x792ab5u); f_00792c64();
L_00792ab5:; BB(0x00792ab5);
    /* 00792ab5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792ab6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792ab7: ret  */ FN_RET(0x00792818); r_esp += 4; return;
L_00792ab8:; BB(0x00792ab8);
    /* 00792ab8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00792aba: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x792abfu); f_00792f98();
    /* 00792abf: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00792ac5: jmp 0x79284b */ f_0079284b(); return;
L_00792aca:; BB(0x00792aca);
    /* 00792aca: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00792acc: jmp 0x792893 */ goto L_00792893;
L_00792ad1:; BB(0x00792ad1);
    /* 00792ad1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00792ad3: jmp 0x7928b7 */ goto L_007928b7;
L_00792b2c:; BB(0x00792b2c);
    /* 00792b2c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00792b2e: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x792b33u); f_00792f98();
    /* 00792b33: jmp 0x792aaa */ f_00792aaa(); return;
L_00792b38:; BB(0x00792b38);
    /* 00792b38: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00792b3a: jmp 0x7928d6 */ goto L_007928d6;
L_00792b3f:; BB(0x00792b3f);
    /* 00792b3f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00792b41: mov ecx, esi */ r_ecx = r_esi;
    /* 00792b43: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00792b49: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792b4b: je 0x792b5d */ if (fZ) goto L_00792b5d;
L_00792b4d:; BB(0x00792b4d);
    /* 00792b4d: movsx ecx, byte ptr [ecx + eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ecx+r_eax));
L_00792b51:; BB(0x00792b51);
    /* 00792b51: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00792b52: call 0x842644 */ r_esp -= 4; W32(r_esp, 0x792b57u); f_00842644();
    /* 00792b57: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00792b58: jmp 0x7928dd */ goto L_007928dd;
L_00792b5d:; BB(0x00792b5d);
    /* 00792b5d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00792b5f: jmp 0x792b51 */ goto L_00792b51;
}

void f_0079297a(void)
{
    FN_ENTER(0x0079297a);
    /* 0079297a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079297c: je 0x792ad8 */ if (fZ) goto L_00792ad8;
L_00792982:; BB(0x00792982);
    /* 00792982: mov edx, dword ptr [edx + esi*4 + 4] */ r_edx = R32((u32)(r_edx+r_esi*4+0x4u));
L_00792986:; BB(0x00792986);
    /* 00792986: mov dword ptr [0xa0f698], edx */ W32((u32)(0xa0f698u), r_edx);
    /* 0079298c: jmp 0x792a77 */ f_00792a77(); return;
L_00792ad8:; BB(0x00792ad8);
    /* 00792ad8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00792ada: jmp 0x792986 */ goto L_00792986;
}

void f_00792991(void)
{
    FN_ENTER(0x00792991);
    /* 00792991: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792993: je 0x792adf */ if (fZ) goto L_00792adf;
L_00792999:; BB(0x00792999);
    /* 00792999: mov edx, dword ptr [edx + esi*4 + 4] */ r_edx = R32((u32)(r_edx+r_esi*4+0x4u));
L_0079299d:; BB(0x0079299d);
    /* 0079299d: mov dword ptr [0xa0f688], edx */ W32((u32)(0xa0f688u), r_edx);
    /* 007929a3: jmp 0x792a77 */ f_00792a77(); return;
L_00792adf:; BB(0x00792adf);
    /* 00792adf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00792ae1: jmp 0x79299d */ goto L_0079299d;
}

void f_007929a8(void)
{
    FN_ENTER(0x007929a8);
    /* 007929a8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007929aa: je 0x792ae6 */ if (fZ) goto L_00792ae6;
L_007929b0:; BB(0x007929b0);
    /* 007929b0: mov edx, dword ptr [edx + esi*4 + 4] */ r_edx = R32((u32)(r_edx+r_esi*4+0x4u));
L_007929b4:; BB(0x007929b4);
    /* 007929b4: mov dword ptr [0xa0f684], edx */ W32((u32)(0xa0f684u), r_edx);
    /* 007929ba: jmp 0x792a77 */ f_00792a77(); return;
L_00792ae6:; BB(0x00792ae6);
    /* 00792ae6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00792ae8: jmp 0x7929b4 */ goto L_007929b4;
}

void f_007929bf(void)
{
    FN_ENTER(0x007929bf);
    /* 007929bf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007929c1: je 0x792aed */ if (fZ) goto L_00792aed;
L_007929c7:; BB(0x007929c7);
    /* 007929c7: mov edx, dword ptr [edx + esi*4 + 4] */ r_edx = R32((u32)(r_edx+r_esi*4+0x4u));
L_007929cb:; BB(0x007929cb);
    /* 007929cb: mov dword ptr [0xa0f68c], edx */ W32((u32)(0xa0f68cu), r_edx);
    /* 007929d1: jmp 0x792a77 */ f_00792a77(); return;
L_00792aed:; BB(0x00792aed);
    /* 00792aed: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00792aef: jmp 0x7929cb */ goto L_007929cb;
}

void f_007929d6(void)
{
    FN_ENTER(0x007929d6);
    /* 007929d6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007929d8: je 0x792af4 */ if (fZ) goto L_00792af4;
L_007929de:; BB(0x007929de);
    /* 007929de: mov edx, dword ptr [edx + esi*4 + 4] */ r_edx = R32((u32)(r_edx+r_esi*4+0x4u));
L_007929e2:; BB(0x007929e2);
    /* 007929e2: mov dword ptr [0xa0f680], edx */ W32((u32)(0xa0f680u), r_edx);
    /* 007929e8: jmp 0x792a77 */ f_00792a77(); return;
L_00792af4:; BB(0x00792af4);
    /* 00792af4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00792af6: jmp 0x7929e2 */ goto L_007929e2;
}

void f_007929ed(void)
{
    FN_ENTER(0x007929ed);
    /* 007929ed: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007929ef: je 0x792afb */ if (fZ) goto L_00792afb;
L_007929f5:; BB(0x007929f5);
    /* 007929f5: mov edx, dword ptr [edx + esi*4 + 4] */ r_edx = R32((u32)(r_edx+r_esi*4+0x4u));
L_007929f9:; BB(0x007929f9);
    /* 007929f9: mov dword ptr [0xa0f67c], edx */ W32((u32)(0xa0f67cu), r_edx);
    /* 007929ff: jmp 0x792a77 */ f_00792a77(); return;
L_00792afb:; BB(0x00792afb);
    /* 00792afb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00792afd: jmp 0x7929f9 */ goto L_007929f9;
}

void f_00792a01(void)
{
    FN_ENTER(0x00792a01);
    /* 00792a01: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792a03: je 0x792b02 */ if (fZ) goto L_00792b02;
L_00792a09:; BB(0x00792a09);
    /* 00792a09: mov edx, dword ptr [edx + esi*4 + 4] */ r_edx = R32((u32)(r_edx+r_esi*4+0x4u));
L_00792a0d:; BB(0x00792a0d);
    /* 00792a0d: mov dword ptr [0xa0f678], edx */ W32((u32)(0xa0f678u), r_edx);
    /* 00792a13: jmp 0x792a77 */ f_00792a77(); return;
L_00792b02:; BB(0x00792b02);
    /* 00792b02: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00792b04: jmp 0x792a0d */ goto L_00792a0d;
}

void f_00792a15(void)
{
    FN_ENTER(0x00792a15);
    /* 00792a15: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792a17: je 0x792b09 */ if (fZ) goto L_00792b09;
L_00792a1d:; BB(0x00792a1d);
    /* 00792a1d: mov edx, dword ptr [edx + esi*4 + 4] */ r_edx = R32((u32)(r_edx+r_esi*4+0x4u));
L_00792a21:; BB(0x00792a21);
    /* 00792a21: mov dword ptr [0xa0f674], edx */ W32((u32)(0xa0f674u), r_edx);
    /* 00792a27: jmp 0x792a77 */ f_00792a77(); return;
L_00792b09:; BB(0x00792b09);
    /* 00792b09: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00792b0b: jmp 0x792a21 */ goto L_00792a21;
}

void f_00792a29(void)
{
    FN_ENTER(0x00792a29);
    /* 00792a29: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792a2b: je 0x792b10 */ if (fZ) goto L_00792b10;
L_00792a31:; BB(0x00792a31);
    /* 00792a31: mov edx, dword ptr [edx + esi*4 + 4] */ r_edx = R32((u32)(r_edx+r_esi*4+0x4u));
L_00792a35:; BB(0x00792a35);
    /* 00792a35: mov dword ptr [0xa0f670], edx */ W32((u32)(0xa0f670u), r_edx);
    /* 00792a3b: jmp 0x792a77 */ f_00792a77(); return;
L_00792b10:; BB(0x00792b10);
    /* 00792b10: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00792b12: jmp 0x792a35 */ goto L_00792a35;
}

void f_00792a3d(void)
{
    FN_ENTER(0x00792a3d);
    /* 00792a3d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792a3f: je 0x792b17 */ if (fZ) goto L_00792b17;
L_00792a45:; BB(0x00792a45);
    /* 00792a45: mov edx, dword ptr [edx + esi*4 + 4] */ r_edx = R32((u32)(r_edx+r_esi*4+0x4u));
L_00792a49:; BB(0x00792a49);
    /* 00792a49: mov dword ptr [0xa0f66c], edx */ W32((u32)(0xa0f66cu), r_edx);
    /* 00792a4f: jmp 0x792a77 */ f_00792a77(); return;
L_00792b17:; BB(0x00792b17);
    /* 00792b17: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00792b19: jmp 0x792a49 */ goto L_00792a49;
}

void f_00792a51(void)
{
    FN_ENTER(0x00792a51);
    /* 00792a51: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792a53: je 0x792b1e */ if (fZ) goto L_00792b1e;
L_00792a59:; BB(0x00792a59);
    /* 00792a59: mov edx, dword ptr [edx + esi*4 + 4] */ r_edx = R32((u32)(r_edx+r_esi*4+0x4u));
L_00792a5d:; BB(0x00792a5d);
    /* 00792a5d: mov dword ptr [0xa0f668], edx */ W32((u32)(0xa0f668u), r_edx);
    /* 00792a63: jmp 0x792a77 */ f_00792a77(); return;
L_00792b1e:; BB(0x00792b1e);
    /* 00792b1e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00792b20: jmp 0x792a5d */ goto L_00792a5d;
}

void f_00792a65(void)
{
    FN_ENTER(0x00792a65);
    goto L_00792a65;
L_007928e9:; BB(0x007928e9);
    /* 007928e9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 007928eb: movzx esi, cl */ r_esi = (u32)(u8)r_ecx;
    /* 007928ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007928f0: je 0x7928fa */ if (fZ) goto L_007928fa;
L_007928f2:; BB(0x007928f2);
    /* 007928f2: mov ebx, dword ptr [edx + esi*4 + 4] */ r_ebx = R32((u32)(r_edx+r_esi*4+0x4u));
    /* 007928f6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007928f8: jne 0x792968 */ if (!fZ) goto L_00792968;
L_007928fa:; BB(0x007928fa);
    /* 007928fa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007928fc: jne 0x792902 */ if (!fZ) goto L_00792902;
L_007928fe:; BB(0x007928fe);
    /* 007928fe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792900: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_00792902:; BB(0x00792902);
    /* 00792902: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792905: jne 0x79290b */ if (!fZ) goto L_0079290b;
L_00792907:; BB(0x00792907);
    /* 00792907: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792909: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_0079290b:; BB(0x0079290b);
    /* 0079290b: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079290e: jne 0x792914 */ if (!fZ) goto L_00792914;
L_00792910:; BB(0x00792910);
    /* 00792910: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792912: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_00792914:; BB(0x00792914);
    /* 00792914: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792917: jne 0x79291d */ if (!fZ) goto L_0079291d;
L_00792919:; BB(0x00792919);
    /* 00792919: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079291b: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_0079291d:; BB(0x0079291d);
    /* 0079291d: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792920: jne 0x792926 */ if (!fZ) goto L_00792926;
L_00792922:; BB(0x00792922);
    /* 00792922: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792924: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_00792926:; BB(0x00792926);
    /* 00792926: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792929: jne 0x79292f */ if (!fZ) goto L_0079292f;
L_0079292b:; BB(0x0079292b);
    /* 0079292b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079292d: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_0079292f:; BB(0x0079292f);
    /* 0079292f: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792932: jne 0x792938 */ if (!fZ) goto L_00792938;
L_00792934:; BB(0x00792934);
    /* 00792934: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792936: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_00792938:; BB(0x00792938);
    /* 00792938: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079293b: jne 0x792941 */ if (!fZ) goto L_00792941;
L_0079293d:; BB(0x0079293d);
    /* 0079293d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079293f: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_00792941:; BB(0x00792941);
    /* 00792941: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792944: jne 0x79294a */ if (!fZ) goto L_0079294a;
L_00792946:; BB(0x00792946);
    /* 00792946: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792948: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_0079294a:; BB(0x0079294a);
    /* 0079294a: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079294d: jne 0x792953 */ if (!fZ) goto L_00792953;
L_0079294f:; BB(0x0079294f);
    /* 0079294f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792951: jne 0x79295c */ if (!fZ) goto L_0079295c;
L_00792953:; BB(0x00792953);
    /* 00792953: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792956: jne 0x792968 */ if (!fZ) goto L_00792968;
L_00792958:; BB(0x00792958);
    /* 00792958: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079295a: je 0x792968 */ if (fZ) goto L_00792968;
L_0079295c:; BB(0x0079295c);
    /* 0079295c: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00792963: jmp 0x792aaa */ f_00792aaa(); return;
L_00792968:; BB(0x00792968);
    /* 00792968: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0079296b: ja 0x792a77 */ if ((!fC&&!fZ)) goto L_00792a77;
L_00792971:; BB(0x00792971);
    /* 00792971: mov ebx, dword ptr [ecx*4 + 0x97ac28] */ r_ebx = R32((u32)(r_ecx*4+0x97ac28u));
    /* 00792978: jmp ebx */ { u32 t = r_ebx; jmp_ind(t); return; }
L_00792a65:; BB(0x00792a65);
    /* 00792a65: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792a67: je 0x792b25 */ if (fZ) goto L_00792b25;
L_00792a6d:; BB(0x00792a6d);
    /* 00792a6d: mov edx, dword ptr [edx + esi*4 + 4] */ r_edx = R32((u32)(r_edx+r_esi*4+0x4u));
L_00792a71:; BB(0x00792a71);
    /* 00792a71: mov dword ptr [0xa0f664], edx */ W32((u32)(0xa0f664u), r_edx);
L_00792a77:; BB(0x00792a77);
    /* 00792a77: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00792a7a: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792a7d: jl 0x7928e9 */ if ((fS!=fO)) goto L_007928e9;
L_00792a83:; BB(0x00792a83);
    /* 00792a83: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00792a89: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792a8b: je 0x792aaa */ if (fZ) goto L_00792aaa;
L_00792a8d:; BB(0x00792a8d);
    /* 00792a8d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00792a8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792a91: je 0x792aaa */ if (fZ) goto L_00792aaa;
L_00792a93:; BB(0x00792a93);
    /* 00792a93: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00792a95:; BB(0x00792a95);
    /* 00792a95: movzx ebx, byte ptr [edx + eax*8] */ r_ebx = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00792a99: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00792a9c: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792a9f: jge 0x792b2c */ if ((fS==fO)) goto L_00792b2c;
L_00792aa5:; BB(0x00792aa5);
    /* 00792aa5: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792aa8: jl 0x792a95 */ if ((fS!=fO)) goto L_00792a95;
L_00792aaa:; BB(0x00792aaa);
    /* 00792aaa: mov ecx, dword ptr [0xa9ccd8] */ r_ecx = R32((u32)(0xa9ccd8u));
    /* 00792ab0: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x792ab5u); f_00792c64();
    /* 00792ab5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792ab6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792ab7: ret  */ FN_RET(0x00792a65); r_esp += 4; return;
L_00792b25:; BB(0x00792b25);
    /* 00792b25: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00792b27: jmp 0x792a71 */ goto L_00792a71;
L_00792b2c:; BB(0x00792b2c);
    /* 00792b2c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00792b2e: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x792b33u); f_00792f98();
    /* 00792b33: jmp 0x792aaa */ f_00792aaa(); return;
}

void f_00792b64(void) /* sub_792B64 */
{
    FN_ENTER(0x00792b64);
    /* 00792b64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00792b65: mov ebp, esp */ r_ebp = r_esp;
    /* 00792b67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00792b69: push 0x8f5000 */ { u32 v = 0x8f5000u; r_esp -= 4; W32(r_esp, v); }
    /* 00792b6e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00792b74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00792b75: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00792b7c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00792b7f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00792b82: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00792b85: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00792b88: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00792b8b: mov eax, dword ptr [0xa9cccc] */ r_eax = R32((u32)(0xa9ccccu));
    /* 00792b90: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792b92: je 0x792ba2 */ if (fZ) goto L_00792ba2;
L_00792b94:; BB(0x00792b94);
    /* 00792b94: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00792b97: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00792b9e: mov esp, ebp */ r_esp = r_ebp;
    /* 00792ba0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00792ba1: ret  */ FN_RET(0x00792b64); r_esp += 4; return;
L_00792ba2:; BB(0x00792ba2);
    /* 00792ba2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00792ba9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00792bab: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x792bb0u); f_008581c5();
    /* 00792bb0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00792bb1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00792bb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792bb6: je 0x792c5d */ if (fZ) goto L_00792c5d;
L_00792bbc:; BB(0x00792bbc);
    /* 00792bbc: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00792bc3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00792bc5: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00792bc7: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
L_00792bca:; BB(0x00792bca);
    /* 00792bca: mov dword ptr [0xa9cccc], eax */ W32((u32)(0xa9ccccu), r_eax);
    /* 00792bcf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00792bd6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00792bd8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x792bddu); f_008581c5();
    /* 00792bdd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00792bde: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792be0: je 0x792c59 */ if (fZ) goto L_00792c59;
L_00792be2:; BB(0x00792be2);
    /* 00792be2: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
L_00792be8:; BB(0x00792be8);
    /* 00792be8: mov dword ptr [0xa9ccd8], eax */ W32((u32)(0xa9ccd8u), r_eax);
    /* 00792bed: push 0x16c */ { u32 v = 0x16cu; r_esp -= 4; W32(r_esp, v); }
    /* 00792bf2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00792bf4: mov dword ptr [0xa9ccec], eax */ W32((u32)(0xa9ccecu), r_eax);
    /* 00792bf9: mov dword ptr [0xa9ccf0], eax */ W32((u32)(0xa9ccf0u), r_eax);
    /* 00792bfe: mov byte ptr [0x9ff3d4], al */ W8((u32)(0x9ff3d4u), (u8)r_eax);
    /* 00792c03: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00792c05: push 0xa9cb60 */ { u32 v = 0xa9cb60u; r_esp -= 4; W32(r_esp, v); }
    /* 00792c0a: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x792c0fu); f_0086b688();
    /* 00792c0f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00792c12: mov edx, 0xa9ccf4 */ r_edx = 0xa9ccf4u;
    /* 00792c17: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792c19: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00792c1b: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00792c1e: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00792c21: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00792c24: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00792c27: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 00792c2a: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00792c2d: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00792c30: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00792c33: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00792c36: mov dword ptr [edx + 0x28], eax */ W32((u32)(r_edx+0x28u), r_eax);
    /* 00792c39: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00792c3c: mov dword ptr [edx + 0x30], eax */ W32((u32)(r_edx+0x30u), r_eax);
    /* 00792c3f: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 00792c42: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00792c45: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00792c48: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00792c4b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00792c4e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00792c55: mov esp, ebp */ r_esp = r_ebp;
    /* 00792c57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00792c58: ret  */ FN_RET(0x00792b64); r_esp += 4; return;
L_00792c59:; BB(0x00792c59);
    /* 00792c59: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00792c5b: jmp 0x792be8 */ goto L_00792be8;
L_00792c5d:; BB(0x00792c5d);
    /* 00792c5d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00792c5f: jmp 0x792bca */ goto L_00792bca;
}

void f_00792c64(void) /* sub_792C64 */
{
    FN_ENTER(0x00792c64);
    /* 00792c64: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00792c65: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00792c66: mov esi, ecx */ r_esi = r_ecx;
    /* 00792c68: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00792c6a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792c6c: je 0x792cd0 */ if (fZ) goto L_00792cd0;
L_00792c6e:; BB(0x00792c6e);
    /* 00792c6e: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00792c71: mov eax, 0x97bab8 */ r_eax = 0x97bab8u;
    /* 00792c76: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00792c78: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 00792c7a: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 00792c7d: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00792c80: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 00792c83: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 00792c86: mov ecx, dword ptr [eax + 0xc] */ r_ecx = R32((u32)(r_eax+0xcu));
    /* 00792c89: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 00792c8c: mov ecx, dword ptr [eax + 0x10] */ r_ecx = R32((u32)(r_eax+0x10u));
    /* 00792c8f: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 00792c92: mov ecx, dword ptr [eax + 0x14] */ r_ecx = R32((u32)(r_eax+0x14u));
    /* 00792c95: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 00792c98: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00792c9b: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 00792c9e: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 00792ca1: mov dword ptr [edx + 0x1c], ecx */ W32((u32)(r_edx+0x1cu), r_ecx);
    /* 00792ca4: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 00792ca7: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 00792caa: mov ecx, dword ptr [eax + 0x24] */ r_ecx = R32((u32)(r_eax+0x24u));
    /* 00792cad: mov dword ptr [edx + 0x24], ecx */ W32((u32)(r_edx+0x24u), r_ecx);
    /* 00792cb0: mov ecx, dword ptr [eax + 0x28] */ r_ecx = R32((u32)(r_eax+0x28u));
    /* 00792cb3: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00792cb6: mov dword ptr [edx + 0x28], ecx */ W32((u32)(r_edx+0x28u), r_ecx);
    /* 00792cb9: mov dword ptr [edx + 0x2c], eax */ W32((u32)(r_edx+0x2cu), r_eax);
    /* 00792cbc: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00792cbe: mov eax, 0x97bab4 */ r_eax = 0x97bab4u;
    /* 00792cc3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00792cc5: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 00792cc7: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00792cc9: mov dword ptr [eax + 0x34], 1 */ W32((u32)(r_eax+0x34u), 0x1u);
L_00792cd0:; BB(0x00792cd0);
    /* 00792cd0: push 0xff7fffff */ { u32 v = 0xff7fffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00792cd5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00792cd7: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00792cdd: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x792ce2u); f_007be17c();
    /* 00792ce2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00792ce5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00792ce7: mov ebx, eax */ r_ebx = r_eax;
L_00792ce9:; BB(0x00792ce9);
    /* 00792ce9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792ceb: je 0x792f7b */ if (fZ) goto L_00792f7b;
L_00792cf1:; BB(0x00792cf1);
    /* 00792cf1: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792cf4: je 0x792d34 */ if (fZ) goto L_00792d34;
L_00792cf6:; BB(0x00792cf6);
    /* 00792cf6: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792cf9: jne 0x792d15 */ if (!fZ) goto L_00792d15;
L_00792cfb:; BB(0x00792cfb);
    /* 00792cfb: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00792cfd: movzx edx, bl */ r_edx = (u32)(u8)r_ebx;
    /* 00792d00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d02: je 0x792f08 */ if (fZ) goto L_00792f08;
L_00792d08:; BB(0x00792d08);
    /* 00792d08: movsx edx, byte ptr [edx + eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edx+r_eax));
L_00792d0c:; BB(0x00792d0c);
    /* 00792d0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00792d0d: call 0x84265c */ r_esp -= 4; W32(r_esp, 0x792d12u); f_0084265c();
    /* 00792d12: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00792d13: jmp 0x792d4c */ goto L_00792d4c;
L_00792d15:; BB(0x00792d15);
    /* 00792d15: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d18: jne 0x792d4c */ if (!fZ) goto L_00792d4c;
L_00792d1a:; BB(0x00792d1a);
    /* 00792d1a: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00792d1c: movzx edx, bl */ r_edx = (u32)(u8)r_ebx;
    /* 00792d1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d21: je 0x792f0f */ if (fZ) goto L_00792f0f;
L_00792d27:; BB(0x00792d27);
    /* 00792d27: movsx edx, byte ptr [edx + eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edx+r_eax));
L_00792d2b:; BB(0x00792d2b);
    /* 00792d2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00792d2c: call 0x842668 */ r_esp -= 4; W32(r_esp, 0x792d31u); f_00842668();
    /* 00792d31: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00792d32: jmp 0x792d4c */ goto L_00792d4c;
L_00792d34:; BB(0x00792d34);
    /* 00792d34: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00792d36: movzx edx, bl */ r_edx = (u32)(u8)r_ebx;
    /* 00792d39: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d3b: je 0x792f74 */ if (fZ) goto L_00792f74;
L_00792d41:; BB(0x00792d41);
    /* 00792d41: movsx edx, byte ptr [edx + eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edx+r_eax));
L_00792d45:; BB(0x00792d45);
    /* 00792d45: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00792d46: call 0x842650 */ r_esp -= 4; W32(r_esp, 0x792d4bu); f_00842650();
    /* 00792d4b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00792d4c:; BB(0x00792d4c);
    /* 00792d4c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00792d4f: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792d52: jl 0x792ce9 */ if ((fS!=fO)) goto L_00792ce9;
L_00792d54:; BB(0x00792d54);
    /* 00792d54: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00792d56:; BB(0x00792d56);
    /* 00792d56: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00792d58: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 00792d5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d5d: je 0x792d67 */ if (fZ) goto L_00792d67;
L_00792d5f:; BB(0x00792d5f);
    /* 00792d5f: mov ebx, dword ptr [edx + eax*4 + 4] */ r_ebx = R32((u32)(r_edx+r_eax*4+0x4u));
    /* 00792d63: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d65: jne 0x792dd3 */ if (!fZ) goto L_00792dd3;
L_00792d67:; BB(0x00792d67);
    /* 00792d67: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d69: jne 0x792d6f */ if (!fZ) goto L_00792d6f;
L_00792d6b:; BB(0x00792d6b);
    /* 00792d6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d6d: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d6f:; BB(0x00792d6f);
    /* 00792d6f: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d72: jne 0x792d78 */ if (!fZ) goto L_00792d78;
L_00792d74:; BB(0x00792d74);
    /* 00792d74: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d76: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d78:; BB(0x00792d78);
    /* 00792d78: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d7b: jne 0x792d81 */ if (!fZ) goto L_00792d81;
L_00792d7d:; BB(0x00792d7d);
    /* 00792d7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d7f: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d81:; BB(0x00792d81);
    /* 00792d81: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d84: jne 0x792d8a */ if (!fZ) goto L_00792d8a;
L_00792d86:; BB(0x00792d86);
    /* 00792d86: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d88: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d8a:; BB(0x00792d8a);
    /* 00792d8a: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d8d: jne 0x792d93 */ if (!fZ) goto L_00792d93;
L_00792d8f:; BB(0x00792d8f);
    /* 00792d8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d91: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d93:; BB(0x00792d93);
    /* 00792d93: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d96: jne 0x792d9c */ if (!fZ) goto L_00792d9c;
L_00792d98:; BB(0x00792d98);
    /* 00792d98: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d9a: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d9c:; BB(0x00792d9c);
    /* 00792d9c: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d9f: jne 0x792da5 */ if (!fZ) goto L_00792da5;
L_00792da1:; BB(0x00792da1);
    /* 00792da1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792da3: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792da5:; BB(0x00792da5);
    /* 00792da5: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792da8: jne 0x792dae */ if (!fZ) goto L_00792dae;
L_00792daa:; BB(0x00792daa);
    /* 00792daa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dac: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792dae:; BB(0x00792dae);
    /* 00792dae: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792db1: jne 0x792db7 */ if (!fZ) goto L_00792db7;
L_00792db3:; BB(0x00792db3);
    /* 00792db3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792db5: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792db7:; BB(0x00792db7);
    /* 00792db7: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dba: jne 0x792dc0 */ if (!fZ) goto L_00792dc0;
L_00792dbc:; BB(0x00792dbc);
    /* 00792dbc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dbe: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792dc0:; BB(0x00792dc0);
    /* 00792dc0: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dc3: jne 0x792dd3 */ if (!fZ) goto L_00792dd3;
L_00792dc5:; BB(0x00792dc5);
    /* 00792dc5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dc7: je 0x792dd3 */ if (fZ) goto L_00792dd3;
L_00792dc9:; BB(0x00792dc9);
    /* 00792dc9: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00792dd0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792dd1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792dd2: ret  */ FN_RET(0x00792c64); r_esp += 4; return;
L_00792dd3:; BB(0x00792dd3);
    /* 00792dd3: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00792dd6: ja 0x792ed6 */ if ((!fC&&!fZ)) goto L_00792ed6;
L_00792ddc:; BB(0x00792ddc);
    /* 00792ddc: mov ebx, dword ptr [ecx*4 + 0x97ac58] */ r_ebx = R32((u32)(r_ecx*4+0x97ac58u));
    /* 00792de3: jmp ebx */ { u32 t = r_ebx; jmp_ind(t); return; }
L_00792ed6:; BB(0x00792ed6);
    /* 00792ed6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00792ed9: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792edc: jl 0x792d56 */ if ((fS!=fO)) goto L_00792d56;
L_00792ee2:; BB(0x00792ee2);
    /* 00792ee2: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00792ee8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792eea: je 0x792f05 */ if (fZ) goto L_00792f05;
L_00792eec:; BB(0x00792eec);
    /* 00792eec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00792eee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792ef0: je 0x792f05 */ if (fZ) goto L_00792f05;
L_00792ef2:; BB(0x00792ef2);
    /* 00792ef2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00792ef4:; BB(0x00792ef4);
    /* 00792ef4: movzx ebx, byte ptr [edx + eax*8] */ r_ebx = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00792ef8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00792efb: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792efe: jge 0x792f6a */ if ((fS==fO)) goto L_00792f6a;
L_00792f00:; BB(0x00792f00);
    /* 00792f00: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00792f03: jl 0x792ef4 */ if ((fS!=fO)) goto L_00792ef4;
L_00792f05:; BB(0x00792f05);
    /* 00792f05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792f06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792f07: ret  */ FN_RET(0x00792c64); r_esp += 4; return;
L_00792f08:; BB(0x00792f08);
    /* 00792f08: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00792f0a: jmp 0x792d0c */ goto L_00792d0c;
L_00792f0f:; BB(0x00792f0f);
    /* 00792f0f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00792f11: jmp 0x792d2b */ goto L_00792d2b;
L_00792f6a:; BB(0x00792f6a);
    /* 00792f6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00792f6c: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x792f71u); f_00792f98();
    /* 00792f71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792f72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792f73: ret  */ FN_RET(0x00792c64); r_esp += 4; return;
L_00792f74:; BB(0x00792f74);
    /* 00792f74: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00792f76: jmp 0x792d45 */ goto L_00792d45;
L_00792f7b:; BB(0x00792f7b);
    /* 00792f7b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00792f7d: movzx edx, bl */ r_edx = (u32)(u8)r_ebx;
    /* 00792f80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792f82: je 0x792f94 */ if (fZ) goto L_00792f94;
L_00792f84:; BB(0x00792f84);
    /* 00792f84: movsx edx, byte ptr [edx + eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edx+r_eax));
L_00792f88:; BB(0x00792f88);
    /* 00792f88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00792f89: call 0x842644 */ r_esp -= 4; W32(r_esp, 0x792f8eu); f_00842644();
    /* 00792f8e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00792f8f: jmp 0x792d4c */ goto L_00792d4c;
L_00792f94:; BB(0x00792f94);
    /* 00792f94: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00792f96: jmp 0x792f88 */ goto L_00792f88;
}

void f_00792de5(void)
{
    FN_ENTER(0x00792de5);
    goto L_00792de5;
L_00792d56:; BB(0x00792d56);
    /* 00792d56: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00792d58: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 00792d5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d5d: je 0x792d67 */ if (fZ) goto L_00792d67;
L_00792d5f:; BB(0x00792d5f);
    /* 00792d5f: mov ebx, dword ptr [edx + eax*4 + 4] */ r_ebx = R32((u32)(r_edx+r_eax*4+0x4u));
    /* 00792d63: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d65: jne 0x792dd3 */ if (!fZ) goto L_00792dd3;
L_00792d67:; BB(0x00792d67);
    /* 00792d67: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d69: jne 0x792d6f */ if (!fZ) goto L_00792d6f;
L_00792d6b:; BB(0x00792d6b);
    /* 00792d6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d6d: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d6f:; BB(0x00792d6f);
    /* 00792d6f: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d72: jne 0x792d78 */ if (!fZ) goto L_00792d78;
L_00792d74:; BB(0x00792d74);
    /* 00792d74: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d76: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d78:; BB(0x00792d78);
    /* 00792d78: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d7b: jne 0x792d81 */ if (!fZ) goto L_00792d81;
L_00792d7d:; BB(0x00792d7d);
    /* 00792d7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d7f: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d81:; BB(0x00792d81);
    /* 00792d81: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d84: jne 0x792d8a */ if (!fZ) goto L_00792d8a;
L_00792d86:; BB(0x00792d86);
    /* 00792d86: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d88: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d8a:; BB(0x00792d8a);
    /* 00792d8a: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d8d: jne 0x792d93 */ if (!fZ) goto L_00792d93;
L_00792d8f:; BB(0x00792d8f);
    /* 00792d8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d91: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d93:; BB(0x00792d93);
    /* 00792d93: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d96: jne 0x792d9c */ if (!fZ) goto L_00792d9c;
L_00792d98:; BB(0x00792d98);
    /* 00792d98: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d9a: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d9c:; BB(0x00792d9c);
    /* 00792d9c: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d9f: jne 0x792da5 */ if (!fZ) goto L_00792da5;
L_00792da1:; BB(0x00792da1);
    /* 00792da1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792da3: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792da5:; BB(0x00792da5);
    /* 00792da5: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792da8: jne 0x792dae */ if (!fZ) goto L_00792dae;
L_00792daa:; BB(0x00792daa);
    /* 00792daa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dac: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792dae:; BB(0x00792dae);
    /* 00792dae: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792db1: jne 0x792db7 */ if (!fZ) goto L_00792db7;
L_00792db3:; BB(0x00792db3);
    /* 00792db3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792db5: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792db7:; BB(0x00792db7);
    /* 00792db7: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dba: jne 0x792dc0 */ if (!fZ) goto L_00792dc0;
L_00792dbc:; BB(0x00792dbc);
    /* 00792dbc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dbe: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792dc0:; BB(0x00792dc0);
    /* 00792dc0: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dc3: jne 0x792dd3 */ if (!fZ) goto L_00792dd3;
L_00792dc5:; BB(0x00792dc5);
    /* 00792dc5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dc7: je 0x792dd3 */ if (fZ) goto L_00792dd3;
L_00792dc9:; BB(0x00792dc9);
    /* 00792dc9: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00792dd0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792dd1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792dd2: ret  */ FN_RET(0x00792de5); r_esp += 4; return;
L_00792dd3:; BB(0x00792dd3);
    /* 00792dd3: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00792dd6: ja 0x792ed6 */ if ((!fC&&!fZ)) goto L_00792ed6;
L_00792ddc:; BB(0x00792ddc);
    /* 00792ddc: mov ebx, dword ptr [ecx*4 + 0x97ac58] */ r_ebx = R32((u32)(r_ecx*4+0x97ac58u));
    /* 00792de3: jmp ebx */ { u32 t = r_ebx; jmp_ind(t); return; }
L_00792de5:; BB(0x00792de5);
    /* 00792de5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792de7: je 0x792f16 */ if (fZ) goto L_00792f16;
L_00792ded:; BB(0x00792ded);
    /* 00792ded: mov eax, dword ptr [edx + eax*4 + 4] */ r_eax = R32((u32)(r_edx+r_eax*4+0x4u));
L_00792df1:; BB(0x00792df1);
    /* 00792df1: mov dword ptr [0xa0f698], eax */ W32((u32)(0xa0f698u), r_eax);
    /* 00792df6: jmp 0x792ed6 */ goto L_00792ed6;
L_00792ed6:; BB(0x00792ed6);
    /* 00792ed6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00792ed9: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792edc: jl 0x792d56 */ if ((fS!=fO)) goto L_00792d56;
L_00792ee2:; BB(0x00792ee2);
    /* 00792ee2: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00792ee8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792eea: je 0x792f05 */ if (fZ) goto L_00792f05;
L_00792eec:; BB(0x00792eec);
    /* 00792eec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00792eee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792ef0: je 0x792f05 */ if (fZ) goto L_00792f05;
L_00792ef2:; BB(0x00792ef2);
    /* 00792ef2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00792ef4:; BB(0x00792ef4);
    /* 00792ef4: movzx ebx, byte ptr [edx + eax*8] */ r_ebx = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00792ef8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00792efb: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792efe: jge 0x792f6a */ if ((fS==fO)) goto L_00792f6a;
L_00792f00:; BB(0x00792f00);
    /* 00792f00: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00792f03: jl 0x792ef4 */ if ((fS!=fO)) goto L_00792ef4;
L_00792f05:; BB(0x00792f05);
    /* 00792f05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792f06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792f07: ret  */ FN_RET(0x00792de5); r_esp += 4; return;
L_00792f16:; BB(0x00792f16);
    /* 00792f16: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00792f18: jmp 0x792df1 */ goto L_00792df1;
L_00792f6a:; BB(0x00792f6a);
    /* 00792f6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00792f6c: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x792f71u); f_00792f98();
    /* 00792f71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792f72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792f73: ret  */ FN_RET(0x00792de5); r_esp += 4; return;
}

void f_00792dfb(void)
{
    FN_ENTER(0x00792dfb);
    goto L_00792dfb;
L_00792d56:; BB(0x00792d56);
    /* 00792d56: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00792d58: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 00792d5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d5d: je 0x792d67 */ if (fZ) goto L_00792d67;
L_00792d5f:; BB(0x00792d5f);
    /* 00792d5f: mov ebx, dword ptr [edx + eax*4 + 4] */ r_ebx = R32((u32)(r_edx+r_eax*4+0x4u));
    /* 00792d63: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d65: jne 0x792dd3 */ if (!fZ) goto L_00792dd3;
L_00792d67:; BB(0x00792d67);
    /* 00792d67: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d69: jne 0x792d6f */ if (!fZ) goto L_00792d6f;
L_00792d6b:; BB(0x00792d6b);
    /* 00792d6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d6d: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d6f:; BB(0x00792d6f);
    /* 00792d6f: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d72: jne 0x792d78 */ if (!fZ) goto L_00792d78;
L_00792d74:; BB(0x00792d74);
    /* 00792d74: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d76: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d78:; BB(0x00792d78);
    /* 00792d78: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d7b: jne 0x792d81 */ if (!fZ) goto L_00792d81;
L_00792d7d:; BB(0x00792d7d);
    /* 00792d7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d7f: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d81:; BB(0x00792d81);
    /* 00792d81: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d84: jne 0x792d8a */ if (!fZ) goto L_00792d8a;
L_00792d86:; BB(0x00792d86);
    /* 00792d86: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d88: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d8a:; BB(0x00792d8a);
    /* 00792d8a: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d8d: jne 0x792d93 */ if (!fZ) goto L_00792d93;
L_00792d8f:; BB(0x00792d8f);
    /* 00792d8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d91: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d93:; BB(0x00792d93);
    /* 00792d93: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d96: jne 0x792d9c */ if (!fZ) goto L_00792d9c;
L_00792d98:; BB(0x00792d98);
    /* 00792d98: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d9a: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d9c:; BB(0x00792d9c);
    /* 00792d9c: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d9f: jne 0x792da5 */ if (!fZ) goto L_00792da5;
L_00792da1:; BB(0x00792da1);
    /* 00792da1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792da3: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792da5:; BB(0x00792da5);
    /* 00792da5: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792da8: jne 0x792dae */ if (!fZ) goto L_00792dae;
L_00792daa:; BB(0x00792daa);
    /* 00792daa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dac: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792dae:; BB(0x00792dae);
    /* 00792dae: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792db1: jne 0x792db7 */ if (!fZ) goto L_00792db7;
L_00792db3:; BB(0x00792db3);
    /* 00792db3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792db5: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792db7:; BB(0x00792db7);
    /* 00792db7: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dba: jne 0x792dc0 */ if (!fZ) goto L_00792dc0;
L_00792dbc:; BB(0x00792dbc);
    /* 00792dbc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dbe: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792dc0:; BB(0x00792dc0);
    /* 00792dc0: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dc3: jne 0x792dd3 */ if (!fZ) goto L_00792dd3;
L_00792dc5:; BB(0x00792dc5);
    /* 00792dc5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dc7: je 0x792dd3 */ if (fZ) goto L_00792dd3;
L_00792dc9:; BB(0x00792dc9);
    /* 00792dc9: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00792dd0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792dd1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792dd2: ret  */ FN_RET(0x00792dfb); r_esp += 4; return;
L_00792dd3:; BB(0x00792dd3);
    /* 00792dd3: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00792dd6: ja 0x792ed6 */ if ((!fC&&!fZ)) goto L_00792ed6;
L_00792ddc:; BB(0x00792ddc);
    /* 00792ddc: mov ebx, dword ptr [ecx*4 + 0x97ac58] */ r_ebx = R32((u32)(r_ecx*4+0x97ac58u));
    /* 00792de3: jmp ebx */ { u32 t = r_ebx; jmp_ind(t); return; }
L_00792dfb:; BB(0x00792dfb);
    /* 00792dfb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dfd: je 0x792f1d */ if (fZ) goto L_00792f1d;
L_00792e03:; BB(0x00792e03);
    /* 00792e03: mov eax, dword ptr [edx + eax*4 + 4] */ r_eax = R32((u32)(r_edx+r_eax*4+0x4u));
L_00792e07:; BB(0x00792e07);
    /* 00792e07: mov dword ptr [0xa0f688], eax */ W32((u32)(0xa0f688u), r_eax);
    /* 00792e0c: jmp 0x792ed6 */ goto L_00792ed6;
L_00792ed6:; BB(0x00792ed6);
    /* 00792ed6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00792ed9: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792edc: jl 0x792d56 */ if ((fS!=fO)) goto L_00792d56;
L_00792ee2:; BB(0x00792ee2);
    /* 00792ee2: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00792ee8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792eea: je 0x792f05 */ if (fZ) goto L_00792f05;
L_00792eec:; BB(0x00792eec);
    /* 00792eec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00792eee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792ef0: je 0x792f05 */ if (fZ) goto L_00792f05;
L_00792ef2:; BB(0x00792ef2);
    /* 00792ef2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00792ef4:; BB(0x00792ef4);
    /* 00792ef4: movzx ebx, byte ptr [edx + eax*8] */ r_ebx = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00792ef8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00792efb: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792efe: jge 0x792f6a */ if ((fS==fO)) goto L_00792f6a;
L_00792f00:; BB(0x00792f00);
    /* 00792f00: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00792f03: jl 0x792ef4 */ if ((fS!=fO)) goto L_00792ef4;
L_00792f05:; BB(0x00792f05);
    /* 00792f05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792f06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792f07: ret  */ FN_RET(0x00792dfb); r_esp += 4; return;
L_00792f1d:; BB(0x00792f1d);
    /* 00792f1d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00792f1f: jmp 0x792e07 */ goto L_00792e07;
L_00792f6a:; BB(0x00792f6a);
    /* 00792f6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00792f6c: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x792f71u); f_00792f98();
    /* 00792f71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792f72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792f73: ret  */ FN_RET(0x00792dfb); r_esp += 4; return;
}

void f_00792e00(void)
{
    FN_ENTER(0x00792e00);
    goto L_00792e00;
L_00792d56:; BB(0x00792d56);
    /* 00792d56: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00792d58: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 00792d5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d5d: je 0x792d67 */ if (fZ) goto L_00792d67;
L_00792d5f:; BB(0x00792d5f);
    /* 00792d5f: mov ebx, dword ptr [edx + eax*4 + 4] */ r_ebx = R32((u32)(r_edx+r_eax*4+0x4u));
    /* 00792d63: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d65: jne 0x792dd3 */ if (!fZ) goto L_00792dd3;
L_00792d67:; BB(0x00792d67);
    /* 00792d67: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d69: jne 0x792d6f */ if (!fZ) goto L_00792d6f;
L_00792d6b:; BB(0x00792d6b);
    /* 00792d6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d6d: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d6f:; BB(0x00792d6f);
    /* 00792d6f: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d72: jne 0x792d78 */ if (!fZ) goto L_00792d78;
L_00792d74:; BB(0x00792d74);
    /* 00792d74: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d76: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d78:; BB(0x00792d78);
    /* 00792d78: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d7b: jne 0x792d81 */ if (!fZ) goto L_00792d81;
L_00792d7d:; BB(0x00792d7d);
    /* 00792d7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d7f: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d81:; BB(0x00792d81);
    /* 00792d81: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d84: jne 0x792d8a */ if (!fZ) goto L_00792d8a;
L_00792d86:; BB(0x00792d86);
    /* 00792d86: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d88: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d8a:; BB(0x00792d8a);
    /* 00792d8a: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d8d: jne 0x792d93 */ if (!fZ) goto L_00792d93;
L_00792d8f:; BB(0x00792d8f);
    /* 00792d8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d91: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d93:; BB(0x00792d93);
    /* 00792d93: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d96: jne 0x792d9c */ if (!fZ) goto L_00792d9c;
L_00792d98:; BB(0x00792d98);
    /* 00792d98: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d9a: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d9c:; BB(0x00792d9c);
    /* 00792d9c: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d9f: jne 0x792da5 */ if (!fZ) goto L_00792da5;
L_00792da1:; BB(0x00792da1);
    /* 00792da1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792da3: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792da5:; BB(0x00792da5);
    /* 00792da5: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792da8: jne 0x792dae */ if (!fZ) goto L_00792dae;
L_00792daa:; BB(0x00792daa);
    /* 00792daa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dac: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792dae:; BB(0x00792dae);
    /* 00792dae: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792db1: jne 0x792db7 */ if (!fZ) goto L_00792db7;
L_00792db3:; BB(0x00792db3);
    /* 00792db3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792db5: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792db7:; BB(0x00792db7);
    /* 00792db7: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dba: jne 0x792dc0 */ if (!fZ) goto L_00792dc0;
L_00792dbc:; BB(0x00792dbc);
    /* 00792dbc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dbe: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792dc0:; BB(0x00792dc0);
    /* 00792dc0: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dc3: jne 0x792dd3 */ if (!fZ) goto L_00792dd3;
L_00792dc5:; BB(0x00792dc5);
    /* 00792dc5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dc7: je 0x792dd3 */ if (fZ) goto L_00792dd3;
L_00792dc9:; BB(0x00792dc9);
    /* 00792dc9: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00792dd0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792dd1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792dd2: ret  */ FN_RET(0x00792e00); r_esp += 4; return;
L_00792dd3:; BB(0x00792dd3);
    /* 00792dd3: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00792dd6: ja 0x792ed6 */ if ((!fC&&!fZ)) goto L_00792ed6;
L_00792ddc:; BB(0x00792ddc);
    /* 00792ddc: mov ebx, dword ptr [ecx*4 + 0x97ac58] */ r_ebx = R32((u32)(r_ecx*4+0x97ac58u));
    /* 00792de3: jmp ebx */ { u32 t = r_ebx; jmp_ind(t); return; }
L_00792e00:; BB(0x00792e00);
    /* 00792e00: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00792e02: add byte ptr [ebx - 0x5cfb7dbc], cl */ { u32 ad = (u32)(r_ebx+0xa3048244u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00792e08: mov dh, dh */ r_edx = (r_edx & 0xffff00ffu) | ((((u8)(r_edx>>8)) & 0xffu) << 8);
    /* 00792e0a: mov al, byte ptr [0xc5e900] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(0xc5e900u))) & 0xffu);
    /* 00792e0f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00792e11: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792e13: je 0x792f24 */ if (fZ) goto L_00792f24;
L_00792e19:; BB(0x00792e19);
    /* 00792e19: mov eax, dword ptr [edx + eax*4 + 4] */ r_eax = R32((u32)(r_edx+r_eax*4+0x4u));
L_00792e1d:; BB(0x00792e1d);
    /* 00792e1d: mov dword ptr [0xa0f684], eax */ W32((u32)(0xa0f684u), r_eax);
    /* 00792e22: jmp 0x792ed6 */ goto L_00792ed6;
L_00792ed6:; BB(0x00792ed6);
    /* 00792ed6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00792ed9: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792edc: jl 0x792d56 */ if ((fS!=fO)) goto L_00792d56;
L_00792ee2:; BB(0x00792ee2);
    /* 00792ee2: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00792ee8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792eea: je 0x792f05 */ if (fZ) goto L_00792f05;
L_00792eec:; BB(0x00792eec);
    /* 00792eec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00792eee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792ef0: je 0x792f05 */ if (fZ) goto L_00792f05;
L_00792ef2:; BB(0x00792ef2);
    /* 00792ef2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00792ef4:; BB(0x00792ef4);
    /* 00792ef4: movzx ebx, byte ptr [edx + eax*8] */ r_ebx = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00792ef8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00792efb: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792efe: jge 0x792f6a */ if ((fS==fO)) goto L_00792f6a;
L_00792f00:; BB(0x00792f00);
    /* 00792f00: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00792f03: jl 0x792ef4 */ if ((fS!=fO)) goto L_00792ef4;
L_00792f05:; BB(0x00792f05);
    /* 00792f05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792f06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792f07: ret  */ FN_RET(0x00792e00); r_esp += 4; return;
L_00792f24:; BB(0x00792f24);
    /* 00792f24: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00792f26: jmp 0x792e1d */ goto L_00792e1d;
L_00792f6a:; BB(0x00792f6a);
    /* 00792f6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00792f6c: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x792f71u); f_00792f98();
    /* 00792f71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792f72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792f73: ret  */ FN_RET(0x00792e00); r_esp += 4; return;
}

void f_00792e11(void)
{
    FN_ENTER(0x00792e11);
    goto L_00792e11;
L_00792d56:; BB(0x00792d56);
    /* 00792d56: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00792d58: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 00792d5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d5d: je 0x792d67 */ if (fZ) goto L_00792d67;
L_00792d5f:; BB(0x00792d5f);
    /* 00792d5f: mov ebx, dword ptr [edx + eax*4 + 4] */ r_ebx = R32((u32)(r_edx+r_eax*4+0x4u));
    /* 00792d63: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d65: jne 0x792dd3 */ if (!fZ) goto L_00792dd3;
L_00792d67:; BB(0x00792d67);
    /* 00792d67: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d69: jne 0x792d6f */ if (!fZ) goto L_00792d6f;
L_00792d6b:; BB(0x00792d6b);
    /* 00792d6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d6d: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d6f:; BB(0x00792d6f);
    /* 00792d6f: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d72: jne 0x792d78 */ if (!fZ) goto L_00792d78;
L_00792d74:; BB(0x00792d74);
    /* 00792d74: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d76: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d78:; BB(0x00792d78);
    /* 00792d78: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d7b: jne 0x792d81 */ if (!fZ) goto L_00792d81;
L_00792d7d:; BB(0x00792d7d);
    /* 00792d7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d7f: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d81:; BB(0x00792d81);
    /* 00792d81: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d84: jne 0x792d8a */ if (!fZ) goto L_00792d8a;
L_00792d86:; BB(0x00792d86);
    /* 00792d86: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d88: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d8a:; BB(0x00792d8a);
    /* 00792d8a: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d8d: jne 0x792d93 */ if (!fZ) goto L_00792d93;
L_00792d8f:; BB(0x00792d8f);
    /* 00792d8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d91: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d93:; BB(0x00792d93);
    /* 00792d93: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d96: jne 0x792d9c */ if (!fZ) goto L_00792d9c;
L_00792d98:; BB(0x00792d98);
    /* 00792d98: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d9a: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d9c:; BB(0x00792d9c);
    /* 00792d9c: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d9f: jne 0x792da5 */ if (!fZ) goto L_00792da5;
L_00792da1:; BB(0x00792da1);
    /* 00792da1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792da3: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792da5:; BB(0x00792da5);
    /* 00792da5: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792da8: jne 0x792dae */ if (!fZ) goto L_00792dae;
L_00792daa:; BB(0x00792daa);
    /* 00792daa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dac: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792dae:; BB(0x00792dae);
    /* 00792dae: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792db1: jne 0x792db7 */ if (!fZ) goto L_00792db7;
L_00792db3:; BB(0x00792db3);
    /* 00792db3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792db5: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792db7:; BB(0x00792db7);
    /* 00792db7: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dba: jne 0x792dc0 */ if (!fZ) goto L_00792dc0;
L_00792dbc:; BB(0x00792dbc);
    /* 00792dbc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dbe: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792dc0:; BB(0x00792dc0);
    /* 00792dc0: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dc3: jne 0x792dd3 */ if (!fZ) goto L_00792dd3;
L_00792dc5:; BB(0x00792dc5);
    /* 00792dc5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dc7: je 0x792dd3 */ if (fZ) goto L_00792dd3;
L_00792dc9:; BB(0x00792dc9);
    /* 00792dc9: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00792dd0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792dd1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792dd2: ret  */ FN_RET(0x00792e11); r_esp += 4; return;
L_00792dd3:; BB(0x00792dd3);
    /* 00792dd3: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00792dd6: ja 0x792ed6 */ if ((!fC&&!fZ)) goto L_00792ed6;
L_00792ddc:; BB(0x00792ddc);
    /* 00792ddc: mov ebx, dword ptr [ecx*4 + 0x97ac58] */ r_ebx = R32((u32)(r_ecx*4+0x97ac58u));
    /* 00792de3: jmp ebx */ { u32 t = r_ebx; jmp_ind(t); return; }
L_00792e11:; BB(0x00792e11);
    /* 00792e11: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792e13: je 0x792f24 */ if (fZ) goto L_00792f24;
L_00792e19:; BB(0x00792e19);
    /* 00792e19: mov eax, dword ptr [edx + eax*4 + 4] */ r_eax = R32((u32)(r_edx+r_eax*4+0x4u));
L_00792e1d:; BB(0x00792e1d);
    /* 00792e1d: mov dword ptr [0xa0f684], eax */ W32((u32)(0xa0f684u), r_eax);
    /* 00792e22: jmp 0x792ed6 */ goto L_00792ed6;
L_00792ed6:; BB(0x00792ed6);
    /* 00792ed6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00792ed9: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792edc: jl 0x792d56 */ if ((fS!=fO)) goto L_00792d56;
L_00792ee2:; BB(0x00792ee2);
    /* 00792ee2: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00792ee8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792eea: je 0x792f05 */ if (fZ) goto L_00792f05;
L_00792eec:; BB(0x00792eec);
    /* 00792eec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00792eee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792ef0: je 0x792f05 */ if (fZ) goto L_00792f05;
L_00792ef2:; BB(0x00792ef2);
    /* 00792ef2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00792ef4:; BB(0x00792ef4);
    /* 00792ef4: movzx ebx, byte ptr [edx + eax*8] */ r_ebx = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00792ef8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00792efb: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792efe: jge 0x792f6a */ if ((fS==fO)) goto L_00792f6a;
L_00792f00:; BB(0x00792f00);
    /* 00792f00: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00792f03: jl 0x792ef4 */ if ((fS!=fO)) goto L_00792ef4;
L_00792f05:; BB(0x00792f05);
    /* 00792f05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792f06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792f07: ret  */ FN_RET(0x00792e11); r_esp += 4; return;
L_00792f24:; BB(0x00792f24);
    /* 00792f24: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00792f26: jmp 0x792e1d */ goto L_00792e1d;
L_00792f6a:; BB(0x00792f6a);
    /* 00792f6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00792f6c: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x792f71u); f_00792f98();
    /* 00792f71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792f72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792f73: ret  */ FN_RET(0x00792e11); r_esp += 4; return;
}

void f_00792e27(void)
{
    FN_ENTER(0x00792e27);
    goto L_00792e27;
L_00792d56:; BB(0x00792d56);
    /* 00792d56: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00792d58: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 00792d5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d5d: je 0x792d67 */ if (fZ) goto L_00792d67;
L_00792d5f:; BB(0x00792d5f);
    /* 00792d5f: mov ebx, dword ptr [edx + eax*4 + 4] */ r_ebx = R32((u32)(r_edx+r_eax*4+0x4u));
    /* 00792d63: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d65: jne 0x792dd3 */ if (!fZ) goto L_00792dd3;
L_00792d67:; BB(0x00792d67);
    /* 00792d67: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d69: jne 0x792d6f */ if (!fZ) goto L_00792d6f;
L_00792d6b:; BB(0x00792d6b);
    /* 00792d6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d6d: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d6f:; BB(0x00792d6f);
    /* 00792d6f: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d72: jne 0x792d78 */ if (!fZ) goto L_00792d78;
L_00792d74:; BB(0x00792d74);
    /* 00792d74: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d76: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d78:; BB(0x00792d78);
    /* 00792d78: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d7b: jne 0x792d81 */ if (!fZ) goto L_00792d81;
L_00792d7d:; BB(0x00792d7d);
    /* 00792d7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d7f: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d81:; BB(0x00792d81);
    /* 00792d81: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d84: jne 0x792d8a */ if (!fZ) goto L_00792d8a;
L_00792d86:; BB(0x00792d86);
    /* 00792d86: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d88: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d8a:; BB(0x00792d8a);
    /* 00792d8a: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d8d: jne 0x792d93 */ if (!fZ) goto L_00792d93;
L_00792d8f:; BB(0x00792d8f);
    /* 00792d8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d91: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d93:; BB(0x00792d93);
    /* 00792d93: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d96: jne 0x792d9c */ if (!fZ) goto L_00792d9c;
L_00792d98:; BB(0x00792d98);
    /* 00792d98: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d9a: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d9c:; BB(0x00792d9c);
    /* 00792d9c: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d9f: jne 0x792da5 */ if (!fZ) goto L_00792da5;
L_00792da1:; BB(0x00792da1);
    /* 00792da1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792da3: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792da5:; BB(0x00792da5);
    /* 00792da5: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792da8: jne 0x792dae */ if (!fZ) goto L_00792dae;
L_00792daa:; BB(0x00792daa);
    /* 00792daa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dac: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792dae:; BB(0x00792dae);
    /* 00792dae: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792db1: jne 0x792db7 */ if (!fZ) goto L_00792db7;
L_00792db3:; BB(0x00792db3);
    /* 00792db3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792db5: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792db7:; BB(0x00792db7);
    /* 00792db7: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dba: jne 0x792dc0 */ if (!fZ) goto L_00792dc0;
L_00792dbc:; BB(0x00792dbc);
    /* 00792dbc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dbe: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792dc0:; BB(0x00792dc0);
    /* 00792dc0: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dc3: jne 0x792dd3 */ if (!fZ) goto L_00792dd3;
L_00792dc5:; BB(0x00792dc5);
    /* 00792dc5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dc7: je 0x792dd3 */ if (fZ) goto L_00792dd3;
L_00792dc9:; BB(0x00792dc9);
    /* 00792dc9: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00792dd0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792dd1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792dd2: ret  */ FN_RET(0x00792e27); r_esp += 4; return;
L_00792dd3:; BB(0x00792dd3);
    /* 00792dd3: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00792dd6: ja 0x792ed6 */ if ((!fC&&!fZ)) goto L_00792ed6;
L_00792ddc:; BB(0x00792ddc);
    /* 00792ddc: mov ebx, dword ptr [ecx*4 + 0x97ac58] */ r_ebx = R32((u32)(r_ecx*4+0x97ac58u));
    /* 00792de3: jmp ebx */ { u32 t = r_ebx; jmp_ind(t); return; }
L_00792e27:; BB(0x00792e27);
    /* 00792e27: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792e29: je 0x792f2b */ if (fZ) goto L_00792f2b;
L_00792e2f:; BB(0x00792e2f);
    /* 00792e2f: mov eax, dword ptr [edx + eax*4 + 4] */ r_eax = R32((u32)(r_edx+r_eax*4+0x4u));
L_00792e33:; BB(0x00792e33);
    /* 00792e33: mov dword ptr [0xa0f68c], eax */ W32((u32)(0xa0f68cu), r_eax);
    /* 00792e38: jmp 0x792ed6 */ goto L_00792ed6;
L_00792ed6:; BB(0x00792ed6);
    /* 00792ed6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00792ed9: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792edc: jl 0x792d56 */ if ((fS!=fO)) goto L_00792d56;
L_00792ee2:; BB(0x00792ee2);
    /* 00792ee2: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00792ee8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792eea: je 0x792f05 */ if (fZ) goto L_00792f05;
L_00792eec:; BB(0x00792eec);
    /* 00792eec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00792eee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792ef0: je 0x792f05 */ if (fZ) goto L_00792f05;
L_00792ef2:; BB(0x00792ef2);
    /* 00792ef2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00792ef4:; BB(0x00792ef4);
    /* 00792ef4: movzx ebx, byte ptr [edx + eax*8] */ r_ebx = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00792ef8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00792efb: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792efe: jge 0x792f6a */ if ((fS==fO)) goto L_00792f6a;
L_00792f00:; BB(0x00792f00);
    /* 00792f00: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00792f03: jl 0x792ef4 */ if ((fS!=fO)) goto L_00792ef4;
L_00792f05:; BB(0x00792f05);
    /* 00792f05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792f06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792f07: ret  */ FN_RET(0x00792e27); r_esp += 4; return;
L_00792f2b:; BB(0x00792f2b);
    /* 00792f2b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00792f2d: jmp 0x792e33 */ goto L_00792e33;
L_00792f6a:; BB(0x00792f6a);
    /* 00792f6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00792f6c: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x792f71u); f_00792f98();
    /* 00792f71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792f72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792f73: ret  */ FN_RET(0x00792e27); r_esp += 4; return;
}

void f_00792e3d(void)
{
    FN_ENTER(0x00792e3d);
    goto L_00792e3d;
L_00792d56:; BB(0x00792d56);
    /* 00792d56: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00792d58: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 00792d5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d5d: je 0x792d67 */ if (fZ) goto L_00792d67;
L_00792d5f:; BB(0x00792d5f);
    /* 00792d5f: mov ebx, dword ptr [edx + eax*4 + 4] */ r_ebx = R32((u32)(r_edx+r_eax*4+0x4u));
    /* 00792d63: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d65: jne 0x792dd3 */ if (!fZ) goto L_00792dd3;
L_00792d67:; BB(0x00792d67);
    /* 00792d67: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d69: jne 0x792d6f */ if (!fZ) goto L_00792d6f;
L_00792d6b:; BB(0x00792d6b);
    /* 00792d6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d6d: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d6f:; BB(0x00792d6f);
    /* 00792d6f: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d72: jne 0x792d78 */ if (!fZ) goto L_00792d78;
L_00792d74:; BB(0x00792d74);
    /* 00792d74: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d76: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d78:; BB(0x00792d78);
    /* 00792d78: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d7b: jne 0x792d81 */ if (!fZ) goto L_00792d81;
L_00792d7d:; BB(0x00792d7d);
    /* 00792d7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d7f: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d81:; BB(0x00792d81);
    /* 00792d81: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d84: jne 0x792d8a */ if (!fZ) goto L_00792d8a;
L_00792d86:; BB(0x00792d86);
    /* 00792d86: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d88: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d8a:; BB(0x00792d8a);
    /* 00792d8a: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d8d: jne 0x792d93 */ if (!fZ) goto L_00792d93;
L_00792d8f:; BB(0x00792d8f);
    /* 00792d8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d91: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d93:; BB(0x00792d93);
    /* 00792d93: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d96: jne 0x792d9c */ if (!fZ) goto L_00792d9c;
L_00792d98:; BB(0x00792d98);
    /* 00792d98: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d9a: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d9c:; BB(0x00792d9c);
    /* 00792d9c: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d9f: jne 0x792da5 */ if (!fZ) goto L_00792da5;
L_00792da1:; BB(0x00792da1);
    /* 00792da1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792da3: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792da5:; BB(0x00792da5);
    /* 00792da5: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792da8: jne 0x792dae */ if (!fZ) goto L_00792dae;
L_00792daa:; BB(0x00792daa);
    /* 00792daa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dac: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792dae:; BB(0x00792dae);
    /* 00792dae: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792db1: jne 0x792db7 */ if (!fZ) goto L_00792db7;
L_00792db3:; BB(0x00792db3);
    /* 00792db3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792db5: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792db7:; BB(0x00792db7);
    /* 00792db7: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dba: jne 0x792dc0 */ if (!fZ) goto L_00792dc0;
L_00792dbc:; BB(0x00792dbc);
    /* 00792dbc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dbe: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792dc0:; BB(0x00792dc0);
    /* 00792dc0: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dc3: jne 0x792dd3 */ if (!fZ) goto L_00792dd3;
L_00792dc5:; BB(0x00792dc5);
    /* 00792dc5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dc7: je 0x792dd3 */ if (fZ) goto L_00792dd3;
L_00792dc9:; BB(0x00792dc9);
    /* 00792dc9: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00792dd0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792dd1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792dd2: ret  */ FN_RET(0x00792e3d); r_esp += 4; return;
L_00792dd3:; BB(0x00792dd3);
    /* 00792dd3: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00792dd6: ja 0x792ed6 */ if ((!fC&&!fZ)) goto L_00792ed6;
L_00792ddc:; BB(0x00792ddc);
    /* 00792ddc: mov ebx, dword ptr [ecx*4 + 0x97ac58] */ r_ebx = R32((u32)(r_ecx*4+0x97ac58u));
    /* 00792de3: jmp ebx */ { u32 t = r_ebx; jmp_ind(t); return; }
L_00792e3d:; BB(0x00792e3d);
    /* 00792e3d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792e3f: je 0x792f32 */ if (fZ) goto L_00792f32;
L_00792e45:; BB(0x00792e45);
    /* 00792e45: mov eax, dword ptr [edx + eax*4 + 4] */ r_eax = R32((u32)(r_edx+r_eax*4+0x4u));
L_00792e49:; BB(0x00792e49);
    /* 00792e49: mov dword ptr [0xa0f680], eax */ W32((u32)(0xa0f680u), r_eax);
    /* 00792e4e: jmp 0x792ed6 */ goto L_00792ed6;
L_00792ed6:; BB(0x00792ed6);
    /* 00792ed6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00792ed9: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792edc: jl 0x792d56 */ if ((fS!=fO)) goto L_00792d56;
L_00792ee2:; BB(0x00792ee2);
    /* 00792ee2: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00792ee8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792eea: je 0x792f05 */ if (fZ) goto L_00792f05;
L_00792eec:; BB(0x00792eec);
    /* 00792eec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00792eee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792ef0: je 0x792f05 */ if (fZ) goto L_00792f05;
L_00792ef2:; BB(0x00792ef2);
    /* 00792ef2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00792ef4:; BB(0x00792ef4);
    /* 00792ef4: movzx ebx, byte ptr [edx + eax*8] */ r_ebx = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00792ef8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00792efb: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792efe: jge 0x792f6a */ if ((fS==fO)) goto L_00792f6a;
L_00792f00:; BB(0x00792f00);
    /* 00792f00: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00792f03: jl 0x792ef4 */ if ((fS!=fO)) goto L_00792ef4;
L_00792f05:; BB(0x00792f05);
    /* 00792f05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792f06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792f07: ret  */ FN_RET(0x00792e3d); r_esp += 4; return;
L_00792f32:; BB(0x00792f32);
    /* 00792f32: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00792f34: jmp 0x792e49 */ goto L_00792e49;
L_00792f6a:; BB(0x00792f6a);
    /* 00792f6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00792f6c: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x792f71u); f_00792f98();
    /* 00792f71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792f72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792f73: ret  */ FN_RET(0x00792e3d); r_esp += 4; return;
}

void f_00792e53(void)
{
    FN_ENTER(0x00792e53);
    goto L_00792e53;
L_00792d56:; BB(0x00792d56);
    /* 00792d56: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00792d58: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 00792d5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d5d: je 0x792d67 */ if (fZ) goto L_00792d67;
L_00792d5f:; BB(0x00792d5f);
    /* 00792d5f: mov ebx, dword ptr [edx + eax*4 + 4] */ r_ebx = R32((u32)(r_edx+r_eax*4+0x4u));
    /* 00792d63: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d65: jne 0x792dd3 */ if (!fZ) goto L_00792dd3;
L_00792d67:; BB(0x00792d67);
    /* 00792d67: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d69: jne 0x792d6f */ if (!fZ) goto L_00792d6f;
L_00792d6b:; BB(0x00792d6b);
    /* 00792d6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d6d: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d6f:; BB(0x00792d6f);
    /* 00792d6f: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d72: jne 0x792d78 */ if (!fZ) goto L_00792d78;
L_00792d74:; BB(0x00792d74);
    /* 00792d74: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d76: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d78:; BB(0x00792d78);
    /* 00792d78: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d7b: jne 0x792d81 */ if (!fZ) goto L_00792d81;
L_00792d7d:; BB(0x00792d7d);
    /* 00792d7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d7f: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d81:; BB(0x00792d81);
    /* 00792d81: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d84: jne 0x792d8a */ if (!fZ) goto L_00792d8a;
L_00792d86:; BB(0x00792d86);
    /* 00792d86: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d88: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d8a:; BB(0x00792d8a);
    /* 00792d8a: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d8d: jne 0x792d93 */ if (!fZ) goto L_00792d93;
L_00792d8f:; BB(0x00792d8f);
    /* 00792d8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d91: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d93:; BB(0x00792d93);
    /* 00792d93: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d96: jne 0x792d9c */ if (!fZ) goto L_00792d9c;
L_00792d98:; BB(0x00792d98);
    /* 00792d98: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d9a: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d9c:; BB(0x00792d9c);
    /* 00792d9c: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d9f: jne 0x792da5 */ if (!fZ) goto L_00792da5;
L_00792da1:; BB(0x00792da1);
    /* 00792da1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792da3: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792da5:; BB(0x00792da5);
    /* 00792da5: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792da8: jne 0x792dae */ if (!fZ) goto L_00792dae;
L_00792daa:; BB(0x00792daa);
    /* 00792daa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dac: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792dae:; BB(0x00792dae);
    /* 00792dae: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792db1: jne 0x792db7 */ if (!fZ) goto L_00792db7;
L_00792db3:; BB(0x00792db3);
    /* 00792db3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792db5: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792db7:; BB(0x00792db7);
    /* 00792db7: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dba: jne 0x792dc0 */ if (!fZ) goto L_00792dc0;
L_00792dbc:; BB(0x00792dbc);
    /* 00792dbc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dbe: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792dc0:; BB(0x00792dc0);
    /* 00792dc0: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dc3: jne 0x792dd3 */ if (!fZ) goto L_00792dd3;
L_00792dc5:; BB(0x00792dc5);
    /* 00792dc5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dc7: je 0x792dd3 */ if (fZ) goto L_00792dd3;
L_00792dc9:; BB(0x00792dc9);
    /* 00792dc9: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00792dd0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792dd1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792dd2: ret  */ FN_RET(0x00792e53); r_esp += 4; return;
L_00792dd3:; BB(0x00792dd3);
    /* 00792dd3: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00792dd6: ja 0x792ed6 */ if ((!fC&&!fZ)) goto L_00792ed6;
L_00792ddc:; BB(0x00792ddc);
    /* 00792ddc: mov ebx, dword ptr [ecx*4 + 0x97ac58] */ r_ebx = R32((u32)(r_ecx*4+0x97ac58u));
    /* 00792de3: jmp ebx */ { u32 t = r_ebx; jmp_ind(t); return; }
L_00792e53:; BB(0x00792e53);
    /* 00792e53: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792e55: je 0x792f39 */ if (fZ) goto L_00792f39;
L_00792e5b:; BB(0x00792e5b);
    /* 00792e5b: mov eax, dword ptr [edx + eax*4 + 4] */ r_eax = R32((u32)(r_edx+r_eax*4+0x4u));
L_00792e5f:; BB(0x00792e5f);
    /* 00792e5f: mov dword ptr [0xa0f67c], eax */ W32((u32)(0xa0f67cu), r_eax);
    /* 00792e64: jmp 0x792ed6 */ goto L_00792ed6;
L_00792ed6:; BB(0x00792ed6);
    /* 00792ed6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00792ed9: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792edc: jl 0x792d56 */ if ((fS!=fO)) goto L_00792d56;
L_00792ee2:; BB(0x00792ee2);
    /* 00792ee2: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00792ee8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792eea: je 0x792f05 */ if (fZ) goto L_00792f05;
L_00792eec:; BB(0x00792eec);
    /* 00792eec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00792eee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792ef0: je 0x792f05 */ if (fZ) goto L_00792f05;
L_00792ef2:; BB(0x00792ef2);
    /* 00792ef2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00792ef4:; BB(0x00792ef4);
    /* 00792ef4: movzx ebx, byte ptr [edx + eax*8] */ r_ebx = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00792ef8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00792efb: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792efe: jge 0x792f6a */ if ((fS==fO)) goto L_00792f6a;
L_00792f00:; BB(0x00792f00);
    /* 00792f00: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00792f03: jl 0x792ef4 */ if ((fS!=fO)) goto L_00792ef4;
L_00792f05:; BB(0x00792f05);
    /* 00792f05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792f06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792f07: ret  */ FN_RET(0x00792e53); r_esp += 4; return;
L_00792f39:; BB(0x00792f39);
    /* 00792f39: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00792f3b: jmp 0x792e5f */ goto L_00792e5f;
L_00792f6a:; BB(0x00792f6a);
    /* 00792f6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00792f6c: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x792f71u); f_00792f98();
    /* 00792f71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792f72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792f73: ret  */ FN_RET(0x00792e53); r_esp += 4; return;
}

void f_00792e66(void)
{
    FN_ENTER(0x00792e66);
    goto L_00792e66;
L_00792d56:; BB(0x00792d56);
    /* 00792d56: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00792d58: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 00792d5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d5d: je 0x792d67 */ if (fZ) goto L_00792d67;
L_00792d5f:; BB(0x00792d5f);
    /* 00792d5f: mov ebx, dword ptr [edx + eax*4 + 4] */ r_ebx = R32((u32)(r_edx+r_eax*4+0x4u));
    /* 00792d63: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d65: jne 0x792dd3 */ if (!fZ) goto L_00792dd3;
L_00792d67:; BB(0x00792d67);
    /* 00792d67: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d69: jne 0x792d6f */ if (!fZ) goto L_00792d6f;
L_00792d6b:; BB(0x00792d6b);
    /* 00792d6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d6d: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d6f:; BB(0x00792d6f);
    /* 00792d6f: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d72: jne 0x792d78 */ if (!fZ) goto L_00792d78;
L_00792d74:; BB(0x00792d74);
    /* 00792d74: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d76: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d78:; BB(0x00792d78);
    /* 00792d78: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d7b: jne 0x792d81 */ if (!fZ) goto L_00792d81;
L_00792d7d:; BB(0x00792d7d);
    /* 00792d7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d7f: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d81:; BB(0x00792d81);
    /* 00792d81: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d84: jne 0x792d8a */ if (!fZ) goto L_00792d8a;
L_00792d86:; BB(0x00792d86);
    /* 00792d86: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d88: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d8a:; BB(0x00792d8a);
    /* 00792d8a: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d8d: jne 0x792d93 */ if (!fZ) goto L_00792d93;
L_00792d8f:; BB(0x00792d8f);
    /* 00792d8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d91: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d93:; BB(0x00792d93);
    /* 00792d93: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d96: jne 0x792d9c */ if (!fZ) goto L_00792d9c;
L_00792d98:; BB(0x00792d98);
    /* 00792d98: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d9a: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d9c:; BB(0x00792d9c);
    /* 00792d9c: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d9f: jne 0x792da5 */ if (!fZ) goto L_00792da5;
L_00792da1:; BB(0x00792da1);
    /* 00792da1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792da3: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792da5:; BB(0x00792da5);
    /* 00792da5: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792da8: jne 0x792dae */ if (!fZ) goto L_00792dae;
L_00792daa:; BB(0x00792daa);
    /* 00792daa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dac: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792dae:; BB(0x00792dae);
    /* 00792dae: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792db1: jne 0x792db7 */ if (!fZ) goto L_00792db7;
L_00792db3:; BB(0x00792db3);
    /* 00792db3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792db5: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792db7:; BB(0x00792db7);
    /* 00792db7: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dba: jne 0x792dc0 */ if (!fZ) goto L_00792dc0;
L_00792dbc:; BB(0x00792dbc);
    /* 00792dbc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dbe: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792dc0:; BB(0x00792dc0);
    /* 00792dc0: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dc3: jne 0x792dd3 */ if (!fZ) goto L_00792dd3;
L_00792dc5:; BB(0x00792dc5);
    /* 00792dc5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dc7: je 0x792dd3 */ if (fZ) goto L_00792dd3;
L_00792dc9:; BB(0x00792dc9);
    /* 00792dc9: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00792dd0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792dd1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792dd2: ret  */ FN_RET(0x00792e66); r_esp += 4; return;
L_00792dd3:; BB(0x00792dd3);
    /* 00792dd3: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00792dd6: ja 0x792ed6 */ if ((!fC&&!fZ)) goto L_00792ed6;
L_00792ddc:; BB(0x00792ddc);
    /* 00792ddc: mov ebx, dword ptr [ecx*4 + 0x97ac58] */ r_ebx = R32((u32)(r_ecx*4+0x97ac58u));
    /* 00792de3: jmp ebx */ { u32 t = r_ebx; jmp_ind(t); return; }
L_00792e66:; BB(0x00792e66);
    /* 00792e66: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792e68: je 0x792f40 */ if (fZ) goto L_00792f40;
L_00792e6e:; BB(0x00792e6e);
    /* 00792e6e: mov eax, dword ptr [edx + eax*4 + 4] */ r_eax = R32((u32)(r_edx+r_eax*4+0x4u));
L_00792e72:; BB(0x00792e72);
    /* 00792e72: mov dword ptr [0xa0f678], eax */ W32((u32)(0xa0f678u), r_eax);
    /* 00792e77: jmp 0x792ed6 */ goto L_00792ed6;
L_00792ed6:; BB(0x00792ed6);
    /* 00792ed6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00792ed9: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792edc: jl 0x792d56 */ if ((fS!=fO)) goto L_00792d56;
L_00792ee2:; BB(0x00792ee2);
    /* 00792ee2: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00792ee8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792eea: je 0x792f05 */ if (fZ) goto L_00792f05;
L_00792eec:; BB(0x00792eec);
    /* 00792eec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00792eee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792ef0: je 0x792f05 */ if (fZ) goto L_00792f05;
L_00792ef2:; BB(0x00792ef2);
    /* 00792ef2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00792ef4:; BB(0x00792ef4);
    /* 00792ef4: movzx ebx, byte ptr [edx + eax*8] */ r_ebx = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00792ef8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00792efb: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792efe: jge 0x792f6a */ if ((fS==fO)) goto L_00792f6a;
L_00792f00:; BB(0x00792f00);
    /* 00792f00: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00792f03: jl 0x792ef4 */ if ((fS!=fO)) goto L_00792ef4;
L_00792f05:; BB(0x00792f05);
    /* 00792f05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792f06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792f07: ret  */ FN_RET(0x00792e66); r_esp += 4; return;
L_00792f40:; BB(0x00792f40);
    /* 00792f40: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00792f42: jmp 0x792e72 */ goto L_00792e72;
L_00792f6a:; BB(0x00792f6a);
    /* 00792f6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00792f6c: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x792f71u); f_00792f98();
    /* 00792f71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792f72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792f73: ret  */ FN_RET(0x00792e66); r_esp += 4; return;
}

void f_00792e79(void)
{
    FN_ENTER(0x00792e79);
    goto L_00792e79;
L_00792d56:; BB(0x00792d56);
    /* 00792d56: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00792d58: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 00792d5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d5d: je 0x792d67 */ if (fZ) goto L_00792d67;
L_00792d5f:; BB(0x00792d5f);
    /* 00792d5f: mov ebx, dword ptr [edx + eax*4 + 4] */ r_ebx = R32((u32)(r_edx+r_eax*4+0x4u));
    /* 00792d63: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d65: jne 0x792dd3 */ if (!fZ) goto L_00792dd3;
L_00792d67:; BB(0x00792d67);
    /* 00792d67: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d69: jne 0x792d6f */ if (!fZ) goto L_00792d6f;
L_00792d6b:; BB(0x00792d6b);
    /* 00792d6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d6d: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d6f:; BB(0x00792d6f);
    /* 00792d6f: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d72: jne 0x792d78 */ if (!fZ) goto L_00792d78;
L_00792d74:; BB(0x00792d74);
    /* 00792d74: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d76: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d78:; BB(0x00792d78);
    /* 00792d78: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d7b: jne 0x792d81 */ if (!fZ) goto L_00792d81;
L_00792d7d:; BB(0x00792d7d);
    /* 00792d7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d7f: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d81:; BB(0x00792d81);
    /* 00792d81: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d84: jne 0x792d8a */ if (!fZ) goto L_00792d8a;
L_00792d86:; BB(0x00792d86);
    /* 00792d86: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d88: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d8a:; BB(0x00792d8a);
    /* 00792d8a: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d8d: jne 0x792d93 */ if (!fZ) goto L_00792d93;
L_00792d8f:; BB(0x00792d8f);
    /* 00792d8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d91: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d93:; BB(0x00792d93);
    /* 00792d93: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d96: jne 0x792d9c */ if (!fZ) goto L_00792d9c;
L_00792d98:; BB(0x00792d98);
    /* 00792d98: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d9a: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d9c:; BB(0x00792d9c);
    /* 00792d9c: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d9f: jne 0x792da5 */ if (!fZ) goto L_00792da5;
L_00792da1:; BB(0x00792da1);
    /* 00792da1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792da3: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792da5:; BB(0x00792da5);
    /* 00792da5: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792da8: jne 0x792dae */ if (!fZ) goto L_00792dae;
L_00792daa:; BB(0x00792daa);
    /* 00792daa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dac: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792dae:; BB(0x00792dae);
    /* 00792dae: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792db1: jne 0x792db7 */ if (!fZ) goto L_00792db7;
L_00792db3:; BB(0x00792db3);
    /* 00792db3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792db5: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792db7:; BB(0x00792db7);
    /* 00792db7: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dba: jne 0x792dc0 */ if (!fZ) goto L_00792dc0;
L_00792dbc:; BB(0x00792dbc);
    /* 00792dbc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dbe: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792dc0:; BB(0x00792dc0);
    /* 00792dc0: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dc3: jne 0x792dd3 */ if (!fZ) goto L_00792dd3;
L_00792dc5:; BB(0x00792dc5);
    /* 00792dc5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dc7: je 0x792dd3 */ if (fZ) goto L_00792dd3;
L_00792dc9:; BB(0x00792dc9);
    /* 00792dc9: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00792dd0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792dd1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792dd2: ret  */ FN_RET(0x00792e79); r_esp += 4; return;
L_00792dd3:; BB(0x00792dd3);
    /* 00792dd3: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00792dd6: ja 0x792ed6 */ if ((!fC&&!fZ)) goto L_00792ed6;
L_00792ddc:; BB(0x00792ddc);
    /* 00792ddc: mov ebx, dword ptr [ecx*4 + 0x97ac58] */ r_ebx = R32((u32)(r_ecx*4+0x97ac58u));
    /* 00792de3: jmp ebx */ { u32 t = r_ebx; jmp_ind(t); return; }
L_00792e79:; BB(0x00792e79);
    /* 00792e79: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792e7b: je 0x792f47 */ if (fZ) goto L_00792f47;
L_00792e81:; BB(0x00792e81);
    /* 00792e81: mov eax, dword ptr [edx + eax*4 + 4] */ r_eax = R32((u32)(r_edx+r_eax*4+0x4u));
L_00792e85:; BB(0x00792e85);
    /* 00792e85: mov dword ptr [0xa0f674], eax */ W32((u32)(0xa0f674u), r_eax);
    /* 00792e8a: jmp 0x792ed6 */ goto L_00792ed6;
L_00792ed6:; BB(0x00792ed6);
    /* 00792ed6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00792ed9: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792edc: jl 0x792d56 */ if ((fS!=fO)) goto L_00792d56;
L_00792ee2:; BB(0x00792ee2);
    /* 00792ee2: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00792ee8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792eea: je 0x792f05 */ if (fZ) goto L_00792f05;
L_00792eec:; BB(0x00792eec);
    /* 00792eec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00792eee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792ef0: je 0x792f05 */ if (fZ) goto L_00792f05;
L_00792ef2:; BB(0x00792ef2);
    /* 00792ef2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00792ef4:; BB(0x00792ef4);
    /* 00792ef4: movzx ebx, byte ptr [edx + eax*8] */ r_ebx = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00792ef8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00792efb: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792efe: jge 0x792f6a */ if ((fS==fO)) goto L_00792f6a;
L_00792f00:; BB(0x00792f00);
    /* 00792f00: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00792f03: jl 0x792ef4 */ if ((fS!=fO)) goto L_00792ef4;
L_00792f05:; BB(0x00792f05);
    /* 00792f05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792f06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792f07: ret  */ FN_RET(0x00792e79); r_esp += 4; return;
L_00792f47:; BB(0x00792f47);
    /* 00792f47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00792f49: jmp 0x792e85 */ goto L_00792e85;
L_00792f6a:; BB(0x00792f6a);
    /* 00792f6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00792f6c: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x792f71u); f_00792f98();
    /* 00792f71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792f72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792f73: ret  */ FN_RET(0x00792e79); r_esp += 4; return;
}

void f_00792e8c(void)
{
    FN_ENTER(0x00792e8c);
    goto L_00792e8c;
L_00792d56:; BB(0x00792d56);
    /* 00792d56: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00792d58: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 00792d5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d5d: je 0x792d67 */ if (fZ) goto L_00792d67;
L_00792d5f:; BB(0x00792d5f);
    /* 00792d5f: mov ebx, dword ptr [edx + eax*4 + 4] */ r_ebx = R32((u32)(r_edx+r_eax*4+0x4u));
    /* 00792d63: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d65: jne 0x792dd3 */ if (!fZ) goto L_00792dd3;
L_00792d67:; BB(0x00792d67);
    /* 00792d67: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d69: jne 0x792d6f */ if (!fZ) goto L_00792d6f;
L_00792d6b:; BB(0x00792d6b);
    /* 00792d6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d6d: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d6f:; BB(0x00792d6f);
    /* 00792d6f: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d72: jne 0x792d78 */ if (!fZ) goto L_00792d78;
L_00792d74:; BB(0x00792d74);
    /* 00792d74: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d76: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d78:; BB(0x00792d78);
    /* 00792d78: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d7b: jne 0x792d81 */ if (!fZ) goto L_00792d81;
L_00792d7d:; BB(0x00792d7d);
    /* 00792d7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d7f: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d81:; BB(0x00792d81);
    /* 00792d81: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d84: jne 0x792d8a */ if (!fZ) goto L_00792d8a;
L_00792d86:; BB(0x00792d86);
    /* 00792d86: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d88: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d8a:; BB(0x00792d8a);
    /* 00792d8a: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d8d: jne 0x792d93 */ if (!fZ) goto L_00792d93;
L_00792d8f:; BB(0x00792d8f);
    /* 00792d8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d91: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d93:; BB(0x00792d93);
    /* 00792d93: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d96: jne 0x792d9c */ if (!fZ) goto L_00792d9c;
L_00792d98:; BB(0x00792d98);
    /* 00792d98: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d9a: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d9c:; BB(0x00792d9c);
    /* 00792d9c: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d9f: jne 0x792da5 */ if (!fZ) goto L_00792da5;
L_00792da1:; BB(0x00792da1);
    /* 00792da1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792da3: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792da5:; BB(0x00792da5);
    /* 00792da5: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792da8: jne 0x792dae */ if (!fZ) goto L_00792dae;
L_00792daa:; BB(0x00792daa);
    /* 00792daa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dac: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792dae:; BB(0x00792dae);
    /* 00792dae: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792db1: jne 0x792db7 */ if (!fZ) goto L_00792db7;
L_00792db3:; BB(0x00792db3);
    /* 00792db3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792db5: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792db7:; BB(0x00792db7);
    /* 00792db7: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dba: jne 0x792dc0 */ if (!fZ) goto L_00792dc0;
L_00792dbc:; BB(0x00792dbc);
    /* 00792dbc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dbe: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792dc0:; BB(0x00792dc0);
    /* 00792dc0: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dc3: jne 0x792dd3 */ if (!fZ) goto L_00792dd3;
L_00792dc5:; BB(0x00792dc5);
    /* 00792dc5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dc7: je 0x792dd3 */ if (fZ) goto L_00792dd3;
L_00792dc9:; BB(0x00792dc9);
    /* 00792dc9: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00792dd0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792dd1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792dd2: ret  */ FN_RET(0x00792e8c); r_esp += 4; return;
L_00792dd3:; BB(0x00792dd3);
    /* 00792dd3: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00792dd6: ja 0x792ed6 */ if ((!fC&&!fZ)) goto L_00792ed6;
L_00792ddc:; BB(0x00792ddc);
    /* 00792ddc: mov ebx, dword ptr [ecx*4 + 0x97ac58] */ r_ebx = R32((u32)(r_ecx*4+0x97ac58u));
    /* 00792de3: jmp ebx */ { u32 t = r_ebx; jmp_ind(t); return; }
L_00792e8c:; BB(0x00792e8c);
    /* 00792e8c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792e8e: je 0x792f4e */ if (fZ) goto L_00792f4e;
L_00792e94:; BB(0x00792e94);
    /* 00792e94: mov eax, dword ptr [edx + eax*4 + 4] */ r_eax = R32((u32)(r_edx+r_eax*4+0x4u));
L_00792e98:; BB(0x00792e98);
    /* 00792e98: mov dword ptr [0xa0f670], eax */ W32((u32)(0xa0f670u), r_eax);
    /* 00792e9d: jmp 0x792ed6 */ goto L_00792ed6;
L_00792ed6:; BB(0x00792ed6);
    /* 00792ed6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00792ed9: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792edc: jl 0x792d56 */ if ((fS!=fO)) goto L_00792d56;
L_00792ee2:; BB(0x00792ee2);
    /* 00792ee2: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00792ee8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792eea: je 0x792f05 */ if (fZ) goto L_00792f05;
L_00792eec:; BB(0x00792eec);
    /* 00792eec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00792eee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792ef0: je 0x792f05 */ if (fZ) goto L_00792f05;
L_00792ef2:; BB(0x00792ef2);
    /* 00792ef2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00792ef4:; BB(0x00792ef4);
    /* 00792ef4: movzx ebx, byte ptr [edx + eax*8] */ r_ebx = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00792ef8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00792efb: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792efe: jge 0x792f6a */ if ((fS==fO)) goto L_00792f6a;
L_00792f00:; BB(0x00792f00);
    /* 00792f00: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00792f03: jl 0x792ef4 */ if ((fS!=fO)) goto L_00792ef4;
L_00792f05:; BB(0x00792f05);
    /* 00792f05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792f06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792f07: ret  */ FN_RET(0x00792e8c); r_esp += 4; return;
L_00792f4e:; BB(0x00792f4e);
    /* 00792f4e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00792f50: jmp 0x792e98 */ goto L_00792e98;
L_00792f6a:; BB(0x00792f6a);
    /* 00792f6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00792f6c: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x792f71u); f_00792f98();
    /* 00792f71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792f72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792f73: ret  */ FN_RET(0x00792e8c); r_esp += 4; return;
}

void f_00792e9f(void)
{
    FN_ENTER(0x00792e9f);
    goto L_00792e9f;
L_00792d56:; BB(0x00792d56);
    /* 00792d56: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00792d58: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 00792d5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d5d: je 0x792d67 */ if (fZ) goto L_00792d67;
L_00792d5f:; BB(0x00792d5f);
    /* 00792d5f: mov ebx, dword ptr [edx + eax*4 + 4] */ r_ebx = R32((u32)(r_edx+r_eax*4+0x4u));
    /* 00792d63: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d65: jne 0x792dd3 */ if (!fZ) goto L_00792dd3;
L_00792d67:; BB(0x00792d67);
    /* 00792d67: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d69: jne 0x792d6f */ if (!fZ) goto L_00792d6f;
L_00792d6b:; BB(0x00792d6b);
    /* 00792d6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d6d: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d6f:; BB(0x00792d6f);
    /* 00792d6f: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d72: jne 0x792d78 */ if (!fZ) goto L_00792d78;
L_00792d74:; BB(0x00792d74);
    /* 00792d74: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d76: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d78:; BB(0x00792d78);
    /* 00792d78: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d7b: jne 0x792d81 */ if (!fZ) goto L_00792d81;
L_00792d7d:; BB(0x00792d7d);
    /* 00792d7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d7f: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d81:; BB(0x00792d81);
    /* 00792d81: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d84: jne 0x792d8a */ if (!fZ) goto L_00792d8a;
L_00792d86:; BB(0x00792d86);
    /* 00792d86: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d88: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d8a:; BB(0x00792d8a);
    /* 00792d8a: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d8d: jne 0x792d93 */ if (!fZ) goto L_00792d93;
L_00792d8f:; BB(0x00792d8f);
    /* 00792d8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d91: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d93:; BB(0x00792d93);
    /* 00792d93: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d96: jne 0x792d9c */ if (!fZ) goto L_00792d9c;
L_00792d98:; BB(0x00792d98);
    /* 00792d98: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d9a: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d9c:; BB(0x00792d9c);
    /* 00792d9c: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d9f: jne 0x792da5 */ if (!fZ) goto L_00792da5;
L_00792da1:; BB(0x00792da1);
    /* 00792da1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792da3: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792da5:; BB(0x00792da5);
    /* 00792da5: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792da8: jne 0x792dae */ if (!fZ) goto L_00792dae;
L_00792daa:; BB(0x00792daa);
    /* 00792daa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dac: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792dae:; BB(0x00792dae);
    /* 00792dae: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792db1: jne 0x792db7 */ if (!fZ) goto L_00792db7;
L_00792db3:; BB(0x00792db3);
    /* 00792db3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792db5: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792db7:; BB(0x00792db7);
    /* 00792db7: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dba: jne 0x792dc0 */ if (!fZ) goto L_00792dc0;
L_00792dbc:; BB(0x00792dbc);
    /* 00792dbc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dbe: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792dc0:; BB(0x00792dc0);
    /* 00792dc0: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dc3: jne 0x792dd3 */ if (!fZ) goto L_00792dd3;
L_00792dc5:; BB(0x00792dc5);
    /* 00792dc5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dc7: je 0x792dd3 */ if (fZ) goto L_00792dd3;
L_00792dc9:; BB(0x00792dc9);
    /* 00792dc9: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00792dd0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792dd1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792dd2: ret  */ FN_RET(0x00792e9f); r_esp += 4; return;
L_00792dd3:; BB(0x00792dd3);
    /* 00792dd3: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00792dd6: ja 0x792ed6 */ if ((!fC&&!fZ)) goto L_00792ed6;
L_00792ddc:; BB(0x00792ddc);
    /* 00792ddc: mov ebx, dword ptr [ecx*4 + 0x97ac58] */ r_ebx = R32((u32)(r_ecx*4+0x97ac58u));
    /* 00792de3: jmp ebx */ { u32 t = r_ebx; jmp_ind(t); return; }
L_00792e9f:; BB(0x00792e9f);
    /* 00792e9f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792ea1: je 0x792f55 */ if (fZ) goto L_00792f55;
L_00792ea7:; BB(0x00792ea7);
    /* 00792ea7: mov eax, dword ptr [edx + eax*4 + 4] */ r_eax = R32((u32)(r_edx+r_eax*4+0x4u));
L_00792eab:; BB(0x00792eab);
    /* 00792eab: mov dword ptr [0xa0f66c], eax */ W32((u32)(0xa0f66cu), r_eax);
    /* 00792eb0: jmp 0x792ed6 */ goto L_00792ed6;
L_00792ed6:; BB(0x00792ed6);
    /* 00792ed6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00792ed9: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792edc: jl 0x792d56 */ if ((fS!=fO)) goto L_00792d56;
L_00792ee2:; BB(0x00792ee2);
    /* 00792ee2: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00792ee8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792eea: je 0x792f05 */ if (fZ) goto L_00792f05;
L_00792eec:; BB(0x00792eec);
    /* 00792eec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00792eee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792ef0: je 0x792f05 */ if (fZ) goto L_00792f05;
L_00792ef2:; BB(0x00792ef2);
    /* 00792ef2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00792ef4:; BB(0x00792ef4);
    /* 00792ef4: movzx ebx, byte ptr [edx + eax*8] */ r_ebx = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00792ef8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00792efb: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792efe: jge 0x792f6a */ if ((fS==fO)) goto L_00792f6a;
L_00792f00:; BB(0x00792f00);
    /* 00792f00: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00792f03: jl 0x792ef4 */ if ((fS!=fO)) goto L_00792ef4;
L_00792f05:; BB(0x00792f05);
    /* 00792f05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792f06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792f07: ret  */ FN_RET(0x00792e9f); r_esp += 4; return;
L_00792f55:; BB(0x00792f55);
    /* 00792f55: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00792f57: jmp 0x792eab */ goto L_00792eab;
L_00792f6a:; BB(0x00792f6a);
    /* 00792f6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00792f6c: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x792f71u); f_00792f98();
    /* 00792f71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792f72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792f73: ret  */ FN_RET(0x00792e9f); r_esp += 4; return;
}

void f_00792eb2(void)
{
    FN_ENTER(0x00792eb2);
    goto L_00792eb2;
L_00792d56:; BB(0x00792d56);
    /* 00792d56: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00792d58: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 00792d5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d5d: je 0x792d67 */ if (fZ) goto L_00792d67;
L_00792d5f:; BB(0x00792d5f);
    /* 00792d5f: mov ebx, dword ptr [edx + eax*4 + 4] */ r_ebx = R32((u32)(r_edx+r_eax*4+0x4u));
    /* 00792d63: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d65: jne 0x792dd3 */ if (!fZ) goto L_00792dd3;
L_00792d67:; BB(0x00792d67);
    /* 00792d67: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d69: jne 0x792d6f */ if (!fZ) goto L_00792d6f;
L_00792d6b:; BB(0x00792d6b);
    /* 00792d6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d6d: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d6f:; BB(0x00792d6f);
    /* 00792d6f: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d72: jne 0x792d78 */ if (!fZ) goto L_00792d78;
L_00792d74:; BB(0x00792d74);
    /* 00792d74: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d76: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d78:; BB(0x00792d78);
    /* 00792d78: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d7b: jne 0x792d81 */ if (!fZ) goto L_00792d81;
L_00792d7d:; BB(0x00792d7d);
    /* 00792d7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d7f: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d81:; BB(0x00792d81);
    /* 00792d81: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d84: jne 0x792d8a */ if (!fZ) goto L_00792d8a;
L_00792d86:; BB(0x00792d86);
    /* 00792d86: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d88: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d8a:; BB(0x00792d8a);
    /* 00792d8a: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d8d: jne 0x792d93 */ if (!fZ) goto L_00792d93;
L_00792d8f:; BB(0x00792d8f);
    /* 00792d8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d91: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d93:; BB(0x00792d93);
    /* 00792d93: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d96: jne 0x792d9c */ if (!fZ) goto L_00792d9c;
L_00792d98:; BB(0x00792d98);
    /* 00792d98: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d9a: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d9c:; BB(0x00792d9c);
    /* 00792d9c: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d9f: jne 0x792da5 */ if (!fZ) goto L_00792da5;
L_00792da1:; BB(0x00792da1);
    /* 00792da1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792da3: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792da5:; BB(0x00792da5);
    /* 00792da5: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792da8: jne 0x792dae */ if (!fZ) goto L_00792dae;
L_00792daa:; BB(0x00792daa);
    /* 00792daa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dac: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792dae:; BB(0x00792dae);
    /* 00792dae: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792db1: jne 0x792db7 */ if (!fZ) goto L_00792db7;
L_00792db3:; BB(0x00792db3);
    /* 00792db3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792db5: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792db7:; BB(0x00792db7);
    /* 00792db7: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dba: jne 0x792dc0 */ if (!fZ) goto L_00792dc0;
L_00792dbc:; BB(0x00792dbc);
    /* 00792dbc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dbe: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792dc0:; BB(0x00792dc0);
    /* 00792dc0: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dc3: jne 0x792dd3 */ if (!fZ) goto L_00792dd3;
L_00792dc5:; BB(0x00792dc5);
    /* 00792dc5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dc7: je 0x792dd3 */ if (fZ) goto L_00792dd3;
L_00792dc9:; BB(0x00792dc9);
    /* 00792dc9: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00792dd0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792dd1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792dd2: ret  */ FN_RET(0x00792eb2); r_esp += 4; return;
L_00792dd3:; BB(0x00792dd3);
    /* 00792dd3: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00792dd6: ja 0x792ed6 */ if ((!fC&&!fZ)) goto L_00792ed6;
L_00792ddc:; BB(0x00792ddc);
    /* 00792ddc: mov ebx, dword ptr [ecx*4 + 0x97ac58] */ r_ebx = R32((u32)(r_ecx*4+0x97ac58u));
    /* 00792de3: jmp ebx */ { u32 t = r_ebx; jmp_ind(t); return; }
L_00792eb2:; BB(0x00792eb2);
    /* 00792eb2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792eb4: je 0x792f5c */ if (fZ) goto L_00792f5c;
L_00792eba:; BB(0x00792eba);
    /* 00792eba: mov eax, dword ptr [edx + eax*4 + 4] */ r_eax = R32((u32)(r_edx+r_eax*4+0x4u));
L_00792ebe:; BB(0x00792ebe);
    /* 00792ebe: mov dword ptr [0xa0f668], eax */ W32((u32)(0xa0f668u), r_eax);
    /* 00792ec3: jmp 0x792ed6 */ goto L_00792ed6;
L_00792ed6:; BB(0x00792ed6);
    /* 00792ed6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00792ed9: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792edc: jl 0x792d56 */ if ((fS!=fO)) goto L_00792d56;
L_00792ee2:; BB(0x00792ee2);
    /* 00792ee2: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00792ee8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792eea: je 0x792f05 */ if (fZ) goto L_00792f05;
L_00792eec:; BB(0x00792eec);
    /* 00792eec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00792eee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792ef0: je 0x792f05 */ if (fZ) goto L_00792f05;
L_00792ef2:; BB(0x00792ef2);
    /* 00792ef2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00792ef4:; BB(0x00792ef4);
    /* 00792ef4: movzx ebx, byte ptr [edx + eax*8] */ r_ebx = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00792ef8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00792efb: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792efe: jge 0x792f6a */ if ((fS==fO)) goto L_00792f6a;
L_00792f00:; BB(0x00792f00);
    /* 00792f00: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00792f03: jl 0x792ef4 */ if ((fS!=fO)) goto L_00792ef4;
L_00792f05:; BB(0x00792f05);
    /* 00792f05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792f06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792f07: ret  */ FN_RET(0x00792eb2); r_esp += 4; return;
L_00792f5c:; BB(0x00792f5c);
    /* 00792f5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00792f5e: jmp 0x792ebe */ goto L_00792ebe;
L_00792f6a:; BB(0x00792f6a);
    /* 00792f6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00792f6c: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x792f71u); f_00792f98();
    /* 00792f71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792f72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792f73: ret  */ FN_RET(0x00792eb2); r_esp += 4; return;
}

void f_00792ec5(void)
{
    FN_ENTER(0x00792ec5);
    goto L_00792ec5;
L_00792d56:; BB(0x00792d56);
    /* 00792d56: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00792d58: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 00792d5b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d5d: je 0x792d67 */ if (fZ) goto L_00792d67;
L_00792d5f:; BB(0x00792d5f);
    /* 00792d5f: mov ebx, dword ptr [edx + eax*4 + 4] */ r_ebx = R32((u32)(r_edx+r_eax*4+0x4u));
    /* 00792d63: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d65: jne 0x792dd3 */ if (!fZ) goto L_00792dd3;
L_00792d67:; BB(0x00792d67);
    /* 00792d67: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d69: jne 0x792d6f */ if (!fZ) goto L_00792d6f;
L_00792d6b:; BB(0x00792d6b);
    /* 00792d6b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d6d: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d6f:; BB(0x00792d6f);
    /* 00792d6f: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d72: jne 0x792d78 */ if (!fZ) goto L_00792d78;
L_00792d74:; BB(0x00792d74);
    /* 00792d74: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d76: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d78:; BB(0x00792d78);
    /* 00792d78: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d7b: jne 0x792d81 */ if (!fZ) goto L_00792d81;
L_00792d7d:; BB(0x00792d7d);
    /* 00792d7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d7f: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d81:; BB(0x00792d81);
    /* 00792d81: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d84: jne 0x792d8a */ if (!fZ) goto L_00792d8a;
L_00792d86:; BB(0x00792d86);
    /* 00792d86: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d88: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d8a:; BB(0x00792d8a);
    /* 00792d8a: cmp ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d8d: jne 0x792d93 */ if (!fZ) goto L_00792d93;
L_00792d8f:; BB(0x00792d8f);
    /* 00792d8f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d91: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d93:; BB(0x00792d93);
    /* 00792d93: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d96: jne 0x792d9c */ if (!fZ) goto L_00792d9c;
L_00792d98:; BB(0x00792d98);
    /* 00792d98: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792d9a: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792d9c:; BB(0x00792d9c);
    /* 00792d9c: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792d9f: jne 0x792da5 */ if (!fZ) goto L_00792da5;
L_00792da1:; BB(0x00792da1);
    /* 00792da1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792da3: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792da5:; BB(0x00792da5);
    /* 00792da5: cmp ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792da8: jne 0x792dae */ if (!fZ) goto L_00792dae;
L_00792daa:; BB(0x00792daa);
    /* 00792daa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dac: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792dae:; BB(0x00792dae);
    /* 00792dae: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792db1: jne 0x792db7 */ if (!fZ) goto L_00792db7;
L_00792db3:; BB(0x00792db3);
    /* 00792db3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792db5: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792db7:; BB(0x00792db7);
    /* 00792db7: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dba: jne 0x792dc0 */ if (!fZ) goto L_00792dc0;
L_00792dbc:; BB(0x00792dbc);
    /* 00792dbc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dbe: jne 0x792dc9 */ if (!fZ) goto L_00792dc9;
L_00792dc0:; BB(0x00792dc0);
    /* 00792dc0: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792dc3: jne 0x792dd3 */ if (!fZ) goto L_00792dd3;
L_00792dc5:; BB(0x00792dc5);
    /* 00792dc5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792dc7: je 0x792dd3 */ if (fZ) goto L_00792dd3;
L_00792dc9:; BB(0x00792dc9);
    /* 00792dc9: mov dword ptr [edx + 0x34], 0 */ W32((u32)(r_edx+0x34u), 0x0u);
    /* 00792dd0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792dd1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792dd2: ret  */ FN_RET(0x00792ec5); r_esp += 4; return;
L_00792dd3:; BB(0x00792dd3);
    /* 00792dd3: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00792dd6: ja 0x792ed6 */ if ((!fC&&!fZ)) goto L_00792ed6;
L_00792ddc:; BB(0x00792ddc);
    /* 00792ddc: mov ebx, dword ptr [ecx*4 + 0x97ac58] */ r_ebx = R32((u32)(r_ecx*4+0x97ac58u));
    /* 00792de3: jmp ebx */ { u32 t = r_ebx; jmp_ind(t); return; }
L_00792ec5:; BB(0x00792ec5);
    /* 00792ec5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00792ec7: je 0x792f63 */ if (fZ) goto L_00792f63;
L_00792ecd:; BB(0x00792ecd);
    /* 00792ecd: mov eax, dword ptr [edx + eax*4 + 4] */ r_eax = R32((u32)(r_edx+r_eax*4+0x4u));
L_00792ed1:; BB(0x00792ed1);
    /* 00792ed1: mov dword ptr [0xa0f664], eax */ W32((u32)(0xa0f664u), r_eax);
L_00792ed6:; BB(0x00792ed6);
    /* 00792ed6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00792ed9: cmp ecx, 0xc */ {  u32 a = r_ecx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792edc: jl 0x792d56 */ if ((fS!=fO)) goto L_00792d56;
L_00792ee2:; BB(0x00792ee2);
    /* 00792ee2: mov ecx, dword ptr [0xa9cccc] */ r_ecx = R32((u32)(0xa9ccccu));
    /* 00792ee8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792eea: je 0x792f05 */ if (fZ) goto L_00792f05;
L_00792eec:; BB(0x00792eec);
    /* 00792eec: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00792eee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792ef0: je 0x792f05 */ if (fZ) goto L_00792f05;
L_00792ef2:; BB(0x00792ef2);
    /* 00792ef2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00792ef4:; BB(0x00792ef4);
    /* 00792ef4: movzx ebx, byte ptr [edx + eax*8] */ r_ebx = (u32)R8((u32)(r_edx+r_eax*8));
    /* 00792ef8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00792efb: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00792efe: jge 0x792f6a */ if ((fS==fO)) goto L_00792f6a;
L_00792f00:; BB(0x00792f00);
    /* 00792f00: cmp eax, 0x2d */ {  u32 a = r_eax; u32 b = 0x2du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00792f03: jl 0x792ef4 */ if ((fS!=fO)) goto L_00792ef4;
L_00792f05:; BB(0x00792f05);
    /* 00792f05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792f06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792f07: ret  */ FN_RET(0x00792ec5); r_esp += 4; return;
L_00792f63:; BB(0x00792f63);
    /* 00792f63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00792f65: jmp 0x792ed1 */ goto L_00792ed1;
L_00792f6a:; BB(0x00792f6a);
    /* 00792f6a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00792f6c: call 0x792f98 */ r_esp -= 4; W32(r_esp, 0x792f71u); f_00792f98();
    /* 00792f71: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792f72: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00792f73: ret  */ FN_RET(0x00792ec5); r_esp += 4; return;
}

void f_00792f98(void) /* sub_792F98 */
{
    FN_ENTER(0x00792f98);
    /* 00792f98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00792f99: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00792f9b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00792f9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00792f9f: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00792fa3: je 0x792fe2 */ if (fZ) goto L_00792fe2;
L_00792fa5:; BB(0x00792fa5);
    /* 00792fa5: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00792fa8: jae 0x792fe2 */ if (!fC) goto L_00792fe2;
L_00792faa:; BB(0x00792faa);
    /* 00792faa: push 0x168 */ { u32 v = 0x168u; r_esp -= 4; W32(r_esp, v); }
    /* 00792faf: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00792fb2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00792fb4: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00792fb6: lea edx, [edx + ecx*4] */ r_edx = (u32)(r_edx+r_ecx*4);
    /* 00792fb9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00792fbb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00792fbd: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00792fc0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00792fc2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00792fc4: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00792fc6: lea edx, [ecx + 0x97aca0] */ r_edx = (u32)(r_ecx+0x97aca0u);
    /* 00792fcc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00792fcd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00792fce: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x792fd3u); f_0086b6b8();
    /* 00792fd3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00792fd6: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00792fd8: mov dword ptr [eax + 0x168], 1 */ W32((u32)(r_eax+0x168u), 0x1u);
L_00792fe2:; BB(0x00792fe2);
    /* 00792fe2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00792fe3: ret 4 */ FN_RET(0x00792f98); r_esp += 8; return;
}

void f_00792fe8(void) /* sub_792FE8 */
{
    FN_ENTER(0x00792fe8);
    /* 00792fe8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00792fec: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00792ff0: mov ecx, dword ptr [0xa9cd50] */ r_ecx = R32((u32)(0xa9cd50u));
    /* 00792ff6: mov eax, dword ptr [ecx + eax*4] */ r_eax = R32((u32)(r_ecx+r_eax*4));
    /* 00792ff9: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 00792ffc: ret  */ FN_RET(0x00792fe8); r_esp += 4; return;
}

