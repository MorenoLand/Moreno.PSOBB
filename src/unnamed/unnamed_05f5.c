#include "protos.h"

void f_005f5028(void) /* sub_5F5028 */
{
    FN_ENTER(0x005f5028);
    /* 005f5028: mov dword ptr [0xa8dff4], 0x3f800000 */ W32((u32)(0xa8dff4u), 0x3f800000u);
    /* 005f5032: mov dword ptr [0xa8dff8], 0x41000000 */ W32((u32)(0xa8dff8u), 0x41000000u);
    /* 005f503c: mov dword ptr [0xa8dffc], 0x3fc00000 */ W32((u32)(0xa8dffcu), 0x3fc00000u);
    /* 005f5046: ret  */ FN_RET(0x005f5028); r_esp += 4; return;
}

void f_005f5048(void) /* sub_5F5048 */
{
    FN_ENTER(0x005f5048);
    /* 005f5048: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5049: mov ebp, esp */ r_ebp = r_esp;
    /* 005f504b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f504d: push 0x8dd368 */ { u32 v = 0x8dd368u; r_esp -= 4; W32(r_esp, v); }
    /* 005f5052: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f5058: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5059: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f5060: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f5063: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f5066: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f5069: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f506c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f506f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f5072: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f5075: mov eax, ecx */ r_eax = r_ecx;
    /* 005f5077: mov dword ptr [eax], 0xb16960 */ W32((u32)(r_eax), 0xb16960u);
    /* 005f507d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f5084: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f5089u); f_005e61c8();
    /* 005f5089: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f508c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f508e: jne 0x5f50a0 */ if (!fZ) goto L_005f50a0;
L_005f5090:; BB(0x005f5090);
    /* 005f5090: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5093: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f509a: mov esp, ebp */ r_esp = r_ebp;
    /* 005f509c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f509d: ret 4 */ FN_RET(0x005f5048); r_esp += 8; return;
L_005f50a0:; BB(0x005f50a0);
    /* 005f50a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f50a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f50a4: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f50a9u); f_005c2f74();
    /* 005f50a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f50aa: jmp 0x5f5090 */ goto L_005f5090;
}

