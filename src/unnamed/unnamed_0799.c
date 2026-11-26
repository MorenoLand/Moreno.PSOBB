#include "protos.h"

void f_0079901c(void) /* sub_79901C */
{
    FN_ENTER(0x0079901c);
    /* 0079901c: mov eax, dword ptr [0xaab250] */ r_eax = R32((u32)(0xaab250u));
    /* 00799021: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799023: je 0x799053 */ if (fZ) goto L_00799053;
L_00799025:; BB(0x00799025);
    /* 00799025: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0079902c: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0079902f: je 0x799048 */ if (fZ) goto L_00799048;
L_00799031:; BB(0x00799031);
    /* 00799031: movsx eax, word ptr [eax + 0x86] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x86u));
    /* 00799038: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079903a: jne 0x799042 */ if (!fZ) goto L_00799042;
L_0079903c:; BB(0x0079903c);
    /* 0079903c: call 0x799108 */ r_esp -= 4; W32(r_esp, 0x799041u); f_00799108();
    /* 00799041: ret  */ FN_RET(0x0079901c); r_esp += 4; return;
L_00799042:; BB(0x00799042);
    /* 00799042: call 0x79905c */ r_esp -= 4; W32(r_esp, 0x799047u); f_0079905c();
    /* 00799047: ret  */ FN_RET(0x0079901c); r_esp += 4; return;
L_00799048:; BB(0x00799048);
    /* 00799048: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079904b: je 0x799052 */ if (fZ) goto L_00799052;
L_0079904d:; BB(0x0079904d);
    /* 0079904d: call 0x799108 */ r_esp -= 4; W32(r_esp, 0x799052u); f_00799108();
L_00799052:; BB(0x00799052);
    /* 00799052: ret  */ FN_RET(0x0079901c); r_esp += 4; return;
L_00799053:; BB(0x00799053);
    /* 00799053: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x799058u); f_0079a050();
    /* 00799058: ret  */ FN_RET(0x0079901c); r_esp += 4; return;
}

void f_0079905c(void) /* sub_79905C */
{
    FN_ENTER(0x0079905c);
    /* 0079905c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079905d: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00799063: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799069: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079906b: je 0x79907c */ if (fZ) goto L_0079907c;
L_0079906d:; BB(0x0079906d);
    /* 0079906d: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x799072u); f_0073d160();
    /* 00799072: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
L_0079907c:; BB(0x0079907c);
    /* 0079907c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079907e: push dword ptr [0xaab180] */ { u32 v = R32((u32)(0xaab180u)); r_esp -= 4; W32(r_esp, v); }
    /* 00799084: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x799089u); f_0073cd8c();
    /* 00799089: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079908c: mov dword ptr [0xaab23c], eax */ W32((u32)(0xaab23cu), r_eax);
    /* 00799091: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799093: je 0x7990f4 */ if (fZ) goto L_007990f4;
L_00799095:; BB(0x00799095);
    /* 00799095: mov eax, dword ptr [0xaab250] */ r_eax = R32((u32)(0xaab250u));
    /* 0079909a: movsx ecx, word ptr [eax + 0x8c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8cu));
    /* 007990a1: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 007990a4: mov dword ptr [esp], 0x43340000 */ W32((u32)(r_esp), 0x43340000u);
    /* 007990ab: mov dword ptr [esp + 4], 0x43700000 */ W32((u32)(r_esp+0x4u), 0x43700000u);
    /* 007990b3: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 007990b5: mov ebx, dword ptr [edx + ecx*4] */ r_ebx = R32((u32)(r_edx+r_ecx*4));
    /* 007990b8: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7990bdu); f_00793168();
    /* 007990bd: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 007990c1: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 007990c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007990c5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007990c6: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7990cbu); f_00857e29();
    /* 007990cb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007990ce: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 007990d4: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 007990d8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007990db: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 007990e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007990e1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007990e2: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x7990e7u); f_0073ce70();
    /* 007990e7: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 007990ed: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007990ef: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x7990f4u); f_0073d148();
L_007990f4:; BB(0x007990f4);
    /* 007990f4: mov dword ptr [0xaab218], 0x43 */ W32((u32)(0xaab218u), 0x43u);
    /* 007990fe: add esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00799104: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00799105: ret  */ FN_RET(0x0079905c); r_esp += 4; return;
}

