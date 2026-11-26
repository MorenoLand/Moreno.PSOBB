#include "protos.h"

void f_00639040(void) /* sub_639040 */
{
    FN_ENTER(0x00639040);
    /* 00639040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639041: mov ebp, esp */ r_ebp = r_esp;
    /* 00639043: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00639045: push 0x8e4970 */ { u32 v = 0x8e4970u; r_esp -= 4; W32(r_esp, v); }
    /* 0063904a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00639050: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00639051: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00639058: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063905b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063905e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00639061: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00639064: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00639067: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0063906a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063906d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00639070: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00639073: call 0x62998c */ r_esp -= 4; W32(r_esp, 0x639078u); f_0062998c();
    /* 00639078: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063907f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00639082: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00639085: mov dword ptr [ecx], 0xb2cf40 */ W32((u32)(r_ecx), 0xb2cf40u);
    /* 0063908b: mov eax, dword ptr [0x9c6768] */ r_eax = R32((u32)(0x9c6768u));
    /* 00639090: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00639091: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00639094: call dword ptr [0xb2cf54] */ { u32 t = R32((u32)(0xb2cf54u)); r_esp -= 4; W32(r_esp, 0x63909au); call_ind(t); }
    /* 0063909a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063909d: call 0x6390c0 */ r_esp -= 4; W32(r_esp, 0x6390a2u); f_006390c0();
    /* 006390a2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006390a5: mov dword ptr [eax + 0xec], 0 */ W32((u32)(r_eax+0xecu), 0x0u);
    /* 006390af: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006390b2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006390b9: mov esp, ebp */ r_esp = r_ebp;
    /* 006390bb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006390bc: ret 8 */ FN_RET(0x00639040); r_esp += 12; return;
}

void f_006390c0(void) /* sub_6390C0 */
{
    FN_ENTER(0x006390c0);
    /* 006390c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006390c1: mov edi, ecx */ r_edi = r_ecx;
    /* 006390c3: mov ecx, edi */ r_ecx = r_edi;
    /* 006390c5: call 0x62974c */ r_esp -= 4; W32(r_esp, 0x6390cau); f_0062974c();
    /* 006390ca: fld dword ptr [edi + 0x68] */ FPUSH(R_F32((u32)(r_edi+0x68u)));
    /* 006390cd: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 006390cf: mov eax, dword ptr [edi + 0x88] */ r_eax = R32((u32)(r_edi+0x88u));
    /* 006390d5: fstp dword ptr [edi + 0xe8] */ W_F32((u32)(r_edi+0xe8u), ST(0)); FPOP();
    /* 006390db: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006390de: jl 0x6390ec */ if ((fS!=fO)) goto L_006390ec;
L_006390e0:; BB(0x006390e0);
    /* 006390e0: mov dword ptr [edi + 0xf0], 0 */ W32((u32)(r_edi+0xf0u), 0x0u);
    /* 006390ea: jmp 0x6390f2 */ goto L_006390f2;
L_006390ec:; BB(0x006390ec);
    /* 006390ec: mov dword ptr [edi + 0xf0], eax */ W32((u32)(r_edi+0xf0u), r_eax);
L_006390f2:; BB(0x006390f2);
    /* 006390f2: mov eax, dword ptr [edi + 0x8c] */ r_eax = R32((u32)(r_edi+0x8cu));
    /* 006390f8: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006390fb: mov dword ptr [edi + 0xf4], eax */ W32((u32)(r_edi+0xf4u), r_eax);
    /* 00639101: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00639102: ret  */ FN_RET(0x006390c0); r_esp += 4; return;
}

void f_00639104(void) /* sub_639104 */
{
    FN_ENTER(0x00639104);
    /* 00639104: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00639105: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00639106: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639107: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00639108: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00639109: mov edi, ecx */ r_edi = r_ecx;
    /* 0063910b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063910d: mov ecx, edi */ r_ecx = r_edi;
    /* 0063910f: call dword ptr [eax + 0x58] */ { u32 t = R32((u32)(r_eax+0x58u)); r_esp -= 4; W32(r_esp, 0x639112u); call_ind(t); }
    /* 00639112: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00639114: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00639117: call 0x5c5598 */ r_esp -= 4; W32(r_esp, 0x63911cu); f_005c5598();
    /* 0063911c: mov edx, eax */ r_edx = r_eax;
    /* 0063911e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00639120: mov ebx, eax */ r_ebx = r_eax;
    /* 00639122: mov ebp, edx */ r_ebp = r_edx;
L_00639124:; BB(0x00639124);
    /* 00639124: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639126: je 0x639214 */ if (fZ) goto L_00639214;
L_0063912c:; BB(0x0063912c);
    /* 0063912c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063912d: call 0x5c55a0 */ r_esp -= 4; W32(r_esp, 0x639132u); f_005c55a0();
    /* 00639132: mov esi, eax */ r_esi = r_eax;
    /* 00639134: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00639137: movsx eax, byte ptr [esi + 0xf1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0xf1u));
    /* 0063913e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639140: jne 0x63920c */ if (!fZ) goto L_0063920c;
L_00639146:; BB(0x00639146);
    /* 00639146: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00639149: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0063914c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063914d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063914e: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x639153u); f_007a9180();
    /* 00639153: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00639156: fcomp dword ptr [edi + 0xe8] */ fx_compare(ST(0), R_F32((u32)(r_edi+0xe8u))); FPOP();
    /* 0063915c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063915e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063915f: jae 0x63920c */ if (!fC) goto L_0063920c;
L_00639165:; BB(0x00639165);
    /* 00639165: mov eax, dword ptr [edi + 0xf0] */ r_eax = R32((u32)(r_edi+0xf0u));
    /* 0063916b: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0063916e: ja 0x63920c */ if ((!fC&&!fZ)) goto L_0063920c;
L_00639174:; BB(0x00639174);
    /* 00639174: mov eax, dword ptr [eax*4 + 0x933c1c] */ r_eax = R32((u32)(r_eax*4+0x933c1cu));
    /* 0063917b: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0063920c:; BB(0x0063920c);
    /* 0063920c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0063920f: jmp 0x639124 */ goto L_00639124;
L_00639214:; BB(0x00639214);
    /* 00639214: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00639217: cmp eax, dword ptr [edi + 0xf4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0xf4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063921d: jl 0x639240 */ if ((fS!=fO)) goto L_00639240;
L_0063921f:; BB(0x0063921f);
    /* 0063921f: mov eax, dword ptr [edi + 0xec] */ r_eax = R32((u32)(r_edi+0xecu));
    /* 00639225: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00639227: jne 0x63925b */ if (!fZ) goto L_0063925b;
L_00639229:; BB(0x00639229);
    /* 00639229: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063922b: mov dword ptr [edi + 0xec], 1 */ W32((u32)(r_edi+0xecu), 0x1u);
    /* 00639235: mov ecx, edi */ r_ecx = r_edi;
    /* 00639237: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x63923au); call_ind(t); }
    /* 0063923a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063923b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063923c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063923d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063923e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063923f: ret  */ FN_RET(0x00639104); r_esp += 4; return;
L_00639240:; BB(0x00639240);
    /* 00639240: mov eax, dword ptr [edi + 0xec] */ r_eax = R32((u32)(r_edi+0xecu));
    /* 00639246: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00639248: je 0x63925b */ if (fZ) goto L_0063925b;
L_0063924a:; BB(0x0063924a);
    /* 0063924a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063924c: mov dword ptr [edi + 0xec], 0 */ W32((u32)(r_edi+0xecu), 0x0u);
    /* 00639256: mov ecx, edi */ r_ecx = r_edi;
    /* 00639258: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x63925bu); call_ind(t); }
L_0063925b:; BB(0x0063925b);
    /* 0063925b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063925c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063925d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063925e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063925f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00639260: ret  */ FN_RET(0x00639104); r_esp += 4; return;
}

