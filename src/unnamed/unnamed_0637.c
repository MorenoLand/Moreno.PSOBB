#include "protos.h"

void f_00637058(void) /* sub_637058 */
{
    FN_ENTER(0x00637058);
    /* 00637058: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637059: mov ebp, esp */ r_ebp = r_esp;
    /* 0063705b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063705d: push 0x8e45e0 */ { u32 v = 0x8e45e0u; r_esp -= 4; W32(r_esp, v); }
    /* 00637062: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00637068: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00637069: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00637070: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637073: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00637076: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00637079: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063707c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063707f: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00637084: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063708b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x637090u); f_008581c5();
    /* 00637090: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00637091: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00637094: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00637096: je 0x637114 */ if (fZ) goto L_00637114;
L_00637098:; BB(0x00637098);
    /* 00637098: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063709f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006370a6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006370a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006370ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006370ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006370ad: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006370ae: push 0x9c64b4 */ { u32 v = 0x9c64b4u; r_esp -= 4; W32(r_esp, v); }
    /* 006370b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006370b5: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6370bau); f_005b7a84();
    /* 006370ba: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006370bd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006370c4:; BB(0x006370c4);
    /* 006370c4: mov dword ptr [0xa8f108], eax */ W32((u32)(0xa8f108u), r_eax);
    /* 006370c9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006370d0: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 006370d2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6370d7u); f_008581c5();
    /* 006370d7: mov edx, dword ptr [0xa8f108] */ r_edx = R32((u32)(0xa8f108u));
    /* 006370dd: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 006370e3: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 006370e6: mov dword ptr [0xa8f104], eax */ W32((u32)(0xa8f104u), r_eax);
    /* 006370eb: mov dword ptr [eax + 4], ebx */ W32((u32)(r_eax+0x4u), r_ebx);
    /* 006370ee: push 0x933820 */ { u32 v = 0x933820u; r_esp -= 4; W32(r_esp, v); }
    /* 006370f3: call 0x8009dc */ r_esp -= 4; W32(r_esp, 0x6370f8u); f_008009dc();
    /* 006370f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006370fb: mov edx, dword ptr [0xa8f104] */ r_edx = R32((u32)(0xa8f104u));
    /* 00637101: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00637104: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00637106: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637109: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00637110: mov esp, ebp */ r_esp = r_ebp;
    /* 00637112: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637113: ret  */ FN_RET(0x00637058); r_esp += 4; return;
L_00637114:; BB(0x00637114);
    /* 00637114: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00637116: jmp 0x6370c4 */ goto L_006370c4;
}

void f_00637118(void) /* sub_637118 */
{
    FN_ENTER(0x00637118);
    /* 00637118: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00637119: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063711b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063711d: call 0x63713c */ r_esp -= 4; W32(r_esp, 0x637122u); f_0063713c();
    /* 00637122: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00637126: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00637128: jne 0x63712e */ if (!fZ) goto L_0063712e;
L_0063712a:; BB(0x0063712a);
    /* 0063712a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063712b: ret 4 */ FN_RET(0x00637118); r_esp += 8; return;
L_0063712e:; BB(0x0063712e);
    /* 0063712e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063712f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x637134u); f_005c2f74();
    /* 00637134: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00637135: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00637136: ret 4 */ FN_RET(0x00637118); r_esp += 8; return;
}

void f_0063713c(void) /* sub_63713C */
{
    FN_ENTER(0x0063713c);
    /* 0063713c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063713d: mov ebp, esp */ r_ebp = r_esp;
    /* 0063713f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00637141: push 0x8e45fc */ { u32 v = 0x8e45fcu; r_esp -= 4; W32(r_esp, v); }
    /* 00637146: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063714c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063714d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00637154: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637157: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063715a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063715d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00637160: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00637163: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00637166: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00637169: mov dword ptr [ecx], 0xb2c920 */ W32((u32)(r_ecx), 0xb2c920u);
    /* 0063716f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00637176: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x63717bu); f_006131f4();
    /* 0063717b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063717e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00637185: mov esp, ebp */ r_esp = r_ebp;
    /* 00637187: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637188: ret  */ FN_RET(0x0063713c); r_esp += 4; return;
}

void f_0063718c(void) /* sub_63718C */
{
    FN_ENTER(0x0063718c);
    /* 0063718c: mov ecx, dword ptr [0xa8f114] */ r_ecx = R32((u32)(0xa8f114u));
    /* 00637192: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00637194: je 0x6371a9 */ if (fZ) goto L_006371a9;
L_00637196:; BB(0x00637196);
    /* 00637196: je 0x63719f */ if (fZ) goto L_0063719f;
L_00637198:; BB(0x00637198);
    /* 00637198: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063719a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x63719fu); f_004066a8();
L_0063719f:; BB(0x0063719f);
    /* 0063719f: mov dword ptr [0xa8f114], 0 */ W32((u32)(0xa8f114u), 0x0u);
L_006371a9:; BB(0x006371a9);
    /* 006371a9: ret  */ FN_RET(0x0063718c); r_esp += 4; return;
}

void f_006371ac(void)
{
    FN_ENTER(0x006371ac);
    /* 006371ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006371ad: mov ebp, esp */ r_ebp = r_esp;
    /* 006371af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006371b1: push 0x8e4624 */ { u32 v = 0x8e4624u; r_esp -= 4; W32(r_esp, v); }
    /* 006371b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006371bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006371bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006371c4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006371c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006371ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006371cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006371d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006371d3: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 006371d8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006371df: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6371e4u); f_005caba4();
    /* 006371e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006371e5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006371e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006371ea: je 0x637223 */ if (fZ) goto L_00637223;
L_006371ec:; BB(0x006371ec);
    /* 006371ec: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006371f3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006371fa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006371fd: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637203: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00637206: call 0x637228 */ r_esp -= 4; W32(r_esp, 0x63720bu); f_00637228();
    /* 0063720b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063720e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00637215:; BB(0x00637215);
    /* 00637215: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637218: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063721f: mov esp, ebp */ r_esp = r_ebp;
    /* 00637221: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637222: ret  */ FN_RET(0x006371ac); r_esp += 4; return;
L_00637223:; BB(0x00637223);
    /* 00637223: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00637225: jmp 0x637215 */ goto L_00637215;
}

void f_00637228(void) /* sub_637228 */
{
    FN_ENTER(0x00637228);
    /* 00637228: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637229: mov ebp, esp */ r_ebp = r_esp;
    /* 0063722b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063722d: push 0x8e4640 */ { u32 v = 0x8e4640u; r_esp -= 4; W32(r_esp, v); }
    /* 00637232: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00637238: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00637239: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00637240: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637243: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00637246: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00637249: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0063724c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0063724f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00637252: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637255: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00637258: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0063725b: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x637260u); f_006132e4();
    /* 00637260: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00637267: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063726a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063726d: mov dword ptr [ecx], 0xb2c920 */ W32((u32)(r_ecx), 0xb2c920u);
    /* 00637273: mov eax, dword ptr [0x9c64e0] */ r_eax = R32((u32)(0x9c64e0u));
    /* 00637278: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00637279: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0063727c: call dword ptr [0xb2c934] */ { u32 t = R32((u32)(0xb2c934u)); r_esp -= 4; W32(r_esp, 0x637282u); call_ind(t); }
    /* 00637282: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00637285: mov eax, dword ptr [0xa8f114] */ r_eax = R32((u32)(0xa8f114u));
    /* 0063728a: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00637290: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00637293: mov dword ptr [ebx + 0x34], ecx */ W32((u32)(r_ebx+0x34u), r_ecx);
    /* 00637296: mov edi, dword ptr [eax + 0x42c] */ r_edi = R32((u32)(r_eax+0x42cu));
    /* 0063729c: mov esi, dword ptr [edi + 0xc] */ r_esi = R32((u32)(r_edi+0xcu));
    /* 0063729f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006372a2: mov dword ptr [ebx + 0xc0], 0x43fa0000 */ W32((u32)(r_ebx+0xc0u), 0x43fa0000u);
    /* 006372ac: mov dword ptr [ebx + 0x24], esi */ W32((u32)(r_ebx+0x24u), r_esi);
    /* 006372af: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006372b2: mov dword ptr [ebx + 0xc4], 0x42c80000 */ W32((u32)(r_ebx+0xc4u), 0x42c80000u);
    /* 006372bc: mov eax, ebx */ r_eax = r_ebx;
    /* 006372be: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006372c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006372c4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006372cb: mov esp, ebp */ r_esp = r_ebp;
    /* 006372cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006372ce: ret 8 */ FN_RET(0x00637228); r_esp += 12; return;
}

