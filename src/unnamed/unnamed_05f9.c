#include "protos.h"

void f_005f9038(void) /* sub_5F9038 */
{
    FN_ENTER(0x005f9038);
    /* 005f9038: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f9039: mov ebp, esp */ r_ebp = r_esp;
    /* 005f903b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f903d: push 0x8ddc3a */ { u32 v = 0x8ddc3au; r_esp -= 4; W32(r_esp, v); }
    /* 005f9042: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f9048: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9049: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f9050: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f9053: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f9056: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005f9059: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005f905c: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005f905f: mov eax, dword ptr [ecx + 0x240] */ r_eax = R32((u32)(r_ecx+0x240u));
    /* 005f9065: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f9068: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f906b: jne 0x5f90c6 */ if (!fZ) goto L_005f90c6;
L_005f906d:; BB(0x005f906d);
    /* 005f906d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005f9074: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f9076: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f907bu); f_005caba4();
    /* 005f907b: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005f907e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f9081: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005f9084: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f9086: je 0x5f911e */ if (fZ) goto L_005f911e;
L_005f908c:; BB(0x005f908c);
    /* 005f908c: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005f9093: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005f909a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f909d: mov ecx, eax */ r_ecx = r_eax;
    /* 005f909f: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 005f90a1: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005f90a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f90a9: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f90af: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5f90b4u); f_005e5cac();
    /* 005f90b4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f90b7: mov dword ptr [eax], 0xb0f2d8 */ W32((u32)(r_eax), 0xb0f2d8u);
    /* 005f90bd: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005f90c4: jmp 0x5f911e */ goto L_005f911e;
L_005f90c6:; BB(0x005f90c6);
    /* 005f90c6: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f90c9: jne 0x5f911e */ if (!fZ) goto L_005f911e;
L_005f90cb:; BB(0x005f90cb);
    /* 005f90cb: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005f90d2: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f90d4: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f90d9u); f_005caba4();
    /* 005f90d9: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005f90dc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f90df: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005f90e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f90e4: je 0x5f911e */ if (fZ) goto L_005f911e;
L_005f90e6:; BB(0x005f90e6);
    /* 005f90e6: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 005f90ed: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f90f4: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f90f7: mov ecx, eax */ r_ecx = r_eax;
    /* 005f90f9: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 005f90fb: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005f9102: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9103: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f9109: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5f910eu); f_005e5cac();
    /* 005f910e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f9111: mov dword ptr [eax], 0xb0f2f0 */ W32((u32)(r_eax), 0xb0f2f0u);
    /* 005f9117: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005f911e:; BB(0x005f911e);
    /* 005f911e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9121: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f9128: mov esp, ebp */ r_esp = r_ebp;
    /* 005f912a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f912b: ret  */ FN_RET(0x005f9038); r_esp += 4; return;
}

