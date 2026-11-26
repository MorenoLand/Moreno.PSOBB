#include "protos.h"

void f_006bd0f8(void) /* sub_6BD0F8 */
{
    FN_ENTER(0x006bd0f8);
    /* 006bd0f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bd0f9: mov ebp, esp */ r_ebp = r_esp;
    /* 006bd0fb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bd0fd: push 0x8ec33e */ { u32 v = 0x8ec33eu; r_esp -= 4; W32(r_esp, v); }
    /* 006bd102: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006bd108: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd109: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006bd110: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bd113: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006bd116: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006bd119: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006bd11c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006bd11f: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd121: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 006bd128: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6bd12du); f_005caba4();
    /* 006bd12d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006bd130: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bd133: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 006bd136: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bd138: je 0x6bd27f */ if (fZ) goto L_006bd27f;
L_006bd13e:; BB(0x006bd13e);
    /* 006bd13e: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 006bd145: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006bd14c: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bd14f: mov ecx, eax */ r_ecx = r_eax;
    /* 006bd151: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 006bd154: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6bd159u); f_008193cc();
    /* 006bd159: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006bd160: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bd163: mov dword ptr [edx], 0xb3af18 */ W32((u32)(r_edx), 0xb3af18u);
    /* 006bd169: mov eax, dword ptr [0x9cea34] */ r_eax = R32((u32)(0x9cea34u));
    /* 006bd16e: mov ecx, dword ptr [0xaafdb8] */ r_ecx = R32((u32)(0xaafdb8u));
    /* 006bd174: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006bd177: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bd179: jne 0x6bd187 */ if (!fZ) goto L_006bd187;
L_006bd17b:; BB(0x006bd17b);
    /* 006bd17b: mov dword ptr [0xa95a88], 0x9ce920 */ W32((u32)(0xa95a88u), 0x9ce920u);
    /* 006bd185: jmp 0x6bd191 */ goto L_006bd191;
L_006bd187:; BB(0x006bd187);
    /* 006bd187: mov dword ptr [0xa95a88], 0x9ce9a0 */ W32((u32)(0xa95a88u), 0x9ce9a0u);
L_006bd191:; BB(0x006bd191);
    /* 006bd191: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 006bd193: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bd198u); f_0073ec50();
    /* 006bd198: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd19a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd19b: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x6bd1a0u); f_00735708();
    /* 006bd1a0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bd1a3: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bd1a6: mov ecx, dword ptr [0xa95a88] */ r_ecx = R32((u32)(0xa95a88u));
    /* 006bd1ac: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 006bd1af: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 006bd1b1: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006bd1b3: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bd1b6: je 0x6bd1e6 */ if (fZ) goto L_006bd1e6;
L_006bd1b8:; BB(0x006bd1b8);
    /* 006bd1b8: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
L_006bd1ba:; BB(0x006bd1ba);
    /* 006bd1ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd1bb: call 0x793050 */ r_esp -= 4; W32(r_esp, 0x6bd1c0u); f_00793050();
    /* 006bd1c0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bd1c1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bd1c2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd1c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd1c5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006bd1c8: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006bd1cb: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6bd1d0u); f_00735c90();
    /* 006bd1d0: mov eax, dword ptr [0xa95a88] */ r_eax = R32((u32)(0xa95a88u));
    /* 006bd1d5: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006bd1d8: mov eax, dword ptr [eax + ebx*8] */ r_eax = R32((u32)(r_eax+r_ebx*8));
    /* 006bd1db: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bd1de: jne 0x6bd1ba */ if (!fZ) goto L_006bd1ba;
L_006bd1e0:; BB(0x006bd1e0);
    /* 006bd1e0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006bd1e3: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
L_006bd1e6:; BB(0x006bd1e6);
    /* 006bd1e6: push 0x43100000 */ { u32 v = 0x43100000u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd1eb: mov ecx, eax */ r_ecx = r_eax;
    /* 006bd1ed: push 0x43580000 */ { u32 v = 0x43580000u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd1f2: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x6bd1f7u); f_007361d0();
    /* 006bd1f7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006bd1fa: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006bd1fd: call 0x736530 */ r_esp -= 4; W32(r_esp, 0x6bd202u); f_00736530();
    /* 006bd202: push 0x47185800 */ { u32 v = 0x47185800u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd207: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006bd20a: mov ecx, dword ptr [eax + 0x1c] */ r_ecx = R32((u32)(r_eax+0x1cu));
    /* 006bd20d: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x6bd212u); f_00712624();
    /* 006bd212: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd214: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6bd219u); f_00791748();
    /* 006bd219: mov dword ptr [ebp - 0x28], 0x43a60000 */ W32((u32)(r_ebp+0xffffffd8u), 0x43a60000u);
    /* 006bd220: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd222: mov dword ptr [ebp - 0x24], 0x42a00000 */ W32((u32)(r_ebp+0xffffffdcu), 0x42a00000u);
    /* 006bd229: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bd22eu); f_0073ec50();
    /* 006bd22e: lea edx, [ebp - 0x28] */ r_edx = (u32)(r_ebp+0xffffffd8u);
    /* 006bd231: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bd232: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd233: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x6bd238u); f_0073a888();
    /* 006bd238: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bd23b: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bd23e: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 006bd241: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bd243: je 0x6bd25e */ if (fZ) goto L_006bd25e;
L_006bd245:; BB(0x006bd245);
    /* 006bd245: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd247: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6bd24cu); f_007930dc();
    /* 006bd24c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bd24d: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd252: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd253: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006bd256: mov ecx, dword ptr [eax + 0x20] */ r_ecx = R32((u32)(r_eax+0x20u));
    /* 006bd259: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6bd25eu); f_0073ae38();
L_006bd25e:; BB(0x006bd25e);
    /* 006bd25e: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_006bd265:; BB(0x006bd265);
    /* 006bd265: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006bd268: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bd26b: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006bd26e: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006bd271: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bd274: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bd27b: mov esp, ebp */ r_esp = r_ebp;
    /* 006bd27d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bd27e: ret  */ FN_RET(0x006bd0f8); r_esp += 4; return;
L_006bd27f:; BB(0x006bd27f);
    /* 006bd27f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bd281: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006bd284: jmp 0x6bd265 */ goto L_006bd265;
}

void f_006bd288(void) /* sub_6BD288 */
{
    FN_ENTER(0x006bd288);
    /* 006bd288: mov eax, dword ptr [0xa95a84] */ r_eax = R32((u32)(0xa95a84u));
    /* 006bd28d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bd28f: jl 0x6bd29c */ if ((fS!=fO)) goto L_006bd29c;
L_006bd291:; BB(0x006bd291);
    /* 006bd291: mov edx, dword ptr [0xa95a88] */ r_edx = R32((u32)(0xa95a88u));
    /* 006bd297: mov eax, dword ptr [edx + eax*8 + 4] */ r_eax = R32((u32)(r_edx+r_eax*8+0x4u));
    /* 006bd29b: ret  */ FN_RET(0x006bd288); r_esp += 4; return;
L_006bd29c:; BB(0x006bd29c);
    /* 006bd29c: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006bd2a1: ret  */ FN_RET(0x006bd288); r_esp += 4; return;
}

void f_006bd2a4(void) /* sub_6BD2A4 */
{
    FN_ENTER(0x006bd2a4);
    /* 006bd2a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bd2a5: mov ebp, esp */ r_ebp = r_esp;
    /* 006bd2a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bd2a9: push 0x8ec364 */ { u32 v = 0x8ec364u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd2ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006bd2b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd2b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006bd2bc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bd2bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006bd2c2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006bd2c5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006bd2c8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006bd2cb: push 0xa8 */ { u32 v = 0xa8u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd2d0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006bd2d7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6bd2dcu); f_005caba4();
    /* 006bd2dc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bd2dd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006bd2e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bd2e2: je 0x6bd315 */ if (fZ) goto L_006bd315;
L_006bd2e4:; BB(0x006bd2e4);
    /* 006bd2e4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006bd2eb: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006bd2f2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bd2f5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bd2f8: call 0x6bd31c */ r_esp -= 4; W32(r_esp, 0x6bd2fdu); f_006bd31c();
    /* 006bd2fd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bd300: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006bd307:; BB(0x006bd307);
    /* 006bd307: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bd30a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bd311: mov esp, ebp */ r_esp = r_ebp;
    /* 006bd313: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bd314: ret  */ FN_RET(0x006bd2a4); r_esp += 4; return;
L_006bd315:; BB(0x006bd315);
    /* 006bd315: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bd317: jmp 0x6bd307 */ goto L_006bd307;
}

void f_006bd31c(void) /* sub_6BD31C */
{
    FN_ENTER(0x006bd31c);
    /* 006bd31c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bd31d: mov ebp, esp */ r_ebp = r_esp;
    /* 006bd31f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bd321: push 0x8ec380 */ { u32 v = 0x8ec380u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd326: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006bd32c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd32d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006bd334: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bd337: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006bd33a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006bd33d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006bd340: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006bd343: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bd346: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006bd349: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6bd34eu); f_008193cc();
    /* 006bd34e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006bd355: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bd358: mov dword ptr [edx], 0xb3af28 */ W32((u32)(r_edx), 0xb3af28u);
    /* 006bd35e: mov eax, dword ptr [0x9cea38] */ r_eax = R32((u32)(0x9cea38u));
    /* 006bd363: push 0x59 */ { u32 v = 0x59u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd365: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 006bd368: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bd36du); f_0073ec50();
    /* 006bd36d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd36e: call 0x735874 */ r_esp -= 4; W32(r_esp, 0x6bd373u); f_00735874();
    /* 006bd373: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bd376: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bd379: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
    /* 006bd37f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bd381: je 0x6bd3a5 */ if (fZ) goto L_006bd3a5;
L_006bd383:; BB(0x006bd383);
    /* 006bd383: push 0x42d00000 */ { u32 v = 0x42d00000u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd388: mov ecx, eax */ r_ecx = r_eax;
    /* 006bd38a: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x6bd38fu); f_00736138();
    /* 006bd38f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bd392: mov ecx, dword ptr [eax + 0xa0] */ r_ecx = R32((u32)(r_eax+0xa0u));
    /* 006bd398: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x6bd39du); f_00736458();
    /* 006bd39d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd39f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6bd3a4u); f_00791748();
    /* 006bd3a4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006bd3a5:; BB(0x006bd3a5);
    /* 006bd3a5: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd3a7: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bd3acu); f_0073ec50();
    /* 006bd3ac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd3ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd3af: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x6bd3b4u); f_00735708();
    /* 006bd3b4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bd3b7: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bd3ba: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
    /* 006bd3c0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bd3c2: je 0x6bd415 */ if (fZ) goto L_006bd415;
L_006bd3c4:; BB(0x006bd3c4);
    /* 006bd3c4: call 0x6bd4d4 */ r_esp -= 4; W32(r_esp, 0x6bd3c9u); f_006bd4d4();
    /* 006bd3c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bd3cb: je 0x6bd4b4 */ if (fZ) goto L_006bd4b4;
L_006bd3d1:; BB(0x006bd3d1);
    /* 006bd3d1: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bd3d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd3d5: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bd3d8: push 0xa95a8c */ { u32 v = 0xa95a8cu; r_esp -= 4; W32(r_esp, v); }
    /* 006bd3dd: push 0x92c4f8 */ { u32 v = 0x92c4f8u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd3e2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bd3e3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x6bd3e8u); f_00857e29();
    /* 006bd3e8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006bd3eb:; BB(0x006bd3eb);
    /* 006bd3eb: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bd3ee: mov ecx, dword ptr [ebx + 0x9c] */ r_ecx = R32((u32)(r_ebx+0x9cu));
    /* 006bd3f4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bd3f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd3f7: mov word ptr [ebx + 0x9a], ax */ W16((u32)(r_ebx+0x9au), (u16)r_eax);
    /* 006bd3fe: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd403: lea edx, [ebx + 0x1c] */ r_edx = (u32)(r_ebx+0x1cu);
    /* 006bd406: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bd407: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6bd40cu); f_00735c90();
    /* 006bd40c: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bd40f: mov eax, dword ptr [eax + 0x9c] */ r_eax = R32((u32)(r_eax+0x9cu));
L_006bd415:; BB(0x006bd415);
    /* 006bd415: push 0x42800000 */ { u32 v = 0x42800000u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd41a: mov ecx, eax */ r_ecx = r_eax;
    /* 006bd41c: push 0x43dd0000 */ { u32 v = 0x43dd0000u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd421: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x6bd426u); f_007361d0();
    /* 006bd426: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bd429: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 006bd42f: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x6bd434u); f_00736458();
    /* 006bd434: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bd437: mov ecx, dword ptr [eax + 0x9c] */ r_ecx = R32((u32)(r_eax+0x9cu));
    /* 006bd43d: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 006bd444: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd446: or edx, 0xffff0080 */ {  u32 a = r_edx; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006bd44c: mov dword ptr [ebp - 0x28], 0x43a60000 */ W32((u32)(r_ebp+0xffffffd8u), 0x43a60000u);
    /* 006bd453: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 006bd45a: mov dword ptr [ebp - 0x24], 0x42a00000 */ W32((u32)(r_ebp+0xffffffdcu), 0x42a00000u);
    /* 006bd461: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bd466u); f_0073ec50();
    /* 006bd466: lea edx, [ebp - 0x28] */ r_edx = (u32)(r_ebp+0xffffffd8u);
    /* 006bd469: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bd46a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd46b: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x6bd470u); f_0073a888();
    /* 006bd470: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bd473: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bd476: mov dword ptr [edx + 0xa4], eax */ W32((u32)(r_edx+0xa4u), r_eax);
    /* 006bd47c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bd47e: je 0x6bd49f */ if (fZ) goto L_006bd49f;
L_006bd480:; BB(0x006bd480);
    /* 006bd480: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd482: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6bd487u); f_007930dc();
    /* 006bd487: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bd488: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bd48b: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd490: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd491: mov ecx, dword ptr [edx + 0xa4] */ r_ecx = R32((u32)(r_edx+0xa4u));
    /* 006bd497: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6bd49cu); f_0073ae38();
    /* 006bd49c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
L_006bd49f:; BB(0x006bd49f);
    /* 006bd49f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bd4a2: mov eax, edx */ r_eax = r_edx;
    /* 006bd4a4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bd4a7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bd4ae: mov esp, ebp */ r_esp = r_ebp;
    /* 006bd4b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bd4b1: ret 4 */ FN_RET(0x006bd31c); r_esp += 8; return;
L_006bd4b4:; BB(0x006bd4b4);
    /* 006bd4b4: push 0xa95a8c */ { u32 v = 0xa95a8cu; r_esp -= 4; W32(r_esp, v); }
    /* 006bd4b9: push 0x92c4cc */ { u32 v = 0x92c4ccu; r_esp -= 4; W32(r_esp, v); }
    /* 006bd4be: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bd4c1: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bd4c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd4c5: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x6bd4cau); f_00857e29();
    /* 006bd4ca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bd4cd: jmp 0x6bd3eb */ goto L_006bd3eb;
}

void f_006bd4d4(void) /* sub_6BD4D4 */
{
    FN_ENTER(0x006bd4d4);
    /* 006bd4d4: mov edx, dword ptr [0xa95a84] */ r_edx = R32((u32)(0xa95a84u));
    /* 006bd4da: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bd4dc: jl 0x6bd4ed */ if ((fS!=fO)) goto L_006bd4ed;
L_006bd4de:; BB(0x006bd4de);
    /* 006bd4de: mov eax, dword ptr [0xa95a88] */ r_eax = R32((u32)(0xa95a88u));
    /* 006bd4e3: push dword ptr [eax + edx*8] */ { u32 v = R32((u32)(r_eax+r_edx*8)); r_esp -= 4; W32(r_esp, v); }
    /* 006bd4e6: call 0x793050 */ r_esp -= 4; W32(r_esp, 0x6bd4ebu); f_00793050();
    /* 006bd4eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bd4ec: ret  */ FN_RET(0x006bd4d4); r_esp += 4; return;
L_006bd4ed:; BB(0x006bd4ed);
    /* 006bd4ed: mov eax, 0x8f8818 */ r_eax = 0x8f8818u;
    /* 006bd4f2: ret  */ FN_RET(0x006bd4d4); r_esp += 4; return;
}

void f_006bd4f4(void) /* sub_6BD4F4 */
{
    FN_ENTER(0x006bd4f4);
    /* 006bd4f4: mov dword ptr [0xa95a78], 0x3f800000 */ W32((u32)(0xa95a78u), 0x3f800000u);
    /* 006bd4fe: mov dword ptr [0xa95a7c], 0x41000000 */ W32((u32)(0xa95a7cu), 0x41000000u);
    /* 006bd508: mov dword ptr [0xa95a80], 0x3fc00000 */ W32((u32)(0xa95a80u), 0x3fc00000u);
    /* 006bd512: ret  */ FN_RET(0x006bd4f4); r_esp += 4; return;
}

void f_006bd514(void) /* sub_6BD514 */
{
    FN_ENTER(0x006bd514);
    /* 006bd514: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 006bd519: mov dword ptr [0xa95880], eax */ W32((u32)(0xa95880u), r_eax);
    /* 006bd51e: mov dword ptr [0xa95884], eax */ W32((u32)(0xa95884u), r_eax);
    /* 006bd523: mov dword ptr [0xa95888], eax */ W32((u32)(0xa95888u), r_eax);
    /* 006bd528: mov dword ptr [0xa9588c], eax */ W32((u32)(0xa9588cu), r_eax);
    /* 006bd52d: mov dword ptr [0xa95890], eax */ W32((u32)(0xa95890u), r_eax);
    /* 006bd532: mov dword ptr [0xa95894], eax */ W32((u32)(0xa95894u), r_eax);
    /* 006bd537: mov dword ptr [0xa95898], eax */ W32((u32)(0xa95898u), r_eax);
    /* 006bd53c: mov dword ptr [0xa9589c], eax */ W32((u32)(0xa9589cu), r_eax);
    /* 006bd541: mov dword ptr [0xa958a0], eax */ W32((u32)(0xa958a0u), r_eax);
    /* 006bd546: mov dword ptr [0xa958a4], eax */ W32((u32)(0xa958a4u), r_eax);
    /* 006bd54b: mov dword ptr [0xa958a8], eax */ W32((u32)(0xa958a8u), r_eax);
    /* 006bd550: mov dword ptr [0xa958ac], eax */ W32((u32)(0xa958acu), r_eax);
    /* 006bd555: mov dword ptr [0xa958b0], eax */ W32((u32)(0xa958b0u), r_eax);
    /* 006bd55a: mov dword ptr [0xa958b4], eax */ W32((u32)(0xa958b4u), r_eax);
    /* 006bd55f: mov dword ptr [0xa958b8], eax */ W32((u32)(0xa958b8u), r_eax);
    /* 006bd564: mov dword ptr [0xa958bc], eax */ W32((u32)(0xa958bcu), r_eax);
    /* 006bd569: mov dword ptr [0xa958c0], eax */ W32((u32)(0xa958c0u), r_eax);
    /* 006bd56e: mov dword ptr [0xa958c4], eax */ W32((u32)(0xa958c4u), r_eax);
    /* 006bd573: ret  */ FN_RET(0x006bd514); r_esp += 4; return;
}

void f_006bd574(void) /* sub_6BD574 */
{
    FN_ENTER(0x006bd574);
    /* 006bd574: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bd575: mov ebp, esp */ r_ebp = r_esp;
    /* 006bd577: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bd579: push 0x8ec3e0 */ { u32 v = 0x8ec3e0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd57e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006bd584: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd585: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006bd58c: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bd58f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006bd592: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 006bd595: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 006bd598: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 006bd59b: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x6bd5a0u); f_007a61a4();
    /* 006bd5a0: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bd5a3: je 0x6bd7ce */ if (fZ) goto L_006bd7ce;
L_006bd5a9:; BB(0x006bd5a9);
    /* 006bd5a9: mov ebx, 1 */ r_ebx = 0x1u;
L_006bd5ae:; BB(0x006bd5ae);
    /* 006bd5ae: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x6bd5b3u); f_00807ac0();
    /* 006bd5b3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bd5b5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bd5b7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bd5b9: mov eax, dword ptr [eax + ebx*4 + 0x96a180] */ r_eax = R32((u32)(r_eax+r_ebx*4+0x96a180u));
    /* 006bd5c0: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bd5c3: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006bd5c6: je 0x6bd6af */ if (fZ) goto L_006bd6af;
L_006bd5cc:; BB(0x006bd5cc);
    /* 006bd5cc: mov eax, dword ptr [0x9f9860] */ r_eax = R32((u32)(0x9f9860u));
    /* 006bd5d1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bd5d4: je 0x6bd6d8 */ if (fZ) goto L_006bd6d8;
L_006bd5da:; BB(0x006bd5da);
    /* 006bd5da: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 006bd5e1: push 0x1a8 */ { u32 v = 0x1a8u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd5e6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6bd5ebu); f_005caba4();
    /* 006bd5eb: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006bd5ee: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bd5f1: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006bd5f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bd5f6: je 0x6bd6af */ if (fZ) goto L_006bd6af;
L_006bd5fc:; BB(0x006bd5fc);
    /* 006bd5fc: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 006bd603: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006bd60a: mov ecx, eax */ r_ecx = r_eax;
    /* 006bd60c: mov edi, dword ptr [0xaca360] */ r_edi = R32((u32)(0xaca360u));
    /* 006bd612: mov eax, dword ptr [0xa9cd44] */ r_eax = R32((u32)(0xa9cd44u));
    /* 006bd617: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bd61a: mov dword ptr [ebp - 0x54], ecx */ W32((u32)(r_ebp+0xffffffacu), r_ecx);
    /* 006bd61d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bd61e: mov dword ptr [ebp - 0x50], edi */ W32((u32)(r_ebp+0xffffffb0u), r_edi);
    /* 006bd621: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bd623: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bd625: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006bd628: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bd62a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bd62c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bd62e: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bd630: mov esi, dword ptr [edx + ebx*4 + 0x9ce700] */ r_esi = R32((u32)(r_edx+r_ebx*4+0x9ce700u));
    /* 006bd637: mov dword ptr [ebp - 0x4c], esi */ W32((u32)(r_ebp+0xffffffb4u), r_esi);
    /* 006bd63a: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6bd63fu); f_008193cc();
    /* 006bd63f: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006bd646: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006bd649: mov dword ptr [eax], 0xb3aed8 */ W32((u32)(r_eax), 0xb3aed8u);
    /* 006bd64f: push dword ptr [ebp - 0x4c] */ { u32 v = R32((u32)(r_ebp+0xffffffb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bd652: mov dword ptr [eax + 0x1a4], 1 */ W32((u32)(r_eax+0x1a4u), 0x1u);
    /* 006bd65c: mov dword ptr [eax + 0x19c], 0 */ W32((u32)(r_eax+0x19cu), 0x0u);
    /* 006bd666: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x6bd66bu); f_005b9328();
    /* 006bd66b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bd66c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006bd66e: jl 0x6bd6c6 */ if ((fS!=fO)) goto L_006bd6c6;
L_006bd670:; BB(0x006bd670);
    /* 006bd670: add eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bd675: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd676: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6bd67bu); f_0082e940();
    /* 006bd67b: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006bd67e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd67f: push dword ptr [ebp - 0x4c] */ { u32 v = R32((u32)(r_ebp+0xffffffb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bd682: mov dword ptr [edx + 0x19c], eax */ W32((u32)(r_edx+0x19cu), r_eax);
    /* 006bd688: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x6bd68du); f_005b9910();
    /* 006bd68d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006bd690: mov dword ptr [0xa95aa4], edx */ W32((u32)(0xa95aa4u), r_edx);
    /* 006bd696: lea eax, [edx + 0x24] */ r_eax = (u32)(r_edx+0x24u);
    /* 006bd699: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd69a: push dword ptr [edx + 0x19c] */ { u32 v = R32((u32)(r_edx+0x19cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006bd6a0: call 0x6b9980 */ r_esp -= 4; W32(r_esp, 0x6bd6a5u); f_006b9980();
    /* 006bd6a5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006bd6a8:; BB(0x006bd6a8);
    /* 006bd6a8: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_006bd6af:; BB(0x006bd6af);
    /* 006bd6af: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006bd6b2: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bd6b5: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006bd6b8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bd6bb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bd6c2: mov esp, ebp */ r_esp = r_ebp;
    /* 006bd6c4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bd6c5: ret  */ FN_RET(0x006bd574); r_esp += 4; return;
L_006bd6c6:; BB(0x006bd6c6);
    /* 006bd6c6: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006bd6c9: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006bd6cd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bd6d2: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006bd6d6: jmp 0x6bd6a8 */ goto L_006bd6a8;
L_006bd6d8:; BB(0x006bd6d8);
    /* 006bd6d8: mov eax, dword ptr [0xa9cd68] */ r_eax = R32((u32)(0xa9cd68u));
    /* 006bd6dd: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bd6e0: jne 0x6bd5da */ if (!fZ) goto L_006bd5da;
L_006bd6e6:; BB(0x006bd6e6);
    /* 006bd6e6: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006bd6ed: push 0x1a8 */ { u32 v = 0x1a8u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd6f2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6bd6f7u); f_005caba4();
    /* 006bd6f7: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006bd6fa: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bd6fd: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006bd700: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bd702: je 0x6bd6af */ if (fZ) goto L_006bd6af;
L_006bd704:; BB(0x006bd704);
    /* 006bd704: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006bd70b: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 006bd712: mov ecx, eax */ r_ecx = r_eax;
    /* 006bd714: mov edi, dword ptr [0xaca360] */ r_edi = R32((u32)(0xaca360u));
    /* 006bd71a: mov eax, dword ptr [0xa9cd44] */ r_eax = R32((u32)(0xa9cd44u));
    /* 006bd71f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 006bd722: mov dword ptr [ebp - 0x44], ecx */ W32((u32)(r_ebp+0xffffffbcu), r_ecx);
    /* 006bd725: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bd726: mov dword ptr [ebp - 0x40], edi */ W32((u32)(r_ebp+0xffffffc0u), r_edi);
    /* 006bd729: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bd72b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bd72d: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 006bd730: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bd732: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bd734: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bd736: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bd738: mov esi, dword ptr [edx + ebx*4 + 0x9ce4e0] */ r_esi = R32((u32)(r_edx+r_ebx*4+0x9ce4e0u));
    /* 006bd73f: mov dword ptr [ebp - 0x3c], esi */ W32((u32)(r_ebp+0xffffffc4u), r_esi);
    /* 006bd742: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x6bd747u); f_008193cc();
    /* 006bd747: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 006bd74e: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006bd751: mov dword ptr [eax], 0xb3aed8 */ W32((u32)(r_eax), 0xb3aed8u);
    /* 006bd757: push dword ptr [ebp - 0x3c] */ { u32 v = R32((u32)(r_ebp+0xffffffc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bd75a: mov dword ptr [eax + 0x1a4], 1 */ W32((u32)(r_eax+0x1a4u), 0x1u);
    /* 006bd764: mov dword ptr [eax + 0x19c], 0 */ W32((u32)(r_eax+0x19cu), 0x0u);
    /* 006bd76e: call 0x5b9328 */ r_esp -= 4; W32(r_esp, 0x6bd773u); f_005b9328();
    /* 006bd773: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bd774: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006bd776: jl 0x6bd7bc */ if ((fS!=fO)) goto L_006bd7bc;
L_006bd778:; BB(0x006bd778);
    /* 006bd778: add eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bd77d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd77e: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6bd783u); f_0082e940();
    /* 006bd783: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006bd786: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd787: push dword ptr [ebp - 0x3c] */ { u32 v = R32((u32)(r_ebp+0xffffffc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bd78a: mov dword ptr [edx + 0x19c], eax */ W32((u32)(r_edx+0x19cu), r_eax);
    /* 006bd790: call 0x5b9910 */ r_esp -= 4; W32(r_esp, 0x6bd795u); f_005b9910();
    /* 006bd795: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006bd798: mov dword ptr [0xa95aa4], edx */ W32((u32)(0xa95aa4u), r_edx);
    /* 006bd79e: lea eax, [edx + 0x24] */ r_eax = (u32)(r_edx+0x24u);
    /* 006bd7a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd7a2: push dword ptr [edx + 0x19c] */ { u32 v = R32((u32)(r_edx+0x19cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006bd7a8: call 0x6b9980 */ r_esp -= 4; W32(r_esp, 0x6bd7adu); f_006b9980();
    /* 006bd7ad: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_006bd7b0:; BB(0x006bd7b0);
    /* 006bd7b0: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006bd7b7: jmp 0x6bd6af */ goto L_006bd6af;
L_006bd7bc:; BB(0x006bd7bc);
    /* 006bd7bc: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006bd7bf: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006bd7c3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bd7c8: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006bd7cc: jmp 0x6bd7b0 */ goto L_006bd7b0;
L_006bd7ce:; BB(0x006bd7ce);
    /* 006bd7ce: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006bd7d0: jmp 0x6bd5ae */ goto L_006bd5ae;
}

void f_006bd7d8(void) /* sub_6BD7D8 */
{
    FN_ENTER(0x006bd7d8);
    /* 006bd7d8: push 0x198 */ { u32 v = 0x198u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd7dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd7df: push 0xa958e0 */ { u32 v = 0xa958e0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd7e4: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6bd7e9u); f_0086b688();
    /* 006bd7e9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bd7ec: ret  */ FN_RET(0x006bd7d8); r_esp += 4; return;
}

void f_006bd7f0(void) /* sub_6BD7F0 */
{
    FN_ENTER(0x006bd7f0);
    /* 006bd7f0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bd7f1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006bd7f3: mov eax, dword ptr [ebx + 0x494] */ r_eax = R32((u32)(r_ebx+0x494u));
    /* 006bd7f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bd7fb: je 0x6bd80f */ if (fZ) goto L_006bd80f;
L_006bd7fd:; BB(0x006bd7fd);
    /* 006bd7fd: lea ecx, [ebx + 0x1c] */ r_ecx = (u32)(r_ebx+0x1cu);
    /* 006bd800: call 0x6daf34 */ r_esp -= 4; W32(r_esp, 0x6bd805u); f_006daf34();
    /* 006bd805: mov dword ptr [ebx + 0x494], 0 */ W32((u32)(r_ebx+0x494u), 0x0u);
L_006bd80f:; BB(0x006bd80f);
    /* 006bd80f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bd810: ret  */ FN_RET(0x006bd7f0); r_esp += 4; return;
}

void f_006bd814(void) /* sub_6BD814 */
{
    FN_ENTER(0x006bd814);
    /* 006bd814: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bd815: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006bd817: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006bd819: call 0x6bd838 */ r_esp -= 4; W32(r_esp, 0x6bd81eu); f_006bd838();
    /* 006bd81e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006bd822: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bd824: jne 0x6bd82a */ if (!fZ) goto L_006bd82a;
L_006bd826:; BB(0x006bd826);
    /* 006bd826: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bd827: ret 4 */ FN_RET(0x006bd814); r_esp += 8; return;
L_006bd82a:; BB(0x006bd82a);
    /* 006bd82a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bd82b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6bd830u); f_005c2f74();
    /* 006bd830: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bd831: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bd832: ret 4 */ FN_RET(0x006bd814); r_esp += 8; return;
}

void f_006bd838(void) /* sub_6BD838 */
{
    FN_ENTER(0x006bd838);
    /* 006bd838: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bd839: mov ebp, esp */ r_ebp = r_esp;
    /* 006bd83b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bd83d: push 0x8ec3fc */ { u32 v = 0x8ec3fcu; r_esp -= 4; W32(r_esp, v); }
    /* 006bd842: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006bd848: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd849: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006bd850: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bd853: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006bd856: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006bd859: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006bd85c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006bd85f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006bd862: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006bd869: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bd86c: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 006bd86f: mov dword ptr [eax], 0xb3b010 */ W32((u32)(r_eax), 0xb3b010u);
    /* 006bd875: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bd877: je 0x6bd888 */ if (fZ) goto L_006bd888;
L_006bd879:; BB(0x006bd879);
    /* 006bd879: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bd87eu); f_007127b0();
    /* 006bd87e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bd881: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_006bd888:; BB(0x006bd888);
    /* 006bd888: mov ecx, eax */ r_ecx = r_eax;
    /* 006bd88a: call 0x6c0084 */ r_esp -= 4; W32(r_esp, 0x6bd88fu); f_006c0084();
    /* 006bd88f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006bd896: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bd899: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6bd89eu); f_008171e8();
    /* 006bd89e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bd8a1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bd8a8: mov esp, ebp */ r_esp = r_ebp;
    /* 006bd8aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bd8ab: ret  */ FN_RET(0x006bd838); r_esp += 4; return;
}

void f_006bd8ac(void) /* sub_6BD8AC */
{
    FN_ENTER(0x006bd8ac);
    /* 006bd8ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bd8ad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006bd8af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006bd8b1: call 0x6bd8d0 */ r_esp -= 4; W32(r_esp, 0x6bd8b6u); f_006bd8d0();
    /* 006bd8b6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006bd8ba: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bd8bc: jne 0x6bd8c2 */ if (!fZ) goto L_006bd8c2;
L_006bd8be:; BB(0x006bd8be);
    /* 006bd8be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bd8bf: ret 4 */ FN_RET(0x006bd8ac); r_esp += 8; return;
L_006bd8c2:; BB(0x006bd8c2);
    /* 006bd8c2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bd8c3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6bd8c8u); f_005c2f74();
    /* 006bd8c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bd8c9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bd8ca: ret 4 */ FN_RET(0x006bd8ac); r_esp += 8; return;
}

void f_006bd8d0(void) /* sub_6BD8D0 */
{
    FN_ENTER(0x006bd8d0);
    /* 006bd8d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bd8d1: mov ebp, esp */ r_ebp = r_esp;
    /* 006bd8d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bd8d5: push 0x8ec438 */ { u32 v = 0x8ec438u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd8da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006bd8e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd8e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006bd8e8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bd8eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006bd8ee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006bd8f1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006bd8f4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006bd8f7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006bd8fa: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006bd901: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bd904: mov eax, dword ptr [edx + 0x468] */ r_eax = R32((u32)(r_edx+0x468u));
    /* 006bd90a: mov dword ptr [edx], 0xb3b020 */ W32((u32)(r_edx), 0xb3b020u);
    /* 006bd910: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bd912: mov dword ptr [edx + 0x1c], 0xb3b030 */ W32((u32)(r_edx+0x1cu), 0xb3b030u);
    /* 006bd919: je 0x6bd92f */ if (fZ) goto L_006bd92f;
L_006bd91b:; BB(0x006bd91b);
    /* 006bd91b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd91c: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6bd921u); f_0082e960();
    /* 006bd921: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bd922: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bd925: mov dword ptr [edx + 0x468], 0 */ W32((u32)(r_edx+0x468u), 0x0u);
L_006bd92f:; BB(0x006bd92f);
    /* 006bd92f: mov eax, dword ptr [edx + 0x46c] */ r_eax = R32((u32)(r_edx+0x46cu));
    /* 006bd935: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bd937: je 0x6bd94d */ if (fZ) goto L_006bd94d;
L_006bd939:; BB(0x006bd939);
    /* 006bd939: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bd93a: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6bd93fu); f_0082e960();
    /* 006bd93f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006bd940: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bd943: mov dword ptr [edx + 0x46c], 0 */ W32((u32)(r_edx+0x46cu), 0x0u);
L_006bd94d:; BB(0x006bd94d);
    /* 006bd94d: mov ecx, dword ptr [edx + 0x478] */ r_ecx = R32((u32)(r_edx+0x478u));
    /* 006bd953: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bd955: je 0x6bd969 */ if (fZ) goto L_006bd969;
L_006bd957:; BB(0x006bd957);
    /* 006bd957: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bd95cu); f_007127b0();
    /* 006bd95c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bd95f: mov dword ptr [edx + 0x478], 0 */ W32((u32)(r_edx+0x478u), 0x0u);
L_006bd969:; BB(0x006bd969);
    /* 006bd969: mov ecx, dword ptr [edx + 0x47c] */ r_ecx = R32((u32)(r_edx+0x47cu));
    /* 006bd96f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bd971: je 0x6bd985 */ if (fZ) goto L_006bd985;
L_006bd973:; BB(0x006bd973);
    /* 006bd973: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bd978u); f_007127b0();
    /* 006bd978: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bd97b: mov dword ptr [eax + 0x47c], 0 */ W32((u32)(r_eax+0x47cu), 0x0u);
L_006bd985:; BB(0x006bd985);
    /* 006bd985: mov dword ptr [0xa95d3c], 0 */ W32((u32)(0xa95d3cu), 0x0u);
    /* 006bd98f: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 006bd996: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bd999: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006bd99c: call 0x6daed4 */ r_esp -= 4; W32(r_esp, 0x6bd9a1u); f_006daed4();
    /* 006bd9a1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006bd9a8: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006bd9ab: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x6bd9b0u); f_008171e8();
    /* 006bd9b0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006bd9b3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006bd9ba: mov esp, ebp */ r_esp = r_ebp;
    /* 006bd9bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bd9bd: ret  */ FN_RET(0x006bd8d0); r_esp += 4; return;
}

void f_006bd9c0(void) /* sub_6BD9C0 */
{
    FN_ENTER(0x006bd9c0);
    /* 006bd9c0: add ecx, -0x1c */ {  u32 a = r_ecx; u32 b = 0xffffffe4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006bd9c3: jmp 0x6bd8ac */ f_006bd8ac(); return;
}

void f_006bd9c8(void) /* sub_6BD9C8 */
{
    FN_ENTER(0x006bd9c8);
    /* 006bd9c8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bd9c9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bd9ca: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bd9cb: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006bd9ce: mov esi, dword ptr [esp + 0x30] */ r_esi = R32((u32)(r_esp+0x30u));
    /* 006bd9d2: mov eax, dword ptr [0xa95d4c] */ r_eax = R32((u32)(0xa95d4cu));
    /* 006bd9d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bd9d9: je 0x6bdc8a */ if (fZ) goto L_006bdc8a;
L_006bd9df:; BB(0x006bd9df);
    /* 006bd9df: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bd9e1: je 0x6bdc83 */ if (fZ) goto L_006bdc83;
L_006bd9e7:; BB(0x006bd9e7);
    /* 006bd9e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bd9e9: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 006bd9ed: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006bd9f1: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006bd9f5: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 006bd9f9: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 006bd9fd: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006bd9ff: lea ebp, [esi + 0x2c] */ r_ebp = (u32)(r_esi+0x2cu);
    /* 006bda02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bda03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bda04: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6bda09u); f_00858900();
    /* 006bda09: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 006bda0d: push 0x96b740 */ { u32 v = 0x96b740u; r_esp -= 4; W32(r_esp, v); }
    /* 006bda12: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bda13: call 0x859c78 */ r_esp -= 4; W32(r_esp, 0x6bda18u); f_00859c78();
    /* 006bda18: push 0x8f8814 */ { u32 v = 0x8f8814u; r_esp -= 4; W32(r_esp, v); }
    /* 006bda1d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bda1f: call 0x859c78 */ r_esp -= 4; W32(r_esp, 0x6bda24u); f_00859c78();
    /* 006bda24: mov ebx, eax */ r_ebx = r_eax;
    /* 006bda26: movzx edx, byte ptr [esi + 0x2a] */ r_edx = (u32)R8((u32)(r_esi+0x2au));
    /* 006bda2a: mov byte ptr [0xa95d50], dl */ W8((u32)(0xa95d50u), (u8)r_edx);
    /* 006bda30: lea edx, [esi + 0x50] */ r_edx = (u32)(r_esi+0x50u);
    /* 006bda33: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 006bda35: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 006bda38: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 006bda3c: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 006bda40: mov dword ptr [esp + 0x20], 0x5345000c */ W32((u32)(r_esp+0x20u), 0x5345000cu);
    /* 006bda48: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 006bda4c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bda4d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bda4f: call 0x7827c4 */ r_esp -= 4; W32(r_esp, 0x6bda54u); f_007827c4();
    /* 006bda54: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006bda56: push 0x96b750 */ { u32 v = 0x96b750u; r_esp -= 4; W32(r_esp, v); }
    /* 006bda5b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bda5c: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x6bda61u); f_008598c0();
    /* 006bda61: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bda64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bda66: je 0x6bdc1a */ if (fZ) goto L_006bdc1a;
L_006bda6c:; BB(0x006bda6c);
    /* 006bda6c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006bda6e: push 0x96b74c */ { u32 v = 0x96b74cu; r_esp -= 4; W32(r_esp, v); }
    /* 006bda73: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bda74: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x6bda79u); f_008598c0();
    /* 006bda79: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bda7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bda7e: je 0x6bdb89 */ if (fZ) goto L_006bdb89;
L_006bda84:; BB(0x006bda84);
    /* 006bda84: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006bda86: push 0x96b748 */ { u32 v = 0x96b748u; r_esp -= 4; W32(r_esp, v); }
    /* 006bda8b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bda8c: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x6bda91u); f_008598c0();
    /* 006bda91: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bda94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bda96: je 0x6bdb0d */ if (fZ) goto L_006bdb0d;
L_006bda98:; BB(0x006bda98);
    /* 006bda98: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 006bda9a: push 0x96b744 */ { u32 v = 0x96b744u; r_esp -= 4; W32(r_esp, v); }
    /* 006bda9f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bdaa0: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x6bdaa5u); f_008598c0();
    /* 006bdaa5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bdaa8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bdaaa: jne 0x6bdc83 */ if (!fZ) goto L_006bdc83;
L_006bdab0:; BB(0x006bdab0);
    /* 006bdab0: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdab2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bdab3: push 0xa95bc0 */ { u32 v = 0xa95bc0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdab8: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6bdabdu); f_00858900();
    /* 006bdabd: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdabf: lea eax, [esi + 8] */ r_eax = (u32)(r_esi+0x8u);
    /* 006bdac2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bdac3: push 0xa95be0 */ { u32 v = 0xa95be0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdac8: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6bdacdu); f_00858900();
    /* 006bdacd: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 006bdad0: mov dword ptr [0xa95c04], eax */ W32((u32)(0xa95c04u), r_eax);
    /* 006bdad5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bdad6: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6bdadbu); f_0082e940();
    /* 006bdadb: mov dword ptr [0xa95d54], 0 */ W32((u32)(0xa95d54u), 0x0u);
    /* 006bdae5: mov dword ptr [0xa95c08], eax */ W32((u32)(0xa95c08u), r_eax);
    /* 006bdaea: mov eax, dword ptr [0xa95d68] */ r_eax = R32((u32)(0xa95d68u));
    /* 006bdaef: add eax, dword ptr [esi + 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x3cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bdaf2: mov dword ptr [0xa95d68], eax */ W32((u32)(0xa95d68u), r_eax);
    /* 006bdaf7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bdaf8: push dword ptr [0xa95d64] */ { u32 v = R32((u32)(0xa95d64u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bdafe: call 0x7836b0 */ r_esp -= 4; W32(r_esp, 0x6bdb03u); f_007836b0();
    /* 006bdb03: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bdb06: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bdb09: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bdb0a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bdb0b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bdb0c: ret  */ FN_RET(0x006bd9c8); r_esp += 4; return;
L_006bdb0d:; BB(0x006bdb0d);
    /* 006bdb0d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdb0f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bdb10: push 0xa95c20 */ { u32 v = 0xa95c20u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdb15: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6bdb1au); f_00858900();
    /* 006bdb1a: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdb1c: lea eax, [esi + 8] */ r_eax = (u32)(r_esi+0x8u);
    /* 006bdb1f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bdb20: push 0xa95c40 */ { u32 v = 0xa95c40u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdb25: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6bdb2au); f_00858900();
    /* 006bdb2a: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 006bdb2d: mov dword ptr [0xa95c64], eax */ W32((u32)(0xa95c64u), r_eax);
    /* 006bdb32: push dword ptr [esi + 0x3c] */ { u32 v = R32((u32)(r_esi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006bdb35: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6bdb3au); f_0082e940();
    /* 006bdb3a: mov dword ptr [0xa95c68], eax */ W32((u32)(0xa95c68u), r_eax);
    /* 006bdb3f: push dword ptr [esi + 0x3c] */ { u32 v = R32((u32)(r_esi+0x3cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006bdb42: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdb44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bdb45: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6bdb4au); f_0086b688();
    /* 006bdb4a: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bdb4d: mov edx, dword ptr [0xa95d68] */ r_edx = R32((u32)(0xa95d68u));
    /* 006bdb53: add edx, dword ptr [esi + 0x3c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x3cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bdb56: movsx eax, byte ptr [esi + 0x2a] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x2au));
    /* 006bdb5a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bdb5d: mov dword ptr [0xa95d58], 0 */ W32((u32)(0xa95d58u), 0x0u);
    /* 006bdb67: mov dword ptr [0xa95d68], edx */ W32((u32)(0xa95d68u), r_edx);
    /* 006bdb6d: jne 0x6bdc83 */ if (!fZ) goto L_006bdc83;
L_006bdb73:; BB(0x006bdb73);
    /* 006bdb73: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bdb74: push dword ptr [0xa95d64] */ { u32 v = R32((u32)(0xa95d64u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bdb7a: call 0x7836b0 */ r_esp -= 4; W32(r_esp, 0x6bdb7fu); f_007836b0();
    /* 006bdb7f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bdb82: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bdb85: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bdb86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bdb87: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bdb88: ret  */ FN_RET(0x006bd9c8); r_esp += 4; return;
L_006bdb89:; BB(0x006bdb89);
    /* 006bdb89: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdb8b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bdb8c: push 0xa95c80 */ { u32 v = 0xa95c80u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdb91: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6bdb96u); f_00858900();
    /* 006bdb96: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdb98: lea eax, [esi + 8] */ r_eax = (u32)(r_esi+0x8u);
    /* 006bdb9b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bdb9c: push 0xa95ca0 */ { u32 v = 0xa95ca0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdba1: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6bdba6u); f_00858900();
    /* 006bdba6: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 006bdba9: mov dword ptr [0xa95cc4], eax */ W32((u32)(0xa95cc4u), r_eax);
    /* 006bdbae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bdbaf: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6bdbb4u); f_0082e940();
    /* 006bdbb4: mov dword ptr [0xa95cc8], eax */ W32((u32)(0xa95cc8u), r_eax);
    /* 006bdbb9: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdbbb: lea eax, [esi + 0x40] */ r_eax = (u32)(r_esi+0x40u);
    /* 006bdbbe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bdbbf: push 0xa95c90 */ { u32 v = 0xa95c90u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdbc4: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6bdbc9u); f_00858900();
    /* 006bdbc9: push dword ptr [0xa95cc4] */ { u32 v = R32((u32)(0xa95cc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bdbcf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdbd1: push dword ptr [0xa95cc8] */ { u32 v = R32((u32)(0xa95cc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bdbd7: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6bdbdcu); f_0086b688();
    /* 006bdbdc: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bdbdf: mov edx, dword ptr [0xa95d68] */ r_edx = R32((u32)(0xa95d68u));
    /* 006bdbe5: add edx, dword ptr [esi + 0x3c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+0x3cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bdbe8: movsx eax, byte ptr [esi + 0x2a] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0x2au));
    /* 006bdbec: mov dword ptr [0xa95d68], edx */ W32((u32)(0xa95d68u), r_edx);
    /* 006bdbf2: mov dword ptr [0xa95d5c], 0 */ W32((u32)(0xa95d5cu), 0x0u);
    /* 006bdbfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bdbfe: jne 0x6bdc83 */ if (!fZ) goto L_006bdc83;
L_006bdc04:; BB(0x006bdc04);
    /* 006bdc04: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bdc05: push dword ptr [0xa95d64] */ { u32 v = R32((u32)(0xa95d64u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bdc0b: call 0x7836b0 */ r_esp -= 4; W32(r_esp, 0x6bdc10u); f_007836b0();
    /* 006bdc10: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bdc13: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bdc16: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bdc17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bdc18: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bdc19: ret  */ FN_RET(0x006bd9c8); r_esp += 4; return;
L_006bdc1a:; BB(0x006bdc1a);
    /* 006bdc1a: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdc1c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bdc1d: push 0xa95ce0 */ { u32 v = 0xa95ce0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdc22: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6bdc27u); f_00858900();
    /* 006bdc27: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdc29: lea eax, [esi + 8] */ r_eax = (u32)(r_esi+0x8u);
    /* 006bdc2c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bdc2d: push 0xa95d00 */ { u32 v = 0xa95d00u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdc32: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6bdc37u); f_00858900();
    /* 006bdc37: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 006bdc3a: mov dword ptr [0xa95d24], eax */ W32((u32)(0xa95d24u), r_eax);
    /* 006bdc3f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bdc40: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6bdc45u); f_0082e940();
    /* 006bdc45: mov dword ptr [0xa95d28], eax */ W32((u32)(0xa95d28u), r_eax);
    /* 006bdc4a: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdc4c: lea eax, [esi + 0x40] */ r_eax = (u32)(r_esi+0x40u);
    /* 006bdc4f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bdc50: push 0xa95cf0 */ { u32 v = 0xa95cf0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdc55: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x6bdc5au); f_00858900();
    /* 006bdc5a: push dword ptr [0xa95d24] */ { u32 v = R32((u32)(0xa95d24u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bdc60: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdc62: push dword ptr [0xa95d28] */ { u32 v = R32((u32)(0xa95d28u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bdc68: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x6bdc6du); f_0086b688();
    /* 006bdc6d: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bdc70: mov eax, dword ptr [esi + 0x3c] */ r_eax = R32((u32)(r_esi+0x3cu));
    /* 006bdc73: mov dword ptr [0xa95d60], 0 */ W32((u32)(0xa95d60u), 0x0u);
    /* 006bdc7d: add dword ptr [0xa95d68], eax */ { u32 ad = (u32)(0xa95d68u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_006bdc83:; BB(0x006bdc83);
    /* 006bdc83: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bdc86: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bdc87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bdc88: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bdc89: ret  */ FN_RET(0x006bd9c8); r_esp += 4; return;
L_006bdc8a:; BB(0x006bdc8a);
    /* 006bdc8a: mov dword ptr [esp + 8], 0x43de0000 */ W32((u32)(r_esp+0x8u), 0x43de0000u);
    /* 006bdc92: mov dword ptr [esp + 0xc], 0x42a80000 */ W32((u32)(r_esp+0xcu), 0x42a80000u);
    /* 006bdc9a: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdc9c: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6bdca1u); f_0073ec50();
    /* 006bdca1: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 006bdca5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdca7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bdca8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bdca9: call 0x73c7e8 */ r_esp -= 4; W32(r_esp, 0x6bdcaeu); f_0073c7e8();
    /* 006bdcae: mov dword ptr [0xa95d4c], eax */ W32((u32)(0xa95d4cu), r_eax);
    /* 006bdcb3: push 0x3e */ { u32 v = 0x3eu; r_esp -= 4; W32(r_esp, v); }
    /* 006bdcb5: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x6bdcbau); f_007930dc();
    /* 006bdcba: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bdcbd: mov ecx, dword ptr [0xa95d4c] */ r_ecx = R32((u32)(0xa95d4cu));
    /* 006bdcc3: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdcc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bdcc9: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6bdcceu); f_0073ae38();
    /* 006bdcce: mov ecx, dword ptr [0xa95d4c] */ r_ecx = R32((u32)(0xa95d4cu));
    /* 006bdcd4: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x6bdcd9u); f_0073b0f0();
    /* 006bdcd9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006bdcdb: mov dword ptr [0xa95d68], eax */ W32((u32)(0xa95d68u), r_eax);
    /* 006bdce0: mov dword ptr [0xa95d64], eax */ W32((u32)(0xa95d64u), r_eax);
    /* 006bdce5: jmp 0x6bd9df */ goto L_006bd9df;
}

void f_006bdcec(void) /* sub_6BDCEC */
{
    FN_ENTER(0x006bdcec);
    /* 006bdcec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bdced: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bdcee: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 006bdcf2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bdcf4: je 0x6bddca */ if (fZ) goto L_006bddca;
L_006bdcfa:; BB(0x006bdcfa);
    /* 006bdcfa: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdcfc: lea ebp, [ebx + 8] */ r_ebp = (u32)(r_ebx+0x8u);
    /* 006bdcff: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bdd00: push 0xa95ce0 */ { u32 v = 0xa95ce0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdd05: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x6bdd0au); f_008598c0();
    /* 006bdd0a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bdd0d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bdd0f: jne 0x6bdd1d */ if (!fZ) goto L_006bdd1d;
L_006bdd11:; BB(0x006bdd11);
    /* 006bdd11: mov eax, dword ptr [0xa95d28] */ r_eax = R32((u32)(0xa95d28u));
    /* 006bdd16: mov ebp, 0xa95d60 */ r_ebp = 0xa95d60u;
    /* 006bdd1b: jmp 0x6bdd7f */ goto L_006bdd7f;
L_006bdd1d:; BB(0x006bdd1d);
    /* 006bdd1d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdd1f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bdd20: push 0xa95c80 */ { u32 v = 0xa95c80u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdd25: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x6bdd2au); f_008598c0();
    /* 006bdd2a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bdd2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bdd2f: jne 0x6bdd3d */ if (!fZ) goto L_006bdd3d;
L_006bdd31:; BB(0x006bdd31);
    /* 006bdd31: mov eax, dword ptr [0xa95cc8] */ r_eax = R32((u32)(0xa95cc8u));
    /* 006bdd36: mov ebp, 0xa95d5c */ r_ebp = 0xa95d5cu;
    /* 006bdd3b: jmp 0x6bdd7f */ goto L_006bdd7f;
L_006bdd3d:; BB(0x006bdd3d);
    /* 006bdd3d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdd3f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bdd40: push 0xa95c20 */ { u32 v = 0xa95c20u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdd45: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x6bdd4au); f_008598c0();
    /* 006bdd4a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bdd4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bdd4f: jne 0x6bdd5d */ if (!fZ) goto L_006bdd5d;
L_006bdd51:; BB(0x006bdd51);
    /* 006bdd51: mov eax, dword ptr [0xa95c68] */ r_eax = R32((u32)(0xa95c68u));
    /* 006bdd56: mov ebp, 0xa95d58 */ r_ebp = 0xa95d58u;
    /* 006bdd5b: jmp 0x6bdd7f */ goto L_006bdd7f;
L_006bdd5d:; BB(0x006bdd5d);
    /* 006bdd5d: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdd5f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bdd60: push 0xa95bc0 */ { u32 v = 0xa95bc0u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdd65: call 0x8598c0 */ r_esp -= 4; W32(r_esp, 0x6bdd6au); f_008598c0();
    /* 006bdd6a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bdd6d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bdd6f: jne 0x6bde78 */ if (!fZ) goto L_006bde78;
L_006bdd75:; BB(0x006bdd75);
    /* 006bdd75: mov eax, dword ptr [0xa95c08] */ r_eax = R32((u32)(0xa95c08u));
    /* 006bdd7a: mov ebp, 0xa95d54 */ r_ebp = 0xa95d54u;
L_006bdd7f:; BB(0x006bdd7f);
    /* 006bdd7f: push dword ptr [ebx + 0x418] */ { u32 v = R32((u32)(r_ebx+0x418u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bdd85: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 006bdd88: shl edx, 0xa */ { u32 c = (10u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 006bdd8b: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006bdd8d: lea eax, [ebx + 0x18] */ r_eax = (u32)(r_ebx+0x18u);
    /* 006bdd90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bdd91: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006bdd92: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6bdd97u); f_0086b6b8();
    /* 006bdd97: push dword ptr [0xa95d68] */ { u32 v = R32((u32)(0xa95d68u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bdd9d: mov eax, dword ptr [0xa95d64] */ r_eax = R32((u32)(0xa95d64u));
    /* 006bdda2: add eax, dword ptr [ebx + 0x418] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x418u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006bdda8: mov dword ptr [0xa95d64], eax */ W32((u32)(0xa95d64u), r_eax);
    /* 006bddad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bddae: call 0x7836b0 */ r_esp -= 4; W32(r_esp, 0x6bddb3u); f_007836b0();
    /* 006bddb3: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bddb6: mov eax, dword ptr [ebx + 0x418] */ r_eax = R32((u32)(r_ebx+0x418u));
    /* 006bddbc: cmp eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006bddc1: jae 0x6bddca */ if (!fC) goto L_006bddca;
L_006bddc3:; BB(0x006bddc3);
    /* 006bddc3: mov dword ptr [ebp], 1 */ W32((u32)(r_ebp), 0x1u);
L_006bddca:; BB(0x006bddca);
    /* 006bddca: movsx eax, byte ptr [0xa95d50] */ r_eax = (u32)(i32)(i8)R8((u32)(0xa95d50u));
    /* 006bddd1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bddd3: je 0x6bde48 */ if (fZ) goto L_006bde48;
L_006bddd5:; BB(0x006bddd5);
    /* 006bddd5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bddd8: jne 0x6bde1e */ if (!fZ) goto L_006bde1e;
L_006bddda:; BB(0x006bddda);
    /* 006bddda: mov eax, dword ptr [0xa95d60] */ r_eax = R32((u32)(0xa95d60u));
    /* 006bdddf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bdde1: je 0x6bde78 */ if (fZ) goto L_006bde78;
L_006bdde7:; BB(0x006bdde7);
    /* 006bdde7: mov eax, dword ptr [0xa95d5c] */ r_eax = R32((u32)(0xa95d5cu));
    /* 006bddec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bddee: je 0x6bde78 */ if (fZ) goto L_006bde78;
L_006bddf4:; BB(0x006bddf4);
    /* 006bddf4: mov eax, dword ptr [0xa95d58] */ r_eax = R32((u32)(0xa95d58u));
    /* 006bddf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bddfb: je 0x6bde78 */ if (fZ) goto L_006bde78;
L_006bddfd:; BB(0x006bddfd);
    /* 006bddfd: mov ecx, dword ptr [0xa95d4c] */ r_ecx = R32((u32)(0xa95d4cu));
    /* 006bde03: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bde05: je 0x6bde16 */ if (fZ) goto L_006bde16;
L_006bde07:; BB(0x006bde07);
    /* 006bde07: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bde0cu); f_007127b0();
    /* 006bde0c: mov dword ptr [0xa95d4c], 0 */ W32((u32)(0xa95d4cu), 0x0u);
L_006bde16:; BB(0x006bde16);
    /* 006bde16: call 0x6bdff4 */ r_esp -= 4; W32(r_esp, 0x6bde1bu); f_006bdff4();
    /* 006bde1b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bde1c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bde1d: ret  */ FN_RET(0x006bdcec); r_esp += 4; return;
L_006bde1e:; BB(0x006bde1e);
    /* 006bde1e: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006bde21: jne 0x6bde78 */ if (!fZ) goto L_006bde78;
L_006bde23:; BB(0x006bde23);
    /* 006bde23: mov eax, dword ptr [0xa95d54] */ r_eax = R32((u32)(0xa95d54u));
    /* 006bde28: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bde2a: je 0x6bde78 */ if (fZ) goto L_006bde78;
L_006bde2c:; BB(0x006bde2c);
    /* 006bde2c: mov ecx, dword ptr [0xa95d4c] */ r_ecx = R32((u32)(0xa95d4cu));
    /* 006bde32: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bde34: je 0x6bde78 */ if (fZ) goto L_006bde78;
L_006bde36:; BB(0x006bde36);
    /* 006bde36: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bde3bu); f_007127b0();
    /* 006bde3b: mov dword ptr [0xa95d4c], 0 */ W32((u32)(0xa95d4cu), 0x0u);
    /* 006bde45: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bde46: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bde47: ret  */ FN_RET(0x006bdcec); r_esp += 4; return;
L_006bde48:; BB(0x006bde48);
    /* 006bde48: mov eax, dword ptr [0xa95d60] */ r_eax = R32((u32)(0xa95d60u));
    /* 006bde4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bde4f: je 0x6bde78 */ if (fZ) goto L_006bde78;
L_006bde51:; BB(0x006bde51);
    /* 006bde51: mov eax, dword ptr [0xa95d5c] */ r_eax = R32((u32)(0xa95d5cu));
    /* 006bde56: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006bde58: je 0x6bde78 */ if (fZ) goto L_006bde78;
L_006bde5a:; BB(0x006bde5a);
    /* 006bde5a: mov ecx, dword ptr [0xa95d4c] */ r_ecx = R32((u32)(0xa95d4cu));
    /* 006bde60: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006bde62: je 0x6bde73 */ if (fZ) goto L_006bde73;
L_006bde64:; BB(0x006bde64);
    /* 006bde64: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6bde69u); f_007127b0();
    /* 006bde69: mov dword ptr [0xa95d4c], 0 */ W32((u32)(0xa95d4cu), 0x0u);
L_006bde73:; BB(0x006bde73);
    /* 006bde73: call 0x6bdff4 */ r_esp -= 4; W32(r_esp, 0x6bde78u); f_006bdff4();
L_006bde78:; BB(0x006bde78);
    /* 006bde78: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bde79: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bde7a: ret  */ FN_RET(0x006bdcec); r_esp += 4; return;
}

void f_006bde7c(void) /* sub_6BDE7C */
{
    FN_ENTER(0x006bde7c);
    /* 006bde7c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 006bde80: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 006bde84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bde85: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bde86: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bde87: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bde88: mov esi, edx */ r_esi = r_edx;
    /* 006bde8a: mov ebp, eax */ r_ebp = r_eax;
    /* 006bde8c: lea ebx, [ebp + 4] */ r_ebx = (u32)(r_ebp+0x4u);
    /* 006bde8f: mov ecx, 0xa95ac0 */ r_ecx = 0xa95ac0u;
    /* 006bde94: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x6bde99u); f_00763498();
    /* 006bde99: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 006bde9c: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 006bdea1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006bdea3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006bdea5: jbe 0x6bdf4b */ if ((fC||fZ)) goto L_006bdf4b;
L_006bdeab:; BB(0x006bdeab);
    /* 006bdeab: mov dword ptr [ebp + 4], 0 */ W32((u32)(r_ebp+0x4u), 0x0u);
L_006bdeb2:; BB(0x006bdeb2);
    /* 006bdeb2: movzx edi, byte ptr [ecx + ebp] */ r_edi = (u32)R8((u32)(r_ecx+r_ebp));
    /* 006bdeb6: xor edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006bdeb8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006bdebb: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006bdebe: je 0x6bdeca */ if (fZ) goto L_006bdeca;
L_006bdec0:; BB(0x006bdec0);
    /* 006bdec0: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006bdec2: xor edx, 0xedb88320 */ {  u32 a = r_edx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006bdec8: jmp 0x6bdecc */ goto L_006bdecc;
L_006bdeca:; BB(0x006bdeca);
    /* 006bdeca: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
L_006bdecc:; BB(0x006bdecc);
    /* 006bdecc: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006bdecf: je 0x6bdedb */ if (fZ) goto L_006bdedb;
L_006bded1:; BB(0x006bded1);
    /* 006bded1: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006bded3: xor edx, 0xedb88320 */ {  u32 a = r_edx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006bded9: jmp 0x6bdedd */ goto L_006bdedd;
L_006bdedb:; BB(0x006bdedb);
    /* 006bdedb: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
L_006bdedd:; BB(0x006bdedd);
    /* 006bdedd: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006bdee0: je 0x6bdeec */ if (fZ) goto L_006bdeec;
L_006bdee2:; BB(0x006bdee2);
    /* 006bdee2: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006bdee4: xor edx, 0xedb88320 */ {  u32 a = r_edx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006bdeea: jmp 0x6bdeee */ goto L_006bdeee;
L_006bdeec:; BB(0x006bdeec);
    /* 006bdeec: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
L_006bdeee:; BB(0x006bdeee);
    /* 006bdeee: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006bdef1: je 0x6bdefd */ if (fZ) goto L_006bdefd;
L_006bdef3:; BB(0x006bdef3);
    /* 006bdef3: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006bdef5: xor edx, 0xedb88320 */ {  u32 a = r_edx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006bdefb: jmp 0x6bdeff */ goto L_006bdeff;
L_006bdefd:; BB(0x006bdefd);
    /* 006bdefd: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
L_006bdeff:; BB(0x006bdeff);
    /* 006bdeff: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006bdf02: je 0x6bdf0e */ if (fZ) goto L_006bdf0e;
L_006bdf04:; BB(0x006bdf04);
    /* 006bdf04: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006bdf06: xor edx, 0xedb88320 */ {  u32 a = r_edx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006bdf0c: jmp 0x6bdf10 */ goto L_006bdf10;
L_006bdf0e:; BB(0x006bdf0e);
    /* 006bdf0e: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
L_006bdf10:; BB(0x006bdf10);
    /* 006bdf10: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006bdf13: je 0x6bdf1f */ if (fZ) goto L_006bdf1f;
L_006bdf15:; BB(0x006bdf15);
    /* 006bdf15: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006bdf17: xor edx, 0xedb88320 */ {  u32 a = r_edx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006bdf1d: jmp 0x6bdf21 */ goto L_006bdf21;
L_006bdf1f:; BB(0x006bdf1f);
    /* 006bdf1f: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
L_006bdf21:; BB(0x006bdf21);
    /* 006bdf21: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006bdf24: je 0x6bdf30 */ if (fZ) goto L_006bdf30;
L_006bdf26:; BB(0x006bdf26);
    /* 006bdf26: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006bdf28: xor edx, 0xedb88320 */ {  u32 a = r_edx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006bdf2e: jmp 0x6bdf32 */ goto L_006bdf32;
L_006bdf30:; BB(0x006bdf30);
    /* 006bdf30: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
L_006bdf32:; BB(0x006bdf32);
    /* 006bdf32: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006bdf35: je 0x6bdf41 */ if (fZ) goto L_006bdf41;
L_006bdf37:; BB(0x006bdf37);
    /* 006bdf37: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006bdf39: xor edx, 0xedb88320 */ {  u32 a = r_edx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006bdf3f: jmp 0x6bdf43 */ goto L_006bdf43;
L_006bdf41:; BB(0x006bdf41);
    /* 006bdf41: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
L_006bdf43:; BB(0x006bdf43);
    /* 006bdf43: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006bdf45: jb 0x6bdeb2 */ if (fC) goto L_006bdeb2;
L_006bdf4b:; BB(0x006bdf4b);
    /* 006bdf4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bdf4c: not edx */ r_edx = ~r_edx;
    /* 006bdf4e: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 006bdf51: mov ecx, 0xa95ac0 */ r_ecx = 0xa95ac0u;
    /* 006bdf56: call 0x84c390 */ r_esp -= 4; W32(r_esp, 0x6bdf5bu); f_0084c390();
    /* 006bdf5b: lea edi, [esi - 4] */ r_edi = (u32)(r_esi+0xfffffffcu);
    /* 006bdf5e: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 006bdf61: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006bdf63: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006bdf65: mov ecx, 0xa95ac0 */ r_ecx = 0xa95ac0u;
    /* 006bdf6a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bdf6b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bdf6c: call 0x763054 */ r_esp -= 4; W32(r_esp, 0x6bdf71u); f_00763054();
    /* 006bdf71: push dword ptr [0xa95d44] */ { u32 v = R32((u32)(0xa95d44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bdf77: mov ecx, 0xa95ac0 */ r_ecx = 0xa95ac0u;
    /* 006bdf7c: call 0x84c390 */ r_esp -= 4; W32(r_esp, 0x6bdf81u); f_0084c390();
    /* 006bdf81: mov ebx, esi */ r_ebx = r_esi;
    /* 006bdf83: shr ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006bdf86: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006bdf88: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006bdf8a: mov ecx, 0xa95ac0 */ r_ecx = 0xa95ac0u;
    /* 006bdf8f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bdf90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bdf91: call 0x763958 */ r_esp -= 4; W32(r_esp, 0x6bdf96u); f_00763958();
    /* 006bdf96: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bdf97: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6bdf9cu); f_0082e940();
    /* 006bdf9c: mov edi, eax */ r_edi = r_eax;
    /* 006bdf9e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bdf9f: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6bdfa4u); f_0082e940();
    /* 006bdfa4: mov ebx, eax */ r_ebx = r_eax;
    /* 006bdfa6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bdfa7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bdfa8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bdfa9: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6bdfaeu); f_0086b6b8();
    /* 006bdfae: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bdfb1: push dword ptr [0xa95d48] */ { u32 v = R32((u32)(0xa95d48u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bdfb7: mov ecx, 0xa95ac0 */ r_ecx = 0xa95ac0u;
    /* 006bdfbc: call 0x84c390 */ r_esp -= 4; W32(r_esp, 0x6bdfc1u); f_0084c390();
    /* 006bdfc1: mov ecx, 0xa95ac0 */ r_ecx = 0xa95ac0u;
    /* 006bdfc6: call 0x763400 */ r_esp -= 4; W32(r_esp, 0x6bdfcbu); f_00763400();
    /* 006bdfcb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bdfcc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bdfcd: mov ecx, 0xa95ac0 */ r_ecx = 0xa95ac0u;
    /* 006bdfd2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bdfd3: call 0x7637f0 */ r_esp -= 4; W32(r_esp, 0x6bdfd8u); f_007637f0();
    /* 006bdfd8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bdfd9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bdfda: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bdfdb: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6bdfe0u); f_0086b6b8();
    /* 006bdfe0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bdfe1: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6bdfe6u); f_0082e960();
    /* 006bdfe6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bdfe7: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6bdfecu); f_0082e960();
    /* 006bdfec: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bdfef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bdff0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bdff1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bdff2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bdff3: ret  */ FN_RET(0x006bde7c); r_esp += 4; return;
}

void f_006bde84(void)
{
    FN_ENTER(0x006bde84);
    /* 006bde84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bde85: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bde86: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bde87: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bde88: mov esi, edx */ r_esi = r_edx;
    /* 006bde8a: mov ebp, eax */ r_ebp = r_eax;
    /* 006bde8c: lea ebx, [ebp + 4] */ r_ebx = (u32)(r_ebp+0x4u);
    /* 006bde8f: mov ecx, 0xa95ac0 */ r_ecx = 0xa95ac0u;
    /* 006bde94: call 0x763498 */ r_esp -= 4; W32(r_esp, 0x6bde99u); f_00763498();
    /* 006bde99: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 006bde9c: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 006bdea1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006bdea3: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 006bdea5: jbe 0x6bdf4b */ if ((fC||fZ)) goto L_006bdf4b;
L_006bdeab:; BB(0x006bdeab);
    /* 006bdeab: mov dword ptr [ebp + 4], 0 */ W32((u32)(r_ebp+0x4u), 0x0u);
L_006bdeb2:; BB(0x006bdeb2);
    /* 006bdeb2: movzx edi, byte ptr [ecx + ebp] */ r_edi = (u32)R8((u32)(r_ecx+r_ebp));
    /* 006bdeb6: xor edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006bdeb8: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006bdebb: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006bdebe: je 0x6bdeca */ if (fZ) goto L_006bdeca;
L_006bdec0:; BB(0x006bdec0);
    /* 006bdec0: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006bdec2: xor edx, 0xedb88320 */ {  u32 a = r_edx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006bdec8: jmp 0x6bdecc */ goto L_006bdecc;
L_006bdeca:; BB(0x006bdeca);
    /* 006bdeca: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
L_006bdecc:; BB(0x006bdecc);
    /* 006bdecc: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006bdecf: je 0x6bdedb */ if (fZ) goto L_006bdedb;
L_006bded1:; BB(0x006bded1);
    /* 006bded1: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006bded3: xor edx, 0xedb88320 */ {  u32 a = r_edx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006bded9: jmp 0x6bdedd */ goto L_006bdedd;
L_006bdedb:; BB(0x006bdedb);
    /* 006bdedb: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
L_006bdedd:; BB(0x006bdedd);
    /* 006bdedd: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006bdee0: je 0x6bdeec */ if (fZ) goto L_006bdeec;
L_006bdee2:; BB(0x006bdee2);
    /* 006bdee2: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006bdee4: xor edx, 0xedb88320 */ {  u32 a = r_edx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006bdeea: jmp 0x6bdeee */ goto L_006bdeee;
L_006bdeec:; BB(0x006bdeec);
    /* 006bdeec: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
L_006bdeee:; BB(0x006bdeee);
    /* 006bdeee: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006bdef1: je 0x6bdefd */ if (fZ) goto L_006bdefd;
L_006bdef3:; BB(0x006bdef3);
    /* 006bdef3: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006bdef5: xor edx, 0xedb88320 */ {  u32 a = r_edx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006bdefb: jmp 0x6bdeff */ goto L_006bdeff;
L_006bdefd:; BB(0x006bdefd);
    /* 006bdefd: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
L_006bdeff:; BB(0x006bdeff);
    /* 006bdeff: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006bdf02: je 0x6bdf0e */ if (fZ) goto L_006bdf0e;
L_006bdf04:; BB(0x006bdf04);
    /* 006bdf04: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006bdf06: xor edx, 0xedb88320 */ {  u32 a = r_edx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006bdf0c: jmp 0x6bdf10 */ goto L_006bdf10;
L_006bdf0e:; BB(0x006bdf0e);
    /* 006bdf0e: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
L_006bdf10:; BB(0x006bdf10);
    /* 006bdf10: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006bdf13: je 0x6bdf1f */ if (fZ) goto L_006bdf1f;
L_006bdf15:; BB(0x006bdf15);
    /* 006bdf15: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006bdf17: xor edx, 0xedb88320 */ {  u32 a = r_edx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006bdf1d: jmp 0x6bdf21 */ goto L_006bdf21;
L_006bdf1f:; BB(0x006bdf1f);
    /* 006bdf1f: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
L_006bdf21:; BB(0x006bdf21);
    /* 006bdf21: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006bdf24: je 0x6bdf30 */ if (fZ) goto L_006bdf30;
L_006bdf26:; BB(0x006bdf26);
    /* 006bdf26: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006bdf28: xor edx, 0xedb88320 */ {  u32 a = r_edx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006bdf2e: jmp 0x6bdf32 */ goto L_006bdf32;
L_006bdf30:; BB(0x006bdf30);
    /* 006bdf30: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
L_006bdf32:; BB(0x006bdf32);
    /* 006bdf32: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006bdf35: je 0x6bdf41 */ if (fZ) goto L_006bdf41;
L_006bdf37:; BB(0x006bdf37);
    /* 006bdf37: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006bdf39: xor edx, 0xedb88320 */ {  u32 a = r_edx; u32 b = 0xedb88320u; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006bdf3f: jmp 0x6bdf43 */ goto L_006bdf43;
L_006bdf41:; BB(0x006bdf41);
    /* 006bdf41: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
L_006bdf43:; BB(0x006bdf43);
    /* 006bdf43: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006bdf45: jb 0x6bdeb2 */ if (fC) goto L_006bdeb2;
L_006bdf4b:; BB(0x006bdf4b);
    /* 006bdf4b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006bdf4c: not edx */ r_edx = ~r_edx;
    /* 006bdf4e: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 006bdf51: mov ecx, 0xa95ac0 */ r_ecx = 0xa95ac0u;
    /* 006bdf56: call 0x84c390 */ r_esp -= 4; W32(r_esp, 0x6bdf5bu); f_0084c390();
    /* 006bdf5b: lea edi, [esi - 4] */ r_edi = (u32)(r_esi+0xfffffffcu);
    /* 006bdf5e: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 006bdf61: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006bdf63: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006bdf65: mov ecx, 0xa95ac0 */ r_ecx = 0xa95ac0u;
    /* 006bdf6a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bdf6b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bdf6c: call 0x763054 */ r_esp -= 4; W32(r_esp, 0x6bdf71u); f_00763054();
    /* 006bdf71: push dword ptr [0xa95d44] */ { u32 v = R32((u32)(0xa95d44u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bdf77: mov ecx, 0xa95ac0 */ r_ecx = 0xa95ac0u;
    /* 006bdf7c: call 0x84c390 */ r_esp -= 4; W32(r_esp, 0x6bdf81u); f_0084c390();
    /* 006bdf81: mov ebx, esi */ r_ebx = r_esi;
    /* 006bdf83: shr ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 006bdf86: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006bdf88: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006bdf8a: mov ecx, 0xa95ac0 */ r_ecx = 0xa95ac0u;
    /* 006bdf8f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bdf90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bdf91: call 0x763958 */ r_esp -= 4; W32(r_esp, 0x6bdf96u); f_00763958();
    /* 006bdf96: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bdf97: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6bdf9cu); f_0082e940();
    /* 006bdf9c: mov edi, eax */ r_edi = r_eax;
    /* 006bdf9e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bdf9f: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x6bdfa4u); f_0082e940();
    /* 006bdfa4: mov ebx, eax */ r_ebx = r_eax;
    /* 006bdfa6: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bdfa7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bdfa8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bdfa9: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6bdfaeu); f_0086b6b8();
    /* 006bdfae: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006bdfb1: push dword ptr [0xa95d48] */ { u32 v = R32((u32)(0xa95d48u)); r_esp -= 4; W32(r_esp, v); }
    /* 006bdfb7: mov ecx, 0xa95ac0 */ r_ecx = 0xa95ac0u;
    /* 006bdfbc: call 0x84c390 */ r_esp -= 4; W32(r_esp, 0x6bdfc1u); f_0084c390();
    /* 006bdfc1: mov ecx, 0xa95ac0 */ r_ecx = 0xa95ac0u;
    /* 006bdfc6: call 0x763400 */ r_esp -= 4; W32(r_esp, 0x6bdfcbu); f_00763400();
    /* 006bdfcb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bdfcc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bdfcd: mov ecx, 0xa95ac0 */ r_ecx = 0xa95ac0u;
    /* 006bdfd2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bdfd3: call 0x7637f0 */ r_esp -= 4; W32(r_esp, 0x6bdfd8u); f_007637f0();
    /* 006bdfd8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006bdfd9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bdfda: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bdfdb: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x6bdfe0u); f_0086b6b8();
    /* 006bdfe0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006bdfe1: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6bdfe6u); f_0082e960();
    /* 006bdfe6: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006bdfe7: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x6bdfecu); f_0082e960();
    /* 006bdfec: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006bdfef: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006bdff0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006bdff1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006bdff2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006bdff3: ret  */ FN_RET(0x006bde84); r_esp += 4; return;
}

void f_006bdff4(void) /* sub_6BDFF4 */
{
    FN_ENTER(0x006bdff4);
    /* 006bdff4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006bdff5: mov ebp, esp */ r_ebp = r_esp;
    /* 006bdff7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006bdff9: push 0x8ec460 */ { u32 v = 0x8ec460u; r_esp -= 4; W32(r_esp, v); }
    /* 006bdffe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006be004: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006be005: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006be00c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006be00f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006be012: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006be015: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006be018: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006be01b: mov eax, dword ptr [0xa95d3c] */ r_eax = R32((u32)(0xa95d3cu));
    /* 006be020: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006be022: je 0x6be032 */ if (fZ) goto L_006be032;
L_006be024:; BB(0x006be024);
    /* 006be024: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006be027: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006be02e: mov esp, ebp */ r_esp = r_ebp;
    /* 006be030: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006be031: ret  */ FN_RET(0x006bdff4); r_esp += 4; return;
L_006be032:; BB(0x006be032);
    /* 006be032: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006be039: push 0x480 */ { u32 v = 0x480u; r_esp -= 4; W32(r_esp, v); }
    /* 006be03e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6be043u); f_005caba4();
    /* 006be043: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006be044: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006be047: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006be049: je 0x6be024 */ if (fZ) goto L_006be024;
L_006be04b:; BB(0x006be04b);
    /* 006be04b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006be052: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006be059: push dword ptr [0xaca384] */ { u32 v = R32((u32)(0xaca384u)); r_esp -= 4; W32(r_esp, v); }
    /* 006be05f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006be062: call 0x6be070 */ r_esp -= 4; W32(r_esp, 0x6be067u); f_006be070();
    /* 006be067: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006be06e: jmp 0x6be024 */ goto L_006be024;
}

