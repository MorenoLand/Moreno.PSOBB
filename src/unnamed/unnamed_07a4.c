#include "protos.h"

void f_007a401c(void) /* sub_7A401C */
{
    FN_ENTER(0x007a401c);
    /* 007a401c: mov edx, ecx */ r_edx = r_ecx;
    /* 007a401e: add edx, 0x84 */ {  u32 a = r_edx; u32 b = 0x84u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a4024: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007a4026:; BB(0x007a4026);
    /* 007a4026: movzx ecx, byte ptr [edx] */ r_ecx = (u32)R8((u32)(r_edx));
    /* 007a4029: cmp cx, word ptr [esp + 4] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 007a402e: jne 0x7a4051 */ if (!fZ) goto L_007a4051;
L_007a4030:; BB(0x007a4030);
    /* 007a4030: movzx ecx, byte ptr [edx + 1] */ r_ecx = (u32)R8((u32)(r_edx+0x1u));
    /* 007a4034: cmp cx, word ptr [esp + 8] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 007a4039: jne 0x7a4051 */ if (!fZ) goto L_007a4051;
L_007a403b:; BB(0x007a403b);
    /* 007a403b: movzx ecx, word ptr [edx + 2] */ r_ecx = (u32)R16((u32)(r_edx+0x2u));
    /* 007a403f: test cl, 1 */ {  u32 a = (u8)r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a4042: jne 0x7a404b */ if (!fZ) goto L_007a404b;
L_007a4044:; BB(0x007a4044);
    /* 007a4044: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007a4049: jmp 0x7a404d */ goto L_007a404d;
L_007a404b:; BB(0x007a404b);
    /* 007a404b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_007a404d:; BB(0x007a404d);
    /* 007a404d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a404f: jne 0x7a4064 */ if (!fZ) goto L_007a4064;
L_007a4051:; BB(0x007a4051);
    /* 007a4051: add edx, 0x124 */ {  u32 a = r_edx; u32 b = 0x124u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a4057: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a405a: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a405d: jl 0x7a4026 */ if ((fS!=fO)) goto L_007a4026;
L_007a405f:; BB(0x007a405f);
    /* 007a405f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a4061: ret 8 */ FN_RET(0x007a401c); r_esp += 12; return;
L_007a4064:; BB(0x007a4064);
    /* 007a4064: mov eax, edx */ r_eax = r_edx;
    /* 007a4066: ret 8 */ FN_RET(0x007a401c); r_esp += 12; return;
}

void f_007a406c(void) /* sub_7A406C */
{
    FN_ENTER(0x007a406c);
    /* 007a406c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a406e: mov dword ptr [ecx + 0xc4], eax */ W32((u32)(r_ecx+0xc4u), r_eax);
    /* 007a4074: mov dword ptr [ecx + 0x120], eax */ W32((u32)(r_ecx+0x120u), r_eax);
    /* 007a407a: mov dword ptr [ecx + 0x1e8], eax */ W32((u32)(r_ecx+0x1e8u), r_eax);
    /* 007a4080: mov dword ptr [ecx + 0x244], eax */ W32((u32)(r_ecx+0x244u), r_eax);
    /* 007a4086: mov dword ptr [ecx + 0x30c], eax */ W32((u32)(r_ecx+0x30cu), r_eax);
    /* 007a408c: mov dword ptr [ecx + 0x368], eax */ W32((u32)(r_ecx+0x368u), r_eax);
    /* 007a4092: mov dword ptr [ecx + 0x430], eax */ W32((u32)(r_ecx+0x430u), r_eax);
    /* 007a4098: mov dword ptr [ecx + 0x48c], eax */ W32((u32)(r_ecx+0x48cu), r_eax);
    /* 007a409e: mov dword ptr [ecx + 0x554], eax */ W32((u32)(r_ecx+0x554u), r_eax);
    /* 007a40a4: mov dword ptr [ecx + 0x5b0], eax */ W32((u32)(r_ecx+0x5b0u), r_eax);
    /* 007a40aa: mov dword ptr [ecx + 0x678], eax */ W32((u32)(r_ecx+0x678u), r_eax);
    /* 007a40b0: mov dword ptr [ecx + 0x6d4], eax */ W32((u32)(r_ecx+0x6d4u), r_eax);
    /* 007a40b6: mov dword ptr [ecx + 0x79c], eax */ W32((u32)(r_ecx+0x79cu), r_eax);
    /* 007a40bc: mov dword ptr [ecx + 0x7f8], eax */ W32((u32)(r_ecx+0x7f8u), r_eax);
    /* 007a40c2: mov dword ptr [ecx + 0x8c0], eax */ W32((u32)(r_ecx+0x8c0u), r_eax);
    /* 007a40c8: mov dword ptr [ecx + 0x91c], eax */ W32((u32)(r_ecx+0x91cu), r_eax);
    /* 007a40ce: mov dword ptr [ecx + 0x9e4], eax */ W32((u32)(r_ecx+0x9e4u), r_eax);
    /* 007a40d4: mov dword ptr [ecx + 0xa40], eax */ W32((u32)(r_ecx+0xa40u), r_eax);
    /* 007a40da: mov dword ptr [ecx + 0xb08], eax */ W32((u32)(r_ecx+0xb08u), r_eax);
    /* 007a40e0: mov dword ptr [ecx + 0xb64], eax */ W32((u32)(r_ecx+0xb64u), r_eax);
    /* 007a40e6: mov dword ptr [ecx + 0xc2c], eax */ W32((u32)(r_ecx+0xc2cu), r_eax);
    /* 007a40ec: mov dword ptr [ecx + 0xc88], eax */ W32((u32)(r_ecx+0xc88u), r_eax);
    /* 007a40f2: mov dword ptr [ecx + 0xd50], eax */ W32((u32)(r_ecx+0xd50u), r_eax);
    /* 007a40f8: mov dword ptr [ecx + 0xdac], eax */ W32((u32)(r_ecx+0xdacu), r_eax);
    /* 007a40fe: mov dword ptr [ecx + 0xe74], eax */ W32((u32)(r_ecx+0xe74u), r_eax);
    /* 007a4104: mov dword ptr [ecx + 0xed0], eax */ W32((u32)(r_ecx+0xed0u), r_eax);
    /* 007a410a: mov dword ptr [ecx + 0xf98], eax */ W32((u32)(r_ecx+0xf98u), r_eax);
    /* 007a4110: mov dword ptr [ecx + 0xff4], eax */ W32((u32)(r_ecx+0xff4u), r_eax);
    /* 007a4116: ret  */ FN_RET(0x007a406c); r_esp += 4; return;
}

void f_007a4118(void) /* sub_7A4118 */
{
    FN_ENTER(0x007a4118);
    /* 007a4118: movzx edx, word ptr [esp + 4] */ r_edx = (u32)R16((u32)(r_esp+0x4u));
    /* 007a411d: movzx eax, word ptr [ecx + 0x108c] */ r_eax = (u32)R16((u32)(r_ecx+0x108cu));
    /* 007a4124: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a4126: jne 0x7a412f */ if (!fZ) goto L_007a412f;
L_007a4128:; BB(0x007a4128);
    /* 007a4128: mov eax, 2 */ r_eax = 0x2u;
    /* 007a412d: jmp 0x7a4134 */ goto L_007a4134;
L_007a412f:; BB(0x007a412f);
    /* 007a412f: mov eax, 1 */ r_eax = 0x1u;
L_007a4134:; BB(0x007a4134);
    /* 007a4134: mov word ptr [ecx + 0x1098], dx */ W16((u32)(r_ecx+0x1098u), (u16)r_edx);
    /* 007a413b: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 007a4140: mov word ptr [ecx + 0x109a], dx */ W16((u32)(r_ecx+0x109au), (u16)r_edx);
    /* 007a4147: mov word ptr [ecx + 0x109c], ax */ W16((u32)(r_ecx+0x109cu), (u16)r_eax);
    /* 007a414e: ret 8 */ FN_RET(0x007a4118); r_esp += 12; return;
}

void f_007a4180(void) /* sub_7A4180 */
{
    FN_ENTER(0x007a4180);
    /* 007a4180: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a4181: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a4182: mov edi, ecx */ r_edi = r_ecx;
    /* 007a4184: movzx eax, word ptr [edi + 0x64] */ r_eax = (u32)R16((u32)(r_edi+0x64u));
    /* 007a4188: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a4189: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x7a418eu); f_007b4d18();
    /* 007a418e: mov esi, eax */ r_esi = r_eax;
    /* 007a4190: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a4193: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a4195: je 0x7a41a8 */ if (fZ) goto L_007a41a8;
L_007a4197:; BB(0x007a4197);
    /* 007a4197: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 007a419a: and edx, 0x80000000 */ {  u32 a = r_edx; u32 b = 0x80000000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007a41a0: cmp edx, 0x80000000 */ {  u32 a = r_edx; u32 b = 0x80000000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a41a6: je 0x7a41ad */ if (fZ) goto L_007a41ad;
L_007a41a8:; BB(0x007a41a8);
    /* 007a41a8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a41aa: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a41ab: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a41ac: ret  */ FN_RET(0x007a4180); r_esp += 4; return;
L_007a41ad:; BB(0x007a41ad);
    /* 007a41ad: add edi, 0x24 */ {  u32 a = r_edi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007a41b0: mov ecx, edi */ r_ecx = r_edi;
    /* 007a41b2: call 0x7a3560 */ r_esp -= 4; W32(r_esp, 0x7a41b7u); f_007a3560();
    /* 007a41b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a41b9: je 0x7a41a8 */ if (fZ) goto L_007a41a8;
L_007a41bb:; BB(0x007a41bb);
    /* 007a41bb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a41bc: mov ecx, eax */ r_ecx = r_eax;
    /* 007a41be: call 0x687c70 */ r_esp -= 4; W32(r_esp, 0x7a41c3u); f_00687c70();
    /* 007a41c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a41c5: jne 0x7a41a8 */ if (!fZ) goto L_007a41a8;
L_007a41c7:; BB(0x007a41c7);
    /* 007a41c7: mov eax, 1 */ r_eax = 0x1u;
    /* 007a41cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a41cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a41ce: ret  */ FN_RET(0x007a4180); r_esp += 4; return;
}

void f_007a41d0(void) /* sub_7A41D0 */
{
    FN_ENTER(0x007a41d0);
    /* 007a41d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a41d1: mov ebp, esp */ r_ebp = r_esp;
    /* 007a41d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a41d5: push 0x8f5a84 */ { u32 v = 0x8f5a84u; r_esp -= 4; W32(r_esp, v); }
    /* 007a41da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a41e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a41e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a41e8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a41eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a41ee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007a41f1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007a41f4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007a41f7: mov eax, dword ptr [0xaab33c] */ r_eax = R32((u32)(0xaab33cu));
    /* 007a41fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a41fe: je 0x7a420e */ if (fZ) goto L_007a420e;
L_007a4200:; BB(0x007a4200);
    /* 007a4200: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a4203: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a420a: mov esp, ebp */ r_esp = r_ebp;
    /* 007a420c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a420d: ret  */ FN_RET(0x007a41d0); r_esp += 4; return;
L_007a420e:; BB(0x007a420e);
    /* 007a420e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007a4215: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 007a421a: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7a421fu); f_008581c5();
    /* 007a421f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a4220: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007a4223: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a4225: je 0x7a4299 */ if (fZ) goto L_007a4299;
L_007a4227:; BB(0x007a4227);
    /* 007a4227: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007a422e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007a4235: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a4238: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a423a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a423b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a423c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a423d: push 0x9ff650 */ { u32 v = 0x9ff650u; r_esp -= 4; W32(r_esp, v); }
    /* 007a4242: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007a4244: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x7a4249u); f_005b7a84();
    /* 007a4249: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a424c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007a4253:; BB(0x007a4253);
    /* 007a4253: mov dword ptr [0xaab33c], ecx */ W32((u32)(0xaab33cu), r_ecx);
    /* 007a4259: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007a4260: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a4262: je 0x7a4200 */ if (fZ) goto L_007a4200;
L_007a4264:; BB(0x007a4264);
    /* 007a4264: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a4266: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x7a426bu); f_005b8610();
    /* 007a426b: mov ecx, dword ptr [0xaab33c] */ r_ecx = R32((u32)(0xaab33cu));
    /* 007a4271: mov dword ptr [0xaab338], eax */ W32((u32)(0xaab338u), r_eax);
    /* 007a4276: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a4278: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x7a427du); f_005b8610();
    /* 007a427d: mov ecx, dword ptr [0xaab33c] */ r_ecx = R32((u32)(0xaab33cu));
    /* 007a4283: mov dword ptr [0xaab334], eax */ W32((u32)(0xaab334u), r_eax);
    /* 007a4288: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007a428a: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x7a428fu); f_005b8610();
    /* 007a428f: mov dword ptr [0xaab330], eax */ W32((u32)(0xaab330u), r_eax);
    /* 007a4294: jmp 0x7a4200 */ goto L_007a4200;
L_007a4299:; BB(0x007a4299);
    /* 007a4299: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a429b: jmp 0x7a4253 */ goto L_007a4253;
}

void f_007a42a0(void) /* sub_7A42A0 */
{
    FN_ENTER(0x007a42a0);
    /* 007a42a0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a42a1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a42a2: mov edi, ecx */ r_edi = r_ecx;
    /* 007a42a4: lea ecx, [edi + 0x24] */ r_ecx = (u32)(r_edi+0x24u);
    /* 007a42a7: call 0x7a3560 */ r_esp -= 4; W32(r_esp, 0x7a42acu); f_007a3560();
    /* 007a42ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a42ae: je 0x7a4383 */ if (fZ) goto L_007a4383;
L_007a42b4:; BB(0x007a42b4);
    /* 007a42b4: movzx ebx, byte ptr [edi + 0x60] */ r_ebx = (u32)R8((u32)(r_edi+0x60u));
    /* 007a42b8: movzx edx, byte ptr [edi + 0x61] */ r_edx = (u32)R8((u32)(r_edi+0x61u));
    /* 007a42bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a42bd: lea ecx, [eax + 0x538] */ r_ecx = (u32)(r_eax+0x538u);
    /* 007a42c3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a42c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a42c5: call 0x6aba4c */ r_esp -= 4; W32(r_esp, 0x7a42cau); f_006aba4c();
    /* 007a42ca: mov ebx, eax */ r_ebx = r_eax;
    /* 007a42cc: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a42cf: je 0x7a4393 */ if (fZ) goto L_007a4393;
L_007a42d5:; BB(0x007a42d5);
    /* 007a42d5: mov dword ptr [edi + 0x1c], 0 */ W32((u32)(r_edi+0x1cu), 0x0u);
    /* 007a42dc: mov ecx, edi */ r_ecx = r_edi;
    /* 007a42de: mov dword ptr [edi + 0x28], 0x40700000 */ W32((u32)(r_edi+0x28u), 0x40700000u);
    /* 007a42e5: mov dword ptr [edi + 0x34], 0x40300000 */ W32((u32)(r_edi+0x34u), 0x40300000u);
    /* 007a42ec: mov dword ptr [edi + 0x38], 0x410c0000 */ W32((u32)(r_edi+0x38u), 0x410c0000u);
    /* 007a42f3: mov dword ptr [edi + 0x30], 0x410c0000 */ W32((u32)(r_edi+0x30u), 0x410c0000u);
    /* 007a42fa: mov dword ptr [edi + 0x3c], 0x3f000000 */ W32((u32)(r_edi+0x3cu), 0x3f000000u);
    /* 007a4301: call 0x7a35c8 */ r_esp -= 4; W32(r_esp, 0x7a4306u); f_007a35c8();
    /* 007a4306: mov ecx, edi */ r_ecx = r_edi;
    /* 007a4308: call 0x7a4180 */ r_esp -= 4; W32(r_esp, 0x7a430du); f_007a4180();
    /* 007a430d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a430f: jne 0x7a4316 */ if (!fZ) goto L_007a4316;
L_007a4311:; BB(0x007a4311);
    /* 007a4311: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 007a4314: jmp 0x7a431f */ goto L_007a431f;
L_007a4316:; BB(0x007a4316);
    /* 007a4316: mov edx, dword ptr [edi + 0x20] */ r_edx = R32((u32)(r_edi+0x20u));
    /* 007a4319: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007a431c: mov dword ptr [edi + 0x20], edx */ W32((u32)(r_edi+0x20u), r_edx);
L_007a431f:; BB(0x007a431f);
    /* 007a431f: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007a4322: je 0x7a432b */ if (fZ) goto L_007a432b;
L_007a4324:; BB(0x007a4324);
    /* 007a4324: mov edx, 1 */ r_edx = 0x1u;
    /* 007a4329: jmp 0x7a432d */ goto L_007a432d;
L_007a432b:; BB(0x007a432b);
    /* 007a432b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_007a432d:; BB(0x007a432d);
    /* 007a432d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a432f: je 0x7a4356 */ if (fZ) goto L_007a4356;
L_007a4331:; BB(0x007a4331);
    /* 007a4331: mov eax, dword ptr [0x9ff620] */ r_eax = R32((u32)(0x9ff620u));
    /* 007a4336: mov dword ptr [edi + 0x50], eax */ W32((u32)(r_edi+0x50u), r_eax);
    /* 007a4339: mov edx, dword ptr [0x9ff624] */ r_edx = R32((u32)(0x9ff624u));
    /* 007a433f: mov dword ptr [edi + 0x54], edx */ W32((u32)(r_edi+0x54u), r_edx);
    /* 007a4342: mov ebx, dword ptr [0x9ff628] */ r_ebx = R32((u32)(0x9ff628u));
    /* 007a4348: mov dword ptr [edi + 0x58], ebx */ W32((u32)(r_edi+0x58u), r_ebx);
    /* 007a434b: mov eax, dword ptr [0x9ff62c] */ r_eax = R32((u32)(0x9ff62cu));
    /* 007a4350: mov dword ptr [edi + 0x5c], eax */ W32((u32)(r_edi+0x5cu), r_eax);
    /* 007a4353: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a4354: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a4355: ret  */ FN_RET(0x007a42a0); r_esp += 4; return;
L_007a4356:; BB(0x007a4356);
    /* 007a4356: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a4358: mov edx, dword ptr [ebx*8 + 0x9ff540] */ r_edx = R32((u32)(r_ebx*8+0x9ff540u));
    /* 007a435f: mov dword ptr [edi + 0x50], edx */ W32((u32)(r_edi+0x50u), r_edx);
    /* 007a4362: mov edx, dword ptr [ebx*8 + 0x9ff544] */ r_edx = R32((u32)(r_ebx*8+0x9ff544u));
    /* 007a4369: mov dword ptr [edi + 0x54], edx */ W32((u32)(r_edi+0x54u), r_edx);
    /* 007a436c: mov edx, dword ptr [ebx*8 + 0x9ff548] */ r_edx = R32((u32)(r_ebx*8+0x9ff548u));
    /* 007a4373: mov dword ptr [edi + 0x58], edx */ W32((u32)(r_edi+0x58u), r_edx);
    /* 007a4376: mov eax, dword ptr [ebx*8 + 0x9ff54c] */ r_eax = R32((u32)(r_ebx*8+0x9ff54cu));
    /* 007a437d: mov dword ptr [edi + 0x5c], eax */ W32((u32)(r_edi+0x5cu), r_eax);
    /* 007a4380: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a4381: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a4382: ret  */ FN_RET(0x007a42a0); r_esp += 4; return;
L_007a4383:; BB(0x007a4383);
    /* 007a4383: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 007a4387: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a438c: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 007a4390: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a4391: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a4392: ret  */ FN_RET(0x007a42a0); r_esp += 4; return;
L_007a4393:; BB(0x007a4393);
    /* 007a4393: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 007a4397: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a439c: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 007a43a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a43a1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a43a2: ret  */ FN_RET(0x007a42a0); r_esp += 4; return;
}

void f_007a43a4(void) /* sub_7A43A4 */
{
    FN_ENTER(0x007a43a4);
    /* 007a43a4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a43a5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007a43a7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a43a9: call 0x7a43c8 */ r_esp -= 4; W32(r_esp, 0x7a43aeu); f_007a43c8();
    /* 007a43ae: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 007a43b2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a43b4: jne 0x7a43ba */ if (!fZ) goto L_007a43ba;
L_007a43b6:; BB(0x007a43b6);
    /* 007a43b6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a43b7: ret 4 */ FN_RET(0x007a43a4); r_esp += 8; return;
L_007a43ba:; BB(0x007a43ba);
    /* 007a43ba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a43bb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x7a43c0u); f_005c2f74();
    /* 007a43c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a43c1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a43c2: ret 4 */ FN_RET(0x007a43a4); r_esp += 8; return;
}

void f_007a43c8(void) /* sub_7A43C8 */
{
    FN_ENTER(0x007a43c8);
    /* 007a43c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a43c9: mov ebp, esp */ r_ebp = r_esp;
    /* 007a43cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a43cd: push 0x8f5aa0 */ { u32 v = 0x8f5aa0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a43d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a43d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a43d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a43e0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a43e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a43e6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007a43e9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007a43ec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007a43ef: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007a43f2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a43f5: mov dword ptr [ecx], 0xb46018 */ W32((u32)(r_ecx), 0xb46018u);
    /* 007a43fb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007a4402: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7a4407u); f_008171e8();
    /* 007a4407: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a440a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a4411: mov esp, ebp */ r_esp = r_ebp;
    /* 007a4413: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a4414: ret  */ FN_RET(0x007a43c8); r_esp += 4; return;
}

void f_007a4418(void) /* sub_7A4418 */
{
    FN_ENTER(0x007a4418);
    /* 007a4418: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a441b: call 0x83adbc */ r_esp -= 4; W32(r_esp, 0x7a4420u); f_0083adbc();
    /* 007a4420: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 007a4427: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 007a442f: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 007a4437: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 007a443f: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 007a4447: mov dword ptr [esp + 0x14], 0xc2c80000 */ W32((u32)(r_esp+0x14u), 0xc2c80000u);
    /* 007a444f: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 007a4451: call 0x4d31f4 */ r_esp -= 4; W32(r_esp, 0x7a4456u); f_004d31f4();
    /* 007a4456: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 007a445a: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 007a445e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a445f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a4460: call 0x4d33c0 */ r_esp -= 4; W32(r_esp, 0x7a4465u); f_004d33c0();
    /* 007a4465: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a4468: call 0x7becd4 */ r_esp -= 4; W32(r_esp, 0x7a446du); f_007becd4();
    /* 007a446d: call 0x7bfba0 */ r_esp -= 4; W32(r_esp, 0x7a4472u); f_007bfba0();
    /* 007a4472: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007a4477: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7a447cu); f_0061cdb0();
    /* 007a447c: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007a4481: call 0x81745c */ r_esp -= 4; W32(r_esp, 0x7a4486u); f_0081745c();
    /* 007a4486: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007a448b: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x7a4490u); f_00817604();
    /* 007a4490: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007a4495: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x7a449au); f_00818f80();
    /* 007a449a: call 0x5ba748 */ r_esp -= 4; W32(r_esp, 0x7a449fu); f_005ba748();
    /* 007a449f: call 0x814168 */ r_esp -= 4; W32(r_esp, 0x7a44a4u); f_00814168();
    /* 007a44a4: call 0x7bfedc */ r_esp -= 4; W32(r_esp, 0x7a44a9u); f_007bfedc();
    /* 007a44a9: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 007a44ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a44ae: je 0x7a44b5 */ if (fZ) goto L_007a44b5;
L_007a44b0:; BB(0x007a44b0);
    /* 007a44b0: call 0x7a6174 */ r_esp -= 4; W32(r_esp, 0x7a44b5u); f_007a6174();
L_007a44b5:; BB(0x007a44b5);
    /* 007a44b5: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x7a44bau); f_006dc358();
    /* 007a44ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a44bc: je 0x7a44c6 */ if (fZ) goto L_007a44c6;
L_007a44be:; BB(0x007a44be);
    /* 007a44be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007a44c0: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x7a44c5u); f_007a60dc();
    /* 007a44c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007a44c6:; BB(0x007a44c6);
    /* 007a44c6: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7a44cbu); f_0080030c();
    /* 007a44cb: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a44ce: ret  */ FN_RET(0x007a4418); r_esp += 4; return;
}

void f_007a44d0(void) /* sub_7A44D0 */
{
    FN_ENTER(0x007a44d0);
    /* 007a44d0: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 007a44d5: call 0x818560 */ r_esp -= 4; W32(r_esp, 0x7a44dau); f_00818560();
    /* 007a44da: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 007a44dc: push 0x9ff6a4 */ { u32 v = 0x9ff6a4u; r_esp -= 4; W32(r_esp, v); }
    /* 007a44e1: call 0x78b0a0 */ r_esp -= 4; W32(r_esp, 0x7a44e6u); f_0078b0a0();
    /* 007a44e6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a44e9: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x7a44eeu); f_0080030c();
    /* 007a44ee: ret  */ FN_RET(0x007a44d0); r_esp += 4; return;
}

void f_007a44f0(void) /* sub_7A44F0 */
{
    FN_ENTER(0x007a44f0);
    /* 007a44f0: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 007a44f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a44f5: jne 0x7a451f */ if (!fZ) goto L_007a451f;
L_007a44f7:; BB(0x007a44f7);
    /* 007a44f7: mov eax, dword ptr [0xa3b078] */ r_eax = R32((u32)(0xa3b078u));
    /* 007a44fc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a44fe: je 0x7a452c */ if (fZ) goto L_007a452c;
L_007a4500:; BB(0x007a4500);
    /* 007a4500: mov edx, dword ptr [ecx + 0x24] */ r_edx = R32((u32)(r_ecx+0x24u));
    /* 007a4503: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 007a4507: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a450c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 007a4510: mov dword ptr [ecx + 0x24], 0 */ W32((u32)(r_ecx+0x24u), 0x0u);
    /* 007a4517: mov dword ptr [ecx + 0x20], 3 */ W32((u32)(r_ecx+0x20u), 0x3u);
    /* 007a451e: ret  */ FN_RET(0x007a44f0); r_esp += 4; return;
L_007a451f:; BB(0x007a451f);
    /* 007a451f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007a4522: jne 0x7a452c */ if (!fZ) goto L_007a452c;
L_007a4524:; BB(0x007a4524);
    /* 007a4524: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007a4526: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x7a452bu); f_007a60dc();
    /* 007a452b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007a452c:; BB(0x007a452c);
    /* 007a452c: ret  */ FN_RET(0x007a44f0); r_esp += 4; return;
}

void f_007a4530(void) /* sub_7A4530 */
{
    FN_ENTER(0x007a4530);
    /* 007a4530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a4531: mov ebp, esp */ r_ebp = r_esp;
    /* 007a4533: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a4535: push 0x8f5ad6 */ { u32 v = 0x8f5ad6u; r_esp -= 4; W32(r_esp, v); }
    /* 007a453a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a4540: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a4541: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a4548: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a454b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a454e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007a4551: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007a4554: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007a4557: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a455a: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007a455d: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x7a4562u); f_008193cc();
    /* 007a4562: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007a4569: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a456c: mov dword ptr [edx], 0xb46018 */ W32((u32)(r_edx), 0xb46018u);
    /* 007a4572: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a4574: mov eax, dword ptr [0x9ff6a0] */ r_eax = R32((u32)(0x9ff6a0u));
    /* 007a4579: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 007a457c: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 007a457e: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 007a4581: mov dword ptr [edx + 0x20], ecx */ W32((u32)(r_edx+0x20u), r_ecx);
    /* 007a4584: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7a4589u); f_005caba4();
    /* 007a4589: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a458a: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 007a458d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a458f: je 0x7a45ca */ if (fZ) goto L_007a45ca;
L_007a4591:; BB(0x007a4591);
    /* 007a4591: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 007a4598: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007a459f: push dword ptr [ebp - 0x20] */ { u32 v = R32((u32)(r_ebp+0xffffffe0u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a45a2: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007a45a5: call 0x411be8 */ r_esp -= 4; W32(r_esp, 0x7a45aau); f_00411be8();
    /* 007a45aa: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 007a45ad: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_007a45b4:; BB(0x007a45b4);
    /* 007a45b4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a45b7: mov dword ptr [eax + 0x24], edx */ W32((u32)(r_eax+0x24u), r_edx);
    /* 007a45ba: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a45bd: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a45c4: mov esp, ebp */ r_esp = r_ebp;
    /* 007a45c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a45c7: ret 4 */ FN_RET(0x007a4530); r_esp += 8; return;
L_007a45ca:; BB(0x007a45ca);
    /* 007a45ca: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a45cc: jmp 0x7a45b4 */ goto L_007a45b4;
}

void f_007a45d0(void) /* sub_7A45D0 */
{
    FN_ENTER(0x007a45d0);
    /* 007a45d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a45d1: mov ebp, esp */ r_ebp = r_esp;
    /* 007a45d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007a45d5: push 0x8f5b32 */ { u32 v = 0x8f5b32u; r_esp -= 4; W32(r_esp, v); }
    /* 007a45da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007a45e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a45e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007a45e8: sub esp, 0x40 */ {  u32 a = r_esp; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a45eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007a45ee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007a45f1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007a45f4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007a45f7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a45f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a45fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a45fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a45fc: call 0x82acd8 */ r_esp -= 4; W32(r_esp, 0x7a4601u); f_0082acd8();
    /* 007a4601: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a4604: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x7a4609u); f_007bebe8();
    /* 007a4609: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007a460b: push 0x9ff420 */ { u32 v = 0x9ff420u; r_esp -= 4; W32(r_esp, v); }
    /* 007a4610: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a4612: mov word ptr [0xa22700], ax */ W16((u32)(0xa22700u), (u16)r_eax);
    /* 007a4618: mov edx, 2 */ r_edx = 0x2u;
    /* 007a461d: mov word ptr [0xa22702], dx */ W16((u32)(0xa22702u), (u16)r_edx);
    /* 007a4624: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 007a4629: mov word ptr [0xa22704], si */ W16((u32)(0xa22704u), (u16)r_esi);
    /* 007a4630: mov word ptr [0xa2270a], si */ W16((u32)(0xa2270au), (u16)r_esi);
    /* 007a4637: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007a463c: mov ebx, 3 */ r_ebx = 0x3u;
    /* 007a4641: mov word ptr [0xa22706], cx */ W16((u32)(0xa22706u), (u16)r_ecx);
    /* 007a4648: mov word ptr [0xa22708], bx */ W16((u32)(0xa22708u), (u16)r_ebx);
    /* 007a464f: mov edi, 5 */ r_edi = 0x5u;
    /* 007a4654: mov eax, 7 */ r_eax = 0x7u;
    /* 007a4659: mov word ptr [0xa2270c], di */ W16((u32)(0xa2270cu), (u16)r_edi);
    /* 007a4660: mov word ptr [0xa2270e], ax */ W16((u32)(0xa2270eu), (u16)r_eax);
    /* 007a4666: mov eax, 8 */ r_eax = 0x8u;
    /* 007a466b: mov word ptr [0xa22710], ax */ W16((u32)(0xa22710u), (u16)r_eax);
    /* 007a4671: call 0x793cf0 */ r_esp -= 4; W32(r_esp, 0x7a4676u); f_00793cf0();
    /* 007a4676: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 007a467d: push 0x1d4 */ { u32 v = 0x1d4u; r_esp -= 4; W32(r_esp, v); }
    /* 007a4682: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7a4687u); f_005caba4();
    /* 007a4687: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a468a: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 007a468d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a468f: je 0x7a46b4 */ if (fZ) goto L_007a46b4;
L_007a4691:; BB(0x007a4691);
    /* 007a4691: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 007a4698: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007a469f: push dword ptr [0xaca380] */ { u32 v = R32((u32)(0xaca380u)); r_esp -= 4; W32(r_esp, v); }
    /* 007a46a5: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 007a46a8: call 0x4d3408 */ r_esp -= 4; W32(r_esp, 0x7a46adu); f_004d3408();
    /* 007a46ad: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
L_007a46b4:; BB(0x007a46b4);
    /* 007a46b4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007a46bb: mov dword ptr [ebp - 0x44], 0 */ W32((u32)(r_ebp+0xffffffbcu), 0x0u);
    /* 007a46c2: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 007a46c4: mov dword ptr [ebp - 0x40], 0 */ W32((u32)(r_ebp+0xffffffc0u), 0x0u);
    /* 007a46cb: mov dword ptr [ebp - 0x3c], 0 */ W32((u32)(r_ebp+0xffffffc4u), 0x0u);
    /* 007a46d2: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 007a46d9: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 007a46e0: mov dword ptr [ebp - 0x30], 0xc2c80000 */ W32((u32)(r_ebp+0xffffffd0u), 0xc2c80000u);
    /* 007a46e7: call 0x4d30fc */ r_esp -= 4; W32(r_esp, 0x7a46ecu); f_004d30fc();
    /* 007a46ec: lea edx, [ebp - 0x44] */ r_edx = (u32)(r_ebp+0xffffffbcu);
    /* 007a46ef: lea eax, [ebp - 0x38] */ r_eax = (u32)(r_ebp+0xffffffc8u);
    /* 007a46f2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007a46f3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007a46f4: call 0x4d33c0 */ r_esp -= 4; W32(r_esp, 0x7a46f9u); f_004d33c0();
    /* 007a46f9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007a46fb: call 0x7a6198 */ r_esp -= 4; W32(r_esp, 0x7a4700u); f_007a6198();
    /* 007a4700: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a4703: call 0x5ba174 */ r_esp -= 4; W32(r_esp, 0x7a4708u); f_005ba174();
    /* 007a4708: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 007a470a: push 0x9ff6a4 */ { u32 v = 0x9ff6a4u; r_esp -= 4; W32(r_esp, v); }
    /* 007a470f: call 0x78b184 */ r_esp -= 4; W32(r_esp, 0x7a4714u); f_0078b184();
    /* 007a4714: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007a4717: call 0x5ba1f0 */ r_esp -= 4; W32(r_esp, 0x7a471cu); f_005ba1f0();
    /* 007a471c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a471e: je 0x7a4746 */ if (fZ) goto L_007a4746;
L_007a4720:; BB(0x007a4720);
    /* 007a4720: call 0x5ba168 */ r_esp -= 4; W32(r_esp, 0x7a4725u); f_005ba168();
    /* 007a4725: call 0x5ba1e0 */ r_esp -= 4; W32(r_esp, 0x7a472au); f_005ba1e0();
    /* 007a472a: call 0x5ba204 */ r_esp -= 4; W32(r_esp, 0x7a472fu); f_005ba204();
    /* 007a472f: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007a4732: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 007a4735: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a4738: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a473b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a4742: mov esp, ebp */ r_esp = r_ebp;
    /* 007a4744: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a4745: ret  */ FN_RET(0x007a45d0); r_esp += 4; return;
L_007a4746:; BB(0x007a4746);
    /* 007a4746: call 0x5ba1e0 */ r_esp -= 4; W32(r_esp, 0x7a474bu); f_005ba1e0();
    /* 007a474b: call 0x8013bc */ r_esp -= 4; W32(r_esp, 0x7a4750u); f_008013bc();
    /* 007a4750: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 007a4757: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 007a4759: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7a475eu); f_005caba4();
    /* 007a475e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a475f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 007a4762: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a4764: je 0x7a4789 */ if (fZ) goto L_007a4789;
L_007a4766:; BB(0x007a4766);
    /* 007a4766: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 007a476d: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 007a4774: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007a477a: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 007a477d: call 0x7a4530 */ r_esp -= 4; W32(r_esp, 0x7a4782u); f_007a4530();
    /* 007a4782: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_007a4789:; BB(0x007a4789);
    /* 007a4789: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007a4790: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 007a4797: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 007a4799: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x7a479eu); f_005caba4();
    /* 007a479e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007a479f: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 007a47a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007a47a4: je 0x7a47c3 */ if (fZ) goto L_007a47c3;
L_007a47a6:; BB(0x007a47a6);
    /* 007a47a6: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 007a47ad: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 007a47b4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007a47b7: call 0x7195c8 */ r_esp -= 4; W32(r_esp, 0x7a47bcu); f_007195c8();
    /* 007a47bc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_007a47c3:; BB(0x007a47c3);
    /* 007a47c3: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 007a47c6: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 007a47c9: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 007a47cc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007a47cf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007a47d6: mov esp, ebp */ r_esp = r_ebp;
    /* 007a47d8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a47d9: ret  */ FN_RET(0x007a45d0); r_esp += 4; return;
}

void f_007a47dc(void) /* sub_7A47DC */
{
    FN_ENTER(0x007a47dc);
    /* 007a47dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007a47dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007a47de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007a47df: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007a47e0: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007a47e3: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007a47e5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a47e7: mov ebp, dword ptr [esp + 0x4c] */ r_ebp = R32((u32)(r_esp+0x4cu));
    /* 007a47eb: mov esi, dword ptr [esp + 0x50] */ r_esi = R32((u32)(r_esp+0x50u));
    /* 007a47ef: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 007a47f3: lea edx, [eax + 8] */ r_edx = (u32)(r_eax+0x8u);
    /* 007a47f6: mov dword ptr [ebx + 0x7220], ebp */ W32((u32)(r_ebx+0x7220u), r_ebp);
    /* 007a47fc: mov dword ptr [ebx + 0x7224], edx */ W32((u32)(r_ebx+0x7224u), r_edx);
    /* 007a4802: lea eax, [ebp + esi] */ r_eax = (u32)(r_ebp+r_esi);
    /* 007a4806: mov dword ptr [ebx + 0x7228], eax */ W32((u32)(r_ebx+0x7228u), r_eax);
    /* 007a480c: call 0x7a5e30 */ r_esp -= 4; W32(r_esp, 0x7a4811u); f_007a5e30();
    /* 007a4811: mov ebp, 1 */ r_ebp = 0x1u;
    /* 007a4816: mov eax, 1 */ r_eax = 0x1u;
    /* 007a481b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007a481f: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007a4821: mov edi, 0xfee */ r_edi = 0xfeeu;
    /* 007a4826: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 007a482a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007a482c: mov dword ptr [esp + 0x20], edi */ W32((u32)(r_esp+0x20u), r_edi);
    /* 007a4830: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007a4832: mov dword ptr [ebx + 0x722c], edx */ W32((u32)(r_ebx+0x722cu), r_edx);
    /* 007a4838: mov byte ptr [esp + 0x24], dl */ W8((u32)(r_esp+0x24u), (u8)r_edx);
    /* 007a483c: lea edx, [ebx + 0xfee] */ r_edx = (u32)(r_ebx+0xfeeu);
L_007a4842:; BB(0x007a4842);
    /* 007a4842: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a4844: mov byte ptr [ecx], al */ W8((u32)(r_ecx), (u8)r_eax);
    /* 007a4846: mov byte ptr [ecx + 1], al */ W8((u32)(r_ecx+0x1u), (u8)r_eax);
    /* 007a4849: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a484c: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007a484e: ja 0x7a4842 */ if ((!fC&&!fZ)) goto L_007a4842;
L_007a4850:; BB(0x007a4850);
    /* 007a4850: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_007a4852:; BB(0x007a4852);
    /* 007a4852: mov eax, dword ptr [ebx + 0x7220] */ r_eax = R32((u32)(r_ebx+0x7220u));
    /* 007a4858: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 007a485b: cmp edx, dword ptr [ebx + 0x7228] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x7228u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007a4861: mov dword ptr [ebx + 0x7220], edx */ W32((u32)(r_ebx+0x7220u), r_edx);
    /* 007a4867: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 007a486a: jbe 0x7a4888 */ if ((fC||fZ)) goto L_007a4888;
L_007a486c:; BB(0x007a486c);
    /* 007a486c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a486e: je 0x7a4878 */ if (fZ) goto L_007a4878;
L_007a4870:; BB(0x007a4870);
    /* 007a4870: lea edx, [ebx + 0xfee] */ r_edx = (u32)(r_ebx+0xfeeu);
    /* 007a4876: jmp 0x7a4899 */ goto L_007a4899;
L_007a4878:; BB(0x007a4878);
    /* 007a4878: mov eax, dword ptr [ebx + 0x722c] */ r_eax = R32((u32)(r_ebx+0x722cu));
    /* 007a487e: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a4881: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a4882: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a4883: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a4884: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a4885: ret 0xc */ FN_RET(0x007a47dc); r_esp += 16; return;
L_007a4888:; BB(0x007a4888);
    /* 007a4888: lea edx, [ebx + 0xfee] */ r_edx = (u32)(r_ebx+0xfeeu);
    /* 007a488e: mov byte ptr [edx + ecx], al */ W8((u32)(r_edx+r_ecx), (u8)r_eax);
    /* 007a4891: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a4894: cmp ecx, 0x12 */ {  u32 a = r_ecx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a4897: jl 0x7a4852 */ if ((fS!=fO)) goto L_007a4852;
L_007a4899:; BB(0x007a4899);
    /* 007a4899: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 007a489d: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 007a48a1: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 007a48a4: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 007a48a9: mov edi, 0xfed */ r_edi = 0xfedu;
L_007a48ae:; BB(0x007a48ae);
    /* 007a48ae: movzx eax, byte ptr [esi + ebx + 0xfee] */ r_eax = (u32)R8((u32)(r_esi+r_ebx+0xfeeu));
    /* 007a48b6: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 007a48ba: add eax, 0x1001 */ {  u32 a = r_eax; u32 b = 0x1001u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a48bf: mov edx, 0x1000 */ r_edx = 0x1000u;
    /* 007a48c4: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 007a48c6: mov word ptr [ebx + esi*2 + 0x4ff0], dx */ W16((u32)(r_ebx+r_esi*2+0x4ff0u), (u16)r_edx);
    /* 007a48ce: mov word ptr [ebx + esi*2 + 0x6ff2], dx */ W16((u32)(r_ebx+r_esi*2+0x6ff2u), (u16)r_edx);
    /* 007a48d6: mov dword ptr [ebx + 0x721c], 0 */ W32((u32)(r_ebx+0x721cu), 0x0u);
L_007a48e0:; BB(0x007a48e0);
    /* 007a48e0: movsx ecx, word ptr [ebx + eax*2 + 0x5016] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+r_eax*2+0x5016u));
    /* 007a48e8: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 007a48eb: cmp ecx, 0x1000 */ {  u32 a = r_ecx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a48f1: je 0x7a59b8 */ if (fZ) goto L_007a59b8;
L_007a48f7:; BB(0x007a48f7);
    /* 007a48f7: mov eax, ecx */ r_eax = r_ecx;
    /* 007a48f9: jmp 0x7a48fd */ goto L_007a48fd;
L_007a48fb:; BB(0x007a48fb);
    /* 007a48fb: mov eax, ecx */ r_eax = r_ecx;
L_007a48fd:; BB(0x007a48fd);
    /* 007a48fd: movzx edx, byte ptr [esi + ebx + 0xfef] */ r_edx = (u32)R8((u32)(r_esi+r_ebx+0xfefu));
    /* 007a4905: movzx edi, byte ptr [ebx + eax + 1] */ r_edi = (u32)R8((u32)(r_ebx+r_eax+0x1u));
    /* 007a490a: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007a490f: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 007a4911: jne 0x7a4aa4 */ if (!fZ) goto L_007a4aa4;
L_007a4917:; BB(0x007a4917);
    /* 007a4917: movzx edx, byte ptr [esi + ebx + 0xff0] */ r_edx = (u32)R8((u32)(r_esi+r_ebx+0xff0u));
    /* 007a491f: movzx edi, byte ptr [eax + ebx + 2] */ r_edi = (u32)R8((u32)(r_eax+r_ebx+0x2u));
    /* 007a4924: mov ecx, 2 */ r_ecx = 0x2u;
    /* 007a4929: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 007a492b: jne 0x7a4aa4 */ if (!fZ) goto L_007a4aa4;
L_007a4931:; BB(0x007a4931);
    /* 007a4931: movzx edx, byte ptr [esi + ebx + 0xff1] */ r_edx = (u32)R8((u32)(r_esi+r_ebx+0xff1u));
    /* 007a4939: movzx edi, byte ptr [eax + ebx + 3] */ r_edi = (u32)R8((u32)(r_eax+r_ebx+0x3u));
    /* 007a493e: mov ecx, 3 */ r_ecx = 0x3u;
    /* 007a4943: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 007a4945: jne 0x7a4aa4 */ if (!fZ) goto L_007a4aa4;
L_007a494b:; BB(0x007a494b);
    /* 007a494b: movzx edx, byte ptr [esi + ebx + 0xff2] */ r_edx = (u32)R8((u32)(r_esi+r_ebx+0xff2u));
    /* 007a4953: movzx edi, byte ptr [eax + ebx + 4] */ r_edi = (u32)R8((u32)(r_eax+r_ebx+0x4u));
    /* 007a4958: mov ecx, 4 */ r_ecx = 0x4u;
    /* 007a495d: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 007a495f: jne 0x7a4aa4 */ if (!fZ) goto L_007a4aa4;
L_007a4965:; BB(0x007a4965);
    /* 007a4965: movzx edx, byte ptr [esi + ebx + 0xff3] */ r_edx = (u32)R8((u32)(r_esi+r_ebx+0xff3u));
    /* 007a496d: movzx edi, byte ptr [eax + ebx + 5] */ r_edi = (u32)R8((u32)(r_eax+r_ebx+0x5u));
    /* 007a4972: mov ecx, 5 */ r_ecx = 0x5u;
    /* 007a4977: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 007a4979: jne 0x7a4aa4 */ if (!fZ) goto L_007a4aa4;
L_007a497f:; BB(0x007a497f);
    /* 007a497f: movzx edx, byte ptr [esi + ebx + 0xff4] */ r_edx = (u32)R8((u32)(r_esi+r_ebx+0xff4u));
    /* 007a4987: movzx edi, byte ptr [eax + ebx + 6] */ r_edi = (u32)R8((u32)(r_eax+r_ebx+0x6u));
    /* 007a498c: mov ecx, 6 */ r_ecx = 0x6u;
    /* 007a4991: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 007a4993: jne 0x7a4aa4 */ if (!fZ) goto L_007a4aa4;
L_007a4999:; BB(0x007a4999);
    /* 007a4999: movzx edx, byte ptr [esi + ebx + 0xff5] */ r_edx = (u32)R8((u32)(r_esi+r_ebx+0xff5u));
    /* 007a49a1: movzx edi, byte ptr [eax + ebx + 7] */ r_edi = (u32)R8((u32)(r_eax+r_ebx+0x7u));
    /* 007a49a6: mov ecx, 7 */ r_ecx = 0x7u;
    /* 007a49ab: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 007a49ad: jne 0x7a4aa4 */ if (!fZ) goto L_007a4aa4;
L_007a49b3:; BB(0x007a49b3);
    /* 007a49b3: movzx edx, byte ptr [esi + ebx + 0xff6] */ r_edx = (u32)R8((u32)(r_esi+r_ebx+0xff6u));
    /* 007a49bb: movzx edi, byte ptr [eax + ebx + 8] */ r_edi = (u32)R8((u32)(r_eax+r_ebx+0x8u));
    /* 007a49c0: mov ecx, 8 */ r_ecx = 0x8u;
    /* 007a49c5: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 007a49c7: jne 0x7a4aa4 */ if (!fZ) goto L_007a4aa4;
L_007a49cd:; BB(0x007a49cd);
    /* 007a49cd: movzx edx, byte ptr [esi + ebx + 0xff7] */ r_edx = (u32)R8((u32)(r_esi+r_ebx+0xff7u));
    /* 007a49d5: movzx edi, byte ptr [eax + ebx + 9] */ r_edi = (u32)R8((u32)(r_eax+r_ebx+0x9u));
    /* 007a49da: mov ecx, 9 */ r_ecx = 0x9u;
    /* 007a49df: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 007a49e1: jne 0x7a4aa4 */ if (!fZ) goto L_007a4aa4;
L_007a49e7:; BB(0x007a49e7);
    /* 007a49e7: movzx edx, byte ptr [esi + ebx + 0xff8] */ r_edx = (u32)R8((u32)(r_esi+r_ebx+0xff8u));
    /* 007a49ef: movzx edi, byte ptr [eax + ebx + 0xa] */ r_edi = (u32)R8((u32)(r_eax+r_ebx+0xau));
    /* 007a49f4: mov ecx, 0xa */ r_ecx = 0xau;
    /* 007a49f9: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 007a49fb: jne 0x7a4aa4 */ if (!fZ) goto L_007a4aa4;
L_007a4a01:; BB(0x007a4a01);
    /* 007a4a01: movzx edx, byte ptr [esi + ebx + 0xff9] */ r_edx = (u32)R8((u32)(r_esi+r_ebx+0xff9u));
    /* 007a4a09: movzx edi, byte ptr [eax + ebx + 0xb] */ r_edi = (u32)R8((u32)(r_eax+r_ebx+0xbu));
    /* 007a4a0e: mov ecx, 0xb */ r_ecx = 0xbu;
    /* 007a4a13: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 007a4a15: jne 0x7a4aa4 */ if (!fZ) goto L_007a4aa4;
L_007a4a1b:; BB(0x007a4a1b);
    /* 007a4a1b: movzx edx, byte ptr [esi + ebx + 0xffa] */ r_edx = (u32)R8((u32)(r_esi+r_ebx+0xffau));
    /* 007a4a23: movzx edi, byte ptr [eax + ebx + 0xc] */ r_edi = (u32)R8((u32)(r_eax+r_ebx+0xcu));
    /* 007a4a28: mov ecx, 0xc */ r_ecx = 0xcu;
    /* 007a4a2d: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 007a4a2f: jne 0x7a4aa4 */ if (!fZ) goto L_007a4aa4;
L_007a4a31:; BB(0x007a4a31);
    /* 007a4a31: movzx edx, byte ptr [esi + ebx + 0xffb] */ r_edx = (u32)R8((u32)(r_esi+r_ebx+0xffbu));
    /* 007a4a39: movzx edi, byte ptr [eax + ebx + 0xd] */ r_edi = (u32)R8((u32)(r_eax+r_ebx+0xdu));
    /* 007a4a3e: mov ecx, 0xd */ r_ecx = 0xdu;
    /* 007a4a43: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 007a4a45: jne 0x7a4aa4 */ if (!fZ) goto L_007a4aa4;
L_007a4a47:; BB(0x007a4a47);
    /* 007a4a47: movzx edx, byte ptr [esi + ebx + 0xffc] */ r_edx = (u32)R8((u32)(r_esi+r_ebx+0xffcu));
    /* 007a4a4f: movzx edi, byte ptr [eax + ebx + 0xe] */ r_edi = (u32)R8((u32)(r_eax+r_ebx+0xeu));
    /* 007a4a54: mov ecx, 0xe */ r_ecx = 0xeu;
    /* 007a4a59: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 007a4a5b: jne 0x7a4aa4 */ if (!fZ) goto L_007a4aa4;
L_007a4a5d:; BB(0x007a4a5d);
    /* 007a4a5d: movzx edx, byte ptr [esi + ebx + 0xffd] */ r_edx = (u32)R8((u32)(r_esi+r_ebx+0xffdu));
    /* 007a4a65: movzx edi, byte ptr [eax + ebx + 0xf] */ r_edi = (u32)R8((u32)(r_eax+r_ebx+0xfu));
    /* 007a4a6a: mov ecx, 0xf */ r_ecx = 0xfu;
    /* 007a4a6f: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 007a4a71: jne 0x7a4aa4 */ if (!fZ) goto L_007a4aa4;
L_007a4a73:; BB(0x007a4a73);
    /* 007a4a73: movzx edx, byte ptr [esi + ebx + 0xffe] */ r_edx = (u32)R8((u32)(r_esi+r_ebx+0xffeu));
    /* 007a4a7b: movzx edi, byte ptr [eax + ebx + 0x10] */ r_edi = (u32)R8((u32)(r_eax+r_ebx+0x10u));
    /* 007a4a80: mov ecx, 0x10 */ r_ecx = 0x10u;
    /* 007a4a85: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 007a4a87: jne 0x7a4aa4 */ if (!fZ) goto L_007a4aa4;
L_007a4a89:; BB(0x007a4a89);
    /* 007a4a89: movzx edx, byte ptr [esi + ebx + 0xfff] */ r_edx = (u32)R8((u32)(r_esi+r_ebx+0xfffu));
    /* 007a4a91: movzx edi, byte ptr [eax + ebx + 0x11] */ r_edi = (u32)R8((u32)(r_eax+r_ebx+0x11u));
    /* 007a4a96: mov ecx, 0x11 */ r_ecx = 0x11u;
    /* 007a4a9b: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 007a4a9d: jne 0x7a4aa4 */ if (!fZ) goto L_007a4aa4;
L_007a4a9f:; BB(0x007a4a9f);
    /* 007a4a9f: mov ecx, 0x12 */ r_ecx = 0x12u;
L_007a4aa4:; BB(0x007a4aa4);
    /* 007a4aa4: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a4aa6: jle 0x7a4abb */ if ((fZ||fS!=fO)) goto L_007a4abb;
L_007a4aa8:; BB(0x007a4aa8);
    /* 007a4aa8: mov dword ptr [ebx + 0x7218], eax */ W32((u32)(r_ebx+0x7218u), r_eax);
    /* 007a4aae: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007a4ab0: mov dword ptr [ebx + 0x721c], ecx */ W32((u32)(r_ebx+0x721cu), r_ecx);
    /* 007a4ab6: cmp ecx, 0x12 */ {  u32 a = r_ecx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a4ab9: jge 0x7a4ac8 */ if ((fS==fO)) goto L_007a4ac8;
L_007a4abb:; BB(0x007a4abb);
    /* 007a4abb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a4abd: jge 0x7a48e0 */ if ((fS==fO)) goto L_007a48e0;
L_007a4ac3:; BB(0x007a4ac3);
    /* 007a4ac3: jmp 0x7a5988 */ goto L_007a5988;
L_007a4ac8:; BB(0x007a4ac8);
    /* 007a4ac8: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 007a4acc: movzx edx, word ptr [ebx + eax*2 + 0x1012] */ r_edx = (u32)R16((u32)(r_ebx+r_eax*2+0x1012u));
    /* 007a4ad4: mov word ptr [ebx + esi*2 + 0x2fee], dx */ W16((u32)(r_ebx+r_esi*2+0x2feeu), (u16)r_edx);
    /* 007a4adc: movzx ebp, word ptr [ebx + eax*2 + 0x3014] */ r_ebp = (u32)R16((u32)(r_ebx+r_eax*2+0x3014u));
    /* 007a4ae4: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 007a4ae7: mov word ptr [ebx + esi*2 + 0x4ff0], bp */ W16((u32)(r_ebx+r_esi*2+0x4ff0u), (u16)r_ebp);
    /* 007a4aef: movzx edx, word ptr [ebx + eax*2 + 0x5016] */ r_edx = (u32)R16((u32)(r_ebx+r_eax*2+0x5016u));
    /* 007a4af7: mov word ptr [ebx + esi*2 + 0x6ff2], dx */ W16((u32)(r_ebx+r_esi*2+0x6ff2u), (u16)r_edx);
    /* 007a4aff: movsx ebp, word ptr [ebx + eax*2 + 0x3014] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebx+r_eax*2+0x3014u));
    /* 007a4b07: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 007a4b0a: mov word ptr [ebx + ebp*2 + 0x1012], dx */ W16((u32)(r_ebx+r_ebp*2+0x1012u), (u16)r_edx);
    /* 007a4b12: movsx ebp, word ptr [ebx + eax*2 + 0x5016] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebx+r_eax*2+0x5016u));
    /* 007a4b1a: mov word ptr [ebx + ebp*2 + 0x1012], dx */ W16((u32)(r_ebx+r_ebp*2+0x1012u), (u16)r_edx);
    /* 007a4b22: movsx ebp, word ptr [ebx + eax*2 + 0x1012] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebx+r_eax*2+0x1012u));
    /* 007a4b2a: cmp ax, word ptr [ebx + ebp*2 + 0x5016] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_ebx+r_ebp*2+0x5016u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 007a4b32: jne 0x7a4b3e */ if (!fZ) goto L_007a4b3e;
L_007a4b34:; BB(0x007a4b34);
    /* 007a4b34: mov word ptr [ebx + ebp*2 + 0x5016], dx */ W16((u32)(r_ebx+r_ebp*2+0x5016u), (u16)r_edx);
    /* 007a4b3c: jmp 0x7a4b46 */ goto L_007a4b46;
L_007a4b3e:; BB(0x007a4b3e);
    /* 007a4b3e: mov word ptr [ebx + ebp*2 + 0x3014], dx */ W16((u32)(r_ebx+r_ebp*2+0x3014u), (u16)r_edx);
L_007a4b46:; BB(0x007a4b46);
    /* 007a4b46: mov eax, 0x1000 */ r_eax = 0x1000u;
    /* 007a4b4b: mov word ptr [ebx + ecx + 0x1012], ax */ W16((u32)(r_ebx+r_ecx+0x1012u), (u16)r_eax);
L_007a4b53:; BB(0x007a4b53);
    /* 007a4b53: add esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007a4b56: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 007a4b59: cmp edi, 0xfdc */ {  u32 a = r_edi; u32 b = 0xfdcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a4b5f: jge 0x7a48ae */ if ((fS==fO)) goto L_007a48ae;
L_007a4b65:; BB(0x007a4b65);
    /* 007a4b65: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 007a4b69: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007a4b6d: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 007a4b70: movzx esi, byte ptr [edx] */ r_esi = (u32)R8((u32)(r_edx));
    /* 007a4b73: add esi, 0x1001 */ {  u32 a = r_esi; u32 b = 0x1001u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007a4b79: mov eax, 0x1000 */ r_eax = 0x1000u;
    /* 007a4b7e: mov dword ptr [ebx + 0x721c], 0 */ W32((u32)(r_ebx+0x721cu), 0x0u);
    /* 007a4b88: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 007a4b8c: mov word ptr [ebx + 0x4ff0], ax */ W16((u32)(r_ebx+0x4ff0u), (u16)r_eax);
    /* 007a4b93: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 007a4b96: mov word ptr [ebx + 0x6ff2], ax */ W16((u32)(r_ebx+0x6ff2u), (u16)r_eax);
    /* 007a4b9d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_007a4b9f:; BB(0x007a4b9f);
    /* 007a4b9f: movsx ecx, word ptr [ebx + esi*2 + 0x5016] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi*2+0x5016u));
    /* 007a4ba7: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 007a4baa: cmp ecx, 0x1000 */ {  u32 a = r_ecx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a4bb0: je 0x7a5968 */ if (fZ) goto L_007a5968;
L_007a4bb6:; BB(0x007a4bb6);
    /* 007a4bb6: mov esi, ecx */ r_esi = r_ecx;
    /* 007a4bb8: jmp 0x7a4bbc */ goto L_007a4bbc;
L_007a4bba:; BB(0x007a4bba);
    /* 007a4bba: mov esi, ecx */ r_esi = r_ecx;
L_007a4bbc:; BB(0x007a4bbc);
    /* 007a4bbc: movzx ecx, byte ptr [edx + 1] */ r_ecx = (u32)R8((u32)(r_edx+0x1u));
    /* 007a4bc0: movzx edi, byte ptr [ebx + esi + 1] */ r_edi = (u32)R8((u32)(r_ebx+r_esi+0x1u));
    /* 007a4bc5: mov ebp, 1 */ r_ebp = 0x1u;
    /* 007a4bca: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a4bcc: jne 0x7a4d1b */ if (!fZ) goto L_007a4d1b;
L_007a4bd2:; BB(0x007a4bd2);
    /* 007a4bd2: movzx ecx, byte ptr [edx + 2] */ r_ecx = (u32)R8((u32)(r_edx+0x2u));
    /* 007a4bd6: movzx edi, byte ptr [esi + ebx + 2] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0x2u));
    /* 007a4bdb: mov ebp, 2 */ r_ebp = 0x2u;
    /* 007a4be0: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a4be2: jne 0x7a4d1b */ if (!fZ) goto L_007a4d1b;
L_007a4be8:; BB(0x007a4be8);
    /* 007a4be8: movzx ecx, byte ptr [edx + 3] */ r_ecx = (u32)R8((u32)(r_edx+0x3u));
    /* 007a4bec: movzx edi, byte ptr [esi + ebx + 3] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0x3u));
    /* 007a4bf1: mov ebp, 3 */ r_ebp = 0x3u;
    /* 007a4bf6: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a4bf8: jne 0x7a4d1b */ if (!fZ) goto L_007a4d1b;
L_007a4bfe:; BB(0x007a4bfe);
    /* 007a4bfe: movzx ecx, byte ptr [edx + 4] */ r_ecx = (u32)R8((u32)(r_edx+0x4u));
    /* 007a4c02: movzx edi, byte ptr [esi + ebx + 4] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0x4u));
    /* 007a4c07: mov ebp, 4 */ r_ebp = 0x4u;
    /* 007a4c0c: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a4c0e: jne 0x7a4d1b */ if (!fZ) goto L_007a4d1b;
L_007a4c14:; BB(0x007a4c14);
    /* 007a4c14: movzx ecx, byte ptr [edx + 5] */ r_ecx = (u32)R8((u32)(r_edx+0x5u));
    /* 007a4c18: movzx edi, byte ptr [esi + ebx + 5] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0x5u));
    /* 007a4c1d: mov ebp, 5 */ r_ebp = 0x5u;
    /* 007a4c22: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a4c24: jne 0x7a4d1b */ if (!fZ) goto L_007a4d1b;
L_007a4c2a:; BB(0x007a4c2a);
    /* 007a4c2a: movzx ecx, byte ptr [edx + 6] */ r_ecx = (u32)R8((u32)(r_edx+0x6u));
    /* 007a4c2e: movzx edi, byte ptr [esi + ebx + 6] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0x6u));
    /* 007a4c33: mov ebp, 6 */ r_ebp = 0x6u;
    /* 007a4c38: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a4c3a: jne 0x7a4d1b */ if (!fZ) goto L_007a4d1b;
L_007a4c40:; BB(0x007a4c40);
    /* 007a4c40: movzx ecx, byte ptr [edx + 7] */ r_ecx = (u32)R8((u32)(r_edx+0x7u));
    /* 007a4c44: movzx edi, byte ptr [esi + ebx + 7] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0x7u));
    /* 007a4c49: mov ebp, 7 */ r_ebp = 0x7u;
    /* 007a4c4e: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a4c50: jne 0x7a4d1b */ if (!fZ) goto L_007a4d1b;
L_007a4c56:; BB(0x007a4c56);
    /* 007a4c56: movzx ecx, byte ptr [edx + 8] */ r_ecx = (u32)R8((u32)(r_edx+0x8u));
    /* 007a4c5a: movzx edi, byte ptr [esi + ebx + 8] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0x8u));
    /* 007a4c5f: mov ebp, 8 */ r_ebp = 0x8u;
    /* 007a4c64: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a4c66: jne 0x7a4d1b */ if (!fZ) goto L_007a4d1b;
L_007a4c6c:; BB(0x007a4c6c);
    /* 007a4c6c: movzx ecx, byte ptr [edx + 9] */ r_ecx = (u32)R8((u32)(r_edx+0x9u));
    /* 007a4c70: movzx edi, byte ptr [esi + ebx + 9] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0x9u));
    /* 007a4c75: mov ebp, 9 */ r_ebp = 0x9u;
    /* 007a4c7a: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a4c7c: jne 0x7a4d1b */ if (!fZ) goto L_007a4d1b;
L_007a4c82:; BB(0x007a4c82);
    /* 007a4c82: movzx ecx, byte ptr [edx + 0xa] */ r_ecx = (u32)R8((u32)(r_edx+0xau));
    /* 007a4c86: movzx edi, byte ptr [esi + ebx + 0xa] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0xau));
    /* 007a4c8b: mov ebp, 0xa */ r_ebp = 0xau;
    /* 007a4c90: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a4c92: jne 0x7a4d1b */ if (!fZ) goto L_007a4d1b;
L_007a4c98:; BB(0x007a4c98);
    /* 007a4c98: movzx ecx, byte ptr [edx + 0xb] */ r_ecx = (u32)R8((u32)(r_edx+0xbu));
    /* 007a4c9c: movzx edi, byte ptr [esi + ebx + 0xb] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0xbu));
    /* 007a4ca1: mov ebp, 0xb */ r_ebp = 0xbu;
    /* 007a4ca6: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a4ca8: jne 0x7a4d1b */ if (!fZ) goto L_007a4d1b;
L_007a4caa:; BB(0x007a4caa);
    /* 007a4caa: movzx ecx, byte ptr [edx + 0xc] */ r_ecx = (u32)R8((u32)(r_edx+0xcu));
    /* 007a4cae: movzx edi, byte ptr [esi + ebx + 0xc] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0xcu));
    /* 007a4cb3: mov ebp, 0xc */ r_ebp = 0xcu;
    /* 007a4cb8: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a4cba: jne 0x7a4d1b */ if (!fZ) goto L_007a4d1b;
L_007a4cbc:; BB(0x007a4cbc);
    /* 007a4cbc: movzx ecx, byte ptr [edx + 0xd] */ r_ecx = (u32)R8((u32)(r_edx+0xdu));
    /* 007a4cc0: movzx edi, byte ptr [esi + ebx + 0xd] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0xdu));
    /* 007a4cc5: mov ebp, 0xd */ r_ebp = 0xdu;
    /* 007a4cca: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a4ccc: jne 0x7a4d1b */ if (!fZ) goto L_007a4d1b;
L_007a4cce:; BB(0x007a4cce);
    /* 007a4cce: movzx ecx, byte ptr [edx + 0xe] */ r_ecx = (u32)R8((u32)(r_edx+0xeu));
    /* 007a4cd2: movzx edi, byte ptr [esi + ebx + 0xe] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0xeu));
    /* 007a4cd7: mov ebp, 0xe */ r_ebp = 0xeu;
    /* 007a4cdc: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a4cde: jne 0x7a4d1b */ if (!fZ) goto L_007a4d1b;
L_007a4ce0:; BB(0x007a4ce0);
    /* 007a4ce0: movzx ecx, byte ptr [edx + 0xf] */ r_ecx = (u32)R8((u32)(r_edx+0xfu));
    /* 007a4ce4: movzx edi, byte ptr [esi + ebx + 0xf] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0xfu));
    /* 007a4ce9: mov ebp, 0xf */ r_ebp = 0xfu;
    /* 007a4cee: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a4cf0: jne 0x7a4d1b */ if (!fZ) goto L_007a4d1b;
L_007a4cf2:; BB(0x007a4cf2);
    /* 007a4cf2: movzx ecx, byte ptr [edx + 0x10] */ r_ecx = (u32)R8((u32)(r_edx+0x10u));
    /* 007a4cf6: movzx edi, byte ptr [esi + ebx + 0x10] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0x10u));
    /* 007a4cfb: mov ebp, 0x10 */ r_ebp = 0x10u;
    /* 007a4d00: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a4d02: jne 0x7a4d1b */ if (!fZ) goto L_007a4d1b;
L_007a4d04:; BB(0x007a4d04);
    /* 007a4d04: movzx ecx, byte ptr [edx + 0x11] */ r_ecx = (u32)R8((u32)(r_edx+0x11u));
    /* 007a4d08: movzx edi, byte ptr [esi + ebx + 0x11] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0x11u));
    /* 007a4d0d: mov ebp, 0x11 */ r_ebp = 0x11u;
    /* 007a4d12: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a4d14: jne 0x7a4d1b */ if (!fZ) goto L_007a4d1b;
L_007a4d16:; BB(0x007a4d16);
    /* 007a4d16: mov ebp, 0x12 */ r_ebp = 0x12u;
L_007a4d1b:; BB(0x007a4d1b);
    /* 007a4d1b: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a4d1d: jle 0x7a4d32 */ if ((fZ||fS!=fO)) goto L_007a4d32;
L_007a4d1f:; BB(0x007a4d1f);
    /* 007a4d1f: mov dword ptr [ebx + 0x7218], esi */ W32((u32)(r_ebx+0x7218u), r_esi);
    /* 007a4d25: mov eax, ebp */ r_eax = r_ebp;
    /* 007a4d27: mov dword ptr [ebx + 0x721c], ebp */ W32((u32)(r_ebx+0x721cu), r_ebp);
    /* 007a4d2d: cmp ebp, 0x12 */ {  u32 a = r_ebp; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a4d30: jge 0x7a4d3f */ if ((fS==fO)) goto L_007a4d3f;
L_007a4d32:; BB(0x007a4d32);
    /* 007a4d32: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a4d34: jge 0x7a4b9f */ if ((fS==fO)) goto L_007a4b9f;
L_007a4d3a:; BB(0x007a4d3a);
    /* 007a4d3a: jmp 0x7a5931 */ goto L_007a5931;
L_007a4d3f:; BB(0x007a4d3f);
    /* 007a4d3f: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007a4d43: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 007a4d46: movzx edi, word ptr [ebx + esi*2 + 0x1012] */ r_edi = (u32)R16((u32)(r_ebx+r_esi*2+0x1012u));
    /* 007a4d4e: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 007a4d51: mov word ptr [ebx + 0x2fee], di */ W16((u32)(r_ebx+0x2feeu), (u16)r_edi);
    /* 007a4d58: movzx eax, word ptr [ebx + esi*2 + 0x3014] */ r_eax = (u32)R16((u32)(r_ebx+r_esi*2+0x3014u));
    /* 007a4d60: mov word ptr [ebx + 0x4ff0], ax */ W16((u32)(r_ebx+0x4ff0u), (u16)r_eax);
    /* 007a4d67: movzx eax, word ptr [ebx + esi*2 + 0x5016] */ r_eax = (u32)R16((u32)(r_ebx+r_esi*2+0x5016u));
    /* 007a4d6f: mov word ptr [ebx + 0x6ff2], ax */ W16((u32)(r_ebx+0x6ff2u), (u16)r_eax);
    /* 007a4d76: movsx edi, word ptr [ebx + esi*2 + 0x3014] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi*2+0x3014u));
    /* 007a4d7e: mov eax, 0xfee */ r_eax = 0xfeeu;
    /* 007a4d83: mov word ptr [ebx + edi*2 + 0x1012], ax */ W16((u32)(r_ebx+r_edi*2+0x1012u), (u16)r_eax);
    /* 007a4d8b: movsx edi, word ptr [ebx + esi*2 + 0x5016] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi*2+0x5016u));
    /* 007a4d93: mov word ptr [ebx + edi*2 + 0x1012], ax */ W16((u32)(r_ebx+r_edi*2+0x1012u), (u16)r_eax);
    /* 007a4d9b: movsx eax, word ptr [ebx + esi*2 + 0x1012] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi*2+0x1012u));
    /* 007a4da3: cmp si, word ptr [ebx + eax*2 + 0x5016] */ {  u32 a = (u16)r_esi; u32 b = R16((u32)(r_ebx+r_eax*2+0x5016u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 007a4dab: jne 0x7a4dbc */ if (!fZ) goto L_007a4dbc;
L_007a4dad:; BB(0x007a4dad);
    /* 007a4dad: mov esi, 0xfee */ r_esi = 0xfeeu;
    /* 007a4db2: mov word ptr [ebx + eax*2 + 0x5016], si */ W16((u32)(r_ebx+r_eax*2+0x5016u), (u16)r_esi);
    /* 007a4dba: jmp 0x7a4dc9 */ goto L_007a4dc9;
L_007a4dbc:; BB(0x007a4dbc);
    /* 007a4dbc: mov esi, 0xfee */ r_esi = 0xfeeu;
    /* 007a4dc1: mov word ptr [ebx + eax*2 + 0x3014], si */ W16((u32)(r_ebx+r_eax*2+0x3014u), (u16)r_esi);
L_007a4dc9:; BB(0x007a4dc9);
    /* 007a4dc9: mov eax, 0x1000 */ r_eax = 0x1000u;
    /* 007a4dce: mov word ptr [ebx + edx + 0x1012], ax */ W16((u32)(r_ebx+r_edx+0x1012u), (u16)r_eax);
L_007a4dd6:; BB(0x007a4dd6);
    /* 007a4dd6: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007a4dda: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
L_007a4dde:; BB(0x007a4dde);
    /* 007a4dde: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007a4de2: mov ecx, dword ptr [ebx + 0x721c] */ r_ecx = R32((u32)(r_ebx+0x721cu));
    /* 007a4de8: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a4dea: jl 0x7a4dee */ if ((fS!=fO)) goto L_007a4dee;
L_007a4dec:; BB(0x007a4dec);
    /* 007a4dec: mov ecx, edx */ r_ecx = r_edx;
L_007a4dee:; BB(0x007a4dee);
    /* 007a4dee: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a4df1: jge 0x7a4e19 */ if ((fS==fO)) goto L_007a4e19;
L_007a4df3:; BB(0x007a4df3);
    /* 007a4df3: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 007a4df7: mov dword ptr [ebx + 0x721c], 1 */ W32((u32)(r_ebx+0x721cu), 0x1u);
    /* 007a4e01: movzx edx, byte ptr [esi + ebx] */ r_edx = (u32)R8((u32)(r_esi+r_ebx));
    /* 007a4e05: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007a4e0a: or byte ptr [esp + 0x24], al */ { u32 ad = (u32)(r_esp+0x24u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 007a4e0e: mov edi, ebp */ r_edi = r_ebp;
    /* 007a4e10: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007a4e13: mov byte ptr [esp + edi + 0x24], dl */ W8((u32)(r_esp+r_edi+0x24u), (u8)r_edx);
    /* 007a4e17: jmp 0x7a4e41 */ goto L_007a4e41;
L_007a4e19:; BB(0x007a4e19);
    /* 007a4e19: mov edx, dword ptr [ebx + 0x7218] */ r_edx = R32((u32)(r_ebx+0x7218u));
    /* 007a4e1f: mov byte ptr [esp + ebp + 0x24], dl */ W8((u32)(r_esp+r_ebp+0x24u), (u8)r_edx);
    /* 007a4e23: mov dword ptr [ebx + 0x721c], ecx */ W32((u32)(r_ebx+0x721cu), r_ecx);
    /* 007a4e29: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 007a4e2c: and edx, 0xf0 */ {  u32 a = r_edx; u32 b = 0xf0u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 007a4e32: lea esi, [ecx - 3] */ r_esi = (u32)(r_ecx+0xfffffffdu);
    /* 007a4e35: or edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007a4e37: lea edi, [ebp + 1] */ r_edi = (u32)(r_ebp+0x1u);
    /* 007a4e3a: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007a4e3d: mov byte ptr [esp + edi + 0x24], dl */ W8((u32)(r_esp+r_edi+0x24u), (u8)r_edx);
L_007a4e41:; BB(0x007a4e41);
    /* 007a4e41: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a4e43: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007a4e46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a4e48: jne 0x7a4f18 */ if (!fZ) goto L_007a4f18;
L_007a4e4e:; BB(0x007a4e4e);
    /* 007a4e4e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007a4e50: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007a4e52: jle 0x7a4f03 */ if ((fZ||fS!=fO)) goto L_007a4f03;
L_007a4e58:; BB(0x007a4e58);
    /* 007a4e58: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a4e5b: jl 0x7a4ee0 */ if ((fS!=fO)) goto L_007a4ee0;
L_007a4e61:; BB(0x007a4e61);
    /* 007a4e61: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 007a4e64: lea eax, [ebp - 6] */ r_eax = (u32)(r_ebp+0xfffffffau);
L_007a4e67:; BB(0x007a4e67);
    /* 007a4e67: movzx ecx, byte ptr [esp + edx + 0x24] */ r_ecx = (u32)R8((u32)(r_esp+r_edx+0x24u));
    /* 007a4e6c: mov esi, dword ptr [ebx + 0x7224] */ r_esi = R32((u32)(r_ebx+0x7224u));
    /* 007a4e72: lea ebp, [esi + 1] */ r_ebp = (u32)(r_esi+0x1u);
    /* 007a4e75: mov dword ptr [ebx + 0x7224], ebp */ W32((u32)(r_ebx+0x7224u), r_ebp);
    /* 007a4e7b: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 007a4e7d: mov ebp, dword ptr [ebx + 0x7224] */ r_ebp = R32((u32)(r_ebx+0x7224u));
    /* 007a4e83: movzx ecx, byte ptr [esp + edx + 0x25] */ r_ecx = (u32)R8((u32)(r_esp+r_edx+0x25u));
    /* 007a4e88: lea edi, [ebp + 1] */ r_edi = (u32)(r_ebp+0x1u);
    /* 007a4e8b: mov dword ptr [ebx + 0x7224], edi */ W32((u32)(r_ebx+0x7224u), r_edi);
    /* 007a4e91: mov byte ptr [ebp], cl */ W8((u32)(r_ebp), (u8)r_ecx);
    /* 007a4e94: mov esi, dword ptr [ebx + 0x7224] */ r_esi = R32((u32)(r_ebx+0x7224u));
    /* 007a4e9a: lea ebp, [esi + 1] */ r_ebp = (u32)(r_esi+0x1u);
    /* 007a4e9d: movzx ecx, byte ptr [esp + edx + 0x26] */ r_ecx = (u32)R8((u32)(r_esp+r_edx+0x26u));
    /* 007a4ea2: mov dword ptr [ebx + 0x7224], ebp */ W32((u32)(r_ebx+0x7224u), r_ebp);
    /* 007a4ea8: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 007a4eaa: movzx ecx, byte ptr [esp + edx + 0x27] */ r_ecx = (u32)R8((u32)(r_esp+r_edx+0x27u));
    /* 007a4eaf: mov esi, dword ptr [ebx + 0x7224] */ r_esi = R32((u32)(r_ebx+0x7224u));
    /* 007a4eb5: lea ebp, [esi + 1] */ r_ebp = (u32)(r_esi+0x1u);
    /* 007a4eb8: mov dword ptr [ebx + 0x7224], ebp */ W32((u32)(r_ebx+0x7224u), r_ebp);
    /* 007a4ebe: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 007a4ec0: movzx ecx, byte ptr [esp + edx + 0x28] */ r_ecx = (u32)R8((u32)(r_esp+r_edx+0x28u));
    /* 007a4ec5: mov esi, dword ptr [ebx + 0x7224] */ r_esi = R32((u32)(r_ebx+0x7224u));
    /* 007a4ecb: lea ebp, [esi + 1] */ r_ebp = (u32)(r_esi+0x1u);
    /* 007a4ece: mov dword ptr [ebx + 0x7224], ebp */ W32((u32)(r_ebx+0x7224u), r_ebp);
    /* 007a4ed4: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 007a4ed6: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a4ed9: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a4edb: jle 0x7a4e67 */ if ((fZ||fS!=fO)) goto L_007a4e67;
L_007a4edd:; BB(0x007a4edd);
    /* 007a4edd: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_007a4ee0:; BB(0x007a4ee0);
    /* 007a4ee0: movzx eax, byte ptr [esp + edx + 0x24] */ r_eax = (u32)R8((u32)(r_esp+r_edx+0x24u));
    /* 007a4ee5: mov esi, dword ptr [ebx + 0x7224] */ r_esi = R32((u32)(r_ebx+0x7224u));
    /* 007a4eeb: lea ecx, [esi + 1] */ r_ecx = (u32)(r_esi+0x1u);
    /* 007a4eee: mov dword ptr [ebx + 0x7224], ecx */ W32((u32)(r_ebx+0x7224u), r_ecx);
    /* 007a4ef4: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 007a4ef6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a4ef9: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a4efb: jl 0x7a4ee0 */ if ((fS!=fO)) goto L_007a4ee0;
L_007a4efd:; BB(0x007a4efd);
    /* 007a4efd: mov ecx, dword ptr [ebx + 0x721c] */ r_ecx = R32((u32)(r_ebx+0x721cu));
L_007a4f03:; BB(0x007a4f03);
    /* 007a4f03: add dword ptr [ebx + 0x722c], ebp */ { u32 ad = (u32)(r_ebx+0x722cu);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 007a4f09: mov eax, 1 */ r_eax = 0x1u;
    /* 007a4f0e: mov ebp, 1 */ r_ebp = 0x1u;
    /* 007a4f13: mov byte ptr [esp + 0x24], 0 */ W8((u32)(r_esp+0x24u), 0x0u);
L_007a4f18:; BB(0x007a4f18);
    /* 007a4f18: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 007a4f1a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007a4f1c: jle 0x7a4f5a */ if ((fZ||fS!=fO)) goto L_007a4f5a;
L_007a4f1e:; BB(0x007a4f1e);
    /* 007a4f1e: mov dword ptr [esp + 0xc], esi */ W32((u32)(r_esp+0xcu), r_esi);
    /* 007a4f22: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 007a4f26: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007a4f2a: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
L_007a4f2d:; BB(0x007a4f2d);
    /* 007a4f2d: mov eax, dword ptr [ebx + 0x7220] */ r_eax = R32((u32)(r_ebx+0x7220u));
    /* 007a4f33: lea edx, [eax + 1] */ r_edx = (u32)(r_eax+0x1u);
    /* 007a4f36: cmp edx, dword ptr [ebx + 0x7228] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x7228u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 007a4f3c: mov dword ptr [ebx + 0x7220], edx */ W32((u32)(r_ebx+0x7220u), r_edx);
    /* 007a4f42: movzx eax, byte ptr [eax] */ r_eax = (u32)R8((u32)(r_eax));
    /* 007a4f45: jbe 0x7a53b5 */ if ((fC||fZ)) goto L_007a53b5;
L_007a4f4b:; BB(0x007a4f4b);
    /* 007a4f4b: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 007a4f4f: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 007a4f53: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007a4f57: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_007a4f5a:; BB(0x007a4f5a);
    /* 007a4f5a: lea edx, [esi + 1] */ r_edx = (u32)(r_esi+0x1u);
    /* 007a4f5d: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a4f5f: jge 0x7a50df */ if ((fS==fO)) goto L_007a50df;
L_007a4f65:; BB(0x007a4f65);
    /* 007a4f65: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 007a4f69: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 007a4f6d: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 007a4f71: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 007a4f75: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
L_007a4f78:; BB(0x007a4f78);
    /* 007a4f78: movsx edi, word ptr [ebx + ecx*2 + 0x1012] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+r_ecx*2+0x1012u));
    /* 007a4f80: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 007a4f83: cmp edi, 0x1000 */ {  u32 a = r_edi; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a4f89: je 0x7a5091 */ if (fZ) goto L_007a5091;
L_007a4f8f:; BB(0x007a4f8f);
    /* 007a4f8f: movsx eax, word ptr [ebx + esi + 0x5016] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi+0x5016u));
    /* 007a4f97: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a4f9c: je 0x7a57eb */ if (fZ) goto L_007a57eb;
L_007a4fa2:; BB(0x007a4fa2);
    /* 007a4fa2: movsx ebp, word ptr [ebx + esi + 0x3014] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi+0x3014u));
    /* 007a4faa: cmp ebp, 0x1000 */ {  u32 a = r_ebp; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a4fb0: je 0x7a57df */ if (fZ) goto L_007a57df;
L_007a4fb6:; BB(0x007a4fb6);
    /* 007a4fb6: movsx edx, word ptr [ebx + ebp*2 + 0x5016] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+r_ebp*2+0x5016u));
    /* 007a4fbe: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a4fc4: je 0x7a57d4 */ if (fZ) goto L_007a57d4;
L_007a4fca:; BB(0x007a4fca);
    /* 007a4fca: movsx eax, word ptr [ebx + ebp*2 + 0x5016] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+r_ebp*2+0x5016u));
L_007a4fd2:; BB(0x007a4fd2);
    /* 007a4fd2: mov ebp, eax */ r_ebp = r_eax;
    /* 007a4fd4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a4fd6: lea edx, [ebx + eax] */ r_edx = (u32)(r_ebx+r_eax);
    /* 007a4fd9: movsx eax, word ptr [edx + 0x5016] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x5016u));
    /* 007a4fe0: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a4fe5: jne 0x7a4fd2 */ if (!fZ) goto L_007a4fd2;
L_007a4fe7:; BB(0x007a4fe7);
    /* 007a4fe7: movsx edi, word ptr [edx + 0x1012] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x1012u));
    /* 007a4fee: movzx eax, word ptr [edx + 0x3014] */ r_eax = (u32)R16((u32)(r_edx+0x3014u));
    /* 007a4ff5: mov word ptr [ebx + edi*2 + 0x5016], ax */ W16((u32)(r_ebx+r_edi*2+0x5016u), (u16)r_eax);
    /* 007a4ffd: movsx edi, word ptr [edx + 0x3014] */ r_edi = (u32)(i32)(i16)R16((u32)(r_edx+0x3014u));
    /* 007a5004: movzx eax, word ptr [edx + 0x1012] */ r_eax = (u32)R16((u32)(r_edx+0x1012u));
    /* 007a500b: mov word ptr [ebx + edi*2 + 0x1012], ax */ W16((u32)(r_ebx+r_edi*2+0x1012u), (u16)r_eax);
    /* 007a5013: movzx eax, word ptr [ebx + esi + 0x3014] */ r_eax = (u32)R16((u32)(r_ebx+r_esi+0x3014u));
    /* 007a501b: mov word ptr [edx + 0x3014], ax */ W16((u32)(r_edx+0x3014u), (u16)r_eax);
    /* 007a5022: movsx eax, word ptr [ebx + esi + 0x3014] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi+0x3014u));
    /* 007a502a: mov word ptr [ebx + eax*2 + 0x1012], bp */ W16((u32)(r_ebx+r_eax*2+0x1012u), (u16)r_ebp);
    /* 007a5032: movsx eax, word ptr [ebx + esi + 0x5016] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi+0x5016u));
L_007a503a:; BB(0x007a503a);
    /* 007a503a: mov word ptr [edx + 0x5016], ax */ W16((u32)(r_edx+0x5016u), (u16)r_eax);
    /* 007a5041: movsx eax, word ptr [ebx + esi + 0x5016] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi+0x5016u));
    /* 007a5049: mov word ptr [ebx + eax*2 + 0x1012], bp */ W16((u32)(r_ebx+r_eax*2+0x1012u), (u16)r_ebp);
    /* 007a5051: movsx edi, word ptr [ebx + esi + 0x1012] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi+0x1012u));
L_007a5059:; BB(0x007a5059);
    /* 007a5059: mov word ptr [edx + 0x1012], di */ W16((u32)(r_edx+0x1012u), (u16)r_edi);
    /* 007a5060: movsx eax, word ptr [ebx + esi + 0x1012] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi+0x1012u));
    /* 007a5068: cmp cx, word ptr [ebx + eax*2 + 0x5016] */ {  u32 a = (u16)r_ecx; u32 b = R16((u32)(r_ebx+r_eax*2+0x5016u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 007a5070: jne 0x7a507c */ if (!fZ) goto L_007a507c;
L_007a5072:; BB(0x007a5072);
    /* 007a5072: mov word ptr [ebx + eax*2 + 0x5016], bp */ W16((u32)(r_ebx+r_eax*2+0x5016u), (u16)r_ebp);
    /* 007a507a: jmp 0x7a5084 */ goto L_007a5084;
L_007a507c:; BB(0x007a507c);
    /* 007a507c: mov word ptr [ebx + eax*2 + 0x3014], bp */ W16((u32)(r_ebx+r_eax*2+0x3014u), (u16)r_ebp);
L_007a5084:; BB(0x007a5084);
    /* 007a5084: mov eax, 0x1000 */ r_eax = 0x1000u;
    /* 007a5089: mov word ptr [ebx + esi + 0x1012], ax */ W16((u32)(r_ebx+r_esi+0x1012u), (u16)r_eax);
L_007a5091:; BB(0x007a5091);
    /* 007a5091: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007a5095: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007a5099: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a509c: and ecx, 0xfff */ {  u32 a = r_ecx; u32 b = 0xfffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007a50a2: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a50a5: and eax, 0xfff */ {  u32 a = r_eax; u32 b = 0xfffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007a50aa: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 007a50ae: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 007a50b1: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 007a50b5: jne 0x7a51d6 */ if (!fZ) goto L_007a51d6;
L_007a50bb:; BB(0x007a50bb);
    /* 007a50bb: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 007a50bf: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 007a50c3: mov edx, eax */ r_edx = r_eax;
    /* 007a50c5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a50c8: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007a50cc: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a50ce: jl 0x7a4f78 */ if ((fS!=fO)) goto L_007a4f78;
L_007a50d4:; BB(0x007a50d4);
    /* 007a50d4: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007a50d8: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 007a50db: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
L_007a50df:; BB(0x007a50df);
    /* 007a50df: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 007a50e3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007a50e5: jg 0x7a4dde */ if ((!fZ&&fS==fO)) goto L_007a4dde;
L_007a50eb:; BB(0x007a50eb);
    /* 007a50eb: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a50ee: jle 0x7a51a9 */ if ((fZ||fS!=fO)) goto L_007a51a9;
L_007a50f4:; BB(0x007a50f4);
    /* 007a50f4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007a50f6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 007a50f8: jle 0x7a51a3 */ if ((fZ||fS!=fO)) goto L_007a51a3;
L_007a50fe:; BB(0x007a50fe);
    /* 007a50fe: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a5101: jl 0x7a5186 */ if ((fS!=fO)) goto L_007a5186;
L_007a5107:; BB(0x007a5107);
    /* 007a5107: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 007a510a: lea eax, [ebp - 6] */ r_eax = (u32)(r_ebp+0xfffffffau);
L_007a510d:; BB(0x007a510d);
    /* 007a510d: movzx ecx, byte ptr [esp + edx + 0x24] */ r_ecx = (u32)R8((u32)(r_esp+r_edx+0x24u));
    /* 007a5112: mov esi, dword ptr [ebx + 0x7224] */ r_esi = R32((u32)(r_ebx+0x7224u));
    /* 007a5118: lea ebp, [esi + 1] */ r_ebp = (u32)(r_esi+0x1u);
    /* 007a511b: mov dword ptr [ebx + 0x7224], ebp */ W32((u32)(r_ebx+0x7224u), r_ebp);
    /* 007a5121: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 007a5123: mov ebp, dword ptr [ebx + 0x7224] */ r_ebp = R32((u32)(r_ebx+0x7224u));
    /* 007a5129: movzx ecx, byte ptr [esp + edx + 0x25] */ r_ecx = (u32)R8((u32)(r_esp+r_edx+0x25u));
    /* 007a512e: lea edi, [ebp + 1] */ r_edi = (u32)(r_ebp+0x1u);
    /* 007a5131: mov dword ptr [ebx + 0x7224], edi */ W32((u32)(r_ebx+0x7224u), r_edi);
    /* 007a5137: mov byte ptr [ebp], cl */ W8((u32)(r_ebp), (u8)r_ecx);
    /* 007a513a: mov esi, dword ptr [ebx + 0x7224] */ r_esi = R32((u32)(r_ebx+0x7224u));
    /* 007a5140: lea ebp, [esi + 1] */ r_ebp = (u32)(r_esi+0x1u);
    /* 007a5143: movzx ecx, byte ptr [esp + edx + 0x26] */ r_ecx = (u32)R8((u32)(r_esp+r_edx+0x26u));
    /* 007a5148: mov dword ptr [ebx + 0x7224], ebp */ W32((u32)(r_ebx+0x7224u), r_ebp);
    /* 007a514e: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 007a5150: movzx ecx, byte ptr [esp + edx + 0x27] */ r_ecx = (u32)R8((u32)(r_esp+r_edx+0x27u));
    /* 007a5155: mov esi, dword ptr [ebx + 0x7224] */ r_esi = R32((u32)(r_ebx+0x7224u));
    /* 007a515b: lea ebp, [esi + 1] */ r_ebp = (u32)(r_esi+0x1u);
    /* 007a515e: mov dword ptr [ebx + 0x7224], ebp */ W32((u32)(r_ebx+0x7224u), r_ebp);
    /* 007a5164: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 007a5166: movzx ecx, byte ptr [esp + edx + 0x28] */ r_ecx = (u32)R8((u32)(r_esp+r_edx+0x28u));
    /* 007a516b: mov esi, dword ptr [ebx + 0x7224] */ r_esi = R32((u32)(r_ebx+0x7224u));
    /* 007a5171: lea ebp, [esi + 1] */ r_ebp = (u32)(r_esi+0x1u);
    /* 007a5174: mov dword ptr [ebx + 0x7224], ebp */ W32((u32)(r_ebx+0x7224u), r_ebp);
    /* 007a517a: mov byte ptr [esi], cl */ W8((u32)(r_esi), (u8)r_ecx);
    /* 007a517c: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a517f: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a5181: jle 0x7a510d */ if ((fZ||fS!=fO)) goto L_007a510d;
L_007a5183:; BB(0x007a5183);
    /* 007a5183: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_007a5186:; BB(0x007a5186);
    /* 007a5186: movzx eax, byte ptr [esp + edx + 0x24] */ r_eax = (u32)R8((u32)(r_esp+r_edx+0x24u));
    /* 007a518b: mov esi, dword ptr [ebx + 0x7224] */ r_esi = R32((u32)(r_ebx+0x7224u));
    /* 007a5191: lea ecx, [esi + 1] */ r_ecx = (u32)(r_esi+0x1u);
    /* 007a5194: mov dword ptr [ebx + 0x7224], ecx */ W32((u32)(r_ebx+0x7224u), r_ecx);
    /* 007a519a: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 007a519c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a519f: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a51a1: jl 0x7a5186 */ if ((fS!=fO)) goto L_007a5186;
L_007a51a3:; BB(0x007a51a3);
    /* 007a51a3: add dword ptr [ebx + 0x722c], ebp */ { u32 ad = (u32)(r_ebx+0x722cu);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_007a51a9:; BB(0x007a51a9);
    /* 007a51a9: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 007a51ad: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 007a51b1: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 007a51b4: mov eax, dword ptr [ebx + 0x722c] */ r_eax = R32((u32)(r_ebx+0x722cu));
    /* 007a51ba: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 007a51bd: mov eax, dword ptr [ebx + 0x722c] */ r_eax = R32((u32)(r_ebx+0x722cu));
    /* 007a51c3: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a51c6: mov dword ptr [ebx + 0x722c], eax */ W32((u32)(r_ebx+0x722cu), r_eax);
    /* 007a51cc: add esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007a51cf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007a51d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007a51d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007a51d2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007a51d3: ret 0xc */ FN_RET(0x007a47dc); r_esp += 16; return;
L_007a51d6:; BB(0x007a51d6);
    /* 007a51d6: mov edi, eax */ r_edi = r_eax;
    /* 007a51d8: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 007a51dc: lea edx, [ebx + edi] */ r_edx = (u32)(r_ebx+r_edi);
    /* 007a51df: movzx ebp, byte ptr [edx] */ r_ebp = (u32)R8((u32)(r_edx));
    /* 007a51e2: add ebp, 0x1001 */ {  u32 a = r_ebp; u32 b = 0x1001u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007a51e8: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 007a51eb: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007a51ef: mov esi, 0x1000 */ r_esi = 0x1000u;
    /* 007a51f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007a51f6: mov word ptr [ebx + edi*2 + 0x3014], si */ W16((u32)(r_ebx+r_edi*2+0x3014u), (u16)r_esi);
    /* 007a51fe: mov word ptr [ebx + edi*2 + 0x5016], si */ W16((u32)(r_ebx+r_edi*2+0x5016u), (u16)r_esi);
    /* 007a5206: mov dword ptr [ebx + 0x721c], 0 */ W32((u32)(r_ebx+0x721cu), 0x0u);
L_007a5210:; BB(0x007a5210);
    /* 007a5210: movsx ecx, word ptr [ebx + ebp*2 + 0x5016] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+r_ebp*2+0x5016u));
    /* 007a5218: lea esi, [ebp + ebp] */ r_esi = (u32)(r_ebp+r_ebp);
    /* 007a521c: cmp ecx, 0x1000 */ {  u32 a = r_ecx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a5222: je 0x7a57b7 */ if (fZ) goto L_007a57b7;
L_007a5228:; BB(0x007a5228);
    /* 007a5228: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007a522a: jmp 0x7a522e */ goto L_007a522e;
L_007a522c:; BB(0x007a522c);
    /* 007a522c: mov ebp, ecx */ r_ebp = r_ecx;
L_007a522e:; BB(0x007a522e);
    /* 007a522e: movzx ecx, byte ptr [edx + 1] */ r_ecx = (u32)R8((u32)(r_edx+0x1u));
    /* 007a5232: movzx edi, byte ptr [ebx + ebp + 1] */ r_edi = (u32)R8((u32)(r_ebx+r_ebp+0x1u));
    /* 007a5237: mov esi, 1 */ r_esi = 0x1u;
    /* 007a523c: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a523e: jne 0x7a538d */ if (!fZ) goto L_007a538d;
L_007a5244:; BB(0x007a5244);
    /* 007a5244: movzx ecx, byte ptr [edx + 2] */ r_ecx = (u32)R8((u32)(r_edx+0x2u));
    /* 007a5248: movzx edi, byte ptr [ebp + ebx + 2] */ r_edi = (u32)R8((u32)(r_ebp+r_ebx+0x2u));
    /* 007a524d: mov esi, 2 */ r_esi = 0x2u;
    /* 007a5252: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a5254: jne 0x7a538d */ if (!fZ) goto L_007a538d;
L_007a525a:; BB(0x007a525a);
    /* 007a525a: movzx ecx, byte ptr [edx + 3] */ r_ecx = (u32)R8((u32)(r_edx+0x3u));
    /* 007a525e: movzx edi, byte ptr [ebp + ebx + 3] */ r_edi = (u32)R8((u32)(r_ebp+r_ebx+0x3u));
    /* 007a5263: mov esi, 3 */ r_esi = 0x3u;
    /* 007a5268: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a526a: jne 0x7a538d */ if (!fZ) goto L_007a538d;
L_007a5270:; BB(0x007a5270);
    /* 007a5270: movzx ecx, byte ptr [edx + 4] */ r_ecx = (u32)R8((u32)(r_edx+0x4u));
    /* 007a5274: movzx edi, byte ptr [ebp + ebx + 4] */ r_edi = (u32)R8((u32)(r_ebp+r_ebx+0x4u));
    /* 007a5279: mov esi, 4 */ r_esi = 0x4u;
    /* 007a527e: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a5280: jne 0x7a538d */ if (!fZ) goto L_007a538d;
L_007a5286:; BB(0x007a5286);
    /* 007a5286: movzx ecx, byte ptr [edx + 5] */ r_ecx = (u32)R8((u32)(r_edx+0x5u));
    /* 007a528a: movzx edi, byte ptr [ebp + ebx + 5] */ r_edi = (u32)R8((u32)(r_ebp+r_ebx+0x5u));
    /* 007a528f: mov esi, 5 */ r_esi = 0x5u;
    /* 007a5294: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a5296: jne 0x7a538d */ if (!fZ) goto L_007a538d;
L_007a529c:; BB(0x007a529c);
    /* 007a529c: movzx ecx, byte ptr [edx + 6] */ r_ecx = (u32)R8((u32)(r_edx+0x6u));
    /* 007a52a0: movzx edi, byte ptr [ebp + ebx + 6] */ r_edi = (u32)R8((u32)(r_ebp+r_ebx+0x6u));
    /* 007a52a5: mov esi, 6 */ r_esi = 0x6u;
    /* 007a52aa: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a52ac: jne 0x7a538d */ if (!fZ) goto L_007a538d;
L_007a52b2:; BB(0x007a52b2);
    /* 007a52b2: movzx ecx, byte ptr [edx + 7] */ r_ecx = (u32)R8((u32)(r_edx+0x7u));
    /* 007a52b6: movzx edi, byte ptr [ebp + ebx + 7] */ r_edi = (u32)R8((u32)(r_ebp+r_ebx+0x7u));
    /* 007a52bb: mov esi, 7 */ r_esi = 0x7u;
    /* 007a52c0: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a52c2: jne 0x7a538d */ if (!fZ) goto L_007a538d;
L_007a52c8:; BB(0x007a52c8);
    /* 007a52c8: movzx ecx, byte ptr [edx + 8] */ r_ecx = (u32)R8((u32)(r_edx+0x8u));
    /* 007a52cc: movzx edi, byte ptr [ebp + ebx + 8] */ r_edi = (u32)R8((u32)(r_ebp+r_ebx+0x8u));
    /* 007a52d1: mov esi, 8 */ r_esi = 0x8u;
    /* 007a52d6: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a52d8: jne 0x7a538d */ if (!fZ) goto L_007a538d;
L_007a52de:; BB(0x007a52de);
    /* 007a52de: movzx ecx, byte ptr [edx + 9] */ r_ecx = (u32)R8((u32)(r_edx+0x9u));
    /* 007a52e2: movzx edi, byte ptr [ebp + ebx + 9] */ r_edi = (u32)R8((u32)(r_ebp+r_ebx+0x9u));
    /* 007a52e7: mov esi, 9 */ r_esi = 0x9u;
    /* 007a52ec: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a52ee: jne 0x7a538d */ if (!fZ) goto L_007a538d;
L_007a52f4:; BB(0x007a52f4);
    /* 007a52f4: movzx ecx, byte ptr [edx + 0xa] */ r_ecx = (u32)R8((u32)(r_edx+0xau));
    /* 007a52f8: movzx edi, byte ptr [ebp + ebx + 0xa] */ r_edi = (u32)R8((u32)(r_ebp+r_ebx+0xau));
    /* 007a52fd: mov esi, 0xa */ r_esi = 0xau;
    /* 007a5302: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a5304: jne 0x7a538d */ if (!fZ) goto L_007a538d;
L_007a530a:; BB(0x007a530a);
    /* 007a530a: movzx ecx, byte ptr [edx + 0xb] */ r_ecx = (u32)R8((u32)(r_edx+0xbu));
    /* 007a530e: movzx edi, byte ptr [ebp + ebx + 0xb] */ r_edi = (u32)R8((u32)(r_ebp+r_ebx+0xbu));
    /* 007a5313: mov esi, 0xb */ r_esi = 0xbu;
    /* 007a5318: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a531a: jne 0x7a538d */ if (!fZ) goto L_007a538d;
L_007a531c:; BB(0x007a531c);
    /* 007a531c: movzx ecx, byte ptr [edx + 0xc] */ r_ecx = (u32)R8((u32)(r_edx+0xcu));
    /* 007a5320: movzx edi, byte ptr [ebp + ebx + 0xc] */ r_edi = (u32)R8((u32)(r_ebp+r_ebx+0xcu));
    /* 007a5325: mov esi, 0xc */ r_esi = 0xcu;
    /* 007a532a: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a532c: jne 0x7a538d */ if (!fZ) goto L_007a538d;
L_007a532e:; BB(0x007a532e);
    /* 007a532e: movzx ecx, byte ptr [edx + 0xd] */ r_ecx = (u32)R8((u32)(r_edx+0xdu));
    /* 007a5332: movzx edi, byte ptr [ebp + ebx + 0xd] */ r_edi = (u32)R8((u32)(r_ebp+r_ebx+0xdu));
    /* 007a5337: mov esi, 0xd */ r_esi = 0xdu;
    /* 007a533c: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a533e: jne 0x7a538d */ if (!fZ) goto L_007a538d;
L_007a5340:; BB(0x007a5340);
    /* 007a5340: movzx ecx, byte ptr [edx + 0xe] */ r_ecx = (u32)R8((u32)(r_edx+0xeu));
    /* 007a5344: movzx edi, byte ptr [ebp + ebx + 0xe] */ r_edi = (u32)R8((u32)(r_ebp+r_ebx+0xeu));
    /* 007a5349: mov esi, 0xe */ r_esi = 0xeu;
    /* 007a534e: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a5350: jne 0x7a538d */ if (!fZ) goto L_007a538d;
L_007a5352:; BB(0x007a5352);
    /* 007a5352: movzx ecx, byte ptr [edx + 0xf] */ r_ecx = (u32)R8((u32)(r_edx+0xfu));
    /* 007a5356: movzx edi, byte ptr [ebp + ebx + 0xf] */ r_edi = (u32)R8((u32)(r_ebp+r_ebx+0xfu));
    /* 007a535b: mov esi, 0xf */ r_esi = 0xfu;
    /* 007a5360: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a5362: jne 0x7a538d */ if (!fZ) goto L_007a538d;
L_007a5364:; BB(0x007a5364);
    /* 007a5364: movzx ecx, byte ptr [edx + 0x10] */ r_ecx = (u32)R8((u32)(r_edx+0x10u));
    /* 007a5368: movzx edi, byte ptr [ebp + ebx + 0x10] */ r_edi = (u32)R8((u32)(r_ebp+r_ebx+0x10u));
    /* 007a536d: mov esi, 0x10 */ r_esi = 0x10u;
    /* 007a5372: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a5374: jne 0x7a538d */ if (!fZ) goto L_007a538d;
L_007a5376:; BB(0x007a5376);
    /* 007a5376: movzx ecx, byte ptr [edx + 0x11] */ r_ecx = (u32)R8((u32)(r_edx+0x11u));
    /* 007a537a: movzx edi, byte ptr [ebp + ebx + 0x11] */ r_edi = (u32)R8((u32)(r_ebp+r_ebx+0x11u));
    /* 007a537f: mov esi, 0x11 */ r_esi = 0x11u;
    /* 007a5384: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 007a5386: jne 0x7a538d */ if (!fZ) goto L_007a538d;
L_007a5388:; BB(0x007a5388);
    /* 007a5388: mov esi, 0x12 */ r_esi = 0x12u;
L_007a538d:; BB(0x007a538d);
    /* 007a538d: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a538f: jle 0x7a53a8 */ if ((fZ||fS!=fO)) goto L_007a53a8;
L_007a5391:; BB(0x007a5391);
    /* 007a5391: mov dword ptr [ebx + 0x7218], ebp */ W32((u32)(r_ebx+0x7218u), r_ebp);
    /* 007a5397: mov eax, esi */ r_eax = r_esi;
    /* 007a5399: mov dword ptr [ebx + 0x721c], esi */ W32((u32)(r_ebx+0x721cu), r_esi);
    /* 007a539f: cmp esi, 0x12 */ {  u32 a = r_esi; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a53a2: jge 0x7a56e4 */ if ((fS==fO)) goto L_007a56e4;
L_007a53a8:; BB(0x007a53a8);
    /* 007a53a8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a53aa: jge 0x7a5210 */ if ((fS==fO)) goto L_007a5210;
L_007a53b0:; BB(0x007a53b0);
    /* 007a53b0: jmp 0x7a5782 */ goto L_007a5782;
L_007a53b5:; BB(0x007a53b5);
    /* 007a53b5: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 007a53b9: movsx edi, word ptr [ebx + edx*2 + 0x1012] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+r_edx*2+0x1012u));
    /* 007a53c1: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 007a53c4: cmp edi, 0x1000 */ {  u32 a = r_edi; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a53ca: je 0x7a54d8 */ if (fZ) goto L_007a54d8;
L_007a53d0:; BB(0x007a53d0);
    /* 007a53d0: movsx edx, word ptr [ebx + esi + 0x5016] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi+0x5016u));
    /* 007a53d8: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a53de: je 0x7a58ea */ if (fZ) goto L_007a58ea;
L_007a53e4:; BB(0x007a53e4);
    /* 007a53e4: movsx ebp, word ptr [ebx + esi + 0x3014] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi+0x3014u));
    /* 007a53ec: cmp ebp, 0x1000 */ {  u32 a = r_ebp; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a53f2: je 0x7a58de */ if (fZ) goto L_007a58de;
L_007a53f8:; BB(0x007a53f8);
    /* 007a53f8: movsx ecx, word ptr [ebx + ebp*2 + 0x5016] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+r_ebp*2+0x5016u));
    /* 007a5400: cmp ecx, 0x1000 */ {  u32 a = r_ecx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a5406: je 0x7a58d3 */ if (fZ) goto L_007a58d3;
L_007a540c:; BB(0x007a540c);
    /* 007a540c: movsx edx, word ptr [ebx + ebp*2 + 0x5016] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+r_ebp*2+0x5016u));
L_007a5414:; BB(0x007a5414);
    /* 007a5414: mov ebp, edx */ r_ebp = r_edx;
    /* 007a5416: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a5418: lea ecx, [ebx + edx] */ r_ecx = (u32)(r_ebx+r_edx);
    /* 007a541b: movsx edx, word ptr [ecx + 0x5016] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x5016u));
    /* 007a5422: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a5428: jne 0x7a5414 */ if (!fZ) goto L_007a5414;
L_007a542a:; BB(0x007a542a);
    /* 007a542a: movsx edi, word ptr [ecx + 0x1012] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0x1012u));
    /* 007a5431: movzx edx, word ptr [ecx + 0x3014] */ r_edx = (u32)R16((u32)(r_ecx+0x3014u));
    /* 007a5438: mov word ptr [ebx + edi*2 + 0x5016], dx */ W16((u32)(r_ebx+r_edi*2+0x5016u), (u16)r_edx);
    /* 007a5440: movsx edi, word ptr [ecx + 0x3014] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ecx+0x3014u));
    /* 007a5447: movzx edx, word ptr [ecx + 0x1012] */ r_edx = (u32)R16((u32)(r_ecx+0x1012u));
    /* 007a544e: mov word ptr [ebx + edi*2 + 0x1012], dx */ W16((u32)(r_ebx+r_edi*2+0x1012u), (u16)r_edx);
    /* 007a5456: movzx edx, word ptr [ebx + esi + 0x3014] */ r_edx = (u32)R16((u32)(r_ebx+r_esi+0x3014u));
    /* 007a545e: mov word ptr [ecx + 0x3014], dx */ W16((u32)(r_ecx+0x3014u), (u16)r_edx);
    /* 007a5465: movsx edx, word ptr [ebx + esi + 0x3014] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi+0x3014u));
    /* 007a546d: mov word ptr [ebx + edx*2 + 0x1012], bp */ W16((u32)(r_ebx+r_edx*2+0x1012u), (u16)r_ebp);
    /* 007a5475: movsx edx, word ptr [ebx + esi + 0x5016] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi+0x5016u));
L_007a547d:; BB(0x007a547d);
    /* 007a547d: mov word ptr [ecx + 0x5016], dx */ W16((u32)(r_ecx+0x5016u), (u16)r_edx);
    /* 007a5484: movsx edx, word ptr [ebx + esi + 0x5016] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi+0x5016u));
    /* 007a548c: mov word ptr [ebx + edx*2 + 0x1012], bp */ W16((u32)(r_ebx+r_edx*2+0x1012u), (u16)r_ebp);
    /* 007a5494: movsx edi, word ptr [ebx + esi + 0x1012] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi+0x1012u));
L_007a549c:; BB(0x007a549c);
    /* 007a549c: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 007a54a0: mov word ptr [ecx + 0x1012], di */ W16((u32)(r_ecx+0x1012u), (u16)r_edi);
    /* 007a54a7: movsx ecx, word ptr [ebx + esi + 0x1012] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi+0x1012u));
    /* 007a54af: cmp dx, word ptr [ebx + ecx*2 + 0x5016] */ {  u32 a = (u16)r_edx; u32 b = R16((u32)(r_ebx+r_ecx*2+0x5016u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 007a54b7: jne 0x7a54c3 */ if (!fZ) goto L_007a54c3;
L_007a54b9:; BB(0x007a54b9);
    /* 007a54b9: mov word ptr [ebx + ecx*2 + 0x5016], bp */ W16((u32)(r_ebx+r_ecx*2+0x5016u), (u16)r_ebp);
    /* 007a54c1: jmp 0x7a54cb */ goto L_007a54cb;
L_007a54c3:; BB(0x007a54c3);
    /* 007a54c3: mov word ptr [ebx + ecx*2 + 0x3014], bp */ W16((u32)(r_ebx+r_ecx*2+0x3014u), (u16)r_ebp);
L_007a54cb:; BB(0x007a54cb);
    /* 007a54cb: mov edx, 0x1000 */ r_edx = 0x1000u;
    /* 007a54d0: mov word ptr [ebx + esi + 0x1012], dx */ W16((u32)(r_ebx+r_esi+0x1012u), (u16)r_edx);
L_007a54d8:; BB(0x007a54d8);
    /* 007a54d8: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 007a54dc: mov byte ptr [edx + ebx], al */ W8((u32)(r_edx+r_ebx), (u8)r_eax);
    /* 007a54df: cmp edx, 0x11 */ {  u32 a = r_edx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a54e2: jge 0x7a54eb */ if ((fS==fO)) goto L_007a54eb;
L_007a54e4:; BB(0x007a54e4);
    /* 007a54e4: mov byte ptr [edx + ebx + 0x1000], al */ W8((u32)(r_edx+r_ebx+0x1000u), (u8)r_eax);
L_007a54eb:; BB(0x007a54eb);
    /* 007a54eb: mov ebp, edx */ r_ebp = r_edx;
    /* 007a54ed: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 007a54f1: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007a54f4: and ebp, 0xfff */ {  u32 a = r_ebp; u32 b = 0xfffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 007a54fa: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a54fd: and ecx, 0xfff */ {  u32 a = r_ecx; u32 b = 0xfffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 007a5503: mov dword ptr [esp + 0x18], ebp */ W32((u32)(r_esp+0x18u), r_ebp);
    /* 007a5507: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 007a550b: lea ebp, [ebx + ecx] */ r_ebp = (u32)(r_ebx+r_ecx);
    /* 007a550e: movzx esi, byte ptr [ebp] */ r_esi = (u32)R8((u32)(r_ebp));
    /* 007a5512: add esi, 0x1001 */ {  u32 a = r_esi; u32 b = 0x1001u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007a5518: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 007a551b: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 007a551f: mov edx, 0x1000 */ r_edx = 0x1000u;
    /* 007a5524: mov word ptr [ebx + ecx*2 + 0x3014], dx */ W16((u32)(r_ebx+r_ecx*2+0x3014u), (u16)r_edx);
    /* 007a552c: mov word ptr [ebx + ecx*2 + 0x5016], dx */ W16((u32)(r_ebx+r_ecx*2+0x5016u), (u16)r_edx);
    /* 007a5534: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 007a5536: mov dword ptr [ebx + 0x721c], 0 */ W32((u32)(r_ebx+0x721cu), 0x0u);
L_007a5540:; BB(0x007a5540);
    /* 007a5540: movsx edx, word ptr [ebx + esi*2 + 0x5016] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi*2+0x5016u));
    /* 007a5548: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 007a554b: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a5551: je 0x7a58b9 */ if (fZ) goto L_007a58b9;
L_007a5557:; BB(0x007a5557);
    /* 007a5557: mov esi, edx */ r_esi = r_edx;
    /* 007a5559: jmp 0x7a555d */ goto L_007a555d;
L_007a555b:; BB(0x007a555b);
    /* 007a555b: mov esi, edx */ r_esi = r_edx;
L_007a555d:; BB(0x007a555d);
    /* 007a555d: movzx eax, byte ptr [ebp + 1] */ r_eax = (u32)R8((u32)(r_ebp+0x1u));
    /* 007a5561: movzx edi, byte ptr [ebx + esi + 1] */ r_edi = (u32)R8((u32)(r_ebx+r_esi+0x1u));
    /* 007a5566: mov edx, 1 */ r_edx = 0x1u;
    /* 007a556b: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 007a556d: jne 0x7a56bc */ if (!fZ) goto L_007a56bc;
L_007a5573:; BB(0x007a5573);
    /* 007a5573: movzx eax, byte ptr [ebp + 2] */ r_eax = (u32)R8((u32)(r_ebp+0x2u));
    /* 007a5577: movzx edi, byte ptr [esi + ebx + 2] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0x2u));
    /* 007a557c: mov edx, 2 */ r_edx = 0x2u;
    /* 007a5581: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 007a5583: jne 0x7a56bc */ if (!fZ) goto L_007a56bc;
L_007a5589:; BB(0x007a5589);
    /* 007a5589: movzx eax, byte ptr [ebp + 3] */ r_eax = (u32)R8((u32)(r_ebp+0x3u));
    /* 007a558d: movzx edi, byte ptr [esi + ebx + 3] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0x3u));
    /* 007a5592: mov edx, 3 */ r_edx = 0x3u;
    /* 007a5597: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 007a5599: jne 0x7a56bc */ if (!fZ) goto L_007a56bc;
L_007a559f:; BB(0x007a559f);
    /* 007a559f: movzx eax, byte ptr [ebp + 4] */ r_eax = (u32)R8((u32)(r_ebp+0x4u));
    /* 007a55a3: movzx edi, byte ptr [esi + ebx + 4] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0x4u));
    /* 007a55a8: mov edx, 4 */ r_edx = 0x4u;
    /* 007a55ad: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 007a55af: jne 0x7a56bc */ if (!fZ) goto L_007a56bc;
L_007a55b5:; BB(0x007a55b5);
    /* 007a55b5: movzx eax, byte ptr [ebp + 5] */ r_eax = (u32)R8((u32)(r_ebp+0x5u));
    /* 007a55b9: movzx edi, byte ptr [esi + ebx + 5] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0x5u));
    /* 007a55be: mov edx, 5 */ r_edx = 0x5u;
    /* 007a55c3: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 007a55c5: jne 0x7a56bc */ if (!fZ) goto L_007a56bc;
L_007a55cb:; BB(0x007a55cb);
    /* 007a55cb: movzx eax, byte ptr [ebp + 6] */ r_eax = (u32)R8((u32)(r_ebp+0x6u));
    /* 007a55cf: movzx edi, byte ptr [esi + ebx + 6] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0x6u));
    /* 007a55d4: mov edx, 6 */ r_edx = 0x6u;
    /* 007a55d9: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 007a55db: jne 0x7a56bc */ if (!fZ) goto L_007a56bc;
L_007a55e1:; BB(0x007a55e1);
    /* 007a55e1: movzx eax, byte ptr [ebp + 7] */ r_eax = (u32)R8((u32)(r_ebp+0x7u));
    /* 007a55e5: movzx edi, byte ptr [esi + ebx + 7] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0x7u));
    /* 007a55ea: mov edx, 7 */ r_edx = 0x7u;
    /* 007a55ef: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 007a55f1: jne 0x7a56bc */ if (!fZ) goto L_007a56bc;
L_007a55f7:; BB(0x007a55f7);
    /* 007a55f7: movzx eax, byte ptr [ebp + 8] */ r_eax = (u32)R8((u32)(r_ebp+0x8u));
    /* 007a55fb: movzx edi, byte ptr [esi + ebx + 8] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0x8u));
    /* 007a5600: mov edx, 8 */ r_edx = 0x8u;
    /* 007a5605: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 007a5607: jne 0x7a56bc */ if (!fZ) goto L_007a56bc;
L_007a560d:; BB(0x007a560d);
    /* 007a560d: movzx eax, byte ptr [ebp + 9] */ r_eax = (u32)R8((u32)(r_ebp+0x9u));
    /* 007a5611: movzx edi, byte ptr [esi + ebx + 9] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0x9u));
    /* 007a5616: mov edx, 9 */ r_edx = 0x9u;
    /* 007a561b: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 007a561d: jne 0x7a56bc */ if (!fZ) goto L_007a56bc;
L_007a5623:; BB(0x007a5623);
    /* 007a5623: movzx eax, byte ptr [ebp + 0xa] */ r_eax = (u32)R8((u32)(r_ebp+0xau));
    /* 007a5627: movzx edi, byte ptr [esi + ebx + 0xa] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0xau));
    /* 007a562c: mov edx, 0xa */ r_edx = 0xau;
    /* 007a5631: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 007a5633: jne 0x7a56bc */ if (!fZ) goto L_007a56bc;
L_007a5639:; BB(0x007a5639);
    /* 007a5639: movzx eax, byte ptr [ebp + 0xb] */ r_eax = (u32)R8((u32)(r_ebp+0xbu));
    /* 007a563d: movzx edi, byte ptr [esi + ebx + 0xb] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0xbu));
    /* 007a5642: mov edx, 0xb */ r_edx = 0xbu;
    /* 007a5647: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 007a5649: jne 0x7a56bc */ if (!fZ) goto L_007a56bc;
L_007a564b:; BB(0x007a564b);
    /* 007a564b: movzx eax, byte ptr [ebp + 0xc] */ r_eax = (u32)R8((u32)(r_ebp+0xcu));
    /* 007a564f: movzx edi, byte ptr [esi + ebx + 0xc] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0xcu));
    /* 007a5654: mov edx, 0xc */ r_edx = 0xcu;
    /* 007a5659: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 007a565b: jne 0x7a56bc */ if (!fZ) goto L_007a56bc;
L_007a565d:; BB(0x007a565d);
    /* 007a565d: movzx eax, byte ptr [ebp + 0xd] */ r_eax = (u32)R8((u32)(r_ebp+0xdu));
    /* 007a5661: movzx edi, byte ptr [esi + ebx + 0xd] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0xdu));
    /* 007a5666: mov edx, 0xd */ r_edx = 0xdu;
    /* 007a566b: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 007a566d: jne 0x7a56bc */ if (!fZ) goto L_007a56bc;
L_007a566f:; BB(0x007a566f);
    /* 007a566f: movzx eax, byte ptr [ebp + 0xe] */ r_eax = (u32)R8((u32)(r_ebp+0xeu));
    /* 007a5673: movzx edi, byte ptr [esi + ebx + 0xe] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0xeu));
    /* 007a5678: mov edx, 0xe */ r_edx = 0xeu;
    /* 007a567d: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 007a567f: jne 0x7a56bc */ if (!fZ) goto L_007a56bc;
L_007a5681:; BB(0x007a5681);
    /* 007a5681: movzx eax, byte ptr [ebp + 0xf] */ r_eax = (u32)R8((u32)(r_ebp+0xfu));
    /* 007a5685: movzx edi, byte ptr [esi + ebx + 0xf] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0xfu));
    /* 007a568a: mov edx, 0xf */ r_edx = 0xfu;
    /* 007a568f: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 007a5691: jne 0x7a56bc */ if (!fZ) goto L_007a56bc;
L_007a5693:; BB(0x007a5693);
    /* 007a5693: movzx eax, byte ptr [ebp + 0x10] */ r_eax = (u32)R8((u32)(r_ebp+0x10u));
    /* 007a5697: movzx edi, byte ptr [esi + ebx + 0x10] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0x10u));
    /* 007a569c: mov edx, 0x10 */ r_edx = 0x10u;
    /* 007a56a1: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 007a56a3: jne 0x7a56bc */ if (!fZ) goto L_007a56bc;
L_007a56a5:; BB(0x007a56a5);
    /* 007a56a5: movzx eax, byte ptr [ebp + 0x11] */ r_eax = (u32)R8((u32)(r_ebp+0x11u));
    /* 007a56a9: movzx edi, byte ptr [esi + ebx + 0x11] */ r_edi = (u32)R8((u32)(r_esi+r_ebx+0x11u));
    /* 007a56ae: mov edx, 0x11 */ r_edx = 0x11u;
    /* 007a56b3: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 007a56b5: jne 0x7a56bc */ if (!fZ) goto L_007a56bc;
L_007a56b7:; BB(0x007a56b7);
    /* 007a56b7: mov edx, 0x12 */ r_edx = 0x12u;
L_007a56bc:; BB(0x007a56bc);
    /* 007a56bc: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a56be: jle 0x7a56d7 */ if ((fZ||fS!=fO)) goto L_007a56d7;
L_007a56c0:; BB(0x007a56c0);
    /* 007a56c0: mov dword ptr [ebx + 0x7218], esi */ W32((u32)(r_ebx+0x7218u), r_esi);
    /* 007a56c6: mov ecx, edx */ r_ecx = r_edx;
    /* 007a56c8: mov dword ptr [ebx + 0x721c], edx */ W32((u32)(r_ebx+0x721cu), r_edx);
    /* 007a56ce: cmp edx, 0x12 */ {  u32 a = r_edx; u32 b = 0x12u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a56d1: jge 0x7a57fe */ if ((fS==fO)) goto L_007a57fe;
L_007a56d7:; BB(0x007a56d7);
    /* 007a56d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007a56d9: jge 0x7a5540 */ if ((fS==fO)) goto L_007a5540;
L_007a56df:; BB(0x007a56df);
    /* 007a56df: jmp 0x7a58fd */ goto L_007a58fd;
L_007a56e4:; BB(0x007a56e4);
    /* 007a56e4: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 007a56e8: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007a56ec: movzx esi, word ptr [ebx + ebp*2 + 0x1012] */ r_esi = (u32)R16((u32)(r_ebx+r_ebp*2+0x1012u));
    /* 007a56f4: mov word ptr [ebx + eax*2 + 0x1012], si */ W16((u32)(r_ebx+r_eax*2+0x1012u), (u16)r_esi);
    /* 007a56fc: movzx edi, word ptr [ebx + ebp*2 + 0x3014] */ r_edi = (u32)R16((u32)(r_ebx+r_ebp*2+0x3014u));
    /* 007a5704: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 007a5708: mov word ptr [ebx + esi + 0x3014], di */ W16((u32)(r_ebx+r_esi+0x3014u), (u16)r_edi);
    /* 007a5710: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 007a5714: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 007a5718: movzx edx, word ptr [ebx + ebp*2 + 0x5016] */ r_edx = (u32)R16((u32)(r_ebx+r_ebp*2+0x5016u));
    /* 007a5720: mov word ptr [ebx + esi + 0x5016], dx */ W16((u32)(r_ebx+r_esi+0x5016u), (u16)r_edx);
    /* 007a5728: movsx edx, word ptr [ebx + ebp*2 + 0x3014] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+r_ebp*2+0x3014u));
    /* 007a5730: mov word ptr [ebx + edx*2 + 0x1012], ax */ W16((u32)(r_ebx+r_edx*2+0x1012u), (u16)r_eax);
    /* 007a5738: movsx edx, word ptr [ebx + ebp*2 + 0x5016] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+r_ebp*2+0x5016u));
    /* 007a5740: mov word ptr [ebx + edx*2 + 0x1012], ax */ W16((u32)(r_ebx+r_edx*2+0x1012u), (u16)r_eax);
    /* 007a5748: movsx edx, word ptr [ebx + ebp*2 + 0x1012] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+r_ebp*2+0x1012u));
    /* 007a5750: cmp bp, word ptr [ebx + edx*2 + 0x5016] */ {  u32 a = (u16)r_ebp; u32 b = R16((u32)(r_ebx+r_edx*2+0x5016u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 007a5758: jne 0x7a5764 */ if (!fZ) goto L_007a5764;
L_007a575a:; BB(0x007a575a);
    /* 007a575a: mov word ptr [ebx + edx*2 + 0x5016], ax */ W16((u32)(r_ebx+r_edx*2+0x5016u), (u16)r_eax);
    /* 007a5762: jmp 0x7a576c */ goto L_007a576c;
L_007a5764:; BB(0x007a5764);
    /* 007a5764: mov word ptr [ebx + edx*2 + 0x3014], ax */ W16((u32)(r_ebx+r_edx*2+0x3014u), (u16)r_eax);
L_007a576c:; BB(0x007a576c);
    /* 007a576c: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 007a5770: mov eax, 0x1000 */ r_eax = 0x1000u;
    /* 007a5775: mov word ptr [ebx + edx + 0x1012], ax */ W16((u32)(r_ebx+r_edx+0x1012u), (u16)r_eax);
    /* 007a577d: jmp 0x7a50bb */ goto L_007a50bb;
L_007a5782:; BB(0x007a5782);
    /* 007a5782: movsx ecx, word ptr [ebx + ebp*2 + 0x3014] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+r_ebp*2+0x3014u));
    /* 007a578a: lea esi, [ebp + ebp] */ r_esi = (u32)(r_ebp+r_ebp);
    /* 007a578e: cmp ecx, 0x1000 */ {  u32 a = r_ecx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a5794: jne 0x7a522c */ if (!fZ) goto L_007a522c;
L_007a579a:; BB(0x007a579a);
    /* 007a579a: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 007a579e: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007a57a2: mov word ptr [ebx + esi + 0x3014], ax */ W16((u32)(r_ebx+r_esi+0x3014u), (u16)r_eax);
    /* 007a57aa: mov word ptr [ebx + eax*2 + 0x1012], bp */ W16((u32)(r_ebx+r_eax*2+0x1012u), (u16)r_ebp);
    /* 007a57b2: jmp 0x7a50bb */ goto L_007a50bb;
L_007a57b7:; BB(0x007a57b7);
    /* 007a57b7: mov ecx, dword ptr [esp + 0x18] */ r_ecx = R32((u32)(r_esp+0x18u));
    /* 007a57bb: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 007a57bf: mov word ptr [ebx + esi + 0x5016], ax */ W16((u32)(r_ebx+r_esi+0x5016u), (u16)r_eax);
    /* 007a57c7: mov word ptr [ebx + eax*2 + 0x1012], bp */ W16((u32)(r_ebx+r_eax*2+0x1012u), (u16)r_ebp);
    /* 007a57cf: jmp 0x7a50bb */ goto L_007a50bb;
L_007a57d4:; BB(0x007a57d4);
    /* 007a57d4: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 007a57d8: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a57da: jmp 0x7a503a */ goto L_007a503a;
L_007a57df:; BB(0x007a57df);
    /* 007a57df: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 007a57e2: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a57e4: mov ebp, eax */ r_ebp = r_eax;
    /* 007a57e6: jmp 0x7a5059 */ goto L_007a5059;
L_007a57eb:; BB(0x007a57eb);
    /* 007a57eb: movsx ebp, word ptr [ebx + esi + 0x3014] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi+0x3014u));
    /* 007a57f3: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 007a57f7: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007a57f9: jmp 0x7a5059 */ goto L_007a5059;
L_007a57fe:; BB(0x007a57fe);
    /* 007a57fe: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 007a5802: movzx edx, word ptr [ebx + esi*2 + 0x1012] */ r_edx = (u32)R16((u32)(r_ebx+r_esi*2+0x1012u));
    /* 007a580a: mov word ptr [ebx + edi + 0x1012], dx */ W16((u32)(r_ebx+r_edi+0x1012u), (u16)r_edx);
    /* 007a5812: movzx ecx, word ptr [ebx + esi*2 + 0x3014] */ r_ecx = (u32)R16((u32)(r_ebx+r_esi*2+0x3014u));
    /* 007a581a: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 007a581d: mov word ptr [ebx + edi + 0x3014], cx */ W16((u32)(r_ebx+r_edi+0x3014u), (u16)r_ecx);
    /* 007a5825: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 007a5829: movzx ebp, word ptr [ebx + esi*2 + 0x5016] */ r_ebp = (u32)R16((u32)(r_ebx+r_esi*2+0x5016u));
    /* 007a5831: mov word ptr [ebx + edi + 0x5016], bp */ W16((u32)(r_ebx+r_edi+0x5016u), (u16)r_ebp);
    /* 007a5839: movsx edx, word ptr [ebx + esi*2 + 0x3014] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi*2+0x3014u));
    /* 007a5841: mov word ptr [ebx + edx*2 + 0x1012], cx */ W16((u32)(r_ebx+r_edx*2+0x1012u), (u16)r_ecx);
    /* 007a5849: movsx edx, word ptr [ebx + esi*2 + 0x5016] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi*2+0x5016u));
    /* 007a5851: mov word ptr [ebx + edx*2 + 0x1012], cx */ W16((u32)(r_ebx+r_edx*2+0x1012u), (u16)r_ecx);
    /* 007a5859: movsx ecx, word ptr [ebx + esi*2 + 0x1012] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi*2+0x1012u));
    /* 007a5861: cmp si, word ptr [ebx + ecx*2 + 0x5016] */ {  u32 a = (u16)r_esi; u32 b = R16((u32)(r_ebx+r_ecx*2+0x5016u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 007a5869: jne 0x7a5879 */ if (!fZ) goto L_007a5879;
L_007a586b:; BB(0x007a586b);
    /* 007a586b: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 007a586f: mov word ptr [ebx + ecx*2 + 0x5016], dx */ W16((u32)(r_ebx+r_ecx*2+0x5016u), (u16)r_edx);
    /* 007a5877: jmp 0x7a5885 */ goto L_007a5885;
L_007a5879:; BB(0x007a5879);
    /* 007a5879: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 007a587d: mov word ptr [ebx + ecx*2 + 0x3014], dx */ W16((u32)(r_ebx+r_ecx*2+0x3014u), (u16)r_edx);
L_007a5885:; BB(0x007a5885);
    /* 007a5885: mov edx, 0x1000 */ r_edx = 0x1000u;
    /* 007a588a: mov word ptr [ebx + eax + 0x1012], dx */ W16((u32)(r_ebx+r_eax+0x1012u), (u16)r_edx);
L_007a5892:; BB(0x007a5892);
    /* 007a5892: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 007a5896: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 007a589a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 007a589d: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 007a58a1: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007a58a3: jl 0x7a4f2d */ if ((fS!=fO)) goto L_007a4f2d;
L_007a58a9:; BB(0x007a58a9);
    /* 007a58a9: mov esi, eax */ r_esi = r_eax;
    /* 007a58ab: mov ecx, edx */ r_ecx = r_edx;
    /* 007a58ad: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 007a58b1: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 007a58b4: jmp 0x7a4f5a */ goto L_007a4f5a;
L_007a58b9:; BB(0x007a58b9);
    /* 007a58b9: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 007a58bd: mov word ptr [ebx + eax + 0x5016], dx */ W16((u32)(r_ebx+r_eax+0x5016u), (u16)r_edx);
    /* 007a58c5: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 007a58c9: mov word ptr [ebx + eax + 0x1012], si */ W16((u32)(r_ebx+r_eax+0x1012u), (u16)r_esi);
    /* 007a58d1: jmp 0x7a5892 */ goto L_007a5892;
L_007a58d3:; BB(0x007a58d3);
    /* 007a58d3: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 007a58d7: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a58d9: jmp 0x7a547d */ goto L_007a547d;
L_007a58de:; BB(0x007a58de);
    /* 007a58de: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 007a58e1: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a58e3: mov ebp, edx */ r_ebp = r_edx;
    /* 007a58e5: jmp 0x7a549c */ goto L_007a549c;
L_007a58ea:; BB(0x007a58ea);
    /* 007a58ea: movsx ebp, word ptr [ebx + esi + 0x3014] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi+0x3014u));
    /* 007a58f2: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 007a58f6: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007a58f8: jmp 0x7a549c */ goto L_007a549c;
L_007a58fd:; BB(0x007a58fd);
    /* 007a58fd: movsx edx, word ptr [ebx + esi*2 + 0x3014] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi*2+0x3014u));
    /* 007a5905: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 007a5908: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a590e: jne 0x7a555b */ if (!fZ) goto L_007a555b;
L_007a5914:; BB(0x007a5914);
    /* 007a5914: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 007a5918: mov word ptr [ebx + eax + 0x3014], dx */ W16((u32)(r_ebx+r_eax+0x3014u), (u16)r_edx);
    /* 007a5920: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 007a5924: mov word ptr [ebx + eax + 0x1012], si */ W16((u32)(r_ebx+r_eax+0x1012u), (u16)r_esi);
    /* 007a592c: jmp 0x7a5892 */ goto L_007a5892;
L_007a5931:; BB(0x007a5931);
    /* 007a5931: movsx ecx, word ptr [ebx + esi*2 + 0x3014] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi*2+0x3014u));
    /* 007a5939: lea edi, [esi + esi] */ r_edi = (u32)(r_esi+r_esi);
    /* 007a593c: cmp ecx, 0x1000 */ {  u32 a = r_ecx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a5942: jne 0x7a4bba */ if (!fZ) goto L_007a4bba;
L_007a5948:; BB(0x007a5948);
    /* 007a5948: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007a594c: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 007a594f: mov eax, 0xfee */ r_eax = 0xfeeu;
    /* 007a5954: mov word ptr [ebx + edi + 0x3014], ax */ W16((u32)(r_ebx+r_edi+0x3014u), (u16)r_eax);
    /* 007a595c: mov word ptr [ebx + 0x2fee], si */ W16((u32)(r_ebx+0x2feeu), (u16)r_esi);
    /* 007a5963: jmp 0x7a4dd6 */ goto L_007a4dd6;
L_007a5968:; BB(0x007a5968);
    /* 007a5968: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 007a596c: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 007a596f: mov eax, 0xfee */ r_eax = 0xfeeu;
    /* 007a5974: mov word ptr [ebx + edi + 0x5016], ax */ W16((u32)(r_ebx+r_edi+0x5016u), (u16)r_eax);
    /* 007a597c: mov word ptr [ebx + 0x2fee], si */ W16((u32)(r_ebx+0x2feeu), (u16)r_esi);
    /* 007a5983: jmp 0x7a4dd6 */ goto L_007a4dd6;
L_007a5988:; BB(0x007a5988);
    /* 007a5988: movsx ecx, word ptr [ebx + eax*2 + 0x3014] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+r_eax*2+0x3014u));
    /* 007a5990: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 007a5993: cmp ecx, 0x1000 */ {  u32 a = r_ecx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007a5999: jne 0x7a48fb */ if (!fZ) goto L_007a48fb;
L_007a599f:; BB(0x007a599f);
    /* 007a599f: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 007a59a3: mov word ptr [ebx + edx + 0x3014], di */ W16((u32)(r_ebx+r_edx+0x3014u), (u16)r_edi);
    /* 007a59ab: mov word ptr [ebx + esi*2 + 0x2fee], ax */ W16((u32)(r_ebx+r_esi*2+0x2feeu), (u16)r_eax);
    /* 007a59b3: jmp 0x7a4b53 */ goto L_007a4b53;
L_007a59b8:; BB(0x007a59b8);
    /* 007a59b8: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 007a59bc: mov word ptr [ebx + edx + 0x5016], di */ W16((u32)(r_ebx+r_edx+0x5016u), (u16)r_edi);
    /* 007a59c4: mov word ptr [ebx + esi*2 + 0x2fee], ax */ W16((u32)(r_ebx+r_esi*2+0x2feeu), (u16)r_eax);
    /* 007a59cc: jmp 0x7a4b53 */ goto L_007a4b53;
}

