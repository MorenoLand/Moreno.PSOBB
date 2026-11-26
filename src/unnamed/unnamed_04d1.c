#include "protos.h"

void f_004d1004(void) /* sub_4D1004 */
{
    FN_ENTER(0x004d1004);
    /* 004d1004: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d1005: mov ebp, esp */ r_ebp = r_esp;
    /* 004d1007: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d1009: push 0x8d1bac */ { u32 v = 0x8d1bacu; r_esp -= 4; W32(r_esp, v); }
    /* 004d100e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d1014: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d1015: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d101c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d101f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d1022: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d1025: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d1028: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d102b: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004d102d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004d1034: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4d1039u); f_005caba4();
    /* 004d1039: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d103a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004d103d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d103f: je 0x4d1072 */ if (fZ) goto L_004d1072;
L_004d1041:; BB(0x004d1041);
    /* 004d1041: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004d1048: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d104f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d1052: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d1055: call 0x4d1078 */ r_esp -= 4; W32(r_esp, 0x4d105au); f_004d1078();
    /* 004d105a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d105d: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004d1064:; BB(0x004d1064);
    /* 004d1064: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d1067: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d106e: mov esp, ebp */ r_esp = r_ebp;
    /* 004d1070: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d1071: ret  */ FN_RET(0x004d1004); r_esp += 4; return;
L_004d1072:; BB(0x004d1072);
    /* 004d1072: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d1074: jmp 0x4d1064 */ goto L_004d1064;
}

void f_004d1078(void) /* sub_4D1078 */
{
    FN_ENTER(0x004d1078);
    /* 004d1078: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d1079: mov ebp, esp */ r_ebp = r_esp;
    /* 004d107b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d107d: push 0x8d1bc8 */ { u32 v = 0x8d1bc8u; r_esp -= 4; W32(r_esp, v); }
    /* 004d1082: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d1088: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d1089: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d1090: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d1093: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d1096: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d1099: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d109c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d109f: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d10a2: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004d10a5: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4d10aau); f_008193cc();
    /* 004d10aa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d10b1: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d10b4: mov ecx, dword ptr [0xa48708] */ r_ecx = R32((u32)(0xa48708u));
    /* 004d10ba: mov dword ptr [edx], 0xafc2d4 */ W32((u32)(r_edx), 0xafc2d4u);
    /* 004d10c0: mov eax, dword ptr [0x9ac950] */ r_eax = R32((u32)(0x9ac950u));
    /* 004d10c5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004d10c7: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 004d10ca: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4d10cfu); f_005b8610();
    /* 004d10cf: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d10d2: mov ecx, dword ptr [0xa48708] */ r_ecx = R32((u32)(0xa48708u));
    /* 004d10d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d10da: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 004d10dd: call 0x5b8624 */ r_esp -= 4; W32(r_esp, 0x4d10e2u); f_005b8624();
    /* 004d10e2: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d10e5: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 004d10e8: mov eax, edx */ r_eax = r_edx;
    /* 004d10ea: mov dword ptr [edx + 0x24], 5 */ W32((u32)(r_edx+0x24u), 0x5u);
    /* 004d10f1: mov dword ptr [edx + 0x28], 0 */ W32((u32)(r_edx+0x28u), 0x0u);
    /* 004d10f8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d10fb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d1102: mov esp, ebp */ r_esp = r_ebp;
    /* 004d1104: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d1105: ret 4 */ FN_RET(0x004d1078); r_esp += 8; return;
}

void f_004d1108(void) /* sub_4D1108 */
{
    FN_ENTER(0x004d1108);
    /* 004d1108: call 0x4d1110 */ r_esp -= 4; W32(r_esp, 0x4d110du); f_004d1110();
    /* 004d110d: ret  */ FN_RET(0x004d1108); r_esp += 4; return;
}

void f_004d1110(void) /* sub_4D1110 */
{
    FN_ENTER(0x004d1110);
    /* 004d1110: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d1111: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d1114: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d1116: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 004d1119: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004d111b: jl 0x4d1127 */ if ((fS!=fO)) goto L_004d1127;
L_004d111d:; BB(0x004d111d);
    /* 004d111d: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d1120: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 004d1123: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004d1125: jle 0x4d112c */ if ((fZ||fS!=fO)) goto L_004d112c;
L_004d1127:; BB(0x004d1127);
    /* 004d1127: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d112a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d112b: ret  */ FN_RET(0x004d1110); r_esp += 4; return;
L_004d112c:; BB(0x004d112c);
    /* 004d112c: call 0x505a20 */ r_esp -= 4; W32(r_esp, 0x4d1131u); f_00505a20();
    /* 004d1131: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d1133: jne 0x4d1179 */ if (!fZ) goto L_004d1179;
L_004d1135:; BB(0x004d1135);
    /* 004d1135: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4d113au); f_008587a5();
    /* 004d113a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004d113d: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004d1140: fdiv dword ptr [0x908dac] */ ST(0) = ST(0) / R_F32((u32)(0x908dacu));
    /* 004d1146: fmul dword ptr [0x908da0] */ ST(0) = ST(0) * R_F32((u32)(0x908da0u));
    /* 004d114c: fadd dword ptr [0x908da4] */ ST(0) = ST(0) + R_F32((u32)(0x908da4u));
    /* 004d1152: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004d1156: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004d115b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d1160: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004d1164: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004d1168: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 004d116c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004d1170: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004d1174: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 004d1177: jmp 0x4d11b7 */ goto L_004d11b7;
L_004d1179:; BB(0x004d1179);
    /* 004d1179: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4d117eu); f_008587a5();
    /* 004d117e: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004d1182: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004d1186: fdiv dword ptr [0x908dac] */ ST(0) = ST(0) / R_F32((u32)(0x908dacu));
    /* 004d118c: fmul dword ptr [0x908da8] */ ST(0) = ST(0) * R_F32((u32)(0x908da8u));
    /* 004d1192: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004d1196: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004d119b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d11a0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004d11a4: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004d11a8: fistp qword ptr [esp + 0x18] */ W64((u32)(r_esp+0x18u), (u64)fx_int64(ST(0))); FPOP();
    /* 004d11ac: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004d11b0: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004d11b4: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
L_004d11b7:; BB(0x004d11b7);
    /* 004d11b7: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4d11bcu); f_008587a5();
    /* 004d11bc: fld dword ptr [0x908d9c] */ FPUSH(R_F32((u32)(0x908d9cu)));
    /* 004d11c2: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004d11c6: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004d11ca: fdiv dword ptr [0x908dac] */ ST(0) = ST(0) / R_F32((u32)(0x908dacu));
    /* 004d11d0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004d11d2: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004d11d4: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004d11d8: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004d11dd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d11e2: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004d11e6: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004d11ea: fistp dword ptr [ebx + 0x28] */ W32((u32)(r_ebx+0x28u), (u32)fx_int32(ST(0))); FPOP();
    /* 004d11ed: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004d11f1: add esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d11f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d11f5: ret  */ FN_RET(0x004d1110); r_esp += 4; return;
}

void f_004d11f8(void) /* sub_4D11F8 */
{
    FN_ENTER(0x004d11f8);
    /* 004d11f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d11f9: mov edi, ecx */ r_edi = r_ecx;
    /* 004d11fb: mov ecx, dword ptr [0xa486f8] */ r_ecx = R32((u32)(0xa486f8u));
    /* 004d1201: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d1203: je 0x4d1213 */ if (fZ) goto L_004d1213;
L_004d1205:; BB(0x004d1205);
    /* 004d1205: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 004d1208: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d120a: je 0x4d1213 */ if (fZ) goto L_004d1213;
L_004d120c:; BB(0x004d120c);
    /* 004d120c: call 0x4d1250 */ r_esp -= 4; W32(r_esp, 0x4d1211u); f_004d1250();
    /* 004d1211: jmp 0x4d1223 */ goto L_004d1223;
L_004d1213:; BB(0x004d1213);
    /* 004d1213: call 0x505a20 */ r_esp -= 4; W32(r_esp, 0x4d1218u); f_00505a20();
    /* 004d1218: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d121a: jne 0x4d1246 */ if (!fZ) goto L_004d1246;
L_004d121c:; BB(0x004d121c);
    /* 004d121c: mov ecx, edi */ r_ecx = r_edi;
    /* 004d121e: call 0x4d1260 */ r_esp -= 4; W32(r_esp, 0x4d1223u); f_004d1260();
L_004d1223:; BB(0x004d1223);
    /* 004d1223: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4d1228u); f_0082d7b0();
    /* 004d1228: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x4d122du); f_00835068();
    /* 004d122d: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 004d1230: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x4d1235u); f_00835090();
    /* 004d1235: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x4d123au); f_00835078();
    /* 004d123a: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4d123fu); f_0082da80();
    /* 004d123f: call 0x502400 */ r_esp -= 4; W32(r_esp, 0x4d1244u); f_00502400();
    /* 004d1244: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d1245: ret  */ FN_RET(0x004d11f8); r_esp += 4; return;
L_004d1246:; BB(0x004d1246);
    /* 004d1246: call 0x501dd8 */ r_esp -= 4; W32(r_esp, 0x4d124bu); f_00501dd8();
    /* 004d124b: jmp 0x4d1223 */ goto L_004d1223;
}

void f_004d1250(void) /* sub_4D1250 */
{
    FN_ENTER(0x004d1250);
    /* 004d1250: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 004d1253: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d1255: je 0x4d125c */ if (fZ) goto L_004d125c;
L_004d1257:; BB(0x004d1257);
    /* 004d1257: call 0x502634 */ r_esp -= 4; W32(r_esp, 0x4d125cu); f_00502634();
L_004d125c:; BB(0x004d125c);
    /* 004d125c: ret  */ FN_RET(0x004d1250); r_esp += 4; return;
}

