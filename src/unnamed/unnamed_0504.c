#include "protos.h"

void f_00504084(void)
{
    FN_ENTER(0x00504084);
    goto L_00504084;
L_00503ff7:; BB(0x00503ff7);
    /* 00503ff7: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 00503ffb: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 00503fff: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00504001: movzx esi, dl */ r_esi = (u32)(u8)r_edx;
    /* 00504004: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 00504008: movzx ebp, al */ r_ebp = (u32)(u8)r_eax;
    /* 0050400b: mov dword ptr [esp + 0x48], ebp */ W32((u32)(r_esp+0x48u), r_ebp);
    /* 0050400f: mov ecx, 0x20 */ r_ecx = 0x20u;
L_00504014:; BB(0x00504014);
    /* 00504014: mov edx, dword ptr [0xa72b2c] */ r_edx = R32((u32)(0xa72b2cu));
    /* 0050401a: movzx esi, bl */ r_esi = (u32)(u8)r_ebx;
    /* 0050401d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050401f: je 0x5041ad */ if (fZ) goto L_005041ad;
L_00504025:; BB(0x00504025);
    /* 00504025: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00504029: lea ebp, [esi + esi] */ r_ebp = (u32)(r_esi+r_esi);
    /* 0050402c: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0050402e: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 00504031: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504033: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504035: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504037: movzx ebp, word ptr [ebp + edi*8] */ r_ebp = (u32)R16((u32)(r_ebp+r_edi*8));
L_0050403c:; BB(0x0050403c);
    /* 0050403c: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
    /* 0050403f: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 00504043: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504045: je 0x5041a6 */ if (fZ) goto L_005041a6;
L_0050404b:; BB(0x0050404b);
    /* 0050404b: mov edi, eax */ r_edi = r_eax;
    /* 0050404d: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 00504050: mov edi, dword ptr [esp + 0x44] */ r_edi = R32((u32)(r_esp+0x44u));
    /* 00504054: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00504056: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 00504059: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050405b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050405d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050405f: movzx eax, word ptr [eax + edi*8] */ r_eax = (u32)R16((u32)(r_eax+r_edi*8));
L_00504063:; BB(0x00504063);
    /* 00504063: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504065: je 0x50419f */ if (fZ) goto L_0050419f;
L_0050406b:; BB(0x0050406b);
    /* 0050406b: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 0050406f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00504071: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00504073: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 00504076: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504078: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050407a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050407c: movzx esi, word ptr [esi + edi*8] */ r_esi = (u32)R16((u32)(r_esi+r_edi*8));
L_00504080:; BB(0x00504080);
    /* 00504080: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504082: je 0x504194 */ if (fZ) goto L_00504194;
L_00504084:; BB(0x00504084);
    /* 00504084: or al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00504086: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_00504088:; BB(0x00504088);
    /* 00504088: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 0050408c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050408e: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504090: mov edi, dword ptr [esp + 0x48] */ r_edi = R32((u32)(r_esp+0x48u));
    /* 00504094: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 00504097: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504099: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050409b: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050409d: movzx edx, word ptr [edx + edi*8] */ r_edx = (u32)R16((u32)(r_edx+r_edi*8));
    /* 005040a1: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
L_005040a5:; BB(0x005040a5);
    /* 005040a5: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 005040a9: movzx edi, word ptr [edx + ebp*2] */ r_edi = (u32)R16((u32)(r_edx+r_ebp*2));
    /* 005040ad: mov word ptr [edx + eax*2], di */ W16((u32)(r_edx+r_eax*2), (u16)r_edi);
    /* 005040b1: movzx eax, word ptr [edx + ebp*2] */ r_eax = (u32)R16((u32)(r_edx+r_ebp*2));
    /* 005040b5: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005040b8: mov word ptr [edx + esi*2], ax */ W16((u32)(r_edx+r_esi*2), (u16)r_eax);
    /* 005040bc: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 005040c0: movzx ebp, word ptr [edx + ebp*2] */ r_ebp = (u32)R16((u32)(r_edx+r_ebp*2));
    /* 005040c4: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005040c7: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005040ca: mov word ptr [edx + esi*2], bp */ W16((u32)(r_edx+r_esi*2), (u16)r_ebp);
    /* 005040ce: jl 0x504014 */ if ((fS!=fO)) goto L_00504014;
L_005040d4:; BB(0x005040d4);
    /* 005040d4: mov eax, dword ptr [esp + 0x4c] */ r_eax = R32((u32)(r_esp+0x4cu));
    /* 005040d8: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 005040dc: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005040df: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005040e2: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005040e5: jl 0x503ff7 */ if ((fS!=fO)) goto L_00503ff7;
L_005040eb:; BB(0x005040eb);
    /* 005040eb: add esp, 0x154 */ {  u32 a = r_esp; u32 b = 0x154u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005040f1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005040f2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005040f3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005040f4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005040f5: ret  */ FN_RET(0x00504084); r_esp += 4; return;
L_00504194:; BB(0x00504194);
    /* 00504194: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00504196: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 0050419a: jmp 0x5040a5 */ goto L_005040a5;
L_0050419f:; BB(0x0050419f);
    /* 0050419f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005041a1: jmp 0x504080 */ goto L_00504080;
L_005041a6:; BB(0x005041a6);
    /* 005041a6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005041a8: jmp 0x504063 */ goto L_00504063;
L_005041ad:; BB(0x005041ad);
    /* 005041ad: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005041af: jmp 0x50403c */ goto L_0050403c;
}

void f_005041f0(void) /* sub_5041F0 */
{
    FN_ENTER(0x005041f0);
    /* 005041f0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005041f3: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005041f6: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005041fa: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005041ff: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00504203: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00504207: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 0050420b: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 0050420e: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00504212: mov eax, 0xb60b60b7 */ r_eax = 0xb60b60b7u;
    /* 00504217: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00504219: mov eax, ecx */ r_eax = r_ecx;
    /* 0050421b: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0050421e: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504220: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00504223: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00504225: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00504228: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050422a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0050422c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050422e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00504230: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00504232: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00504235: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504237: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504239: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050423b: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0050423d: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0050423f: mov eax, ecx */ r_eax = r_ecx;
    /* 00504241: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00504242: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00504244: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00504246: mov edx, dword ptr [0xa72b28] */ r_edx = R32((u32)(0xa72b28u));
    /* 0050424c: fld dword ptr [edx + ecx*4] */ FPUSH(R_F32((u32)(r_edx+r_ecx*4)));
    /* 0050424f: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00504252: ret  */ FN_RET(0x005041f0); r_esp += 4; return;
}

void f_00504254(void) /* sub_504254 */
{
    FN_ENTER(0x00504254);
    /* 00504254: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00504255: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00504258: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0050425a: movzx eax, byte ptr [ebx + 0x24] */ r_eax = (u32)R8((u32)(r_ebx+0x24u));
    /* 0050425e: call 0x5039b5 */ r_esp -= 4; W32(r_esp, 0x504263u); f_005039b5();
    /* 00504263: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00504264: push dword ptr [ebx + 0x3c] */ { u32 v = R32((u32)(r_ebx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00504267: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00504269: call 0x503b74 */ r_esp -= 4; W32(r_esp, 0x50426eu); f_00503b74();
    /* 0050426e: fld dword ptr [ebx + 0x4c] */ FPUSH(R_F32((u32)(r_ebx+0x4cu)));
    /* 00504271: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 00504275: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 0050427a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050427f: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00504283: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00504287: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 0050428b: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 0050428f: movzx edx, byte ptr [esp + 0x30] */ r_edx = (u32)R8((u32)(r_esp+0x30u));
    /* 00504294: fld dword ptr [ebx + 0x50] */ FPUSH(R_F32((u32)(r_ebx+0x50u)));
    /* 00504297: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 0050429b: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 005042a0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005042a5: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005042a9: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 005042ad: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 005042b1: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 005042b5: movzx ecx, byte ptr [esp + 0x30] */ r_ecx = (u32)R8((u32)(r_esp+0x30u));
    /* 005042ba: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 005042bd: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005042c1: mov eax, dword ptr [ebx + 0x44] */ r_eax = R32((u32)(r_ebx+0x44u));
    /* 005042c4: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005042c8: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 005042cb: movzx eax, byte ptr [eax + 6] */ r_eax = (u32)R8((u32)(r_eax+0x6u));
    /* 005042cf: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 005042d3: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 005042d6: call 0x50431a */ r_esp -= 4; W32(r_esp, 0x5042dbu); f_0050431a();
    /* 005042db: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 005042de: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x5042e3u); f_00829cc8();
    /* 005042e3: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 005042e7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005042e9: call 0x835ca8 */ r_esp -= 4; W32(r_esp, 0x5042eeu); f_00835ca8();
    /* 005042ee: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005042f2: push dword ptr [ebx + 0x3c] */ { u32 v = R32((u32)(r_ebx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005042f5: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 005042f8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005042fa: call 0x5039cc */ r_esp -= 4; W32(r_esp, 0x5042ffu); f_005039cc();
    /* 005042ff: call 0x5039e4 */ r_esp -= 4; W32(r_esp, 0x504304u); f_005039e4();
    /* 00504304: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00504307: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00504308: ret  */ FN_RET(0x00504254); r_esp += 4; return;
}

void f_0050431a(void) /* sub_50431A */
{
    FN_ENTER(0x0050431a);
    /* 0050431a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0050431b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0050431c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0050431d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050431e: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00504321: mov edi, ecx */ r_edi = r_ecx;
    /* 00504323: mov ecx, eax */ r_ecx = r_eax;
    /* 00504325: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 00504329: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0050432b: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00504331: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00504334: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00504337: movzx edi, byte ptr [esp + 0x6c] */ r_edi = (u32)R8((u32)(r_esp+0x6cu));
    /* 0050433c: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 0050433f: mov ebx, eax */ r_ebx = r_eax;
    /* 00504341: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00504345: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
L_00504349:; BB(0x00504349);
    /* 00504349: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0050434d: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00504351: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 00504355: mov edx, ebx */ r_edx = r_ebx;
    /* 00504357: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 0050435b: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0050435e: fadd dword ptr [edx*4 + 0x91fcb0] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x91fcb0u));
    /* 00504365: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00504369: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0050436e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00504373: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00504377: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0050437b: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0050437f: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00504383: mov eax, 0xb60b60b7 */ r_eax = 0xb60b60b7u;
    /* 00504388: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0050438c: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050438e: mov eax, esi */ r_eax = r_esi;
    /* 00504390: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00504393: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504395: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00504398: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0050439a: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0050439d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050439f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005043a1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005043a3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005043a5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005043a7: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005043aa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005043ac: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005043ae: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005043b0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005043b2: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005043b4: mov eax, esi */ r_eax = r_esi;
    /* 005043b6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005043b7: xor esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005043b9: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005043bb: mov edx, dword ptr [0xa72b28] */ r_edx = R32((u32)(0xa72b28u));
    /* 005043c1: fld dword ptr [edx + esi*4] */ FPUSH(R_F32((u32)(r_edx+r_esi*4)));
    /* 005043c4: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005043c6: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 005043ca: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 005043cf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005043d4: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005043d8: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005043dc: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 005043e0: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005043e4: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005043e6: movsx eax, word ptr [esp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x20u));
    /* 005043eb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005043ef: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 005043f3: mov eax, ebp */ r_eax = r_ebp;
    /* 005043f5: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005043fa: mov ebp, edx */ r_ebp = r_edx;
    /* 005043fc: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00504400: jmp 0x504408 */ goto L_00504408;
L_00504402:; BB(0x00504402);
    /* 00504402: mov ebp, dword ptr [0xa72b28] */ r_ebp = R32((u32)(0xa72b28u));
L_00504408:; BB(0x00504408);
    /* 00504408: movzx edi, byte ptr [esp + 0x6c] */ r_edi = (u32)R8((u32)(r_esp+0x6cu));
    /* 0050440d: mov ebx, esi */ r_ebx = r_esi;
    /* 0050440f: imul ebx, edi */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_edi; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00504412: add ebx, dword ptr [esp + 0x64] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x64u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00504416: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0050441a: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0050441e: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00504421: fadd dword ptr [ebx*4 + 0x91fcb0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*4+0x91fcb0u));
    /* 00504428: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0050442c: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00504431: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00504436: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0050443a: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0050443e: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00504442: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00504446: mov eax, 0xb60b60b7 */ r_eax = 0xb60b60b7u;
    /* 0050444b: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 0050444f: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00504451: mov edi, ebx */ r_edi = r_ebx;
    /* 00504453: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00504456: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504458: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0050445b: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0050445d: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00504460: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504462: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00504464: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504466: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504468: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050446a: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0050446d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050446f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00504471: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00504473: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00504475: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00504477: mov eax, ebx */ r_eax = r_ebx;
    /* 00504479: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050447a: xor ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0050447c: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0050447e: fld dword ptr [ebp + ebx*4] */ FPUSH(R_F32((u32)(r_ebp+r_ebx*4)));
    /* 00504482: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00504484: mov ebp, dword ptr [0xa72b2c] */ r_ebp = R32((u32)(0xa72b2cu));
    /* 0050448a: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0050448c: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00504490: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00504495: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050449a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0050449e: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005044a2: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 005044a6: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005044aa: movsx edx, word ptr [esp + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x20u));
    /* 005044af: mov ebx, esi */ r_ebx = r_esi;
    /* 005044b1: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 005044b7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005044b9: je 0x5046a6 */ if (fZ) goto L_005046a6;
L_005044bf:; BB(0x005044bf);
    /* 005044bf: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005044c1: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005044c3: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 005044c7: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 005044ca: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005044cc: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005044ce: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005044d0: movzx ebx, word ptr [ebp + edi*8] */ r_ebx = (u32)R16((u32)(r_ebp+r_edi*8));
L_005044d5:; BB(0x005044d5);
    /* 005044d5: movzx edi, word ptr [ecx + ebx*2] */ r_edi = (u32)R16((u32)(r_ecx+r_ebx*2));
    /* 005044d9: mov ebp, 0xff */ r_ebp = 0xffu;
    /* 005044de: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005044e4: jl 0x5044e8 */ if ((fS!=fO)) goto L_005044e8;
L_005044e6:; BB(0x005044e6);
    /* 005044e6: mov edx, ebp */ r_edx = r_ebp;
L_005044e8:; BB(0x005044e8);
    /* 005044e8: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005044ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005044ec: jg 0x5044f0 */ if ((!fZ&&fS==fO)) goto L_005044f0;
L_005044ee:; BB(0x005044ee);
    /* 005044ee: mov edx, ebp */ r_edx = r_ebp;
L_005044f0:; BB(0x005044f0);
    /* 005044f0: mov ebp, edi */ r_ebp = r_edi;
    /* 005044f2: and ebp, 0xff00 */ {  u32 a = r_ebp; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 005044f8: sar ebp, 8 */ { u32 c = (8u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 005044fb: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00504501: lea eax, [edx] */ r_eax = (u32)(r_edx);
    /* 00504503: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00504506: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504508: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0050450a: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0050450c: movzx ebp, bp */ r_ebp = (u32)(u16)r_ebp;
    /* 0050450f: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504511: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 00504514: mov edi, 0xff */ r_edi = 0xffu;
    /* 00504519: cmp ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050451f: jl 0x504523 */ if ((fS!=fO)) goto L_00504523;
L_00504521:; BB(0x00504521);
    /* 00504521: mov ebp, edi */ r_ebp = r_edi;
L_00504523:; BB(0x00504523);
    /* 00504523: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00504525: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00504527: jg 0x50452b */ if ((!fZ&&fS==fO)) goto L_0050452b;
L_00504529:; BB(0x00504529);
    /* 00504529: mov ebp, edi */ r_ebp = r_edi;
L_0050452b:; BB(0x0050452b);
    /* 0050452b: mov edi, 0xff */ r_edi = 0xffu;
    /* 00504530: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504536: jl 0x50453a */ if ((fS!=fO)) goto L_0050453a;
L_00504538:; BB(0x00504538);
    /* 00504538: mov edx, edi */ r_edx = r_edi;
L_0050453a:; BB(0x0050453a);
    /* 0050453a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0050453c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0050453e: jg 0x504542 */ if ((!fZ&&fS==fO)) goto L_00504542;
L_00504540:; BB(0x00504540);
    /* 00504540: mov edx, edi */ r_edx = r_edi;
L_00504542:; BB(0x00504542);
    /* 00504542: shl ebp, 8 */ { u32 c = (8u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00504545: or ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00504547: movzx edx, bp */ r_edx = (u32)(u16)r_ebp;
    /* 0050454a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0050454d: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504550: mov word ptr [esp + 0x40], dx */ W16((u32)(r_esp+0x40u), (u16)r_edx);
    /* 00504555: mov word ptr [ecx + ebx*2], dx */ W16((u32)(r_ecx+r_ebx*2), (u16)r_edx);
    /* 00504559: jl 0x504402 */ if ((fS!=fO)) goto L_00504402;
L_0050455f:; BB(0x0050455f);
    /* 0050455f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00504561: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 00504565: movzx edi, byte ptr [esp + 0x6c] */ r_edi = (u32)R8((u32)(r_esp+0x6cu));
    /* 0050456a: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0050456e: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00504570: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00504573: cmp ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504576: jl 0x504349 */ if ((fS!=fO)) goto L_00504349;
L_0050457c:; BB(0x0050457c);
    /* 0050457c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050457e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00504580: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00504584: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00504586: mov edx, 0x20 */ r_edx = 0x20u;
L_0050458b:; BB(0x0050458b);
    /* 0050458b: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0050458f: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00504593: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00504595: mov ecx, edi */ r_ecx = r_edi;
    /* 00504597: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0050459d: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 005045a1: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 005045a4: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005045a8: mov ebx, 0x20 */ r_ebx = 0x20u;
L_005045ad:; BB(0x005045ad);
    /* 005045ad: mov edx, dword ptr [0xa72b2c] */ r_edx = R32((u32)(0xa72b2cu));
    /* 005045b3: mov esi, ebp */ r_esi = r_ebp;
    /* 005045b5: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 005045bb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005045bd: je 0x50469f */ if (fZ) goto L_0050469f;
L_005045c3:; BB(0x005045c3);
    /* 005045c3: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 005045c7: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 005045ca: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005045cc: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 005045cf: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005045d1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005045d3: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005045d5: movzx ecx, word ptr [ecx + edi*8] */ r_ecx = (u32)R16((u32)(r_ecx+r_edi*8));
L_005045d9:; BB(0x005045d9);
    /* 005045d9: movzx eax, bl */ r_eax = (u32)(u8)r_ebx;
    /* 005045dc: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 005045e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005045e2: je 0x504698 */ if (fZ) goto L_00504698;
L_005045e8:; BB(0x005045e8);
    /* 005045e8: mov edi, eax */ r_edi = r_eax;
    /* 005045ea: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 005045ed: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 005045f1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005045f3: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 005045f6: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005045f8: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005045fa: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005045fc: movzx eax, word ptr [eax + edi*8] */ r_eax = (u32)R16((u32)(r_eax+r_edi*8));
L_00504600:; BB(0x00504600);
    /* 00504600: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504602: je 0x504694 */ if (fZ) goto L_00504694;
L_00504608:; BB(0x00504608);
    /* 00504608: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0050460c: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0050460e: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00504610: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 00504613: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504615: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504617: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504619: movzx esi, word ptr [esi + edi*8] */ r_esi = (u32)R16((u32)(r_esi+r_edi*8));
L_0050461d:; BB(0x0050461d);
    /* 0050461d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050461f: je 0x50468c */ if (fZ) goto L_0050468c;
L_00504621:; BB(0x00504621);
    /* 00504621: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 00504625: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504627: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504629: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0050462d: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 00504630: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504632: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504634: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504636: movzx edx, word ptr [edx + edi*8] */ r_edx = (u32)R16((u32)(r_edx+r_edi*8));
    /* 0050463a: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
L_0050463e:; BB(0x0050463e);
    /* 0050463e: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00504642: movzx edi, word ptr [edx + ecx*2] */ r_edi = (u32)R16((u32)(r_edx+r_ecx*2));
    /* 00504646: mov word ptr [edx + eax*2], di */ W16((u32)(r_edx+r_eax*2), (u16)r_edi);
    /* 0050464a: movzx eax, word ptr [edx + ecx*2] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*2));
    /* 0050464e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00504651: mov word ptr [edx + esi*2], ax */ W16((u32)(r_edx+r_esi*2), (u16)r_eax);
    /* 00504655: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 00504659: movzx ecx, word ptr [edx + ecx*2] */ r_ecx = (u32)R16((u32)(r_edx+r_ecx*2));
    /* 0050465d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00504660: cmp ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504663: mov word ptr [edx + esi*2], cx */ W16((u32)(r_edx+r_esi*2), (u16)r_ecx);
    /* 00504667: jl 0x5045ad */ if ((fS!=fO)) goto L_005045ad;
L_0050466d:; BB(0x0050466d);
    /* 0050466d: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00504671: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00504675: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504678: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050467b: cmp edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050467e: jl 0x50458b */ if ((fS!=fO)) goto L_0050458b;
L_00504684:; BB(0x00504684);
    /* 00504684: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00504687: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00504688: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00504689: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050468a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050468b: ret  */ FN_RET(0x0050431a); r_esp += 4; return;
L_0050468c:; BB(0x0050468c);
    /* 0050468c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050468e: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00504692: jmp 0x50463e */ goto L_0050463e;
L_00504694:; BB(0x00504694);
    /* 00504694: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00504696: jmp 0x50461d */ goto L_0050461d;
L_00504698:; BB(0x00504698);
    /* 00504698: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050469a: jmp 0x504600 */ goto L_00504600;
L_0050469f:; BB(0x0050469f);
    /* 0050469f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005046a1: jmp 0x5045d9 */ goto L_005045d9;
L_005046a6:; BB(0x005046a6);
    /* 005046a6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005046a8: jmp 0x5044d5 */ goto L_005044d5;
}

void f_00504341(void)
{
    FN_ENTER(0x00504341);
    /* 00504341: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00504345: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
L_00504349:; BB(0x00504349);
    /* 00504349: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0050434d: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00504351: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 00504355: mov edx, ebx */ r_edx = r_ebx;
    /* 00504357: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 0050435b: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0050435e: fadd dword ptr [edx*4 + 0x91fcb0] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x91fcb0u));
    /* 00504365: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00504369: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0050436e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00504373: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00504377: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0050437b: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0050437f: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00504383: mov eax, 0xb60b60b7 */ r_eax = 0xb60b60b7u;
    /* 00504388: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0050438c: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050438e: mov eax, esi */ r_eax = r_esi;
    /* 00504390: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00504393: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504395: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00504398: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0050439a: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0050439d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050439f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005043a1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005043a3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005043a5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005043a7: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005043aa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005043ac: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005043ae: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005043b0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005043b2: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005043b4: mov eax, esi */ r_eax = r_esi;
    /* 005043b6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005043b7: xor esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005043b9: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005043bb: mov edx, dword ptr [0xa72b28] */ r_edx = R32((u32)(0xa72b28u));
    /* 005043c1: fld dword ptr [edx + esi*4] */ FPUSH(R_F32((u32)(r_edx+r_esi*4)));
    /* 005043c4: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005043c6: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 005043ca: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 005043cf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005043d4: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005043d8: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005043dc: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 005043e0: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005043e4: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005043e6: movsx eax, word ptr [esp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x20u));
    /* 005043eb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005043ef: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 005043f3: mov eax, ebp */ r_eax = r_ebp;
    /* 005043f5: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005043fa: mov ebp, edx */ r_ebp = r_edx;
    /* 005043fc: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00504400: jmp 0x504408 */ goto L_00504408;
L_00504402:; BB(0x00504402);
    /* 00504402: mov ebp, dword ptr [0xa72b28] */ r_ebp = R32((u32)(0xa72b28u));
L_00504408:; BB(0x00504408);
    /* 00504408: movzx edi, byte ptr [esp + 0x6c] */ r_edi = (u32)R8((u32)(r_esp+0x6cu));
    /* 0050440d: mov ebx, esi */ r_ebx = r_esi;
    /* 0050440f: imul ebx, edi */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_edi; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00504412: add ebx, dword ptr [esp + 0x64] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x64u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00504416: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0050441a: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0050441e: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00504421: fadd dword ptr [ebx*4 + 0x91fcb0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*4+0x91fcb0u));
    /* 00504428: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0050442c: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00504431: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00504436: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0050443a: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0050443e: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00504442: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00504446: mov eax, 0xb60b60b7 */ r_eax = 0xb60b60b7u;
    /* 0050444b: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 0050444f: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00504451: mov edi, ebx */ r_edi = r_ebx;
    /* 00504453: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00504456: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504458: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0050445b: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0050445d: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00504460: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504462: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00504464: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504466: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504468: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050446a: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0050446d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050446f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00504471: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00504473: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00504475: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00504477: mov eax, ebx */ r_eax = r_ebx;
    /* 00504479: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050447a: xor ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0050447c: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0050447e: fld dword ptr [ebp + ebx*4] */ FPUSH(R_F32((u32)(r_ebp+r_ebx*4)));
    /* 00504482: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00504484: mov ebp, dword ptr [0xa72b2c] */ r_ebp = R32((u32)(0xa72b2cu));
    /* 0050448a: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0050448c: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00504490: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00504495: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050449a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0050449e: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005044a2: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 005044a6: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005044aa: movsx edx, word ptr [esp + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x20u));
    /* 005044af: mov ebx, esi */ r_ebx = r_esi;
    /* 005044b1: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 005044b7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005044b9: je 0x5046a6 */ if (fZ) goto L_005046a6;
L_005044bf:; BB(0x005044bf);
    /* 005044bf: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005044c1: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005044c3: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 005044c7: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 005044ca: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005044cc: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005044ce: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005044d0: movzx ebx, word ptr [ebp + edi*8] */ r_ebx = (u32)R16((u32)(r_ebp+r_edi*8));
L_005044d5:; BB(0x005044d5);
    /* 005044d5: movzx edi, word ptr [ecx + ebx*2] */ r_edi = (u32)R16((u32)(r_ecx+r_ebx*2));
    /* 005044d9: mov ebp, 0xff */ r_ebp = 0xffu;
    /* 005044de: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005044e4: jl 0x5044e8 */ if ((fS!=fO)) goto L_005044e8;
L_005044e6:; BB(0x005044e6);
    /* 005044e6: mov edx, ebp */ r_edx = r_ebp;
L_005044e8:; BB(0x005044e8);
    /* 005044e8: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005044ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005044ec: jg 0x5044f0 */ if ((!fZ&&fS==fO)) goto L_005044f0;
L_005044ee:; BB(0x005044ee);
    /* 005044ee: mov edx, ebp */ r_edx = r_ebp;
L_005044f0:; BB(0x005044f0);
    /* 005044f0: mov ebp, edi */ r_ebp = r_edi;
    /* 005044f2: and ebp, 0xff00 */ {  u32 a = r_ebp; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 005044f8: sar ebp, 8 */ { u32 c = (8u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 005044fb: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00504501: lea eax, [edx] */ r_eax = (u32)(r_edx);
    /* 00504503: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00504506: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504508: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0050450a: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0050450c: movzx ebp, bp */ r_ebp = (u32)(u16)r_ebp;
    /* 0050450f: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504511: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 00504514: mov edi, 0xff */ r_edi = 0xffu;
    /* 00504519: cmp ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050451f: jl 0x504523 */ if ((fS!=fO)) goto L_00504523;
L_00504521:; BB(0x00504521);
    /* 00504521: mov ebp, edi */ r_ebp = r_edi;
L_00504523:; BB(0x00504523);
    /* 00504523: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00504525: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00504527: jg 0x50452b */ if ((!fZ&&fS==fO)) goto L_0050452b;
L_00504529:; BB(0x00504529);
    /* 00504529: mov ebp, edi */ r_ebp = r_edi;
L_0050452b:; BB(0x0050452b);
    /* 0050452b: mov edi, 0xff */ r_edi = 0xffu;
    /* 00504530: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504536: jl 0x50453a */ if ((fS!=fO)) goto L_0050453a;
L_00504538:; BB(0x00504538);
    /* 00504538: mov edx, edi */ r_edx = r_edi;
L_0050453a:; BB(0x0050453a);
    /* 0050453a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0050453c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0050453e: jg 0x504542 */ if ((!fZ&&fS==fO)) goto L_00504542;
L_00504540:; BB(0x00504540);
    /* 00504540: mov edx, edi */ r_edx = r_edi;
L_00504542:; BB(0x00504542);
    /* 00504542: shl ebp, 8 */ { u32 c = (8u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00504545: or ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00504547: movzx edx, bp */ r_edx = (u32)(u16)r_ebp;
    /* 0050454a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0050454d: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504550: mov word ptr [esp + 0x40], dx */ W16((u32)(r_esp+0x40u), (u16)r_edx);
    /* 00504555: mov word ptr [ecx + ebx*2], dx */ W16((u32)(r_ecx+r_ebx*2), (u16)r_edx);
    /* 00504559: jl 0x504402 */ if ((fS!=fO)) goto L_00504402;
L_0050455f:; BB(0x0050455f);
    /* 0050455f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00504561: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 00504565: movzx edi, byte ptr [esp + 0x6c] */ r_edi = (u32)R8((u32)(r_esp+0x6cu));
    /* 0050456a: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0050456e: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00504570: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00504573: cmp ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504576: jl 0x504349 */ if ((fS!=fO)) goto L_00504349;
L_0050457c:; BB(0x0050457c);
    /* 0050457c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050457e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00504580: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00504584: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00504586: mov edx, 0x20 */ r_edx = 0x20u;
L_0050458b:; BB(0x0050458b);
    /* 0050458b: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0050458f: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00504593: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00504595: mov ecx, edi */ r_ecx = r_edi;
    /* 00504597: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0050459d: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 005045a1: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 005045a4: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005045a8: mov ebx, 0x20 */ r_ebx = 0x20u;
L_005045ad:; BB(0x005045ad);
    /* 005045ad: mov edx, dword ptr [0xa72b2c] */ r_edx = R32((u32)(0xa72b2cu));
    /* 005045b3: mov esi, ebp */ r_esi = r_ebp;
    /* 005045b5: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 005045bb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005045bd: je 0x50469f */ if (fZ) goto L_0050469f;
L_005045c3:; BB(0x005045c3);
    /* 005045c3: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 005045c7: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 005045ca: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005045cc: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 005045cf: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005045d1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005045d3: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005045d5: movzx ecx, word ptr [ecx + edi*8] */ r_ecx = (u32)R16((u32)(r_ecx+r_edi*8));
L_005045d9:; BB(0x005045d9);
    /* 005045d9: movzx eax, bl */ r_eax = (u32)(u8)r_ebx;
    /* 005045dc: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 005045e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005045e2: je 0x504698 */ if (fZ) goto L_00504698;
L_005045e8:; BB(0x005045e8);
    /* 005045e8: mov edi, eax */ r_edi = r_eax;
    /* 005045ea: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 005045ed: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 005045f1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005045f3: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 005045f6: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005045f8: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005045fa: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005045fc: movzx eax, word ptr [eax + edi*8] */ r_eax = (u32)R16((u32)(r_eax+r_edi*8));
L_00504600:; BB(0x00504600);
    /* 00504600: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504602: je 0x504694 */ if (fZ) goto L_00504694;
L_00504608:; BB(0x00504608);
    /* 00504608: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0050460c: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0050460e: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00504610: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 00504613: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504615: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504617: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504619: movzx esi, word ptr [esi + edi*8] */ r_esi = (u32)R16((u32)(r_esi+r_edi*8));
L_0050461d:; BB(0x0050461d);
    /* 0050461d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050461f: je 0x50468c */ if (fZ) goto L_0050468c;
L_00504621:; BB(0x00504621);
    /* 00504621: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 00504625: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504627: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504629: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0050462d: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 00504630: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504632: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504634: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504636: movzx edx, word ptr [edx + edi*8] */ r_edx = (u32)R16((u32)(r_edx+r_edi*8));
    /* 0050463a: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
L_0050463e:; BB(0x0050463e);
    /* 0050463e: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00504642: movzx edi, word ptr [edx + ecx*2] */ r_edi = (u32)R16((u32)(r_edx+r_ecx*2));
    /* 00504646: mov word ptr [edx + eax*2], di */ W16((u32)(r_edx+r_eax*2), (u16)r_edi);
    /* 0050464a: movzx eax, word ptr [edx + ecx*2] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*2));
    /* 0050464e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00504651: mov word ptr [edx + esi*2], ax */ W16((u32)(r_edx+r_esi*2), (u16)r_eax);
    /* 00504655: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 00504659: movzx ecx, word ptr [edx + ecx*2] */ r_ecx = (u32)R16((u32)(r_edx+r_ecx*2));
    /* 0050465d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00504660: cmp ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504663: mov word ptr [edx + esi*2], cx */ W16((u32)(r_edx+r_esi*2), (u16)r_ecx);
    /* 00504667: jl 0x5045ad */ if ((fS!=fO)) goto L_005045ad;
L_0050466d:; BB(0x0050466d);
    /* 0050466d: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00504671: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00504675: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504678: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050467b: cmp edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050467e: jl 0x50458b */ if ((fS!=fO)) goto L_0050458b;
L_00504684:; BB(0x00504684);
    /* 00504684: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00504687: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00504688: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00504689: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050468a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050468b: ret  */ FN_RET(0x00504341); r_esp += 4; return;
L_0050468c:; BB(0x0050468c);
    /* 0050468c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050468e: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00504692: jmp 0x50463e */ goto L_0050463e;
L_00504694:; BB(0x00504694);
    /* 00504694: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00504696: jmp 0x50461d */ goto L_0050461d;
L_00504698:; BB(0x00504698);
    /* 00504698: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050469a: jmp 0x504600 */ goto L_00504600;
L_0050469f:; BB(0x0050469f);
    /* 0050469f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005046a1: jmp 0x5045d9 */ goto L_005045d9;
L_005046a6:; BB(0x005046a6);
    /* 005046a6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005046a8: jmp 0x5044d5 */ goto L_005044d5;
}

void f_0050434f(void)
{
    FN_ENTER(0x0050434f);
    goto L_0050434f;
L_00504349:; BB(0x00504349);
    /* 00504349: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0050434d: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
L_0050434f:; BB(0x0050434f);
    /* 0050434f: and al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00504351: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 00504355: mov edx, ebx */ r_edx = r_ebx;
    /* 00504357: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 0050435b: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0050435e: fadd dword ptr [edx*4 + 0x91fcb0] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x91fcb0u));
    /* 00504365: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00504369: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0050436e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00504373: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00504377: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0050437b: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0050437f: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00504383: mov eax, 0xb60b60b7 */ r_eax = 0xb60b60b7u;
    /* 00504388: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0050438c: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050438e: mov eax, esi */ r_eax = r_esi;
    /* 00504390: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00504393: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504395: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00504398: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0050439a: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0050439d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050439f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005043a1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005043a3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005043a5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005043a7: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005043aa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005043ac: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005043ae: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005043b0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005043b2: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005043b4: mov eax, esi */ r_eax = r_esi;
    /* 005043b6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005043b7: xor esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005043b9: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005043bb: mov edx, dword ptr [0xa72b28] */ r_edx = R32((u32)(0xa72b28u));
    /* 005043c1: fld dword ptr [edx + esi*4] */ FPUSH(R_F32((u32)(r_edx+r_esi*4)));
    /* 005043c4: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005043c6: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 005043ca: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 005043cf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005043d4: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005043d8: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005043dc: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 005043e0: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005043e4: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005043e6: movsx eax, word ptr [esp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x20u));
    /* 005043eb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005043ef: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 005043f3: mov eax, ebp */ r_eax = r_ebp;
    /* 005043f5: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005043fa: mov ebp, edx */ r_ebp = r_edx;
    /* 005043fc: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00504400: jmp 0x504408 */ goto L_00504408;
L_00504402:; BB(0x00504402);
    /* 00504402: mov ebp, dword ptr [0xa72b28] */ r_ebp = R32((u32)(0xa72b28u));
L_00504408:; BB(0x00504408);
    /* 00504408: movzx edi, byte ptr [esp + 0x6c] */ r_edi = (u32)R8((u32)(r_esp+0x6cu));
    /* 0050440d: mov ebx, esi */ r_ebx = r_esi;
    /* 0050440f: imul ebx, edi */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_edi; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00504412: add ebx, dword ptr [esp + 0x64] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x64u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00504416: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0050441a: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0050441e: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00504421: fadd dword ptr [ebx*4 + 0x91fcb0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*4+0x91fcb0u));
    /* 00504428: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0050442c: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00504431: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00504436: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0050443a: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0050443e: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00504442: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00504446: mov eax, 0xb60b60b7 */ r_eax = 0xb60b60b7u;
    /* 0050444b: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 0050444f: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00504451: mov edi, ebx */ r_edi = r_ebx;
    /* 00504453: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00504456: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504458: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0050445b: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0050445d: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00504460: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504462: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00504464: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504466: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504468: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050446a: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0050446d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050446f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00504471: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00504473: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00504475: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00504477: mov eax, ebx */ r_eax = r_ebx;
    /* 00504479: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050447a: xor ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0050447c: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0050447e: fld dword ptr [ebp + ebx*4] */ FPUSH(R_F32((u32)(r_ebp+r_ebx*4)));
    /* 00504482: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00504484: mov ebp, dword ptr [0xa72b2c] */ r_ebp = R32((u32)(0xa72b2cu));
    /* 0050448a: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0050448c: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00504490: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00504495: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050449a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0050449e: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005044a2: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 005044a6: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005044aa: movsx edx, word ptr [esp + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x20u));
    /* 005044af: mov ebx, esi */ r_ebx = r_esi;
    /* 005044b1: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 005044b7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005044b9: je 0x5046a6 */ if (fZ) goto L_005046a6;
L_005044bf:; BB(0x005044bf);
    /* 005044bf: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005044c1: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005044c3: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 005044c7: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 005044ca: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005044cc: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005044ce: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005044d0: movzx ebx, word ptr [ebp + edi*8] */ r_ebx = (u32)R16((u32)(r_ebp+r_edi*8));
L_005044d5:; BB(0x005044d5);
    /* 005044d5: movzx edi, word ptr [ecx + ebx*2] */ r_edi = (u32)R16((u32)(r_ecx+r_ebx*2));
    /* 005044d9: mov ebp, 0xff */ r_ebp = 0xffu;
    /* 005044de: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005044e4: jl 0x5044e8 */ if ((fS!=fO)) goto L_005044e8;
L_005044e6:; BB(0x005044e6);
    /* 005044e6: mov edx, ebp */ r_edx = r_ebp;
L_005044e8:; BB(0x005044e8);
    /* 005044e8: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005044ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005044ec: jg 0x5044f0 */ if ((!fZ&&fS==fO)) goto L_005044f0;
L_005044ee:; BB(0x005044ee);
    /* 005044ee: mov edx, ebp */ r_edx = r_ebp;
L_005044f0:; BB(0x005044f0);
    /* 005044f0: mov ebp, edi */ r_ebp = r_edi;
    /* 005044f2: and ebp, 0xff00 */ {  u32 a = r_ebp; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 005044f8: sar ebp, 8 */ { u32 c = (8u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 005044fb: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00504501: lea eax, [edx] */ r_eax = (u32)(r_edx);
    /* 00504503: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00504506: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504508: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0050450a: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0050450c: movzx ebp, bp */ r_ebp = (u32)(u16)r_ebp;
    /* 0050450f: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504511: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 00504514: mov edi, 0xff */ r_edi = 0xffu;
    /* 00504519: cmp ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050451f: jl 0x504523 */ if ((fS!=fO)) goto L_00504523;
L_00504521:; BB(0x00504521);
    /* 00504521: mov ebp, edi */ r_ebp = r_edi;
L_00504523:; BB(0x00504523);
    /* 00504523: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00504525: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00504527: jg 0x50452b */ if ((!fZ&&fS==fO)) goto L_0050452b;
L_00504529:; BB(0x00504529);
    /* 00504529: mov ebp, edi */ r_ebp = r_edi;
L_0050452b:; BB(0x0050452b);
    /* 0050452b: mov edi, 0xff */ r_edi = 0xffu;
    /* 00504530: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504536: jl 0x50453a */ if ((fS!=fO)) goto L_0050453a;
L_00504538:; BB(0x00504538);
    /* 00504538: mov edx, edi */ r_edx = r_edi;
L_0050453a:; BB(0x0050453a);
    /* 0050453a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0050453c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0050453e: jg 0x504542 */ if ((!fZ&&fS==fO)) goto L_00504542;
L_00504540:; BB(0x00504540);
    /* 00504540: mov edx, edi */ r_edx = r_edi;
L_00504542:; BB(0x00504542);
    /* 00504542: shl ebp, 8 */ { u32 c = (8u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00504545: or ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00504547: movzx edx, bp */ r_edx = (u32)(u16)r_ebp;
    /* 0050454a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0050454d: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504550: mov word ptr [esp + 0x40], dx */ W16((u32)(r_esp+0x40u), (u16)r_edx);
    /* 00504555: mov word ptr [ecx + ebx*2], dx */ W16((u32)(r_ecx+r_ebx*2), (u16)r_edx);
    /* 00504559: jl 0x504402 */ if ((fS!=fO)) goto L_00504402;
L_0050455f:; BB(0x0050455f);
    /* 0050455f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00504561: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 00504565: movzx edi, byte ptr [esp + 0x6c] */ r_edi = (u32)R8((u32)(r_esp+0x6cu));
    /* 0050456a: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0050456e: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00504570: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00504573: cmp ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504576: jl 0x504349 */ if ((fS!=fO)) goto L_00504349;
L_0050457c:; BB(0x0050457c);
    /* 0050457c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050457e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00504580: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00504584: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00504586: mov edx, 0x20 */ r_edx = 0x20u;
L_0050458b:; BB(0x0050458b);
    /* 0050458b: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0050458f: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00504593: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00504595: mov ecx, edi */ r_ecx = r_edi;
    /* 00504597: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0050459d: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 005045a1: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 005045a4: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005045a8: mov ebx, 0x20 */ r_ebx = 0x20u;
L_005045ad:; BB(0x005045ad);
    /* 005045ad: mov edx, dword ptr [0xa72b2c] */ r_edx = R32((u32)(0xa72b2cu));
    /* 005045b3: mov esi, ebp */ r_esi = r_ebp;
    /* 005045b5: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 005045bb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005045bd: je 0x50469f */ if (fZ) goto L_0050469f;
L_005045c3:; BB(0x005045c3);
    /* 005045c3: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 005045c7: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 005045ca: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005045cc: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 005045cf: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005045d1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005045d3: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005045d5: movzx ecx, word ptr [ecx + edi*8] */ r_ecx = (u32)R16((u32)(r_ecx+r_edi*8));
L_005045d9:; BB(0x005045d9);
    /* 005045d9: movzx eax, bl */ r_eax = (u32)(u8)r_ebx;
    /* 005045dc: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 005045e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005045e2: je 0x504698 */ if (fZ) goto L_00504698;
L_005045e8:; BB(0x005045e8);
    /* 005045e8: mov edi, eax */ r_edi = r_eax;
    /* 005045ea: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 005045ed: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 005045f1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005045f3: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 005045f6: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005045f8: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005045fa: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005045fc: movzx eax, word ptr [eax + edi*8] */ r_eax = (u32)R16((u32)(r_eax+r_edi*8));
L_00504600:; BB(0x00504600);
    /* 00504600: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504602: je 0x504694 */ if (fZ) goto L_00504694;
L_00504608:; BB(0x00504608);
    /* 00504608: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0050460c: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0050460e: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00504610: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 00504613: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504615: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504617: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504619: movzx esi, word ptr [esi + edi*8] */ r_esi = (u32)R16((u32)(r_esi+r_edi*8));
L_0050461d:; BB(0x0050461d);
    /* 0050461d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050461f: je 0x50468c */ if (fZ) goto L_0050468c;
L_00504621:; BB(0x00504621);
    /* 00504621: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 00504625: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504627: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504629: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0050462d: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 00504630: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504632: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504634: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504636: movzx edx, word ptr [edx + edi*8] */ r_edx = (u32)R16((u32)(r_edx+r_edi*8));
    /* 0050463a: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
L_0050463e:; BB(0x0050463e);
    /* 0050463e: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00504642: movzx edi, word ptr [edx + ecx*2] */ r_edi = (u32)R16((u32)(r_edx+r_ecx*2));
    /* 00504646: mov word ptr [edx + eax*2], di */ W16((u32)(r_edx+r_eax*2), (u16)r_edi);
    /* 0050464a: movzx eax, word ptr [edx + ecx*2] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*2));
    /* 0050464e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00504651: mov word ptr [edx + esi*2], ax */ W16((u32)(r_edx+r_esi*2), (u16)r_eax);
    /* 00504655: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 00504659: movzx ecx, word ptr [edx + ecx*2] */ r_ecx = (u32)R16((u32)(r_edx+r_ecx*2));
    /* 0050465d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00504660: cmp ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504663: mov word ptr [edx + esi*2], cx */ W16((u32)(r_edx+r_esi*2), (u16)r_ecx);
    /* 00504667: jl 0x5045ad */ if ((fS!=fO)) goto L_005045ad;
L_0050466d:; BB(0x0050466d);
    /* 0050466d: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00504671: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00504675: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504678: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050467b: cmp edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050467e: jl 0x50458b */ if ((fS!=fO)) goto L_0050458b;
L_00504684:; BB(0x00504684);
    /* 00504684: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00504687: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00504688: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00504689: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050468a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050468b: ret  */ FN_RET(0x0050434f); r_esp += 4; return;
L_0050468c:; BB(0x0050468c);
    /* 0050468c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050468e: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00504692: jmp 0x50463e */ goto L_0050463e;
L_00504694:; BB(0x00504694);
    /* 00504694: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00504696: jmp 0x50461d */ goto L_0050461d;
L_00504698:; BB(0x00504698);
    /* 00504698: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050469a: jmp 0x504600 */ goto L_00504600;
L_0050469f:; BB(0x0050469f);
    /* 0050469f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005046a1: jmp 0x5045d9 */ goto L_005045d9;
L_005046a6:; BB(0x005046a6);
    /* 005046a6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005046a8: jmp 0x5044d5 */ goto L_005044d5;
}

void f_00504554(void)
{
    FN_ENTER(0x00504554);
    goto L_00504554;
L_00504349:; BB(0x00504349);
    /* 00504349: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0050434d: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00504351: mov dword ptr [esp + 0x2c], ebp */ W32((u32)(r_esp+0x2cu), r_ebp);
    /* 00504355: mov edx, ebx */ r_edx = r_ebx;
    /* 00504357: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 0050435b: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0050435e: fadd dword ptr [edx*4 + 0x91fcb0] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x91fcb0u));
    /* 00504365: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00504369: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0050436e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00504373: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00504377: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0050437b: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0050437f: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00504383: mov eax, 0xb60b60b7 */ r_eax = 0xb60b60b7u;
    /* 00504388: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 0050438c: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0050438e: mov eax, esi */ r_eax = r_esi;
    /* 00504390: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00504393: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504395: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00504398: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0050439a: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0050439d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050439f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005043a1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005043a3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005043a5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005043a7: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005043aa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005043ac: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005043ae: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005043b0: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005043b2: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005043b4: mov eax, esi */ r_eax = r_esi;
    /* 005043b6: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005043b7: xor esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005043b9: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 005043bb: mov edx, dword ptr [0xa72b28] */ r_edx = R32((u32)(0xa72b28u));
    /* 005043c1: fld dword ptr [edx + esi*4] */ FPUSH(R_F32((u32)(r_edx+r_esi*4)));
    /* 005043c4: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005043c6: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 005043ca: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 005043cf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005043d4: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005043d8: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005043dc: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 005043e0: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005043e4: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005043e6: movsx eax, word ptr [esp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x20u));
    /* 005043eb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005043ef: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 005043f3: mov eax, ebp */ r_eax = r_ebp;
    /* 005043f5: and eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005043fa: mov ebp, edx */ r_ebp = r_edx;
    /* 005043fc: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 00504400: jmp 0x504408 */ goto L_00504408;
L_00504402:; BB(0x00504402);
    /* 00504402: mov ebp, dword ptr [0xa72b28] */ r_ebp = R32((u32)(0xa72b28u));
L_00504408:; BB(0x00504408);
    /* 00504408: movzx edi, byte ptr [esp + 0x6c] */ r_edi = (u32)R8((u32)(r_esp+0x6cu));
    /* 0050440d: mov ebx, esi */ r_ebx = r_esi;
    /* 0050440f: imul ebx, edi */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_edi; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00504412: add ebx, dword ptr [esp + 0x64] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esp+0x64u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00504416: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 0050441a: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0050441e: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00504421: fadd dword ptr [ebx*4 + 0x91fcb0] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*4+0x91fcb0u));
    /* 00504428: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 0050442c: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00504431: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00504436: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0050443a: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 0050443e: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00504442: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00504446: mov eax, 0xb60b60b7 */ r_eax = 0xb60b60b7u;
    /* 0050444b: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 0050444f: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00504451: mov edi, ebx */ r_edi = r_ebx;
    /* 00504453: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00504456: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504458: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0050445b: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0050445d: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00504460: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504462: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00504464: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504466: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504468: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050446a: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0050446d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0050446f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00504471: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00504473: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00504475: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00504477: mov eax, ebx */ r_eax = r_ebx;
    /* 00504479: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050447a: xor ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0050447c: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0050447e: fld dword ptr [ebp + ebx*4] */ FPUSH(R_F32((u32)(r_ebp+r_ebx*4)));
    /* 00504482: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00504484: mov ebp, dword ptr [0xa72b2c] */ r_ebp = R32((u32)(0xa72b2cu));
    /* 0050448a: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0050448c: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00504490: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 00504495: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0050449a: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0050449e: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005044a2: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 005044a6: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005044aa: movsx edx, word ptr [esp + 0x20] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x20u));
    /* 005044af: mov ebx, esi */ r_ebx = r_esi;
    /* 005044b1: and ebx, 0xff */ {  u32 a = r_ebx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 005044b7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005044b9: je 0x5046a6 */ if (fZ) goto L_005046a6;
L_005044bf:; BB(0x005044bf);
    /* 005044bf: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005044c1: add ebp, ebx */ {  u32 a = r_ebp; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005044c3: mov ebx, dword ptr [esp + 0x30] */ r_ebx = R32((u32)(r_esp+0x30u));
    /* 005044c7: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 005044ca: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005044cc: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005044ce: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005044d0: movzx ebx, word ptr [ebp + edi*8] */ r_ebx = (u32)R16((u32)(r_ebp+r_edi*8));
L_005044d5:; BB(0x005044d5);
    /* 005044d5: movzx edi, word ptr [ecx + ebx*2] */ r_edi = (u32)R16((u32)(r_ecx+r_ebx*2));
    /* 005044d9: mov ebp, 0xff */ r_ebp = 0xffu;
    /* 005044de: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005044e4: jl 0x5044e8 */ if ((fS!=fO)) goto L_005044e8;
L_005044e6:; BB(0x005044e6);
    /* 005044e6: mov edx, ebp */ r_edx = r_ebp;
L_005044e8:; BB(0x005044e8);
    /* 005044e8: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005044ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005044ec: jg 0x5044f0 */ if ((!fZ&&fS==fO)) goto L_005044f0;
L_005044ee:; BB(0x005044ee);
    /* 005044ee: mov edx, ebp */ r_edx = r_ebp;
L_005044f0:; BB(0x005044f0);
    /* 005044f0: mov ebp, edi */ r_ebp = r_edi;
    /* 005044f2: and ebp, 0xff00 */ {  u32 a = r_ebp; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 005044f8: sar ebp, 8 */ { u32 c = (8u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 005044fb: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 00504501: lea eax, [edx] */ r_eax = (u32)(r_edx);
    /* 00504503: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00504506: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504508: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0050450a: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0050450c: movzx ebp, bp */ r_ebp = (u32)(u16)r_ebp;
    /* 0050450f: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504511: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 00504514: mov edi, 0xff */ r_edi = 0xffu;
    /* 00504519: cmp ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050451f: jl 0x504523 */ if ((fS!=fO)) goto L_00504523;
L_00504521:; BB(0x00504521);
    /* 00504521: mov ebp, edi */ r_ebp = r_edi;
L_00504523:; BB(0x00504523);
    /* 00504523: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00504525: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00504527: jg 0x50452b */ if ((!fZ&&fS==fO)) goto L_0050452b;
L_00504529:; BB(0x00504529);
    /* 00504529: mov ebp, edi */ r_ebp = r_edi;
L_0050452b:; BB(0x0050452b);
    /* 0050452b: mov edi, 0xff */ r_edi = 0xffu;
    /* 00504530: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504536: jl 0x50453a */ if ((fS!=fO)) goto L_0050453a;
L_00504538:; BB(0x00504538);
    /* 00504538: mov edx, edi */ r_edx = r_edi;
L_0050453a:; BB(0x0050453a);
    /* 0050453a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0050453c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0050453e: jg 0x504542 */ if ((!fZ&&fS==fO)) goto L_00504542;
L_00504540:; BB(0x00504540);
    /* 00504540: mov edx, edi */ r_edx = r_edi;
L_00504542:; BB(0x00504542);
    /* 00504542: shl ebp, 8 */ { u32 c = (8u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00504545: or ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 00504547: movzx edx, bp */ r_edx = (u32)(u16)r_ebp;
    /* 0050454a: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0050454d: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504550: mov word ptr [esp + 0x40], dx */ W16((u32)(r_esp+0x40u), (u16)r_edx);
L_00504554:; BB(0x00504554);
    /* 00504554: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 00504555: mov word ptr [ecx + ebx*2], dx */ W16((u32)(r_ecx+r_ebx*2), (u16)r_edx);
    /* 00504559: jl 0x504402 */ if ((fS!=fO)) goto L_00504402;
L_0050455f:; BB(0x0050455f);
    /* 0050455f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00504561: mov ebp, dword ptr [esp + 0x2c] */ r_ebp = R32((u32)(r_esp+0x2cu));
    /* 00504565: movzx edi, byte ptr [esp + 0x6c] */ r_edi = (u32)R8((u32)(r_esp+0x6cu));
    /* 0050456a: mov ebx, dword ptr [esp + 0x28] */ r_ebx = R32((u32)(r_esp+0x28u));
    /* 0050456e: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00504570: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00504573: cmp ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504576: jl 0x504349 */ if ((fS!=fO)) goto L_00504349;
L_0050457c:; BB(0x0050457c);
    /* 0050457c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050457e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00504580: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 00504584: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00504586: mov edx, 0x20 */ r_edx = 0x20u;
L_0050458b:; BB(0x0050458b);
    /* 0050458b: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 0050458f: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 00504593: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00504595: mov ecx, edi */ r_ecx = r_edi;
    /* 00504597: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0050459d: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 005045a1: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 005045a4: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005045a8: mov ebx, 0x20 */ r_ebx = 0x20u;
L_005045ad:; BB(0x005045ad);
    /* 005045ad: mov edx, dword ptr [0xa72b2c] */ r_edx = R32((u32)(0xa72b2cu));
    /* 005045b3: mov esi, ebp */ r_esi = r_ebp;
    /* 005045b5: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 005045bb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005045bd: je 0x50469f */ if (fZ) goto L_0050469f;
L_005045c3:; BB(0x005045c3);
    /* 005045c3: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 005045c7: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 005045ca: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005045cc: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 005045cf: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005045d1: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005045d3: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005045d5: movzx ecx, word ptr [ecx + edi*8] */ r_ecx = (u32)R16((u32)(r_ecx+r_edi*8));
L_005045d9:; BB(0x005045d9);
    /* 005045d9: movzx eax, bl */ r_eax = (u32)(u8)r_ebx;
    /* 005045dc: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 005045e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005045e2: je 0x504698 */ if (fZ) goto L_00504698;
L_005045e8:; BB(0x005045e8);
    /* 005045e8: mov edi, eax */ r_edi = r_eax;
    /* 005045ea: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 005045ed: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 005045f1: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005045f3: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 005045f6: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005045f8: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005045fa: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005045fc: movzx eax, word ptr [eax + edi*8] */ r_eax = (u32)R16((u32)(r_eax+r_edi*8));
L_00504600:; BB(0x00504600);
    /* 00504600: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504602: je 0x504694 */ if (fZ) goto L_00504694;
L_00504608:; BB(0x00504608);
    /* 00504608: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0050460c: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0050460e: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00504610: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 00504613: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504615: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504617: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504619: movzx esi, word ptr [esi + edi*8] */ r_esi = (u32)R16((u32)(r_esi+r_edi*8));
L_0050461d:; BB(0x0050461d);
    /* 0050461d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0050461f: je 0x50468c */ if (fZ) goto L_0050468c;
L_00504621:; BB(0x00504621);
    /* 00504621: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 00504625: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504627: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504629: mov edi, dword ptr [esp + 0x28] */ r_edi = R32((u32)(r_esp+0x28u));
    /* 0050462d: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 00504630: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504632: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504634: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504636: movzx edx, word ptr [edx + edi*8] */ r_edx = (u32)R16((u32)(r_edx+r_edi*8));
    /* 0050463a: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
L_0050463e:; BB(0x0050463e);
    /* 0050463e: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00504642: movzx edi, word ptr [edx + ecx*2] */ r_edi = (u32)R16((u32)(r_edx+r_ecx*2));
    /* 00504646: mov word ptr [edx + eax*2], di */ W16((u32)(r_edx+r_eax*2), (u16)r_edi);
    /* 0050464a: movzx eax, word ptr [edx + ecx*2] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*2));
    /* 0050464e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00504651: mov word ptr [edx + esi*2], ax */ W16((u32)(r_edx+r_esi*2), (u16)r_eax);
    /* 00504655: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 00504659: movzx ecx, word ptr [edx + ecx*2] */ r_ecx = (u32)R16((u32)(r_edx+r_ecx*2));
    /* 0050465d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00504660: cmp ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504663: mov word ptr [edx + esi*2], cx */ W16((u32)(r_edx+r_esi*2), (u16)r_ecx);
    /* 00504667: jl 0x5045ad */ if ((fS!=fO)) goto L_005045ad;
L_0050466d:; BB(0x0050466d);
    /* 0050466d: mov edx, dword ptr [esp + 0x2c] */ r_edx = R32((u32)(r_esp+0x2cu));
    /* 00504671: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00504675: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504678: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0050467b: cmp edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050467e: jl 0x50458b */ if ((fS!=fO)) goto L_0050458b;
L_00504684:; BB(0x00504684);
    /* 00504684: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00504687: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00504688: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00504689: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0050468a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0050468b: ret  */ FN_RET(0x00504554); r_esp += 4; return;
L_0050468c:; BB(0x0050468c);
    /* 0050468c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0050468e: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00504692: jmp 0x50463e */ goto L_0050463e;
L_00504694:; BB(0x00504694);
    /* 00504694: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00504696: jmp 0x50461d */ goto L_0050461d;
L_00504698:; BB(0x00504698);
    /* 00504698: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0050469a: jmp 0x504600 */ goto L_00504600;
L_0050469f:; BB(0x0050469f);
    /* 0050469f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005046a1: jmp 0x5045d9 */ goto L_005045d9;
L_005046a6:; BB(0x005046a6);
    /* 005046a6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005046a8: jmp 0x5044d5 */ goto L_005044d5;
}

void f_005046b0(void) /* sub_5046B0 */
{
    FN_ENTER(0x005046b0);
    /* 005046b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005046b1: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005046b4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005046b6: movzx eax, byte ptr [ebx + 0x24] */ r_eax = (u32)R8((u32)(r_ebx+0x24u));
    /* 005046ba: call 0x5039b5 */ r_esp -= 4; W32(r_esp, 0x5046bfu); f_005039b5();
    /* 005046bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005046c0: push dword ptr [ebx + 0x3c] */ { u32 v = R32((u32)(r_ebx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005046c3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005046c5: call 0x503b74 */ r_esp -= 4; W32(r_esp, 0x5046cau); f_00503b74();
    /* 005046ca: fld dword ptr [ebx + 0x4c] */ FPUSH(R_F32((u32)(r_ebx+0x4cu)));
    /* 005046cd: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 005046d1: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 005046d6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005046db: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005046df: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 005046e3: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 005046e7: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 005046eb: movzx edx, byte ptr [esp + 0x30] */ r_edx = (u32)R8((u32)(r_esp+0x30u));
    /* 005046f0: fld dword ptr [ebx + 0x50] */ FPUSH(R_F32((u32)(r_ebx+0x50u)));
    /* 005046f3: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 005046f7: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 005046fc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00504701: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00504705: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 00504709: fistp qword ptr [esp + 0x30] */ W64((u32)(r_esp+0x30u), (u64)fx_int64(ST(0))); FPOP();
    /* 0050470d: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00504711: movzx ecx, byte ptr [esp + 0x30] */ r_ecx = (u32)R8((u32)(r_esp+0x30u));
    /* 00504716: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00504719: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0050471d: mov eax, dword ptr [ebx + 0x44] */ r_eax = R32((u32)(r_ebx+0x44u));
    /* 00504720: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00504724: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 00504727: movzx eax, byte ptr [eax + 6] */ r_eax = (u32)R8((u32)(r_eax+0x6u));
    /* 0050472b: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 0050472f: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 00504732: call 0x504776 */ r_esp -= 4; W32(r_esp, 0x504737u); f_00504776();
    /* 00504737: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 0050473a: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x50473fu); f_00829cc8();
    /* 0050473f: lea edx, [esp + 0x18] */ r_edx = (u32)(r_esp+0x18u);
    /* 00504743: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00504745: call 0x835ca8 */ r_esp -= 4; W32(r_esp, 0x50474au); f_00835ca8();
    /* 0050474a: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0050474e: push dword ptr [ebx + 0x3c] */ { u32 v = R32((u32)(r_ebx+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00504751: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 00504754: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00504756: call 0x5039cc */ r_esp -= 4; W32(r_esp, 0x50475bu); f_005039cc();
    /* 0050475b: call 0x5039e4 */ r_esp -= 4; W32(r_esp, 0x504760u); f_005039e4();
    /* 00504760: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00504763: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00504764: ret  */ FN_RET(0x005046b0); r_esp += 4; return;
}

void f_00504753(void)
{
    FN_ENTER(0x00504753);
    /* 00504753: sbb al, 0x8b */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0x8bu; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00504755: retf  */ { u32 t = R32(r_esp); r_esp += 4; r_eax = r_edx = 0; call_ind(t); }
    /* 00504756: call 0x5039cc */ r_esp -= 4; W32(r_esp, 0x50475bu); f_005039cc();
    /* 0050475b: call 0x5039e4 */ r_esp -= 4; W32(r_esp, 0x504760u); f_005039e4();
    /* 00504760: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00504763: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00504764: ret  */ FN_RET(0x00504753); r_esp += 4; return;
}

void f_00504776(void) /* sub_504776 */
{
    FN_ENTER(0x00504776);
    /* 00504776: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00504777: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00504778: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00504779: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0050477a: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0050477d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0050477f: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 00504783: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 00504787: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 0050478d: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00504790: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00504793: movzx edx, dl */ r_edx = (u32)(u8)r_edx;
    /* 00504796: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0050479a: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0050479e: mov ebp, eax */ r_ebp = r_eax;
    /* 005047a0: lea edx, [eax + 0x800] */ r_edx = (u32)(r_eax+0x800u);
    /* 005047a6: mov dword ptr [esp + 0x30], edx */ W32((u32)(r_esp+0x30u), r_edx);
L_005047aa:; BB(0x005047aa);
    /* 005047aa: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 005047ae: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 005047b2: mov dword ptr [esp + 0x34], ebp */ W32((u32)(r_esp+0x34u), r_ebp);
    /* 005047b6: mov edi, ecx */ r_edi = r_ecx;
    /* 005047b8: mov dword ptr [esp + 0x2c], ecx */ W32((u32)(r_esp+0x2cu), r_ecx);
    /* 005047bc: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 005047bf: fadd dword ptr [edi*4 + 0x91fca8] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x91fca8u));
    /* 005047c6: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 005047ca: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 005047cf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005047d4: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005047d8: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005047dc: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 005047e0: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005047e4: mov eax, 0xb60b60b7 */ r_eax = 0xb60b60b7u;
    /* 005047e9: mov edi, ebp */ r_edi = r_ebp;
    /* 005047eb: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 005047ef: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005047f1: mov esi, ebx */ r_esi = r_ebx;
    /* 005047f3: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 005047f6: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005047f8: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005047fb: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005047fd: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00504800: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00504802: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00504804: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00504806: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00504808: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0050480a: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 0050480d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0050480f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504811: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504813: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00504815: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00504817: mov eax, ebx */ r_eax = r_ebx;
    /* 00504819: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0050481a: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 0050481e: xor ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00504820: sub ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00504822: mov edx, dword ptr [0xa72b28] */ r_edx = R32((u32)(0xa72b28u));
    /* 00504828: fld dword ptr [edx + ebx*4] */ FPUSH(R_F32((u32)(r_edx+r_ebx*4)));
    /* 0050482b: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0050482d: movzx ebx, byte ptr [esp + 0x6c] */ r_ebx = (u32)R8((u32)(r_esp+0x6cu));
    /* 00504832: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00504836: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0050483b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00504840: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00504844: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00504848: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0050484c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00504850: movsx eax, word ptr [esp + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esp+0x20u));
    /* 00504855: mov ecx, edx */ r_ecx = r_edx;
    /* 00504857: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0050485b: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 0050485f: lea eax, [ebp + 0x40] */ r_eax = (u32)(r_ebp+0x40u);
    /* 00504862: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 00504866: jmp 0x50486e */ goto L_0050486e;
L_00504868:; BB(0x00504868);
    /* 00504868: mov ecx, dword ptr [0xa72b28] */ r_ecx = R32((u32)(0xa72b28u));
L_0050486e:; BB(0x0050486e);
    /* 0050486e: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00504872: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00504876: mov eax, esi */ r_eax = r_esi;
    /* 00504878: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0050487b: fadd dword ptr [eax*4 + 0x91fca8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x91fca8u));
    /* 00504882: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 00504886: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 0050488b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00504890: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 00504894: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 00504898: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 0050489c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005048a0: mov eax, 0xb60b60b7 */ r_eax = 0xb60b60b7u;
    /* 005048a5: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 005048a9: imul ebp */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebp; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005048ab: mov eax, ebp */ r_eax = r_ebp;
    /* 005048ad: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 005048b0: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005048b2: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005048b5: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005048b7: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 005048ba: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005048bc: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005048be: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005048c0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005048c2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005048c4: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005048c7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005048c9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005048cb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005048cd: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005048cf: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 005048d1: mov eax, ebp */ r_eax = r_ebp;
    /* 005048d3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 005048d4: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005048d6: xor ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005048d8: sub ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 005048da: fld dword ptr [ecx + ebp*4] */ FPUSH(R_F32((u32)(r_ecx+r_ebp*4)));
    /* 005048dd: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 005048df: mov edx, 0xff */ r_edx = 0xffu;
    /* 005048e4: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 005048e6: fnstcw word ptr [esp + 0x10] */ W16((u32)(r_esp+0x10u), fcw);
    /* 005048ea: movzx eax, word ptr [esp + 0x10] */ r_eax = (u32)R16((u32)(r_esp+0x10u));
    /* 005048ef: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005048f4: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005048f8: fldcw word ptr [esp + 0x18] */ fcw = R16((u32)(r_esp+0x18u));
    /* 005048fc: fistp dword ptr [esp + 0x20] */ W32((u32)(r_esp+0x20u), (u32)fx_int32(ST(0))); FPOP();
    /* 00504900: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00504904: movsx ecx, word ptr [esp + 0x20] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esp+0x20u));
    /* 00504909: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 0050490c: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504912: jl 0x504916 */ if ((fS!=fO)) goto L_00504916;
L_00504914:; BB(0x00504914);
    /* 00504914: mov ecx, edx */ r_ecx = r_edx;
L_00504916:; BB(0x00504916);
    /* 00504916: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00504918: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0050491a: jg 0x50491e */ if ((!fZ&&fS==fO)) goto L_0050491e;
L_0050491c:; BB(0x0050491c);
    /* 0050491c: mov ecx, edx */ r_ecx = r_edx;
L_0050491e:; BB(0x0050491e);
    /* 0050491e: mov edx, eax */ r_edx = r_eax;
    /* 00504920: and edx, 0xff00 */ {  u32 a = r_edx; u32 b = 0xff00u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00504926: sar edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00504929: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0050492c: lea ebp, [ecx] */ r_ebp = (u32)(r_ecx);
    /* 0050492e: shr ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 00504931: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00504933: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00504935: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504937: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 0050493a: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0050493c: movzx eax, cx */ r_eax = (u32)(u16)r_ecx;
    /* 0050493f: mov ecx, 0xff */ r_ecx = 0xffu;
    /* 00504944: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0050494a: jl 0x50494e */ if ((fS!=fO)) goto L_0050494e;
L_0050494c:; BB(0x0050494c);
    /* 0050494c: mov edx, ecx */ r_edx = r_ecx;
L_0050494e:; BB(0x0050494e);
    /* 0050494e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00504950: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00504952: jg 0x504956 */ if ((!fZ&&fS==fO)) goto L_00504956;
L_00504954:; BB(0x00504954);
    /* 00504954: mov edx, ecx */ r_edx = r_ecx;
L_00504956:; BB(0x00504956);
    /* 00504956: mov ecx, 0xff */ r_ecx = 0xffu;
    /* 0050495b: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504960: jl 0x504964 */ if ((fS!=fO)) goto L_00504964;
L_00504962:; BB(0x00504962);
    /* 00504962: mov eax, ecx */ r_eax = r_ecx;
L_00504964:; BB(0x00504964);
    /* 00504964: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00504966: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00504968: jg 0x50496c */ if ((!fZ&&fS==fO)) goto L_0050496c;
L_0050496a:; BB(0x0050496a);
    /* 0050496a: mov eax, ecx */ r_eax = r_ecx;
L_0050496c:; BB(0x0050496c);
    /* 0050496c: shl edx, 8 */ { u32 c = (8u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0050496f: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00504971: movzx eax, dx */ r_eax = (u32)(u16)r_edx;
    /* 00504974: mov word ptr [esp + 0x40], ax */ W16((u32)(r_esp+0x40u), (u16)r_eax);
    /* 00504979: mov word ptr [edi], ax */ W16((u32)(r_edi), (u16)r_eax);
    /* 0050497c: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 00504980: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504983: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00504985: ja 0x504868 */ if ((!fC&&!fZ)) goto L_00504868;
L_0050498b:; BB(0x0050498b);
    /* 0050498b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0050498d: mov ebp, dword ptr [esp + 0x34] */ r_ebp = R32((u32)(r_esp+0x34u));
    /* 00504991: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00504995: movzx eax, byte ptr [esp + 0x6c] */ r_eax = (u32)R8((u32)(r_esp+0x6cu));
    /* 0050499a: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 0050499e: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005049a0: add ebp, 0x40 */ {  u32 a = r_ebp; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005049a3: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005049a5: jg 0x5047aa */ if ((!fZ&&fS==fO)) goto L_005047aa;
L_005049ab:; BB(0x005049ab);
    /* 005049ab: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005049ad: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005049af: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005049b3: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005049b7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005049b9: mov edx, 0x20 */ r_edx = 0x20u;
L_005049be:; BB(0x005049be);
    /* 005049be: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 005049c2: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 005049c6: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005049c8: movzx esi, cl */ r_esi = (u32)(u8)r_ecx;
    /* 005049cb: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 005049cf: movzx eax, dl */ r_eax = (u32)(u8)r_edx;
    /* 005049d2: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 005049d6: mov ebx, 0x20 */ r_ebx = 0x20u;
L_005049db:; BB(0x005049db);
    /* 005049db: mov edx, dword ptr [0xa72b2c] */ r_edx = R32((u32)(0xa72b2cu));
    /* 005049e1: mov esi, ebp */ r_esi = r_ebp;
    /* 005049e3: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
    /* 005049e9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005049eb: je 0x504acd */ if (fZ) goto L_00504acd;
L_005049f1:; BB(0x005049f1);
    /* 005049f1: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 005049f5: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 005049f8: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005049fa: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 005049fd: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005049ff: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504a01: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504a03: movzx ecx, word ptr [ecx + edi*8] */ r_ecx = (u32)R16((u32)(r_ecx+r_edi*8));
L_00504a07:; BB(0x00504a07);
    /* 00504a07: movzx eax, bl */ r_eax = (u32)(u8)r_ebx;
    /* 00504a0a: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 00504a0e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504a10: je 0x504ac6 */ if (fZ) goto L_00504ac6;
L_00504a16:; BB(0x00504a16);
    /* 00504a16: mov edi, eax */ r_edi = r_eax;
    /* 00504a18: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 00504a1b: mov edi, dword ptr [esp + 0x2c] */ r_edi = R32((u32)(r_esp+0x2cu));
    /* 00504a1f: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00504a21: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 00504a24: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504a26: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504a28: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504a2a: movzx eax, word ptr [eax + edi*8] */ r_eax = (u32)R16((u32)(r_eax+r_edi*8));
L_00504a2e:; BB(0x00504a2e);
    /* 00504a2e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504a30: je 0x504ac2 */ if (fZ) goto L_00504ac2;
L_00504a36:; BB(0x00504a36);
    /* 00504a36: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00504a3a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00504a3c: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00504a3e: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 00504a41: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504a43: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504a45: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504a47: movzx esi, word ptr [esi + edi*8] */ r_esi = (u32)R16((u32)(r_esi+r_edi*8));
L_00504a4b:; BB(0x00504a4b);
    /* 00504a4b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504a4d: je 0x504aba */ if (fZ) goto L_00504aba;
L_00504a4f:; BB(0x00504a4f);
    /* 00504a4f: mov edi, dword ptr [esp + 0x3c] */ r_edi = R32((u32)(r_esp+0x3cu));
    /* 00504a53: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504a55: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504a57: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 00504a5b: lea edi, [edi + edi] */ r_edi = (u32)(r_edi+r_edi);
    /* 00504a5e: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504a60: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504a62: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504a64: movzx edx, word ptr [edx + edi*8] */ r_edx = (u32)R16((u32)(r_edx+r_edi*8));
    /* 00504a68: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
L_00504a6c:; BB(0x00504a6c);
    /* 00504a6c: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00504a70: movzx edi, word ptr [edx + ecx*2] */ r_edi = (u32)R16((u32)(r_edx+r_ecx*2));
    /* 00504a74: mov word ptr [edx + eax*2], di */ W16((u32)(r_edx+r_eax*2), (u16)r_edi);
    /* 00504a78: movzx eax, word ptr [edx + ecx*2] */ r_eax = (u32)R16((u32)(r_edx+r_ecx*2));
    /* 00504a7c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00504a7f: mov word ptr [edx + esi*2], ax */ W16((u32)(r_edx+r_esi*2), (u16)r_eax);
    /* 00504a83: mov esi, dword ptr [esp + 0x3c] */ r_esi = R32((u32)(r_esp+0x3cu));
    /* 00504a87: movzx ecx, word ptr [edx + ecx*2] */ r_ecx = (u32)R16((u32)(r_edx+r_ecx*2));
    /* 00504a8b: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00504a8e: cmp ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504a91: mov word ptr [edx + esi*2], cx */ W16((u32)(r_edx+r_esi*2), (u16)r_ecx);
    /* 00504a95: jl 0x5049db */ if ((fS!=fO)) goto L_005049db;
L_00504a9b:; BB(0x00504a9b);
    /* 00504a9b: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00504a9f: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 00504aa3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504aa6: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00504aa9: cmp ecx, 0x20 */ {  u32 a = r_ecx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504aac: jl 0x5049be */ if ((fS!=fO)) goto L_005049be;
L_00504ab2:; BB(0x00504ab2);
    /* 00504ab2: add esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00504ab5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00504ab6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00504ab7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00504ab8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00504ab9: ret  */ FN_RET(0x00504776); r_esp += 4; return;
L_00504aba:; BB(0x00504aba);
    /* 00504aba: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00504abc: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00504ac0: jmp 0x504a6c */ goto L_00504a6c;
L_00504ac2:; BB(0x00504ac2);
    /* 00504ac2: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00504ac4: jmp 0x504a4b */ goto L_00504a4b;
L_00504ac6:; BB(0x00504ac6);
    /* 00504ac6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00504ac8: jmp 0x504a2e */ goto L_00504a2e;
L_00504acd:; BB(0x00504acd);
    /* 00504acd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00504acf: jmp 0x504a07 */ goto L_00504a07;
}

void f_00504ad4(void) /* sub_504AD4 */
{
    FN_ENTER(0x00504ad4);
    /* 00504ad4: mov ecx, dword ptr [ecx + 0x2c] */ r_ecx = R32((u32)(r_ecx+0x2cu));
    /* 00504ad7: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x504adcu); f_00829cc8();
    /* 00504adc: ret 8 */ FN_RET(0x00504ad4); r_esp += 12; return;
}

void f_00504ae0(void) /* sub_504AE0 */
{
    FN_ENTER(0x00504ae0);
    /* 00504ae0: mov eax, dword ptr [ecx + 0x2c] */ r_eax = R32((u32)(r_ecx+0x2cu));
    /* 00504ae3: ret  */ FN_RET(0x00504ae0); r_esp += 4; return;
}

void f_00504ae4(void) /* sub_504AE4 */
{
    FN_ENTER(0x00504ae4);
    /* 00504ae4: mov edx, ecx */ r_edx = r_ecx;
    /* 00504ae6: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00504aea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504aec: je 0x504b04 */ if (fZ) goto L_00504b04;
L_00504aee:; BB(0x00504aee);
    /* 00504aee: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 00504af1: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x504af6u); f_00829cc8();
    /* 00504af6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00504af8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00504afa: call 0x5067f8 */ r_esp -= 4; W32(r_esp, 0x504affu); f_005067f8();
    /* 00504aff: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00504b02: jmp 0x504b4f */ goto L_00504b4f;
L_00504b04:; BB(0x00504b04);
    /* 00504b04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00504b06: mov edx, dword ptr [edx + 0x2c] */ r_edx = R32((u32)(r_edx+0x2cu));
    /* 00504b09: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00504b0b: call 0x835e68 */ r_esp -= 4; W32(r_esp, 0x504b10u); f_00835e68();
    /* 00504b10: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00504b15: mov edx, 1 */ r_edx = 0x1u;
    /* 00504b1a: call 0x835ee0 */ r_esp -= 4; W32(r_esp, 0x504b1fu); f_00835ee0();
    /* 00504b1f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00504b21: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00504b26: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00504b28: call 0x835e1c */ r_esp -= 4; W32(r_esp, 0x504b2du); f_00835e1c();
    /* 00504b2d: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00504b32: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00504b34: call 0x8361b4 */ r_esp -= 4; W32(r_esp, 0x504b39u); f_008361b4();
    /* 00504b39: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00504b3b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00504b3d: call 0x5067f8 */ r_esp -= 4; W32(r_esp, 0x504b42u); f_005067f8();
    /* 00504b42: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00504b45: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00504b4a: call 0x8361c4 */ r_esp -= 4; W32(r_esp, 0x504b4fu); f_008361c4();
L_00504b4f:; BB(0x00504b4f);
    /* 00504b4f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x504b54u); f_0061cdb0();
    /* 00504b54: ret 0xc */ FN_RET(0x00504ae4); r_esp += 16; return;
}

void f_00504b58(void) /* sub_504B58 */
{
    FN_ENTER(0x00504b58);
    /* 00504b58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00504b59: mov ebp, esp */ r_ebp = r_esp;
    /* 00504b5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00504b5d: push 0x8d3814 */ { u32 v = 0x8d3814u; r_esp -= 4; W32(r_esp, v); }
    /* 00504b62: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00504b68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00504b69: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00504b70: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00504b73: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00504b76: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00504b79: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00504b7c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00504b7f: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 00504b83: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00504b86: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00504b89: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00504b8c: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x504b91u); f_008193cc();
    /* 00504b91: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00504b98: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00504b9b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00504b9e: mov dword ptr [esi], 0xafeae8 */ W32((u32)(r_esi), 0xafeae8u);
    /* 00504ba4: mov byte ptr [esi + 0x1c], al */ W8((u32)(r_esi+0x1cu), (u8)r_eax);
    /* 00504ba7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00504ba8: call 0x504bc4 */ r_esp -= 4; W32(r_esp, 0x504badu); f_00504bc4();
    /* 00504bad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00504bae: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00504bb1: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00504bb4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00504bb7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00504bbe: mov esp, ebp */ r_esp = r_ebp;
    /* 00504bc0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00504bc1: ret 8 */ FN_RET(0x00504b58); r_esp += 12; return;
}

void f_00504bc4(void) /* sub_504BC4 */
{
    FN_ENTER(0x00504bc4);
    /* 00504bc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00504bc5: mov ebp, esp */ r_ebp = r_esp;
    /* 00504bc7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00504bc9: push 0x504bfa */ { u32 v = 0x504bfau; r_esp -= 4; W32(r_esp, v); }
    /* 00504bce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00504bd4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00504bd5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00504bdc: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00504bdf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00504be2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00504be5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00504be8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00504beb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00504bee: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00504bf5: mov esp, ebp */ r_esp = r_ebp;
    /* 00504bf7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00504bf8: ret  */ FN_RET(0x00504bc4); r_esp += 4; return;
}

void f_00504bfa(void)
{
    FN_ENTER(0x00504bfa);
    /* 00504bfa: mov eax, 0xafeab0 */ r_eax = 0xafeab0u;
    /* 00504bff: jmp 0x857a43 */ f_00857a43(); return;
}

void f_00504c04(void) /* sub_504C04 */
{
    FN_ENTER(0x00504c04);
    /* 00504c04: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00504c05: movzx edx, byte ptr [ecx + 0x1c] */ r_edx = (u32)R8((u32)(r_ecx+0x1cu));
    /* 00504c09: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00504c0b: movzx eax, byte ptr [0xa72b0c] */ r_eax = (u32)R8((u32)(0xa72b0cu));
    /* 00504c12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00504c14: jle 0x504c30 */ if ((fZ||fS!=fO)) goto L_00504c30;
L_00504c16:; BB(0x00504c16);
    /* 00504c16: mov ecx, dword ptr [ebx*4 + 0xa72b10] */ r_ecx = R32((u32)(r_ebx*4+0xa72b10u));
    /* 00504c1d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504c1f: je 0x504c29 */ if (fZ) goto L_00504c29;
L_00504c21:; BB(0x00504c21);
    /* 00504c21: movzx ecx, byte ptr [ecx + 0x25] */ r_ecx = (u32)R8((u32)(r_ecx+0x25u));
    /* 00504c25: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504c27: je 0x504c5a */ if (fZ) goto L_00504c5a;
L_00504c29:; BB(0x00504c29);
    /* 00504c29: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00504c2c: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504c2e: jl 0x504c16 */ if ((fS!=fO)) goto L_00504c16;
L_00504c30:; BB(0x00504c30);
    /* 00504c30: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
L_00504c35:; BB(0x00504c35);
    /* 00504c35: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00504c38: je 0x504c56 */ if (fZ) goto L_00504c56;
L_00504c3a:; BB(0x00504c3a);
    /* 00504c3a: mov ecx, dword ptr [eax*4 + 0xa72b10] */ r_ecx = R32((u32)(r_eax*4+0xa72b10u));
    /* 00504c41: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00504c43: je 0x504c56 */ if (fZ) goto L_00504c56;
L_00504c45:; BB(0x00504c45);
    /* 00504c45: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00504c47: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 00504c4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00504c4d: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00504c51: call 0x504ae4 */ r_esp -= 4; W32(r_esp, 0x504c56u); f_00504ae4();
L_00504c56:; BB(0x00504c56);
    /* 00504c56: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00504c57: ret 0xc */ FN_RET(0x00504c04); r_esp += 16; return;
L_00504c5a:; BB(0x00504c5a);
    /* 00504c5a: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x504c5fu); f_004f7c84();
    /* 00504c5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504c61: jne 0x504c70 */ if (!fZ) goto L_00504c70;
L_00504c63:; BB(0x00504c63);
    /* 00504c63: mov edx, dword ptr [ebx*4 + 0xa72b10] */ r_edx = R32((u32)(r_ebx*4+0xa72b10u));
    /* 00504c6a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00504c6c: mov word ptr [edx + 0x4a], ax */ W16((u32)(r_edx+0x4au), (u16)r_eax);
L_00504c70:; BB(0x00504c70);
    /* 00504c70: movsx eax, bl */ r_eax = (u32)(i32)(i8)(u8)r_ebx;
    /* 00504c73: jmp 0x504c35 */ goto L_00504c35;
}

void f_00504c78(void) /* sub_504C78 */
{
    FN_ENTER(0x00504c78);
    /* 00504c78: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00504c7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504c7e: je 0x504c89 */ if (fZ) goto L_00504c89;
L_00504c80:; BB(0x00504c80);
    /* 00504c80: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00504c82: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x504c87u); f_00829cc8();
    /* 00504c87: jmp 0x504cc0 */ goto L_00504cc0;
L_00504c89:; BB(0x00504c89);
    /* 00504c89: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00504c8e: call 0x8361bc */ r_esp -= 4; W32(r_esp, 0x504c93u); f_008361bc();
    /* 00504c93: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00504c95: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00504c9a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00504c9c: call 0x835e1c */ r_esp -= 4; W32(r_esp, 0x504ca1u); f_00835e1c();
    /* 00504ca1: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00504ca6: call 0x835f44 */ r_esp -= 4; W32(r_esp, 0x504cabu); f_00835f44();
    /* 00504cab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00504cad: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00504cb2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00504cb4: call 0x835e68 */ r_esp -= 4; W32(r_esp, 0x504cb9u); f_00835e68();
    /* 00504cb9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00504cbb: call 0x8361c4 */ r_esp -= 4; W32(r_esp, 0x504cc0u); f_008361c4();
L_00504cc0:; BB(0x00504cc0);
    /* 00504cc0: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x504cc5u); f_0061cdb0();
    /* 00504cc5: call 0x50689c */ r_esp -= 4; W32(r_esp, 0x504ccau); f_0050689c();
    /* 00504cca: ret 4 */ FN_RET(0x00504c78); r_esp += 8; return;
}

void f_00504cd0(void) /* sub_504CD0 */
{
    FN_ENTER(0x00504cd0);
    /* 00504cd0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00504cd2: mov byte ptr [0xa72b0c], al */ W8((u32)(0xa72b0cu), (u8)r_eax);
    /* 00504cd7: mov dword ptr [0xa72b10], eax */ W32((u32)(0xa72b10u), r_eax);
    /* 00504cdc: mov dword ptr [0xa72b14], eax */ W32((u32)(0xa72b14u), r_eax);
    /* 00504ce1: mov dword ptr [0xa72b18], eax */ W32((u32)(0xa72b18u), r_eax);
    /* 00504ce6: mov dword ptr [0xa72b1c], eax */ W32((u32)(0xa72b1cu), r_eax);
    /* 00504ceb: mov dword ptr [0xa72b20], eax */ W32((u32)(0xa72b20u), r_eax);
    /* 00504cf0: mov dword ptr [0xa72b24], eax */ W32((u32)(0xa72b24u), r_eax);
    /* 00504cf5: ret  */ FN_RET(0x00504cd0); r_esp += 4; return;
}

void f_00504cf8(void) /* sub_504CF8 */
{
    FN_ENTER(0x00504cf8);
    /* 00504cf8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00504cf9: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00504cfc: push 0x5a0 */ { u32 v = 0x5a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00504d01: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x504d06u); f_0082e940();
    /* 00504d06: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00504d07: mov dword ptr [0xa72b28], eax */ W32((u32)(0xa72b28u), r_eax);
    /* 00504d0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00504d0e: mov ebx, eax */ r_ebx = r_eax;
L_00504d10:; BB(0x00504d10);
    /* 00504d10: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00504d13: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00504d16: fmul dword ptr [0x91fcc8] */ ST(0) = ST(0) * R_F32((u32)(0x91fcc8u));
    /* 00504d1c: fdiv dword ptr [0x91fcc4] */ ST(0) = ST(0) / R_F32((u32)(0x91fcc4u));
    /* 00504d22: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00504d26: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00504d2b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00504d30: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00504d34: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00504d38: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00504d3c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00504d40: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00504d44: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x504d49u); f_0082dcbc();
    /* 00504d49: mov edx, dword ptr [0xa72b28] */ r_edx = R32((u32)(0xa72b28u));
    /* 00504d4f: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 00504d52: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00504d55: cmp ebx, 0x168 */ {  u32 a = r_ebx; u32 b = 0x168u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504d5b: jl 0x504d10 */ if ((fS!=fO)) goto L_00504d10;
L_00504d5d:; BB(0x00504d5d);
    /* 00504d5d: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00504d60: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00504d61: ret  */ FN_RET(0x00504cf8); r_esp += 4; return;
}

void f_00504d4f(void)
{
    FN_ENTER(0x00504d4f);
    goto L_00504d4f;
L_00504d10:; BB(0x00504d10);
    /* 00504d10: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00504d13: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00504d16: fmul dword ptr [0x91fcc8] */ ST(0) = ST(0) * R_F32((u32)(0x91fcc8u));
    /* 00504d1c: fdiv dword ptr [0x91fcc4] */ ST(0) = ST(0) / R_F32((u32)(0x91fcc4u));
    /* 00504d22: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00504d26: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00504d2b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00504d30: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00504d34: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00504d38: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00504d3c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00504d40: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00504d44: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x504d49u); f_0082dcbc();
    /* 00504d49: mov edx, dword ptr [0xa72b28] */ r_edx = R32((u32)(0xa72b28u));
L_00504d4f:; BB(0x00504d4f);
    /* 00504d4f: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 00504d52: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00504d55: cmp ebx, 0x168 */ {  u32 a = r_ebx; u32 b = 0x168u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504d5b: jl 0x504d10 */ if ((fS!=fO)) goto L_00504d10;
L_00504d5d:; BB(0x00504d5d);
    /* 00504d5d: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00504d60: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00504d61: ret  */ FN_RET(0x00504d4f); r_esp += 4; return;
}

void f_00504d55(void)
{
    FN_ENTER(0x00504d55);
    goto L_00504d55;
L_00504d10:; BB(0x00504d10);
    /* 00504d10: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00504d13: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00504d16: fmul dword ptr [0x91fcc8] */ ST(0) = ST(0) * R_F32((u32)(0x91fcc8u));
    /* 00504d1c: fdiv dword ptr [0x91fcc4] */ ST(0) = ST(0) / R_F32((u32)(0x91fcc4u));
    /* 00504d22: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 00504d26: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 00504d2b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00504d30: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00504d34: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 00504d38: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 00504d3c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00504d40: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 00504d44: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x504d49u); f_0082dcbc();
    /* 00504d49: mov edx, dword ptr [0xa72b28] */ r_edx = R32((u32)(0xa72b28u));
    /* 00504d4f: fstp dword ptr [edx + ebx*4] */ W_F32((u32)(r_edx+r_ebx*4), ST(0)); FPOP();
    /* 00504d52: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_00504d55:; BB(0x00504d55);
    /* 00504d55: cmp ebx, 0x168 */ {  u32 a = r_ebx; u32 b = 0x168u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504d5b: jl 0x504d10 */ if ((fS!=fO)) goto L_00504d10;
L_00504d5d:; BB(0x00504d5d);
    /* 00504d5d: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00504d60: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00504d61: ret  */ FN_RET(0x00504d55); r_esp += 4; return;
}

void f_00504d64(void) /* sub_504D64 */
{
    FN_ENTER(0x00504d64);
    /* 00504d64: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00504d67: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 00504d6c: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x504d71u); f_0082e940();
    /* 00504d71: mov dword ptr [0xa72b60], eax */ W32((u32)(0xa72b60u), r_eax);
    /* 00504d76: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 00504d7b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00504d7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00504d7e: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x504d83u); f_0086b688();
    /* 00504d83: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 00504d88: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x504d8du); f_0082e940();
    /* 00504d8d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00504d90: mov dword ptr [0xa72b2c], eax */ W32((u32)(0xa72b2cu), r_eax);
    /* 00504d95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504d97: je 0x504dff */ if (fZ) goto L_00504dff;
L_00504d99:; BB(0x00504d99);
    /* 00504d99: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00504d9c: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00504da0: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00504da4: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 00504da8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00504daa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00504dac: mov ebx, eax */ r_ebx = r_eax;
    /* 00504dae: mov ebp, edx */ r_ebp = r_edx;
L_00504db0:; BB(0x00504db0);
    /* 00504db0: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00504db2: mov esi, ebp */ r_esi = r_ebp;
    /* 00504db4: and esi, 0xff */ {  u32 a = r_esi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_esi = r;  }
L_00504dba:; BB(0x00504dba);
    /* 00504dba: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 00504dbc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00504dbd: mov ecx, edi */ r_ecx = r_edi;
    /* 00504dbf: and ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00504dc5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00504dc6: call 0x7a9608 */ r_esp -= 4; W32(r_esp, 0x504dcbu); f_007a9608();
    /* 00504dcb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00504dce: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00504dd0: add ecx, dword ptr [0xa72b2c] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa72b2cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00504dd6: mov word ptr [ecx + edi*2], ax */ W16((u32)(r_ecx+r_edi*2), (u16)r_eax);
    /* 00504dda: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00504ddd: cmp edi, 0x40 */ {  u32 a = r_edi; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504de0: jl 0x504dba */ if ((fS!=fO)) goto L_00504dba;
L_00504de2:; BB(0x00504de2);
    /* 00504de2: add ebx, 0x80 */ {  u32 a = r_ebx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00504de8: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00504deb: cmp ebp, 0x40 */ {  u32 a = r_ebp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504dee: jl 0x504db0 */ if ((fS!=fO)) goto L_00504db0;
L_00504df0:; BB(0x00504df0);
    /* 00504df0: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00504df3: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00504df7: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00504dfb: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
L_00504dff:; BB(0x00504dff);
    /* 00504dff: push dword ptr [0xa72b60] */ { u32 v = R32((u32)(0xa72b60u)); r_esp -= 4; W32(r_esp, v); }
    /* 00504e05: push dword ptr [0x9ba42c] */ { u32 v = R32((u32)(0x9ba42cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00504e0b: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x504e10u); f_005b9910();
    /* 00504e10: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00504e13: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00504e18: call 0x82aab8 */ r_esp -= 4; W32(r_esp, 0x504e1du); f_0082aab8();
    /* 00504e1d: mov ecx, 0x9ba450 */ r_ecx = 0x9ba450u;
    /* 00504e22: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00504e24: call 0x829e74 */ r_esp -= 4; W32(r_esp, 0x504e29u); f_00829e74();
    /* 00504e29: call 0x82aac0 */ r_esp -= 4; W32(r_esp, 0x504e2eu); f_0082aac0();
    /* 00504e2e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00504e31: ret  */ FN_RET(0x00504d64); r_esp += 4; return;
}

void f_00504e34(void) /* sub_504E34 */
{
    FN_ENTER(0x00504e34);
    /* 00504e34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00504e35: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00504e36: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00504e39: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00504e3b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00504e3d: mov dword ptr [0xa72b30], eax */ W32((u32)(0xa72b30u), r_eax);
    /* 00504e42: mov dword ptr [0xa72b34], eax */ W32((u32)(0xa72b34u), r_eax);
    /* 00504e47: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00504e49: mov dword ptr [0xa72b38], eax */ W32((u32)(0xa72b38u), r_eax);
    /* 00504e4e: mov dword ptr [0xa72b3c], eax */ W32((u32)(0xa72b3cu), r_eax);
    /* 00504e53: mov dword ptr [0xa72b40], eax */ W32((u32)(0xa72b40u), r_eax);
    /* 00504e58: mov dword ptr [0xa72b44], eax */ W32((u32)(0xa72b44u), r_eax);
    /* 00504e5d: mov dword ptr [0xa72b48], eax */ W32((u32)(0xa72b48u), r_eax);
    /* 00504e62: mov dword ptr [0xa72b4c], eax */ W32((u32)(0xa72b4cu), r_eax);
    /* 00504e67: mov dword ptr [0xa72b50], eax */ W32((u32)(0xa72b50u), r_eax);
    /* 00504e6c: mov dword ptr [0xa72b54], eax */ W32((u32)(0xa72b54u), r_eax);
    /* 00504e71: mov dword ptr [0xa72b58], eax */ W32((u32)(0xa72b58u), r_eax);
    /* 00504e76: mov dword ptr [0xa72b5c], eax */ W32((u32)(0xa72b5cu), r_eax);
L_00504e7b:; BB(0x00504e7b);
    /* 00504e7b: push 0x2040 */ { u32 v = 0x2040u; r_esp -= 4; W32(r_esp, v); }
    /* 00504e80: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x504e85u); f_0082e940();
    /* 00504e85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00504e86: mov dword ptr [ebp + 0xa72b30], eax */ W32((u32)(r_ebp+0xa72b30u), r_eax);
    /* 00504e8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504e8e: jne 0x504e95 */ if (!fZ) goto L_00504e95;
L_00504e90:; BB(0x00504e90);
    /* 00504e90: mov edi, 1 */ r_edi = 0x1u;
L_00504e95:; BB(0x00504e95);
    /* 00504e95: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00504e98: cmp ebp, 0x30 */ {  u32 a = r_ebp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504e9b: jl 0x504e7b */ if ((fS!=fO)) goto L_00504e7b;
L_00504e9d:; BB(0x00504e9d);
    /* 00504e9d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504e9f: je 0x504ec6 */ if (fZ) goto L_00504ec6;
L_00504ea1:; BB(0x00504ea1);
    /* 00504ea1: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00504ea3:; BB(0x00504ea3);
    /* 00504ea3: mov eax, dword ptr [ebp + 0xa72b30] */ r_eax = R32((u32)(r_ebp+0xa72b30u));
    /* 00504ea9: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00504eac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504eae: je 0x504ec1 */ if (fZ) goto L_00504ec1;
L_00504eb0:; BB(0x00504eb0);
    /* 00504eb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00504eb1: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x504eb6u); f_0082e960();
    /* 00504eb6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00504eb7: mov dword ptr [ebp + 0xa72b2c], 0 */ W32((u32)(r_ebp+0xa72b2cu), 0x0u);
L_00504ec1:; BB(0x00504ec1);
    /* 00504ec1: cmp ebp, 0x30 */ {  u32 a = r_ebp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504ec4: jl 0x504ea3 */ if ((fS!=fO)) goto L_00504ea3;
L_00504ec6:; BB(0x00504ec6);
    /* 00504ec6: push 0x18300 */ { u32 v = 0x18300u; r_esp -= 4; W32(r_esp, v); }
    /* 00504ecb: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x504ed0u); f_0082e940();
    /* 00504ed0: mov edi, eax */ r_edi = r_eax;
    /* 00504ed2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00504ed5: mov ebp, edi */ r_ebp = r_edi;
    /* 00504ed7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504ed9: je 0x504fef */ if (fZ) goto L_00504fef;
L_00504edf:; BB(0x00504edf);
    /* 00504edf: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00504ee0: push dword ptr [0x9ba428] */ { u32 v = R32((u32)(0x9ba428u)); r_esp -= 4; W32(r_esp, v); }
    /* 00504ee6: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x504eebu); f_005b9910();
    /* 00504eeb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00504eee: cmp eax, 0x18300 */ {  u32 a = r_eax; u32 b = 0x18300u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504ef3: je 0x504efb */ if (fZ) goto L_00504efb;
L_00504ef5:; BB(0x00504ef5);
    /* 00504ef5: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00504ef8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00504ef9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00504efa: ret  */ FN_RET(0x00504e34); r_esp += 4; return;
L_00504efb:; BB(0x00504efb);
    /* 00504efb: call 0x504d64 */ r_esp -= 4; W32(r_esp, 0x504f00u); f_00504d64();
    /* 00504f00: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00504f04: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00504f08: mov dword ptr [esp + 0x14], esi */ W32((u32)(r_esp+0x14u), r_esi);
    /* 00504f0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00504f0e: mov esi, ebp */ r_esi = r_ebp;
    /* 00504f10: mov ebp, eax */ r_ebp = r_eax;
L_00504f12:; BB(0x00504f12);
    /* 00504f12: push 0x2040 */ { u32 v = 0x2040u; r_esp -= 4; W32(r_esp, v); }
    /* 00504f17: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00504f18: push dword ptr [ebp + 0xa72b30] */ { u32 v = R32((u32)(r_ebp+0xa72b30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00504f1e: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x504f23u); f_0086b6b8();
    /* 00504f23: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00504f26: mov ebx, dword ptr [ebp + 0xa72b30] */ r_ebx = R32((u32)(r_ebp+0xa72b30u));
    /* 00504f2c: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 00504f30: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00504f34: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00504f36:; BB(0x00504f36);
    /* 00504f36: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00504f38: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
L_00504f3b:; BB(0x00504f3b);
    /* 00504f3b: mov esi, dword ptr [0xa72b2c] */ r_esi = R32((u32)(0xa72b2cu));
    /* 00504f41: movzx ebp, dl */ r_ebp = (u32)(u8)r_edx;
    /* 00504f44: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504f46: je 0x504ff5 */ if (fZ) goto L_00504ff5;
L_00504f4c:; BB(0x00504f4c);
    /* 00504f4c: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00504f4e: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00504f50: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 00504f53: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00504f55: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00504f57: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00504f59: movzx edi, word ptr [esi + ebp*8] */ r_edi = (u32)R16((u32)(r_esi+r_ebp*8));
L_00504f5d:; BB(0x00504f5d);
    /* 00504f5d: movzx ebp, word ptr [ebx + edi*2 + 0x40] */ r_ebp = (u32)R16((u32)(r_ebx+r_edi*2+0x40u));
    /* 00504f62: and ebp, 0x1f */ {  u32 a = r_ebp; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00504f65: mov esi, ebp */ r_esi = r_ebp;
    /* 00504f67: shl esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00504f6a: or esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00504f6c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504f6f: mov word ptr [ebx + edi*2 + 0x40], si */ W16((u32)(r_ebx+r_edi*2+0x40u), (u16)r_esi);
    /* 00504f74: cmp edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504f77: jl 0x504f3b */ if ((fS!=fO)) goto L_00504f3b;
L_00504f79:; BB(0x00504f79);
    /* 00504f79: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00504f7c: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504f7f: jl 0x504f36 */ if ((fS!=fO)) goto L_00504f36;
L_00504f81:; BB(0x00504f81);
    /* 00504f81: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00504f85: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00504f89: add esi, 0x2040 */ {  u32 a = r_esi; u32 b = 0x2040u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00504f8f: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00504f92: cmp ebp, 0x30 */ {  u32 a = r_ebp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504f95: jl 0x504f12 */ if ((fS!=fO)) goto L_00504f12;
L_00504f9b:; BB(0x00504f9b);
    /* 00504f9b: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00504f9f: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00504fa3: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00504fa7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504fa9: je 0x504fb2 */ if (fZ) goto L_00504fb2;
L_00504fab:; BB(0x00504fab);
    /* 00504fab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00504fac: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x504fb1u); f_0082e960();
    /* 00504fb1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00504fb2:; BB(0x00504fb2);
    /* 00504fb2: call 0x504cd0 */ r_esp -= 4; W32(r_esp, 0x504fb7u); f_00504cd0();
    /* 00504fb7: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00504fbc: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 00504fc3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00504fc5: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00504fca: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00504fcc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00504fce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00504fcf: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x504fd5u); call_ind(t); }
    /* 00504fd5: push dword ptr [esp] */ { u32 v = R32((u32)(r_esp)); r_esp -= 4; W32(r_esp, v); }
    /* 00504fd8: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00504fdd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00504fdf: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00504fe1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00504fe3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00504fe4: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x504feau); call_ind(t); }
    /* 00504fea: call 0x504cf8 */ r_esp -= 4; W32(r_esp, 0x504fefu); f_00504cf8();
L_00504fef:; BB(0x00504fef);
    /* 00504fef: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00504ff2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00504ff3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00504ff4: ret  */ FN_RET(0x00504e34); r_esp += 4; return;
L_00504ff5:; BB(0x00504ff5);
    /* 00504ff5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00504ff7: jmp 0x504f5d */ goto L_00504f5d;
}

void f_00504f4f(void)
{
    FN_ENTER(0x00504f4f);
    goto L_00504f4f;
L_00504f12:; BB(0x00504f12);
    /* 00504f12: push 0x2040 */ { u32 v = 0x2040u; r_esp -= 4; W32(r_esp, v); }
    /* 00504f17: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00504f18: push dword ptr [ebp + 0xa72b30] */ { u32 v = R32((u32)(r_ebp+0xa72b30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00504f1e: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x504f23u); f_0086b6b8();
    /* 00504f23: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00504f26: mov ebx, dword ptr [ebp + 0xa72b30] */ r_ebx = R32((u32)(r_ebp+0xa72b30u));
    /* 00504f2c: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 00504f30: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00504f34: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00504f36:; BB(0x00504f36);
    /* 00504f36: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00504f38: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
L_00504f3b:; BB(0x00504f3b);
    /* 00504f3b: mov esi, dword ptr [0xa72b2c] */ r_esi = R32((u32)(0xa72b2cu));
    /* 00504f41: movzx ebp, dl */ r_ebp = (u32)(u8)r_edx;
    /* 00504f44: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504f46: je 0x504ff5 */ if (fZ) goto L_00504ff5;
L_00504f4c:; BB(0x00504f4c);
    /* 00504f4c: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00504f4e: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
L_00504f4f:; BB(0x00504f4f);
    /* 00504f4f: cmc  */ fC = !fC;
    /* 00504f50: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 00504f53: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00504f55: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00504f57: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00504f59: movzx edi, word ptr [esi + ebp*8] */ r_edi = (u32)R16((u32)(r_esi+r_ebp*8));
L_00504f5d:; BB(0x00504f5d);
    /* 00504f5d: movzx ebp, word ptr [ebx + edi*2 + 0x40] */ r_ebp = (u32)R16((u32)(r_ebx+r_edi*2+0x40u));
    /* 00504f62: and ebp, 0x1f */ {  u32 a = r_ebp; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00504f65: mov esi, ebp */ r_esi = r_ebp;
    /* 00504f67: shl esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00504f6a: or esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00504f6c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504f6f: mov word ptr [ebx + edi*2 + 0x40], si */ W16((u32)(r_ebx+r_edi*2+0x40u), (u16)r_esi);
    /* 00504f74: cmp edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504f77: jl 0x504f3b */ if ((fS!=fO)) goto L_00504f3b;
L_00504f79:; BB(0x00504f79);
    /* 00504f79: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00504f7c: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504f7f: jl 0x504f36 */ if ((fS!=fO)) goto L_00504f36;
L_00504f81:; BB(0x00504f81);
    /* 00504f81: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00504f85: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00504f89: add esi, 0x2040 */ {  u32 a = r_esi; u32 b = 0x2040u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00504f8f: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00504f92: cmp ebp, 0x30 */ {  u32 a = r_ebp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504f95: jl 0x504f12 */ if ((fS!=fO)) goto L_00504f12;
L_00504f9b:; BB(0x00504f9b);
    /* 00504f9b: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00504f9f: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00504fa3: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00504fa7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504fa9: je 0x504fb2 */ if (fZ) goto L_00504fb2;
L_00504fab:; BB(0x00504fab);
    /* 00504fab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00504fac: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x504fb1u); f_0082e960();
    /* 00504fb1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00504fb2:; BB(0x00504fb2);
    /* 00504fb2: call 0x504cd0 */ r_esp -= 4; W32(r_esp, 0x504fb7u); f_00504cd0();
    /* 00504fb7: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00504fbc: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 00504fc3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00504fc5: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00504fca: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00504fcc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00504fce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00504fcf: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x504fd5u); call_ind(t); }
    /* 00504fd5: push dword ptr [esp] */ { u32 v = R32((u32)(r_esp)); r_esp -= 4; W32(r_esp, v); }
    /* 00504fd8: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00504fdd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00504fdf: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00504fe1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00504fe3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00504fe4: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x504feau); call_ind(t); }
    /* 00504fea: call 0x504cf8 */ r_esp -= 4; W32(r_esp, 0x504fefu); f_00504cf8();
    /* 00504fef: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00504ff2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00504ff3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00504ff4: ret  */ FN_RET(0x00504f4f); r_esp += 4; return;
L_00504ff5:; BB(0x00504ff5);
    /* 00504ff5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00504ff7: jmp 0x504f5d */ goto L_00504f5d;
}

void f_00504f54(void)
{
    FN_ENTER(0x00504f54);
    goto L_00504f54;
L_00504f12:; BB(0x00504f12);
    /* 00504f12: push 0x2040 */ { u32 v = 0x2040u; r_esp -= 4; W32(r_esp, v); }
    /* 00504f17: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00504f18: push dword ptr [ebp + 0xa72b30] */ { u32 v = R32((u32)(r_ebp+0xa72b30u)); r_esp -= 4; W32(r_esp, v); }
    /* 00504f1e: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x504f23u); f_0086b6b8();
    /* 00504f23: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00504f26: mov ebx, dword ptr [ebp + 0xa72b30] */ r_ebx = R32((u32)(r_ebp+0xa72b30u));
    /* 00504f2c: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 00504f30: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00504f34: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00504f36:; BB(0x00504f36);
    /* 00504f36: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00504f38: movzx eax, cl */ r_eax = (u32)(u8)r_ecx;
L_00504f3b:; BB(0x00504f3b);
    /* 00504f3b: mov esi, dword ptr [0xa72b2c] */ r_esi = R32((u32)(0xa72b2cu));
    /* 00504f41: movzx ebp, dl */ r_ebp = (u32)(u8)r_edx;
    /* 00504f44: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504f46: je 0x504ff5 */ if (fZ) goto L_00504ff5;
L_00504f4c:; BB(0x00504f4c);
    /* 00504f4c: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00504f4e: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00504f50: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 00504f53: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_00504f54:; BB(0x00504f54);
    /* 00504f54: in eax, dx */ UNSUP(0x00504f54, "in eax, dx");
    /* 00504f55: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00504f57: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00504f59: movzx edi, word ptr [esi + ebp*8] */ r_edi = (u32)R16((u32)(r_esi+r_ebp*8));
L_00504f5d:; BB(0x00504f5d);
    /* 00504f5d: movzx ebp, word ptr [ebx + edi*2 + 0x40] */ r_ebp = (u32)R16((u32)(r_ebx+r_edi*2+0x40u));
    /* 00504f62: and ebp, 0x1f */ {  u32 a = r_ebp; u32 b = 0x1fu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00504f65: mov esi, ebp */ r_esi = r_ebp;
    /* 00504f67: shl esi, 8 */ { u32 c = (8u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 00504f6a: or esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a | b) & 0xffffffffu; r_esi = r;  }
    /* 00504f6c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00504f6f: mov word ptr [ebx + edi*2 + 0x40], si */ W16((u32)(r_ebx+r_edi*2+0x40u), (u16)r_esi);
    /* 00504f74: cmp edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504f77: jl 0x504f3b */ if ((fS!=fO)) goto L_00504f3b;
L_00504f79:; BB(0x00504f79);
    /* 00504f79: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00504f7c: cmp ecx, 0x40 */ {  u32 a = r_ecx; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504f7f: jl 0x504f36 */ if ((fS!=fO)) goto L_00504f36;
L_00504f81:; BB(0x00504f81);
    /* 00504f81: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 00504f85: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00504f89: add esi, 0x2040 */ {  u32 a = r_esi; u32 b = 0x2040u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00504f8f: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00504f92: cmp ebp, 0x30 */ {  u32 a = r_ebp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00504f95: jl 0x504f12 */ if ((fS!=fO)) goto L_00504f12;
L_00504f9b:; BB(0x00504f9b);
    /* 00504f9b: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00504f9f: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00504fa3: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 00504fa7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00504fa9: je 0x504fb2 */ if (fZ) goto L_00504fb2;
L_00504fab:; BB(0x00504fab);
    /* 00504fab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00504fac: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x504fb1u); f_0082e960();
    /* 00504fb1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00504fb2:; BB(0x00504fb2);
    /* 00504fb2: call 0x504cd0 */ r_esp -= 4; W32(r_esp, 0x504fb7u); f_00504cd0();
    /* 00504fb7: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00504fbc: mov dword ptr [esp], 0x3f800000 */ W32((u32)(r_esp), 0x3f800000u);
    /* 00504fc3: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00504fc5: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00504fca: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00504fcc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00504fce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00504fcf: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x504fd5u); call_ind(t); }
    /* 00504fd5: push dword ptr [esp] */ { u32 v = R32((u32)(r_esp)); r_esp -= 4; W32(r_esp, v); }
    /* 00504fd8: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00504fdd: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00504fdf: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00504fe1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00504fe3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00504fe4: call dword ptr [edx + 0xfc] */ { u32 t = R32((u32)(r_edx+0xfcu)); r_esp -= 4; W32(r_esp, 0x504feau); call_ind(t); }
    /* 00504fea: call 0x504cf8 */ r_esp -= 4; W32(r_esp, 0x504fefu); f_00504cf8();
    /* 00504fef: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00504ff2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00504ff3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00504ff4: ret  */ FN_RET(0x00504f54); r_esp += 4; return;
L_00504ff5:; BB(0x00504ff5);
    /* 00504ff5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00504ff7: jmp 0x504f5d */ goto L_00504f5d;
}

void f_00504ffc(void) /* sub_504FFC */
{
    FN_ENTER(0x00504ffc);
    /* 00504ffc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00504ffd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00504fff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00505001: call 0x505020 */ r_esp -= 4; W32(r_esp, 0x505006u); f_00505020();
    /* 00505006: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0050500a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0050500c: jne 0x505012 */ if (!fZ) goto L_00505012;
L_0050500e:; BB(0x0050500e);
    /* 0050500e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050500f: ret 4 */ FN_RET(0x00504ffc); r_esp += 8; return;
L_00505012:; BB(0x00505012);
    /* 00505012: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00505013: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x505018u); f_005c2f74();
    /* 00505018: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00505019: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0050501a: ret 4 */ FN_RET(0x00504ffc); r_esp += 8; return;
}

