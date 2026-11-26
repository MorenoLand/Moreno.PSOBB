#include "protos.h"

void f_005f4038(void) /* sub_5F4038 */
{
    FN_ENTER(0x005f4038);
    /* 005f4038: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4039: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f403b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f403f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f4043: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f4045: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f404au); f_005e959c();
    /* 005f404a: mov dword ptr [ebp], 0xb15e40 */ W32((u32)(r_ebp), 0xb15e40u);
    /* 005f4051: mov eax, ebp */ r_eax = r_ebp;
    /* 005f4053: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4054: ret 8 */ FN_RET(0x005f4038); r_esp += 12; return;
}

void f_005f4058(void) /* sub_5F4058 */
{
    FN_ENTER(0x005f4058);
    /* 005f4058: mov dword ptr [0xa8dfa0], 0x3f800000 */ W32((u32)(0xa8dfa0u), 0x3f800000u);
    /* 005f4062: mov dword ptr [0xa8dfa4], 0x41000000 */ W32((u32)(0xa8dfa4u), 0x41000000u);
    /* 005f406c: mov dword ptr [0xa8dfa8], 0x3fc00000 */ W32((u32)(0xa8dfa8u), 0x3fc00000u);
    /* 005f4076: ret  */ FN_RET(0x005f4058); r_esp += 4; return;
}

void f_005f4078(void) /* sub_5F4078 */
{
    FN_ENTER(0x005f4078);
    /* 005f4078: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4079: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f407b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f407d: call 0x5f409c */ r_esp -= 4; W32(r_esp, 0x5f4082u); f_005f409c();
    /* 005f4082: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f4086: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f4088: jne 0x5f408e */ if (!fZ) goto L_005f408e;
L_005f408a:; BB(0x005f408a);
    /* 005f408a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f408b: ret 4 */ FN_RET(0x005f4078); r_esp += 8; return;
L_005f408e:; BB(0x005f408e);
    /* 005f408e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f408f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f4094u); f_005c2f74();
    /* 005f4094: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f4095: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f4096: ret 4 */ FN_RET(0x005f4078); r_esp += 8; return;
}

