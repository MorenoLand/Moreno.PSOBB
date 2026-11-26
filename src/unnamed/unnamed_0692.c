#include "protos.h"

void f_00692014(void) /* sub_692014 */
{
    FN_ENTER(0x00692014);
    /* 00692014: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00692018: lea ecx, [eax + 0x70c] */ r_ecx = (u32)(r_eax+0x70cu);
    /* 0069201e: call 0x698678 */ r_esp -= 4; W32(r_esp, 0x692023u); f_00698678();
    /* 00692023: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00692027: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 0069202e: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00692031: jne 0x692048 */ if (!fZ) goto L_00692048;
L_00692033:; BB(0x00692033);
    /* 00692033: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00692037: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 0069203d: and eax, 0xffbfffff */ {  u32 a = r_eax; u32 b = 0xffbfffffu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00692042: mov dword ptr [edx + 0x33c], eax */ W32((u32)(r_edx+0x33cu), r_eax);
L_00692048:; BB(0x00692048);
    /* 00692048: ret  */ FN_RET(0x00692014); r_esp += 4; return;
}

void f_0069204c(void) /* sub_69204C */
{
    FN_ENTER(0x0069204c);
    /* 0069204c: mov edx, dword ptr [0xa9c4ec] */ r_edx = R32((u32)(0xa9c4ecu));
    /* 00692052: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00692056: and edx, dword ptr [esp + 4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0069205a: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0069205c: mov eax, 0 */ r_eax = 0x0u;
    /* 00692061: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 00692064: ret 4 */ FN_RET(0x0069204c); r_esp += 8; return;
}

void f_00692068(void) /* sub_692068 */
{
    FN_ENTER(0x00692068);
    /* 00692068: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 0069206f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00692072: jne 0x692088 */ if (!fZ) goto L_00692088;
L_00692074:; BB(0x00692074);
    /* 00692074: movsx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x1cu));
    /* 00692078: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00692079: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0069207b: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00692080: call 0x6ff4ac */ r_esp -= 4; W32(r_esp, 0x692085u); f_006ff4ac();
    /* 00692085: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00692088:; BB(0x00692088);
    /* 00692088: ret  */ FN_RET(0x00692068); r_esp += 4; return;
}

void f_0069208c(void) /* sub_69208C */
{
    FN_ENTER(0x0069208c);
    /* 0069208c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069208d: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00692091: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00692096: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00692099: mov byte ptr [esp], 0xc5 */ W8((u32)(r_esp), 0xc5u);
    /* 0069209d: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 006920a2: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6920a7u); f_008003e0();
    /* 006920a7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006920a8: ret  */ FN_RET(0x0069208c); r_esp += 4; return;
}

void f_006920ac(void) /* sub_6920AC */
{
    FN_ENTER(0x006920ac);
    /* 006920ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006920ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006920ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006920af: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006920b0: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 006920b4: mov eax, dword ptr [edx + 0x24] */ r_eax = R32((u32)(r_edx+0x24u));
    /* 006920b7: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x6920bcu); f_0068d5ac();
    /* 006920bc: mov ebx, eax */ r_ebx = r_eax;
    /* 006920be: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006920c0: je 0x692228 */ if (fZ) goto L_00692228;
L_006920c6:; BB(0x006920c6);
    /* 006920c6: mov edx, dword ptr [ebx + 0x92c] */ r_edx = R32((u32)(r_ebx+0x92cu));
    /* 006920cc: and edx, 0xfffffffd */ {  u32 a = r_edx; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006920cf: mov dword ptr [ebx + 0x92c], edx */ W32((u32)(r_ebx+0x92cu), r_edx);
    /* 006920d5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006920d7: call 0x6923dc */ r_esp -= 4; W32(r_esp, 0x6920dcu); f_006923dc();
    /* 006920dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006920de: je 0x6920e5 */ if (fZ) goto L_006920e5;
L_006920e0:; BB(0x006920e0);
    /* 006920e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006920e1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006920e2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006920e3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006920e4: ret  */ FN_RET(0x006920ac); r_esp += 4; return;
L_006920e5:; BB(0x006920e5);
    /* 006920e5: call 0x687c48 */ r_esp -= 4; W32(r_esp, 0x6920eau); f_00687c48();
    /* 006920ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006920ec: je 0x6921af */ if (fZ) goto L_006921af;
L_006920f2:; BB(0x006920f2);
    /* 006920f2: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 006920f7: call 0x6a8efc */ r_esp -= 4; W32(r_esp, 0x6920fcu); f_006a8efc();
    /* 006920fc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006920ff: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692102: je 0x69222d */ if (fZ) goto L_0069222d;
L_00692108:; BB(0x00692108);
    /* 00692108: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 0069210d: call 0x6a8efc */ r_esp -= 4; W32(r_esp, 0x692112u); f_006a8efc();
    /* 00692112: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00692115: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692118: jne 0x692135 */ if (!fZ) goto L_00692135;
L_0069211a:; BB(0x0069211a);
    /* 0069211a: lea ecx, [ebx + 0x82c] */ r_ecx = (u32)(r_ebx+0x82cu);
    /* 00692120: call 0x6a9248 */ r_esp -= 4; W32(r_esp, 0x692125u); f_006a9248();
    /* 00692125: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692127: jne 0x692135 */ if (!fZ) goto L_00692135;
L_00692129:; BB(0x00692129);
    /* 00692129: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069212b: call 0x69acd4 */ r_esp -= 4; W32(r_esp, 0x692130u); f_0069acd4();
    /* 00692130: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00692131: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00692132: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00692133: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00692134: ret  */ FN_RET(0x006920ac); r_esp += 4; return;
L_00692135:; BB(0x00692135);
    /* 00692135: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00692137: call 0x695444 */ r_esp -= 4; W32(r_esp, 0x69213cu); f_00695444();
    /* 0069213c: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 00692141: call 0x6a8f7c */ r_esp -= 4; W32(r_esp, 0x692146u); f_006a8f7c();
    /* 00692146: mov edi, eax */ r_edi = r_eax;
    /* 00692148: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069214a: call 0x7778d8 */ r_esp -= 4; W32(r_esp, 0x69214fu); f_007778d8();
    /* 0069214f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00692150: call 0x7ba9ec */ r_esp -= 4; W32(r_esp, 0x692155u); f_007ba9ec();
    /* 00692155: mov esi, eax */ r_esi = r_eax;
    /* 00692157: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069215a: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 0069215d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069215f: je 0x692178 */ if (fZ) goto L_00692178;
L_00692161:; BB(0x00692161);
    /* 00692161: movzx edx, si */ r_edx = (u32)(u16)r_esi;
    /* 00692164: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692166: je 0x692170 */ if (fZ) goto L_00692170;
L_00692168:; BB(0x00692168);
    /* 00692168: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069216e: jne 0x692178 */ if (!fZ) goto L_00692178;
L_00692170:; BB(0x00692170);
    /* 00692170: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00692171: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00692173: call 0x6859a0 */ r_esp -= 4; W32(r_esp, 0x692178u); f_006859a0();
L_00692178:; BB(0x00692178);
    /* 00692178: mov ecx, 0xa94290 */ r_ecx = 0xa94290u;
    /* 0069217d: call 0x6a8f8c */ r_esp -= 4; W32(r_esp, 0x692182u); f_006a8f8c();
    /* 00692182: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 00692185: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692187: je 0x6921a0 */ if (fZ) goto L_006921a0;
L_00692189:; BB(0x00692189);
    /* 00692189: movzx edx, si */ r_edx = (u32)(u16)r_esi;
    /* 0069218c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069218e: je 0x692198 */ if (fZ) goto L_00692198;
L_00692190:; BB(0x00692190);
    /* 00692190: cmp edx, 0x1000 */ {  u32 a = r_edx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692196: jne 0x6921a0 */ if (!fZ) goto L_006921a0;
L_00692198:; BB(0x00692198);
    /* 00692198: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00692199: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069219b: call 0x69266c */ r_esp -= 4; W32(r_esp, 0x6921a0u); f_0069266c();
L_006921a0:; BB(0x006921a0);
    /* 006921a0: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006921a2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006921a4: call dword ptr [edx + 0x108] */ { u32 t = R32((u32)(r_edx+0x108u)); r_esp -= 4; W32(r_esp, 0x6921aau); call_ind(t); }
    /* 006921aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006921ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006921ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006921ad: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006921ae: ret  */ FN_RET(0x006920ac); r_esp += 4; return;
L_006921af:; BB(0x006921af);
    /* 006921af: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x6921b4u); f_00688b8c();
    /* 006921b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006921b6: je 0x6921c4 */ if (fZ) goto L_006921c4;
L_006921b8:; BB(0x006921b8);
    /* 006921b8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006921ba: call 0x69acd4 */ r_esp -= 4; W32(r_esp, 0x6921bfu); f_0069acd4();
    /* 006921bf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006921c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006921c1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006921c2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006921c3: ret  */ FN_RET(0x006920ac); r_esp += 4; return;
L_006921c4:; BB(0x006921c4);
    /* 006921c4: call 0x7a61a4 */ r_esp -= 4; W32(r_esp, 0x6921c9u); f_007a61a4();
    /* 006921c9: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006921cc: je 0x6922bb */ if (fZ) goto L_006922bb;
L_006921d2:; BB(0x006921d2);
    /* 006921d2: mov edx, dword ptr [0xaab1cc] */ r_edx = R32((u32)(0xaab1ccu));
    /* 006921d8: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006921db: jne 0x69221a */ if (!fZ) goto L_0069221a;
L_006921dd:; BB(0x006921dd);
    /* 006921dd: mov edx, dword ptr [ebx + 0x3c0] */ r_edx = R32((u32)(r_ebx+0x3c0u));
    /* 006921e3: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006921e6: je 0x692239 */ if (fZ) goto L_00692239;
L_006921e8:; BB(0x006921e8);
    /* 006921e8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006921ea: call 0x6925d8 */ r_esp -= 4; W32(r_esp, 0x6921efu); f_006925d8();
    /* 006921ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006921f1: call 0x80c2a4 */ r_esp -= 4; W32(r_esp, 0x6921f6u); f_0080c2a4();
    /* 006921f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006921f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006921f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006921fa: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 006921ff: call 0x815590 */ r_esp -= 4; W32(r_esp, 0x692204u); f_00815590();
    /* 00692204: call 0x7a6114 */ r_esp -= 4; W32(r_esp, 0x692209u); f_007a6114();
    /* 00692209: push dword ptr [0xac9d58] */ { u32 v = R32((u32)(0xac9d58u)); r_esp -= 4; W32(r_esp, v); }
    /* 0069220f: call 0x7b41f4 */ r_esp -= 4; W32(r_esp, 0x692214u); f_007b41f4();
    /* 00692214: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00692215: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00692216: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00692217: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00692218: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00692219: ret  */ FN_RET(0x006920ac); r_esp += 4; return;
L_0069221a:; BB(0x0069221a);
    /* 0069221a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069221c: call 0x692510 */ r_esp -= 4; W32(r_esp, 0x692221u); f_00692510();
    /* 00692221: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00692223: call 0x69acd4 */ r_esp -= 4; W32(r_esp, 0x692228u); f_0069acd4();
L_00692228:; BB(0x00692228);
    /* 00692228: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00692229: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069222a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069222b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069222c: ret  */ FN_RET(0x006920ac); r_esp += 4; return;
L_0069222d:; BB(0x0069222d);
    /* 0069222d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069222f: call 0x69acd4 */ r_esp -= 4; W32(r_esp, 0x692234u); f_0069acd4();
    /* 00692234: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00692235: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00692236: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00692237: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00692238: ret  */ FN_RET(0x006920ac); r_esp += 4; return;
L_00692239:; BB(0x00692239);
    /* 00692239: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0069223b: call 0x80c2a4 */ r_esp -= 4; W32(r_esp, 0x692240u); f_0080c2a4();
    /* 00692240: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00692241: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00692242: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00692244: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 00692249: call 0x815590 */ r_esp -= 4; W32(r_esp, 0x69224eu); f_00815590();
    /* 0069224e: call 0x7a6114 */ r_esp -= 4; W32(r_esp, 0x692253u); f_007a6114();
    /* 00692253: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00692254: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00692258: call 0x6ac804 */ r_esp -= 4; W32(r_esp, 0x69225du); f_006ac804();
    /* 0069225d: mov esi, eax */ r_esi = r_eax;
    /* 0069225f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00692260: call 0x6ac7d4 */ r_esp -= 4; W32(r_esp, 0x692265u); f_006ac7d4();
    /* 00692265: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00692266: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00692267: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00692268: call 0x6986ec */ r_esp -= 4; W32(r_esp, 0x69226du); f_006986ec();
    /* 0069226d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00692270: push dword ptr [0xac9d58] */ { u32 v = R32((u32)(0xac9d58u)); r_esp -= 4; W32(r_esp, v); }
    /* 00692276: mov edx, dword ptr [ebx + 0x33c] */ r_edx = R32((u32)(r_ebx+0x33cu));
    /* 0069227c: or edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00692282: mov dword ptr [ebx + 0x33c], edx */ W32((u32)(r_ebx+0x33cu), r_edx);
    /* 00692288: mov dword ptr [ebx + 0x3c0], 1 */ W32((u32)(r_ebx+0x3c0u), 0x1u);
    /* 00692292: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00692294: call 0x692398 */ r_esp -= 4; W32(r_esp, 0x692299u); f_00692398();
    /* 00692299: mov esi, dword ptr [0xac9d58] */ r_esi = R32((u32)(0xac9d58u));
    /* 0069229f: call 0x7b48c8 */ r_esp -= 4; W32(r_esp, 0x6922a4u); f_007b48c8();
    /* 006922a4: mov ebx, eax */ r_ebx = r_eax;
    /* 006922a6: call 0x7b48e0 */ r_esp -= 4; W32(r_esp, 0x6922abu); f_007b48e0();
    /* 006922ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006922ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006922ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006922ae: call 0x7b4234 */ r_esp -= 4; W32(r_esp, 0x6922b3u); f_007b4234();
    /* 006922b3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006922b6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006922b7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006922b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006922b9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006922ba: ret  */ FN_RET(0x006920ac); r_esp += 4; return;
L_006922bb:; BB(0x006922bb);
    /* 006922bb: mov edx, dword ptr [0xa95624] */ r_edx = R32((u32)(0xa95624u));
    /* 006922c1: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006922c4: jne 0x692303 */ if (!fZ) goto L_00692303;
L_006922c6:; BB(0x006922c6);
    /* 006922c6: mov edx, dword ptr [ebx + 0x3c0] */ r_edx = R32((u32)(r_ebx+0x3c0u));
    /* 006922cc: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006922cf: je 0x692316 */ if (fZ) goto L_00692316;
L_006922d1:; BB(0x006922d1);
    /* 006922d1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006922d3: call 0x6925d8 */ r_esp -= 4; W32(r_esp, 0x6922d8u); f_006925d8();
    /* 006922d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006922da: call 0x80c2a4 */ r_esp -= 4; W32(r_esp, 0x6922dfu); f_0080c2a4();
    /* 006922df: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006922e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006922e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006922e3: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 006922e8: call 0x815590 */ r_esp -= 4; W32(r_esp, 0x6922edu); f_00815590();
    /* 006922ed: call 0x7a6114 */ r_esp -= 4; W32(r_esp, 0x6922f2u); f_007a6114();
    /* 006922f2: push dword ptr [0xac9d58] */ { u32 v = R32((u32)(0xac9d58u)); r_esp -= 4; W32(r_esp, v); }
    /* 006922f8: call 0x7b41f4 */ r_esp -= 4; W32(r_esp, 0x6922fdu); f_007b41f4();
    /* 006922fd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006922fe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006922ff: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00692300: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00692301: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00692302: ret  */ FN_RET(0x006920ac); r_esp += 4; return;
L_00692303:; BB(0x00692303);
    /* 00692303: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00692305: call 0x692510 */ r_esp -= 4; W32(r_esp, 0x69230au); f_00692510();
    /* 0069230a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0069230c: call 0x69acd4 */ r_esp -= 4; W32(r_esp, 0x692311u); f_0069acd4();
    /* 00692311: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00692312: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00692313: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00692314: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00692315: ret  */ FN_RET(0x006920ac); r_esp += 4; return;
L_00692316:; BB(0x00692316);
    /* 00692316: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00692318: call 0x80c2a4 */ r_esp -= 4; W32(r_esp, 0x69231du); f_0080c2a4();
    /* 0069231d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0069231e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069231f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00692321: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 00692326: call 0x815590 */ r_esp -= 4; W32(r_esp, 0x69232bu); f_00815590();
    /* 0069232b: call 0x7a6114 */ r_esp -= 4; W32(r_esp, 0x692330u); f_007a6114();
    /* 00692330: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00692331: movzx edi, word ptr [ebx + 0x1c] */ r_edi = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00692335: call 0x6ac804 */ r_esp -= 4; W32(r_esp, 0x69233au); f_006ac804();
    /* 0069233a: mov esi, eax */ r_esi = r_eax;
    /* 0069233c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069233d: call 0x6ac7d4 */ r_esp -= 4; W32(r_esp, 0x692342u); f_006ac7d4();
    /* 00692342: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00692343: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00692344: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00692345: call 0x6986ec */ r_esp -= 4; W32(r_esp, 0x69234au); f_006986ec();
    /* 0069234a: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069234d: push dword ptr [0xac9d58] */ { u32 v = R32((u32)(0xac9d58u)); r_esp -= 4; W32(r_esp, v); }
    /* 00692353: mov edx, dword ptr [ebx + 0x33c] */ r_edx = R32((u32)(r_ebx+0x33cu));
    /* 00692359: or edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069235f: mov dword ptr [ebx + 0x33c], edx */ W32((u32)(r_ebx+0x33cu), r_edx);
    /* 00692365: mov dword ptr [ebx + 0x3c0], 1 */ W32((u32)(r_ebx+0x3c0u), 0x1u);
    /* 0069236f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00692371: call 0x692398 */ r_esp -= 4; W32(r_esp, 0x692376u); f_00692398();
    /* 00692376: mov esi, dword ptr [0xac9d58] */ r_esi = R32((u32)(0xac9d58u));
    /* 0069237c: call 0x7b48c8 */ r_esp -= 4; W32(r_esp, 0x692381u); f_007b48c8();
    /* 00692381: mov ebx, eax */ r_ebx = r_eax;
    /* 00692383: call 0x7b48e0 */ r_esp -= 4; W32(r_esp, 0x692388u); f_007b48e0();
    /* 00692388: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00692389: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069238a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069238b: call 0x7b4234 */ r_esp -= 4; W32(r_esp, 0x692390u); f_007b4234();
    /* 00692390: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00692393: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00692394: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00692395: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00692396: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00692397: ret  */ FN_RET(0x006920ac); r_esp += 4; return;
}

void f_00692398(void) /* sub_692398 */
{
    FN_ENTER(0x00692398);
    /* 00692398: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069239b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069239d: je 0x6923b1 */ if (fZ) goto L_006923b1;
L_0069239f:; BB(0x0069239f);
    /* 0069239f: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 006923a6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006923a9: jne 0x6923b1 */ if (!fZ) goto L_006923b1;
L_006923ab:; BB(0x006923ab);
    /* 006923ab: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006923ae: ret 4 */ FN_RET(0x00692398); r_esp += 8; return;
L_006923b1:; BB(0x006923b1);
    /* 006923b1: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006923b5: movzx eax, word ptr [ecx + 0x1c] */ r_eax = (u32)R16((u32)(r_ecx+0x1cu));
    /* 006923b9: mov byte ptr [esp], 0x21 */ W8((u32)(r_esp), 0x21u);
    /* 006923bd: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 006923c2: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006923c7: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006923cb: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006923ce: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6923d3u); f_008003e0();
    /* 006923d3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006923d6: ret 4 */ FN_RET(0x00692398); r_esp += 8; return;
}

void f_006923dc(void) /* sub_6923DC */
{
    FN_ENTER(0x006923dc);
    /* 006923dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006923dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006923de: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006923e1: mov esi, ecx */ r_esi = r_ecx;
    /* 006923e3: movsx eax, word ptr [esi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 006923ea: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006923ed: jne 0x6923f7 */ if (!fZ) goto L_006923f7;
L_006923ef:; BB(0x006923ef);
    /* 006923ef: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006923f1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006923f4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006923f5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006923f6: ret  */ FN_RET(0x006923dc); r_esp += 4; return;
L_006923f7:; BB(0x006923f7);
    /* 006923f7: mov ecx, esi */ r_ecx = r_esi;
    /* 006923f9: call 0x69248c */ r_esp -= 4; W32(r_esp, 0x6923feu); f_0069248c();
    /* 006923fe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692400: je 0x6923ef */ if (fZ) goto L_006923ef;
L_00692402:; BB(0x00692402);
    /* 00692402: mov ecx, eax */ r_ecx = r_eax;
    /* 00692404: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x692409u); f_006a60dc();
    /* 00692409: mov edi, eax */ r_edi = r_eax;
    /* 0069240b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069240d: je 0x6923ef */ if (fZ) goto L_006923ef;
L_0069240f:; BB(0x0069240f);
    /* 0069240f: mov ecx, esi */ r_ecx = r_esi;
    /* 00692411: call 0x68fd74 */ r_esp -= 4; W32(r_esp, 0x692416u); f_0068fd74();
    /* 00692416: mov edx, dword ptr [esi + 0x92c] */ r_edx = R32((u32)(r_esi+0x92cu));
    /* 0069241c: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0069241f: mov dword ptr [esi + 0x92c], edx */ W32((u32)(r_esi+0x92cu), r_edx);
    /* 00692425: mov edi, dword ptr [edi + 0xd8] */ r_edi = R32((u32)(r_edi+0xd8u));
    /* 0069242b: mov ecx, esi */ r_ecx = r_esi;
    /* 0069242d: call 0x68fb8c */ r_esp -= 4; W32(r_esp, 0x692432u); f_0068fb8c();
    /* 00692432: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692434: jne 0x692480 */ if (!fZ) goto L_00692480;
L_00692436:; BB(0x00692436);
    /* 00692436: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692438: je 0x692453 */ if (fZ) goto L_00692453;
L_0069243a:; BB(0x0069243a);
    /* 0069243a: movsx eax, word ptr [esi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 00692441: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692444: jne 0x69244d */ if (!fZ) goto L_0069244d;
L_00692446:; BB(0x00692446);
    /* 00692446: mov eax, 1 */ r_eax = 0x1u;
    /* 0069244b: jmp 0x69244f */ goto L_0069244f;
L_0069244d:; BB(0x0069244d);
    /* 0069244d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0069244f:; BB(0x0069244f);
    /* 0069244f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692451: jne 0x692480 */ if (!fZ) goto L_00692480;
L_00692453:; BB(0x00692453);
    /* 00692453: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00692457: mov byte ptr [esp], 0x29 */ W8((u32)(r_esp), 0x29u);
    /* 0069245b: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 00692460: mov byte ptr [esp + 1], 3 */ W8((u32)(r_esp+0x1u), 0x3u);
    /* 00692465: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00692469: mov dword ptr [esp + 8], 1 */ W32((u32)(r_esp+0x8u), 0x1u);
    /* 00692471: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00692474: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x692479u); f_008003e0();
    /* 00692479: mov ecx, esi */ r_ecx = r_esi;
    /* 0069247b: call 0x68dd44 */ r_esp -= 4; W32(r_esp, 0x692480u); f_0068dd44();
L_00692480:; BB(0x00692480);
    /* 00692480: mov eax, 1 */ r_eax = 0x1u;
    /* 00692485: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00692488: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00692489: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069248a: ret  */ FN_RET(0x006923dc); r_esp += 4; return;
}

void f_0069248c(void) /* sub_69248C */
{
    FN_ENTER(0x0069248c);
    /* 0069248c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069248d: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00692490: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00692492: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00692495: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x69249au); f_005d6a3c();
    /* 0069249a: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 006924a0: mov byte ptr [esp], 3 */ W8((u32)(r_esp), 0x3u);
    /* 006924a4: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006924a7: mov byte ptr [esp + 1], 9 */ W8((u32)(r_esp+0x1u), 0x9u);
    /* 006924ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006924ad: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x6924b2u); f_006a4e50();
    /* 006924b2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006924b4: je 0x6924bb */ if (fZ) goto L_006924bb;
L_006924b6:; BB(0x006924b6);
    /* 006924b6: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006924b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006924ba: ret  */ FN_RET(0x0069248c); r_esp += 4; return;
L_006924bb:; BB(0x006924bb);
    /* 006924bb: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006924be: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6924c3u); f_005d6a3c();
    /* 006924c3: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 006924c9: mov byte ptr [esp], 0 */ W8((u32)(r_esp), 0x0u);
    /* 006924cd: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006924d0: mov byte ptr [esp + 1], 0xd */ W8((u32)(r_esp+0x1u), 0xdu);
    /* 006924d5: mov byte ptr [esp + 2], 3 */ W8((u32)(r_esp+0x2u), 0x3u);
    /* 006924da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006924db: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x6924e0u); f_006a4e50();
    /* 006924e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006924e2: jne 0x6924b6 */ if (!fZ) goto L_006924b6;
L_006924e4:; BB(0x006924e4);
    /* 006924e4: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006924e7: call 0x5d6a3c */ r_esp -= 4; W32(r_esp, 0x6924ecu); f_005d6a3c();
    /* 006924ec: mov ecx, dword ptr [ebx + 0xdf4] */ r_ecx = R32((u32)(r_ebx+0xdf4u));
    /* 006924f2: mov byte ptr [esp], 1 */ W8((u32)(r_esp), 0x1u);
    /* 006924f6: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006924f9: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 006924fe: mov byte ptr [esp + 2], 0x52 */ W8((u32)(r_esp+0x2u), 0x52u);
    /* 00692503: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00692504: call 0x6a4e50 */ r_esp -= 4; W32(r_esp, 0x692509u); f_006a4e50();
    /* 00692509: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069250c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069250d: ret  */ FN_RET(0x0069248c); r_esp += 4; return;
}

void f_00692510(void) /* sub_692510 */
{
    FN_ENTER(0x00692510);
    /* 00692510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00692511: mov ebp, esp */ r_ebp = r_esp;
    /* 00692513: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00692515: push 0x8eb310 */ { u32 v = 0x8eb310u; r_esp -= 4; W32(r_esp, v); }
    /* 0069251a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00692520: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00692521: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00692528: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069252b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0069252e: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00692531: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00692534: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00692537: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 0069253e: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00692541: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692544: jne 0x6925c1 */ if (!fZ) goto L_006925c1;
L_00692546:; BB(0x00692546);
    /* 00692546: mov eax, ecx */ r_eax = r_ecx;
    /* 00692548: mov edx, dword ptr [eax + 0x378] */ r_edx = R32((u32)(r_eax+0x378u));
    /* 0069254e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692550: jne 0x6925c1 */ if (!fZ) goto L_006925c1;
L_00692552:; BB(0x00692552);
    /* 00692552: mov edx, dword ptr [eax + 0x620] */ r_edx = R32((u32)(r_eax+0x620u));
    /* 00692558: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069255a: je 0x6925c1 */ if (fZ) goto L_006925c1;
L_0069255c:; BB(0x0069255c);
    /* 0069255c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00692563: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 00692565: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x69256au); f_005caba4();
    /* 0069256a: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0069256d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00692570: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00692573: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692575: je 0x6925d1 */ if (fZ) goto L_006925d1;
L_00692577:; BB(0x00692577);
    /* 00692577: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0069257e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00692585: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00692588: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0069258b: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 0069258f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00692590: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 00692596: call 0x73f0ec */ r_esp -= 4; W32(r_esp, 0x69259bu); f_0073f0ec();
    /* 0069259b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_006925a2:; BB(0x006925a2);
    /* 006925a2: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006925a5: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006925a8: mov dword ptr [ecx + 0x378], edx */ W32((u32)(r_ecx+0x378u), r_edx);
    /* 006925ae: mov eax, 1 */ r_eax = 0x1u;
    /* 006925b3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006925b6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006925bd: mov esp, ebp */ r_esp = r_ebp;
    /* 006925bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006925c0: ret  */ FN_RET(0x00692510); r_esp += 4; return;
L_006925c1:; BB(0x006925c1);
    /* 006925c1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006925c3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006925c6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006925cd: mov esp, ebp */ r_esp = r_ebp;
    /* 006925cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006925d0: ret  */ FN_RET(0x00692510); r_esp += 4; return;
L_006925d1:; BB(0x006925d1);
    /* 006925d1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006925d3: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006925d6: jmp 0x6925a2 */ goto L_006925a2;
}

void f_006925d8(void) /* sub_6925D8 */
{
    FN_ENTER(0x006925d8);
    /* 006925d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006925d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006925da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006925db: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006925de: mov edi, ecx */ r_edi = r_ecx;
    /* 006925e0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006925e2: je 0x6925f0 */ if (fZ) goto L_006925f0;
L_006925e4:; BB(0x006925e4);
    /* 006925e4: movsx eax, word ptr [edi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x32cu));
    /* 006925eb: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006925ee: je 0x692612 */ if (fZ) goto L_00692612;
L_006925f0:; BB(0x006925f0);
    /* 006925f0: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 006925f4: mov byte ptr [esp], 0x21 */ W8((u32)(r_esp), 0x21u);
    /* 006925f8: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006925fd: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 00692602: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00692605: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 0069260d: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x692612u); f_008003e0();
L_00692612:; BB(0x00692612);
    /* 00692612: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00692613: movzx esi, word ptr [edi + 0x1c] */ r_esi = (u32)R16((u32)(r_edi+0x1cu));
    /* 00692617: call 0x6ac7c4 */ r_esp -= 4; W32(r_esp, 0x69261cu); f_006ac7c4();
    /* 0069261c: mov ebp, eax */ r_ebp = r_eax;
    /* 0069261e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0069261f: call 0x6ac7a4 */ r_esp -= 4; W32(r_esp, 0x692624u); f_006ac7a4();
    /* 00692624: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00692625: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00692626: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00692627: call 0x6986ec */ r_esp -= 4; W32(r_esp, 0x69262cu); f_006986ec();
    /* 0069262c: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0069262f: mov esi, dword ptr [0xac9d58] */ r_esi = R32((u32)(0xac9d58u));
    /* 00692635: mov eax, dword ptr [edi + 0x33c] */ r_eax = R32((u32)(r_edi+0x33cu));
    /* 0069263b: mov dword ptr [edi + 0x3c0], 0 */ W32((u32)(r_edi+0x3c0u), 0x0u);
    /* 00692645: or eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069264a: mov dword ptr [edi + 0x33c], eax */ W32((u32)(r_edi+0x33cu), r_eax);
    /* 00692650: call 0x7b48a0 */ r_esp -= 4; W32(r_esp, 0x692655u); f_007b48a0();
    /* 00692655: mov ebp, eax */ r_ebp = r_eax;
    /* 00692657: call 0x7b48b8 */ r_esp -= 4; W32(r_esp, 0x69265cu); f_007b48b8();
    /* 0069265c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0069265d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069265e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0069265f: call 0x7b4234 */ r_esp -= 4; W32(r_esp, 0x692664u); f_007b4234();
    /* 00692664: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00692667: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00692668: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00692669: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069266a: ret  */ FN_RET(0x006925d8); r_esp += 4; return;
}

void f_0069266c(void) /* sub_69266C */
{
    FN_ENTER(0x0069266c);
    /* 0069266c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069266f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692671: je 0x692685 */ if (fZ) goto L_00692685;
L_00692673:; BB(0x00692673);
    /* 00692673: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 0069267a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069267d: jne 0x692685 */ if (!fZ) goto L_00692685;
L_0069267f:; BB(0x0069267f);
    /* 0069267f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00692682: ret 4 */ FN_RET(0x0069266c); r_esp += 8; return;
L_00692685:; BB(0x00692685);
    /* 00692685: movzx edx, word ptr [ecx + 0x1c] */ r_edx = (u32)R16((u32)(r_ecx+0x1cu));
    /* 00692689: movzx ecx, byte ptr [esp + 0xc] */ r_ecx = (u32)R8((u32)(r_esp+0xcu));
    /* 0069268e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00692690: mov byte ptr [esp + 5], al */ W8((u32)(r_esp+0x5u), (u8)r_eax);
    /* 00692694: mov byte ptr [esp + 6], al */ W8((u32)(r_esp+0x6u), (u8)r_eax);
    /* 00692698: mov byte ptr [esp + 7], al */ W8((u32)(r_esp+0x7u), (u8)r_eax);
    /* 0069269c: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 006926a1: mov byte ptr [esp], 0x9b */ W8((u32)(r_esp), 0x9bu);
    /* 006926a5: mov byte ptr [esp + 4], cl */ W8((u32)(r_esp+0x4u), (u8)r_ecx);
    /* 006926a9: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 006926ae: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006926b1: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6926b6u); f_008003e0();
    /* 006926b6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006926b9: ret 4 */ FN_RET(0x0069266c); r_esp += 8; return;
}

void f_006926bc(void) /* sub_6926BC */
{
    FN_ENTER(0x006926bc);
    /* 006926bc: mov eax, dword ptr [ecx + 0x92c] */ r_eax = R32((u32)(r_ecx+0x92cu));
    /* 006926c2: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006926c4: je 0x6926cc */ if (fZ) goto L_006926cc;
L_006926c6:; BB(0x006926c6);
    /* 006926c6: mov eax, 1 */ r_eax = 0x1u;
    /* 006926cb: ret  */ FN_RET(0x006926bc); r_esp += 4; return;
L_006926cc:; BB(0x006926cc);
    /* 006926cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006926ce: ret  */ FN_RET(0x006926bc); r_esp += 4; return;
}

void f_006926d0(void) /* sub_6926D0 */
{
    FN_ENTER(0x006926d0);
    /* 006926d0: mov dword ptr [ecx + 0x3c0], 0 */ W32((u32)(r_ecx+0x3c0u), 0x0u);
    /* 006926da: ret  */ FN_RET(0x006926d0); r_esp += 4; return;
}

void f_006926dc(void) /* sub_6926DC */
{
    FN_ENTER(0x006926dc);
    /* 006926dc: mov dword ptr [ecx + 0x3c0], 1 */ W32((u32)(r_ecx+0x3c0u), 0x1u);
    /* 006926e6: ret  */ FN_RET(0x006926dc); r_esp += 4; return;
}

void f_006926e8(void) /* sub_6926E8 */
{
    FN_ENTER(0x006926e8);
    /* 006926e8: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006926ec: call 0x82e1e8 */ r_esp -= 4; W32(r_esp, 0x6926f1u); f_0082e1e8();
    /* 006926f1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006926f2: ret  */ FN_RET(0x006926e8); r_esp += 4; return;
}

void f_006926f4(void) /* sub_6926F4 */
{
    FN_ENTER(0x006926f4);
    /* 006926f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006926f5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006926f6: mov edx, 0xa94254 */ r_edx = 0xa94254u;
    /* 006926fb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006926fd: mov ebx, eax */ r_ebx = r_eax;
    /* 006926ff: mov esi, edx */ r_esi = r_edx;
L_00692701:; BB(0x00692701);
    /* 00692701: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 00692703: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692705: je 0x69270d */ if (fZ) goto L_0069270d;
L_00692707:; BB(0x00692707);
    /* 00692707: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00692708: call dword ptr [esp + 0x10] */ { u32 t = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, 0x69270cu); call_ind(t); }
    /* 0069270c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0069270d:; BB(0x0069270d);
    /* 0069270d: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00692710: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00692713: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00692716: jl 0x692701 */ if ((fS!=fO)) goto L_00692701;
L_00692718:; BB(0x00692718);
    /* 00692718: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00692719: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069271a: ret  */ FN_RET(0x006926f4); r_esp += 4; return;
}

void f_0069271c(void) /* sub_69271C */
{
    FN_ENTER(0x0069271c);
    /* 0069271c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0069271d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0069271f: mov ebx, eax */ r_ebx = r_eax;
L_00692721:; BB(0x00692721);
    /* 00692721: mov ecx, dword ptr [ebx + 0xa94254] */ r_ecx = R32((u32)(r_ebx+0xa94254u));
    /* 00692727: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0069272a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069272c: je 0x692740 */ if (fZ) goto L_00692740;
L_0069272e:; BB(0x0069272e);
    /* 0069272e: movsx edx, word ptr [ecx + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 00692735: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692738: jne 0x692740 */ if (!fZ) goto L_00692740;
L_0069273a:; BB(0x0069273a);
    /* 0069273a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0069273b: call dword ptr [esp + 0xc] */ { u32 t = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, 0x69273fu); call_ind(t); }
    /* 0069273f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00692740:; BB(0x00692740);
    /* 00692740: cmp ebx, 0x30 */ {  u32 a = r_ebx; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00692743: jl 0x692721 */ if ((fS!=fO)) goto L_00692721;
L_00692745:; BB(0x00692745);
    /* 00692745: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00692746: ret  */ FN_RET(0x0069271c); r_esp += 4; return;
}

void f_00692748(void) /* sub_692748 */
{
    FN_ENTER(0x00692748);
    /* 00692748: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069274b: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 00692750: mov byte ptr [esp + 4], 0x22 */ W8((u32)(r_esp+0x4u), 0x22u);
    /* 00692755: mov byte ptr [esp + 5], 1 */ W8((u32)(r_esp+0x5u), 0x1u);
    /* 0069275a: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x69275fu); f_0068d5ac();
    /* 0069275f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692761: je 0x692785 */ if (fZ) goto L_00692785;
L_00692763:; BB(0x00692763);
    /* 00692763: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 0069276a: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069276d: jne 0x692773 */ if (!fZ) goto L_00692773;
L_0069276f:; BB(0x0069276f);
    /* 0069276f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00692772: ret  */ FN_RET(0x00692748); r_esp += 4; return;
L_00692773:; BB(0x00692773);
    /* 00692773: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00692777: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 0069277b: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 00692780: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x692785u); f_008003e0();
L_00692785:; BB(0x00692785);
    /* 00692785: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00692788: ret  */ FN_RET(0x00692748); r_esp += 4; return;
}

void f_0069278c(void) /* sub_69278C */
{
    FN_ENTER(0x0069278c);
    /* 0069278c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0069278d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00692790: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00692794: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00692798: mov byte ptr [esp + 4], 0x22 */ W8((u32)(r_esp+0x4u), 0x22u);
    /* 0069279d: mov byte ptr [esp + 5], 1 */ W8((u32)(r_esp+0x5u), 0x1u);
    /* 006927a2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006927a4: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 006927a8: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x6927adu); f_006a9e70();
    /* 006927ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006927af: je 0x6927fe */ if (fZ) goto L_006927fe;
L_006927b1:; BB(0x006927b1);
    /* 006927b1: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 006927b6: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x6927bbu); f_0068d5ac();
    /* 006927bb: mov ebp, eax */ r_ebp = r_eax;
    /* 006927bd: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006927bf: je 0x6927fe */ if (fZ) goto L_006927fe;
L_006927c1:; BB(0x006927c1);
    /* 006927c1: mov ecx, dword ptr [ebp + 0x33c] */ r_ecx = R32((u32)(r_ebp+0x33cu));
    /* 006927c7: test cl, 4 */ {  u32 a = (u8)r_ecx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006927ca: je 0x6927d3 */ if (fZ) goto L_006927d3;
L_006927cc:; BB(0x006927cc);
    /* 006927cc: mov edx, 1 */ r_edx = 0x1u;
    /* 006927d1: jmp 0x6927d5 */ goto L_006927d5;
L_006927d3:; BB(0x006927d3);
    /* 006927d3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006927d5:; BB(0x006927d5);
    /* 006927d5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006927d7: jne 0x6927fe */ if (!fZ) goto L_006927fe;
L_006927d9:; BB(0x006927d9);
    /* 006927d9: or ecx, 0x40000 */ {  u32 a = r_ecx; u32 b = 0x40000u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 006927df: mov dword ptr [ebp + 0x33c], ecx */ W32((u32)(r_ebp+0x33cu), r_ecx);
    /* 006927e5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006927e7: call 0x692804 */ r_esp -= 4; W32(r_esp, 0x6927ecu); f_00692804();
    /* 006927ec: mov edx, dword ptr [ebp + 0x33c] */ r_edx = R32((u32)(r_ebp+0x33cu));
    /* 006927f2: and edx, 0xffdfffff */ {  u32 a = r_edx; u32 b = 0xffdfffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006927f8: mov dword ptr [ebp + 0x33c], edx */ W32((u32)(r_ebp+0x33cu), r_edx);
L_006927fe:; BB(0x006927fe);
    /* 006927fe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00692801: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00692802: ret  */ FN_RET(0x0069278c); r_esp += 4; return;
}

void f_00692804(void) /* sub_692804 */
{
    FN_ENTER(0x00692804);
    /* 00692804: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00692806: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00692809: or eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0069280e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00692810: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00692813: call 0x7b52ec */ r_esp -= 4; W32(r_esp, 0x692818u); f_007b52ec();
    /* 00692818: ret  */ FN_RET(0x00692804); r_esp += 4; return;
}

void f_0069281c(void) /* sub_69281C */
{
    FN_ENTER(0x0069281c);
    /* 0069281c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0069281f: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 00692824: mov byte ptr [esp + 4], 0x23 */ W8((u32)(r_esp+0x4u), 0x23u);
    /* 00692829: mov byte ptr [esp + 5], 1 */ W8((u32)(r_esp+0x5u), 0x1u);
    /* 0069282e: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x692833u); f_0068d5ac();
    /* 00692833: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692835: je 0x692859 */ if (fZ) goto L_00692859;
L_00692837:; BB(0x00692837);
    /* 00692837: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 0069283e: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692841: jne 0x692847 */ if (!fZ) goto L_00692847;
L_00692843:; BB(0x00692843);
    /* 00692843: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00692846: ret  */ FN_RET(0x0069281c); r_esp += 4; return;
L_00692847:; BB(0x00692847);
    /* 00692847: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0069284b: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 0069284f: mov word ptr [esp + 6], ax */ W16((u32)(r_esp+0x6u), (u16)r_eax);
    /* 00692854: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x692859u); f_008003e0();
L_00692859:; BB(0x00692859);
    /* 00692859: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069285c: ret  */ FN_RET(0x0069281c); r_esp += 4; return;
}

void f_00692860(void) /* sub_692860 */
{
    FN_ENTER(0x00692860);
    /* 00692860: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00692863: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00692867: mov byte ptr [esp + 4], 0x23 */ W8((u32)(r_esp+0x4u), 0x23u);
    /* 0069286c: mov byte ptr [esp + 5], 1 */ W8((u32)(r_esp+0x5u), 0x1u);
    /* 00692871: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00692875: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00692877: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0069287b: call 0x6a9e70 */ r_esp -= 4; W32(r_esp, 0x692880u); f_006a9e70();
    /* 00692880: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692882: je 0x6928a4 */ if (fZ) goto L_006928a4;
L_00692884:; BB(0x00692884);
    /* 00692884: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 00692889: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x69288eu); f_0068d5ac();
    /* 0069288e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692890: je 0x6928a4 */ if (fZ) goto L_006928a4;
L_00692892:; BB(0x00692892);
    /* 00692892: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 00692898: and edx, 0xfffbffff */ {  u32 a = r_edx; u32 b = 0xfffbffffu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0069289e: mov dword ptr [eax + 0x33c], edx */ W32((u32)(r_eax+0x33cu), r_edx);
L_006928a4:; BB(0x006928a4);
    /* 006928a4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006928a7: ret  */ FN_RET(0x00692860); r_esp += 4; return;
}

void f_006928a8(void) /* sub_6928A8 */
{
    FN_ENTER(0x006928a8);
    /* 006928a8: mov eax, dword ptr [ecx + 0x33c] */ r_eax = R32((u32)(r_ecx+0x33cu));
    /* 006928ae: test eax, 0x40000 */ {  u32 a = r_eax; u32 b = 0x40000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006928b3: je 0x6928bb */ if (fZ) goto L_006928bb;
L_006928b5:; BB(0x006928b5);
    /* 006928b5: mov eax, 1 */ r_eax = 0x1u;
    /* 006928ba: ret  */ FN_RET(0x006928a8); r_esp += 4; return;
L_006928bb:; BB(0x006928bb);
    /* 006928bb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006928bd: ret  */ FN_RET(0x006928a8); r_esp += 4; return;
}

void f_006928c0(void) /* sub_6928C0 */
{
    FN_ENTER(0x006928c0);
    /* 006928c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006928c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006928c2: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006928c6: movzx eax, word ptr [edx + 2] */ r_eax = (u32)R16((u32)(r_edx+0x2u));
    /* 006928ca: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 006928cd: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x6928d2u); f_0068d5ac();
    /* 006928d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006928d4: je 0x6928de */ if (fZ) goto L_006928de;
L_006928d6:; BB(0x006928d6);
    /* 006928d6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006928d7: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006928d9: mov ecx, eax */ r_ecx = r_eax;
    /* 006928db: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x6928deu); call_ind(t); }
L_006928de:; BB(0x006928de);
    /* 006928de: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006928df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006928e0: ret  */ FN_RET(0x006928c0); r_esp += 4; return;
}

void f_006928e4(void) /* sub_6928E4 */
{
    FN_ENTER(0x006928e4);
    /* 006928e4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006928e5: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006928e8: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 006928ec: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006928ee: mov word ptr [esp + 8], dx */ W16((u32)(r_esp+0x8u), (u16)r_edx);
    /* 006928f3: mov byte ptr [esp + 4], 0x30 */ W8((u32)(r_esp+0x4u), 0x30u);
    /* 006928f8: mov word ptr [esp + 0xa], dx */ W16((u32)(r_esp+0xau), (u16)r_edx);
    /* 006928fd: mov byte ptr [esp + 5], 5 */ W8((u32)(r_esp+0x5u), 0x5u);
    /* 00692902: mov word ptr [esp + 0xc], dx */ W16((u32)(r_esp+0xcu), (u16)r_edx);
    /* 00692907: mov word ptr [esp + 0xe], dx */ W16((u32)(r_esp+0xeu), (u16)r_edx);
    /* 0069290c: mov word ptr [esp + 0x10], dx */ W16((u32)(r_esp+0x10u), (u16)r_edx);
    /* 00692911: mov word ptr [esp + 0x12], dx */ W16((u32)(r_esp+0x12u), (u16)r_edx);
    /* 00692916: mov word ptr [esp + 0x14], dx */ W16((u32)(r_esp+0x14u), (u16)r_edx);
    /* 0069291b: mov word ptr [esp + 0x16], dx */ W16((u32)(r_esp+0x16u), (u16)r_edx);
    /* 00692920: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 00692922: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00692926: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00692929: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 0069292d: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00692931: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00692934: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00692938: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0069293b: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0069293f: mov eax, dword ptr [eax + 0x10] */ r_eax = R32((u32)(r_eax+0x10u));
    /* 00692942: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00692946: call 0x6a9a78 */ r_esp -= 4; W32(r_esp, 0x69294bu); f_006a9a78();
    /* 0069294b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0069294d: je 0x692a83 */ if (fZ) goto L_00692a83;
L_00692953:; BB(0x00692953);
    /* 00692953: movzx eax, word ptr [esp + 6] */ r_eax = (u32)R16((u32)(r_esp+0x6u));
    /* 00692958: call 0x68d5ac */ r_esp -= 4; W32(r_esp, 0x69295du); f_0068d5ac();
    /* 0069295d: mov esi, eax */ r_esi = r_eax;
    /* 0069295f: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692961: je 0x692a83 */ if (fZ) goto L_00692a83;
L_00692967:; BB(0x00692967);
    /* 00692967: movsx edx, word ptr [esi + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 0069296e: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692971: jne 0x69297c */ if (!fZ) goto L_0069297c;
L_00692973:; BB(0x00692973);
    /* 00692973: mov ecx, esi */ r_ecx = r_esi;
    /* 00692975: call 0x692c14 */ r_esp -= 4; W32(r_esp, 0x69297au); f_00692c14();
    /* 0069297a: jmp 0x6929e3 */ goto L_006929e3;
L_0069297c:; BB(0x0069297c);
    /* 0069297c: movzx edx, word ptr [esp + 8] */ r_edx = (u32)R16((u32)(r_esp+0x8u));
    /* 00692981: mov eax, dword ptr [esi + 0x2b4] */ r_eax = R32((u32)(r_esi+0x2b4u));
    /* 00692987: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 0069298a: movzx edx, word ptr [esp + 0xa] */ r_edx = (u32)R16((u32)(r_esp+0xau));
    /* 0069298f: mov eax, dword ptr [esi + 0x2b4] */ r_eax = R32((u32)(r_esi+0x2b4u));
    /* 00692995: mov word ptr [eax + 2], dx */ W16((u32)(r_eax+0x2u), (u16)r_edx);
    /* 00692999: movzx edx, word ptr [esp + 0xc] */ r_edx = (u32)R16((u32)(r_esp+0xcu));
    /* 0069299e: mov eax, dword ptr [esi + 0x2b4] */ r_eax = R32((u32)(r_esi+0x2b4u));
    /* 006929a4: mov word ptr [eax + 4], dx */ W16((u32)(r_eax+0x4u), (u16)r_edx);
    /* 006929a8: movzx edx, word ptr [esp + 0xe] */ r_edx = (u32)R16((u32)(r_esp+0xeu));
    /* 006929ad: mov eax, dword ptr [esi + 0x2b4] */ r_eax = R32((u32)(r_esi+0x2b4u));
    /* 006929b3: mov word ptr [eax + 6], dx */ W16((u32)(r_eax+0x6u), (u16)r_edx);
    /* 006929b7: movzx edx, word ptr [esp + 0x10] */ r_edx = (u32)R16((u32)(r_esp+0x10u));
    /* 006929bc: mov eax, dword ptr [esi + 0x2b4] */ r_eax = R32((u32)(r_esi+0x2b4u));
    /* 006929c2: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 006929c6: movzx edx, word ptr [esp + 0x12] */ r_edx = (u32)R16((u32)(r_esp+0x12u));
    /* 006929cb: mov eax, dword ptr [esi + 0x2b4] */ r_eax = R32((u32)(r_esi+0x2b4u));
    /* 006929d1: mov word ptr [eax + 0xa], dx */ W16((u32)(r_eax+0xau), (u16)r_edx);
    /* 006929d5: movsx edx, word ptr [esp + 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x14u));
    /* 006929da: mov eax, dword ptr [esi + 0x2b4] */ r_eax = R32((u32)(r_esi+0x2b4u));
    /* 006929e0: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
L_006929e3:; BB(0x006929e3);
    /* 006929e3: mov ecx, esi */ r_ecx = r_esi;
    /* 006929e5: call 0x68a3fc */ r_esp -= 4; W32(r_esp, 0x6929eau); f_0068a3fc();
    /* 006929ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006929ec: je 0x692a83 */ if (fZ) goto L_00692a83;
L_006929f2:; BB(0x006929f2);
    /* 006929f2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006929f3: call 0x6ac420 */ r_esp -= 4; W32(r_esp, 0x6929f8u); f_006ac420();
    /* 006929f8: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006929fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006929fd: call 0x6ac434 */ r_esp -= 4; W32(r_esp, 0x692a02u); f_006ac434();
    /* 00692a02: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00692a05: mov edx, dword ptr [esi + 0x2b4] */ r_edx = R32((u32)(r_esi+0x2b4u));
    /* 00692a0b: add esp, -0x14 */ {  u32 a = r_esp; u32 b = 0xffffffecu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00692a0e: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 00692a12: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 00692a16: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 00692a1a: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 00692a1d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00692a1f: mov ecx, esi */ r_ecx = r_esi;
    /* 00692a21: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00692a25: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00692a29: call 0x770da4 */ r_esp -= 4; W32(r_esp, 0x692a2eu); f_00770da4();
    /* 00692a2e: movzx edx, word ptr [esi + 0x2bc] */ r_edx = (u32)R16((u32)(r_esi+0x2bcu));
    /* 00692a35: mov word ptr [esi + 0x334], dx */ W16((u32)(r_esi+0x334u), (u16)r_edx);
    /* 00692a3c: movzx edx, word ptr [esi + 0x2be] */ r_edx = (u32)R16((u32)(r_esi+0x2beu));
    /* 00692a43: mov word ptr [esi + 0x336], dx */ W16((u32)(r_esi+0x336u), (u16)r_edx);
    /* 00692a4a: mov ecx, esi */ r_ecx = r_esi;
    /* 00692a4c: call 0x695388 */ r_esp -= 4; W32(r_esp, 0x692a51u); f_00695388();
    /* 00692a51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692a53: jne 0x692a99 */ if (!fZ) goto L_00692a99;
L_00692a55:; BB(0x00692a55);
    /* 00692a55: mov edx, dword ptr [esi + 0x33c] */ r_edx = R32((u32)(r_esi+0x33cu));
    /* 00692a5b: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00692a5e: je 0x692a67 */ if (fZ) goto L_00692a67;
L_00692a60:; BB(0x00692a60);
    /* 00692a60: mov edx, 1 */ r_edx = 0x1u;
    /* 00692a65: jmp 0x692a69 */ goto L_00692a69;
L_00692a67:; BB(0x00692a67);
    /* 00692a67: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00692a69:; BB(0x00692a69);
    /* 00692a69: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692a6b: jne 0x692a83 */ if (!fZ) goto L_00692a83;
L_00692a6d:; BB(0x00692a6d);
    /* 00692a6d: movsx edx, word ptr [esp + 0x16] */ r_edx = (u32)(i32)(i16)R16((u32)(r_esp+0x16u));
    /* 00692a72: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692a75: je 0x692a88 */ if (fZ) goto L_00692a88;
L_00692a77:; BB(0x00692a77);
    /* 00692a77: push 0x93c818 */ { u32 v = 0x93c818u; r_esp -= 4; W32(r_esp, v); }
    /* 00692a7c: mov ecx, esi */ r_ecx = r_esi;
    /* 00692a7e: call 0x692aa4 */ r_esp -= 4; W32(r_esp, 0x692a83u); f_00692aa4();
L_00692a83:; BB(0x00692a83);
    /* 00692a83: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00692a86: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00692a87: ret  */ FN_RET(0x006928e4); r_esp += 4; return;
L_00692a88:; BB(0x00692a88);
    /* 00692a88: push 0x93c800 */ { u32 v = 0x93c800u; r_esp -= 4; W32(r_esp, v); }
    /* 00692a8d: mov ecx, esi */ r_ecx = r_esi;
    /* 00692a8f: call 0x692aa4 */ r_esp -= 4; W32(r_esp, 0x692a94u); f_00692aa4();
    /* 00692a94: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00692a97: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00692a98: ret  */ FN_RET(0x006928e4); r_esp += 4; return;
L_00692a99:; BB(0x00692a99);
    /* 00692a99: mov ecx, esi */ r_ecx = r_esi;
    /* 00692a9b: call 0x695420 */ r_esp -= 4; W32(r_esp, 0x692aa0u); f_00695420();
    /* 00692aa0: jmp 0x692a55 */ goto L_00692a55;
}

void f_00692aa4(void) /* sub_692AA4 */
{
    FN_ENTER(0x00692aa4);
    /* 00692aa4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00692aa5: mov ebp, esp */ r_ebp = r_esp;
    /* 00692aa7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00692aa9: push 0x8eb352 */ { u32 v = 0x8eb352u; r_esp -= 4; W32(r_esp, v); }
    /* 00692aae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00692ab4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00692ab5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00692abc: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00692abf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00692ac2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00692ac5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00692ac8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00692acb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00692ace: call 0x692bf4 */ r_esp -= 4; W32(r_esp, 0x692ad3u); f_00692bf4();
    /* 00692ad3: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
    /* 00692ada: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00692adf: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x692ae4u); f_005caba4();
    /* 00692ae4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00692ae5: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 00692ae8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692aea: je 0x692b17 */ if (fZ) goto L_00692b17;
L_00692aec:; BB(0x00692aec);
    /* 00692aec: mov dword ptr [ebp - 0x30], 1 */ W32((u32)(r_ebp+0xffffffd0u), 0x1u);
    /* 00692af3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00692afa: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00692afd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00692b00: movzx ebx, word ptr [edx + 0x1c] */ r_ebx = (u32)R16((u32)(r_edx+0x1cu));
    /* 00692b04: mov ecx, eax */ r_ecx = r_eax;
    /* 00692b06: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 00692b08: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00692b0a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00692b0b: call 0x789758 */ r_esp -= 4; W32(r_esp, 0x692b10u); f_00789758();
    /* 00692b10: mov dword ptr [ebp - 0x30], 0 */ W32((u32)(r_ebp+0xffffffd0u), 0x0u);
L_00692b17:; BB(0x00692b17);
    /* 00692b17: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00692b1e: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00692b21: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 00692b25: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00692b26: call 0x697c14 */ r_esp -= 4; W32(r_esp, 0x692b2bu); f_00697c14();
    /* 00692b2b: mov dword ptr [0xaab4f0], 0 */ W32((u32)(0xaab4f0u), 0x0u);
    /* 00692b35: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 00692b37: mov dword ptr [0xaab4f4], 0xbf800000 */ W32((u32)(0xaab4f4u), 0xbf800000u);
    /* 00692b41: mov dword ptr [0xaab4f8], 0 */ W32((u32)(0xaab4f8u), 0x0u);
    /* 00692b4b: mov dword ptr [0xaab48c], 0x3f800000 */ W32((u32)(0xaab48cu), 0x3f800000u);
    /* 00692b55: mov dword ptr [0xaab490], 0x3f800000 */ W32((u32)(0xaab490u), 0x3f800000u);
    /* 00692b5f: mov dword ptr [0xaab494], 0x3f4ccccd */ W32((u32)(0xaab494u), 0x3f4ccccdu);
    /* 00692b69: mov dword ptr [0xaab498], 0x3f2147ae */ W32((u32)(0xaab498u), 0x3f2147aeu);
    /* 00692b73: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00692b7a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x692b7fu); f_005caba4();
    /* 00692b7f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00692b82: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00692b85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692b87: je 0x692bc0 */ if (fZ) goto L_00692bc0;
L_00692b89:; BB(0x00692b89);
    /* 00692b89: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00692b90: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00692b97: push dword ptr [0xaca344] */ { u32 v = R32((u32)(0xaca344u)); r_esp -= 4; W32(r_esp, v); }
    /* 00692b9d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00692ba0: mov ecx, eax */ r_ecx = r_eax;
    /* 00692ba2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00692ba3: push 0x3e4ccccd */ { u32 v = 0x3e4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 00692ba8: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 00692baa: push 0xaab4f0 */ { u32 v = 0xaab4f0u; r_esp -= 4; W32(r_esp, v); }
    /* 00692baf: push 0xaab48c */ { u32 v = 0xaab48cu; r_esp -= 4; W32(r_esp, v); }
    /* 00692bb4: call 0x6eb52c */ r_esp -= 4; W32(r_esp, 0x692bb9u); f_006eb52c();
    /* 00692bb9: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00692bc0:; BB(0x00692bc0);
    /* 00692bc0: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00692bc7: push 0x3f000000 */ { u32 v = 0x3f000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00692bcc: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00692bd1: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00692bd4: movzx edx, word ptr [eax + 0x1c] */ r_edx = (u32)R16((u32)(r_eax+0x1cu));
    /* 00692bd8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00692bd9: call 0x794984 */ r_esp -= 4; W32(r_esp, 0x692bdeu); f_00794984();
    /* 00692bde: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00692be1: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00692be4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00692be7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00692bee: mov esp, ebp */ r_esp = r_ebp;
    /* 00692bf0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00692bf1: ret 4 */ FN_RET(0x00692aa4); r_esp += 8; return;
}

void f_00692bf4(void) /* sub_692BF4 */
{
    FN_ENTER(0x00692bf4);
    /* 00692bf4: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 00692bfb: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00692bfe: jne 0x692c12 */ if (!fZ) goto L_00692c12;
L_00692c00:; BB(0x00692c00);
    /* 00692c00: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00692c02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00692c03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00692c04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00692c05: push 0x58d */ { u32 v = 0x58du; r_esp -= 4; W32(r_esp, v); }
    /* 00692c0a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x692c0fu); f_00814298();
    /* 00692c0f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00692c12:; BB(0x00692c12);
    /* 00692c12: ret  */ FN_RET(0x00692bf4); r_esp += 4; return;
}

void f_00692c14(void) /* sub_692C14 */
{
    FN_ENTER(0x00692c14);
    /* 00692c14: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00692c15: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00692c16: sub esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00692c19: mov esi, ecx */ r_esi = r_ecx;
    /* 00692c1b: movsx eax, word ptr [esi + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x32cu));
    /* 00692c22: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692c25: jne 0x692e7b */ if (!fZ) goto L_00692e7b;
L_00692c2b:; BB(0x00692c2b);
    /* 00692c2b: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x692c30u); f_00807d60();
    /* 00692c30: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692c32: jne 0x692c3a */ if (!fZ) goto L_00692c3a;
L_00692c34:; BB(0x00692c34);
    /* 00692c34: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00692c37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00692c38: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00692c39: ret  */ FN_RET(0x00692c14); r_esp += 4; return;
L_00692c3a:; BB(0x00692c3a);
    /* 00692c3a: mov eax, dword ptr [esi + 0x2b4] */ r_eax = R32((u32)(r_esi+0x2b4u));
    /* 00692c40: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 00692c43: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00692c45: jge 0x692c4b */ if ((fS==fO)) goto L_00692c4b;
L_00692c47:; BB(0x00692c47);
    /* 00692c47: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00692c49: jmp 0x692c57 */ goto L_00692c57;
L_00692c4b:; BB(0x00692c4b);
    /* 00692c4b: cmp eax, 0xc7 */ {  u32 a = r_eax; u32 b = 0xc7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692c50: jle 0x692c57 */ if ((fZ||fS!=fO)) goto L_00692c57;
L_00692c52:; BB(0x00692c52);
    /* 00692c52: mov eax, 0xc7 */ r_eax = 0xc7u;
L_00692c57:; BB(0x00692c57);
    /* 00692c57: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00692c5a: cmp eax, 0xc7 */ {  u32 a = r_eax; u32 b = 0xc7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692c5f: jle 0x692c67 */ if ((fZ||fS!=fO)) goto L_00692c67;
L_00692c61:; BB(0x00692c61);
    /* 00692c61: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00692c64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00692c65: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00692c66: ret  */ FN_RET(0x00692c14); r_esp += 4; return;
L_00692c67:; BB(0x00692c67);
    /* 00692c67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00692c68: movsx edx, byte ptr [esi + 0x961] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esi+0x961u));
    /* 00692c6f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00692c70: call 0x6ac5cc */ r_esp -= 4; W32(r_esp, 0x692c75u); f_006ac5cc();
    /* 00692c75: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00692c78: mov edx, dword ptr [esi + 0x2b4] */ r_edx = R32((u32)(r_esi+0x2b4u));
    /* 00692c7e: cmp eax, dword ptr [edx + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692c81: jle 0x692c89 */ if ((fZ||fS!=fO)) goto L_00692c89;
L_00692c83:; BB(0x00692c83);
    /* 00692c83: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00692c86: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00692c87: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00692c88: ret  */ FN_RET(0x00692c14); r_esp += 4; return;
L_00692c89:; BB(0x00692c89);
    /* 00692c89: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00692c8c: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00692c90: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00692c92: lea ebp, [esi + 0xdf8] */ r_ebp = (u32)(r_esi+0xdf8u);
    /* 00692c98: mov word ptr [esp + 0x12], ax */ W16((u32)(r_esp+0x12u), (u16)r_eax);
    /* 00692c9d: mov word ptr [esp + 0x10], ax */ W16((u32)(r_esp+0x10u), (u16)r_eax);
    /* 00692ca2: mov word ptr [esp + 0xe], ax */ W16((u32)(r_esp+0xeu), (u16)r_eax);
    /* 00692ca7: mov word ptr [esp + 0xc], ax */ W16((u32)(r_esp+0xcu), (u16)r_eax);
    /* 00692cac: mov word ptr [esp + 0xa], ax */ W16((u32)(r_esp+0xau), (u16)r_eax);
    /* 00692cb1: mov word ptr [esp + 8], ax */ W16((u32)(r_esp+0x8u), (u16)r_eax);
    /* 00692cb6: mov word ptr [esp + 0x1c], ax */ W16((u32)(r_esp+0x1cu), (u16)r_eax);
    /* 00692cbb: mov word ptr [esp + 0x1a], ax */ W16((u32)(r_esp+0x1au), (u16)r_eax);
    /* 00692cc0: mov word ptr [esp + 0x18], ax */ W16((u32)(r_esp+0x18u), (u16)r_eax);
    /* 00692cc5: mov word ptr [esp + 0x16], ax */ W16((u32)(r_esp+0x16u), (u16)r_eax);
    /* 00692cca: mov word ptr [esp + 0x14], ax */ W16((u32)(r_esp+0x14u), (u16)r_eax);
    /* 00692ccf: mov word ptr [esp + 0x20], ax */ W16((u32)(r_esp+0x20u), (u16)r_eax);
    /* 00692cd4: mov word ptr [esp + 0x1e], ax */ W16((u32)(r_esp+0x1eu), (u16)r_eax);
    /* 00692cd9: mov word ptr [esp + 0x2e], ax */ W16((u32)(r_esp+0x2eu), (u16)r_eax);
    /* 00692cde: mov word ptr [esp + 0x2c], ax */ W16((u32)(r_esp+0x2cu), (u16)r_eax);
    /* 00692ce3: mov word ptr [esp + 0x2a], ax */ W16((u32)(r_esp+0x2au), (u16)r_eax);
    /* 00692ce8: mov word ptr [esp + 0x28], ax */ W16((u32)(r_esp+0x28u), (u16)r_eax);
    /* 00692ced: mov word ptr [esp + 0x26], ax */ W16((u32)(r_esp+0x26u), (u16)r_eax);
    /* 00692cf2: mov word ptr [esp + 0x24], ax */ W16((u32)(r_esp+0x24u), (u16)r_eax);
    /* 00692cf7: mov word ptr [esp + 0x38], ax */ W16((u32)(r_esp+0x38u), (u16)r_eax);
    /* 00692cfc: mov word ptr [esp + 0x36], ax */ W16((u32)(r_esp+0x36u), (u16)r_eax);
    /* 00692d01: mov word ptr [esp + 0x34], ax */ W16((u32)(r_esp+0x34u), (u16)r_eax);
    /* 00692d06: mov word ptr [esp + 0x32], ax */ W16((u32)(r_esp+0x32u), (u16)r_eax);
    /* 00692d0b: mov word ptr [esp + 0x30], ax */ W16((u32)(r_esp+0x30u), (u16)r_eax);
    /* 00692d10: mov word ptr [esp + 0x3c], ax */ W16((u32)(r_esp+0x3cu), (u16)r_eax);
    /* 00692d15: mov word ptr [esp + 0x3a], ax */ W16((u32)(r_esp+0x3au), (u16)r_eax);
    /* 00692d1a: mov word ptr [esp + 0x4a], ax */ W16((u32)(r_esp+0x4au), (u16)r_eax);
    /* 00692d1f: mov word ptr [esp + 0x48], ax */ W16((u32)(r_esp+0x48u), (u16)r_eax);
    /* 00692d24: mov word ptr [esp + 0x46], ax */ W16((u32)(r_esp+0x46u), (u16)r_eax);
    /* 00692d29: mov word ptr [esp + 0x44], ax */ W16((u32)(r_esp+0x44u), (u16)r_eax);
    /* 00692d2e: mov word ptr [esp + 0x42], ax */ W16((u32)(r_esp+0x42u), (u16)r_eax);
    /* 00692d33: mov word ptr [esp + 0x40], ax */ W16((u32)(r_esp+0x40u), (u16)r_eax);
    /* 00692d38: mov word ptr [esp + 0x54], ax */ W16((u32)(r_esp+0x54u), (u16)r_eax);
    /* 00692d3d: mov word ptr [esp + 0x52], ax */ W16((u32)(r_esp+0x52u), (u16)r_eax);
    /* 00692d42: mov word ptr [esp + 0x50], ax */ W16((u32)(r_esp+0x50u), (u16)r_eax);
    /* 00692d47: mov word ptr [esp + 0x4e], ax */ W16((u32)(r_esp+0x4eu), (u16)r_eax);
    /* 00692d4c: mov word ptr [esp + 0x4c], ax */ W16((u32)(r_esp+0x4cu), (u16)r_eax);
    /* 00692d51: mov word ptr [esp + 0x58], ax */ W16((u32)(r_esp+0x58u), (u16)r_eax);
    /* 00692d56: mov word ptr [esp + 0x56], ax */ W16((u32)(r_esp+0x56u), (u16)r_eax);
    /* 00692d5b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00692d5d: mov ebx, eax */ r_ebx = r_eax;
L_00692d5f:; BB(0x00692d5f);
    /* 00692d5f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00692d60: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00692d62: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x692d67u); f_0069792c();
    /* 00692d67: mov edi, eax */ r_edi = r_eax;
    /* 00692d69: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692d6b: je 0x692da2 */ if (fZ) goto L_00692da2;
L_00692d6d:; BB(0x00692d6d);
    /* 00692d6d: mov ecx, edi */ r_ecx = r_edi;
    /* 00692d6f: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x692d74u); f_008173b4();
    /* 00692d74: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692d76: je 0x692da2 */ if (fZ) goto L_00692da2;
L_00692d78:; BB(0x00692d78);
    /* 00692d78: mov edx, dword ptr [edi + 0xdc] */ r_edx = R32((u32)(r_edi+0xdcu));
    /* 00692d7e: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00692d81: jne 0x692d87 */ if (!fZ) goto L_00692d87;
L_00692d83:; BB(0x00692d83);
    /* 00692d83: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00692d85: jmp 0x692d95 */ goto L_00692d95;
L_00692d87:; BB(0x00692d87);
    /* 00692d87: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00692d8a: je 0x692d93 */ if (fZ) goto L_00692d93;
L_00692d8c:; BB(0x00692d8c);
    /* 00692d8c: mov edx, 1 */ r_edx = 0x1u;
    /* 00692d91: jmp 0x692d95 */ goto L_00692d95;
L_00692d93:; BB(0x00692d93);
    /* 00692d93: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00692d95:; BB(0x00692d95);
    /* 00692d95: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692d97: je 0x692da2 */ if (fZ) goto L_00692da2;
L_00692d99:; BB(0x00692d99);
    /* 00692d99: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00692d9b: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00692d9d: mov ecx, edi */ r_ecx = r_edi;
    /* 00692d9f: call dword ptr [edx + 0x54] */ { u32 t = R32((u32)(r_edx+0x54u)); r_esp -= 4; W32(r_esp, 0x692da2u); call_ind(t); }
L_00692da2:; BB(0x00692da2);
    /* 00692da2: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00692da5: cmp ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692da8: jl 0x692d5f */ if ((fS!=fO)) goto L_00692d5f;
L_00692daa:; BB(0x00692daa);
    /* 00692daa: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00692dad: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00692db1: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 00692db5: push dword ptr [esi + 0x320] */ { u32 v = R32((u32)(r_esi+0x320u)); r_esp -= 4; W32(r_esp, v); }
    /* 00692dbb: push dword ptr [esi + 0x31c] */ { u32 v = R32((u32)(r_esi+0x31cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00692dc1: push dword ptr [esi + 0x2b4] */ { u32 v = R32((u32)(r_esi+0x2b4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00692dc7: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00692dc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00692dc9: call 0x698034 */ r_esp -= 4; W32(r_esp, 0x692dceu); f_00698034();
    /* 00692dce: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00692dd1: mov ecx, esi */ r_ecx = r_esi;
    /* 00692dd3: call 0x692e84 */ r_esp -= 4; W32(r_esp, 0x692dd8u); f_00692e84();
    /* 00692dd8: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00692ddc: push dword ptr [esi + 0x320] */ { u32 v = R32((u32)(r_esi+0x320u)); r_esp -= 4; W32(r_esp, v); }
    /* 00692de2: push dword ptr [esi + 0x31c] */ { u32 v = R32((u32)(r_esi+0x31cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00692de8: push dword ptr [esi + 0x2b4] */ { u32 v = R32((u32)(r_esi+0x2b4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00692dee: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00692def: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00692df0: call 0x698034 */ r_esp -= 4; W32(r_esp, 0x692df5u); f_00698034();
    /* 00692df5: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00692df8: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00692dfb: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00692dff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00692e01: mov ebx, eax */ r_ebx = r_eax;
L_00692e03:; BB(0x00692e03);
    /* 00692e03: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00692e04: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00692e06: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x692e0bu); f_0069792c();
    /* 00692e0b: mov edi, eax */ r_edi = r_eax;
    /* 00692e0d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692e0f: je 0x692e46 */ if (fZ) goto L_00692e46;
L_00692e11:; BB(0x00692e11);
    /* 00692e11: mov ecx, edi */ r_ecx = r_edi;
    /* 00692e13: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x692e18u); f_008173b4();
    /* 00692e18: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692e1a: je 0x692e46 */ if (fZ) goto L_00692e46;
L_00692e1c:; BB(0x00692e1c);
    /* 00692e1c: mov edx, dword ptr [edi + 0xdc] */ r_edx = R32((u32)(r_edi+0xdcu));
    /* 00692e22: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00692e25: jne 0x692e2b */ if (!fZ) goto L_00692e2b;
L_00692e27:; BB(0x00692e27);
    /* 00692e27: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00692e29: jmp 0x692e39 */ goto L_00692e39;
L_00692e2b:; BB(0x00692e2b);
    /* 00692e2b: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00692e2e: je 0x692e37 */ if (fZ) goto L_00692e37;
L_00692e30:; BB(0x00692e30);
    /* 00692e30: mov edx, 1 */ r_edx = 0x1u;
    /* 00692e35: jmp 0x692e39 */ goto L_00692e39;
L_00692e37:; BB(0x00692e37);
    /* 00692e37: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00692e39:; BB(0x00692e39);
    /* 00692e39: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692e3b: je 0x692e46 */ if (fZ) goto L_00692e46;
L_00692e3d:; BB(0x00692e3d);
    /* 00692e3d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00692e3f: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00692e41: mov ecx, edi */ r_ecx = r_edi;
    /* 00692e43: call dword ptr [edx + 0x50] */ { u32 t = R32((u32)(r_edx+0x50u)); r_esp -= 4; W32(r_esp, 0x692e46u); call_ind(t); }
L_00692e46:; BB(0x00692e46);
    /* 00692e46: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00692e49: cmp ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692e4c: jl 0x692e03 */ if ((fS!=fO)) goto L_00692e03;
L_00692e4e:; BB(0x00692e4e);
    /* 00692e4e: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00692e51: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00692e55: lea ebp, [esp + 8] */ r_ebp = (u32)(r_esp+0x8u);
    /* 00692e59: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 00692e5d: lea eax, [esp + 0x40] */ r_eax = (u32)(r_esp+0x40u);
    /* 00692e61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00692e62: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00692e63: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00692e64: call 0x698150 */ r_esp -= 4; W32(r_esp, 0x692e69u); f_00698150();
    /* 00692e69: lea edx, [esp + 0x4c] */ r_edx = (u32)(r_esp+0x4cu);
    /* 00692e6d: movzx eax, word ptr [esi + 0x1c] */ r_eax = (u32)R16((u32)(r_esi+0x1cu));
    /* 00692e71: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00692e72: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00692e73: call 0x718388 */ r_esp -= 4; W32(r_esp, 0x692e78u); f_00718388();
    /* 00692e78: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00692e7b:; BB(0x00692e7b);
    /* 00692e7b: add esp, 0x5c */ {  u32 a = r_esp; u32 b = 0x5cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00692e7e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00692e7f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00692e80: ret  */ FN_RET(0x00692c14); r_esp += 4; return;
}

void f_00692e84(void) /* sub_692E84 */
{
    FN_ENTER(0x00692e84);
    /* 00692e84: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00692e85: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00692e86: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00692e87: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00692e88: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00692e8b: mov esi, ecx */ r_esi = r_ecx;
    /* 00692e8d: movsx ebx, byte ptr [esi + 0x961] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_esi+0x961u));
    /* 00692e94: mov eax, dword ptr [esi + 0x2b4] */ r_eax = R32((u32)(r_esi+0x2b4u));
    /* 00692e9a: mov eax, dword ptr [eax + 0x18] */ r_eax = R32((u32)(r_eax+0x18u));
    /* 00692e9d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00692e9f: jge 0x692ea5 */ if ((fS==fO)) goto L_00692ea5;
L_00692ea1:; BB(0x00692ea1);
    /* 00692ea1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00692ea3: jmp 0x692eb1 */ goto L_00692eb1;
L_00692ea5:; BB(0x00692ea5);
    /* 00692ea5: cmp eax, 0xc7 */ {  u32 a = r_eax; u32 b = 0xc7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692eaa: jle 0x692eb1 */ if ((fZ||fS!=fO)) goto L_00692eb1;
L_00692eac:; BB(0x00692eac);
    /* 00692eac: mov eax, 0xc7 */ r_eax = 0xc7u;
L_00692eb1:; BB(0x00692eb1);
    /* 00692eb1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00692eb4: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00692eb6: mov edi, eax */ r_edi = r_eax;
L_00692eb8:; BB(0x00692eb8);
    /* 00692eb8: cmp edi, 0xc7 */ {  u32 a = r_edi; u32 b = 0xc7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692ebe: jg 0x692eed */ if ((!fZ&&fS==fO)) goto L_00692eed;
L_00692ec0:; BB(0x00692ec0);
    /* 00692ec0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00692ec1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00692ec2: call 0x6ac570 */ r_esp -= 4; W32(r_esp, 0x692ec7u); f_006ac570();
    /* 00692ec7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00692eca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692ecc: je 0x692eed */ if (fZ) goto L_00692eed;
L_00692ece:; BB(0x00692ece);
    /* 00692ece: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00692ed1: mov eax, dword ptr [esi + 0x2b4] */ r_eax = R32((u32)(r_esi+0x2b4u));
    /* 00692ed7: cmp edx, dword ptr [eax + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692eda: jg 0x692eed */ if ((!fZ&&fS==fO)) goto L_00692eed;
L_00692edc:; BB(0x00692edc);
    /* 00692edc: mov dword ptr [eax + 0x18], edi */ W32((u32)(r_eax+0x18u), r_edi);
    /* 00692edf: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00692ee2: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00692ee5: cmp ebp, 0xc7 */ {  u32 a = r_ebp; u32 b = 0xc7u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00692eeb: jl 0x692eb8 */ if ((fS!=fO)) goto L_00692eb8;
L_00692eed:; BB(0x00692eed);
    /* 00692eed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00692eee: call 0x6ac950 */ r_esp -= 4; W32(r_esp, 0x692ef3u); f_006ac950();
    /* 00692ef3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00692ef5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00692ef6: mov ebp, dword ptr [esi + 0x2b4] */ r_ebp = R32((u32)(r_esi+0x2b4u));
    /* 00692efc: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 00692eff: mov word ptr [ebp], dx */ W16((u32)(r_ebp), (u16)r_edx);
    /* 00692f03: mov ebp, dword ptr [esi + 0x2b4] */ r_ebp = R32((u32)(r_esi+0x2b4u));
    /* 00692f09: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 00692f0d: mov word ptr [ebp + 2], dx */ W16((u32)(r_ebp+0x2u), (u16)r_edx);
    /* 00692f11: mov ebp, dword ptr [esi + 0x2b4] */ r_ebp = R32((u32)(r_esi+0x2b4u));
    /* 00692f17: movzx edx, word ptr [eax + 4] */ r_edx = (u32)R16((u32)(r_eax+0x4u));
    /* 00692f1b: mov word ptr [ebp + 4], dx */ W16((u32)(r_ebp+0x4u), (u16)r_edx);
    /* 00692f1f: mov ebp, dword ptr [esi + 0x2b4] */ r_ebp = R32((u32)(r_esi+0x2b4u));
    /* 00692f25: movzx edx, word ptr [eax + 6] */ r_edx = (u32)R16((u32)(r_eax+0x6u));
    /* 00692f29: mov word ptr [ebp + 6], dx */ W16((u32)(r_ebp+0x6u), (u16)r_edx);
    /* 00692f2d: mov ebp, dword ptr [esi + 0x2b4] */ r_ebp = R32((u32)(r_esi+0x2b4u));
    /* 00692f33: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 00692f37: mov word ptr [ebp + 8], dx */ W16((u32)(r_ebp+0x8u), (u16)r_edx);
    /* 00692f3b: mov ebp, dword ptr [esi + 0x2b4] */ r_ebp = R32((u32)(r_esi+0x2b4u));
    /* 00692f41: movzx edx, word ptr [eax + 0xa] */ r_edx = (u32)R16((u32)(r_eax+0xau));
    /* 00692f45: mov word ptr [ebp + 0xa], dx */ W16((u32)(r_ebp+0xau), (u16)r_edx);
    /* 00692f49: mov edx, dword ptr [esi + 0x2b4] */ r_edx = R32((u32)(r_esi+0x2b4u));
    /* 00692f4f: movzx eax, word ptr [eax + 0xc] */ r_eax = (u32)R16((u32)(r_eax+0xcu));
    /* 00692f53: mov word ptr [edx + 0xc], ax */ W16((u32)(r_edx+0xcu), (u16)r_eax);
    /* 00692f57: call 0x6ac570 */ r_esp -= 4; W32(r_esp, 0x692f5cu); f_006ac570();
    /* 00692f5c: mov ebp, eax */ r_ebp = r_eax;
    /* 00692f5e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00692f5f: call 0x6ac470 */ r_esp -= 4; W32(r_esp, 0x692f64u); f_006ac470();
    /* 00692f64: mov ebx, eax */ r_ebx = r_eax;
    /* 00692f66: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00692f69: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00692f6b: je 0x6930c8 */ if (fZ) goto L_006930c8;
L_00692f71:; BB(0x00692f71);
    /* 00692f71: mov eax, dword ptr [esi + 0x2b4] */ r_eax = R32((u32)(r_esi+0x2b4u));
    /* 00692f77: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 00692f7a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00692f7c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00692f7e: jle 0x6930c8 */ if ((fZ||fS!=fO)) goto L_006930c8;
L_00692f84:; BB(0x00692f84);
    /* 00692f84: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
L_00692f88:; BB(0x00692f88);
    /* 00692f88: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 00692f8b: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 00692f8e: add ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00692f91: movzx edi, byte ptr [ebp] */ r_edi = (u32)R8((u32)(r_ebp));
    /* 00692f95: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00692f97: movsx edx, di */ r_edx = (u32)(i32)(i16)(u16)r_edi;
    /* 00692f9a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00692f9c: jl 0x6931eb */ if ((fS!=fO)) goto L_006931eb;
L_00692fa2:; BB(0x00692fa2);
    /* 00692fa2: mov edi, edx */ r_edi = r_edx;
    /* 00692fa4: sub edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00692fa6: movsx edi, di */ r_edi = (u32)(i32)(i16)(u16)r_edi;
    /* 00692fa9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00692fab: jle 0x6931e3 */ if ((fZ||fS!=fO)) goto L_006931e3;
L_00692fb1:; BB(0x00692fb1);
    /* 00692fb1: mov word ptr [eax], cx */ W16((u32)(r_eax), (u16)r_ecx);
L_00692fb4:; BB(0x00692fb4);
    /* 00692fb4: movzx eax, byte ptr [ebp + 1] */ r_eax = (u32)R8((u32)(r_ebp+0x1u));
    /* 00692fb8: mov edi, dword ptr [esi + 0x2b4] */ r_edi = R32((u32)(r_esi+0x2b4u));
    /* 00692fbe: movsx ecx, word ptr [ebx + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2u));
    /* 00692fc2: movzx edx, word ptr [edi + 2] */ r_edx = (u32)R16((u32)(r_edi+0x2u));
    /* 00692fc6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00692fc8: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00692fcb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00692fcd: jl 0x6931d8 */ if ((fS!=fO)) goto L_006931d8;
L_00692fd3:; BB(0x00692fd3);
    /* 00692fd3: mov eax, edx */ r_eax = r_edx;
    /* 00692fd5: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00692fd7: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00692fda: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00692fdc: jle 0x6931cf */ if ((fZ||fS!=fO)) goto L_006931cf;
L_00692fe2:; BB(0x00692fe2);
    /* 00692fe2: mov word ptr [edi + 2], cx */ W16((u32)(r_edi+0x2u), (u16)r_ecx);
L_00692fe6:; BB(0x00692fe6);
    /* 00692fe6: movzx eax, byte ptr [ebp + 2] */ r_eax = (u32)R8((u32)(r_ebp+0x2u));
    /* 00692fea: mov edi, dword ptr [esi + 0x2b4] */ r_edi = R32((u32)(r_esi+0x2b4u));
    /* 00692ff0: movsx ecx, word ptr [ebx + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x4u));
    /* 00692ff4: movzx edx, word ptr [edi + 4] */ r_edx = (u32)R16((u32)(r_edi+0x4u));
    /* 00692ff8: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00692ffa: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00692ffd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00692fff: jl 0x6931c4 */ if ((fS!=fO)) goto L_006931c4;
L_00693005:; BB(0x00693005);
    /* 00693005: mov eax, edx */ r_eax = r_edx;
    /* 00693007: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00693009: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069300c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0069300e: jle 0x6931bb */ if ((fZ||fS!=fO)) goto L_006931bb;
L_00693014:; BB(0x00693014);
    /* 00693014: mov word ptr [edi + 4], cx */ W16((u32)(r_edi+0x4u), (u16)r_ecx);
L_00693018:; BB(0x00693018);
    /* 00693018: movzx eax, byte ptr [ebp + 3] */ r_eax = (u32)R8((u32)(r_ebp+0x3u));
    /* 0069301c: mov edi, dword ptr [esi + 0x2b4] */ r_edi = R32((u32)(r_esi+0x2b4u));
    /* 00693022: movsx ecx, word ptr [ebx + 6] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x6u));
    /* 00693026: movzx edx, word ptr [edi + 6] */ r_edx = (u32)R16((u32)(r_edi+0x6u));
    /* 0069302a: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069302c: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0069302f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00693031: jl 0x6931b0 */ if ((fS!=fO)) goto L_006931b0;
L_00693037:; BB(0x00693037);
    /* 00693037: mov eax, edx */ r_eax = r_edx;
    /* 00693039: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069303b: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 0069303e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00693040: jle 0x6931a7 */ if ((fZ||fS!=fO)) goto L_006931a7;
L_00693046:; BB(0x00693046);
    /* 00693046: mov word ptr [edi + 6], cx */ W16((u32)(r_edi+0x6u), (u16)r_ecx);
L_0069304a:; BB(0x0069304a);
    /* 0069304a: movzx eax, byte ptr [ebp + 4] */ r_eax = (u32)R8((u32)(r_ebp+0x4u));
    /* 0069304e: mov edi, dword ptr [esi + 0x2b4] */ r_edi = R32((u32)(r_esi+0x2b4u));
    /* 00693054: movsx ecx, word ptr [ebx + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x8u));
    /* 00693058: movzx edx, word ptr [edi + 8] */ r_edx = (u32)R16((u32)(r_edi+0x8u));
    /* 0069305c: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0069305e: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00693061: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00693063: jl 0x69319c */ if ((fS!=fO)) goto L_0069319c;
L_00693069:; BB(0x00693069);
    /* 00693069: mov eax, edx */ r_eax = r_edx;
    /* 0069306b: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069306d: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 00693070: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00693072: jle 0x693193 */ if ((fZ||fS!=fO)) goto L_00693193;
L_00693078:; BB(0x00693078);
    /* 00693078: mov word ptr [edi + 8], cx */ W16((u32)(r_edi+0x8u), (u16)r_ecx);
L_0069307c:; BB(0x0069307c);
    /* 0069307c: movzx eax, byte ptr [ebp + 5] */ r_eax = (u32)R8((u32)(r_ebp+0x5u));
    /* 00693080: mov edi, dword ptr [esi + 0x2b4] */ r_edi = R32((u32)(r_esi+0x2b4u));
    /* 00693086: movsx ecx, word ptr [ebx + 0xa] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0xau));
    /* 0069308a: movzx edx, word ptr [edi + 0xa] */ r_edx = (u32)R16((u32)(r_edi+0xau));
    /* 0069308e: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00693090: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00693093: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00693095: jl 0x693188 */ if ((fS!=fO)) goto L_00693188;
L_0069309b:; BB(0x0069309b);
    /* 0069309b: mov eax, edx */ r_eax = r_edx;
    /* 0069309d: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0069309f: movsx eax, ax */ r_eax = (u32)(i32)(i16)(u16)r_eax;
    /* 006930a2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006930a4: jle 0x69317f */ if ((fZ||fS!=fO)) goto L_0069317f;
L_006930aa:; BB(0x006930aa);
    /* 006930aa: mov word ptr [edi + 0xa], cx */ W16((u32)(r_edi+0xau), (u16)r_ecx);
L_006930ae:; BB(0x006930ae);
    /* 006930ae: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 006930b2: mov eax, dword ptr [esi + 0x2b4] */ r_eax = R32((u32)(r_esi+0x2b4u));
    /* 006930b8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006930bb: cmp edx, dword ptr [eax + 0x18] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x18u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006930be: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 006930c2: jl 0x692f88 */ if ((fS!=fO)) goto L_00692f88;
L_006930c8:; BB(0x006930c8);
    /* 006930c8: mov ebp, 2 */ r_ebp = 0x2u;
    /* 006930cd: call 0x688b8c */ r_esp -= 4; W32(r_esp, 0x6930d2u); f_00688b8c();
    /* 006930d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006930d4: je 0x6930db */ if (fZ) goto L_006930db;
L_006930d6:; BB(0x006930d6);
    /* 006930d6: mov ebp, 0xa */ r_ebp = 0xau;
L_006930db:; BB(0x006930db);
    /* 006930db: movzx edx, byte ptr [esi + 0x384] */ r_edx = (u32)R8((u32)(r_esi+0x384u));
    /* 006930e2: imul edx, ebp */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ebp; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 006930e5: movsx ecx, word ptr [ebx] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 006930e8: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 006930eb: mov edx, dword ptr [esi + 0x2b4] */ r_edx = R32((u32)(r_esi+0x2b4u));
    /* 006930f1: call 0x69320e */ r_esp -= 4; W32(r_esp, 0x6930f6u); f_0069320e();
    /* 006930f6: movzx edx, byte ptr [esi + 0x385] */ r_edx = (u32)R8((u32)(r_esi+0x385u));
    /* 006930fd: imul edx, ebp */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ebp; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00693100: movsx ecx, word ptr [ebx + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x2u));
    /* 00693104: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 00693107: mov edx, dword ptr [esi + 0x2b4] */ r_edx = R32((u32)(r_esi+0x2b4u));
    /* 0069310d: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00693110: call 0x69320e */ r_esp -= 4; W32(r_esp, 0x693115u); f_0069320e();
    /* 00693115: movzx edx, byte ptr [esi + 0x386] */ r_edx = (u32)R8((u32)(r_esi+0x386u));
    /* 0069311c: imul edx, ebp */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ebp; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069311f: movsx ecx, word ptr [ebx + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x4u));
    /* 00693123: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 00693126: mov edx, dword ptr [esi + 0x2b4] */ r_edx = R32((u32)(r_esi+0x2b4u));
    /* 0069312c: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069312f: call 0x69320e */ r_esp -= 4; W32(r_esp, 0x693134u); f_0069320e();
    /* 00693134: movzx edx, byte ptr [esi + 0x387] */ r_edx = (u32)R8((u32)(r_esi+0x387u));
    /* 0069313b: imul edx, ebp */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ebp; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069313e: movsx ecx, word ptr [ebx + 8] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0x8u));
    /* 00693142: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 00693145: mov edx, dword ptr [esi + 0x2b4] */ r_edx = R32((u32)(r_esi+0x2b4u));
    /* 0069314b: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069314e: call 0x69320e */ r_esp -= 4; W32(r_esp, 0x693153u); f_0069320e();
    /* 00693153: movzx edx, byte ptr [esi + 0x388] */ r_edx = (u32)R8((u32)(r_esi+0x388u));
    /* 0069315a: imul ebp, edx */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_edx; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0069315d: mov edx, dword ptr [esi + 0x2b4] */ r_edx = R32((u32)(r_esi+0x2b4u));
    /* 00693163: movsx ecx, word ptr [ebx + 0xc] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+0xcu));
    /* 00693167: movsx eax, bp */ r_eax = (u32)(i32)(i16)(u16)r_ebp;
    /* 0069316a: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0069316d: call 0x69320e */ r_esp -= 4; W32(r_esp, 0x693172u); f_0069320e();
    /* 00693172: mov eax, 1 */ r_eax = 0x1u;
    /* 00693177: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0069317a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0069317b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0069317c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0069317d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0069317e: ret  */ FN_RET(0x00692e84); r_esp += 4; return;
L_0069317f:; BB(0x0069317f);
    /* 0069317f: mov word ptr [edi + 0xa], dx */ W16((u32)(r_edi+0xau), (u16)r_edx);
    /* 00693183: jmp 0x6930ae */ goto L_006930ae;
L_00693188:; BB(0x00693188);
    /* 00693188: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069318a: mov word ptr [edi + 0xa], dx */ W16((u32)(r_edi+0xau), (u16)r_edx);
    /* 0069318e: jmp 0x6930ae */ goto L_006930ae;
L_00693193:; BB(0x00693193);
    /* 00693193: mov word ptr [edi + 8], dx */ W16((u32)(r_edi+0x8u), (u16)r_edx);
    /* 00693197: jmp 0x69307c */ goto L_0069307c;
L_0069319c:; BB(0x0069319c);
    /* 0069319c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0069319e: mov word ptr [edi + 8], dx */ W16((u32)(r_edi+0x8u), (u16)r_edx);
    /* 006931a2: jmp 0x69307c */ goto L_0069307c;
L_006931a7:; BB(0x006931a7);
    /* 006931a7: mov word ptr [edi + 6], dx */ W16((u32)(r_edi+0x6u), (u16)r_edx);
    /* 006931ab: jmp 0x69304a */ goto L_0069304a;
L_006931b0:; BB(0x006931b0);
    /* 006931b0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006931b2: mov word ptr [edi + 6], dx */ W16((u32)(r_edi+0x6u), (u16)r_edx);
    /* 006931b6: jmp 0x69304a */ goto L_0069304a;
L_006931bb:; BB(0x006931bb);
    /* 006931bb: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 006931bf: jmp 0x693018 */ goto L_00693018;
L_006931c4:; BB(0x006931c4);
    /* 006931c4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006931c6: mov word ptr [edi + 4], dx */ W16((u32)(r_edi+0x4u), (u16)r_edx);
    /* 006931ca: jmp 0x693018 */ goto L_00693018;
L_006931cf:; BB(0x006931cf);
    /* 006931cf: mov word ptr [edi + 2], dx */ W16((u32)(r_edi+0x2u), (u16)r_edx);
    /* 006931d3: jmp 0x692fe6 */ goto L_00692fe6;
L_006931d8:; BB(0x006931d8);
    /* 006931d8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006931da: mov word ptr [edi + 2], dx */ W16((u32)(r_edi+0x2u), (u16)r_edx);
    /* 006931de: jmp 0x692fe6 */ goto L_00692fe6;
L_006931e3:; BB(0x006931e3);
    /* 006931e3: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 006931e6: jmp 0x692fb4 */ goto L_00692fb4;
L_006931eb:; BB(0x006931eb);
    /* 006931eb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006931ed: mov word ptr [eax], dx */ W16((u32)(r_eax), (u16)r_edx);
    /* 006931f0: jmp 0x692fb4 */ goto L_00692fb4;
}