void f_005f50ac(void) /* sub_5F50AC */
{
    FN_ENTER(0x005f50ac);
    /* 005f50ac: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f50ad: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f50af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f50b1: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5f50b6u); f_005e90b0();
    /* 005f50b6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f50b8: je 0x5f5182 */ if (fZ) goto L_005f5182;
L_005f50be:; BB(0x005f50be);
    /* 005f50be: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
    /* 005f50c4: mov edx, dword ptr [eax + 0x8d0] */ r_edx = R32((u32)(r_eax+0x8d0u));
    /* 005f50ca: mov dword ptr [ebx + 0x240], edx */ W32((u32)(r_ebx+0x240u), r_edx);
    /* 005f50d0: mov edx, dword ptr [eax + 0x8d4] */ r_edx = R32((u32)(r_eax+0x8d4u));
    /* 005f50d6: mov dword ptr [ebx + 0x244], edx */ W32((u32)(r_ebx+0x244u), r_edx);
    /* 005f50dc: mov edx, dword ptr [eax + 0x8d8] */ r_edx = R32((u32)(r_eax+0x8d8u));
    /* 005f50e2: mov dword ptr [ebx + 0x248], edx */ W32((u32)(r_ebx+0x248u), r_edx);
    /* 005f50e8: mov edx, dword ptr [eax + 0x8dc] */ r_edx = R32((u32)(r_eax+0x8dcu));
    /* 005f50ee: mov dword ptr [ebx + 0x24c], edx */ W32((u32)(r_ebx+0x24cu), r_edx);
    /* 005f50f4: mov edx, dword ptr [eax + 0x8e0] */ r_edx = R32((u32)(r_eax+0x8e0u));
    /* 005f50fa: mov dword ptr [ebx + 0x250], edx */ W32((u32)(r_ebx+0x250u), r_edx);
    /* 005f5100: mov edx, dword ptr [eax + 0x8e4] */ r_edx = R32((u32)(r_eax+0x8e4u));
    /* 005f5106: mov dword ptr [ebx + 0x254], edx */ W32((u32)(r_ebx+0x254u), r_edx);
    /* 005f510c: mov edx, dword ptr [eax + 0x8e8] */ r_edx = R32((u32)(r_eax+0x8e8u));
    /* 005f5112: mov dword ptr [ebx + 0x258], edx */ W32((u32)(r_ebx+0x258u), r_edx);
    /* 005f5118: mov edx, dword ptr [eax + 0x8ec] */ r_edx = R32((u32)(r_eax+0x8ecu));
    /* 005f511e: mov dword ptr [ebx + 0x25c], edx */ W32((u32)(r_ebx+0x25cu), r_edx);
    /* 005f5124: mov edx, dword ptr [eax + 0x8f0] */ r_edx = R32((u32)(r_eax+0x8f0u));
    /* 005f512a: mov dword ptr [ebx + 0x260], edx */ W32((u32)(r_ebx+0x260u), r_edx);
    /* 005f5130: mov edx, dword ptr [eax + 0x8f4] */ r_edx = R32((u32)(r_eax+0x8f4u));
    /* 005f5136: mov dword ptr [ebx + 0x264], edx */ W32((u32)(r_ebx+0x264u), r_edx);
    /* 005f513c: mov eax, dword ptr [eax + 0x8f8] */ r_eax = R32((u32)(r_eax+0x8f8u));
    /* 005f5142: mov dword ptr [ebx + 0x268], eax */ W32((u32)(r_ebx+0x268u), r_eax);
    /* 005f5148: lea eax, [ebx + 0x26c] */ r_eax = (u32)(r_ebx+0x26cu);
    /* 005f514e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f514f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f5151: call 0x5e7534 */ r_esp -= 4; W32(r_esp, 0x5f5156u); f_005e7534();
    /* 005f5156: call 0x77bab4 */ r_esp -= 4; W32(r_esp, 0x5f515bu); f_0077bab4();
    /* 005f515b: mov ecx, eax */ r_ecx = r_eax;
    /* 005f515d: mov eax, 0x51eb851f */ r_eax = 0x51eb851fu;
    /* 005f5162: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005f5164: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 005f5167: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005f5169: sar edx, 5 */ { u32 c = (5u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 005f516c: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 005f516e: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005f5171: jne 0x5f5178 */ if (!fZ) goto L_005f5178;
L_005f5173:; BB(0x005f5173);
    /* 005f5173: mov eax, 1 */ r_eax = 0x1u;
L_005f5178:; BB(0x005f5178);
    /* 005f5178: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5179: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f517b: call 0x5c36cc */ r_esp -= 4; W32(r_esp, 0x5f5180u); f_005c36cc();
    /* 005f5180: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f5181: ret  */ FN_RET(0x005f50ac); r_esp += 4; return;
L_005f5182:; BB(0x005f5182);
    /* 005f5182: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f5184: call 0x5f527c */ r_esp -= 4; W32(r_esp, 0x5f5189u); f_005f527c();
    /* 005f5189: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f518a: ret  */ FN_RET(0x005f50ac); r_esp += 4; return;
}

void f_005f518c(void) /* sub_5F518C */
{
    FN_ENTER(0x005f518c);
    /* 005f518c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f518d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f518e: mov esi, ecx */ r_esi = r_ecx;
    /* 005f5190: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005f5196: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f5198: je 0x5f526f */ if (fZ) goto L_005f526f;
L_005f519e:; BB(0x005f519e);
    /* 005f519e: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x5f51a3u); f_00807d60();
    /* 005f51a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f51a5: je 0x5f526f */ if (fZ) goto L_005f526f;
L_005f51ab:; BB(0x005f51ab);
    /* 005f51ab: mov edx, dword ptr [0xaafca0] */ r_edx = R32((u32)(0xaafca0u));
    /* 005f51b1: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005f51b7: cmp edx, dword ptr [eax + 0x3f0] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f51bd: jne 0x5f526f */ if (!fZ) goto L_005f526f;
L_005f51c3:; BB(0x005f51c3);
    /* 005f51c3: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005f51c7: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f51c9: jne 0x5f51d7 */ if (!fZ) goto L_005f51d7;
L_005f51cb:; BB(0x005f51cb);
    /* 005f51cb: mov ecx, esi */ r_ecx = r_esi;
    /* 005f51cd: call 0x5f527c */ r_esp -= 4; W32(r_esp, 0x5f51d2u); f_005f527c();
    /* 005f51d2: jmp 0x5f526f */ goto L_005f526f;
L_005f51d7:; BB(0x005f51d7);
    /* 005f51d7: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 005f51db: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f51de: jne 0x5f5268 */ if (!fZ) goto L_005f5268;
L_005f51e4:; BB(0x005f51e4);
    /* 005f51e4: mov edx, dword ptr [esi + 0x240] */ r_edx = R32((u32)(r_esi+0x240u));
    /* 005f51ea: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005f51ec: jl 0x5f51f3 */ if ((fS!=fO)) goto L_005f51f3;
L_005f51ee:; BB(0x005f51ee);
    /* 005f51ee: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f51f1: jle 0x5f51fc */ if ((fZ||fS!=fO)) goto L_005f51fc;
L_005f51f3:; BB(0x005f51f3);
    /* 005f51f3: mov ecx, esi */ r_ecx = r_esi;
    /* 005f51f5: call 0x5f527c */ r_esp -= 4; W32(r_esp, 0x5f51fau); f_005f527c();
    /* 005f51fa: jmp 0x5f526f */ goto L_005f526f;
L_005f51fc:; BB(0x005f51fc);
    /* 005f51fc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005f51fe: jle 0x5f51f3 */ if ((fZ||fS!=fO)) goto L_005f51f3;
L_005f5200:; BB(0x005f5200);
    /* 005f5200: mov ecx, dword ptr [esi + 0x240] */ r_ecx = R32((u32)(r_esi+0x240u));
    /* 005f5206: mov byte ptr [esi + 0x1f4], 1 */ W8((u32)(r_esi+0x1f4u), 0x1u);
    /* 005f520d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005f520f: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005f5211: jl 0x5f5218 */ if ((fS!=fO)) goto L_005f5218;
L_005f5213:; BB(0x005f5213);
    /* 005f5213: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f5216: jle 0x5f521a */ if ((fZ||fS!=fO)) goto L_005f521a;
L_005f5218:; BB(0x005f5218);
    /* 005f5218: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_005f521a:; BB(0x005f521a);
    /* 005f521a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f521c: je 0x5f526f */ if (fZ) goto L_005f526f;
L_005f521e:; BB(0x005f521e);
    /* 005f521e: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 005f5221: mov ebx, esi */ r_ebx = r_esi;
    /* 005f5223: mov esi, edx */ r_esi = r_edx;
    /* 005f5225: jmp 0x5f522d */ goto L_005f522d;
L_005f5227:; BB(0x005f5227);
    /* 005f5227: mov eax, dword ptr [ebx + 0xf8] */ r_eax = R32((u32)(r_ebx+0xf8u));
L_005f522d:; BB(0x005f522d);
    /* 005f522d: movzx edx, word ptr [ebx + esi*4 + 0x244] */ r_edx = (u32)R16((u32)(r_ebx+r_esi*4+0x244u));
    /* 005f5235: movsx ecx, word ptr [ebx + esi*4 + 0x246] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_ebx+r_esi*4+0x246u));
    /* 005f523d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f523e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f523f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5240: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f5246: call 0x5cef2c */ r_esp -= 4; W32(r_esp, 0x5f524bu); f_005cef2c();
    /* 005f524b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f524e: mov eax, dword ptr [ebx + 0x240] */ r_eax = R32((u32)(r_ebx+0x240u));
    /* 005f5254: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005f5257: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005f5259: jl 0x5f5260 */ if ((fS!=fO)) goto L_005f5260;
L_005f525b:; BB(0x005f525b);
    /* 005f525b: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f525e: jle 0x5f5262 */ if ((fZ||fS!=fO)) goto L_005f5262;
L_005f5260:; BB(0x005f5260);
    /* 005f5260: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005f5262:; BB(0x005f5262);
    /* 005f5262: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f5264: jne 0x5f5227 */ if (!fZ) goto L_005f5227;
L_005f5266:; BB(0x005f5266);
    /* 005f5266: jmp 0x5f5274 */ goto L_005f5274;
L_005f5268:; BB(0x005f5268);
    /* 005f5268: mov ecx, esi */ r_ecx = r_esi;
    /* 005f526a: call 0x5f527c */ r_esp -= 4; W32(r_esp, 0x5f526fu); f_005f527c();
L_005f526f:; BB(0x005f526f);
    /* 005f526f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f5270: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f5271: ret 4 */ FN_RET(0x005f518c); r_esp += 8; return;
L_005f5274:; BB(0x005f5274);
    /* 005f5274: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 005f5277: jmp 0x5f526f */ goto L_005f526f;
}

void f_005f527c(void) /* sub_5F527C */
{
    FN_ENTER(0x005f527c);
    /* 005f527c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f527d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f527f: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005f5281: lea ecx, [ebx + 0x278] */ r_ecx = (u32)(r_ebx+0x278u);
    /* 005f5287: mov byte ptr [ebx + 0x1f4], 3 */ W8((u32)(r_ebx+0x1f4u), 0x3u);
    /* 005f528e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f5290: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005f5292: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5293: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5294: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5295: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f5297: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f529du); call_ind(t); }
    /* 005f529d: lea edx, [ebx + 0x284] */ r_edx = (u32)(r_ebx+0x284u);
    /* 005f52a3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f52a5: je 0x5f52b9 */ if (fZ) goto L_005f52b9;
L_005f52a7:; BB(0x005f52a7);
    /* 005f52a7: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005f52a9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f52ab: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f52ac: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f52ad: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f52ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f52af: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f52b1: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f52b7u); call_ind(t); }
    /* 005f52b7: jmp 0x5f52ca */ goto L_005f52ca;
L_005f52b9:; BB(0x005f52b9);
    /* 005f52b9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f52bb: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005f52bd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f52bf: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f52c0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005f52c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f52c2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f52c4: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5f52cau); call_ind(t); }
L_005f52ca:; BB(0x005f52ca);
    /* 005f52ca: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 005f52cf: lea eax, [ebx + 0x294] */ r_eax = (u32)(r_ebx+0x294u);
    /* 005f52d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f52d6: call 0x5dd6d0 */ r_esp -= 4; W32(r_esp, 0x5f52dbu); f_005dd6d0();
    /* 005f52db: mov dword ptr [ebx + 0x29c], 1 */ W32((u32)(r_ebx+0x29cu), 0x1u);
    /* 005f52e5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f52e8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f52e9: ret  */ FN_RET(0x005f527c); r_esp += 4; return;
}

void f_005f52ec(void) /* sub_5F52EC */
{
    FN_ENTER(0x005f52ec);
    /* 005f52ec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f52ef: mov eax, dword ptr [ecx + 0x298] */ r_eax = R32((u32)(r_ecx+0x298u));
    /* 005f52f5: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f52f8: je 0x5f535d */ if (fZ) goto L_005f535d;
L_005f52fa:; BB(0x005f52fa);
    /* 005f52fa: fild dword ptr [ecx + 0x29c] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x29cu)));
    /* 005f5300: fld dword ptr [0x92db4c] */ FPUSH(R_F32((u32)(0x92db4cu)));
    /* 005f5306: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005f5308: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005f530a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005f530b: jae 0x5f5359 */ if (!fC) goto L_005f5359;
L_005f530d:; BB(0x005f530d);
    /* 005f530d: fld dword ptr [0x92db48] */ FPUSH(R_F32((u32)(0x92db48u)));
    /* 005f5313: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 005f5315: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005f5317: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005f531a: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005f531e: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005f5323: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005f5327: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005f532b: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005f532f: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005f5332: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 005f5336: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 005f533a: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 005f533c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005f533e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005f533f: jae 0x5f534f */ if (!fC) goto L_005f534f;
L_005f5341:; BB(0x005f5341);
    /* 005f5341: mov dword ptr [ecx + 0x29c], 0 */ W32((u32)(r_ecx+0x29cu), 0x0u);
    /* 005f534b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f534e: ret  */ FN_RET(0x005f52ec); r_esp += 4; return;
L_005f534f:; BB(0x005f534f);
    /* 005f534f: mov dword ptr [ecx + 0x29c], edx */ W32((u32)(r_ecx+0x29cu), r_edx);
    /* 005f5355: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f5358: ret  */ FN_RET(0x005f52ec); r_esp += 4; return;
L_005f5359:; BB(0x005f5359);
    /* 005f5359: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005f535b: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005f535d:; BB(0x005f535d);
    /* 005f535d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f5360: ret  */ FN_RET(0x005f52ec); r_esp += 4; return;
}

void f_005f5364(void) /* sub_5F5364 */
{
    FN_ENTER(0x005f5364);
    /* 005f5364: lea edx, [ecx + 0x278] */ r_edx = (u32)(r_ecx+0x278u);
    /* 005f536a: lea eax, [ecx + 0x284] */ r_eax = (u32)(r_ecx+0x284u);
    /* 005f5370: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5371: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5372: call 0x5e74ec */ r_esp -= 4; W32(r_esp, 0x5f5377u); f_005e74ec();
    /* 005f5377: ret  */ FN_RET(0x005f5364); r_esp += 4; return;
}

void f_005f5378(void) /* sub_5F5378 */
{
    FN_ENTER(0x005f5378);
    /* 005f5378: mov edx, ecx */ r_edx = r_ecx;
    /* 005f537a: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005f537f: cmp eax, dword ptr [edx + 0x290] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x290u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f5385: jne 0x5f5394 */ if (!fZ) goto L_005f5394;
L_005f5387:; BB(0x005f5387);
    /* 005f5387: mov edx, dword ptr [edx + 0x294] */ r_edx = R32((u32)(r_edx+0x294u));
    /* 005f538d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f538f: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x5f5394u); f_0082d8bc();
L_005f5394:; BB(0x005f5394);
    /* 005f5394: ret  */ FN_RET(0x005f5378); r_esp += 4; return;
}

void f_005f5398(void) /* sub_5F5398 */
{
    FN_ENTER(0x005f5398);
    /* 005f5398: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5399: mov ebp, esp */ r_ebp = r_esp;
    /* 005f539b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f539d: push 0x8dd390 */ { u32 v = 0x8dd390u; r_esp -= 4; W32(r_esp, v); }
    /* 005f53a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f53a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f53a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f53b0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f53b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f53b6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f53b9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f53bc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f53bf: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f53c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f53c4: je 0x5f541b */ if (fZ) goto L_005f541b;
L_005f53c6:; BB(0x005f53c6);
    /* 005f53c6: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f53cd: push 0x2a0 */ { u32 v = 0x2a0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f53d2: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f53d7u); f_005caba4();
    /* 005f53d7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f53d8: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f53db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f53dd: je 0x5f5417 */ if (fZ) goto L_005f5417;
L_005f53df:; BB(0x005f53df);
    /* 005f53df: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f53e6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f53ed: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f53f0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f53f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f53f4: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f53fa: call 0x5f542c */ r_esp -= 4; W32(r_esp, 0x5f53ffu); f_005f542c();
    /* 005f53ff: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f5402: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f5409:; BB(0x005f5409);
    /* 005f5409: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f540c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f5413: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5415: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5416: ret  */ FN_RET(0x005f5398); r_esp += 4; return;
L_005f5417:; BB(0x005f5417);
    /* 005f5417: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f5419: jmp 0x5f5409 */ goto L_005f5409;
L_005f541b:; BB(0x005f541b);
    /* 005f541b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f541d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5420: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f5427: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5429: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f542a: ret  */ FN_RET(0x005f5398); r_esp += 4; return;
}

void f_005f542c(void) /* sub_5F542C */
{
    FN_ENTER(0x005f542c);
    /* 005f542c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f542d: mov ebp, esp */ r_ebp = r_esp;
    /* 005f542f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f5431: push 0x8dd3ac */ { u32 v = 0x8dd3acu; r_esp -= 4; W32(r_esp, v); }
    /* 005f5436: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f543c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f543d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f5444: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f5447: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f544a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f544d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f5450: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f5453: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f5456: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f5459: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f545c: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f5461u); f_005e959c();
    /* 005f5461: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f5468: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f546b: mov dword ptr [ecx], 0xb16960 */ W32((u32)(r_ecx), 0xb16960u);
    /* 005f5471: lea esi, [ecx + 0x240] */ r_esi = (u32)(r_ecx+0x240u);
    /* 005f5477: add ecx, 0x244 */ {  u32 a = r_ecx; u32 b = 0x244u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f547d: mov ebx, 0xa */ r_ebx = 0xau;
L_005f5482:; BB(0x005f5482);
    /* 005f5482: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 005f5487: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 005f548a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005f548c: mov word ptr [ecx + 2], dx */ W16((u32)(r_ecx+0x2u), (u16)r_edx);
    /* 005f5490: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005f5493: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 005f5496: jne 0x5f5482 */ if (!fZ) goto L_005f5482;
L_005f5498:; BB(0x005f5498);
    /* 005f5498: mov ecx, esi */ r_ecx = r_esi;
    /* 005f549a: call 0x6a2e30 */ r_esp -= 4; W32(r_esp, 0x5f549fu); f_006a2e30();
    /* 005f549f: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f54a2: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 005f54a5: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f54a8: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f54ae: or edx, 0x222 */ {  u32 a = r_edx; u32 b = 0x222u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005f54b4: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f54ba: mov dword ptr [ebx + 0x234], 0x5cf288 */ W32((u32)(r_ebx+0x234u), 0x5cf288u);
    /* 005f54c4: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005f54c9: mov dword ptr [ebx + 0x290], eax */ W32((u32)(r_ebx+0x290u), r_eax);
    /* 005f54cf: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f54d1: mov dword ptr [ebx + 0x294], ecx */ W32((u32)(r_ebx+0x294u), r_ecx);
    /* 005f54d7: mov dword ptr [ebx + 0x298], eax */ W32((u32)(r_ebx+0x298u), r_eax);
    /* 005f54dd: mov dword ptr [ebx + 0x29c], ecx */ W32((u32)(r_ebx+0x29cu), r_ecx);
    /* 005f54e3: mov word ptr [ebx + 0x1f0], ax */ W16((u32)(r_ebx+0x1f0u), (u16)r_eax);
    /* 005f54ea: mov eax, ebx */ r_eax = r_ebx;
    /* 005f54ec: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f54ef: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f54f2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f54f9: mov esp, ebp */ r_esp = r_ebp;
    /* 005f54fb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f54fc: ret 8 */ FN_RET(0x005f542c); r_esp += 12; return;
}

void f_005f5500(void) /* sub_5F5500 */
{
    FN_ENTER(0x005f5500);
    /* 005f5500: mov dword ptr [0xa8e000], 0x3f800000 */ W32((u32)(0xa8e000u), 0x3f800000u);
    /* 005f550a: mov dword ptr [0xa8e004], 0x41000000 */ W32((u32)(0xa8e004u), 0x41000000u);
    /* 005f5514: mov dword ptr [0xa8e008], 0x3fc00000 */ W32((u32)(0xa8e008u), 0x3fc00000u);
    /* 005f551e: ret  */ FN_RET(0x005f5500); r_esp += 4; return;
}

void f_005f5520(void) /* sub_5F5520 */
{
    FN_ENTER(0x005f5520);
    /* 005f5520: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5521: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f5523: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f5525: call 0x5f5544 */ r_esp -= 4; W32(r_esp, 0x5f552au); f_005f5544();
    /* 005f552a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f552e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f5530: jne 0x5f5536 */ if (!fZ) goto L_005f5536;
L_005f5532:; BB(0x005f5532);
    /* 005f5532: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f5533: ret 4 */ FN_RET(0x005f5520); r_esp += 8; return;
L_005f5536:; BB(0x005f5536);
    /* 005f5536: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5537: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f553cu); f_005c2f74();
    /* 005f553c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f553d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f553e: ret 4 */ FN_RET(0x005f5520); r_esp += 8; return;
}

void f_005f5544(void) /* sub_5F5544 */
{
    FN_ENTER(0x005f5544);
    /* 005f5544: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5545: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5547: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f5549: push 0x8dd3c8 */ { u32 v = 0x8dd3c8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f554e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f5554: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5555: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f555c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f555f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f5562: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f5565: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f5568: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f556b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f556e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f5571: mov dword ptr [ecx], 0xb16ae0 */ W32((u32)(r_ecx), 0xb16ae0u);
    /* 005f5577: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f557e: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f5583u); f_005e61c8();
    /* 005f5583: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5586: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f558d: mov esp, ebp */ r_esp = r_ebp;
    /* 005f558f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5590: ret  */ FN_RET(0x005f5544); r_esp += 4; return;
}

void f_005f5594(void) /* sub_5F5594 */
{
    FN_ENTER(0x005f5594);
    /* 005f5594: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5595: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5597: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f5599: push 0x8dd40a */ { u32 v = 0x8dd40au; r_esp -= 4; W32(r_esp, v); }
    /* 005f559e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f55a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f55a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f55ac: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f55af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f55b2: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 005f55b5: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 005f55b8: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 005f55bb: mov eax, dword ptr [ecx + 0x18c] */ r_eax = R32((u32)(r_ecx+0x18cu));
    /* 005f55c1: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f55c4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f55c6: je 0x5f5683 */ if (fZ) goto L_005f5683;
L_005f55cc:; BB(0x005f55cc);
    /* 005f55cc: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
    /* 005f55d3: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005f55d5: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f55dau); f_005caba4();
    /* 005f55da: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005f55dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f55e0: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 005f55e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f55e5: je 0x5f5629 */ if (fZ) goto L_005f5629;
L_005f55e7:; BB(0x005f55e7);
    /* 005f55e7: mov dword ptr [ebp - 0x34], 1 */ W32((u32)(r_ebp+0xffffffccu), 0x1u);
    /* 005f55ee: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f55f5: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f55f8: mov ecx, eax */ r_ecx = r_eax;
    /* 005f55fa: push 0xe10 */ { u32 v = 0xe10u; r_esp -= 4; W32(r_esp, v); }
    /* 005f55ff: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005f5606: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5607: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f560d: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5f5612u); f_005e5cac();
    /* 005f5612: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f5615: mov dword ptr [eax], 0xb0f838 */ W32((u32)(r_eax), 0xb0f838u);
    /* 005f561b: mov dword ptr [eax + 0x2c], 0x3e800000 */ W32((u32)(r_eax+0x2cu), 0x3e800000u);
    /* 005f5622: mov dword ptr [ebp - 0x34], 0 */ W32((u32)(r_ebp+0xffffffccu), 0x0u);
L_005f5629:; BB(0x005f5629);
    /* 005f5629: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f5630: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 005f5637: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f5639: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f563eu); f_005caba4();
    /* 005f563e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 005f5641: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005f5644: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 005f5647: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f5649: je 0x5f5683 */ if (fZ) goto L_005f5683;
L_005f564b:; BB(0x005f564b);
    /* 005f564b: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 005f5652: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 005f5659: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 005f565c: mov ecx, eax */ r_ecx = r_eax;
    /* 005f565e: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 005f5660: movzx eax, word ptr [edx + 0xe4] */ r_eax = (u32)R16((u32)(r_edx+0xe4u));
    /* 005f5667: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5668: push dword ptr [edx + 0x18c] */ { u32 v = R32((u32)(r_edx+0x18cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f566e: call 0x5e5cac */ r_esp -= 4; W32(r_esp, 0x5f5673u); f_005e5cac();
    /* 005f5673: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 005f5676: mov dword ptr [eax], 0xb0d8e0 */ W32((u32)(r_eax), 0xb0d8e0u);
    /* 005f567c: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_005f5683:; BB(0x005f5683);
    /* 005f5683: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5686: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f568d: mov esp, ebp */ r_esp = r_ebp;
    /* 005f568f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5690: ret  */ FN_RET(0x005f5594); r_esp += 4; return;
}

void f_005f5694(void) /* sub_5F5694 */
{
    FN_ENTER(0x005f5694);
    /* 005f5694: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5695: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5697: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f5699: push 0x8dd430 */ { u32 v = 0x8dd430u; r_esp -= 4; W32(r_esp, v); }
    /* 005f569e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f56a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f56a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f56ac: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f56af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f56b2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f56b5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f56b8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f56bb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f56be: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f56c0: je 0x5f5717 */ if (fZ) goto L_005f5717;
L_005f56c2:; BB(0x005f56c2);
    /* 005f56c2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f56c9: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005f56ce: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f56d3u); f_005caba4();
    /* 005f56d3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f56d4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f56d7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f56d9: je 0x5f5713 */ if (fZ) goto L_005f5713;
L_005f56db:; BB(0x005f56db);
    /* 005f56db: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f56e2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f56e9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f56ec: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f56ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f56f0: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f56f6: call 0x5f5728 */ r_esp -= 4; W32(r_esp, 0x5f56fbu); f_005f5728();
    /* 005f56fb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f56fe: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f5705:; BB(0x005f5705);
    /* 005f5705: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5708: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f570f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5711: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5712: ret  */ FN_RET(0x005f5694); r_esp += 4; return;
L_005f5713:; BB(0x005f5713);
    /* 005f5713: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f5715: jmp 0x5f5705 */ goto L_005f5705;
L_005f5717:; BB(0x005f5717);
    /* 005f5717: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f5719: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f571c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f5723: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5725: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5726: ret  */ FN_RET(0x005f5694); r_esp += 4; return;
}

void f_005f5728(void) /* sub_5F5728 */
{
    FN_ENTER(0x005f5728);
    /* 005f5728: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5729: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f572b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f572f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f5733: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005f5735: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f573au); f_005e959c();
    /* 005f573a: mov dword ptr [ebp], 0xb16ae0 */ W32((u32)(r_ebp), 0xb16ae0u);
    /* 005f5741: mov eax, ebp */ r_eax = r_ebp;
    /* 005f5743: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5744: ret 8 */ FN_RET(0x005f5728); r_esp += 12; return;
}

void f_005f5748(void) /* sub_5F5748 */
{
    FN_ENTER(0x005f5748);
    /* 005f5748: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5749: mov ebp, esp */ r_ebp = r_esp;
    /* 005f574b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f574d: push 0x8dd44c */ { u32 v = 0x8dd44cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f5752: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f5758: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5759: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f5760: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f5763: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f5766: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 005f5769: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 005f576c: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 005f576f: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 005f5772: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 005f5775: mov eax, ecx */ r_eax = r_ecx;
    /* 005f5777: mov dword ptr [eax], 0xb16c40 */ W32((u32)(r_eax), 0xb16c40u);
    /* 005f577d: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f5784: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f5789u); f_005e61c8();
    /* 005f5789: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f578c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f578e: jne 0x5f57a0 */ if (!fZ) goto L_005f57a0;
L_005f5790:; BB(0x005f5790);
    /* 005f5790: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5793: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f579a: mov esp, ebp */ r_esp = r_ebp;
    /* 005f579c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f579d: ret 4 */ FN_RET(0x005f5748); r_esp += 8; return;
L_005f57a0:; BB(0x005f57a0);
    /* 005f57a0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 005f57a3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f57a4: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f57a9u); f_005c2f74();
    /* 005f57a9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f57aa: jmp 0x5f5790 */ goto L_005f5790;
}

void f_005f57ac(void) /* sub_5F57AC */
{
    FN_ENTER(0x005f57ac);
    /* 005f57ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f57ad: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f57ae: mov edi, ecx */ r_edi = r_ecx;
    /* 005f57b0: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 005f57b2: mov ecx, edi */ r_ecx = r_edi;
    /* 005f57b4: call 0x5e6334 */ r_esp -= 4; W32(r_esp, 0x5f57b9u); f_005e6334();
    /* 005f57b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f57bb: mov ecx, edi */ r_ecx = r_edi;
    /* 005f57bd: call 0x5e6254 */ r_esp -= 4; W32(r_esp, 0x5f57c2u); f_005e6254();
    /* 005f57c2: mov esi, dword ptr [edi + 0xfc] */ r_esi = R32((u32)(r_edi+0xfcu));
    /* 005f57c8: mov eax, dword ptr [edi + 0x1ac] */ r_eax = R32((u32)(r_edi+0x1acu));
    /* 005f57ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f57d0: je 0x5f57d8 */ if (fZ) goto L_005f57d8;
L_005f57d2:; BB(0x005f57d2);
    /* 005f57d2: mov dword ptr [edi + 0xfc], eax */ W32((u32)(r_edi+0xfcu), r_eax);
L_005f57d8:; BB(0x005f57d8);
    /* 005f57d8: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 005f57da: mov ecx, edi */ r_ecx = r_edi;
    /* 005f57dc: call 0x5e6334 */ r_esp -= 4; W32(r_esp, 0x5f57e1u); f_005e6334();
    /* 005f57e1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f57e3: mov ecx, edi */ r_ecx = r_edi;
    /* 005f57e5: call 0x5e6254 */ r_esp -= 4; W32(r_esp, 0x5f57eau); f_005e6254();
    /* 005f57ea: mov dword ptr [edi + 0xfc], esi */ W32((u32)(r_edi+0xfcu), r_esi);
    /* 005f57f0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f57f1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f57f2: ret  */ FN_RET(0x005f57ac); r_esp += 4; return;
}

void f_005f57f4(void) /* sub_5F57F4 */
{
    FN_ENTER(0x005f57f4);
    /* 005f57f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f57f5: mov ebp, esp */ r_ebp = r_esp;
    /* 005f57f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f57f9: push 0x8dd474 */ { u32 v = 0x8dd474u; r_esp -= 4; W32(r_esp, v); }
    /* 005f57fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f5804: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5805: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f580c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f580f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f5812: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f5815: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f5818: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f581b: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f581e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5820: je 0x5f5877 */ if (fZ) goto L_005f5877;
L_005f5822:; BB(0x005f5822);
    /* 005f5822: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f5829: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005f582e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f5833u); f_005caba4();
    /* 005f5833: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f5834: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f5837: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5839: je 0x5f5873 */ if (fZ) goto L_005f5873;
L_005f583b:; BB(0x005f583b);
    /* 005f583b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f5842: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f5849: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f584c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f584f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5850: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f5856: call 0x5f5888 */ r_esp -= 4; W32(r_esp, 0x5f585bu); f_005f5888();
    /* 005f585b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f585e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f5865:; BB(0x005f5865);
    /* 005f5865: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5868: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f586f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5871: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5872: ret  */ FN_RET(0x005f57f4); r_esp += 4; return;
L_005f5873:; BB(0x005f5873);
    /* 005f5873: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f5875: jmp 0x5f5865 */ goto L_005f5865;
L_005f5877:; BB(0x005f5877);
    /* 005f5877: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f5879: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f587c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f5883: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5885: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5886: ret  */ FN_RET(0x005f57f4); r_esp += 4; return;
}

void f_005f5888(void) /* sub_5F5888 */
{
    FN_ENTER(0x005f5888);
    /* 005f5888: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5889: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f588b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f588f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f5893: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f5895: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f589au); f_005e959c();
    /* 005f589a: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f58a0: mov dword ptr [ebx], 0xb16c40 */ W32((u32)(r_ebx), 0xb16c40u);
    /* 005f58a6: or edx, 0x201 */ {  u32 a = r_edx; u32 b = 0x201u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f58ac: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f58b2: mov eax, ebx */ r_eax = r_ebx;
    /* 005f58b4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f58b5: ret 8 */ FN_RET(0x005f5888); r_esp += 12; return;
}

void f_005f58b8(void) /* sub_5F58B8 */
{
    FN_ENTER(0x005f58b8);
    /* 005f58b8: mov dword ptr [0xa8e00c], 0x3f800000 */ W32((u32)(0xa8e00cu), 0x3f800000u);
    /* 005f58c2: mov dword ptr [0xa8e010], 0x41000000 */ W32((u32)(0xa8e010u), 0x41000000u);
    /* 005f58cc: mov dword ptr [0xa8e014], 0x3fc00000 */ W32((u32)(0xa8e014u), 0x3fc00000u);
    /* 005f58d6: ret  */ FN_RET(0x005f58b8); r_esp += 4; return;
}

void f_005f58d8(void) /* sub_5F58D8 */
{
    FN_ENTER(0x005f58d8);
    /* 005f58d8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f58d9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f58db: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f58dd: call 0x5f58fc */ r_esp -= 4; W32(r_esp, 0x5f58e2u); f_005f58fc();
    /* 005f58e2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f58e6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f58e8: jne 0x5f58ee */ if (!fZ) goto L_005f58ee;
L_005f58ea:; BB(0x005f58ea);
    /* 005f58ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f58eb: ret 4 */ FN_RET(0x005f58d8); r_esp += 8; return;
L_005f58ee:; BB(0x005f58ee);
    /* 005f58ee: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f58ef: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f58f4u); f_005c2f74();
    /* 005f58f4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f58f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f58f6: ret 4 */ FN_RET(0x005f58d8); r_esp += 8; return;
}

void f_005f58fc(void) /* sub_5F58FC */
{
    FN_ENTER(0x005f58fc);
    /* 005f58fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f58fd: mov ebp, esp */ r_ebp = r_esp;
    /* 005f58ff: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f5901: push 0x8dd490 */ { u32 v = 0x8dd490u; r_esp -= 4; W32(r_esp, v); }
    /* 005f5906: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f590c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f590d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f5914: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f5917: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f591a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f591d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f5920: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f5923: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f5926: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f5929: mov dword ptr [ecx], 0xb16da0 */ W32((u32)(r_ecx), 0xb16da0u);
    /* 005f592f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f5936: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f593bu); f_005e61c8();
    /* 005f593b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f593e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f5945: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5947: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5948: ret  */ FN_RET(0x005f58fc); r_esp += 4; return;
}

void f_005f594c(void) /* sub_5F594C */
{
    FN_ENTER(0x005f594c);
    /* 005f594c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f594d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f594e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f5950: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 005f5952: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f5954: call 0x5e6334 */ r_esp -= 4; W32(r_esp, 0x5f5959u); f_005e6334();
    /* 005f5959: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f595b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f595d: call 0x5e6254 */ r_esp -= 4; W32(r_esp, 0x5f5962u); f_005e6254();
    /* 005f5962: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005f5964: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f5966: call 0x5e6254 */ r_esp -= 4; W32(r_esp, 0x5f596bu); f_005e6254();
    /* 005f596b: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 005f596d: mov ebp, dword ptr [ebx + 0xfc] */ r_ebp = R32((u32)(r_ebx+0xfcu));
    /* 005f5973: mov eax, dword ptr [ebx + 0x1ac] */ r_eax = R32((u32)(r_ebx+0x1acu));
    /* 005f5979: mov dword ptr [ebx + 0xfc], eax */ W32((u32)(r_ebx+0xfcu), r_eax);
    /* 005f597f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f5981: call 0x5e6334 */ r_esp -= 4; W32(r_esp, 0x5f5986u); f_005e6334();
    /* 005f5986: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 005f5988: mov dword ptr [ebx + 0xfc], ebp */ W32((u32)(r_ebx+0xfcu), r_ebp);
    /* 005f598e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f5990: call 0x5e6254 */ r_esp -= 4; W32(r_esp, 0x5f5995u); f_005e6254();
    /* 005f5995: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 005f5997: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f5999: call 0x5e6254 */ r_esp -= 4; W32(r_esp, 0x5f599eu); f_005e6254();
    /* 005f599e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f599f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f59a0: ret  */ FN_RET(0x005f594c); r_esp += 4; return;
}

void f_005f59a4(void) /* sub_5F59A4 */
{
    FN_ENTER(0x005f59a4);
    /* 005f59a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f59a5: mov ebp, esp */ r_ebp = r_esp;
    /* 005f59a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f59a9: push 0x8dd4b8 */ { u32 v = 0x8dd4b8u; r_esp -= 4; W32(r_esp, v); }
    /* 005f59ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f59b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f59b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f59bc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f59bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f59c2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f59c5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f59c8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f59cb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f59ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f59d0: je 0x5f5a27 */ if (fZ) goto L_005f5a27;
L_005f59d2:; BB(0x005f59d2);
    /* 005f59d2: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f59d9: push 0x240 */ { u32 v = 0x240u; r_esp -= 4; W32(r_esp, v); }
    /* 005f59de: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f59e3u); f_005caba4();
    /* 005f59e3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f59e4: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f59e7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f59e9: je 0x5f5a23 */ if (fZ) goto L_005f5a23;
L_005f59eb:; BB(0x005f59eb);
    /* 005f59eb: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f59f2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f59f9: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f59fc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f59ff: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5a00: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f5a06: call 0x5f5a38 */ r_esp -= 4; W32(r_esp, 0x5f5a0bu); f_005f5a38();
    /* 005f5a0b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f5a0e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f5a15:; BB(0x005f5a15);
    /* 005f5a15: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5a18: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f5a1f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5a21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5a22: ret  */ FN_RET(0x005f59a4); r_esp += 4; return;
L_005f5a23:; BB(0x005f5a23);
    /* 005f5a23: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f5a25: jmp 0x5f5a15 */ goto L_005f5a15;
L_005f5a27:; BB(0x005f5a27);
    /* 005f5a27: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f5a29: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5a2c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f5a33: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5a35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5a36: ret  */ FN_RET(0x005f59a4); r_esp += 4; return;
}

void f_005f5a38(void) /* sub_5F5A38 */
{
    FN_ENTER(0x005f5a38);
    /* 005f5a38: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5a39: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f5a3b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f5a3f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f5a43: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f5a45: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f5a4au); f_005e959c();
    /* 005f5a4a: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f5a50: mov dword ptr [ebx], 0xb16da0 */ W32((u32)(r_ebx), 0xb16da0u);
    /* 005f5a56: or edx, 0x201 */ {  u32 a = r_edx; u32 b = 0x201u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f5a5c: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f5a62: mov byte ptr [ebx + 0x1c2], 1 */ W8((u32)(r_ebx+0x1c2u), 0x1u);
    /* 005f5a69: mov eax, ebx */ r_eax = r_ebx;
    /* 005f5a6b: mov byte ptr [ebx + 0x1c6], 2 */ W8((u32)(r_ebx+0x1c6u), 0x2u);
    /* 005f5a72: mov byte ptr [ebx + 0x1c3], 3 */ W8((u32)(r_ebx+0x1c3u), 0x3u);
    /* 005f5a79: mov byte ptr [ebx + 0x1c7], 4 */ W8((u32)(r_ebx+0x1c7u), 0x4u);
    /* 005f5a80: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f5a81: ret 8 */ FN_RET(0x005f5a38); r_esp += 12; return;
}

void f_005f5a84(void) /* sub_5F5A84 */
{
    FN_ENTER(0x005f5a84);
    /* 005f5a84: mov dword ptr [0xa8e018], 0x3f800000 */ W32((u32)(0xa8e018u), 0x3f800000u);
    /* 005f5a8e: mov dword ptr [0xa8e01c], 0x41000000 */ W32((u32)(0xa8e01cu), 0x41000000u);
    /* 005f5a98: mov dword ptr [0xa8e020], 0x3fc00000 */ W32((u32)(0xa8e020u), 0x3fc00000u);
    /* 005f5aa2: ret  */ FN_RET(0x005f5a84); r_esp += 4; return;
}

void f_005f5aa4(void) /* sub_5F5AA4 */
{
    FN_ENTER(0x005f5aa4);
    /* 005f5aa4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5aa5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f5aa7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f5aa9: call 0x5f5ac8 */ r_esp -= 4; W32(r_esp, 0x5f5aaeu); f_005f5ac8();
    /* 005f5aae: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f5ab2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f5ab4: jne 0x5f5aba */ if (!fZ) goto L_005f5aba;
L_005f5ab6:; BB(0x005f5ab6);
    /* 005f5ab6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f5ab7: ret 4 */ FN_RET(0x005f5aa4); r_esp += 8; return;
L_005f5aba:; BB(0x005f5aba);
    /* 005f5aba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5abb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f5ac0u); f_005c2f74();
    /* 005f5ac0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f5ac1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f5ac2: ret 4 */ FN_RET(0x005f5aa4); r_esp += 8; return;
}

void f_005f5ac8(void) /* sub_5F5AC8 */
{
    FN_ENTER(0x005f5ac8);
    /* 005f5ac8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5ac9: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5acb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f5acd: push 0x8dd4d4 */ { u32 v = 0x8dd4d4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f5ad2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f5ad8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5ad9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f5ae0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f5ae3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f5ae6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f5ae9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f5aec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f5aef: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f5af2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f5af5: mov dword ptr [ecx], 0xb16f00 */ W32((u32)(r_ecx), 0xb16f00u);
    /* 005f5afb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f5b02: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f5b07u); f_005e61c8();
    /* 005f5b07: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5b0a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f5b11: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5b13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5b14: ret  */ FN_RET(0x005f5ac8); r_esp += 4; return;
}

void f_005f5b18(void) /* sub_5F5B18 */
{
    FN_ENTER(0x005f5b18);
    /* 005f5b18: mov edx, ecx */ r_edx = r_ecx;
    /* 005f5b1a: mov eax, dword ptr [0xa8d84c] */ r_eax = R32((u32)(0xa8d84cu));
    /* 005f5b1f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5b22: jne 0x5f5b32 */ if (!fZ) goto L_005f5b32;
L_005f5b24:; BB(0x005f5b24);
    /* 005f5b24: mov edx, dword ptr [edx + 0x240] */ r_edx = R32((u32)(r_edx+0x240u));
    /* 005f5b2a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f5b2c: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5f5b31u); f_00830c04();
    /* 005f5b31: ret  */ FN_RET(0x005f5b18); r_esp += 4; return;
L_005f5b32:; BB(0x005f5b32);
    /* 005f5b32: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f5b35: jne 0x5f5b44 */ if (!fZ) goto L_005f5b44;
L_005f5b37:; BB(0x005f5b37);
    /* 005f5b37: mov edx, dword ptr [edx + 0x244] */ r_edx = R32((u32)(r_edx+0x244u));
    /* 005f5b3d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005f5b3f: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x5f5b44u); f_00830c04();
L_005f5b44:; BB(0x005f5b44);
    /* 005f5b44: ret  */ FN_RET(0x005f5b18); r_esp += 4; return;
}

void f_005f5b48(void) /* sub_5F5B48 */
{
    FN_ENTER(0x005f5b48);
    /* 005f5b48: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5b49: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f5b4b: lea eax, [ebp + 0x240] */ r_eax = (u32)(r_ebp+0x240u);
    /* 005f5b51: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f5b53: push 0x4000 */ { u32 v = 0x4000u; r_esp -= 4; W32(r_esp, v); }
    /* 005f5b58: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5b59: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5f5b5eu); f_005dd6f8();
    /* 005f5b5e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005f5b60: push 0xe38 */ { u32 v = 0xe38u; r_esp -= 4; W32(r_esp, v); }
    /* 005f5b65: add ebp, 0x244 */ {  u32 a = r_ebp; u32 b = 0x244u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005f5b6b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5b6c: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5f5b71u); f_005dd6f8();
    /* 005f5b71: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f5b74: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5b75: ret  */ FN_RET(0x005f5b48); r_esp += 4; return;
}

void f_005f5b78(void) /* sub_5F5B78 */
{
    FN_ENTER(0x005f5b78);
    /* 005f5b78: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5b79: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005f5b7b: lea eax, [ebp + 0x240] */ r_eax = (u32)(r_ebp+0x240u);
    /* 005f5b81: push 0xffff871d */ { u32 v = 0xffff871du; r_esp -= 4; W32(r_esp, v); }
    /* 005f5b86: push 0xffffe000 */ { u32 v = 0xffffe000u; r_esp -= 4; W32(r_esp, v); }
    /* 005f5b8b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5b8c: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5f5b91u); f_005dd6f8();
    /* 005f5b91: push 0xffffe38f */ { u32 v = 0xffffe38fu; r_esp -= 4; W32(r_esp, v); }
    /* 005f5b96: push 0xfffff8e4 */ { u32 v = 0xfffff8e4u; r_esp -= 4; W32(r_esp, v); }
    /* 005f5b9b: add ebp, 0x244 */ {  u32 a = r_ebp; u32 b = 0x244u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005f5ba1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5ba2: call 0x5dd6f8 */ r_esp -= 4; W32(r_esp, 0x5f5ba7u); f_005dd6f8();
    /* 005f5ba7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f5baa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5bab: ret  */ FN_RET(0x005f5b78); r_esp += 4; return;
}

void f_005f5bac(void) /* sub_5F5BAC */
{
    FN_ENTER(0x005f5bac);
    /* 005f5bac: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5bad: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5baf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f5bb1: push 0x8dd4fc */ { u32 v = 0x8dd4fcu; r_esp -= 4; W32(r_esp, v); }
    /* 005f5bb6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f5bbc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5bbd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f5bc4: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f5bc7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f5bca: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f5bcd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f5bd0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f5bd3: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f5bd6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5bd8: je 0x5f5c2f */ if (fZ) goto L_005f5c2f;
L_005f5bda:; BB(0x005f5bda);
    /* 005f5bda: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f5be1: push 0x248 */ { u32 v = 0x248u; r_esp -= 4; W32(r_esp, v); }
    /* 005f5be6: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f5bebu); f_005caba4();
    /* 005f5beb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f5bec: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f5bef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5bf1: je 0x5f5c2b */ if (fZ) goto L_005f5c2b;
L_005f5bf3:; BB(0x005f5bf3);
    /* 005f5bf3: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f5bfa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f5c01: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f5c04: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f5c07: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5c08: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f5c0e: call 0x5f5c40 */ r_esp -= 4; W32(r_esp, 0x5f5c13u); f_005f5c40();
    /* 005f5c13: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f5c16: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f5c1d:; BB(0x005f5c1d);
    /* 005f5c1d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5c20: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f5c27: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5c29: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5c2a: ret  */ FN_RET(0x005f5bac); r_esp += 4; return;
L_005f5c2b:; BB(0x005f5c2b);
    /* 005f5c2b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f5c2d: jmp 0x5f5c1d */ goto L_005f5c1d;
L_005f5c2f:; BB(0x005f5c2f);
    /* 005f5c2f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f5c31: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5c34: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f5c3b: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5c3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5c3e: ret  */ FN_RET(0x005f5bac); r_esp += 4; return;
}

void f_005f5c40(void) /* sub_5F5C40 */
{
    FN_ENTER(0x005f5c40);
    /* 005f5c40: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5c41: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f5c43: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f5c47: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f5c4b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f5c4d: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f5c52u); f_005e959c();
    /* 005f5c52: mov edx, dword ptr [ebx + 0x1dc] */ r_edx = R32((u32)(r_ebx+0x1dcu));
    /* 005f5c58: mov dword ptr [ebx], 0xb16f00 */ W32((u32)(r_ebx), 0xb16f00u);
    /* 005f5c5e: or edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f5c61: mov dword ptr [ebx + 0x1dc], edx */ W32((u32)(r_ebx+0x1dcu), r_edx);
    /* 005f5c67: mov dword ptr [ebx + 0x240], 0xffff871d */ W32((u32)(r_ebx+0x240u), 0xffff871du);
    /* 005f5c71: mov eax, ebx */ r_eax = r_ebx;
    /* 005f5c73: mov dword ptr [ebx + 0x244], 0xffffe38f */ W32((u32)(r_ebx+0x244u), 0xffffe38fu);
    /* 005f5c7d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f5c7e: ret 8 */ FN_RET(0x005f5c40); r_esp += 12; return;
}

void f_005f5c84(void) /* sub_5F5C84 */
{
    FN_ENTER(0x005f5c84);
    /* 005f5c84: mov dword ptr [0xa8e024], 0x3f800000 */ W32((u32)(0xa8e024u), 0x3f800000u);
    /* 005f5c8e: mov dword ptr [0xa8e028], 0x41000000 */ W32((u32)(0xa8e028u), 0x41000000u);
    /* 005f5c98: mov dword ptr [0xa8e02c], 0x3fc00000 */ W32((u32)(0xa8e02cu), 0x3fc00000u);
    /* 005f5ca2: ret  */ FN_RET(0x005f5c84); r_esp += 4; return;
}

void f_005f5ca4(void) /* sub_5F5CA4 */
{
    FN_ENTER(0x005f5ca4);
    /* 005f5ca4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5ca5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f5ca7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f5ca9: call 0x5f5cc8 */ r_esp -= 4; W32(r_esp, 0x5f5caeu); f_005f5cc8();
    /* 005f5cae: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f5cb2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f5cb4: jne 0x5f5cba */ if (!fZ) goto L_005f5cba;
L_005f5cb6:; BB(0x005f5cb6);
    /* 005f5cb6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f5cb7: ret 4 */ FN_RET(0x005f5ca4); r_esp += 8; return;
L_005f5cba:; BB(0x005f5cba);
    /* 005f5cba: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5cbb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f5cc0u); f_005c2f74();
    /* 005f5cc0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f5cc1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f5cc2: ret 4 */ FN_RET(0x005f5ca4); r_esp += 8; return;
}

void f_005f5cc8(void) /* sub_5F5CC8 */
{
    FN_ENTER(0x005f5cc8);
    /* 005f5cc8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5cc9: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5ccb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f5ccd: push 0x8dd518 */ { u32 v = 0x8dd518u; r_esp -= 4; W32(r_esp, v); }
    /* 005f5cd2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f5cd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5cd9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f5ce0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f5ce3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f5ce6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f5ce9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f5cec: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f5cef: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f5cf2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f5cf5: mov dword ptr [ecx], 0xb17060 */ W32((u32)(r_ecx), 0xb17060u);
    /* 005f5cfb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f5d02: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f5d07u); f_005e61c8();
    /* 005f5d07: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5d0a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f5d11: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5d13: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5d14: ret  */ FN_RET(0x005f5cc8); r_esp += 4; return;
}

void f_005f5d18(void) /* sub_5F5D18 */
{
    FN_ENTER(0x005f5d18);
    /* 005f5d18: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f5d19: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f5d1c: mov edi, ecx */ r_edi = r_ecx;
    /* 005f5d1e: mov ecx, edi */ r_ecx = r_edi;
    /* 005f5d20: call 0x5e90b0 */ r_esp -= 4; W32(r_esp, 0x5f5d25u); f_005e90b0();
    /* 005f5d25: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5d27: je 0x5f5d72 */ if (fZ) goto L_005f5d72;
L_005f5d29:; BB(0x005f5d29);
    /* 005f5d29: mov edx, dword ptr [edi + 0xf8] */ r_edx = R32((u32)(r_edi+0xf8u));
    /* 005f5d2f: fld dword ptr [edx + 0x520] */ FPUSH(R_F32((u32)(r_edx+0x520u)));
    /* 005f5d35: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 005f5d38: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 005f5d3c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005f5d41: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005f5d45: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005f5d49: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 005f5d4d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 005f5d50: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005f5d54: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005f5d57: jl 0x5f5d66 */ if ((fS!=fO)) goto L_005f5d66;
L_005f5d59:; BB(0x005f5d59);
    /* 005f5d59: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5d5a: mov ecx, edi */ r_ecx = r_edi;
    /* 005f5d5c: call 0x5c36cc */ r_esp -= 4; W32(r_esp, 0x5f5d61u); f_005c36cc();
    /* 005f5d61: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f5d64: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f5d65: ret  */ FN_RET(0x005f5d18); r_esp += 4; return;
L_005f5d66:; BB(0x005f5d66);
    /* 005f5d66: mov ecx, edi */ r_ecx = r_edi;
    /* 005f5d68: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5f5d6du); f_005e90e8();
    /* 005f5d6d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f5d70: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f5d71: ret  */ FN_RET(0x005f5d18); r_esp += 4; return;
L_005f5d72:; BB(0x005f5d72);
    /* 005f5d72: mov ecx, edi */ r_ecx = r_edi;
    /* 005f5d74: call 0x5e90e8 */ r_esp -= 4; W32(r_esp, 0x5f5d79u); f_005e90e8();
    /* 005f5d79: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005f5d7c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f5d7d: ret  */ FN_RET(0x005f5d18); r_esp += 4; return;
}

void f_005f5d80(void) /* sub_5F5D80 */
{
    FN_ENTER(0x005f5d80);
    /* 005f5d80: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005f5d81: mov esi, ecx */ r_esi = r_ecx;
    /* 005f5d83: mov eax, dword ptr [esi + 0xf8] */ r_eax = R32((u32)(r_esi+0xf8u));
    /* 005f5d89: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f5d8b: je 0x5f5dcd */ if (fZ) goto L_005f5dcd;
L_005f5d8d:; BB(0x005f5d8d);
    /* 005f5d8d: call 0x807d60 */ r_esp -= 4; W32(r_esp, 0x5f5d92u); f_00807d60();
    /* 005f5d92: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f5d94: je 0x5f5dcd */ if (fZ) goto L_005f5dcd;
L_005f5d96:; BB(0x005f5d96);
    /* 005f5d96: mov eax, dword ptr [0xaafca0] */ r_eax = R32((u32)(0xaafca0u));
    /* 005f5d9b: mov edx, dword ptr [esi + 0xf8] */ r_edx = R32((u32)(r_esi+0xf8u));
    /* 005f5da1: cmp eax, dword ptr [edx + 0x3f0] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x3f0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f5da7: jne 0x5f5dcd */ if (!fZ) goto L_005f5dcd;
L_005f5da9:; BB(0x005f5da9);
    /* 005f5da9: movsx eax, byte ptr [esi + 0xf1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+0xf1u));
    /* 005f5db0: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f5db3: jne 0x5f5dcd */ if (!fZ) goto L_005f5dcd;
L_005f5db5:; BB(0x005f5db5);
    /* 005f5db5: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f5db9: push dword ptr [esi + 0x240] */ { u32 v = R32((u32)(r_esi+0x240u)); r_esp -= 4; W32(r_esp, v); }
    /* 005f5dbf: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005f5dc5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5dc6: mov ecx, esi */ r_ecx = r_esi;
    /* 005f5dc8: call 0x5e73a8 */ r_esp -= 4; W32(r_esp, 0x5f5dcdu); f_005e73a8();
L_005f5dcd:; BB(0x005f5dcd);
    /* 005f5dcd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005f5dce: ret 4 */ FN_RET(0x005f5d80); r_esp += 8; return;
}

void f_005f5dd4(void) /* sub_5F5DD4 */
{
    FN_ENTER(0x005f5dd4);
    /* 005f5dd4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5dd5: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5dd7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f5dd9: push 0x8dd540 */ { u32 v = 0x8dd540u; r_esp -= 4; W32(r_esp, v); }
    /* 005f5dde: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f5de4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5de5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f5dec: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f5def: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f5df2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f5df5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f5df8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f5dfb: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f5dfe: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5e00: je 0x5f5e57 */ if (fZ) goto L_005f5e57;
L_005f5e02:; BB(0x005f5e02);
    /* 005f5e02: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f5e09: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 005f5e0e: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f5e13u); f_005caba4();
    /* 005f5e13: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f5e14: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f5e17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f5e19: je 0x5f5e53 */ if (fZ) goto L_005f5e53;
L_005f5e1b:; BB(0x005f5e1b);
    /* 005f5e1b: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f5e22: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f5e29: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f5e2c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f5e2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5e30: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f5e36: call 0x5f5e68 */ r_esp -= 4; W32(r_esp, 0x5f5e3bu); f_005f5e68();
    /* 005f5e3b: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f5e3e: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f5e45:; BB(0x005f5e45);
    /* 005f5e45: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5e48: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f5e4f: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5e51: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5e52: ret  */ FN_RET(0x005f5dd4); r_esp += 4; return;
L_005f5e53:; BB(0x005f5e53);
    /* 005f5e53: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f5e55: jmp 0x5f5e45 */ goto L_005f5e45;
L_005f5e57:; BB(0x005f5e57);
    /* 005f5e57: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f5e59: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5e5c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f5e63: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5e65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5e66: ret  */ FN_RET(0x005f5dd4); r_esp += 4; return;
}

void f_005f5e68(void) /* sub_5F5E68 */
{
    FN_ENTER(0x005f5e68);
    /* 005f5e68: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005f5e69: mov edi, ecx */ r_edi = r_ecx;
    /* 005f5e6b: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f5e6f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f5e73: mov ecx, edi */ r_ecx = r_edi;
    /* 005f5e75: call 0x5e959c */ r_esp -= 4; W32(r_esp, 0x5f5e7au); f_005e959c();
    /* 005f5e7a: mov edx, dword ptr [edi + 0x1dc] */ r_edx = R32((u32)(r_edi+0x1dcu));
    /* 005f5e80: movzx eax, byte ptr [edi + 0xf3] */ r_eax = (u32)R8((u32)(r_edi+0xf3u));
    /* 005f5e87: mov dword ptr [edi], 0xb17060 */ W32((u32)(r_edi), 0xb17060u);
    /* 005f5e8d: or edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 005f5e90: cmp eax, 0x3d */ {  u32 a = r_eax; u32 b = 0x3du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005f5e93: jne 0x5f5ead */ if (!fZ) goto L_005f5ead;
L_005f5e95:; BB(0x005f5e95);
    /* 005f5e95: mov dword ptr [edi + 0x240], 0x428c0000 */ W32((u32)(r_edi+0x240u), 0x428c0000u);
    /* 005f5e9f: or edx, 0x100000 */ {  u32 a = r_edx; u32 b = 0x100000u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f5ea5: mov dword ptr [edi + 0x1dc], edx */ W32((u32)(r_edi+0x1dcu), r_edx);
    /* 005f5eab: jmp 0x5f5ebd */ goto L_005f5ebd;
L_005f5ead:; BB(0x005f5ead);
    /* 005f5ead: mov dword ptr [edi + 0x240], 0x42c80000 */ W32((u32)(r_edi+0x240u), 0x42c80000u);
    /* 005f5eb7: mov dword ptr [edi + 0x1dc], edx */ W32((u32)(r_edi+0x1dcu), r_edx);
L_005f5ebd:; BB(0x005f5ebd);
    /* 005f5ebd: mov eax, edi */ r_eax = r_edi;
    /* 005f5ebf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005f5ec0: ret 8 */ FN_RET(0x005f5e68); r_esp += 12; return;
}

void f_005f5ec4(void) /* sub_5F5EC4 */
{
    FN_ENTER(0x005f5ec4);
    /* 005f5ec4: mov dword ptr [0xa8e030], 0x3f800000 */ W32((u32)(0xa8e030u), 0x3f800000u);
    /* 005f5ece: mov dword ptr [0xa8e034], 0x41000000 */ W32((u32)(0xa8e034u), 0x41000000u);
    /* 005f5ed8: mov dword ptr [0xa8e038], 0x3fc00000 */ W32((u32)(0xa8e038u), 0x3fc00000u);
    /* 005f5ee2: ret  */ FN_RET(0x005f5ec4); r_esp += 4; return;
}

void f_005f5ee4(void) /* sub_5F5EE4 */
{
    FN_ENTER(0x005f5ee4);
    /* 005f5ee4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5ee5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005f5ee7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005f5ee9: call 0x5f5f08 */ r_esp -= 4; W32(r_esp, 0x5f5eeeu); f_005f5f08();
    /* 005f5eee: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005f5ef2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f5ef4: jne 0x5f5efa */ if (!fZ) goto L_005f5efa;
L_005f5ef6:; BB(0x005f5ef6);
    /* 005f5ef6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f5ef7: ret 4 */ FN_RET(0x005f5ee4); r_esp += 8; return;
L_005f5efa:; BB(0x005f5efa);
    /* 005f5efa: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005f5efb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5f5f00u); f_005c2f74();
    /* 005f5f00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f5f01: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005f5f02: ret 4 */ FN_RET(0x005f5ee4); r_esp += 8; return;
}

void f_005f5f08(void) /* sub_5F5F08 */
{
    FN_ENTER(0x005f5f08);
    /* 005f5f08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5f09: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5f0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f5f0d: push 0x8dd55c */ { u32 v = 0x8dd55cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f5f12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f5f18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5f19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f5f20: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f5f23: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f5f26: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f5f29: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f5f2c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f5f2f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005f5f32: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f5f35: mov dword ptr [ecx], 0xb171c0 */ W32((u32)(r_ecx), 0xb171c0u);
    /* 005f5f3b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005f5f42: call 0x5e61c8 */ r_esp -= 4; W32(r_esp, 0x5f5f47u); f_005e61c8();
    /* 005f5f47: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f5f4a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f5f51: mov esp, ebp */ r_esp = r_ebp;
    /* 005f5f53: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f5f54: ret  */ FN_RET(0x005f5f08); r_esp += 4; return;
}

void f_005f5f58(void) /* sub_5F5F58 */
{
    FN_ENTER(0x005f5f58);
    /* 005f5f58: fld dword ptr [0x92db98] */ FPUSH(R_F32((u32)(0x92db98u)));
    /* 005f5f5e: fld dword ptr [ecx + 0x248] */ FPUSH(R_F32((u32)(r_ecx+0x248u)));
    /* 005f5f64: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005f5f66: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005f5f68: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005f5f69: jae 0x5f5f91 */ if (!fC) goto L_005f5f91;
L_005f5f6b:; BB(0x005f5f6b);
    /* 005f5f6b: fld dword ptr [0x92db94] */ FPUSH(R_F32((u32)(0x92db94u)));
    /* 005f5f71: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 005f5f73: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005f5f75: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 005f5f77: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005f5f79: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005f5f7a: jae 0x5f5f8a */ if (!fC) goto L_005f5f8a;
L_005f5f7c:; BB(0x005f5f7c);
    /* 005f5f7c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005f5f7e: mov eax, 0x3f800000 */ r_eax = 0x3f800000u;
    /* 005f5f83: mov dword ptr [ecx + 0x248], eax */ W32((u32)(r_ecx+0x248u), r_eax);
    /* 005f5f89: ret  */ FN_RET(0x005f5f58); r_esp += 4; return;
L_005f5f8a:; BB(0x005f5f8a);
    /* 005f5f8a: fstp dword ptr [ecx + 0x248] */ W_F32((u32)(r_ecx+0x248u), ST(0)); FPOP();
    /* 005f5f90: ret  */ FN_RET(0x005f5f58); r_esp += 4; return;
L_005f5f91:; BB(0x005f5f91);
    /* 005f5f91: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005f5f93: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005f5f95: ret  */ FN_RET(0x005f5f58); r_esp += 4; return;
}

void f_005f5f98(void) /* sub_5F5F98 */
{
    FN_ENTER(0x005f5f98);
    /* 005f5f98: fld dword ptr [0x92db90] */ FPUSH(R_F32((u32)(0x92db90u)));
    /* 005f5f9e: fld dword ptr [ecx + 0x248] */ FPUSH(R_F32((u32)(r_ecx+0x248u)));
    /* 005f5fa4: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005f5fa6: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005f5fa8: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005f5fa9: jbe 0x5f5fd3 */ if ((fC||fZ)) goto L_005f5fd3;
L_005f5fab:; BB(0x005f5fab);
    /* 005f5fab: fld dword ptr [0x92db94] */ FPUSH(R_F32((u32)(0x92db94u)));
    /* 005f5fb1: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 005f5fb3: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005f5fb5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005f5fb7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005f5fb9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005f5fbb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005f5fbc: jae 0x5f5fcc */ if (!fC) goto L_005f5fcc;
L_005f5fbe:; BB(0x005f5fbe);
    /* 005f5fbe: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005f5fc0: mov eax, 0x3da3d70a */ r_eax = 0x3da3d70au;
    /* 005f5fc5: mov dword ptr [ecx + 0x248], eax */ W32((u32)(r_ecx+0x248u), r_eax);
    /* 005f5fcb: ret  */ FN_RET(0x005f5f98); r_esp += 4; return;
L_005f5fcc:; BB(0x005f5fcc);
    /* 005f5fcc: fstp dword ptr [ecx + 0x248] */ W_F32((u32)(r_ecx+0x248u), ST(0)); FPOP();
    /* 005f5fd2: ret  */ FN_RET(0x005f5f98); r_esp += 4; return;
L_005f5fd3:; BB(0x005f5fd3);
    /* 005f5fd3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005f5fd5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005f5fd7: ret  */ FN_RET(0x005f5f98); r_esp += 4; return;
}

void f_005f5fd8(void) /* sub_5F5FD8 */
{
    FN_ENTER(0x005f5fd8);
    /* 005f5fd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005f5fd9: mov ebp, esp */ r_ebp = r_esp;
    /* 005f5fdb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005f5fdd: push 0x8dd584 */ { u32 v = 0x8dd584u; r_esp -= 4; W32(r_esp, v); }
    /* 005f5fe2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005f5fe8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f5fe9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005f5ff0: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005f5ff3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005f5ff6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005f5ff9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005f5ffc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005f5fff: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f6002: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f6004: je 0x5f605b */ if (fZ) goto L_005f605b;
L_005f6006:; BB(0x005f6006);
    /* 005f6006: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005f600d: push 0x24c */ { u32 v = 0x24cu; r_esp -= 4; W32(r_esp, v); }
    /* 005f6012: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5f6017u); f_005caba4();
    /* 005f6017: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005f6018: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005f601b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005f601d: je 0x5f6057 */ if (fZ) goto L_005f6057;
L_005f601f:; BB(0x005f601f);
    /* 005f601f: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005f6026: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005f602d: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 005f6030: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f6033: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005f6034: push dword ptr [0xaca36c] */ { u32 v = R32((u32)(0xaca36cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005f603a: call 0x5f606c */ r_esp -= 4; W32(r_esp, 0x5f603fu); f_005f606c();
    /* 005f603f: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005f6042: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005f6049:; BB(0x005f6049);
    /* 005f6049: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f604c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f6053: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6055: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f6056: ret  */ FN_RET(0x005f5fd8); r_esp += 4; return;
L_005f6057:; BB(0x005f6057);
    /* 005f6057: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f6059: jmp 0x5f6049 */ goto L_005f6049;
L_005f605b:; BB(0x005f605b);
    /* 005f605b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005f605d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005f6060: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005f6067: mov esp, ebp */ r_esp = r_ebp;
    /* 005f6069: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005f606a: ret  */ FN_RET(0x005f5fd8); r_esp += 4; return;
}