void f_004d1260(void) /* sub_4D1260 */
{
    FN_ENTER(0x004d1260);
    /* 004d1260: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d1261: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d1262: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d1264: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 004d1267: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d1269: je 0x4d135e */ if (fZ) goto L_004d135e;
L_004d126f:; BB(0x004d126f);
    /* 004d126f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d1272: je 0x4d1332 */ if (fZ) goto L_004d1332;
L_004d1278:; BB(0x004d1278);
    /* 004d1278: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d127b: je 0x4d12c3 */ if (fZ) goto L_004d12c3;
L_004d127d:; BB(0x004d127d);
    /* 004d127d: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d1280: jne 0x4d12b1 */ if (!fZ) goto L_004d12b1;
L_004d1282:; BB(0x004d1282);
    /* 004d1282: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d1285: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x4d128au); f_0081a9b8();
    /* 004d128a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d128b: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 004d1290: mul dword ptr [ebx + 0x28] */ { u64 t = (u64)r_eax * R32((u32)(r_ebx+0x28u)); r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 004d1293: mov eax, 0xcccccccd */ r_eax = 0xcccccccdu;
    /* 004d1298: mov ecx, edx */ r_ecx = r_edx;
    /* 004d129a: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004d129c: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 004d129e: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004d12a1: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004d12a4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d12a6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d12a8: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004d12aa: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004d12ac: add ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d12af: jmp 0x4d12f2 */ goto L_004d12f2;
L_004d12b1:; BB(0x004d12b1);
    /* 004d12b1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d12b4: jne 0x4d1328 */ if (!fZ) goto L_004d1328;
L_004d12b6:; BB(0x004d12b6);
    /* 004d12b6: call 0x505a20 */ r_esp -= 4; W32(r_esp, 0x4d12bbu); f_00505a20();
    /* 004d12bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d12bd: jne 0x4d132b */ if (!fZ) goto L_004d132b;
L_004d12bf:; BB(0x004d12bf);
    /* 004d12bf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d12c1: jmp 0x4d12f2 */ goto L_004d12f2;
L_004d12c3:; BB(0x004d12c3);
    /* 004d12c3: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d12c6: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x4d12cbu); f_0081a9b8();
    /* 004d12cb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d12cc: mov edx, dword ptr [ebx + 0x28] */ r_edx = R32((u32)(r_ebx+0x28u));
    /* 004d12cf: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004d12d1: mov eax, 0xb60b60b7 */ r_eax = 0xb60b60b7u;
    /* 004d12d6: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 004d12d8: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 004d12dd: mov ecx, edx */ r_ecx = r_edx;
    /* 004d12df: shr ecx, 5 */ { u32 c = (5u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004d12e2: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 004d12e4: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004d12e6: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004d12e9: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d12eb: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004d12ed: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004d12ef: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_004d12f2:; BB(0x004d12f2);
    /* 004d12f2: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
    /* 004d12f5: movzx eax, cx */ r_eax = (u32)(u16)r_ecx;
    /* 004d12f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d12f9: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d12fc: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x4d1301u); f_0081a588();
    /* 004d1301: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d1304: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x4d1309u); f_0082d7b0();
    /* 004d1309: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x4d130eu); f_00835068();
    /* 004d130e: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004d1311: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 004d1314: call 0x835120 */ r_esp -= 4; W32(r_esp, 0x4d1319u); f_00835120();
    /* 004d1319: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x4d131eu); f_00835078();
    /* 004d131e: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4d1323u); f_0082da80();
    /* 004d1323: call 0x502400 */ r_esp -= 4; W32(r_esp, 0x4d1328u); f_00502400();
L_004d1328:; BB(0x004d1328);
    /* 004d1328: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d1329: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d132a: ret  */ FN_RET(0x004d1260); r_esp += 4; return;
L_004d132b:; BB(0x004d132b);
    /* 004d132b: call 0x501dd8 */ r_esp -= 4; W32(r_esp, 0x4d1330u); f_00501dd8();
    /* 004d1330: jmp 0x4d12bf */ goto L_004d12bf;
L_004d1332:; BB(0x004d1332);
    /* 004d1332: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d1335: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x4d133au); f_0081a9b8();
    /* 004d133a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d133b: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 004d1340: mul dword ptr [ebx + 0x28] */ { u64 t = (u64)r_eax * R32((u32)(r_ebx+0x28u)); r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 004d1343: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 004d1348: mov ecx, edx */ r_ecx = r_edx;
    /* 004d134a: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004d134c: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 004d134e: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 004d1350: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004d1353: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d1355: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004d1357: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004d1359: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 004d135c: jmp 0x4d12f2 */ goto L_004d12f2;
L_004d135e:; BB(0x004d135e);
    /* 004d135e: call 0x4d139c */ r_esp -= 4; W32(r_esp, 0x4d1363u); f_004d139c();
    /* 004d1363: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d1365: je 0x4d1377 */ if (fZ) goto L_004d1377;
L_004d1367:; BB(0x004d1367);
    /* 004d1367: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 004d136a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d136c: je 0x4d1377 */ if (fZ) goto L_004d1377;
L_004d136e:; BB(0x004d136e);
    /* 004d136e: mov ecx, eax */ r_ecx = r_eax;
    /* 004d1370: call 0x4d1250 */ r_esp -= 4; W32(r_esp, 0x4d1375u); f_004d1250();
    /* 004d1375: jmp 0x4d1389 */ goto L_004d1389;
L_004d1377:; BB(0x004d1377);
    /* 004d1377: call 0x505a20 */ r_esp -= 4; W32(r_esp, 0x4d137cu); f_00505a20();
    /* 004d137c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d137e: jne 0x4d1390 */ if (!fZ) goto L_004d1390;
L_004d1380:; BB(0x004d1380);
    /* 004d1380: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d1383: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x4d1388u); f_0081a9b8();
    /* 004d1388: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004d1389:; BB(0x004d1389);
    /* 004d1389: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d138b: jmp 0x4d12f2 */ goto L_004d12f2;
L_004d1390:; BB(0x004d1390);
    /* 004d1390: call 0x501dd8 */ r_esp -= 4; W32(r_esp, 0x4d1395u); f_00501dd8();
    /* 004d1395: jmp 0x4d1389 */ goto L_004d1389;
}

void f_004d139c(void) /* sub_4D139C */
{
    FN_ENTER(0x004d139c);
    /* 004d139c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004d139e: jl 0x4d13a5 */ if ((fS!=fO)) goto L_004d13a5;
L_004d13a0:; BB(0x004d13a0);
    /* 004d13a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d13a3: jle 0x4d13a8 */ if ((fZ||fS!=fO)) goto L_004d13a8;
L_004d13a5:; BB(0x004d13a5);
    /* 004d13a5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d13a7: ret  */ FN_RET(0x004d139c); r_esp += 4; return;
L_004d13a8:; BB(0x004d13a8);
    /* 004d13a8: mov eax, dword ptr [eax*4 + 0xa486f8] */ r_eax = R32((u32)(r_eax*4+0xa486f8u));
    /* 004d13af: ret  */ FN_RET(0x004d139c); r_esp += 4; return;
}

void f_004d13b0(void) /* sub_4D13B0 */
{
    FN_ENTER(0x004d13b0);
    /* 004d13b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d13b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004d13b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d13b5: push 0x8d1bf0 */ { u32 v = 0x8d1bf0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d13ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d13c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d13c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d13c8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d13cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d13ce: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 004d13d1: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 004d13d4: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 004d13d7: mov ecx, dword ptr [0xa48708] */ r_ecx = R32((u32)(0xa48708u));
    /* 004d13dd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d13df: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x4d13e4u); f_005b8610();
    /* 004d13e4: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 004d13e7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 004d13ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d13ec: je 0x4d145c */ if (fZ) goto L_004d145c;
L_004d13ee:; BB(0x004d13ee);
    /* 004d13ee: mov eax, dword ptr [0x9ac924] */ r_eax = R32((u32)(0x9ac924u));
    /* 004d13f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d13f5: je 0x4d144f */ if (fZ) goto L_004d144f;
L_004d13f7:; BB(0x004d13f7);
    /* 004d13f7: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004d13fe: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 004d1400: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4d1405u); f_005caba4();
    /* 004d1405: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004d1408: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004d140b: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 004d140e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d1410: je 0x4d1448 */ if (fZ) goto L_004d1448;
L_004d1412:; BB(0x004d1412);
    /* 004d1412: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 004d1419: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d1420: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d1423: mov ecx, eax */ r_ecx = r_eax;
    /* 004d1425: call 0x4d1078 */ r_esp -= 4; W32(r_esp, 0x4d142au); f_004d1078();
    /* 004d142a: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 004d142d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d1430: mov dword ptr [ecx], 0xafc2e4 */ W32((u32)(r_ecx), 0xafc2e4u);
    /* 004d1436: mov eax, dword ptr [0x9ac954] */ r_eax = R32((u32)(0x9ac954u));
    /* 004d143b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 004d1442: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 004d1445: mov dword ptr [ecx + 0x1c], edx */ W32((u32)(r_ecx+0x1cu), r_edx);
L_004d1448:; BB(0x004d1448);
    /* 004d1448: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
L_004d144f:; BB(0x004d144f);
    /* 004d144f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 004d1452: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 004d1455: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 004d1458: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d145a: jne 0x4d13ee */ if (!fZ) goto L_004d13ee;
L_004d145c:; BB(0x004d145c);
    /* 004d145c: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004d145f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d1462: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004d1465: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d1467: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d146a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d1471: mov esp, ebp */ r_esp = r_ebp;
    /* 004d1473: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d1474: ret  */ FN_RET(0x004d13b0); r_esp += 4; return;
}

void f_004d1478(void) /* sub_4D1478 */
{
    FN_ENTER(0x004d1478);
    /* 004d1478: call 0x4d1260 */ r_esp -= 4; W32(r_esp, 0x4d147du); f_004d1260();
    /* 004d147d: ret  */ FN_RET(0x004d1478); r_esp += 4; return;
}

void f_004d1480(void)
{
    FN_ENTER(0x004d1480);
    /* 004d1480: fld dword ptr [0x908d90] */ FPUSH(R_F32((u32)(0x908d90u)));
    /* 004d1486: fld dword ptr [0x908d8c] */ FPUSH(R_F32((u32)(0x908d8cu)));
    /* 004d148c: mov dword ptr [0xa4870c], 0x3f800000 */ W32((u32)(0xa4870cu), 0x3f800000u);
    /* 004d1496: mov dword ptr [0xa48710], 0x41000000 */ W32((u32)(0xa48710u), 0x41000000u);
    /* 004d14a0: mov dword ptr [0xa48714], 0x3fc00000 */ W32((u32)(0xa48714u), 0x3fc00000u);
    /* 004d14aa: mov dword ptr [0xa48700], 0x3ecccccd */ W32((u32)(0xa48700u), 0x3ecccccdu);
    /* 004d14b4: fadd dword ptr [0xa48700] */ ST(0) = ST(0) + R_F32((u32)(0xa48700u));
    /* 004d14ba: fst dword ptr [0xa48704] */ W_F32((u32)(0xa48704u), ST(0));
    /* 004d14c0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004d14c2: fstp dword ptr [0xa48718] */ W_F32((u32)(0xa48718u), ST(0)); FPOP();
    /* 004d14c8: ret  */ FN_RET(0x004d1480); r_esp += 4; return;
}

void f_004d14cc(void) /* sub_4D14CC */
{
    FN_ENTER(0x004d14cc);
    /* 004d14cc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d14cd: mov ebp, esp */ r_ebp = r_esp;
    /* 004d14cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d14d1: push 0x8d1c18 */ { u32 v = 0x8d1c18u; r_esp -= 4; W32(r_esp, v); }
    /* 004d14d6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d14dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d14dd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d14e4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d14e7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d14ea: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d14ed: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d14f0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d14f3: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 004d14f8: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004d14ff: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x4d1504u); f_008581c5();
    /* 004d1504: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d1505: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004d1508: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d150a: je 0x4d155c */ if (fZ) goto L_004d155c;
L_004d150c:; BB(0x004d150c);
    /* 004d150c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004d1513: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d151a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d151d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d151f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d1520: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d1521: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d1522: push 0x9ac938 */ { u32 v = 0x9ac938u; r_esp -= 4; W32(r_esp, v); }
    /* 004d1527: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004d1529: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x4d152eu); f_005b7a84();
    /* 004d152e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d1531: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004d1538:; BB(0x004d1538);
    /* 004d1538: mov dword ptr [0xa48708], ecx */ W32((u32)(0xa48708u), r_ecx);
    /* 004d153e: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004d1545: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d1547: je 0x4d154e */ if (fZ) goto L_004d154e;
L_004d1549:; BB(0x004d1549);
    /* 004d1549: call 0x5b90d0 */ r_esp -= 4; W32(r_esp, 0x4d154eu); f_005b90d0();
L_004d154e:; BB(0x004d154e);
    /* 004d154e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d1551: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d1558: mov esp, ebp */ r_esp = r_ebp;
    /* 004d155a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d155b: ret  */ FN_RET(0x004d14cc); r_esp += 4; return;
L_004d155c:; BB(0x004d155c);
    /* 004d155c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d155e: jmp 0x4d1538 */ goto L_004d1538;
}

void f_004d1560(void) /* sub_4D1560 */
{
    FN_ENTER(0x004d1560);
    /* 004d1560: mov dword ptr [0xa486fc], 0 */ W32((u32)(0xa486fcu), 0x0u);
    /* 004d156a: mov eax, 0xa486f8 */ r_eax = 0xa486f8u;
    /* 004d156f: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 004d1575: ret  */ FN_RET(0x004d1560); r_esp += 4; return;
}

void f_004d1578(void) /* sub_4D1578 */
{
    FN_ENTER(0x004d1578);
    /* 004d1578: mov dword ptr [0xa48730], 0x3f800000 */ W32((u32)(0xa48730u), 0x3f800000u);
    /* 004d1582: mov dword ptr [0xa48734], 0x41000000 */ W32((u32)(0xa48734u), 0x41000000u);
    /* 004d158c: mov dword ptr [0xa48738], 0x3fc00000 */ W32((u32)(0xa48738u), 0x3fc00000u);
    /* 004d1596: ret  */ FN_RET(0x004d1578); r_esp += 4; return;
}

void f_004d1598(void) /* sub_4D1598 */
{
    FN_ENTER(0x004d1598);
    /* 004d1598: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d1599: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d159b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d159d: call 0x4d15bc */ r_esp -= 4; W32(r_esp, 0x4d15a2u); f_004d15bc();
    /* 004d15a2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004d15a6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d15a8: jne 0x4d15ae */ if (!fZ) goto L_004d15ae;
L_004d15aa:; BB(0x004d15aa);
    /* 004d15aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d15ab: ret 4 */ FN_RET(0x004d1598); r_esp += 8; return;
L_004d15ae:; BB(0x004d15ae);
    /* 004d15ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d15af: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4d15b4u); f_005c2f74();
    /* 004d15b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d15b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d15b6: ret 4 */ FN_RET(0x004d1598); r_esp += 8; return;
}

void f_004d15bc(void) /* sub_4D15BC */
{
    FN_ENTER(0x004d15bc);
    /* 004d15bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d15bd: mov ebp, esp */ r_ebp = r_esp;
    /* 004d15bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d15c1: push 0x8d1c34 */ { u32 v = 0x8d1c34u; r_esp -= 4; W32(r_esp, v); }
    /* 004d15c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d15cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d15cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d15d4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d15d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d15da: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d15dd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d15e0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d15e3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004d15e6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d15e9: mov dword ptr [ecx], 0xafc370 */ W32((u32)(r_ecx), 0xafc370u);
    /* 004d15ef: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004d15f6: call 0x4d1f18 */ r_esp -= 4; W32(r_esp, 0x4d15fbu); f_004d1f18();
    /* 004d15fb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d15fe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d1605: mov esp, ebp */ r_esp = r_ebp;
    /* 004d1607: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d1608: ret  */ FN_RET(0x004d15bc); r_esp += 4; return;
}

void f_004d160c(void) /* sub_4D160C */
{
    FN_ENTER(0x004d160c);
    /* 004d160c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d160d: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d1610: mov esi, ecx */ r_esi = r_ecx;
    /* 004d1612: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 004d1615: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d1617: mov dword ptr [esi + 0x58], 0x3f800000 */ W32((u32)(r_esi+0x58u), 0x3f800000u);
    /* 004d161e: je 0x4d16a8 */ if (fZ) goto L_004d16a8;
L_004d1624:; BB(0x004d1624);
    /* 004d1624: call 0x43e4e4 */ r_esp -= 4; W32(r_esp, 0x4d1629u); f_0043e4e4();
    /* 004d1629: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d162b: je 0x4d16a8 */ if (fZ) goto L_004d16a8;
L_004d162d:; BB(0x004d162d);
    /* 004d162d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004d1630: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 004d1632: mov dword ptr [esi + 0x48], edx */ W32((u32)(r_esi+0x48u), r_edx);
    /* 004d1635: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 004d1638: mov dword ptr [esi + 0x4c], edx */ W32((u32)(r_esi+0x4cu), r_edx);
    /* 004d163b: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 004d163e: mov dword ptr [esi + 0x50], edx */ W32((u32)(r_esi+0x50u), r_edx);
    /* 004d1641: mov edx, dword ptr [esi + 0x1c] */ r_edx = R32((u32)(r_esi+0x1cu));
    /* 004d1644: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 004d1647: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 004d1649: fld dword ptr [edx + 0x40] */ FPUSH(R_F32((u32)(r_edx+0x40u)));
    /* 004d164c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d164e: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004d1651: fsub dword ptr [eax + 8] */ ST(0) = ST(0) - R_F32((u32)(r_eax+0x8u));
    /* 004d1654: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d1658: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004d1660: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4d1665u); f_0083173c();
    /* 004d1665: fcomp dword ptr [0x908f14] */ fx_compare(ST(0), R_F32((u32)(0x908f14u))); FPOP();
    /* 004d166b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d166d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d166e: je 0x4d16a8 */ if (fZ) goto L_004d16a8;
L_004d1670:; BB(0x004d1670);
    /* 004d1670: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004d1673: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4d1678u); f_0082df08();
    /* 004d1678: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d167a: fld dword ptr [0x908f10] */ FPUSH(R_F32((u32)(0x908f10u)));
    /* 004d1680: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004d1683: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004d1685: fld dword ptr [0x908f0c] */ FPUSH(R_F32((u32)(0x908f0cu)));
    /* 004d168b: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 004d168e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d1690: fadd dword ptr [eax + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x38u));
    /* 004d1693: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004d1697: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004d1699: fstp dword ptr [esi + 0x3c] */ W_F32((u32)(r_esi+0x3cu), ST(0)); FPOP();
    /* 004d169c: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 004d169f: fstp dword ptr [esi + 0x40] */ W_F32((u32)(r_esi+0x40u), ST(0)); FPOP();
    /* 004d16a2: fadd dword ptr [eax + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x40u));
    /* 004d16a5: fstp dword ptr [esi + 0x44] */ W_F32((u32)(r_esi+0x44u), ST(0)); FPOP();
L_004d16a8:; BB(0x004d16a8);
    /* 004d16a8: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d16ab: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d16ac: ret  */ FN_RET(0x004d160c); r_esp += 4; return;
}

void f_004d16b0(void) /* sub_4D16B0 */
{
    FN_ENTER(0x004d16b0);
    /* 004d16b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d16b1: mov ebp, esp */ r_ebp = r_esp;
    /* 004d16b3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d16b5: push 0x8d1c5c */ { u32 v = 0x8d1c5cu; r_esp -= 4; W32(r_esp, v); }
    /* 004d16ba: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d16c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d16c1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d16c8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d16cb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d16ce: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d16d1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d16d4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d16d7: push 0x6c */ { u32 v = 0x6cu; r_esp -= 4; W32(r_esp, v); }
    /* 004d16d9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004d16e0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4d16e5u); f_005caba4();
    /* 004d16e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d16e6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004d16e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d16eb: je 0x4d171b */ if (fZ) goto L_004d171b;
L_004d16ed:; BB(0x004d16ed);
    /* 004d16ed: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004d16f4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d16fb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d16fe: call 0x4d1720 */ r_esp -= 4; W32(r_esp, 0x4d1703u); f_004d1720();
    /* 004d1703: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d1706: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004d170d:; BB(0x004d170d);
    /* 004d170d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d1710: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d1717: mov esp, ebp */ r_esp = r_ebp;
    /* 004d1719: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d171a: ret  */ FN_RET(0x004d16b0); r_esp += 4; return;
L_004d171b:; BB(0x004d171b);
    /* 004d171b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d171d: jmp 0x4d170d */ goto L_004d170d;
}

void f_004d16e0(void)
{
    FN_ENTER(0x004d16e0);
    /* 004d16e0: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4d16e5u); f_005caba4();
    /* 004d16e5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d16e6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004d16e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d16eb: je 0x4d171b */ if (fZ) goto L_004d171b;
L_004d16ed:; BB(0x004d16ed);
    /* 004d16ed: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004d16f4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d16fb: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d16fe: call 0x4d1720 */ r_esp -= 4; W32(r_esp, 0x4d1703u); f_004d1720();
    /* 004d1703: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d1706: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004d170d:; BB(0x004d170d);
    /* 004d170d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d1710: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d1717: mov esp, ebp */ r_esp = r_ebp;
    /* 004d1719: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d171a: ret  */ FN_RET(0x004d16e0); r_esp += 4; return;
L_004d171b:; BB(0x004d171b);
    /* 004d171b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d171d: jmp 0x4d170d */ goto L_004d170d;
}

void f_004d1720(void) /* sub_4D1720 */
{
    FN_ENTER(0x004d1720);
    /* 004d1720: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d1721: mov ebp, esp */ r_ebp = r_esp;
    /* 004d1723: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d1725: push 0x8d1c78 */ { u32 v = 0x8d1c78u; r_esp -= 4; W32(r_esp, v); }
    /* 004d172a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d1730: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d1731: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d1738: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d173b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d173e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d1741: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d1744: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d1747: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004d174a: call 0x4d1f68 */ r_esp -= 4; W32(r_esp, 0x4d174fu); f_004d1f68();
    /* 004d174f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d1756: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d1759: mov dword ptr [eax], 0xafc370 */ W32((u32)(r_eax), 0xafc370u);
    /* 004d175f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d1761: mov dword ptr [eax + 0x38], 5 */ W32((u32)(r_eax+0x38u), 0x5u);
    /* 004d1768: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d176du); f_0068d5a8();
    /* 004d176d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d176e: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d1771: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 004d1774: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d1776: je 0x4d1780 */ if (fZ) goto L_004d1780;
L_004d1778:; BB(0x004d1778);
    /* 004d1778: movzx eax, word ptr [eax + 0x1c] */ r_eax = (u32)R16((u32)(r_eax+0x1cu));
    /* 004d177c: mov word ptr [edx + 0x20], ax */ W16((u32)(r_edx+0x20u), (u16)r_eax);
L_004d1780:; BB(0x004d1780);
    /* 004d1780: mov eax, edx */ r_eax = r_edx;
    /* 004d1782: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d1785: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d178c: mov esp, ebp */ r_esp = r_ebp;
    /* 004d178e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d178f: ret  */ FN_RET(0x004d1720); r_esp += 4; return;
}

void f_004d1790(void) /* sub_4D1790 */
{
    FN_ENTER(0x004d1790);
    /* 004d1790: mov dword ptr [0xa4873c], 0x3f800000 */ W32((u32)(0xa4873cu), 0x3f800000u);
    /* 004d179a: mov dword ptr [0xa48740], 0x41000000 */ W32((u32)(0xa48740u), 0x41000000u);
    /* 004d17a4: mov dword ptr [0xa48744], 0x3fc00000 */ W32((u32)(0xa48744u), 0x3fc00000u);
    /* 004d17ae: ret  */ FN_RET(0x004d1790); r_esp += 4; return;
}

void f_004d17b0(void) /* sub_4D17B0 */
{
    FN_ENTER(0x004d17b0);
    /* 004d17b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d17b1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d17b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d17b5: call 0x4d17d4 */ r_esp -= 4; W32(r_esp, 0x4d17bau); f_004d17d4();
    /* 004d17ba: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004d17be: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d17c0: jne 0x4d17c6 */ if (!fZ) goto L_004d17c6;
L_004d17c2:; BB(0x004d17c2);
    /* 004d17c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d17c3: ret 4 */ FN_RET(0x004d17b0); r_esp += 8; return;
L_004d17c6:; BB(0x004d17c6);
    /* 004d17c6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d17c7: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4d17ccu); f_005c2f74();
    /* 004d17cc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d17cd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d17ce: ret 4 */ FN_RET(0x004d17b0); r_esp += 8; return;
}

void f_004d17d4(void) /* sub_4D17D4 */
{
    FN_ENTER(0x004d17d4);
    /* 004d17d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d17d5: mov ebp, esp */ r_ebp = r_esp;
    /* 004d17d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d17d9: push 0x8d1c94 */ { u32 v = 0x8d1c94u; r_esp -= 4; W32(r_esp, v); }
    /* 004d17de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d17e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d17e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d17ec: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d17ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d17f2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d17f5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d17f8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d17fb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004d17fe: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d1801: mov dword ptr [ecx], 0xafc3e8 */ W32((u32)(r_ecx), 0xafc3e8u);
    /* 004d1807: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004d180e: call 0x4d727c */ r_esp -= 4; W32(r_esp, 0x4d1813u); f_004d727c();
    /* 004d1813: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d1816: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d181d: mov esp, ebp */ r_esp = r_ebp;
    /* 004d181f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d1820: ret  */ FN_RET(0x004d17d4); r_esp += 4; return;
}

void f_004d1834(void) /* sub_4D1834 */
{
    FN_ENTER(0x004d1834);
    /* 004d1834: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d1835: mov edi, ecx */ r_edi = r_ecx;
    /* 004d1837: push dword ptr [0xa0f688] */ { u32 v = R32((u32)(0xa0f688u)); r_esp -= 4; W32(r_esp, v); }
    /* 004d183d: mov dword ptr [edi + 0x38], 0x15 */ W32((u32)(r_edi+0x38u), 0x15u);
    /* 004d1844: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 004d1849: call 0x7c1100 */ r_esp -= 4; W32(r_esp, 0x4d184eu); f_007c1100();
    /* 004d184e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d1850: je 0x4d185b */ if (fZ) goto L_004d185b;
L_004d1852:; BB(0x004d1852);
    /* 004d1852: mov ecx, edi */ r_ecx = r_edi;
    /* 004d1854: call 0x4d7698 */ r_esp -= 4; W32(r_esp, 0x4d1859u); f_004d7698();
    /* 004d1859: jmp 0x4d1862 */ goto L_004d1862;
L_004d185b:; BB(0x004d185b);
    /* 004d185b: mov ecx, edi */ r_ecx = r_edi;
    /* 004d185d: call 0x4d1870 */ r_esp -= 4; W32(r_esp, 0x4d1862u); f_004d1870();
L_004d1862:; BB(0x004d1862);
    /* 004d1862: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 004d1865: or eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d1868: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 004d186b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d186c: ret  */ FN_RET(0x004d1834); r_esp += 4; return;
}

void f_004d1870(void) /* sub_4D1870 */
{
    FN_ENTER(0x004d1870);
    /* 004d1870: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d1871: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d1872: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d1875: mov edi, ecx */ r_edi = r_ecx;
    /* 004d1877: call 0x43e4e4 */ r_esp -= 4; W32(r_esp, 0x4d187cu); f_0043e4e4();
    /* 004d187c: mov ebp, eax */ r_ebp = r_eax;
    /* 004d187e: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d1880: je 0x4d1a22 */ if (fZ) goto L_004d1a22;
L_004d1886:; BB(0x004d1886);
    /* 004d1886: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004d1889: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 004d188c: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 004d188f: fsub dword ptr [ebp] */ ST(0) = ST(0) - R_F32((u32)(r_ebp));
    /* 004d1892: fld dword ptr [edx + 0x40] */ FPUSH(R_F32((u32)(r_edx+0x40u)));
    /* 004d1895: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d1897: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004d189a: fsub dword ptr [ebp + 8] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0x8u));
    /* 004d189d: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d18a1: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004d18a9: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4d18aeu); f_0083173c();
    /* 004d18ae: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 004d18b2: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004d18b6: fcomp dword ptr [0x908f60] */ fx_compare(ST(0), R_F32((u32)(0x908f60u))); FPOP();
    /* 004d18bc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d18be: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d18bf: je 0x4d1a22 */ if (fZ) goto L_004d1a22;
L_004d18c5:; BB(0x004d18c5);
    /* 004d18c5: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004d18c8: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x4d18cdu); f_0082df08();
    /* 004d18cd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d18cf: mov edx, dword ptr [edi + 0x114] */ r_edx = R32((u32)(r_edi+0x114u));
    /* 004d18d5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d18d7: jne 0x4d19b3 */ if (!fZ) goto L_004d19b3;
L_004d18dd:; BB(0x004d18dd);
    /* 004d18dd: fld dword ptr [ebp] */ FPUSH(R_F32((u32)(r_ebp)));
    /* 004d18e0: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004d18e3: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 004d18e6: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 004d18e9: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 004d18ec: mov dword ptr [edi + 0x50], edx */ W32((u32)(r_edi+0x50u), r_edx);
    /* 004d18ef: fld dword ptr [ebp + 4] */ FPUSH(R_F32((u32)(r_ebp+0x4u)));
    /* 004d18f2: fcom dword ptr [0x908f58] */ fx_compare(ST(0), R_F32((u32)(0x908f58u))); 
    /* 004d18f8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d18fa: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 004d18fd: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d18fe: jb 0x4d1911 */ if (fC) goto L_004d1911;
L_004d1900:; BB(0x004d1900);
    /* 004d1900: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d1902: fld dword ptr [0x908f54] */ FPUSH(R_F32((u32)(0x908f54u)));
    /* 004d1908: mov dword ptr [edi + 0x4c], 0x42700000 */ W32((u32)(r_edi+0x4cu), 0x42700000u);
    /* 004d190f: jmp 0x4d1914 */ goto L_004d1914;
L_004d1911:; BB(0x004d1911);
    /* 004d1911: mov dword ptr [edi + 0x4c], edx */ W32((u32)(r_edi+0x4cu), r_edx);
L_004d1914:; BB(0x004d1914);
    /* 004d1914: fld dword ptr [0x908f50] */ FPUSH(R_F32((u32)(0x908f50u)));
    /* 004d191a: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004d191d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 004d191f: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004d1923: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004d1925: mov edx, dword ptr [edi + 0x1c] */ r_edx = R32((u32)(r_edi+0x1cu));
    /* 004d1928: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 004d192b: fld dword ptr [0x908f4c] */ FPUSH(R_F32((u32)(0x908f4cu)));
    /* 004d1931: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004d1935: fcomp dword ptr [0x908f5c] */ fx_compare(ST(0), R_F32((u32)(0x908f5cu))); FPOP();
    /* 004d193b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d193d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d193f: fst dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0));
    /* 004d1942: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d1944: fadd dword ptr [edx + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x40u));
    /* 004d1947: fst dword ptr [edi + 0x44] */ W_F32((u32)(r_edi+0x44u), ST(0));
    /* 004d194a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d194c: fadd dword ptr [edx + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x3cu));
    /* 004d194f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d1950: fst dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0));
    /* 004d1953: jae 0x4d1a28 */ if (!fC) goto L_004d1a28;
L_004d1959:; BB(0x004d1959);
    /* 004d1959: mov dword ptr [edi + 0x114], 1 */ W32((u32)(r_edi+0x114u), 0x1u);
    /* 004d1963: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 004d1966: fsubp st(6) */ ST(6) = ST(6) - ST(0); FPOP();
    /* 004d1968: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 004d196a: fstp dword ptr [edi + 0x118] */ W_F32((u32)(r_edi+0x118u), ST(0)); FPOP();
    /* 004d1970: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d1972: fsub dword ptr [edx + 0x3c] */ ST(0) = ST(0) - R_F32((u32)(r_edx+0x3cu));
    /* 004d1975: fstp dword ptr [edi + 0x11c] */ W_F32((u32)(r_edi+0x11cu), ST(0)); FPOP();
    /* 004d197b: fld dword ptr [edx + 0x40] */ FPUSH(R_F32((u32)(r_edx+0x40u)));
    /* 004d197e: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 004d1980: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d1982: fstp dword ptr [edi + 0x120] */ W_F32((u32)(r_edi+0x120u), ST(0)); FPOP();
    /* 004d1988: fld dword ptr [edx + 0x38] */ FPUSH(R_F32((u32)(r_edx+0x38u)));
    /* 004d198b: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 004d198d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d198f: fstp dword ptr [edi + 0x124] */ W_F32((u32)(r_edi+0x124u), ST(0)); FPOP();
    /* 004d1995: fld dword ptr [edx + 0x3c] */ FPUSH(R_F32((u32)(r_edx+0x3cu)));
    /* 004d1998: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 004d199a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d199c: fstp dword ptr [edi + 0x128] */ W_F32((u32)(r_edi+0x128u), ST(0)); FPOP();
    /* 004d19a2: fld dword ptr [edx + 0x40] */ FPUSH(R_F32((u32)(r_edx+0x40u)));
    /* 004d19a5: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004d19a7: fstp dword ptr [edi + 0x12c] */ W_F32((u32)(r_edi+0x12cu), ST(0)); FPOP();
    /* 004d19ad: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d19b0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d19b1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d19b2: ret  */ FN_RET(0x004d1870); r_esp += 4; return;
L_004d19b3:; BB(0x004d19b3);
    /* 004d19b3: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d19b6: jne 0x4d1a22 */ if (!fZ) goto L_004d1a22;
L_004d19b8:; BB(0x004d19b8);
    /* 004d19b8: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 004d19bc: fcomp dword ptr [0x908f5c] */ fx_compare(ST(0), R_F32((u32)(0x908f5cu))); FPOP();
    /* 004d19c2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d19c4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d19c5: jbe 0x4d19d1 */ if ((fC||fZ)) goto L_004d19d1;
L_004d19c7:; BB(0x004d19c7);
    /* 004d19c7: mov dword ptr [edi + 0x114], 0 */ W32((u32)(r_edi+0x114u), 0x0u);
L_004d19d1:; BB(0x004d19d1);
    /* 004d19d1: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 004d19d4: fld dword ptr [edi + 0x118] */ FPUSH(R_F32((u32)(r_edi+0x118u)));
    /* 004d19da: fadd dword ptr [eax + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x38u));
    /* 004d19dd: fld dword ptr [edi + 0x11c] */ FPUSH(R_F32((u32)(r_edi+0x11cu)));
    /* 004d19e3: fld dword ptr [edi + 0x120] */ FPUSH(R_F32((u32)(r_edi+0x120u)));
    /* 004d19e9: fld dword ptr [edi + 0x124] */ FPUSH(R_F32((u32)(r_edi+0x124u)));
    /* 004d19ef: fld dword ptr [edi + 0x128] */ FPUSH(R_F32((u32)(r_edi+0x128u)));
    /* 004d19f5: fld dword ptr [edi + 0x12c] */ FPUSH(R_F32((u32)(r_edi+0x12cu)));
    /* 004d19fb: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 004d19fd: fstp dword ptr [edi + 0x48] */ W_F32((u32)(r_edi+0x48u), ST(0)); FPOP();
    /* 004d1a00: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004d1a02: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 004d1a05: fstp dword ptr [edi + 0x4c] */ W_F32((u32)(r_edi+0x4cu), ST(0)); FPOP();
    /* 004d1a08: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004d1a0a: fadd dword ptr [eax + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x40u));
    /* 004d1a0d: fstp dword ptr [edi + 0x50] */ W_F32((u32)(r_edi+0x50u), ST(0)); FPOP();
    /* 004d1a10: fadd dword ptr [eax + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x38u));
    /* 004d1a13: fstp dword ptr [edi + 0x3c] */ W_F32((u32)(r_edi+0x3cu), ST(0)); FPOP();
    /* 004d1a16: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 004d1a19: fstp dword ptr [edi + 0x40] */ W_F32((u32)(r_edi+0x40u), ST(0)); FPOP();
    /* 004d1a1c: fadd dword ptr [eax + 0x40] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x40u));
    /* 004d1a1f: fstp dword ptr [edi + 0x44] */ W_F32((u32)(r_edi+0x44u), ST(0)); FPOP();
L_004d1a22:; BB(0x004d1a22);
    /* 004d1a22: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d1a25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d1a26: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d1a27: ret  */ FN_RET(0x004d1870); r_esp += 4; return;
L_004d1a28:; BB(0x004d1a28);
    /* 004d1a28: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d1a2a: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 004d1a2c: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004d1a2e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 004d1a30: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d1a32: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d1a34: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d1a37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d1a38: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d1a39: ret  */ FN_RET(0x004d1870); r_esp += 4; return;
}

void f_004d1a3c(void) /* sub_4D1A3C */
{
    FN_ENTER(0x004d1a3c);
    /* 004d1a3c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d1a3d: mov ebp, esp */ r_ebp = r_esp;
    /* 004d1a3f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d1a41: push 0x8d1cbc */ { u32 v = 0x8d1cbcu; r_esp -= 4; W32(r_esp, v); }
    /* 004d1a46: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d1a4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d1a4d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d1a54: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d1a57: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d1a5a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d1a5d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d1a60: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d1a63: push 0x130 */ { u32 v = 0x130u; r_esp -= 4; W32(r_esp, v); }
    /* 004d1a68: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004d1a6f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4d1a74u); f_005caba4();
    /* 004d1a74: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d1a75: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004d1a78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d1a7a: je 0x4d1aaa */ if (fZ) goto L_004d1aaa;
L_004d1a7c:; BB(0x004d1a7c);
    /* 004d1a7c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004d1a83: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d1a8a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d1a8d: call 0x4d1ab0 */ r_esp -= 4; W32(r_esp, 0x4d1a92u); f_004d1ab0();
    /* 004d1a92: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d1a95: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004d1a9c:; BB(0x004d1a9c);
    /* 004d1a9c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d1a9f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d1aa6: mov esp, ebp */ r_esp = r_ebp;
    /* 004d1aa8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d1aa9: ret  */ FN_RET(0x004d1a3c); r_esp += 4; return;
L_004d1aaa:; BB(0x004d1aaa);
    /* 004d1aaa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d1aac: jmp 0x4d1a9c */ goto L_004d1a9c;
}

void f_004d1ab0(void) /* sub_4D1AB0 */
{
    FN_ENTER(0x004d1ab0);
    /* 004d1ab0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d1ab1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d1ab3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d1ab5: call 0x4d72d4 */ r_esp -= 4; W32(r_esp, 0x4d1abau); f_004d72d4();
    /* 004d1aba: mov dword ptr [ebx], 0xafc3e8 */ W32((u32)(r_ebx), 0xafc3e8u);
    /* 004d1ac0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d1ac2: mov dword ptr [ebx + 0x114], edx */ W32((u32)(r_ebx+0x114u), r_edx);
    /* 004d1ac8: mov dword ptr [ebx + 0x110], edx */ W32((u32)(r_ebx+0x110u), r_edx);
    /* 004d1ace: mov dword ptr [ebx + 0x38], 0x15 */ W32((u32)(r_ebx+0x38u), 0x15u);
    /* 004d1ad5: mov eax, ebx */ r_eax = r_ebx;
    /* 004d1ad7: mov dword ptr [ebx + 0x58], 0x3f266666 */ W32((u32)(r_ebx+0x58u), 0x3f266666u);
    /* 004d1ade: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d1adf: ret  */ FN_RET(0x004d1ab0); r_esp += 4; return;
}

void f_004d1ae0(void) /* sub_4D1AE0 */
{
    FN_ENTER(0x004d1ae0);
    /* 004d1ae0: mov dword ptr [0xa48748], 0x3f800000 */ W32((u32)(0xa48748u), 0x3f800000u);
    /* 004d1aea: mov dword ptr [0xa4874c], 0x41000000 */ W32((u32)(0xa4874cu), 0x41000000u);
    /* 004d1af4: mov dword ptr [0xa48750], 0x3fc00000 */ W32((u32)(0xa48750u), 0x3fc00000u);
    /* 004d1afe: ret  */ FN_RET(0x004d1ae0); r_esp += 4; return;
}

void f_004d1b00(void) /* sub_4D1B00 */
{
    FN_ENTER(0x004d1b00);
    /* 004d1b00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d1b01: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d1b04: mov esi, ecx */ r_esi = r_ecx;
    /* 004d1b06: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 004d1b0b: mov dword ptr [esi + 0x38], 0x15 */ W32((u32)(r_esi+0x38u), 0x15u);
    /* 004d1b12: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004d1b15: mov dword ptr [esi + 0x58], 0x3fd33333 */ W32((u32)(r_esi+0x58u), 0x3fd33333u);
    /* 004d1b1c: fld dword ptr [eax + 0x184] */ FPUSH(R_F32((u32)(r_eax+0x184u)));
    /* 004d1b22: fsub dword ptr [esi + 0x48] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x48u));
    /* 004d1b25: fld dword ptr [eax + 0x188] */ FPUSH(R_F32((u32)(r_eax+0x188u)));
    /* 004d1b2b: fsub dword ptr [esi + 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x4cu));
    /* 004d1b2e: fld dword ptr [eax + 0x18c] */ FPUSH(R_F32((u32)(r_eax+0x18cu)));
    /* 004d1b34: fsub dword ptr [esi + 0x50] */ ST(0) = ST(0) - R_F32((u32)(r_esi+0x50u));
    /* 004d1b37: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d1b39: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004d1b3c: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004d1b40: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004d1b44: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x4d1b49u); f_0083173c();
    /* 004d1b49: fld dword ptr [0x908f34] */ FPUSH(R_F32((u32)(0x908f34u)));
    /* 004d1b4f: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004d1b51: fdiv dword ptr [0x908f30] */ ST(0) = ST(0) / R_F32((u32)(0x908f30u));
    /* 004d1b57: fstp dword ptr [esi + 0x5c] */ W_F32((u32)(r_esi+0x5cu), ST(0)); FPOP();
    /* 004d1b5a: mov ecx, esi */ r_ecx = r_esi;
    /* 004d1b5c: call 0x4d235c */ r_esp -= 4; W32(r_esp, 0x4d1b61u); f_004d235c();
    /* 004d1b61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d1b63: je 0x4d1b76 */ if (fZ) goto L_004d1b76;
L_004d1b65:; BB(0x004d1b65);
    /* 004d1b65: mov eax, dword ptr [esi + 0xfc] */ r_eax = R32((u32)(r_esi+0xfcu));
    /* 004d1b6b: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004d1b6e: mov dword ptr [esi + 0xfc], eax */ W32((u32)(r_esi+0xfcu), r_eax);
    /* 004d1b74: jmp 0x4d1b85 */ goto L_004d1b85;
L_004d1b76:; BB(0x004d1b76);
    /* 004d1b76: mov eax, dword ptr [esi + 0xfc] */ r_eax = R32((u32)(r_esi+0xfcu));
    /* 004d1b7c: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004d1b7f: mov dword ptr [esi + 0xfc], eax */ W32((u32)(r_esi+0xfcu), r_eax);
L_004d1b85:; BB(0x004d1b85);
    /* 004d1b85: mov dword ptr [esi + 0xe8], 0 */ W32((u32)(r_esi+0xe8u), 0x0u);
    /* 004d1b8f: mov dword ptr [esi + 0xec], 0x419e6666 */ W32((u32)(r_esi+0xecu), 0x419e6666u);
    /* 004d1b99: mov dword ptr [esi + 0xf0], 0xc0a00000 */ W32((u32)(r_esi+0xf0u), 0xc0a00000u);
    /* 004d1ba3: mov dword ptr [esi + 0xdc], 0 */ W32((u32)(r_esi+0xdcu), 0x0u);
    /* 004d1bad: mov dword ptr [esi + 0xe0], 0x41cb70a4 */ W32((u32)(r_esi+0xe0u), 0x41cb70a4u);
    /* 004d1bb7: mov dword ptr [esi + 0xe4], 0x4235ae14 */ W32((u32)(r_esi+0xe4u), 0x4235ae14u);
    /* 004d1bc1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d1bc4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d1bc5: ret  */ FN_RET(0x004d1b00); r_esp += 4; return;
}

void f_004d1bc8(void) /* sub_4D1BC8 */
{
    FN_ENTER(0x004d1bc8);
    /* 004d1bc8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d1bc9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d1bcb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d1bcd: call 0x4d1bec */ r_esp -= 4; W32(r_esp, 0x4d1bd2u); f_004d1bec();
    /* 004d1bd2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004d1bd6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d1bd8: jne 0x4d1bde */ if (!fZ) goto L_004d1bde;
L_004d1bda:; BB(0x004d1bda);
    /* 004d1bda: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d1bdb: ret 4 */ FN_RET(0x004d1bc8); r_esp += 8; return;
L_004d1bde:; BB(0x004d1bde);
    /* 004d1bde: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d1bdf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4d1be4u); f_005c2f74();
    /* 004d1be4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d1be5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d1be6: ret 4 */ FN_RET(0x004d1bc8); r_esp += 8; return;
}

void f_004d1bec(void) /* sub_4D1BEC */
{
    FN_ENTER(0x004d1bec);
    /* 004d1bec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d1bed: mov ebp, esp */ r_ebp = r_esp;
    /* 004d1bef: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d1bf1: push 0x8d1cd8 */ { u32 v = 0x8d1cd8u; r_esp -= 4; W32(r_esp, v); }
    /* 004d1bf6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d1bfc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d1bfd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d1c04: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d1c07: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d1c0a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d1c0d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d1c10: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d1c13: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004d1c16: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d1c19: mov dword ptr [ecx], 0xafc498 */ W32((u32)(r_ecx), 0xafc498u);
    /* 004d1c1f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004d1c26: call 0x4d1f18 */ r_esp -= 4; W32(r_esp, 0x4d1c2bu); f_004d1f18();
    /* 004d1c2b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d1c2e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d1c35: mov esp, ebp */ r_esp = r_ebp;
    /* 004d1c37: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d1c38: ret  */ FN_RET(0x004d1bec); r_esp += 4; return;
}

void f_004d1c3c(void) /* sub_4D1C3C */
{
    FN_ENTER(0x004d1c3c);
    /* 004d1c3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d1c3d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d1c3f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d1c41: call 0x4d1c50 */ r_esp -= 4; W32(r_esp, 0x4d1c46u); f_004d1c50();
    /* 004d1c46: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d1c48: call 0x4d1c7c */ r_esp -= 4; W32(r_esp, 0x4d1c4du); f_004d1c7c();
    /* 004d1c4d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d1c4e: ret  */ FN_RET(0x004d1c3c); r_esp += 4; return;
}

void f_004d1c50(void) /* sub_4D1C50 */
{
    FN_ENTER(0x004d1c50);
    /* 004d1c50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d1c51: mov edi, ecx */ r_edi = r_ecx;
    /* 004d1c53: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d1c55: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d1c5au); f_0068d5a8();
    /* 004d1c5a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d1c5b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d1c5d: je 0x4d1c79 */ if (fZ) goto L_004d1c79;
L_004d1c5f:; BB(0x004d1c5f);
    /* 004d1c5f: fld dword ptr [0x908f84] */ FPUSH(R_F32((u32)(0x908f84u)));
    /* 004d1c65: fadd dword ptr [eax + 0x3c] */ ST(0) = ST(0) + R_F32((u32)(r_eax+0x3cu));
    /* 004d1c68: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 004d1c6b: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 004d1c6e: fstp dword ptr [edi + 0x4c] */ W_F32((u32)(r_edi+0x4cu), ST(0)); FPOP();
    /* 004d1c71: mov dword ptr [edi + 0x48], edx */ W32((u32)(r_edi+0x48u), r_edx);
    /* 004d1c74: mov dword ptr [edi + 0x50], eax */ W32((u32)(r_edi+0x50u), r_eax);
    /* 004d1c77: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d1c78: ret  */ FN_RET(0x004d1c50); r_esp += 4; return;
L_004d1c79:; BB(0x004d1c79);
    /* 004d1c79: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d1c7a: ret  */ FN_RET(0x004d1c50); r_esp += 4; return;
}

void f_004d1c7c(void) /* sub_4D1C7C */
{
    FN_ENTER(0x004d1c7c);
    /* 004d1c7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d1c7d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d1c7e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004d1c80: mov eax, dword ptr [ebp + 0x6c] */ r_eax = R32((u32)(r_ebp+0x6cu));
    /* 004d1c83: movsx edx, word ptr [eax + 0x14] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x14u));
    /* 004d1c87: movsx ecx, word ptr [eax + 0x16] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x16u));
    /* 004d1c8b: fld dword ptr [ebp + 0x70] */ FPUSH(R_F32((u32)(r_ebp+0x70u)));
    /* 004d1c8e: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 004d1c90: test dword ptr [0xa0f67c], eax */ {  u32 a = R32((u32)(0xa0f67cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d1c96: je 0x4d1cf9 */ if (fZ) goto L_004d1cf9;
L_004d1c98:; BB(0x004d1c98);
    /* 004d1c98: test dword ptr [0xa0f684], eax */ {  u32 a = R32((u32)(0xa0f684u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d1c9e: je 0x4d1cbe */ if (fZ) goto L_004d1cbe;
L_004d1ca0:; BB(0x004d1ca0);
    /* 004d1ca0: fld dword ptr [0x908f80] */ FPUSH(R_F32((u32)(0x908f80u)));
    /* 004d1ca6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004d1ca8: fld dword ptr [0x908f78] */ FPUSH(R_F32((u32)(0x908f78u)));
    /* 004d1cae: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004d1cb0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d1cb2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d1cb3: jae 0x4d1cb7 */ if (!fC) goto L_004d1cb7;
L_004d1cb5:; BB(0x004d1cb5);
    /* 004d1cb5: fst st(1) */ ST(1) = ST(0);
L_004d1cb7:; BB(0x004d1cb7);
    /* 004d1cb7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d1cb9: fst dword ptr [ebp + 0x70] */ W_F32((u32)(r_ebp+0x70u), ST(0));
    /* 004d1cbc: jmp 0x4d1ce2 */ goto L_004d1ce2;
L_004d1cbe:; BB(0x004d1cbe);
    /* 004d1cbe: test dword ptr [0xa0f688], eax */ {  u32 a = R32((u32)(0xa0f688u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d1cc4: je 0x4d1ce2 */ if (fZ) goto L_004d1ce2;
L_004d1cc6:; BB(0x004d1cc6);
    /* 004d1cc6: fld dword ptr [0x908f80] */ FPUSH(R_F32((u32)(0x908f80u)));
    /* 004d1ccc: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 004d1cce: fld dword ptr [0x908f7c] */ FPUSH(R_F32((u32)(0x908f7cu)));
    /* 004d1cd4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 004d1cd6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004d1cd8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004d1cd9: jbe 0x4d1cdd */ if ((fC||fZ)) goto L_004d1cdd;
L_004d1cdb:; BB(0x004d1cdb);
    /* 004d1cdb: fst st(1) */ ST(1) = ST(0);
L_004d1cdd:; BB(0x004d1cdd);
    /* 004d1cdd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d1cdf: fst dword ptr [ebp + 0x70] */ W_F32((u32)(r_ebp+0x70u), ST(0));
L_004d1ce2:; BB(0x004d1ce2);
    /* 004d1ce2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d1ce4: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 004d1ce7: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d1ce9: add dword ptr [ebp + 0x30], eax */ { u32 ad = (u32)(r_ebp+0x30u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004d1cec: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 004d1cef: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d1cf1: add eax, dword ptr [ebp + 0x2c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x2cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d1cf4: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
    /* 004d1cf7: jmp 0x4d1cfe */ goto L_004d1cfe;
L_004d1cf9:; BB(0x004d1cf9);
    /* 004d1cf9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004d1cfb: mov eax, dword ptr [ebp + 0x2c] */ r_eax = R32((u32)(r_ebp+0x2cu));
L_004d1cfe:; BB(0x004d1cfe);
    /* 004d1cfe: mov ecx, eax */ r_ecx = r_eax;
    /* 004d1d00: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4d1d05u); f_0082ddd8();
    /* 004d1d05: fld dword ptr [ebp + 0x70] */ FPUSH(R_F32((u32)(r_ebp+0x70u)));
    /* 004d1d08: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004d1d0a: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 004d1d0d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004d1d10: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4d1d15u); f_0082dcbc();
    /* 004d1d15: fmul dword ptr [esp] */ ST(0) = ST(0) * R_F32((u32)(r_esp));
    /* 004d1d18: fadd dword ptr [ebp + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x48u));
    /* 004d1d1b: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 004d1d1e: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004d1d21: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4d1d26u); f_0082dcbc();
    /* 004d1d26: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 004d1d29: fchs  */ ST(0) = -ST(0);
    /* 004d1d2b: fmul dword ptr [ebp + 0x70] */ ST(0) = ST(0) * R_F32((u32)(r_ebp+0x70u));
    /* 004d1d2e: fadd dword ptr [ebp + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x4cu));
    /* 004d1d31: fstp dword ptr [ebp + 0x40] */ W_F32((u32)(r_ebp+0x40u), ST(0)); FPOP();
    /* 004d1d34: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4d1d39u); f_0082ddd8();
    /* 004d1d39: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004d1d3c: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004d1d3e: fadd dword ptr [ebp + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0x50u));
    /* 004d1d41: fstp dword ptr [ebp + 0x44] */ W_F32((u32)(r_ebp+0x44u), ST(0)); FPOP();
    /* 004d1d44: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d1d45: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d1d46: ret  */ FN_RET(0x004d1c7c); r_esp += 4; return;
}

void f_004d1d48(void) /* sub_4D1D48 */
{
    FN_ENTER(0x004d1d48);
    /* 004d1d48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d1d49: mov ebp, esp */ r_ebp = r_esp;
    /* 004d1d4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d1d4d: push 0x8d1d00 */ { u32 v = 0x8d1d00u; r_esp -= 4; W32(r_esp, v); }
    /* 004d1d52: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d1d58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d1d59: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d1d60: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d1d63: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d1d66: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d1d69: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d1d6c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d1d6f: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 004d1d71: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 004d1d78: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x4d1d7du); f_005caba4();
    /* 004d1d7d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d1d7e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 004d1d81: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d1d83: je 0x4d1db3 */ if (fZ) goto L_004d1db3;
L_004d1d85:; BB(0x004d1d85);
    /* 004d1d85: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 004d1d8c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d1d93: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d1d96: call 0x4d1db8 */ r_esp -= 4; W32(r_esp, 0x4d1d9bu); f_004d1db8();
    /* 004d1d9b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d1d9e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_004d1da5:; BB(0x004d1da5);
    /* 004d1da5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d1da8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d1daf: mov esp, ebp */ r_esp = r_ebp;
    /* 004d1db1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d1db2: ret  */ FN_RET(0x004d1d48); r_esp += 4; return;
L_004d1db3:; BB(0x004d1db3);
    /* 004d1db3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d1db5: jmp 0x4d1da5 */ goto L_004d1da5;
}

void f_004d1db8(void) /* sub_4D1DB8 */
{
    FN_ENTER(0x004d1db8);
    /* 004d1db8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d1db9: mov ebp, esp */ r_ebp = r_esp;
    /* 004d1dbb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d1dbd: push 0x8d1d1c */ { u32 v = 0x8d1d1cu; r_esp -= 4; W32(r_esp, v); }
    /* 004d1dc2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d1dc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d1dc9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d1dd0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d1dd3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d1dd6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d1dd9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d1ddc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d1ddf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004d1de2: call 0x4d1f68 */ r_esp -= 4; W32(r_esp, 0x4d1de7u); f_004d1f68();
    /* 004d1de7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004d1dee: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d1df1: mov dword ptr [ecx], 0xafc498 */ W32((u32)(r_ecx), 0xafc498u);
    /* 004d1df7: mov eax, dword ptr [0xaae96c] */ r_eax = R32((u32)(0xaae96cu));
    /* 004d1dfc: mov dword ptr [ecx + 0x38], 0 */ W32((u32)(r_ecx+0x38u), 0x0u);
    /* 004d1e03: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 004d1e06: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d1e08: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d1e0a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d1e0c: lea ebx, [edx + edx + 0xaae75c] */ r_ebx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 004d1e13: mov dword ptr [ecx + 0x6c], ebx */ W32((u32)(r_ecx+0x6cu), r_ebx);
    /* 004d1e16: call 0x4d1ed0 */ r_esp -= 4; W32(r_esp, 0x4d1e1bu); f_004d1ed0();
    /* 004d1e1b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d1e1e: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 004d1e21: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d1e24: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d1e2b: mov esp, ebp */ r_esp = r_ebp;
    /* 004d1e2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d1e2e: ret  */ FN_RET(0x004d1db8); r_esp += 4; return;
}

void f_004d1e30(void) /* sub_4D1E30 */
{
    FN_ENTER(0x004d1e30);
    /* 004d1e30: mov dword ptr [0xa48754], 0x3f800000 */ W32((u32)(0xa48754u), 0x3f800000u);
    /* 004d1e3a: mov dword ptr [0xa48758], 0x41000000 */ W32((u32)(0xa48758u), 0x41000000u);
    /* 004d1e44: mov dword ptr [0xa4875c], 0x3fc00000 */ W32((u32)(0xa4875cu), 0x3fc00000u);
    /* 004d1e4e: ret  */ FN_RET(0x004d1e30); r_esp += 4; return;
}

void f_004d1e50(void) /* sub_4D1E50 */
{
    FN_ENTER(0x004d1e50);
    /* 004d1e50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d1e51: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d1e54: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d1e56: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d1e58: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4d1e5du); f_0068d5a8();
    /* 004d1e5d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d1e5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004d1e60: je 0x4d1eca */ if (fZ) goto L_004d1eca;
L_004d1e62:; BB(0x004d1e62);
    /* 004d1e62: mov eax, dword ptr [eax + 0x60] */ r_eax = R32((u32)(r_eax+0x60u));
    /* 004d1e65: mov edx, dword ptr [ebx + 0x70] */ r_edx = R32((u32)(r_ebx+0x70u));
    /* 004d1e68: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 004d1e6f: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 004d1e72: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004d1e7a: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004d1e7e: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 004d1e83: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x4d1e88u); f_0082d990();
    /* 004d1e88: mov edx, dword ptr [ebx + 0x30] */ r_edx = R32((u32)(r_ebx+0x30u));
    /* 004d1e8b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d1e8d: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x4d1e92u); f_0082d8bc();
    /* 004d1e92: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004d1e95: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d1e96: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 004d1e9a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 004d1e9c: call 0x830aa0 */ r_esp -= 4; W32(r_esp, 0x4d1ea1u); f_00830aa0();
    /* 004d1ea1: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x4d1ea6u); f_0082da80();
    /* 004d1ea6: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 004d1ea9: fadd dword ptr [ebx + 0x48] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x48u));
    /* 004d1eac: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 004d1eb0: fadd dword ptr [ebx + 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x4cu));
    /* 004d1eb3: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 004d1eb7: fadd dword ptr [ebx + 0x50] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x50u));
    /* 004d1eba: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004d1ebc: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 004d1ebf: fstp dword ptr [ebx + 0x40] */ W_F32((u32)(r_ebx+0x40u), ST(0)); FPOP();
    /* 004d1ec2: fstp dword ptr [ebx + 0x44] */ W_F32((u32)(r_ebx+0x44u), ST(0)); FPOP();
    /* 004d1ec5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d1ec8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d1ec9: ret  */ FN_RET(0x004d1e50); r_esp += 4; return;
L_004d1eca:; BB(0x004d1eca);
    /* 004d1eca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004d1ecd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d1ece: ret  */ FN_RET(0x004d1e50); r_esp += 4; return;
}

void f_004d1ed0(void) /* sub_4D1ED0 */
{
    FN_ENTER(0x004d1ed0);
    /* 004d1ed0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d1ed1: mov edi, ecx */ r_edi = r_ecx;
    /* 004d1ed3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004d1ed5: mov dword ptr [edi + 0x2c], eax */ W32((u32)(r_edi+0x2cu), r_eax);
    /* 004d1ed8: mov dword ptr [edi + 0x70], 0x41c80000 */ W32((u32)(r_edi+0x70u), 0x41c80000u);
    /* 004d1edf: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 004d1ee2: mov ecx, edi */ r_ecx = r_edi;
    /* 004d1ee4: call 0x4d1c50 */ r_esp -= 4; W32(r_esp, 0x4d1ee9u); f_004d1c50();
    /* 004d1ee9: mov ecx, edi */ r_ecx = r_edi;
    /* 004d1eeb: call 0x4d1e50 */ r_esp -= 4; W32(r_esp, 0x4d1ef0u); f_004d1e50();
    /* 004d1ef0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d1ef1: ret  */ FN_RET(0x004d1ed0); r_esp += 4; return;
}

void f_004d1ef4(void) /* sub_4D1EF4 */
{
    FN_ENTER(0x004d1ef4);
    /* 004d1ef4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d1ef5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d1ef7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004d1ef9: call 0x4d1f18 */ r_esp -= 4; W32(r_esp, 0x4d1efeu); f_004d1f18();
    /* 004d1efe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004d1f02: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d1f04: jne 0x4d1f0a */ if (!fZ) goto L_004d1f0a;
L_004d1f06:; BB(0x004d1f06);
    /* 004d1f06: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d1f07: ret 4 */ FN_RET(0x004d1ef4); r_esp += 8; return;
L_004d1f0a:; BB(0x004d1f0a);
    /* 004d1f0a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d1f0b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4d1f10u); f_005c2f74();
    /* 004d1f10: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d1f11: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d1f12: ret 4 */ FN_RET(0x004d1ef4); r_esp += 8; return;
}

void f_004d1f18(void) /* sub_4D1F18 */
{
    FN_ENTER(0x004d1f18);
    /* 004d1f18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d1f19: mov ebp, esp */ r_ebp = r_esp;
    /* 004d1f1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004d1f1d: push 0x8d1d38 */ { u32 v = 0x8d1d38u; r_esp -= 4; W32(r_esp, v); }
    /* 004d1f22: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004d1f28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004d1f29: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004d1f30: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004d1f33: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004d1f36: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004d1f39: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004d1f3c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004d1f3f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004d1f42: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004d1f45: mov dword ptr [ecx], 0xafc4e8 */ W32((u32)(r_ecx), 0xafc4e8u);
    /* 004d1f4b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004d1f52: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4d1f57u); f_008171e8();
    /* 004d1f57: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004d1f5a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004d1f61: mov esp, ebp */ r_esp = r_ebp;
    /* 004d1f63: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d1f64: ret  */ FN_RET(0x004d1f18); r_esp += 4; return;
}

void f_004d1f68(void) /* sub_4D1F68 */
{
    FN_ENTER(0x004d1f68);
    /* 004d1f68: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d1f69: mov edi, ecx */ r_edi = r_ecx;
    /* 004d1f6b: mov ecx, edi */ r_ecx = r_edi;
    /* 004d1f6d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004d1f6f: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x4d1f74u); f_008193cc();
    /* 004d1f74: mov dword ptr [edi], 0xafc4e8 */ W32((u32)(r_edi), 0xafc4e8u);
    /* 004d1f7a: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 004d1f7f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d1f81: mov dword ptr [edi + 0x3c], 0 */ W32((u32)(r_edi+0x3cu), 0x0u);
    /* 004d1f88: mov word ptr [edi + 0x22], dx */ W16((u32)(r_edi+0x22u), (u16)r_edx);
    /* 004d1f8c: mov dword ptr [edi + 0x2c], edx */ W32((u32)(r_edi+0x2cu), r_edx);
    /* 004d1f8f: mov dword ptr [edi + 0x30], edx */ W32((u32)(r_edi+0x30u), r_edx);
    /* 004d1f92: mov dword ptr [edi + 0x40], 0 */ W32((u32)(r_edi+0x40u), 0x0u);
    /* 004d1f99: mov dword ptr [edi + 0x34], edx */ W32((u32)(r_edi+0x34u), r_edx);
    /* 004d1f9c: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 004d1f9f: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 004d1fa2: mov dword ptr [edi + 0x44], 0 */ W32((u32)(r_edi+0x44u), 0x0u);
    /* 004d1fa9: mov dword ptr [edi + 0x38], edx */ W32((u32)(r_edi+0x38u), r_edx);
    /* 004d1fac: mov word ptr [edi + 0x20], ax */ W16((u32)(r_edi+0x20u), (u16)r_eax);
    /* 004d1fb0: mov eax, edi */ r_eax = r_edi;
    /* 004d1fb2: mov dword ptr [edi + 0x48], 0 */ W32((u32)(r_edi+0x48u), 0x0u);
    /* 004d1fb9: mov dword ptr [edi + 0x4c], 0 */ W32((u32)(r_edi+0x4cu), 0x0u);
    /* 004d1fc0: mov dword ptr [edi + 0x50], 0x3f800000 */ W32((u32)(r_edi+0x50u), 0x3f800000u);
    /* 004d1fc7: mov dword ptr [edi + 0x60], 0 */ W32((u32)(r_edi+0x60u), 0x0u);
    /* 004d1fce: mov dword ptr [edi + 0x64], 0 */ W32((u32)(r_edi+0x64u), 0x0u);
    /* 004d1fd5: mov dword ptr [edi + 0x68], 0 */ W32((u32)(r_edi+0x68u), 0x0u);
    /* 004d1fdc: mov dword ptr [edi + 0x58], 0 */ W32((u32)(r_edi+0x58u), 0x0u);
    /* 004d1fe3: mov dword ptr [edi + 0x5c], 0x3e93f7cf */ W32((u32)(r_edi+0x5cu), 0x3e93f7cfu);
    /* 004d1fea: mov dword ptr [edi + 0x54], 0x36c1 */ W32((u32)(r_edi+0x54u), 0x36c1u);
    /* 004d1ff1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d1ff2: ret  */ FN_RET(0x004d1f68); r_esp += 4; return;
}

void f_004d1ff4(void) /* sub_4D1FF4 */
{
    FN_ENTER(0x004d1ff4);
    /* 004d1ff4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004d1ff5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d1ff6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004d1ff7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004d1ff8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004d1ff9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004d1ffb: mov eax, dword ptr [0xa489fc] */ r_eax = R32((u32)(0xa489fcu));
    /* 004d2000: test al, 0xc */ {  u32 a = (u8)r_eax; u32 b = 0xcu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004d2002: jne 0x4d2044 */ if (!fZ) goto L_004d2044;
L_004d2004:; BB(0x004d2004);
    /* 004d2004: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
    /* 004d2009: mov edx, dword ptr [ebx + 0x3c] */ r_edx = R32((u32)(r_ebx+0x3cu));
    /* 004d200c: mov dword ptr [eax + 0x1a0], edx */ W32((u32)(r_eax+0x1a0u), r_edx);
    /* 004d2012: mov ebp, dword ptr [ebx + 0x40] */ r_ebp = R32((u32)(r_ebx+0x40u));
    /* 004d2015: mov dword ptr [eax + 0x1a4], ebp */ W32((u32)(r_eax+0x1a4u), r_ebp);
    /* 004d201b: mov esi, dword ptr [ebx + 0x44] */ r_esi = R32((u32)(r_ebx+0x44u));
    /* 004d201e: mov dword ptr [eax + 0x1a8], esi */ W32((u32)(r_eax+0x1a8u), r_esi);
    /* 004d2024: mov edi, dword ptr [ebx + 0x48] */ r_edi = R32((u32)(r_ebx+0x48u));
    /* 004d2027: mov dword ptr [eax + 0x1ac], edi */ W32((u32)(r_eax+0x1acu), r_edi);
    /* 004d202d: mov edx, dword ptr [ebx + 0x4c] */ r_edx = R32((u32)(r_ebx+0x4cu));
    /* 004d2030: mov dword ptr [eax + 0x1b0], edx */ W32((u32)(r_eax+0x1b0u), r_edx);
    /* 004d2036: mov edx, dword ptr [ebx + 0x50] */ r_edx = R32((u32)(r_ebx+0x50u));
    /* 004d2039: mov dword ptr [eax + 0x1b4], edx */ W32((u32)(r_eax+0x1b4u), r_edx);
    /* 004d203f: jmp 0x4d211d */ goto L_004d211d;
L_004d2044:; BB(0x004d2044);
    /* 004d2044: mov edi, dword ptr [0xa48a54] */ r_edi = R32((u32)(0xa48a54u));
    /* 004d204a: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 004d204d: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004d2050: mov dword ptr [edi + 0x1a0], eax */ W32((u32)(r_edi+0x1a0u), r_eax);
    /* 004d2056: mov edx, dword ptr [ebx + 0x40] */ r_edx = R32((u32)(r_ebx+0x40u));
    /* 004d2059: mov dword ptr [edi + 0x1a4], edx */ W32((u32)(r_edi+0x1a4u), r_edx);
    /* 004d205f: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 004d2062: mov dword ptr [edi + 0x1a8], ecx */ W32((u32)(r_edi+0x1a8u), r_ecx);
    /* 004d2068: mov ebp, dword ptr [ebx + 0x48] */ r_ebp = R32((u32)(r_ebx+0x48u));
    /* 004d206b: mov dword ptr [edi + 0x1ac], ebp */ W32((u32)(r_edi+0x1acu), r_ebp);
    /* 004d2071: mov esi, dword ptr [ebx + 0x4c] */ r_esi = R32((u32)(r_ebx+0x4cu));
    /* 004d2074: mov dword ptr [edi + 0x1b0], esi */ W32((u32)(r_edi+0x1b0u), r_esi);
    /* 004d207a: mov ebx, dword ptr [ebx + 0x50] */ r_ebx = R32((u32)(r_ebx+0x50u));
    /* 004d207d: mov dword ptr [edi + 0x1b4], ebx */ W32((u32)(r_edi+0x1b4u), r_ebx);
    /* 004d2083: mov dword ptr [edi + 0x178], eax */ W32((u32)(r_edi+0x178u), r_eax);
    /* 004d2089: mov dword ptr [edi + 0x17c], edx */ W32((u32)(r_edi+0x17cu), r_edx);
    /* 004d208f: mov dword ptr [edi + 0x180], ecx */ W32((u32)(r_edi+0x180u), r_ecx);
    /* 004d2095: mov dword ptr [edi + 0x184], ebp */ W32((u32)(r_edi+0x184u), r_ebp);
    /* 004d209b: mov dword ptr [edi + 0x188], esi */ W32((u32)(r_edi+0x188u), r_esi);
    /* 004d20a1: mov dword ptr [edi + 0x18c], ebx */ W32((u32)(r_edi+0x18cu), r_ebx);
    /* 004d20a7: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 004d20aa: call 0x7bb6d0 */ r_esp -= 4; W32(r_esp, 0x4d20afu); f_007bb6d0();
    /* 004d20af: mov ebp, dword ptr [0xa48a54] */ r_ebp = R32((u32)(0xa48a54u));
    /* 004d20b5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d20b7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004d20b9: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 004d20bc: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004d20be: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 004d20c1: mov dword ptr [edx + ebp + 0xd4], eax */ W32((u32)(r_edx+r_ebp+0xd4u), r_eax);
    /* 004d20c8: mov edi, dword ptr [0xa48a54] */ r_edi = R32((u32)(0xa48a54u));
    /* 004d20ce: mov esi, dword ptr [ebx + 0x40] */ r_esi = R32((u32)(r_ebx+0x40u));
    /* 004d20d1: mov dword ptr [edx + edi + 0xd8], esi */ W32((u32)(r_edx+r_edi+0xd8u), r_esi);
    /* 004d20d8: mov ebp, dword ptr [0xa48a54] */ r_ebp = R32((u32)(0xa48a54u));
    /* 004d20de: mov eax, dword ptr [ebx + 0x44] */ r_eax = R32((u32)(r_ebx+0x44u));
    /* 004d20e1: mov dword ptr [edx + ebp + 0xdc], eax */ W32((u32)(r_edx+r_ebp+0xdcu), r_eax);
    /* 004d20e8: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 004d20eb: mov ebp, dword ptr [0xa48a54] */ r_ebp = R32((u32)(0xa48a54u));
    /* 004d20f1: mov dword ptr [edx + ebp + 0x104], eax */ W32((u32)(r_edx+r_ebp+0x104u), r_eax);
    /* 004d20f8: mov ebp, dword ptr [0xa48a54] */ r_ebp = R32((u32)(0xa48a54u));
    /* 004d20fe: mov eax, dword ptr [ebx + 0x4c] */ r_eax = R32((u32)(r_ebx+0x4cu));
    /* 004d2101: mov dword ptr [edx + ebp + 0x108], eax */ W32((u32)(r_edx+r_ebp+0x108u), r_eax);
    /* 004d2108: mov ebp, dword ptr [0xa48a54] */ r_ebp = R32((u32)(0xa48a54u));
    /* 004d210e: mov eax, dword ptr [ebx + 0x50] */ r_eax = R32((u32)(r_ebx+0x50u));
    /* 004d2111: mov dword ptr [edx + ebp + 0x10c], eax */ W32((u32)(r_edx+r_ebp+0x10cu), r_eax);
    /* 004d2118: mov eax, dword ptr [0xa48a54] */ r_eax = R32((u32)(0xa48a54u));
L_004d211d:; BB(0x004d211d);
    /* 004d211d: mov edx, dword ptr [ebx + 0x58] */ r_edx = R32((u32)(r_ebx+0x58u));
    /* 004d2120: mov dword ptr [eax + 0x1b8], edx */ W32((u32)(r_eax+0x1b8u), r_edx);
    /* 004d2126: mov ebp, dword ptr [ebx + 0x5c] */ r_ebp = R32((u32)(r_ebx+0x5cu));
    /* 004d2129: mov dword ptr [eax + 0x1bc], ebp */ W32((u32)(r_eax+0x1bcu), r_ebp);
    /* 004d212f: mov ecx, dword ptr [ebx + 0x54] */ r_ecx = R32((u32)(r_ebx+0x54u));
    /* 004d2132: cmp ecx, dword ptr [eax + 0x19c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_eax+0x19cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004d2138: je 0x4d214f */ if (fZ) goto L_004d214f;
L_004d213a:; BB(0x004d213a);
    /* 004d213a: mov edx, dword ptr [0xa489fc] */ r_edx = R32((u32)(0xa489fcu));
    /* 004d2140: or edx, 0x40 */ {  u32 a = r_edx; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004d2143: mov dword ptr [0xa489fc], edx */ W32((u32)(0xa489fcu), r_edx);
    /* 004d2149: mov dword ptr [eax + 0x19c], ecx */ W32((u32)(r_eax+0x19cu), r_ecx);
L_004d214f:; BB(0x004d214f);
    /* 004d214f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004d2150: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004d2151: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004d2152: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004d2153: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004d2154: ret  */ FN_RET(0x004d1ff4); r_esp += 4; return;
}

