#include "protos.h"

void f_008978df(void) /* ?BltCopy@CD3DXBlt@@IAEJXZ */
{
    FN_ENTER(0x008978df);
    /* 008978df: mov eax, 0x8cb617 */ r_eax = 0x8cb617u;
    /* 008978e4: call 0x8cb064 */ r_esp -= 4; W32(r_esp, 0x8978e9u); f_008cb064();
    /* 008978e9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008978ea: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008978eb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008978ec: mov esi, ecx */ r_esi = r_ecx;
    /* 008978ee: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 008978f1: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008978f3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008978f4: mov edi, dword ptr [eax + 0x1058] */ r_edi = R32((u32)(r_eax+0x1058u));
    /* 008978fa: cmp edi, dword ptr [ecx + 0x1058] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ecx+0x1058u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00897900: jne 0x8979bc */ if (!fZ) goto L_008979bc;
L_00897906:; BB(0x00897906);
    /* 00897906: mov edx, dword ptr [eax + 0x105c] */ r_edx = R32((u32)(r_eax+0x105cu));
    /* 0089790c: cmp edx, dword ptr [ecx + 0x105c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x105cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00897912: jne 0x8979bc */ if (!fZ) goto L_008979bc;
L_00897918:; BB(0x00897918);
    /* 00897918: mov eax, dword ptr [eax + 0x1060] */ r_eax = R32((u32)(r_eax+0x1060u));
    /* 0089791e: cmp eax, dword ptr [ecx + 0x1060] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x1060u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00897924: jne 0x8979bc */ if (!fZ) goto L_008979bc;
L_0089792a:; BB(0x0089792a);
    /* 0089792a: mov eax, edi */ r_eax = r_edi;
    /* 0089792c: shl eax, 4 */ { u32 c = (4u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 0089792f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00897930: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x897935u); f_008581c5();
    /* 00897935: mov ebx, eax */ r_ebx = r_eax;
    /* 00897937: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00897938: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 0089793b: and dword ptr [ebp - 4], 0 */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 0089793f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00897941: je 0x897956 */ if (fZ) goto L_00897956;
L_00897943:; BB(0x00897943);
    /* 00897943: push 0x88f917 */ { u32 v = 0x88f917u; r_esp -= 4; W32(r_esp, v); }
    /* 00897948: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00897949: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0089794b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0089794c: call 0x88fd17 */ r_esp -= 4; W32(r_esp, 0x897951u); f_0088fd17();
    /* 00897951: mov dword ptr [ebp - 0x10], ebx */ W32((u32)(r_ebp+0xfffffff0u), r_ebx);
    /* 00897954: jmp 0x89795a */ goto L_0089795a;
L_00897956:; BB(0x00897956);
    /* 00897956: and dword ptr [ebp - 0x10], 0 */ { u32 ad = (u32)(r_ebp+0xfffffff0u);  u32 a = R32(ad); u32 b = 0x0u; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_0089795a:; BB(0x0089795a);
    /* 0089795a: or dword ptr [ebp - 4], 0xffffffff */ { u32 ad = (u32)(r_ebp+0xfffffffcu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
    /* 0089795e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00897960: cmp dword ptr [ebp - 0x10], ebx */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00897963: je 0x8979bc */ if (fZ) goto L_008979bc;
L_00897965:; BB(0x00897965);
    /* 00897965: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00897968: cmp dword ptr [eax + 0x1060], ebx */ {  u32 a = R32((u32)(r_eax+0x1060u)); u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0089796e: jbe 0x8979af */ if ((fC||fZ)) goto L_008979af;
L_00897970:; BB(0x00897970);
    /* 00897970: mov eax, dword ptr [eax + 0x105c] */ r_eax = R32((u32)(r_eax+0x105cu));
L_00897976:; BB(0x00897976);
    /* 00897976: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00897978: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0089797a: jbe 0x8979a3 */ if ((fC||fZ)) goto L_008979a3;
L_0089797c:; BB(0x0089797c);
    /* 0089797c: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089797f: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00897981: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00897983: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00897984: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00897985: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x897988u); call_ind(t); }
    /* 00897988: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0089798b: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 0089798e: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00897990: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00897991: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00897992: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x897995u); call_ind(t); }
    /* 00897995: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 00897998: mov eax, dword ptr [eax + 0x105c] */ r_eax = R32((u32)(r_eax+0x105cu));
    /* 0089799e: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0089799f: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008979a1: jb 0x89797c */ if (fC) goto L_0089797c;
L_008979a3:; BB(0x008979a3);
    /* 008979a3: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 008979a6: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008979a7: cmp ebx, dword ptr [ecx + 0x1060] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ecx+0x1060u)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008979ad: jb 0x897976 */ if (fC) goto L_00897976;
L_008979af:; BB(0x008979af);
    /* 008979af: push dword ptr [ebp - 0x10] */ { u32 v = R32((u32)(r_ebp+0xfffffff0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008979b2: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x8979b7u); f_00857e98();
    /* 008979b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008979b8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008979ba: jmp 0x8979c1 */ goto L_008979c1;
L_008979bc:; BB(0x008979bc);
    /* 008979bc: mov eax, 0x80004005 */ r_eax = 0x80004005u;
L_008979c1:; BB(0x008979c1);
    /* 008979c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008979c4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008979c5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008979c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008979c7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008979ce: leave  */ r_esp = r_ebp; r_ebp = R32(r_esp); r_esp += 4;
    /* 008979cf: ret  */ FN_RET(0x008978df); r_esp += 4; return;
}