void f_005f409c(void) /* sub_5F409C */
{
    FN_ENTER(0x005f409c);
    /* 005f409c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f409d: mov ebp, esp */ r_ebp = r_esp;
    /* 005f409f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f40a1: push 0x8dd18c */ { u32 v = 0x8dd18cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f40a6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f40ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f40ad: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f40b4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f40b7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f40ba: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f40bd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f40c0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f40c3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f40c6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f40c9: mov dword ptr [ecx], 0xb15fa0 */ W32((u32)(r_ecx), 0xb15fa0u);
    /* 005f40cf: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f40d6: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f40dbu); f_005e61c8();
    /* 005f40db: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f40de: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f40e5: mov esp, ebp */ r_esp = r_ebp;
    /* 005f40e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f40e8: ret  */ FN_RET(0x005f409c); r_esp += 4; return;
}

void f_005f40ec(void) /* sub_5F40EC */
{
    FN_ENTER(0x005f40ec);
    /* 005f40ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f40ed: sub esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f40f0: mov esi, ecx */ r_esi = r_ecx;
    /* 005f40f2: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005f40f8: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005f40fd: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005f4105: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005f410a: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 005f410e: mov dword ptr [esp + 0x14], 0x3f800000 */ W32((u32)(r_esp+0x14u), 0x3f800000u);
    /* 005f4116: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005f411a: mov dword ptr [esp + 0x24], 0 */ W32((u32)(r_esp+0x24u), 0x0u);
    /* 005f4122: mov word ptr [esp + 0x10], dx */ W16((u32)(r_esp+0x10u), (u16)r_edx);
    /* 005f4127: mov dword ptr [esp + 0x20], 0 */ W32((u32)(r_esp+0x20u), 0x0u);
    /* 005f412f: mov word ptr [esp + 0x12], dx */ W16((u32)(r_esp+0x12u), (u16)r_edx);
    /* 005f4134: mov dword ptr [esp + 0x1c], 0 */ W32((u32)(r_esp+0x1cu), 0x0u);
    /* 005f413c: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 005f4144: mov dword ptr [esp + 0x2c], 0xffffd556 */ W32((u32)(r_esp+0x2cu), 0xffffd556u);
    /* 005f414c: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 005f4150: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 005f4154: mov eax, dword ptr [esi + 0xd8] */ r_eax = R32((u32)(r_esi+0xd8u));
    /* 005f415a: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f4160: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 005f4164: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 005f4167: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 005f416b: mov eax, dword ptr [esi + 0x1ac] */ r_eax = R32((u32)(r_esi+0x1acu));
    /* 005f4171: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005f4175: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x5f417au); f_006a2e8c();
    /* 005f417a: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005f4180: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 005f4185: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f418b: call 0x6a3250 */ r_esp -= 4; W32(r_esp, 0x5f4190u); f_006a3250();
    /* 005f4190: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 005f4195: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005f419b: movzx edx, word ptr [eax + 0x8a4] */ r_edx = (u32)R16((u32)(r_eax+0x8a4u));
    /* 005f41a2: mov ecx, esi */ r_ecx = r_esi;
    /* 005f41a4: mov eax, dword ptr [edx*4 + 0x9cb9d0] */ r_eax = R32((u32)(r_edx*4+0x9cb9d0u));
    /* 005f41ab: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 005f41ad: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 005f41b1: lea eax, [esp + 0x48] */ r_eax = (u32)(r_esp+0x48u);
    /* 005f41b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f41b6: call dword ptr [edx + 0xec] */ { u32 t = R32((u32)(r_edx+0xecu)); r_esp -= 4; W32(r_esp, 0x5f41bcu); call_ind(t); }
    /* 005f41bc: mov eax, dword ptr [esp + 0x48] */ r_eax = R32((u32)(r_esp+0x48u));
    /* 005f41c0: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 005f41c4: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 005f41c8: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 005f41cc: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 005f41d0: mov ecx, esi */ r_ecx = r_esi;
    /* 005f41d2: mov dword ptr [esp + 0x2c], 0 */ W32((u32)(r_esp+0x2cu), 0x0u);
    /* 005f41da: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005f41de: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 005f41e2: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 005f41e6: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005f41ec: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 005f41ef: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005f41f3: lea eax, [esp + 0x30] */ r_eax = (u32)(r_esp+0x30u);
    /* 005f41f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f41f8: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005f41fa: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f41ffu); f_005e83c8();
    /* 005f41ff: lea eax, [esp + 0x3c] */ r_eax = (u32)(r_esp+0x3cu);
    /* 005f4203: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4204: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005f4206: mov ecx, esi */ r_ecx = r_esi;
    /* 005f4208: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f420du); f_005e83c8();
    /* 005f420d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f4210: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4211: call 0x6f1188 */ r_esp -= 4; W32(r_esp, 0x5f4216u); f_006f1188();
    /* 005f4216: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f4217: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4219: je 0x5f4246 */ if (fZ) goto L_005f4246;
L_005f421b:; BB(0x005f421b);
    /* 005f421b: mov edx, dword ptr [eax + 0x5c] */ r_edx = R32((u32)(r_eax+0x5cu));
    /* 005f421e: mov dword ptr [eax + 0x68], 0x40000000 */ W32((u32)(r_eax+0x68u), 0x40000000u);
    /* 005f4225: add edx, 0x4000 */ {  u32 a = r_edx; u32 b = 0x4000u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f422b: mov dword ptr [eax + 0x5c], edx */ W32((u32)(r_eax+0x5cu), r_edx);
    /* 005f422e: mov dword ptr [eax + 0x6c], 0x40000000 */ W32((u32)(r_eax+0x6cu), 0x40000000u);
    /* 005f4235: mov dword ptr [eax + 0x70], 0x40000000 */ W32((u32)(r_eax+0x70u), 0x40000000u);
    /* 005f423c: mov dword ptr [eax + 0x13c], 0 */ W32((u32)(r_eax+0x13cu), 0x0u);
L_005f4246:; BB(0x005f4246);
    /* 005f4246: add esp, 0x58 */ {  u32 a = r_esp; u32 b = 0x58u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f4249: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f424a: ret  */ FN_RET(0x005f40ec); r_esp += 4; return;
}

void f_005f424c(void) /* sub_5F424C */
{
    FN_ENTER(0x005f424c);
    /* 005f424c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f424d: mov ebp, esp */ r_ebp = r_esp;
    /* 005f424f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f4251: push 0x8dd1b4 */ { u32 v = 0x8dd1b4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f4256: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f425c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f425d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f4264: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f4267: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f426a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f426d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f4270: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f4273: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4276: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4278: je 0x5f42cf */ if (fZ) goto L_005f42cf;
L_005f427a:; BB(0x005f427a);
    /* 005f427a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f4281: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005f4286: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f428bu); f_005caba4();
    /* 005f428b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f428c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f428f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4291: je 0x5f42cb */ if (fZ) goto L_005f42cb;
L_005f4293:; BB(0x005f4293);
    /* 005f4293: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f429a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f42a1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f42a4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f42a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f42a8: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f42ae: call 0x5f42e0 */ r_esp -= 4; W32(r_esp, 0x5f42b3u); f_005f42e0();
    /* 005f42b3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f42b6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f42bd:; BB(0x005f42bd);
    /* 005f42bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f42c0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f42c7: mov esp, ebp */ r_esp = r_ebp;
    /* 005f42c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f42ca: ret  */ FN_RET(0x005f424c); r_esp += 4; return;
L_005f42cb:; BB(0x005f42cb);
    /* 005f42cb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f42cd: jmp 0x5f42bd */ goto L_005f42bd;
L_005f42cf:; BB(0x005f42cf);
    /* 005f42cf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f42d1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f42d4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f42db: mov esp, ebp */ r_esp = r_ebp;
    /* 005f42dd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f42de: ret  */ FN_RET(0x005f424c); r_esp += 4; return;
}

void f_005f42e0(void) /* sub_5F42E0 */
{
    FN_ENTER(0x005f42e0);
    /* 005f42e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f42e1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f42e3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f42e7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f42eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f42ed: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f42f2u); f_005e959c();
    /* 005f42f2: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f42f8: mov dword ptr [ebx], 0xb15fa0 */ W32((u32)(r_ebx), 0xb15fa0u);
    /* 005f42fe: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f4301: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f4307: mov dword ptr [ebx + 0x23c], 0x5f4318 */ W32((u32)(r_ebx+0x23cu), 0x5f4318u);
    /* 005f4311: mov eax, ebx */ r_eax = r_ebx;
    /* 005f4313: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f4314: ret 8 */ FN_RET(0x005f42e0); r_esp += 12; return;
}

void f_005f4318(void)
{
    FN_ENTER(0x005f4318);
    /* 005f4318: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 005f431d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f431e: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x5f4323u); f_007b4d18();
    /* 005f4323: mov ecx, eax */ r_ecx = r_eax;
    /* 005f4325: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f4328: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f432a: je 0x5f4369 */ if (fZ) goto L_005f4369;
L_005f432c:; BB(0x005f432c);
    /* 005f432c: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 005f4332: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f4334: je 0x5f4369 */ if (fZ) goto L_005f4369;
L_005f4336:; BB(0x005f4336);
    /* 005f4336: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005f433a: cmp edx, dword ptr [ecx + 0xa8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xa8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f4340: jge 0x5f4369 */ if ((fS==fO)) goto L_005f4369;
L_005f4342:; BB(0x005f4342);
    /* 005f4342: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005f4346: push 0x1bf */ { u32 v = 0x1bfu; r_esp -= 4; W32(r_esp, v); }
    /* 005f434b: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 005f434e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f4350: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f4352: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f4354: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f4356: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005f4358: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f435a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f435c: lea eax, [ecx + eax + 0x1c] */ r_eax = (u32)(r_ecx+r_eax+0x1cu);
    /* 005f4360: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4361: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5f4366u); f_0050b510();
    /* 005f4366: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005f4369:; BB(0x005f4369);
    /* 005f4369: ret  */ FN_RET(0x005f4318); r_esp += 4; return;
}

void f_005f436c(void) /* sub_5F436C */
{
    FN_ENTER(0x005f436c);
    /* 005f436c: mov dword ptr [0xa8dfac], 0x3f800000 */ W32((u32)(0xa8dfacu), 0x3f800000u);
    /* 005f4376: mov dword ptr [0xa8dfb0], 0x41000000 */ W32((u32)(0xa8dfb0u), 0x41000000u);
    /* 005f4380: mov dword ptr [0xa8dfb4], 0x3fc00000 */ W32((u32)(0xa8dfb4u), 0x3fc00000u);
    /* 005f438a: ret  */ FN_RET(0x005f436c); r_esp += 4; return;
}

void f_005f438c(void) /* sub_5F438C */
{
    FN_ENTER(0x005f438c);
    /* 005f438c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f438d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f438f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f4391: call 0x5f43b0 */ r_esp -= 4; W32(r_esp, 0x5f4396u); f_005f43b0();
    /* 005f4396: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f439a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f439c: jne 0x5f43a2 */ if (!fZ) goto L_005f43a2;
L_005f439e:; BB(0x005f439e);
    /* 005f439e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f439f: ret 4 */ FN_RET(0x005f438c); r_esp += 8; return;
L_005f43a2:; BB(0x005f43a2);
    /* 005f43a2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f43a3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f43a8u); f_005c2f74();
    /* 005f43a8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f43a9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f43aa: ret 4 */ FN_RET(0x005f438c); r_esp += 8; return;
}

void f_005f43b0(void) /* sub_5F43B0 */
{
    FN_ENTER(0x005f43b0);
    /* 005f43b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f43b1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f43b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f43b5: push 0x8dd1d0 */ { u32 v = 0x8dd1d0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f43ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f43c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f43c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f43c8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f43cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f43ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f43d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f43d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f43d7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f43da: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f43dd: mov dword ptr [ecx], 0xb16100 */ W32((u32)(r_ecx), 0xb16100u);
    /* 005f43e3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f43ea: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f43efu); f_005e61c8();
    /* 005f43ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f43f2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f43f9: mov esp, ebp */ r_esp = r_ebp;
    /* 005f43fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f43fc: ret  */ FN_RET(0x005f43b0); r_esp += 4; return;
}

void f_005f4400(void) /* sub_5F4400 */
{
    FN_ENTER(0x005f4400);
    /* 005f4400: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f4401: mov esi, ecx */ r_esi = r_ecx;
    /* 005f4403: mov ecx, esi */ r_ecx = r_esi;
    /* 005f4405: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5f440au); f_005e90b0();
    /* 005f440a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f440c: je 0x5f442c */ if (fZ) goto L_005f442c;
L_005f440e:; BB(0x005f440e);
    /* 005f440e: push 0x3d4ccccd */ { u32 v = 0x3d4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005f4413: mov ecx, esi */ r_ecx = r_esi;
    /* 005f4415: call 0x5e75bc */ r_esp -= 4; W32(r_esp, 0x5f441au); f_005e75bc();
    /* 005f441a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f441c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f441e: mov ecx, esi */ r_ecx = r_esi;
    /* 005f4420: push 0x3f955555 */ { u32 v = 0x3f955555u; r_esp -= 4; W32(r_esp, v); }
    /* 005f4425: call 0x5e6a88 */ r_esp -= 4; W32(r_esp, 0x5f442au); f_005e6a88();
    /* 005f442a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f442b: ret  */ FN_RET(0x005f4400); r_esp += 4; return;
L_005f442c:; BB(0x005f442c);
    /* 005f442c: mov ecx, esi */ r_ecx = r_esi;
    /* 005f442e: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5f4433u); f_005e90e8();
    /* 005f4433: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f4434: ret  */ FN_RET(0x005f4400); r_esp += 4; return;
}

void f_005f4438(void) /* sub_5F4438 */
{
    FN_ENTER(0x005f4438);
    /* 005f4438: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4439: mov ebp, esp */ r_ebp = r_esp;
    /* 005f443b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f443d: push 0x8dd1f8 */ { u32 v = 0x8dd1f8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f4442: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f4448: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4449: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f4450: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f4453: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f4456: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f4459: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f445c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f445f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4462: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4464: je 0x5f44bb */ if (fZ) goto L_005f44bb;
L_005f4466:; BB(0x005f4466);
    /* 005f4466: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f446d: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005f4472: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f4477u); f_005caba4();
    /* 005f4477: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f4478: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f447b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f447d: je 0x5f44b7 */ if (fZ) goto L_005f44b7;
L_005f447f:; BB(0x005f447f);
    /* 005f447f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f4486: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f448d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4490: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f4493: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4494: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f449a: call 0x5f44cc */ r_esp -= 4; W32(r_esp, 0x5f449fu); f_005f44cc();
    /* 005f449f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f44a2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f44a9:; BB(0x005f44a9);
    /* 005f44a9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f44ac: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f44b3: mov esp, ebp */ r_esp = r_ebp;
    /* 005f44b5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f44b6: ret  */ FN_RET(0x005f4438); r_esp += 4; return;
L_005f44b7:; BB(0x005f44b7);
    /* 005f44b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f44b9: jmp 0x5f44a9 */ goto L_005f44a9;
L_005f44bb:; BB(0x005f44bb);
    /* 005f44bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f44bd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f44c0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f44c7: mov esp, ebp */ r_esp = r_ebp;
    /* 005f44c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f44ca: ret  */ FN_RET(0x005f4438); r_esp += 4; return;
}

void f_005f44cc(void) /* sub_5F44CC */
{
    FN_ENTER(0x005f44cc);
    /* 005f44cc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f44cd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f44cf: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f44d3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f44d7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f44d9: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f44deu); f_005e959c();
    /* 005f44de: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f44e4: mov dword ptr [ebx], 0xb16100 */ W32((u32)(r_ebx), 0xb16100u);
    /* 005f44ea: mov eax, ebx */ r_eax = r_ebx;
    /* 005f44ec: or edx, 0x100622 */ {  u32 a = r_edx; u32 b = 0x100622u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f44f2: mov dword ptr [ebx + 0x238], 0x5cf44c */ W32((u32)(r_ebx+0x238u), 0x5cf44cu);
    /* 005f44fc: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f4502: mov dword ptr [ebx + 0x208], 0x41200000 */ W32((u32)(r_ebx+0x208u), 0x41200000u);
    /* 005f450c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f450d: ret 8 */ FN_RET(0x005f44cc); r_esp += 12; return;
}

void f_005f4510(void) /* sub_5F4510 */
{
    FN_ENTER(0x005f4510);
    /* 005f4510: mov dword ptr [0xa8dfb8], 0x3f800000 */ W32((u32)(0xa8dfb8u), 0x3f800000u);
    /* 005f451a: mov dword ptr [0xa8dfbc], 0x41000000 */ W32((u32)(0xa8dfbcu), 0x41000000u);
    /* 005f4524: mov dword ptr [0xa8dfc0], 0x3fc00000 */ W32((u32)(0xa8dfc0u), 0x3fc00000u);
    /* 005f452e: ret  */ FN_RET(0x005f4510); r_esp += 4; return;
}

void f_005f4530(void) /* sub_5F4530 */
{
    FN_ENTER(0x005f4530);
    /* 005f4530: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4531: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4533: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f4535: push 0x8dd214 */ { u32 v = 0x8dd214u; r_esp -= 4; W32(r_esp, v); }
    /* 005f453a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f4540: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4541: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f4548: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f454b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f454e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f4551: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f4554: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f4557: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f455a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f455d: mov eax, ecx */ r_eax = r_ecx;
    /* 005f455f: mov dword ptr [eax], 0xb16260 */ W32((u32)(r_eax), 0xb16260u);
    /* 005f4565: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f456c: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f4571u); f_005e61c8();
    /* 005f4571: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4574: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f4576: jne 0x5f4588 */ if (!fZ) goto L_005f4588;
L_005f4578:; BB(0x005f4578);
    /* 005f4578: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f457b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f4582: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4584: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4585: ret 4 */ FN_RET(0x005f4530); r_esp += 8; return;
L_005f4588:; BB(0x005f4588);
    /* 005f4588: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f458b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f458c: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f4591u); f_005c2f74();
    /* 005f4591: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f4592: jmp 0x5f4578 */ goto L_005f4578;
}

void f_005f4594(void) /* sub_5F4594 */
{
    FN_ENTER(0x005f4594);
    /* 005f4594: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f4597: mov eax, dword ptr [ecx + 0x260] */ r_eax = R32((u32)(r_ecx+0x260u));
    /* 005f459d: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f45a0: je 0x5f4605 */ if (fZ) goto L_005f4605;
L_005f45a2:; BB(0x005f45a2);
    /* 005f45a2: fild dword ptr [ecx + 0x264] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x264u)));
    /* 005f45a8: fld dword ptr [0x92db00] */ FPUSH(R_F32((u32)(0x92db00u)));
    /* 005f45ae: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005f45b0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005f45b2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005f45b3: jae 0x5f4601 */ if (!fC) goto L_005f4601;
L_005f45b5:; BB(0x005f45b5);
    /* 005f45b5: fld dword ptr [0x92dafc] */ FPUSH(R_F32((u32)(0x92dafcu)));
    /* 005f45bb: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 005f45bd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005f45bf: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005f45c2: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005f45c6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005f45cb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005f45cf: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005f45d3: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005f45d7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005f45da: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 005f45de: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005f45e2: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005f45e4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005f45e6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005f45e7: jae 0x5f45f7 */ if (!fC) goto L_005f45f7;
L_005f45e9:; BB(0x005f45e9);
    /* 005f45e9: mov dword ptr [ecx + 0x264], 0 */ W32((u32)(r_ecx+0x264u), 0x0u);
    /* 005f45f3: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f45f6: ret  */ FN_RET(0x005f4594); r_esp += 4; return;
L_005f45f7:; BB(0x005f45f7);
    /* 005f45f7: mov dword ptr [ecx + 0x264], edx */ W32((u32)(r_ecx+0x264u), r_edx);
    /* 005f45fd: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f4600: ret  */ FN_RET(0x005f4594); r_esp += 4; return;
L_005f4601:; BB(0x005f4601);
    /* 005f4601: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005f4603: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005f4605:; BB(0x005f4605);
    /* 005f4605: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f4608: ret  */ FN_RET(0x005f4594); r_esp += 4; return;
}

void f_005f460c(void) /* sub_5F460C */
{
    FN_ENTER(0x005f460c);
    /* 005f460c: lea edx, [ecx + 0x240] */ r_edx = (u32)(r_ecx+0x240u);
    /* 005f4612: lea eax, [ecx + 0x24c] */ r_eax = (u32)(r_ecx+0x24cu);
    /* 005f4618: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4619: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f461a: call 0x5e74ec */ r_esp -= 4; W32(r_esp, 0x5f461fu); f_005e74ec();
    /* 005f461f: ret  */ FN_RET(0x005f460c); r_esp += 4; return;
}

void f_005f4620(void) /* sub_5F4620 */
{
    FN_ENTER(0x005f4620);
    /* 005f4620: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4621: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f4623: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005f4625: lea ecx, [ebx + 0x240] */ r_ecx = (u32)(r_ebx+0x240u);
    /* 005f462b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f462d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005f462f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4630: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4631: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4632: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f4634: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f463au); call_ind(t); }
    /* 005f463a: lea edx, [ebx + 0x24c] */ r_edx = (u32)(r_ebx+0x24cu);
    /* 005f4640: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4642: je 0x5f4656 */ if (fZ) goto L_005f4656;
L_005f4644:; BB(0x005f4644);
    /* 005f4644: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005f4646: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f4648: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4649: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f464a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f464b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f464c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f464e: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f4654u); call_ind(t); }
    /* 005f4654: jmp 0x5f4667 */ goto L_005f4667;
L_005f4656:; BB(0x005f4656);
    /* 005f4656: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f4658: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005f465a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f465c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f465d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f465e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f465f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f4661: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f4667u); call_ind(t); }
L_005f4667:; BB(0x005f4667);
    /* 005f4667: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 005f466c: lea eax, [ebx + 0x25c] */ r_eax = (u32)(r_ebx+0x25cu);
    /* 005f4672: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4673: call 0x5dd6d0 */ r_esp -= 4; W32(r_esp, 0x5f4678u); f_005dd6d0();
    /* 005f4678: mov dword ptr [ebx + 0x264], 1 */ W32((u32)(r_ebx+0x264u), 0x1u);
    /* 005f4682: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f4685: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f4686: ret  */ FN_RET(0x005f4620); r_esp += 4; return;
}

void f_005f4688(void) /* sub_5F4688 */
{
    FN_ENTER(0x005f4688);
    /* 005f4688: mov edx, ecx */ r_edx = r_ecx;
    /* 005f468a: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005f468f: cmp eax, dword ptr [edx + 0x258] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x258u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f4695: jne 0x5f46a4 */ if (!fZ) goto L_005f46a4;
L_005f4697:; BB(0x005f4697);
    /* 005f4697: mov edx, dword ptr [edx + 0x25c] */ r_edx = R32((u32)(r_edx+0x25cu));
    /* 005f469d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f469f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5f46a4u); f_0082d8bc();
L_005f46a4:; BB(0x005f46a4);
    /* 005f46a4: ret  */ FN_RET(0x005f4688); r_esp += 4; return;
}

void f_005f46a8(void) /* sub_5F46A8 */
{
    FN_ENTER(0x005f46a8);
    /* 005f46a8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f46a9: mov ebp, esp */ r_ebp = r_esp;
    /* 005f46ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f46ad: push 0x8dd23c */ { u32 v = 0x8dd23cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f46b2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f46b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f46b9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f46c0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f46c3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f46c6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f46c9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f46cc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f46cf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f46d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f46d4: je 0x5f472b */ if (fZ) goto L_005f472b;
L_005f46d6:; BB(0x005f46d6);
    /* 005f46d6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f46dd: push 0x268 */ { u32 v = 0x268u; r_esp -= 4; W32(r_esp, v); }
    /* 005f46e2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f46e7u); f_005caba4();
    /* 005f46e7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f46e8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f46eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f46ed: je 0x5f4727 */ if (fZ) goto L_005f4727;
L_005f46ef:; BB(0x005f46ef);
    /* 005f46ef: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f46f6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f46fd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4700: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f4703: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4704: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f470a: call 0x5f473c */ r_esp -= 4; W32(r_esp, 0x5f470fu); f_005f473c();
    /* 005f470f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f4712: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f4719:; BB(0x005f4719);
    /* 005f4719: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f471c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f4723: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4725: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4726: ret  */ FN_RET(0x005f46a8); r_esp += 4; return;
L_005f4727:; BB(0x005f4727);
    /* 005f4727: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f4729: jmp 0x5f4719 */ goto L_005f4719;
L_005f472b:; BB(0x005f472b);
    /* 005f472b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f472d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f4730: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f4737: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4739: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f473a: ret  */ FN_RET(0x005f46a8); r_esp += 4; return;
}

void f_005f473c(void) /* sub_5F473C */
{
    FN_ENTER(0x005f473c);
    /* 005f473c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f473d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f473e: mov edi, ecx */ r_edi = r_ecx;
    /* 005f4740: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 005f4744: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f4745: mov ecx, edi */ r_ecx = r_edi;
    /* 005f4747: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f474b: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f4750u); f_005e959c();
    /* 005f4750: mov eax, dword ptr [edi + 0x1dc] */ r_eax = R32((u32)(r_edi+0x1dcu));
    /* 005f4756: mov dword ptr [edi], 0xb16260 */ W32((u32)(r_edi), 0xb16260u);
    /* 005f475c: or eax, 0x203 */ {  u32 a = r_eax; u32 b = 0x203u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005f4761: mov dword ptr [edi + 0x1dc], eax */ W32((u32)(r_edi+0x1dcu), r_eax);
    /* 005f4767: mov byte ptr [edi + 0x1f4], 3 */ W8((u32)(r_edi+0x1f4u), 0x3u);
    /* 005f476e: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005f4773: mov dword ptr [edi + 0x258], edx */ W32((u32)(r_edi+0x258u), r_edx);
    /* 005f4779: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f477b: mov dword ptr [edi + 0x234], 0x5cf288 */ W32((u32)(r_edi+0x234u), 0x5cf288u);
    /* 005f4785: mov dword ptr [edi + 0x25c], eax */ W32((u32)(r_edi+0x25cu), r_eax);
    /* 005f478b: mov dword ptr [edi + 0x260], edx */ W32((u32)(r_edi+0x260u), r_edx);
    /* 005f4791: mov dword ptr [edi + 0x264], eax */ W32((u32)(r_edi+0x264u), r_eax);
    /* 005f4797: movzx eax, byte ptr [esi + 1] */ r_eax = (u32)R8((u32)(r_esi+0x1u));
    /* 005f479b: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f479e: jne 0x5f47c9 */ if (!fZ) goto L_005f47c9;
L_005f47a0:; BB(0x005f47a0);
    /* 005f47a0: movzx eax, byte ptr [esi + 2] */ r_eax = (u32)R8((u32)(r_esi+0x2u));
    /* 005f47a4: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f47a7: je 0x5f47bf */ if (fZ) goto L_005f47bf;
L_005f47a9:; BB(0x005f47a9);
    /* 005f47a9: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f47ac: je 0x5f47c9 */ if (fZ) goto L_005f47c9;
L_005f47ae:; BB(0x005f47ae);
    /* 005f47ae: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f47b1: jne 0x5f47c9 */ if (!fZ) goto L_005f47c9;
L_005f47b3:; BB(0x005f47b3);
    /* 005f47b3: mov dword ptr [edi + 0x258], 2 */ W32((u32)(r_edi+0x258u), 0x2u);
    /* 005f47bd: jmp 0x5f47c9 */ goto L_005f47c9;
L_005f47bf:; BB(0x005f47bf);
    /* 005f47bf: mov dword ptr [edi + 0x258], 2 */ W32((u32)(r_edi+0x258u), 0x2u);
L_005f47c9:; BB(0x005f47c9);
    /* 005f47c9: mov eax, edi */ r_eax = r_edi;
    /* 005f47cb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f47cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f47cd: ret 8 */ FN_RET(0x005f473c); r_esp += 12; return;
}

void f_005f47d0(void) /* sub_5F47D0 */
{
    FN_ENTER(0x005f47d0);
    /* 005f47d0: mov dword ptr [0xa8dfc4], 0x3f800000 */ W32((u32)(0xa8dfc4u), 0x3f800000u);
    /* 005f47da: mov dword ptr [0xa8dfc8], 0x41000000 */ W32((u32)(0xa8dfc8u), 0x41000000u);
    /* 005f47e4: mov dword ptr [0xa8dfcc], 0x3fc00000 */ W32((u32)(0xa8dfccu), 0x3fc00000u);
    /* 005f47ee: ret  */ FN_RET(0x005f47d0); r_esp += 4; return;
}

void f_005f47f0(void) /* sub_5F47F0 */
{
    FN_ENTER(0x005f47f0);
    /* 005f47f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f47f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f47f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f47f5: push 0x8dd258 */ { u32 v = 0x8dd258u; r_esp -= 4; W32(r_esp, v); }
    /* 005f47fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f4800: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4801: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f4808: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f480b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f480e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f4811: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f4814: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f4817: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f481a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f481d: mov eax, ecx */ r_eax = r_ecx;
    /* 005f481f: mov dword ptr [eax], 0xb163c0 */ W32((u32)(r_eax), 0xb163c0u);
    /* 005f4825: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f482c: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f4831u); f_005e61c8();
    /* 005f4831: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4834: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f4836: jne 0x5f4848 */ if (!fZ) goto L_005f4848;
L_005f4838:; BB(0x005f4838);
    /* 005f4838: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f483b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f4842: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4844: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4845: ret 4 */ FN_RET(0x005f47f0); r_esp += 8; return;
L_005f4848:; BB(0x005f4848);
    /* 005f4848: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f484b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f484c: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f4851u); f_005c2f74();
    /* 005f4851: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f4852: jmp 0x5f4838 */ goto L_005f4838;
}

void f_005f4854(void) /* sub_5F4854 */
{
    FN_ENTER(0x005f4854);
    /* 005f4854: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4855: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f4858: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f485a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f485c: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f485f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4860: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005f4862: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f4867u); f_005e83c8();
    /* 005f4867: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f486a: push 0x1be */ { u32 v = 0x1beu; r_esp -= 4; W32(r_esp, v); }
    /* 005f486f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4870: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5f4875u); f_0050b510();
    /* 005f4875: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f4878: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f487b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f487c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005f487e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f4880: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f4885u); f_005e83c8();
    /* 005f4885: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f4888: push 0x1be */ { u32 v = 0x1beu; r_esp -= 4; W32(r_esp, v); }
    /* 005f488d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f488e: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x5f4893u); f_0050b510();
    /* 005f4893: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f4896: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f4899: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f489a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f489c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f489e: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f48a3u); f_005e83c8();
    /* 005f48a3: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
    /* 005f48a9: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f48af: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x5f48b4u); f_006a2e8c();
    /* 005f48b4: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005f48b7: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f48ba: je 0x5f48c8 */ if (fZ) goto L_005f48c8;
L_005f48bc:; BB(0x005f48bc);
    /* 005f48bc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f48be: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5f48c3u); f_005e90e8();
L_005f48c3:; BB(0x005f48c3);
    /* 005f48c3: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f48c6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f48c7: ret  */ FN_RET(0x005f4854); r_esp += 4; return;
L_005f48c8:; BB(0x005f48c8);
    /* 005f48c8: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005f48cb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f48cd: call dword ptr [eax + 0x84] */ { u32 t = R32((u32)(r_eax+0x84u)); r_esp -= 4; W32(r_esp, 0x5f48d3u); call_ind(t); }
    /* 005f48d3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f48d6: jne 0x5f48c3 */ if (!fZ) goto L_005f48c3;
L_005f48d8:; BB(0x005f48d8);
    /* 005f48d8: mov ecx, dword ptr [ebp + 0xf8] */ r_ecx = R32((u32)(r_ebp+0xf8u));
    /* 005f48de: mov eax, dword ptr [ecx + 0x8d0] */ r_eax = R32((u32)(r_ecx+0x8d0u));
    /* 005f48e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005f48e6: jl 0x5f48c3 */ if ((fS!=fO)) goto L_005f48c3;
L_005f48e8:; BB(0x005f48e8);
    /* 005f48e8: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f48eb: jg 0x5f48c3 */ if ((!fZ&&fS==fO)) goto L_005f48c3;
L_005f48ed:; BB(0x005f48ed);
    /* 005f48ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f48ef: je 0x5f48c3 */ if (fZ) goto L_005f48c3;
L_005f48f1:; BB(0x005f48f1);
    /* 005f48f1: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005f48f5: mov dword ptr [esp + 0x68], esi */ W32((u32)(r_esp+0x68u), r_esi);
    /* 005f48f9: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 005f48fd: mov eax, 0xb */ r_eax = 0xbu;
    /* 005f4902: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_005f4904:; BB(0x005f4904);
    /* 005f4904: mov edi, 0xffff */ r_edi = 0xffffu;
    /* 005f4909: mov word ptr [edx], di */ W16((u32)(r_edx), (u16)r_edi);
    /* 005f490c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005f490e: mov word ptr [edx + 2], di */ W16((u32)(r_edx+0x2u), (u16)r_edi);
    /* 005f4912: mov dword ptr [edx + 4], esi */ W32((u32)(r_edx+0x4u), r_esi);
    /* 005f4915: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f4918: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005f491b: jne 0x5f4904 */ if (!fZ) goto L_005f4904;
L_005f491d:; BB(0x005f491d);
    /* 005f491d: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 005f4921: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 005f4925: mov dword ptr [esp + 0xc], 1 */ W32((u32)(r_esp+0xcu), 0x1u);
    /* 005f492d: movzx eax, word ptr [ecx + 0x8d4] */ r_eax = (u32)R16((u32)(r_ecx+0x8d4u));
    /* 005f4934: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 005f4939: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 005f493d: movzx edx, word ptr [ecx + 0x8d6] */ r_edx = (u32)R16((u32)(r_ecx+0x8d6u));
    /* 005f4944: mov word ptr [esp + 0x12], dx */ W16((u32)(r_esp+0x12u), (u16)r_edx);
    /* 005f4949: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005f494c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005f494e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f494f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4950: push dword ptr [ebp + 0xf8] */ { u32 v = R32((u32)(r_ebp+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f4956: call 0x6f2570 */ r_esp -= 4; W32(r_esp, 0x5f495bu); f_006f2570();
    /* 005f495b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f495e: jmp 0x5f48c3 */ goto L_005f48c3;
}

void f_005f4964(void) /* sub_5F4964 */
{
    FN_ENTER(0x005f4964);
    /* 005f4964: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4965: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4967: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f4969: push 0x8dd280 */ { u32 v = 0x8dd280u; r_esp -= 4; W32(r_esp, v); }
    /* 005f496e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f4974: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4975: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f497c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f497f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f4982: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f4985: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f4988: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f498b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f498e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4990: je 0x5f49e7 */ if (fZ) goto L_005f49e7;
L_005f4992:; BB(0x005f4992);
    /* 005f4992: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f4999: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005f499e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f49a3u); f_005caba4();
    /* 005f49a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f49a4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f49a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f49a9: je 0x5f49e3 */ if (fZ) goto L_005f49e3;
L_005f49ab:; BB(0x005f49ab);
    /* 005f49ab: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f49b2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f49b9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f49bc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f49bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f49c0: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f49c6: call 0x5f49f8 */ r_esp -= 4; W32(r_esp, 0x5f49cbu); f_005f49f8();
    /* 005f49cb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f49ce: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f49d5:; BB(0x005f49d5);
    /* 005f49d5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f49d8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f49df: mov esp, ebp */ r_esp = r_ebp;
    /* 005f49e1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f49e2: ret  */ FN_RET(0x005f4964); r_esp += 4; return;
L_005f49e3:; BB(0x005f49e3);
    /* 005f49e3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f49e5: jmp 0x5f49d5 */ goto L_005f49d5;
L_005f49e7:; BB(0x005f49e7);
    /* 005f49e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f49e9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f49ec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f49f3: mov esp, ebp */ r_esp = r_ebp;
    /* 005f49f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f49f6: ret  */ FN_RET(0x005f4964); r_esp += 4; return;
}

void f_005f49f8(void) /* sub_5F49F8 */
{
    FN_ENTER(0x005f49f8);
    /* 005f49f8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f49f9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f49fb: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f49ff: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f4a03: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f4a05: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f4a0au); f_005e959c();
    /* 005f4a0a: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f4a10: mov dword ptr [ebx], 0xb163c0 */ W32((u32)(r_ebx), 0xb163c0u);
    /* 005f4a16: or edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f4a19: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f4a1f: mov eax, ebx */ r_eax = r_ebx;
    /* 005f4a21: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f4a22: ret 8 */ FN_RET(0x005f49f8); r_esp += 12; return;
}

void f_005f4a28(void) /* sub_5F4A28 */
{
    FN_ENTER(0x005f4a28);
    /* 005f4a28: mov dword ptr [0xa8dfd0], 0x3f800000 */ W32((u32)(0xa8dfd0u), 0x3f800000u);
    /* 005f4a32: mov dword ptr [0xa8dfd4], 0x41000000 */ W32((u32)(0xa8dfd4u), 0x41000000u);
    /* 005f4a3c: mov dword ptr [0xa8dfd8], 0x3fc00000 */ W32((u32)(0xa8dfd8u), 0x3fc00000u);
    /* 005f4a46: ret  */ FN_RET(0x005f4a28); r_esp += 4; return;
}

void f_005f4a48(void) /* sub_5F4A48 */
{
    FN_ENTER(0x005f4a48);
    /* 005f4a48: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4a49: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f4a4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f4a4d: call 0x5f4a6c */ r_esp -= 4; W32(r_esp, 0x5f4a52u); f_005f4a6c();
    /* 005f4a52: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f4a56: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f4a58: jne 0x5f4a5e */ if (!fZ) goto L_005f4a5e;
L_005f4a5a:; BB(0x005f4a5a);
    /* 005f4a5a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f4a5b: ret 4 */ FN_RET(0x005f4a48); r_esp += 8; return;
L_005f4a5e:; BB(0x005f4a5e);
    /* 005f4a5e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4a5f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f4a64u); f_005c2f74();
    /* 005f4a64: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f4a65: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f4a66: ret 4 */ FN_RET(0x005f4a48); r_esp += 8; return;
}

void f_005f4a6c(void) /* sub_5F4A6C */
{
    FN_ENTER(0x005f4a6c);
    /* 005f4a6c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4a6d: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4a6f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f4a71: push 0x8dd29c */ { u32 v = 0x8dd29cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f4a76: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f4a7c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4a7d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f4a84: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f4a87: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f4a8a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f4a8d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f4a90: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f4a93: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f4a96: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f4a99: mov dword ptr [ecx], 0xb16520 */ W32((u32)(r_ecx), 0xb16520u);
    /* 005f4a9f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f4aa6: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f4aabu); f_005e61c8();
    /* 005f4aab: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f4aae: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f4ab5: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4ab7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4ab8: ret  */ FN_RET(0x005f4a6c); r_esp += 4; return;
}

void f_005f4abc(void) /* sub_5F4ABC */
{
    FN_ENTER(0x005f4abc);
    /* 005f4abc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f4abd: mov esi, ecx */ r_esi = r_ecx;
    /* 005f4abf: mov ecx, esi */ r_ecx = r_esi;
    /* 005f4ac1: call 0x5e7f6c */ r_esp -= 4; W32(r_esp, 0x5f4ac6u); f_005e7f6c();
    /* 005f4ac6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4ac8: jne 0x5f4add */ if (!fZ) goto L_005f4add;
L_005f4aca:; BB(0x005f4aca);
    /* 005f4aca: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 005f4acc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f4ace: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f4acf: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f4ad5: call 0x5cc3b0 */ r_esp -= 4; W32(r_esp, 0x5f4adau); f_005cc3b0();
    /* 005f4ada: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005f4add:; BB(0x005f4add);
    /* 005f4add: mov ecx, esi */ r_ecx = r_esi;
    /* 005f4adf: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5f4ae4u); f_005e90b0();
    /* 005f4ae4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4ae6: je 0x5f4b23 */ if (fZ) goto L_005f4b23;
L_005f4ae8:; BB(0x005f4ae8);
    /* 005f4ae8: mov edx, dword ptr [esi + 0x1e4] */ r_edx = R32((u32)(r_esi+0x1e4u));
    /* 005f4aee: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005f4af4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4af6: jne 0x5f4b0a */ if (!fZ) goto L_005f4b0a;
L_005f4af8:; BB(0x005f4af8);
    /* 005f4af8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f4afa: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 005f4afd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4afe: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4aff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4b00: call 0x6e7998 */ r_esp -= 4; W32(r_esp, 0x5f4b05u); f_006e7998();
    /* 005f4b05: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f4b08: jmp 0x5f4b1a */ goto L_005f4b1a;
L_005f4b0a:; BB(0x005f4b0a);
    /* 005f4b0a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f4b0c: lea edx, [eax + 0x38] */ r_edx = (u32)(r_eax+0x38u);
    /* 005f4b0f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4b10: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4b11: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4b12: call 0x6f1eb0 */ r_esp -= 4; W32(r_esp, 0x5f4b17u); f_006f1eb0();
    /* 005f4b17: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005f4b1a:; BB(0x005f4b1a);
    /* 005f4b1a: mov ecx, esi */ r_ecx = r_esi;
    /* 005f4b1c: call 0x5e7480 */ r_esp -= 4; W32(r_esp, 0x5f4b21u); f_005e7480();
    /* 005f4b21: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f4b22: ret  */ FN_RET(0x005f4abc); r_esp += 4; return;
L_005f4b23:; BB(0x005f4b23);
    /* 005f4b23: mov ecx, esi */ r_ecx = r_esi;
    /* 005f4b25: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5f4b2au); f_005e90e8();
    /* 005f4b2a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f4b2b: ret  */ FN_RET(0x005f4abc); r_esp += 4; return;
}

void f_005f4b2c(void) /* sub_5F4B2C */
{
    FN_ENTER(0x005f4b2c);
    /* 005f4b2c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4b2d: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4b2f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f4b31: push 0x8dd2c4 */ { u32 v = 0x8dd2c4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f4b36: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f4b3c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4b3d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f4b44: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f4b47: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f4b4a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f4b4d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f4b50: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f4b53: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4b56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4b58: je 0x5f4baf */ if (fZ) goto L_005f4baf;
L_005f4b5a:; BB(0x005f4b5a);
    /* 005f4b5a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f4b61: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005f4b66: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f4b6bu); f_005caba4();
    /* 005f4b6b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f4b6c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f4b6f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4b71: je 0x5f4bab */ if (fZ) goto L_005f4bab;
L_005f4b73:; BB(0x005f4b73);
    /* 005f4b73: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f4b7a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f4b81: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4b84: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f4b87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4b88: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f4b8e: call 0x5f4bc0 */ r_esp -= 4; W32(r_esp, 0x5f4b93u); f_005f4bc0();
    /* 005f4b93: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f4b96: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f4b9d:; BB(0x005f4b9d);
    /* 005f4b9d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f4ba0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f4ba7: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4ba9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4baa: ret  */ FN_RET(0x005f4b2c); r_esp += 4; return;
L_005f4bab:; BB(0x005f4bab);
    /* 005f4bab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f4bad: jmp 0x5f4b9d */ goto L_005f4b9d;
L_005f4baf:; BB(0x005f4baf);
    /* 005f4baf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f4bb1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f4bb4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f4bbb: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4bbd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4bbe: ret  */ FN_RET(0x005f4b2c); r_esp += 4; return;
}

void f_005f4bc0(void) /* sub_5F4BC0 */
{
    FN_ENTER(0x005f4bc0);
    /* 005f4bc0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4bc1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f4bc3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f4bc7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f4bcb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f4bcd: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f4bd2u); f_005e959c();
    /* 005f4bd2: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f4bd8: mov dword ptr [ebx], 0xb16520 */ W32((u32)(r_ebx), 0xb16520u);
    /* 005f4bde: or edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f4be1: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f4be7: mov dword ptr [ebx + 0x1e8], 2 */ W32((u32)(r_ebx+0x1e8u), 0x2u);
    /* 005f4bf1: mov eax, ebx */ r_eax = r_ebx;
    /* 005f4bf3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f4bf4: ret 8 */ FN_RET(0x005f4bc0); r_esp += 12; return;
}

void f_005f4bf8(void) /* sub_5F4BF8 */
{
    FN_ENTER(0x005f4bf8);
    /* 005f4bf8: mov dword ptr [0xa8dfdc], 0x3f800000 */ W32((u32)(0xa8dfdcu), 0x3f800000u);
    /* 005f4c02: mov dword ptr [0xa8dfe0], 0x41000000 */ W32((u32)(0xa8dfe0u), 0x41000000u);
    /* 005f4c0c: mov dword ptr [0xa8dfe4], 0x3fc00000 */ W32((u32)(0xa8dfe4u), 0x3fc00000u);
    /* 005f4c16: ret  */ FN_RET(0x005f4bf8); r_esp += 4; return;
}

void f_005f4c18(void) /* sub_5F4C18 */
{
    FN_ENTER(0x005f4c18);
    /* 005f4c18: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4c19: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f4c1b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f4c1d: call 0x5f4c3c */ r_esp -= 4; W32(r_esp, 0x5f4c22u); f_005f4c3c();
    /* 005f4c22: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f4c26: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f4c28: jne 0x5f4c2e */ if (!fZ) goto L_005f4c2e;
L_005f4c2a:; BB(0x005f4c2a);
    /* 005f4c2a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f4c2b: ret 4 */ FN_RET(0x005f4c18); r_esp += 8; return;
L_005f4c2e:; BB(0x005f4c2e);
    /* 005f4c2e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4c2f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f4c34u); f_005c2f74();
    /* 005f4c34: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f4c35: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f4c36: ret 4 */ FN_RET(0x005f4c18); r_esp += 8; return;
}

void f_005f4c3c(void) /* sub_5F4C3C */
{
    FN_ENTER(0x005f4c3c);
    /* 005f4c3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4c3d: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4c3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f4c41: push 0x8dd2e0 */ { u32 v = 0x8dd2e0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f4c46: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f4c4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4c4d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f4c54: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f4c57: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f4c5a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f4c5d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f4c60: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f4c63: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f4c66: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f4c69: mov dword ptr [ecx], 0xb16680 */ W32((u32)(r_ecx), 0xb16680u);
    /* 005f4c6f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f4c76: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f4c7bu); f_005e61c8();
    /* 005f4c7b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f4c7e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f4c85: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4c87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4c88: ret  */ FN_RET(0x005f4c3c); r_esp += 4; return;
}

void f_005f4c8c(void) /* sub_5F4C8C */
{
    FN_ENTER(0x005f4c8c);
    /* 005f4c8c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f4c8d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f4c90: mov edi, ecx */ r_edi = r_ecx;
    /* 005f4c92: mov ecx, edi */ r_ecx = r_edi;
    /* 005f4c94: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5f4c99u); f_005e90b0();
    /* 005f4c99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4c9b: je 0x5f4ccb */ if (fZ) goto L_005f4ccb;
L_005f4c9d:; BB(0x005f4c9d);
    /* 005f4c9d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f4ca0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4ca1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f4ca3: mov ecx, edi */ r_ecx = r_edi;
    /* 005f4ca5: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f4caau); f_005e83c8();
    /* 005f4caa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4cac: je 0x5f4cd2 */ if (fZ) goto L_005f4cd2;
L_005f4cae:; BB(0x005f4cae);
    /* 005f4cae: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f4cb1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 005f4cb3: mov edx, dword ptr [edi + 0xf8] */ r_edx = R32((u32)(r_edi+0xf8u));
    /* 005f4cb9: push dword ptr [edx + 0x60] */ { u32 v = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f4cbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4cbd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4cbe: call 0x6e2f20 */ r_esp -= 4; W32(r_esp, 0x5f4cc3u); f_006e2f20();
    /* 005f4cc3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f4cc6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f4cc9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f4cca: ret  */ FN_RET(0x005f4c8c); r_esp += 4; return;
L_005f4ccb:; BB(0x005f4ccb);
    /* 005f4ccb: mov ecx, edi */ r_ecx = r_edi;
    /* 005f4ccd: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5f4cd2u); f_005e90e8();
L_005f4cd2:; BB(0x005f4cd2);
    /* 005f4cd2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f4cd5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f4cd6: ret  */ FN_RET(0x005f4c8c); r_esp += 4; return;
}

void f_005f4cd8(void) /* sub_5F4CD8 */
{
    FN_ENTER(0x005f4cd8);
    /* 005f4cd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4cd9: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4cdb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f4cdd: push 0x8dd308 */ { u32 v = 0x8dd308u; r_esp -= 4; W32(r_esp, v); }
    /* 005f4ce2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f4ce8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4ce9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f4cf0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f4cf3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f4cf6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f4cf9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f4cfc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f4cff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4d02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4d04: je 0x5f4d5b */ if (fZ) goto L_005f4d5b;
L_005f4d06:; BB(0x005f4d06);
    /* 005f4d06: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f4d0d: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005f4d12: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f4d17u); f_005caba4();
    /* 005f4d17: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f4d18: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f4d1b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4d1d: je 0x5f4d57 */ if (fZ) goto L_005f4d57;
L_005f4d1f:; BB(0x005f4d1f);
    /* 005f4d1f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f4d26: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f4d2d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4d30: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f4d33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4d34: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f4d3a: call 0x5f4d6c */ r_esp -= 4; W32(r_esp, 0x5f4d3fu); f_005f4d6c();
    /* 005f4d3f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f4d42: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f4d49:; BB(0x005f4d49);
    /* 005f4d49: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f4d4c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f4d53: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4d55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4d56: ret  */ FN_RET(0x005f4cd8); r_esp += 4; return;
L_005f4d57:; BB(0x005f4d57);
    /* 005f4d57: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f4d59: jmp 0x5f4d49 */ goto L_005f4d49;
L_005f4d5b:; BB(0x005f4d5b);
    /* 005f4d5b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f4d5d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f4d60: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f4d67: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4d69: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4d6a: ret  */ FN_RET(0x005f4cd8); r_esp += 4; return;
}

void f_005f4d6c(void) /* sub_5F4D6C */
{
    FN_ENTER(0x005f4d6c);
    /* 005f4d6c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4d6d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f4d6f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f4d73: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f4d77: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f4d79: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f4d7eu); f_005e959c();
    /* 005f4d7e: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f4d84: mov dword ptr [ebx], 0xb16680 */ W32((u32)(r_ebx), 0xb16680u);
    /* 005f4d8a: or edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f4d8d: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f4d93: mov eax, ebx */ r_eax = r_ebx;
    /* 005f4d95: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f4d96: ret 8 */ FN_RET(0x005f4d6c); r_esp += 12; return;
}

void f_005f4d9c(void) /* sub_5F4D9C */
{
    FN_ENTER(0x005f4d9c);
    /* 005f4d9c: mov dword ptr [0xa8dfe8], 0x3f800000 */ W32((u32)(0xa8dfe8u), 0x3f800000u);
    /* 005f4da6: mov dword ptr [0xa8dfec], 0x41000000 */ W32((u32)(0xa8dfecu), 0x41000000u);
    /* 005f4db0: mov dword ptr [0xa8dff0], 0x3fc00000 */ W32((u32)(0xa8dff0u), 0x3fc00000u);
    /* 005f4dba: ret  */ FN_RET(0x005f4d9c); r_esp += 4; return;
}

void f_005f4dbc(void) /* sub_5F4DBC */
{
    FN_ENTER(0x005f4dbc);
    /* 005f4dbc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4dbd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f4dbf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f4dc1: call 0x5f4de0 */ r_esp -= 4; W32(r_esp, 0x5f4dc6u); f_005f4de0();
    /* 005f4dc6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f4dca: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f4dcc: jne 0x5f4dd2 */ if (!fZ) goto L_005f4dd2;
L_005f4dce:; BB(0x005f4dce);
    /* 005f4dce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f4dcf: ret 4 */ FN_RET(0x005f4dbc); r_esp += 8; return;
L_005f4dd2:; BB(0x005f4dd2);
    /* 005f4dd2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4dd3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f4dd8u); f_005c2f74();
    /* 005f4dd8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f4dd9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f4dda: ret 4 */ FN_RET(0x005f4dbc); r_esp += 8; return;
}

void f_005f4de0(void) /* sub_5F4DE0 */
{
    FN_ENTER(0x005f4de0);
    /* 005f4de0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4de1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4de3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f4de5: push 0x8dd324 */ { u32 v = 0x8dd324u; r_esp -= 4; W32(r_esp, v); }
    /* 005f4dea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f4df0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4df1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f4df8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f4dfb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f4dfe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f4e01: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f4e04: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f4e07: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f4e0a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f4e0d: mov dword ptr [ecx], 0xb167e0 */ W32((u32)(r_ecx), 0xb167e0u);
    /* 005f4e13: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f4e1a: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f4e1fu); f_005e61c8();
    /* 005f4e1f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f4e22: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f4e29: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4e2b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4e2c: ret  */ FN_RET(0x005f4de0); r_esp += 4; return;
}

void f_005f4e30(void) /* sub_5F4E30 */
{
    FN_ENTER(0x005f4e30);
    /* 005f4e30: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f4e31: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f4e32: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4e33: sub esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f4e36: mov esi, ecx */ r_esi = r_ecx;
    /* 005f4e38: mov ecx, dword ptr [esi + 0xf8] */ r_ecx = R32((u32)(r_esi+0xf8u));
    /* 005f4e3e: add ecx, 0x8a4 */ {  u32 a = r_ecx; u32 b = 0x8a4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f4e44: call 0x6a2e8c */ r_esp -= 4; W32(r_esp, 0x5f4e49u); f_006a2e8c();
    /* 005f4e49: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 005f4e4c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4e4f: jne 0x5f4e58 */ if (!fZ) goto L_005f4e58;
L_005f4e51:; BB(0x005f4e51);
    /* 005f4e51: mov edi, 8 */ r_edi = 0x8u;
    /* 005f4e56: jmp 0x5f4e68 */ goto L_005f4e68;
L_005f4e58:; BB(0x005f4e58);
    /* 005f4e58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4e5a: jne 0x5f4e63 */ if (!fZ) goto L_005f4e63;
L_005f4e5c:; BB(0x005f4e5c);
    /* 005f4e5c: mov edi, 3 */ r_edi = 0x3u;
    /* 005f4e61: jmp 0x5f4e68 */ goto L_005f4e68;
L_005f4e63:; BB(0x005f4e63);
    /* 005f4e63: mov edi, 8 */ r_edi = 0x8u;
L_005f4e68:; BB(0x005f4e68);
    /* 005f4e68: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f4e6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4e6c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f4e6e: mov ecx, esi */ r_ecx = r_esi;
    /* 005f4e70: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f4e75u); f_005e83c8();
    /* 005f4e75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4e77: je 0x5f4f5c */ if (fZ) goto L_005f4f5c;
L_005f4e7d:; BB(0x005f4e7d);
    /* 005f4e7d: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005f4e83: mov edx, eax */ r_edx = r_eax;
    /* 005f4e85: add edx, 0x8d0 */ {  u32 a = r_edx; u32 b = 0x8d0u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005f4e8b: je 0x5f4f5c */ if (fZ) goto L_005f4f5c;
L_005f4e91:; BB(0x005f4e91);
    /* 005f4e91: mov edx, dword ptr [eax + 0x8d0] */ r_edx = R32((u32)(r_eax+0x8d0u));
    /* 005f4e97: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005f4e99: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005f4e9b: jl 0x5f4ea2 */ if ((fS!=fO)) goto L_005f4ea2;
L_005f4e9d:; BB(0x005f4e9d);
    /* 005f4e9d: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f4ea0: jle 0x5f4ea6 */ if ((fZ||fS!=fO)) goto L_005f4ea6;
L_005f4ea2:; BB(0x005f4ea2);
    /* 005f4ea2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f4ea4: jmp 0x5f4ea8 */ goto L_005f4ea8;
L_005f4ea6:; BB(0x005f4ea6);
    /* 005f4ea6: mov ecx, edx */ r_ecx = r_edx;
L_005f4ea8:; BB(0x005f4ea8);
    /* 005f4ea8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4eaa: je 0x5f4f5c */ if (fZ) goto L_005f4f5c;
L_005f4eb0:; BB(0x005f4eb0);
    /* 005f4eb0: mov dword ptr [esp + 0x70], ebx */ W32((u32)(r_esp+0x70u), r_ebx);
    /* 005f4eb4: mov ebx, esi */ r_ebx = r_esi;
    /* 005f4eb6: mov esi, eax */ r_esi = r_eax;
L_005f4eb8:; BB(0x005f4eb8);
    /* 005f4eb8: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 005f4ebc: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 005f4ebf: lea eax, [eax + esi + 0x8d4] */ r_eax = (u32)(r_eax+r_esi+0x8d4u);
    /* 005f4ec6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4ec8: je 0x5f4f3e */ if (fZ) goto L_005f4f3e;
L_005f4eca:; BB(0x005f4eca);
    /* 005f4eca: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005f4ece: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 005f4ed2: mov dword ptr [esp + 0x68], ebx */ W32((u32)(r_esp+0x68u), r_ebx);
    /* 005f4ed6: mov eax, 0xb */ r_eax = 0xbu;
    /* 005f4edb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005f4edd:; BB(0x005f4edd);
    /* 005f4edd: mov edi, 0xffff */ r_edi = 0xffffu;
    /* 005f4ee2: mov word ptr [edx], di */ W16((u32)(r_edx), (u16)r_edi);
    /* 005f4ee5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005f4ee7: mov word ptr [edx + 2], di */ W16((u32)(r_edx+0x2u), (u16)r_edi);
    /* 005f4eeb: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 005f4eee: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f4ef1: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005f4ef4: jne 0x5f4edd */ if (!fZ) goto L_005f4edd;
L_005f4ef6:; BB(0x005f4ef6);
    /* 005f4ef6: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 005f4efa: mov ebx, dword ptr [esp + 0x68] */ r_ebx = R32((u32)(r_esp+0x68u));
    /* 005f4efe: mov dword ptr [esp + 0xc], 1 */ W32((u32)(r_esp+0xcu), 0x1u);
    /* 005f4f06: movzx edx, word ptr [esi + ecx*2 + 0x8d4] */ r_edx = (u32)R16((u32)(r_esi+r_ecx*2+0x8d4u));
    /* 005f4f0e: mov word ptr [esp + 0x10], dx */ W16((u32)(r_esp+0x10u), (u16)r_edx);
    /* 005f4f13: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f4f16: movzx edx, word ptr [esi + ecx*2 + 0x8d6] */ r_edx = (u32)R16((u32)(r_esi+r_ecx*2+0x8d6u));
    /* 005f4f1e: mov word ptr [esp + 0x12], dx */ W16((u32)(r_esp+0x12u), (u16)r_edx);
    /* 005f4f23: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005f4f27: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f4f28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4f29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4f2a: push dword ptr [ebx + 0xf8] */ { u32 v = R32((u32)(r_ebx+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f4f30: call 0x6e54a8 */ r_esp -= 4; W32(r_esp, 0x5f4f35u); f_006e54a8();
    /* 005f4f35: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f4f38: mov edx, dword ptr [esi + 0x8d0] */ r_edx = R32((u32)(r_esi+0x8d0u));
L_005f4f3e:; BB(0x005f4f3e);
    /* 005f4f3e: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005f4f41: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005f4f43: jl 0x5f4f4a */ if ((fS!=fO)) goto L_005f4f4a;
L_005f4f45:; BB(0x005f4f45);
    /* 005f4f45: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f4f48: jle 0x5f4f4e */ if ((fZ||fS!=fO)) goto L_005f4f4e;
L_005f4f4a:; BB(0x005f4f4a);
    /* 005f4f4a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f4f4c: jmp 0x5f4f50 */ goto L_005f4f50;
L_005f4f4e:; BB(0x005f4f4e);
    /* 005f4f4e: mov eax, edx */ r_eax = r_edx;
L_005f4f50:; BB(0x005f4f50);
    /* 005f4f50: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4f52: jne 0x5f4eb8 */ if (!fZ) goto L_005f4eb8;
L_005f4f58:; BB(0x005f4f58);
    /* 005f4f58: mov ebx, dword ptr [esp + 0x70] */ r_ebx = R32((u32)(r_esp+0x70u));
L_005f4f5c:; BB(0x005f4f5c);
    /* 005f4f5c: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f4f5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4f60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f4f61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f4f62: ret  */ FN_RET(0x005f4e30); r_esp += 4; return;
}

void f_005f4e45(void)
{
    FN_ENTER(0x005f4e45);
    /* 005f4e45: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 005f4e46: loopne 0x5f4e52 */ r_ecx--; if (r_ecx && !fZ) goto L_005f4e52;
    /* 005f4e48: add byte ptr [edi], cl */ { u32 ad = (u32)(r_edi);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); }
    /* 005f4e4a: mov edi, 0x1f883c0 */ r_edi = 0x1f883c0u;
    /* 005f4e4f: jne 0x5f4e58 */ if (!fZ) goto L_005f4e58;
L_005f4e51:; BB(0x005f4e51);
    /* 005f4e51: mov edi, 8 */ r_edi = 0x8u;
L_005f4e52:; BB(0x005f4e52);
    /* 005f4e52: or byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 005f4e54: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005f4e56: jmp 0x5f4e68 */ goto L_005f4e68;
L_005f4e58:; BB(0x005f4e58);
    /* 005f4e58: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4e5a: jne 0x5f4e63 */ if (!fZ) goto L_005f4e63;
L_005f4e5c:; BB(0x005f4e5c);
    /* 005f4e5c: mov edi, 3 */ r_edi = 0x3u;
    /* 005f4e61: jmp 0x5f4e68 */ goto L_005f4e68;
L_005f4e63:; BB(0x005f4e63);
    /* 005f4e63: mov edi, 8 */ r_edi = 0x8u;
L_005f4e68:; BB(0x005f4e68);
    /* 005f4e68: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f4e6b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4e6c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f4e6e: mov ecx, esi */ r_ecx = r_esi;
    /* 005f4e70: call 0x5e83c8 */ r_esp -= 4; W32(r_esp, 0x5f4e75u); f_005e83c8();
    /* 005f4e75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4e77: je 0x5f4f5c */ if (fZ) goto L_005f4f5c;
L_005f4e7d:; BB(0x005f4e7d);
    /* 005f4e7d: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005f4e83: mov edx, eax */ r_edx = r_eax;
    /* 005f4e85: add edx, 0x8d0 */ {  u32 a = r_edx; u32 b = 0x8d0u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005f4e8b: je 0x5f4f5c */ if (fZ) goto L_005f4f5c;
L_005f4e91:; BB(0x005f4e91);
    /* 005f4e91: mov edx, dword ptr [eax + 0x8d0] */ r_edx = R32((u32)(r_eax+0x8d0u));
    /* 005f4e97: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005f4e99: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005f4e9b: jl 0x5f4ea2 */ if ((fS!=fO)) goto L_005f4ea2;
L_005f4e9d:; BB(0x005f4e9d);
    /* 005f4e9d: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f4ea0: jle 0x5f4ea6 */ if ((fZ||fS!=fO)) goto L_005f4ea6;
L_005f4ea2:; BB(0x005f4ea2);
    /* 005f4ea2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f4ea4: jmp 0x5f4ea8 */ goto L_005f4ea8;
L_005f4ea6:; BB(0x005f4ea6);
    /* 005f4ea6: mov ecx, edx */ r_ecx = r_edx;
L_005f4ea8:; BB(0x005f4ea8);
    /* 005f4ea8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4eaa: je 0x5f4f5c */ if (fZ) goto L_005f4f5c;
L_005f4eb0:; BB(0x005f4eb0);
    /* 005f4eb0: mov dword ptr [esp + 0x70], ebx */ W32((u32)(r_esp+0x70u), r_ebx);
    /* 005f4eb4: mov ebx, esi */ r_ebx = r_esi;
    /* 005f4eb6: mov esi, eax */ r_esi = r_eax;
L_005f4eb8:; BB(0x005f4eb8);
    /* 005f4eb8: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 005f4ebc: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 005f4ebf: lea eax, [eax + esi + 0x8d4] */ r_eax = (u32)(r_eax+r_esi+0x8d4u);
    /* 005f4ec6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4ec8: je 0x5f4f3e */ if (fZ) goto L_005f4f3e;
L_005f4eca:; BB(0x005f4eca);
    /* 005f4eca: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 005f4ece: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 005f4ed2: mov dword ptr [esp + 0x68], ebx */ W32((u32)(r_esp+0x68u), r_ebx);
    /* 005f4ed6: mov eax, 0xb */ r_eax = 0xbu;
    /* 005f4edb: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005f4edd:; BB(0x005f4edd);
    /* 005f4edd: mov edi, 0xffff */ r_edi = 0xffffu;
    /* 005f4ee2: mov word ptr [edx], di */ W16((u32)(r_edx), (u16)r_edi);
    /* 005f4ee5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005f4ee7: mov word ptr [edx + 2], di */ W16((u32)(r_edx+0x2u), (u16)r_edi);
    /* 005f4eeb: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 005f4eee: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f4ef1: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005f4ef4: jne 0x5f4edd */ if (!fZ) goto L_005f4edd;
L_005f4ef6:; BB(0x005f4ef6);
    /* 005f4ef6: mov edi, dword ptr [esp + 0x6c] */ r_edi = R32((u32)(r_esp+0x6cu));
    /* 005f4efa: mov ebx, dword ptr [esp + 0x68] */ r_ebx = R32((u32)(r_esp+0x68u));
    /* 005f4efe: mov dword ptr [esp + 0xc], 1 */ W32((u32)(r_esp+0xcu), 0x1u);
    /* 005f4f06: movzx edx, word ptr [esi + ecx*2 + 0x8d4] */ r_edx = (u32)R16((u32)(r_esi+r_ecx*2+0x8d4u));
    /* 005f4f0e: mov word ptr [esp + 0x10], dx */ W16((u32)(r_esp+0x10u), (u16)r_edx);
    /* 005f4f13: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f4f16: movzx edx, word ptr [esi + ecx*2 + 0x8d6] */ r_edx = (u32)R16((u32)(r_esi+r_ecx*2+0x8d6u));
    /* 005f4f1e: mov word ptr [esp + 0x12], dx */ W16((u32)(r_esp+0x12u), (u16)r_edx);
    /* 005f4f23: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 005f4f27: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f4f28: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4f29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4f2a: push dword ptr [ebx + 0xf8] */ { u32 v = R32((u32)(r_ebx+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f4f30: call 0x6e54a8 */ r_esp -= 4; W32(r_esp, 0x5f4f35u); f_006e54a8();
    /* 005f4f35: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f4f38: mov edx, dword ptr [esi + 0x8d0] */ r_edx = R32((u32)(r_esi+0x8d0u));
L_005f4f3e:; BB(0x005f4f3e);
    /* 005f4f3e: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005f4f41: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005f4f43: jl 0x5f4f4a */ if ((fS!=fO)) goto L_005f4f4a;
L_005f4f45:; BB(0x005f4f45);
    /* 005f4f45: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f4f48: jle 0x5f4f4e */ if ((fZ||fS!=fO)) goto L_005f4f4e;
L_005f4f4a:; BB(0x005f4f4a);
    /* 005f4f4a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f4f4c: jmp 0x5f4f50 */ goto L_005f4f50;
L_005f4f4e:; BB(0x005f4f4e);
    /* 005f4f4e: mov eax, edx */ r_eax = r_edx;
L_005f4f50:; BB(0x005f4f50);
    /* 005f4f50: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4f52: jne 0x5f4eb8 */ if (!fZ) goto L_005f4eb8;
L_005f4f58:; BB(0x005f4f58);
    /* 005f4f58: mov ebx, dword ptr [esp + 0x70] */ r_ebx = R32((u32)(r_esp+0x70u));
L_005f4f5c:; BB(0x005f4f5c);
    /* 005f4f5c: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f4f5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4f60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f4f61: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f4f62: ret  */ FN_RET(0x005f4e45); r_esp += 4; return;
}

void f_005f4f64(void) /* sub_5F4F64 */
{
    FN_ENTER(0x005f4f64);
    /* 005f4f64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f4f65: mov ebp, esp */ r_ebp = r_esp;
    /* 005f4f67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f4f69: push 0x8dd34c */ { u32 v = 0x8dd34cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f4f6e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f4f74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4f75: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f4f7c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f4f7f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f4f82: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f4f85: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f4f88: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f4f8b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4f8e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4f90: je 0x5f4fe7 */ if (fZ) goto L_005f4fe7;
L_005f4f92:; BB(0x005f4f92);
    /* 005f4f92: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f4f99: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005f4f9e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f4fa3u); f_005caba4();
    /* 005f4fa3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f4fa4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f4fa7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f4fa9: je 0x5f4fe3 */ if (fZ) goto L_005f4fe3;
L_005f4fab:; BB(0x005f4fab);
    /* 005f4fab: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f4fb2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f4fb9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f4fbc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f4fbf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f4fc0: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f4fc6: call 0x5f4ff8 */ r_esp -= 4; W32(r_esp, 0x5f4fcbu); f_005f4ff8();
    /* 005f4fcb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f4fce: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f4fd5:; BB(0x005f4fd5);
    /* 005f4fd5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f4fd8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f4fdf: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4fe1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4fe2: ret  */ FN_RET(0x005f4f64); r_esp += 4; return;
L_005f4fe3:; BB(0x005f4fe3);
    /* 005f4fe3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f4fe5: jmp 0x5f4fd5 */ goto L_005f4fd5;
L_005f4fe7:; BB(0x005f4fe7);
    /* 005f4fe7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f4fe9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f4fec: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f4ff3: mov esp, ebp */ r_esp = r_ebp;
    /* 005f4ff5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f4ff6: ret  */ FN_RET(0x005f4f64); r_esp += 4; return;
}

void f_005f4ff8(void) /* sub_5F4FF8 */
{
    FN_ENTER(0x005f4ff8);
    /* 005f4ff8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f4ff9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f4ffb: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f4fff: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f5003: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f5005: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f500au); f_005e959c();
    /* 005f500a: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f5010: mov dword ptr [ebx], 0xb167e0 */ W32((u32)(r_ebx), 0xb167e0u);
    /* 005f5016: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f5019: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f501f: mov eax, ebx */ r_eax = r_ebx;
    /* 005f5021: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f5022: ret 8 */ FN_RET(0x005f4ff8); r_esp += 12; return;
}

