#include "protos.h"

void f_005dd0d8(void) /* sub_5DD0D8 */
{
    FN_ENTER(0x005dd0d8);
    /* 005dd0d8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd0d9: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005dd0db: lea ecx, [ebp + 0xb4] */ r_ecx = (u32)(r_ebp+0xb4u);
    /* 005dd0e1: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5dd0e6u); f_0082d838();
    /* 005dd0e6: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 005dd0e9: movsx eax, word ptr [edx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+0x32cu));
    /* 005dd0f0: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd0f3: jne 0x5dd107 */ if (!fZ) goto L_005dd107;
L_005dd0f5:; BB(0x005dd0f5);
    /* 005dd0f5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005dd0f7: call 0x5dcf80 */ r_esp -= 4; W32(r_esp, 0x5dd0fcu); f_005dcf80();
    /* 005dd0fc: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005dd0fe: mov edx, eax */ r_edx = r_eax;
    /* 005dd100: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5dd105u); f_0082d8bc();
    /* 005dd105: jmp 0x5dd111 */ goto L_005dd111;
L_005dd107:; BB(0x005dd107);
    /* 005dd107: mov edx, dword ptr [edx + 0x60] */ r_edx = R32((u32)(r_edx+0x60u));
    /* 005dd10a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005dd10c: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5dd111u); f_0082d8bc();
L_005dd111:; BB(0x005dd111);
    /* 005dd111: lea ecx, [ebp + 0xc0] */ r_ecx = (u32)(r_ebp+0xc0u);
    /* 005dd117: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x5dd11cu); f_0082d838();
    /* 005dd11c: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 005dd11f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd121: je 0x5dd13e */ if (fZ) goto L_005dd13e;
L_005dd123:; BB(0x005dd123);
    /* 005dd123: mov edx, dword ptr [ecx + 0x1c] */ r_edx = R32((u32)(r_ecx+0x1cu));
    /* 005dd126: add edx, dword ptr [ebp + 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x34u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005dd129: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 005dd12c: mov ecx, dword ptr [ecx + 0x24] */ r_ecx = R32((u32)(r_ecx+0x24u));
    /* 005dd12f: add eax, dword ptr [ebp + 0x38] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x38u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dd132: add ecx, dword ptr [ebp + 0x3c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x3cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dd135: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd136: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd137: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005dd139: call 0x82df5c */ r_esp -= 4; W32(r_esp, 0x5dd13eu); f_0082df5c();
L_005dd13e:; BB(0x005dd13e);
    /* 005dd13e: mov eax, dword ptr [ebp + 0xdc] */ r_eax = R32((u32)(r_ebp+0xdcu));
    /* 005dd144: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd145: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd146: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005dd148: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd149: call 0x82fa0c */ r_esp -= 4; W32(r_esp, 0x5dd14eu); f_0082fa0c();
    /* 005dd14e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd14f: ret  */ FN_RET(0x005dd0d8); r_esp += 4; return;
}

