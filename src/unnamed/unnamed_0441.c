#include "protos.h"

void f_004410c0(void) /* sub_4410C0 */
{
    FN_ENTER(0x004410c0);
    /* 004410c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004410c1: mov edi, ecx */ r_edi = r_ecx;
    /* 004410c3: mov eax, dword ptr [edi + 0x384] */ r_eax = R32((u32)(r_edi+0x384u));
    /* 004410c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004410cb: je 0x4410d4 */ if (fZ) goto L_004410d4;
L_004410cd:; BB(0x004410cd);
    /* 004410cd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004410d0: jne 0x44113a */ if (!fZ) goto L_0044113a;
L_004410d2:; BB(0x004410d2);
    /* 004410d2: jmp 0x4410f5 */ goto L_004410f5;
L_004410d4:; BB(0x004410d4);
    /* 004410d4: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 004410d7: mov dword ptr [edi + 0x384], 1 */ W32((u32)(r_edi+0x384u), 0x1u);
    /* 004410e1: and eax, 0xffdfffff */ {  u32 a = r_eax; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004410e6: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 004410e9: mov edx, 3 */ r_edx = 0x3u;
    /* 004410ee: mov word ptr [edi + 0xb8], dx */ W16((u32)(r_edi+0xb8u), (u16)r_edx);
L_004410f5:; BB(0x004410f5);
    /* 004410f5: mov ecx, edi */ r_ecx = r_edi;
    /* 004410f7: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4410fcu); f_007aa094();
    /* 004410fc: mov eax, dword ptr [edi + 0xb4] */ r_eax = R32((u32)(r_edi+0xb4u));
    /* 00441102: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441105: je 0x44113a */ if (fZ) goto L_0044113a;
L_00441107:; BB(0x00441107);
    /* 00441107: movzx eax, word ptr [edi + 0x334] */ r_eax = (u32)R16((u32)(r_edi+0x334u));
    /* 0044110e: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00441111: mov word ptr [edi + 0x346], ax */ W16((u32)(r_edi+0x346u), (u16)r_eax);
    /* 00441118: mov eax, dword ptr [edi + 0x390] */ r_eax = R32((u32)(r_edi+0x390u));
    /* 0044111e: and edx, 0xfffffdff */ {  u32 a = r_edx; u32 b = 0xfffffdffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00441124: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 00441127: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0044112a: mov dword ptr [edi + 0x390], eax */ W32((u32)(r_edi+0x390u), r_eax);
    /* 00441130: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00441132: mov ecx, edi */ r_ecx = r_edi;
    /* 00441134: call dword ptr [eax + 0xf4] */ { u32 t = R32((u32)(r_eax+0xf4u)); r_esp -= 4; W32(r_esp, 0x44113au); call_ind(t); }
L_0044113a:; BB(0x0044113a);
    /* 0044113a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044113b: call 0x7b999c */ r_esp -= 4; W32(r_esp, 0x441140u); f_007b999c();
    /* 00441140: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00441141: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00441142: ret  */ FN_RET(0x004410c0); r_esp += 4; return;
}

void f_00441144(void)
{
    FN_ENTER(0x00441144);
    /* 00441144: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00441145: mov ebp, esp */ r_ebp = r_esp;
    /* 00441147: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00441149: push 0x8ce56c */ { u32 v = 0x8ce56cu; r_esp -= 4; W32(r_esp, v); }
    /* 0044114e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00441154: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441155: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0044115c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0044115f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00441162: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00441165: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00441168: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0044116b: push 0x398 */ { u32 v = 0x398u; r_esp -= 4; W32(r_esp, v); }
    /* 00441170: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00441177: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x44117cu); f_005caba4();
    /* 0044117c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0044117d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00441180: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441182: je 0x4411bb */ if (fZ) goto L_004411bb;
L_00441184:; BB(0x00441184);
    /* 00441184: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0044118b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00441192: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00441195: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044119b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044119e: call 0x4411c0 */ r_esp -= 4; W32(r_esp, 0x4411a3u); f_004411c0();
    /* 004411a3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004411a6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004411ad:; BB(0x004411ad);
    /* 004411ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004411b0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004411b7: mov esp, ebp */ r_esp = r_ebp;
    /* 004411b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004411ba: ret  */ FN_RET(0x00441144); r_esp += 4; return;
L_004411bb:; BB(0x004411bb);
    /* 004411bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004411bd: jmp 0x4411ad */ goto L_004411ad;
}

void f_004411c0(void) /* sub_4411C0 */
{
    FN_ENTER(0x004411c0);
    /* 004411c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004411c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004411c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004411c5: push 0x8ce588 */ { u32 v = 0x8ce588u; r_esp -= 4; W32(r_esp, v); }
    /* 004411ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004411d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004411d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004411d8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004411db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004411de: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 004411e1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 004411e4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 004411e7: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 004411ea: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004411ed: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 004411f0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004411f3: call 0x52c3fc */ r_esp -= 4; W32(r_esp, 0x4411f8u); f_0052c3fc();
    /* 004411f8: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004411ff: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00441202: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00441205: mov dword ptr [ecx], 0xaf5a60 */ W32((u32)(r_ecx), 0xaf5a60u);
    /* 0044120b: mov eax, dword ptr [0x9a4f50] */ r_eax = R32((u32)(0x9a4f50u));
    /* 00441210: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00441211: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00441214: call dword ptr [0xaf5bac] */ { u32 t = R32((u32)(0xaf5bacu)); r_esp -= 4; W32(r_esp, 0x44121au); call_ind(t); }
    /* 0044121a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0044121d: call 0x4413a4 */ r_esp -= 4; W32(r_esp, 0x441222u); f_004413a4();
    /* 00441222: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00441225: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00441228: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0044122f: mov esp, ebp */ r_esp = r_ebp;
    /* 00441231: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00441232: ret 8 */ FN_RET(0x004411c0); r_esp += 12; return;
}

void f_00441238(void) /* sub_441238 */
{
    FN_ENTER(0x00441238);
    /* 00441238: mov ecx, dword ptr [0xa44818] */ r_ecx = R32((u32)(0xa44818u));
    /* 0044123e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00441240: je 0x441248 */ if (fZ) goto L_00441248;
L_00441242:; BB(0x00441242);
    /* 00441242: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00441244: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00441246: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x441248u); call_ind(t); }
L_00441248:; BB(0x00441248);
    /* 00441248: mov dword ptr [0xa44818], 0 */ W32((u32)(0xa44818u), 0x0u);
    /* 00441252: ret  */ FN_RET(0x00441238); r_esp += 4; return;
}

void f_00441254(void) /* sub_441254 */
{
    FN_ENTER(0x00441254);
    /* 00441254: mov eax, dword ptr [ecx + 0xa4] */ r_eax = R32((u32)(r_ecx+0xa4u));
    /* 0044125a: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 0044125d: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00441260: je 0x441268 */ if (fZ) goto L_00441268;
L_00441262:; BB(0x00441262);
    /* 00441262: mov eax, 1 */ r_eax = 0x1u;
    /* 00441267: ret  */ FN_RET(0x00441254); r_esp += 4; return;
L_00441268:; BB(0x00441268);
    /* 00441268: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044126a: ret  */ FN_RET(0x00441254); r_esp += 4; return;
}

void f_0044126c(void) /* sub_44126C */
{
    FN_ENTER(0x0044126c);
    /* 0044126c: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00441271: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441273: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x441278u); f_007b52ec();
    /* 00441278: ret  */ FN_RET(0x0044126c); r_esp += 4; return;
}

void f_0044127c(void) /* sub_44127C */
{
    FN_ENTER(0x0044127c);
    /* 0044127c: push 0x8000000 */ { u32 v = 0x8000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00441281: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441283: call 0x7b52c4 */ r_esp -= 4; W32(r_esp, 0x441288u); f_007b52c4();
    /* 00441288: ret  */ FN_RET(0x0044127c); r_esp += 4; return;
}

void f_004412c0(void) /* sub_4412C0 */
{
    FN_ENTER(0x004412c0);
    /* 004412c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004412c1: mov ebp, esp */ r_ebp = r_esp;
    /* 004412c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004412c5: push 0x8ce5b0 */ { u32 v = 0x8ce5b0u; r_esp -= 4; W32(r_esp, v); }
    /* 004412ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004412d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004412d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004412d8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004412db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004412de: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004412e1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004412e4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004412e7: mov ecx, dword ptr [0xa447bc] */ r_ecx = R32((u32)(0xa447bcu));
    /* 004412ed: mov dword ptr [0xa44840], ecx */ W32((u32)(0xa44840u), r_ecx);
    /* 004412f3: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 004412f5: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4412fau); f_005b8610();
    /* 004412fa: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 004412fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004412fd: call 0x78e934 */ r_esp -= 4; W32(r_esp, 0x441302u); f_0078e934();
    /* 00441302: and dword ptr [eax], 0xfffffffd */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
    /* 00441305: mov dword ptr [0xa4481c], eax */ W32((u32)(0xa4481cu), r_eax);
    /* 0044130a: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0044130c: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00441313: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x441318u); f_008581c5();
    /* 00441318: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0044131b: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0044131e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441320: je 0x44139d */ if (fZ) goto L_0044139d;
L_00441322:; BB(0x00441322);
    /* 00441322: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00441329: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00441330: mov ecx, dword ptr [0xa44840] */ r_ecx = R32((u32)(0xa44840u));
    /* 00441336: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00441338: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x44133du); f_005b8610();
    /* 0044133d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00441340: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441341: call 0x511b74 */ r_esp -= 4; W32(r_esp, 0x441346u); f_00511b74();
    /* 00441346: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00441349: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00441350:; BB(0x00441350);
    /* 00441350: mov dword ptr [0xa44818], eax */ W32((u32)(0xa44818u), r_eax);
    /* 00441355: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0044135c: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0044135e: call 0x77a684 */ r_esp -= 4; W32(r_esp, 0x441363u); f_0077a684();
    /* 00441363: mov dword ptr [0xa44838], eax */ W32((u32)(0xa44838u), r_eax);
    /* 00441368: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 0044136a: call 0x77a698 */ r_esp -= 4; W32(r_esp, 0x44136fu); f_0077a698();
    /* 0044136f: mov dword ptr [0xa44834], eax */ W32((u32)(0xa44834u), r_eax);
    /* 00441374: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00441376: call 0x77a6b4 */ r_esp -= 4; W32(r_esp, 0x44137bu); f_0077a6b4();
    /* 0044137b: mov dword ptr [0xa44830], eax */ W32((u32)(0xa44830u), r_eax);
    /* 00441380: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00441382: call 0x77a6cc */ r_esp -= 4; W32(r_esp, 0x441387u); f_0077a6cc();
    /* 00441387: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0044138a: mov dword ptr [0xa4482c], eax */ W32((u32)(0xa4482cu), r_eax);
    /* 0044138f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00441392: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00441399: mov esp, ebp */ r_esp = r_ebp;
    /* 0044139b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044139c: ret  */ FN_RET(0x004412c0); r_esp += 4; return;
L_0044139d:; BB(0x0044139d);
    /* 0044139d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0044139f: jmp 0x441350 */ goto L_00441350;
}

void f_004413a4(void) /* sub_4413A4 */
{
    FN_ENTER(0x004413a4);
    /* 004413a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004413a5: mov edi, ecx */ r_edi = r_ecx;
    /* 004413a7: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 004413aa: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 004413ad: fld dword ptr [0x8fe17c] */ FPUSH(R_F32((u32)(0x8fe17cu)));
    /* 004413b3: fadd dword ptr [edi + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edi+0x3cu));
    /* 004413b6: fst dword ptr [edi + 0x304] */ W_F32((u32)(r_edi+0x304u), ST(0));
    /* 004413bc: fstp dword ptr [edi + 0x78] */ W_F32((u32)(r_edi+0x78u), ST(0)); FPOP();
    /* 004413bf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004413c1: push 0x9a4f70 */ { u32 v = 0x9a4f70u; r_esp -= 4; W32(r_esp, v); }
    /* 004413c6: mov dword ptr [edi + 0x300], eax */ W32((u32)(r_edi+0x300u), r_eax);
    /* 004413cc: mov dword ptr [edi + 0x308], edx */ W32((u32)(r_edi+0x308u), r_edx);
    /* 004413d2: mov dword ptr [edi + 0x74], eax */ W32((u32)(r_edi+0x74u), r_eax);
    /* 004413d5: mov eax, dword ptr [0xa44840] */ r_eax = R32((u32)(0xa44840u));
    /* 004413da: mov dword ptr [edi + 0x7c], edx */ W32((u32)(r_edi+0x7cu), r_edx);
    /* 004413dd: mov eax, dword ptr [eax + 0x430] */ r_eax = R32((u32)(r_eax+0x430u));
    /* 004413e3: mov dword ptr [edi + 0xdc], eax */ W32((u32)(r_edi+0xdcu), r_eax);
    /* 004413e9: mov dword ptr [edi + 0xd8], 0x9a4f00 */ W32((u32)(r_edi+0xd8u), 0x9a4f00u);
    /* 004413f3: mov ecx, edi */ r_ecx = r_edi;
    /* 004413f5: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x4413fau); f_007b9a88();
    /* 004413fa: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004413ff: mov ecx, edi */ r_ecx = r_edi;
    /* 00441401: mov dword ptr [edi + 0x370], 0 */ W32((u32)(r_edi+0x370u), 0x0u);
    /* 0044140b: mov dword ptr [edi + 0x358], 0x9a4f54 */ W32((u32)(r_edi+0x358u), 0x9a4f54u);
    /* 00441415: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 0044141a: push dword ptr [0xa44830] */ { u32 v = R32((u32)(0xa44830u)); r_esp -= 4; W32(r_esp, v); }
    /* 00441420: push dword ptr [0xa44834] */ { u32 v = R32((u32)(0xa44834u)); r_esp -= 4; W32(r_esp, v); }
    /* 00441426: push dword ptr [0xa44838] */ { u32 v = R32((u32)(0xa44838u)); r_esp -= 4; W32(r_esp, v); }
    /* 0044142c: call 0x770da4 */ r_esp -= 4; W32(r_esp, 0x441431u); f_00770da4();
    /* 00441431: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00441433: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441434: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 0044143b: mov ecx, edi */ r_ecx = r_edi;
    /* 0044143d: call 0x7aa4c8 */ r_esp -= 4; W32(r_esp, 0x441442u); f_007aa4c8();
    /* 00441442: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 00441444: movzx eax, word ptr [edi + 0xb8] */ r_eax = (u32)R16((u32)(r_edi+0xb8u));
    /* 0044144b: movzx edx, word ptr [edi + 0x2be] */ r_edx = (u32)R16((u32)(r_edi+0x2beu));
    /* 00441452: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00441459: movsx eax, word ptr [edi + 0x2bc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x2bcu));
    /* 00441460: mov word ptr [edi + 0x334], ax */ W16((u32)(r_edi+0x334u), (u16)r_eax);
    /* 00441467: mov word ptr [edi + 0x336], dx */ W16((u32)(r_edi+0x336u), (u16)r_edx);
    /* 0044146e: mov word ptr [edi + 0x346], ax */ W16((u32)(r_edi+0x346u), (u16)r_eax);
    /* 00441475: mov ecx, edi */ r_ecx = r_edi;
    /* 00441477: call 0x787550 */ r_esp -= 4; W32(r_esp, 0x44147cu); f_00787550();
    /* 0044147c: mov ecx, edi */ r_ecx = r_edi;
    /* 0044147e: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x441483u); f_007b4f54();
    /* 00441483: mov ecx, dword ptr [0xa44840] */ r_ecx = R32((u32)(0xa44840u));
    /* 00441489: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 0044148f: mov edx, dword ptr [eax + 0x108] */ r_edx = R32((u32)(r_eax+0x108u));
    /* 00441495: mov dword ptr [edi + 0x34], edx */ W32((u32)(r_edi+0x34u), r_edx);
    /* 00441498: mov eax, dword ptr [ecx + 0x42c] */ r_eax = R32((u32)(r_ecx+0x42cu));
    /* 0044149e: mov eax, dword ptr [eax + 0x10c] */ r_eax = R32((u32)(r_eax+0x10cu));
    /* 004414a4: mov dword ptr [edi + 0x24], eax */ W32((u32)(r_edi+0x24u), r_eax);
    /* 004414a7: mov ecx, edi */ r_ecx = r_edi;
    /* 004414a9: call 0x52ca40 */ r_esp -= 4; W32(r_esp, 0x4414aeu); f_0052ca40();
    /* 004414ae: mov eax, dword ptr [edi + 0x2e8] */ r_eax = R32((u32)(r_edi+0x2e8u));
    /* 004414b4: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 004414b7: or edx, 0x8000 */ {  u32 a = r_edx; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004414bd: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004414c0: mov dword ptr [edi + 0x2e8], eax */ W32((u32)(r_edi+0x2e8u), r_eax);
    /* 004414c6: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004414c8: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 004414cb: mov ecx, edi */ r_ecx = r_edi;
    /* 004414cd: call dword ptr [eax + 0x150] */ { u32 t = R32((u32)(r_eax+0x150u)); r_esp -= 4; W32(r_esp, 0x4414d3u); call_ind(t); }
    /* 004414d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004414d4: ret  */ FN_RET(0x004413a4); r_esp += 4; return;
}

void f_004414d8(void) /* sub_4414D8 */
{
    FN_ENTER(0x004414d8);
    /* 004414d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004414d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004414db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004414dd: call 0x4414fc */ r_esp -= 4; W32(r_esp, 0x4414e2u); f_004414fc();
    /* 004414e2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004414e6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004414e8: jne 0x4414ee */ if (!fZ) goto L_004414ee;
L_004414ea:; BB(0x004414ea);
    /* 004414ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004414eb: ret 4 */ FN_RET(0x004414d8); r_esp += 8; return;
L_004414ee:; BB(0x004414ee);
    /* 004414ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004414ef: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4414f4u); f_005c2f74();
    /* 004414f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004414f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004414f6: ret 4 */ FN_RET(0x004414d8); r_esp += 8; return;
}

void f_004414fc(void) /* sub_4414FC */
{
    FN_ENTER(0x004414fc);
    /* 004414fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004414fd: mov ebp, esp */ r_ebp = r_esp;
    /* 004414ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00441501: push 0x8ce5cc */ { u32 v = 0x8ce5ccu; r_esp -= 4; W32(r_esp, v); }
    /* 00441506: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044150c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044150d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00441514: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00441517: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044151a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0044151d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00441520: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00441523: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00441526: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0044152d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00441530: mov dword ptr [ecx], 0xaf5c60 */ W32((u32)(r_ecx), 0xaf5c60u);
    /* 00441536: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x44153bu); f_007b9c8c();
    /* 0044153b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00441542: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00441545: call 0x52bf84 */ r_esp -= 4; W32(r_esp, 0x44154au); f_0052bf84();
    /* 0044154a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044154d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00441554: mov esp, ebp */ r_esp = r_ebp;
    /* 00441556: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00441557: ret  */ FN_RET(0x004414fc); r_esp += 4; return;
}

void f_00441558(void) /* sub_441558 */
{
    FN_ENTER(0x00441558);
    /* 00441558: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00441559: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 0044155f: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00441564: jne 0x4415a5 */ if (!fZ) goto L_004415a5;
L_00441566:; BB(0x00441566);
    /* 00441566: mov ebx, dword ptr [0xa447ac] */ r_ebx = R32((u32)(0xa447acu));
    /* 0044156c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044156e: jl 0x4415a5 */ if ((fS!=fO)) goto L_004415a5;
L_00441570:; BB(0x00441570);
    /* 00441570: movsx eax, word ptr [ecx + 0x394] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x394u));
    /* 00441577: mov edx, ebx */ r_edx = r_ebx;
    /* 00441579: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0044157b: shr edx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0044157e: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00441580: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00441583: mov ebx, eax */ r_ebx = r_eax;
    /* 00441585: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00441587: shr ebx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0044158a: add ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0044158c: sar ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0044158f: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00441591: jne 0x4415a5 */ if (!fZ) goto L_004415a5;
L_00441593:; BB(0x00441593);
    /* 00441593: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441595: movzx eax, word ptr [ecx + 0x2d8] */ r_eax = (u32)R16((u32)(r_ecx+0x2d8u));
    /* 0044159c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044159d: call 0x43ff8c */ r_esp -= 4; W32(r_esp, 0x4415a2u); f_0043ff8c();
    /* 004415a2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_004415a5:; BB(0x004415a5);
    /* 004415a5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004415a6: ret  */ FN_RET(0x00441558); r_esp += 4; return;
}

void f_004415a8(void) /* sub_4415A8 */
{
    FN_ENTER(0x004415a8);
    /* 004415a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004415a9: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004415ac: mov esi, ecx */ r_esi = r_ecx;
    /* 004415ae: mov eax, dword ptr [esi + 0x60] */ r_eax = R32((u32)(r_esi+0x60u));
    /* 004415b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004415b3: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 004415b6: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004415ba: movzx eax, word ptr [esi + 0x394] */ r_eax = (u32)R16((u32)(r_esi+0x394u));
    /* 004415c1: test al, 3 */ {  u32 a = (u8)r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004415c3: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004415c7: jne 0x4415d0 */ if (!fZ) goto L_004415d0;
L_004415c9:; BB(0x004415c9);
    /* 004415c9: mov eax, 0x62 */ r_eax = 0x62u;
    /* 004415ce: jmp 0x4415d5 */ goto L_004415d5;
L_004415d0:; BB(0x004415d0);
    /* 004415d0: mov eax, 0x61 */ r_eax = 0x61u;
L_004415d5:; BB(0x004415d5);
    /* 004415d5: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004415d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004415d9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004415da: add esi, 0x300 */ {  u32 a = r_esi; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004415e0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004415e1: call 0x50bab4 */ r_esp -= 4; W32(r_esp, 0x4415e6u); f_0050bab4();
    /* 004415e6: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 004415e8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004415e9: call 0x50b510 */ r_esp -= 4; W32(r_esp, 0x4415eeu); f_0050b510();
    /* 004415ee: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004415f1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004415f2: ret  */ FN_RET(0x004415a8); r_esp += 4; return;
}

void f_004415f4(void) /* sub_4415F4 */
{
    FN_ENTER(0x004415f4);
    /* 004415f4: mov eax, dword ptr [ecx + 0x390] */ r_eax = R32((u32)(r_ecx+0x390u));
    /* 004415fa: or eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004415ff: mov edx, dword ptr [ecx + 0x30] */ r_edx = R32((u32)(r_ecx+0x30u));
    /* 00441602: mov dword ptr [ecx + 0x390], eax */ W32((u32)(r_ecx+0x390u), r_eax);
    /* 00441608: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0044160a: or edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00441610: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00441613: call dword ptr [eax + 0x104] */ { u32 t = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, 0x441619u); call_ind(t); }
    /* 00441619: ret  */ FN_RET(0x004415f4); r_esp += 4; return;
}

void f_0044161c(void) /* sub_44161C */
{
    FN_ENTER(0x0044161c);
    /* 0044161c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044161d: mov ebp, esp */ r_ebp = r_esp;
    /* 0044161f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00441621: push 0x8ce5e8 */ { u32 v = 0x8ce5e8u; r_esp -= 4; W32(r_esp, v); }
    /* 00441626: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0044162c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0044162d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00441634: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00441637: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0044163a: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 0044163d: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 00441640: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 00441643: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00441646: movzx eax, word ptr [ebp + 0xc] */ r_eax = (u32)R16((u32)(r_ebp+0xcu));
    /* 0044164a: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 0044164d: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00441650: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00441653: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00441654: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00441657: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 0044165a: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0044165d: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00441660: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 00441663: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00441666: call 0x52c3fc */ r_esp -= 4; W32(r_esp, 0x44166bu); f_0052c3fc();
    /* 0044166b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00441672: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00441675: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00441678: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0044167b: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0044167e: mov word ptr [ecx + 0x1c], dx */ W16((u32)(r_ecx+0x1cu), (u16)r_edx);
    /* 00441682: mov word ptr [ecx + 0x2c], bx */ W16((u32)(r_ecx+0x2cu), (u16)r_ebx);
    /* 00441686: mov dword ptr [ecx], 0xaf5c60 */ W32((u32)(r_ecx), 0xaf5c60u);
    /* 0044168c: mov eax, dword ptr [0x9a51b0] */ r_eax = R32((u32)(0x9a51b0u));
    /* 00441691: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00441694: mov dword ptr [ecx + 0x80], 0 */ W32((u32)(r_ecx+0x80u), 0x0u);
    /* 0044169e: movzx esi, word ptr [edi + 0x28] */ r_esi = (u32)R16((u32)(r_edi+0x28u));
    /* 004416a2: mov word ptr [ecx + 0x28], si */ W16((u32)(r_ecx+0x28u), (u16)r_esi);
    /* 004416a6: movzx eax, word ptr [edi + 0x2a] */ r_eax = (u32)R16((u32)(r_edi+0x2au));
    /* 004416aa: mov word ptr [ecx + 0x2a], ax */ W16((u32)(r_ecx+0x2au), (u16)r_eax);
    /* 004416ae: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 004416b1: mov word ptr [ecx + 0x394], ax */ W16((u32)(r_ecx+0x394u), (u16)r_eax);
    /* 004416b8: and eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004416bb: mov dword ptr [ecx + 0x370], eax */ W32((u32)(r_ecx+0x370u), r_eax);
    /* 004416c1: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 004416c4: mov word ptr [ecx + 0x344], ax */ W16((u32)(r_ecx+0x344u), (u16)r_eax);
    /* 004416cb: call 0x442108 */ r_esp -= 4; W32(r_esp, 0x4416d0u); f_00442108();
    /* 004416d0: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004416d3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004416d6: mov edi, dword ptr [0xa449cc] */ r_edi = R32((u32)(0xa449ccu));
    /* 004416dc: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004416de: sar ebx, 1 */ { u32 c = (1u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 004416e0: shr ebx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 004416e3: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004416e5: sar ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 004416e8: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004416ea: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004416ec: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 004416ef: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004416f1: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004416f3: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004416f5: sub esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 004416f7: mov dword ptr [ebp - 0x44], esi */ W32((u32)(r_ebp+0xffffffbcu), r_esi);
    /* 004416fa: fild dword ptr [ebp - 0x44] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffbcu)));
    /* 004416fd: fmul dword ptr [0x8fe220] */ ST(0) = ST(0) * R_F32((u32)(0x8fe220u));
    /* 00441703: fdiv dword ptr [0x8fe21c] */ ST(0) = ST(0) / R_F32((u32)(0x8fe21cu));
    /* 00441709: fnstcw word ptr [ebp - 0x3c] */ W16((u32)(r_ebp+0xffffffc4u), fcw);
    /* 0044170c: movzx eax, word ptr [ebp - 0x3c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffc4u));
    /* 00441710: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00441715: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00441718: fldcw word ptr [ebp - 0x34] */ fcw = R16((u32)(r_ebp+0xffffffccu));
    /* 0044171b: fistp dword ptr [edx + 0x60] */ W32((u32)(r_edx+0x60u), (u32)fx_int32(ST(0))); FPOP();
    /* 0044171e: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 00441721: mov eax, dword ptr [edx + 0x370] */ r_eax = R32((u32)(r_edx+0x370u));
    /* 00441727: mov ecx, dword ptr [eax*4 + 0x9a5210] */ r_ecx = R32((u32)(r_eax*4+0x9a5210u));
    /* 0044172e: mov eax, dword ptr [edi + 0x42c] */ r_eax = R32((u32)(r_edi+0x42cu));
    /* 00441734: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00441736: mov eax, dword ptr [eax + ecx*8 + 8] */ r_eax = R32((u32)(r_eax+r_ecx*8+0x8u));
    /* 0044173a: mov dword ptr [edx + 0x34], eax */ W32((u32)(r_edx+0x34u), r_eax);
    /* 0044173d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x441742u); f_0082d7b0();
    /* 00441742: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00441744: call 0x830cd8 */ r_esp -= 4; W32(r_esp, 0x441749u); f_00830cd8();
    /* 00441749: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0044174c: mov edx, dword ptr [eax + 0x60] */ r_edx = R32((u32)(r_eax+0x60u));
    /* 0044174f: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00441751: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x441756u); f_0082d8bc();
    /* 00441756: mov esi, dword ptr [ebp - 0x48] */ r_esi = R32((u32)(r_ebp+0xffffffb8u));
    /* 00441759: mov eax, dword ptr [esi + 0x370] */ r_eax = R32((u32)(r_esi+0x370u));
    /* 0044175f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00441761: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00441763: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 00441766: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00441769: lea edx, [eax + ebx + 0x9a51e0] */ r_edx = (u32)(r_eax+r_ebx+0x9a51e0u);
    /* 00441770: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00441771: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00441773: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x441778u); f_00830aa0();
    /* 00441778: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x44177du); f_0082da80();
    /* 0044177d: mov ebx, dword ptr [ebp - 0x48] */ r_ebx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00441780: movsx ecx, word ptr [ebx + 0x394] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x394u));
    /* 00441787: mov esi, dword ptr [ebx + 0x38] */ r_esi = R32((u32)(r_ebx+0x38u));
    /* 0044178a: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0044178d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044178f: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00441792: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00441794: mov dword ptr [eax + 0xa44860], esi */ W32((u32)(r_eax+0xa44860u), r_esi);
    /* 0044179a: mov edi, dword ptr [ebx + 0x3c] */ r_edi = R32((u32)(r_ebx+0x3cu));
    /* 0044179d: mov dword ptr [eax + 0xa44864], edi */ W32((u32)(r_eax+0xa44864u), r_edi);
    /* 004417a3: mov esi, dword ptr [ebx + 0x40] */ r_esi = R32((u32)(r_ebx+0x40u));
    /* 004417a6: test cl, 3 */ {  u32 a = (u8)r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004417a9: mov dword ptr [eax + 0xa44868], esi */ W32((u32)(r_eax+0xa44868u), r_esi);
    /* 004417af: jne 0x4417b8 */ if (!fZ) goto L_004417b8;
L_004417b1:; BB(0x004417b1);
    /* 004417b1: mov eax, 0x422c0000 */ r_eax = 0x422c0000u;
    /* 004417b6: jmp 0x4417bd */ goto L_004417bd;
L_004417b8:; BB(0x004417b8);
    /* 004417b8: mov eax, 0x41700000 */ r_eax = 0x41700000u;
L_004417bd:; BB(0x004417bd);
    /* 004417bd: mov dword ptr [edx + ecx*8 + 0xa44864], eax */ W32((u32)(r_edx+r_ecx*8+0xa44864u), r_eax);
    /* 004417c4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004417c6: mov eax, dword ptr [ebx + 0x370] */ r_eax = R32((u32)(r_ebx+0x370u));
    /* 004417cc: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004417cf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004417d1: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004417d3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004417d5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004417d7: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004417d9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004417db: lea esi, [edx + edx + 0x9a5100] */ r_esi = (u32)(r_edx+r_edx+0x9a5100u);
    /* 004417e2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004417e3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004417e5: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x4417eau); f_007b9a88();
    /* 004417ea: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 004417ed: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 004417f0: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 004417f3: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 004417f6: mov eax, dword ptr [edx + 0xa4] */ r_eax = R32((u32)(r_edx+0xa4u));
    /* 004417fc: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 004417ff: or ecx, 0x500 */ {  u32 a = r_ecx; u32 b = 0x500u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00441805: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 00441808: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0044180b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0044180e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00441815: mov esp, ebp */ r_esp = r_ebp;
    /* 00441817: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00441818: ret 0x14 */ FN_RET(0x0044161c); r_esp += 24; return;
}

void f_0044181c(void) /* sub_44181C */
{
    FN_ENTER(0x0044181c);
    /* 0044181c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0044181d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0044181e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0044181f: mov esi, ecx */ r_esi = r_ecx;
    /* 00441821: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00441824: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00441829: je 0x44182f */ if (fZ) goto L_0044182f;
L_0044182b:; BB(0x0044182b);
    /* 0044182b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0044182c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044182d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044182e: ret  */ FN_RET(0x0044181c); r_esp += 4; return;
L_0044182f:; BB(0x0044182f);
    /* 0044182f: mov eax, dword ptr [0xaca300] */ r_eax = R32((u32)(0xaca300u));
    /* 00441834: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00441836: je 0x44183c */ if (fZ) goto L_0044183c;
L_00441838:; BB(0x00441838);
    /* 00441838: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00441839: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0044183a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0044183b: ret  */ FN_RET(0x0044181c); r_esp += 4; return;
L_0044183c:; BB(0x0044183c);
    /* 0044183c: push 0x42200000 */ { u32 v = 0x42200000u; r_esp -= 4; W32(r_esp, v); }
    /* 00441841: mov ecx, esi */ r_ecx = r_esi;
    /* 00441843: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00441845: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 0044184a: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x44184du); call_ind(t); }
    /* 0044184d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0044184f: je 0x4419cf */ if (fZ) goto L_004419cf;
L_00441855:; BB(0x00441855);
    /* 00441855: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00441857: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00441859: call 0x835f78 */ r_esp -= 4; W32(r_esp, 0x44185eu); f_00835f78();
    /* 0044185e: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00441861: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441866: jne 0x441902 */ if (!fZ) goto L_00441902;
L_0044186c:; BB(0x0044186c);
    /* 0044186c: mov eax, dword ptr [0xa447ac] */ r_eax = R32((u32)(0xa447acu));
    /* 00441871: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00441873: jl 0x4418c6 */ if ((fS!=fO)) goto L_004418c6;
L_00441875:; BB(0x00441875);
    /* 00441875: movsx edx, word ptr [esi + 0x394] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x394u));
    /* 0044187c: mov edi, eax */ r_edi = r_eax;
    /* 0044187e: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00441880: shr edi, 0x1e */ { u32 c = (30u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00441883: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00441885: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00441888: mov eax, edx */ r_eax = r_edx;
    /* 0044188a: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0044188c: shr eax, 0x1e */ { u32 c = (30u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0044188f: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00441891: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00441894: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441896: jne 0x4418c6 */ if (!fZ) goto L_004418c6;
L_00441898:; BB(0x00441898);
    /* 00441898: mov edx, dword ptr [0xa449cc] */ r_edx = R32((u32)(0xa449ccu));
    /* 0044189e: mov eax, dword ptr [esi + 0x370] */ r_eax = R32((u32)(r_esi+0x370u));
    /* 004418a4: mov eax, dword ptr [eax*4 + 0x9a5220] */ r_eax = R32((u32)(r_eax*4+0x9a5220u));
    /* 004418ab: mov edi, dword ptr [edx + 0x42c] */ r_edi = R32((u32)(r_edx+0x42cu));
    /* 004418b1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004418b3: mov eax, dword ptr [edi + eax*8 + 8] */ r_eax = R32((u32)(r_edi+r_eax*8+0x8u));
    /* 004418b7: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 004418ba: movsx eax, word ptr [esi + 0x396] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x396u));
    /* 004418c1: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004418c4: jmp 0x44193f */ goto L_0044193f;
L_004418c6:; BB(0x004418c6);
    /* 004418c6: mov edx, dword ptr [0xa449cc] */ r_edx = R32((u32)(0xa449ccu));
    /* 004418cc: mov eax, dword ptr [esi + 0x370] */ r_eax = R32((u32)(r_esi+0x370u));
    /* 004418d2: mov eax, dword ptr [eax*4 + 0x9a5210] */ r_eax = R32((u32)(r_eax*4+0x9a5210u));
    /* 004418d9: mov edi, dword ptr [edx + 0x42c] */ r_edi = R32((u32)(r_edx+0x42cu));
    /* 004418df: mov edx, dword ptr [esi + 0x390] */ r_edx = R32((u32)(r_esi+0x390u));
    /* 004418e5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004418e7: test edx, 0x10000 */ {  u32 a = r_edx; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004418ed: mov eax, dword ptr [edi + eax*8 + 8] */ r_eax = R32((u32)(r_edi+r_eax*8+0x8u));
    /* 004418f1: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 004418f4: movsx eax, word ptr [esi + 0x396] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x396u));
    /* 004418fb: je 0x44193f */ if (fZ) goto L_0044193f;
L_004418fd:; BB(0x004418fd);
    /* 004418fd: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00441900: jmp 0x44193f */ goto L_0044193f;
L_00441902:; BB(0x00441902);
    /* 00441902: mov eax, dword ptr [0xa449cc] */ r_eax = R32((u32)(0xa449ccu));
    /* 00441907: mov ecx, dword ptr [esi + 0x370] */ r_ecx = R32((u32)(r_esi+0x370u));
    /* 0044190d: mov ebp, dword ptr [ecx*4 + 0x9a5230] */ r_ebp = R32((u32)(r_ecx*4+0x9a5230u));
    /* 00441914: mov ecx, dword ptr [ecx*4 + 0xa449b4] */ r_ecx = R32((u32)(r_ecx*4+0xa449b4u));
    /* 0044191b: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00441921: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00441923: mov edi, dword ptr [edx + ebp*8 + 8] */ r_edi = R32((u32)(r_edx+r_ebp*8+0x8u));
    /* 00441927: mov dword ptr [esi + 0x34], edi */ W32((u32)(r_esi+0x34u), r_edi);
    /* 0044192a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0044192c: je 0x441935 */ if (fZ) goto L_00441935;
L_0044192e:; BB(0x0044192e);
    /* 0044192e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441930: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00441932: call dword ptr [eax + 0xc] */ { u32 t = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, 0x441935u); call_ind(t); }
L_00441935:; BB(0x00441935);
    /* 00441935: mov ebp, 1 */ r_ebp = 0x1u;
    /* 0044193a: mov eax, 0x18 */ r_eax = 0x18u;
L_0044193f:; BB(0x0044193f);
    /* 0044193f: mov edi, dword ptr [0xa449c8] */ r_edi = R32((u32)(0xa449c8u));
    /* 00441945: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00441948: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0044194a: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0044194d: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0044194f: add ecx, dword ptr [edi] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00441951: mov dword ptr [0x9a51d8], ecx */ W32((u32)(0x9a51d8u), r_ecx);
    /* 00441957: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0044195a: jge 0x441968 */ if ((fS==fO)) goto L_00441968;
L_0044195c:; BB(0x0044195c);
    /* 0044195c: mov dword ptr [0x9a51dc], 2 */ W32((u32)(0x9a51dcu), 0x2u);
    /* 00441966: jmp 0x441972 */ goto L_00441972;
L_00441968:; BB(0x00441968);
    /* 00441968: mov dword ptr [0x9a51dc], 1 */ W32((u32)(0x9a51dcu), 0x1u);
L_00441972:; BB(0x00441972);
    /* 00441972: mov ecx, 0x9a51d8 */ r_ecx = 0x9a51d8u;
    /* 00441977: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x44197cu); f_00829cc8();
    /* 0044197c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0044197e: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x441983u); f_007a94a0();
    /* 00441983: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00441984: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x441989u); f_0082d7b0();
    /* 00441989: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 0044198e: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00441991: and eax, 0xfffffbff */ {  u32 a = r_eax; u32 b = 0xfffffbffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00441996: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 0044199b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0044199d: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4419a2u); f_0082d8bc();
    /* 004419a2: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 004419a5: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x4419aau); f_00831758();
    /* 004419aa: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4419afu); f_0082da80();
    /* 004419af: call 0x7a94b0 */ r_esp -= 4; W32(r_esp, 0x4419b4u); f_007a94b0();
    /* 004419b4: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004419b6: je 0x4419ca */ if (fZ) goto L_004419ca;
L_004419b8:; BB(0x004419b8);
    /* 004419b8: mov eax, dword ptr [esi + 0x370] */ r_eax = R32((u32)(r_esi+0x370u));
    /* 004419be: mov ecx, dword ptr [eax*4 + 0xa449b4] */ r_ecx = R32((u32)(r_eax*4+0xa449b4u));
    /* 004419c5: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 004419c7: call dword ptr [edx + 0x10] */ { u32 t = R32((u32)(r_edx+0x10u)); r_esp -= 4; W32(r_esp, 0x4419cau); call_ind(t); }
L_004419ca:; BB(0x004419ca);
    /* 004419ca: call 0x83603c */ r_esp -= 4; W32(r_esp, 0x4419cfu); f_0083603c();
L_004419cf:; BB(0x004419cf);
    /* 004419cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004419d0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004419d1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004419d2: ret  */ FN_RET(0x0044181c); r_esp += 4; return;
}

void f_004419d4(void) /* sub_4419D4 */
{
    FN_ENTER(0x004419d4);
    /* 004419d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004419d5: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004419d8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004419da: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x4419dfu); f_004f7c84();
    /* 004419df: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004419e2: je 0x441b63 */ if (fZ) goto L_00441b63;
L_004419e8:; BB(0x004419e8);
    /* 004419e8: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004419eb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004419ed: call dword ptr [eax + 0x8c] */ { u32 t = R32((u32)(r_eax+0x8cu)); r_esp -= 4; W32(r_esp, 0x4419f3u); call_ind(t); }
    /* 004419f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004419f5: je 0x441a04 */ if (fZ) goto L_00441a04;
L_004419f7:; BB(0x004419f7);
    /* 004419f7: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004419fa: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004419fc: call dword ptr [eax + 0x104] */ { u32 t = R32((u32)(r_eax+0x104u)); r_esp -= 4; W32(r_esp, 0x441a02u); call_ind(t); }
    /* 00441a02: jmp 0x441a1e */ goto L_00441a1e;
L_00441a04:; BB(0x00441a04);
    /* 00441a04: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00441a07: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00441a09: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x441a0fu); call_ind(t); }
    /* 00441a0f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441a11: je 0x441a1e */ if (fZ) goto L_00441a1e;
L_00441a13:; BB(0x00441a13);
    /* 00441a13: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00441a16: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00441a18: call dword ptr [eax + 0x100] */ { u32 t = R32((u32)(r_eax+0x100u)); r_esp -= 4; W32(r_esp, 0x441a1eu); call_ind(t); }
L_00441a1e:; BB(0x00441a1e);
    /* 00441a1e: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00441a25: mov edx, dword ptr [ebp + 0x37c] */ r_edx = R32((u32)(r_ebp+0x37cu));
    /* 00441a2b: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441a2d: je 0x441a62 */ if (fZ) goto L_00441a62;
L_00441a2f:; BB(0x00441a2f);
    /* 00441a2f: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 00441a35: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441a38: je 0x441a51 */ if (fZ) goto L_00441a51;
L_00441a3a:; BB(0x00441a3a);
    /* 00441a3a: mov dword ptr [ebp + 0x384], 0xffffffff */ W32((u32)(r_ebp+0x384u), 0xffffffffu);
    /* 00441a44: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00441a46: call 0x441bf0 */ r_esp -= 4; W32(r_esp, 0x441a4bu); f_00441bf0();
    /* 00441a4b: mov edx, dword ptr [ebp + 0x37c] */ r_edx = R32((u32)(r_ebp+0x37cu));
L_00441a51:; BB(0x00441a51);
    /* 00441a51: mov dword ptr [ebp + 0x384], 0 */ W32((u32)(r_ebp+0x384u), 0x0u);
    /* 00441a5b: mov word ptr [ebp + 0x32e], dx */ W16((u32)(r_ebp+0x32eu), (u16)r_edx);
L_00441a62:; BB(0x00441a62);
    /* 00441a62: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00441a64: call 0x441bf0 */ r_esp -= 4; W32(r_esp, 0x441a69u); f_00441bf0();
    /* 00441a69: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00441a6b: call 0x78730c */ r_esp -= 4; W32(r_esp, 0x441a70u); f_0078730c();
    /* 00441a70: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00441a73: and eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00441a78: jne 0x441aba */ if (!fZ) goto L_00441aba;
L_00441a7a:; BB(0x00441a7a);
    /* 00441a7a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00441a7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00441a7d: mov eax, dword ptr [ebp + 0x300] */ r_eax = R32((u32)(r_ebp+0x300u));
    /* 00441a83: mov edx, dword ptr [ebp + 0x304] */ r_edx = R32((u32)(r_ebp+0x304u));
    /* 00441a89: mov dword ptr [ebp + 0x74], eax */ W32((u32)(r_ebp+0x74u), r_eax);
    /* 00441a8c: mov eax, dword ptr [ebp + 0x308] */ r_eax = R32((u32)(r_ebp+0x308u));
    /* 00441a92: mov dword ptr [ebp + 0x78], edx */ W32((u32)(r_ebp+0x78u), r_edx);
    /* 00441a95: mov dword ptr [ebp + 0x7c], eax */ W32((u32)(r_ebp+0x7cu), r_eax);
    /* 00441a98: call 0x6946a8 */ r_esp -= 4; W32(r_esp, 0x441a9du); f_006946a8();
    /* 00441a9d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441a9f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00441aa1: lea eax, [ebp + 0x38] */ r_eax = (u32)(r_ebp+0x38u);
    /* 00441aa4: push 0xffffa24c */ { u32 v = 0xffffa24cu; r_esp -= 4; W32(r_esp, v); }
    /* 00441aa9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441aaa: call 0x805608 */ r_esp -= 4; W32(r_esp, 0x441aafu); f_00805608();
    /* 00441aaf: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00441ab2: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00441ab5: and eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
L_00441aba:; BB(0x00441aba);
    /* 00441aba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441abc: jne 0x441ada */ if (!fZ) goto L_00441ada;
L_00441abe:; BB(0x00441abe);
    /* 00441abe: movsx edx, word ptr [ebp + 0x398] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebp+0x398u));
    /* 00441ac5: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00441ac8: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 00441acb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00441acd: jle 0x441b68 */ if ((fZ||fS!=fO)) goto L_00441b68;
L_00441ad3:; BB(0x00441ad3);
    /* 00441ad3: mov word ptr [ebp + 0x398], dx */ W16((u32)(r_ebp+0x398u), (u16)r_edx);
L_00441ada:; BB(0x00441ada);
    /* 00441ada: mov eax, dword ptr [0xa9c4ec] */ r_eax = R32((u32)(0xa9c4ecu));
    /* 00441adf: cmp eax, dword ptr [0xa449c4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa449c4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441ae5: je 0x441b13 */ if (fZ) goto L_00441b13;
L_00441ae7:; BB(0x00441ae7);
    /* 00441ae7: mov dword ptr [0xa449c4], eax */ W32((u32)(0xa449c4u), r_eax);
    /* 00441aec: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00441af0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00441af2: mov edi, eax */ r_edi = r_eax;
L_00441af4:; BB(0x00441af4);
    /* 00441af4: mov ecx, dword ptr [edi + 0xa449b4] */ r_ecx = R32((u32)(r_edi+0xa449b4u));
    /* 00441afa: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00441afd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441aff: je 0x441b0a */ if (fZ) goto L_00441b0a;
L_00441b01:; BB(0x00441b01);
    /* 00441b01: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 00441b03: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00441b05: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441b07: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x441b0au); call_ind(t); }
L_00441b0a:; BB(0x00441b0a);
    /* 00441b0a: cmp edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00441b0d: jl 0x441af4 */ if ((fS!=fO)) goto L_00441af4;
L_00441b0f:; BB(0x00441b0f);
    /* 00441b0f: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
L_00441b13:; BB(0x00441b13);
    /* 00441b13: mov eax, dword ptr [0xa447ac] */ r_eax = R32((u32)(0xa447acu));
    /* 00441b18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00441b1a: jl 0x441b4d */ if ((fS!=fO)) goto L_00441b4d;
L_00441b1c:; BB(0x00441b1c);
    /* 00441b1c: mov edx, eax */ r_edx = r_eax;
    /* 00441b1e: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00441b20: shr edx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00441b23: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00441b25: movsx eax, word ptr [ebp + 0x394] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x394u));
    /* 00441b2c: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00441b2f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00441b31: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00441b34: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00441b36: jl 0x441b4d */ if ((fS!=fO)) goto L_00441b4d;
L_00441b38:; BB(0x00441b38);
    /* 00441b38: lea edx, [edx + edx + 4] */ r_edx = (u32)(r_edx+r_edx+0x4u);
    /* 00441b3c: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00441b3e: jge 0x441b4d */ if ((fS==fO)) goto L_00441b4d;
L_00441b40:; BB(0x00441b40);
    /* 00441b40: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00441b43: and eax, 0xfbfbffff */ {  u32 a = r_eax; u32 b = 0xfbfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00441b48: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00441b4b: jmp 0x441b58 */ goto L_00441b58;
L_00441b4d:; BB(0x00441b4d);
    /* 00441b4d: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00441b50: or eax, 0x4040000 */ {  u32 a = r_eax; u32 b = 0x4040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00441b55: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
L_00441b58:; BB(0x00441b58);
    /* 00441b58: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00441b5b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00441b5d: call dword ptr [eax + 0xe4] */ { u32 t = R32((u32)(r_eax+0xe4u)); r_esp -= 4; W32(r_esp, 0x441b63u); call_ind(t); }
L_00441b63:; BB(0x00441b63);
    /* 00441b63: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00441b66: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00441b67: ret  */ FN_RET(0x004419d4); r_esp += 4; return;
L_00441b68:; BB(0x00441b68);
    /* 00441b68: mov eax, 3 */ r_eax = 0x3u;
    /* 00441b6d: mov word ptr [ebp + 0x398], ax */ W16((u32)(r_ebp+0x398u), (u16)r_eax);
    /* 00441b74: movsx eax, word ptr [ebp + 0x396] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x396u));
    /* 00441b7b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00441b7e: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00441b81: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00441b84: jl 0x441be2 */ if ((fS!=fO)) goto L_00441be2;
L_00441b86:; BB(0x00441b86);
    /* 00441b86: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00441b88: mov word ptr [ebp + 0x396], ax */ W16((u32)(r_ebp+0x396u), (u16)r_eax);
    /* 00441b8f: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 00441b95: test eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441b9a: je 0x441bac */ if (fZ) goto L_00441bac;
L_00441b9c:; BB(0x00441b9c);
    /* 00441b9c: and eax, 0xfffeffff */ {  u32 a = r_eax; u32 b = 0xfffeffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00441ba1: mov dword ptr [ebp + 0x390], eax */ W32((u32)(r_ebp+0x390u), r_eax);
    /* 00441ba7: jmp 0x441ada */ goto L_00441ada;
L_00441bac:; BB(0x00441bac);
    /* 00441bac: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x441bb1u); f_008587a5();
    /* 00441bb1: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00441bb4: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00441bb7: fdiv dword ptr [0x8fe208] */ ST(0) = ST(0) / R_F32((u32)(0x8fe208u));
    /* 00441bbd: fcomp dword ptr [0x8fe204] */ fx_compare(ST(0), R_F32((u32)(0x8fe204u))); FPOP();
    /* 00441bc3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00441bc5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00441bc6: ja 0x441ada */ if ((!fC&&!fZ)) goto L_00441ada;
L_00441bcc:; BB(0x00441bcc);
    /* 00441bcc: mov eax, dword ptr [ebp + 0x390] */ r_eax = R32((u32)(r_ebp+0x390u));
    /* 00441bd2: or eax, 0x10000 */ {  u32 a = r_eax; u32 b = 0x10000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00441bd7: mov dword ptr [ebp + 0x390], eax */ W32((u32)(r_ebp+0x390u), r_eax);
    /* 00441bdd: jmp 0x441ada */ goto L_00441ada;
L_00441be2:; BB(0x00441be2);
    /* 00441be2: mov word ptr [ebp + 0x396], ax */ W16((u32)(r_ebp+0x396u), (u16)r_eax);
    /* 00441be9: jmp 0x441ada */ goto L_00441ada;
}

void f_00441bf0(void) /* sub_441BF0 */
{
    FN_ENTER(0x00441bf0);
    /* 00441bf0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00441bf1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00441bf2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00441bf3: mov esi, ecx */ r_esi = r_ecx;
    /* 00441bf5: movsx eax, word ptr [esi + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32eu));
    /* 00441bfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441bfe: je 0x441d49 */ if (fZ) goto L_00441d49;
L_00441c04:; BB(0x00441c04);
    /* 00441c04: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441c07: je 0x441ce2 */ if (fZ) goto L_00441ce2;
L_00441c0d:; BB(0x00441c0d);
    /* 00441c0d: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441c10: jne 0x441c1e */ if (!fZ) goto L_00441c1e;
L_00441c12:; BB(0x00441c12);
    /* 00441c12: mov ecx, esi */ r_ecx = r_esi;
    /* 00441c14: call 0x441d54 */ r_esp -= 4; W32(r_esp, 0x441c19u); f_00441d54();
    /* 00441c19: jmp 0x441ce9 */ goto L_00441ce9;
L_00441c1e:; BB(0x00441c1e);
    /* 00441c1e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00441c21: jne 0x441ce9 */ if (!fZ) goto L_00441ce9;
L_00441c27:; BB(0x00441c27);
    /* 00441c27: mov eax, dword ptr [esi + 0x384] */ r_eax = R32((u32)(r_esi+0x384u));
    /* 00441c2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00441c2f: jne 0x441ce9 */ if (!fZ) goto L_00441ce9;
L_00441c35:; BB(0x00441c35);
    /* 00441c35: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00441c38: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00441c3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441c3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441c3c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00441c3d: push 0x33e */ { u32 v = 0x33eu; r_esp -= 4; W32(r_esp, v); }
    /* 00441c42: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x441c47u); f_00814298();
    /* 00441c47: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00441c4a: mov ecx, esi */ r_ecx = r_esi;
    /* 00441c4c: call 0x441558 */ r_esp -= 4; W32(r_esp, 0x441c51u); f_00441558();
    /* 00441c51: mov ecx, esi */ r_ecx = r_esi;
    /* 00441c53: call 0x4415a8 */ r_esp -= 4; W32(r_esp, 0x441c58u); f_004415a8();
    /* 00441c58: movsx eax, word ptr [esi + 0x394] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x394u));
    /* 00441c5f: mov byte ptr [eax + 0xa4498c], 1 */ W8((u32)(r_eax+0xa4498cu), 0x1u);
    /* 00441c66: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00441c67: mov ecx, eax */ r_ecx = r_eax;
    /* 00441c69: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00441c6b: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00441c6d: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 00441c70: xor ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00441c72: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00441c74: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00441c76: jle 0x441ced */ if ((fZ||fS!=fO)) goto L_00441ced;
L_00441c78:; BB(0x00441c78);
    /* 00441c78: mov edi, eax */ r_edi = r_eax;
    /* 00441c7a: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00441c7c: shr edi, 0x1e */ { u32 c = (30u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00441c7f: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00441c81: sar edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00441c84: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00441c86: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 00441c89: mov eax, 1 */ r_eax = 0x1u;
    /* 00441c8e: lea ecx, [edi + edi + 1] */ r_ecx = (u32)(r_edi+r_edi+0x1u);
    /* 00441c92: lea edi, [edi + edi + 4] */ r_edi = (u32)(r_edi+r_edi+0x4u);
    /* 00441c96: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00441c98: jge 0x441cb8 */ if ((fS==fO)) goto L_00441cb8;
L_00441c9a:; BB(0x00441c9a);
    /* 00441c9a: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
L_00441c9d:; BB(0x00441c9d);
    /* 00441c9d: movsx ebp, byte ptr [ecx + 0xa4498c] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_ecx+0xa4498cu));
    /* 00441ca4: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00441ca7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441ca9: jne 0x441cad */ if (!fZ) goto L_00441cad;
L_00441cab:; BB(0x00441cab);
    /* 00441cab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00441cad:; BB(0x00441cad);
    /* 00441cad: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00441caf: jl 0x441c9d */ if ((fS!=fO)) goto L_00441c9d;
L_00441cb1:; BB(0x00441cb1);
    /* 00441cb1: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00441cb4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00441cb6: je 0x441cd6 */ if (fZ) goto L_00441cd6;
L_00441cb8:; BB(0x00441cb8);
    /* 00441cb8: movzx eax, word ptr [0xa447a4] */ r_eax = (u32)R16((u32)(0xa447a4u));
    /* 00441cbf: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00441cc1: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00441cc4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00441cc5: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x441ccau); f_007b4d18();
    /* 00441cca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00441ccb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00441ccd: je 0x441cd6 */ if (fZ) goto L_00441cd6;
L_00441ccf:; BB(0x00441ccf);
    /* 00441ccf: mov ecx, eax */ r_ecx = r_eax;
    /* 00441cd1: call 0x4415f4 */ r_esp -= 4; W32(r_esp, 0x441cd6u); f_004415f4();
L_00441cd6:; BB(0x00441cd6);
    /* 00441cd6: mov dword ptr [esi + 0x384], 1 */ W32((u32)(r_esi+0x384u), 0x1u);
    /* 00441ce0: jmp 0x441ce9 */ goto L_00441ce9;
L_00441ce2:; BB(0x00441ce2);
    /* 00441ce2: mov ecx, esi */ r_ecx = r_esi;
    /* 00441ce4: call 0x441e28 */ r_esp -= 4; W32(r_esp, 0x441ce9u); f_00441e28();
L_00441ce9:; BB(0x00441ce9);
    /* 00441ce9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00441cea: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00441ceb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00441cec: ret  */ FN_RET(0x00441bf0); r_esp += 4; return;
L_00441ced:; BB(0x00441ced);
    /* 00441ced: lea edi, [eax + 1] */ r_edi = (u32)(r_eax+0x1u);
    /* 00441cf0: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00441cf3: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00441cf5: jge 0x441cd6 */ if ((fS==fO)) goto L_00441cd6;
L_00441cf7:; BB(0x00441cf7);
    /* 00441cf7: movzx eax, word ptr [0xa447a4] */ r_eax = (u32)R16((u32)(0xa447a4u));
    /* 00441cfe: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00441d00: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00441d03: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00441d04: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x441d09u); f_007b4d18();
    /* 00441d09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00441d0a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441d0c: je 0x441d36 */ if (fZ) goto L_00441d36;
L_00441d0e:; BB(0x00441d0e);
    /* 00441d0e: mov edx, dword ptr [eax + 0x390] */ r_edx = R32((u32)(r_eax+0x390u));
    /* 00441d14: or edx, 0x40000 */ {  u32 a = r_edx; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00441d1a: mov dword ptr [eax + 0x390], edx */ W32((u32)(r_eax+0x390u), r_edx);
    /* 00441d20: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 00441d23: or edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00441d29: mov dword ptr [eax + 0x30], edx */ W32((u32)(r_eax+0x30u), r_edx);
    /* 00441d2c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00441d2e: mov ecx, eax */ r_ecx = r_eax;
    /* 00441d30: call dword ptr [edx + 0x104] */ { u32 t = R32((u32)(r_edx+0x104u)); r_esp -= 4; W32(r_esp, 0x441d36u); call_ind(t); }
L_00441d36:; BB(0x00441d36);
    /* 00441d36: movsx eax, word ptr [esi + 0x394] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x394u));
    /* 00441d3d: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00441d40: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00441d43: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00441d45: jl 0x441cf7 */ if ((fS!=fO)) goto L_00441cf7;
L_00441d47:; BB(0x00441d47);
    /* 00441d47: jmp 0x441cd6 */ goto L_00441cd6;
L_00441d49:; BB(0x00441d49);
    /* 00441d49: mov ecx, esi */ r_ecx = r_esi;
    /* 00441d4b: call 0x441e48 */ r_esp -= 4; W32(r_esp, 0x441d50u); f_00441e48();
    /* 00441d50: jmp 0x441ce9 */ goto L_00441ce9;
}

void f_00441d54(void) /* sub_441D54 */
{
    FN_ENTER(0x00441d54);
    /* 00441d54: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00441d55: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00441d57: mov eax, dword ptr [ebp + 0x384] */ r_eax = R32((u32)(r_ebp+0x384u));
    /* 00441d5d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441d5f: je 0x441d84 */ if (fZ) goto L_00441d84;
L_00441d61:; BB(0x00441d61);
    /* 00441d61: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00441d64: jne 0x441de9 */ if (!fZ) goto L_00441de9;
L_00441d6a:; BB(0x00441d6a);
    /* 00441d6a: movsx eax, word ptr [ebp + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x344u));
    /* 00441d71: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00441d74: mov word ptr [ebp + 0x344], ax */ W16((u32)(r_ebp+0x344u), (u16)r_eax);
    /* 00441d7b: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00441d7e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00441d80: jg 0x441de9 */ if ((!fZ&&fS==fO)) goto L_00441de9;
L_00441d82:; BB(0x00441d82);
    /* 00441d82: jmp 0x441deb */ goto L_00441deb;
L_00441d84:; BB(0x00441d84);
    /* 00441d84: mov edx, dword ptr [ebp + 0x390] */ r_edx = R32((u32)(r_ebp+0x390u));
    /* 00441d8a: or edx, 0x10001 */ {  u32 a = r_edx; u32 b = 0x10001u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00441d90: mov eax, 3 */ r_eax = 0x3u;
    /* 00441d95: mov word ptr [ebp + 0x398], ax */ W16((u32)(r_ebp+0x398u), (u16)r_eax);
    /* 00441d9c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00441d9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441d9f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441da0: mov word ptr [ebp + 0x396], ax */ W16((u32)(r_ebp+0x396u), (u16)r_eax);
    /* 00441da7: mov dword ptr [ebp + 0x390], edx */ W32((u32)(r_ebp+0x390u), r_edx);
    /* 00441dad: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00441db0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00441db1: push 0x33d */ { u32 v = 0x33du; r_esp -= 4; W32(r_esp, v); }
    /* 00441db6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x441dbbu); f_00814298();
    /* 00441dbb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00441dbe: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00441dc0: call 0x441558 */ r_esp -= 4; W32(r_esp, 0x441dc5u); f_00441558();
    /* 00441dc5: movzx eax, word ptr [ebp + 0x334] */ r_eax = (u32)R16((u32)(r_ebp+0x334u));
    /* 00441dcc: mov dword ptr [ebp + 0x384], 1 */ W32((u32)(r_ebp+0x384u), 0x1u);
    /* 00441dd6: mov word ptr [ebp + 0x346], ax */ W16((u32)(r_ebp+0x346u), (u16)r_eax);
    /* 00441ddd: mov edx, 3 */ r_edx = 0x3u;
    /* 00441de2: mov word ptr [ebp + 0x344], dx */ W16((u32)(r_ebp+0x344u), (u16)r_edx);
L_00441de9:; BB(0x00441de9);
    /* 00441de9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00441dea: ret  */ FN_RET(0x00441d54); r_esp += 4; return;
L_00441deb:; BB(0x00441deb);
    /* 00441deb: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 00441dee: mov edx, dword ptr [ebp + 0x390] */ r_edx = R32((u32)(r_ebp+0x390u));
    /* 00441df4: and eax, 0xffdffdff */ {  u32 a = r_eax; u32 b = 0xffdffdffu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00441df9: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 00441dfc: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00441dff: jne 0x441e1c */ if (!fZ) goto L_00441e1c;
L_00441e01:; BB(0x00441e01);
    /* 00441e01: movsx eax, word ptr [ebp + 0x32e] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x32eu));
    /* 00441e08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441e0a: je 0x441e1c */ if (fZ) goto L_00441e1c;
L_00441e0c:; BB(0x00441e0c);
    /* 00441e0c: mov dword ptr [ebp + 0x37c], 0 */ W32((u32)(r_ebp+0x37cu), 0x0u);
    /* 00441e16: mov dword ptr [ebp + 0x388], eax */ W32((u32)(r_ebp+0x388u), r_eax);
L_00441e1c:; BB(0x00441e1c);
    /* 00441e1c: and edx, 0xfffffffe */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00441e1f: mov dword ptr [ebp + 0x390], edx */ W32((u32)(r_ebp+0x390u), r_edx);
    /* 00441e25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00441e26: ret  */ FN_RET(0x00441d54); r_esp += 4; return;
}

void f_00441e28(void) /* sub_441E28 */
{
    FN_ENTER(0x00441e28);
    /* 00441e28: mov eax, dword ptr [ecx + 0x384] */ r_eax = R32((u32)(r_ecx+0x384u));
    /* 00441e2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00441e30: jne 0x441e47 */ if (!fZ) goto L_00441e47;
L_00441e32:; BB(0x00441e32);
    /* 00441e32: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00441e35: mov dword ptr [ecx + 0x384], 1 */ W32((u32)(r_ecx+0x384u), 0x1u);
    /* 00441e3f: and eax, 0xfffbffff */ {  u32 a = r_eax; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00441e44: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
L_00441e47:; BB(0x00441e47);
    /* 00441e47: ret  */ FN_RET(0x00441e28); r_esp += 4; return;
}

void f_00441e48(void) /* sub_441E48 */
{
    FN_ENTER(0x00441e48);
    /* 00441e48: mov eax, dword ptr [ecx + 0x384] */ r_eax = R32((u32)(r_ecx+0x384u));
    /* 00441e4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441e50: je 0x441e68 */ if (fZ) goto L_00441e68;
L_00441e52:; BB(0x00441e52);
    /* 00441e52: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441e55: je 0x441e7d */ if (fZ) goto L_00441e7d;
L_00441e57:; BB(0x00441e57);
    /* 00441e57: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00441e5a: jne 0x441e9d */ if (!fZ) goto L_00441e9d;
L_00441e5c:; BB(0x00441e5c);
    /* 00441e5c: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00441e5f: and eax, 0xfdfbffff */ {  u32 a = r_eax; u32 b = 0xfdfbffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00441e64: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00441e67: ret  */ FN_RET(0x00441e48); r_esp += 4; return;
L_00441e68:; BB(0x00441e68);
    /* 00441e68: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00441e6b: mov dword ptr [ecx + 0x384], 1 */ W32((u32)(r_ecx+0x384u), 0x1u);
    /* 00441e75: or eax, 0x2040000 */ {  u32 a = r_eax; u32 b = 0x2040000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00441e7a: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
L_00441e7d:; BB(0x00441e7d);
    /* 00441e7d: movsx eax, word ptr [ecx + 0x344] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x344u));
    /* 00441e84: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00441e87: mov word ptr [ecx + 0x344], ax */ W16((u32)(r_ecx+0x344u), (u16)r_eax);
    /* 00441e8e: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00441e91: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00441e93: jg 0x441e9d */ if ((!fZ&&fS==fO)) goto L_00441e9d;
L_00441e95:; BB(0x00441e95);
    /* 00441e95: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00441e97: call dword ptr [eax + 0xf4] */ { u32 t = R32((u32)(r_eax+0xf4u)); r_esp -= 4; W32(r_esp, 0x441e9du); call_ind(t); }
L_00441e9d:; BB(0x00441e9d);
    /* 00441e9d: ret  */ FN_RET(0x00441e48); r_esp += 4; return;
}

void f_00441ea0(void)
{
    FN_ENTER(0x00441ea0);
    /* 00441ea0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00441ea1: mov ebp, esp */ r_ebp = r_esp;
    /* 00441ea3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00441ea5: push 0x8ce610 */ { u32 v = 0x8ce610u; r_esp -= 4; W32(r_esp, v); }
    /* 00441eaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00441eb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441eb1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00441eb8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00441ebb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00441ebe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00441ec1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00441ec4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00441ec7: push 0x39c */ { u32 v = 0x39cu; r_esp -= 4; W32(r_esp, v); }
    /* 00441ecc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00441ed3: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x441ed8u); f_005caba4();
    /* 00441ed8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00441ed9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00441edc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441ede: je 0x441f17 */ if (fZ) goto L_00441f17;
L_00441ee0:; BB(0x00441ee0);
    /* 00441ee0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00441ee7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00441eee: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00441ef1: push dword ptr [0xaca360] */ { u32 v = R32((u32)(0xaca360u)); r_esp -= 4; W32(r_esp, v); }
    /* 00441ef7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00441efa: call 0x441f1c */ r_esp -= 4; W32(r_esp, 0x441effu); f_00441f1c();
    /* 00441eff: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00441f02: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00441f09:; BB(0x00441f09);
    /* 00441f09: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00441f0c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00441f13: mov esp, ebp */ r_esp = r_ebp;
    /* 00441f15: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00441f16: ret  */ FN_RET(0x00441ea0); r_esp += 4; return;
L_00441f17:; BB(0x00441f17);
    /* 00441f17: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00441f19: jmp 0x441f09 */ goto L_00441f09;
}

void f_00441f1c(void) /* sub_441F1C */
{
    FN_ENTER(0x00441f1c);
    /* 00441f1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00441f1d: mov ebp, esp */ r_ebp = r_esp;
    /* 00441f1f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00441f21: push 0x8ce62c */ { u32 v = 0x8ce62cu; r_esp -= 4; W32(r_esp, v); }
    /* 00441f26: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00441f2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00441f2d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00441f34: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00441f37: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00441f3a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00441f3d: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00441f40: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00441f43: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00441f46: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00441f49: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00441f4c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00441f4f: call 0x52c3fc */ r_esp -= 4; W32(r_esp, 0x441f54u); f_0052c3fc();
    /* 00441f54: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00441f5b: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00441f5e: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00441f61: mov dword ptr [ecx], 0xaf5c60 */ W32((u32)(r_ecx), 0xaf5c60u);
    /* 00441f67: mov eax, dword ptr [0x9a51b0] */ r_eax = R32((u32)(0x9a51b0u));
    /* 00441f6c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00441f6d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00441f70: call dword ptr [0xaf5dac] */ { u32 t = R32((u32)(0xaf5dacu)); r_esp -= 4; W32(r_esp, 0x441f76u); call_ind(t); }
    /* 00441f76: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00441f79: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00441f7b: mov dword ptr [ecx + 0x370], eax */ W32((u32)(r_ecx+0x370u), r_eax);
    /* 00441f81: mov word ptr [ecx + 0x344], ax */ W16((u32)(r_ecx+0x344u), (u16)r_eax);
    /* 00441f88: call 0x442108 */ r_esp -= 4; W32(r_esp, 0x441f8du); f_00442108();
    /* 00441f8d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00441f90: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00441f92: push 0x9a5100 */ { u32 v = 0x9a5100u; r_esp -= 4; W32(r_esp, v); }
    /* 00441f97: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x441f9cu); f_007b9a88();
    /* 00441f9c: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00441f9f: mov edx, dword ptr [0xa449cc] */ r_edx = R32((u32)(0xa449ccu));
    /* 00441fa5: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 00441fab: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 00441fae: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 00441fb1: mov eax, ebx */ r_eax = r_ebx;
    /* 00441fb3: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00441fb6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00441fb9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00441fc0: mov esp, ebp */ r_esp = r_ebp;
    /* 00441fc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00441fc3: ret 8 */ FN_RET(0x00441f1c); r_esp += 12; return;
}

void f_00441fc8(void) /* sub_441FC8 */
{
    FN_ENTER(0x00441fc8);
    /* 00441fc8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00441fc9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00441fcb: mov ebx, eax */ r_ebx = r_eax;
L_00441fcd:; BB(0x00441fcd);
    /* 00441fcd: mov ecx, dword ptr [ebx + 0xa449b4] */ r_ecx = R32((u32)(r_ebx+0xa449b4u));
    /* 00441fd3: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00441fd6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00441fd8: je 0x441fec */ if (fZ) goto L_00441fec;
L_00441fda:; BB(0x00441fda);
    /* 00441fda: je 0x441fe2 */ if (fZ) goto L_00441fe2;
L_00441fdc:; BB(0x00441fdc);
    /* 00441fdc: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00441fde: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00441fe0: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x441fe2u); call_ind(t); }
L_00441fe2:; BB(0x00441fe2);
    /* 00441fe2: mov dword ptr [ebx + 0xa449b0], 0 */ W32((u32)(r_ebx+0xa449b0u), 0x0u);
L_00441fec:; BB(0x00441fec);
    /* 00441fec: cmp ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00441fef: jl 0x441fcd */ if ((fS!=fO)) goto L_00441fcd;
L_00441ff1:; BB(0x00441ff1);
    /* 00441ff1: mov ecx, dword ptr [0xa449c8] */ r_ecx = R32((u32)(0xa449c8u));
    /* 00441ff7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00441ff9: je 0x44200a */ if (fZ) goto L_0044200a;
L_00441ffb:; BB(0x00441ffb);
    /* 00441ffb: call 0x829de0 */ r_esp -= 4; W32(r_esp, 0x442000u); f_00829de0();
    /* 00442000: mov dword ptr [0xa449c8], 0 */ W32((u32)(0xa449c8u), 0x0u);
L_0044200a:; BB(0x0044200a);
    /* 0044200a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0044200b: ret  */ FN_RET(0x00441fc8); r_esp += 4; return;
}