void f_00799108(void) /* sub_799108 */
{
    FN_ENTER(0x00799108);
    /* 00799108: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 0079910e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799110: je 0x799121 */ if (fZ) goto L_00799121;
L_00799112:; BB(0x00799112);
    /* 00799112: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x799117u); f_007127b0();
    /* 00799117: mov dword ptr [0xaab250], 0 */ W32((u32)(0xaab250u), 0x0u);
L_00799121:; BB(0x00799121);
    /* 00799121: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 00799127: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x79912cu); f_0073600c();
    /* 0079912c: mov edx, dword ptr [0xaab254] */ r_edx = R32((u32)(0xaab254u));
    /* 00799132: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799134: je 0x79916f */ if (fZ) goto L_0079916f;
L_00799136:; BB(0x00799136);
    /* 00799136: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0079913d: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00799142: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 00799145: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0079914c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079914e: je 0x79915d */ if (fZ) goto L_0079915d;
L_00799150:; BB(0x00799150);
    /* 00799150: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00799152: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x799157u); f_00760acc();
    /* 00799157: mov edx, dword ptr [0xaab254] */ r_edx = R32((u32)(0xaab254u));
L_0079915d:; BB(0x0079915d);
    /* 0079915d: mov ecx, edx */ r_ecx = r_edx;
    /* 0079915f: call 0x73605c */ r_esp -= 4; W32(r_esp, 0x799164u); f_0073605c();
L_00799164:; BB(0x00799164);
    /* 00799164: mov dword ptr [0xaab218], 0x2a */ W32((u32)(0xaab218u), 0x2au);
    /* 0079916e: ret  */ FN_RET(0x00799108); r_esp += 4; return;
L_0079916f:; BB(0x0079916f);
    /* 0079916f: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 00799174: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x799179u); f_0073ec50();
    /* 00799179: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0079917b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079917c: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x799181u); f_00735708();
    /* 00799181: mov dword ptr [0xaab254], eax */ W32((u32)(0xaab254u), r_eax);
    /* 00799186: push 0x5d */ { u32 v = 0x5du; r_esp -= 4; W32(r_esp, v); }
    /* 00799188: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79918du); f_00793168();
    /* 0079918d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00799190: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 00799196: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00799198: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0079919a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079919b: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7991a0u); f_00735c90();
    /* 007991a0: push 0x5e */ { u32 v = 0x5eu; r_esp -= 4; W32(r_esp, v); }
    /* 007991a2: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7991a7u); f_00793168();
    /* 007991a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007991a8: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 007991ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007991b0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007991b2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007991b3: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7991b8u); f_00735c90();
    /* 007991b8: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 007991ba: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7991bfu); f_00793168();
    /* 007991bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007991c0: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 007991c6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007991c8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007991ca: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007991cb: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7991d0u); f_00735c90();
    /* 007991d0: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 007991d2: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7991d7u); f_00793168();
    /* 007991d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007991d8: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 007991de: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007991e0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007991e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007991e3: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7991e8u); f_00735c90();
    /* 007991e8: push 0x61 */ { u32 v = 0x61u; r_esp -= 4; W32(r_esp, v); }
    /* 007991ea: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7991efu); f_00793168();
    /* 007991ef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007991f0: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 007991f6: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007991f8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007991fa: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007991fb: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x799200u); f_00735c90();
    /* 00799200: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 00799202: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x799207u); f_00793168();
    /* 00799207: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00799208: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 0079920e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00799210: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00799212: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00799213: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x799218u); f_00735c90();
    /* 00799218: mov eax, dword ptr [0xa95df0] */ r_eax = R32((u32)(0xa95df0u));
    /* 0079921d: mov edx, dword ptr [eax + 0xaec] */ r_edx = R32((u32)(r_eax+0xaecu));
    /* 00799223: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00799226: je 0x799245 */ if (fZ) goto L_00799245;
L_00799228:; BB(0x00799228);
    /* 00799228: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0079922a: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79922fu); f_00793168();
    /* 0079922f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00799230: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 00799236: mov edx, 6 */ r_edx = 0x6u;
    /* 0079923b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079923c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079923d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079923e: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x799243u); f_00735c90();
    /* 00799243: jmp 0x799260 */ goto L_00799260;
L_00799245:; BB(0x00799245);
    /* 00799245: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 00799247: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79924cu); f_00793168();
    /* 0079924c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079924d: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 00799253: mov edx, 6 */ r_edx = 0x6u;
    /* 00799258: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00799259: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079925a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079925b: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x799260u); f_00735ee0();
L_00799260:; BB(0x00799260);
    /* 00799260: push 0x42c80000 */ { u32 v = 0x42c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00799265: push 0x433c0000 */ { u32 v = 0x433c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0079926a: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 00799270: call 0x7361d0 */ r_esp -= 4; W32(r_esp, 0x799275u); f_007361d0();
    /* 00799275: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 0079927b: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x799280u); f_00736458();
    /* 00799280: mov edx, dword ptr [0xaab254] */ r_edx = R32((u32)(0xaab254u));
    /* 00799286: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0079928d: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00799292: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00799299: jmp 0x799164 */ goto L_00799164;
}

void f_007992a0(void) /* sub_7992A0 */
{
    FN_ENTER(0x007992a0);
    /* 007992a0: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 007992a6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007992a8: je 0x7992fa */ if (fZ) goto L_007992fa;
L_007992aa:; BB(0x007992aa);
    /* 007992aa: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x7992afu); f_0073ce50();
    /* 007992af: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007992b1: je 0x7992e5 */ if (fZ) goto L_007992e5;
L_007992b3:; BB(0x007992b3);
    /* 007992b3: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 007992b9: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x7992beu); f_0073d134();
    /* 007992be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007992c0: jne 0x7992df */ if (!fZ) goto L_007992df;
L_007992c2:; BB(0x007992c2);
    /* 007992c2: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 007992c8: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7992cdu); f_007365f4();
    /* 007992cd: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007992d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007992d4: call 0x7f3274 */ r_esp -= 4; W32(r_esp, 0x7992d9u); f_007f3274();
    /* 007992d9: call 0x799300 */ r_esp -= 4; W32(r_esp, 0x7992deu); f_00799300();
    /* 007992de: ret  */ FN_RET(0x007992a0); r_esp += 4; return;
L_007992df:; BB(0x007992df);
    /* 007992df: call 0x798e98 */ r_esp -= 4; W32(r_esp, 0x7992e4u); f_00798e98();
    /* 007992e4: ret  */ FN_RET(0x007992a0); r_esp += 4; return;
L_007992e5:; BB(0x007992e5);
    /* 007992e5: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 007992eb: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x7992f0u); f_0073d114();
    /* 007992f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007992f2: je 0x7992f9 */ if (fZ) goto L_007992f9;
L_007992f4:; BB(0x007992f4);
    /* 007992f4: call 0x798e98 */ r_esp -= 4; W32(r_esp, 0x7992f9u); f_00798e98();
L_007992f9:; BB(0x007992f9);
    /* 007992f9: ret  */ FN_RET(0x007992a0); r_esp += 4; return;
L_007992fa:; BB(0x007992fa);
    /* 007992fa: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x7992ffu); f_0079a050();
    /* 007992ff: ret  */ FN_RET(0x007992a0); r_esp += 4; return;
}

void f_00799300(void) /* sub_799300 */
{
    FN_ENTER(0x00799300);
    /* 00799300: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799306: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00799308: je 0x799319 */ if (fZ) goto L_00799319;
L_0079930a:; BB(0x0079930a);
    /* 0079930a: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x79930fu); f_0073d160();
    /* 0079930f: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
L_00799319:; BB(0x00799319);
    /* 00799319: mov dword ptr [0xaab218], 0x3e */ W32((u32)(0xaab218u), 0x3eu);
    /* 00799323: ret  */ FN_RET(0x00799300); r_esp += 4; return;
}

void f_00799324(void) /* sub_799324 */
{
    FN_ENTER(0x00799324);
    /* 00799324: mov eax, dword ptr [0xaab250] */ r_eax = R32((u32)(0xaab250u));
    /* 00799329: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079932b: je 0x79935b */ if (fZ) goto L_0079935b;
L_0079932d:; BB(0x0079932d);
    /* 0079932d: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 00799334: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00799337: je 0x799350 */ if (fZ) goto L_00799350;
L_00799339:; BB(0x00799339);
    /* 00799339: movsx eax, word ptr [eax + 0x86] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x86u));
    /* 00799340: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799342: jne 0x79934a */ if (!fZ) goto L_0079934a;
L_00799344:; BB(0x00799344);
    /* 00799344: call 0x799108 */ r_esp -= 4; W32(r_esp, 0x799349u); f_00799108();
    /* 00799349: ret  */ FN_RET(0x00799324); r_esp += 4; return;
L_0079934a:; BB(0x0079934a);
    /* 0079934a: call 0x799364 */ r_esp -= 4; W32(r_esp, 0x79934fu); f_00799364();
    /* 0079934f: ret  */ FN_RET(0x00799324); r_esp += 4; return;
L_00799350:; BB(0x00799350);
    /* 00799350: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00799353: je 0x79935a */ if (fZ) goto L_0079935a;
L_00799355:; BB(0x00799355);
    /* 00799355: call 0x799108 */ r_esp -= 4; W32(r_esp, 0x79935au); f_00799108();
L_0079935a:; BB(0x0079935a);
    /* 0079935a: ret  */ FN_RET(0x00799324); r_esp += 4; return;
L_0079935b:; BB(0x0079935b);
    /* 0079935b: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x799360u); f_0079a050();
    /* 00799360: ret  */ FN_RET(0x00799324); r_esp += 4; return;
}

void f_00799364(void) /* sub_799364 */
{
    FN_ENTER(0x00799364);
    /* 00799364: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00799365: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079936b: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799371: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799373: je 0x799384 */ if (fZ) goto L_00799384;
L_00799375:; BB(0x00799375);
    /* 00799375: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x79937au); f_0073d160();
    /* 0079937a: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
L_00799384:; BB(0x00799384);
    /* 00799384: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00799386: push dword ptr [0xaab180] */ { u32 v = R32((u32)(0xaab180u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079938c: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x799391u); f_0073cd8c();
    /* 00799391: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00799394: mov dword ptr [0xaab23c], eax */ W32((u32)(0xaab23cu), r_eax);
    /* 00799399: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079939b: je 0x7993fc */ if (fZ) goto L_007993fc;
L_0079939d:; BB(0x0079939d);
    /* 0079939d: mov eax, dword ptr [0xaab250] */ r_eax = R32((u32)(0xaab250u));
    /* 007993a2: movsx ecx, word ptr [eax + 0x8c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8cu));
    /* 007993a9: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 007993ac: mov dword ptr [esp], 0x43340000 */ W32((u32)(r_esp), 0x43340000u);
    /* 007993b3: mov dword ptr [esp + 4], 0x43700000 */ W32((u32)(r_esp+0x4u), 0x43700000u);
    /* 007993bb: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 007993bd: mov ebx, dword ptr [edx + ecx*4] */ r_ebx = R32((u32)(r_edx+r_ecx*4));
    /* 007993c0: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7993c5u); f_00793168();
    /* 007993c5: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 007993c9: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 007993cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007993cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007993ce: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7993d3u); f_00857e29();
    /* 007993d3: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007993d6: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 007993dc: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 007993e0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007993e3: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 007993e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007993e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007993ea: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x7993efu); f_0073ce70();
    /* 007993ef: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 007993f5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007993f7: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x7993fcu); f_0073d148();
L_007993fc:; BB(0x007993fc);
    /* 007993fc: mov dword ptr [0xaab218], 0x3d */ W32((u32)(0xaab218u), 0x3du);
    /* 00799406: add esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079940c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079940d: ret  */ FN_RET(0x00799364); r_esp += 4; return;
}

void f_00799410(void) /* sub_799410 */
{
    FN_ENTER(0x00799410);
    /* 00799410: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799416: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799418: je 0x79946c */ if (fZ) goto L_0079946c;
L_0079941a:; BB(0x0079941a);
    /* 0079941a: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x79941fu); f_0073ce50();
    /* 0079941f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799421: je 0x799457 */ if (fZ) goto L_00799457;
L_00799423:; BB(0x00799423);
    /* 00799423: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799429: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x79942eu); f_0073d134();
    /* 0079942e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799430: jne 0x799451 */ if (!fZ) goto L_00799451;
L_00799432:; BB(0x00799432);
    /* 00799432: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 00799438: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x79943du); f_007365f4();
    /* 0079943d: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 00799443: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00799445: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00799446: call 0x7f6748 */ r_esp -= 4; W32(r_esp, 0x79944bu); f_007f6748();
    /* 0079944b: call 0x799474 */ r_esp -= 4; W32(r_esp, 0x799450u); f_00799474();
    /* 00799450: ret  */ FN_RET(0x00799410); r_esp += 4; return;
L_00799451:; BB(0x00799451);
    /* 00799451: call 0x798e98 */ r_esp -= 4; W32(r_esp, 0x799456u); f_00798e98();
    /* 00799456: ret  */ FN_RET(0x00799410); r_esp += 4; return;
L_00799457:; BB(0x00799457);
    /* 00799457: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 0079945d: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x799462u); f_0073d114();
    /* 00799462: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00799464: je 0x79946b */ if (fZ) goto L_0079946b;
L_00799466:; BB(0x00799466);
    /* 00799466: call 0x798e98 */ r_esp -= 4; W32(r_esp, 0x79946bu); f_00798e98();
L_0079946b:; BB(0x0079946b);
    /* 0079946b: ret  */ FN_RET(0x00799410); r_esp += 4; return;
L_0079946c:; BB(0x0079946c);
    /* 0079946c: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x799471u); f_0079a050();
    /* 00799471: ret  */ FN_RET(0x00799410); r_esp += 4; return;
}

void f_00799474(void) /* sub_799474 */
{
    FN_ENTER(0x00799474);
    /* 00799474: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 0079947a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079947c: je 0x79948d */ if (fZ) goto L_0079948d;
L_0079947e:; BB(0x0079947e);
    /* 0079947e: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x799483u); f_0073d160();
    /* 00799483: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
L_0079948d:; BB(0x0079948d);
    /* 0079948d: mov dword ptr [0xaab218], 0x37 */ W32((u32)(0xaab218u), 0x37u);
    /* 00799497: ret  */ FN_RET(0x00799474); r_esp += 4; return;
}

void f_00799498(void) /* sub_799498 */
{
    FN_ENTER(0x00799498);
    /* 00799498: mov eax, dword ptr [0xaab250] */ r_eax = R32((u32)(0xaab250u));
    /* 0079949d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079949f: je 0x7994cf */ if (fZ) goto L_007994cf;
L_007994a1:; BB(0x007994a1);
    /* 007994a1: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 007994a8: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007994ab: je 0x7994c4 */ if (fZ) goto L_007994c4;
L_007994ad:; BB(0x007994ad);
    /* 007994ad: movsx eax, word ptr [eax + 0x86] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x86u));
    /* 007994b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007994b6: jne 0x7994be */ if (!fZ) goto L_007994be;
L_007994b8:; BB(0x007994b8);
    /* 007994b8: call 0x799108 */ r_esp -= 4; W32(r_esp, 0x7994bdu); f_00799108();
    /* 007994bd: ret  */ FN_RET(0x00799498); r_esp += 4; return;
L_007994be:; BB(0x007994be);
    /* 007994be: call 0x7994d8 */ r_esp -= 4; W32(r_esp, 0x7994c3u); f_007994d8();
    /* 007994c3: ret  */ FN_RET(0x00799498); r_esp += 4; return;
L_007994c4:; BB(0x007994c4);
    /* 007994c4: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007994c7: je 0x7994ce */ if (fZ) goto L_007994ce;
L_007994c9:; BB(0x007994c9);
    /* 007994c9: call 0x799108 */ r_esp -= 4; W32(r_esp, 0x7994ceu); f_00799108();
L_007994ce:; BB(0x007994ce);
    /* 007994ce: ret  */ FN_RET(0x00799498); r_esp += 4; return;
L_007994cf:; BB(0x007994cf);
    /* 007994cf: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x7994d4u); f_0079a050();
    /* 007994d4: ret  */ FN_RET(0x00799498); r_esp += 4; return;
}

void f_007994d8(void) /* sub_7994D8 */
{
    FN_ENTER(0x007994d8);
    /* 007994d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007994d9: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007994df: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 007994e5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007994e7: je 0x7994f8 */ if (fZ) goto L_007994f8;
L_007994e9:; BB(0x007994e9);
    /* 007994e9: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x7994eeu); f_0073d160();
    /* 007994ee: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
L_007994f8:; BB(0x007994f8);
    /* 007994f8: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007994fa: push dword ptr [0xaab180] */ { u32 v = R32((u32)(0xaab180u)); r_esp -= 4; W32(r_esp, v); }
    /* 00799500: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x799505u); f_0073cd8c();
    /* 00799505: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00799508: mov dword ptr [0xaab23c], eax */ W32((u32)(0xaab23cu), r_eax);
    /* 0079950d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079950f: je 0x799570 */ if (fZ) goto L_00799570;
L_00799511:; BB(0x00799511);
    /* 00799511: mov eax, dword ptr [0xaab250] */ r_eax = R32((u32)(0xaab250u));
    /* 00799516: movsx ecx, word ptr [eax + 0x8c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8cu));
    /* 0079951d: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00799520: mov dword ptr [esp], 0x43340000 */ W32((u32)(r_esp), 0x43340000u);
    /* 00799527: mov dword ptr [esp + 4], 0x43700000 */ W32((u32)(r_esp+0x4u), 0x43700000u);
    /* 0079952f: push 0x73 */ { u32 v = 0x73u; r_esp -= 4; W32(r_esp, v); }
    /* 00799531: mov ebx, dword ptr [edx + ecx*4] */ r_ebx = R32((u32)(r_edx+r_ecx*4));
    /* 00799534: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x799539u); f_00793168();
    /* 00799539: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0079953d: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00799540: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00799541: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00799542: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x799547u); f_00857e29();
    /* 00799547: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079954a: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799550: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00799554: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00799557: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 0079955c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079955d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079955e: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x799563u); f_0073ce70();
    /* 00799563: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799569: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079956b: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x799570u); f_0073d148();
L_00799570:; BB(0x00799570);
    /* 00799570: mov dword ptr [0xaab218], 0x36 */ W32((u32)(0xaab218u), 0x36u);
    /* 0079957a: add esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00799580: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00799581: ret  */ FN_RET(0x007994d8); r_esp += 4; return;
}

void f_00799584(void) /* sub_799584 */
{
    FN_ENTER(0x00799584);
    /* 00799584: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 0079958a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079958c: je 0x7995e0 */ if (fZ) goto L_007995e0;
L_0079958e:; BB(0x0079958e);
    /* 0079958e: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x799593u); f_0073ce50();
    /* 00799593: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799595: je 0x7995cb */ if (fZ) goto L_007995cb;
L_00799597:; BB(0x00799597);
    /* 00799597: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 0079959d: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x7995a2u); f_0073d134();
    /* 007995a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007995a4: jne 0x7995c5 */ if (!fZ) goto L_007995c5;
L_007995a6:; BB(0x007995a6);
    /* 007995a6: mov ecx, dword ptr [0xaab250] */ r_ecx = R32((u32)(0xaab250u));
    /* 007995ac: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x7995b1u); f_007365f4();
    /* 007995b1: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007995b7: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 007995b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007995ba: call 0x7f6748 */ r_esp -= 4; W32(r_esp, 0x7995bfu); f_007f6748();
    /* 007995bf: call 0x7995e8 */ r_esp -= 4; W32(r_esp, 0x7995c4u); f_007995e8();
    /* 007995c4: ret  */ FN_RET(0x00799584); r_esp += 4; return;
L_007995c5:; BB(0x007995c5);
    /* 007995c5: call 0x798e98 */ r_esp -= 4; W32(r_esp, 0x7995cau); f_00798e98();
    /* 007995ca: ret  */ FN_RET(0x00799584); r_esp += 4; return;
L_007995cb:; BB(0x007995cb);
    /* 007995cb: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 007995d1: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x7995d6u); f_0073d114();
    /* 007995d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007995d8: je 0x7995df */ if (fZ) goto L_007995df;
L_007995da:; BB(0x007995da);
    /* 007995da: call 0x798e98 */ r_esp -= 4; W32(r_esp, 0x7995dfu); f_00798e98();
L_007995df:; BB(0x007995df);
    /* 007995df: ret  */ FN_RET(0x00799584); r_esp += 4; return;
L_007995e0:; BB(0x007995e0);
    /* 007995e0: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x7995e5u); f_0079a050();
    /* 007995e5: ret  */ FN_RET(0x00799584); r_esp += 4; return;
}

void f_007995e8(void) /* sub_7995E8 */
{
    FN_ENTER(0x007995e8);
    /* 007995e8: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 007995ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007995f0: je 0x799601 */ if (fZ) goto L_00799601;
L_007995f2:; BB(0x007995f2);
    /* 007995f2: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x7995f7u); f_0073d160();
    /* 007995f7: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
L_00799601:; BB(0x00799601);
    /* 00799601: mov dword ptr [0xaab218], 0x30 */ W32((u32)(0xaab218u), 0x30u);
    /* 0079960b: ret  */ FN_RET(0x007995e8); r_esp += 4; return;
}

void f_0079960c(void) /* sub_79960C */
{
    FN_ENTER(0x0079960c);
    /* 0079960c: mov eax, dword ptr [0xaab250] */ r_eax = R32((u32)(0xaab250u));
    /* 00799611: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799613: je 0x799643 */ if (fZ) goto L_00799643;
L_00799615:; BB(0x00799615);
    /* 00799615: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 0079961c: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0079961f: je 0x799638 */ if (fZ) goto L_00799638;
L_00799621:; BB(0x00799621);
    /* 00799621: movsx eax, word ptr [eax + 0x86] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0x86u));
    /* 00799628: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079962a: jne 0x799632 */ if (!fZ) goto L_00799632;
L_0079962c:; BB(0x0079962c);
    /* 0079962c: call 0x799108 */ r_esp -= 4; W32(r_esp, 0x799631u); f_00799108();
    /* 00799631: ret  */ FN_RET(0x0079960c); r_esp += 4; return;
L_00799632:; BB(0x00799632);
    /* 00799632: call 0x79964c */ r_esp -= 4; W32(r_esp, 0x799637u); f_0079964c();
    /* 00799637: ret  */ FN_RET(0x0079960c); r_esp += 4; return;
L_00799638:; BB(0x00799638);
    /* 00799638: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079963b: je 0x799642 */ if (fZ) goto L_00799642;
L_0079963d:; BB(0x0079963d);
    /* 0079963d: call 0x799108 */ r_esp -= 4; W32(r_esp, 0x799642u); f_00799108();
L_00799642:; BB(0x00799642);
    /* 00799642: ret  */ FN_RET(0x0079960c); r_esp += 4; return;
L_00799643:; BB(0x00799643);
    /* 00799643: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x799648u); f_0079a050();
    /* 00799648: ret  */ FN_RET(0x0079960c); r_esp += 4; return;
}

void f_0079964c(void) /* sub_79964C */
{
    FN_ENTER(0x0079964c);
    /* 0079964c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079964d: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00799653: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799659: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079965b: je 0x79966c */ if (fZ) goto L_0079966c;
L_0079965d:; BB(0x0079965d);
    /* 0079965d: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x799662u); f_0073d160();
    /* 00799662: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
L_0079966c:; BB(0x0079966c);
    /* 0079966c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079966e: push dword ptr [0xaab180] */ { u32 v = R32((u32)(0xaab180u)); r_esp -= 4; W32(r_esp, v); }
    /* 00799674: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x799679u); f_0073cd8c();
    /* 00799679: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079967c: mov dword ptr [0xaab23c], eax */ W32((u32)(0xaab23cu), r_eax);
    /* 00799681: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799683: je 0x7996e4 */ if (fZ) goto L_007996e4;
L_00799685:; BB(0x00799685);
    /* 00799685: mov eax, dword ptr [0xaab250] */ r_eax = R32((u32)(0xaab250u));
    /* 0079968a: movsx ecx, word ptr [eax + 0x8c] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x8cu));
    /* 00799691: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 00799694: mov dword ptr [esp], 0x43340000 */ W32((u32)(r_esp), 0x43340000u);
    /* 0079969b: mov dword ptr [esp + 4], 0x43700000 */ W32((u32)(r_esp+0x4u), 0x43700000u);
    /* 007996a3: push 0x6e */ { u32 v = 0x6eu; r_esp -= 4; W32(r_esp, v); }
    /* 007996a5: mov ebx, dword ptr [edx + ecx*4] */ r_ebx = R32((u32)(r_edx+r_ecx*4));
    /* 007996a8: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7996adu); f_00793168();
    /* 007996ad: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 007996b1: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 007996b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007996b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007996b6: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7996bbu); f_00857e29();
    /* 007996bb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007996be: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 007996c4: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 007996c8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007996cb: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 007996d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007996d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007996d2: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x7996d7u); f_0073ce70();
    /* 007996d7: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 007996dd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007996df: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x7996e4u); f_0073d148();
L_007996e4:; BB(0x007996e4);
    /* 007996e4: mov dword ptr [0xaab218], 0x2f */ W32((u32)(0xaab218u), 0x2fu);
    /* 007996ee: add esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007996f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007996f5: ret  */ FN_RET(0x0079964c); r_esp += 4; return;
}

void f_007996f8(void) /* sub_7996F8 */
{
    FN_ENTER(0x007996f8);
    /* 007996f8: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 007996fe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799700: je 0x79975c */ if (fZ) goto L_0079975c;
L_00799702:; BB(0x00799702);
    /* 00799702: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x799707u); f_0073ce50();
    /* 00799707: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799709: je 0x799747 */ if (fZ) goto L_00799747;
L_0079970b:; BB(0x0079970b);
    /* 0079970b: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799711: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x799716u); f_0073d134();
    /* 00799716: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799718: jne 0x799741 */ if (!fZ) goto L_00799741;
L_0079971a:; BB(0x0079971a);
    /* 0079971a: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00799720: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x799725u); f_0068d5a8();
    /* 00799725: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00799726: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00799728: je 0x79975b */ if (fZ) goto L_0079975b;
L_0079972a:; BB(0x0079972a);
    /* 0079972a: push dword ptr [eax + 0xeb4] */ { u32 v = R32((u32)(r_eax+0xeb4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00799730: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 00799736: call 0x7f3274 */ r_esp -= 4; W32(r_esp, 0x79973bu); f_007f3274();
    /* 0079973b: call 0x799764 */ r_esp -= 4; W32(r_esp, 0x799740u); f_00799764();
    /* 00799740: ret  */ FN_RET(0x007996f8); r_esp += 4; return;
L_00799741:; BB(0x00799741);
    /* 00799741: call 0x798e98 */ r_esp -= 4; W32(r_esp, 0x799746u); f_00798e98();
    /* 00799746: ret  */ FN_RET(0x007996f8); r_esp += 4; return;
L_00799747:; BB(0x00799747);
    /* 00799747: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 0079974d: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x799752u); f_0073d114();
    /* 00799752: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00799754: je 0x79975b */ if (fZ) goto L_0079975b;
L_00799756:; BB(0x00799756);
    /* 00799756: call 0x798e98 */ r_esp -= 4; W32(r_esp, 0x79975bu); f_00798e98();
L_0079975b:; BB(0x0079975b);
    /* 0079975b: ret  */ FN_RET(0x007996f8); r_esp += 4; return;
L_0079975c:; BB(0x0079975c);
    /* 0079975c: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x799761u); f_0079a050();
    /* 00799761: ret  */ FN_RET(0x007996f8); r_esp += 4; return;
}

void f_00799764(void) /* sub_799764 */
{
    FN_ENTER(0x00799764);
    /* 00799764: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00799765: sub esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079976b: mov esi, dword ptr [0xa95df0] */ r_esi = R32((u32)(0xa95df0u));
    /* 00799771: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x799776u); f_00816d30();
    /* 00799776: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079977c: call 0x816cf0 */ r_esp -= 4; W32(r_esp, 0x799781u); f_00816cf0();
    /* 00799781: push 0x14d */ { u32 v = 0x14du; r_esp -= 4; W32(r_esp, v); }
    /* 00799786: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x79978bu); f_0079317c();
    /* 0079978b: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0079978f: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00799794: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00799795: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00799796: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79979bu); f_00857e29();
    /* 0079979b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079979e: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x7997a3u); f_00816d30();
    /* 007997a3: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007997a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007997a7: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x7997acu); f_00816cb8();
    /* 007997ac: push 0x85 */ { u32 v = 0x85u; r_esp -= 4; W32(r_esp, v); }
    /* 007997b1: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x7997b6u); f_00793168();
    /* 007997b6: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 007997ba: add esi, 0x2cc */ {  u32 a = r_esi; u32 b = 0x2ccu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 007997c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007997c1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007997c2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007997c3: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x7997c8u); f_00857e29();
    /* 007997c8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007997cb: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 007997d1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007997d3: je 0x7997e4 */ if (fZ) goto L_007997e4;
L_007997d5:; BB(0x007997d5);
    /* 007997d5: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x7997dau); f_0073d160();
    /* 007997da: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
L_007997e4:; BB(0x007997e4);
    /* 007997e4: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 007997ea: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007997ec: je 0x79982b */ if (fZ) goto L_0079982b;
L_007997ee:; BB(0x007997ee);
    /* 007997ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007997f0: je 0x7997fd */ if (fZ) goto L_007997fd;
L_007997f2:; BB(0x007997f2);
    /* 007997f2: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007997f5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007997f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007997f8: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x7997fdu); f_0073ae38();
L_007997fd:; BB(0x007997fd);
    /* 007997fd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00799800: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00799801: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x799806u); f_00816cb8();
    /* 00799806: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00799807: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079980d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079980f: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 00799814: call 0x7f32ac */ r_esp -= 4; W32(r_esp, 0x799819u); f_007f32ac();
    /* 00799819: mov dword ptr [0xaab218], 0x2c */ W32((u32)(0xaab218u), 0x2cu);
    /* 00799823: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00799829: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079982a: ret  */ FN_RET(0x00799764); r_esp += 4; return;
L_0079982b:; BB(0x0079982b);
    /* 0079982b: push 0xeb */ { u32 v = 0xebu; r_esp -= 4; W32(r_esp, v); }
    /* 00799830: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x799835u); f_0073ec50();
    /* 00799835: mov esi, eax */ r_esi = r_eax;
    /* 00799837: push 0xec */ { u32 v = 0xecu; r_esp -= 4; W32(r_esp, v); }
    /* 0079983c: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x799841u); f_0073ec50();
    /* 00799841: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00799842: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00799843: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x799848u); f_0073a888();
    /* 00799848: mov ecx, eax */ r_ecx = r_eax;
    /* 0079984a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079984d: mov dword ptr [0xaab270], ecx */ W32((u32)(0xaab270u), r_ecx);
    /* 00799853: jmp 0x7997ee */ goto L_007997ee;
}

void f_00799858(void) /* sub_799858 */
{
    FN_ENTER(0x00799858);
    /* 00799858: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 0079985e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799860: je 0x7998d0 */ if (fZ) goto L_007998d0;
L_00799862:; BB(0x00799862);
    /* 00799862: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x799867u); f_007365f4();
    /* 00799867: mov edx, dword ptr [0xaab254] */ r_edx = R32((u32)(0xaab254u));
    /* 0079986d: movzx edx, word ptr [edx + 0x84] */ r_edx = (u32)R16((u32)(r_edx+0x84u));
    /* 00799874: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00799877: je 0x7998ad */ if (fZ) goto L_007998ad;
L_00799879:; BB(0x00799879);
    /* 00799879: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079987b: je 0x7998ca */ if (fZ) goto L_007998ca;
L_0079987d:; BB(0x0079987d);
    /* 0079987d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799880: je 0x7998c4 */ if (fZ) goto L_007998c4;
L_00799882:; BB(0x00799882);
    /* 00799882: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799885: je 0x7998be */ if (fZ) goto L_007998be;
L_00799887:; BB(0x00799887);
    /* 00799887: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079988a: je 0x7998b8 */ if (fZ) goto L_007998b8;
L_0079988c:; BB(0x0079988c);
    /* 0079988c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079988f: je 0x7998a7 */ if (fZ) goto L_007998a7;
L_00799891:; BB(0x00799891);
    /* 00799891: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799894: jne 0x79989c */ if (!fZ) goto L_0079989c;
L_00799896:; BB(0x00799896);
    /* 00799896: call 0x798618 */ r_esp -= 4; W32(r_esp, 0x79989bu); f_00798618();
    /* 0079989b: ret  */ FN_RET(0x00799858); r_esp += 4; return;
L_0079989c:; BB(0x0079989c);
    /* 0079989c: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079989f: jne 0x7998b7 */ if (!fZ) goto L_007998b7;
L_007998a1:; BB(0x007998a1);
    /* 007998a1: call 0x7998d8 */ r_esp -= 4; W32(r_esp, 0x7998a6u); f_007998d8();
    /* 007998a6: ret  */ FN_RET(0x00799858); r_esp += 4; return;
L_007998a7:; BB(0x007998a7);
    /* 007998a7: call 0x799908 */ r_esp -= 4; W32(r_esp, 0x7998acu); f_00799908();
    /* 007998ac: ret  */ FN_RET(0x00799858); r_esp += 4; return;
L_007998ad:; BB(0x007998ad);
    /* 007998ad: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007998b0: je 0x7998b7 */ if (fZ) goto L_007998b7;
L_007998b2:; BB(0x007998b2);
    /* 007998b2: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x7998b7u); f_0079a050();
L_007998b7:; BB(0x007998b7);
    /* 007998b7: ret  */ FN_RET(0x00799858); r_esp += 4; return;
L_007998b8:; BB(0x007998b8);
    /* 007998b8: call 0x799994 */ r_esp -= 4; W32(r_esp, 0x7998bdu); f_00799994();
    /* 007998bd: ret  */ FN_RET(0x00799858); r_esp += 4; return;
L_007998be:; BB(0x007998be);
    /* 007998be: call 0x7999ac */ r_esp -= 4; W32(r_esp, 0x7998c3u); f_007999ac();
    /* 007998c3: ret  */ FN_RET(0x00799858); r_esp += 4; return;
L_007998c4:; BB(0x007998c4);
    /* 007998c4: call 0x7999c4 */ r_esp -= 4; W32(r_esp, 0x7998c9u); f_007999c4();
    /* 007998c9: ret  */ FN_RET(0x00799858); r_esp += 4; return;
L_007998ca:; BB(0x007998ca);
    /* 007998ca: call 0x7999dc */ r_esp -= 4; W32(r_esp, 0x7998cfu); f_007999dc();
    /* 007998cf: ret  */ FN_RET(0x00799858); r_esp += 4; return;
L_007998d0:; BB(0x007998d0);
    /* 007998d0: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x7998d5u); f_0079a050();
    /* 007998d5: ret  */ FN_RET(0x00799858); r_esp += 4; return;
}

void f_007998d8(void) /* sub_7998D8 */
{
    FN_ENTER(0x007998d8);
    /* 007998d8: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 007998de: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x7998e3u); f_0073600c();
    /* 007998e3: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 007998e9: push dword ptr [0xaca338] */ { u32 v = R32((u32)(0xaca338u)); r_esp -= 4; W32(r_esp, v); }
    /* 007998ef: call 0x78b54c */ r_esp -= 4; W32(r_esp, 0x7998f4u); f_0078b54c();
    /* 007998f4: mov dword ptr [0xaab218], 0x52 */ W32((u32)(0xaab218u), 0x52u);
    /* 007998fe: mov dword ptr [0xaab234], eax */ W32((u32)(0xaab234u), r_eax);
    /* 00799903: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00799906: ret  */ FN_RET(0x007998d8); r_esp += 4; return;
}

void f_00799907(void)
{
    FN_ENTER(0x00799907);
    /* 00799907: nop  */ ;
    /* 00799908: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079990b: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 00799911: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x799916u); f_0073600c();
    /* 00799916: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 0079991c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079991e: je 0x79992f */ if (fZ) goto L_0079992f;
L_00799920:; BB(0x00799920);
    /* 00799920: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x799925u); f_0073d160();
    /* 00799925: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
L_0079992f:; BB(0x0079992f);
    /* 0079992f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00799931: push dword ptr [0xaab180] */ { u32 v = R32((u32)(0xaab180u)); r_esp -= 4; W32(r_esp, v); }
    /* 00799937: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x79993cu); f_0073cd8c();
    /* 0079993c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079993f: mov dword ptr [0xaab23c], eax */ W32((u32)(0xaab23cu), r_eax);
    /* 00799944: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799946: je 0x799984 */ if (fZ) goto L_00799984;
L_00799948:; BB(0x00799948);
    /* 00799948: mov dword ptr [esp], 0x43340000 */ W32((u32)(r_esp), 0x43340000u);
    /* 0079994f: mov dword ptr [esp + 4], 0x43700000 */ W32((u32)(r_esp+0x4u), 0x43700000u);
    /* 00799957: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 0079995c: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x799961u); f_00793168();
    /* 00799961: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00799962: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799968: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0079996b: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 00799970: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00799971: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00799972: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x799977u); f_0073ce70();
    /* 00799977: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 0079997d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079997f: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x799984u); f_0073d148();
L_00799984:; BB(0x00799984);
    /* 00799984: mov dword ptr [0xaab218], 0x49 */ W32((u32)(0xaab218u), 0x49u);
    /* 0079998e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00799991: ret  */ FN_RET(0x00799907); r_esp += 4; return;
}

void f_00799908(void) /* sub_799908 */
{
    FN_ENTER(0x00799908);
    /* 00799908: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079990b: mov ecx, dword ptr [0xaab254] */ r_ecx = R32((u32)(0xaab254u));
    /* 00799911: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x799916u); f_0073600c();
    /* 00799916: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 0079991c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079991e: je 0x79992f */ if (fZ) goto L_0079992f;
L_00799920:; BB(0x00799920);
    /* 00799920: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x799925u); f_0073d160();
    /* 00799925: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
L_0079992f:; BB(0x0079992f);
    /* 0079992f: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00799931: push dword ptr [0xaab180] */ { u32 v = R32((u32)(0xaab180u)); r_esp -= 4; W32(r_esp, v); }
    /* 00799937: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x79993cu); f_0073cd8c();
    /* 0079993c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079993f: mov dword ptr [0xaab23c], eax */ W32((u32)(0xaab23cu), r_eax);
    /* 00799944: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799946: je 0x799984 */ if (fZ) goto L_00799984;
L_00799948:; BB(0x00799948);
    /* 00799948: mov dword ptr [esp], 0x43340000 */ W32((u32)(r_esp), 0x43340000u);
    /* 0079994f: mov dword ptr [esp + 4], 0x43700000 */ W32((u32)(r_esp+0x4u), 0x43700000u);
    /* 00799957: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 0079995c: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x799961u); f_00793168();
    /* 00799961: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00799962: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799968: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0079996b: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 00799970: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00799971: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00799972: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x799977u); f_0073ce70();
    /* 00799977: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 0079997d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079997f: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x799984u); f_0073d148();
L_00799984:; BB(0x00799984);
    /* 00799984: mov dword ptr [0xaab218], 0x49 */ W32((u32)(0xaab218u), 0x49u);
    /* 0079998e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00799991: ret  */ FN_RET(0x00799908); r_esp += 4; return;
}

void f_00799994(void) /* sub_799994 */
{
    FN_ENTER(0x00799994);
    /* 00799994: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079999a: call 0x7f65f4 */ r_esp -= 4; W32(r_esp, 0x79999fu); f_007f65f4();
    /* 0079999f: mov dword ptr [0xaab218], 0x41 */ W32((u32)(0xaab218u), 0x41u);
    /* 007999a9: ret  */ FN_RET(0x00799994); r_esp += 4; return;
}

void f_007999ac(void) /* sub_7999AC */
{
    FN_ENTER(0x007999ac);
    /* 007999ac: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007999b2: call 0x7f65f4 */ r_esp -= 4; W32(r_esp, 0x7999b7u); f_007f65f4();
    /* 007999b7: mov dword ptr [0xaab218], 0x3b */ W32((u32)(0xaab218u), 0x3bu);
    /* 007999c1: ret  */ FN_RET(0x007999ac); r_esp += 4; return;
}

void f_007999c4(void) /* sub_7999C4 */
{
    FN_ENTER(0x007999c4);
    /* 007999c4: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007999ca: call 0x7f65f4 */ r_esp -= 4; W32(r_esp, 0x7999cfu); f_007f65f4();
    /* 007999cf: mov dword ptr [0xaab218], 0x34 */ W32((u32)(0xaab218u), 0x34u);
    /* 007999d9: ret  */ FN_RET(0x007999c4); r_esp += 4; return;
}

void f_007999dc(void) /* sub_7999DC */
{
    FN_ENTER(0x007999dc);
    /* 007999dc: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007999e2: call 0x7f65f4 */ r_esp -= 4; W32(r_esp, 0x7999e7u); f_007f65f4();
    /* 007999e7: mov dword ptr [0xaab218], 0x2d */ W32((u32)(0xaab218u), 0x2du);
    /* 007999f1: ret  */ FN_RET(0x007999dc); r_esp += 4; return;
}

void f_007999f4(void) /* sub_7999F4 */
{
    FN_ENTER(0x007999f4);
    /* 007999f4: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 007999fa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007999fc: je 0x799a38 */ if (fZ) goto L_00799a38;
L_007999fe:; BB(0x007999fe);
    /* 007999fe: call 0x73b170 */ r_esp -= 4; W32(r_esp, 0x799a03u); f_0073b170();
    /* 00799a03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00799a05: je 0x799a37 */ if (fZ) goto L_00799a37;
L_00799a07:; BB(0x00799a07);
    /* 00799a07: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x799a0cu); f_00694c6c();
    /* 00799a0c: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 00799a12: or edx, dword ptr [0xa0f698] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00799a18: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00799a19: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00799a1c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00799a1e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00799a20: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00799a22: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00799a29: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x799a2eu); f_007c1160();
    /* 00799a2e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00799a30: je 0x799a37 */ if (fZ) goto L_00799a37;
L_00799a32:; BB(0x00799a32);
    /* 00799a32: call 0x799a40 */ r_esp -= 4; W32(r_esp, 0x799a37u); f_00799a40();
L_00799a37:; BB(0x00799a37);
    /* 00799a37: ret  */ FN_RET(0x007999f4); r_esp += 4; return;
L_00799a38:; BB(0x00799a38);
    /* 00799a38: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x799a3du); f_0079a050();
    /* 00799a3d: ret  */ FN_RET(0x007999f4); r_esp += 4; return;
}

void f_00799a40(void) /* sub_799A40 */
{
    FN_ENTER(0x00799a40);
    /* 00799a40: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00799a41: mov ebp, esp */ r_ebp = r_esp;
    /* 00799a43: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00799a45: push 0x8f53f4 */ { u32 v = 0x8f53f4u; r_esp -= 4; W32(r_esp, v); }
    /* 00799a4a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00799a50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00799a51: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00799a58: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00799a5b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00799a5e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00799a61: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00799a64: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00799a67: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 00799a6d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799a6f: je 0x799a80 */ if (fZ) goto L_00799a80;
L_00799a71:; BB(0x00799a71);
    /* 00799a71: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x799a76u); f_007127b0();
    /* 00799a76: mov dword ptr [0xaab270], 0 */ W32((u32)(0xaab270u), 0x0u);
L_00799a80:; BB(0x00799a80);
    /* 00799a80: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799a86: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799a88: je 0x799a99 */ if (fZ) goto L_00799a99;
L_00799a8a:; BB(0x00799a8a);
    /* 00799a8a: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x799a8fu); f_0073d160();
    /* 00799a8f: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
L_00799a99:; BB(0x00799a99);
    /* 00799a99: mov eax, dword ptr [0xaab244] */ r_eax = R32((u32)(0xaab244u));
    /* 00799a9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799aa0: je 0x799ac2 */ if (fZ) goto L_00799ac2;
L_00799aa2:; BB(0x00799aa2);
    /* 00799aa2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00799aa4: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x799aa9u); f_00791748();
    /* 00799aa9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00799aaa: mov dword ptr [0xaab218], 0x1f */ W32((u32)(0xaab218u), 0x1fu);
    /* 00799ab4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00799ab7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00799abe: mov esp, ebp */ r_esp = r_ebp;
    /* 00799ac0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00799ac1: ret  */ FN_RET(0x00799a40); r_esp += 4; return;
L_00799ac2:; BB(0x00799ac2);
    /* 00799ac2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00799ac9: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00799acb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x799ad0u); f_005caba4();
    /* 00799ad0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00799ad1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00799ad4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799ad6: je 0x799b0c */ if (fZ) goto L_00799b0c;
L_00799ad8:; BB(0x00799ad8);
    /* 00799ad8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00799adf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00799ae6: push dword ptr [0xaab180] */ { u32 v = R32((u32)(0xaab180u)); r_esp -= 4; W32(r_esp, v); }
    /* 00799aec: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00799aef: call 0x723afc */ r_esp -= 4; W32(r_esp, 0x799af4u); f_00723afc();
    /* 00799af4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00799af7: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00799afe:; BB(0x00799afe);
    /* 00799afe: mov dword ptr [0xaab244], eax */ W32((u32)(0xaab244u), r_eax);
    /* 00799b03: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00799b0a: jmp 0x799aa2 */ goto L_00799aa2;
L_00799b0c:; BB(0x00799b0c);
    /* 00799b0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00799b0e: jmp 0x799afe */ goto L_00799afe;
}

void f_00799a60(void)
{
    FN_ENTER(0x00799a60);
    goto L_00799a60;
L_00799a4c:; BB(0x00799a4c);
    /* 00799a4c: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00799a4e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00799a50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00799a51: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00799a58: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00799a5b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00799a5e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
L_00799a60:; BB(0x00799a60);
    /* 00799a60: in al, 0x89 */ UNSUP(0x00799a60, "in al, 0x89");
    /* 00799a61: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00799a62: jne 0x799a4c */ if (!fZ) goto L_00799a4c;
L_00799a64:; BB(0x00799a64);
    /* 00799a64: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00799a67: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 00799a6d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799a6f: je 0x799a80 */ if (fZ) goto L_00799a80;
L_00799a71:; BB(0x00799a71);
    /* 00799a71: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x799a76u); f_007127b0();
    /* 00799a76: mov dword ptr [0xaab270], 0 */ W32((u32)(0xaab270u), 0x0u);
L_00799a80:; BB(0x00799a80);
    /* 00799a80: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799a86: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799a88: je 0x799a99 */ if (fZ) goto L_00799a99;
L_00799a8a:; BB(0x00799a8a);
    /* 00799a8a: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x799a8fu); f_0073d160();
    /* 00799a8f: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
L_00799a99:; BB(0x00799a99);
    /* 00799a99: mov eax, dword ptr [0xaab244] */ r_eax = R32((u32)(0xaab244u));
    /* 00799a9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799aa0: je 0x799ac2 */ if (fZ) goto L_00799ac2;
L_00799aa2:; BB(0x00799aa2);
    /* 00799aa2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00799aa4: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x799aa9u); f_00791748();
    /* 00799aa9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00799aaa: mov dword ptr [0xaab218], 0x1f */ W32((u32)(0xaab218u), 0x1fu);
    /* 00799ab4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00799ab7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00799abe: mov esp, ebp */ r_esp = r_ebp;
    /* 00799ac0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00799ac1: ret  */ FN_RET(0x00799a60); r_esp += 4; return;
L_00799ac2:; BB(0x00799ac2);
    /* 00799ac2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00799ac9: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00799acb: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x799ad0u); f_005caba4();
    /* 00799ad0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00799ad1: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00799ad4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799ad6: je 0x799b0c */ if (fZ) goto L_00799b0c;
L_00799ad8:; BB(0x00799ad8);
    /* 00799ad8: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00799adf: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00799ae6: push dword ptr [0xaab180] */ { u32 v = R32((u32)(0xaab180u)); r_esp -= 4; W32(r_esp, v); }
    /* 00799aec: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00799aef: call 0x723afc */ r_esp -= 4; W32(r_esp, 0x799af4u); f_00723afc();
    /* 00799af4: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00799af7: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00799afe:; BB(0x00799afe);
    /* 00799afe: mov dword ptr [0xaab244], eax */ W32((u32)(0xaab244u), r_eax);
    /* 00799b03: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00799b0a: jmp 0x799aa2 */ goto L_00799aa2;
L_00799b0c:; BB(0x00799b0c);
    /* 00799b0c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00799b0e: jmp 0x799afe */ goto L_00799afe;
}

void f_00799b10(void) /* sub_799B10 */
{
    FN_ENTER(0x00799b10);
    /* 00799b10: mov eax, dword ptr [0xaab268] */ r_eax = R32((u32)(0xaab268u));
    /* 00799b15: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799b17: je 0x799b2a */ if (fZ) goto L_00799b2a;
L_00799b19:; BB(0x00799b19);
    /* 00799b19: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 00799b20: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00799b22: je 0x799b29 */ if (fZ) goto L_00799b29;
L_00799b24:; BB(0x00799b24);
    /* 00799b24: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x799b29u); f_0079a050();
L_00799b29:; BB(0x00799b29);
    /* 00799b29: ret  */ FN_RET(0x00799b10); r_esp += 4; return;
L_00799b2a:; BB(0x00799b2a);
    /* 00799b2a: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x799b2fu); f_0079a050();
    /* 00799b2f: ret  */ FN_RET(0x00799b10); r_esp += 4; return;
}

void f_00799b30(void) /* sub_799B30 */
{
    FN_ENTER(0x00799b30);
    /* 00799b30: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799b36: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799b38: je 0x799bac */ if (fZ) goto L_00799bac;
L_00799b3a:; BB(0x00799b3a);
    /* 00799b3a: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x799b3fu); f_0073ce50();
    /* 00799b3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799b41: je 0x799b97 */ if (fZ) goto L_00799b97;
L_00799b43:; BB(0x00799b43);
    /* 00799b43: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799b49: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x799b4eu); f_0073d134();
    /* 00799b4e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799b50: jne 0x799b91 */ if (!fZ) goto L_00799b91;
L_00799b52:; BB(0x00799b52);
    /* 00799b52: mov ecx, dword ptr [0xaab240] */ r_ecx = R32((u32)(0xaab240u));
    /* 00799b58: call 0x723eb8 */ r_esp -= 4; W32(r_esp, 0x799b5du); f_00723eb8();
    /* 00799b5d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00799b5e: call 0x819f28 */ r_esp -= 4; W32(r_esp, 0x799b63u); f_00819f28();
    /* 00799b63: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00799b64: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799b66: je 0x799b8b */ if (fZ) goto L_00799b8b;
L_00799b68:; BB(0x00799b68);
    /* 00799b68: mov ecx, dword ptr [0xaab240] */ r_ecx = R32((u32)(0xaab240u));
    /* 00799b6e: call 0x723eb8 */ r_esp -= 4; W32(r_esp, 0x799b73u); f_00723eb8();
    /* 00799b73: push dword ptr [0xaab198] */ { u32 v = R32((u32)(0xaab198u)); r_esp -= 4; W32(r_esp, v); }
    /* 00799b79: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 00799b7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00799b80: call 0x7f68d0 */ r_esp -= 4; W32(r_esp, 0x799b85u); f_007f68d0();
    /* 00799b85: call 0x799bb4 */ r_esp -= 4; W32(r_esp, 0x799b8au); f_00799bb4();
    /* 00799b8a: ret  */ FN_RET(0x00799b30); r_esp += 4; return;
L_00799b8b:; BB(0x00799b8b);
    /* 00799b8b: call 0x79e358 */ r_esp -= 4; W32(r_esp, 0x799b90u); f_0079e358();
    /* 00799b90: ret  */ FN_RET(0x00799b30); r_esp += 4; return;
L_00799b91:; BB(0x00799b91);
    /* 00799b91: call 0x798e98 */ r_esp -= 4; W32(r_esp, 0x799b96u); f_00798e98();
    /* 00799b96: ret  */ FN_RET(0x00799b30); r_esp += 4; return;
L_00799b97:; BB(0x00799b97);
    /* 00799b97: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799b9d: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x799ba2u); f_0073d114();
    /* 00799ba2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00799ba4: je 0x799bab */ if (fZ) goto L_00799bab;
L_00799ba6:; BB(0x00799ba6);
    /* 00799ba6: call 0x798e98 */ r_esp -= 4; W32(r_esp, 0x799babu); f_00798e98();
L_00799bab:; BB(0x00799bab);
    /* 00799bab: ret  */ FN_RET(0x00799b30); r_esp += 4; return;
L_00799bac:; BB(0x00799bac);
    /* 00799bac: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x799bb1u); f_0079a050();
    /* 00799bb1: ret  */ FN_RET(0x00799b30); r_esp += 4; return;
}

void f_00799bb4(void) /* sub_799BB4 */
{
    FN_ENTER(0x00799bb4);
    /* 00799bb4: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799bba: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00799bbc: je 0x799bcd */ if (fZ) goto L_00799bcd;
L_00799bbe:; BB(0x00799bbe);
    /* 00799bbe: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x799bc3u); f_0073d160();
    /* 00799bc3: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
L_00799bcd:; BB(0x00799bcd);
    /* 00799bcd: mov dword ptr [0xaab218], 0x25 */ W32((u32)(0xaab218u), 0x25u);
    /* 00799bd7: ret  */ FN_RET(0x00799bb4); r_esp += 4; return;
}

void f_00799bd8(void) /* sub_799BD8 */
{
    FN_ENTER(0x00799bd8);
    /* 00799bd8: mov ecx, dword ptr [0xaab270] */ r_ecx = R32((u32)(0xaab270u));
    /* 00799bde: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799be0: je 0x799c21 */ if (fZ) goto L_00799c21;
L_00799be2:; BB(0x00799be2);
    /* 00799be2: call 0x73b170 */ r_esp -= 4; W32(r_esp, 0x799be7u); f_0073b170();
    /* 00799be7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00799be9: je 0x799c20 */ if (fZ) goto L_00799c20;
L_00799beb:; BB(0x00799beb);
    /* 00799beb: call 0x694c6c */ r_esp -= 4; W32(r_esp, 0x799bf0u); f_00694c6c();
    /* 00799bf0: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 00799bf6: or edx, dword ptr [0xa0f698] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00799bfc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00799bfd: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 00799c00: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00799c02: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00799c04: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00799c06: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00799c0d: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x799c12u); f_007c1160();
    /* 00799c12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00799c14: je 0x799c20 */ if (fZ) goto L_00799c20;
L_00799c16:; BB(0x00799c16);
    /* 00799c16: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x799c1bu); f_007bebe8();
    /* 00799c1b: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x799c20u); f_0079a050();
L_00799c20:; BB(0x00799c20);
    /* 00799c20: ret  */ FN_RET(0x00799bd8); r_esp += 4; return;
L_00799c21:; BB(0x00799c21);
    /* 00799c21: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x799c26u); f_0079a050();
    /* 00799c26: ret  */ FN_RET(0x00799bd8); r_esp += 4; return;
}

void f_00799c28(void) /* sub_799C28 */
{
    FN_ENTER(0x00799c28);
    /* 00799c28: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799c2e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799c30: je 0x799c9e */ if (fZ) goto L_00799c9e;
L_00799c32:; BB(0x00799c32);
    /* 00799c32: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x799c37u); f_0073ce50();
    /* 00799c37: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799c39: je 0x799c89 */ if (fZ) goto L_00799c89;
L_00799c3b:; BB(0x00799c3b);
    /* 00799c3b: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799c41: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x799c46u); f_0073d134();
    /* 00799c46: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799c48: jne 0x799c83 */ if (!fZ) goto L_00799c83;
L_00799c4a:; BB(0x00799c4a);
    /* 00799c4a: mov ecx, dword ptr [0xaab244] */ r_ecx = R32((u32)(0xaab244u));
    /* 00799c50: call 0x723eb8 */ r_esp -= 4; W32(r_esp, 0x799c55u); f_00723eb8();
    /* 00799c55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00799c56: call 0x819f28 */ r_esp -= 4; W32(r_esp, 0x799c5bu); f_00819f28();
    /* 00799c5b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00799c5c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799c5e: je 0x799c7d */ if (fZ) goto L_00799c7d;
L_00799c60:; BB(0x00799c60);
    /* 00799c60: mov ecx, dword ptr [0xaab244] */ r_ecx = R32((u32)(0xaab244u));
    /* 00799c66: call 0x723eb8 */ r_esp -= 4; W32(r_esp, 0x799c6bu); f_00723eb8();
    /* 00799c6b: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 00799c71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00799c72: call 0x7f31ec */ r_esp -= 4; W32(r_esp, 0x799c77u); f_007f31ec();
    /* 00799c77: call 0x799ca4 */ r_esp -= 4; W32(r_esp, 0x799c7cu); f_00799ca4();
    /* 00799c7c: ret  */ FN_RET(0x00799c28); r_esp += 4; return;
L_00799c7d:; BB(0x00799c7d);
    /* 00799c7d: call 0x79e358 */ r_esp -= 4; W32(r_esp, 0x799c82u); f_0079e358();
    /* 00799c82: ret  */ FN_RET(0x00799c28); r_esp += 4; return;
L_00799c83:; BB(0x00799c83);
    /* 00799c83: call 0x798e98 */ r_esp -= 4; W32(r_esp, 0x799c88u); f_00798e98();
    /* 00799c88: ret  */ FN_RET(0x00799c28); r_esp += 4; return;
L_00799c89:; BB(0x00799c89);
    /* 00799c89: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799c8f: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x799c94u); f_0073d114();
    /* 00799c94: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00799c96: je 0x799c9d */ if (fZ) goto L_00799c9d;
L_00799c98:; BB(0x00799c98);
    /* 00799c98: call 0x798e98 */ r_esp -= 4; W32(r_esp, 0x799c9du); f_00798e98();
L_00799c9d:; BB(0x00799c9d);
    /* 00799c9d: ret  */ FN_RET(0x00799c28); r_esp += 4; return;
L_00799c9e:; BB(0x00799c9e);
    /* 00799c9e: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x799ca3u); f_0079a050();
    /* 00799ca3: ret  */ FN_RET(0x00799c28); r_esp += 4; return;
}

void f_00799ca4(void) /* sub_799CA4 */
{
    FN_ENTER(0x00799ca4);
    /* 00799ca4: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799caa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00799cac: je 0x799cbd */ if (fZ) goto L_00799cbd;
L_00799cae:; BB(0x00799cae);
    /* 00799cae: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x799cb3u); f_0073d160();
    /* 00799cb3: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
L_00799cbd:; BB(0x00799cbd);
    /* 00799cbd: mov dword ptr [0xaab218], 0x21 */ W32((u32)(0xaab218u), 0x21u);
    /* 00799cc7: ret  */ FN_RET(0x00799ca4); r_esp += 4; return;
}

void f_00799cc8(void) /* sub_799CC8 */
{
    FN_ENTER(0x00799cc8);
    /* 00799cc8: mov eax, dword ptr [0xaab244] */ r_eax = R32((u32)(0xaab244u));
    /* 00799ccd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799ccf: je 0x799ce9 */ if (fZ) goto L_00799ce9;
L_00799cd1:; BB(0x00799cd1);
    /* 00799cd1: movzx eax, byte ptr [eax + 0x1d] */ r_eax = (u32)R8((u32)(r_eax+0x1du));
    /* 00799cd5: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00799cd7: je 0x799cdf */ if (fZ) goto L_00799cdf;
L_00799cd9:; BB(0x00799cd9);
    /* 00799cd9: call 0x799cf0 */ r_esp -= 4; W32(r_esp, 0x799cdeu); f_00799cf0();
    /* 00799cde: ret  */ FN_RET(0x00799cc8); r_esp += 4; return;
L_00799cdf:; BB(0x00799cdf);
    /* 00799cdf: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00799ce1: je 0x799ce8 */ if (fZ) goto L_00799ce8;
L_00799ce3:; BB(0x00799ce3);
    /* 00799ce3: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x799ce8u); f_0079a050();
L_00799ce8:; BB(0x00799ce8);
    /* 00799ce8: ret  */ FN_RET(0x00799cc8); r_esp += 4; return;
L_00799ce9:; BB(0x00799ce9);
    /* 00799ce9: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x799ceeu); f_0079a050();
    /* 00799cee: ret  */ FN_RET(0x00799cc8); r_esp += 4; return;
}

void f_00799cf0(void) /* sub_799CF0 */
{
    FN_ENTER(0x00799cf0);
    /* 00799cf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00799cf1: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00799cf7: mov eax, dword ptr [0xaab244] */ r_eax = R32((u32)(0xaab244u));
    /* 00799cfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799cfe: je 0x799da3 */ if (fZ) goto L_00799da3;
L_00799d04:; BB(0x00799d04);
    /* 00799d04: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799d0a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799d0c: je 0x799d1d */ if (fZ) goto L_00799d1d;
L_00799d0e:; BB(0x00799d0e);
    /* 00799d0e: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x799d13u); f_0073d160();
    /* 00799d13: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
L_00799d1d:; BB(0x00799d1d);
    /* 00799d1d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00799d1f: push dword ptr [0xaab180] */ { u32 v = R32((u32)(0xaab180u)); r_esp -= 4; W32(r_esp, v); }
    /* 00799d25: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x799d2au); f_0073cd8c();
    /* 00799d2a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00799d2d: mov dword ptr [0xaab23c], eax */ W32((u32)(0xaab23cu), r_eax);
    /* 00799d32: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799d34: je 0x799d91 */ if (fZ) goto L_00799d91;
L_00799d36:; BB(0x00799d36);
    /* 00799d36: mov dword ptr [esp], 0x43340000 */ W32((u32)(r_esp), 0x43340000u);
    /* 00799d3d: mov dword ptr [esp + 4], 0x43700000 */ W32((u32)(r_esp+0x4u), 0x43700000u);
    /* 00799d45: push 0x67 */ { u32 v = 0x67u; r_esp -= 4; W32(r_esp, v); }
    /* 00799d47: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x799d4cu); f_00793168();
    /* 00799d4c: mov ebp, eax */ r_ebp = r_eax;
    /* 00799d4e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00799d51: mov ecx, dword ptr [0xaab244] */ r_ecx = R32((u32)(0xaab244u));
    /* 00799d57: call 0x723eb8 */ r_esp -= 4; W32(r_esp, 0x799d5cu); f_00723eb8();
    /* 00799d5c: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00799d60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00799d61: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00799d62: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00799d63: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x799d68u); f_00857e29();
    /* 00799d68: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00799d6b: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799d71: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 00799d75: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00799d78: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 00799d7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00799d7e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00799d7f: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x799d84u); f_0073ce70();
    /* 00799d84: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799d8a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00799d8c: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x799d91u); f_0073d148();
L_00799d91:; BB(0x00799d91);
    /* 00799d91: mov dword ptr [0xaab218], 0x20 */ W32((u32)(0xaab218u), 0x20u);
    /* 00799d9b: add esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00799da1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00799da2: ret  */ FN_RET(0x00799cf0); r_esp += 4; return;
L_00799da3:; BB(0x00799da3);
    /* 00799da3: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x799da8u); f_0079a050();
    /* 00799da8: add esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00799dae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00799daf: ret  */ FN_RET(0x00799cf0); r_esp += 4; return;
}

void f_00799db0(void) /* sub_799DB0 */
{
    FN_ENTER(0x00799db0);
    /* 00799db0: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799db6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799db8: je 0x799df3 */ if (fZ) goto L_00799df3;
L_00799dba:; BB(0x00799dba);
    /* 00799dba: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x799dbfu); f_0073ce50();
    /* 00799dbf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799dc1: je 0x799dde */ if (fZ) goto L_00799dde;
L_00799dc3:; BB(0x00799dc3);
    /* 00799dc3: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799dc9: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x799dceu); f_0073d134();
    /* 00799dce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799dd0: jne 0x799dd8 */ if (!fZ) goto L_00799dd8;
L_00799dd2:; BB(0x00799dd2);
    /* 00799dd2: call 0x799a40 */ r_esp -= 4; W32(r_esp, 0x799dd7u); f_00799a40();
    /* 00799dd7: ret  */ FN_RET(0x00799db0); r_esp += 4; return;
L_00799dd8:; BB(0x00799dd8);
    /* 00799dd8: call 0x798e98 */ r_esp -= 4; W32(r_esp, 0x799dddu); f_00798e98();
    /* 00799ddd: ret  */ FN_RET(0x00799db0); r_esp += 4; return;
L_00799dde:; BB(0x00799dde);
    /* 00799dde: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799de4: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x799de9u); f_0073d114();
    /* 00799de9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00799deb: je 0x799df2 */ if (fZ) goto L_00799df2;
L_00799ded:; BB(0x00799ded);
    /* 00799ded: call 0x798e98 */ r_esp -= 4; W32(r_esp, 0x799df2u); f_00798e98();
L_00799df2:; BB(0x00799df2);
    /* 00799df2: ret  */ FN_RET(0x00799db0); r_esp += 4; return;
L_00799df3:; BB(0x00799df3);
    /* 00799df3: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x799df8u); f_0079a050();
    /* 00799df8: ret  */ FN_RET(0x00799db0); r_esp += 4; return;
}

void f_00799dfc(void) /* sub_799DFC */
{
    FN_ENTER(0x00799dfc);
    /* 00799dfc: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 00799e02: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799e04: je 0x799e53 */ if (fZ) goto L_00799e53;
L_00799e06:; BB(0x00799e06);
    /* 00799e06: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x799e0bu); f_007365f4();
    /* 00799e0b: mov edx, dword ptr [0xaab258] */ r_edx = R32((u32)(0xaab258u));
    /* 00799e11: movzx edx, word ptr [edx + 0x84] */ r_edx = (u32)R16((u32)(r_edx+0x84u));
    /* 00799e18: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00799e1b: je 0x799e42 */ if (fZ) goto L_00799e42;
L_00799e1d:; BB(0x00799e1d);
    /* 00799e1d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799e1f: je 0x799e4d */ if (fZ) goto L_00799e4d;
L_00799e21:; BB(0x00799e21);
    /* 00799e21: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799e24: je 0x799e3c */ if (fZ) goto L_00799e3c;
L_00799e26:; BB(0x00799e26);
    /* 00799e26: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799e29: jne 0x799e31 */ if (!fZ) goto L_00799e31;
L_00799e2b:; BB(0x00799e2b);
    /* 00799e2b: call 0x799108 */ r_esp -= 4; W32(r_esp, 0x799e30u); f_00799108();
    /* 00799e30: ret  */ FN_RET(0x00799dfc); r_esp += 4; return;
L_00799e31:; BB(0x00799e31);
    /* 00799e31: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00799e34: jne 0x799e4c */ if (!fZ) goto L_00799e4c;
L_00799e36:; BB(0x00799e36);
    /* 00799e36: call 0x799e5c */ r_esp -= 4; W32(r_esp, 0x799e3bu); f_00799e5c();
    /* 00799e3b: ret  */ FN_RET(0x00799dfc); r_esp += 4; return;
L_00799e3c:; BB(0x00799e3c);
    /* 00799e3c: call 0x799f64 */ r_esp -= 4; W32(r_esp, 0x799e41u); f_00799f64();
    /* 00799e41: ret  */ FN_RET(0x00799dfc); r_esp += 4; return;
L_00799e42:; BB(0x00799e42);
    /* 00799e42: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00799e45: je 0x799e4c */ if (fZ) goto L_00799e4c;
L_00799e47:; BB(0x00799e47);
    /* 00799e47: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x799e4cu); f_0079a050();
L_00799e4c:; BB(0x00799e4c);
    /* 00799e4c: ret  */ FN_RET(0x00799dfc); r_esp += 4; return;
L_00799e4d:; BB(0x00799e4d);
    /* 00799e4d: call 0x799f88 */ r_esp -= 4; W32(r_esp, 0x799e52u); f_00799f88();
    /* 00799e52: ret  */ FN_RET(0x00799dfc); r_esp += 4; return;
L_00799e53:; BB(0x00799e53);
    /* 00799e53: call 0x79a050 */ r_esp -= 4; W32(r_esp, 0x799e58u); f_0079a050();
    /* 00799e58: ret  */ FN_RET(0x00799dfc); r_esp += 4; return;
}

void f_00799e5c(void) /* sub_799E5C */
{
    FN_ENTER(0x00799e5c);
    /* 00799e5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00799e5d: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00799e63: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 00799e69: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x799e6eu); f_0073600c();
    /* 00799e6e: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799e74: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799e76: je 0x799e87 */ if (fZ) goto L_00799e87;
L_00799e78:; BB(0x00799e78);
    /* 00799e78: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x799e7du); f_0073d160();
    /* 00799e7d: mov dword ptr [0xaab23c], 0 */ W32((u32)(0xaab23cu), 0x0u);
L_00799e87:; BB(0x00799e87);
    /* 00799e87: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00799e89: push dword ptr [0xaab180] */ { u32 v = R32((u32)(0xaab180u)); r_esp -= 4; W32(r_esp, v); }
    /* 00799e8f: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x799e94u); f_0073cd8c();
    /* 00799e94: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00799e97: mov dword ptr [0xaab23c], eax */ W32((u32)(0xaab23cu), r_eax);
    /* 00799e9c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799e9e: je 0x799f4f */ if (fZ) goto L_00799f4f;
L_00799ea4:; BB(0x00799ea4);
    /* 00799ea4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00799ea7: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00799eac: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00799eae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00799eaf: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x799eb4u); f_0086b688();
    /* 00799eb4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00799eb7: mov ebp, dword ptr [0xa95df0] */ r_ebp = R32((u32)(0xa95df0u));
    /* 00799ebd: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799ec3: mov dword ptr [esp + 0x100], 0x43340000 */ W32((u32)(r_esp+0x100u), 0x43340000u);
    /* 00799ece: mov dword ptr [esp + 0x104], 0x43700000 */ W32((u32)(r_esp+0x104u), 0x43700000u);
    /* 00799ed9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00799edb: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x799ee0u); f_0073d148();
    /* 00799ee0: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x799ee5u); f_006dc358();
    /* 00799ee5: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799ee8: jne 0x799f2b */ if (!fZ) goto L_00799f2b;
L_00799eea:; BB(0x00799eea);
    /* 00799eea: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799eec: je 0x799f0d */ if (fZ) goto L_00799f0d;
L_00799eee:; BB(0x00799eee);
    /* 00799eee: push 0x9b */ { u32 v = 0x9bu; r_esp -= 4; W32(r_esp, v); }
    /* 00799ef3: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x799ef8u); f_00793168();
    /* 00799ef8: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00799efc: add ebp, 0x2cc */ {  u32 a = r_ebp; u32 b = 0x2ccu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00799f02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00799f03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00799f04: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00799f05: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x799f0au); f_00857e29();
    /* 00799f0a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00799f0d:; BB(0x00799f0d);
    /* 00799f0d: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799f13: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00799f16: lea eax, [esp + 0x100] */ r_eax = (u32)(r_esp+0x100u);
    /* 00799f1d: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 00799f22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00799f23: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00799f24: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x799f29u); f_0073ce70();
    /* 00799f29: jmp 0x799f4f */ goto L_00799f4f;
L_00799f2b:; BB(0x00799f2b);
    /* 00799f2b: push 0x84 */ { u32 v = 0x84u; r_esp -= 4; W32(r_esp, v); }
    /* 00799f30: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x799f35u); f_00793168();
    /* 00799f35: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00799f36: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799f3c: lea edx, [esp + 0x100] */ r_edx = (u32)(r_esp+0x100u);
    /* 00799f43: push 0x43960000 */ { u32 v = 0x43960000u; r_esp -= 4; W32(r_esp, v); }
    /* 00799f48: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00799f49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00799f4a: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x799f4fu); f_0073ce70();
L_00799f4f:; BB(0x00799f4f);
    /* 00799f4f: mov dword ptr [0xaab218], 0x2b */ W32((u32)(0xaab218u), 0x2bu);
    /* 00799f59: add esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00799f5f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00799f60: ret  */ FN_RET(0x00799e5c); r_esp += 4; return;
}

void f_00799f64(void) /* sub_799F64 */
{
    FN_ENTER(0x00799f64);
    /* 00799f64: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 00799f6a: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x799f6fu); f_0073600c();
    /* 00799f6f: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 00799f75: call 0x7f68a0 */ r_esp -= 4; W32(r_esp, 0x799f7au); f_007f68a0();
    /* 00799f7a: mov dword ptr [0xaab218], 0x27 */ W32((u32)(0xaab218u), 0x27u);
    /* 00799f84: ret  */ FN_RET(0x00799f64); r_esp += 4; return;
}

void f_00799f88(void) /* sub_799F88 */
{
    FN_ENTER(0x00799f88);
    /* 00799f88: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00799f89: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00799f8a: mov ecx, dword ptr [0xaab258] */ r_ecx = R32((u32)(0xaab258u));
    /* 00799f90: call 0x73600c */ r_esp -= 4; W32(r_esp, 0x799f95u); f_0073600c();
    /* 00799f95: mov eax, dword ptr [0xaab23c] */ r_eax = R32((u32)(0xaab23cu));
    /* 00799f9a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00799f9c: je 0x799fed */ if (fZ) goto L_00799fed;
L_00799f9e:; BB(0x00799f9e);
    /* 00799f9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00799fa0: je 0x799fe0 */ if (fZ) goto L_00799fe0;
L_00799fa2:; BB(0x00799fa2);
    /* 00799fa2: push 0x66 */ { u32 v = 0x66u; r_esp -= 4; W32(r_esp, v); }
    /* 00799fa4: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x799fa9u); f_00793168();
    /* 00799fa9: mov esi, eax */ r_esi = r_eax;
    /* 00799fab: push 0xe9 */ { u32 v = 0xe9u; r_esp -= 4; W32(r_esp, v); }
    /* 00799fb0: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x799fb5u); f_0073ec50();
    /* 00799fb5: mov ebx, eax */ r_ebx = r_eax;
    /* 00799fb7: push 0xea */ { u32 v = 0xeau; r_esp -= 4; W32(r_esp, v); }
    /* 00799fbc: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x799fc1u); f_0073ec50();
    /* 00799fc1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00799fc4: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00799fc6: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799fcc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00799fcd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00799fce: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x799fd3u); f_0073ce70();
    /* 00799fd3: mov ecx, dword ptr [0xaab23c] */ r_ecx = R32((u32)(0xaab23cu));
    /* 00799fd9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00799fdb: call 0x73d148 */ r_esp -= 4; W32(r_esp, 0x799fe0u); f_0073d148();
L_00799fe0:; BB(0x00799fe0);
    /* 00799fe0: mov dword ptr [0xaab218], 0x1e */ W32((u32)(0xaab218u), 0x1eu);
    /* 00799fea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00799feb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00799fec: ret  */ FN_RET(0x00799f88); r_esp += 4; return;
L_00799fed:; BB(0x00799fed);
    /* 00799fed: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00799fef: push dword ptr [0xaab180] */ { u32 v = R32((u32)(0xaab180u)); r_esp -= 4; W32(r_esp, v); }
    /* 00799ff5: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x799ffau); f_0073cd8c();
    /* 00799ffa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00799ffd: mov dword ptr [0xaab23c], eax */ W32((u32)(0xaab23cu), r_eax);
    /* 0079a002: jmp 0x799f9e */ goto L_00799f9e;
}