void f_005dd150(void) /* sub_5DD150 */
{
    FN_ENTER(0x005dd150);
    /* 005dd150: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005dd151: mov edi, ecx */ r_edi = r_ecx;
    /* 005dd153: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x5dd158u); f_007a9044();
    /* 005dd158: mov eax, dword ptr [edi + 0x24] */ r_eax = R32((u32)(r_edi+0x24u));
    /* 005dd15b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd15d: je 0x5dd1ec */ if (fZ) goto L_005dd1ec;
L_005dd163:; BB(0x005dd163);
    /* 005dd163: push dword ptr [edi + 0x2c] */ { u32 v = R32((u32)(r_edi+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005dd166: mov dword ptr [0xa8daf0], edi */ W32((u32)(0xa8daf0u), r_edi);
    /* 005dd16c: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x5dd171u); f_0081a9b8();
    /* 005dd171: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dd172: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x5dd177u); f_0082d7b0();
    /* 005dd177: mov ecx, edi */ r_ecx = r_edi;
    /* 005dd179: call 0x5dd0d8 */ r_esp -= 4; W32(r_esp, 0x5dd17eu); f_005dd0d8();
    /* 005dd17e: mov edx, dword ptr [edi + 0x28] */ r_edx = R32((u32)(r_edi+0x28u));
    /* 005dd181: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dd183: mov dword ptr [0xa8daec], eax */ W32((u32)(0xa8daecu), r_eax);
    /* 005dd188: mov dword ptr [edi + 0x6c], eax */ W32((u32)(r_edi+0x6cu), r_eax);
    /* 005dd18b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd18d: je 0x5dd1f3 */ if (fZ) goto L_005dd1f3;
L_005dd18f:; BB(0x005dd18f);
    /* 005dd18f: mov ecx, 0x5dc388 */ r_ecx = 0x5dc388u;
    /* 005dd194: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5dd199u); f_0082fac4();
    /* 005dd199: call 0x82fa9c */ r_esp -= 4; W32(r_esp, 0x5dd19eu); f_0082fa9c();
    /* 005dd19e: push dword ptr [edi + 0x8c] */ { u32 v = R32((u32)(r_edi+0x8cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005dd1a4: push dword ptr [edi + 0x28] */ { u32 v = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005dd1a7: push dword ptr [edi + 0x24] */ { u32 v = R32((u32)(r_edi+0x24u)); r_esp -= 4; W32(r_esp, v); }
    /* 005dd1aa: call 0x83046c */ r_esp -= 4; W32(r_esp, 0x5dd1afu); f_0083046c();
    /* 005dd1af: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dd1b2: call 0x82faac */ r_esp -= 4; W32(r_esp, 0x5dd1b7u); f_0082faac();
    /* 005dd1b7: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005dd1b9: call 0x82fac4 */ r_esp -= 4; W32(r_esp, 0x5dd1beu); f_0082fac4();
L_005dd1be:; BB(0x005dd1be);
    /* 005dd1be: mov dword ptr [0xa8daec], 0 */ W32((u32)(0xa8daecu), 0x0u);
    /* 005dd1c8: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5dd1cdu); f_0082da80();
    /* 005dd1cd: mov eax, dword ptr [edi + 0x64] */ r_eax = R32((u32)(r_edi+0x64u));
    /* 005dd1d0: mov dword ptr [0xa8daf0], 0 */ W32((u32)(0xa8daf0u), 0x0u);
    /* 005dd1da: test al, 0x20 */ {  u32 a = (u8)r_eax; u32 b = 0x20u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005dd1dc: je 0x5dd1ec */ if (fZ) goto L_005dd1ec;
L_005dd1de:; BB(0x005dd1de);
    /* 005dd1de: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x5dd1e3u); f_0082dab0();
    /* 005dd1e3: mov eax, dword ptr [edi + 0x64] */ r_eax = R32((u32)(r_edi+0x64u));
    /* 005dd1e6: and eax, 0xffffffdf */ {  u32 a = r_eax; u32 b = 0xffffffdfu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005dd1e9: mov dword ptr [edi + 0x64], eax */ W32((u32)(r_edi+0x64u), r_eax);
L_005dd1ec:; BB(0x005dd1ec);
    /* 005dd1ec: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x5dd1f1u); f_007a9044();
    /* 005dd1f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dd1f2: ret  */ FN_RET(0x005dd150); r_esp += 4; return;
L_005dd1f3:; BB(0x005dd1f3);
    /* 005dd1f3: mov ecx, dword ptr [edi + 0x24] */ r_ecx = R32((u32)(r_edi+0x24u));
    /* 005dd1f6: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x5dd1fbu); f_00831758();
    /* 005dd1fb: jmp 0x5dd1be */ goto L_005dd1be;
}

void f_005dd200(void) /* sub_5DD200 */
{
    FN_ENTER(0x005dd200);
    /* 005dd200: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005dd201: mov edi, ecx */ r_edi = r_ecx;
    /* 005dd203: mov ecx, edi */ r_ecx = r_edi;
    /* 005dd205: call 0x5dc750 */ r_esp -= 4; W32(r_esp, 0x5dd20au); f_005dc750();
    /* 005dd20a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005dd20e: mov dword ptr [edi + 0x68], eax */ W32((u32)(r_edi+0x68u), r_eax);
    /* 005dd211: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 005dd214: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005dd216: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005dd218: lea edx, [eax + edx*8] */ r_edx = (u32)(r_eax+r_edx*8);
    /* 005dd21b: mov eax, dword ptr [0xa8da34] */ r_eax = R32((u32)(0xa8da34u));
    /* 005dd220: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 005dd223: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dd225: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005dd227: mov dword ptr [edi + 0x30], ecx */ W32((u32)(r_edi+0x30u), r_ecx);
    /* 005dd22a: mov ecx, dword ptr [edi + 0x20] */ r_ecx = R32((u32)(r_edi+0x20u));
    /* 005dd22d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dd22f: je 0x5dd271 */ if (fZ) goto L_005dd271;
L_005dd231:; BB(0x005dd231);
    /* 005dd231: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 005dd234: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005dd237: jne 0x5dd261 */ if (!fZ) goto L_005dd261;
L_005dd239:; BB(0x005dd239);
    /* 005dd239: mov eax, dword ptr [ecx + 0x300] */ r_eax = R32((u32)(r_ecx+0x300u));
    /* 005dd23f: mov dword ptr [edi + 0xb4], eax */ W32((u32)(r_edi+0xb4u), r_eax);
    /* 005dd245: mov edx, dword ptr [ecx + 0x304] */ r_edx = R32((u32)(r_ecx+0x304u));
    /* 005dd24b: mov dword ptr [edi + 0xb8], edx */ W32((u32)(r_edi+0xb8u), r_edx);
    /* 005dd251: mov eax, dword ptr [ecx + 0x308] */ r_eax = R32((u32)(r_ecx+0x308u));
    /* 005dd257: mov dword ptr [edi + 0xbc], eax */ W32((u32)(r_edi+0xbcu), r_eax);
    /* 005dd25d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dd25e: ret 4 */ FN_RET(0x005dd200); r_esp += 8; return;
L_005dd261:; BB(0x005dd261);
    /* 005dd261: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005dd263: add edi, 0xb4 */ {  u32 a = r_edi; u32 b = 0xb4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005dd269: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005dd26a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd26b: call dword ptr [eax + 0x10c] */ { u32 t = R32((u32)(r_eax+0x10cu)); r_esp -= 4; W32(r_esp, 0x5dd271u); call_ind(t); }
L_005dd271:; BB(0x005dd271);
    /* 005dd271: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dd272: ret 4 */ FN_RET(0x005dd200); r_esp += 8; return;
}

void f_005dd278(void) /* sub_5DD278 */
{
    FN_ENTER(0x005dd278);
    /* 005dd278: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005dd279: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005dd27a: mov esi, ecx */ r_esi = r_ecx;
    /* 005dd27c: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 005dd280: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005dd281: push dword ptr [esi + 0x68] */ { u32 v = R32((u32)(r_esi+0x68u)); r_esp -= 4; W32(r_esp, v); }
    /* 005dd284: mov eax, dword ptr [esi + 0x64] */ r_eax = R32((u32)(r_esi+0x64u));
    /* 005dd287: or eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005dd28a: mov dword ptr [esi + 0x64], eax */ W32((u32)(r_esi+0x64u), r_eax);
    /* 005dd28d: mov ecx, esi */ r_ecx = r_esi;
    /* 005dd28f: call 0x5dd2b4 */ r_esp -= 4; W32(r_esp, 0x5dd294u); f_005dd2b4();
    /* 005dd294: mov dword ptr [esi + 0x68], edi */ W32((u32)(r_esi+0x68u), r_edi);
    /* 005dd297: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 005dd29a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dd29c: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 005dd29e: lea edx, [edi + eax*8] */ r_edx = (u32)(r_edi+r_eax*8);
    /* 005dd2a1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005dd2a3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005dd2a5: add edx, dword ptr [0xa8da34] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa8da34u)); u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dd2ab: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 005dd2ae: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dd2af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dd2b0: ret 4 */ FN_RET(0x005dd278); r_esp += 8; return;
}

void f_005dd2b4(void) /* sub_5DD2B4 */
{
    FN_ENTER(0x005dd2b4);
    /* 005dd2b4: lea edx, [ecx + 0x34] */ r_edx = (u32)(r_ecx+0x34u);
    /* 005dd2b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dd2b9: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005dd2bb: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005dd2be: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005dd2c1: lea edx, [ecx + 0x58] */ r_edx = (u32)(r_ecx+0x58u);
    /* 005dd2c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dd2c6: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005dd2c8: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005dd2cb: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 005dd2ce: mov dword ptr [ecx + 0xb0], 0 */ W32((u32)(r_ecx+0xb0u), 0x0u);
    /* 005dd2d8: mov dword ptr [ecx + 0xac], 0 */ W32((u32)(r_ecx+0xacu), 0x0u);
    /* 005dd2e2: mov dword ptr [ecx + 0xa8], 0 */ W32((u32)(r_ecx+0xa8u), 0x0u);
    /* 005dd2ec: ret 8 */ FN_RET(0x005dd2b4); r_esp += 12; return;
}

void f_005dd2f0(void) /* sub_5DD2F0 */
{
    FN_ENTER(0x005dd2f0);
    /* 005dd2f0: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 005dd2f4: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 005dd2f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dd2f9: je 0x5dd32d */ if (fZ) goto L_005dd32d;
L_005dd2fb:; BB(0x005dd2fb);
    /* 005dd2fb: fcom dword ptr [0x92cc0c] */ fx_compare(ST(0), R_F32((u32)(0x92cc0cu))); 
    /* 005dd301: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005dd303: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005dd304: jb 0x5dd311 */ if (fC) goto L_005dd311;
L_005dd306:; BB(0x005dd306);
    /* 005dd306: fcom dword ptr [ecx + 0x98] */ fx_compare(ST(0), R_F32((u32)(r_ecx+0x98u))); 
    /* 005dd30c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005dd30e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005dd30f: jbe 0x5dd31e */ if ((fC||fZ)) goto L_005dd31e;
L_005dd311:; BB(0x005dd311);
    /* 005dd311: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005dd313: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dd315: mov dword ptr [ecx + 0x90], eax */ W32((u32)(r_ecx+0x90u), r_eax);
    /* 005dd31b: ret 4 */ FN_RET(0x005dd2f0); r_esp += 8; return;
L_005dd31e:; BB(0x005dd31e);
    /* 005dd31e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005dd320: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005dd324: mov dword ptr [ecx + 0x90], eax */ W32((u32)(r_ecx+0x90u), r_eax);
    /* 005dd32a: ret 4 */ FN_RET(0x005dd2f0); r_esp += 8; return;
L_005dd32d:; BB(0x005dd32d);
    /* 005dd32d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005dd32f: ret 4 */ FN_RET(0x005dd2f0); r_esp += 8; return;
}

void f_005dd334(void) /* sub_5DD334 */
{
    FN_ENTER(0x005dd334);
    /* 005dd334: mov edx, dword ptr [ecx + 0x64] */ r_edx = R32((u32)(r_ecx+0x64u));
    /* 005dd337: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dd339: mov dword ptr [ecx + 0x24], eax */ W32((u32)(r_ecx+0x24u), r_eax);
    /* 005dd33c: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 005dd33f: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 005dd342: or edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dd348: mov dword ptr [ecx + 0x64], edx */ W32((u32)(r_ecx+0x64u), r_edx);
    /* 005dd34b: ret  */ FN_RET(0x005dd334); r_esp += 4; return;
}

void f_005dd34c(void) /* sub_5DD34C */
{
    FN_ENTER(0x005dd34c);
    /* 005dd34c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005dd350: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dd352: je 0x5dd35d */ if (fZ) goto L_005dd35d;
L_005dd354:; BB(0x005dd354);
    /* 005dd354: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 005dd357: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dd35a: mov dword ptr [edx + 0x64], eax */ W32((u32)(r_edx+0x64u), r_eax);
L_005dd35d:; BB(0x005dd35d);
    /* 005dd35d: ret  */ FN_RET(0x005dd34c); r_esp += 4; return;
}

void f_005dd360(void) /* sub_5DD360 */
{
    FN_ENTER(0x005dd360);
    /* 005dd360: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd361: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd363: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dd365: push 0x8daa6c */ { u32 v = 0x8daa6cu; r_esp -= 4; W32(r_esp, v); }
    /* 005dd36a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dd370: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd371: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005dd378: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dd37b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005dd37e: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005dd381: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005dd384: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005dd387: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005dd38a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005dd38d: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005dd390: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005dd393: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5dd398u); f_008193cc();
    /* 005dd398: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dd39f: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005dd3a2: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005dd3a5: mov dword ptr [ebx], 0xb0d9b0 */ W32((u32)(r_ebx), 0xb0d9b0u);
    /* 005dd3ab: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd3ad: mov eax, dword ptr [0x9c27c4] */ r_eax = R32((u32)(0x9c27c4u));
    /* 005dd3b2: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 005dd3b5: je 0x5dd400 */ if (fZ) goto L_005dd400;
L_005dd3b7:; BB(0x005dd3b7);
    /* 005dd3b7: mov eax, edx */ r_eax = r_edx;
    /* 005dd3b9: mov dword ptr [ebx + 0x1c], 0 */ W32((u32)(r_ebx+0x1cu), 0x0u);
    /* 005dd3c0: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 005dd3c3: add eax, 0xf0 */ {  u32 a = r_eax; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dd3c8: push 0x9d */ { u32 v = 0x9du; r_esp -= 4; W32(r_esp, v); }
    /* 005dd3cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd3ce: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x5dd3d3u); f_00509590();
    /* 005dd3d3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dd3d6: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005dd3d9: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 005dd3dc: mov ecx, dword ptr [edx + 0x24] */ r_ecx = R32((u32)(r_edx+0x24u));
    /* 005dd3df: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 005dd3e2: mov eax, dword ptr [ecx + 0x64] */ r_eax = R32((u32)(r_ecx+0x64u));
    /* 005dd3e5: or eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dd3e8: mov dword ptr [ecx + 0x64], eax */ W32((u32)(r_ecx+0x64u), r_eax);
L_005dd3eb:; BB(0x005dd3eb);
    /* 005dd3eb: mov eax, ebx */ r_eax = r_ebx;
    /* 005dd3ed: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 005dd3f0: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd3f3: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dd3fa: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd3fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd3fd: ret 8 */ FN_RET(0x005dd360); r_esp += 12; return;
L_005dd400:; BB(0x005dd400);
    /* 005dd400: movzx ecx, word ptr [ebx + 8] */ r_ecx = (u32)R16((u32)(r_ebx+0x8u));
    /* 005dd404: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005dd406: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 005dd409: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 005dd40c: or ecx, 0xffff0001 */ {  u32 a = r_ecx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dd412: mov word ptr [ebx + 8], cx */ W16((u32)(r_ebx+0x8u), (u16)r_ecx);
    /* 005dd416: jmp 0x5dd3eb */ goto L_005dd3eb;
}

void f_005dd418(void) /* sub_5DD418 */
{
    FN_ENTER(0x005dd418);
    /* 005dd418: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd419: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dd41c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005dd41e: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
    /* 005dd421: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd423: je 0x5dd435 */ if (fZ) goto L_005dd435;
L_005dd425:; BB(0x005dd425);
    /* 005dd425: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x5dd42au); f_008173b4();
    /* 005dd42a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd42c: jne 0x5dd435 */ if (!fZ) goto L_005dd435;
L_005dd42e:; BB(0x005dd42e);
    /* 005dd42e: mov dword ptr [ebx + 0x20], 0 */ W32((u32)(r_ebx+0x20u), 0x0u);
L_005dd435:; BB(0x005dd435);
    /* 005dd435: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 005dd438: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd43a: je 0x5dd44c */ if (fZ) goto L_005dd44c;
L_005dd43c:; BB(0x005dd43c);
    /* 005dd43c: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x5dd441u); f_008173b4();
    /* 005dd441: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd443: jne 0x5dd44c */ if (!fZ) goto L_005dd44c;
L_005dd445:; BB(0x005dd445);
    /* 005dd445: mov dword ptr [ebx + 0x24], 0 */ W32((u32)(r_ebx+0x24u), 0x0u);
L_005dd44c:; BB(0x005dd44c);
    /* 005dd44c: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 005dd44f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd451: je 0x5dd4af */ if (fZ) goto L_005dd4af;
L_005dd453:; BB(0x005dd453);
    /* 005dd453: mov ecx, dword ptr [ebx + 0x24] */ r_ecx = R32((u32)(r_ebx+0x24u));
    /* 005dd456: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd458: je 0x5dd4af */ if (fZ) goto L_005dd4af;
L_005dd45a:; BB(0x005dd45a);
    /* 005dd45a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005dd45d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd45e: call 0x5dd4d4 */ r_esp -= 4; W32(r_esp, 0x5dd463u); f_005dd4d4();
    /* 005dd463: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd465: je 0x5dd489 */ if (fZ) goto L_005dd489;
L_005dd467:; BB(0x005dd467);
    /* 005dd467: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 005dd46a: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd46d: je 0x5dd48e */ if (fZ) goto L_005dd48e;
L_005dd46f:; BB(0x005dd46f);
    /* 005dd46f: mov ecx, dword ptr [ebx + 0x20] */ r_ecx = R32((u32)(r_ebx+0x20u));
L_005dd472:; BB(0x005dd472);
    /* 005dd472: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 005dd475: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd476: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x5dd47bu); f_00508db8();
    /* 005dd47b: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 005dd47e: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd481: je 0x5dd4c1 */ if (fZ) goto L_005dd4c1;
L_005dd483:; BB(0x005dd483);
    /* 005dd483: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005dd486: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
L_005dd489:; BB(0x005dd489);
    /* 005dd489: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dd48c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dd48d: ret  */ FN_RET(0x005dd418); r_esp += 4; return;
L_005dd48e:; BB(0x005dd48e);
    /* 005dd48e: push dword ptr [ebx + 0x20] */ { u32 v = R32((u32)(r_ebx+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005dd491: call 0x5cdcc0 */ r_esp -= 4; W32(r_esp, 0x5dd496u); f_005cdcc0();
    /* 005dd496: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 005dd49a: push 0x9e */ { u32 v = 0x9eu; r_esp -= 4; W32(r_esp, v); }
    /* 005dd49f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd4a0: call 0x509590 */ r_esp -= 4; W32(r_esp, 0x5dd4a5u); f_00509590();
    /* 005dd4a5: mov ecx, eax */ r_ecx = r_eax;
    /* 005dd4a7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dd4aa: mov dword ptr [ebx + 0x20], ecx */ W32((u32)(r_ebx+0x20u), r_ecx);
    /* 005dd4ad: jmp 0x5dd472 */ goto L_005dd472;
L_005dd4af:; BB(0x005dd4af);
    /* 005dd4af: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 005dd4b3: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005dd4b8: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 005dd4bc: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dd4bf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dd4c0: ret  */ FN_RET(0x005dd418); r_esp += 4; return;
L_005dd4c1:; BB(0x005dd4c1);
    /* 005dd4c1: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 005dd4c5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005dd4ca: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 005dd4ce: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dd4d1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dd4d2: ret  */ FN_RET(0x005dd418); r_esp += 4; return;
}

void f_005dd4d4(void) /* sub_5DD4D4 */
{
    FN_ENTER(0x005dd4d4);
    /* 005dd4d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005dd4d5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005dd4d6: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dd4d9: mov edi, ecx */ r_edi = r_ecx;
    /* 005dd4db: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 005dd4df: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 005dd4e2: call 0x5db444 */ r_esp -= 4; W32(r_esp, 0x5dd4e7u); f_005db444();
    /* 005dd4e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd4e9: jne 0x5dd536 */ if (!fZ) goto L_005dd536;
L_005dd4eb:; BB(0x005dd4eb);
    /* 005dd4eb: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd4ed: je 0x5dd536 */ if (fZ) goto L_005dd536;
L_005dd4ef:; BB(0x005dd4ef);
    /* 005dd4ef: mov ecx, 0xa21740 */ r_ecx = 0xa21740u;
    /* 005dd4f4: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x5dd4f9u); f_0082d990();
    /* 005dd4f9: mov ecx, edi */ r_ecx = r_edi;
    /* 005dd4fb: call 0x5dd0d8 */ r_esp -= 4; W32(r_esp, 0x5dd500u); f_005dd0d8();
    /* 005dd500: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 005dd507: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005dd50a: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 005dd512: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 005dd51a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005dd51b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd51c: call 0x835c3c */ r_esp -= 4; W32(r_esp, 0x5dd521u); f_00835c3c();
    /* 005dd521: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005dd524: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x5dd529u); f_0082da80();
    /* 005dd529: mov eax, 1 */ r_eax = 0x1u;
    /* 005dd52e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dd531: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dd532: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dd533: ret 4 */ FN_RET(0x005dd4d4); r_esp += 8; return;
L_005dd536:; BB(0x005dd536);
    /* 005dd536: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005dd538: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dd53b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dd53c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dd53d: ret 4 */ FN_RET(0x005dd4d4); r_esp += 8; return;
}

void f_005dd540(void) /* sub_5DD540 */
{
    FN_ENTER(0x005dd540);
    /* 005dd540: mov dword ptr [0xa8dae0], 0x3f800000 */ W32((u32)(0xa8dae0u), 0x3f800000u);
    /* 005dd54a: mov dword ptr [0xa8dae4], 0x41000000 */ W32((u32)(0xa8dae4u), 0x41000000u);
    /* 005dd554: mov dword ptr [0xa8dae8], 0x3fc00000 */ W32((u32)(0xa8dae8u), 0x3fc00000u);
    /* 005dd55e: ret  */ FN_RET(0x005dd540); r_esp += 4; return;
}

void f_005dd560(void) /* sub_5DD560 */
{
    FN_ENTER(0x005dd560);
    /* 005dd560: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd561: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005dd563: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005dd565: call 0x5dd584 */ r_esp -= 4; W32(r_esp, 0x5dd56au); f_005dd584();
    /* 005dd56a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005dd56e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dd570: jne 0x5dd576 */ if (!fZ) goto L_005dd576;
L_005dd572:; BB(0x005dd572);
    /* 005dd572: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dd573: ret 4 */ FN_RET(0x005dd560); r_esp += 8; return;
L_005dd576:; BB(0x005dd576);
    /* 005dd576: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd577: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5dd57cu); f_005c2f74();
    /* 005dd57c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dd57d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dd57e: ret 4 */ FN_RET(0x005dd560); r_esp += 8; return;
}

void f_005dd584(void) /* sub_5DD584 */
{
    FN_ENTER(0x005dd584);
    /* 005dd584: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd585: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd587: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dd589: push 0x8daa88 */ { u32 v = 0x8daa88u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd58e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dd594: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd595: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005dd59c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dd59f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005dd5a2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005dd5a5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005dd5a8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005dd5ab: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005dd5ae: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dd5b1: mov dword ptr [ecx], 0xb0da10 */ W32((u32)(r_ecx), 0xb0da10u);
    /* 005dd5b7: mov dword ptr [0xa8dafc], 0 */ W32((u32)(0xa8dafcu), 0x0u);
    /* 005dd5c1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005dd5c8: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5dd5cdu); f_008171e8();
    /* 005dd5cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd5d0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dd5d7: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd5d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd5da: ret  */ FN_RET(0x005dd584); r_esp += 4; return;
}

void f_005dd5dc(void) /* sub_5DD5DC */
{
    FN_ENTER(0x005dd5dc);
    /* 005dd5dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd5dd: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd5df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dd5e1: push 0x8daab0 */ { u32 v = 0x8daab0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd5e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dd5ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd5ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005dd5f4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dd5f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005dd5fa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005dd5fd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005dd600: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005dd603: mov eax, dword ptr [0xa8dafc] */ r_eax = R32((u32)(0xa8dafcu));
    /* 005dd608: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd60a: je 0x5dd651 */ if (fZ) goto L_005dd651;
L_005dd60c:; BB(0x005dd60c);
    /* 005dd60c: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dd60f: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005dd612: jae 0x5dd643 */ if (!fC) goto L_005dd643;
L_005dd614:; BB(0x005dd614);
    /* 005dd614: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dd617: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 005dd619: jne 0x5dd630 */ if (!fZ) goto L_005dd630;
L_005dd61b:; BB(0x005dd61b);
    /* 005dd61b: mov edx, dword ptr [0xa8dafc] */ r_edx = R32((u32)(0xa8dafcu));
    /* 005dd621: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005dd625: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dd62a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005dd62e: jmp 0x5dd643 */ goto L_005dd643;
L_005dd630:; BB(0x005dd630);
    /* 005dd630: mov edx, dword ptr [0xa8dafc] */ r_edx = R32((u32)(0xa8dafcu));
    /* 005dd636: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 005dd639: mov eax, 1 */ r_eax = 0x1u;
    /* 005dd63e: shl eax, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_eax = r;  } }
    /* 005dd640: or dword ptr [edx + 0x1c], eax */ { u32 ad = (u32)(r_edx+0x1cu);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_005dd643:; BB(0x005dd643);
    /* 005dd643: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd646: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dd64d: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd64f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd650: ret  */ FN_RET(0x005dd5dc); r_esp += 4; return;
L_005dd651:; BB(0x005dd651);
    /* 005dd651: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005dd658: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd65a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5dd65fu); f_005caba4();
    /* 005dd65f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dd660: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005dd663: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd665: je 0x5dd60c */ if (fZ) goto L_005dd60c;
L_005dd667:; BB(0x005dd667);
    /* 005dd667: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005dd66e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dd675: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005dd67b: mov ecx, eax */ r_ecx = r_eax;
    /* 005dd67d: call 0x5dd68c */ r_esp -= 4; W32(r_esp, 0x5dd682u); f_005dd68c();
    /* 005dd682: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005dd689: jmp 0x5dd60c */ goto L_005dd60c;
}

void f_005dd68c(void) /* sub_5DD68C */
{
    FN_ENTER(0x005dd68c);
    /* 005dd68c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd68d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005dd68f: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005dd693: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005dd695: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5dd69au); f_008193cc();
    /* 005dd69a: mov dword ptr [ebx], 0xb0da10 */ W32((u32)(r_ebx), 0xb0da10u);
    /* 005dd6a0: mov eax, ebx */ r_eax = r_ebx;
    /* 005dd6a2: mov dword ptr [ebx + 0x1c], 0 */ W32((u32)(r_ebx+0x1cu), 0x0u);
    /* 005dd6a9: mov edx, dword ptr [0x9c27d8] */ r_edx = R32((u32)(0x9c27d8u));
    /* 005dd6af: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 005dd6b2: mov dword ptr [0xa8dafc], ebx */ W32((u32)(0xa8dafcu), r_ebx);
    /* 005dd6b8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dd6b9: ret 4 */ FN_RET(0x005dd68c); r_esp += 8; return;
}

void f_005dd6bc(void) /* sub_5DD6BC */
{
    FN_ENTER(0x005dd6bc);
    /* 005dd6bc: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005dd6c0: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005dd6c4: call 0x782ca4 */ r_esp -= 4; W32(r_esp, 0x5dd6c9u); f_00782ca4();
    /* 005dd6c9: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dd6cc: ret  */ FN_RET(0x005dd6bc); r_esp += 4; return;
}

void f_005dd6d0(void) /* sub_5DD6D0 */
{
    FN_ENTER(0x005dd6d0);
    /* 005dd6d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005dd6d1: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005dd6d5: mov ecx, dword ptr [eax] */ r_ecx = R32((u32)(r_eax));
    /* 005dd6d7: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005dd6db: lea esi, [edx + ecx] */ r_esi = (u32)(r_edx+r_ecx);
    /* 005dd6de: cmp esi, 0x10000 */ {  u32 a = r_esi; u32 b = 0x10000u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005dd6e4: jl 0x5dd6f1 */ if ((fS!=fO)) goto L_005dd6f1;
L_005dd6e6:; BB(0x005dd6e6);
    /* 005dd6e6: lea edx, [edx + ecx - 0x10000] */ r_edx = (u32)(r_edx+r_ecx+0xffff0000u);
    /* 005dd6ed: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 005dd6ef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dd6f0: ret  */ FN_RET(0x005dd6d0); r_esp += 4; return;
L_005dd6f1:; BB(0x005dd6f1);
    /* 005dd6f1: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 005dd6f3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dd6f4: ret  */ FN_RET(0x005dd6d0); r_esp += 4; return;
}

void f_005dd6e0(void)
{
    FN_ENTER(0x005dd6e0);
    /* 005dd6e0: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 005dd6e2: add dword ptr [eax], eax */ { u32 ad = (u32)(r_eax);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005dd6e4: jl 0x5dd6f1 */ if ((fS!=fO)) goto L_005dd6f1;
L_005dd6e6:; BB(0x005dd6e6);
    /* 005dd6e6: lea edx, [edx + ecx - 0x10000] */ r_edx = (u32)(r_edx+r_ecx+0xffff0000u);
    /* 005dd6ed: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 005dd6ef: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dd6f0: ret  */ FN_RET(0x005dd6e0); r_esp += 4; return;
L_005dd6f1:; BB(0x005dd6f1);
    /* 005dd6f1: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 005dd6f3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dd6f4: ret  */ FN_RET(0x005dd6e0); r_esp += 4; return;
}

void f_005dd6f8(void) /* sub_5DD6F8 */
{
    FN_ENTER(0x005dd6f8);
    /* 005dd6f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005dd6f9: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 005dd6fd: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 005dd6ff: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005dd703: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 005dd707: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005dd709: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005dd70b: jle 0x5dd719 */ if ((fZ||fS!=fO)) goto L_005dd719;
L_005dd70d:; BB(0x005dd70d);
    /* 005dd70d: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005dd70f: jg 0x5dd715 */ if ((!fZ&&fS==fO)) goto L_005dd715;
L_005dd711:; BB(0x005dd711);
    /* 005dd711: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 005dd713: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dd714: ret  */ FN_RET(0x005dd6f8); r_esp += 4; return;
L_005dd715:; BB(0x005dd715);
    /* 005dd715: mov dword ptr [edi], ecx */ W32((u32)(r_edi), r_ecx);
    /* 005dd717: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dd718: ret  */ FN_RET(0x005dd6f8); r_esp += 4; return;
L_005dd719:; BB(0x005dd719);
    /* 005dd719: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005dd71b: jl 0x5dd721 */ if ((fS!=fO)) goto L_005dd721;
L_005dd71d:; BB(0x005dd71d);
    /* 005dd71d: mov dword ptr [edi], edx */ W32((u32)(r_edi), r_edx);
    /* 005dd71f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dd720: ret  */ FN_RET(0x005dd6f8); r_esp += 4; return;
L_005dd721:; BB(0x005dd721);
    /* 005dd721: mov dword ptr [edi], ecx */ W32((u32)(r_edi), r_ecx);
    /* 005dd723: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dd724: ret  */ FN_RET(0x005dd6f8); r_esp += 4; return;
}

void f_005dd728(void) /* sub_5DD728 */
{
    FN_ENTER(0x005dd728);
    /* 005dd728: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005dd72c: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 005dd730: fcom dword ptr [0x92cc68] */ fx_compare(ST(0), R_F32((u32)(0x92cc68u))); 
    /* 005dd736: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005dd738: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 005dd73a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005dd73c: fld dword ptr [esp + 0xc] */ FPUSH(R_F32((u32)(r_esp+0xcu)));
    /* 005dd740: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005dd741: jbe 0x5dd756 */ if ((fC||fZ)) goto L_005dd756;
L_005dd743:; BB(0x005dd743);
    /* 005dd743: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005dd745: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005dd747: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005dd748: jae 0x5dd753 */ if (!fC) goto L_005dd753;
L_005dd74a:; BB(0x005dd74a);
    /* 005dd74a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005dd74c: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005dd750: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005dd752: ret  */ FN_RET(0x005dd728); r_esp += 4; return;
L_005dd753:; BB(0x005dd753);
    /* 005dd753: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 005dd755: ret  */ FN_RET(0x005dd728); r_esp += 4; return;
L_005dd756:; BB(0x005dd756);
    /* 005dd756: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005dd758: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005dd75a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005dd75b: jbe 0x5dd766 */ if ((fC||fZ)) goto L_005dd766;
L_005dd75d:; BB(0x005dd75d);
    /* 005dd75d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005dd75f: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005dd763: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 005dd765: ret  */ FN_RET(0x005dd728); r_esp += 4; return;
L_005dd766:; BB(0x005dd766);
    /* 005dd766: fstp dword ptr [edx] */ W_F32((u32)(r_edx), ST(0)); FPOP();
    /* 005dd768: ret  */ FN_RET(0x005dd728); r_esp += 4; return;
}

void f_005dd76c(void) /* sub_5DD76C */
{
    FN_ENTER(0x005dd76c);
    /* 005dd76c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd76d: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd76f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dd771: push 0x8daad8 */ { u32 v = 0x8daad8u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd776: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dd77c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd77d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005dd784: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dd787: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005dd78a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005dd78d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005dd790: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005dd793: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd795: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005dd79c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5dd7a1u); f_005caba4();
    /* 005dd7a1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dd7a2: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005dd7a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd7a7: je 0x5dd7e2 */ if (fZ) goto L_005dd7e2;
L_005dd7a9:; BB(0x005dd7a9);
    /* 005dd7a9: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005dd7b0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dd7b7: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dd7ba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd7bc: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005dd7bf: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005dd7c2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005dd7c5: call 0x506d18 */ r_esp -= 4; W32(r_esp, 0x5dd7cau); f_00506d18();
    /* 005dd7ca: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dd7cd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005dd7d4:; BB(0x005dd7d4);
    /* 005dd7d4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd7d7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dd7de: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd7e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd7e1: ret  */ FN_RET(0x005dd76c); r_esp += 4; return;
L_005dd7e2:; BB(0x005dd7e2);
    /* 005dd7e2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dd7e4: jmp 0x5dd7d4 */ goto L_005dd7d4;
}

void f_005dd7e8(void) /* sub_5DD7E8 */
{
    FN_ENTER(0x005dd7e8);
    /* 005dd7e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd7e9: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd7eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dd7ed: push 0x8dab00 */ { u32 v = 0x8dab00u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd7f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dd7f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd7f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005dd800: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dd803: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005dd806: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005dd809: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005dd80c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005dd80f: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd811: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005dd818: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5dd81du); f_005caba4();
    /* 005dd81d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dd81e: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005dd821: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd823: je 0x5dd85e */ if (fZ) goto L_005dd85e;
L_005dd825:; BB(0x005dd825);
    /* 005dd825: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005dd82c: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dd833: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dd836: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd838: push dword ptr [ebp + 0x10] */ { u32 v = R32((u32)(r_ebp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005dd83b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005dd83e: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005dd841: call 0x506d18 */ r_esp -= 4; W32(r_esp, 0x5dd846u); f_00506d18();
    /* 005dd846: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dd849: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005dd850:; BB(0x005dd850);
    /* 005dd850: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd853: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dd85a: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd85c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd85d: ret  */ FN_RET(0x005dd7e8); r_esp += 4; return;
L_005dd85e:; BB(0x005dd85e);
    /* 005dd85e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dd860: jmp 0x5dd850 */ goto L_005dd850;
}

void f_005dd864(void) /* sub_5DD864 */
{
    FN_ENTER(0x005dd864);
    /* 005dd864: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd865: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005dd867: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005dd869: call 0x5dd888 */ r_esp -= 4; W32(r_esp, 0x5dd86eu); f_005dd888();
    /* 005dd86e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005dd872: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dd874: jne 0x5dd87a */ if (!fZ) goto L_005dd87a;
L_005dd876:; BB(0x005dd876);
    /* 005dd876: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dd877: ret 4 */ FN_RET(0x005dd864); r_esp += 8; return;
L_005dd87a:; BB(0x005dd87a);
    /* 005dd87a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dd87b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5dd880u); f_005c2f74();
    /* 005dd880: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dd881: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dd882: ret 4 */ FN_RET(0x005dd864); r_esp += 8; return;
}

void f_005dd888(void) /* sub_5DD888 */
{
    FN_ENTER(0x005dd888);
    /* 005dd888: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd889: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd88b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dd88d: push 0x8dab1c */ { u32 v = 0x8dab1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005dd892: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dd898: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd899: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005dd8a0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dd8a3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005dd8a6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005dd8a9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005dd8ac: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005dd8af: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005dd8b2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dd8b5: mov dword ptr [ecx], 0xb0dac0 */ W32((u32)(r_ecx), 0xb0dac0u);
    /* 005dd8bb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005dd8c2: call 0x5c2e50 */ r_esp -= 4; W32(r_esp, 0x5dd8c7u); f_005c2e50();
    /* 005dd8c7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd8ca: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dd8d1: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd8d3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd8d4: ret  */ FN_RET(0x005dd888); r_esp += 4; return;
}

void f_005dd8d8(void) /* sub_5DD8D8 */
{
    FN_ENTER(0x005dd8d8);
    /* 005dd8d8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 005dd8dc: mov eax, dword ptr [ecx + 0x100] */ r_eax = R32((u32)(r_ecx+0x100u));
    /* 005dd8e2: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 005dd8e5: ret 4 */ FN_RET(0x005dd8d8); r_esp += 8; return;
}

void f_005dd8e8(void) /* sub_5DD8E8 */
{
    FN_ENTER(0x005dd8e8);
    /* 005dd8e8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd8e9: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd8eb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dd8ed: push 0x8dab44 */ { u32 v = 0x8dab44u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd8f2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dd8f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd8f9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005dd900: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dd903: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005dd906: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005dd909: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005dd90c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005dd90f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dd912: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd914: je 0x5dd96b */ if (fZ) goto L_005dd96b;
L_005dd916:; BB(0x005dd916);
    /* 005dd916: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005dd91d: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd922: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5dd927u); f_005caba4();
    /* 005dd927: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dd928: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005dd92b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dd92d: je 0x5dd967 */ if (fZ) goto L_005dd967;
L_005dd92f:; BB(0x005dd92f);
    /* 005dd92f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005dd936: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dd93d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dd940: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dd943: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd944: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005dd94a: call 0x5dd97c */ r_esp -= 4; W32(r_esp, 0x5dd94fu); f_005dd97c();
    /* 005dd94f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dd952: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005dd959:; BB(0x005dd959);
    /* 005dd959: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd95c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dd963: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd965: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd966: ret  */ FN_RET(0x005dd8e8); r_esp += 4; return;
L_005dd967:; BB(0x005dd967);
    /* 005dd967: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dd969: jmp 0x5dd959 */ goto L_005dd959;
L_005dd96b:; BB(0x005dd96b);
    /* 005dd96b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dd96d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dd970: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dd977: mov esp, ebp */ r_esp = r_ebp;
    /* 005dd979: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dd97a: ret  */ FN_RET(0x005dd8e8); r_esp += 4; return;
}

void f_005dd97c(void) /* sub_5DD97C */
{
    FN_ENTER(0x005dd97c);
    /* 005dd97c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005dd97d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005dd97e: mov edi, ecx */ r_edi = r_ecx;
    /* 005dd980: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 005dd984: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005dd985: mov ecx, edi */ r_ecx = r_edi;
    /* 005dd987: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 005dd98b: call 0x5c3a94 */ r_esp -= 4; W32(r_esp, 0x5dd990u); f_005c3a94();
    /* 005dd990: mov dword ptr [edi], 0xb0dac0 */ W32((u32)(r_edi), 0xb0dac0u);
    /* 005dd996: mov edx, dword ptr [0x9c27dc] */ r_edx = R32((u32)(0x9c27dcu));
    /* 005dd99c: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 005dd99f: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 005dd9a2: mov eax, 0xf423f */ r_eax = 0xf423fu;
    /* 005dd9a7: cmp esi, 0xf423f */ {  u32 a = r_esi; u32 b = 0xf423fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005dd9ad: jl 0x5dd9b1 */ if ((fS!=fO)) goto L_005dd9b1;
L_005dd9af:; BB(0x005dd9af);
    /* 005dd9af: mov esi, eax */ r_esi = r_eax;
L_005dd9b1:; BB(0x005dd9b1);
    /* 005dd9b1: mov dword ptr [edi + 0x100], esi */ W32((u32)(r_edi+0x100u), r_esi);
    /* 005dd9b7: mov eax, edi */ r_eax = r_edi;
    /* 005dd9b9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005dd9ba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005dd9bb: ret 8 */ FN_RET(0x005dd97c); r_esp += 12; return;
}

void f_005dd9c0(void) /* sub_5DD9C0 */
{
    FN_ENTER(0x005dd9c0);
    /* 005dd9c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dd9c1: mov ebp, esp */ r_ebp = r_esp;
    /* 005dd9c3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dd9c5: push 0x8dab60 */ { u32 v = 0x8dab60u; r_esp -= 4; W32(r_esp, v); }
    /* 005dd9ca: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dd9d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dd9d1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005dd9d8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dd9db: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005dd9de: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005dd9e1: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005dd9e4: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005dd9e7: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005dd9ea: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005dd9ed: mov eax, ecx */ r_eax = r_ecx;
    /* 005dd9ef: mov dword ptr [eax], 0xb0dc40 */ W32((u32)(r_eax), 0xb0dc40u);
    /* 005dd9f5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005dd9fc: call 0x5c2e50 */ r_esp -= 4; W32(r_esp, 0x5dda01u); f_005c2e50();
    /* 005dda01: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dda04: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dda06: jne 0x5dda18 */ if (!fZ) goto L_005dda18;
L_005dda08:; BB(0x005dda08);
    /* 005dda08: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dda0b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dda12: mov esp, ebp */ r_esp = r_ebp;
    /* 005dda14: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dda15: ret 4 */ FN_RET(0x005dd9c0); r_esp += 8; return;
L_005dda18:; BB(0x005dda18);
    /* 005dda18: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005dda1b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dda1c: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5dda21u); f_005c2f74();
    /* 005dda21: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dda22: jmp 0x5dda08 */ goto L_005dda08;
}

void f_005dda24(void) /* sub_5DDA24 */
{
    FN_ENTER(0x005dda24);
    /* 005dda24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dda25: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005dda27: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005dda29: call 0x5dda48 */ r_esp -= 4; W32(r_esp, 0x5dda2eu); f_005dda48();
    /* 005dda2e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005dda32: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005dda34: jne 0x5dda3a */ if (!fZ) goto L_005dda3a;
L_005dda36:; BB(0x005dda36);
    /* 005dda36: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dda37: ret 4 */ FN_RET(0x005dda24); r_esp += 8; return;
L_005dda3a:; BB(0x005dda3a);
    /* 005dda3a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005dda3b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5dda40u); f_005c2f74();
    /* 005dda40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dda41: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005dda42: ret 4 */ FN_RET(0x005dda24); r_esp += 8; return;
}

void f_005dda48(void) /* sub_5DDA48 */
{
    FN_ENTER(0x005dda48);
    /* 005dda48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dda49: mov ebp, esp */ r_ebp = r_esp;
    /* 005dda4b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dda4d: push 0x8dab8a */ { u32 v = 0x8dab8au; r_esp -= 4; W32(r_esp, v); }
    /* 005dda52: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dda58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dda59: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005dda60: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dda63: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005dda66: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005dda69: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005dda6c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005dda6f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005dda72: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dda75: mov dword ptr [eax], 0xb0dd00 */ W32((u32)(r_eax), 0xb0dd00u);
    /* 005dda7b: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005dda7e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dda81: mov dword ptr [ecx], 0xb0dc40 */ W32((u32)(r_ecx), 0xb0dc40u);
    /* 005dda87: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005dda8e: call 0x5c2e50 */ r_esp -= 4; W32(r_esp, 0x5dda93u); f_005c2e50();
    /* 005dda93: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dda96: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dda9d: mov esp, ebp */ r_esp = r_ebp;
    /* 005dda9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ddaa0: ret  */ FN_RET(0x005dda48); r_esp += 4; return;
}

void f_005ddaf4(void) /* sub_5DDAF4 */
{
    FN_ENTER(0x005ddaf4);
    /* 005ddaf4: lea eax, [ecx + 0x104] */ r_eax = (u32)(r_ecx+0x104u);
    /* 005ddafa: xor eax, dword ptr [ecx + 0x104] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x104u)); u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ddb00: ret  */ FN_RET(0x005ddaf4); r_esp += 4; return;
}

void f_005ddb04(void) /* sub_5DDB04 */
{
    FN_ENTER(0x005ddb04);
    /* 005ddb04: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005ddb06: mov ecx, dword ptr [ecx + 0xf8] */ r_ecx = R32((u32)(r_ecx+0xf8u));
    /* 005ddb0c: add ecx, 0xdf8 */ {  u32 a = r_ecx; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005ddb12: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x5ddb17u); f_0069792c();
    /* 005ddb17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ddb19: je 0x5ddb25 */ if (fZ) goto L_005ddb25;
L_005ddb1b:; BB(0x005ddb1b);
    /* 005ddb1b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ddb1d: mov ecx, eax */ r_ecx = r_eax;
    /* 005ddb1f: call dword ptr [edx + 0x98] */ { u32 t = R32((u32)(r_edx+0x98u)); r_esp -= 4; W32(r_esp, 0x5ddb25u); call_ind(t); }
L_005ddb25:; BB(0x005ddb25);
    /* 005ddb25: ret  */ FN_RET(0x005ddb04); r_esp += 4; return;
}

void f_005ddb28(void) /* sub_5DDB28 */
{
    FN_ENTER(0x005ddb28);
    /* 005ddb28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ddb29: mov ebp, esp */ r_ebp = r_esp;
    /* 005ddb2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ddb2d: push 0x8dabcc */ { u32 v = 0x8dabccu; r_esp -= 4; W32(r_esp, v); }
    /* 005ddb32: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ddb38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ddb39: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ddb40: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ddb43: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ddb46: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ddb49: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ddb4c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ddb4f: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ddb52: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddb54: je 0x5ddbab */ if (fZ) goto L_005ddbab;
L_005ddb56:; BB(0x005ddb56);
    /* 005ddb56: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005ddb5d: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ddb62: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ddb67u); f_005caba4();
    /* 005ddb67: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ddb68: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005ddb6b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddb6d: je 0x5ddba7 */ if (fZ) goto L_005ddba7;
L_005ddb6f:; BB(0x005ddb6f);
    /* 005ddb6f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005ddb76: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ddb7d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005ddb80: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ddb83: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ddb84: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ddb8a: call 0x5ddbbc */ r_esp -= 4; W32(r_esp, 0x5ddb8fu); f_005ddbbc();
    /* 005ddb8f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ddb92: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ddb99:; BB(0x005ddb99);
    /* 005ddb99: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ddb9c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ddba3: mov esp, ebp */ r_esp = r_ebp;
    /* 005ddba5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ddba6: ret  */ FN_RET(0x005ddb28); r_esp += 4; return;
L_005ddba7:; BB(0x005ddba7);
    /* 005ddba7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ddba9: jmp 0x5ddb99 */ goto L_005ddb99;
L_005ddbab:; BB(0x005ddbab);
    /* 005ddbab: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ddbad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ddbb0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ddbb7: mov esp, ebp */ r_esp = r_ebp;
    /* 005ddbb9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ddbba: ret  */ FN_RET(0x005ddb28); r_esp += 4; return;
}

void f_005ddbbc(void) /* sub_5DDBBC */
{
    FN_ENTER(0x005ddbbc);
    /* 005ddbbc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ddbbd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ddbbf: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ddbc3: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ddbc7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005ddbc9: call 0x5de2d8 */ r_esp -= 4; W32(r_esp, 0x5ddbceu); f_005de2d8();
    /* 005ddbce: mov dword ptr [ebp], 0xb0dd00 */ W32((u32)(r_ebp), 0xb0dd00u);
    /* 005ddbd5: mov eax, ebp */ r_eax = r_ebp;
    /* 005ddbd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ddbd8: ret 8 */ FN_RET(0x005ddbbc); r_esp += 12; return;
}

void f_005ddbdc(void) /* sub_5DDBDC */
{
    FN_ENTER(0x005ddbdc);
    /* 005ddbdc: mov dword ptr [0xa8db08], 0x3f800000 */ W32((u32)(0xa8db08u), 0x3f800000u);
    /* 005ddbe6: mov dword ptr [0xa8db0c], 0x41000000 */ W32((u32)(0xa8db0cu), 0x41000000u);
    /* 005ddbf0: mov dword ptr [0xa8db10], 0x3fc00000 */ W32((u32)(0xa8db10u), 0x3fc00000u);
    /* 005ddbfa: ret  */ FN_RET(0x005ddbdc); r_esp += 4; return;
}

void f_005ddbfc(void) /* sub_5DDBFC */
{
    FN_ENTER(0x005ddbfc);
    /* 005ddbfc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddbfd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ddbff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ddc01: call 0x5ddc20 */ r_esp -= 4; W32(r_esp, 0x5ddc06u); f_005ddc20();
    /* 005ddc06: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ddc0a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ddc0c: jne 0x5ddc12 */ if (!fZ) goto L_005ddc12;
L_005ddc0e:; BB(0x005ddc0e);
    /* 005ddc0e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ddc0f: ret 4 */ FN_RET(0x005ddbfc); r_esp += 8; return;
L_005ddc12:; BB(0x005ddc12);
    /* 005ddc12: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddc13: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ddc18u); f_005c2f74();
    /* 005ddc18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ddc19: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ddc1a: ret 4 */ FN_RET(0x005ddbfc); r_esp += 8; return;
}

void f_005ddc20(void) /* sub_5DDC20 */
{
    FN_ENTER(0x005ddc20);
    /* 005ddc20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ddc21: mov ebp, esp */ r_ebp = r_esp;
    /* 005ddc23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ddc25: push 0x8dabf6 */ { u32 v = 0x8dabf6u; r_esp -= 4; W32(r_esp, v); }
    /* 005ddc2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ddc30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ddc31: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ddc38: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ddc3b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ddc3e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ddc41: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ddc44: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ddc47: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ddc4a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ddc4d: mov dword ptr [eax], 0xb0dea0 */ W32((u32)(r_eax), 0xb0dea0u);
    /* 005ddc53: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005ddc56: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ddc59: mov dword ptr [ecx], 0xb0dc40 */ W32((u32)(r_ecx), 0xb0dc40u);
    /* 005ddc5f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ddc66: call 0x5c2e50 */ r_esp -= 4; W32(r_esp, 0x5ddc6bu); f_005c2e50();
    /* 005ddc6b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ddc6e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ddc75: mov esp, ebp */ r_esp = r_ebp;
    /* 005ddc77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ddc78: ret  */ FN_RET(0x005ddc20); r_esp += 4; return;
}

void f_005ddc7c(void) /* sub_5DDC7C */
{
    FN_ENTER(0x005ddc7c);
    /* 005ddc7c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddc7d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ddc7f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ddc81: call 0x5ddca0 */ r_esp -= 4; W32(r_esp, 0x5ddc86u); f_005ddca0();
    /* 005ddc86: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ddc8a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ddc8c: jne 0x5ddc92 */ if (!fZ) goto L_005ddc92;
L_005ddc8e:; BB(0x005ddc8e);
    /* 005ddc8e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ddc8f: ret 4 */ FN_RET(0x005ddc7c); r_esp += 8; return;
L_005ddc92:; BB(0x005ddc92);
    /* 005ddc92: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddc93: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ddc98u); f_005c2f74();
    /* 005ddc98: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ddc99: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ddc9a: ret 4 */ FN_RET(0x005ddc7c); r_esp += 8; return;
}

void f_005ddca0(void) /* sub_5DDCA0 */
{
    FN_ENTER(0x005ddca0);
    /* 005ddca0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ddca1: mov ebp, esp */ r_ebp = r_esp;
    /* 005ddca3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ddca5: push 0x8dac10 */ { u32 v = 0x8dac10u; r_esp -= 4; W32(r_esp, v); }
    /* 005ddcaa: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ddcb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ddcb1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ddcb8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ddcbb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ddcbe: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ddcc1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ddcc4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ddcc7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ddcca: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ddccd: cmp ecx, dword ptr [0xa8db14] */ {  u32 a = r_ecx; u32 b = R32((u32)(0xa8db14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005ddcd3: mov dword ptr [ecx], 0xb0df60 */ W32((u32)(r_ecx), 0xb0df60u);
    /* 005ddcd9: jne 0x5ddce5 */ if (!fZ) goto L_005ddce5;
L_005ddcdb:; BB(0x005ddcdb);
    /* 005ddcdb: mov dword ptr [0xa8db14], 0 */ W32((u32)(0xa8db14u), 0x0u);
L_005ddce5:; BB(0x005ddce5);
    /* 005ddce5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ddcec: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5ddcf1u); f_008171e8();
    /* 005ddcf1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ddcf4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ddcfb: mov esp, ebp */ r_esp = r_ebp;
    /* 005ddcfd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ddcfe: ret  */ FN_RET(0x005ddca0); r_esp += 4; return;
}

void f_005ddd00(void) /* sub_5DDD00 */
{
    FN_ENTER(0x005ddd00);
    /* 005ddd00: movzx eax, byte ptr [ecx + 0xf4] */ r_eax = (u32)R8((u32)(r_ecx+0xf4u));
    /* 005ddd07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ddd08: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ddd0e: call 0x5ddd18 */ r_esp -= 4; W32(r_esp, 0x5ddd13u); f_005ddd18();
    /* 005ddd13: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ddd16: ret  */ FN_RET(0x005ddd00); r_esp += 4; return;
}

void f_005ddd18(void) /* sub_5DDD18 */
{
    FN_ENTER(0x005ddd18);
    /* 005ddd18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ddd19: mov ebp, esp */ r_ebp = r_esp;
    /* 005ddd1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ddd1d: push 0x8dac38 */ { u32 v = 0x8dac38u; r_esp -= 4; W32(r_esp, v); }
    /* 005ddd22: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ddd28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ddd29: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ddd30: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ddd33: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ddd36: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005ddd39: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005ddd3c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005ddd3f: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005ddd42: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005ddd45: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005ddd48: jb 0x5ddd4f */ if (fC) goto L_005ddd4f;
L_005ddd4a:; BB(0x005ddd4a);
    /* 005ddd4a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005ddd4c: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
L_005ddd4f:; BB(0x005ddd4f);
    /* 005ddd4f: mov eax, dword ptr [0xa94b60] */ r_eax = R32((u32)(0xa94b60u));
    /* 005ddd54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ddd56: jne 0x5ddd94 */ if (!fZ) goto L_005ddd94;
L_005ddd58:; BB(0x005ddd58);
    /* 005ddd58: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 005ddd5f: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005ddd61: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5ddd66u); f_005caba4();
    /* 005ddd66: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ddd67: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005ddd6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ddd6c: je 0x5ddd94 */ if (fZ) goto L_005ddd94;
L_005ddd6e:; BB(0x005ddd6e);
    /* 005ddd6e: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 005ddd75: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ddd7c: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005ddd7f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddd80: mov ecx, eax */ r_ecx = r_eax;
    /* 005ddd82: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ddd88: call 0x5ddda4 */ r_esp -= 4; W32(r_esp, 0x5ddd8du); f_005ddda4();
    /* 005ddd8d: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_005ddd94:; BB(0x005ddd94);
    /* 005ddd94: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ddd97: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ddd9e: mov esp, ebp */ r_esp = r_ebp;
    /* 005ddda0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ddda1: ret  */ FN_RET(0x005ddd18); r_esp += 4; return;
}

void f_005ddda4(void) /* sub_5DDDA4 */
{
    FN_ENTER(0x005ddda4);
    /* 005ddda4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ddda5: mov ebp, esp */ r_ebp = r_esp;
    /* 005ddda7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ddda9: push 0x8dac54 */ { u32 v = 0x8dac54u; r_esp -= 4; W32(r_esp, v); }
    /* 005dddae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dddb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dddb5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005dddbc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dddbf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005dddc2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005dddc5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005dddc8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005dddcb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 005dddce: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005dddd1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005dddd4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 005dddd7: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5ddddcu); f_008193cc();
    /* 005ddddc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005ddde3: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005ddde6: mov edx, dword ptr [0xa8db14] */ r_edx = R32((u32)(0xa8db14u));
    /* 005dddec: mov dword ptr [eax], 0xb0df60 */ W32((u32)(r_eax), 0xb0df60u);
    /* 005dddf2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dddf4: je 0x5dde06 */ if (fZ) goto L_005dde06;
L_005dddf6:; BB(0x005dddf6);
    /* 005dddf6: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 005dddfa: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005dddff: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 005dde03: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
L_005dde06:; BB(0x005dde06);
    /* 005dde06: mov dword ptr [0xa8db14], eax */ W32((u32)(0xa8db14u), r_eax);
    /* 005dde0b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005dde0e: push dword ptr [eax*4 + 0x9c27e0] */ { u32 v = R32((u32)(r_eax*4+0x9c27e0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005dde15: call 0x814afc */ r_esp -= 4; W32(r_esp, 0x5dde1au); f_00814afc();
    /* 005dde1a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dde1b: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 005dde1e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005dde21: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005dde28: mov esp, ebp */ r_esp = r_ebp;
    /* 005dde2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005dde2b: ret 8 */ FN_RET(0x005ddda4); r_esp += 12; return;
}

void f_005dde30(void) /* sub_5DDE30 */
{
    FN_ENTER(0x005dde30);
    /* 005dde30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005dde31: mov ebp, esp */ r_ebp = r_esp;
    /* 005dde33: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005dde35: push 0x8dac7c */ { u32 v = 0x8dac7cu; r_esp -= 4; W32(r_esp, v); }
    /* 005dde3a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005dde40: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dde41: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005dde48: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005dde4b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005dde4e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005dde51: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005dde54: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005dde57: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dde5a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dde5c: je 0x5ddeb3 */ if (fZ) goto L_005ddeb3;
L_005dde5e:; BB(0x005dde5e);
    /* 005dde5e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005dde65: push 0x10c */ { u32 v = 0x10cu; r_esp -= 4; W32(r_esp, v); }
    /* 005dde6a: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5dde6fu); f_005caba4();
    /* 005dde6f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005dde70: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005dde73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005dde75: je 0x5ddeaf */ if (fZ) goto L_005ddeaf;
L_005dde77:; BB(0x005dde77);
    /* 005dde77: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005dde7e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005dde85: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005dde88: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dde8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005dde8c: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005dde92: call 0x5ddec4 */ r_esp -= 4; W32(r_esp, 0x5dde97u); f_005ddec4();
    /* 005dde97: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005dde9a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005ddea1:; BB(0x005ddea1);
    /* 005ddea1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ddea4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ddeab: mov esp, ebp */ r_esp = r_ebp;
    /* 005ddead: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ddeae: ret  */ FN_RET(0x005dde30); r_esp += 4; return;
L_005ddeaf:; BB(0x005ddeaf);
    /* 005ddeaf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ddeb1: jmp 0x5ddea1 */ goto L_005ddea1;
L_005ddeb3:; BB(0x005ddeb3);
    /* 005ddeb3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ddeb5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ddeb8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ddebf: mov esp, ebp */ r_esp = r_ebp;
    /* 005ddec1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ddec2: ret  */ FN_RET(0x005dde30); r_esp += 4; return;
}

void f_005ddec4(void) /* sub_5DDEC4 */
{
    FN_ENTER(0x005ddec4);
    /* 005ddec4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ddec5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005ddec7: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ddecb: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005ddecf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005dded1: call 0x5de2d8 */ r_esp -= 4; W32(r_esp, 0x5dded6u); f_005de2d8();
    /* 005dded6: mov dword ptr [ebp], 0xb0dea0 */ W32((u32)(r_ebp), 0xb0dea0u);
    /* 005ddedd: mov eax, ebp */ r_eax = r_ebp;
    /* 005ddedf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ddee0: ret 8 */ FN_RET(0x005ddec4); r_esp += 12; return;
}

void f_005ddee4(void) /* sub_5DDEE4 */
{
    FN_ENTER(0x005ddee4);
    /* 005ddee4: mov eax, dword ptr [0xa94b60] */ r_eax = R32((u32)(0xa94b60u));
    /* 005ddee9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ddeeb: je 0x5ddefb */ if (fZ) goto L_005ddefb;
L_005ddeed:; BB(0x005ddeed);
    /* 005ddeed: movzx eax, word ptr [ecx + 8] */ r_eax = (u32)R16((u32)(r_ecx+0x8u));
    /* 005ddef1: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ddef6: mov word ptr [ecx + 8], ax */ W16((u32)(r_ecx+0x8u), (u16)r_eax);
    /* 005ddefa: ret  */ FN_RET(0x005ddee4); r_esp += 4; return;
L_005ddefb:; BB(0x005ddefb);
    /* 005ddefb: ret  */ FN_RET(0x005ddee4); r_esp += 4; return;
}

void f_005ddefc(void) /* sub_5DDEFC */
{
    FN_ENTER(0x005ddefc);
    /* 005ddefc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddefd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005ddeff: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005ddf01: call 0x5ddf20 */ r_esp -= 4; W32(r_esp, 0x5ddf06u); f_005ddf20();
    /* 005ddf06: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005ddf0a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005ddf0c: jne 0x5ddf12 */ if (!fZ) goto L_005ddf12;
L_005ddf0e:; BB(0x005ddf0e);
    /* 005ddf0e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ddf0f: ret 4 */ FN_RET(0x005ddefc); r_esp += 8; return;
L_005ddf12:; BB(0x005ddf12);
    /* 005ddf12: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005ddf13: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5ddf18u); f_005c2f74();
    /* 005ddf18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005ddf19: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005ddf1a: ret 4 */ FN_RET(0x005ddefc); r_esp += 8; return;
}

void f_005ddf20(void) /* sub_5DDF20 */
{
    FN_ENTER(0x005ddf20);
    /* 005ddf20: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005ddf21: mov ebp, esp */ r_ebp = r_esp;
    /* 005ddf23: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005ddf25: push 0x8daca6 */ { u32 v = 0x8daca6u; r_esp -= 4; W32(r_esp, v); }
    /* 005ddf2a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005ddf30: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005ddf31: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005ddf38: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ddf3b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005ddf3e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005ddf41: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005ddf44: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005ddf47: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005ddf4a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ddf4d: mov dword ptr [eax], 0xb0dfe0 */ W32((u32)(r_eax), 0xb0dfe0u);
    /* 005ddf53: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005ddf56: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005ddf59: mov dword ptr [ecx], 0xb0dc40 */ W32((u32)(r_ecx), 0xb0dc40u);
    /* 005ddf5f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005ddf66: call 0x5c2e50 */ r_esp -= 4; W32(r_esp, 0x5ddf6bu); f_005c2e50();
    /* 005ddf6b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005ddf6e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005ddf75: mov esp, ebp */ r_esp = r_ebp;
    /* 005ddf77: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005ddf78: ret  */ FN_RET(0x005ddf20); r_esp += 4; return;
}

void f_005ddf7c(void) /* sub_5DDF7C */
{
    FN_ENTER(0x005ddf7c);
    /* 005ddf7c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005ddf7d: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005ddf80: mov esi, ecx */ r_esi = r_ecx;
    /* 005ddf82: mov eax, 0x92cd48 */ r_eax = 0x92cd48u;
    /* 005ddf87: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005ddf89: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 005ddf8c: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005ddf8f: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005ddf93: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 005ddf96: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 005ddf9a: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 005ddf9d: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 005ddfa1: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 005ddfa4: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 005ddfa8: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 005ddfab: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 005ddfaf: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 005ddfb2: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 005ddfb6: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 005ddfb9: mov eax, dword ptr [eax + 0x20] */ r_eax = R32((u32)(r_eax+0x20u));
    /* 005ddfbc: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 005ddfc0: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005ddfc4: mov ecx, esi */ r_ecx = r_esi;
    /* 005ddfc6: call 0x5de588 */ r_esp -= 4; W32(r_esp, 0x5ddfcbu); f_005de588();
    /* 005ddfcb: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005ddfce: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005ddfd1: jae 0x5ddfd8 */ if (!fC) goto L_005ddfd8;
L_005ddfd3:; BB(0x005ddfd3);
    /* 005ddfd3: mov ecx, esi */ r_ecx = r_esi;
    /* 005ddfd5: call dword ptr [esp + eax*4] */ { u32 t = R32((u32)(r_esp+r_eax*4)); r_esp -= 4; W32(r_esp, 0x5ddfd8u); call_ind(t); }
L_005ddfd8:; BB(0x005ddfd8);
    /* 005ddfd8: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ddfdb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005ddfdc: ret  */ FN_RET(0x005ddf7c); r_esp += 4; return;
}

void f_005ddfe0(void) /* sub_5DDFE0 */
{
    FN_ENTER(0x005ddfe0);
    /* 005ddfe0: push 0x461c4000 */ { u32 v = 0x461c4000u; r_esp -= 4; W32(r_esp, v); }
    /* 005ddfe5: push dword ptr [ecx + 0xf8] */ { u32 v = R32((u32)(r_ecx+0xf8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005ddfeb: call 0x5de6d8 */ r_esp -= 4; W32(r_esp, 0x5ddff0u); f_005de6d8();
    /* 005ddff0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005ddff3: ret  */ FN_RET(0x005ddfe0); r_esp += 4; return;
}

void f_005ddff4(void) /* sub_5DDFF4 */
{
    FN_ENTER(0x005ddff4);
    /* 005ddff4: mov ecx, dword ptr [ecx + 0xf8] */ r_ecx = R32((u32)(r_ecx+0xf8u));
    /* 005ddffa: movsx eax, word ptr [ecx + 0x2be] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x2beu));
    /* 005de001: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005de002: call 0x777368 */ r_esp -= 4; W32(r_esp, 0x5de007u); f_00777368();
    /* 005de007: ret  */ FN_RET(0x005ddff4); r_esp += 4; return;
}

