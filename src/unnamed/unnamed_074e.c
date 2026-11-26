#include "protos.h"

void f_0074e000(void) /* sub_74E000 */
{
    FN_ENTER(0x0074e000);
    /* 0074e000: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074e001: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0074e003: mov eax, dword ptr [ebp + 0x30] */ r_eax = R32((u32)(r_ebp+0x30u));
    /* 0074e006: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e008: je 0x74e040 */ if (fZ) goto L_0074e040;
L_0074e00a:; BB(0x0074e00a);
    /* 0074e00a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074e00c: je 0x74e03e */ if (fZ) goto L_0074e03e;
L_0074e00e:; BB(0x0074e00e);
    /* 0074e00e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e010: mov ecx, dword ptr [ebp + 0x2c] */ r_ecx = R32((u32)(r_ebp+0x2cu));
    /* 0074e013: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x74e018u); f_007336fc();
    /* 0074e018: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 0074e01b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074e01c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0074e01f: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x74e024u); f_00712624();
    /* 0074e024: mov edx, dword ptr [ebp + 0x30] */ r_edx = R32((u32)(r_ebp+0x30u));
    /* 0074e027: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0074e02e: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074e033: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0074e03a: mov byte ptr [ebp + 0x1c], 0 */ W8((u32)(r_ebp+0x1cu), 0x0u);
L_0074e03e:; BB(0x0074e03e);
    /* 0074e03e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074e03f: ret  */ FN_RET(0x0074e000); r_esp += 4; return;
L_0074e040:; BB(0x0074e040);
    /* 0074e040: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e042: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74e047u); f_0073ec50();
    /* 0074e047: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074e04a: push 0x973b00 */ { u32 v = 0x973b00u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e04f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074e050: call 0x74ec58 */ r_esp -= 4; W32(r_esp, 0x74e055u); f_0074ec58();
    /* 0074e055: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074e058: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 0074e05b: jmp 0x74e00a */ goto L_0074e00a;
}

void f_0074e060(void) /* sub_74E060 */
{
    FN_ENTER(0x0074e060);
    /* 0074e060: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074e061: mov edi, ecx */ r_edi = r_ecx;
    /* 0074e063: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 0074e066: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e068: je 0x74e092 */ if (fZ) goto L_0074e092;
L_0074e06a:; BB(0x0074e06a);
    /* 0074e06a: call 0x73b170 */ r_esp -= 4; W32(r_esp, 0x74e06fu); f_0073b170();
    /* 0074e06f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074e071: je 0x74e090 */ if (fZ) goto L_0074e090;
L_0074e073:; BB(0x0074e073);
    /* 0074e073: movzx eax, byte ptr [edi + 0x5c] */ r_eax = (u32)R8((u32)(r_edi+0x5cu));
    /* 0074e077: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074e079: je 0x74e090 */ if (fZ) goto L_0074e090;
L_0074e07b:; BB(0x0074e07b);
    /* 0074e07b: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 0074e07e: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 0074e081: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 0074e084: cmp edx, 0x1e */ {  u32 a = r_edx; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0074e087: jbe 0x74e090 */ if ((fC||fZ)) goto L_0074e090;
L_0074e089:; BB(0x0074e089);
    /* 0074e089: mov ecx, edi */ r_ecx = r_edi;
    /* 0074e08b: call 0x74e0a4 */ r_esp -= 4; W32(r_esp, 0x74e090u); f_0074e0a4();
L_0074e090:; BB(0x0074e090);
    /* 0074e090: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074e091: ret  */ FN_RET(0x0074e060); r_esp += 4; return;
L_0074e092:; BB(0x0074e092);
    /* 0074e092: mov ecx, edi */ r_ecx = r_edi;
    /* 0074e094: call 0x74e2e0 */ r_esp -= 4; W32(r_esp, 0x74e099u); f_0074e2e0();
    /* 0074e099: mov ecx, edi */ r_ecx = r_edi;
    /* 0074e09b: call 0x74e000 */ r_esp -= 4; W32(r_esp, 0x74e0a0u); f_0074e000();
    /* 0074e0a0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074e0a1: ret  */ FN_RET(0x0074e060); r_esp += 4; return;
}

void f_0074e0a4(void) /* sub_74E0A4 */
{
    FN_ENTER(0x0074e0a4);
    /* 0074e0a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074e0a5: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074e0a8: mov edi, ecx */ r_edi = r_ecx;
    /* 0074e0aa: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 0074e0ad: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e0af: je 0x74e0bd */ if (fZ) goto L_0074e0bd;
L_0074e0b1:; BB(0x0074e0b1);
    /* 0074e0b1: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74e0b6u); f_007127b0();
    /* 0074e0b6: mov dword ptr [edi + 0x40], 0 */ W32((u32)(r_edi+0x40u), 0x0u);
L_0074e0bd:; BB(0x0074e0bd);
    /* 0074e0bd: mov dword ptr [esp], 0x43d18000 */ W32((u32)(r_esp), 0x43d18000u);
    /* 0074e0c4: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0074e0c7: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0074e0cb: mov dword ptr [esp + 4], 0x43ac0000 */ W32((u32)(r_esp+0x4u), 0x43ac0000u);
    /* 0074e0d3: mov dword ptr [esp + 8], 0x434e0000 */ W32((u32)(r_esp+0x8u), 0x434e0000u);
    /* 0074e0db: mov dword ptr [esp + 0xc], 0x42a40000 */ W32((u32)(r_esp+0xcu), 0x42a40000u);
    /* 0074e0e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074e0e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074e0e5: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x74e0eau); f_0073a888();
    /* 0074e0ea: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074e0ed: mov dword ptr [edi + 0x40], eax */ W32((u32)(r_edi+0x40u), r_eax);
    /* 0074e0f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e0f2: je 0x74e130 */ if (fZ) goto L_0074e130;
L_0074e0f4:; BB(0x0074e0f4);
    /* 0074e0f4: mov eax, dword ptr [edi + 0x60] */ r_eax = R32((u32)(r_edi+0x60u));
    /* 0074e0f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e0f9: je 0x74e11a */ if (fZ) goto L_0074e11a;
L_0074e0fb:; BB(0x0074e0fb);
    /* 0074e0fb: push 0x16e */ { u32 v = 0x16eu; r_esp -= 4; W32(r_esp, v); }
    /* 0074e100: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74e105u); f_0079317c();
    /* 0074e105: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074e106: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e108: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074e109: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 0074e10c: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x74e111u); f_0073ae38();
    /* 0074e111: mov ecx, edi */ r_ecx = r_edi;
    /* 0074e113: call 0x74e154 */ r_esp -= 4; W32(r_esp, 0x74e118u); f_0074e154();
    /* 0074e118: jmp 0x74e130 */ goto L_0074e130;
L_0074e11a:; BB(0x0074e11a);
    /* 0074e11a: push 0x16f */ { u32 v = 0x16fu; r_esp -= 4; W32(r_esp, v); }
    /* 0074e11f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74e124u); f_0079317c();
    /* 0074e124: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074e125: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e127: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074e128: mov ecx, dword ptr [edi + 0x40] */ r_ecx = R32((u32)(r_edi+0x40u));
    /* 0074e12b: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x74e130u); f_0073ae38();
L_0074e130:; BB(0x0074e130);
    /* 0074e130: mov edx, dword ptr [edi + 0x44] */ r_edx = R32((u32)(r_edi+0x44u));
    /* 0074e133: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e135: je 0x74e14b */ if (fZ) goto L_0074e14b;
L_0074e137:; BB(0x0074e137);
    /* 0074e137: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0074e13b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074e140: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0074e144: mov dword ptr [edi + 0x44], 0 */ W32((u32)(r_edi+0x44u), 0x0u);
L_0074e14b:; BB(0x0074e14b);
    /* 0074e14b: mov byte ptr [edi + 0x1c], 0x1b */ W8((u32)(r_edi+0x1cu), 0x1bu);
    /* 0074e14f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074e152: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074e153: ret  */ FN_RET(0x0074e0a4); r_esp += 4; return;
}

void f_0074e154(void) /* sub_74E154 */
{
    FN_ENTER(0x0074e154);
    /* 0074e154: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074e155: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074e156: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074e158: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 0074e15b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074e15d: je 0x74e187 */ if (fZ) goto L_0074e187;
L_0074e15f:; BB(0x0074e15f);
    /* 0074e15f: call 0x78ed4c */ r_esp -= 4; W32(r_esp, 0x74e164u); f_0078ed4c();
    /* 0074e164: mov ebp, eax */ r_ebp = r_eax;
    /* 0074e166: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e16b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074e16c: call 0x813a78 */ r_esp -= 4; W32(r_esp, 0x74e171u); f_00813a78();
    /* 0074e171: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e176: push dword ptr [ebx + 0x24] */ { u32 v = R32((u32)(r_ebx+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074e179: call 0x8136f0 */ r_esp -= 4; W32(r_esp, 0x74e17eu); f_008136f0();
    /* 0074e17e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074e17f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x74e184u); f_00857e98();
    /* 0074e184: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0074e187:; BB(0x0074e187);
    /* 0074e187: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074e188: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074e189: ret  */ FN_RET(0x0074e154); r_esp += 4; return;
}

void f_0074e18c(void) /* sub_74E18C */
{
    FN_ENTER(0x0074e18c);
    /* 0074e18c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074e18d: mov esi, ecx */ r_esi = r_ecx;
    /* 0074e18f: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 0074e192: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e194: je 0x74e1e0 */ if (fZ) goto L_0074e1e0;
L_0074e196:; BB(0x0074e196);
    /* 0074e196: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x74e19bu); f_0073d114();
    /* 0074e19b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e19d: je 0x74e1af */ if (fZ) goto L_0074e1af;
L_0074e19f:; BB(0x0074e19f);
    /* 0074e19f: mov ecx, esi */ r_ecx = r_esi;
    /* 0074e1a1: call 0x74e2e0 */ r_esp -= 4; W32(r_esp, 0x74e1a6u); f_0074e2e0();
    /* 0074e1a6: mov ecx, esi */ r_ecx = r_esi;
    /* 0074e1a8: call 0x74e394 */ r_esp -= 4; W32(r_esp, 0x74e1adu); f_0074e394();
    /* 0074e1ad: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074e1ae: ret  */ FN_RET(0x0074e18c); r_esp += 4; return;
L_0074e1af:; BB(0x0074e1af);
    /* 0074e1af: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 0074e1b2: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x74e1b7u); f_0073ce50();
    /* 0074e1b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074e1b9: je 0x74e1de */ if (fZ) goto L_0074e1de;
L_0074e1bb:; BB(0x0074e1bb);
    /* 0074e1bb: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 0074e1be: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x74e1c3u); f_0073d134();
    /* 0074e1c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e1c5: jne 0x74e1d0 */ if (!fZ) goto L_0074e1d0;
L_0074e1c7:; BB(0x0074e1c7);
    /* 0074e1c7: mov ecx, esi */ r_ecx = r_esi;
    /* 0074e1c9: call 0x74e1f0 */ r_esp -= 4; W32(r_esp, 0x74e1ceu); f_0074e1f0();
    /* 0074e1ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074e1cf: ret  */ FN_RET(0x0074e18c); r_esp += 4; return;
L_0074e1d0:; BB(0x0074e1d0);
    /* 0074e1d0: mov ecx, esi */ r_ecx = r_esi;
    /* 0074e1d2: call 0x74e2e0 */ r_esp -= 4; W32(r_esp, 0x74e1d7u); f_0074e2e0();
    /* 0074e1d7: mov ecx, esi */ r_ecx = r_esi;
    /* 0074e1d9: call 0x74e394 */ r_esp -= 4; W32(r_esp, 0x74e1deu); f_0074e394();
L_0074e1de:; BB(0x0074e1de);
    /* 0074e1de: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074e1df: ret  */ FN_RET(0x0074e18c); r_esp += 4; return;
L_0074e1e0:; BB(0x0074e1e0);
    /* 0074e1e0: mov ecx, esi */ r_ecx = r_esi;
    /* 0074e1e2: call 0x74e2e0 */ r_esp -= 4; W32(r_esp, 0x74e1e7u); f_0074e2e0();
    /* 0074e1e7: mov ecx, esi */ r_ecx = r_esi;
    /* 0074e1e9: call 0x74e000 */ r_esp -= 4; W32(r_esp, 0x74e1eeu); f_0074e000();
    /* 0074e1ee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074e1ef: ret  */ FN_RET(0x0074e18c); r_esp += 4; return;
}

void f_0074e1f0(void) /* sub_74E1F0 */
{
    FN_ENTER(0x0074e1f0);
    /* 0074e1f0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074e1f1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074e1f4: mov esi, ecx */ r_esi = r_ecx;
    /* 0074e1f6: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0074e1f9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e1fb: je 0x74e20d */ if (fZ) goto L_0074e20d;
L_0074e1fd:; BB(0x0074e1fd);
    /* 0074e1fd: mov ecx, edx */ r_ecx = r_edx;
    /* 0074e1ff: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x74e204u); f_0073d160();
    /* 0074e204: mov dword ptr [esi + 0x3c], 0 */ W32((u32)(r_esi+0x3cu), 0x0u);
    /* 0074e20b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0074e20d:; BB(0x0074e20d);
    /* 0074e20d: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 0074e210: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e212: je 0x74e223 */ if (fZ) goto L_0074e223;
L_0074e214:; BB(0x0074e214);
    /* 0074e214: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74e219u); f_007127b0();
    /* 0074e219: mov edx, dword ptr [esi + 0x3c] */ r_edx = R32((u32)(r_esi+0x3cu));
    /* 0074e21c: mov dword ptr [esi + 0x40], 0 */ W32((u32)(r_esi+0x40u), 0x0u);
L_0074e223:; BB(0x0074e223);
    /* 0074e223: mov byte ptr [esi + 0x1c], 0x1a */ W8((u32)(r_esi+0x1cu), 0x1au);
    /* 0074e227: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074e229: mov byte ptr [esi + 0x5c], al */ W8((u32)(r_esi+0x5cu), (u8)r_eax);
    /* 0074e22c: mov dword ptr [esi + 0x60], eax */ W32((u32)(r_esi+0x60u), r_eax);
    /* 0074e22f: mov dword ptr [esi + 0x28], eax */ W32((u32)(r_esi+0x28u), r_eax);
    /* 0074e232: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e234: je 0x74e244 */ if (fZ) goto L_0074e244;
L_0074e236:; BB(0x0074e236);
    /* 0074e236: mov ecx, edx */ r_ecx = r_edx;
    /* 0074e238: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x74e23du); f_0073d160();
    /* 0074e23d: mov dword ptr [esi + 0x3c], 0 */ W32((u32)(r_esi+0x3cu), 0x0u);
L_0074e244:; BB(0x0074e244);
    /* 0074e244: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074e247: call 0x825abc */ r_esp -= 4; W32(r_esp, 0x74e24cu); f_00825abc();
    /* 0074e24c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074e24d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e24f: je 0x74e270 */ if (fZ) goto L_0074e270;
L_0074e251:; BB(0x0074e251);
    /* 0074e251: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074e254: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74e259u); f_0068d5a8();
    /* 0074e259: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074e25a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e25c: je 0x74e28e */ if (fZ) goto L_0074e28e;
L_0074e25e:; BB(0x0074e25e);
    /* 0074e25e: push dword ptr [esi + 0x24] */ { u32 v = R32((u32)(r_esi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074e261: push dword ptr [esi + 0x58] */ { u32 v = R32((u32)(r_esi+0x58u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074e264: mov ecx, eax */ r_ecx = r_eax;
    /* 0074e266: push dword ptr [esi + 0x54] */ { u32 v = R32((u32)(r_esi+0x54u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074e269: call 0x68ecf8 */ r_esp -= 4; W32(r_esp, 0x74e26eu); f_0068ecf8();
    /* 0074e26e: jmp 0x74e28e */ goto L_0074e28e;
L_0074e270:; BB(0x0074e270);
    /* 0074e270: mov edx, dword ptr [0xa9abac] */ r_edx = R32((u32)(0xa9abacu));
    /* 0074e276: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e278: je 0x74e28e */ if (fZ) goto L_0074e28e;
L_0074e27a:; BB(0x0074e27a);
    /* 0074e27a: movzx eax, byte ptr [edx + 0x1c] */ r_eax = (u32)R8((u32)(r_edx+0x1cu));
    /* 0074e27e: cmp eax, 0x1a */ {  u32 a = r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e281: jne 0x74e28e */ if (!fZ) goto L_0074e28e;
L_0074e283:; BB(0x0074e283);
    /* 0074e283: mov byte ptr [edx + 0x5c], 1 */ W8((u32)(r_edx+0x5cu), 0x1u);
    /* 0074e287: mov dword ptr [edx + 0x60], 0 */ W32((u32)(r_edx+0x60u), 0x0u);
L_0074e28e:; BB(0x0074e28e);
    /* 0074e28e: mov dword ptr [esp], 0x43d18000 */ W32((u32)(r_esp), 0x43d18000u);
    /* 0074e295: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0074e298: lea eax, [esp + 8] */ r_eax = (u32)(r_esp+0x8u);
    /* 0074e29c: mov dword ptr [esp + 4], 0x43ac0000 */ W32((u32)(r_esp+0x4u), 0x43ac0000u);
    /* 0074e2a4: mov dword ptr [esp + 8], 0x434e0000 */ W32((u32)(r_esp+0x8u), 0x434e0000u);
    /* 0074e2ac: mov dword ptr [esp + 0xc], 0x42a40000 */ W32((u32)(r_esp+0xcu), 0x42a40000u);
    /* 0074e2b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074e2b5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074e2b6: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x74e2bbu); f_0073a888();
    /* 0074e2bb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074e2be: mov dword ptr [esi + 0x40], eax */ W32((u32)(r_esi+0x40u), r_eax);
    /* 0074e2c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e2c3: je 0x74e2db */ if (fZ) goto L_0074e2db;
L_0074e2c5:; BB(0x0074e2c5);
    /* 0074e2c5: push 0x16d */ { u32 v = 0x16du; r_esp -= 4; W32(r_esp, v); }
    /* 0074e2ca: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74e2cfu); f_0079317c();
    /* 0074e2cf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074e2d0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e2d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074e2d3: mov ecx, dword ptr [esi + 0x40] */ r_ecx = R32((u32)(r_esi+0x40u));
    /* 0074e2d6: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x74e2dbu); f_0073ae38();
L_0074e2db:; BB(0x0074e2db);
    /* 0074e2db: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074e2de: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074e2df: ret  */ FN_RET(0x0074e1f0); r_esp += 4; return;
}

void f_0074e2e0(void) /* sub_74E2E0 */
{
    FN_ENTER(0x0074e2e0);
    /* 0074e2e0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074e2e1: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074e2e3: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074e2e6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74e2ebu); f_0068d5a8();
    /* 0074e2eb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074e2ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e2ee: je 0x74e2fb */ if (fZ) goto L_0074e2fb;
L_0074e2f0:; BB(0x0074e2f0);
    /* 0074e2f0: mov ecx, eax */ r_ecx = r_eax;
    /* 0074e2f2: call 0x691e2c */ r_esp -= 4; W32(r_esp, 0x74e2f7u); f_00691e2c();
    /* 0074e2f7: mov byte ptr [ebx + 0x64], 0 */ W8((u32)(r_ebx+0x64u), 0x0u);
L_0074e2fb:; BB(0x0074e2fb);
    /* 0074e2fb: mov ecx, dword ptr [ebx + 0x48] */ r_ecx = R32((u32)(r_ebx+0x48u));
    /* 0074e2fe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e300: je 0x74e30e */ if (fZ) goto L_0074e30e;
L_0074e302:; BB(0x0074e302);
    /* 0074e302: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74e307u); f_007127b0();
    /* 0074e307: mov dword ptr [ebx + 0x48], 0 */ W32((u32)(r_ebx+0x48u), 0x0u);
L_0074e30e:; BB(0x0074e30e);
    /* 0074e30e: mov ecx, dword ptr [ebx + 0x4c] */ r_ecx = R32((u32)(r_ebx+0x4cu));
    /* 0074e311: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e313: je 0x74e321 */ if (fZ) goto L_0074e321;
L_0074e315:; BB(0x0074e315);
    /* 0074e315: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74e31au); f_007127b0();
    /* 0074e31a: mov dword ptr [ebx + 0x4c], 0 */ W32((u32)(r_ebx+0x4cu), 0x0u);
L_0074e321:; BB(0x0074e321);
    /* 0074e321: mov ecx, dword ptr [ebx + 0x50] */ r_ecx = R32((u32)(r_ebx+0x50u));
    /* 0074e324: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e326: je 0x74e334 */ if (fZ) goto L_0074e334;
L_0074e328:; BB(0x0074e328);
    /* 0074e328: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74e32du); f_007127b0();
    /* 0074e32d: mov dword ptr [ebx + 0x50], 0 */ W32((u32)(r_ebx+0x50u), 0x0u);
L_0074e334:; BB(0x0074e334);
    /* 0074e334: mov edx, dword ptr [ebx + 0x44] */ r_edx = R32((u32)(r_ebx+0x44u));
    /* 0074e337: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e339: je 0x74e34f */ if (fZ) goto L_0074e34f;
L_0074e33b:; BB(0x0074e33b);
    /* 0074e33b: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0074e33f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074e344: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0074e348: mov dword ptr [ebx + 0x44], 0 */ W32((u32)(r_ebx+0x44u), 0x0u);
L_0074e34f:; BB(0x0074e34f);
    /* 0074e34f: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 0074e352: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e354: je 0x74e362 */ if (fZ) goto L_0074e362;
L_0074e356:; BB(0x0074e356);
    /* 0074e356: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x74e35bu); f_0073d160();
    /* 0074e35b: mov dword ptr [ebx + 0x3c], 0 */ W32((u32)(r_ebx+0x3cu), 0x0u);
L_0074e362:; BB(0x0074e362);
    /* 0074e362: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 0074e365: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e367: je 0x74e375 */ if (fZ) goto L_0074e375;
L_0074e369:; BB(0x0074e369);
    /* 0074e369: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74e36eu); f_007127b0();
    /* 0074e36e: mov dword ptr [ebx + 0x40], 0 */ W32((u32)(r_ebx+0x40u), 0x0u);
L_0074e375:; BB(0x0074e375);
    /* 0074e375: mov dword ptr [ebx + 0x54], 0xffffffff */ W32((u32)(r_ebx+0x54u), 0xffffffffu);
    /* 0074e37c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074e37e: mov dword ptr [ebx + 0x58], eax */ W32((u32)(r_ebx+0x58u), r_eax);
    /* 0074e381: mov byte ptr [ebx + 0x5c], al */ W8((u32)(r_ebx+0x5cu), (u8)r_eax);
    /* 0074e384: mov byte ptr [ebx + 0x1c], 4 */ W8((u32)(r_ebx+0x1cu), 0x4u);
    /* 0074e388: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 0074e38b: call 0x7bebe8 */ r_esp -= 4; W32(r_esp, 0x74e390u); f_007bebe8();
    /* 0074e390: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074e391: ret  */ FN_RET(0x0074e2e0); r_esp += 4; return;
}

void f_0074e394(void) /* sub_74E394 */
{
    FN_ENTER(0x0074e394);
    /* 0074e394: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074e395: mov ebp, esp */ r_ebp = r_esp;
    /* 0074e397: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074e399: push 0x8f29d4 */ { u32 v = 0x8f29d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e39e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074e3a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074e3a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074e3ac: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074e3af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074e3b2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0074e3b5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0074e3b8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0074e3bb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0074e3be: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 0074e3c1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e3c3: je 0x74e3d4 */ if (fZ) goto L_0074e3d4;
L_0074e3c5:; BB(0x0074e3c5);
    /* 0074e3c5: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74e3cau); f_007127b0();
    /* 0074e3ca: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074e3cd: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0074e3d4:; BB(0x0074e3d4);
    /* 0074e3d4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074e3d7: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0074e3da: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e3dc: je 0x74e3ed */ if (fZ) goto L_0074e3ed;
L_0074e3de:; BB(0x0074e3de);
    /* 0074e3de: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74e3e3u); f_007127b0();
    /* 0074e3e3: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074e3e6: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_0074e3ed:; BB(0x0074e3ed);
    /* 0074e3ed: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0074e3f0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e3f2: je 0x74e403 */ if (fZ) goto L_0074e403;
L_0074e3f4:; BB(0x0074e3f4);
    /* 0074e3f4: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74e3f9u); f_007127b0();
    /* 0074e3f9: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074e3fc: mov dword ptr [eax + 0x48], 0 */ W32((u32)(r_eax+0x48u), 0x0u);
L_0074e403:; BB(0x0074e403);
    /* 0074e403: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0074e406: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e408: je 0x74e419 */ if (fZ) goto L_0074e419;
L_0074e40a:; BB(0x0074e40a);
    /* 0074e40a: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74e40fu); f_007127b0();
    /* 0074e40f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074e412: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
L_0074e419:; BB(0x0074e419);
    /* 0074e419: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e41b: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74e420u); f_0073ec50();
    /* 0074e420: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074e423: push dword ptr [edx + 0x20] */ { u32 v = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074e426: push 0x973b28 */ { u32 v = 0x973b28u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e42b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074e42c: call 0x75198c */ r_esp -= 4; W32(r_esp, 0x74e431u); f_0075198c();
    /* 0074e431: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074e434: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074e437: mov dword ptr [edx + 0x48], eax */ W32((u32)(r_edx+0x48u), r_eax);
    /* 0074e43a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e43c: je 0x74e4b5 */ if (fZ) goto L_0074e4b5;
L_0074e43e:; BB(0x0074e43e);
    /* 0074e43e: mov eax, edx */ r_eax = r_edx;
    /* 0074e440: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e442: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0074e445: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x74e44au); f_007336fc();
    /* 0074e44a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074e44d: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0074e450: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074e451: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0074e454: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x74e459u); f_00712624();
    /* 0074e459: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074e45c: mov edx, dword ptr [ebx + 0x48] */ r_edx = R32((u32)(r_ebx+0x48u));
    /* 0074e45f: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 0074e466: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074e46b: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 0074e472: mov ecx, dword ptr [ebx + 0x48] */ r_ecx = R32((u32)(r_ebx+0x48u));
    /* 0074e475: call 0x751ae0 */ r_esp -= 4; W32(r_esp, 0x74e47au); f_00751ae0();
    /* 0074e47a: mov eax, ebx */ r_eax = r_ebx;
    /* 0074e47c: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0074e47f: call 0x751c80 */ r_esp -= 4; W32(r_esp, 0x74e484u); f_00751c80();
    /* 0074e484: mov eax, ebx */ r_eax = r_ebx;
    /* 0074e486: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0074e489: call 0x751bd4 */ r_esp -= 4; W32(r_esp, 0x74e48eu); f_00751bd4();
    /* 0074e48e: mov eax, ebx */ r_eax = r_ebx;
    /* 0074e490: mov ecx, dword ptr [eax + 0x48] */ r_ecx = R32((u32)(r_eax+0x48u));
    /* 0074e493: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 0074e49a: and edx, 0xfffd */ {  u32 a = r_edx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0074e4a0: mov word ptr [ecx + 0x84], dx */ W16((u32)(r_ecx+0x84u), (u16)r_edx);
    /* 0074e4a7: mov ecx, dword ptr [ecx + 0x60] */ r_ecx = R32((u32)(r_ecx+0x60u));
    /* 0074e4aa: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e4ac: je 0x74e4b5 */ if (fZ) goto L_0074e4b5;
L_0074e4ae:; BB(0x0074e4ae);
    /* 0074e4ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e4b0: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x74e4b5u); f_00760acc();
L_0074e4b5:; BB(0x0074e4b5);
    /* 0074e4b5: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0074e4bc: push 0xb4 */ { u32 v = 0xb4u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e4c1: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x74e4c6u); f_005caba4();
    /* 0074e4c6: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0074e4c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074e4cc: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0074e4cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e4d1: je 0x74e56c */ if (fZ) goto L_0074e56c;
L_0074e4d7:; BB(0x0074e4d7);
    /* 0074e4d7: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0074e4de: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074e4e5: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e4e7: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74e4ecu); f_0073ec50();
    /* 0074e4ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074e4ed: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074e4f0: push dword ptr [edx + 0x20] */ { u32 v = R32((u32)(r_edx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074e4f3: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074e4f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074e4f7: call 0x725d18 */ r_esp -= 4; W32(r_esp, 0x74e4fcu); f_00725d18();
    /* 0074e4fc: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0074e503:; BB(0x0074e503);
    /* 0074e503: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074e506: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074e509: mov dword ptr [edx + 0x50], eax */ W32((u32)(r_edx+0x50u), r_eax);
    /* 0074e50c: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0074e513: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e515: je 0x74e532 */ if (fZ) goto L_0074e532;
L_0074e517:; BB(0x0074e517);
    /* 0074e517: mov eax, edx */ r_eax = r_edx;
    /* 0074e519: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e51b: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0074e51e: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x74e523u); f_007336fc();
    /* 0074e523: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074e526: mov ecx, dword ptr [eax + 0x50] */ r_ecx = R32((u32)(r_eax+0x50u));
    /* 0074e529: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074e52a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0074e52d: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x74e532u); f_00712624();
L_0074e532:; BB(0x0074e532);
    /* 0074e532: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074e535: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074e538: mov dword ptr [eax + 0x54], 0xffffffff */ W32((u32)(r_eax+0x54u), 0xffffffffu);
    /* 0074e53f: mov byte ptr [eax + 0x1c], 0x16 */ W8((u32)(r_eax+0x1cu), 0x16u);
    /* 0074e543: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74e548u); f_0068d5a8();
    /* 0074e548: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074e549: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074e54b: je 0x74e55b */ if (fZ) goto L_0074e55b;
L_0074e54d:; BB(0x0074e54d);
    /* 0074e54d: mov ecx, eax */ r_ecx = r_eax;
    /* 0074e54f: call 0x691e10 */ r_esp -= 4; W32(r_esp, 0x74e554u); f_00691e10();
    /* 0074e554: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074e557: mov byte ptr [eax + 0x64], 1 */ W8((u32)(r_eax+0x64u), 0x1u);
L_0074e55b:; BB(0x0074e55b);
    /* 0074e55b: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0074e55e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074e561: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074e568: mov esp, ebp */ r_esp = r_ebp;
    /* 0074e56a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074e56b: ret  */ FN_RET(0x0074e394); r_esp += 4; return;
L_0074e56c:; BB(0x0074e56c);
    /* 0074e56c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074e56e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0074e571: jmp 0x74e503 */ goto L_0074e503;
}

void f_0074e574(void) /* sub_74E574 */
{
    FN_ENTER(0x0074e574);
    /* 0074e574: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074e575: mov edi, ecx */ r_edi = r_ecx;
    /* 0074e577: mov ecx, dword ptr [edi + 0x44] */ r_ecx = R32((u32)(r_edi+0x44u));
    /* 0074e57a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e57c: je 0x74e5ac */ if (fZ) goto L_0074e5ac;
L_0074e57e:; BB(0x0074e57e);
    /* 0074e57e: call 0x78ed20 */ r_esp -= 4; W32(r_esp, 0x74e583u); f_0078ed20();
    /* 0074e583: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e585: je 0x74e597 */ if (fZ) goto L_0074e597;
L_0074e587:; BB(0x0074e587);
    /* 0074e587: mov ecx, edi */ r_ecx = r_edi;
    /* 0074e589: call 0x74e2e0 */ r_esp -= 4; W32(r_esp, 0x74e58eu); f_0074e2e0();
    /* 0074e58e: mov ecx, edi */ r_ecx = r_edi;
    /* 0074e590: call 0x74e394 */ r_esp -= 4; W32(r_esp, 0x74e595u); f_0074e394();
    /* 0074e595: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074e596: ret  */ FN_RET(0x0074e574); r_esp += 4; return;
L_0074e597:; BB(0x0074e597);
    /* 0074e597: mov ecx, dword ptr [edi + 0x44] */ r_ecx = R32((u32)(r_edi+0x44u));
    /* 0074e59a: call 0x78ed14 */ r_esp -= 4; W32(r_esp, 0x74e59fu); f_0078ed14();
    /* 0074e59f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074e5a1: je 0x74e5aa */ if (fZ) goto L_0074e5aa;
L_0074e5a3:; BB(0x0074e5a3);
    /* 0074e5a3: mov ecx, edi */ r_ecx = r_edi;
    /* 0074e5a5: call 0x74e5bc */ r_esp -= 4; W32(r_esp, 0x74e5aau); f_0074e5bc();
L_0074e5aa:; BB(0x0074e5aa);
    /* 0074e5aa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074e5ab: ret  */ FN_RET(0x0074e574); r_esp += 4; return;
L_0074e5ac:; BB(0x0074e5ac);
    /* 0074e5ac: mov ecx, edi */ r_ecx = r_edi;
    /* 0074e5ae: call 0x74e2e0 */ r_esp -= 4; W32(r_esp, 0x74e5b3u); f_0074e2e0();
    /* 0074e5b3: mov ecx, edi */ r_ecx = r_edi;
    /* 0074e5b5: call 0x74e000 */ r_esp -= 4; W32(r_esp, 0x74e5bau); f_0074e000();
    /* 0074e5ba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074e5bb: ret  */ FN_RET(0x0074e574); r_esp += 4; return;
}

void f_0074e5bc(void) /* sub_74E5BC */
{
    FN_ENTER(0x0074e5bc);
    /* 0074e5bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074e5bd: mov esi, ecx */ r_esi = r_ecx;
    /* 0074e5bf: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 0074e5c2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e5c4: je 0x74e5d2 */ if (fZ) goto L_0074e5d2;
L_0074e5c6:; BB(0x0074e5c6);
    /* 0074e5c6: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x74e5cbu); f_0073d160();
    /* 0074e5cb: mov dword ptr [esi + 0x3c], 0 */ W32((u32)(r_esi+0x3cu), 0x0u);
L_0074e5d2:; BB(0x0074e5d2);
    /* 0074e5d2: mov ecx, dword ptr [esi + 0x4c] */ r_ecx = R32((u32)(r_esi+0x4cu));
    /* 0074e5d5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e5d7: je 0x74e5e5 */ if (fZ) goto L_0074e5e5;
L_0074e5d9:; BB(0x0074e5d9);
    /* 0074e5d9: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74e5deu); f_007127b0();
    /* 0074e5de: mov dword ptr [esi + 0x4c], 0 */ W32((u32)(r_esi+0x4cu), 0x0u);
L_0074e5e5:; BB(0x0074e5e5);
    /* 0074e5e5: mov eax, dword ptr [esi + 0x44] */ r_eax = R32((u32)(r_esi+0x44u));
    /* 0074e5e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074e5ea: je 0x74e613 */ if (fZ) goto L_0074e613;
L_0074e5ec:; BB(0x0074e5ec);
    /* 0074e5ec: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e5f1: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74e5f6u); f_0073ec50();
    /* 0074e5f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074e5f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074e5f8: mov ecx, dword ptr [esi + 0x44] */ r_ecx = R32((u32)(r_esi+0x44u));
    /* 0074e5fb: call 0x78edec */ r_esp -= 4; W32(r_esp, 0x74e600u); f_0078edec();
    /* 0074e600: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074e603: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074e604: call 0x756a58 */ r_esp -= 4; W32(r_esp, 0x74e609u); f_00756a58();
    /* 0074e609: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074e60c: mov byte ptr [esi + 0x1c], 0x19 */ W8((u32)(r_esi+0x1cu), 0x19u);
    /* 0074e610: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
L_0074e613:; BB(0x0074e613);
    /* 0074e613: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074e614: ret  */ FN_RET(0x0074e5bc); r_esp += 4; return;
}

void f_0074e618(void) /* sub_74E618 */
{
    FN_ENTER(0x0074e618);
    /* 0074e618: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074e619: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074e61b: mov edx, dword ptr [ebx + 0x4c] */ r_edx = R32((u32)(r_ebx+0x4cu));
    /* 0074e61e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e620: je 0x74e651 */ if (fZ) goto L_0074e651;
L_0074e622:; BB(0x0074e622);
    /* 0074e622: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 0074e625: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e627: je 0x74e651 */ if (fZ) goto L_0074e651;
L_0074e629:; BB(0x0074e629);
    /* 0074e629: movzx eax, word ptr [edx + 0x60] */ r_eax = (u32)R16((u32)(r_edx+0x60u));
    /* 0074e62d: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074e62f: je 0x74e641 */ if (fZ) goto L_0074e641;
L_0074e631:; BB(0x0074e631);
    /* 0074e631: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074e633: call 0x74e2e0 */ r_esp -= 4; W32(r_esp, 0x74e638u); f_0074e2e0();
    /* 0074e638: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074e63a: call 0x74e394 */ r_esp -= 4; W32(r_esp, 0x74e63fu); f_0074e394();
    /* 0074e63f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074e640: ret  */ FN_RET(0x0074e618); r_esp += 4; return;
L_0074e641:; BB(0x0074e641);
    /* 0074e641: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074e643: je 0x74e64f */ if (fZ) goto L_0074e64f;
L_0074e645:; BB(0x0074e645);
    /* 0074e645: push dword ptr [edx + 0x70] */ { u32 v = R32((u32)(r_edx+0x70u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074e648: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074e64a: call 0x74e664 */ r_esp -= 4; W32(r_esp, 0x74e64fu); f_0074e664();
L_0074e64f:; BB(0x0074e64f);
    /* 0074e64f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074e650: ret  */ FN_RET(0x0074e618); r_esp += 4; return;
L_0074e651:; BB(0x0074e651);
    /* 0074e651: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074e653: call 0x74e2e0 */ r_esp -= 4; W32(r_esp, 0x74e658u); f_0074e2e0();
    /* 0074e658: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074e65a: call 0x74e000 */ r_esp -= 4; W32(r_esp, 0x74e65fu); f_0074e000();
    /* 0074e65f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074e660: ret  */ FN_RET(0x0074e618); r_esp += 4; return;
}

void f_0074e664(void) /* sub_74E664 */
{
    FN_ENTER(0x0074e664);
    /* 0074e664: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074e665: mov edi, ecx */ r_edi = r_ecx;
    /* 0074e667: mov ecx, dword ptr [edi + 0x4c] */ r_ecx = R32((u32)(r_edi+0x4cu));
    /* 0074e66a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e66c: je 0x74e67a */ if (fZ) goto L_0074e67a;
L_0074e66e:; BB(0x0074e66e);
    /* 0074e66e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74e673u); f_007127b0();
    /* 0074e673: mov dword ptr [edi + 0x4c], 0 */ W32((u32)(r_edi+0x4cu), 0x0u);
L_0074e67a:; BB(0x0074e67a);
    /* 0074e67a: mov ecx, dword ptr [edi + 0x50] */ r_ecx = R32((u32)(r_edi+0x50u));
    /* 0074e67d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e67f: je 0x74e68d */ if (fZ) goto L_0074e68d;
L_0074e681:; BB(0x0074e681);
    /* 0074e681: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74e686u); f_007127b0();
    /* 0074e686: mov dword ptr [edi + 0x50], 0 */ W32((u32)(r_edi+0x50u), 0x0u);
L_0074e68d:; BB(0x0074e68d);
    /* 0074e68d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0074e691: mov dword ptr [edi + 0x58], eax */ W32((u32)(r_edi+0x58u), r_eax);
    /* 0074e694: call 0x756ab0 */ r_esp -= 4; W32(r_esp, 0x74e699u); f_00756ab0();
    /* 0074e699: mov dword ptr [edi + 0x44], eax */ W32((u32)(r_edi+0x44u), r_eax);
    /* 0074e69c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074e69e: je 0x74e6cc */ if (fZ) goto L_0074e6cc;
L_0074e6a0:; BB(0x0074e6a0);
    /* 0074e6a0: push 0xcf */ { u32 v = 0xcfu; r_esp -= 4; W32(r_esp, v); }
    /* 0074e6a5: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74e6aau); f_0073ec50();
    /* 0074e6aa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074e6ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074e6ac: mov ecx, dword ptr [edi + 0x44] */ r_ecx = R32((u32)(r_edi+0x44u));
    /* 0074e6af: call 0x78edec */ r_esp -= 4; W32(r_esp, 0x74e6b4u); f_0078edec();
    /* 0074e6b4: mov ecx, dword ptr [edi + 0x44] */ r_ecx = R32((u32)(r_edi+0x44u));
    /* 0074e6b7: call 0x78ed2c */ r_esp -= 4; W32(r_esp, 0x74e6bcu); f_0078ed2c();
    /* 0074e6bc: mov ecx, dword ptr [edi + 0x44] */ r_ecx = R32((u32)(r_edi+0x44u));
    /* 0074e6bf: call 0x78ee34 */ r_esp -= 4; W32(r_esp, 0x74e6c4u); f_0078ee34();
    /* 0074e6c4: mov ecx, dword ptr [edi + 0x44] */ r_ecx = R32((u32)(r_edi+0x44u));
    /* 0074e6c7: call 0x78ee74 */ r_esp -= 4; W32(r_esp, 0x74e6ccu); f_0078ee74();
L_0074e6cc:; BB(0x0074e6cc);
    /* 0074e6cc: mov byte ptr [edi + 0x1c], 0x18 */ W8((u32)(r_edi+0x1cu), 0x18u);
    /* 0074e6d0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074e6d1: ret 4 */ FN_RET(0x0074e664); r_esp += 8; return;
}

void f_0074e6d4(void) /* sub_74E6D4 */
{
    FN_ENTER(0x0074e6d4);
    /* 0074e6d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074e6d5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074e6d6: mov esi, ecx */ r_esi = r_ecx;
    /* 0074e6d8: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0074e6db: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074e6dd: je 0x74e7bf */ if (fZ) goto L_0074e7bf;
L_0074e6e3:; BB(0x0074e6e3);
    /* 0074e6e3: call 0x737d90 */ r_esp -= 4; W32(r_esp, 0x74e6e8u); f_00737d90();
    /* 0074e6e8: mov ebp, eax */ r_ebp = r_eax;
    /* 0074e6ea: cmp ebp, dword ptr [esi + 0x54] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x54u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e6ed: je 0x74e6ff */ if (fZ) goto L_0074e6ff;
L_0074e6ef:; BB(0x0074e6ef);
    /* 0074e6ef: mov ecx, dword ptr [esi + 0x50] */ r_ecx = R32((u32)(r_esi+0x50u));
    /* 0074e6f2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e6f4: je 0x74e6ff */ if (fZ) goto L_0074e6ff;
L_0074e6f6:; BB(0x0074e6f6);
    /* 0074e6f6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074e6f7: mov dword ptr [esi + 0x54], ebp */ W32((u32)(r_esi+0x54u), r_ebp);
    /* 0074e6fa: call 0x72606c */ r_esp -= 4; W32(r_esp, 0x74e6ffu); f_0072606c();
L_0074e6ff:; BB(0x0074e6ff);
    /* 0074e6ff: mov ecx, dword ptr [esi + 0x48] */ r_ecx = R32((u32)(r_esi+0x48u));
    /* 0074e702: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 0074e709: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0074e70c: je 0x74e71f */ if (fZ) goto L_0074e71f;
L_0074e70e:; BB(0x0074e70e);
    /* 0074e70e: mov ecx, esi */ r_ecx = r_esi;
    /* 0074e710: call 0x74e2e0 */ r_esp -= 4; W32(r_esp, 0x74e715u); f_0074e2e0();
    /* 0074e715: mov ecx, esi */ r_ecx = r_esi;
    /* 0074e717: call 0x74e000 */ r_esp -= 4; W32(r_esp, 0x74e71cu); f_0074e000();
    /* 0074e71c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074e71d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074e71e: ret  */ FN_RET(0x0074e6d4); r_esp += 4; return;
L_0074e71f:; BB(0x0074e71f);
    /* 0074e71f: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074e722: je 0x74e7bf */ if (fZ) goto L_0074e7bf;
L_0074e728:; BB(0x0074e728);
    /* 0074e728: call 0x737a68 */ r_esp -= 4; W32(r_esp, 0x74e72du); f_00737a68();
    /* 0074e72d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074e72e: call 0x5c5528 */ r_esp -= 4; W32(r_esp, 0x74e733u); f_005c5528();
    /* 0074e733: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074e734: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e736: je 0x74e7c2 */ if (fZ) goto L_0074e7c2;
L_0074e73c:; BB(0x0074e73c);
    /* 0074e73c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0074e73e: mov ecx, eax */ r_ecx = r_eax;
    /* 0074e740: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x74e746u); call_ind(t); }
    /* 0074e746: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0074e749: jg 0x74e7b7 */ if ((!fZ&&fS==fO)) goto L_0074e7b7;
L_0074e74b:; BB(0x0074e74b);
    /* 0074e74b: mov ecx, dword ptr [esi + 0x4c] */ r_ecx = R32((u32)(r_esi+0x4cu));
    /* 0074e74e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e750: je 0x74e75e */ if (fZ) goto L_0074e75e;
L_0074e752:; BB(0x0074e752);
    /* 0074e752: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74e757u); f_007127b0();
    /* 0074e757: mov dword ptr [esi + 0x4c], 0 */ W32((u32)(r_esi+0x4cu), 0x0u);
L_0074e75e:; BB(0x0074e75e);
    /* 0074e75e: mov ecx, dword ptr [esi + 0x50] */ r_ecx = R32((u32)(r_esi+0x50u));
    /* 0074e761: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e763: je 0x74e771 */ if (fZ) goto L_0074e771;
L_0074e765:; BB(0x0074e765);
    /* 0074e765: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74e76au); f_007127b0();
    /* 0074e76a: mov dword ptr [esi + 0x50], 0 */ W32((u32)(r_esi+0x50u), 0x0u);
L_0074e771:; BB(0x0074e771);
    /* 0074e771: mov dword ptr [esi + 0x58], 1 */ W32((u32)(r_esi+0x58u), 0x1u);
    /* 0074e778: call 0x756ab0 */ r_esp -= 4; W32(r_esp, 0x74e77du); f_00756ab0();
    /* 0074e77d: mov dword ptr [esi + 0x44], eax */ W32((u32)(r_esi+0x44u), r_eax);
    /* 0074e780: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074e782: je 0x74e7b0 */ if (fZ) goto L_0074e7b0;
L_0074e784:; BB(0x0074e784);
    /* 0074e784: push 0xcf */ { u32 v = 0xcfu; r_esp -= 4; W32(r_esp, v); }
    /* 0074e789: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74e78eu); f_0073ec50();
    /* 0074e78e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074e78f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074e790: mov ecx, dword ptr [esi + 0x44] */ r_ecx = R32((u32)(r_esi+0x44u));
    /* 0074e793: call 0x78edec */ r_esp -= 4; W32(r_esp, 0x74e798u); f_0078edec();
    /* 0074e798: mov ecx, dword ptr [esi + 0x44] */ r_ecx = R32((u32)(r_esi+0x44u));
    /* 0074e79b: call 0x78ed2c */ r_esp -= 4; W32(r_esp, 0x74e7a0u); f_0078ed2c();
    /* 0074e7a0: mov ecx, dword ptr [esi + 0x44] */ r_ecx = R32((u32)(r_esi+0x44u));
    /* 0074e7a3: call 0x78ee34 */ r_esp -= 4; W32(r_esp, 0x74e7a8u); f_0078ee34();
    /* 0074e7a8: mov ecx, dword ptr [esi + 0x44] */ r_ecx = R32((u32)(r_esi+0x44u));
    /* 0074e7ab: call 0x78ee74 */ r_esp -= 4; W32(r_esp, 0x74e7b0u); f_0078ee74();
L_0074e7b0:; BB(0x0074e7b0);
    /* 0074e7b0: mov byte ptr [esi + 0x1c], 0x18 */ W8((u32)(r_esi+0x1cu), 0x18u);
    /* 0074e7b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074e7b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074e7b6: ret  */ FN_RET(0x0074e6d4); r_esp += 4; return;
L_0074e7b7:; BB(0x0074e7b7);
    /* 0074e7b7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074e7b8: mov ecx, esi */ r_ecx = r_esi;
    /* 0074e7ba: call 0x74e7d4 */ r_esp -= 4; W32(r_esp, 0x74e7bfu); f_0074e7d4();
L_0074e7bf:; BB(0x0074e7bf);
    /* 0074e7bf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074e7c0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074e7c1: ret  */ FN_RET(0x0074e6d4); r_esp += 4; return;
L_0074e7c2:; BB(0x0074e7c2);
    /* 0074e7c2: mov ecx, esi */ r_ecx = r_esi;
    /* 0074e7c4: call 0x74e2e0 */ r_esp -= 4; W32(r_esp, 0x74e7c9u); f_0074e2e0();
    /* 0074e7c9: mov ecx, esi */ r_ecx = r_esi;
    /* 0074e7cb: call 0x74e000 */ r_esp -= 4; W32(r_esp, 0x74e7d0u); f_0074e000();
    /* 0074e7d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074e7d1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074e7d2: ret  */ FN_RET(0x0074e6d4); r_esp += 4; return;
}

void f_0074e7d4(void) /* sub_74E7D4 */
{
    FN_ENTER(0x0074e7d4);
    /* 0074e7d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074e7d5: mov ebp, esp */ r_ebp = r_esp;
    /* 0074e7d7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074e7d9: push 0x8f29fc */ { u32 v = 0x8f29fcu; r_esp -= 4; W32(r_esp, v); }
    /* 0074e7de: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074e7e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074e7e5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074e7ec: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074e7ef: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074e7f2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 0074e7f5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 0074e7f8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0074e7fb: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0074e7fe: mov ecx, dword ptr [ecx + 0x50] */ r_ecx = R32((u32)(r_ecx+0x50u));
    /* 0074e801: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e803: je 0x74e814 */ if (fZ) goto L_0074e814;
L_0074e805:; BB(0x0074e805);
    /* 0074e805: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74e80au); f_007127b0();
    /* 0074e80a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074e80d: mov dword ptr [eax + 0x50], 0 */ W32((u32)(r_eax+0x50u), 0x0u);
L_0074e814:; BB(0x0074e814);
    /* 0074e814: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074e817: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0074e81a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e81c: je 0x74e82d */ if (fZ) goto L_0074e82d;
L_0074e81e:; BB(0x0074e81e);
    /* 0074e81e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x74e823u); f_007127b0();
    /* 0074e823: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074e826: mov dword ptr [eax + 0x4c], 0 */ W32((u32)(r_eax+0x4cu), 0x0u);
L_0074e82d:; BB(0x0074e82d);
    /* 0074e82d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 0074e834: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e839: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x74e83eu); f_005caba4();
    /* 0074e83e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0074e841: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074e844: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0074e847: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074e849: je 0x74e92a */ if (fZ) goto L_0074e92a;
L_0074e84f:; BB(0x0074e84f);
    /* 0074e84f: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0074e856: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074e85d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e85f: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74e864u); f_0073ec50();
    /* 0074e864: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074e865: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074e868: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074e86b: movsx ebx, word ptr [edx + 0x20] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_edx+0x20u));
    /* 0074e86f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074e870: mov esi, 1 */ r_esi = 0x1u;
    /* 0074e875: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074e876: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074e879: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074e87a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074e87b: call 0x728ac4 */ r_esp -= 4; W32(r_esp, 0x74e880u); f_00728ac4();
    /* 0074e880: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_0074e887:; BB(0x0074e887);
    /* 0074e887: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074e88a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074e88d: mov dword ptr [edx + 0x4c], eax */ W32((u32)(r_edx+0x4cu), r_eax);
    /* 0074e890: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0074e897: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074e899: je 0x74e90d */ if (fZ) goto L_0074e90d;
L_0074e89b:; BB(0x0074e89b);
    /* 0074e89b: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 0074e89d: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74e8a2u); f_0079317c();
    /* 0074e8a2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074e8a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074e8a4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074e8a7: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0074e8aa: call 0x729630 */ r_esp -= 4; W32(r_esp, 0x74e8afu); f_00729630();
    /* 0074e8af: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074e8b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e8b4: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 0074e8b7: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x74e8bcu); f_007336fc();
    /* 0074e8bc: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074e8bf: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0074e8c2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074e8c3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0074e8c6: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x74e8cbu); f_00712624();
    /* 0074e8cb: push 0x43600000 */ { u32 v = 0x43600000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e8d0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074e8d3: mov ecx, dword ptr [eax + 0x4c] */ r_ecx = R32((u32)(r_eax+0x4cu));
    /* 0074e8d6: call 0x7296e4 */ r_esp -= 4; W32(r_esp, 0x74e8dbu); f_007296e4();
    /* 0074e8db: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074e8de: mov edx, dword ptr [ecx + 0x4c] */ r_edx = R32((u32)(r_ecx+0x4cu));
    /* 0074e8e1: movzx eax, word ptr [edx + 0x60] */ r_eax = (u32)R16((u32)(r_edx+0x60u));
    /* 0074e8e5: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074e8ea: mov word ptr [edx + 0x60], ax */ W16((u32)(r_edx+0x60u), (u16)r_eax);
    /* 0074e8ee: mov esi, dword ptr [ecx + 0x4c] */ r_esi = R32((u32)(r_ecx+0x4cu));
    /* 0074e8f1: movzx ebx, word ptr [esi + 0x60] */ r_ebx = (u32)R16((u32)(r_esi+0x60u));
    /* 0074e8f5: and ebx, 0xfffd */ {  u32 a = r_ebx; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_ebx = r;  }
    /* 0074e8fb: mov ecx, dword ptr [esi + 0x74] */ r_ecx = R32((u32)(r_esi+0x74u));
    /* 0074e8fe: mov word ptr [esi + 0x60], bx */ W16((u32)(r_esi+0x60u), (u16)r_ebx);
    /* 0074e902: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074e904: je 0x74e90d */ if (fZ) goto L_0074e90d;
L_0074e906:; BB(0x0074e906);
    /* 0074e906: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e908: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x74e90du); f_00760acc();
L_0074e90d:; BB(0x0074e90d);
    /* 0074e90d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0074e910: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074e913: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0074e916: mov byte ptr [eax + 0x1c], 0x17 */ W8((u32)(r_eax+0x1cu), 0x17u);
    /* 0074e91a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074e91d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074e924: mov esp, ebp */ r_esp = r_ebp;
    /* 0074e926: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074e927: ret 4 */ FN_RET(0x0074e7d4); r_esp += 8; return;
L_0074e92a:; BB(0x0074e92a);
    /* 0074e92a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074e92c: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0074e92f: jmp 0x74e887 */ goto L_0074e887;
}

void f_0074e934(void) /* sub_74E934 */
{
    FN_ENTER(0x0074e934);
    /* 0074e934: mov ecx, dword ptr [ecx + 0x30] */ r_ecx = R32((u32)(r_ecx+0x30u));
    /* 0074e937: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074e939: je 0x74e940 */ if (fZ) goto L_0074e940;
L_0074e93b:; BB(0x0074e93b);
    /* 0074e93b: call 0x74f008 */ r_esp -= 4; W32(r_esp, 0x74e940u); f_0074f008();
L_0074e940:; BB(0x0074e940);
    /* 0074e940: ret  */ FN_RET(0x0074e934); r_esp += 4; return;
}

void f_0074e944(void) /* sub_74E944 */
{
    FN_ENTER(0x0074e944);
    /* 0074e944: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0074e948: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074e94a: jne 0x74e953 */ if (!fZ) goto L_0074e953;
L_0074e94c:; BB(0x0074e94c);
    /* 0074e94c: mov byte ptr [ecx + 0x1c], 9 */ W8((u32)(r_ecx+0x1cu), 0x9u);
    /* 0074e950: ret 4 */ FN_RET(0x0074e944); r_esp += 8; return;
L_0074e953:; BB(0x0074e953);
    /* 0074e953: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0074e956: jne 0x74e95c */ if (!fZ) goto L_0074e95c;
L_0074e958:; BB(0x0074e958);
    /* 0074e958: mov byte ptr [ecx + 0x1c], 0xa */ W8((u32)(r_ecx+0x1cu), 0xau);
L_0074e95c:; BB(0x0074e95c);
    /* 0074e95c: ret 4 */ FN_RET(0x0074e944); r_esp += 8; return;
}

void f_0074e960(void) /* sub_74E960 */
{
    FN_ENTER(0x0074e960);
    /* 0074e960: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074e961: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074e962: mov esi, ecx */ r_esi = r_ecx;
    /* 0074e964: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e966: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74e96bu); f_0073ec50();
    /* 0074e96b: mov edi, eax */ r_edi = r_eax;
    /* 0074e96d: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 0074e96f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74e974u); f_0079317c();
    /* 0074e974: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074e977: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074e978: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e97a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074e97b: call 0x73566c */ r_esp -= 4; W32(r_esp, 0x74e980u); f_0073566c();
    /* 0074e980: mov edi, eax */ r_edi = r_eax;
    /* 0074e982: push 0x15f */ { u32 v = 0x15fu; r_esp -= 4; W32(r_esp, v); }
    /* 0074e987: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74e98cu); f_0079317c();
    /* 0074e98c: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074e98f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e991: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e993: mov ecx, edi */ r_ecx = r_edi;
    /* 0074e995: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074e996: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x74e99bu); f_00735c90();
    /* 0074e99b: push 0x160 */ { u32 v = 0x160u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e9a0: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74e9a5u); f_0079317c();
    /* 0074e9a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074e9a6: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e9a8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e9aa: mov ecx, edi */ r_ecx = r_edi;
    /* 0074e9ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074e9ad: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x74e9b2u); f_00735c90();
    /* 0074e9b2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e9b4: mov ecx, dword ptr [esi + 0x2c] */ r_ecx = R32((u32)(r_esi+0x2cu));
    /* 0074e9b7: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x74e9bcu); f_007336fc();
    /* 0074e9bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074e9bd: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0074e9c0: mov ecx, edi */ r_ecx = r_edi;
    /* 0074e9c2: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x74e9c7u); f_00712624();
    /* 0074e9c7: push 0x434e0000 */ { u32 v = 0x434e0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074e9cc: movzx edx, word ptr [edi + 0x84] */ r_edx = (u32)R16((u32)(r_edi+0x84u));
    /* 0074e9d3: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0074e9d9: mov word ptr [edi + 0x84], dx */ W16((u32)(r_edi+0x84u), (u16)r_edx);
    /* 0074e9e0: mov ecx, edi */ r_ecx = r_edi;
    /* 0074e9e2: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x74e9e7u); f_00736138();
    /* 0074e9e7: mov ecx, edi */ r_ecx = r_edi;
    /* 0074e9e9: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x74e9eeu); f_00736458();
    /* 0074e9ee: mov eax, edi */ r_eax = r_edi;
    /* 0074e9f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074e9f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074e9f2: ret  */ FN_RET(0x0074e960); r_esp += 4; return;
}

void f_0074e9f4(void) /* sub_74E9F4 */
{
    FN_ENTER(0x0074e9f4);
    /* 0074e9f4: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0074e9f8: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0074e9fb: je 0x74ea20 */ if (fZ) goto L_0074ea20;
L_0074e9fd:; BB(0x0074e9fd);
    /* 0074e9fd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074e9ff: je 0x74ea19 */ if (fZ) goto L_0074ea19;
L_0074ea01:; BB(0x0074ea01);
    /* 0074ea01: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0074ea04: jne 0x74ea0d */ if (!fZ) goto L_0074ea0d;
L_0074ea06:; BB(0x0074ea06);
    /* 0074ea06: mov byte ptr [ecx + 0x1c], 0x15 */ W8((u32)(r_ecx+0x1cu), 0x15u);
    /* 0074ea0a: ret 4 */ FN_RET(0x0074e9f4); r_esp += 8; return;
L_0074ea0d:; BB(0x0074ea0d);
    /* 0074ea0d: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0074ea10: jne 0x74ea1d */ if (!fZ) goto L_0074ea1d;
L_0074ea12:; BB(0x0074ea12);
    /* 0074ea12: mov byte ptr [ecx + 0x1c], 0x12 */ W8((u32)(r_ecx+0x1cu), 0x12u);
    /* 0074ea16: ret 4 */ FN_RET(0x0074e9f4); r_esp += 8; return;
L_0074ea19:; BB(0x0074ea19);
    /* 0074ea19: mov byte ptr [ecx + 0x1c], 0xb */ W8((u32)(r_ecx+0x1cu), 0xbu);
L_0074ea1d:; BB(0x0074ea1d);
    /* 0074ea1d: ret 4 */ FN_RET(0x0074e9f4); r_esp += 8; return;
L_0074ea20:; BB(0x0074ea20);
    /* 0074ea20: mov byte ptr [ecx + 0x1c], 7 */ W8((u32)(r_ecx+0x1cu), 0x7u);
    /* 0074ea24: ret 4 */ FN_RET(0x0074e9f4); r_esp += 8; return;
}

void f_0074ea28(void) /* sub_74EA28 */
{
    FN_ENTER(0x0074ea28);
    /* 0074ea28: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074ea29: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074ea2a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074ea2b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074ea2c: mov edi, ecx */ r_edi = r_ecx;
    /* 0074ea2e: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 0074ea33: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x74ea38u); f_0073ec50();
    /* 0074ea38: mov ebx, eax */ r_ebx = r_eax;
    /* 0074ea3a: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ea3c: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74ea41u); f_0079317c();
    /* 0074ea41: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074ea44: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074ea45: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ea47: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074ea48: call 0x73566c */ r_esp -= 4; W32(r_esp, 0x74ea4du); f_0073566c();
    /* 0074ea4d: mov esi, eax */ r_esi = r_eax;
    /* 0074ea4f: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074ea52: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x74ea57u); f_0068d5a8();
    /* 0074ea57: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074ea5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ea5c: je 0x74ea6d */ if (fZ) goto L_0074ea6d;
L_0074ea5e:; BB(0x0074ea5e);
    /* 0074ea5e: mov edx, dword ptr [eax + 0xeb4] */ r_edx = R32((u32)(r_eax+0xeb4u));
    /* 0074ea64: cmp edx, dword ptr [edi + 0x24] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ea67: je 0x74ea6d */ if (fZ) goto L_0074ea6d;
L_0074ea69:; BB(0x0074ea69);
    /* 0074ea69: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0074ea6b: jmp 0x74ea72 */ goto L_0074ea72;
L_0074ea6d:; BB(0x0074ea6d);
    /* 0074ea6d: mov ebp, 1 */ r_ebp = 0x1u;
L_0074ea72:; BB(0x0074ea72);
    /* 0074ea72: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074ea75: call 0x825abc */ r_esp -= 4; W32(r_esp, 0x74ea7au); f_00825abc();
    /* 0074ea7a: push 0x15c */ { u32 v = 0x15cu; r_esp -= 4; W32(r_esp, v); }
    /* 0074ea7f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ea82: mov ebx, 0 */ r_ebx = 0x0u;
    /* 0074ea87: sete bl */ r_ebx = (r_ebx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0074ea8a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74ea8fu); f_0079317c();
    /* 0074ea8f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074ea92: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ea94: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ea96: mov ecx, esi */ r_ecx = r_esi;
    /* 0074ea98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074ea99: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x74ea9eu); f_00735c90();
    /* 0074ea9e: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074eaa1: je 0x74eb3c */ if (fZ) goto L_0074eb3c;
L_0074eaa7:; BB(0x0074eaa7);
    /* 0074eaa7: push 0x15d */ { u32 v = 0x15du; r_esp -= 4; W32(r_esp, v); }
    /* 0074eaac: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74eab1u); f_0079317c();
    /* 0074eab1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074eab2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074eab4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0074eab6: mov ecx, esi */ r_ecx = r_esi;
    /* 0074eab8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074eab9: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x74eabeu); f_00735ee0();
L_0074eabe:; BB(0x0074eabe);
    /* 0074eabe: call 0x80a640 */ r_esp -= 4; W32(r_esp, 0x74eac3u); f_0080a640();
    /* 0074eac3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074eac5: je 0x74eae0 */ if (fZ) goto L_0074eae0;
L_0074eac7:; BB(0x0074eac7);
    /* 0074eac7: push 0x15e */ { u32 v = 0x15eu; r_esp -= 4; W32(r_esp, v); }
    /* 0074eacc: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74ead1u); f_0079317c();
    /* 0074ead1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074ead2: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ead4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ead6: mov ecx, esi */ r_ecx = r_esi;
    /* 0074ead8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074ead9: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x74eadeu); f_00735c90();
    /* 0074eade: jmp 0x74eaf7 */ goto L_0074eaf7;
L_0074eae0:; BB(0x0074eae0);
    /* 0074eae0: push 0x15e */ { u32 v = 0x15eu; r_esp -= 4; W32(r_esp, v); }
    /* 0074eae5: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74eaeau); f_0079317c();
    /* 0074eaea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074eaeb: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0074eaed: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0074eaef: mov ecx, esi */ r_ecx = r_esi;
    /* 0074eaf1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074eaf2: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x74eaf7u); f_00735ee0();
L_0074eaf7:; BB(0x0074eaf7);
    /* 0074eaf7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074eaf9: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 0074eafc: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x74eb01u); f_007336fc();
    /* 0074eb01: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074eb02: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0074eb05: mov ecx, esi */ r_ecx = r_esi;
    /* 0074eb07: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x74eb0cu); f_00712624();
    /* 0074eb0c: push 0x434e0000 */ { u32 v = 0x434e0000u; r_esp -= 4; W32(r_esp, v); }
    /* 0074eb11: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 0074eb18: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0074eb1e: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 0074eb25: mov ecx, esi */ r_ecx = r_esi;
    /* 0074eb27: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x74eb2cu); f_00736138();
    /* 0074eb2c: mov ecx, esi */ r_ecx = r_esi;
    /* 0074eb2e: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x74eb33u); f_00736458();
    /* 0074eb33: mov eax, esi */ r_eax = r_esi;
    /* 0074eb35: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074eb36: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074eb37: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074eb38: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074eb39: ret 4 */ FN_RET(0x0074ea28); r_esp += 8; return;
L_0074eb3c:; BB(0x0074eb3c);
    /* 0074eb3c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074eb3e: jne 0x74eaa7 */ if (!fZ) goto L_0074eaa7;
L_0074eb44:; BB(0x0074eb44);
    /* 0074eb44: push 0x15d */ { u32 v = 0x15du; r_esp -= 4; W32(r_esp, v); }
    /* 0074eb49: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74eb4eu); f_0079317c();
    /* 0074eb4e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074eb4f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074eb51: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0074eb53: mov ecx, esi */ r_ecx = r_esi;
    /* 0074eb55: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074eb56: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x74eb5bu); f_00735c90();
    /* 0074eb5b: jmp 0x74eabe */ goto L_0074eabe;
}

void f_0074eb60(void) /* sub_74EB60 */
{
    FN_ENTER(0x0074eb60);
    /* 0074eb60: mov edx, dword ptr [0xa9abac] */ r_edx = R32((u32)(0xa9abacu));
    /* 0074eb66: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074eb68: je 0x74eb7e */ if (fZ) goto L_0074eb7e;
L_0074eb6a:; BB(0x0074eb6a);
    /* 0074eb6a: movzx eax, byte ptr [edx + 0x1c] */ r_eax = (u32)R8((u32)(r_edx+0x1cu));
    /* 0074eb6e: cmp eax, 0x1a */ {  u32 a = r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0074eb71: jne 0x74eb7e */ if (!fZ) goto L_0074eb7e;
L_0074eb73:; BB(0x0074eb73);
    /* 0074eb73: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0074eb77: mov byte ptr [edx + 0x5c], 1 */ W8((u32)(r_edx+0x5cu), 0x1u);
    /* 0074eb7b: mov dword ptr [edx + 0x60], eax */ W32((u32)(r_edx+0x60u), r_eax);
L_0074eb7e:; BB(0x0074eb7e);
    /* 0074eb7e: ret  */ FN_RET(0x0074eb60); r_esp += 4; return;
}

void f_0074ebac(void) /* sub_74EBAC */
{
    FN_ENTER(0x0074ebac);
    /* 0074ebac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074ebad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074ebaf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074ebb1: call 0x74ebd0 */ r_esp -= 4; W32(r_esp, 0x74ebb6u); f_0074ebd0();
    /* 0074ebb6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0074ebba: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074ebbc: jne 0x74ebc2 */ if (!fZ) goto L_0074ebc2;
L_0074ebbe:; BB(0x0074ebbe);
    /* 0074ebbe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074ebbf: ret 4 */ FN_RET(0x0074ebac); r_esp += 8; return;
L_0074ebc2:; BB(0x0074ebc2);
    /* 0074ebc2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074ebc3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x74ebc8u); f_005c2f74();
    /* 0074ebc8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074ebc9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074ebca: ret 4 */ FN_RET(0x0074ebac); r_esp += 8; return;
}

void f_0074ebd0(void) /* sub_74EBD0 */
{
    FN_ENTER(0x0074ebd0);
    /* 0074ebd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074ebd1: mov ebp, esp */ r_ebp = r_esp;
    /* 0074ebd3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074ebd5: push 0x8f2a18 */ { u32 v = 0x8f2a18u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ebda: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074ebe0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074ebe1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074ebe8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074ebeb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074ebee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0074ebf1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0074ebf4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0074ebf7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0074ebfa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074ebfd: mov dword ptr [ecx], 0xb42068 */ W32((u32)(r_ecx), 0xb42068u);
    /* 0074ec03: mov dword ptr [0xa9abc4], 0 */ W32((u32)(0xa9abc4u), 0x0u);
    /* 0074ec0d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0074ec14: call 0x7366bc */ r_esp -= 4; W32(r_esp, 0x74ec19u); f_007366bc();
    /* 0074ec19: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074ec1c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074ec23: mov esp, ebp */ r_esp = r_ebp;
    /* 0074ec25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074ec26: ret  */ FN_RET(0x0074ebd0); r_esp += 4; return;
}

void f_0074ec28(void) /* sub_74EC28 */
{
    FN_ENTER(0x0074ec28);
    /* 0074ec28: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0074ec2c: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0074ec2f: je 0x74ec52 */ if (fZ) goto L_0074ec52;
L_0074ec31:; BB(0x0074ec31);
    /* 0074ec31: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0074ec34: je 0x74ec52 */ if (fZ) goto L_0074ec52;
L_0074ec36:; BB(0x0074ec36);
    /* 0074ec36: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0074ec39: jne 0x74ec41 */ if (!fZ) goto L_0074ec41;
L_0074ec3b:; BB(0x0074ec3b);
    /* 0074ec3b: mov eax, 0xff5eb1ff */ r_eax = 0xff5eb1ffu;
    /* 0074ec40: ret  */ FN_RET(0x0074ec28); r_esp += 4; return;
L_0074ec41:; BB(0x0074ec41);
    /* 0074ec41: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0074ec44: jne 0x74ec4c */ if (!fZ) goto L_0074ec4c;
L_0074ec46:; BB(0x0074ec46);
    /* 0074ec46: mov eax, 0xffff6d46 */ r_eax = 0xffff6d46u;
    /* 0074ec4b: ret  */ FN_RET(0x0074ec28); r_esp += 4; return;
L_0074ec4c:; BB(0x0074ec4c);
    /* 0074ec4c: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0074ec51: ret  */ FN_RET(0x0074ec28); r_esp += 4; return;
L_0074ec52:; BB(0x0074ec52);
    /* 0074ec52: mov eax, 0xff8affa3 */ r_eax = 0xff8affa3u;
    /* 0074ec57: ret  */ FN_RET(0x0074ec28); r_esp += 4; return;
}

void f_0074ec58(void) /* sub_74EC58 */
{
    FN_ENTER(0x0074ec58);
    /* 0074ec58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074ec59: mov ebp, esp */ r_ebp = r_esp;
    /* 0074ec5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074ec5d: push 0x8f2a40 */ { u32 v = 0x8f2a40u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ec62: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074ec68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074ec69: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074ec70: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074ec73: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074ec76: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0074ec79: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0074ec7c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0074ec7f: mov eax, dword ptr [0xa9abc4] */ r_eax = R32((u32)(0xa9abc4u));
    /* 0074ec84: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ec86: je 0x74ec98 */ if (fZ) goto L_0074ec98;
L_0074ec88:; BB(0x0074ec88);
    /* 0074ec88: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074ec8a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074ec8d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074ec94: mov esp, ebp */ r_esp = r_ebp;
    /* 0074ec96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074ec97: ret  */ FN_RET(0x0074ec58); r_esp += 4; return;
L_0074ec98:; BB(0x0074ec98);
    /* 0074ec98: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ec9a: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0074ec9d: call 0x737f80 */ r_esp -= 4; W32(r_esp, 0x74eca2u); f_00737f80();
    /* 0074eca2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0074eca9: push 0x1cc */ { u32 v = 0x1ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0074ecae: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x74ecb3u); f_005caba4();
    /* 0074ecb3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074ecb6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0074ecb9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ecbb: je 0x74ecf6 */ if (fZ) goto L_0074ecf6;
L_0074ecbd:; BB(0x0074ecbd);
    /* 0074ecbd: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0074ecc4: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074eccb: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074ecce: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074ecd1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074ecd4: call 0x74ecfc */ r_esp -= 4; W32(r_esp, 0x74ecd9u); f_0074ecfc();
    /* 0074ecd9: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074ecdc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_0074ece3:; BB(0x0074ece3);
    /* 0074ece3: mov dword ptr [0xa9abc4], eax */ W32((u32)(0xa9abc4u), r_eax);
    /* 0074ece8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074eceb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074ecf2: mov esp, ebp */ r_esp = r_ebp;
    /* 0074ecf4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074ecf5: ret  */ FN_RET(0x0074ec58); r_esp += 4; return;
L_0074ecf6:; BB(0x0074ecf6);
    /* 0074ecf6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074ecf8: jmp 0x74ece3 */ goto L_0074ece3;
}

void f_0074ecfc(void) /* sub_74ECFC */
{
    FN_ENTER(0x0074ecfc);
    /* 0074ecfc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074ecfd: mov ebp, esp */ r_ebp = r_esp;
    /* 0074ecff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0074ed01: push 0x8f2a5c */ { u32 v = 0x8f2a5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0074ed06: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0074ed0c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074ed0d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0074ed14: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074ed17: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0074ed1a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0074ed1d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0074ed20: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0074ed23: movsx eax, word ptr [ebp + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0xcu));
    /* 0074ed27: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0074ed2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074ed2b: push 0x64 */ { u32 v = 0x64u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ed2d: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074ed30: call 0x736988 */ r_esp -= 4; W32(r_esp, 0x74ed35u); f_00736988();
    /* 0074ed35: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0074ed3c: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074ed3f: mov dword ptr [edx], 0xb42068 */ W32((u32)(r_edx), 0xb42068u);
    /* 0074ed45: mov esi, 8 */ r_esi = 0x8u;
    /* 0074ed4a: mov word ptr [edx + 0x9c], si */ W16((u32)(r_edx+0x9cu), (u16)r_esi);
    /* 0074ed51: push 0x156 */ { u32 v = 0x156u; r_esp -= 4; W32(r_esp, v); }
    /* 0074ed56: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0074ed58: mov byte ptr [edx + 0x9e], al */ W8((u32)(r_edx+0x9eu), (u8)r_eax);
    /* 0074ed5e: mov byte ptr [edx + 0x9f], al */ W8((u32)(r_edx+0x9fu), (u8)r_eax);
    /* 0074ed64: mov dword ptr [edx + 0xa0], eax */ W32((u32)(r_edx+0xa0u), r_eax);
    /* 0074ed6a: mov word ptr [edx + 0xb0], si */ W16((u32)(r_edx+0xb0u), (u16)r_esi);
    /* 0074ed71: mov byte ptr [edx + 0xb2], al */ W8((u32)(r_edx+0xb2u), (u8)r_eax);
    /* 0074ed77: mov byte ptr [edx + 0xb3], al */ W8((u32)(r_edx+0xb3u), (u8)r_eax);
    /* 0074ed7d: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074ed80: mov ecx, dword ptr [0x9f4084] */ r_ecx = R32((u32)(0x9f4084u));
    /* 0074ed86: mov dword ptr [edx + 0xb4], eax */ W32((u32)(r_edx+0xb4u), r_eax);
    /* 0074ed8c: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 0074ed8f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x74ed94u); f_0079317c();
    /* 0074ed94: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074ed95: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074ed98: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074ed99: call 0x737ae4 */ r_esp -= 4; W32(r_esp, 0x74ed9eu); f_00737ae4();
    /* 0074ed9e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074eda1: call 0x737b8c */ r_esp -= 4; W32(r_esp, 0x74eda6u); f_00737b8c();
    /* 0074eda6: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0074eda9: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0074edac: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0074edaf: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 0074edb4: mov word ptr [eax + 0x96], dx */ W16((u32)(r_eax+0x96u), (u16)r_edx);
    /* 0074edbb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074edbd: mov byte ptr [eax + 0x94], cl */ W8((u32)(r_eax+0x94u), (u8)r_ecx);
    /* 0074edc3: mov dword ptr [eax + 0x98], ecx */ W32((u32)(r_eax+0x98u), r_ecx);
    /* 0074edc9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0074edcc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0074edd3: mov esp, ebp */ r_esp = r_ebp;
    /* 0074edd5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074edd6: ret 8 */ FN_RET(0x0074ecfc); r_esp += 12; return;
}

void f_0074eddc(void) /* sub_74EDDC */
{
    FN_ENTER(0x0074eddc);
    /* 0074eddc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074eddd: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074edde: sub esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0074ede4: mov ecx, dword ptr [esp + 0x118] */ r_ecx = R32((u32)(r_esp+0x118u));
    /* 0074edeb: mov ebx, dword ptr [0xa9abc4] */ r_ebx = R32((u32)(0xa9abc4u));
    /* 0074edf1: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074edf3: je 0x74eee6 */ if (fZ) goto L_0074eee6;
L_0074edf9:; BB(0x0074edf9);
    /* 0074edf9: mov eax, dword ptr [ecx + 8] */ r_eax = R32((u32)(r_ecx+0x8u));
    /* 0074edfc: mov dword ptr [ebx + 0x98], eax */ W32((u32)(r_ebx+0x98u), r_eax);
    /* 0074ee02: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0074ee04: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0074ee06: jle 0x74eec4 */ if ((fZ||fS!=fO)) goto L_0074eec4;
L_0074ee0c:; BB(0x0074ee0c);
    /* 0074ee0c: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0074ee10: mov edi, edx */ r_edi = r_edx;
    /* 0074ee12: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0074ee15: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0074ee18: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074ee1a: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0074ee1c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074ee1e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074ee20: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0074ee22: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074ee24: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0074ee26: lea eax, [ecx + eax + 0x10] */ r_eax = (u32)(r_ecx+r_eax+0x10u);
    /* 0074ee2a: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 0074ee2d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074ee2f: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0074ee31: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074ee33: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074ee35: sub esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0074ee37: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074ee39: lea esi, [esi + esi + 0x18] */ r_esi = (u32)(r_esi+r_esi+0x18u);
    /* 0074ee3d: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074ee3f: mov ebp, eax */ r_ebp = r_eax;
L_0074ee41:; BB(0x0074ee41);
    /* 0074ee41: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0074ee44: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ee47: je 0x74ee79 */ if (fZ) goto L_0074ee79;
L_0074ee49:; BB(0x0074ee49);
    /* 0074ee49: cmp eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ee4c: je 0x74ee79 */ if (fZ) goto L_0074ee79;
L_0074ee4e:; BB(0x0074ee4e);
    /* 0074ee4e: cmp eax, 0x30 */ {  u32 a = r_eax; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ee51: jne 0x74ee5e */ if (!fZ) goto L_0074ee5e;
L_0074ee53:; BB(0x0074ee53);
    /* 0074ee53: mov eax, 0xff5eb1ff */ r_eax = 0xff5eb1ffu;
    /* 0074ee58: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0074ee5c: jmp 0x74ee82 */ goto L_0074ee82;
L_0074ee5e:; BB(0x0074ee5e);
    /* 0074ee5e: cmp eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ee61: jne 0x74ee6e */ if (!fZ) goto L_0074ee6e;
L_0074ee63:; BB(0x0074ee63);
    /* 0074ee63: mov eax, 0xffff6d46 */ r_eax = 0xffff6d46u;
    /* 0074ee68: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0074ee6c: jmp 0x74ee82 */ goto L_0074ee82;
L_0074ee6e:; BB(0x0074ee6e);
    /* 0074ee6e: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0074ee73: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 0074ee77: jmp 0x74ee82 */ goto L_0074ee82;
L_0074ee79:; BB(0x0074ee79);
    /* 0074ee79: mov eax, 0xff8affa3 */ r_eax = 0xff8affa3u;
    /* 0074ee7e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_0074ee82:; BB(0x0074ee82);
    /* 0074ee82: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 0074ee86: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074ee87: push dword ptr [ebp - 4] */ { u32 v = R32((u32)(r_ebp+0xfffffffcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0074ee8a: push 0x973b6c */ { u32 v = 0x973b6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0074ee8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074ee90: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x74ee95u); f_00857e29();
    /* 0074ee95: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0074ee98: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0074ee9c: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074ee9f: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0074eea3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074eea5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0074eea6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074eea7: call 0x7374f0 */ r_esp -= 4; W32(r_esp, 0x74eeacu); f_007374f0();
    /* 0074eeac: add ebp, 0x2c */ {  u32 a = r_ebp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0074eeaf: add esi, 0x2c */ {  u32 a = r_esi; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0074eeb2: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0074eeb5: cmp edi, dword ptr [ebx + 0x98] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x98u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0074eebb: jl 0x74ee41 */ if ((fS!=fO)) goto L_0074ee41;
L_0074eebd:; BB(0x0074eebd);
    /* 0074eebd: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0074eec1: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_0074eec4:; BB(0x0074eec4);
    /* 0074eec4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074eec6: call 0x737cdc */ r_esp -= 4; W32(r_esp, 0x74eecbu); f_00737cdc();
    /* 0074eecb: movzx eax, byte ptr [ebx + 0x94] */ r_eax = (u32)R8((u32)(r_ebx+0x94u));
    /* 0074eed2: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0074eed7: mov byte ptr [ebx + 0x94], al */ W8((u32)(r_ebx+0x94u), (u8)r_eax);
    /* 0074eedd: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074eee3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074eee4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074eee5: ret  */ FN_RET(0x0074eddc); r_esp += 4; return;
L_0074eee6:; BB(0x0074eee6);
    /* 0074eee6: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0074eeec: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074eeed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074eeee: ret  */ FN_RET(0x0074eddc); r_esp += 4; return;
}

void f_0074eef0(void) /* sub_74EEF0 */
{
    FN_ENTER(0x0074eef0);
    /* 0074eef0: mov ecx, dword ptr [0xa9abc4] */ r_ecx = R32((u32)(0xa9abc4u));
    /* 0074eef6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074eef8: je 0x74ef09 */ if (fZ) goto L_0074ef09;
L_0074eefa:; BB(0x0074eefa);
    /* 0074eefa: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0074eefe: call 0x74ef0c */ r_esp -= 4; W32(r_esp, 0x74ef03u); f_0074ef0c();
    /* 0074ef03: mov eax, 1 */ r_eax = 0x1u;
    /* 0074ef08: ret  */ FN_RET(0x0074eef0); r_esp += 4; return;
L_0074ef09:; BB(0x0074ef09);
    /* 0074ef09: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074ef0b: ret  */ FN_RET(0x0074eef0); r_esp += 4; return;
}

void f_0074ef0c(void) /* sub_74EF0C */
{
    FN_ENTER(0x0074ef0c);
    /* 0074ef0c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074ef0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0074ef0e: mov eax, ecx */ r_eax = r_ecx;
    /* 0074ef10: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 0074ef14: lea edi, [eax + 0x9c] */ r_edi = (u32)(r_eax+0x9cu);
    /* 0074ef1a: mov ecx, 0x130 */ r_ecx = 0x130u;
    /* 0074ef1f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0074ef20: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0074ef23: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0074ef25: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0074ef26: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0074ef29: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0074ef2b: movzx edx, byte ptr [eax + 0x94] */ r_edx = (u32)R8((u32)(r_eax+0x94u));
    /* 0074ef32: or edx, 0xffffff02 */ {  u32 a = r_edx; u32 b = 0xffffff02u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074ef38: mov byte ptr [eax + 0x94], dl */ W8((u32)(r_eax+0x94u), (u8)r_edx);
    /* 0074ef3e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0074ef3f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074ef40: ret 4 */ FN_RET(0x0074ef0c); r_esp += 8; return;
}

void f_0074ef44(void) /* sub_74EF44 */
{
    FN_ENTER(0x0074ef44);
    /* 0074ef44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074ef45: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074ef46: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0074ef48: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074ef4a: call 0x7108f4 */ r_esp -= 4; W32(r_esp, 0x74ef4fu); f_007108f4();
    /* 0074ef4f: mov ebp, eax */ r_ebp = r_eax;
    /* 0074ef51: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074ef52: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074ef54: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x74ef59u); f_00710f80();
    /* 0074ef59: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074ef5a: lea edx, [ebx + 0x24] */ r_edx = (u32)(r_ebx+0x24u);
    /* 0074ef5d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074ef5e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074ef60: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x74ef65u); f_0072a648();
    /* 0074ef65: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074ef66: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074ef68: call 0x73746c */ r_esp -= 4; W32(r_esp, 0x74ef6du); f_0073746c();
    /* 0074ef6d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074ef6e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0074ef70: call 0x74ef98 */ r_esp -= 4; W32(r_esp, 0x74ef75u); f_0074ef98();
    /* 0074ef75: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 0074ef78: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0074ef7a: je 0x74ef82 */ if (fZ) goto L_0074ef82;
L_0074ef7c:; BB(0x0074ef7c);
    /* 0074ef7c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074ef7d: call 0x761390 */ r_esp -= 4; W32(r_esp, 0x74ef82u); f_00761390();
L_0074ef82:; BB(0x0074ef82);
    /* 0074ef82: mov eax, dword ptr [ebx + 0x64] */ r_eax = R32((u32)(r_ebx+0x64u));
    /* 0074ef85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074ef87: je 0x74ef95 */ if (fZ) goto L_0074ef95;
L_0074ef89:; BB(0x0074ef89);
    /* 0074ef89: add ebx, 0x70 */ {  u32 a = r_ebx; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0074ef8c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0074ef8d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0074ef8e: mov ecx, eax */ r_ecx = r_eax;
    /* 0074ef90: call 0x73f694 */ r_esp -= 4; W32(r_esp, 0x74ef95u); f_0073f694();
L_0074ef95:; BB(0x0074ef95);
    /* 0074ef95: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0074ef96: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0074ef97: ret  */ FN_RET(0x0074ef44); r_esp += 4; return;
}

void f_0074ef98(void) /* sub_74EF98 */
{
    FN_ENTER(0x0074ef98);
    /* 0074ef98: movsx eax, word ptr [ecx + 0x96] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x96u));
    /* 0074ef9f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074efa1: jl 0x74efd1 */ if ((fS!=fO)) goto L_0074efd1;
L_0074efa3:; BB(0x0074efa3);
    /* 0074efa3: mov edx, dword ptr [0xa9c4ec] */ r_edx = R32((u32)(0xa9c4ecu));
    /* 0074efa9: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074efac: je 0x74efb1 */ if (fZ) goto L_0074efb1;
L_0074efae:; BB(0x0074efae);
    /* 0074efae: ret 4 */ FN_RET(0x0074ef98); r_esp += 8; return;
L_0074efb1:; BB(0x0074efb1);
    /* 0074efb1: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 0074efb4: mov edx, dword ptr [edx + eax*4] */ r_edx = R32((u32)(r_edx+r_eax*4));
    /* 0074efb7: movzx eax, word ptr [edx + 4] */ r_eax = (u32)R16((u32)(r_edx+0x4u));
    /* 0074efbb: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0074efbd: jne 0x74efc2 */ if (!fZ) goto L_0074efc2;
L_0074efbf:; BB(0x0074efbf);
    /* 0074efbf: ret 4 */ FN_RET(0x0074ef98); r_esp += 8; return;
L_0074efc2:; BB(0x0074efc2);
    /* 0074efc2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0074efc4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0074efc5: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0074efc9: call 0x7120ec */ r_esp -= 4; W32(r_esp, 0x74efceu); f_007120ec();
    /* 0074efce: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_0074efd1:; BB(0x0074efd1);
    /* 0074efd1: ret 4 */ FN_RET(0x0074ef98); r_esp += 8; return;
}

void f_0074efd4(void) /* sub_74EFD4 */
{
    FN_ENTER(0x0074efd4);
    /* 0074efd4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0074efd5: mov edi, ecx */ r_edi = r_ecx;
    /* 0074efd7: mov ecx, edi */ r_ecx = r_edi;
    /* 0074efd9: call 0x737d70 */ r_esp -= 4; W32(r_esp, 0x74efdeu); f_00737d70();
    /* 0074efde: mov ecx, edi */ r_ecx = r_edi;
    /* 0074efe0: call 0x737d1c */ r_esp -= 4; W32(r_esp, 0x74efe5u); f_00737d1c();
    /* 0074efe5: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0074efeb: call 0x7f65f4 */ r_esp -= 4; W32(r_esp, 0x74eff0u); f_007f65f4();
    /* 0074eff0: mov ecx, edi */ r_ecx = r_edi;
    /* 0074eff2: call 0x737c94 */ r_esp -= 4; W32(r_esp, 0x74eff7u); f_00737c94();
    /* 0074eff7: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 0074effc: mov word ptr [edi + 0x96], ax */ W16((u32)(r_edi+0x96u), (u16)r_eax);
    /* 0074f003: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0074f004: ret  */ FN_RET(0x0074efd4); r_esp += 4; return;
}

