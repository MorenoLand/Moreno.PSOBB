#include "protos.h"

void f_008a90f0(void) /* sub_8A90F0 */
{
    FN_ENTER(0x008a90f0);
    /* 008a90f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a90f1: mov ebp, esp */ r_ebp = r_esp;
    /* 008a90f3: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008a90f6: and dword ptr [ebp - 8], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a90fa: cmp dword ptr [ebx + 0x120], 0 */ {  u32 a = R32((u32)(r_ebx+0x120u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a9101: jle 0x8a9180 */ if ((fZ||fS!=fO)) goto L_008a9180;
L_008a9103:; BB(0x008a9103);
    /* 008a9103: lea eax, [ebx + 0x124] */ r_eax = (u32)(r_ebx+0x124u);
    /* 008a9109: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a910a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a910d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
L_008a910e:; BB(0x008a910e);
    /* 008a910e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a9111: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008a9113: cmp dword ptr [eax + 0x4c], 0 */ {  u32 a = R32((u32)(r_eax+0x4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9117: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 008a911a: jne 0x8a916c */ if (!fZ) goto L_008a916c;
L_008a911c:; BB(0x008a911c);
    /* 008a911c: mov esi, dword ptr [eax + 0x10] */ r_esi = R32((u32)(r_eax+0x10u));
    /* 008a911f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a9121: jl 0x8a9132 */ if ((fS!=fO)) goto L_008a9132;
L_008a9123:; BB(0x008a9123);
    /* 008a9123: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a9126: jge 0x8a9132 */ if ((fS==fO)) goto L_008a9132;
L_008a9128:; BB(0x008a9128);
    /* 008a9128: cmp dword ptr [ebx + esi*4 + 0x90], 0 */ {  u32 a = R32((u32)(r_ebx+r_esi*4+0x90u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9130: jne 0x8a9146 */ if (!fZ) goto L_008a9146;
L_008a9132:; BB(0x008a9132);
    /* 008a9132: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008a9134: mov dword ptr [eax + 0x14], 0x33 */ W32((u32)(r_eax+0x14u), 0x33u);
    /* 008a913b: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008a913d: mov dword ptr [eax + 0x18], esi */ W32((u32)(r_eax+0x18u), r_esi);
    /* 008a9140: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008a9142: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a9143: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a9145u); call_ind(t); }
    /* 008a9145: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a9146:; BB(0x008a9146);
    /* 008a9146: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 008a9149: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 008a914e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a9150: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a9151: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a9153u); call_ind(t); }
    /* 008a9153: mov esi, dword ptr [ebx + esi*4 + 0x90] */ r_esi = R32((u32)(r_ebx+r_esi*4+0x90u));
    /* 008a915a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a915d: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 008a915f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a9160: mov edi, eax */ r_edi = r_eax;
    /* 008a9162: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008a9164: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008a9167: movsw word ptr es:[edi], word ptr [esi] */ W16(r_edi, R16(r_esi)); r_esi += rt_df ? -2 : 2; r_edi += rt_df ? -2 : 2;
    /* 008a9169: mov dword ptr [ecx + 0x4c], eax */ W32((u32)(r_ecx+0x4cu), r_eax);
L_008a916c:; BB(0x008a916c);
    /* 008a916c: inc dword ptr [ebp - 8] */ { u32 ad = (u32)(r_ebp+0xfffffff8u); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a916f: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 008a9172: add dword ptr [ebp - 4], 4 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a9176: cmp eax, dword ptr [ebx + 0x120] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x120u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a917c: jl 0x8a910e */ if ((fS!=fO)) goto L_008a910e;
L_008a917e:; BB(0x008a917e);
    /* 008a917e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a917f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
L_008a9180:; BB(0x008a9180);
    /* 008a9180: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a9181: ret  */ FN_RET(0x008a90f0); r_esp += 4; return;
}

void f_008a9182(void) /* sub_8A9182 */
{
    FN_ENTER(0x008a9182);
    /* 008a9182: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a9183: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9184: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 008a9188: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9189: call 0x8a8f7a */ r_esp -= 4; W32(r_esp, 0x8a918eu); f_008a8f7a();
    /* 008a918e: mov ebx, esi */ r_ebx = r_esi;
    /* 008a9190: call 0x8a90f0 */ r_esp -= 4; W32(r_esp, 0x8a9195u); f_008a90f0();
    /* 008a9195: mov eax, dword ptr [esi + 0x194] */ r_eax = R32((u32)(r_esi+0x194u));
    /* 008a919b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a919c: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a919eu); call_ind(t); }
    /* 008a919e: lea edi, [esi + 0x184] */ r_edi = (u32)(r_esi+0x184u);
    /* 008a91a4: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008a91a6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a91a7: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a91a9u); call_ind(t); }
    /* 008a91a9: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008a91ab: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 008a91ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a91af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a91b0: mov ecx, dword ptr [esi + 0x18c] */ r_ecx = R32((u32)(r_esi+0x18cu));
    /* 008a91b6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a91b7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a91b8: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 008a91ba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a91bb: ret  */ FN_RET(0x008a9182); r_esp += 4; return;
}

void f_008a91bc(void) /* sub_8A91BC */
{
    FN_ENTER(0x008a91bc);
    /* 008a91bc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a91bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a91be: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 008a91c2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a91c3: mov edi, dword ptr [esi + 0x18c] */ r_edi = R32((u32)(r_esi+0x18cu));
    /* 008a91c9: xor bl, bl */ {  u32 a = (u8)r_ebx; u32 b = (u8)r_ebx; u32 r = (a ^ b) & 0xffu; r_ebx = (r_ebx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008a91cb: cmp byte ptr [edi + 0x11], bl */ {  u32 a = R8((u32)(r_edi+0x11u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008a91ce: je 0x8a91d5 */ if (fZ) goto L_008a91d5;
L_008a91d0:; BB(0x008a91d0);
    /* 008a91d0: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008a91d2: pop eax */ { u32 v = R32(r_esp); r_esp += 4; r_eax = v; }
    /* 008a91d3: jmp 0x8a924b */ goto L_008a924b;
L_008a91d5:; BB(0x008a91d5);
    /* 008a91d5: mov eax, dword ptr [esi + 0x190] */ r_eax = R32((u32)(r_esi+0x190u));
    /* 008a91db: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a91dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a91dd: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x8a91e0u); call_ind(t); }
    /* 008a91e0: mov ebp, eax */ r_ebp = r_eax;
    /* 008a91e2: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 008a91e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a91e4: je 0x8a921e */ if (fZ) goto L_008a921e;
L_008a91e6:; BB(0x008a91e6);
    /* 008a91e6: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a91e7: jne 0x8a9248 */ if (!fZ) goto L_008a9248;
L_008a91e9:; BB(0x008a91e9);
    /* 008a91e9: cmp byte ptr [edi + 0x14], bl */ {  u32 a = R8((u32)(r_edi+0x14u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a91ec: mov byte ptr [edi + 0x11], 1 */ W8((u32)(r_edi+0x11u), 0x1u);
    /* 008a91f0: je 0x8a920d */ if (fZ) goto L_008a920d;
L_008a91f2:; BB(0x008a91f2);
    /* 008a91f2: mov eax, dword ptr [esi + 0x190] */ r_eax = R32((u32)(r_esi+0x190u));
    /* 008a91f8: cmp byte ptr [eax + 0x51], bl */ {  u32 a = R8((u32)(r_eax+0x51u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 7) & 1; fC = (a < b); }
    /* 008a91fb: je 0x8a9248 */ if (fZ) goto L_008a9248;
L_008a91fd:; BB(0x008a91fd);
    /* 008a91fd: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a91ff: mov dword ptr [eax + 0x14], 0x3a */ W32((u32)(r_eax+0x14u), 0x3au);
    /* 008a9206: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a9208: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9209: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a920bu); call_ind(t); }
    /* 008a920b: jmp 0x8a9247 */ goto L_008a9247;
L_008a920d:; BB(0x008a920d);
    /* 008a920d: lea eax, [esi + 0x84] */ r_eax = (u32)(r_esi+0x84u);
    /* 008a9213: mov esi, dword ptr [esi + 0x7c] */ r_esi = R32((u32)(r_esi+0x7cu));
    /* 008a9216: cmp dword ptr [eax], esi */ {  u32 a = R32((u32)(r_eax)); u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a9218: jle 0x8a9248 */ if ((fZ||fS!=fO)) goto L_008a9248;
L_008a921a:; BB(0x008a921a);
    /* 008a921a: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 008a921c: jmp 0x8a9248 */ goto L_008a9248;
L_008a921e:; BB(0x008a921e);
    /* 008a921e: cmp byte ptr [edi + 0x14], bl */ {  u32 a = R8((u32)(r_edi+0x14u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a9221: je 0x8a922d */ if (fZ) goto L_008a922d;
L_008a9223:; BB(0x008a9223);
    /* 008a9223: call 0x8a8dbf */ r_esp -= 4; W32(r_esp, 0x8a9228u); f_008a8dbf();
    /* 008a9228: mov byte ptr [edi + 0x14], bl */ W8((u32)(r_edi+0x14u), (u8)r_ebx);
    /* 008a922b: jmp 0x8a9248 */ goto L_008a9248;
L_008a922d:; BB(0x008a922d);
    /* 008a922d: cmp byte ptr [edi + 0x10], bl */ {  u32 a = R8((u32)(r_edi+0x10u)); u32 b = (u8)r_ebx; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a9230: jne 0x8a9241 */ if (!fZ) goto L_008a9241;
L_008a9232:; BB(0x008a9232);
    /* 008a9232: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a9234: mov dword ptr [eax + 0x14], 0x22 */ W32((u32)(r_eax+0x14u), 0x22u);
    /* 008a923b: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a923d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a923e: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a9240u); call_ind(t); }
    /* 008a9240: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a9241:; BB(0x008a9241);
    /* 008a9241: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9242: call 0x8a9182 */ r_esp -= 4; W32(r_esp, 0x8a9247u); f_008a9182();
L_008a9247:; BB(0x008a9247);
    /* 008a9247: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a9248:; BB(0x008a9248);
    /* 008a9248: mov eax, ebp */ r_eax = r_ebp;
    /* 008a924a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
L_008a924b:; BB(0x008a924b);
    /* 008a924b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a924c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a924d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a924e: ret  */ FN_RET(0x008a91bc); r_esp += 4; return;
}

void f_008a924f(void) /* sub_8A924F */
{
    FN_ENTER(0x008a924f);
    /* 008a924f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9250: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008a9254: mov eax, dword ptr [esi + 0x18c] */ r_eax = R32((u32)(r_esi+0x18cu));
    /* 008a925a: and byte ptr [eax + 0x10], 0 */ { u32 ad = (u32)(r_eax+0x10u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a925e: and byte ptr [eax + 0x11], 0 */ { u32 ad = (u32)(r_eax+0x11u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a9262: mov dword ptr [eax], 0x8a91bc */ W32((u32)(r_eax), 0x8a91bcu);
    /* 008a9268: mov byte ptr [eax + 0x14], 1 */ W8((u32)(r_eax+0x14u), 0x1u);
    /* 008a926c: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a926e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a926f: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x8a9272u); call_ind(t); }
    /* 008a9272: mov eax, dword ptr [esi + 0x190] */ r_eax = R32((u32)(r_esi+0x190u));
    /* 008a9278: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9279: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a927bu); call_ind(t); }
    /* 008a927b: and dword ptr [esi + 0x8c], 0 */ { u32 ad = (u32)(r_esi+0x8cu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a9282: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a9283: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a9284: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a9285: ret  */ FN_RET(0x008a924f); r_esp += 4; return;
}

void f_008a9286(void) /* sub_8A9286 */
{
    FN_ENTER(0x008a9286);
    /* 008a9286: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a928a: mov eax, dword ptr [eax + 0x18c] */ r_eax = R32((u32)(r_eax+0x18cu));
    /* 008a9290: mov dword ptr [eax], 0x8a91bc */ W32((u32)(r_eax), 0x8a91bcu);
    /* 008a9296: ret  */ FN_RET(0x008a9286); r_esp += 4; return;
}

void f_008a9297(void) /* sub_8A9297 */
{
    FN_ENTER(0x008a9297);
    /* 008a9297: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9298: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008a929c: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008a929f: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 008a92a1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008a92a3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a92a4: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a92a6u); call_ind(t); }
    /* 008a92a6: mov dword ptr [esi + 0x18c], eax */ W32((u32)(r_esi+0x18cu), r_eax);
    /* 008a92ac: and byte ptr [eax + 0x10], 0 */ { u32 ad = (u32)(r_eax+0x10u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a92b0: and byte ptr [eax + 0x11], 0 */ { u32 ad = (u32)(r_eax+0x11u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a92b4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008a92b7: mov dword ptr [eax], 0x8a91bc */ W32((u32)(r_eax), 0x8a91bcu);
    /* 008a92bd: mov dword ptr [eax + 4], 0x8a924f */ W32((u32)(r_eax+0x4u), 0x8a924fu);
    /* 008a92c4: mov dword ptr [eax + 8], 0x8a9182 */ W32((u32)(r_eax+0x8u), 0x8a9182u);
    /* 008a92cb: mov dword ptr [eax + 0xc], 0x8a9286 */ W32((u32)(r_eax+0xcu), 0x8a9286u);
    /* 008a92d2: mov byte ptr [eax + 0x14], 1 */ W8((u32)(r_eax+0x14u), 0x1u);
    /* 008a92d6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a92d7: ret  */ FN_RET(0x008a9297); r_esp += 4; return;
}

void f_008a92ed(void) /* sub_8A92ED */
{
    FN_ENTER(0x008a92ed);
    /* 008a92ed: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a92ee: mov ebp, esp */ r_ebp = r_esp;
    /* 008a92f0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a92f1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a92f2: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 008a92f5: cmp ebx, 0x3b9ac9f0 */ {  u32 a = r_ebx; u32 b = 0x3b9ac9f0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a92fb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a92fc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a92fd: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008a9300: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008a9303: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a9306: jbe 0x8a9312 */ if ((fC||fZ)) goto L_008a9312;
L_008a9308:; BB(0x008a9308);
    /* 008a9308: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008a930a: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a930b: mov eax, edi */ r_eax = r_edi;
    /* 008a930d: call 0x8a92d8 */ r_esp -= 4; W32(r_esp, 0x8a9312u); f_008a92d8();
L_008a9312:; BB(0x008a9312);
    /* 008a9312: mov eax, ebx */ r_eax = r_ebx;
    /* 008a9314: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fC = 0; }
    /* 008a9317: jbe 0x8a9320 */ if ((fC||fZ)) goto L_008a9320;
L_008a9319:; BB(0x008a9319);
    /* 008a9319: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 008a931b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a931c: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a931e: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_008a9320:; BB(0x008a9320);
    /* 008a9320: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008a9323: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a9325: jl 0x8a932c */ if ((fS!=fO)) goto L_008a932c;
L_008a9327:; BB(0x008a9327);
    /* 008a9327: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a932a: jl 0x8a9340 */ if ((fS!=fO)) goto L_008a9340;
L_008a932c:; BB(0x008a932c);
    /* 008a932c: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008a932e: mov dword ptr [eax + 0x14], 0xc */ W32((u32)(r_eax+0x14u), 0xcu);
    /* 008a9335: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008a9337: mov dword ptr [eax + 0x18], esi */ W32((u32)(r_eax+0x18u), r_esi);
    /* 008a933a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008a933c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a933d: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a933fu); call_ind(t); }
    /* 008a933f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a9340:; BB(0x008a9340);
    /* 008a9340: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a9343: and dword ptr [ebp + 0x10], 0 */ { u32 ad = (u32)(r_ebp+0x10u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a9347: lea eax, [eax + esi*4 + 0x30] */ r_eax = (u32)(r_eax+r_esi*4+0x30u);
    /* 008a934b: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 008a934e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008a9350: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9352: je 0x8a9366 */ if (fZ) goto L_008a9366;
L_008a9354:; BB(0x008a9354);
    /* 008a9354: cmp dword ptr [eax + 8], ebx */ {  u32 a = R32((u32)(r_eax+0x8u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a9357: jae 0x8a9362 */ if (!fC) goto L_008a9362;
L_008a9359:; BB(0x008a9359);
    /* 008a9359: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 008a935c: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008a935e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9360: jne 0x8a9354 */ if (!fZ) goto L_008a9354;
L_008a9362:; BB(0x008a9362);
    /* 008a9362: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9364: jne 0x8a93d3 */ if (!fZ) goto L_008a93d3;
L_008a9366:; BB(0x008a9366);
    /* 008a9366: cmp dword ptr [ebp + 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a936a: lea edi, [ebx + 0x10] */ r_edi = (u32)(r_ebx+0x10u);
    /* 008a936d: jne 0x8a9378 */ if (!fZ) goto L_008a9378;
L_008a936f:; BB(0x008a936f);
    /* 008a936f: mov esi, dword ptr [esi*4 + 0x99dfa0] */ r_esi = R32((u32)(r_esi*4+0x99dfa0u));
    /* 008a9376: jmp 0x8a937f */ goto L_008a937f;
L_008a9378:; BB(0x008a9378);
    /* 008a9378: mov esi, dword ptr [esi*4 + 0x99dfa8] */ r_esi = R32((u32)(r_esi*4+0x99dfa8u));
L_008a937f:; BB(0x008a937f);
    /* 008a937f: mov eax, 0x3b9aca00 */ r_eax = 0x3b9aca00u;
    /* 008a9384: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008a9386: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a9388: jbe 0x8a93a0 */ if ((fC||fZ)) goto L_008a93a0;
L_008a938a:; BB(0x008a938a);
    /* 008a938a: mov esi, eax */ r_esi = r_eax;
    /* 008a938c: jmp 0x8a93a0 */ goto L_008a93a0;
L_008a938e:; BB(0x008a938e);
    /* 008a938e: shr esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008a9390: cmp esi, 0x32 */ {  u32 a = r_esi; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a9393: jae 0x8a93a0 */ if (!fC) goto L_008a93a0;
L_008a9395:; BB(0x008a9395);
    /* 008a9395: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a9398: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008a939a: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 008a939b: call 0x8a92d8 */ r_esp -= 4; W32(r_esp, 0x8a93a0u); f_008a92d8();
L_008a93a0:; BB(0x008a93a0);
    /* 008a93a0: lea eax, [esi + edi] */ r_eax = (u32)(r_esi+r_edi);
    /* 008a93a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a93a4: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a93a7: call 0x8b47c5 */ r_esp -= 4; W32(r_esp, 0x8a93acu); f_008b47c5();
    /* 008a93ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a93ae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a93af: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a93b0: je 0x8a938e */ if (fZ) goto L_008a938e;
L_008a93b2:; BB(0x008a93b2);
    /* 008a93b2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a93b5: lea edx, [esi + edi] */ r_edx = (u32)(r_esi+r_edi);
    /* 008a93b8: add dword ptr [ecx + 0x48], edx */ { u32 ad = (u32)(r_ecx+0x48u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a93bb: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008a93be: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a93c1: and dword ptr [eax + 4], 0 */ { u32 ad = (u32)(r_eax+0x4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a93c5: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a93c7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a93c9: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 008a93cc: jne 0x8a93d1 */ if (!fZ) goto L_008a93d1;
L_008a93ce:; BB(0x008a93ce);
    /* 008a93ce: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
L_008a93d1:; BB(0x008a93d1);
    /* 008a93d1: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_008a93d3:; BB(0x008a93d3);
    /* 008a93d3: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008a93d6: lea edx, [ecx + eax + 0x10] */ r_edx = (u32)(r_ecx+r_eax+0x10u);
    /* 008a93da: add ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a93dc: sub dword ptr [eax + 8], ebx */ { u32 ad = (u32)(r_eax+0x8u);  u32 a = R32(ad); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a93df: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a93e0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a93e1: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008a93e4: mov eax, edx */ r_eax = r_edx;
    /* 008a93e6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a93e7: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a93e8: ret  */ FN_RET(0x008a92ed); r_esp += 4; return;
}

void f_008a93e9(void) /* sub_8A93E9 */
{
    FN_ENTER(0x008a93e9);
    /* 008a93e9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a93ea: mov ebp, esp */ r_ebp = r_esp;
    /* 008a93ec: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a93ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a93ee: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a93f1: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 008a93f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a93f5: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 008a93f8: cmp edi, 0x3b9ac9f0 */ {  u32 a = r_edi; u32 b = 0x3b9ac9f0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a93fe: jbe 0x8a940a */ if ((fC||fZ)) goto L_008a940a;
L_008a9400:; BB(0x008a9400);
    /* 008a9400: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008a9402: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 008a9403: mov eax, esi */ r_eax = r_esi;
    /* 008a9405: call 0x8a92d8 */ r_esp -= 4; W32(r_esp, 0x8a940au); f_008a92d8();
L_008a940a:; BB(0x008a940a);
    /* 008a940a: mov eax, edi */ r_eax = r_edi;
    /* 008a940c: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fC = 0; }
    /* 008a940f: jbe 0x8a9418 */ if ((fC||fZ)) goto L_008a9418;
L_008a9411:; BB(0x008a9411);
    /* 008a9411: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 008a9413: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a9414: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008a9416: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_008a9418:; BB(0x008a9418);
    /* 008a9418: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008a941b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a941d: jl 0x8a9424 */ if ((fS!=fO)) goto L_008a9424;
L_008a941f:; BB(0x008a941f);
    /* 008a941f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a9422: jl 0x8a9438 */ if ((fS!=fO)) goto L_008a9438;
L_008a9424:; BB(0x008a9424);
    /* 008a9424: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a9426: mov dword ptr [ecx + 0x14], 0xc */ W32((u32)(r_ecx+0x14u), 0xcu);
    /* 008a942d: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a942f: mov dword ptr [ecx + 0x18], eax */ W32((u32)(r_ecx+0x18u), r_eax);
    /* 008a9432: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a9434: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9435: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a9437u); call_ind(t); }
    /* 008a9437: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a9438:; BB(0x008a9438);
    /* 008a9438: lea eax, [edi + 0x10] */ r_eax = (u32)(r_edi+0x10u);
    /* 008a943b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a943c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a943d: call 0x8b47c5 */ r_esp -= 4; W32(r_esp, 0x8a9442u); f_008b47c5();
    /* 008a9442: mov esi, eax */ r_esi = r_eax;
    /* 008a9444: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9446: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a9447: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a9448: jne 0x8a9455 */ if (!fZ) goto L_008a9455;
L_008a944a:; BB(0x008a944a);
    /* 008a944a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a944d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a944f: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 008a9450: call 0x8a92d8 */ r_esp -= 4; W32(r_esp, 0x8a9455u); f_008a92d8();
L_008a9455:; BB(0x008a9455);
    /* 008a9455: lea eax, [edi + 0x10] */ r_eax = (u32)(r_edi+0x10u);
    /* 008a9458: add dword ptr [ebx + 0x48], eax */ { u32 ad = (u32)(r_ebx+0x48u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a945b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008a945e: lea eax, [ebx + eax*4 + 0x38] */ r_eax = (u32)(r_ebx+r_eax*4+0x38u);
    /* 008a9462: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a9464: and dword ptr [esi + 8], 0 */ { u32 ad = (u32)(r_esi+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a9468: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 008a946b: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 008a946d: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 008a946f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a9470: lea eax, [esi + 0x10] */ r_eax = (u32)(r_esi+0x10u);
    /* 008a9473: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a9474: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a9475: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008a9476: ret  */ FN_RET(0x008a93e9); r_esp += 4; return;
}

void f_008a9440(void)
{
    FN_ENTER(0x008a9440);
    /* 008a9440: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008a9442: mov esi, eax */ r_esi = r_eax;
    /* 008a9444: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9446: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a9447: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a9448: jne 0x8a9455 */ if (!fZ) goto L_008a9455;
L_008a944a:; BB(0x008a944a);
    /* 008a944a: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a944d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a944f: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
    /* 008a9450: call 0x8a92d8 */ r_esp -= 4; W32(r_esp, 0x8a9455u); f_008a92d8();
L_008a9455:; BB(0x008a9455);
    /* 008a9455: lea eax, [edi + 0x10] */ r_eax = (u32)(r_edi+0x10u);
    /* 008a9458: add dword ptr [ebx + 0x48], eax */ { u32 ad = (u32)(r_ebx+0x48u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a945b: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008a945e: lea eax, [ebx + eax*4 + 0x38] */ r_eax = (u32)(r_ebx+r_eax*4+0x38u);
    /* 008a9462: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a9464: and dword ptr [esi + 8], 0 */ { u32 ad = (u32)(r_esi+0x8u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a9468: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 008a946b: mov dword ptr [esi], ecx */ W32((u32)(r_esi), r_ecx);
    /* 008a946d: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 008a946f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a9470: lea eax, [esi + 0x10] */ r_eax = (u32)(r_esi+0x10u);
    /* 008a9473: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a9474: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a9475: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008a9476: ret  */ FN_RET(0x008a9440); r_esp += 4; return;
}

void f_008a9477(void) /* sub_8A9477 */
{
    FN_ENTER(0x008a9477);
    /* 008a9477: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a9478: mov ebp, esp */ r_ebp = r_esp;
    /* 008a947a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008a947c: mov eax, 0x3b9ac9f0 */ r_eax = 0x3b9ac9f0u;
    /* 008a9481: div dword ptr [ebp + 0x10] */ { u32 d = R32((u32)(r_ebp+0x10u)); if (!d) UNSUP(0x008a9481, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008a9481, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008a9484: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008a9487: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a9488: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9489: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a948a: mov edi, dword ptr [ecx + 4] */ r_edi = R32((u32)(r_ecx+0x4u));
    /* 008a948d: mov esi, eax */ r_esi = r_eax;
    /* 008a948f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008a9491: jg 0x8a94a2 */ if ((!fZ&&fS==fO)) goto L_008a94a2;
L_008a9493:; BB(0x008a9493);
    /* 008a9493: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008a9495: mov dword ptr [eax + 0x14], 0x45 */ W32((u32)(r_eax+0x14u), 0x45u);
    /* 008a949c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008a949e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a949f: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a94a1u); call_ind(t); }
    /* 008a94a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a94a2:; BB(0x008a94a2);
    /* 008a94a2: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 008a94a5: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a94a7: jl 0x8a94ab */ if ((fS!=fO)) goto L_008a94ab;
L_008a94a9:; BB(0x008a94a9);
    /* 008a94a9: mov esi, ebx */ r_esi = r_ebx;
L_008a94ab:; BB(0x008a94ab);
    /* 008a94ab: mov eax, ebx */ r_eax = r_ebx;
    /* 008a94ad: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008a94b0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a94b1: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a94b4: mov dword ptr [edi + 0x4c], esi */ W32((u32)(r_edi+0x4cu), r_esi);
    /* 008a94b7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a94ba: call 0x8a92ed */ r_esp -= 4; W32(r_esp, 0x8a94bfu); f_008a92ed();
    /* 008a94bf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a94c2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008a94c4: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a94c6: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 008a94c9: jbe 0x8a9501 */ if ((fC||fZ)) goto L_008a9501;
L_008a94cb:; BB(0x008a94cb);
    /* 008a94cb: mov eax, ebx */ r_eax = r_ebx;
    /* 008a94cd: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008a94cf: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a94d1: jb 0x8a94d5 */ if (fC) goto L_008a94d5;
L_008a94d3:; BB(0x008a94d3);
    /* 008a94d3: mov esi, eax */ r_esi = r_eax;
L_008a94d5:; BB(0x008a94d5);
    /* 008a94d5: mov eax, esi */ r_eax = r_esi;
    /* 008a94d7: imul eax, dword ptr [ebp + 0x10] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x10u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a94db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a94dc: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a94df: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a94e2: call 0x8a93e9 */ r_esp -= 4; W32(r_esp, 0x8a94e7u); f_008a93e9();
    /* 008a94e7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a94ea: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008a94ec: jbe 0x8a94fd */ if ((fC||fZ)) goto L_008a94fd;
L_008a94ee:; BB(0x008a94ee);
    /* 008a94ee: mov ecx, esi */ r_ecx = r_esi;
L_008a94f0:; BB(0x008a94f0);
    /* 008a94f0: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008a94f3: mov dword ptr [edx + edi*4], eax */ W32((u32)(r_edx+r_edi*4), r_eax);
    /* 008a94f6: add eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a94f9: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a94fa: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a94fb: jne 0x8a94f0 */ if (!fZ) goto L_008a94f0;
L_008a94fd:; BB(0x008a94fd);
    /* 008a94fd: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a94ff: jb 0x8a94cb */ if (fC) goto L_008a94cb;
L_008a9501:; BB(0x008a9501);
    /* 008a9501: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008a9504: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a9505: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a9506: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a9507: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008a9508: ret  */ FN_RET(0x008a9477); r_esp += 4; return;
}

void f_008a9509(void) /* sub_8A9509 */
{
    FN_ENTER(0x008a9509);
    /* 008a9509: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a950a: mov ebp, esp */ r_ebp = r_esp;
    /* 008a950c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a950d: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008a9510: shl ecx, 7 */ { u32 c = (7u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 008a9513: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008a9515: mov eax, 0x3b9ac9f0 */ r_eax = 0x3b9ac9f0u;
    /* 008a951a: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x008a951a, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008a951a, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008a951c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a951d: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008a9520: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9521: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9522: mov edi, dword ptr [ebx + 4] */ r_edi = R32((u32)(r_ebx+0x4u));
    /* 008a9525: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 008a9528: mov esi, eax */ r_esi = r_eax;
    /* 008a952a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008a952c: jg 0x8a953d */ if ((!fZ&&fS==fO)) goto L_008a953d;
L_008a952e:; BB(0x008a952e);
    /* 008a952e: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008a9530: mov dword ptr [eax + 0x14], 0x45 */ W32((u32)(r_eax+0x14u), 0x45u);
    /* 008a9537: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 008a9539: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a953a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a953cu); call_ind(t); }
    /* 008a953c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a953d:; BB(0x008a953d);
    /* 008a953d: mov ebx, dword ptr [ebp + 0x14] */ r_ebx = R32((u32)(r_ebp+0x14u));
    /* 008a9540: cmp esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a9542: jl 0x8a9546 */ if ((fS!=fO)) goto L_008a9546;
L_008a9544:; BB(0x008a9544);
    /* 008a9544: mov esi, ebx */ r_esi = r_ebx;
L_008a9546:; BB(0x008a9546);
    /* 008a9546: mov eax, ebx */ r_eax = r_ebx;
    /* 008a9548: shl eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008a954b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a954c: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a954f: mov dword ptr [edi + 0x4c], esi */ W32((u32)(r_edi+0x4cu), r_esi);
    /* 008a9552: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a9555: call 0x8a92ed */ r_esp -= 4; W32(r_esp, 0x8a955au); f_008a92ed();
    /* 008a955a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a955d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008a955f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a9561: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 008a9564: jbe 0x8a959f */ if ((fC||fZ)) goto L_008a959f;
L_008a9566:; BB(0x008a9566);
    /* 008a9566: mov eax, ebx */ r_eax = r_ebx;
    /* 008a9568: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008a956a: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a956c: jb 0x8a9570 */ if (fC) goto L_008a9570;
L_008a956e:; BB(0x008a956e);
    /* 008a956e: mov esi, eax */ r_esi = r_eax;
L_008a9570:; BB(0x008a9570);
    /* 008a9570: mov eax, esi */ r_eax = r_esi;
    /* 008a9572: imul eax, dword ptr [ebp + 0x10] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0x10u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a9576: shl eax, 7 */ { u32 c = (7u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008a9579: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a957a: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a957d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a9580: call 0x8a93e9 */ r_esp -= 4; W32(r_esp, 0x8a9585u); f_008a93e9();
    /* 008a9585: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a9588: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 008a958a: jbe 0x8a959b */ if ((fC||fZ)) goto L_008a959b;
L_008a958c:; BB(0x008a958c);
    /* 008a958c: mov ecx, esi */ r_ecx = r_esi;
L_008a958e:; BB(0x008a958e);
    /* 008a958e: mov edx, dword ptr [ebp + 0x14] */ r_edx = R32((u32)(r_ebp+0x14u));
    /* 008a9591: mov dword ptr [edx + edi*4], eax */ W32((u32)(r_edx+r_edi*4), r_eax);
    /* 008a9594: add eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a9597: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a9598: dec ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 008a9599: jne 0x8a958e */ if (!fZ) goto L_008a958e;
L_008a959b:; BB(0x008a959b);
    /* 008a959b: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a959d: jb 0x8a9566 */ if (fC) goto L_008a9566;
L_008a959f:; BB(0x008a959f);
    /* 008a959f: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008a95a2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a95a3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a95a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a95a5: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a95a6: ret  */ FN_RET(0x008a9509); r_esp += 4; return;
}

void f_008a95a7(void) /* sub_8A95A7 */
{
    FN_ENTER(0x008a95a7);
    /* 008a95a7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a95a8: mov ebp, esp */ r_ebp = r_esp;
    /* 008a95aa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a95ab: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 008a95ae: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a95b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a95b2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a95b3: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008a95b6: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 008a95b9: je 0x8a95cf */ if (fZ) goto L_008a95cf;
L_008a95bb:; BB(0x008a95bb);
    /* 008a95bb: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008a95bd: mov dword ptr [eax + 0x14], 0xc */ W32((u32)(r_eax+0x14u), 0xcu);
    /* 008a95c4: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008a95c6: mov dword ptr [eax + 0x18], ebx */ W32((u32)(r_eax+0x18u), r_ebx);
    /* 008a95c9: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008a95cb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a95cc: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a95ceu); call_ind(t); }
    /* 008a95ce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a95cf:; BB(0x008a95cf);
    /* 008a95cf: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 008a95d1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a95d2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a95d3: call 0x8a92ed */ r_esp -= 4; W32(r_esp, 0x8a95d8u); f_008a92ed();
    /* 008a95d8: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 008a95db: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a95de: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008a95e1: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 008a95e4: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 008a95e7: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 008a95ea: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 008a95ed: mov cl, byte ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 008a95f0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a95f3: and byte ptr [eax + 0x22], 0 */ { u32 ad = (u32)(r_eax+0x22u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a95f7: mov byte ptr [eax + 0x20], cl */ W8((u32)(r_eax+0x20u), (u8)r_ecx);
    /* 008a95fa: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 008a95fd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a95fe: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 008a9601: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 008a9604: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a9605: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a9606: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008a9607: ret  */ FN_RET(0x008a95a7); r_esp += 4; return;
}

void f_008a9608(void) /* sub_8A9608 */
{
    FN_ENTER(0x008a9608);
    /* 008a9608: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a9609: mov ebp, esp */ r_ebp = r_esp;
    /* 008a960b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a960c: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 008a960f: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9612: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9613: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9614: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008a9617: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 008a961a: je 0x8a9630 */ if (fZ) goto L_008a9630;
L_008a961c:; BB(0x008a961c);
    /* 008a961c: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008a961e: mov dword ptr [eax + 0x14], 0xc */ W32((u32)(r_eax+0x14u), 0xcu);
    /* 008a9625: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008a9627: mov dword ptr [eax + 0x18], ebx */ W32((u32)(r_eax+0x18u), r_ebx);
    /* 008a962a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008a962c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a962d: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a962fu); call_ind(t); }
    /* 008a962f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a9630:; BB(0x008a9630);
    /* 008a9630: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 008a9632: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a9633: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9634: call 0x8a92ed */ r_esp -= 4; W32(r_esp, 0x8a9639u); f_008a92ed();
    /* 008a9639: mov ecx, dword ptr [ebp + 0x18] */ r_ecx = R32((u32)(r_ebp+0x18u));
    /* 008a963c: and dword ptr [eax], 0 */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a963f: mov dword ptr [eax + 4], ecx */ W32((u32)(r_eax+0x4u), r_ecx);
    /* 008a9642: mov ecx, dword ptr [ebp + 0x14] */ r_ecx = R32((u32)(r_ebp+0x14u));
    /* 008a9645: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 008a9648: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 008a964b: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 008a964e: mov cl, byte ptr [ebp + 0x10] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_ebp+0x10u))) & 0xffu);
    /* 008a9651: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a9654: and byte ptr [eax + 0x22], 0 */ { u32 ad = (u32)(r_eax+0x22u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a9658: mov byte ptr [eax + 0x20], cl */ W8((u32)(r_eax+0x20u), (u8)r_ecx);
    /* 008a965b: mov ecx, dword ptr [esi + 0x44] */ r_ecx = R32((u32)(r_esi+0x44u));
    /* 008a965e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a965f: mov dword ptr [eax + 0x24], ecx */ W32((u32)(r_eax+0x24u), r_ecx);
    /* 008a9662: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 008a9665: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a9666: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a9667: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008a9668: ret  */ FN_RET(0x008a9608); r_esp += 4; return;
}

void f_008a9669(void) /* sub_8A9669 */
{
    FN_ENTER(0x008a9669);
    /* 008a9669: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a966a: mov ebp, esp */ r_ebp = r_esp;
    /* 008a966c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a966d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a9670: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a9671: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9672: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9673: mov edi, dword ptr [eax + 4] */ r_edi = R32((u32)(r_eax+0x4u));
    /* 008a9676: mov eax, dword ptr [edi + 0x40] */ r_eax = R32((u32)(r_edi+0x40u));
    /* 008a9679: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008a967b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008a967d: jmp 0x8a969a */ goto L_008a969a;
L_008a967f:; BB(0x008a967f);
    /* 008a967f: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9682: jne 0x8a9697 */ if (!fZ) goto L_008a9697;
L_008a9684:; BB(0x008a9684);
    /* 008a9684: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 008a9687: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 008a968a: imul edx, ecx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ecx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a968d: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a968f: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 008a9692: imul edx, ecx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ecx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a9695: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_008a9697:; BB(0x008a9697);
    /* 008a9697: mov eax, dword ptr [eax + 0x24] */ r_eax = R32((u32)(r_eax+0x24u));
L_008a969a:; BB(0x008a969a);
    /* 008a969a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a969c: jne 0x8a967f */ if (!fZ) goto L_008a967f;
L_008a969e:; BB(0x008a969e);
    /* 008a969e: mov eax, dword ptr [edi + 0x44] */ r_eax = R32((u32)(r_edi+0x44u));
    /* 008a96a1: jmp 0x8a96c4 */ goto L_008a96c4;
L_008a96a3:; BB(0x008a96a3);
    /* 008a96a3: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a96a6: jne 0x8a96c1 */ if (!fZ) goto L_008a96c1;
L_008a96a8:; BB(0x008a96a8);
    /* 008a96a8: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 008a96ab: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 008a96ae: imul edx, ecx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ecx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a96b1: shl edx, 7 */ { u32 c = (7u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008a96b4: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008a96b6: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 008a96b9: imul edx, ecx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ecx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a96bc: shl edx, 7 */ { u32 c = (7u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008a96bf: add ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_008a96c1:; BB(0x008a96c1);
    /* 008a96c1: mov eax, dword ptr [eax + 0x24] */ r_eax = R32((u32)(r_eax+0x24u));
L_008a96c4:; BB(0x008a96c4);
    /* 008a96c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a96c6: jne 0x8a96a3 */ if (!fZ) goto L_008a96a3;
L_008a96c8:; BB(0x008a96c8);
    /* 008a96c8: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a96ca: jle 0x8a97e3 */ if ((fZ||fS!=fO)) goto L_008a97e3;
L_008a96d0:; BB(0x008a96d0);
    /* 008a96d0: push dword ptr [edi + 0x48] */ { u32 v = R32((u32)(r_edi+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a96d3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a96d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a96d5: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a96d8: call 0x8b47d0 */ r_esp -= 4; W32(r_esp, 0x8a96ddu); f_008b47d0();
    /* 008a96dd: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a96e0: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a96e2: jl 0x8a96ed */ if ((fS!=fO)) goto L_008a96ed;
L_008a96e4:; BB(0x008a96e4);
    /* 008a96e4: mov dword ptr [ebp - 4], 0x3b9aca00 */ W32((u32)(r_ebp+0xfffffffcu), 0x3b9aca00u);
    /* 008a96eb: jmp 0x8a96fe */ goto L_008a96fe;
L_008a96ed:; BB(0x008a96ed);
    /* 008a96ed: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008a96ee: idiv esi */ { i32 d = (i32)r_esi; if (!d) UNSUP(0x008a96ee, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x008a96ee, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008a96f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008a96f2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a96f5: jg 0x8a96fe */ if ((!fZ&&fS==fO)) goto L_008a96fe;
L_008a96f7:; BB(0x008a96f7);
    /* 008a96f7: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
L_008a96fe:; BB(0x008a96fe);
    /* 008a96fe: mov esi, dword ptr [edi + 0x40] */ r_esi = R32((u32)(r_edi+0x40u));
    /* 008a9701: jmp 0x8a976b */ goto L_008a976b;
L_008a9703:; BB(0x008a9703);
    /* 008a9703: cmp dword ptr [esi], 0 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9706: jne 0x8a9768 */ if (!fZ) goto L_008a9768;
L_008a9708:; BB(0x008a9708);
    /* 008a9708: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 008a970b: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 008a970e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008a9710: lea eax, [ebx - 1] */ r_eax = (u32)(r_ebx+0xffffffffu);
    /* 008a9713: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x008a9713, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008a9713, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008a9715: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a9716: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a9719: jg 0x8a9720 */ if ((!fZ&&fS==fO)) goto L_008a9720;
L_008a971b:; BB(0x008a971b);
    /* 008a971b: mov dword ptr [esi + 0x10], ebx */ W32((u32)(r_esi+0x10u), r_ebx);
    /* 008a971e: jmp 0x8a9741 */ goto L_008a9741;
L_008a9720:; BB(0x008a9720);
    /* 008a9720: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008a9723: imul ecx, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a9727: imul eax, ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a972a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a972b: lea eax, [esi + 0x28] */ r_eax = (u32)(r_esi+0x28u);
    /* 008a972e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a972f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a9732: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 008a9735: call 0x8b47d5 */ r_esp -= 4; W32(r_esp, 0x8a973au); f_008b47d5();
    /* 008a973a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a973d: mov byte ptr [esi + 0x22], 1 */ W8((u32)(r_esi+0x22u), 0x1u);
L_008a9741:; BB(0x008a9741);
    /* 008a9741: push dword ptr [esi + 0x10] */ { u32 v = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a9744: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a9747: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a9749: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a974c: call 0x8a9477 */ r_esp -= 4; W32(r_esp, 0x8a9751u); f_008a9477();
    /* 008a9751: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 008a9753: mov eax, dword ptr [edi + 0x4c] */ r_eax = R32((u32)(r_edi+0x4cu));
    /* 008a9756: and dword ptr [esi + 0x18], 0 */ { u32 ad = (u32)(r_esi+0x18u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a975a: and dword ptr [esi + 0x1c], 0 */ { u32 ad = (u32)(r_esi+0x1cu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a975e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a9761: and byte ptr [esi + 0x21], 0 */ { u32 ad = (u32)(r_esi+0x21u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a9765: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
L_008a9768:; BB(0x008a9768);
    /* 008a9768: mov esi, dword ptr [esi + 0x24] */ r_esi = R32((u32)(r_esi+0x24u));
L_008a976b:; BB(0x008a976b);
    /* 008a976b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a976d: jne 0x8a9703 */ if (!fZ) goto L_008a9703;
L_008a976f:; BB(0x008a976f);
    /* 008a976f: mov esi, dword ptr [edi + 0x44] */ r_esi = R32((u32)(r_edi+0x44u));
    /* 008a9772: jmp 0x8a97df */ goto L_008a97df;
L_008a9774:; BB(0x008a9774);
    /* 008a9774: cmp dword ptr [esi], 0 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9777: jne 0x8a97dc */ if (!fZ) goto L_008a97dc;
L_008a9779:; BB(0x008a9779);
    /* 008a9779: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 008a977c: mov ecx, dword ptr [esi + 0xc] */ r_ecx = R32((u32)(r_esi+0xcu));
    /* 008a977f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008a9781: lea eax, [ebx - 1] */ r_eax = (u32)(r_ebx+0xffffffffu);
    /* 008a9784: div ecx */ { u32 d = r_ecx; if (!d) UNSUP(0x008a9784, "divide by zero"); { u64 n = ((u64)r_edx << 32) | r_eax; u64 q = n / d; if (q >> 32) UNSUP(0x008a9784, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 008a9786: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a9787: cmp eax, dword ptr [ebp - 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a978a: jg 0x8a9791 */ if ((!fZ&&fS==fO)) goto L_008a9791;
L_008a978c:; BB(0x008a978c);
    /* 008a978c: mov dword ptr [esi + 0x10], ebx */ W32((u32)(r_esi+0x10u), r_ebx);
    /* 008a978f: jmp 0x8a97b5 */ goto L_008a97b5;
L_008a9791:; BB(0x008a9791);
    /* 008a9791: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008a9794: imul ecx, dword ptr [ebp - 4] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_ebp+0xfffffffcu)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a9798: imul eax, ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a979b: shl eax, 7 */ { u32 c = (7u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008a979e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a979f: lea eax, [esi + 0x28] */ r_eax = (u32)(r_esi+0x28u);
    /* 008a97a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a97a3: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a97a6: mov dword ptr [esi + 0x10], ecx */ W32((u32)(r_esi+0x10u), r_ecx);
    /* 008a97a9: call 0x8b47d5 */ r_esp -= 4; W32(r_esp, 0x8a97aeu); f_008b47d5();
    /* 008a97ae: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a97b1: mov byte ptr [esi + 0x22], 1 */ W8((u32)(r_esi+0x22u), 0x1u);
L_008a97b5:; BB(0x008a97b5);
    /* 008a97b5: push dword ptr [esi + 0x10] */ { u32 v = R32((u32)(r_esi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a97b8: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a97bb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a97bd: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a97c0: call 0x8a9509 */ r_esp -= 4; W32(r_esp, 0x8a97c5u); f_008a9509();
    /* 008a97c5: mov dword ptr [esi], eax */ W32((u32)(r_esi), r_eax);
    /* 008a97c7: mov eax, dword ptr [edi + 0x4c] */ r_eax = R32((u32)(r_edi+0x4cu));
    /* 008a97ca: and dword ptr [esi + 0x18], 0 */ { u32 ad = (u32)(r_esi+0x18u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a97ce: and dword ptr [esi + 0x1c], 0 */ { u32 ad = (u32)(r_esi+0x1cu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a97d2: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a97d5: and byte ptr [esi + 0x21], 0 */ { u32 ad = (u32)(r_esi+0x21u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a97d9: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
L_008a97dc:; BB(0x008a97dc);
    /* 008a97dc: mov esi, dword ptr [esi + 0x24] */ r_esi = R32((u32)(r_esi+0x24u));
L_008a97df:; BB(0x008a97df);
    /* 008a97df: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a97e1: jne 0x8a9774 */ if (!fZ) goto L_008a9774;
L_008a97e3:; BB(0x008a97e3);
    /* 008a97e3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a97e4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a97e5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a97e6: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a97e7: ret  */ FN_RET(0x008a9669); r_esp += 4; return;
}

void f_008a97e8(void) /* sub_8A97E8 */
{
    FN_ENTER(0x008a97e8);
    /* 008a97e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a97e9: mov ebp, esp */ r_ebp = r_esp;
    /* 008a97eb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a97ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a97ed: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008a97f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a97f1: mov ebx, dword ptr [esi + 0x18] */ r_ebx = R32((u32)(r_esi+0x18u));
    /* 008a97f4: imul ebx, eax */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_eax; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a97f7: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008a97fa: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 008a97fd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a97fe: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008a9800: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a9802: jle 0x8a986c */ if ((fZ||fS!=fO)) goto L_008a986c;
L_008a9804:; BB(0x008a9804);
    /* 008a9804: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 008a9807: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008a9809: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a980b: jge 0x8a980f */ if ((fS==fO)) goto L_008a980f;
L_008a980d:; BB(0x008a980d);
    /* 008a980d: mov eax, ecx */ r_eax = r_ecx;
L_008a980f:; BB(0x008a980f);
    /* 008a980f: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 008a9812: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 008a9815: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a9817: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008a9819: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a981b: jl 0x8a981f */ if ((fS!=fO)) goto L_008a981f;
L_008a981d:; BB(0x008a981d);
    /* 008a981d: mov eax, edx */ r_eax = r_edx;
L_008a981f:; BB(0x008a981f);
    /* 008a981f: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 008a9822: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008a9824: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a9826: jl 0x8a982a */ if ((fS!=fO)) goto L_008a982a;
L_008a9828:; BB(0x008a9828);
    /* 008a9828: mov eax, edx */ r_eax = r_edx;
L_008a982a:; BB(0x008a982a);
    /* 008a982a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a982c: jle 0x8a986c */ if ((fZ||fS!=fO)) goto L_008a986c;
L_008a982e:; BB(0x008a982e);
    /* 008a982e: imul eax, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a9832: cmp byte ptr [ebp + 0xc], 0 */ {  u32 a = R8((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a9836: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a9837: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a983a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a983b: je 0x8a984e */ if (fZ) goto L_008a984e;
L_008a983d:; BB(0x008a983d);
    /* 008a983d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a983f: push dword ptr [eax + edi*4] */ { u32 v = R32((u32)(r_eax+r_edi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 008a9842: lea eax, [esi + 0x28] */ r_eax = (u32)(r_esi+0x28u);
    /* 008a9845: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a9846: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a9849: call dword ptr [esi + 0x2c] */ { u32 t = R32((u32)(r_esi+0x2cu)); r_esp -= 4; W32(r_esp, 0x8a984cu); call_ind(t); }
    /* 008a984c: jmp 0x8a985c */ goto L_008a985c;
L_008a984e:; BB(0x008a984e);
    /* 008a984e: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a9850: push dword ptr [ecx + edi*4] */ { u32 v = R32((u32)(r_ecx+r_edi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 008a9853: lea eax, [esi + 0x28] */ r_eax = (u32)(r_esi+0x28u);
    /* 008a9856: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a9857: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a985a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a985cu); call_ind(t); }
L_008a985c:; BB(0x008a985c);
    /* 008a985c: add edi, dword ptr [esi + 0x14] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a985f: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 008a9862: add ebx, dword ptr [ebp - 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008a9865: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a9868: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a986a: jl 0x8a9804 */ if ((fS!=fO)) goto L_008a9804;
L_008a986c:; BB(0x008a986c);
    /* 008a986c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a986d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a986e: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a986f: ret  */ FN_RET(0x008a97e8); r_esp += 4; return;
}

void f_008a9870(void) /* sub_8A9870 */
{
    FN_ENTER(0x008a9870);
    /* 008a9870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a9871: mov ebp, esp */ r_ebp = r_esp;
    /* 008a9873: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a9874: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a9875: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008a9878: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a9879: mov ebx, dword ptr [esi + 0x18] */ r_ebx = R32((u32)(r_esi+0x18u));
    /* 008a987c: shl eax, 7 */ { u32 c = (7u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008a987f: imul ebx, eax */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_eax; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a9882: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 008a9885: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 008a9888: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9889: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008a988b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a988d: jle 0x8a98f7 */ if ((fZ||fS!=fO)) goto L_008a98f7;
L_008a988f:; BB(0x008a988f);
    /* 008a988f: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 008a9892: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008a9894: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a9896: jge 0x8a989a */ if ((fS==fO)) goto L_008a989a;
L_008a9898:; BB(0x008a9898);
    /* 008a9898: mov eax, ecx */ r_eax = r_ecx;
L_008a989a:; BB(0x008a989a);
    /* 008a989a: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 008a989d: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 008a98a0: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a98a2: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008a98a4: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a98a6: jl 0x8a98aa */ if ((fS!=fO)) goto L_008a98aa;
L_008a98a8:; BB(0x008a98a8);
    /* 008a98a8: mov eax, edx */ r_eax = r_edx;
L_008a98aa:; BB(0x008a98aa);
    /* 008a98aa: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 008a98ad: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008a98af: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a98b1: jl 0x8a98b5 */ if ((fS!=fO)) goto L_008a98b5;
L_008a98b3:; BB(0x008a98b3);
    /* 008a98b3: mov eax, edx */ r_eax = r_edx;
L_008a98b5:; BB(0x008a98b5);
    /* 008a98b5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a98b7: jle 0x8a98f7 */ if ((fZ||fS!=fO)) goto L_008a98f7;
L_008a98b9:; BB(0x008a98b9);
    /* 008a98b9: imul eax, dword ptr [ebp - 8] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_ebp+0xfffffff8u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a98bd: cmp byte ptr [ebp + 0xc], 0 */ {  u32 a = R8((u32)(r_ebp+0xcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a98c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a98c2: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 008a98c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a98c6: je 0x8a98d9 */ if (fZ) goto L_008a98d9;
L_008a98c8:; BB(0x008a98c8);
    /* 008a98c8: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a98ca: push dword ptr [eax + edi*4] */ { u32 v = R32((u32)(r_eax+r_edi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 008a98cd: lea eax, [esi + 0x28] */ r_eax = (u32)(r_esi+0x28u);
    /* 008a98d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a98d1: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a98d4: call dword ptr [esi + 0x2c] */ { u32 t = R32((u32)(r_esi+0x2cu)); r_esp -= 4; W32(r_esp, 0x8a98d7u); call_ind(t); }
    /* 008a98d7: jmp 0x8a98e7 */ goto L_008a98e7;
L_008a98d9:; BB(0x008a98d9);
    /* 008a98d9: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a98db: push dword ptr [ecx + edi*4] */ { u32 v = R32((u32)(r_ecx+r_edi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 008a98de: lea eax, [esi + 0x28] */ r_eax = (u32)(r_esi+0x28u);
    /* 008a98e1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a98e2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a98e5: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a98e7u); call_ind(t); }
L_008a98e7:; BB(0x008a98e7);
    /* 008a98e7: add edi, dword ptr [esi + 0x14] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a98ea: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 008a98ed: add ebx, dword ptr [ebp - 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008a98f0: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a98f3: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a98f5: jl 0x8a988f */ if ((fS!=fO)) goto L_008a988f;
L_008a98f7:; BB(0x008a98f7);
    /* 008a98f7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a98f8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a98f9: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a98fa: ret  */ FN_RET(0x008a9870); r_esp += 4; return;
}

void f_008a98fb(void) /* sub_8A98FB */
{
    FN_ENTER(0x008a98fb);
    /* 008a98fb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a98fc: mov ebp, esp */ r_ebp = r_esp;
    /* 008a98fe: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008a9901: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 008a9904: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a9905: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9906: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008a9909: lea ebx, [ecx + eax] */ r_ebx = (u32)(r_ecx+r_eax);
    /* 008a990c: cmp ebx, dword ptr [esi + 4] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a990f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9910: ja 0x8a991c */ if ((!fC&&!fZ)) goto L_008a991c;
L_008a9912:; BB(0x008a9912);
    /* 008a9912: cmp eax, dword ptr [esi + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a9915: ja 0x8a991c */ if ((!fC&&!fZ)) goto L_008a991c;
L_008a9917:; BB(0x008a9917);
    /* 008a9917: cmp dword ptr [esi], 0 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a991a: jne 0x8a9930 */ if (!fZ) goto L_008a9930;
L_008a991c:; BB(0x008a991c);
    /* 008a991c: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008a991f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008a9921: mov dword ptr [eax + 0x14], 0x14 */ W32((u32)(r_eax+0x14u), 0x14u);
    /* 008a9928: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008a992a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a992b: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a992du); call_ind(t); }
    /* 008a992d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a992e: jmp 0x8a9933 */ goto L_008a9933;
L_008a9930:; BB(0x008a9930);
    /* 008a9930: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
L_008a9933:; BB(0x008a9933);
    /* 008a9933: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 008a9936: cmp dword ptr [ebp + 0x10], eax */ {  u32 a = R32((u32)(r_ebp+0x10u)); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a9939: jb 0x8a9944 */ if (fC) goto L_008a9944;
L_008a993b:; BB(0x008a993b);
    /* 008a993b: mov ecx, dword ptr [esi + 0x10] */ r_ecx = R32((u32)(r_esi+0x10u));
    /* 008a993e: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a9940: cmp ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a9942: jbe 0x8a998b */ if ((fC||fZ)) goto L_008a998b;
L_008a9944:; BB(0x008a9944);
    /* 008a9944: cmp byte ptr [esi + 0x22], 0 */ {  u32 a = R8((u32)(r_esi+0x22u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a9948: jne 0x8a9959 */ if (!fZ) goto L_008a9959;
L_008a994a:; BB(0x008a994a);
    /* 008a994a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008a994c: mov dword ptr [eax + 0x14], 0x44 */ W32((u32)(r_eax+0x14u), 0x44u);
    /* 008a9953: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008a9955: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9956: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a9958u); call_ind(t); }
    /* 008a9958: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a9959:; BB(0x008a9959);
    /* 008a9959: cmp byte ptr [esi + 0x21], 0 */ {  u32 a = R8((u32)(r_esi+0x21u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a995d: je 0x8a996d */ if (fZ) goto L_008a996d;
L_008a995f:; BB(0x008a995f);
    /* 008a995f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a9961: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9962: call 0x8a97e8 */ r_esp -= 4; W32(r_esp, 0x8a9967u); f_008a97e8();
    /* 008a9967: and byte ptr [esi + 0x21], 0 */ { u32 ad = (u32)(r_esi+0x21u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a996b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a996c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a996d:; BB(0x008a996d);
    /* 008a996d: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008a9970: cmp eax, dword ptr [esi + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a9973: ja 0x8a997e */ if ((!fC&&!fZ)) goto L_008a997e;
L_008a9975:; BB(0x008a9975);
    /* 008a9975: mov eax, ebx */ r_eax = r_ebx;
    /* 008a9977: sub eax, dword ptr [esi + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 008a997a: jns 0x8a997e */ if (!fS) goto L_008a997e;
L_008a997c:; BB(0x008a997c);
    /* 008a997c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008a997e:; BB(0x008a997e);
    /* 008a997e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008a9980: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9981: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 008a9984: call 0x8a97e8 */ r_esp -= 4; W32(r_esp, 0x8a9989u); f_008a97e8();
    /* 008a9989: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a998a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a998b:; BB(0x008a998b);
    /* 008a998b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008a998e: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a9990: jae 0x8a99ff */ if (!fC) goto L_008a99ff;
L_008a9992:; BB(0x008a9992);
    /* 008a9992: cmp eax, dword ptr [ebp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a9995: jae 0x8a99b1 */ if (!fC) goto L_008a99b1;
L_008a9997:; BB(0x008a9997);
    /* 008a9997: cmp byte ptr [ebp + 0x18], 0 */ {  u32 a = R8((u32)(r_ebp+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a999b: je 0x8a99ac */ if (fZ) goto L_008a99ac;
L_008a999d:; BB(0x008a999d);
    /* 008a999d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008a999f: mov dword ptr [eax + 0x14], 0x14 */ W32((u32)(r_eax+0x14u), 0x14u);
    /* 008a99a6: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008a99a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a99a9: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a99abu); call_ind(t); }
    /* 008a99ab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a99ac:; BB(0x008a99ac);
    /* 008a99ac: mov edi, dword ptr [ebp + 0x10] */ r_edi = R32((u32)(r_ebp+0x10u));
    /* 008a99af: jmp 0x8a99b3 */ goto L_008a99b3;
L_008a99b1:; BB(0x008a99b1);
    /* 008a99b1: mov edi, eax */ r_edi = r_eax;
L_008a99b3:; BB(0x008a99b3);
    /* 008a99b3: cmp byte ptr [ebp + 0x18], 0 */ {  u32 a = R8((u32)(r_ebp+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a99b7: je 0x8a99bc */ if (fZ) goto L_008a99bc;
L_008a99b9:; BB(0x008a99b9);
    /* 008a99b9: mov dword ptr [esi + 0x1c], ebx */ W32((u32)(r_esi+0x1cu), r_ebx);
L_008a99bc:; BB(0x008a99bc);
    /* 008a99bc: cmp byte ptr [esi + 0x20], 0 */ {  u32 a = R8((u32)(r_esi+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a99c0: je 0x8a99e7 */ if (fZ) goto L_008a99e7;
L_008a99c2:; BB(0x008a99c2);
    /* 008a99c2: mov eax, dword ptr [esi + 8] */ r_eax = R32((u32)(r_esi+0x8u));
    /* 008a99c5: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 008a99c8: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 008a99cb: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 008a99cd: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008a99cf: jmp 0x8a99e1 */ goto L_008a99e1;
L_008a99d1:; BB(0x008a99d1);
    /* 008a99d1: push dword ptr [ebp + 0x14] */ { u32 v = R32((u32)(r_ebp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a99d4: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a99d6: push dword ptr [eax + edi*4] */ { u32 v = R32((u32)(r_eax+r_edi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 008a99d9: call 0x8a8d72 */ r_esp -= 4; W32(r_esp, 0x8a99deu); f_008a8d72();
    /* 008a99de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a99df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a99e0: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_008a99e1:; BB(0x008a99e1);
    /* 008a99e1: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a99e3: jb 0x8a99d1 */ if (fC) goto L_008a99d1;
L_008a99e5:; BB(0x008a99e5);
    /* 008a99e5: jmp 0x8a99ff */ goto L_008a99ff;
L_008a99e7:; BB(0x008a99e7);
    /* 008a99e7: cmp byte ptr [ebp + 0x18], 0 */ {  u32 a = R8((u32)(r_ebp+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a99eb: jne 0x8a9a05 */ if (!fZ) goto L_008a9a05;
L_008a99ed:; BB(0x008a99ed);
    /* 008a99ed: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a99f0: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a99f2: mov dword ptr [ecx + 0x14], 0x14 */ W32((u32)(r_ecx+0x14u), 0x14u);
    /* 008a99f9: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a99fb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a99fc: call dword ptr [ecx] */ { u32 t = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, 0x8a99feu); call_ind(t); }
    /* 008a99fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a99ff:; BB(0x008a99ff);
    /* 008a99ff: cmp byte ptr [ebp + 0x18], 0 */ {  u32 a = R8((u32)(r_ebp+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a9a03: je 0x8a9a09 */ if (fZ) goto L_008a9a09;
L_008a9a05:; BB(0x008a9a05);
    /* 008a9a05: mov byte ptr [esi + 0x21], 1 */ W8((u32)(r_esi+0x21u), 0x1u);
L_008a9a09:; BB(0x008a9a09);
    /* 008a9a09: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008a9a0c: sub eax, dword ptr [esi + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a9a0f: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a9a11: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a9a12: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a9a13: lea eax, [ecx + eax*4] */ r_eax = (u32)(r_ecx+r_eax*4);
    /* 008a9a16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a9a17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008a9a18: ret  */ FN_RET(0x008a98fb); r_esp += 4; return;
}

void f_008a9a19(void) /* sub_8A9A19 */
{
    FN_ENTER(0x008a9a19);
    /* 008a9a19: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a9a1a: mov ebp, esp */ r_ebp = r_esp;
    /* 008a9a1c: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008a9a1f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a9a20: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
    /* 008a9a23: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9a24: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 008a9a27: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9a28: lea edi, [ebx + eax] */ r_edi = (u32)(r_ebx+r_eax);
    /* 008a9a2b: cmp edi, dword ptr [esi + 4] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a9a2e: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
    /* 008a9a31: ja 0x8a9a3d */ if ((!fC&&!fZ)) goto L_008a9a3d;
L_008a9a33:; BB(0x008a9a33);
    /* 008a9a33: cmp eax, dword ptr [esi + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0xcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a9a36: ja 0x8a9a3d */ if ((!fC&&!fZ)) goto L_008a9a3d;
L_008a9a38:; BB(0x008a9a38);
    /* 008a9a38: cmp dword ptr [esi], 0 */ {  u32 a = R32((u32)(r_esi)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9a3b: jne 0x8a9a4f */ if (!fZ) goto L_008a9a4f;
L_008a9a3d:; BB(0x008a9a3d);
    /* 008a9a3d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a9a40: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a9a42: mov dword ptr [ecx + 0x14], 0x14 */ W32((u32)(r_ecx+0x14u), 0x14u);
    /* 008a9a49: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a9a4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a9a4c: call dword ptr [ecx] */ { u32 t = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, 0x8a9a4eu); call_ind(t); }
    /* 008a9a4e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a9a4f:; BB(0x008a9a4f);
    /* 008a9a4f: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 008a9a52: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a9a54: jb 0x8a9a5f */ if (fC) goto L_008a9a5f;
L_008a9a56:; BB(0x008a9a56);
    /* 008a9a56: mov ecx, dword ptr [esi + 0x10] */ r_ecx = R32((u32)(r_esi+0x10u));
    /* 008a9a59: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a9a5b: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a9a5d: jbe 0x8a9aaf */ if ((fC||fZ)) goto L_008a9aaf;
L_008a9a5f:; BB(0x008a9a5f);
    /* 008a9a5f: cmp byte ptr [esi + 0x22], 0 */ {  u32 a = R8((u32)(r_esi+0x22u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a9a63: jne 0x8a9a77 */ if (!fZ) goto L_008a9a77;
L_008a9a65:; BB(0x008a9a65);
    /* 008a9a65: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a9a68: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a9a6a: mov dword ptr [ecx + 0x14], 0x44 */ W32((u32)(r_ecx+0x14u), 0x44u);
    /* 008a9a71: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a9a73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a9a74: call dword ptr [ecx] */ { u32 t = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, 0x8a9a76u); call_ind(t); }
    /* 008a9a76: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a9a77:; BB(0x008a9a77);
    /* 008a9a77: cmp byte ptr [esi + 0x21], 0 */ {  u32 a = R8((u32)(r_esi+0x21u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a9a7b: je 0x8a9a8d */ if (fZ) goto L_008a9a8d;
L_008a9a7d:; BB(0x008a9a7d);
    /* 008a9a7d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a9a7f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a9a82: call 0x8a9870 */ r_esp -= 4; W32(r_esp, 0x8a9a87u); f_008a9870();
    /* 008a9a87: and byte ptr [esi + 0x21], 0 */ { u32 ad = (u32)(r_esi+0x21u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a9a8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a9a8c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a9a8d:; BB(0x008a9a8d);
    /* 008a9a8d: cmp ebx, dword ptr [esi + 0x18] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a9a90: jbe 0x8a9a97 */ if ((fC||fZ)) goto L_008a9a97;
L_008a9a92:; BB(0x008a9a92);
    /* 008a9a92: mov dword ptr [esi + 0x18], ebx */ W32((u32)(r_esi+0x18u), r_ebx);
    /* 008a9a95: jmp 0x8a9aa3 */ goto L_008a9aa3;
L_008a9a97:; BB(0x008a9a97);
    /* 008a9a97: mov eax, edi */ r_eax = r_edi;
    /* 008a9a99: sub eax, dword ptr [esi + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x10u)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fS = ((r >> 31) & 1); }
    /* 008a9a9c: jns 0x8a9aa0 */ if (!fS) goto L_008a9aa0;
L_008a9a9e:; BB(0x008a9a9e);
    /* 008a9a9e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_008a9aa0:; BB(0x008a9aa0);
    /* 008a9aa0: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
L_008a9aa3:; BB(0x008a9aa3);
    /* 008a9aa3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008a9aa5: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a9aa8: call 0x8a9870 */ r_esp -= 4; W32(r_esp, 0x8a9aadu); f_008a9870();
    /* 008a9aad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a9aae: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a9aaf:; BB(0x008a9aaf);
    /* 008a9aaf: mov ebx, dword ptr [esi + 0x1c] */ r_ebx = R32((u32)(r_esi+0x1cu));
    /* 008a9ab2: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a9ab4: jae 0x8a9b22 */ if (!fC) goto L_008a9b22;
L_008a9ab6:; BB(0x008a9ab6);
    /* 008a9ab6: cmp ebx, dword ptr [ebp + 0x10] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x10u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a9ab9: jae 0x8a9ad6 */ if (!fC) goto L_008a9ad6;
L_008a9abb:; BB(0x008a9abb);
    /* 008a9abb: cmp byte ptr [ebp + 0x18], 0 */ {  u32 a = R8((u32)(r_ebp+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a9abf: je 0x8a9ad3 */ if (fZ) goto L_008a9ad3;
L_008a9ac1:; BB(0x008a9ac1);
    /* 008a9ac1: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a9ac4: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a9ac6: mov dword ptr [ecx + 0x14], 0x14 */ W32((u32)(r_ecx+0x14u), 0x14u);
    /* 008a9acd: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a9acf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a9ad0: call dword ptr [ecx] */ { u32 t = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, 0x8a9ad2u); call_ind(t); }
    /* 008a9ad2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a9ad3:; BB(0x008a9ad3);
    /* 008a9ad3: mov ebx, dword ptr [ebp + 0x10] */ r_ebx = R32((u32)(r_ebp+0x10u));
L_008a9ad6:; BB(0x008a9ad6);
    /* 008a9ad6: cmp byte ptr [ebp + 0x18], 0 */ {  u32 a = R8((u32)(r_ebp+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a9ada: je 0x8a9adf */ if (fZ) goto L_008a9adf;
L_008a9adc:; BB(0x008a9adc);
    /* 008a9adc: mov dword ptr [esi + 0x1c], edi */ W32((u32)(r_esi+0x1cu), r_edi);
L_008a9adf:; BB(0x008a9adf);
    /* 008a9adf: cmp byte ptr [esi + 0x20], 0 */ {  u32 a = R8((u32)(r_esi+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a9ae3: je 0x8a9b0a */ if (fZ) goto L_008a9b0a;
L_008a9ae5:; BB(0x008a9ae5);
    /* 008a9ae5: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 008a9ae8: mov edi, dword ptr [esi + 8] */ r_edi = R32((u32)(r_esi+0x8u));
    /* 008a9aeb: shl edi, 7 */ { u32 c = (7u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008a9aee: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008a9af0: sub dword ptr [ebp + 0x14], eax */ { u32 ad = (u32)(r_ebp+0x14u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a9af3: jmp 0x8a9b03 */ goto L_008a9b03;
L_008a9af5:; BB(0x008a9af5);
    /* 008a9af5: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a9af7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9af8: push dword ptr [eax + ebx*4] */ { u32 v = R32((u32)(r_eax+r_ebx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 008a9afb: call 0x8a8d72 */ r_esp -= 4; W32(r_esp, 0x8a9b00u); f_008a8d72();
    /* 008a9b00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a9b01: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a9b02: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
L_008a9b03:; BB(0x008a9b03);
    /* 008a9b03: cmp ebx, dword ptr [ebp + 0x14] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x14u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008a9b06: jb 0x8a9af5 */ if (fC) goto L_008a9af5;
L_008a9b08:; BB(0x008a9b08);
    /* 008a9b08: jmp 0x8a9b22 */ goto L_008a9b22;
L_008a9b0a:; BB(0x008a9b0a);
    /* 008a9b0a: cmp byte ptr [ebp + 0x18], 0 */ {  u32 a = R8((u32)(r_ebp+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a9b0e: jne 0x8a9b28 */ if (!fZ) goto L_008a9b28;
L_008a9b10:; BB(0x008a9b10);
    /* 008a9b10: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a9b13: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a9b15: mov dword ptr [ecx + 0x14], 0x14 */ W32((u32)(r_ecx+0x14u), 0x14u);
    /* 008a9b1c: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a9b1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a9b1f: call dword ptr [ecx] */ { u32 t = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, 0x8a9b21u); call_ind(t); }
    /* 008a9b21: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a9b22:; BB(0x008a9b22);
    /* 008a9b22: cmp byte ptr [ebp + 0x18], 0 */ {  u32 a = R8((u32)(r_ebp+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a9b26: je 0x8a9b2c */ if (fZ) goto L_008a9b2c;
L_008a9b28:; BB(0x008a9b28);
    /* 008a9b28: mov byte ptr [esi + 0x21], 1 */ W8((u32)(r_esi+0x21u), 0x1u);
L_008a9b2c:; BB(0x008a9b2c);
    /* 008a9b2c: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008a9b2f: sub eax, dword ptr [esi + 0x18] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x18u)); u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008a9b32: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008a9b34: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a9b35: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a9b36: lea eax, [ecx + eax*4] */ r_eax = (u32)(r_ecx+r_eax*4);
    /* 008a9b39: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a9b3a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008a9b3b: ret  */ FN_RET(0x008a9a19); r_esp += 4; return;
}

void f_008a9b3c(void) /* sub_8A9B3C */
{
    FN_ENTER(0x008a9b3c);
    /* 008a9b3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a9b3d: mov ebp, esp */ r_ebp = r_esp;
    /* 008a9b3f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008a9b42: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a9b43: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 008a9b46: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 008a9b48: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9b49: mov esi, dword ptr [eax + 4] */ r_esi = R32((u32)(r_eax+0x4u));
    /* 008a9b4c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9b4d: jl 0x8a9b54 */ if ((fS!=fO)) goto L_008a9b54;
L_008a9b4f:; BB(0x008a9b4f);
    /* 008a9b4f: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a9b52: jl 0x8a9b68 */ if ((fS!=fO)) goto L_008a9b68;
L_008a9b54:; BB(0x008a9b54);
    /* 008a9b54: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a9b56: mov dword ptr [ecx + 0x14], 0xc */ W32((u32)(r_ecx+0x14u), 0xcu);
    /* 008a9b5d: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a9b5f: mov dword ptr [ecx + 0x18], ebx */ W32((u32)(r_ecx+0x18u), r_ebx);
    /* 008a9b62: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 008a9b64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a9b65: call dword ptr [ecx] */ { u32 t = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, 0x8a9b67u); call_ind(t); }
    /* 008a9b67: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a9b68:; BB(0x008a9b68);
    /* 008a9b68: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9b6b: jne 0x8a9bb7 */ if (!fZ) goto L_008a9bb7;
L_008a9b6d:; BB(0x008a9b6d);
    /* 008a9b6d: mov edi, dword ptr [esi + 0x40] */ r_edi = R32((u32)(r_esi+0x40u));
    /* 008a9b70: jmp 0x8a9b8b */ goto L_008a9b8b;
L_008a9b72:; BB(0x008a9b72);
    /* 008a9b72: cmp byte ptr [edi + 0x22], 0 */ {  u32 a = R8((u32)(r_edi+0x22u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a9b76: je 0x8a9b88 */ if (fZ) goto L_008a9b88;
L_008a9b78:; BB(0x008a9b78);
    /* 008a9b78: and byte ptr [edi + 0x22], 0 */ { u32 ad = (u32)(r_edi+0x22u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a9b7c: lea eax, [edi + 0x28] */ r_eax = (u32)(r_edi+0x28u);
    /* 008a9b7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a9b80: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a9b83: call dword ptr [edi + 0x30] */ { u32 t = R32((u32)(r_edi+0x30u)); r_esp -= 4; W32(r_esp, 0x8a9b86u); call_ind(t); }
    /* 008a9b86: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a9b87: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a9b88:; BB(0x008a9b88);
    /* 008a9b88: mov edi, dword ptr [edi + 0x24] */ r_edi = R32((u32)(r_edi+0x24u));
L_008a9b8b:; BB(0x008a9b8b);
    /* 008a9b8b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9b8d: jne 0x8a9b72 */ if (!fZ) goto L_008a9b72;
L_008a9b8f:; BB(0x008a9b8f);
    /* 008a9b8f: and dword ptr [esi + 0x40], edi */ { u32 ad = (u32)(r_esi+0x40u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a9b92: mov edi, dword ptr [esi + 0x44] */ r_edi = R32((u32)(r_esi+0x44u));
    /* 008a9b95: jmp 0x8a9bb0 */ goto L_008a9bb0;
L_008a9b97:; BB(0x008a9b97);
    /* 008a9b97: cmp byte ptr [edi + 0x22], 0 */ {  u32 a = R8((u32)(r_edi+0x22u)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a9b9b: je 0x8a9bad */ if (fZ) goto L_008a9bad;
L_008a9b9d:; BB(0x008a9b9d);
    /* 008a9b9d: and byte ptr [edi + 0x22], 0 */ { u32 ad = (u32)(r_edi+0x22u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a9ba1: lea eax, [edi + 0x28] */ r_eax = (u32)(r_edi+0x28u);
    /* 008a9ba4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a9ba5: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a9ba8: call dword ptr [edi + 0x30] */ { u32 t = R32((u32)(r_edi+0x30u)); r_esp -= 4; W32(r_esp, 0x8a9babu); call_ind(t); }
    /* 008a9bab: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a9bac: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a9bad:; BB(0x008a9bad);
    /* 008a9bad: mov edi, dword ptr [edi + 0x24] */ r_edi = R32((u32)(r_edi+0x24u));
L_008a9bb0:; BB(0x008a9bb0);
    /* 008a9bb0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9bb2: jne 0x8a9b97 */ if (!fZ) goto L_008a9b97;
L_008a9bb4:; BB(0x008a9bb4);
    /* 008a9bb4: and dword ptr [esi + 0x44], edi */ { u32 ad = (u32)(r_esi+0x44u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_008a9bb7:; BB(0x008a9bb7);
    /* 008a9bb7: mov eax, dword ptr [esi + ebx*4 + 0x38] */ r_eax = R32((u32)(r_esi+r_ebx*4+0x38u));
    /* 008a9bbb: and dword ptr [esi + ebx*4 + 0x38], 0 */ { u32 ad = (u32)(r_esi+r_ebx*4+0x38u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a9bc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9bc2: je 0x8a9be9 */ if (fZ) goto L_008a9be9;
L_008a9bc4:; BB(0x008a9bc4);
    /* 008a9bc4: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 008a9bc7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 008a9bca: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 008a9bcc: lea edi, [ecx + edx + 0x10] */ r_edi = (u32)(r_ecx+r_edx+0x10u);
    /* 008a9bd0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9bd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a9bd2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a9bd5: call 0x8b47ba */ r_esp -= 4; W32(r_esp, 0x8a9bdau); f_008b47ba();
    /* 008a9bda: sub dword ptr [esi + 0x48], edi */ { u32 ad = (u32)(r_esi+0x48u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a9bdd: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a9be0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9be2: mov eax, ebx */ r_eax = r_ebx;
    /* 008a9be4: jne 0x8a9bc4 */ if (!fZ) goto L_008a9bc4;
L_008a9be6:; BB(0x008a9be6);
    /* 008a9be6: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
L_008a9be9:; BB(0x008a9be9);
    /* 008a9be9: lea ecx, [esi + ebx*4 + 0x30] */ r_ecx = (u32)(r_esi+r_ebx*4+0x30u);
    /* 008a9bed: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 008a9bef: and dword ptr [ecx], 0 */ { u32 ad = (u32)(r_ecx);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a9bf2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a9bf4: je 0x8a9c18 */ if (fZ) goto L_008a9c18;
L_008a9bf6:; BB(0x008a9bf6);
    /* 008a9bf6: mov ecx, dword ptr [eax + 8] */ r_ecx = R32((u32)(r_eax+0x8u));
    /* 008a9bf9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 008a9bfc: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 008a9bfe: lea edi, [ecx + edx + 0x10] */ r_edi = (u32)(r_ecx+r_edx+0x10u);
    /* 008a9c02: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9c03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a9c04: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a9c07: call 0x8b47ba */ r_esp -= 4; W32(r_esp, 0x8a9c0cu); f_008b47ba();
    /* 008a9c0c: sub dword ptr [esi + 0x48], edi */ { u32 ad = (u32)(r_esi+0x48u);  u32 a = R32(ad); u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; W32(ad, r);  }
    /* 008a9c0f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a9c12: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a9c14: mov eax, ebx */ r_eax = r_ebx;
    /* 008a9c16: jne 0x8a9bf6 */ if (!fZ) goto L_008a9bf6;
L_008a9c18:; BB(0x008a9c18);
    /* 008a9c18: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a9c19: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a9c1a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a9c1b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008a9c1c: ret  */ FN_RET(0x008a9b3c); r_esp += 4; return;
}

void f_008a9c1d(void) /* sub_8A9C1D */
{
    FN_ENTER(0x008a9c1d);
    /* 008a9c1d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9c1e: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008a9c22: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9c23: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008a9c25: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_008a9c26:; BB(0x008a9c26);
    /* 008a9c26: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9c27: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9c28: call 0x8a9b3c */ r_esp -= 4; W32(r_esp, 0x8a9c2du); f_008a9b3c();
    /* 008a9c2d: dec edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fS = ((r >> 31) & 1); }
    /* 008a9c2e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a9c2f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a9c30: jns 0x8a9c26 */ if (!fS) goto L_008a9c26;
L_008a9c32:; BB(0x008a9c32);
    /* 008a9c32: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 008a9c34: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a9c37: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9c38: call 0x8b47ba */ r_esp -= 4; W32(r_esp, 0x8a9c3du); f_008b47ba();
    /* 008a9c3d: and dword ptr [esi + 4], 0 */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a9c41: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9c42: call 0x857d95 */ r_esp -= 4; W32(r_esp, 0x8a9c47u); f_00857d95();
    /* 008a9c47: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008a9c4a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a9c4b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a9c4c: ret  */ FN_RET(0x008a9c1d); r_esp += 4; return;
}

void f_008a9c4d(void) /* sub_8A9C4D */
{
    FN_ENTER(0x008a9c4d);
    /* 008a9c4d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a9c4e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9c4f: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 008a9c53: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9c54: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008a9c56: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9c57: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 008a9c5a: call 0x8b47e9 */ r_esp -= 4; W32(r_esp, 0x8a9c5fu); f_008b47e9();
    /* 008a9c5f: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 008a9c61: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9c62: mov edi, eax */ r_edi = r_eax;
    /* 008a9c64: call 0x8b47c5 */ r_esp -= 4; W32(r_esp, 0x8a9c69u); f_008b47c5();
    /* 008a9c69: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a9c6c: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9c6e: jne 0x8a9c8d */ if (!fZ) goto L_008a9c8d;
L_008a9c70:; BB(0x008a9c70);
    /* 008a9c70: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9c71: call 0x857d95 */ r_esp -= 4; W32(r_esp, 0x8a9c76u); f_00857d95();
    /* 008a9c76: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a9c78: mov dword ptr [eax + 0x14], 0x35 */ W32((u32)(r_eax+0x14u), 0x35u);
    /* 008a9c7f: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a9c81: mov dword ptr [eax + 0x18], ebx */ W32((u32)(r_eax+0x18u), r_ebx);
    /* 008a9c84: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a9c86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9c87: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a9c89u); call_ind(t); }
    /* 008a9c89: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a9c8a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a9c8b: jmp 0x8a9cfd */ goto L_008a9cfd;
L_008a9c8d:; BB(0x008a9c8d);
    /* 008a9c8d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008a9c8f: mov dword ptr [eax], 0x8a92ed */ W32((u32)(r_eax), 0x8a92edu);
    /* 008a9c95: mov dword ptr [eax + 4], 0x8a93e9 */ W32((u32)(r_eax+0x4u), 0x8a93e9u);
    /* 008a9c9c: mov dword ptr [eax + 8], 0x8a9477 */ W32((u32)(r_eax+0x8u), 0x8a9477u);
    /* 008a9ca3: mov dword ptr [eax + 0xc], 0x8a9509 */ W32((u32)(r_eax+0xcu), 0x8a9509u);
    /* 008a9caa: mov dword ptr [eax + 0x10], 0x8a95a7 */ W32((u32)(r_eax+0x10u), 0x8a95a7u);
    /* 008a9cb1: mov dword ptr [eax + 0x14], 0x8a9608 */ W32((u32)(r_eax+0x14u), 0x8a9608u);
    /* 008a9cb8: mov dword ptr [eax + 0x18], 0x8a9669 */ W32((u32)(r_eax+0x18u), 0x8a9669u);
    /* 008a9cbf: mov dword ptr [eax + 0x1c], 0x8a98fb */ W32((u32)(r_eax+0x1cu), 0x8a98fbu);
    /* 008a9cc6: mov dword ptr [eax + 0x20], 0x8a9a19 */ W32((u32)(r_eax+0x20u), 0x8a9a19u);
    /* 008a9ccd: mov dword ptr [eax + 0x24], 0x8a9b3c */ W32((u32)(r_eax+0x24u), 0x8a9b3cu);
    /* 008a9cd4: mov dword ptr [eax + 0x28], 0x8a9c1d */ W32((u32)(r_eax+0x28u), 0x8a9c1du);
    /* 008a9cdb: mov dword ptr [eax + 0x2c], edi */ W32((u32)(r_eax+0x2cu), r_edi);
    /* 008a9cde: lea ecx, [eax + 0x3c] */ r_ecx = (u32)(r_eax+0x3cu);
    /* 008a9ce1: pop edx */ { u32 v = R32(r_esp); r_esp += 4; r_edx = v; }
L_008a9ce2:; BB(0x008a9ce2);
    /* 008a9ce2: mov dword ptr [ecx - 8], ebx */ W32((u32)(r_ecx+0xfffffff8u), r_ebx);
    /* 008a9ce5: mov dword ptr [ecx], ebx */ W32((u32)(r_ecx), r_ebx);
    /* 008a9ce7: sub ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 008a9cea: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a9ceb: jne 0x8a9ce2 */ if (!fZ) goto L_008a9ce2;
L_008a9ced:; BB(0x008a9ced);
    /* 008a9ced: mov dword ptr [eax + 0x40], ebx */ W32((u32)(r_eax+0x40u), r_ebx);
    /* 008a9cf0: mov dword ptr [eax + 0x44], ebx */ W32((u32)(r_eax+0x44u), r_ebx);
    /* 008a9cf3: mov dword ptr [eax + 0x48], 0x50 */ W32((u32)(r_eax+0x48u), 0x50u);
    /* 008a9cfa: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
L_008a9cfd:; BB(0x008a9cfd);
    /* 008a9cfd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a9cfe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a9cff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a9d00: ret  */ FN_RET(0x008a9c4d); r_esp += 4; return;
}

void f_008a9d01(void) /* sub_8A9D01 */
{
    FN_ENTER(0x008a9d01);
    /* 008a9d01: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9d02: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008a9d06: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008a9d09: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a9d0b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9d0c: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x8a9d0fu); call_ind(t); }
    /* 008a9d0f: mov al, byte ptr [esi + 0xc] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_esi+0xcu))) & 0xffu);
    /* 008a9d12: neg al */ { u32 x = (u8)r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = (a < b); fC = (b != 0); }
    /* 008a9d14: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a9d15: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a9d16: sbb eax, eax */ { u32 c = fC; u32 a = r_eax; u32 b = r_eax; u32 r = (a - b - c) & 0xffffffffu; r_eax = r;  }
    /* 008a9d18: and eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 008a9d1b: add eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008a9d1e: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 008a9d21: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a9d22: ret  */ FN_RET(0x008a9d01); r_esp += 4; return;
}

void f_008a9d23(void) /* sub_8A9D23 */
{
    FN_ENTER(0x008a9d23);
    /* 008a9d23: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9d24: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 008a9d28: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008a9d2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9d2d: je 0x8a9d34 */ if (fZ) goto L_008a9d34;
L_008a9d2f:; BB(0x008a9d2f);
    /* 008a9d2f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9d30: call dword ptr [eax + 0x28] */ { u32 t = R32((u32)(r_eax+0x28u)); r_esp -= 4; W32(r_esp, 0x8a9d33u); call_ind(t); }
    /* 008a9d33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a9d34:; BB(0x008a9d34);
    /* 008a9d34: and dword ptr [esi + 4], 0 */ { u32 ad = (u32)(r_esi+0x4u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a9d38: and dword ptr [esi + 0x10], 0 */ { u32 ad = (u32)(r_esi+0x10u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a9d3c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a9d3d: ret  */ FN_RET(0x008a9d23); r_esp += 4; return;
}

void f_008a9d3e(void) /* sub_8A9D3E */
{
    FN_ENTER(0x008a9d3e);
    /* 008a9d3e: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a9d42: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008a9d45: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 008a9d4a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008a9d4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a9d4d: call dword ptr [ecx] */ { u32 t = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, 0x8a9d4fu); call_ind(t); }
    /* 008a9d4f: and byte ptr [eax + 0x80], 0 */ { u32 ad = (u32)(r_eax+0x80u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a9d56: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008a9d59: ret  */ FN_RET(0x008a9d3e); r_esp += 4; return;
}

void f_008a9d5a(void) /* sub_8A9D5A */
{
    FN_ENTER(0x008a9d5a);
    /* 008a9d5a: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008a9d5e: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 008a9d61: push 0x112 */ { u32 v = 0x112u; r_esp -= 4; W32(r_esp, v); }
    /* 008a9d66: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008a9d68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a9d69: call dword ptr [ecx] */ { u32 t = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, 0x8a9d6bu); call_ind(t); }
    /* 008a9d6b: and byte ptr [eax + 0x111], 0 */ { u32 ad = (u32)(r_eax+0x111u);  u32 a = R8(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 008a9d72: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008a9d75: ret  */ FN_RET(0x008a9d5a); r_esp += 4; return;
}

void f_008a9de7(void) /* sub_8A9DE7 */
{
    FN_ENTER(0x008a9de7);
    /* 008a9de7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008a9de8: mov ebp, esp */ r_ebp = r_esp;
    /* 008a9dea: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008a9deb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9dec: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 008a9def: cmp dword ptr [esi + 0x10], 0xca */ {  u32 a = R32((u32)(r_esi+0x10u)); u32 b = 0xcau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008a9df6: je 0x8a9e0f */ if (fZ) goto L_008a9e0f;
L_008a9df8:; BB(0x008a9df8);
    /* 008a9df8: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a9dfa: mov dword ptr [eax + 0x14], 0x12 */ W32((u32)(r_eax+0x14u), 0x12u);
    /* 008a9e01: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a9e03: mov ecx, dword ptr [esi + 0x10] */ r_ecx = R32((u32)(r_esi+0x10u));
    /* 008a9e06: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 008a9e09: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 008a9e0b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9e0c: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a9e0eu); call_ind(t); }
    /* 008a9e0e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008a9e0f:; BB(0x008a9e0f);
    /* 008a9e0f: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 008a9e12: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 008a9e15: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008a9e16: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9e17: mov edx, eax */ r_edx = r_eax;
    /* 008a9e19: shl edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008a9e1c: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a9e1e: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 008a9e20: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a9e21: ja 0x8a9e47 */ if ((!fC&&!fZ)) goto L_008a9e47;
L_008a9e23:; BB(0x008a9e23);
    /* 008a9e23: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9e24: push dword ptr [esi + 0x18] */ { u32 v = R32((u32)(r_esi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a9e27: call 0x8a8ce1 */ r_esp -= 4; W32(r_esp, 0x8a9e2cu); f_008a8ce1();
    /* 008a9e2c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9e2d: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a9e30: mov dword ptr [esi + 0x5c], eax */ W32((u32)(r_esi+0x5cu), r_eax);
    /* 008a9e33: call 0x8a8ce1 */ r_esp -= 4; W32(r_esp, 0x8a9e38u); f_008a8ce1();
    /* 008a9e38: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a9e3b: mov dword ptr [esi + 0x114], 1 */ W32((u32)(r_esi+0x114u), 0x1u);
    /* 008a9e45: jmp 0x8a9eb1 */ goto L_008a9eb1;
L_008a9e47:; BB(0x008a9e47);
    /* 008a9e47: mov edx, eax */ r_edx = r_eax;
    /* 008a9e49: shl edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 008a9e4c: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a9e4e: ja 0x8a9e76 */ if ((!fC&&!fZ)) goto L_008a9e76;
L_008a9e50:; BB(0x008a9e50);
    /* 008a9e50: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a9e52: push dword ptr [esi + 0x18] */ { u32 v = R32((u32)(r_esi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a9e55: call 0x8a8ce1 */ r_esp -= 4; W32(r_esp, 0x8a9e5au); f_008a8ce1();
    /* 008a9e5a: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 008a9e5c: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a9e5f: mov dword ptr [esi + 0x5c], eax */ W32((u32)(r_esi+0x5cu), r_eax);
    /* 008a9e62: call 0x8a8ce1 */ r_esp -= 4; W32(r_esp, 0x8a9e67u); f_008a8ce1();
    /* 008a9e67: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a9e6a: mov dword ptr [esi + 0x114], 2 */ W32((u32)(r_esi+0x114u), 0x2u);
    /* 008a9e74: jmp 0x8a9eb1 */ goto L_008a9eb1;
L_008a9e76:; BB(0x008a9e76);
    /* 008a9e76: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a9e78: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008a9e7a: ja 0x8a9ea2 */ if ((!fC&&!fZ)) goto L_008a9ea2;
L_008a9e7c:; BB(0x008a9e7c);
    /* 008a9e7c: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008a9e7e: push dword ptr [esi + 0x18] */ { u32 v = R32((u32)(r_esi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 008a9e81: call 0x8a8ce1 */ r_esp -= 4; W32(r_esp, 0x8a9e86u); f_008a8ce1();
    /* 008a9e86: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008a9e88: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008a9e8b: mov dword ptr [esi + 0x5c], eax */ W32((u32)(r_esi+0x5cu), r_eax);
    /* 008a9e8e: call 0x8a8ce1 */ r_esp -= 4; W32(r_esp, 0x8a9e93u); f_008a8ce1();
    /* 008a9e93: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a9e96: mov dword ptr [esi + 0x114], 4 */ W32((u32)(r_esi+0x114u), 0x4u);
    /* 008a9ea0: jmp 0x8a9eb1 */ goto L_008a9eb1;
L_008a9ea2:; BB(0x008a9ea2);
    /* 008a9ea2: mov eax, dword ptr [esi + 0x18] */ r_eax = R32((u32)(r_esi+0x18u));
    /* 008a9ea5: mov dword ptr [esi + 0x5c], eax */ W32((u32)(r_esi+0x5cu), r_eax);
    /* 008a9ea8: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 008a9eab: mov dword ptr [esi + 0x114], edi */ W32((u32)(r_esi+0x114u), r_edi);
L_008a9eb1:; BB(0x008a9eb1);
    /* 008a9eb1: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 008a9eb5: cmp dword ptr [esi + 0x20], 0 */ {  u32 a = R32((u32)(r_esi+0x20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a9eb9: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 008a9ebc: mov eax, dword ptr [esi + 0xc4] */ r_eax = R32((u32)(r_esi+0xc4u));
    /* 008a9ec2: jle 0x8a9f21 */ if ((fZ||fS!=fO)) goto L_008a9f21;
L_008a9ec4:; BB(0x008a9ec4);
    /* 008a9ec4: add eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_008a9ec7:; BB(0x008a9ec7);
    /* 008a9ec7: mov edx, dword ptr [esi + 0x114] */ r_edx = R32((u32)(r_esi+0x114u));
    /* 008a9ecd: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a9ed0: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 008a9ed3: jge 0x8a9f0d */ if ((fS==fO)) goto L_008a9f0d;
L_008a9ed5:; BB(0x008a9ed5);
    /* 008a9ed5: mov ecx, dword ptr [esi + 0x10c] */ r_ecx = R32((u32)(r_esi+0x10cu));
    /* 008a9edb: imul ecx, edx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
L_008a9ede:; BB(0x008a9ede);
    /* 008a9ede: mov edi, dword ptr [eax - 4] */ r_edi = R32((u32)(r_eax+0xfffffffcu));
    /* 008a9ee1: imul edi, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_edi * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a9ee5: shl edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 008a9ee7: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a9ee9: jg 0x8a9f0d */ if ((!fZ&&fS==fO)) goto L_008a9f0d;
L_008a9eeb:; BB(0x008a9eeb);
    /* 008a9eeb: mov ebx, dword ptr [eax] */ r_ebx = R32((u32)(r_eax));
    /* 008a9eed: imul ebx, dword ptr [ebp + 8] */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)R32((u32)(r_ebp+0x8u)); r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a9ef1: mov edi, dword ptr [esi + 0x110] */ r_edi = R32((u32)(r_esi+0x110u));
    /* 008a9ef7: imul edi, edx */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_edx; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a9efa: shl ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebx = r;  } }
    /* 008a9efc: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a9efe: jg 0x8a9f0d */ if ((!fZ&&fS==fO)) goto L_008a9f0d;
L_008a9f00:; BB(0x008a9f00);
    /* 008a9f00: mov edi, dword ptr [ebp + 8] */ r_edi = R32((u32)(r_ebp+0x8u));
    /* 008a9f03: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a9f05: cmp edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a9f08: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 008a9f0b: jl 0x8a9ede */ if ((fS!=fO)) goto L_008a9ede;
L_008a9f0d:; BB(0x008a9f0d);
    /* 008a9f0d: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 008a9f10: inc dword ptr [ebp - 4] */ { u32 ad = (u32)(r_ebp+0xfffffffcu); u32 x = R32(ad); u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 008a9f13: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 008a9f16: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 008a9f19: add eax, 0x54 */ {  u32 a = r_eax; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a9f1c: cmp ecx, dword ptr [esi + 0x20] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a9f1f: jl 0x8a9ec7 */ if ((fS!=fO)) goto L_008a9ec7;
L_008a9f21:; BB(0x008a9f21);
    /* 008a9f21: mov edi, dword ptr [esi + 0xc4] */ r_edi = R32((u32)(r_esi+0xc4u));
    /* 008a9f27: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 008a9f29: cmp dword ptr [esi + 0x20], ebx */ {  u32 a = R32((u32)(r_esi+0x20u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a9f2c: jle 0x8a9f77 */ if ((fZ||fS!=fO)) goto L_008a9f77;
L_008a9f2e:; BB(0x008a9f2e);
    /* 008a9f2e: add edi, 0x24 */ {  u32 a = r_edi; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
L_008a9f31:; BB(0x008a9f31);
    /* 008a9f31: mov eax, dword ptr [esi + 0x10c] */ r_eax = R32((u32)(r_esi+0x10cu));
    /* 008a9f37: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008a9f3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a9f3b: mov eax, dword ptr [edi - 0x1c] */ r_eax = R32((u32)(r_edi+0xffffffe4u));
    /* 008a9f3e: imul eax, dword ptr [edi] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edi)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a9f41: imul eax, dword ptr [esi + 0x18] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esi+0x18u)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a9f45: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a9f46: call 0x8a8ce1 */ r_esp -= 4; W32(r_esp, 0x8a9f4bu); f_008a8ce1();
    /* 008a9f4b: mov dword ptr [edi + 4], eax */ W32((u32)(r_edi+0x4u), r_eax);
    /* 008a9f4e: mov eax, dword ptr [esi + 0x110] */ r_eax = R32((u32)(r_esi+0x110u));
    /* 008a9f54: shl eax, 3 */ { u32 c = (3u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 008a9f57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a9f58: mov eax, dword ptr [edi - 0x18] */ r_eax = R32((u32)(r_edi+0xffffffe8u));
    /* 008a9f5b: imul eax, dword ptr [esi + 0x1c] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_esi+0x1cu)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a9f5f: imul eax, dword ptr [edi] */ { i64 t = (i64)(i32)r_eax * (i64)(i32)R32((u32)(r_edi)); r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008a9f62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008a9f63: call 0x8a8ce1 */ r_esp -= 4; W32(r_esp, 0x8a9f68u); f_008a8ce1();
    /* 008a9f68: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a9f6b: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 008a9f6e: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008a9f6f: add edi, 0x54 */ {  u32 a = r_edi; u32 b = 0x54u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008a9f72: cmp ebx, dword ptr [esi + 0x20] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_esi+0x20u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a9f75: jl 0x8a9f31 */ if ((fS!=fO)) goto L_008a9f31;
L_008a9f77:; BB(0x008a9f77);
    /* 008a9f77: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 008a9f7a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008a9f7c: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008a9f7d: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a9f7f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008a9f80: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008a9f81: je 0x8a9fa2 */ if (fZ) goto L_008a9fa2;
L_008a9f83:; BB(0x008a9f83);
    /* 008a9f83: jle 0x8a9f9a */ if ((fZ||fS!=fO)) goto L_008a9f9a;
L_008a9f85:; BB(0x008a9f85);
    /* 008a9f85: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 008a9f87: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a9f88: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a9f8a: jle 0x8a9fa2 */ if ((fZ||fS!=fO)) goto L_008a9fa2;
L_008a9f8c:; BB(0x008a9f8c);
    /* 008a9f8c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008a9f8f: jg 0x8a9f9a */ if ((!fZ&&fS==fO)) goto L_008a9f9a;
L_008a9f91:; BB(0x008a9f91);
    /* 008a9f91: mov dword ptr [esi + 0x64], 4 */ W32((u32)(r_esi+0x64u), 0x4u);
    /* 008a9f98: jmp 0x8a9fa5 */ goto L_008a9fa5;
L_008a9f9a:; BB(0x008a9f9a);
    /* 008a9f9a: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 008a9f9d: mov dword ptr [esi + 0x64], eax */ W32((u32)(r_esi+0x64u), r_eax);
    /* 008a9fa0: jmp 0x8a9fa5 */ goto L_008a9fa5;
L_008a9fa2:; BB(0x008a9fa2);
    /* 008a9fa2: mov dword ptr [esi + 0x64], ecx */ W32((u32)(r_esi+0x64u), r_ecx);
L_008a9fa5:; BB(0x008a9fa5);
    /* 008a9fa5: cmp byte ptr [esi + 0x4a], 0 */ {  u32 a = R8((u32)(r_esi+0x4au)); u32 b = 0x0u; u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 008a9fa9: je 0x8a9fb0 */ if (fZ) goto L_008a9fb0;
L_008a9fab:; BB(0x008a9fab);
    /* 008a9fab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a9fad: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008a9fae: jmp 0x8a9fb3 */ goto L_008a9fb3;
L_008a9fb0:; BB(0x008a9fb0);
    /* 008a9fb0: mov eax, dword ptr [esi + 0x64] */ r_eax = R32((u32)(r_esi+0x64u));
L_008a9fb3:; BB(0x008a9fb3);
    /* 008a9fb3: mov edx, esi */ r_edx = r_esi;
    /* 008a9fb5: mov dword ptr [esi + 0x68], eax */ W32((u32)(r_esi+0x68u), r_eax);
    /* 008a9fb8: call 0x8a9d76 */ r_esp -= 4; W32(r_esp, 0x8a9fbdu); f_008a9d76();
    /* 008a9fbd: test al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008a9fbf: je 0x8a9fcc */ if (fZ) goto L_008a9fcc;
L_008a9fc1:; BB(0x008a9fc1);
    /* 008a9fc1: mov eax, dword ptr [esi + 0x110] */ r_eax = R32((u32)(r_esi+0x110u));
    /* 008a9fc7: mov dword ptr [esi + 0x6c], eax */ W32((u32)(r_esi+0x6cu), r_eax);
    /* 008a9fca: jmp 0x8a9fd3 */ goto L_008a9fd3;
L_008a9fcc:; BB(0x008a9fcc);
    /* 008a9fcc: mov dword ptr [esi + 0x6c], 1 */ W32((u32)(r_esi+0x6cu), 0x1u);
L_008a9fd3:; BB(0x008a9fd3);
    /* 008a9fd3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008a9fd4: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008a9fd5: ret  */ FN_RET(0x008a9de7); r_esp += 4; return;
}

void f_008a9fd6(void) /* sub_8A9FD6 */
{
    FN_ENTER(0x008a9fd6);
    /* 008a9fd6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9fd7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9fd8: push 0x580 */ { u32 v = 0x580u; r_esp -= 4; W32(r_esp, v); }
    /* 008a9fdd: mov esi, eax */ r_esi = r_eax;
    /* 008a9fdf: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008a9fe2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008a9fe4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008a9fe5: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x8a9fe7u); call_ind(t); }
    /* 008a9fe7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008a9fea: mov edx, eax */ r_edx = r_eax;
    /* 008a9fec: add edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008a9ff2: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 008a9ff4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008a9ff5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008a9ff7: lea edi, [edx - 0x100] */ r_edi = (u32)(r_edx+0xffffff00u);
    /* 008a9ffd: mov dword ptr [esi + 0x11c], edx */ W32((u32)(r_esi+0x11cu), r_edx);
    /* 008aa003: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
L_008aa005:; BB(0x008aa005);
    /* 008aa005: mov byte ptr [eax + edx], al */ W8((u32)(r_eax+r_edx), (u8)r_eax);
    /* 008aa008: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008aa009: cmp eax, 0xff */ {  u32 a = r_eax; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008aa00e: jle 0x8aa005 */ if ((fZ||fS!=fO)) goto L_008aa005;
L_008aa010:; BB(0x008aa010);
    /* 008aa010: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 008aa012: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aa013: add edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008aa019: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 008aa01b: or eax, 0xffffffff */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 008aa01e: lea edi, [edx + 0x80] */ r_edi = (u32)(r_edx+0x80u);
    /* 008aa024: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008aa026: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aa027: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 008aa029: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008aa02b: lea edi, [edx + 0x200] */ r_edi = (u32)(r_edx+0x200u);
    /* 008aa031: rep stosd dword ptr es:[edi], eax */ while (r_ecx) { W32(r_edi, r_eax); r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008aa033: mov esi, dword ptr [esi + 0x11c] */ r_esi = R32((u32)(r_esi+0x11cu));
    /* 008aa039: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008aa03a: lea edi, [edx + 0x380] */ r_edi = (u32)(r_edx+0x380u);
    /* 008aa040: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 008aa042: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008aa043: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008aa044: ret  */ FN_RET(0x008a9fd6); r_esp += 4; return;
}