void f_0063917d(void)
{
    FN_ENTER(0x0063917d);
    goto L_0063917d;
L_00639124:; BB(0x00639124);
    /* 00639124: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639126: je 0x639214 */ if (fZ) goto L_00639214;
L_0063912c:; BB(0x0063912c);
    /* 0063912c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063912d: call 0x5c55a0 */ r_esp -= 4; W32(r_esp, 0x639132u); f_005c55a0();
    /* 00639132: mov esi, eax */ r_esi = r_eax;
    /* 00639134: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00639137: movsx eax, byte ptr [esi + 0xf1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0xf1u));
    /* 0063913e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639140: jne 0x63920c */ if (!fZ) goto L_0063920c;
L_00639146:; BB(0x00639146);
    /* 00639146: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00639149: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0063914c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063914d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063914e: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x639153u); f_007a9180();
    /* 00639153: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00639156: fcomp dword ptr [edi + 0xe8] */ fx_compare(ST(0), R_F32((u32)(r_edi+0xe8u))); FPOP();
    /* 0063915c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063915e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063915f: jae 0x63920c */ if (!fC) goto L_0063920c;
L_00639165:; BB(0x00639165);
    /* 00639165: mov eax, dword ptr [edi + 0xf0] */ r_eax = R32((u32)(r_edi+0xf0u));
    /* 0063916b: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0063916e: ja 0x63920c */ if ((!fC&&!fZ)) goto L_0063920c;
L_00639174:; BB(0x00639174);
    /* 00639174: mov eax, dword ptr [eax*4 + 0x933c1c] */ r_eax = R32((u32)(r_eax*4+0x933c1cu));
    /* 0063917b: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_0063917d:; BB(0x0063917d);
    /* 0063917d: movzx eax, byte ptr [esi + 0xf2] */ r_eax = (u32)R8((u32)(r_esi+0xf2u));
    /* 00639184: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639187: je 0x639261 */ if (fZ) goto L_00639261;
L_0063918d:; BB(0x0063918d);
    /* 0063918d: jmp 0x63920c */ goto L_0063920c;
L_0063920c:; BB(0x0063920c);
    /* 0063920c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0063920f: jmp 0x639124 */ goto L_00639124;
L_00639214:; BB(0x00639214);
    /* 00639214: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00639217: cmp eax, dword ptr [edi + 0xf4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0xf4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063921d: jl 0x639240 */ if ((fS!=fO)) goto L_00639240;
L_0063921f:; BB(0x0063921f);
    /* 0063921f: mov eax, dword ptr [edi + 0xec] */ r_eax = R32((u32)(r_edi+0xecu));
    /* 00639225: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00639227: jne 0x63925b */ if (!fZ) goto L_0063925b;
L_00639229:; BB(0x00639229);
    /* 00639229: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063922b: mov dword ptr [edi + 0xec], 1 */ W32((u32)(r_edi+0xecu), 0x1u);
    /* 00639235: mov ecx, edi */ r_ecx = r_edi;
    /* 00639237: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x63923au); call_ind(t); }
    /* 0063923a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063923b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063923c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063923d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063923e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063923f: ret  */ FN_RET(0x0063917d); r_esp += 4; return;
L_00639240:; BB(0x00639240);
    /* 00639240: mov eax, dword ptr [edi + 0xec] */ r_eax = R32((u32)(r_edi+0xecu));
    /* 00639246: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00639248: je 0x63925b */ if (fZ) goto L_0063925b;
L_0063924a:; BB(0x0063924a);
    /* 0063924a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063924c: mov dword ptr [edi + 0xec], 0 */ W32((u32)(r_edi+0xecu), 0x0u);
    /* 00639256: mov ecx, edi */ r_ecx = r_edi;
    /* 00639258: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x63925bu); call_ind(t); }
L_0063925b:; BB(0x0063925b);
    /* 0063925b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063925c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063925d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063925e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063925f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00639260: ret  */ FN_RET(0x0063917d); r_esp += 4; return;
L_00639261:; BB(0x00639261);
    /* 00639261: mov ecx, esi */ r_ecx = r_esi;
    /* 00639263: call 0x5c4f78 */ r_esp -= 4; W32(r_esp, 0x639268u); f_005c4f78();
    /* 00639268: add dword ptr [esp], eax */ { u32 ad = (u32)(r_esp);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0063926b: jmp 0x63920c */ goto L_0063920c;
}

void f_00639192(void)
{
    FN_ENTER(0x00639192);
    goto L_00639192;
L_00639124:; BB(0x00639124);
    /* 00639124: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639126: je 0x639214 */ if (fZ) goto L_00639214;
L_0063912c:; BB(0x0063912c);
    /* 0063912c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063912d: call 0x5c55a0 */ r_esp -= 4; W32(r_esp, 0x639132u); f_005c55a0();
    /* 00639132: mov esi, eax */ r_esi = r_eax;
    /* 00639134: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00639137: movsx eax, byte ptr [esi + 0xf1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0xf1u));
    /* 0063913e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639140: jne 0x63920c */ if (!fZ) goto L_0063920c;
L_00639146:; BB(0x00639146);
    /* 00639146: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00639149: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0063914c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063914d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063914e: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x639153u); f_007a9180();
    /* 00639153: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00639156: fcomp dword ptr [edi + 0xe8] */ fx_compare(ST(0), R_F32((u32)(r_edi+0xe8u))); FPOP();
    /* 0063915c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063915e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063915f: jae 0x63920c */ if (!fC) goto L_0063920c;
L_00639165:; BB(0x00639165);
    /* 00639165: mov eax, dword ptr [edi + 0xf0] */ r_eax = R32((u32)(r_edi+0xf0u));
    /* 0063916b: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0063916e: ja 0x63920c */ if ((!fC&&!fZ)) goto L_0063920c;
L_00639174:; BB(0x00639174);
    /* 00639174: mov eax, dword ptr [eax*4 + 0x933c1c] */ r_eax = R32((u32)(r_eax*4+0x933c1cu));
    /* 0063917b: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00639192:; BB(0x00639192);
    /* 00639192: movzx eax, byte ptr [esi + 0xf2] */ r_eax = (u32)R8((u32)(r_esi+0xf2u));
    /* 00639199: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063919c: je 0x63926d */ if (fZ) goto L_0063926d;
L_006391a2:; BB(0x006391a2);
    /* 006391a2: jmp 0x63920c */ goto L_0063920c;
L_0063920c:; BB(0x0063920c);
    /* 0063920c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0063920f: jmp 0x639124 */ goto L_00639124;
L_00639214:; BB(0x00639214);
    /* 00639214: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00639217: cmp eax, dword ptr [edi + 0xf4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0xf4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063921d: jl 0x639240 */ if ((fS!=fO)) goto L_00639240;
L_0063921f:; BB(0x0063921f);
    /* 0063921f: mov eax, dword ptr [edi + 0xec] */ r_eax = R32((u32)(r_edi+0xecu));
    /* 00639225: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00639227: jne 0x63925b */ if (!fZ) goto L_0063925b;
L_00639229:; BB(0x00639229);
    /* 00639229: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063922b: mov dword ptr [edi + 0xec], 1 */ W32((u32)(r_edi+0xecu), 0x1u);
    /* 00639235: mov ecx, edi */ r_ecx = r_edi;
    /* 00639237: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x63923au); call_ind(t); }
    /* 0063923a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063923b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063923c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063923d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063923e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063923f: ret  */ FN_RET(0x00639192); r_esp += 4; return;
L_00639240:; BB(0x00639240);
    /* 00639240: mov eax, dword ptr [edi + 0xec] */ r_eax = R32((u32)(r_edi+0xecu));
    /* 00639246: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00639248: je 0x63925b */ if (fZ) goto L_0063925b;
L_0063924a:; BB(0x0063924a);
    /* 0063924a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063924c: mov dword ptr [edi + 0xec], 0 */ W32((u32)(r_edi+0xecu), 0x0u);
    /* 00639256: mov ecx, edi */ r_ecx = r_edi;
    /* 00639258: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x63925bu); call_ind(t); }
L_0063925b:; BB(0x0063925b);
    /* 0063925b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063925c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063925d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063925e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063925f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00639260: ret  */ FN_RET(0x00639192); r_esp += 4; return;
L_0063926d:; BB(0x0063926d);
    /* 0063926d: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 0063926f: mov ecx, esi */ r_ecx = r_esi;
    /* 00639271: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x639277u); call_ind(t); }
    /* 00639277: add dword ptr [esp], eax */ { u32 ad = (u32)(r_esp);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 0063927a: jmp 0x63920c */ goto L_0063920c;
}

void f_006391a4(void)
{
    FN_ENTER(0x006391a4);
    goto L_006391a4;
L_00639124:; BB(0x00639124);
    /* 00639124: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639126: je 0x639214 */ if (fZ) goto L_00639214;
L_0063912c:; BB(0x0063912c);
    /* 0063912c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063912d: call 0x5c55a0 */ r_esp -= 4; W32(r_esp, 0x639132u); f_005c55a0();
    /* 00639132: mov esi, eax */ r_esi = r_eax;
    /* 00639134: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00639137: movsx eax, byte ptr [esi + 0xf1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0xf1u));
    /* 0063913e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639140: jne 0x63920c */ if (!fZ) goto L_0063920c;
L_00639146:; BB(0x00639146);
    /* 00639146: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00639149: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0063914c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063914d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063914e: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x639153u); f_007a9180();
    /* 00639153: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00639156: fcomp dword ptr [edi + 0xe8] */ fx_compare(ST(0), R_F32((u32)(r_edi+0xe8u))); FPOP();
    /* 0063915c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063915e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063915f: jae 0x63920c */ if (!fC) goto L_0063920c;
L_00639165:; BB(0x00639165);
    /* 00639165: mov eax, dword ptr [edi + 0xf0] */ r_eax = R32((u32)(r_edi+0xf0u));
    /* 0063916b: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0063916e: ja 0x63920c */ if ((!fC&&!fZ)) goto L_0063920c;
L_00639174:; BB(0x00639174);
    /* 00639174: mov eax, dword ptr [eax*4 + 0x933c1c] */ r_eax = R32((u32)(r_eax*4+0x933c1cu));
    /* 0063917b: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006391a4:; BB(0x006391a4);
    /* 006391a4: movzx esi, byte ptr [esi + 0xf2] */ r_esi = (u32)R8((u32)(r_esi+0xf2u));
    /* 006391ab: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006391ae: jne 0x63920c */ if (!fZ) goto L_0063920c;
L_006391b0:; BB(0x006391b0);
    /* 006391b0: add dword ptr [esp], 1 */ { u32 ad = (u32)(r_esp);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006391b4: jmp 0x63920c */ goto L_0063920c;
L_0063920c:; BB(0x0063920c);
    /* 0063920c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0063920f: jmp 0x639124 */ goto L_00639124;
L_00639214:; BB(0x00639214);
    /* 00639214: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00639217: cmp eax, dword ptr [edi + 0xf4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0xf4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063921d: jl 0x639240 */ if ((fS!=fO)) goto L_00639240;
L_0063921f:; BB(0x0063921f);
    /* 0063921f: mov eax, dword ptr [edi + 0xec] */ r_eax = R32((u32)(r_edi+0xecu));
    /* 00639225: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00639227: jne 0x63925b */ if (!fZ) goto L_0063925b;
L_00639229:; BB(0x00639229);
    /* 00639229: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063922b: mov dword ptr [edi + 0xec], 1 */ W32((u32)(r_edi+0xecu), 0x1u);
    /* 00639235: mov ecx, edi */ r_ecx = r_edi;
    /* 00639237: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x63923au); call_ind(t); }
    /* 0063923a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063923b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063923c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063923d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063923e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063923f: ret  */ FN_RET(0x006391a4); r_esp += 4; return;
L_00639240:; BB(0x00639240);
    /* 00639240: mov eax, dword ptr [edi + 0xec] */ r_eax = R32((u32)(r_edi+0xecu));
    /* 00639246: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00639248: je 0x63925b */ if (fZ) goto L_0063925b;
L_0063924a:; BB(0x0063924a);
    /* 0063924a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063924c: mov dword ptr [edi + 0xec], 0 */ W32((u32)(r_edi+0xecu), 0x0u);
    /* 00639256: mov ecx, edi */ r_ecx = r_edi;
    /* 00639258: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x63925bu); call_ind(t); }
L_0063925b:; BB(0x0063925b);
    /* 0063925b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063925c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063925d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063925e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063925f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00639260: ret  */ FN_RET(0x006391a4); r_esp += 4; return;
}

void f_006391b6(void)
{
    FN_ENTER(0x006391b6);
    goto L_006391b6;
L_00639124:; BB(0x00639124);
    /* 00639124: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639126: je 0x639214 */ if (fZ) goto L_00639214;
L_0063912c:; BB(0x0063912c);
    /* 0063912c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063912d: call 0x5c55a0 */ r_esp -= 4; W32(r_esp, 0x639132u); f_005c55a0();
    /* 00639132: mov esi, eax */ r_esi = r_eax;
    /* 00639134: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00639137: movsx eax, byte ptr [esi + 0xf1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0xf1u));
    /* 0063913e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639140: jne 0x63920c */ if (!fZ) goto L_0063920c;
L_00639146:; BB(0x00639146);
    /* 00639146: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00639149: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0063914c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063914d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063914e: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x639153u); f_007a9180();
    /* 00639153: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00639156: fcomp dword ptr [edi + 0xe8] */ fx_compare(ST(0), R_F32((u32)(r_edi+0xe8u))); FPOP();
    /* 0063915c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063915e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063915f: jae 0x63920c */ if (!fC) goto L_0063920c;
L_00639165:; BB(0x00639165);
    /* 00639165: mov eax, dword ptr [edi + 0xf0] */ r_eax = R32((u32)(r_edi+0xf0u));
    /* 0063916b: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0063916e: ja 0x63920c */ if ((!fC&&!fZ)) goto L_0063920c;
L_00639174:; BB(0x00639174);
    /* 00639174: mov eax, dword ptr [eax*4 + 0x933c1c] */ r_eax = R32((u32)(r_eax*4+0x933c1cu));
    /* 0063917b: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006391b6:; BB(0x006391b6);
    /* 006391b6: movzx eax, byte ptr [esi + 0xf2] */ r_eax = (u32)R8((u32)(r_esi+0xf2u));
    /* 006391bd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006391c0: je 0x63927c */ if (fZ) goto L_0063927c;
L_006391c6:; BB(0x006391c6);
    /* 006391c6: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_006391c8:; BB(0x006391c8);
    /* 006391c8: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006391cb: jne 0x63920c */ if (!fZ) goto L_0063920c;
L_006391cd:; BB(0x006391cd);
    /* 006391cd: add dword ptr [esp], 1 */ { u32 ad = (u32)(r_esp);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006391d1: jmp 0x63920c */ goto L_0063920c;
L_0063920c:; BB(0x0063920c);
    /* 0063920c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0063920f: jmp 0x639124 */ goto L_00639124;
L_00639214:; BB(0x00639214);
    /* 00639214: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00639217: cmp eax, dword ptr [edi + 0xf4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0xf4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063921d: jl 0x639240 */ if ((fS!=fO)) goto L_00639240;
L_0063921f:; BB(0x0063921f);
    /* 0063921f: mov eax, dword ptr [edi + 0xec] */ r_eax = R32((u32)(r_edi+0xecu));
    /* 00639225: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00639227: jne 0x63925b */ if (!fZ) goto L_0063925b;
L_00639229:; BB(0x00639229);
    /* 00639229: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063922b: mov dword ptr [edi + 0xec], 1 */ W32((u32)(r_edi+0xecu), 0x1u);
    /* 00639235: mov ecx, edi */ r_ecx = r_edi;
    /* 00639237: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x63923au); call_ind(t); }
    /* 0063923a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063923b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063923c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063923d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063923e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063923f: ret  */ FN_RET(0x006391b6); r_esp += 4; return;
L_00639240:; BB(0x00639240);
    /* 00639240: mov eax, dword ptr [edi + 0xec] */ r_eax = R32((u32)(r_edi+0xecu));
    /* 00639246: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00639248: je 0x63925b */ if (fZ) goto L_0063925b;
L_0063924a:; BB(0x0063924a);
    /* 0063924a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063924c: mov dword ptr [edi + 0xec], 0 */ W32((u32)(r_edi+0xecu), 0x0u);
    /* 00639256: mov ecx, edi */ r_ecx = r_edi;
    /* 00639258: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x63925bu); call_ind(t); }
L_0063925b:; BB(0x0063925b);
    /* 0063925b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063925c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063925d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063925e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063925f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00639260: ret  */ FN_RET(0x006391b6); r_esp += 4; return;
L_0063927c:; BB(0x0063927c);
    /* 0063927c: movzx esi, byte ptr [esi + 0xf3] */ r_esi = (u32)R8((u32)(r_esi+0xf3u));
    /* 00639283: cmp esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639286: jne 0x6391c6 */ if (!fZ) goto L_006391c6;
L_0063928c:; BB(0x0063928c);
    /* 0063928c: mov esi, 1 */ r_esi = 0x1u;
    /* 00639291: jmp 0x6391c8 */ goto L_006391c8;
}

void f_006391d3(void)
{
    FN_ENTER(0x006391d3);
    goto L_006391d3;
L_00639124:; BB(0x00639124);
    /* 00639124: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639126: je 0x639214 */ if (fZ) goto L_00639214;
L_0063912c:; BB(0x0063912c);
    /* 0063912c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063912d: call 0x5c55a0 */ r_esp -= 4; W32(r_esp, 0x639132u); f_005c55a0();
    /* 00639132: mov esi, eax */ r_esi = r_eax;
    /* 00639134: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00639137: movsx eax, byte ptr [esi + 0xf1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0xf1u));
    /* 0063913e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639140: jne 0x63920c */ if (!fZ) goto L_0063920c;
L_00639146:; BB(0x00639146);
    /* 00639146: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00639149: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0063914c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063914d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063914e: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x639153u); f_007a9180();
    /* 00639153: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00639156: fcomp dword ptr [edi + 0xe8] */ fx_compare(ST(0), R_F32((u32)(r_edi+0xe8u))); FPOP();
    /* 0063915c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063915e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063915f: jae 0x63920c */ if (!fC) goto L_0063920c;
L_00639165:; BB(0x00639165);
    /* 00639165: mov eax, dword ptr [edi + 0xf0] */ r_eax = R32((u32)(r_edi+0xf0u));
    /* 0063916b: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0063916e: ja 0x63920c */ if ((!fC&&!fZ)) goto L_0063920c;
L_00639174:; BB(0x00639174);
    /* 00639174: mov eax, dword ptr [eax*4 + 0x933c1c] */ r_eax = R32((u32)(r_eax*4+0x933c1cu));
    /* 0063917b: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006391d3:; BB(0x006391d3);
    /* 006391d3: movzx eax, byte ptr [esi + 0xf2] */ r_eax = (u32)R8((u32)(r_esi+0xf2u));
    /* 006391da: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006391dd: je 0x639296 */ if (fZ) goto L_00639296;
L_006391e3:; BB(0x006391e3);
    /* 006391e3: jmp 0x63920c */ goto L_0063920c;
L_0063920c:; BB(0x0063920c);
    /* 0063920c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0063920f: jmp 0x639124 */ goto L_00639124;
L_00639214:; BB(0x00639214);
    /* 00639214: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00639217: cmp eax, dword ptr [edi + 0xf4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0xf4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063921d: jl 0x639240 */ if ((fS!=fO)) goto L_00639240;
L_0063921f:; BB(0x0063921f);
    /* 0063921f: mov eax, dword ptr [edi + 0xec] */ r_eax = R32((u32)(r_edi+0xecu));
    /* 00639225: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00639227: jne 0x63925b */ if (!fZ) goto L_0063925b;
L_00639229:; BB(0x00639229);
    /* 00639229: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063922b: mov dword ptr [edi + 0xec], 1 */ W32((u32)(r_edi+0xecu), 0x1u);
    /* 00639235: mov ecx, edi */ r_ecx = r_edi;
    /* 00639237: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x63923au); call_ind(t); }
    /* 0063923a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063923b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063923c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063923d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063923e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063923f: ret  */ FN_RET(0x006391d3); r_esp += 4; return;
L_00639240:; BB(0x00639240);
    /* 00639240: mov eax, dword ptr [edi + 0xec] */ r_eax = R32((u32)(r_edi+0xecu));
    /* 00639246: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00639248: je 0x63925b */ if (fZ) goto L_0063925b;
L_0063924a:; BB(0x0063924a);
    /* 0063924a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063924c: mov dword ptr [edi + 0xec], 0 */ W32((u32)(r_edi+0xecu), 0x0u);
    /* 00639256: mov ecx, edi */ r_ecx = r_edi;
    /* 00639258: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x63925bu); call_ind(t); }
L_0063925b:; BB(0x0063925b);
    /* 0063925b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063925c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063925d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063925e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063925f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00639260: ret  */ FN_RET(0x006391d3); r_esp += 4; return;
L_00639296:; BB(0x00639296);
    /* 00639296: movzx esi, byte ptr [esi + 0xf3] */ r_esi = (u32)R8((u32)(r_esi+0xf3u));
    /* 0063929d: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006392a0: jne 0x63920c */ if (!fZ) goto L_0063920c;
L_006392a6:; BB(0x006392a6);
    /* 006392a6: add dword ptr [esp], 1 */ { u32 ad = (u32)(r_esp);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006392aa: jmp 0x63920c */ goto L_0063920c;
}

void f_006391e5(void)
{
    FN_ENTER(0x006391e5);
    goto L_006391e5;
L_00639124:; BB(0x00639124);
    /* 00639124: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639126: je 0x639214 */ if (fZ) goto L_00639214;
L_0063912c:; BB(0x0063912c);
    /* 0063912c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063912d: call 0x5c55a0 */ r_esp -= 4; W32(r_esp, 0x639132u); f_005c55a0();
    /* 00639132: mov esi, eax */ r_esi = r_eax;
    /* 00639134: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00639137: movsx eax, byte ptr [esi + 0xf1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0xf1u));
    /* 0063913e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639140: jne 0x63920c */ if (!fZ) goto L_0063920c;
L_00639146:; BB(0x00639146);
    /* 00639146: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00639149: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0063914c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063914d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063914e: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x639153u); f_007a9180();
    /* 00639153: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00639156: fcomp dword ptr [edi + 0xe8] */ fx_compare(ST(0), R_F32((u32)(r_edi+0xe8u))); FPOP();
    /* 0063915c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063915e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063915f: jae 0x63920c */ if (!fC) goto L_0063920c;
L_00639165:; BB(0x00639165);
    /* 00639165: mov eax, dword ptr [edi + 0xf0] */ r_eax = R32((u32)(r_edi+0xf0u));
    /* 0063916b: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0063916e: ja 0x63920c */ if ((!fC&&!fZ)) goto L_0063920c;
L_00639174:; BB(0x00639174);
    /* 00639174: mov eax, dword ptr [eax*4 + 0x933c1c] */ r_eax = R32((u32)(r_eax*4+0x933c1cu));
    /* 0063917b: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006391e5:; BB(0x006391e5);
    /* 006391e5: movzx eax, byte ptr [esi + 0xf2] */ r_eax = (u32)R8((u32)(r_esi+0xf2u));
    /* 006391ec: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006391ef: je 0x6392af */ if (fZ) goto L_006392af;
L_006391f5:; BB(0x006391f5);
    /* 006391f5: jmp 0x63920c */ goto L_0063920c;
L_0063920c:; BB(0x0063920c);
    /* 0063920c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0063920f: jmp 0x639124 */ goto L_00639124;
L_00639214:; BB(0x00639214);
    /* 00639214: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00639217: cmp eax, dword ptr [edi + 0xf4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0xf4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063921d: jl 0x639240 */ if ((fS!=fO)) goto L_00639240;
L_0063921f:; BB(0x0063921f);
    /* 0063921f: mov eax, dword ptr [edi + 0xec] */ r_eax = R32((u32)(r_edi+0xecu));
    /* 00639225: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00639227: jne 0x63925b */ if (!fZ) goto L_0063925b;
L_00639229:; BB(0x00639229);
    /* 00639229: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063922b: mov dword ptr [edi + 0xec], 1 */ W32((u32)(r_edi+0xecu), 0x1u);
    /* 00639235: mov ecx, edi */ r_ecx = r_edi;
    /* 00639237: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x63923au); call_ind(t); }
    /* 0063923a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063923b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063923c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063923d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063923e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063923f: ret  */ FN_RET(0x006391e5); r_esp += 4; return;
L_00639240:; BB(0x00639240);
    /* 00639240: mov eax, dword ptr [edi + 0xec] */ r_eax = R32((u32)(r_edi+0xecu));
    /* 00639246: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00639248: je 0x63925b */ if (fZ) goto L_0063925b;
L_0063924a:; BB(0x0063924a);
    /* 0063924a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063924c: mov dword ptr [edi + 0xec], 0 */ W32((u32)(r_edi+0xecu), 0x0u);
    /* 00639256: mov ecx, edi */ r_ecx = r_edi;
    /* 00639258: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x63925bu); call_ind(t); }
L_0063925b:; BB(0x0063925b);
    /* 0063925b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063925c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063925d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063925e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063925f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00639260: ret  */ FN_RET(0x006391e5); r_esp += 4; return;
L_006392af:; BB(0x006392af);
    /* 006392af: movzx esi, byte ptr [esi + 0xf3] */ r_esi = (u32)R8((u32)(r_esi+0xf3u));
    /* 006392b6: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006392b9: jne 0x63920c */ if (!fZ) goto L_0063920c;
L_006392bf:; BB(0x006392bf);
    /* 006392bf: add dword ptr [esp], 1 */ { u32 ad = (u32)(r_esp);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006392c3: jmp 0x63920c */ goto L_0063920c;
}

void f_006391f7(void)
{
    FN_ENTER(0x006391f7);
    goto L_006391f7;
L_00639124:; BB(0x00639124);
    /* 00639124: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639126: je 0x639214 */ if (fZ) goto L_00639214;
L_0063912c:; BB(0x0063912c);
    /* 0063912c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063912d: call 0x5c55a0 */ r_esp -= 4; W32(r_esp, 0x639132u); f_005c55a0();
    /* 00639132: mov esi, eax */ r_esi = r_eax;
    /* 00639134: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00639137: movsx eax, byte ptr [esi + 0xf1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0xf1u));
    /* 0063913e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639140: jne 0x63920c */ if (!fZ) goto L_0063920c;
L_00639146:; BB(0x00639146);
    /* 00639146: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00639149: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0063914c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063914d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063914e: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x639153u); f_007a9180();
    /* 00639153: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00639156: fcomp dword ptr [edi + 0xe8] */ fx_compare(ST(0), R_F32((u32)(r_edi+0xe8u))); FPOP();
    /* 0063915c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063915e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063915f: jae 0x63920c */ if (!fC) goto L_0063920c;
L_00639165:; BB(0x00639165);
    /* 00639165: mov eax, dword ptr [edi + 0xf0] */ r_eax = R32((u32)(r_edi+0xf0u));
    /* 0063916b: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0063916e: ja 0x63920c */ if ((!fC&&!fZ)) goto L_0063920c;
L_00639174:; BB(0x00639174);
    /* 00639174: mov eax, dword ptr [eax*4 + 0x933c1c] */ r_eax = R32((u32)(r_eax*4+0x933c1cu));
    /* 0063917b: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_006391f7:; BB(0x006391f7);
    /* 006391f7: movzx esi, byte ptr [esi + 0xf2] */ r_esi = (u32)R8((u32)(r_esi+0xf2u));
    /* 006391fe: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639200: jne 0x63920c */ if (!fZ) goto L_0063920c;
L_00639202:; BB(0x00639202);
    /* 00639202: add dword ptr [esp], 1 */ { u32 ad = (u32)(r_esp);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 00639206: jmp 0x63920c */ goto L_0063920c;
L_0063920c:; BB(0x0063920c);
    /* 0063920c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0063920f: jmp 0x639124 */ goto L_00639124;
L_00639214:; BB(0x00639214);
    /* 00639214: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00639217: cmp eax, dword ptr [edi + 0xf4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0xf4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063921d: jl 0x639240 */ if ((fS!=fO)) goto L_00639240;
L_0063921f:; BB(0x0063921f);
    /* 0063921f: mov eax, dword ptr [edi + 0xec] */ r_eax = R32((u32)(r_edi+0xecu));
    /* 00639225: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00639227: jne 0x63925b */ if (!fZ) goto L_0063925b;
L_00639229:; BB(0x00639229);
    /* 00639229: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063922b: mov dword ptr [edi + 0xec], 1 */ W32((u32)(r_edi+0xecu), 0x1u);
    /* 00639235: mov ecx, edi */ r_ecx = r_edi;
    /* 00639237: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x63923au); call_ind(t); }
    /* 0063923a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063923b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063923c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063923d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063923e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063923f: ret  */ FN_RET(0x006391f7); r_esp += 4; return;
L_00639240:; BB(0x00639240);
    /* 00639240: mov eax, dword ptr [edi + 0xec] */ r_eax = R32((u32)(r_edi+0xecu));
    /* 00639246: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00639248: je 0x63925b */ if (fZ) goto L_0063925b;
L_0063924a:; BB(0x0063924a);
    /* 0063924a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063924c: mov dword ptr [edi + 0xec], 0 */ W32((u32)(r_edi+0xecu), 0x0u);
    /* 00639256: mov ecx, edi */ r_ecx = r_edi;
    /* 00639258: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x63925bu); call_ind(t); }
L_0063925b:; BB(0x0063925b);
    /* 0063925b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063925c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063925d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063925e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063925f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00639260: ret  */ FN_RET(0x006391f7); r_esp += 4; return;
}

void f_00639208(void)
{
    FN_ENTER(0x00639208);
    goto L_00639208;
L_00639124:; BB(0x00639124);
    /* 00639124: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639126: je 0x639214 */ if (fZ) goto L_00639214;
L_0063912c:; BB(0x0063912c);
    /* 0063912c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063912d: call 0x5c55a0 */ r_esp -= 4; W32(r_esp, 0x639132u); f_005c55a0();
    /* 00639132: mov esi, eax */ r_esi = r_eax;
    /* 00639134: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00639137: movsx eax, byte ptr [esi + 0xf1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0xf1u));
    /* 0063913e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639140: jne 0x63920c */ if (!fZ) goto L_0063920c;
L_00639146:; BB(0x00639146);
    /* 00639146: lea edx, [esi + 0x38] */ r_edx = (u32)(r_esi+0x38u);
    /* 00639149: lea eax, [edi + 0x38] */ r_eax = (u32)(r_edi+0x38u);
    /* 0063914c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063914d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063914e: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x639153u); f_007a9180();
    /* 00639153: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00639156: fcomp dword ptr [edi + 0xe8] */ fx_compare(ST(0), R_F32((u32)(r_edi+0xe8u))); FPOP();
    /* 0063915c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0063915e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0063915f: jae 0x63920c */ if (!fC) goto L_0063920c;
L_00639165:; BB(0x00639165);
    /* 00639165: mov eax, dword ptr [edi + 0xf0] */ r_eax = R32((u32)(r_edi+0xf0u));
    /* 0063916b: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0063916e: ja 0x63920c */ if ((!fC&&!fZ)) goto L_0063920c;
L_00639174:; BB(0x00639174);
    /* 00639174: mov eax, dword ptr [eax*4 + 0x933c1c] */ r_eax = R32((u32)(r_eax*4+0x933c1cu));
    /* 0063917b: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00639208:; BB(0x00639208);
    /* 00639208: add dword ptr [esp], 1 */ { u32 ad = (u32)(r_esp);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_0063920c:; BB(0x0063920c);
    /* 0063920c: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0063920f: jmp 0x639124 */ goto L_00639124;
L_00639214:; BB(0x00639214);
    /* 00639214: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00639217: cmp eax, dword ptr [edi + 0xf4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0xf4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063921d: jl 0x639240 */ if ((fS!=fO)) goto L_00639240;
L_0063921f:; BB(0x0063921f);
    /* 0063921f: mov eax, dword ptr [edi + 0xec] */ r_eax = R32((u32)(r_edi+0xecu));
    /* 00639225: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00639227: jne 0x63925b */ if (!fZ) goto L_0063925b;
L_00639229:; BB(0x00639229);
    /* 00639229: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063922b: mov dword ptr [edi + 0xec], 1 */ W32((u32)(r_edi+0xecu), 0x1u);
    /* 00639235: mov ecx, edi */ r_ecx = r_edi;
    /* 00639237: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x63923au); call_ind(t); }
    /* 0063923a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063923b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063923c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063923d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063923e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0063923f: ret  */ FN_RET(0x00639208); r_esp += 4; return;
L_00639240:; BB(0x00639240);
    /* 00639240: mov eax, dword ptr [edi + 0xec] */ r_eax = R32((u32)(r_edi+0xecu));
    /* 00639246: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00639248: je 0x63925b */ if (fZ) goto L_0063925b;
L_0063924a:; BB(0x0063924a);
    /* 0063924a: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0063924c: mov dword ptr [edi + 0xec], 0 */ W32((u32)(r_edi+0xecu), 0x0u);
    /* 00639256: mov ecx, edi */ r_ecx = r_edi;
    /* 00639258: call dword ptr [eax + 0x4c] */ { u32 t = R32((u32)(r_eax+0x4cu)); r_esp -= 4; W32(r_esp, 0x63925bu); call_ind(t); }
L_0063925b:; BB(0x0063925b);
    /* 0063925b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063925c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063925d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063925e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063925f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00639260: ret  */ FN_RET(0x00639208); r_esp += 4; return;
}

void f_006392c8(void) /* sub_6392C8 */
{
    FN_ENTER(0x006392c8);
    /* 006392c8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006392c9: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006392cc: mov edi, ecx */ r_edi = r_ecx;
    /* 006392ce: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x6392d3u); f_004f7c84();
    /* 006392d3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006392d6: je 0x6392dd */ if (fZ) goto L_006392dd;
L_006392d8:; BB(0x006392d8);
    /* 006392d8: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006392db: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006392dc: ret  */ FN_RET(0x006392c8); r_esp += 4; return;
L_006392dd:; BB(0x006392dd);
    /* 006392dd: mov dword ptr [esp + 0xc], 0x3e99999a */ W32((u32)(r_esp+0xcu), 0x3e99999au);
    /* 006392e5: mov dword ptr [esp + 0x10], 0x3e99999a */ W32((u32)(r_esp+0x10u), 0x3e99999au);
    /* 006392ed: mov dword ptr [esp + 0x14], 0x3e99999a */ W32((u32)(r_esp+0x14u), 0x3e99999au);
    /* 006392f5: mov dword ptr [esp + 0x18], 0 */ W32((u32)(r_esp+0x18u), 0x0u);
    /* 006392fd: push dword ptr [edi + 0xe8] */ { u32 v = R32((u32)(r_edi+0xe8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00639303: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x639308u); f_0082dc9c();
    /* 00639308: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 0063930c: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00639310: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00639314: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00639317: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 0063931a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x63931fu); f_0061cdb0();
    /* 0063931f: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00639322: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00639323: ret  */ FN_RET(0x006392c8); r_esp += 4; return;
}

void f_00639324(void) /* sub_639324 */
{
    FN_ENTER(0x00639324);
    /* 00639324: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00639325: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00639327: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00639329: call 0x639348 */ r_esp -= 4; W32(r_esp, 0x63932eu); f_00639348();
    /* 0063932e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00639332: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00639334: jne 0x63933a */ if (!fZ) goto L_0063933a;
L_00639336:; BB(0x00639336);
    /* 00639336: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00639337: ret 4 */ FN_RET(0x00639324); r_esp += 8; return;
L_0063933a:; BB(0x0063933a);
    /* 0063933a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063933b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x639340u); f_005c2f74();
    /* 00639340: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00639341: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00639342: ret 4 */ FN_RET(0x00639324); r_esp += 8; return;
}

void f_00639348(void) /* sub_639348 */
{
    FN_ENTER(0x00639348);
    /* 00639348: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639349: mov ebp, esp */ r_ebp = r_esp;
    /* 0063934b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063934d: push 0x8e498c */ { u32 v = 0x8e498cu; r_esp -= 4; W32(r_esp, v); }
    /* 00639352: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00639358: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00639359: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00639360: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00639363: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00639366: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00639369: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063936c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063936f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00639372: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00639379: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063937c: mov eax, dword ptr [ecx + 0x98] */ r_eax = R32((u32)(r_ecx+0x98u));
    /* 00639382: mov dword ptr [ecx], 0xb2d038 */ W32((u32)(r_ecx), 0xb2d038u);
    /* 00639388: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063938a: jne 0x6393a7 */ if (!fZ) goto L_006393a7;
L_0063938c:; BB(0x0063938c);
    /* 0063938c: movzx edx, word ptr [ecx + 0xa8] */ r_edx = (u32)R16((u32)(r_ecx+0xa8u));
    /* 00639393: movsx eax, word ptr [ecx + 0xb4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0xb4u));
    /* 0063939a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063939b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063939c: call 0x816e78 */ r_esp -= 4; W32(r_esp, 0x6393a1u); f_00816e78();
    /* 006393a1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006393a4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_006393a7:; BB(0x006393a7);
    /* 006393a7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006393ae: call 0x7ba1f0 */ r_esp -= 4; W32(r_esp, 0x6393b3u); f_007ba1f0();
    /* 006393b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006393b6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006393bd: mov esp, ebp */ r_esp = r_ebp;
    /* 006393bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006393c0: ret  */ FN_RET(0x00639348); r_esp += 4; return;
}

void f_006393c4(void)
{
    FN_ENTER(0x006393c4);
    /* 006393c4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006393c5: mov ebp, esp */ r_ebp = r_esp;
    /* 006393c7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006393c9: push 0x8e49b4 */ { u32 v = 0x8e49b4u; r_esp -= 4; W32(r_esp, v); }
    /* 006393ce: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006393d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006393d5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006393dc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006393df: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006393e2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006393e5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006393e8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006393eb: push 0xb8 */ { u32 v = 0xb8u; r_esp -= 4; W32(r_esp, v); }
    /* 006393f0: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006393f7: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6393fcu); f_005caba4();
    /* 006393fc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006393fd: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00639400: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639402: je 0x63943b */ if (fZ) goto L_0063943b;
L_00639404:; BB(0x00639404);
    /* 00639404: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063940b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00639412: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00639415: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063941b: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063941e: call 0x639440 */ r_esp -= 4; W32(r_esp, 0x639423u); f_00639440();
    /* 00639423: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00639426: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0063942d:; BB(0x0063942d);
    /* 0063942d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00639430: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00639437: mov esp, ebp */ r_esp = r_ebp;
    /* 00639439: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063943a: ret  */ FN_RET(0x006393c4); r_esp += 4; return;
L_0063943b:; BB(0x0063943b);
    /* 0063943b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063943d: jmp 0x63942d */ goto L_0063942d;
}

void f_00639440(void) /* sub_639440 */
{
    FN_ENTER(0x00639440);
    /* 00639440: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00639441: mov ebp, esp */ r_ebp = r_esp;
    /* 00639443: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00639445: push 0x8e49d0 */ { u32 v = 0x8e49d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0063944a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00639450: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00639451: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00639458: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063945b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063945e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00639461: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00639464: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00639467: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0063946a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063946d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00639470: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00639473: call 0x7ba278 */ r_esp -= 4; W32(r_esp, 0x639478u); f_007ba278();
    /* 00639478: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063947f: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00639482: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00639485: mov dword ptr [ecx], 0xb2d038 */ W32((u32)(r_ecx), 0xb2d038u);
    /* 0063948b: mov eax, dword ptr [0x9c676c] */ r_eax = R32((u32)(0x9c676cu));
    /* 00639490: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00639491: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00639494: call dword ptr [0xb2d04c] */ { u32 t = R32((u32)(0xb2d04cu)); r_esp -= 4; W32(r_esp, 0x63949au); call_ind(t); }
    /* 0063949a: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063949d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063949f: mov dword ptr [edx + 0x90], eax */ W32((u32)(r_edx+0x90u), r_eax);
    /* 006394a5: mov dword ptr [edx + 0x94], eax */ W32((u32)(r_edx+0x94u), r_eax);
    /* 006394ab: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 006394ae: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006394b1: jb 0x6394bf */ if (fC) goto L_006394bf;
L_006394b3:; BB(0x006394b3);
    /* 006394b3: mov dword ptr [edx + 0x98], 1 */ W32((u32)(r_edx+0x98u), 0x1u);
    /* 006394bd: jmp 0x6394c5 */ goto L_006394c5;
L_006394bf:; BB(0x006394bf);
    /* 006394bf: mov dword ptr [edx + 0x98], eax */ W32((u32)(r_edx+0x98u), r_eax);
L_006394c5:; BB(0x006394c5);
    /* 006394c5: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 006394c8: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006394cb: jle 0x6394d9 */ if ((fZ||fS!=fO)) goto L_006394d9;
L_006394cd:; BB(0x006394cd);
    /* 006394cd: mov dword ptr [edx + 0x9c], 0 */ W32((u32)(r_edx+0x9cu), 0x0u);
    /* 006394d7: jmp 0x6394df */ goto L_006394df;
L_006394d9:; BB(0x006394d9);
    /* 006394d9: mov dword ptr [edx + 0x9c], eax */ W32((u32)(r_edx+0x9cu), r_eax);
L_006394df:; BB(0x006394df);
    /* 006394df: mov ecx, dword ptr [edx + 0x64] */ r_ecx = R32((u32)(r_edx+0x64u));
    /* 006394e2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006394e4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006394e6: jg 0x6394ea */ if ((!fZ&&fS==fO)) goto L_006394ea;
L_006394e8:; BB(0x006394e8);
    /* 006394e8: mov ecx, eax */ r_ecx = r_eax;
L_006394ea:; BB(0x006394ea);
    /* 006394ea: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006394f1: mov dword ptr [edx + 0xa0], ecx */ W32((u32)(r_edx+0xa0u), r_ecx);
    /* 006394f7: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 006394fa: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006394fc: mov esi, ebx */ r_esi = r_ebx;
    /* 006394fe: sar esi, 1 */ { u32 c = (1u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00639500: shr esi, 0x1e */ { u32 c = (30u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00639503: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00639505: sar esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00639508: mov dword ptr [edx + 0xa4], esi */ W32((u32)(r_edx+0xa4u), r_esi);
    /* 0063950e: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00639513: jl 0x63952a */ if ((fS!=fO)) goto L_0063952a;
L_00639515:; BB(0x00639515);
    /* 00639515: mov byte ptr [edx + 0xb0], 0 */ W8((u32)(r_edx+0xb0u), 0x0u);
    /* 0063951c: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00639521: mov word ptr [edx + 0xa8], ax */ W16((u32)(r_edx+0xa8u), (u16)r_eax);
    /* 00639528: jmp 0x639541 */ goto L_00639541;
L_0063952a:; BB(0x0063952a);
    /* 0063952a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063952b: mov word ptr [edx + 0xa8], ax */ W16((u32)(r_edx+0xa8u), (u16)r_eax);
    /* 00639532: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x639537u); f_00816eec();
    /* 00639537: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00639538: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063953b: mov byte ptr [edx + 0xb0], al */ W8((u32)(r_edx+0xb0u), (u8)r_eax);
L_00639541:; BB(0x00639541);
    /* 00639541: lea eax, [edx + 0xaa] */ r_eax = (u32)(r_edx+0xaau);
    /* 00639547: mov edx, dword ptr [edx + 0x84] */ r_edx = R32((u32)(r_edx+0x84u));
    /* 0063954d: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00639553: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00639556: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063955c: jl 0x639568 */ if ((fS!=fO)) goto L_00639568;
L_0063955e:; BB(0x0063955e);
    /* 0063955e: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 00639563: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 00639566: jmp 0x63956b */ goto L_0063956b;
L_00639568:; BB(0x00639568);
    /* 00639568: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
L_0063956b:; BB(0x0063956b);
    /* 0063956b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0063956e: mov edx, dword ptr [edx + 0x88] */ r_edx = R32((u32)(r_edx+0x88u));
    /* 00639574: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0063957a: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0063957d: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00639583: jl 0x639590 */ if ((fS!=fO)) goto L_00639590;
L_00639585:; BB(0x00639585);
    /* 00639585: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 0063958a: mov word ptr [eax + 2], dx */ W16((u32)(r_eax+0x2u), (u16)r_edx);
    /* 0063958e: jmp 0x639594 */ goto L_00639594;
L_00639590:; BB(0x00639590);
    /* 00639590: mov word ptr [eax + 2], dx */ W16((u32)(r_eax+0x2u), (u16)r_edx);
L_00639594:; BB(0x00639594);
    /* 00639594: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00639597: mov edx, dword ptr [edx + 0x8c] */ r_edx = R32((u32)(r_edx+0x8cu));
    /* 0063959d: and edx, 0xffff0000 */ {  u32 a = r_edx; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006395a3: shr edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 006395a6: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006395ac: jl 0x6395b9 */ if ((fS!=fO)) goto L_006395b9;
L_006395ae:; BB(0x006395ae);
    /* 006395ae: mov edx, 0xffff */ r_edx = 0xffffu;
    /* 006395b3: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 006395b7: jmp 0x6395bd */ goto L_006395bd;
L_006395b9:; BB(0x006395b9);
    /* 006395b9: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
L_006395bd:; BB(0x006395bd);
    /* 006395bd: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 006395c3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006395c6: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 006395c9: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006395cc: mov dword ptr [eax + 0xb4], edx */ W32((u32)(r_eax+0xb4u), r_edx);
    /* 006395d2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006395d5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006395dc: mov esp, ebp */ r_esp = r_ebp;
    /* 006395de: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006395df: ret 8 */ FN_RET(0x00639440); r_esp += 12; return;
}

void f_006395e4(void) /* sub_6395E4 */
{
    FN_ENTER(0x006395e4);
    /* 006395e4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006395e5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006395e8: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 006395ec: movzx eax, byte ptr [ebx + 8] */ r_eax = (u32)R8((u32)(r_ebx+0x8u));
    /* 006395f0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006395f3: je 0x639698 */ if (fZ) goto L_00639698;
L_006395f9:; BB(0x006395f9);
    /* 006395f9: movsx edx, word ptr [ebx + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x4u));
    /* 006395fd: cmp edx, dword ptr [0xaafca0] */ {  u32 a = r_edx; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639603: je 0x639615 */ if (fZ) goto L_00639615;
L_00639605:; BB(0x00639605);
    /* 00639605: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00639606: movzx eax, word ptr [ebx + 6] */ r_eax = (u32)R16((u32)(r_ebx+0x6u));
    /* 0063960a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063960b: call 0x816e78 */ r_esp -= 4; W32(r_esp, 0x639610u); f_00816e78();
    /* 00639610: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00639613: jmp 0x63962b */ goto L_0063962b;
L_00639615:; BB(0x00639615);
    /* 00639615: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00639616: movzx eax, word ptr [ebx + 6] */ r_eax = (u32)R16((u32)(r_ebx+0x6u));
    /* 0063961a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063961b: call 0x816f04 */ r_esp -= 4; W32(r_esp, 0x639620u); f_00816f04();
    /* 00639620: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00639623: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00639626: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639629: je 0x639630 */ if (fZ) goto L_00639630;
L_0063962b:; BB(0x0063962b);
    /* 0063962b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0063962e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063962f: ret  */ FN_RET(0x006395e4); r_esp += 4; return;
L_00639630:; BB(0x00639630);
    /* 00639630: mov eax, dword ptr [0xaca350] */ r_eax = R32((u32)(0xaca350u));
    /* 00639635: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 00639638: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063963a: je 0x63962b */ if (fZ) goto L_0063962b;
L_0063963c:; BB(0x0063963c);
    /* 0063963c: mov ecx, dword ptr [0x9c676c] */ r_ecx = R32((u32)(0x9c676cu));
    /* 00639642: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00639646: mov esi, eax */ r_esi = r_eax;
    /* 00639648: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_0063964b:; BB(0x0063964b);
    /* 0063964b: cmp ecx, dword ptr [esi + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063964e: jne 0x639688 */ if (!fZ) goto L_00639688;
L_00639650:; BB(0x00639650);
    /* 00639650: movzx edx, word ptr [ebx + 6] */ r_edx = (u32)R16((u32)(r_ebx+0x6u));
    /* 00639654: movsx eax, word ptr [ebx + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x4u));
    /* 00639658: movzx edi, word ptr [esi + 0xa8] */ r_edi = (u32)R16((u32)(r_esi+0xa8u));
    /* 0063965f: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639661: jne 0x639688 */ if (!fZ) goto L_00639688;
L_00639663:; BB(0x00639663);
    /* 00639663: cmp eax, dword ptr [esi + 0xb4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0xb4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639669: jne 0x639688 */ if (!fZ) goto L_00639688;
L_0063966b:; BB(0x0063966b);
    /* 0063966b: mov edi, dword ptr [esi + 0x90] */ r_edi = R32((u32)(r_esi+0x90u));
    /* 00639671: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639673: jne 0x639688 */ if (!fZ) goto L_00639688;
L_00639675:; BB(0x00639675);
    /* 00639675: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00639679: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0063967c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063967d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063967e: call 0x816e78 */ r_esp -= 4; W32(r_esp, 0x639683u); f_00816e78();
    /* 00639683: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00639686: jmp 0x63962b */ goto L_0063962b;
L_00639688:; BB(0x00639688);
    /* 00639688: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 0063968b: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063968d: jne 0x63964b */ if (!fZ) goto L_0063964b;
L_0063968f:; BB(0x0063968f);
    /* 0063968f: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00639693: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00639696: jmp 0x63962b */ goto L_0063962b;
L_00639698:; BB(0x00639698);
    /* 00639698: movzx eax, word ptr [ebx + 6] */ r_eax = (u32)R16((u32)(r_ebx+0x6u));
    /* 0063969c: movsx ebx, word ptr [ebx + 4] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_ebx+0x4u));
    /* 006396a0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006396a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006396a2: call 0x816df0 */ r_esp -= 4; W32(r_esp, 0x6396a7u); f_00816df0();
    /* 006396a7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006396aa: jmp 0x63962b */ goto L_0063962b;
}

void f_006396b0(void) /* sub_6396B0 */
{
    FN_ENTER(0x006396b0);
    /* 006396b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006396b1: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006396b4: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006396b6: mov eax, dword ptr [ebp + 0x90] */ r_eax = R32((u32)(r_ebp+0x90u));
    /* 006396bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006396be: jne 0x6396f4 */ if (!fZ) goto L_006396f4;
L_006396c0:; BB(0x006396c0);
    /* 006396c0: movzx eax, word ptr [ebp + 0xa8] */ r_eax = (u32)R16((u32)(r_ebp+0xa8u));
    /* 006396c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006396c8: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x6396cdu); f_00816eec();
    /* 006396cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006396ce: movzx edx, byte ptr [ebp + 0xb0] */ r_edx = (u32)R8((u32)(r_ebp+0xb0u));
    /* 006396d5: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006396d8: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006396da: je 0x6397eb */ if (fZ) goto L_006397eb;
L_006396e0:; BB(0x006396e0);
    /* 006396e0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006396e3: je 0x6397f0 */ if (fZ) goto L_006397f0;
L_006396e9:; BB(0x006396e9);
    /* 006396e9: mov byte ptr [ebp + 0xb0], al */ W8((u32)(r_ebp+0xb0u), (u8)r_eax);
    /* 006396ef: jmp 0x6397eb */ goto L_006397eb;
L_006396f4:; BB(0x006396f4);
    /* 006396f4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006396f7: jne 0x6397eb */ if (!fZ) goto L_006397eb;
L_006396fd:; BB(0x006396fd);
    /* 006396fd: mov eax, dword ptr [ebp + 0x9c] */ r_eax = R32((u32)(r_ebp+0x9cu));
    /* 00639703: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639706: je 0x63981f */ if (fZ) goto L_0063981f;
L_0063970c:; BB(0x0063970c);
    /* 0063970c: mov ecx, dword ptr [ebp + 0x94] */ r_ecx = R32((u32)(r_ebp+0x94u));
L_00639712:; BB(0x00639712);
    /* 00639712: cmp ecx, dword ptr [ebp + 0xa0] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xa0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639718: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 0063971b: mov dword ptr [ebp + 0x94], eax */ W32((u32)(r_ebp+0x94u), r_eax);
    /* 00639721: jne 0x6397eb */ if (!fZ) goto L_006397eb;
L_00639727:; BB(0x00639727);
    /* 00639727: mov eax, dword ptr [ebp + 0x98] */ r_eax = R32((u32)(r_ebp+0x98u));
    /* 0063972d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063972f: jne 0x639786 */ if (!fZ) goto L_00639786;
L_00639731:; BB(0x00639731);
    /* 00639731: movzx edx, word ptr [ebp + 0xa8] */ r_edx = (u32)R16((u32)(r_ebp+0xa8u));
    /* 00639738: cmp edx, 0x100 */ {  u32 a = r_edx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063973e: jge 0x6397e1 */ if ((fS==fO)) goto L_006397e1;
L_00639744:; BB(0x00639744);
    /* 00639744: mov eax, dword ptr [ebp + 0xb4] */ r_eax = R32((u32)(r_ebp+0xb4u));
    /* 0063974a: mov byte ptr [esp + 0xc], 0x93 */ W8((u32)(r_esp+0xcu), 0x93u);
    /* 0063974f: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 00639754: mov byte ptr [esp + 0xd], 3 */ W8((u32)(r_esp+0xdu), 0x3u);
    /* 00639759: mov word ptr [esp + 0x12], dx */ W16((u32)(r_esp+0x12u), (u16)r_edx);
    /* 0063975e: mov byte ptr [esp + 0x14], 0 */ W8((u32)(r_esp+0x14u), 0x0u);
    /* 00639763: lea ecx, [esp + 0xc] */ r_ecx = (u32)(r_esp+0xcu);
    /* 00639767: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x63976cu); f_008003e0();
    /* 0063976c: movzx edx, word ptr [ebp + 0xa8] */ r_edx = (u32)R16((u32)(r_ebp+0xa8u));
    /* 00639773: movsx eax, word ptr [ebp + 0xb4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xb4u));
    /* 0063977a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063977b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0063977c: call 0x816e78 */ r_esp -= 4; W32(r_esp, 0x639781u); f_00816e78();
    /* 00639781: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00639784: jmp 0x6397e1 */ goto L_006397e1;
L_00639786:; BB(0x00639786);
    /* 00639786: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 0063978a: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 0063978e: lea edx, [ebp + 0xaa] */ r_edx = (u32)(r_ebp+0xaau);
    /* 00639794: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00639796: mov ebx, eax */ r_ebx = r_eax;
    /* 00639798: mov esi, edx */ r_esi = r_edx;
L_0063979a:; BB(0x0063979a);
    /* 0063979a: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
    /* 0063979d: cmp ecx, 0x100 */ {  u32 a = r_ecx; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006397a3: jge 0x6397ce */ if ((fS==fO)) goto L_006397ce;
L_006397a5:; BB(0x006397a5);
    /* 006397a5: mov ecx, dword ptr [ebp + 0xb4] */ r_ecx = R32((u32)(r_ebp+0xb4u));
    /* 006397ab: mov byte ptr [esp], 0x93 */ W8((u32)(r_esp), 0x93u);
    /* 006397af: mov word ptr [esp + 4], cx */ W16((u32)(r_esp+0x4u), (u16)r_ecx);
    /* 006397b4: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 006397b9: movzx ecx, word ptr [esi] */ r_ecx = (u32)R16((u32)(r_esi));
    /* 006397bc: mov word ptr [esp + 6], cx */ W16((u32)(r_esp+0x6u), (u16)r_ecx);
    /* 006397c1: mov byte ptr [esp + 8], 1 */ W8((u32)(r_esp+0x8u), 0x1u);
    /* 006397c6: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006397c9: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6397ceu); f_008003e0();
L_006397ce:; BB(0x006397ce);
    /* 006397ce: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006397d1: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006397d4: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006397d7: jl 0x63979a */ if ((fS!=fO)) goto L_0063979a;
L_006397d9:; BB(0x006397d9);
    /* 006397d9: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 006397dd: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
L_006397e1:; BB(0x006397e1);
    /* 006397e1: mov dword ptr [ebp + 0x90], 0 */ W32((u32)(r_ebp+0x90u), 0x0u);
L_006397eb:; BB(0x006397eb);
    /* 006397eb: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006397ee: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006397ef: ret  */ FN_RET(0x006396b0); r_esp += 4; return;
L_006397f0:; BB(0x006397f0);
    /* 006397f0: mov edx, dword ptr [ebp + 0x98] */ r_edx = R32((u32)(r_ebp+0x98u));
    /* 006397f6: mov dword ptr [ebp + 0x90], 1 */ W32((u32)(r_ebp+0x90u), 0x1u);
    /* 00639800: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639802: mov dword ptr [ebp + 0x94], 0 */ W32((u32)(r_ebp+0x94u), 0x0u);
    /* 0063980c: je 0x639816 */ if (fZ) goto L_00639816;
L_0063980e:; BB(0x0063980e);
    /* 0063980e: mov byte ptr [ebp + 0xb0], al */ W8((u32)(r_ebp+0xb0u), (u8)r_eax);
    /* 00639814: jmp 0x6397eb */ goto L_006397eb;
L_00639816:; BB(0x00639816);
    /* 00639816: mov byte ptr [ebp + 0xb0], 0 */ W8((u32)(r_ebp+0xb0u), 0x0u);
    /* 0063981d: jmp 0x6397eb */ goto L_006397eb;
L_0063981f:; BB(0x0063981f);
    /* 0063981f: mov ecx, dword ptr [ebp + 0x94] */ r_ecx = R32((u32)(r_ebp+0x94u));
    /* 00639825: cmp ecx, dword ptr [ebp + 0xa4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0xa4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0063982b: jge 0x639878 */ if ((fS==fO)) goto L_00639878;
L_0063982d:; BB(0x0063982d);
    /* 0063982d: mov eax, 0x88888889 */ r_eax = 0x88888889u;
    /* 00639832: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00639834: mov eax, ecx */ r_eax = r_ecx;
    /* 00639836: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00639839: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0063983b: sar edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0063983e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00639840: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00639843: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00639845: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00639847: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00639849: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0063984b: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0063984d: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0063984f: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00639851: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00639853: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639855: jne 0x639712 */ if (!fZ) goto L_00639712;
L_0063985b:; BB(0x0063985b);
    /* 0063985b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063985d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063985e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063985f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00639860: push 0x587 */ { u32 v = 0x587u; r_esp -= 4; W32(r_esp, v); }
    /* 00639865: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x63986au); f_00814298();
    /* 0063986a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063986d: mov ecx, dword ptr [ebp + 0x94] */ r_ecx = R32((u32)(r_ebp+0x94u));
    /* 00639873: jmp 0x639712 */ goto L_00639712;
L_00639878:; BB(0x00639878);
    /* 00639878: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0063987a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063987b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063987c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063987d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063987e: push 0x587 */ { u32 v = 0x587u; r_esp -= 4; W32(r_esp, v); }
    /* 00639883: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x639888u); f_008144b0();
    /* 00639888: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0063988b: mov ecx, dword ptr [ebp + 0x94] */ r_ecx = R32((u32)(r_ebp+0x94u));
    /* 00639891: jmp 0x639712 */ goto L_00639712;
}

void f_00639898(void) /* sub_639898 */
{
    FN_ENTER(0x00639898);
    /* 00639898: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00639899: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063989c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063989e: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x6398a3u); f_004f7c84();
    /* 006398a3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006398a6: je 0x6398ad */ if (fZ) goto L_006398ad;
L_006398a8:; BB(0x006398a8);
    /* 006398a8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006398ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006398ac: ret  */ FN_RET(0x00639898); r_esp += 4; return;
L_006398ad:; BB(0x006398ad);
    /* 006398ad: mov dword ptr [esp], 0x3e99999a */ W32((u32)(r_esp), 0x3e99999au);
    /* 006398b4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006398b7: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006398ba: mov dword ptr [esp + 4], 0x3f19999a */ W32((u32)(r_esp+0x4u), 0x3f19999au);
    /* 006398c2: mov dword ptr [esp + 8], 0x3e99999a */ W32((u32)(r_esp+0x8u), 0x3e99999au);
    /* 006398ca: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 006398d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006398d3: push 0x41200000 */ { u32 v = 0x41200000u; r_esp -= 4; W32(r_esp, v); }
    /* 006398d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006398d9: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x6398deu); f_0061cdb0();
    /* 006398de: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006398e1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006398e4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006398e5: ret  */ FN_RET(0x00639898); r_esp += 4; return;
}

void f_006398a9(void)
{
    FN_ENTER(0x006398a9);
    /* 006398a9: les edx, ptr [eax] */ UNSUP(0x006398a9, "les edx, ptr [eax]");
    /* 006398ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006398ac: ret  */ FN_RET(0x006398a9); r_esp += 4; return;
}

void f_006398e8(void) /* sub_6398E8 */
{
    FN_ENTER(0x006398e8);
    /* 006398e8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006398e9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006398eb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006398ed: call 0x63990c */ r_esp -= 4; W32(r_esp, 0x6398f2u); f_0063990c();
    /* 006398f2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006398f6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006398f8: jne 0x6398fe */ if (!fZ) goto L_006398fe;
L_006398fa:; BB(0x006398fa);
    /* 006398fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006398fb: ret 4 */ FN_RET(0x006398e8); r_esp += 8; return;
L_006398fe:; BB(0x006398fe);
    /* 006398fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006398ff: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x639904u); f_005c2f74();
    /* 00639904: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00639905: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00639906: ret 4 */ FN_RET(0x006398e8); r_esp += 8; return;
}

void f_0063990c(void) /* sub_63990C */
{
    FN_ENTER(0x0063990c);
    /* 0063990c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063990d: mov ebp, esp */ r_ebp = r_esp;
    /* 0063990f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00639911: push 0x8e49ec */ { u32 v = 0x8e49ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00639916: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063991c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063991d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00639924: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00639927: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063992a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063992d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00639930: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00639933: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00639936: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063993d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00639940: mov dword ptr [eax], 0xb2d0c0 */ W32((u32)(r_eax), 0xb2d0c0u);
    /* 00639946: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00639947: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x63994cu); f_007b4e84();
    /* 0063994c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063994d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00639950: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x639955u); f_007b9c8c();
    /* 00639955: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0063995c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063995f: call 0x770660 */ r_esp -= 4; W32(r_esp, 0x639964u); f_00770660();
    /* 00639964: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00639967: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063996e: mov esp, ebp */ r_esp = r_ebp;
    /* 00639970: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00639971: ret  */ FN_RET(0x0063990c); r_esp += 4; return;
}

void f_00639974(void) /* sub_639974 */
{
    FN_ENTER(0x00639974);
    /* 00639974: push dword ptr [0xa8f184] */ { u32 v = R32((u32)(0xa8f184u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063997a: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x63997fu); f_00857e98();
    /* 0063997f: mov dword ptr [0xa8f184], 0 */ W32((u32)(0xa8f184u), 0x0u);
    /* 00639989: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063998a: ret  */ FN_RET(0x00639974); r_esp += 4; return;
}

void f_0063998c(void) /* sub_63998C */
{
    FN_ENTER(0x0063998c);
    /* 0063998c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063998d: mov ebp, esp */ r_ebp = r_esp;
    /* 0063998f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00639991: push 0x8e4a22 */ { u32 v = 0x8e4a22u; r_esp -= 4; W32(r_esp, v); }
    /* 00639996: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063999c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063999d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006399a4: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006399a7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006399aa: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006399ad: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006399b0: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006399b3: push 0x38c */ { u32 v = 0x38cu; r_esp -= 4; W32(r_esp, v); }
    /* 006399b8: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 006399bf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6399c4u); f_005caba4();
    /* 006399c4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006399c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006399ca: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006399cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006399cf: je 0x639c65 */ if (fZ) goto L_00639c65;
L_006399d5:; BB(0x006399d5);
    /* 006399d5: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 006399dc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006399e3: mov ecx, eax */ r_ecx = r_eax;
    /* 006399e5: mov eax, dword ptr [0xaca350] */ r_eax = R32((u32)(0xaca350u));
    /* 006399ea: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 006399ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006399ee: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 006399f1: call 0x770748 */ r_esp -= 4; W32(r_esp, 0x6399f6u); f_00770748();
    /* 006399f6: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006399fd: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00639a00: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00639a03: mov dword ptr [ecx], 0xb2d0c0 */ W32((u32)(r_ecx), 0xb2d0c0u);
    /* 00639a09: mov eax, dword ptr [0x9c6774] */ r_eax = R32((u32)(0x9c6774u));
    /* 00639a0e: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00639a11: call dword ptr [0xb2d0d4] */ { u32 t = R32((u32)(0xb2d0d4u)); r_esp -= 4; W32(r_esp, 0x639a17u); call_ind(t); }
    /* 00639a17: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00639a1a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00639a1c: push 0x9c6778 */ { u32 v = 0x9c6778u; r_esp -= 4; W32(r_esp, v); }
    /* 00639a21: call 0x7b9a88 */ r_esp -= 4; W32(r_esp, 0x639a26u); f_007b9a88();
    /* 00639a26: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00639a29: call 0x7b4f54 */ r_esp -= 4; W32(r_esp, 0x639a2eu); f_007b4f54();
    /* 00639a2e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00639a31: fld dword ptr [eax + 0x68] */ FPUSH(R_F32((u32)(r_eax+0x68u)));
    /* 00639a34: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00639a36: fstp dword ptr [eax + 0x33c] */ W_F32((u32)(r_eax+0x33cu), ST(0)); FPOP();
    /* 00639a3c: lea eax, [eax + 0x350] */ r_eax = (u32)(r_eax+0x350u);
    /* 00639a42: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00639a44: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 00639a46: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 00639a49: mov dword ptr [eax + 8], edx */ W32((u32)(r_eax+0x8u), r_edx);
    /* 00639a4c: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 00639a4f: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 00639a52: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00639a55: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 00639a58: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 00639a5b: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 00639a5e: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00639a61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00639a62: fld dword ptr [ecx + 0x3c] */ FPUSH(R_F32((u32)(r_ecx+0x3cu)));
    /* 00639a65: fdiv dword ptr [0x933c94] */ ST(0) = ST(0) / R_F32((u32)(0x933c94u));
    /* 00639a6b: fstp dword ptr [ecx + 0x360] */ W_F32((u32)(r_ecx+0x360u), ST(0)); FPOP();
    /* 00639a71: call 0x771160 */ r_esp -= 4; W32(r_esp, 0x639a76u); f_00771160();
    /* 00639a76: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00639a79: mov ecx, dword ptr [0xa8f178] */ r_ecx = R32((u32)(0xa8f178u));
    /* 00639a7f: mov edx, dword ptr [eax + 0x84] */ r_edx = R32((u32)(r_eax+0x84u));
    /* 00639a85: mov eax, edx */ r_eax = r_edx;
    /* 00639a87: and eax, 0xffff0000 */ {  u32 a = r_eax; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00639a8c: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00639a8f: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 00639a92: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639a94: je 0x639c26 */ if (fZ) goto L_00639c26;
L_00639a9a:; BB(0x00639a9a);
    /* 00639a9a: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00639a9d: mov dword ptr [ebx + 0x374], ecx */ W32((u32)(r_ebx+0x374u), r_ecx);
L_00639aa3:; BB(0x00639aa3);
    /* 00639aa3: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00639aa8: jge 0x639ab6 */ if ((fS==fO)) goto L_00639ab6;
L_00639aaa:; BB(0x00639aaa);
    /* 00639aaa: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00639aad: mov word ptr [ecx + 0x380], ax */ W16((u32)(r_ecx+0x380u), (u16)r_eax);
    /* 00639ab4: jmp 0x639ac5 */ goto L_00639ac5;
L_00639ab6:; BB(0x00639ab6);
    /* 00639ab6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00639ab9: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00639abe: mov word ptr [ecx + 0x380], ax */ W16((u32)(r_ecx+0x380u), (u16)r_eax);
L_00639ac5:; BB(0x00639ac5);
    /* 00639ac5: mov eax, ecx */ r_eax = r_ecx;
    /* 00639ac7: mov word ptr [eax + 0x386], dx */ W16((u32)(r_eax+0x386u), (u16)r_edx);
    /* 00639ace: mov ecx, dword ptr [0xa8f17c] */ r_ecx = R32((u32)(0xa8f17cu));
    /* 00639ad4: mov edx, dword ptr [eax + 0x88] */ r_edx = R32((u32)(r_eax+0x88u));
    /* 00639ada: mov eax, edx */ r_eax = r_edx;
    /* 00639adc: and eax, 0xffff0000 */ {  u32 a = r_eax; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00639ae1: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00639ae4: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 00639ae7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639ae9: je 0x639be7 */ if (fZ) goto L_00639be7;
L_00639aef:; BB(0x00639aef);
    /* 00639aef: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00639af2: mov dword ptr [ebx + 0x378], ecx */ W32((u32)(r_ebx+0x378u), r_ecx);
L_00639af8:; BB(0x00639af8);
    /* 00639af8: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00639afd: jge 0x639b0b */ if ((fS==fO)) goto L_00639b0b;
L_00639aff:; BB(0x00639aff);
    /* 00639aff: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00639b02: mov word ptr [ecx + 0x382], ax */ W16((u32)(r_ecx+0x382u), (u16)r_eax);
    /* 00639b09: jmp 0x639b1a */ goto L_00639b1a;
L_00639b0b:; BB(0x00639b0b);
    /* 00639b0b: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00639b0e: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00639b13: mov word ptr [ecx + 0x382], ax */ W16((u32)(r_ecx+0x382u), (u16)r_eax);
L_00639b1a:; BB(0x00639b1a);
    /* 00639b1a: mov eax, ecx */ r_eax = r_ecx;
    /* 00639b1c: mov word ptr [eax + 0x388], dx */ W16((u32)(r_eax+0x388u), (u16)r_edx);
    /* 00639b23: mov ecx, dword ptr [0xa8f180] */ r_ecx = R32((u32)(0xa8f180u));
    /* 00639b29: mov edx, dword ptr [eax + 0x8c] */ r_edx = R32((u32)(r_eax+0x8cu));
    /* 00639b2f: mov eax, edx */ r_eax = r_edx;
    /* 00639b31: and eax, 0xffff0000 */ {  u32 a = r_eax; u32 b = 0xffff0000u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00639b36: shr eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00639b39: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 00639b3c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639b3e: je 0x639ba8 */ if (fZ) goto L_00639ba8;
L_00639b40:; BB(0x00639b40);
    /* 00639b40: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00639b43: mov dword ptr [ebx + 0x37c], ecx */ W32((u32)(r_ebx+0x37cu), r_ecx);
L_00639b49:; BB(0x00639b49);
    /* 00639b49: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00639b4e: jge 0x639b5c */ if ((fS==fO)) goto L_00639b5c;
L_00639b50:; BB(0x00639b50);
    /* 00639b50: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00639b53: mov word ptr [ecx + 0x384], ax */ W16((u32)(r_ecx+0x384u), (u16)r_eax);
    /* 00639b5a: jmp 0x639b6b */ goto L_00639b6b;
L_00639b5c:; BB(0x00639b5c);
    /* 00639b5c: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00639b5f: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 00639b64: mov word ptr [ecx + 0x384], ax */ W16((u32)(r_ecx+0x384u), (u16)r_eax);
L_00639b6b:; BB(0x00639b6b);
    /* 00639b6b: mov eax, ecx */ r_eax = r_ecx;
    /* 00639b6d: mov word ptr [eax + 0x38a], dx */ W16((u32)(r_eax+0x38au), (u16)r_edx);
    /* 00639b74: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00639b76: mov dword ptr [eax + 0x340], edx */ W32((u32)(r_eax+0x340u), r_edx);
    /* 00639b7c: mov dword ptr [eax + 0x344], edx */ W32((u32)(r_eax+0x344u), r_edx);
    /* 00639b82: mov dword ptr [eax + 0x348], edx */ W32((u32)(r_eax+0x348u), r_edx);
    /* 00639b88: mov dword ptr [eax + 0x34c], edx */ W32((u32)(r_eax+0x34cu), r_edx);
    /* 00639b8e: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
L_00639b91:; BB(0x00639b91);
    /* 00639b91: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00639b94: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00639b97: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00639b9a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00639b9d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00639ba4: mov esp, ebp */ r_esp = r_ebp;
    /* 00639ba6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00639ba7: ret  */ FN_RET(0x0063998c); r_esp += 4; return;
L_00639ba8:; BB(0x00639ba8);
    /* 00639ba8: cmp edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00639bab: jge 0x639bd5 */ if ((fS==fO)) goto L_00639bd5;
L_00639bad:; BB(0x00639bad);
    /* 00639bad: mov ebx, dword ptr [0xa8f184] */ r_ebx = R32((u32)(0xa8f184u));
    /* 00639bb3: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00639bb6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00639bb8: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00639bba: lea esi, [edx + ecx*4] */ r_esi = (u32)(r_edx+r_ecx*4);
    /* 00639bbd: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00639bbf: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00639bc2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00639bc4: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00639bc6: lea edi, [ebx + esi + 0x2c] */ r_edi = (u32)(r_ebx+r_esi+0x2cu);
    /* 00639bca: mov dword ptr [ecx + 0x37c], edi */ W32((u32)(r_ecx+0x37cu), r_edi);
    /* 00639bd0: jmp 0x639b49 */ goto L_00639b49;
L_00639bd5:; BB(0x00639bd5);
    /* 00639bd5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00639bd8: mov dword ptr [ecx + 0x37c], 0 */ W32((u32)(r_ecx+0x37cu), 0x0u);
    /* 00639be2: jmp 0x639b49 */ goto L_00639b49;
L_00639be7:; BB(0x00639be7);
    /* 00639be7: cmp edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00639bea: jge 0x639c14 */ if ((fS==fO)) goto L_00639c14;
L_00639bec:; BB(0x00639bec);
    /* 00639bec: mov ebx, dword ptr [0xa8f184] */ r_ebx = R32((u32)(0xa8f184u));
    /* 00639bf2: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00639bf5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00639bf7: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00639bf9: lea esi, [edx + ecx*4] */ r_esi = (u32)(r_edx+r_ecx*4);
    /* 00639bfc: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00639bfe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00639c01: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00639c03: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00639c05: lea edi, [ebx + esi + 0x2c] */ r_edi = (u32)(r_ebx+r_esi+0x2cu);
    /* 00639c09: mov dword ptr [ecx + 0x378], edi */ W32((u32)(r_ecx+0x378u), r_edi);
    /* 00639c0f: jmp 0x639af8 */ goto L_00639af8;
L_00639c14:; BB(0x00639c14);
    /* 00639c14: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00639c17: mov dword ptr [ecx + 0x378], 0 */ W32((u32)(r_ecx+0x378u), 0x0u);
    /* 00639c21: jmp 0x639af8 */ goto L_00639af8;
L_00639c26:; BB(0x00639c26);
    /* 00639c26: cmp edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00639c29: jge 0x639c53 */ if ((fS==fO)) goto L_00639c53;
L_00639c2b:; BB(0x00639c2b);
    /* 00639c2b: mov ebx, dword ptr [0xa8f184] */ r_ebx = R32((u32)(0xa8f184u));
    /* 00639c31: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00639c34: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00639c36: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00639c38: lea esi, [edx + ecx*4] */ r_esi = (u32)(r_edx+r_ecx*4);
    /* 00639c3b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00639c3d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00639c40: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00639c42: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00639c44: lea edi, [ebx + esi + 0x2c] */ r_edi = (u32)(r_ebx+r_esi+0x2cu);
    /* 00639c48: mov dword ptr [ecx + 0x374], edi */ W32((u32)(r_ecx+0x374u), r_edi);
    /* 00639c4e: jmp 0x639aa3 */ goto L_00639aa3;
L_00639c53:; BB(0x00639c53);
    /* 00639c53: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00639c56: mov dword ptr [ecx + 0x374], 0 */ W32((u32)(r_ecx+0x374u), 0x0u);
    /* 00639c60: jmp 0x639aa3 */ goto L_00639aa3;
L_00639c65:; BB(0x00639c65);
    /* 00639c65: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00639c67: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00639c6a: jmp 0x639b91 */ goto L_00639b91;
}

void f_00639c70(void) /* sub_639C70 */
{
    FN_ENTER(0x00639c70);
    /* 00639c70: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00639c71: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00639c72: mov edx, ecx */ r_edx = r_ecx;
    /* 00639c74: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00639c76: mov ebx, eax */ r_ebx = r_eax;
    /* 00639c78: mov esi, edx */ r_esi = r_edx;
L_00639c7a:; BB(0x00639c7a);
    /* 00639c7a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00639c7b: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x639c80u); f_007b4d18();
    /* 00639c80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00639c81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639c83: je 0x639d53 */ if (fZ) goto L_00639d53;
L_00639c89:; BB(0x00639c89);
    /* 00639c89: movsx ecx, word ptr [eax + 0x32c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 00639c90: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639c93: jne 0x639d53 */ if (!fZ) goto L_00639d53;
L_00639c99:; BB(0x00639c99);
    /* 00639c99: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00639c9c: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00639c9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639ca0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00639ca1: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x639ca6u); f_007a9180();
    /* 00639ca6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00639ca9: fcomp dword ptr [esi + 0x33c] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x33cu))); FPOP();
    /* 00639caf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00639cb1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00639cb2: jae 0x639d3d */ if (!fC) goto L_00639d3d;
L_00639cb8:; BB(0x00639cb8);
    /* 00639cb8: mov ecx, dword ptr [esi + ebx*4 + 0x340] */ r_ecx = R32((u32)(r_esi+r_ebx*4+0x340u));
    /* 00639cbf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639cc1: jne 0x639d53 */ if (!fZ) goto L_00639d53;
L_00639cc7:; BB(0x00639cc7);
    /* 00639cc7: mov dword ptr [esi + ebx*4 + 0x340], 1 */ W32((u32)(r_esi+r_ebx*4+0x340u), 0x1u);
    /* 00639cd2: movzx ecx, word ptr [esi + 0x384] */ r_ecx = (u32)R16((u32)(r_esi+0x384u));
    /* 00639cd9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639cda: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x639cdfu); f_00816eec();
    /* 00639cdf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00639ce0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00639ce3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639ce6: je 0x639d70 */ if (fZ) goto L_00639d70;
L_00639cec:; BB(0x00639cec);
    /* 00639cec: movzx ecx, word ptr [esi + 0x382] */ r_ecx = (u32)R16((u32)(r_esi+0x382u));
    /* 00639cf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639cf4: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x639cf9u); f_00816eec();
    /* 00639cf9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00639cfa: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00639cfd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639d00: je 0x639d69 */ if (fZ) goto L_00639d69;
L_00639d02:; BB(0x00639d02);
    /* 00639d02: movzx ecx, word ptr [esi + 0x380] */ r_ecx = (u32)R16((u32)(r_esi+0x380u));
    /* 00639d09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639d0a: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x639d0fu); f_00816eec();
    /* 00639d0f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00639d10: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00639d13: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639d16: je 0x639d62 */ if (fZ) goto L_00639d62;
L_00639d18:; BB(0x00639d18);
    /* 00639d18: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00639d1a:; BB(0x00639d1a);
    /* 00639d1a: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00639d1d: jge 0x639d53 */ if ((fS==fO)) goto L_00639d53;
L_00639d1f:; BB(0x00639d1f);
    /* 00639d1f: mov ecx, dword ptr [esi + ecx*4 + 0x374] */ r_ecx = R32((u32)(r_esi+r_ecx*4+0x374u));
    /* 00639d26: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639d28: je 0x639d53 */ if (fZ) goto L_00639d53;
L_00639d2a:; BB(0x00639d2a);
    /* 00639d2a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00639d2b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00639d2d: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00639d31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639d32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00639d33: call 0x718554 */ r_esp -= 4; W32(r_esp, 0x639d38u); f_00718554();
    /* 00639d38: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00639d3b: jmp 0x639d53 */ goto L_00639d53;
L_00639d3d:; BB(0x00639d3d);
    /* 00639d3d: mov ecx, dword ptr [esi + ebx*4 + 0x340] */ r_ecx = R32((u32)(r_esi+r_ebx*4+0x340u));
    /* 00639d44: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639d46: je 0x639d53 */ if (fZ) goto L_00639d53;
L_00639d48:; BB(0x00639d48);
    /* 00639d48: mov dword ptr [esi + ebx*4 + 0x340], 0 */ W32((u32)(r_esi+r_ebx*4+0x340u), 0x0u);
L_00639d53:; BB(0x00639d53);
    /* 00639d53: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00639d56: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00639d59: jl 0x639c7a */ if ((fS!=fO)) goto L_00639c7a;
L_00639d5f:; BB(0x00639d5f);
    /* 00639d5f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00639d60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00639d61: ret  */ FN_RET(0x00639c70); r_esp += 4; return;
L_00639d62:; BB(0x00639d62);
    /* 00639d62: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00639d67: jmp 0x639d1a */ goto L_00639d1a;
L_00639d69:; BB(0x00639d69);
    /* 00639d69: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00639d6e: jmp 0x639d1a */ goto L_00639d1a;
L_00639d70:; BB(0x00639d70);
    /* 00639d70: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00639d75: jmp 0x639d1a */ goto L_00639d1a;
}

void f_00639d40(void)
{
    FN_ENTER(0x00639d40);
    goto L_00639d40;
L_00639c7a:; BB(0x00639c7a);
    /* 00639c7a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00639c7b: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x639c80u); f_007b4d18();
    /* 00639c80: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00639c81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639c83: je 0x639d53 */ if (fZ) goto L_00639d53;
L_00639c89:; BB(0x00639c89);
    /* 00639c89: movsx ecx, word ptr [eax + 0x32c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 00639c90: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639c93: jne 0x639d53 */ if (!fZ) goto L_00639d53;
L_00639c99:; BB(0x00639c99);
    /* 00639c99: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00639c9c: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 00639c9f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639ca0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00639ca1: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x639ca6u); f_007a9180();
    /* 00639ca6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00639ca9: fcomp dword ptr [esi + 0x33c] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x33cu))); FPOP();
    /* 00639caf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00639cb1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00639cb2: jae 0x639d3d */ if (!fC) goto L_00639d3d;
L_00639cb8:; BB(0x00639cb8);
    /* 00639cb8: mov ecx, dword ptr [esi + ebx*4 + 0x340] */ r_ecx = R32((u32)(r_esi+r_ebx*4+0x340u));
    /* 00639cbf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639cc1: jne 0x639d53 */ if (!fZ) goto L_00639d53;
L_00639cc7:; BB(0x00639cc7);
    /* 00639cc7: mov dword ptr [esi + ebx*4 + 0x340], 1 */ W32((u32)(r_esi+r_ebx*4+0x340u), 0x1u);
    /* 00639cd2: movzx ecx, word ptr [esi + 0x384] */ r_ecx = (u32)R16((u32)(r_esi+0x384u));
    /* 00639cd9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639cda: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x639cdfu); f_00816eec();
    /* 00639cdf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00639ce0: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00639ce3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639ce6: je 0x639d70 */ if (fZ) goto L_00639d70;
L_00639cec:; BB(0x00639cec);
    /* 00639cec: movzx ecx, word ptr [esi + 0x382] */ r_ecx = (u32)R16((u32)(r_esi+0x382u));
    /* 00639cf3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639cf4: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x639cf9u); f_00816eec();
    /* 00639cf9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00639cfa: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00639cfd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639d00: je 0x639d69 */ if (fZ) goto L_00639d69;
L_00639d02:; BB(0x00639d02);
    /* 00639d02: movzx ecx, word ptr [esi + 0x380] */ r_ecx = (u32)R16((u32)(r_esi+0x380u));
    /* 00639d09: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639d0a: call 0x816eec */ r_esp -= 4; W32(r_esp, 0x639d0fu); f_00816eec();
    /* 00639d0f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00639d10: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00639d13: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639d16: je 0x639d62 */ if (fZ) goto L_00639d62;
L_00639d18:; BB(0x00639d18);
    /* 00639d18: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00639d1a:; BB(0x00639d1a);
    /* 00639d1a: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00639d1d: jge 0x639d53 */ if ((fS==fO)) goto L_00639d53;
L_00639d1f:; BB(0x00639d1f);
    /* 00639d1f: mov ecx, dword ptr [esi + ecx*4 + 0x374] */ r_ecx = R32((u32)(r_esi+r_ecx*4+0x374u));
    /* 00639d26: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639d28: je 0x639d53 */ if (fZ) goto L_00639d53;
L_00639d2a:; BB(0x00639d2a);
    /* 00639d2a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00639d2b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00639d2d: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00639d31: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00639d32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00639d33: call 0x718554 */ r_esp -= 4; W32(r_esp, 0x639d38u); f_00718554();
    /* 00639d38: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00639d3b: jmp 0x639d53 */ goto L_00639d53;
L_00639d3d:; BB(0x00639d3d);
    /* 00639d3d: mov ecx, dword ptr [esi + ebx*4 + 0x340] */ r_ecx = R32((u32)(r_esi+r_ebx*4+0x340u));
L_00639d40:; BB(0x00639d40);
    /* 00639d40: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00639d41: add eax, dword ptr [eax] */ {  u32 a = r_eax; u32 b = R32((u32)(r_eax)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00639d43: add byte ptr [ebp - 0x38f48b37], al */ { u32 ad = (u32)(r_ebp+0xc70b74c9u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00639d44: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639d46: je 0x639d53 */ if (fZ) goto L_00639d53;
L_00639d48:; BB(0x00639d48);
    /* 00639d48: mov dword ptr [esi + ebx*4 + 0x340], 0 */ W32((u32)(r_esi+r_ebx*4+0x340u), 0x0u);
    /* 00639d49: test byte ptr [esi + 0x340], bl */ {  u32 a = R8((u32)(r_esi+0x340u)); u32 b = (u8)r_ebx; u32 r = (a & b) & 0xffu;   }
    /* 00639d4f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00639d51: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_00639d53:; BB(0x00639d53);
    /* 00639d53: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00639d56: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00639d59: jl 0x639c7a */ if ((fS!=fO)) goto L_00639c7a;
L_00639d5f:; BB(0x00639d5f);
    /* 00639d5f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00639d60: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00639d61: ret  */ FN_RET(0x00639d40); r_esp += 4; return;
L_00639d62:; BB(0x00639d62);
    /* 00639d62: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00639d67: jmp 0x639d1a */ goto L_00639d1a;
L_00639d69:; BB(0x00639d69);
    /* 00639d69: mov ecx, 2 */ r_ecx = 0x2u;
    /* 00639d6e: jmp 0x639d1a */ goto L_00639d1a;
L_00639d70:; BB(0x00639d70);
    /* 00639d70: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00639d75: jmp 0x639d1a */ goto L_00639d1a;
}

void f_00639d78(void) /* sub_639D78 */
{
    FN_ENTER(0x00639d78);
    /* 00639d78: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00639d79: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00639d7c: mov edi, ecx */ r_edi = r_ecx;
    /* 00639d7e: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x639d83u); f_004f7c84();
    /* 00639d83: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639d86: je 0x639d8d */ if (fZ) goto L_00639d8d;
L_00639d88:; BB(0x00639d88);
    /* 00639d88: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00639d8b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00639d8c: ret  */ FN_RET(0x00639d78); r_esp += 4; return;
L_00639d8d:; BB(0x00639d8d);
    /* 00639d8d: mov dword ptr [esp + 0xc], 0x3e99999a */ W32((u32)(r_esp+0xcu), 0x3e99999au);
    /* 00639d95: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00639d9d: mov dword ptr [esp + 0x14], 0x3e99999a */ W32((u32)(r_esp+0x14u), 0x3e99999au);
    /* 00639da5: mov dword ptr [esp + 0x18], 0x3e99999a */ W32((u32)(r_esp+0x18u), 0x3e99999au);
    /* 00639dad: push dword ptr [edi + 0x33c] */ { u32 v = R32((u32)(r_edi+0x33cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00639db3: call 0x82dc9c */ r_esp -= 4; W32(r_esp, 0x639db8u); f_0082dc9c();
    /* 00639db8: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00639dbc: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 00639dc0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00639dc4: add edi, 0x38 */ {  u32 a = r_edi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00639dc7: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00639dca: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x639dcfu); f_0061cdb0();
    /* 00639dcf: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00639dd2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00639dd3: ret  */ FN_RET(0x00639d78); r_esp += 4; return;
}

void f_00639dd4(void) /* sub_639DD4 */
{
    FN_ENTER(0x00639dd4);
    /* 00639dd4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00639dd5: push 0x9c0 */ { u32 v = 0x9c0u; r_esp -= 4; W32(r_esp, v); }
    /* 00639dda: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x639ddfu); f_008581c5();
    /* 00639ddf: push dword ptr [0x9c6770] */ { u32 v = R32((u32)(0x9c6770u)); r_esp -= 4; W32(r_esp, v); }
    /* 00639de5: mov dword ptr [0xa8f184], eax */ W32((u32)(0xa8f184u), r_eax);
    /* 00639dea: call 0x5b9554 */ r_esp -= 4; W32(r_esp, 0x639defu); f_005b9554();
    /* 00639def: mov edi, eax */ r_edi = r_eax;
    /* 00639df1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00639df4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639df6: je 0x639e07 */ if (fZ) goto L_00639e07;
L_00639df8:; BB(0x00639df8);
    /* 00639df8: push dword ptr [0xa8f184] */ { u32 v = R32((u32)(0xa8f184u)); r_esp -= 4; W32(r_esp, v); }
    /* 00639dfe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00639dff: call 0x788154 */ r_esp -= 4; W32(r_esp, 0x639e04u); f_00788154();
    /* 00639e04: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00639e07:; BB(0x00639e07);
    /* 00639e07: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00639e08: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x639e0du); f_0082e960();
    /* 00639e0d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00639e0f: mov dword ptr [0xa8f178], eax */ W32((u32)(0xa8f178u), r_eax);
    /* 00639e14: mov dword ptr [0xa8f17c], eax */ W32((u32)(0xa8f17cu), r_eax);
    /* 00639e19: mov dword ptr [0xa8f180], eax */ W32((u32)(0xa8f180u), r_eax);
    /* 00639e1e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00639e1f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00639e20: ret  */ FN_RET(0x00639dd4); r_esp += 4; return;
}

void f_00639e50(void) /* sub_639E50 */
{
    FN_ENTER(0x00639e50);
    /* 00639e50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00639e51: mov edi, ecx */ r_edi = r_ecx;
    /* 00639e53: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00639e57: movsx edx, word ptr [eax] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax));
    /* 00639e5a: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00639e5d: je 0x639e63 */ if (fZ) goto L_00639e63;
L_00639e5f:; BB(0x00639e5f);
    /* 00639e5f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00639e60: ret 8 */ FN_RET(0x00639e50); r_esp += 12; return;
L_00639e63:; BB(0x00639e63);
    /* 00639e63: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00639e67: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639e6a: je 0x639e84 */ if (fZ) goto L_00639e84;
L_00639e6c:; BB(0x00639e6c);
    /* 00639e6c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00639e6d: call 0x8113bc */ r_esp -= 4; W32(r_esp, 0x639e72u); f_008113bc();
    /* 00639e72: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00639e73: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 00639e77: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00639e7c: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 00639e80: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00639e81: ret 8 */ FN_RET(0x00639e50); r_esp += 12; return;
L_00639e84:; BB(0x00639e84);
    /* 00639e84: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00639e86: mov ecx, edi */ r_ecx = r_edi;
    /* 00639e88: call dword ptr [eax + 0x15c] */ { u32 t = R32((u32)(r_eax+0x15cu)); r_esp -= 4; W32(r_esp, 0x639e8eu); call_ind(t); }
    /* 00639e8e: jmp 0x639e6c */ goto L_00639e6c;
}

void f_00639e90(void) /* sub_639E90 */
{
    FN_ENTER(0x00639e90);
    /* 00639e90: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00639e91: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00639e94: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00639e98: cmp eax, 0x4000 */ {  u32 a = r_eax; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00639e9d: jl 0x639f89 */ if ((fS!=fO)) goto L_00639f89;
L_00639ea3:; BB(0x00639ea3);
    /* 00639ea3: mov eax, dword ptr [ecx + 0x80] */ r_eax = R32((u32)(r_ecx+0x80u));
    /* 00639ea9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639eab: je 0x639f89 */ if (fZ) goto L_00639f89;
L_00639eb1:; BB(0x00639eb1);
    /* 00639eb1: je 0x639f96 */ if (fZ) goto L_00639f96;
L_00639eb7:; BB(0x00639eb7);
    /* 00639eb7: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 00639ebb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00639ebd: jl 0x639eee */ if ((fS!=fO)) goto L_00639eee;
L_00639ebf:; BB(0x00639ebf);
    /* 00639ebf: cmp edx, 0xb9f */ {  u32 a = r_edx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00639ec5: jg 0x639eee */ if ((!fZ&&fS==fO)) goto L_00639eee;
L_00639ec7:; BB(0x00639ec7);
    /* 00639ec7: mov ebx, dword ptr [0xab02bc] */ r_ebx = R32((u32)(0xab02bcu));
    /* 00639ecd: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00639ed1: movzx eax, word ptr [ebx + edx*4] */ r_eax = (u32)R16((u32)(r_ebx+r_edx*4));
    /* 00639ed5: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 00639ed9: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00639edd: movzx edx, word ptr [ebx + edx*4 + 2] */ r_edx = (u32)R16((u32)(r_ebx+r_edx*4+0x2u));
    /* 00639ee2: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 00639ee7: mov edx, 1 */ r_edx = 0x1u;
    /* 00639eec: jmp 0x639ef0 */ goto L_00639ef0;
L_00639eee:; BB(0x00639eee);
    /* 00639eee: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00639ef0:; BB(0x00639ef0);
    /* 00639ef0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639ef2: je 0x639f89 */ if (fZ) goto L_00639f89;
L_00639ef8:; BB(0x00639ef8);
    /* 00639ef8: mov edx, 4 */ r_edx = 0x4u;
    /* 00639efd: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 00639f01: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 00639f08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639f0a: je 0x639f33 */ if (fZ) goto L_00639f33;
L_00639f0c:; BB(0x00639f0c);
    /* 00639f0c: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 00639f10: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00639f12: jl 0x639f33 */ if ((fS!=fO)) goto L_00639f33;
L_00639f14:; BB(0x00639f14);
    /* 00639f14: cmp edx, 0xb9f */ {  u32 a = r_edx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00639f1a: jg 0x639f33 */ if ((!fZ&&fS==fO)) goto L_00639f33;
L_00639f1c:; BB(0x00639f1c);
    /* 00639f1c: mov eax, dword ptr [0xab02bc] */ r_eax = R32((u32)(0xab02bcu));
    /* 00639f21: movzx ebx, word ptr [esp] */ r_ebx = (u32)R16((u32)(r_esp));
    /* 00639f25: mov word ptr [eax + edx*4], bx */ W16((u32)(r_eax+r_edx*4), (u16)r_ebx);
    /* 00639f29: movzx ebx, word ptr [esp + 2] */ r_ebx = (u32)R16((u32)(r_esp+0x2u));
    /* 00639f2e: mov word ptr [eax + edx*4 + 2], bx */ W16((u32)(r_eax+r_edx*4+0x2u), (u16)r_ebx);
L_00639f33:; BB(0x00639f33);
    /* 00639f33: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00639f36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00639f37: call 0x7b5038 */ r_esp -= 4; W32(r_esp, 0x639f3cu); f_007b5038();
    /* 00639f3c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00639f40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639f42: je 0x639f89 */ if (fZ) goto L_00639f89;
L_00639f44:; BB(0x00639f44);
    /* 00639f44: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00639f48: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 00639f4c: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00639f51: jge 0x639f89 */ if ((fS==fO)) goto L_00639f89;
L_00639f53:; BB(0x00639f53);
    /* 00639f53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00639f54: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x639f59u); f_0068d5a8();
    /* 00639f59: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00639f5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639f5c: je 0x639f89 */ if (fZ) goto L_00639f89;
L_00639f5e:; BB(0x00639f5e);
    /* 00639f5e: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 00639f65: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639f68: jne 0x639f89 */ if (!fZ) goto L_00639f89;
L_00639f6a:; BB(0x00639f6a);
    /* 00639f6a: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 00639f70: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00639f73: je 0x639f7c */ if (fZ) goto L_00639f7c;
L_00639f75:; BB(0x00639f75);
    /* 00639f75: mov edx, 1 */ r_edx = 0x1u;
    /* 00639f7a: jmp 0x639f7e */ goto L_00639f7e;
L_00639f7c:; BB(0x00639f7c);
    /* 00639f7c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00639f7e:; BB(0x00639f7e);
    /* 00639f7e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639f80: je 0x639f89 */ if (fZ) goto L_00639f89;
L_00639f82:; BB(0x00639f82);
    /* 00639f82: mov ecx, eax */ r_ecx = r_eax;
    /* 00639f84: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x639f89u); f_00685514();
L_00639f89:; BB(0x00639f89);
    /* 00639f89: fld dword ptr [0x933ce0] */ FPUSH(R_F32((u32)(0x933ce0u)));
    /* 00639f8f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00639f92: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00639f93: ret 8 */ FN_RET(0x00639e90); r_esp += 12; return;
L_00639f96:; BB(0x00639f96);
    /* 00639f96: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00639f98: jmp 0x639ef0 */ goto L_00639ef0;
}

void f_00639ef7(void)
{
    FN_ENTER(0x00639ef7);
    /* 00639ef7: add byte ptr [edx + 4], bh */ { u32 ad = (u32)(r_edx+0x4u);  u32 a = R8(ad); u32 b = (u8)(r_ebx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00639efd: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 00639f01: mov word ptr [ecx + 0x32e], dx */ W16((u32)(r_ecx+0x32eu), (u16)r_edx);
    /* 00639f08: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639f0a: je 0x639f33 */ if (fZ) goto L_00639f33;
L_00639f0c:; BB(0x00639f0c);
    /* 00639f0c: movsx edx, word ptr [eax + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 00639f10: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00639f12: jl 0x639f33 */ if ((fS!=fO)) goto L_00639f33;
L_00639f14:; BB(0x00639f14);
    /* 00639f14: cmp edx, 0xb9f */ {  u32 a = r_edx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00639f1a: jg 0x639f33 */ if ((!fZ&&fS==fO)) goto L_00639f33;
L_00639f1c:; BB(0x00639f1c);
    /* 00639f1c: mov eax, dword ptr [0xab02bc] */ r_eax = R32((u32)(0xab02bcu));
    /* 00639f21: movzx ebx, word ptr [esp] */ r_ebx = (u32)R16((u32)(r_esp));
    /* 00639f25: mov word ptr [eax + edx*4], bx */ W16((u32)(r_eax+r_edx*4), (u16)r_ebx);
    /* 00639f29: movzx ebx, word ptr [esp + 2] */ r_ebx = (u32)R16((u32)(r_esp+0x2u));
    /* 00639f2e: mov word ptr [eax + edx*4 + 2], bx */ W16((u32)(r_eax+r_edx*4+0x2u), (u16)r_ebx);
L_00639f33:; BB(0x00639f33);
    /* 00639f33: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00639f36: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00639f37: call 0x7b5038 */ r_esp -= 4; W32(r_esp, 0x639f3cu); f_007b5038();
    /* 00639f3c: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00639f40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639f42: je 0x639f89 */ if (fZ) goto L_00639f89;
L_00639f44:; BB(0x00639f44);
    /* 00639f44: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00639f48: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 00639f4c: cmp eax, 0x1000 */ {  u32 a = r_eax; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00639f51: jge 0x639f89 */ if ((fS==fO)) goto L_00639f89;
L_00639f53:; BB(0x00639f53);
    /* 00639f53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00639f54: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x639f59u); f_0068d5a8();
    /* 00639f59: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00639f5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639f5c: je 0x639f89 */ if (fZ) goto L_00639f89;
L_00639f5e:; BB(0x00639f5e);
    /* 00639f5e: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 00639f65: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639f68: jne 0x639f89 */ if (!fZ) goto L_00639f89;
L_00639f6a:; BB(0x00639f6a);
    /* 00639f6a: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 00639f70: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00639f73: je 0x639f7c */ if (fZ) goto L_00639f7c;
L_00639f75:; BB(0x00639f75);
    /* 00639f75: mov edx, 1 */ r_edx = 0x1u;
    /* 00639f7a: jmp 0x639f7e */ goto L_00639f7e;
L_00639f7c:; BB(0x00639f7c);
    /* 00639f7c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00639f7e:; BB(0x00639f7e);
    /* 00639f7e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00639f80: je 0x639f89 */ if (fZ) goto L_00639f89;
L_00639f82:; BB(0x00639f82);
    /* 00639f82: mov ecx, eax */ r_ecx = r_eax;
    /* 00639f84: call 0x685514 */ r_esp -= 4; W32(r_esp, 0x639f89u); f_00685514();
L_00639f89:; BB(0x00639f89);
    /* 00639f89: fld dword ptr [0x933ce0] */ FPUSH(R_F32((u32)(0x933ce0u)));
    /* 00639f8f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00639f92: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00639f93: ret 8 */ FN_RET(0x00639ef7); r_esp += 12; return;
}

void f_00639fa0(void) /* sub_639FA0 */
{
    FN_ENTER(0x00639fa0);
    /* 00639fa0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00639fa1: mov esi, ecx */ r_esi = r_ecx;
    /* 00639fa3: mov ecx, esi */ r_ecx = r_esi;
    /* 00639fa5: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x639faau); f_00770738();
    /* 00639faa: cmp eax, dword ptr [esp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00639fae: je 0x639fc0 */ if (fZ) goto L_00639fc0;
L_00639fb0:; BB(0x00639fb0);
    /* 00639fb0: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00639fb5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00639fb7: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00639fb9: mov ecx, esi */ r_ecx = r_esi;
    /* 00639fbb: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x639fbeu); call_ind(t); }
    /* 00639fbe: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00639fc0:; BB(0x00639fc0);
    /* 00639fc0: fld dword ptr [0x933cd8] */ FPUSH(R_F32((u32)(0x933cd8u)));
    /* 00639fc6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00639fc7: ret 8 */ FN_RET(0x00639fa0); r_esp += 12; return;
}

void f_00639fcc(void) /* sub_639FCC */
{
    FN_ENTER(0x00639fcc);
    /* 00639fcc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00639fcd: mov esi, ecx */ r_esi = r_ecx;
    /* 00639fcf: mov ecx, esi */ r_ecx = r_esi;
    /* 00639fd1: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x639fd6u); f_00770738();
    /* 00639fd6: cmp eax, dword ptr [esp + 8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00639fda: je 0x639fec */ if (fZ) goto L_00639fec;
L_00639fdc:; BB(0x00639fdc);
    /* 00639fdc: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00639fe1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00639fe3: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00639fe5: mov ecx, esi */ r_ecx = r_esi;
    /* 00639fe7: call dword ptr [edx + 0x5c] */ { u32 t = R32((u32)(r_edx+0x5cu)); r_esp -= 4; W32(r_esp, 0x639feau); call_ind(t); }
    /* 00639fea: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00639fec:; BB(0x00639fec);
    /* 00639fec: fld dword ptr [0x933cd0] */ FPUSH(R_F32((u32)(0x933cd0u)));
    /* 00639ff2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00639ff3: ret 0x18 */ FN_RET(0x00639fcc); r_esp += 28; return;
}

void f_00639ff8(void) /* sub_639FF8 */
{
    FN_ENTER(0x00639ff8);
    /* 00639ff8: call 0x770738 */ r_esp -= 4; W32(r_esp, 0x639ffdu); f_00770738();
    /* 00639ffd: cmp eax, dword ptr [esp + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0063a001: mov eax, 0 */ r_eax = 0x0u;
    /* 0063a006: setne al */ r_eax = (r_eax & 0xffffff00u) | (((!fZ) ? 1 : 0) & 0xffu);
    /* 0063a009: ret 0x10 */ FN_RET(0x00639ff8); r_esp += 20; return;
}