void f_00637266(void)
{
    FN_ENTER(0x00637266);
    /* 00637266: add byte ptr [ebx + 0x558bdc4d], cl */ { u32 ad = (u32)(r_ebx+0x558bdc4du);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0063726c: in al, dx */ UNSUP(0x0063726c, "in al, dx");
    /* 0063726d: mov dword ptr [ecx], 0xb2c920 */ W32((u32)(r_ecx), 0xb2c920u);
    /* 00637273: mov eax, dword ptr [0x9c64e0] */ r_eax = R32((u32)(0x9c64e0u));
    /* 00637278: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00637279: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0063727c: call dword ptr [0xb2c934] */ { u32 t = R32((u32)(0xb2c934u)); r_esp -= 4; W32(r_esp, 0x637282u); call_ind(t); }
    /* 00637282: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00637285: mov eax, dword ptr [0xa8f114] */ r_eax = R32((u32)(0xa8f114u));
    /* 0063728a: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00637290: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00637293: mov dword ptr [ebx + 0x34], ecx */ W32((u32)(r_ebx+0x34u), r_ecx);
    /* 00637296: mov edi, dword ptr [eax + 0x42c] */ r_edi = R32((u32)(r_eax+0x42cu));
    /* 0063729c: mov esi, dword ptr [edi + 0xc] */ r_esi = R32((u32)(r_edi+0xcu));
    /* 0063729f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006372a2: mov dword ptr [ebx + 0xc0], 0x43fa0000 */ W32((u32)(r_ebx+0xc0u), 0x43fa0000u);
    /* 006372ac: mov dword ptr [ebx + 0x24], esi */ W32((u32)(r_ebx+0x24u), r_esi);
    /* 006372af: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006372b2: mov dword ptr [ebx + 0xc4], 0x42c80000 */ W32((u32)(r_ebx+0xc4u), 0x42c80000u);
    /* 006372bc: mov eax, ebx */ r_eax = r_ebx;
    /* 006372be: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006372c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006372c4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006372cb: mov esp, ebp */ r_esp = r_ebp;
    /* 006372cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006372ce: ret 8 */ FN_RET(0x00637266); r_esp += 12; return;
}

void f_006372d4(void) /* sub_6372D4 */
{
    FN_ENTER(0x006372d4);
    /* 006372d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006372d5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006372d6: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006372d8: push dword ptr [ebx + 0xc4] */ { u32 v = R32((u32)(r_ebx+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006372de: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006372e4: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006372e6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006372e8: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x6372ebu); call_ind(t); }
    /* 006372eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006372ed: je 0x637490 */ if (fZ) goto L_00637490;
L_006372f3:; BB(0x006372f3);
    /* 006372f3: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 006372f6: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6372fbu); f_00829cc8();
    /* 006372fb: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x637300u); f_0082d7b0();
    /* 00637300: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00637303: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x637308u); f_0082d838();
    /* 00637308: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0063730b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063730d: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x637312u); f_0082d8bc();
    /* 00637312: mov edi, dword ptr [ebx + 0x34] */ r_edi = R32((u32)(r_ebx+0x34u));
    /* 00637315: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637318: push dword ptr [edi + 0xc] */ { u32 v = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063731b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063731d: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637320: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x637325u); f_00830b74();
    /* 00637325: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637328: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x63732du); f_008321d8();
    /* 0063732d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063732e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x637333u); f_0082d7b0();
    /* 00637333: mov edi, dword ptr [edi + 0x2c] */ r_edi = R32((u32)(r_edi+0x2cu));
    /* 00637336: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637339: push dword ptr [edi + 0xc] */ { u32 v = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063733c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063733e: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637341: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x637346u); f_00830b74();
    /* 00637346: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637349: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x63734eu); f_008321d8();
    /* 0063734e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063734f: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x637354u); f_0082dbac();
    /* 00637354: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x637359u); f_0082d7b0();
    /* 00637359: mov edi, dword ptr [edi + 0x2c] */ r_edi = R32((u32)(r_edi+0x2cu));
    /* 0063735c: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063735f: push dword ptr [edi + 0xc] */ { u32 v = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00637362: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00637364: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637367: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x63736cu); f_00830b74();
    /* 0063736c: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063736f: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x637374u); f_008321d8();
    /* 00637374: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00637375: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x63737au); f_0082d7b0();
    /* 0063737a: mov edi, dword ptr [edi + 0x2c] */ r_edi = R32((u32)(r_edi+0x2cu));
    /* 0063737d: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637380: push dword ptr [edi + 0xc] */ { u32 v = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00637383: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00637385: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637388: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x63738du); f_00830b74();
    /* 0063738d: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637390: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x637395u); f_008321d8();
    /* 00637395: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00637396: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63739bu); f_0082da80();
    /* 0063739b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6373a0u); f_0082da80();
    /* 006373a0: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x6373a5u); f_0082dab0();
    /* 006373a5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6373aau); f_0082da80();
    /* 006373aa: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6373afu); f_0082d7b0();
    /* 006373af: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 006373b2: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006373b5: mov edi, dword ptr [edx + 0x30] */ r_edi = R32((u32)(r_edx+0x30u));
    /* 006373b8: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006373bb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006373bd: push dword ptr [edi + 0xc] */ { u32 v = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006373c0: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006373c3: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x6373c8u); f_00830b74();
    /* 006373c8: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006373cb: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x6373d0u); f_008321d8();
    /* 006373d0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006373d1: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x6373d6u); f_0082dbac();
    /* 006373d6: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6373dbu); f_0082d7b0();
    /* 006373db: mov edi, dword ptr [edi + 0x2c] */ r_edi = R32((u32)(r_edi+0x2cu));
    /* 006373de: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006373e1: push dword ptr [edi + 0xc] */ { u32 v = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006373e4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006373e6: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006373e9: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x6373eeu); f_00830b74();
    /* 006373ee: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006373f1: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x6373f6u); f_008321d8();
    /* 006373f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006373f7: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6373fcu); f_0082da80();
    /* 006373fc: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x637401u); f_0082dab0();
    /* 00637401: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x637406u); f_0082da80();
    /* 00637406: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x63740bu); f_0082d7b0();
    /* 0063740b: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 0063740e: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00637411: mov ebx, dword ptr [edx + 0x30] */ r_ebx = R32((u32)(r_edx+0x30u));
    /* 00637414: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 00637417: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00637419: push dword ptr [ebx + 0x10] */ { u32 v = R32((u32)(r_ebx+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063741c: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063741f: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637422: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x637427u); f_00830b74();
    /* 00637427: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063742a: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x63742fu); f_008321d8();
    /* 0063742f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00637430: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x637435u); f_0082dbac();
    /* 00637435: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x63743au); f_0082d7b0();
    /* 0063743a: mov ebx, dword ptr [ebx + 0x2c] */ r_ebx = R32((u32)(r_ebx+0x2cu));
    /* 0063743d: push dword ptr [ebx + 0x10] */ { u32 v = R32((u32)(r_ebx+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637440: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00637443: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00637445: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637448: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x63744du); f_00830b74();
    /* 0063744d: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637450: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x637455u); f_008321d8();
    /* 00637455: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00637456: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x63745bu); f_0082d7b0();
    /* 0063745b: mov ebx, dword ptr [ebx + 0x2c] */ r_ebx = R32((u32)(r_ebx+0x2cu));
    /* 0063745e: push dword ptr [ebx + 0x10] */ { u32 v = R32((u32)(r_ebx+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637461: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00637464: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00637466: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637469: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x63746eu); f_00830b74();
    /* 0063746e: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637471: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x637476u); f_008321d8();
    /* 00637476: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00637477: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63747cu); f_0082da80();
    /* 0063747c: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x637481u); f_0082da80();
    /* 00637481: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x637486u); f_0082dab0();
    /* 00637486: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63748bu); f_0082da80();
    /* 0063748b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x637490u); f_0082da80();
L_00637490:; BB(0x00637490);
    /* 00637490: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00637491: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00637492: ret  */ FN_RET(0x006372d4); r_esp += 4; return;
}

void f_00637494(void) /* sub_637494 */
{
    FN_ENTER(0x00637494);
    /* 00637494: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637495: mov ebp, esp */ r_ebp = r_esp;
    /* 00637497: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00637499: push 0x8e4668 */ { u32 v = 0x8e4668u; r_esp -= 4; W32(r_esp, v); }
    /* 0063749e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006374a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006374a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006374ac: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006374af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006374b2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006374b5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006374b8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006374bb: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006374c0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006374c7: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6374ccu); f_008581c5();
    /* 006374cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006374cd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006374d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006374d2: je 0x637513 */ if (fZ) goto L_00637513;
L_006374d4:; BB(0x006374d4);
    /* 006374d4: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006374db: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006374e2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006374e5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006374e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006374e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006374e9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006374ea: push 0x9c64d0 */ { u32 v = 0x9c64d0u; r_esp -= 4; W32(r_esp, v); }
    /* 006374ef: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006374f1: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6374f6u); f_005b7a84();
    /* 006374f6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006374f9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00637500:; BB(0x00637500);
    /* 00637500: mov dword ptr [0xa8f114], eax */ W32((u32)(0xa8f114u), r_eax);
    /* 00637505: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637508: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063750f: mov esp, ebp */ r_esp = r_ebp;
    /* 00637511: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637512: ret  */ FN_RET(0x00637494); r_esp += 4; return;
L_00637513:; BB(0x00637513);
    /* 00637513: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00637515: jmp 0x637500 */ goto L_00637500;
}

void f_00637518(void) /* sub_637518 */
{
    FN_ENTER(0x00637518);
    /* 00637518: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00637519: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063751b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063751d: call 0x63753c */ r_esp -= 4; W32(r_esp, 0x637522u); f_0063753c();
    /* 00637522: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00637526: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00637528: jne 0x63752e */ if (!fZ) goto L_0063752e;
L_0063752a:; BB(0x0063752a);
    /* 0063752a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063752b: ret 4 */ FN_RET(0x00637518); r_esp += 8; return;
L_0063752e:; BB(0x0063752e);
    /* 0063752e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063752f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x637534u); f_005c2f74();
    /* 00637534: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00637535: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00637536: ret 4 */ FN_RET(0x00637518); r_esp += 8; return;
}

void f_0063753c(void) /* sub_63753C */
{
    FN_ENTER(0x0063753c);
    /* 0063753c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063753d: mov ebp, esp */ r_ebp = r_esp;
    /* 0063753f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00637541: push 0x8e4684 */ { u32 v = 0x8e4684u; r_esp -= 4; W32(r_esp, v); }
    /* 00637546: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063754c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063754d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00637554: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637557: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063755a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063755d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00637560: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00637563: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00637566: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00637569: mov dword ptr [ecx], 0xb2c9f0 */ W32((u32)(r_ecx), 0xb2c9f0u);
    /* 0063756f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00637576: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x63757bu); f_006131f4();
    /* 0063757b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063757e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00637585: mov esp, ebp */ r_esp = r_ebp;
    /* 00637587: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637588: ret  */ FN_RET(0x0063753c); r_esp += 4; return;
}

void f_0063758c(void) /* sub_63758C */
{
    FN_ENTER(0x0063758c);
    /* 0063758c: mov ecx, dword ptr [0xa8f120] */ r_ecx = R32((u32)(0xa8f120u));
    /* 00637592: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00637594: je 0x6375a9 */ if (fZ) goto L_006375a9;
L_00637596:; BB(0x00637596);
    /* 00637596: je 0x63759f */ if (fZ) goto L_0063759f;
L_00637598:; BB(0x00637598);
    /* 00637598: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063759a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x63759fu); f_004066a8();
L_0063759f:; BB(0x0063759f);
    /* 0063759f: mov dword ptr [0xa8f120], 0 */ W32((u32)(0xa8f120u), 0x0u);
L_006375a9:; BB(0x006375a9);
    /* 006375a9: ret  */ FN_RET(0x0063758c); r_esp += 4; return;
}

void f_006375ac(void)
{
    FN_ENTER(0x006375ac);
    /* 006375ac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006375ad: mov ebp, esp */ r_ebp = r_esp;
    /* 006375af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006375b1: push 0x8e46ac */ { u32 v = 0x8e46acu; r_esp -= 4; W32(r_esp, v); }
    /* 006375b6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006375bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006375bd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006375c4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006375c7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006375ca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006375cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006375d0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006375d3: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 006375d8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006375df: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6375e4u); f_005caba4();
    /* 006375e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006375e5: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006375e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006375ea: je 0x637623 */ if (fZ) goto L_00637623;
L_006375ec:; BB(0x006375ec);
    /* 006375ec: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006375f3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006375fa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006375fd: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637603: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00637606: call 0x637628 */ r_esp -= 4; W32(r_esp, 0x63760bu); f_00637628();
    /* 0063760b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063760e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00637615:; BB(0x00637615);
    /* 00637615: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637618: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063761f: mov esp, ebp */ r_esp = r_ebp;
    /* 00637621: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637622: ret  */ FN_RET(0x006375ac); r_esp += 4; return;
L_00637623:; BB(0x00637623);
    /* 00637623: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00637625: jmp 0x637615 */ goto L_00637615;
}

void f_00637628(void) /* sub_637628 */
{
    FN_ENTER(0x00637628);
    /* 00637628: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637629: mov ebp, esp */ r_ebp = r_esp;
    /* 0063762b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063762d: push 0x8e46c8 */ { u32 v = 0x8e46c8u; r_esp -= 4; W32(r_esp, v); }
    /* 00637632: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00637638: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00637639: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00637640: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637643: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00637646: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00637649: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0063764c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0063764f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00637652: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637655: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00637658: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0063765b: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x637660u); f_006132e4();
    /* 00637660: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00637667: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063766a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063766d: mov dword ptr [ecx], 0xb2c9f0 */ W32((u32)(r_ecx), 0xb2c9f0u);
    /* 00637673: mov eax, dword ptr [0x9c64fc] */ r_eax = R32((u32)(0x9c64fcu));
    /* 00637678: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00637679: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0063767c: call dword ptr [0xb2ca04] */ { u32 t = R32((u32)(0xb2ca04u)); r_esp -= 4; W32(r_esp, 0x637682u); call_ind(t); }
    /* 00637682: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00637685: mov eax, dword ptr [0xa8f120] */ r_eax = R32((u32)(0xa8f120u));
    /* 0063768a: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 00637690: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 00637693: mov dword ptr [ebx + 0x34], ecx */ W32((u32)(r_ebx+0x34u), r_ecx);
    /* 00637696: mov edi, dword ptr [eax + 0x42c] */ r_edi = R32((u32)(r_eax+0x42cu));
    /* 0063769c: mov esi, dword ptr [edi + 0xc] */ r_esi = R32((u32)(r_edi+0xcu));
    /* 0063769f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006376a2: mov dword ptr [ebx + 0xc0], 0x43fa0000 */ W32((u32)(r_ebx+0xc0u), 0x43fa0000u);
    /* 006376ac: mov dword ptr [ebx + 0x24], esi */ W32((u32)(r_ebx+0x24u), r_esi);
    /* 006376af: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006376b2: mov dword ptr [ebx + 0xc4], 0x43960000 */ W32((u32)(r_ebx+0xc4u), 0x43960000u);
    /* 006376bc: mov eax, ebx */ r_eax = r_ebx;
    /* 006376be: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006376c1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006376c4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006376cb: mov esp, ebp */ r_esp = r_ebp;
    /* 006376cd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006376ce: ret 8 */ FN_RET(0x00637628); r_esp += 12; return;
}

void f_006376d4(void) /* sub_6376D4 */
{
    FN_ENTER(0x006376d4);
    /* 006376d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006376d5: mov ebp, esp */ r_ebp = r_esp;
    /* 006376d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006376d9: push 0x8e46f0 */ { u32 v = 0x8e46f0u; r_esp -= 4; W32(r_esp, v); }
    /* 006376de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006376e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006376e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006376ec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006376ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006376f2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006376f5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006376f8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006376fb: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00637700: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00637707: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x63770cu); f_008581c5();
    /* 0063770c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063770d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00637710: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00637712: je 0x637753 */ if (fZ) goto L_00637753;
L_00637714:; BB(0x00637714);
    /* 00637714: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063771b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00637722: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00637725: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00637727: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00637728: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00637729: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063772a: push 0x9c64ec */ { u32 v = 0x9c64ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0063772f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00637731: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x637736u); f_005b7a84();
    /* 00637736: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00637739: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00637740:; BB(0x00637740);
    /* 00637740: mov dword ptr [0xa8f120], eax */ W32((u32)(0xa8f120u), r_eax);
    /* 00637745: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637748: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063774f: mov esp, ebp */ r_esp = r_ebp;
    /* 00637751: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637752: ret  */ FN_RET(0x006376d4); r_esp += 4; return;
L_00637753:; BB(0x00637753);
    /* 00637753: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00637755: jmp 0x637740 */ goto L_00637740;
}

void f_00637758(void) /* sub_637758 */
{
    FN_ENTER(0x00637758);
    /* 00637758: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00637759: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063775b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063775d: call 0x63777c */ r_esp -= 4; W32(r_esp, 0x637762u); f_0063777c();
    /* 00637762: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00637766: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00637768: jne 0x63776e */ if (!fZ) goto L_0063776e;
L_0063776a:; BB(0x0063776a);
    /* 0063776a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063776b: ret 4 */ FN_RET(0x00637758); r_esp += 8; return;
L_0063776e:; BB(0x0063776e);
    /* 0063776e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063776f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x637774u); f_005c2f74();
    /* 00637774: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00637775: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00637776: ret 4 */ FN_RET(0x00637758); r_esp += 8; return;
}

void f_0063777c(void) /* sub_63777C */
{
    FN_ENTER(0x0063777c);
    /* 0063777c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063777d: mov ebp, esp */ r_ebp = r_esp;
    /* 0063777f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00637781: push 0x8e470c */ { u32 v = 0x8e470cu; r_esp -= 4; W32(r_esp, v); }
    /* 00637786: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063778c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063778d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00637794: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637797: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063779a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063779d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006377a0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006377a3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006377a6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006377a9: mov dword ptr [ecx], 0xb2cac0 */ W32((u32)(r_ecx), 0xb2cac0u);
    /* 006377af: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006377b6: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x6377bbu); f_006131f4();
    /* 006377bb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006377be: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006377c5: mov esp, ebp */ r_esp = r_ebp;
    /* 006377c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006377c8: ret  */ FN_RET(0x0063777c); r_esp += 4; return;
}

void f_006377cc(void) /* sub_6377CC */
{
    FN_ENTER(0x006377cc);
    /* 006377cc: mov ecx, dword ptr [0xa8f12c] */ r_ecx = R32((u32)(0xa8f12cu));
    /* 006377d2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006377d4: je 0x6377e9 */ if (fZ) goto L_006377e9;
L_006377d6:; BB(0x006377d6);
    /* 006377d6: je 0x6377df */ if (fZ) goto L_006377df;
L_006377d8:; BB(0x006377d8);
    /* 006377d8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006377da: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6377dfu); f_004066a8();
L_006377df:; BB(0x006377df);
    /* 006377df: mov dword ptr [0xa8f12c], 0 */ W32((u32)(0xa8f12cu), 0x0u);
L_006377e9:; BB(0x006377e9);
    /* 006377e9: ret  */ FN_RET(0x006377cc); r_esp += 4; return;
}

void f_006377ec(void)
{
    FN_ENTER(0x006377ec);
    /* 006377ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006377ed: mov ebp, esp */ r_ebp = r_esp;
    /* 006377ef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006377f1: push 0x8e4734 */ { u32 v = 0x8e4734u; r_esp -= 4; W32(r_esp, v); }
    /* 006377f6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006377fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006377fd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00637804: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637807: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063780a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063780d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00637810: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00637813: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00637818: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063781f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x637824u); f_005caba4();
    /* 00637824: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00637825: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00637828: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063782a: je 0x637863 */ if (fZ) goto L_00637863;
L_0063782c:; BB(0x0063782c);
    /* 0063782c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00637833: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063783a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063783d: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637843: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00637846: call 0x637868 */ r_esp -= 4; W32(r_esp, 0x63784bu); f_00637868();
    /* 0063784b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063784e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00637855:; BB(0x00637855);
    /* 00637855: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637858: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063785f: mov esp, ebp */ r_esp = r_ebp;
    /* 00637861: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637862: ret  */ FN_RET(0x006377ec); r_esp += 4; return;
L_00637863:; BB(0x00637863);
    /* 00637863: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00637865: jmp 0x637855 */ goto L_00637855;
}

void f_00637860(void)
{
    FN_ENTER(0x00637860);
    /* 00637860: in eax, 0x5d */ UNSUP(0x00637860, "in eax, 0x5d");
    /* 00637862: ret  */ FN_RET(0x00637860); r_esp += 4; return;
}

void f_00637868(void) /* sub_637868 */
{
    FN_ENTER(0x00637868);
    /* 00637868: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637869: mov ebp, esp */ r_ebp = r_esp;
    /* 0063786b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063786d: push 0x8e4750 */ { u32 v = 0x8e4750u; r_esp -= 4; W32(r_esp, v); }
    /* 00637872: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00637878: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00637879: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00637880: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637883: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00637886: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00637889: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 0063788c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 0063788f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00637892: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637895: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00637898: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0063789b: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x6378a0u); f_006132e4();
    /* 006378a0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006378a7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006378aa: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006378ad: mov dword ptr [ecx], 0xb2cac0 */ W32((u32)(r_ecx), 0xb2cac0u);
    /* 006378b3: mov eax, dword ptr [0x9c6518] */ r_eax = R32((u32)(0x9c6518u));
    /* 006378b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006378b9: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006378bc: call dword ptr [0xb2cad4] */ { u32 t = R32((u32)(0xb2cad4u)); r_esp -= 4; W32(r_esp, 0x6378c2u); call_ind(t); }
    /* 006378c2: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006378c5: mov eax, dword ptr [0xa8f12c] */ r_eax = R32((u32)(0xa8f12cu));
    /* 006378ca: mov edx, dword ptr [eax + 0x42c] */ r_edx = R32((u32)(r_eax+0x42cu));
    /* 006378d0: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 006378d3: mov dword ptr [ebx + 0x34], ecx */ W32((u32)(r_ebx+0x34u), r_ecx);
    /* 006378d6: mov edi, dword ptr [eax + 0x42c] */ r_edi = R32((u32)(r_eax+0x42cu));
    /* 006378dc: mov esi, dword ptr [edi + 0xc] */ r_esi = R32((u32)(r_edi+0xcu));
    /* 006378df: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 006378e2: mov dword ptr [ebx + 0xc0], 0x43fa0000 */ W32((u32)(r_ebx+0xc0u), 0x43fa0000u);
    /* 006378ec: mov dword ptr [ebx + 0x24], esi */ W32((u32)(r_ebx+0x24u), r_esi);
    /* 006378ef: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006378f2: mov dword ptr [ebx + 0xc4], 0x43960000 */ W32((u32)(r_ebx+0xc4u), 0x43960000u);
    /* 006378fc: mov eax, ebx */ r_eax = r_ebx;
    /* 006378fe: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00637901: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637904: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063790b: mov esp, ebp */ r_esp = r_ebp;
    /* 0063790d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063790e: ret 8 */ FN_RET(0x00637868); r_esp += 12; return;
}

void f_00637914(void) /* sub_637914 */
{
    FN_ENTER(0x00637914);
    /* 00637914: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00637915: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00637916: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00637918: push dword ptr [ebx + 0xc4] */ { u32 v = R32((u32)(r_ebx+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063791e: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637924: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00637926: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00637928: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x63792bu); call_ind(t); }
    /* 0063792b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063792d: je 0x637b58 */ if (fZ) goto L_00637b58;
L_00637933:; BB(0x00637933);
    /* 00637933: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 00637936: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x63793bu); f_00829cc8();
    /* 0063793b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x637940u); f_0082d7b0();
    /* 00637940: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00637943: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x637948u); f_0082d838();
    /* 00637948: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0063794b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063794d: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x637952u); f_0082d8bc();
    /* 00637952: mov edi, dword ptr [ebx + 0x34] */ r_edi = R32((u32)(r_ebx+0x34u));
    /* 00637955: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637958: push dword ptr [edi + 0xc] */ { u32 v = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063795b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063795d: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637960: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x637965u); f_00830b74();
    /* 00637965: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637968: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x63796du); f_008321d8();
    /* 0063796d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063796e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x637973u); f_0082d7b0();
    /* 00637973: mov edi, dword ptr [edi + 0x2c] */ r_edi = R32((u32)(r_edi+0x2cu));
    /* 00637976: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637979: push dword ptr [edi + 0xc] */ { u32 v = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0063797c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063797e: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637981: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x637986u); f_00830b74();
    /* 00637986: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637989: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x63798eu); f_008321d8();
    /* 0063798e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063798f: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x637994u); f_0082dbac();
    /* 00637994: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x637999u); f_0082d7b0();
    /* 00637999: mov edi, dword ptr [edi + 0x2c] */ r_edi = R32((u32)(r_edi+0x2cu));
    /* 0063799c: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063799f: push dword ptr [edi + 0xc] */ { u32 v = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006379a2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006379a4: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006379a7: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x6379acu); f_00830b74();
    /* 006379ac: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006379af: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x6379b4u); f_008321d8();
    /* 006379b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006379b5: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6379bau); f_0082d7b0();
    /* 006379ba: mov edi, dword ptr [edi + 0x2c] */ r_edi = R32((u32)(r_edi+0x2cu));
    /* 006379bd: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006379c0: push dword ptr [edi + 0xc] */ { u32 v = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006379c3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006379c5: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006379c8: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x6379cdu); f_00830b74();
    /* 006379cd: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006379d0: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x6379d5u); f_008321d8();
    /* 006379d5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006379d6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6379dbu); f_0082da80();
    /* 006379db: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6379e0u); f_0082da80();
    /* 006379e0: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x6379e5u); f_0082dab0();
    /* 006379e5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6379eau); f_0082da80();
    /* 006379ea: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6379efu); f_0082d7b0();
    /* 006379ef: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 006379f2: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 006379f5: mov edi, dword ptr [edx + 0x30] */ r_edi = R32((u32)(r_edx+0x30u));
    /* 006379f8: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006379fb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006379fd: push dword ptr [edi + 0xc] */ { u32 v = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00637a00: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637a03: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x637a08u); f_00830b74();
    /* 00637a08: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637a0b: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x637a10u); f_008321d8();
    /* 00637a10: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00637a11: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x637a16u); f_0082dbac();
    /* 00637a16: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x637a1bu); f_0082d7b0();
    /* 00637a1b: mov edi, dword ptr [edi + 0x2c] */ r_edi = R32((u32)(r_edi+0x2cu));
    /* 00637a1e: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637a21: push dword ptr [edi + 0xc] */ { u32 v = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00637a24: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00637a26: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637a29: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x637a2eu); f_00830b74();
    /* 00637a2e: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637a31: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x637a36u); f_008321d8();
    /* 00637a36: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00637a37: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x637a3cu); f_0082d7b0();
    /* 00637a3c: mov edi, dword ptr [edi + 0x2c] */ r_edi = R32((u32)(r_edi+0x2cu));
    /* 00637a3f: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637a42: push dword ptr [edi + 0xc] */ { u32 v = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00637a45: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00637a47: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637a4a: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x637a4fu); f_00830b74();
    /* 00637a4f: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637a52: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x637a57u); f_008321d8();
    /* 00637a57: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00637a58: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x637a5du); f_0082da80();
    /* 00637a5d: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x637a62u); f_0082da80();
    /* 00637a62: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x637a67u); f_0082dab0();
    /* 00637a67: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x637a6cu); f_0082da80();
    /* 00637a6c: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x637a71u); f_0082d7b0();
    /* 00637a71: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 00637a74: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00637a77: mov edi, dword ptr [edx + 0x30] */ r_edi = R32((u32)(r_edx+0x30u));
    /* 00637a7a: mov edi, dword ptr [edi + 0x30] */ r_edi = R32((u32)(r_edi+0x30u));
    /* 00637a7d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00637a7f: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637a82: push dword ptr [edi + 0xc] */ { u32 v = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00637a85: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637a88: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x637a8du); f_00830b74();
    /* 00637a8d: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637a90: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x637a95u); f_008321d8();
    /* 00637a95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00637a96: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x637a9bu); f_0082dbac();
    /* 00637a9b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x637aa0u); f_0082d7b0();
    /* 00637aa0: mov edi, dword ptr [edi + 0x2c] */ r_edi = R32((u32)(r_edi+0x2cu));
    /* 00637aa3: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637aa6: push dword ptr [edi + 0xc] */ { u32 v = R32((u32)(r_edi+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00637aa9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00637aab: push dword ptr [edi + 8] */ { u32 v = R32((u32)(r_edi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637aae: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x637ab3u); f_00830b74();
    /* 00637ab3: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637ab6: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x637abbu); f_008321d8();
    /* 00637abb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00637abc: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x637ac1u); f_0082da80();
    /* 00637ac1: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x637ac6u); f_0082dab0();
    /* 00637ac6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x637acbu); f_0082da80();
    /* 00637acb: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x637ad0u); f_0082d7b0();
    /* 00637ad0: mov eax, dword ptr [ebx + 0x34] */ r_eax = R32((u32)(r_ebx+0x34u));
    /* 00637ad3: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00637ad6: mov ebx, dword ptr [edx + 0x30] */ r_ebx = R32((u32)(r_edx+0x30u));
    /* 00637ad9: mov edi, dword ptr [ebx + 0x30] */ r_edi = R32((u32)(r_ebx+0x30u));
    /* 00637adc: mov ebx, dword ptr [edi + 0x30] */ r_ebx = R32((u32)(r_edi+0x30u));
    /* 00637adf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00637ae1: push dword ptr [ebx + 0x10] */ { u32 v = R32((u32)(r_ebx+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637ae4: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00637ae7: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637aea: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x637aefu); f_00830b74();
    /* 00637aef: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637af2: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x637af7u); f_008321d8();
    /* 00637af7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00637af8: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x637afdu); f_0082dbac();
    /* 00637afd: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x637b02u); f_0082d7b0();
    /* 00637b02: mov ebx, dword ptr [ebx + 0x2c] */ r_ebx = R32((u32)(r_ebx+0x2cu));
    /* 00637b05: push dword ptr [ebx + 0x10] */ { u32 v = R32((u32)(r_ebx+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637b08: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00637b0b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00637b0d: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637b10: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x637b15u); f_00830b74();
    /* 00637b15: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637b18: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x637b1du); f_008321d8();
    /* 00637b1d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00637b1e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x637b23u); f_0082d7b0();
    /* 00637b23: mov ebx, dword ptr [ebx + 0x2c] */ r_ebx = R32((u32)(r_ebx+0x2cu));
    /* 00637b26: push dword ptr [ebx + 0x10] */ { u32 v = R32((u32)(r_ebx+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637b29: push dword ptr [ebx + 0xc] */ { u32 v = R32((u32)(r_ebx+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00637b2c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00637b2e: push dword ptr [ebx + 8] */ { u32 v = R32((u32)(r_ebx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637b31: call 0x830b74 */ r_esp -= 4; W32(r_esp, 0x637b36u); f_00830b74();
    /* 00637b36: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637b39: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x637b3eu); f_008321d8();
    /* 00637b3e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00637b3f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x637b44u); f_0082da80();
    /* 00637b44: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x637b49u); f_0082da80();
    /* 00637b49: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x637b4eu); f_0082dab0();
    /* 00637b4e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x637b53u); f_0082da80();
    /* 00637b53: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x637b58u); f_0082da80();
L_00637b58:; BB(0x00637b58);
    /* 00637b58: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00637b59: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00637b5a: ret  */ FN_RET(0x00637914); r_esp += 4; return;
}

void f_00637b5c(void) /* sub_637B5C */
{
    FN_ENTER(0x00637b5c);
    /* 00637b5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637b5d: mov ebp, esp */ r_ebp = r_esp;
    /* 00637b5f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00637b61: push 0x8e4778 */ { u32 v = 0x8e4778u; r_esp -= 4; W32(r_esp, v); }
    /* 00637b66: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00637b6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00637b6d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00637b74: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637b77: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00637b7a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00637b7d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00637b80: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00637b83: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00637b88: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00637b8f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x637b94u); f_008581c5();
    /* 00637b94: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00637b95: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00637b98: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00637b9a: je 0x637bdb */ if (fZ) goto L_00637bdb;
L_00637b9c:; BB(0x00637b9c);
    /* 00637b9c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00637ba3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00637baa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00637bad: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00637baf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00637bb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00637bb1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00637bb2: push 0x9c6508 */ { u32 v = 0x9c6508u; r_esp -= 4; W32(r_esp, v); }
    /* 00637bb7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00637bb9: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x637bbeu); f_005b7a84();
    /* 00637bbe: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00637bc1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00637bc8:; BB(0x00637bc8);
    /* 00637bc8: mov dword ptr [0xa8f12c], eax */ W32((u32)(0xa8f12cu), r_eax);
    /* 00637bcd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637bd0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00637bd7: mov esp, ebp */ r_esp = r_ebp;
    /* 00637bd9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637bda: ret  */ FN_RET(0x00637b5c); r_esp += 4; return;
L_00637bdb:; BB(0x00637bdb);
    /* 00637bdb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00637bdd: jmp 0x637bc8 */ goto L_00637bc8;
}

void f_00637be0(void) /* sub_637BE0 */
{
    FN_ENTER(0x00637be0);
    /* 00637be0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00637be1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00637be3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00637be5: call 0x637c04 */ r_esp -= 4; W32(r_esp, 0x637beau); f_00637c04();
    /* 00637bea: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00637bee: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00637bf0: jne 0x637bf6 */ if (!fZ) goto L_00637bf6;
L_00637bf2:; BB(0x00637bf2);
    /* 00637bf2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00637bf3: ret 4 */ FN_RET(0x00637be0); r_esp += 8; return;
L_00637bf6:; BB(0x00637bf6);
    /* 00637bf6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00637bf7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x637bfcu); f_005c2f74();
    /* 00637bfc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00637bfd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00637bfe: ret 4 */ FN_RET(0x00637be0); r_esp += 8; return;
}

void f_00637c04(void) /* sub_637C04 */
{
    FN_ENTER(0x00637c04);
    /* 00637c04: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637c05: mov ebp, esp */ r_ebp = r_esp;
    /* 00637c07: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00637c09: push 0x8e4794 */ { u32 v = 0x8e4794u; r_esp -= 4; W32(r_esp, v); }
    /* 00637c0e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00637c14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00637c15: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00637c1c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637c1f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00637c22: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00637c25: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00637c28: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00637c2b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00637c2e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00637c31: mov dword ptr [ecx], 0xb2cb70 */ W32((u32)(r_ecx), 0xb2cb70u);
    /* 00637c37: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00637c3e: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x637c43u); f_007ba1f0();
    /* 00637c43: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637c46: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00637c4d: mov esp, ebp */ r_esp = r_ebp;
    /* 00637c4f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637c50: ret  */ FN_RET(0x00637c04); r_esp += 4; return;
}

void f_00637c54(void) /* sub_637C54 */
{
    FN_ENTER(0x00637c54);
    /* 00637c54: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00637c55: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00637c56: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00637c57: mov esi, ecx */ r_esi = r_ecx;
    /* 00637c59: push dword ptr [esi + 0xac] */ { u32 v = R32((u32)(r_esi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 00637c5f: push dword ptr [esi + 0xa8] */ { u32 v = R32((u32)(r_esi+0xa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637c65: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00637c67: mov ecx, esi */ r_ecx = r_esi;
    /* 00637c69: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x637c6cu); call_ind(t); }
    /* 00637c6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00637c6e: je 0x637ce3 */ if (fZ) goto L_00637ce3;
L_00637c70:; BB(0x00637c70);
    /* 00637c70: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x637c75u); f_0082d7b0();
    /* 00637c75: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00637c78: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x637c7du); f_0082d838();
    /* 00637c7d: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00637c80: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00637c82: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x637c87u); f_0082d8bc();
    /* 00637c87: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00637c8a: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x637c8fu); f_00829cc8();
    /* 00637c8f: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 00637c92: mov ebx, dword ptr [eax + 0x2c] */ r_ebx = R32((u32)(r_eax+0x2cu));
    /* 00637c95: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x637c9au); f_0082dbac();
    /* 00637c9a: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00637c9d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00637c9f: mov edi, esi */ r_edi = r_esi;
    /* 00637ca1: mov esi, eax */ r_esi = r_eax;
L_00637ca3:; BB(0x00637ca3);
    /* 00637ca3: movzx edx, byte ptr [esi + edi + 0xa0] */ r_edx = (u32)R8((u32)(r_esi+r_edi+0xa0u));
    /* 00637cab: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00637cae: jne 0x637ccb */ if (!fZ) goto L_00637ccb;
L_00637cb0:; BB(0x00637cb0);
    /* 00637cb0: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x637cb5u); f_0082d7b0();
    /* 00637cb5: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 00637cb8: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x637cbdu); f_0082d838();
    /* 00637cbd: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637cc0: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x637cc5u); f_008321d8();
    /* 00637cc5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00637cc6: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x637ccbu); f_0082da80();
L_00637ccb:; BB(0x00637ccb);
    /* 00637ccb: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 00637cce: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00637cd1: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00637cd4: jl 0x637ca3 */ if ((fS!=fO)) goto L_00637ca3;
L_00637cd6:; BB(0x00637cd6);
    /* 00637cd6: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00637cd9: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x637cdeu); f_0082dab0();
    /* 00637cde: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x637ce3u); f_0082da80();
L_00637ce3:; BB(0x00637ce3);
    /* 00637ce3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00637ce4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00637ce5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00637ce6: ret  */ FN_RET(0x00637c54); r_esp += 4; return;
}

void f_00637ce8(void) /* sub_637CE8 */
{
    FN_ENTER(0x00637ce8);
    /* 00637ce8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00637ce9: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637cec: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00637cee: fld dword ptr [0x933928] */ FPUSH(R_F32((u32)(0x933928u)));
    /* 00637cf4: fcomp dword ptr [ebx + 0x6c] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x6cu))); FPOP();
    /* 00637cf7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00637cf9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00637cfa: jb 0x637db2 */ if (fC) goto L_00637db2;
L_00637d00:; BB(0x00637d00);
    /* 00637d00: movzx edx, byte ptr [ebx + 0xa1] */ r_edx = (u32)R8((u32)(r_ebx+0xa1u));
    /* 00637d07: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00637d09: mov byte ptr [ebx + 0xa3], al */ W8((u32)(r_ebx+0xa3u), (u8)r_eax);
    /* 00637d0f: mov byte ptr [ebx + 0xa2], al */ W8((u32)(r_ebx+0xa2u), (u8)r_eax);
    /* 00637d15: mov byte ptr [ebx + 0xa0], al */ W8((u32)(r_ebx+0xa0u), (u8)r_eax);
    /* 00637d1b: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00637d1e: jne 0x637d68 */ if (!fZ) goto L_00637d68;
L_00637d20:; BB(0x00637d20);
    /* 00637d20: fld dword ptr [ebx + 0x94] */ FPUSH(R_F32((u32)(r_ebx+0x94u)));
    /* 00637d26: fadd dword ptr [ebx + 0xa4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xa4u));
    /* 00637d2c: fstp dword ptr [ebx + 0x94] */ W_F32((u32)(r_ebx+0x94u), ST(0)); FPOP();
    /* 00637d32: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x637d37u); f_008587a5();
    /* 00637d37: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00637d3a: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00637d3d: fdiv dword ptr [0x933924] */ ST(0) = ST(0) / R_F32((u32)(0x933924u));
    /* 00637d43: fcomp dword ptr [ebx + 0x94] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x94u))); FPOP();
    /* 00637d49: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00637d4b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00637d4c: jae 0x637e84 */ if (!fC) goto L_00637e84;
L_00637d52:; BB(0x00637d52);
    /* 00637d52: mov byte ptr [ebx + 0xa1], 0 */ W8((u32)(r_ebx+0xa1u), 0x0u);
    /* 00637d59: mov dword ptr [ebx + 0x94], 0 */ W32((u32)(r_ebx+0x94u), 0x0u);
    /* 00637d63: jmp 0x637e84 */ goto L_00637e84;
L_00637d68:; BB(0x00637d68);
    /* 00637d68: fld dword ptr [ebx + 0x94] */ FPUSH(R_F32((u32)(r_ebx+0x94u)));
    /* 00637d6e: fadd dword ptr [ebx + 0xa4] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xa4u));
    /* 00637d74: fstp dword ptr [ebx + 0x94] */ W_F32((u32)(r_ebx+0x94u), ST(0)); FPOP();
    /* 00637d7a: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x637d7fu); f_008587a5();
    /* 00637d7f: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00637d83: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00637d87: fdiv dword ptr [0x933924] */ ST(0) = ST(0) / R_F32((u32)(0x933924u));
    /* 00637d8d: fcomp dword ptr [ebx + 0x94] */ fx_compare(ST(0), R_F32((u32)(r_ebx+0x94u))); FPOP();
    /* 00637d93: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00637d95: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00637d96: jae 0x637e84 */ if (!fC) goto L_00637e84;
L_00637d9c:; BB(0x00637d9c);
    /* 00637d9c: mov byte ptr [ebx + 0xa1], 1 */ W8((u32)(r_ebx+0xa1u), 0x1u);
    /* 00637da3: mov dword ptr [ebx + 0x94], 0 */ W32((u32)(r_ebx+0x94u), 0x0u);
    /* 00637dad: jmp 0x637e84 */ goto L_00637e84;
L_00637db2:; BB(0x00637db2);
    /* 00637db2: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 00637db6: mov eax, ebx */ r_eax = r_ebx;
    /* 00637db8: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 00637dbc: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 00637dc0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00637dc2: mov esi, ebx */ r_esi = r_ebx;
    /* 00637dc4: mov ebx, eax */ r_ebx = r_eax;
    /* 00637dc6: mov ebp, edx */ r_ebp = r_edx;
L_00637dc8:; BB(0x00637dc8);
    /* 00637dc8: movzx ecx, byte ptr [ebp + esi + 0xa0] */ r_ecx = (u32)R8((u32)(r_ebp+r_esi+0xa0u));
    /* 00637dd0: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00637dd3: jne 0x637e20 */ if (!fZ) goto L_00637e20;
L_00637dd5:; BB(0x00637dd5);
    /* 00637dd5: fld dword ptr [esi + 0xa4] */ FPUSH(R_F32((u32)(r_esi+0xa4u)));
    /* 00637ddb: fadd dword ptr [esi + ebp*4 + 0x90] */ ST(0) = ST(0) + R_F32((u32)(r_esi+r_ebp*4+0x90u));
    /* 00637de2: fstp dword ptr [esi + ebp*4 + 0x90] */ W_F32((u32)(r_esi+r_ebp*4+0x90u), ST(0)); FPOP();
    /* 00637de9: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 00637ded: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x637df2u); f_008587a5();
    /* 00637df2: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00637df6: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00637dfa: fdiv dword ptr [0x933924] */ ST(0) = ST(0) / R_F32((u32)(0x933924u));
    /* 00637e00: fcomp dword ptr [esi + edi*2 + 0x90] */ fx_compare(ST(0), R_F32((u32)(r_esi+r_edi*2+0x90u))); FPOP();
    /* 00637e07: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00637e09: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00637e0a: jae 0x637e69 */ if (!fC) goto L_00637e69;
L_00637e0c:; BB(0x00637e0c);
    /* 00637e0c: mov byte ptr [ebx + 0xa0], 0 */ W8((u32)(r_ebx+0xa0u), 0x0u);
    /* 00637e13: mov dword ptr [esi + edi*2 + 0x90], 0 */ W32((u32)(r_esi+r_edi*2+0x90u), 0x0u);
    /* 00637e1e: jmp 0x637e69 */ goto L_00637e69;
L_00637e20:; BB(0x00637e20);
    /* 00637e20: fld dword ptr [esi + 0xa4] */ FPUSH(R_F32((u32)(r_esi+0xa4u)));
    /* 00637e26: fadd dword ptr [esi + ebp*4 + 0x90] */ ST(0) = ST(0) + R_F32((u32)(r_esi+r_ebp*4+0x90u));
    /* 00637e2d: fstp dword ptr [esi + ebp*4 + 0x90] */ W_F32((u32)(r_esi+r_ebp*4+0x90u), ST(0)); FPOP();
    /* 00637e34: lea edi, [ebp + ebp] */ r_edi = (u32)(r_ebp+r_ebp);
    /* 00637e38: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x637e3du); f_008587a5();
    /* 00637e3d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00637e41: fild dword ptr [esp + 8] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x8u)));
    /* 00637e45: fdiv dword ptr [0x933924] */ ST(0) = ST(0) / R_F32((u32)(0x933924u));
    /* 00637e4b: fcomp dword ptr [esi + edi*2 + 0x90] */ fx_compare(ST(0), R_F32((u32)(r_esi+r_edi*2+0x90u))); FPOP();
    /* 00637e52: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00637e54: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00637e55: jae 0x637e69 */ if (!fC) goto L_00637e69;
L_00637e57:; BB(0x00637e57);
    /* 00637e57: mov byte ptr [ebx + 0xa0], 1 */ W8((u32)(r_ebx+0xa0u), 0x1u);
    /* 00637e5e: mov dword ptr [esi + edi*2 + 0x90], 0 */ W32((u32)(r_esi+r_edi*2+0x90u), 0x0u);
L_00637e69:; BB(0x00637e69);
    /* 00637e69: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00637e6c: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00637e6f: cmp ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00637e72: jl 0x637dc8 */ if ((fS!=fO)) goto L_00637dc8;
L_00637e78:; BB(0x00637e78);
    /* 00637e78: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 00637e7c: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00637e80: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
L_00637e84:; BB(0x00637e84);
    /* 00637e84: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00637e87: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00637e88: ret  */ FN_RET(0x00637ce8); r_esp += 4; return;
}

void f_00637e8c(void) /* sub_637E8C */
{
    FN_ENTER(0x00637e8c);
    /* 00637e8c: mov ecx, dword ptr [0xa8f140] */ r_ecx = R32((u32)(0xa8f140u));
    /* 00637e92: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00637e94: je 0x637ea9 */ if (fZ) goto L_00637ea9;
L_00637e96:; BB(0x00637e96);
    /* 00637e96: je 0x637e9f */ if (fZ) goto L_00637e9f;
L_00637e98:; BB(0x00637e98);
    /* 00637e98: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00637e9a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x637e9fu); f_004066a8();
L_00637e9f:; BB(0x00637e9f);
    /* 00637e9f: mov dword ptr [0xa8f140], 0 */ W32((u32)(0xa8f140u), 0x0u);
L_00637ea9:; BB(0x00637ea9);
    /* 00637ea9: ret  */ FN_RET(0x00637e8c); r_esp += 4; return;
}

void f_00637eac(void)
{
    FN_ENTER(0x00637eac);
    /* 00637eac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637ead: mov ebp, esp */ r_ebp = r_esp;
    /* 00637eaf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00637eb1: push 0x8e47ca */ { u32 v = 0x8e47cau; r_esp -= 4; W32(r_esp, v); }
    /* 00637eb6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00637ebc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00637ebd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00637ec4: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00637ec7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00637eca: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00637ecd: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00637ed0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00637ed3: push 0xb0 */ { u32 v = 0xb0u; r_esp -= 4; W32(r_esp, v); }
    /* 00637ed8: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00637edf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x637ee4u); f_005caba4();
    /* 00637ee4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00637ee7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00637eea: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00637eed: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00637eef: je 0x637fe2 */ if (fZ) goto L_00637fe2;
L_00637ef5:; BB(0x00637ef5);
    /* 00637ef5: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00637efc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00637f03: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637f09: mov ecx, eax */ r_ecx = r_eax;
    /* 00637f0b: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00637f0e: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x637f13u); f_007ba278();
    /* 00637f13: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00637f1a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00637f1d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00637f20: mov dword ptr [ecx], 0xb2cb70 */ W32((u32)(r_ecx), 0xb2cb70u);
    /* 00637f26: mov eax, dword ptr [0x9c6738] */ r_eax = R32((u32)(0x9c6738u));
    /* 00637f2b: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00637f2e: call dword ptr [0xb2cb84] */ { u32 t = R32((u32)(0xb2cb84u)); r_esp -= 4; W32(r_esp, 0x637f34u); call_ind(t); }
    /* 00637f34: mov edx, dword ptr [0xa8f140] */ r_edx = R32((u32)(0xa8f140u));
    /* 00637f3a: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00637f3d: fld dword ptr [0x93392c] */ FPUSH(R_F32((u32)(0x93392cu)));
    /* 00637f43: fadd dword ptr [esi + 0x68] */ ST(0) = ST(0) + R_F32((u32)(r_esi+0x68u));
    /* 00637f46: mov edi, dword ptr [edx + 0x42c] */ r_edi = R32((u32)(r_edx+0x42cu));
    /* 00637f4c: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 00637f4f: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 00637f52: mov ecx, dword ptr [edx + 0x42c] */ r_ecx = R32((u32)(r_edx+0x42cu));
    /* 00637f58: mov ebx, dword ptr [ecx + 0xc] */ r_ebx = R32((u32)(r_ecx+0xcu));
    /* 00637f5b: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 00637f5e: fstp dword ptr [esi + 0xa4] */ W_F32((u32)(r_esi+0xa4u), ST(0)); FPOP();
    /* 00637f64: mov dword ptr [esi + 0xa8], 0x43fa0000 */ W32((u32)(r_esi+0xa8u), 0x43fa0000u);
    /* 00637f6e: or eax, 0x40000000 */ {  u32 a = r_eax; u32 b = 0x40000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00637f73: mov dword ptr [esi + 0x24], ebx */ W32((u32)(r_esi+0x24u), r_ebx);
    /* 00637f76: mov dword ptr [esi + 0xac], 0x42200000 */ W32((u32)(r_esi+0xacu), 0x42200000u);
    /* 00637f80: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00637f83: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00637f85: mov byte ptr [esi + 0xa0], al */ W8((u32)(r_esi+0xa0u), (u8)r_eax);
    /* 00637f8b: mov dword ptr [esi + 0x90], 0 */ W32((u32)(r_esi+0x90u), 0x0u);
    /* 00637f95: mov byte ptr [esi + 0xa1], al */ W8((u32)(r_esi+0xa1u), (u8)r_eax);
    /* 00637f9b: mov byte ptr [esi + 0xa2], al */ W8((u32)(r_esi+0xa2u), (u8)r_eax);
    /* 00637fa1: mov byte ptr [esi + 0xa3], al */ W8((u32)(r_esi+0xa3u), (u8)r_eax);
    /* 00637fa7: mov dword ptr [esi + 0x94], 0 */ W32((u32)(r_esi+0x94u), 0x0u);
    /* 00637fb1: mov dword ptr [esi + 0x98], 0 */ W32((u32)(r_esi+0x98u), 0x0u);
    /* 00637fbb: mov dword ptr [esi + 0x9c], 0 */ W32((u32)(r_esi+0x9cu), 0x0u);
    /* 00637fc5: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
L_00637fc8:; BB(0x00637fc8);
    /* 00637fc8: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00637fcb: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00637fce: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00637fd1: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00637fd4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00637fd7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00637fde: mov esp, ebp */ r_esp = r_ebp;
    /* 00637fe0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00637fe1: ret  */ FN_RET(0x00637eac); r_esp += 4; return;
L_00637fe2:; BB(0x00637fe2);
    /* 00637fe2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00637fe4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00637fe7: jmp 0x637fc8 */ goto L_00637fc8;
}

void f_00637fec(void) /* sub_637FEC */
{
    FN_ENTER(0x00637fec);
    /* 00637fec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00637fed: mov ebp, esp */ r_ebp = r_esp;
    /* 00637fef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00637ff1: push 0x8e47f0 */ { u32 v = 0x8e47f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00637ff6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00637ffc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00637ffd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00638004: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00638007: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063800a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063800d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00638010: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00638013: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00638018: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063801f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x638024u); f_008581c5();
    /* 00638024: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00638025: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00638028: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063802a: je 0x63806b */ if (fZ) goto L_0063806b;
L_0063802c:; BB(0x0063802c);
    /* 0063802c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00638033: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063803a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063803d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063803f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00638040: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00638041: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00638042: push 0x9c6728 */ { u32 v = 0x9c6728u; r_esp -= 4; W32(r_esp, v); }
    /* 00638047: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00638049: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x63804eu); f_005b7a84();
    /* 0063804e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00638051: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00638058:; BB(0x00638058);
    /* 00638058: mov dword ptr [0xa8f140], eax */ W32((u32)(0xa8f140u), r_eax);
    /* 0063805d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00638060: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00638067: mov esp, ebp */ r_esp = r_ebp;
    /* 00638069: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063806a: ret  */ FN_RET(0x00637fec); r_esp += 4; return;
L_0063806b:; BB(0x0063806b);
    /* 0063806b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063806d: jmp 0x638058 */ goto L_00638058;
}