void f_005f912c(void) /* sub_5F912C */
{
    FN_ENTER(0x005f912c);
    /* 005f912c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f912d: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f9130: mov edi, ecx */ r_edi = r_ecx;
    /* 005f9132: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005f9134: mov ecx, edi */ r_ecx = r_edi;
    /* 005f9136: call dword ptr [eax + 0xfc] */ { u32 t = R32((u32)(r_eax+0xfcu)); r_esp -= 4; W32(r_esp, 0x5f913cu); call_ind(t); }
    /* 005f913c: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005f913e: mov ecx, edi */ r_ecx = r_edi;
    /* 005f9140: call dword ptr [eax + 0x78] */ { u32 t = R32((u32)(r_eax+0x78u)); r_esp -= 4; W32(r_esp, 0x5f9143u); call_ind(t); }
    /* 005f9143: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005f9145: je 0x5f92c6 */ if (fZ) goto L_005f92c6;
L_005f914b:; BB(0x005f914b);
    /* 005f914b: mov eax, dword ptr [edi + 0x240] */ r_eax = R32((u32)(r_edi+0x240u));
    /* 005f9151: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005f9153: jle 0x5f92bd */ if ((fZ||fS!=fO)) goto L_005f92bd;
L_005f9159:; BB(0x005f9159);
    /* 005f9159: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f915c: jg 0x5f92bd */ if ((!fZ&&fS==fO)) goto L_005f92bd;
L_005f9162:; BB(0x005f9162);
    /* 005f9162: mov ecx, edi */ r_ecx = r_edi;
    /* 005f9164: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5f9169u); f_005e90b0();
    /* 005f9169: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f916b: je 0x5f92b4 */ if (fZ) goto L_005f92b4;
L_005f9171:; BB(0x005f9171);
    /* 005f9171: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005f9177: mov edx, eax */ r_edx = r_eax;
    /* 005f9179: add edx, 0x8d0 */ {  u32 a = r_edx; u32 b = 0x8d0u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005f917f: je 0x5f92e9 */ if (fZ) goto L_005f92e9;
L_005f9185:; BB(0x005f9185);
    /* 005f9185: mov ecx, dword ptr [eax + 0x8d0] */ r_ecx = R32((u32)(r_eax+0x8d0u));
    /* 005f918b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005f918d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005f918f: jl 0x5f9196 */ if ((fS!=fO)) goto L_005f9196;
L_005f9191:; BB(0x005f9191);
    /* 005f9191: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f9194: jle 0x5f9198 */ if ((fZ||fS!=fO)) goto L_005f9198;
L_005f9196:; BB(0x005f9196);
    /* 005f9196: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_005f9198:; BB(0x005f9198);
    /* 005f9198: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f919a: je 0x5f92e9 */ if (fZ) goto L_005f92e9;
L_005f91a0:; BB(0x005f91a0);
    /* 005f91a0: mov dword ptr [esp + 0x24], ebx */ W32((u32)(r_esp+0x24u), r_ebx);
    /* 005f91a4: mov ebx, edx */ r_ebx = r_edx;
    /* 005f91a6: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 005f91aa: mov dword ptr [esp + 0x1c], ebp */ W32((u32)(r_esp+0x1cu), r_ebp);
    /* 005f91ae: mov ebp, eax */ r_ebp = r_eax;
    /* 005f91b0: mov esi, edi */ r_esi = r_edi;
L_005f91b2:; BB(0x005f91b2);
    /* 005f91b2: movzx eax, word ptr [ebp + ebx*4 + 0x8d4] */ r_eax = (u32)R16((u32)(r_ebp+r_ebx*4+0x8d4u));
    /* 005f91ba: movsx edi, word ptr [ebp + ebx*4 + 0x8d6] */ r_edi = (u32)(i32)(i16)R16((u32)(r_ebp+r_ebx*4+0x8d6u));
    /* 005f91c2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f91c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f91c4: call 0x7b9df0 */ r_esp -= 4; W32(r_esp, 0x5f91c9u); f_007b9df0();
    /* 005f91c9: mov ecx, eax */ r_ecx = r_eax;
    /* 005f91cb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f91ce: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f91d0: je 0x5f928a */ if (fZ) goto L_005f928a;
L_005f91d6:; BB(0x005f91d6);
    /* 005f91d6: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005f91dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f91de: je 0x5f928a */ if (fZ) goto L_005f928a;
L_005f91e4:; BB(0x005f91e4);
    /* 005f91e4: mov edx, dword ptr [esi + 0x240] */ r_edx = R32((u32)(r_esi+0x240u));
    /* 005f91ea: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f91ed: jne 0x5f923f */ if (!fZ) goto L_005f923f;
L_005f91ef:; BB(0x005f91ef);
    /* 005f91ef: mov dword ptr [esp + 0x14], 0xb */ W32((u32)(r_esp+0x14u), 0xbu);
    /* 005f91f7: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 005f91fb: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 005f91fd: mov dword ptr [esp + 0x18], 0x41a00000 */ W32((u32)(r_esp+0x18u), 0x41a00000u);
    /* 005f9205: mov dword ptr [esp + 0x2c], ebx */ W32((u32)(r_esp+0x2cu), r_ebx);
    /* 005f9209: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 005f920c: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005f920e: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005f9210: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005f9212: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005f9214: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005f9216: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005f9218: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005f921a: add ebx, dword ptr [ecx + 0xa4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0xa4u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005f9220: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005f9225: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9226: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9227: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9228: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005f922d: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005f922f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9230: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 005f9234: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 005f9238: call dword ptr [eax + 0x60] */ { u32 t = R32((u32)(r_eax+0x60u)); r_esp -= 4; W32(r_esp, 0x5f923bu); call_ind(t); }
    /* 005f923b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005f923d: jmp 0x5f928a */ goto L_005f928a;
L_005f923f:; BB(0x005f923f);
    /* 005f923f: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9242: jne 0x5f928a */ if (!fZ) goto L_005f928a;
L_005f9244:; BB(0x005f9244);
    /* 005f9244: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005f9246: mov dword ptr [esp + 0xc], 0xc */ W32((u32)(r_esp+0xcu), 0xcu);
    /* 005f924e: mov dword ptr [esp + 0x28], ebx */ W32((u32)(r_esp+0x28u), r_ebx);
    /* 005f9252: mov dword ptr [esp + 0x10], 0x41a00000 */ W32((u32)(r_esp+0x10u), 0x41a00000u);
    /* 005f925a: lea ebx, [edi + edi] */ r_ebx = (u32)(r_edi+r_edi);
    /* 005f925d: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005f925f: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005f9261: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005f9263: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005f9265: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005f9267: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005f9269: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005f926b: add ebx, dword ptr [ecx + 0xa4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0xa4u)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005f9271: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 005f9276: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f9277: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f9278: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9279: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005f927e: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005f9280: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9281: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 005f9285: call dword ptr [edx + 0x60] */ { u32 t = R32((u32)(r_edx+0x60u)); r_esp -= 4; W32(r_esp, 0x5f9288u); call_ind(t); }
    /* 005f9288: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005f928a:; BB(0x005f928a);
    /* 005f928a: mov eax, dword ptr [ebp + 0x8d0] */ r_eax = R32((u32)(r_ebp+0x8d0u));
    /* 005f9290: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005f9293: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005f9295: jl 0x5f929c */ if ((fS!=fO)) goto L_005f929c;
L_005f9297:; BB(0x005f9297);
    /* 005f9297: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f929a: jle 0x5f929e */ if ((fZ||fS!=fO)) goto L_005f929e;
L_005f929c:; BB(0x005f929c);
    /* 005f929c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005f929e:; BB(0x005f929e);
    /* 005f929e: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f92a0: jne 0x5f91b2 */ if (!fZ) goto L_005f91b2;
L_005f92a6:; BB(0x005f92a6);
    /* 005f92a6: mov ebx, dword ptr [esp + 0x24] */ r_ebx = R32((u32)(r_esp+0x24u));
    /* 005f92aa: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 005f92ae: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 005f92b2: jmp 0x5f92e9 */ goto L_005f92e9;
L_005f92b4:; BB(0x005f92b4);
    /* 005f92b4: mov ecx, edi */ r_ecx = r_edi;
    /* 005f92b6: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5f92bbu); f_005e90e8();
    /* 005f92bb: jmp 0x5f92e9 */ goto L_005f92e9;
L_005f92bd:; BB(0x005f92bd);
    /* 005f92bd: mov ecx, edi */ r_ecx = r_edi;
    /* 005f92bf: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5f92c4u); f_005e90e8();
    /* 005f92c4: jmp 0x5f92e9 */ goto L_005f92e9;
L_005f92c6:; BB(0x005f92c6);
    /* 005f92c6: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005f92c8: je 0x5f92e9 */ if (fZ) goto L_005f92e9;
L_005f92ca:; BB(0x005f92ca);
    /* 005f92ca: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f92cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f92ce: mov ecx, edi */ r_ecx = r_edi;
    /* 005f92d0: call 0x5e7534 */ r_esp -= 4; W32(r_esp, 0x5f92d5u); f_005e7534();
    /* 005f92d5: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005f92d8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f92da: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 005f92dc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005f92de: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f92df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f92e0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f92e1: mov ecx, edi */ r_ecx = r_edi;
    /* 005f92e3: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f92e9u); call_ind(t); }
L_005f92e9:; BB(0x005f92e9);
    /* 005f92e9: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f92ec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f92ed: ret  */ FN_RET(0x005f912c); r_esp += 4; return;
}

void f_005f92f0(void) /* sub_5F92F0 */
{
    FN_ENTER(0x005f92f0);
    /* 005f92f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f92f1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f92f3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f92f5: push 0x8ddc60 */ { u32 v = 0x8ddc60u; r_esp -= 4; W32(r_esp, v); }
    /* 005f92fa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f9300: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9301: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f9308: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f930b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f930e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f9311: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f9314: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f9317: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f931a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f931c: je 0x5f9373 */ if (fZ) goto L_005f9373;
L_005f931e:; BB(0x005f931e);
    /* 005f931e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f9325: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005f932a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f932fu); f_005caba4();
    /* 005f932f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f9330: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f9333: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9335: je 0x5f936f */ if (fZ) goto L_005f936f;
L_005f9337:; BB(0x005f9337);
    /* 005f9337: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f933e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f9345: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f9348: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f934b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f934c: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f9352: call 0x5f9384 */ r_esp -= 4; W32(r_esp, 0x5f9357u); f_005f9384();
    /* 005f9357: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f935a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f9361:; BB(0x005f9361);
    /* 005f9361: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9364: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f936b: mov esp, ebp */ r_esp = r_ebp;
    /* 005f936d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f936e: ret  */ FN_RET(0x005f92f0); r_esp += 4; return;
L_005f936f:; BB(0x005f936f);
    /* 005f936f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f9371: jmp 0x5f9361 */ goto L_005f9361;
L_005f9373:; BB(0x005f9373);
    /* 005f9373: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f9375: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9378: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f937f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f9381: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9382: ret  */ FN_RET(0x005f92f0); r_esp += 4; return;
}

void f_005f9384(void) /* sub_5F9384 */
{
    FN_ENTER(0x005f9384);
    /* 005f9384: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f9385: mov ebp, esp */ r_ebp = r_esp;
    /* 005f9387: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f9389: push 0x8ddc7c */ { u32 v = 0x8ddc7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f938e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f9394: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9395: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f939c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f939f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f93a2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f93a5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f93a8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f93ab: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f93ae: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f93b1: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f93b4: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f93b9u); f_005e959c();
    /* 005f93b9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f93c0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f93c3: mov edx, dword ptr [ecx + 0x1dc] */ r_edx = R32((u32)(r_ecx+0x1dcu));
    /* 005f93c9: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005f93d0: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005f93d3: mov dword ptr [ecx + 0x240], eax */ W32((u32)(r_ecx+0x240u), r_eax);
    /* 005f93d9: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005f93dc: mov dword ptr [ecx], 0xb19000 */ W32((u32)(r_ecx), 0xb19000u);
    /* 005f93e2: ja 0x5f9511 */ if ((!fC&&!fZ)) goto L_005f9511;
L_005f93e8:; BB(0x005f93e8);
    /* 005f93e8: mov eax, dword ptr [eax*4 + 0x92dd20] */ r_eax = R32((u32)(r_eax*4+0x92dd20u));
    /* 005f93ef: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_005f9511:; BB(0x005f9511);
    /* 005f9511: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9513: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 005f9519: call 0x5e6244 */ r_esp -= 4; W32(r_esp, 0x5f951eu); f_005e6244();
    /* 005f951e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f9521: mov eax, ecx */ r_eax = r_ecx;
    /* 005f9523: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9526: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f952d: mov esp, ebp */ r_esp = r_ebp;
    /* 005f952f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9530: ret 8 */ FN_RET(0x005f9384); r_esp += 12; return;
}

void f_005f93f1(void)
{
    FN_ENTER(0x005f93f1);
    /* 005f93f1: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005f93f3: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 005f93f9: call 0x5e6244 */ r_esp -= 4; W32(r_esp, 0x5f93feu); f_005e6244();
    /* 005f93fe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f9401: jmp 0x5f9521 */ goto L_005f9521;
L_005f9521:; BB(0x005f9521);
    /* 005f9521: mov eax, ecx */ r_eax = r_ecx;
    /* 005f9523: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9526: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f952d: mov esp, ebp */ r_esp = r_ebp;
    /* 005f952f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9530: ret 8 */ FN_RET(0x005f93f1); r_esp += 12; return;
}

void f_005f9406(void)
{
    FN_ENTER(0x005f9406);
    /* 005f9406: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9408: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 005f940e: call 0x5e6244 */ r_esp -= 4; W32(r_esp, 0x5f9413u); f_005e6244();
    /* 005f9413: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f9416: jmp 0x5f9521 */ goto L_005f9521;
L_005f9521:; BB(0x005f9521);
    /* 005f9521: mov eax, ecx */ r_eax = r_ecx;
    /* 005f9523: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9526: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f952d: mov esp, ebp */ r_esp = r_ebp;
    /* 005f952f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9530: ret 8 */ FN_RET(0x005f9406); r_esp += 12; return;
}

void f_005f941b(void)
{
    FN_ENTER(0x005f941b);
    /* 005f941b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f941d: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 005f9423: call 0x5e6244 */ r_esp -= 4; W32(r_esp, 0x5f9428u); f_005e6244();
    /* 005f9428: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f942b: jmp 0x5f9521 */ goto L_005f9521;
L_005f9521:; BB(0x005f9521);
    /* 005f9521: mov eax, ecx */ r_eax = r_ecx;
    /* 005f9523: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9526: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f952d: mov esp, ebp */ r_esp = r_ebp;
    /* 005f952f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9530: ret 8 */ FN_RET(0x005f941b); r_esp += 12; return;
}

void f_005f9430(void)
{
    FN_ENTER(0x005f9430);
    /* 005f9430: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9432: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 005f9438: call 0x5e6244 */ r_esp -= 4; W32(r_esp, 0x5f943du); f_005e6244();
    /* 005f943d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f9440: jmp 0x5f9521 */ goto L_005f9521;
L_005f9521:; BB(0x005f9521);
    /* 005f9521: mov eax, ecx */ r_eax = r_ecx;
    /* 005f9523: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9526: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f952d: mov esp, ebp */ r_esp = r_ebp;
    /* 005f952f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9530: ret 8 */ FN_RET(0x005f9430); r_esp += 12; return;
}

void f_005f9445(void)
{
    FN_ENTER(0x005f9445);
    /* 005f9445: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 005f9447: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 005f944d: call 0x5e6244 */ r_esp -= 4; W32(r_esp, 0x5f9452u); f_005e6244();
    /* 005f9452: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f9455: jmp 0x5f9521 */ goto L_005f9521;
L_005f9521:; BB(0x005f9521);
    /* 005f9521: mov eax, ecx */ r_eax = r_ecx;
    /* 005f9523: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9526: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f952d: mov esp, ebp */ r_esp = r_ebp;
    /* 005f952f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9530: ret 8 */ FN_RET(0x005f9445); r_esp += 12; return;
}

void f_005f945a(void)
{
    FN_ENTER(0x005f945a);
    /* 005f945a: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 005f945c: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 005f9462: call 0x5e6244 */ r_esp -= 4; W32(r_esp, 0x5f9467u); f_005e6244();
    /* 005f9467: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f946a: jmp 0x5f9521 */ goto L_005f9521;
L_005f9521:; BB(0x005f9521);
    /* 005f9521: mov eax, ecx */ r_eax = r_ecx;
    /* 005f9523: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9526: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f952d: mov esp, ebp */ r_esp = r_ebp;
    /* 005f952f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9530: ret 8 */ FN_RET(0x005f945a); r_esp += 12; return;
}

void f_005f946f(void)
{
    FN_ENTER(0x005f946f);
    /* 005f946f: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9471: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 005f9477: call 0x5e6244 */ r_esp -= 4; W32(r_esp, 0x5f947cu); f_005e6244();
    /* 005f947c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f947f: jmp 0x5f9521 */ goto L_005f9521;
L_005f9521:; BB(0x005f9521);
    /* 005f9521: mov eax, ecx */ r_eax = r_ecx;
    /* 005f9523: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9526: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f952d: mov esp, ebp */ r_esp = r_ebp;
    /* 005f952f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9530: ret 8 */ FN_RET(0x005f946f); r_esp += 12; return;
}

void f_005f9484(void)
{
    FN_ENTER(0x005f9484);
    /* 005f9484: push 0x26 */ { u32 v = 0x26u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9486: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 005f948c: call 0x5e6244 */ r_esp -= 4; W32(r_esp, 0x5f9491u); f_005e6244();
    /* 005f9491: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f9494: jmp 0x5f9521 */ goto L_005f9521;
L_005f9521:; BB(0x005f9521);
    /* 005f9521: mov eax, ecx */ r_eax = r_ecx;
    /* 005f9523: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9526: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f952d: mov esp, ebp */ r_esp = r_ebp;
    /* 005f952f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9530: ret 8 */ FN_RET(0x005f9484); r_esp += 12; return;
}

void f_005f9499(void)
{
    FN_ENTER(0x005f9499);
    /* 005f9499: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 005f949b: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 005f94a1: call 0x5e6244 */ r_esp -= 4; W32(r_esp, 0x5f94a6u); f_005e6244();
    /* 005f94a6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f94a9: jmp 0x5f9521 */ goto L_005f9521;
L_005f9521:; BB(0x005f9521);
    /* 005f9521: mov eax, ecx */ r_eax = r_ecx;
    /* 005f9523: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9526: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f952d: mov esp, ebp */ r_esp = r_ebp;
    /* 005f952f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9530: ret 8 */ FN_RET(0x005f9499); r_esp += 12; return;
}

void f_005f94ab(void)
{
    FN_ENTER(0x005f94ab);
    /* 005f94ab: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005f94ad: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 005f94b3: call 0x5e6244 */ r_esp -= 4; W32(r_esp, 0x5f94b8u); f_005e6244();
    /* 005f94b8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f94bb: jmp 0x5f9521 */ goto L_005f9521;
L_005f9521:; BB(0x005f9521);
    /* 005f9521: mov eax, ecx */ r_eax = r_ecx;
    /* 005f9523: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9526: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f952d: mov esp, ebp */ r_esp = r_ebp;
    /* 005f952f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9530: ret 8 */ FN_RET(0x005f94ab); r_esp += 12; return;
}

void f_005f94bd(void)
{
    FN_ENTER(0x005f94bd);
    /* 005f94bd: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 005f94bf: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 005f94c5: call 0x5e6244 */ r_esp -= 4; W32(r_esp, 0x5f94cau); f_005e6244();
    /* 005f94ca: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f94cd: jmp 0x5f9521 */ goto L_005f9521;
L_005f9521:; BB(0x005f9521);
    /* 005f9521: mov eax, ecx */ r_eax = r_ecx;
    /* 005f9523: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9526: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f952d: mov esp, ebp */ r_esp = r_ebp;
    /* 005f952f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9530: ret 8 */ FN_RET(0x005f94bd); r_esp += 12; return;
}

void f_005f94cf(void)
{
    FN_ENTER(0x005f94cf);
    /* 005f94cf: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 005f94d1: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 005f94d7: call 0x5e6244 */ r_esp -= 4; W32(r_esp, 0x5f94dcu); f_005e6244();
    /* 005f94dc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f94df: jmp 0x5f9521 */ goto L_005f9521;
L_005f9521:; BB(0x005f9521);
    /* 005f9521: mov eax, ecx */ r_eax = r_ecx;
    /* 005f9523: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9526: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f952d: mov esp, ebp */ r_esp = r_ebp;
    /* 005f952f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9530: ret 8 */ FN_RET(0x005f94cf); r_esp += 12; return;
}

void f_005f94e1(void)
{
    FN_ENTER(0x005f94e1);
    /* 005f94e1: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 005f94e7: jmp 0x5f9521 */ goto L_005f9521;
L_005f9521:; BB(0x005f9521);
    /* 005f9521: mov eax, ecx */ r_eax = r_ecx;
    /* 005f9523: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9526: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f952d: mov esp, ebp */ r_esp = r_ebp;
    /* 005f952f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9530: ret 8 */ FN_RET(0x005f94e1); r_esp += 12; return;
}

void f_005f94e9(void)
{
    FN_ENTER(0x005f94e9);
    /* 005f94e9: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 005f94ef: jmp 0x5f9521 */ goto L_005f9521;
L_005f9521:; BB(0x005f9521);
    /* 005f9521: mov eax, ecx */ r_eax = r_ecx;
    /* 005f9523: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9526: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f952d: mov esp, ebp */ r_esp = r_ebp;
    /* 005f952f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9530: ret 8 */ FN_RET(0x005f94e9); r_esp += 12; return;
}

void f_005f94f1(void)
{
    FN_ENTER(0x005f94f1);
    /* 005f94f1: or edx, 0x400000 */ {  u32 a = r_edx; u32 b = 0x400000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005f94f7: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 005f94f9: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 005f94ff: call 0x5e6244 */ r_esp -= 4; W32(r_esp, 0x5f9504u); f_005e6244();
    /* 005f9504: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f9507: jmp 0x5f9521 */ goto L_005f9521;
L_005f9521:; BB(0x005f9521);
    /* 005f9521: mov eax, ecx */ r_eax = r_ecx;
    /* 005f9523: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9526: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f952d: mov esp, ebp */ r_esp = r_ebp;
    /* 005f952f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9530: ret 8 */ FN_RET(0x005f94f1); r_esp += 12; return;
}

void f_005f9509(void)
{
    FN_ENTER(0x005f9509);
    /* 005f9509: mov dword ptr [ecx + 0x1dc], edx */ W32((u32)(r_ecx+0x1dcu), r_edx);
    /* 005f950f: jmp 0x5f9521 */ goto L_005f9521;
L_005f9521:; BB(0x005f9521);
    /* 005f9521: mov eax, ecx */ r_eax = r_ecx;
    /* 005f9523: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9526: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f952d: mov esp, ebp */ r_esp = r_ebp;
    /* 005f952f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9530: ret 8 */ FN_RET(0x005f9509); r_esp += 12; return;
}

void f_005f9534(void) /* sub_5F9534 */
{
    FN_ENTER(0x005f9534);
    /* 005f9534: movsx eax, byte ptr [ecx + 0xf1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ecx+0xf1u));
    /* 005f953b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f953e: je 0x5f9543 */ if (fZ) goto L_005f9543;
L_005f9540:; BB(0x005f9540);
    /* 005f9540: ret 0x14 */ FN_RET(0x005f9534); r_esp += 24; return;
L_005f9543:; BB(0x005f9543);
    /* 005f9543: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005f9549: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f954b: je 0x5f9540 */ if (fZ) goto L_005f9540;
L_005f954d:; BB(0x005f954d);
    /* 005f954d: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005f9551: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f9553: je 0x5f9540 */ if (fZ) goto L_005f9540;
L_005f9555:; BB(0x005f9555);
    /* 005f9555: mov edx, dword ptr [ecx + 0x240] */ r_edx = R32((u32)(r_ecx+0x240u));
    /* 005f955b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005f955d: jle 0x5f958a */ if ((fZ||fS!=fO)) goto L_005f958a;
L_005f955f:; BB(0x005f955f);
    /* 005f955f: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f9562: jg 0x5f958a */ if ((!fZ&&fS==fO)) goto L_005f958a;
L_005f9564:; BB(0x005f9564);
    /* 005f9564: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005f9568: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f956b: je 0x5f95a7 */ if (fZ) goto L_005f95a7;
L_005f956d:; BB(0x005f956d);
    /* 005f956d: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 005f9571: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9572: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 005f9576: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9577: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 005f957b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f957c: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 005f9580: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9581: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9582: call 0x5e911c */ r_esp -= 4; W32(r_esp, 0x5f9587u); f_005e911c();
    /* 005f9587: ret 0x14 */ FN_RET(0x005f9534); r_esp += 24; return;
L_005f958a:; BB(0x005f958a);
    /* 005f958a: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 005f958e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f958f: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 005f9593: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9594: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 005f9598: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9599: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 005f959d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f959e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f959f: call 0x5e911c */ r_esp -= 4; W32(r_esp, 0x5f95a4u); f_005e911c();
    /* 005f95a4: ret 0x14 */ FN_RET(0x005f9534); r_esp += 24; return;
L_005f95a7:; BB(0x005f95a7);
    /* 005f95a7: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005f95ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f95ac: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005f95b0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f95b1: call 0x5f95bc */ r_esp -= 4; W32(r_esp, 0x5f95b6u); f_005f95bc();
    /* 005f95b6: ret 0x14 */ FN_RET(0x005f9534); r_esp += 24; return;
}

void f_005f95bc(void) /* sub_5F95BC */
{
    FN_ENTER(0x005f95bc);
    /* 005f95bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f95bd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f95be: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f95c1: mov edx, ecx */ r_edx = r_ecx;
    /* 005f95c3: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 005f95c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f95c9: je 0x5f9678 */ if (fZ) goto L_005f9678;
L_005f95cf:; BB(0x005f95cf);
    /* 005f95cf: mov eax, dword ptr [edx + 0xf8] */ r_eax = R32((u32)(r_edx+0xf8u));
    /* 005f95d5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f95d7: je 0x5f9678 */ if (fZ) goto L_005f9678;
L_005f95dd:; BB(0x005f95dd);
    /* 005f95dd: mov edx, dword ptr [edx + 0x240] */ r_edx = R32((u32)(r_edx+0x240u));
    /* 005f95e3: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f95e6: jne 0x5f9632 */ if (!fZ) goto L_005f9632;
L_005f95e8:; BB(0x005f95e8);
    /* 005f95e8: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 005f95ec: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 005f95ee: mov dword ptr [esp + 8], 0xb */ W32((u32)(r_esp+0x8u), 0xbu);
    /* 005f95f6: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 005f95f9: mov dword ptr [esp + 0xc], 0x41a00000 */ W32((u32)(r_esp+0xcu), 0x41a00000u);
    /* 005f9601: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f9603: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f9605: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f9607: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f9609: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f960b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f960d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f960f: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 005f9614: add edx, dword ptr [ecx + 0xa4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xa4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f961a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f961b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f961c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f961d: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9622: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 005f9624: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9625: call dword ptr [ebx + 0x60] */ { u32 t = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, 0x5f9628u); call_ind(t); }
    /* 005f9628: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005f962a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f962d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f962e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f962f: ret 8 */ FN_RET(0x005f95bc); r_esp += 12; return;
L_005f9632:; BB(0x005f9632);
    /* 005f9632: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9635: jne 0x5f9678 */ if (!fZ) goto L_005f9678;
L_005f9637:; BB(0x005f9637);
    /* 005f9637: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 005f963b: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 005f963d: mov dword ptr [esp], 0xc */ W32((u32)(r_esp), 0xcu);
    /* 005f9644: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 005f9647: mov dword ptr [esp + 4], 0x41a00000 */ W32((u32)(r_esp+0x4u), 0x41a00000u);
    /* 005f964f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f9651: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f9653: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f9655: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f9657: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f9659: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f965b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f965d: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 005f9662: add edx, dword ptr [ecx + 0xa4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xa4u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f9668: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f9669: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f966a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f966b: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9670: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005f9672: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9673: call dword ptr [ebx + 0x60] */ { u32 t = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, 0x5f9676u); call_ind(t); }
    /* 005f9676: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005f9678:; BB(0x005f9678);
    /* 005f9678: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f967b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f967c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f967d: ret 8 */ FN_RET(0x005f95bc); r_esp += 12; return;
}

void f_005f9680(void) /* sub_5F9680 */
{
    FN_ENTER(0x005f9680);
    /* 005f9680: mov dword ptr [0xa8e114], 0x3f800000 */ W32((u32)(0xa8e114u), 0x3f800000u);
    /* 005f968a: mov dword ptr [0xa8e118], 0x41000000 */ W32((u32)(0xa8e118u), 0x41000000u);
    /* 005f9694: mov dword ptr [0xa8e11c], 0x3fc00000 */ W32((u32)(0xa8e11cu), 0x3fc00000u);
    /* 005f969e: ret  */ FN_RET(0x005f9680); r_esp += 4; return;
}

void f_005f96a0(void) /* sub_5F96A0 */
{
    FN_ENTER(0x005f96a0);
    /* 005f96a0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f96a1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f96a3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f96a5: push 0x8ddc98 */ { u32 v = 0x8ddc98u; r_esp -= 4; W32(r_esp, v); }
    /* 005f96aa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f96b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f96b1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f96b8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f96bb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f96be: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f96c1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f96c4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f96c7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f96ca: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f96cd: mov eax, ecx */ r_eax = r_ecx;
    /* 005f96cf: mov dword ptr [eax], 0xb19160 */ W32((u32)(r_eax), 0xb19160u);
    /* 005f96d5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f96dc: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f96e1u); f_005e61c8();
    /* 005f96e1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f96e4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f96e6: jne 0x5f96f8 */ if (!fZ) goto L_005f96f8;
L_005f96e8:; BB(0x005f96e8);
    /* 005f96e8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f96eb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f96f2: mov esp, ebp */ r_esp = r_ebp;
    /* 005f96f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f96f5: ret 4 */ FN_RET(0x005f96a0); r_esp += 8; return;
L_005f96f8:; BB(0x005f96f8);
    /* 005f96f8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f96fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f96fc: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f9701u); f_005c2f74();
    /* 005f9701: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f9702: jmp 0x5f96e8 */ goto L_005f96e8;
}

void f_005f9704(void) /* sub_5F9704 */
{
    FN_ENTER(0x005f9704);
    /* 005f9704: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f9705: mov esi, ecx */ r_esi = r_ecx;
    /* 005f9707: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005f970c: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f970f: je 0x5f9713 */ if (fZ) goto L_005f9713;
L_005f9711:; BB(0x005f9711);
    /* 005f9711: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f9712: ret  */ FN_RET(0x005f9704); r_esp += 4; return;
L_005f9713:; BB(0x005f9713);
    /* 005f9713: mov edx, dword ptr [esi + 0x240] */ r_edx = R32((u32)(r_esi+0x240u));
    /* 005f9719: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f971b: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5f9720u); f_00830c04();
    /* 005f9720: push 0x1999 */ { u32 v = 0x1999u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9725: add esi, 0x240 */ {  u32 a = r_esi; u32 b = 0x240u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005f972b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f972c: call 0x5dd6d0 */ r_esp -= 4; W32(r_esp, 0x5f9731u); f_005dd6d0();
    /* 005f9731: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f9734: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f9735: ret  */ FN_RET(0x005f9704); r_esp += 4; return;
}

void f_005f9738(void) /* sub_5F9738 */
{
    FN_ENTER(0x005f9738);
    /* 005f9738: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f9739: mov esi, ecx */ r_esi = r_ecx;
    /* 005f973b: mov ecx, esi */ r_ecx = r_esi;
    /* 005f973d: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5f9742u); f_005e90b0();
    /* 005f9742: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9744: je 0x5f9764 */ if (fZ) goto L_005f9764;
L_005f9746:; BB(0x005f9746);
    /* 005f9746: push 0x3d4ccccd */ { u32 v = 0x3d4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 005f974b: mov ecx, esi */ r_ecx = r_esi;
    /* 005f974d: call 0x5e75bc */ r_esp -= 4; W32(r_esp, 0x5f9752u); f_005e75bc();
    /* 005f9752: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9754: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9756: mov ecx, esi */ r_ecx = r_esi;
    /* 005f9758: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005f975d: call 0x5e6a88 */ r_esp -= 4; W32(r_esp, 0x5f9762u); f_005e6a88();
    /* 005f9762: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f9763: ret  */ FN_RET(0x005f9738); r_esp += 4; return;
L_005f9764:; BB(0x005f9764);
    /* 005f9764: mov ecx, esi */ r_ecx = r_esi;
    /* 005f9766: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5f976bu); f_005e90e8();
    /* 005f976b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f976c: ret  */ FN_RET(0x005f9738); r_esp += 4; return;
}

void f_005f9770(void) /* sub_5F9770 */
{
    FN_ENTER(0x005f9770);
    /* 005f9770: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f9771: mov ebp, esp */ r_ebp = r_esp;
    /* 005f9773: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f9775: push 0x8ddcc0 */ { u32 v = 0x8ddcc0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f977a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f9780: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9781: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f9788: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f978b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f978e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f9791: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f9794: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f9797: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f979a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f979c: je 0x5f97f3 */ if (fZ) goto L_005f97f3;
L_005f979e:; BB(0x005f979e);
    /* 005f979e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f97a5: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005f97aa: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f97afu); f_005caba4();
    /* 005f97af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f97b0: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f97b3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f97b5: je 0x5f97ef */ if (fZ) goto L_005f97ef;
L_005f97b7:; BB(0x005f97b7);
    /* 005f97b7: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f97be: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f97c5: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f97c8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f97cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f97cc: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f97d2: call 0x5f9804 */ r_esp -= 4; W32(r_esp, 0x5f97d7u); f_005f9804();
    /* 005f97d7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f97da: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f97e1:; BB(0x005f97e1);
    /* 005f97e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f97e4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f97eb: mov esp, ebp */ r_esp = r_ebp;
    /* 005f97ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f97ee: ret  */ FN_RET(0x005f9770); r_esp += 4; return;
L_005f97ef:; BB(0x005f97ef);
    /* 005f97ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f97f1: jmp 0x5f97e1 */ goto L_005f97e1;
L_005f97f3:; BB(0x005f97f3);
    /* 005f97f3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f97f5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f97f8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f97ff: mov esp, ebp */ r_esp = r_ebp;
    /* 005f9801: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9802: ret  */ FN_RET(0x005f9770); r_esp += 4; return;
}

void f_005f9804(void) /* sub_5F9804 */
{
    FN_ENTER(0x005f9804);
    /* 005f9804: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9805: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f9807: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f980b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f980f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f9811: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f9816u); f_005e959c();
    /* 005f9816: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f981c: mov dword ptr [ebx], 0xb19160 */ W32((u32)(r_ebx), 0xb19160u);
    /* 005f9822: or edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f9825: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f982b: mov dword ptr [ebx + 0x238], 0x5cf44c */ W32((u32)(r_ebx+0x238u), 0x5cf44cu);
    /* 005f9835: mov eax, ebx */ r_eax = r_ebx;
    /* 005f9837: mov dword ptr [ebx + 0x208], 0x41200000 */ W32((u32)(r_ebx+0x208u), 0x41200000u);
    /* 005f9841: mov dword ptr [ebx + 0x240], 0 */ W32((u32)(r_ebx+0x240u), 0x0u);
    /* 005f984b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f984c: ret 8 */ FN_RET(0x005f9804); r_esp += 12; return;
}

void f_005f9850(void) /* sub_5F9850 */
{
    FN_ENTER(0x005f9850);
    /* 005f9850: mov dword ptr [0xa8e120], 0x3f800000 */ W32((u32)(0xa8e120u), 0x3f800000u);
    /* 005f985a: mov dword ptr [0xa8e124], 0x41000000 */ W32((u32)(0xa8e124u), 0x41000000u);
    /* 005f9864: mov dword ptr [0xa8e128], 0x3fc00000 */ W32((u32)(0xa8e128u), 0x3fc00000u);
    /* 005f986e: ret  */ FN_RET(0x005f9850); r_esp += 4; return;
}

void f_005f9870(void) /* sub_5F9870 */
{
    FN_ENTER(0x005f9870);
    /* 005f9870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f9871: mov ebp, esp */ r_ebp = r_esp;
    /* 005f9873: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f9875: push 0x8ddcdc */ { u32 v = 0x8ddcdcu; r_esp -= 4; W32(r_esp, v); }
    /* 005f987a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f9880: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9881: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f9888: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f988b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f988e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f9891: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f9894: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f9897: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f989a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f989d: mov eax, ecx */ r_eax = r_ecx;
    /* 005f989f: mov dword ptr [eax], 0xb192e0 */ W32((u32)(r_eax), 0xb192e0u);
    /* 005f98a5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f98ac: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f98b1u); f_005e61c8();
    /* 005f98b1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f98b4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f98b6: jne 0x5f98c8 */ if (!fZ) goto L_005f98c8;
L_005f98b8:; BB(0x005f98b8);
    /* 005f98b8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f98bb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f98c2: mov esp, ebp */ r_esp = r_ebp;
    /* 005f98c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f98c5: ret 4 */ FN_RET(0x005f9870); r_esp += 8; return;
L_005f98c8:; BB(0x005f98c8);
    /* 005f98c8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f98cb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f98cc: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f98d1u); f_005c2f74();
    /* 005f98d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f98d2: jmp 0x5f98b8 */ goto L_005f98b8;
}

void f_005f98d4(void) /* sub_5F98D4 */
{
    FN_ENTER(0x005f98d4);
    /* 005f98d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f98d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f98d6: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f98d9: mov edi, ecx */ r_edi = r_ecx;
    /* 005f98db: mov ecx, edi */ r_ecx = r_edi;
    /* 005f98dd: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5f98e2u); f_005e90b0();
    /* 005f98e2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f98e4: je 0x5f99b2 */ if (fZ) goto L_005f99b2;
L_005f98ea:; BB(0x005f98ea);
    /* 005f98ea: mov eax, dword ptr [edi + 0xf8] */ r_eax = R32((u32)(r_edi+0xf8u));
    /* 005f98f0: mov edx, dword ptr [eax + 0x8d0] */ r_edx = R32((u32)(r_eax+0x8d0u));
    /* 005f98f6: mov dword ptr [edi + 0x240], edx */ W32((u32)(r_edi+0x240u), r_edx);
    /* 005f98fc: mov esi, dword ptr [eax + 0x8d4] */ r_esi = R32((u32)(r_eax+0x8d4u));
    /* 005f9902: mov dword ptr [edi + 0x244], esi */ W32((u32)(r_edi+0x244u), r_esi);
    /* 005f9908: mov edx, dword ptr [eax + 0x8d8] */ r_edx = R32((u32)(r_eax+0x8d8u));
    /* 005f990e: mov dword ptr [edi + 0x248], edx */ W32((u32)(r_edi+0x248u), r_edx);
    /* 005f9914: mov edx, dword ptr [eax + 0x8dc] */ r_edx = R32((u32)(r_eax+0x8dcu));
    /* 005f991a: mov dword ptr [edi + 0x24c], edx */ W32((u32)(r_edi+0x24cu), r_edx);
    /* 005f9920: mov edx, dword ptr [eax + 0x8e0] */ r_edx = R32((u32)(r_eax+0x8e0u));
    /* 005f9926: mov dword ptr [edi + 0x250], edx */ W32((u32)(r_edi+0x250u), r_edx);
    /* 005f992c: mov edx, dword ptr [eax + 0x8e4] */ r_edx = R32((u32)(r_eax+0x8e4u));
    /* 005f9932: mov dword ptr [edi + 0x254], edx */ W32((u32)(r_edi+0x254u), r_edx);
    /* 005f9938: mov edx, dword ptr [eax + 0x8e8] */ r_edx = R32((u32)(r_eax+0x8e8u));
    /* 005f993e: mov dword ptr [edi + 0x258], edx */ W32((u32)(r_edi+0x258u), r_edx);
    /* 005f9944: mov edx, dword ptr [eax + 0x8ec] */ r_edx = R32((u32)(r_eax+0x8ecu));
    /* 005f994a: mov dword ptr [edi + 0x25c], edx */ W32((u32)(r_edi+0x25cu), r_edx);
    /* 005f9950: mov edx, dword ptr [eax + 0x8f0] */ r_edx = R32((u32)(r_eax+0x8f0u));
    /* 005f9956: mov dword ptr [edi + 0x260], edx */ W32((u32)(r_edi+0x260u), r_edx);
    /* 005f995c: mov edx, dword ptr [eax + 0x8f4] */ r_edx = R32((u32)(r_eax+0x8f4u));
    /* 005f9962: mov dword ptr [edi + 0x264], edx */ W32((u32)(r_edi+0x264u), r_edx);
    /* 005f9968: mov eax, dword ptr [eax + 0x8f8] */ r_eax = R32((u32)(r_eax+0x8f8u));
    /* 005f996e: mov dword ptr [edi + 0x268], eax */ W32((u32)(r_edi+0x268u), r_eax);
    /* 005f9974: lea eax, [edi + 0x26c] */ r_eax = (u32)(r_edi+0x26cu);
    /* 005f997a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f997b: mov ecx, edi */ r_ecx = r_edi;
    /* 005f997d: call 0x5e7534 */ r_esp -= 4; W32(r_esp, 0x5f9982u); f_005e7534();
    /* 005f9982: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005f9984: call 0x77bab4 */ r_esp -= 4; W32(r_esp, 0x5f9989u); f_0077bab4();
    /* 005f9989: mov ecx, eax */ r_ecx = r_eax;
    /* 005f998b: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005f9990: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005f9992: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005f9995: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005f9998: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f999a: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005f999d: jne 0x5f99a4 */ if (!fZ) goto L_005f99a4;
L_005f999f:; BB(0x005f999f);
    /* 005f999f: mov esi, 1 */ r_esi = 0x1u;
L_005f99a4:; BB(0x005f99a4);
    /* 005f99a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f99a5: mov ecx, edi */ r_ecx = r_edi;
    /* 005f99a7: call 0x5c36cc */ r_esp -= 4; W32(r_esp, 0x5f99acu); f_005c36cc();
    /* 005f99ac: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f99af: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f99b0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f99b1: ret  */ FN_RET(0x005f98d4); r_esp += 4; return;
L_005f99b2:; BB(0x005f99b2);
    /* 005f99b2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f99b5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f99b6: mov ecx, edi */ r_ecx = r_edi;
    /* 005f99b8: call 0x5e7534 */ r_esp -= 4; W32(r_esp, 0x5f99bdu); f_005e7534();
    /* 005f99bd: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005f99c0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f99c2: mov esi, dword ptr [edi] */ r_esi = R32((u32)(r_edi));
    /* 005f99c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f99c6: mov ecx, edi */ r_ecx = r_edi;
    /* 005f99c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f99c9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f99ca: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f99cb: call dword ptr [esi + 0xc8] */ { u32 t = R32((u32)(r_esi+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f99d1u); call_ind(t); }
    /* 005f99d1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f99d4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f99d5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f99d6: ret  */ FN_RET(0x005f98d4); r_esp += 4; return;
}

void f_005f9920(void)
{
    FN_ENTER(0x005f9920);
    /* 005f9920: mov edx, dword ptr [eax + 0x8e0] */ r_edx = R32((u32)(r_eax+0x8e0u));
    /* 005f9926: mov dword ptr [edi + 0x250], edx */ W32((u32)(r_edi+0x250u), r_edx);
    /* 005f992c: mov edx, dword ptr [eax + 0x8e4] */ r_edx = R32((u32)(r_eax+0x8e4u));
    /* 005f9932: mov dword ptr [edi + 0x254], edx */ W32((u32)(r_edi+0x254u), r_edx);
    /* 005f9938: mov edx, dword ptr [eax + 0x8e8] */ r_edx = R32((u32)(r_eax+0x8e8u));
    /* 005f993e: mov dword ptr [edi + 0x258], edx */ W32((u32)(r_edi+0x258u), r_edx);
    /* 005f9944: mov edx, dword ptr [eax + 0x8ec] */ r_edx = R32((u32)(r_eax+0x8ecu));
    /* 005f994a: mov dword ptr [edi + 0x25c], edx */ W32((u32)(r_edi+0x25cu), r_edx);
    /* 005f9950: mov edx, dword ptr [eax + 0x8f0] */ r_edx = R32((u32)(r_eax+0x8f0u));
    /* 005f9956: mov dword ptr [edi + 0x260], edx */ W32((u32)(r_edi+0x260u), r_edx);
    /* 005f995c: mov edx, dword ptr [eax + 0x8f4] */ r_edx = R32((u32)(r_eax+0x8f4u));
    /* 005f9962: mov dword ptr [edi + 0x264], edx */ W32((u32)(r_edi+0x264u), r_edx);
    /* 005f9968: mov eax, dword ptr [eax + 0x8f8] */ r_eax = R32((u32)(r_eax+0x8f8u));
    /* 005f996e: mov dword ptr [edi + 0x268], eax */ W32((u32)(r_edi+0x268u), r_eax);
    /* 005f9974: lea eax, [edi + 0x26c] */ r_eax = (u32)(r_edi+0x26cu);
    /* 005f997a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f997b: mov ecx, edi */ r_ecx = r_edi;
    /* 005f997d: call 0x5e7534 */ r_esp -= 4; W32(r_esp, 0x5f9982u); f_005e7534();
    /* 005f9982: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 005f9984: call 0x77bab4 */ r_esp -= 4; W32(r_esp, 0x5f9989u); f_0077bab4();
    /* 005f9989: mov ecx, eax */ r_ecx = r_eax;
    /* 005f998b: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005f9990: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005f9992: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005f9995: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005f9998: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f999a: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005f999d: jne 0x5f99a4 */ if (!fZ) goto L_005f99a4;
L_005f999f:; BB(0x005f999f);
    /* 005f999f: mov esi, 1 */ r_esi = 0x1u;
L_005f99a4:; BB(0x005f99a4);
    /* 005f99a4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f99a5: mov ecx, edi */ r_ecx = r_edi;
    /* 005f99a7: call 0x5c36cc */ r_esp -= 4; W32(r_esp, 0x5f99acu); f_005c36cc();
    /* 005f99ac: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f99af: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f99b0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f99b1: ret  */ FN_RET(0x005f9920); r_esp += 4; return;
}

void f_005f99d8(void) /* sub_5F99D8 */
{
    FN_ENTER(0x005f99d8);
    /* 005f99d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f99d9: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f99dc: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f99de: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 005f99e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f99e6: je 0x5f9a30 */ if (fZ) goto L_005f9a30;
L_005f99e8:; BB(0x005f99e8);
    /* 005f99e8: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x5f99edu); f_00807d60();
    /* 005f99ed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f99ef: je 0x5f9a30 */ if (fZ) goto L_005f9a30;
L_005f99f1:; BB(0x005f99f1);
    /* 005f99f1: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 005f99f7: mov eax, dword ptr [ebp + 0xf8] */ r_eax = R32((u32)(r_ebp+0xf8u));
    /* 005f99fd: cmp edx, dword ptr [eax + 0x3f0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9a03: jne 0x5f9a30 */ if (!fZ) goto L_005f9a30;
L_005f9a05:; BB(0x005f9a05);
    /* 005f9a05: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 005f9a09: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9a0b: je 0x5f9a18 */ if (fZ) goto L_005f9a18;
L_005f9a0d:; BB(0x005f9a0d);
    /* 005f9a0d: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 005f9a11: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9a14: jne 0x5f9a30 */ if (!fZ) goto L_005f9a30;
L_005f9a16:; BB(0x005f9a16);
    /* 005f9a16: jmp 0x5f9a37 */ goto L_005f9a37;
L_005f9a18:; BB(0x005f9a18);
    /* 005f9a18: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9a1a: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005f9a1d: lea ecx, [ebp + 0x26c] */ r_ecx = (u32)(r_ebp+0x26cu);
    /* 005f9a23: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005f9a25: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9a26: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9a27: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9a28: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f9a2a: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f9a30u); call_ind(t); }
L_005f9a30:; BB(0x005f9a30);
    /* 005f9a30: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f9a33: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9a34: ret 4 */ FN_RET(0x005f99d8); r_esp += 8; return;
L_005f9a37:; BB(0x005f9a37);
    /* 005f9a37: mov ecx, dword ptr [ebp + 0x240] */ r_ecx = R32((u32)(r_ebp+0x240u));
    /* 005f9a3d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005f9a3f: jl 0x5f9a46 */ if ((fS!=fO)) goto L_005f9a46;
L_005f9a41:; BB(0x005f9a41);
    /* 005f9a41: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f9a44: jle 0x5f9a68 */ if ((fZ||fS!=fO)) goto L_005f9a68;
L_005f9a46:; BB(0x005f9a46);
    /* 005f9a46: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005f9a49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9a4a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f9a4c: call 0x5e7534 */ r_esp -= 4; W32(r_esp, 0x5f9a51u); f_005e7534();
    /* 005f9a51: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 005f9a54: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9a56: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005f9a59: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005f9a5b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9a5c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9a5d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9a5e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f9a60: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f9a66u); call_ind(t); }
    /* 005f9a66: jmp 0x5f9a30 */ goto L_005f9a30;
L_005f9a68:; BB(0x005f9a68);
    /* 005f9a68: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005f9a6a: jle 0x5f9a46 */ if ((fZ||fS!=fO)) goto L_005f9a46;
L_005f9a6c:; BB(0x005f9a6c);
    /* 005f9a6c: mov edx, 0 */ r_edx = 0x0u;
    /* 005f9a71: jl 0x5f9a78 */ if ((fS!=fO)) goto L_005f9a78;
L_005f9a73:; BB(0x005f9a73);
    /* 005f9a73: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f9a76: jle 0x5f9a7a */ if ((fZ||fS!=fO)) goto L_005f9a7a;
L_005f9a78:; BB(0x005f9a78);
    /* 005f9a78: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_005f9a7a:; BB(0x005f9a7a);
    /* 005f9a7a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9a7c: je 0x5f9a30 */ if (fZ) goto L_005f9a30;
L_005f9a7e:; BB(0x005f9a7e);
    /* 005f9a7e: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 005f9a82: mov ebx, ebp */ r_ebx = r_ebp;
    /* 005f9a84: mov ebp, edx */ r_ebp = r_edx;
    /* 005f9a86: jmp 0x5f9a8e */ goto L_005f9a8e;
L_005f9a88:; BB(0x005f9a88);
    /* 005f9a88: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
L_005f9a8e:; BB(0x005f9a8e);
    /* 005f9a8e: movzx ecx, word ptr [ebx + ebp*4 + 0x244] */ r_ecx = (u32)R16((u32)(r_ebx+r_ebp*4+0x244u));
    /* 005f9a96: movsx edx, word ptr [ebx + ebp*4 + 0x246] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+r_ebp*4+0x246u));
    /* 005f9a9e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9a9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9aa0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9aa1: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f9aa7: call 0x5cef2c */ r_esp -= 4; W32(r_esp, 0x5f9aacu); f_005cef2c();
    /* 005f9aac: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f9aaf: mov eax, dword ptr [ebx + 0x240] */ r_eax = R32((u32)(r_ebx+0x240u));
    /* 005f9ab5: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005f9ab8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005f9aba: jl 0x5f9ac1 */ if ((fS!=fO)) goto L_005f9ac1;
L_005f9abc:; BB(0x005f9abc);
    /* 005f9abc: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f9abf: jle 0x5f9ac3 */ if ((fZ||fS!=fO)) goto L_005f9ac3;
L_005f9ac1:; BB(0x005f9ac1);
    /* 005f9ac1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005f9ac3:; BB(0x005f9ac3);
    /* 005f9ac3: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9ac5: jne 0x5f9a88 */ if (!fZ) goto L_005f9a88;
L_005f9ac7:; BB(0x005f9ac7);
    /* 005f9ac7: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 005f9acb: jmp 0x5f9a30 */ goto L_005f9a30;
}

void f_005f9ad0(void) /* sub_5F9AD0 */
{
    FN_ENTER(0x005f9ad0);
    /* 005f9ad0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f9ad1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f9ad3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f9ad5: push 0x8ddd04 */ { u32 v = 0x8ddd04u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9ada: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f9ae0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9ae1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f9ae8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f9aeb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f9aee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f9af1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f9af4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f9af7: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f9afa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9afc: je 0x5f9b53 */ if (fZ) goto L_005f9b53;
L_005f9afe:; BB(0x005f9afe);
    /* 005f9afe: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f9b05: push 0x278 */ { u32 v = 0x278u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9b0a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f9b0fu); f_005caba4();
    /* 005f9b0f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f9b10: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f9b13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9b15: je 0x5f9b4f */ if (fZ) goto L_005f9b4f;
L_005f9b17:; BB(0x005f9b17);
    /* 005f9b17: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f9b1e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f9b25: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f9b28: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f9b2b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9b2c: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f9b32: call 0x5f9b64 */ r_esp -= 4; W32(r_esp, 0x5f9b37u); f_005f9b64();
    /* 005f9b37: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f9b3a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f9b41:; BB(0x005f9b41);
    /* 005f9b41: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9b44: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f9b4b: mov esp, ebp */ r_esp = r_ebp;
    /* 005f9b4d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9b4e: ret  */ FN_RET(0x005f9ad0); r_esp += 4; return;
L_005f9b4f:; BB(0x005f9b4f);
    /* 005f9b4f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f9b51: jmp 0x5f9b41 */ goto L_005f9b41;
L_005f9b53:; BB(0x005f9b53);
    /* 005f9b53: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f9b55: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9b58: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f9b5f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f9b61: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9b62: ret  */ FN_RET(0x005f9ad0); r_esp += 4; return;
}

void f_005f9b64(void) /* sub_5F9B64 */
{
    FN_ENTER(0x005f9b64);
    /* 005f9b64: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f9b65: mov ebp, esp */ r_ebp = r_esp;
    /* 005f9b67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f9b69: push 0x8ddd20 */ { u32 v = 0x8ddd20u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9b6e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f9b74: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9b75: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f9b7c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f9b7f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f9b82: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f9b85: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f9b88: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f9b8b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f9b8e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f9b91: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f9b94: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f9b99u); f_005e959c();
    /* 005f9b99: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f9ba0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f9ba3: mov dword ptr [ecx], 0xb192e0 */ W32((u32)(r_ecx), 0xb192e0u);
    /* 005f9ba9: lea esi, [ecx + 0x240] */ r_esi = (u32)(r_ecx+0x240u);
    /* 005f9baf: add ecx, 0x244 */ {  u32 a = r_ecx; u32 b = 0x244u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f9bb5: mov ebx, 0xa */ r_ebx = 0xau;
L_005f9bba:; BB(0x005f9bba);
    /* 005f9bba: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005f9bbf: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 005f9bc2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005f9bc4: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 005f9bc8: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f9bcb: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 005f9bce: jne 0x5f9bba */ if (!fZ) goto L_005f9bba;
L_005f9bd0:; BB(0x005f9bd0);
    /* 005f9bd0: mov ecx, esi */ r_ecx = r_esi;
    /* 005f9bd2: call 0x6a2e30 */ r_esp -= 4; W32(r_esp, 0x5f9bd7u); f_006a2e30();
    /* 005f9bd7: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f9bda: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f9bdd: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f9be0: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f9be3: mov edx, dword ptr [eax + 0x1dc] */ r_edx = R32((u32)(r_eax+0x1dcu));
    /* 005f9be9: or edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f9bec: mov dword ptr [eax + 0x1dc], edx */ W32((u32)(r_eax+0x1dcu), r_edx);
    /* 005f9bf2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9bf5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f9bfc: mov esp, ebp */ r_esp = r_ebp;
    /* 005f9bfe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9bff: ret 8 */ FN_RET(0x005f9b64); r_esp += 12; return;
}

void f_005f9c04(void) /* sub_5F9C04 */
{
    FN_ENTER(0x005f9c04);
    /* 005f9c04: mov dword ptr [0xa8e12c], 0x3f800000 */ W32((u32)(0xa8e12cu), 0x3f800000u);
    /* 005f9c0e: mov dword ptr [0xa8e130], 0x41000000 */ W32((u32)(0xa8e130u), 0x41000000u);
    /* 005f9c18: mov dword ptr [0xa8e134], 0x3fc00000 */ W32((u32)(0xa8e134u), 0x3fc00000u);
    /* 005f9c22: ret  */ FN_RET(0x005f9c04); r_esp += 4; return;
}

void f_005f9c24(void) /* sub_5F9C24 */
{
    FN_ENTER(0x005f9c24);
    /* 005f9c24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9c25: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f9c27: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f9c29: call 0x5f9c48 */ r_esp -= 4; W32(r_esp, 0x5f9c2eu); f_005f9c48();
    /* 005f9c2e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f9c32: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f9c34: jne 0x5f9c3a */ if (!fZ) goto L_005f9c3a;
L_005f9c36:; BB(0x005f9c36);
    /* 005f9c36: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f9c37: ret 4 */ FN_RET(0x005f9c24); r_esp += 8; return;
L_005f9c3a:; BB(0x005f9c3a);
    /* 005f9c3a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9c3b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f9c40u); f_005c2f74();
    /* 005f9c40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f9c41: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f9c42: ret 4 */ FN_RET(0x005f9c24); r_esp += 8; return;
}

void f_005f9c48(void) /* sub_5F9C48 */
{
    FN_ENTER(0x005f9c48);
    /* 005f9c48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f9c49: mov ebp, esp */ r_ebp = r_esp;
    /* 005f9c4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f9c4d: push 0x8ddd3c */ { u32 v = 0x8ddd3cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f9c52: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f9c58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9c59: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f9c60: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f9c63: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f9c66: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f9c69: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f9c6c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f9c6f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f9c72: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f9c75: mov dword ptr [ecx], 0xb19440 */ W32((u32)(r_ecx), 0xb19440u);
    /* 005f9c7b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f9c82: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f9c87u); f_005e61c8();
    /* 005f9c87: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9c8a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f9c91: mov esp, ebp */ r_esp = r_ebp;
    /* 005f9c93: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9c94: ret  */ FN_RET(0x005f9c48); r_esp += 4; return;
}

void f_005f9c98(void) /* sub_5F9C98 */
{
    FN_ENTER(0x005f9c98);
    /* 005f9c98: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f9c99: mov esi, ecx */ r_esi = r_ecx;
    /* 005f9c9b: mov ecx, esi */ r_ecx = r_esi;
    /* 005f9c9d: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5f9ca2u); f_005e90b0();
    /* 005f9ca2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9ca4: je 0x5f9caf */ if (fZ) goto L_005f9caf;
L_005f9ca6:; BB(0x005f9ca6);
    /* 005f9ca6: mov ecx, esi */ r_ecx = r_esi;
    /* 005f9ca8: call 0x5f9cb8 */ r_esp -= 4; W32(r_esp, 0x5f9cadu); f_005f9cb8();
    /* 005f9cad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f9cae: ret  */ FN_RET(0x005f9c98); r_esp += 4; return;
L_005f9caf:; BB(0x005f9caf);
    /* 005f9caf: mov ecx, esi */ r_ecx = r_esi;
    /* 005f9cb1: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5f9cb6u); f_005e90e8();
    /* 005f9cb6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f9cb7: ret  */ FN_RET(0x005f9c98); r_esp += 4; return;
}

void f_005f9cb8(void) /* sub_5F9CB8 */
{
    FN_ENTER(0x005f9cb8);
    /* 005f9cb8: mov eax, dword ptr [ecx + 0xf8] */ r_eax = R32((u32)(r_ecx+0xf8u));
    /* 005f9cbe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f9cc0: je 0x5f9cd1 */ if (fZ) goto L_005f9cd1;
L_005f9cc2:; BB(0x005f9cc2);
    /* 005f9cc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9cc3: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f9cc9: call 0x5dfc54 */ r_esp -= 4; W32(r_esp, 0x5f9cceu); f_005dfc54();
    /* 005f9cce: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005f9cd1:; BB(0x005f9cd1);
    /* 005f9cd1: ret  */ FN_RET(0x005f9cb8); r_esp += 4; return;
}

void f_005f9cd4(void) /* sub_5F9CD4 */
{
    FN_ENTER(0x005f9cd4);
    /* 005f9cd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f9cd5: mov ebp, esp */ r_ebp = r_esp;
    /* 005f9cd7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f9cd9: push 0x8ddd64 */ { u32 v = 0x8ddd64u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9cde: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f9ce4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9ce5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f9cec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f9cef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f9cf2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f9cf5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f9cf8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f9cfb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f9cfe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9d00: je 0x5f9d57 */ if (fZ) goto L_005f9d57;
L_005f9d02:; BB(0x005f9d02);
    /* 005f9d02: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f9d09: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9d0e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f9d13u); f_005caba4();
    /* 005f9d13: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f9d14: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f9d17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9d19: je 0x5f9d53 */ if (fZ) goto L_005f9d53;
L_005f9d1b:; BB(0x005f9d1b);
    /* 005f9d1b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f9d22: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f9d29: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f9d2c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f9d2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9d30: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f9d36: call 0x5f9d68 */ r_esp -= 4; W32(r_esp, 0x5f9d3bu); f_005f9d68();
    /* 005f9d3b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f9d3e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f9d45:; BB(0x005f9d45);
    /* 005f9d45: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9d48: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f9d4f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f9d51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9d52: ret  */ FN_RET(0x005f9cd4); r_esp += 4; return;
L_005f9d53:; BB(0x005f9d53);
    /* 005f9d53: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f9d55: jmp 0x5f9d45 */ goto L_005f9d45;
L_005f9d57:; BB(0x005f9d57);
    /* 005f9d57: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f9d59: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9d5c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f9d63: mov esp, ebp */ r_esp = r_ebp;
    /* 005f9d65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9d66: ret  */ FN_RET(0x005f9cd4); r_esp += 4; return;
}

void f_005f9d68(void) /* sub_5F9D68 */
{
    FN_ENTER(0x005f9d68);
    /* 005f9d68: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9d69: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f9d6b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f9d6f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f9d73: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f9d75: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f9d7au); f_005e959c();
    /* 005f9d7a: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f9d80: mov dword ptr [ebx], 0xb19440 */ W32((u32)(r_ebx), 0xb19440u);
    /* 005f9d86: or edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f9d89: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f9d8f: mov eax, ebx */ r_eax = r_ebx;
    /* 005f9d91: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f9d92: ret 8 */ FN_RET(0x005f9d68); r_esp += 12; return;
}

void f_005f9d98(void) /* sub_5F9D98 */
{
    FN_ENTER(0x005f9d98);
    /* 005f9d98: mov dword ptr [0xa8e138], 0x3f800000 */ W32((u32)(0xa8e138u), 0x3f800000u);
    /* 005f9da2: mov dword ptr [0xa8e13c], 0x41000000 */ W32((u32)(0xa8e13cu), 0x41000000u);
    /* 005f9dac: mov dword ptr [0xa8e140], 0x3fc00000 */ W32((u32)(0xa8e140u), 0x3fc00000u);
    /* 005f9db6: ret  */ FN_RET(0x005f9d98); r_esp += 4; return;
}

void f_005f9db8(void) /* sub_5F9DB8 */
{
    FN_ENTER(0x005f9db8);
    /* 005f9db8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f9db9: mov ebp, esp */ r_ebp = r_esp;
    /* 005f9dbb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f9dbd: push 0x8ddd80 */ { u32 v = 0x8ddd80u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9dc2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f9dc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9dc9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f9dd0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f9dd3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f9dd6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f9dd9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f9ddc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f9ddf: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f9de2: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f9de5: mov eax, ecx */ r_eax = r_ecx;
    /* 005f9de7: mov dword ptr [eax], 0xb195a0 */ W32((u32)(r_eax), 0xb195a0u);
    /* 005f9ded: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f9df4: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f9df9u); f_005e61c8();
    /* 005f9df9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f9dfc: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f9dfe: jne 0x5f9e10 */ if (!fZ) goto L_005f9e10;
L_005f9e00:; BB(0x005f9e00);
    /* 005f9e00: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9e03: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f9e0a: mov esp, ebp */ r_esp = r_ebp;
    /* 005f9e0c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9e0d: ret 4 */ FN_RET(0x005f9db8); r_esp += 8; return;
L_005f9e10:; BB(0x005f9e10);
    /* 005f9e10: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f9e13: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9e14: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f9e19u); f_005c2f74();
    /* 005f9e19: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f9e1a: jmp 0x5f9e00 */ goto L_005f9e00;
}

void f_005f9e1c(void) /* sub_5F9E1C */
{
    FN_ENTER(0x005f9e1c);
    /* 005f9e1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f9e1d: mov ebp, esp */ r_ebp = r_esp;
    /* 005f9e1f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f9e21: push 0x8ddda8 */ { u32 v = 0x8ddda8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9e26: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f9e2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9e2d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f9e34: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f9e37: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f9e3a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f9e3d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f9e40: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f9e43: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f9e46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9e48: je 0x5f9e9f */ if (fZ) goto L_005f9e9f;
L_005f9e4a:; BB(0x005f9e4a);
    /* 005f9e4a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f9e51: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9e56: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f9e5bu); f_005caba4();
    /* 005f9e5b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f9e5c: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f9e5f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9e61: je 0x5f9e9b */ if (fZ) goto L_005f9e9b;
L_005f9e63:; BB(0x005f9e63);
    /* 005f9e63: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f9e6a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f9e71: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f9e74: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f9e77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f9e78: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f9e7e: call 0x5f9eb0 */ r_esp -= 4; W32(r_esp, 0x5f9e83u); f_005f9eb0();
    /* 005f9e83: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f9e86: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f9e8d:; BB(0x005f9e8d);
    /* 005f9e8d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9e90: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f9e97: mov esp, ebp */ r_esp = r_ebp;
    /* 005f9e99: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9e9a: ret  */ FN_RET(0x005f9e1c); r_esp += 4; return;
L_005f9e9b:; BB(0x005f9e9b);
    /* 005f9e9b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f9e9d: jmp 0x5f9e8d */ goto L_005f9e8d;
L_005f9e9f:; BB(0x005f9e9f);
    /* 005f9e9f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f9ea1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f9ea4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f9eab: mov esp, ebp */ r_esp = r_ebp;
    /* 005f9ead: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9eae: ret  */ FN_RET(0x005f9e1c); r_esp += 4; return;
}

void f_005f9eb0(void) /* sub_5F9EB0 */
{
    FN_ENTER(0x005f9eb0);
    /* 005f9eb0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9eb1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f9eb3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f9eb7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f9ebb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f9ebd: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f9ec2u); f_005e959c();
    /* 005f9ec2: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f9ec8: mov dword ptr [ebx], 0xb195a0 */ W32((u32)(r_ebx), 0xb195a0u);
    /* 005f9ece: or edx, 0x201 */ {  u32 a = r_edx; u32 b = 0x201u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f9ed4: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f9eda: mov eax, ebx */ r_eax = r_ebx;
    /* 005f9edc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f9edd: ret 8 */ FN_RET(0x005f9eb0); r_esp += 12; return;
}

void f_005f9ee0(void) /* sub_5F9EE0 */
{
    FN_ENTER(0x005f9ee0);
    /* 005f9ee0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f9ee1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f9ee2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f9ee3: mov esi, ecx */ r_esi = r_ecx;
    /* 005f9ee5: movsx ebp, word ptr [esi + 0x20c] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_esi+0x20cu));
    /* 005f9eec: mov ebx, dword ptr [esi + 0xfc] */ r_ebx = R32((u32)(r_esi+0xfcu));
    /* 005f9ef2: mov ecx, esi */ r_ecx = r_esi;
    /* 005f9ef4: call 0x5f9fa0 */ r_esp -= 4; W32(r_esp, 0x5f9ef9u); f_005f9fa0();
    /* 005f9ef9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9efb: jne 0x5f9f18 */ if (!fZ) goto L_005f9f18;
L_005f9efd:; BB(0x005f9efd);
    /* 005f9efd: mov edx, dword ptr [0xa8d848] */ r_edx = R32((u32)(0xa8d848u));
    /* 005f9f03: mov eax, 8 */ r_eax = 0x8u;
    /* 005f9f08: mov word ptr [esi + 0x20c], ax */ W16((u32)(r_esi+0x20cu), (u16)r_eax);
    /* 005f9f0f: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005f9f12: mov dword ptr [0xa8d848], edx */ W32((u32)(0xa8d848u), r_edx);
L_005f9f18:; BB(0x005f9f18);
    /* 005f9f18: mov ecx, esi */ r_ecx = r_esi;
    /* 005f9f1a: call 0x5e84a8 */ r_esp -= 4; W32(r_esp, 0x5f9f1fu); f_005e84a8();
    /* 005f9f1f: movsx eax, word ptr [esi + 0x20c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20cu));
    /* 005f9f26: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9f29: je 0x5f9f34 */ if (fZ) goto L_005f9f34;
L_005f9f2b:; BB(0x005f9f2b);
    /* 005f9f2b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9f2d: mov ecx, esi */ r_ecx = r_esi;
    /* 005f9f2f: call 0x5e6254 */ r_esp -= 4; W32(r_esp, 0x5f9f34u); f_005e6254();
L_005f9f34:; BB(0x005f9f34);
    /* 005f9f34: mov eax, dword ptr [esi + 0x1ac] */ r_eax = R32((u32)(r_esi+0x1acu));
    /* 005f9f3a: mov dword ptr [esi + 0xfc], eax */ W32((u32)(r_esi+0xfcu), r_eax);
    /* 005f9f40: mov ecx, esi */ r_ecx = r_esi;
    /* 005f9f42: call 0x5f9fa0 */ r_esp -= 4; W32(r_esp, 0x5f9f47u); f_005f9fa0();
    /* 005f9f47: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f9f49: jne 0x5f9f68 */ if (!fZ) goto L_005f9f68;
L_005f9f4b:; BB(0x005f9f4b);
    /* 005f9f4b: mov edx, dword ptr [0xa8d848] */ r_edx = R32((u32)(0xa8d848u));
    /* 005f9f51: mov eax, 8 */ r_eax = 0x8u;
    /* 005f9f56: mov word ptr [esi + 0x20c], ax */ W16((u32)(r_esi+0x20cu), (u16)r_eax);
    /* 005f9f5d: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005f9f60: mov dword ptr [0xa8d848], edx */ W32((u32)(0xa8d848u), r_edx);
    /* 005f9f66: jmp 0x5f9f6f */ goto L_005f9f6f;
L_005f9f68:; BB(0x005f9f68);
    /* 005f9f68: mov word ptr [esi + 0x20c], bp */ W16((u32)(r_esi+0x20cu), (u16)r_ebp);
L_005f9f6f:; BB(0x005f9f6f);
    /* 005f9f6f: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9f71: mov ecx, esi */ r_ecx = r_esi;
    /* 005f9f73: call 0x5e6334 */ r_esp -= 4; W32(r_esp, 0x5f9f78u); f_005e6334();
    /* 005f9f78: movsx eax, word ptr [esi + 0x20c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20cu));
    /* 005f9f7f: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f9f82: je 0x5f9f8d */ if (fZ) goto L_005f9f8d;
L_005f9f84:; BB(0x005f9f84);
    /* 005f9f84: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9f86: mov ecx, esi */ r_ecx = r_esi;
    /* 005f9f88: call 0x5e6254 */ r_esp -= 4; W32(r_esp, 0x5f9f8du); f_005e6254();
L_005f9f8d:; BB(0x005f9f8d);
    /* 005f9f8d: mov dword ptr [esi + 0xfc], ebx */ W32((u32)(r_esi+0xfcu), r_ebx);
    /* 005f9f93: mov word ptr [esi + 0x20c], bp */ W16((u32)(r_esi+0x20cu), (u16)r_ebp);
    /* 005f9f9a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f9f9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f9f9c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f9f9d: ret  */ FN_RET(0x005f9ee0); r_esp += 4; return;
}

void f_005f9fa0(void) /* sub_5F9FA0 */
{
    FN_ENTER(0x005f9fa0);
    /* 005f9fa0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f9fa3: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5f9fa8u); f_008587a5();
    /* 005f9fa8: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005f9fab: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005f9fae: fdiv dword ptr [0x92ddc0] */ ST(0) = ST(0) / R_F32((u32)(0x92ddc0u));
    /* 005f9fb4: fcomp dword ptr [0x92ddbc] */ fx_compare(ST(0), R_F32((u32)(0x92ddbcu))); FPOP();
    /* 005f9fba: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005f9fbc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005f9fbd: jae 0x5f9fc5 */ if (!fC) goto L_005f9fc5;
L_005f9fbf:; BB(0x005f9fbf);
    /* 005f9fbf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f9fc1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f9fc4: ret  */ FN_RET(0x005f9fa0); r_esp += 4; return;
L_005f9fc5:; BB(0x005f9fc5);
    /* 005f9fc5: mov eax, 1 */ r_eax = 0x1u;
    /* 005f9fca: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f9fcd: ret  */ FN_RET(0x005f9fa0); r_esp += 4; return;
}

void f_005f9fd0(void) /* sub_5F9FD0 */
{
    FN_ENTER(0x005f9fd0);
    /* 005f9fd0: mov dword ptr [0xa8e144], 0x3f800000 */ W32((u32)(0xa8e144u), 0x3f800000u);
    /* 005f9fda: mov dword ptr [0xa8e148], 0x41000000 */ W32((u32)(0xa8e148u), 0x41000000u);
    /* 005f9fe4: mov dword ptr [0xa8e14c], 0x3fc00000 */ W32((u32)(0xa8e14cu), 0x3fc00000u);
    /* 005f9fee: ret  */ FN_RET(0x005f9fd0); r_esp += 4; return;
}

void f_005f9ff0(void) /* sub_5F9FF0 */
{
    FN_ENTER(0x005f9ff0);
    /* 005f9ff0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f9ff1: mov ebp, esp */ r_ebp = r_esp;
    /* 005f9ff3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f9ff5: push 0x8dddc4 */ { u32 v = 0x8dddc4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f9ffa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005fa000: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa001: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005fa008: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005fa00b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005fa00e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005fa011: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005fa014: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005fa017: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005fa01a: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005fa01d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005fa024: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5fa029u); f_005e61c8();
    /* 005fa029: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005fa02c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005fa02e: jne 0x5fa040 */ if (!fZ) goto L_005fa040;
L_005fa030:; BB(0x005fa030);
    /* 005fa030: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005fa033: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005fa03a: mov esp, ebp */ r_esp = r_ebp;
    /* 005fa03c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005fa03d: ret 4 */ FN_RET(0x005f9ff0); r_esp += 8; return;
L_005fa040:; BB(0x005fa040);
    /* 005fa040: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005fa043: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005fa044: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5fa049u); f_005c2f74();
    /* 005fa049: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005fa04a: jmp 0x5fa030 */ goto L_005fa030;
}

