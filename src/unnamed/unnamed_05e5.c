#include "protos.h"

void f_005e5098(void) /* sub_5E5098 */
{
    FN_ENTER(0x005e5098);
    /* 005e5098: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e5099: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e509a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e509b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e509c: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e509f: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 005e50a3: mov eax, ebp */ r_eax = r_ebp;
    /* 005e50a5: call 0x5e4f9c */ r_esp -= 4; W32(r_esp, 0x5e50aau); f_005e4f9c();
    /* 005e50aa: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 005e50ad: cmp eax, 0xed */ {  u32 a = r_eax; u32 b = 0xedu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e50b2: jge 0x5e51e7 */ if ((fS==fO)) goto L_005e51e7;
L_005e50b8:; BB(0x005e50b8);
    /* 005e50b8: mov ecx, dword ptr [0xa8dc94] */ r_ecx = R32((u32)(0xa8dc94u));
    /* 005e50be: mov edx, dword ptr [ecx + 0x34] */ r_edx = R32((u32)(r_ecx+0x34u));
    /* 005e50c1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e50c3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e50c5: mov ebx, dword ptr [edx + eax*8 + 0x10] */ r_ebx = R32((u32)(r_edx+r_eax*8+0x10u));
    /* 005e50c9: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 005e50cd: mov ecx, dword ptr [edx + eax*8 + 0x14] */ r_ecx = R32((u32)(r_edx+r_eax*8+0x14u));
    /* 005e50d1: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 005e50d5: mov ecx, dword ptr [edx + eax*8 + 0x18] */ r_ecx = R32((u32)(r_edx+r_eax*8+0x18u));
    /* 005e50d9: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 005e50dd: mov edx, dword ptr [edx + eax*8 + 0x1c] */ r_edx = R32((u32)(r_edx+r_eax*8+0x1cu));
    /* 005e50e1: mov ecx, dword ptr [ebp + 0x10] */ r_ecx = R32((u32)(r_ebp+0x10u));
    /* 005e50e4: lea ebx, [ecx + ecx] */ r_ebx = (u32)(r_ecx+r_ecx);
    /* 005e50e7: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005e50e9: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 005e50ed: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 005e50f0: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005e50f2: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005e50f4: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005e50f6: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005e50f8: mov ecx, dword ptr [edx + 0xa4] */ r_ecx = R32((u32)(r_edx+0xa4u));
    /* 005e50fe: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005e5100: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005e5102: lea ecx, [ecx + ebx + 0x1c] */ r_ecx = (u32)(r_ecx+r_ebx+0x1cu);
    /* 005e5106: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 005e510a: movzx ecx, word ptr [edx + 0x1c] */ r_ecx = (u32)R16((u32)(r_edx+0x1cu));
    /* 005e510e: cmp ecx, 0x1000 */ {  u32 a = r_ecx; u32 b = 0x1000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e5114: jge 0x5e5124 */ if ((fS==fO)) goto L_005e5124;
L_005e5116:; BB(0x005e5116);
    /* 005e5116: movsx ecx, byte ptr [edx + 0x961] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edx+0x961u));
    /* 005e511d: mov eax, 1 */ r_eax = 0x1u;
    /* 005e5122: jmp 0x5e513e */ goto L_005e513e;
L_005e5124:; BB(0x005e5124);
    /* 005e5124: mov eax, 3 */ r_eax = 0x3u;
    /* 005e5129: cmp ecx, 0x4000 */ {  u32 a = r_ecx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e512f: jge 0x5e5139 */ if ((fS==fO)) goto L_005e5139;
L_005e5131:; BB(0x005e5131);
    /* 005e5131: mov ecx, dword ptr [edx + 0x378] */ r_ecx = R32((u32)(r_edx+0x378u));
    /* 005e5137: jmp 0x5e513e */ goto L_005e513e;
L_005e5139:; BB(0x005e5139);
    /* 005e5139: mov ecx, 0x30 */ r_ecx = 0x30u;
L_005e513e:; BB(0x005e513e);
    /* 005e513e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005e5140: mov edx, eax */ r_edx = r_eax;
    /* 005e5142: and edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 005e5145: and eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005e5148: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 005e514c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e514e: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 005e5152: mov esi, edx */ r_esi = r_edx;
    /* 005e5154: mov edi, ebp */ r_edi = r_ebp;
L_005e5156:; BB(0x005e5156);
    /* 005e5156: mov ecx, dword ptr [esp + ebx*4 + 4] */ r_ecx = R32((u32)(r_esp+r_ebx*4+0x4u));
    /* 005e515a: mov ebp, dword ptr [esp + ebx*4 + 0xc] */ r_ebp = R32((u32)(r_esp+r_ebx*4+0xcu));
    /* 005e515e: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005e5161: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5163: je 0x5e51b8 */ if (fZ) goto L_005e51b8;
L_005e5165:; BB(0x005e5165);
    /* 005e5165: mov eax, dword ptr [0xa8dc94] */ r_eax = R32((u32)(0xa8dc94u));
    /* 005e516a: mov eax, dword ptr [eax + 0x48] */ r_eax = R32((u32)(r_eax+0x48u));
    /* 005e516d: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005e5170: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 005e5172: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5174: je 0x5e51b0 */ if (fZ) goto L_005e51b0;
L_005e5176:; BB(0x005e5176);
    /* 005e5176: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 005e517a: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 005e517e: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
L_005e5182:; BB(0x005e5182);
    /* 005e5182: cmp ecx, dword ptr [edx] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5184: jne 0x5e5198 */ if (!fZ) goto L_005e5198;
L_005e5186:; BB(0x005e5186);
    /* 005e5186: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5188: je 0x5e5192 */ if (fZ) goto L_005e5192;
L_005e518a:; BB(0x005e518a);
    /* 005e518a: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 005e518d: mov ecx, dword ptr [ecx + esi*2] */ r_ecx = R32((u32)(r_ecx+r_esi*2));
    /* 005e5190: jmp 0x5e5198 */ goto L_005e5198;
L_005e5192:; BB(0x005e5192);
    /* 005e5192: mov ecx, dword ptr [edx + 8] */ r_ecx = R32((u32)(r_edx+0x8u));
    /* 005e5195: mov ecx, dword ptr [ecx + esi*2] */ r_ecx = R32((u32)(r_ecx+r_esi*2));
L_005e5198:; BB(0x005e5198);
    /* 005e5198: add edx, 0xc */ {  u32 a = r_edx; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e519b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 005e519e: jne 0x5e5182 */ if (!fZ) goto L_005e5182;
L_005e51a0:; BB(0x005e51a0);
    /* 005e51a0: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 005e51a4: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 005e51a8: mov dword ptr [esp + 0x1c], edi */ W32((u32)(r_esp+0x1cu), r_edi);
    /* 005e51ac: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
L_005e51b0:; BB(0x005e51b0);
    /* 005e51b0: movzx eax, byte ptr [edi] */ r_eax = (u32)R8((u32)(r_edi));
    /* 005e51b3: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e51b6: je 0x5e51ef */ if (fZ) goto L_005e51ef;
L_005e51b8:; BB(0x005e51b8);
    /* 005e51b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e51ba: je 0x5e51de */ if (fZ) goto L_005e51de;
L_005e51bc:; BB(0x005e51bc);
    /* 005e51bc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e51be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e51bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e51c0: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 005e51c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e51c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e51c6: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5e51cbu); f_00814298();
    /* 005e51cb: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e51ce: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e51d0: je 0x5e51de */ if (fZ) goto L_005e51de;
L_005e51d2:; BB(0x005e51d2);
    /* 005e51d2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e51d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e51d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e51d6: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x5e51dbu); f_00814664();
    /* 005e51db: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005e51de:; BB(0x005e51de);
    /* 005e51de: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e51e1: jne 0x5e5156 */ if (!fZ) goto L_005e5156;
L_005e51e7:; BB(0x005e51e7);
    /* 005e51e7: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e51ea: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e51eb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e51ec: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e51ed: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e51ee: ret  */ FN_RET(0x005e5098); r_esp += 4; return;
L_005e51ef:; BB(0x005e51ef);
    /* 005e51ef: movzx eax, byte ptr [edi + 1] */ r_eax = (u32)R8((u32)(r_edi+0x1u));
    /* 005e51f3: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e51f6: jne 0x5e51b8 */ if (!fZ) goto L_005e51b8;
L_005e51f8:; BB(0x005e51f8);
    /* 005e51f8: movzx eax, byte ptr [edi + 2] */ r_eax = (u32)R8((u32)(r_edi+0x2u));
    /* 005e51fc: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e51ff: jne 0x5e51b8 */ if (!fZ) goto L_005e51b8;
L_005e5201:; BB(0x005e5201);
    /* 005e5201: mov ecx, 0x85 */ r_ecx = 0x85u;
    /* 005e5206: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005e5208: jmp 0x5e51bc */ goto L_005e51bc;
}

void f_005e520c(void) /* sub_5E520C */
{
    FN_ENTER(0x005e520c);
    /* 005e520c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e520d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e520e: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 005e5212: mov edi, dword ptr [0xa8dc94] */ r_edi = R32((u32)(0xa8dc94u));
    /* 005e5218: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 005e521b: movzx ecx, byte ptr [eax + 1] */ r_ecx = (u32)R8((u32)(r_eax+0x1u));
    /* 005e521f: cmp ecx, dword ptr [edx + 8] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x8u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e5222: jge 0x5e525b */ if ((fS==fO)) goto L_005e525b;
L_005e5224:; BB(0x005e5224);
    /* 005e5224: mov edi, dword ptr [edi + 0x3c] */ r_edi = R32((u32)(r_edi+0x3cu));
    /* 005e5227: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 005e522a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e522c: movzx ebp, cx */ r_ebp = (u32)(u16)r_ecx;
    /* 005e522f: mov ecx, dword ptr [edi + ebp*4] */ r_ecx = R32((u32)(r_edi+r_ebp*4));
    /* 005e5232: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e5235: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e5237: je 0x5e525b */ if (fZ) goto L_005e525b;
L_005e5239:; BB(0x005e5239);
    /* 005e5239: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e523b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e523c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e523d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e523e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e523f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x5e5244u); f_00814298();
    /* 005e5244: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e5247: mov edx, dword ptr [edi + ebp*4 + 4] */ r_edx = R32((u32)(r_edi+r_ebp*4+0x4u));
    /* 005e524b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e524d: je 0x5e525b */ if (fZ) goto L_005e525b;
L_005e524f:; BB(0x005e524f);
    /* 005e524f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5251: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5252: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5253: call 0x814664 */ r_esp -= 4; W32(r_esp, 0x5e5258u); f_00814664();
    /* 005e5258: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005e525b:; BB(0x005e525b);
    /* 005e525b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e525c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e525d: ret  */ FN_RET(0x005e520c); r_esp += 4; return;
}

void f_005e5260(void) /* sub_5E5260 */
{
    FN_ENTER(0x005e5260);
    /* 005e5260: movzx eax, byte ptr [esp + 8] */ r_eax = (u32)R8((u32)(r_esp+0x8u));
    /* 005e5265: mov ecx, dword ptr [0xa8dc94] */ r_ecx = R32((u32)(0xa8dc94u));
    /* 005e526b: movsx edx, byte ptr [esp + 4] */ r_edx = (u32)(i32)(i8)R8((u32)(r_esp+0x4u));
    /* 005e5270: lea eax, [eax + eax] */ r_eax = (u32)(r_eax+r_eax);
    /* 005e5273: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005e5275: add edx, dword ptr [ecx + 0x40] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x40u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e5278: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 005e527b: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e527d: movzx eax, byte ptr [ecx + edx] */ r_eax = (u32)R8((u32)(r_ecx+r_edx));
    /* 005e5281: ret  */ FN_RET(0x005e5260); r_esp += 4; return;
}

void f_005e5284(void) /* sub_5E5284 */
{
    FN_ENTER(0x005e5284);
    /* 005e5284: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e5285: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5286: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e5289: mov esi, dword ptr [esp + 0x14] */ r_esi = R32((u32)(r_esp+0x14u));
    /* 005e528d: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 005e5291: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5293: je 0x5e5350 */ if (fZ) goto L_005e5350;
L_005e5299:; BB(0x005e5299);
    /* 005e5299: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e529b: je 0x5e5350 */ if (fZ) goto L_005e5350;
L_005e52a1:; BB(0x005e52a1);
    /* 005e52a1: mov ecx, dword ptr [0xa8dc94] */ r_ecx = R32((u32)(0xa8dc94u));
    /* 005e52a7: mov eax, dword ptr [ecx + 0x44] */ r_eax = R32((u32)(r_ecx+0x44u));
    /* 005e52aa: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 005e52ad: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e52af: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e52b1: je 0x5e5350 */ if (fZ) goto L_005e5350;
L_005e52b7:; BB(0x005e52b7);
    /* 005e52b7: movzx eax, byte ptr [esi] */ r_eax = (u32)R8((u32)(r_esi));
    /* 005e52ba: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 005e52be: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
L_005e52c1:; BB(0x005e52c1);
    /* 005e52c1: movzx ebp, byte ptr [ecx] */ r_ebp = (u32)R8((u32)(r_ecx));
    /* 005e52c4: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e52c6: je 0x5e52d0 */ if (fZ) goto L_005e52d0;
L_005e52c8:; BB(0x005e52c8);
    /* 005e52c8: cmp ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e52ce: jne 0x5e533d */ if (!fZ) goto L_005e533d;
L_005e52d0:; BB(0x005e52d0);
    /* 005e52d0: movzx edi, byte ptr [ecx + 1] */ r_edi = (u32)R8((u32)(r_ecx+0x1u));
    /* 005e52d4: movzx ebp, byte ptr [esi + 1] */ r_ebp = (u32)R8((u32)(r_esi+0x1u));
    /* 005e52d8: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e52da: je 0x5e52e4 */ if (fZ) goto L_005e52e4;
L_005e52dc:; BB(0x005e52dc);
    /* 005e52dc: cmp edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e52e2: jne 0x5e533d */ if (!fZ) goto L_005e533d;
L_005e52e4:; BB(0x005e52e4);
    /* 005e52e4: movzx edi, byte ptr [ecx + 2] */ r_edi = (u32)R8((u32)(r_ecx+0x2u));
    /* 005e52e8: movzx ebp, byte ptr [esi + 2] */ r_ebp = (u32)R8((u32)(r_esi+0x2u));
    /* 005e52ec: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e52ee: je 0x5e52f8 */ if (fZ) goto L_005e52f8;
L_005e52f0:; BB(0x005e52f0);
    /* 005e52f0: cmp edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e52f6: jne 0x5e533d */ if (!fZ) goto L_005e533d;
L_005e52f8:; BB(0x005e52f8);
    /* 005e52f8: movzx ebp, byte ptr [ebx + 0xf2] */ r_ebp = (u32)R8((u32)(r_ebx+0xf2u));
    /* 005e52ff: movzx edi, byte ptr [ecx + 3] */ r_edi = (u32)R8((u32)(r_ecx+0x3u));
    /* 005e5303: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5305: je 0x5e530f */ if (fZ) goto L_005e530f;
L_005e5307:; BB(0x005e5307);
    /* 005e5307: cmp edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e530d: jne 0x5e533d */ if (!fZ) goto L_005e533d;
L_005e530f:; BB(0x005e530f);
    /* 005e530f: movzx ebp, byte ptr [ebx + 0xf3] */ r_ebp = (u32)R8((u32)(r_ebx+0xf3u));
    /* 005e5316: movzx edi, byte ptr [ecx + 4] */ r_edi = (u32)R8((u32)(r_ecx+0x4u));
    /* 005e531a: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e531c: je 0x5e5326 */ if (fZ) goto L_005e5326;
L_005e531e:; BB(0x005e531e);
    /* 005e531e: cmp edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5324: jne 0x5e533d */ if (!fZ) goto L_005e533d;
L_005e5326:; BB(0x005e5326);
    /* 005e5326: movzx ebp, byte ptr [ebx + 0xf4] */ r_ebp = (u32)R8((u32)(r_ebx+0xf4u));
    /* 005e532d: movzx edi, byte ptr [ecx + 5] */ r_edi = (u32)R8((u32)(r_ecx+0x5u));
    /* 005e5331: cmp ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5333: je 0x5e5367 */ if (fZ) goto L_005e5367;
L_005e5335:; BB(0x005e5335);
    /* 005e5335: cmp edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e533b: je 0x5e5358 */ if (fZ) goto L_005e5358;
L_005e533d:; BB(0x005e533d);
    /* 005e533d: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5340: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 005e5343: jne 0x5e52c1 */ if (!fZ) goto L_005e52c1;
L_005e5349:; BB(0x005e5349);
    /* 005e5349: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005e534d: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_005e5350:; BB(0x005e5350);
    /* 005e5350: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e5352: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e5355: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e5356: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e5357: ret  */ FN_RET(0x005e5284); r_esp += 4; return;
L_005e5358:; BB(0x005e5358);
    /* 005e5358: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005e535c: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_005e535f:; BB(0x005e535f);
    /* 005e535f: mov eax, ecx */ r_eax = r_ecx;
    /* 005e5361: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e5364: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e5365: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e5366: ret  */ FN_RET(0x005e5284); r_esp += 4; return;
L_005e5367:; BB(0x005e5367);
    /* 005e5367: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 005e536b: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 005e536e: jmp 0x5e535f */ goto L_005e535f;
}

void f_005e5370(void) /* sub_5E5370 */
{
    FN_ENTER(0x005e5370);
    /* 005e5370: movzx eax, byte ptr [esp + 4] */ r_eax = (u32)R8((u32)(r_esp+0x4u));
    /* 005e5375: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5377: jne 0x5e537c */ if (!fZ) goto L_005e537c;
L_005e5379:; BB(0x005e5379);
    /* 005e5379: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e537b: ret  */ FN_RET(0x005e5370); r_esp += 4; return;
L_005e537c:; BB(0x005e537c);
    /* 005e537c: mov edx, dword ptr [0xa8dc94] */ r_edx = R32((u32)(0xa8dc94u));
    /* 005e5382: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 005e5385: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5387: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5389: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e538b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e538d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e538f: add ecx, dword ptr [edx + 0x4c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x4cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e5392: mov eax, ecx */ r_eax = r_ecx;
    /* 005e5394: ret  */ FN_RET(0x005e5370); r_esp += 4; return;
}

void f_005e5398(void) /* sub_5E5398 */
{
    FN_ENTER(0x005e5398);
    /* 005e5398: mov dword ptr [0xa8dc88], 0x3f800000 */ W32((u32)(0xa8dc88u), 0x3f800000u);
    /* 005e53a2: mov dword ptr [0xa8dc8c], 0x41000000 */ W32((u32)(0xa8dc8cu), 0x41000000u);
    /* 005e53ac: mov dword ptr [0xa8dc90], 0x3fc00000 */ W32((u32)(0xa8dc90u), 0x3fc00000u);
    /* 005e53b6: ret  */ FN_RET(0x005e5398); r_esp += 4; return;
}

void f_005e53b8(void) /* sub_5E53B8 */
{
    FN_ENTER(0x005e53b8);
    /* 005e53b8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005e53bc: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005e53c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e53c1: mov ecx, edx */ r_ecx = r_edx;
    /* 005e53c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005e53c5: jle 0x5e5403 */ if ((fZ||fS!=fO)) goto L_005e5403;
L_005e53c7:; BB(0x005e53c7);
    /* 005e53c7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e53ca: jge 0x5e5403 */ if ((fS==fO)) goto L_005e5403;
L_005e53cc:; BB(0x005e53cc);
    /* 005e53cc: mov ebp, dword ptr [0xa8dc94] */ r_ebp = R32((u32)(0xa8dc94u));
    /* 005e53d2: mov ebp, dword ptr [ebp + 4] */ r_ebp = R32((u32)(r_ebp+0x4u));
    /* 005e53d5: mov edx, dword ptr [ebp + eax*8 - 8] */ r_edx = R32((u32)(r_ebp+r_eax*8+0xfffffff8u));
    /* 005e53d9: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e53db: jge 0x5e53ef */ if ((fS==fO)) goto L_005e53ef;
L_005e53dd:; BB(0x005e53dd);
    /* 005e53dd: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e53df: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e53e1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e53e3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e53e5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e53e7: add ecx, dword ptr [ebp + eax*8 - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+r_eax*8+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e53eb: mov eax, ecx */ r_eax = r_ecx;
    /* 005e53ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e53ee: ret  */ FN_RET(0x005e53b8); r_esp += 4; return;
L_005e53ef:; BB(0x005e53ef);
    /* 005e53ef: mov ecx, dword ptr [ebp + eax*8 - 4] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xfffffffcu));
    /* 005e53f3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e53f5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e53f7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e53f9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e53fb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e53fd: lea eax, [ecx + edx - 0x20] */ r_eax = (u32)(r_ecx+r_edx+0xffffffe0u);
    /* 005e5401: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5402: ret  */ FN_RET(0x005e53b8); r_esp += 4; return;
L_005e5403:; BB(0x005e5403);
    /* 005e5403: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e5405: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5406: ret  */ FN_RET(0x005e53b8); r_esp += 4; return;
}

void f_005e53c0(void) /* sub_5E53C0 */
{
    FN_ENTER(0x005e53c0);
    /* 005e53c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e53c1: mov ecx, edx */ r_ecx = r_edx;
    /* 005e53c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005e53c5: jle 0x5e5403 */ if ((fZ||fS!=fO)) goto L_005e5403;
L_005e53c7:; BB(0x005e53c7);
    /* 005e53c7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e53ca: jge 0x5e5403 */ if ((fS==fO)) goto L_005e5403;
L_005e53cc:; BB(0x005e53cc);
    /* 005e53cc: mov ebp, dword ptr [0xa8dc94] */ r_ebp = R32((u32)(0xa8dc94u));
    /* 005e53d2: mov ebp, dword ptr [ebp + 4] */ r_ebp = R32((u32)(r_ebp+0x4u));
    /* 005e53d5: mov edx, dword ptr [ebp + eax*8 - 8] */ r_edx = R32((u32)(r_ebp+r_eax*8+0xfffffff8u));
    /* 005e53d9: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e53db: jge 0x5e53ef */ if ((fS==fO)) goto L_005e53ef;
L_005e53dd:; BB(0x005e53dd);
    /* 005e53dd: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e53df: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e53e1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e53e3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e53e5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e53e7: add ecx, dword ptr [ebp + eax*8 - 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+r_eax*8+0xfffffffcu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e53eb: mov eax, ecx */ r_eax = r_ecx;
    /* 005e53ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e53ee: ret  */ FN_RET(0x005e53c0); r_esp += 4; return;
L_005e53ef:; BB(0x005e53ef);
    /* 005e53ef: mov ecx, dword ptr [ebp + eax*8 - 4] */ r_ecx = R32((u32)(r_ebp+r_eax*8+0xfffffffcu));
    /* 005e53f3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e53f5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e53f7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e53f9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e53fb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e53fd: lea eax, [ecx + edx - 0x20] */ r_eax = (u32)(r_ecx+r_edx+0xffffffe0u);
    /* 005e5401: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5402: ret  */ FN_RET(0x005e53c0); r_esp += 4; return;
L_005e5403:; BB(0x005e5403);
    /* 005e5403: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e5405: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5406: ret  */ FN_RET(0x005e53c0); r_esp += 4; return;
}

void f_005e5408(void) /* sub_5E5408 */
{
    FN_ENTER(0x005e5408);
    /* 005e5408: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005e540c: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 005e5410: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e5411: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005e5413: jle 0x5e544a */ if ((fZ||fS!=fO)) goto L_005e544a;
L_005e5415:; BB(0x005e5415);
    /* 005e5415: mov ecx, dword ptr [0xa8dc94] */ r_ecx = R32((u32)(0xa8dc94u));
    /* 005e541b: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 005e541d: cmp eax, 0xed */ {  u32 a = r_eax; u32 b = 0xedu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e5422: jge 0x5e5442 */ if ((fS==fO)) goto L_005e5442;
L_005e5424:; BB(0x005e5424);
    /* 005e5424: cmp edx, dword ptr [edi + eax*8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+r_eax*8)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e5427: jge 0x5e5442 */ if ((fS==fO)) goto L_005e5442;
L_005e5429:; BB(0x005e5429);
    /* 005e5429: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 005e542c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e542e: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5430: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5432: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5434: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5436: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5438: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e543a: add ecx, dword ptr [edi + eax*8 + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+r_eax*8+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e543e: mov eax, ecx */ r_eax = r_ecx;
    /* 005e5440: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e5441: ret  */ FN_RET(0x005e5408); r_esp += 4; return;
L_005e5442:; BB(0x005e5442);
    /* 005e5442: mov eax, dword ptr [edi + 0x76c] */ r_eax = R32((u32)(r_edi+0x76cu));
    /* 005e5448: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e5449: ret  */ FN_RET(0x005e5408); r_esp += 4; return;
L_005e544a:; BB(0x005e544a);
    /* 005e544a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e544c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e544d: ret  */ FN_RET(0x005e5408); r_esp += 4; return;
}

void f_005e5410(void) /* sub_5E5410 */
{
    FN_ENTER(0x005e5410);
    /* 005e5410: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e5411: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005e5413: jle 0x5e544a */ if ((fZ||fS!=fO)) goto L_005e544a;
L_005e5415:; BB(0x005e5415);
    /* 005e5415: mov ecx, dword ptr [0xa8dc94] */ r_ecx = R32((u32)(0xa8dc94u));
    /* 005e541b: mov edi, dword ptr [ecx] */ r_edi = R32((u32)(r_ecx));
    /* 005e541d: cmp eax, 0xed */ {  u32 a = r_eax; u32 b = 0xedu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e5422: jge 0x5e5442 */ if ((fS==fO)) goto L_005e5442;
L_005e5424:; BB(0x005e5424);
    /* 005e5424: cmp edx, dword ptr [edi + eax*8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_edi+r_eax*8)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e5427: jge 0x5e5442 */ if ((fS==fO)) goto L_005e5442;
L_005e5429:; BB(0x005e5429);
    /* 005e5429: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 005e542c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e542e: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5430: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5432: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5434: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5436: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e5438: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e543a: add ecx, dword ptr [edi + eax*8 + 4] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edi+r_eax*8+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e543e: mov eax, ecx */ r_eax = r_ecx;
    /* 005e5440: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e5441: ret  */ FN_RET(0x005e5410); r_esp += 4; return;
L_005e5442:; BB(0x005e5442);
    /* 005e5442: mov eax, dword ptr [edi + 0x76c] */ r_eax = R32((u32)(r_edi+0x76cu));
    /* 005e5448: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e5449: ret  */ FN_RET(0x005e5410); r_esp += 4; return;
L_005e544a:; BB(0x005e544a);
    /* 005e544a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e544c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e544d: ret  */ FN_RET(0x005e5410); r_esp += 4; return;
}

void f_005e5450(void) /* sub_5E5450 */
{
    FN_ENTER(0x005e5450);
    /* 005e5450: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 005e5454: cmp eax, 0xb1 */ {  u32 a = r_eax; u32 b = 0xb1u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e5459: jl 0x5e5474 */ if ((fS!=fO)) goto L_005e5474;
L_005e545b:; BB(0x005e545b);
    /* 005e545b: cmp eax, 0x3e1 */ {  u32 a = r_eax; u32 b = 0x3e1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e5460: jge 0x5e5474 */ if ((fS==fO)) goto L_005e5474;
L_005e5462:; BB(0x005e5462);
    /* 005e5462: mov edx, dword ptr [0xa8dc94] */ r_edx = R32((u32)(0xa8dc94u));
    /* 005e5468: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 005e546b: movzx eax, byte ptr [eax + ecx - 0xb1] */ r_eax = (u32)R8((u32)(r_eax+r_ecx+0xffffff4fu));
    /* 005e5473: ret  */ FN_RET(0x005e5450); r_esp += 4; return;
L_005e5474:; BB(0x005e5474);
    /* 005e5474: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e5476: ret  */ FN_RET(0x005e5450); r_esp += 4; return;
}

void f_005e5478(void) /* sub_5E5478 */
{
    FN_ENTER(0x005e5478);
    /* 005e5478: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5479: mov ebp, esp */ r_ebp = r_esp;
    /* 005e547b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e547d: push 0x8dba80 */ { u32 v = 0x8dba80u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5482: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e5488: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5489: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e5490: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e5493: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e5496: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005e5499: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005e549c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005e549f: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e54a1: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005e54a8: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5e54adu); f_008581c5();
    /* 005e54ad: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e54ae: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005e54b1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e54b3: je 0x5e5509 */ if (fZ) goto L_005e5509;
L_005e54b5:; BB(0x005e54b5);
    /* 005e54b5: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005e54bc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e54c3: push 0x20000 */ { u32 v = 0x20000u; r_esp -= 4; W32(r_esp, v); }
    /* 005e54c8: push dword ptr [0x9c284c] */ { u32 v = R32((u32)(0x9c284cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e54ce: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e54d1: call 0x5d7268 */ r_esp -= 4; W32(r_esp, 0x5e54d6u); f_005d7268();
    /* 005e54d6: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e54d9: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005e54e0:; BB(0x005e54e0);
    /* 005e54e0: mov dword ptr [0xa8dc98], ecx */ W32((u32)(0xa8dc98u), r_ecx);
    /* 005e54e6: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e54ed: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e54ef: je 0x5e54fb */ if (fZ) goto L_005e54fb;
L_005e54f1:; BB(0x005e54f1);
    /* 005e54f1: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005e54f3: call dword ptr [eax + 4] */ { u32 t = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, 0x5e54f6u); call_ind(t); }
    /* 005e54f6: mov dword ptr [0xa8dc94], eax */ W32((u32)(0xa8dc94u), r_eax);
L_005e54fb:; BB(0x005e54fb);
    /* 005e54fb: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e54fe: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e5505: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5507: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5508: ret  */ FN_RET(0x005e5478); r_esp += 4; return;
L_005e5509:; BB(0x005e5509);
    /* 005e5509: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 005e550b: jmp 0x5e54e0 */ goto L_005e54e0;
}

void f_005e5510(void)
{
    FN_ENTER(0x005e5510);
    /* 005e5510: call 0x5e5478 */ r_esp -= 4; W32(r_esp, 0x5e5515u); f_005e5478();
    /* 005e5515: ret  */ FN_RET(0x005e5510); r_esp += 4; return;
}

void f_005e5518(void) /* sub_5E5518 */
{
    FN_ENTER(0x005e5518);
    /* 005e5518: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e551b: movzx eax, byte ptr [esp + 0xc] */ r_eax = (u32)R8((u32)(r_esp+0xcu));
    /* 005e5520: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5522: jne 0x5e5541 */ if (!fZ) goto L_005e5541;
L_005e5524:; BB(0x005e5524);
    /* 005e5524: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 005e5529: movzx edx, byte ptr [esp + 0x14] */ r_edx = (u32)R8((u32)(r_esp+0x14u));
    /* 005e552e: call 0x5e5410 */ r_esp -= 4; W32(r_esp, 0x5e5533u); f_005e5410();
    /* 005e5533: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5535: je 0x5e556c */ if (fZ) goto L_005e556c;
L_005e5537:; BB(0x005e5537);
    /* 005e5537: movzx eax, byte ptr [eax + 0x1e] */ r_eax = (u32)R8((u32)(r_eax+0x1eu));
L_005e553b:; BB(0x005e553b);
    /* 005e553b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005e553d: jg 0x5e557f */ if ((!fZ&&fS==fO)) goto L_005e557f;
L_005e553f:; BB(0x005e553f);
    /* 005e553f: jmp 0x5e556c */ goto L_005e556c;
L_005e5541:; BB(0x005e5541);
    /* 005e5541: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5544: jne 0x5e556c */ if (!fZ) goto L_005e556c;
L_005e5546:; BB(0x005e5546);
    /* 005e5546: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 005e554b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005e554d: jle 0x5e556c */ if ((fZ||fS!=fO)) goto L_005e556c;
L_005e554f:; BB(0x005e554f);
    /* 005e554f: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 005e5554: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e5557: jg 0x5e556c */ if ((!fZ&&fS==fO)) goto L_005e556c;
L_005e5559:; BB(0x005e5559);
    /* 005e5559: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 005e555e: movzx edx, byte ptr [esp + 0x14] */ r_edx = (u32)R8((u32)(r_esp+0x14u));
    /* 005e5563: call 0x5e53c0 */ r_esp -= 4; W32(r_esp, 0x5e5568u); f_005e53c0();
    /* 005e5568: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e556a: jne 0x5e5579 */ if (!fZ) goto L_005e5579;
L_005e556c:; BB(0x005e556c);
    /* 005e556c: mov edx, dword ptr [0xa8dc94] */ r_edx = R32((u32)(0xa8dc94u));
    /* 005e5572: mov eax, dword ptr [edx + 0x38] */ r_eax = R32((u32)(r_edx+0x38u));
    /* 005e5575: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e5578: ret  */ FN_RET(0x005e5518); r_esp += 4; return;
L_005e5579:; BB(0x005e5579);
    /* 005e5579: movzx eax, byte ptr [eax + 0x1c] */ r_eax = (u32)R8((u32)(r_eax+0x1cu));
    /* 005e557d: jmp 0x5e553b */ goto L_005e553b;
L_005e557f:; BB(0x005e557f);
    /* 005e557f: mov edx, dword ptr [0xa8dc94] */ r_edx = R32((u32)(0xa8dc94u));
    /* 005e5585: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 005e5588: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e558a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e558c: add ecx, dword ptr [edx + 0x38] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_edx+0x38u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005e558f: mov eax, ecx */ r_eax = r_ecx;
    /* 005e5591: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e5594: ret  */ FN_RET(0x005e5518); r_esp += 4; return;
}

void f_005e5598(void) /* sub_5E5598 */
{
    FN_ENTER(0x005e5598);
    /* 005e5598: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5599: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e559b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e559d: call 0x5e55bc */ r_esp -= 4; W32(r_esp, 0x5e55a2u); f_005e55bc();
    /* 005e55a2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005e55a6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e55a8: jne 0x5e55ae */ if (!fZ) goto L_005e55ae;
L_005e55aa:; BB(0x005e55aa);
    /* 005e55aa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e55ab: ret 4 */ FN_RET(0x005e5598); r_esp += 8; return;
L_005e55ae:; BB(0x005e55ae);
    /* 005e55ae: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e55af: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5e55b4u); f_005c2f74();
    /* 005e55b4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e55b5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e55b6: ret 4 */ FN_RET(0x005e5598); r_esp += 8; return;
}

void f_005e55bc(void) /* sub_5E55BC */
{
    FN_ENTER(0x005e55bc);
    /* 005e55bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e55bd: mov ebp, esp */ r_ebp = r_esp;
    /* 005e55bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e55c1: push 0x8dba9c */ { u32 v = 0x8dba9cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e55c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e55cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e55cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e55d4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e55d7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e55da: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005e55dd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005e55e0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005e55e3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005e55e6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e55ed: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e55f0: mov dword ptr [ecx], 0xb10048 */ W32((u32)(r_ecx), 0xb10048u);
    /* 005e55f6: call 0x5e5a04 */ r_esp -= 4; W32(r_esp, 0x5e55fbu); f_005e5a04();
    /* 005e55fb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e55fe: push dword ptr [eax + 0x1c] */ { u32 v = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e5601: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5e5606u); f_00857e98();
    /* 005e5606: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e5607: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e560a: mov dword ptr [ecx + 0x1c], 0 */ W32((u32)(r_ecx+0x1cu), 0x0u);
    /* 005e5611: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e5618: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5e561du); f_008171e8();
    /* 005e561d: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5620: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e5627: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5629: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e562a: ret  */ FN_RET(0x005e55bc); r_esp += 4; return;
}

void f_005e562c(void) /* sub_5E562C */
{
    FN_ENTER(0x005e562c);
    /* 005e562c: push dword ptr [0xa8dca0] */ { u32 v = R32((u32)(0xa8dca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e5632: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5e5637u); f_00857e98();
    /* 005e5637: push dword ptr [0xa8dca4] */ { u32 v = R32((u32)(0xa8dca4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e563d: mov dword ptr [0xa8dca0], 0 */ W32((u32)(0xa8dca0u), 0x0u);
    /* 005e5647: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x5e564cu); f_00857e98();
    /* 005e564c: mov dword ptr [0xa8dca4], 0 */ W32((u32)(0xa8dca4u), 0x0u);
    /* 005e5656: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e5659: ret  */ FN_RET(0x005e562c); r_esp += 4; return;
}

void f_005e565c(void) /* sub_5E565C */
{
    FN_ENTER(0x005e565c);
    /* 005e565c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e565d: mov ebp, esp */ r_ebp = r_esp;
    /* 005e565f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5661: push 0x8dbac4 */ { u32 v = 0x8dbac4u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5666: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e566c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e566d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e5674: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e5677: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e567a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005e567d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005e5680: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005e5683: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5685: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 005e568c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x5e5691u); f_005caba4();
    /* 005e5691: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e5692: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 005e5695: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5697: je 0x5e56ca */ if (fZ) goto L_005e56ca;
L_005e5699:; BB(0x005e5699);
    /* 005e5699: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 005e56a0: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e56a7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e56aa: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e56ad: call 0x5e56d0 */ r_esp -= 4; W32(r_esp, 0x5e56b2u); f_005e56d0();
    /* 005e56b2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e56b5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_005e56bc:; BB(0x005e56bc);
    /* 005e56bc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e56bf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e56c6: mov esp, ebp */ r_esp = r_ebp;
    /* 005e56c8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e56c9: ret  */ FN_RET(0x005e565c); r_esp += 4; return;
L_005e56ca:; BB(0x005e56ca);
    /* 005e56ca: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e56cc: jmp 0x5e56bc */ goto L_005e56bc;
}

void f_005e56d0(void) /* sub_5E56D0 */
{
    FN_ENTER(0x005e56d0);
    /* 005e56d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e56d1: mov ebp, esp */ r_ebp = r_esp;
    /* 005e56d3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e56d5: push 0x8dbae0 */ { u32 v = 0x8dbae0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e56da: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e56e0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e56e1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e56e8: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e56eb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e56ee: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005e56f1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005e56f4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005e56f7: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e56fa: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005e56fd: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5e5702u); f_008193cc();
    /* 005e5702: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 005e5709: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e570c: mov dword ptr [edx], 0xb10048 */ W32((u32)(r_edx), 0xb10048u);
    /* 005e5712: lea ecx, [edx + 0x2c] */ r_ecx = (u32)(r_edx+0x2cu);
    /* 005e5715: mov eax, dword ptr [0x9c2850] */ r_eax = R32((u32)(0x9c2850u));
    /* 005e571a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e571c: push dword ptr [0xa8dca0] */ { u32 v = R32((u32)(0xa8dca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e5722: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 005e5725: add edx, 0x34 */ {  u32 a = r_edx; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e5728: call 0x83cd64 */ r_esp -= 4; W32(r_esp, 0x5e572du); f_0083cd64();
    /* 005e572d: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e5730: mov dword ptr [edx + 0x30], 1 */ W32((u32)(r_edx+0x30u), 0x1u);
    /* 005e5737: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e5739: mov dword ptr [edx + 0x38], eax */ W32((u32)(r_edx+0x38u), r_eax);
    /* 005e573c: mov dword ptr [edx + 0x24], 0xffffffff */ W32((u32)(r_edx+0x24u), 0xffffffffu);
    /* 005e5743: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5748: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 005e574b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5e5750u); f_008581c5();
    /* 005e5750: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e5751: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e5754: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 005e5757: mov eax, edx */ r_eax = r_edx;
    /* 005e5759: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e575c: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e5763: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5765: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5766: ret 4 */ FN_RET(0x005e56d0); r_esp += 8; return;
}

void f_005e576c(void) /* sub_5E576C */
{
    FN_ENTER(0x005e576c);
    /* 005e576c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e576d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e576e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e5770: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 005e5773: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5776: je 0x5e5793 */ if (fZ) goto L_005e5793;
L_005e5778:; BB(0x005e5778);
    /* 005e5778: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e577b: je 0x5e5780 */ if (fZ) goto L_005e5780;
L_005e577d:; BB(0x005e577d);
    /* 005e577d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e577e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e577f: ret  */ FN_RET(0x005e576c); r_esp += 4; return;
L_005e5780:; BB(0x005e5780);
    /* 005e5780: call 0x5b7a28 */ r_esp -= 4; W32(r_esp, 0x5e5785u); f_005b7a28();
    /* 005e5785: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e5787: je 0x5e577d */ if (fZ) goto L_005e577d;
L_005e5789:; BB(0x005e5789);
    /* 005e5789: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e578b: call 0x5e57ec */ r_esp -= 4; W32(r_esp, 0x5e5790u); f_005e57ec();
    /* 005e5790: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e5791: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e5792: ret  */ FN_RET(0x005e576c); r_esp += 4; return;
L_005e5793:; BB(0x005e5793);
    /* 005e5793: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e5796: call 0x86dc94 */ r_esp -= 4; W32(r_esp, 0x5e579bu); f_0086dc94();
    /* 005e579b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e579c: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e579f: je 0x5e57c5 */ if (fZ) goto L_005e57c5;
L_005e57a1:; BB(0x005e57a1);
    /* 005e57a1: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e57a4: je 0x5e577d */ if (fZ) goto L_005e577d;
L_005e57a6:; BB(0x005e57a6);
    /* 005e57a6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e57a9: je 0x5e57b0 */ if (fZ) goto L_005e57b0;
L_005e57ab:; BB(0x005e57ab);
    /* 005e57ab: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e57ae: jne 0x5e577d */ if (!fZ) goto L_005e577d;
L_005e57b0:; BB(0x005e57b0);
    /* 005e57b0: mov esi, dword ptr [ebx + 0x24] */ r_esi = R32((u32)(r_ebx+0x24u));
    /* 005e57b3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e57b5: call 0x5e5a04 */ r_esp -= 4; W32(r_esp, 0x5e57bau); f_005e5a04();
    /* 005e57ba: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e57bb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e57bd: call 0x5e5a40 */ r_esp -= 4; W32(r_esp, 0x5e57c2u); f_005e5a40();
    /* 005e57c2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e57c3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e57c4: ret  */ FN_RET(0x005e576c); r_esp += 4; return;
L_005e57c5:; BB(0x005e57c5);
    /* 005e57c5: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e57c8: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x5e57cdu); f_0086db40();
    /* 005e57cd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e57ce: call 0x5b7a28 */ r_esp -= 4; W32(r_esp, 0x5e57d3u); f_005b7a28();
    /* 005e57d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e57d5: jne 0x5e57e1 */ if (!fZ) goto L_005e57e1;
L_005e57d7:; BB(0x005e57d7);
    /* 005e57d7: mov dword ptr [ebx + 0x20], 3 */ W32((u32)(r_ebx+0x20u), 0x3u);
    /* 005e57de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e57df: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e57e0: ret  */ FN_RET(0x005e576c); r_esp += 4; return;
L_005e57e1:; BB(0x005e57e1);
    /* 005e57e1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e57e3: call 0x5e57ec */ r_esp -= 4; W32(r_esp, 0x5e57e8u); f_005e57ec();
    /* 005e57e8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e57e9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e57ea: ret  */ FN_RET(0x005e576c); r_esp += 4; return;
}

void f_005e5789(void)
{
    FN_ENTER(0x005e5789);
    /* 005e5789: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e578b: call 0x5e57ec */ r_esp -= 4; W32(r_esp, 0x5e5790u); f_005e57ec();
    /* 005e5790: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e5791: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e5792: ret  */ FN_RET(0x005e5789); r_esp += 4; return;
}

void f_005e57ec(void) /* sub_5E57EC */
{
    FN_ENTER(0x005e57ec);
    /* 005e57ec: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e57ed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e57ee: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e57f1: mov esi, ecx */ r_esi = r_ecx;
    /* 005e57f3: mov ebx, 0x92d55c */ r_ebx = 0x92d55cu;
    /* 005e57f8: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 005e57fa: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 005e57fd: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005e5800: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 005e5803: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 005e5807: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 005e580b: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005e580e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e580f: call 0x5b7a44 */ r_esp -= 4; W32(r_esp, 0x5e5814u); f_005b7a44();
    /* 005e5814: mov ebx, eax */ r_ebx = r_eax;
    /* 005e5816: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e5819: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e581b: je 0x5e584f */ if (fZ) goto L_005e584f;
L_005e581d:; BB(0x005e581d);
    /* 005e581d: push 0x90000 */ { u32 v = 0x90000u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5822: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5823: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e5826: call 0x7882bc */ r_esp -= 4; W32(r_esp, 0x5e582bu); f_007882bc();
    /* 005e582b: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e582e: lea edx, [esi + 0x2c] */ r_edx = (u32)(r_esi+0x2cu);
    /* 005e5831: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e5833: call 0x82a7d8 */ r_esp -= 4; W32(r_esp, 0x5e5838u); f_0082a7d8();
    /* 005e5838: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 005e583b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e583c: call 0x5b9008 */ r_esp -= 4; W32(r_esp, 0x5e5841u); f_005b9008();
    /* 005e5841: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e5842: mov dword ptr [esi + 0x20], 2 */ W32((u32)(r_esi+0x20u), 0x2u);
    /* 005e5849: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e584c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e584d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e584e: ret  */ FN_RET(0x005e57ec); r_esp += 4; return;
L_005e584f:; BB(0x005e584f);
    /* 005e584f: mov ecx, esi */ r_ecx = r_esi;
    /* 005e5851: call 0x5e5a04 */ r_esp -= 4; W32(r_esp, 0x5e5856u); f_005e5a04();
    /* 005e5856: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e5859: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e585a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e585b: ret  */ FN_RET(0x005e57ec); r_esp += 4; return;
}

void f_005e585c(void) /* sub_5E585C */
{
    FN_ENTER(0x005e585c);
    /* 005e585c: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 005e585f: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5862: je 0x5e5867 */ if (fZ) goto L_005e5867;
L_005e5864:; BB(0x005e5864);
    /* 005e5864: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e5866: ret  */ FN_RET(0x005e585c); r_esp += 4; return;
L_005e5867:; BB(0x005e5867);
    /* 005e5867: add ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e586a: mov eax, ecx */ r_eax = r_ecx;
    /* 005e586c: ret  */ FN_RET(0x005e585c); r_esp += 4; return;
}

void f_005e5870(void) /* sub_5E5870 */
{
    FN_ENTER(0x005e5870);
    /* 005e5870: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5871: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5872: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005e5874: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 005e5878: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e587a: je 0x5e5925 */ if (fZ) goto L_005e5925;
L_005e5880:; BB(0x005e5880);
    /* 005e5880: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e5882: call 0x5d2890 */ r_esp -= 4; W32(r_esp, 0x5e5887u); f_005d2890();
    /* 005e5887: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5889: je 0x5e5925 */ if (fZ) goto L_005e5925;
L_005e588f:; BB(0x005e588f);
    /* 005e588f: movzx edx, byte ptr [ebx] */ r_edx = (u32)R8((u32)(r_ebx));
    /* 005e5892: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5895: jne 0x5e5921 */ if (!fZ) goto L_005e5921;
L_005e589b:; BB(0x005e589b);
    /* 005e589b: movzx eax, byte ptr [ebx + 1] */ r_eax = (u32)R8((u32)(r_ebx+0x1u));
    /* 005e589f: cmp eax, 0x52 */ {  u32 a = r_eax; u32 b = 0x52u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e58a2: jge 0x5e58b1 */ if ((fS==fO)) goto L_005e58b1;
L_005e58a4:; BB(0x005e58a4);
    /* 005e58a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e58a5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e58a7: call 0x5e5a40 */ r_esp -= 4; W32(r_esp, 0x5e58acu); f_005e5a40();
    /* 005e58ac: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e58ad: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e58ae: ret 4 */ FN_RET(0x005e5870); r_esp += 8; return;
L_005e58b1:; BB(0x005e58b1);
    /* 005e58b1: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 005e58b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e58b6: je 0x5e59d9 */ if (fZ) goto L_005e59d9;
L_005e58bc:; BB(0x005e58bc);
    /* 005e58bc: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 005e58bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e58c1: jne 0x5e58cd */ if (!fZ) goto L_005e58cd;
L_005e58c3:; BB(0x005e58c3);
    /* 005e58c3: mov eax, 1 */ r_eax = 0x1u;
    /* 005e58c8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e58c9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e58ca: ret 4 */ FN_RET(0x005e5870); r_esp += 8; return;
L_005e58cd:; BB(0x005e58cd);
    /* 005e58cd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e58cf: call 0x5e5a04 */ r_esp -= 4; W32(r_esp, 0x5e58d4u); f_005e5a04();
    /* 005e58d4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005e58d6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e58d7: push 0xb8 */ { u32 v = 0xb8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e58dc: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 005e58df: call 0x86dab0 */ r_esp -= 4; W32(r_esp, 0x5e58e4u); f_0086dab0();
    /* 005e58e4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e58e7: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 005e58ea: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e58ec: je 0x5e59cb */ if (fZ) goto L_005e59cb;
L_005e58f2:; BB(0x005e58f2);
    /* 005e58f2: mov dword ptr [ebp + 0x20], 1 */ W32((u32)(r_ebp+0x20u), 0x1u);
    /* 005e58f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e58fa: call 0x86dc64 */ r_esp -= 4; W32(r_esp, 0x5e58ffu); f_0086dc64();
    /* 005e58ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e5900: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005e5902: jl 0x5e59bd */ if ((fS!=fO)) goto L_005e59bd;
L_005e5908:; BB(0x005e5908);
    /* 005e5908: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e590b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e590c: push dword ptr [ebp + 0x28] */ { u32 v = R32((u32)(r_ebp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e590f: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5e5914u); f_0086db64();
    /* 005e5914: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e5917: mov eax, 1 */ r_eax = 0x1u;
    /* 005e591c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e591d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e591e: ret 4 */ FN_RET(0x005e5870); r_esp += 8; return;
L_005e5921:; BB(0x005e5921);
    /* 005e5921: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5923: je 0x5e592c */ if (fZ) goto L_005e592c;
L_005e5925:; BB(0x005e5925);
    /* 005e5925: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e5927: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e5928: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5929: ret 4 */ FN_RET(0x005e5870); r_esp += 8; return;
L_005e592c:; BB(0x005e592c);
    /* 005e592c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 005e592e: lea eax, [edx - 0xb1] */ r_eax = (u32)(r_edx+0xffffff4fu);
    /* 005e5934: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005e5936: jl 0x5e594f */ if ((fS!=fO)) goto L_005e594f;
L_005e5938:; BB(0x005e5938);
    /* 005e5938: cmp eax, 0x1a6 */ {  u32 a = r_eax; u32 b = 0x1a6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e593d: jge 0x5e594f */ if ((fS==fO)) goto L_005e594f;
L_005e593f:; BB(0x005e593f);
    /* 005e593f: add edx, -0x5f */ {  u32 a = r_edx; u32 b = 0xffffffa1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e5942: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5943: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e5945: call 0x5e5a40 */ r_esp -= 4; W32(r_esp, 0x5e594au); f_005e5a40();
    /* 005e594a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e594b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e594c: ret 4 */ FN_RET(0x005e5870); r_esp += 8; return;
L_005e594f:; BB(0x005e594f);
    /* 005e594f: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 005e5952: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5954: je 0x5e59fc */ if (fZ) goto L_005e59fc;
L_005e595a:; BB(0x005e595a);
    /* 005e595a: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 005e595d: cmp eax, 0x1f8 */ {  u32 a = r_eax; u32 b = 0x1f8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e5962: jne 0x5e596e */ if (!fZ) goto L_005e596e;
L_005e5964:; BB(0x005e5964);
    /* 005e5964: mov eax, 1 */ r_eax = 0x1u;
    /* 005e5969: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e596a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e596b: ret 4 */ FN_RET(0x005e5870); r_esp += 8; return;
L_005e596e:; BB(0x005e596e);
    /* 005e596e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e5970: call 0x5e5a04 */ r_esp -= 4; W32(r_esp, 0x5e5975u); f_005e5a04();
    /* 005e5975: mov eax, 0x1f8 */ r_eax = 0x1f8u;
    /* 005e597a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e597b: push 0xb8 */ { u32 v = 0xb8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5980: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 005e5983: call 0x86dab0 */ r_esp -= 4; W32(r_esp, 0x5e5988u); f_0086dab0();
    /* 005e5988: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e598b: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 005e598e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5990: je 0x5e59ee */ if (fZ) goto L_005e59ee;
L_005e5992:; BB(0x005e5992);
    /* 005e5992: mov dword ptr [ebp + 0x20], 1 */ W32((u32)(r_ebp+0x20u), 0x1u);
    /* 005e5999: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e599a: call 0x86dc64 */ r_esp -= 4; W32(r_esp, 0x5e599fu); f_0086dc64();
    /* 005e599f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e59a0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005e59a2: jl 0x5e59e0 */ if ((fS!=fO)) goto L_005e59e0;
L_005e59a4:; BB(0x005e59a4);
    /* 005e59a4: push dword ptr [ebp + 0x1c] */ { u32 v = R32((u32)(r_ebp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e59a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e59a8: push dword ptr [ebp + 0x28] */ { u32 v = R32((u32)(r_ebp+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e59ab: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5e59b0u); f_0086db64();
    /* 005e59b0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e59b3: mov eax, 1 */ r_eax = 0x1u;
    /* 005e59b8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e59b9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e59ba: ret 4 */ FN_RET(0x005e5870); r_esp += 8; return;
L_005e59bd:; BB(0x005e59bd);
    /* 005e59bd: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e59bf: call 0x5e5a04 */ r_esp -= 4; W32(r_esp, 0x5e59c4u); f_005e5a04();
    /* 005e59c4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e59c6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e59c7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e59c8: ret 4 */ FN_RET(0x005e5870); r_esp += 8; return;
L_005e59cb:; BB(0x005e59cb);
    /* 005e59cb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e59cd: call 0x5e5a04 */ r_esp -= 4; W32(r_esp, 0x5e59d2u); f_005e5a04();
    /* 005e59d2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e59d4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e59d5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e59d6: ret 4 */ FN_RET(0x005e5870); r_esp += 8; return;
L_005e59d9:; BB(0x005e59d9);
    /* 005e59d9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e59db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e59dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e59dd: ret 4 */ FN_RET(0x005e5870); r_esp += 8; return;
L_005e59e0:; BB(0x005e59e0);
    /* 005e59e0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e59e2: call 0x5e5a04 */ r_esp -= 4; W32(r_esp, 0x5e59e7u); f_005e5a04();
    /* 005e59e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e59e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e59ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e59eb: ret 4 */ FN_RET(0x005e5870); r_esp += 8; return;
L_005e59ee:; BB(0x005e59ee);
    /* 005e59ee: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e59f0: call 0x5e5a04 */ r_esp -= 4; W32(r_esp, 0x5e59f5u); f_005e5a04();
    /* 005e59f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e59f7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e59f8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e59f9: ret 4 */ FN_RET(0x005e5870); r_esp += 8; return;
L_005e59fc:; BB(0x005e59fc);
    /* 005e59fc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e59fe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e59ff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5a00: ret 4 */ FN_RET(0x005e5870); r_esp += 8; return;
}

void f_005e5a04(void) /* sub_5E5A04 */
{
    FN_ENTER(0x005e5a04);
    /* 005e5a04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e5a05: mov esi, ecx */ r_esi = r_ecx;
    /* 005e5a07: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 005e5a0a: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5a0d: je 0x5e5a2f */ if (fZ) goto L_005e5a2f;
L_005e5a0f:; BB(0x005e5a0f);
    /* 005e5a0f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e5a12: je 0x5e5a24 */ if (fZ) goto L_005e5a24;
L_005e5a14:; BB(0x005e5a14);
    /* 005e5a14: mov dword ptr [esi + 0x20], 0 */ W32((u32)(r_esi+0x20u), 0x0u);
    /* 005e5a1b: mov dword ptr [esi + 0x24], 0xffffffff */ W32((u32)(r_esi+0x24u), 0xffffffffu);
    /* 005e5a22: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e5a23: ret  */ FN_RET(0x005e5a04); r_esp += 4; return;
L_005e5a24:; BB(0x005e5a24);
    /* 005e5a24: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e5a27: call 0x86db40 */ r_esp -= 4; W32(r_esp, 0x5e5a2cu); f_0086db40();
    /* 005e5a2c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e5a2d: jmp 0x5e5a14 */ goto L_005e5a14;
L_005e5a2f:; BB(0x005e5a2f);
    /* 005e5a2f: lea eax, [esi + 0x2c] */ r_eax = (u32)(r_esi+0x2cu);
    /* 005e5a32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5a33: call 0x81a7c0 */ r_esp -= 4; W32(r_esp, 0x5e5a38u); f_0081a7c0();
    /* 005e5a38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e5a39: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 005e5a3c: jmp 0x5e5a0f */ goto L_005e5a0f;
}

void f_005e5a40(void) /* sub_5E5A40 */
{
    FN_ENTER(0x005e5a40);
    /* 005e5a40: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e5a41: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e5a42: mov edi, ecx */ r_edi = r_ecx;
    /* 005e5a44: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 005e5a48: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005e5a4a: jl 0x5e5abb */ if ((fS!=fO)) goto L_005e5abb;
L_005e5a4c:; BB(0x005e5a4c);
    /* 005e5a4c: cmp esi, 0x1f9 */ {  u32 a = r_esi; u32 b = 0x1f9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e5a52: jge 0x5e5abb */ if ((fS==fO)) goto L_005e5abb;
L_005e5a54:; BB(0x005e5a54);
    /* 005e5a54: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 005e5a57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5a59: je 0x5e5abb */ if (fZ) goto L_005e5abb;
L_005e5a5b:; BB(0x005e5a5b);
    /* 005e5a5b: cmp esi, dword ptr [edi + 0x24] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x24u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e5a5e: jne 0x5e5a6a */ if (!fZ) goto L_005e5a6a;
L_005e5a60:; BB(0x005e5a60);
    /* 005e5a60: mov eax, 1 */ r_eax = 0x1u;
    /* 005e5a65: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e5a66: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e5a67: ret 4 */ FN_RET(0x005e5a40); r_esp += 8; return;
L_005e5a6a:; BB(0x005e5a6a);
    /* 005e5a6a: mov ecx, edi */ r_ecx = r_edi;
    /* 005e5a6c: call 0x5e5a04 */ r_esp -= 4; W32(r_esp, 0x5e5a71u); f_005e5a04();
    /* 005e5a71: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e5a72: push 0xb8 */ { u32 v = 0xb8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5a77: mov dword ptr [edi + 0x24], esi */ W32((u32)(r_edi+0x24u), r_esi);
    /* 005e5a7a: call 0x86dab0 */ r_esp -= 4; W32(r_esp, 0x5e5a7fu); f_0086dab0();
    /* 005e5a7f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e5a82: mov dword ptr [edi + 0x28], eax */ W32((u32)(r_edi+0x28u), r_eax);
    /* 005e5a85: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5a87: je 0x5e5ac2 */ if (fZ) goto L_005e5ac2;
L_005e5a89:; BB(0x005e5a89);
    /* 005e5a89: mov dword ptr [edi + 0x20], 1 */ W32((u32)(r_edi+0x20u), 0x1u);
    /* 005e5a90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5a91: call 0x86dc64 */ r_esp -= 4; W32(r_esp, 0x5e5a96u); f_0086dc64();
    /* 005e5a96: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e5a97: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005e5a99: jl 0x5e5ab4 */ if ((fS!=fO)) goto L_005e5ab4;
L_005e5a9b:; BB(0x005e5a9b);
    /* 005e5a9b: push dword ptr [edi + 0x1c] */ { u32 v = R32((u32)(r_edi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e5a9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5a9f: push dword ptr [edi + 0x28] */ { u32 v = R32((u32)(r_edi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e5aa2: call 0x86db64 */ r_esp -= 4; W32(r_esp, 0x5e5aa7u); f_0086db64();
    /* 005e5aa7: mov eax, 1 */ r_eax = 0x1u;
    /* 005e5aac: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e5aaf: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e5ab0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e5ab1: ret 4 */ FN_RET(0x005e5a40); r_esp += 8; return;
L_005e5ab4:; BB(0x005e5ab4);
    /* 005e5ab4: mov ecx, edi */ r_ecx = r_edi;
    /* 005e5ab6: call 0x5e5a04 */ r_esp -= 4; W32(r_esp, 0x5e5abbu); f_005e5a04();
L_005e5abb:; BB(0x005e5abb);
    /* 005e5abb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e5abd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e5abe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e5abf: ret 4 */ FN_RET(0x005e5a40); r_esp += 8; return;
L_005e5ac2:; BB(0x005e5ac2);
    /* 005e5ac2: mov ecx, edi */ r_ecx = r_edi;
    /* 005e5ac4: call 0x5e5a04 */ r_esp -= 4; W32(r_esp, 0x5e5ac9u); f_005e5a04();
    /* 005e5ac9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e5acb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e5acc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e5acd: ret 4 */ FN_RET(0x005e5a40); r_esp += 8; return;
}

void f_005e5ad0(void) /* sub_5E5AD0 */
{
    FN_ENTER(0x005e5ad0);
    /* 005e5ad0: push 0x508 */ { u32 v = 0x508u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ad5: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5e5adau); f_008581c5();
    /* 005e5ada: mov dword ptr [0xa8dca4], eax */ W32((u32)(0xa8dca4u), r_eax);
    /* 005e5adf: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ae1: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x5e5ae6u); f_008581c5();
    /* 005e5ae6: mov dword ptr [0xa8dca0], eax */ W32((u32)(0xa8dca0u), r_eax);
    /* 005e5aeb: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5aed: push 0x92d568 */ { u32 v = 0x92d568u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5af2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5af3: call 0x858900 */ r_esp -= 4; W32(r_esp, 0x5e5af8u); f_00858900();
    /* 005e5af8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5afa: push dword ptr [0xa8dca4] */ { u32 v = R32((u32)(0xa8dca4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e5b00: push 0x92d568 */ { u32 v = 0x92d568u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b05: push 0xb8 */ { u32 v = 0xb8u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b0a: call 0x7081b4 */ r_esp -= 4; W32(r_esp, 0x5e5b0fu); f_007081b4();
    /* 005e5b0f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e5b12: ret  */ FN_RET(0x005e5ad0); r_esp += 4; return;
}

void f_005e5b14(void) /* sub_5E5B14 */
{
    FN_ENTER(0x005e5b14);
    /* 005e5b14: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b15: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e5b17: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e5b19: call 0x5e5b38 */ r_esp -= 4; W32(r_esp, 0x5e5b1eu); f_005e5b38();
    /* 005e5b1e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005e5b22: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e5b24: jne 0x5e5b2a */ if (!fZ) goto L_005e5b2a;
L_005e5b26:; BB(0x005e5b26);
    /* 005e5b26: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e5b27: ret 4 */ FN_RET(0x005e5b14); r_esp += 8; return;
L_005e5b2a:; BB(0x005e5b2a);
    /* 005e5b2a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b2b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5e5b30u); f_005c2f74();
    /* 005e5b30: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e5b31: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e5b32: ret 4 */ FN_RET(0x005e5b14); r_esp += 8; return;
}

void f_005e5b38(void) /* sub_5E5B38 */
{
    FN_ENTER(0x005e5b38);
    /* 005e5b38: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b39: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5b3b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b3d: push 0x8dbafc */ { u32 v = 0x8dbafcu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b42: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e5b48: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b49: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e5b50: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e5b53: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e5b56: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005e5b59: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005e5b5c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005e5b5f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005e5b62: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e5b65: mov dword ptr [ecx], 0xb10080 */ W32((u32)(r_ecx), 0xb10080u);
    /* 005e5b6b: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e5b72: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5e5b77u); f_008171e8();
    /* 005e5b77: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5b7a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e5b81: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5b83: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5b84: ret  */ FN_RET(0x005e5b38); r_esp += 4; return;
}

void f_005e5b88(void) /* sub_5E5B88 */
{
    FN_ENTER(0x005e5b88);
    /* 005e5b88: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b89: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b8a: mov edi, ecx */ r_edi = r_ecx;
    /* 005e5b8c: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 005e5b90: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5b91: mov ecx, edi */ r_ecx = r_edi;
    /* 005e5b93: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x5e5b98u); f_008193cc();
    /* 005e5b98: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 005e5b9c: mov dword ptr [edi], 0xb10080 */ W32((u32)(r_edi), 0xb10080u);
    /* 005e5ba2: mov dword ptr [edi + 0x20], 0 */ W32((u32)(r_edi+0x20u), 0x0u);
    /* 005e5ba9: mov edx, dword ptr [0x9c2854] */ r_edx = R32((u32)(0x9c2854u));
    /* 005e5baf: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 005e5bb2: lea edx, [eax - 1] */ r_edx = (u32)(r_eax+0xffffffffu);
    /* 005e5bb5: mov eax, 1 */ r_eax = 0x1u;
    /* 005e5bba: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005e5bbd: mov dword ptr [edi + 0x20], ebx */ W32((u32)(r_edi+0x20u), r_ebx);
    /* 005e5bc0: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 005e5bc4: mov dword ptr [edi + 0x24], ebx */ W32((u32)(r_edi+0x24u), r_ebx);
    /* 005e5bc7: jg 0x5e5bcb */ if ((!fZ&&fS==fO)) goto L_005e5bcb;
L_005e5bc9:; BB(0x005e5bc9);
    /* 005e5bc9: mov edx, eax */ r_edx = r_eax;
L_005e5bcb:; BB(0x005e5bcb);
    /* 005e5bcb: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 005e5bcf: mov dword ptr [edi + 0x1c], edx */ W32((u32)(r_edi+0x1cu), r_edx);
    /* 005e5bd2: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e5bd7: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 005e5bdb: mov eax, edi */ r_eax = r_edi;
    /* 005e5bdd: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e5bde: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e5bdf: ret 0xc */ FN_RET(0x005e5b88); r_esp += 16; return;
}

void f_005e5be4(void) /* sub_5E5BE4 */
{
    FN_ENTER(0x005e5be4);
    /* 005e5be4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e5be5: mov esi, ecx */ r_esi = r_ecx;
    /* 005e5be7: mov ecx, dword ptr [esi + 0x20] */ r_ecx = R32((u32)(r_esi+0x20u));
    /* 005e5bea: add dword ptr [esi + 0x1c], -1 */ { u32 ad = (u32)(r_esi+0x1cu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005e5bee: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x5e5bf3u); f_008173b4();
    /* 005e5bf3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5bf5: je 0x5e5c1a */ if (fZ) goto L_005e5c1a;
L_005e5bf7:; BB(0x005e5bf7);
    /* 005e5bf7: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 005e5bfa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e5bfc: jne 0x5e5c18 */ if (!fZ) goto L_005e5c18;
L_005e5bfe:; BB(0x005e5bfe);
    /* 005e5bfe: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 005e5c01: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5c03: je 0x5e5c0b */ if (fZ) goto L_005e5c0b;
L_005e5c05:; BB(0x005e5c05);
    /* 005e5c05: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e5c08: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5e5c0au); call_ind(t); }
    /* 005e5c0a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_005e5c0b:; BB(0x005e5c0b);
    /* 005e5c0b: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 005e5c0f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e5c14: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
L_005e5c18:; BB(0x005e5c18);
    /* 005e5c18: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e5c19: ret  */ FN_RET(0x005e5be4); r_esp += 4; return;
L_005e5c1a:; BB(0x005e5c1a);
    /* 005e5c1a: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 005e5c1e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e5c23: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 005e5c27: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e5c28: ret  */ FN_RET(0x005e5be4); r_esp += 4; return;
}

void f_005e5c2c(void) /* sub_5E5C2C */
{
    FN_ENTER(0x005e5c2c);
    /* 005e5c2c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c2d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e5c2f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 005e5c31: call 0x5e5c50 */ r_esp -= 4; W32(r_esp, 0x5e5c36u); f_005e5c50();
    /* 005e5c36: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 005e5c3a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e5c3c: jne 0x5e5c42 */ if (!fZ) goto L_005e5c42;
L_005e5c3e:; BB(0x005e5c3e);
    /* 005e5c3e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e5c3f: ret 4 */ FN_RET(0x005e5c2c); r_esp += 8; return;
L_005e5c42:; BB(0x005e5c42);
    /* 005e5c42: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c43: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x5e5c48u); f_005c2f74();
    /* 005e5c48: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e5c49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e5c4a: ret 4 */ FN_RET(0x005e5c2c); r_esp += 8; return;
}

void f_005e5c50(void) /* sub_5E5C50 */
{
    FN_ENTER(0x005e5c50);
    /* 005e5c50: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c51: mov ebp, esp */ r_ebp = r_esp;
    /* 005e5c53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c55: push 0x8dbb26 */ { u32 v = 0x8dbb26u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c5a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 005e5c60: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5c61: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 005e5c68: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e5c6b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 005e5c6e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 005e5c71: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 005e5c74: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 005e5c77: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 005e5c7a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e5c7d: mov dword ptr [eax], 0xb100c0 */ W32((u32)(r_eax), 0xb100c0u);
    /* 005e5c83: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 005e5c86: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 005e5c8d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 005e5c90: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x5e5c95u); f_008171e8();
    /* 005e5c95: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 005e5c98: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 005e5c9f: mov esp, ebp */ r_esp = r_ebp;
    /* 005e5ca1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5ca2: ret  */ FN_RET(0x005e5c50); r_esp += 4; return;
}

void f_005e5ca4(void) /* sub_5E5CA4 */
{
    FN_ENTER(0x005e5ca4);
    /* 005e5ca4: add dword ptr [ecx + 0x24], 1 */ { u32 ad = (u32)(r_ecx+0x24u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e5ca8: ret  */ FN_RET(0x005e5ca4); r_esp += 4; return;
}

void f_005e5cac(void) /* sub_5E5CAC */
{
    FN_ENTER(0x005e5cac);
    /* 005e5cac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005e5cad: mov edi, ecx */ r_edi = r_ecx;
    /* 005e5caf: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005e5cb3: mov ecx, edi */ r_ecx = r_edi;
    /* 005e5cb5: call 0x5cab88 */ r_esp -= 4; W32(r_esp, 0x5e5cbau); f_005cab88();
    /* 005e5cba: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 005e5cbf: mov dword ptr [edi], 0xb100c0 */ W32((u32)(r_edi), 0xb100c0u);
    /* 005e5cc5: mov edx, dword ptr [0x9c2858] */ r_edx = R32((u32)(0x9c2858u));
    /* 005e5ccb: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 005e5cce: mov word ptr [edi + 0x1c], ax */ W16((u32)(r_edi+0x1cu), (u16)r_eax);
    /* 005e5cd2: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 005e5cd6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005e5cd8: mov dword ptr [edi + 0x28], edx */ W32((u32)(r_edi+0x28u), r_edx);
    /* 005e5cdb: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
    /* 005e5cde: movzx eax, word ptr [edi + 8] */ r_eax = (u32)R16((u32)(r_edi+0x8u));
    /* 005e5ce2: mov dword ptr [edi + 0x24], edx */ W32((u32)(r_edi+0x24u), r_edx);
    /* 005e5ce5: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e5cea: mov word ptr [edi + 8], ax */ W16((u32)(r_edi+0x8u), (u16)r_eax);
    /* 005e5cee: mov eax, edi */ r_eax = r_edi;
    /* 005e5cf0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005e5cf1: ret 0xc */ FN_RET(0x005e5cac); r_esp += 16; return;
}

void f_005e5cf4(void) /* sub_5E5CF4 */
{
    FN_ENTER(0x005e5cf4);
    /* 005e5cf4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5cf5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005e5cf7: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 005e5cfb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005e5cfc: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x5e5d01u); f_0068d5a8();
    /* 005e5d01: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e5d02: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 005e5d05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5d07: je 0x5e5d2c */ if (fZ) goto L_005e5d2c;
L_005e5d09:; BB(0x005e5d09);
    /* 005e5d09: mov eax, dword ptr [ebp + 0x24] */ r_eax = R32((u32)(r_ebp+0x24u));
    /* 005e5d0c: cmp eax, dword ptr [ebp + 0x20] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebp+0x20u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5d0f: jne 0x5e5d22 */ if (!fZ) goto L_005e5d22;
L_005e5d11:; BB(0x005e5d11);
    /* 005e5d11: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005e5d14: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e5d16: call dword ptr [eax + 0x10] */ { u32 t = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, 0x5e5d19u); call_ind(t); }
    /* 005e5d19: mov dword ptr [ebp + 0x24], 0 */ W32((u32)(r_ebp+0x24u), 0x0u);
    /* 005e5d20: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5d21: ret  */ FN_RET(0x005e5cf4); r_esp += 4; return;
L_005e5d22:; BB(0x005e5d22);
    /* 005e5d22: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 005e5d25: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005e5d27: call dword ptr [eax + 0x14] */ { u32 t = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, 0x5e5d2au); call_ind(t); }
    /* 005e5d2a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5d2b: ret  */ FN_RET(0x005e5cf4); r_esp += 4; return;
L_005e5d2c:; BB(0x005e5d2c);
    /* 005e5d2c: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 005e5d30: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e5d35: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 005e5d39: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5d3a: ret  */ FN_RET(0x005e5cf4); r_esp += 4; return;
}

void f_005e5d3c(void) /* sub_5E5D3C */
{
    FN_ENTER(0x005e5d3c);
    /* 005e5d3c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5d3d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e5d3f: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 005e5d42: push dword ptr [eax + 0x3ec] */ { u32 v = R32((u32)(r_eax+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e5d48: call 0x807d8c */ r_esp -= 4; W32(r_esp, 0x5e5d4du); f_00807d8c();
    /* 005e5d4d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e5d4e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e5d51: je 0x5e5d55 */ if (fZ) goto L_005e5d55;
L_005e5d53:; BB(0x005e5d53);
    /* 005e5d53: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e5d54: ret  */ FN_RET(0x005e5d3c); r_esp += 4; return;
L_005e5d55:; BB(0x005e5d55);
    /* 005e5d55: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 005e5d58: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 005e5d5f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e5d62: je 0x5e5d53 */ if (fZ) goto L_005e5d53;
L_005e5d64:; BB(0x005e5d64);
    /* 005e5d64: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 005e5d67: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e5d6c: jne 0x5e5d53 */ if (!fZ) goto L_005e5d53;
L_005e5d6e:; BB(0x005e5d6e);
    /* 005e5d6e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5d70: call 0x777414 */ r_esp -= 4; W32(r_esp, 0x5e5d75u); f_00777414();
    /* 005e5d75: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e5d76: ret  */ FN_RET(0x005e5d3c); r_esp += 4; return;
}

void f_005e5d78(void) /* sub_5E5D78 */
{
    FN_ENTER(0x005e5d78);
    /* 005e5d78: mov eax, dword ptr [ecx + 0x28] */ r_eax = R32((u32)(r_ecx+0x28u));
    /* 005e5d7b: mov edx, dword ptr [eax + 0x328] */ r_edx = R32((u32)(r_eax+0x328u));
    /* 005e5d81: test dl, 0x1c */ {  u32 a = (u8)r_edx; u32 b = 0x1cu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e5d84: je 0x5e5d8a */ if (fZ) goto L_005e5d8a;
L_005e5d86:; BB(0x005e5d86);
    /* 005e5d86: add dword ptr [ecx + 0x24], 1 */ { u32 ad = (u32)(r_ecx+0x24u);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_005e5d8a:; BB(0x005e5d8a);
    /* 005e5d8a: ret  */ FN_RET(0x005e5d78); r_esp += 4; return;
}

void f_005e5d8c(void) /* sub_5E5D8C */
{
    FN_ENTER(0x005e5d8c);
    /* 005e5d8c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5d8d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 005e5d8f: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 005e5d92: push dword ptr [eax + 0x3ec] */ { u32 v = R32((u32)(r_eax+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e5d98: call 0x807d8c */ r_esp -= 4; W32(r_esp, 0x5e5d9du); f_00807d8c();
    /* 005e5d9d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e5d9e: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e5da1: je 0x5e5da5 */ if (fZ) goto L_005e5da5;
L_005e5da3:; BB(0x005e5da3);
    /* 005e5da3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e5da4: ret  */ FN_RET(0x005e5d8c); r_esp += 4; return;
L_005e5da5:; BB(0x005e5da5);
    /* 005e5da5: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 005e5da8: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 005e5daf: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e5db2: je 0x5e5da3 */ if (fZ) goto L_005e5da3;
L_005e5db4:; BB(0x005e5db4);
    /* 005e5db4: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 005e5db7: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e5dbc: jne 0x5e5da3 */ if (!fZ) goto L_005e5da3;
L_005e5dbe:; BB(0x005e5dbe);
    /* 005e5dbe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5dc0: call 0x7773a0 */ r_esp -= 4; W32(r_esp, 0x5e5dc5u); f_007773a0();
    /* 005e5dc5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005e5dc6: ret  */ FN_RET(0x005e5d8c); r_esp += 4; return;
}

void f_005e5dc8(void) /* sub_5E5DC8 */
{
    FN_ENTER(0x005e5dc8);
    /* 005e5dc8: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 005e5dcb: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 005e5dce: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e5dd3: jne 0x5e5ddc */ if (!fZ) goto L_005e5ddc;
L_005e5dd5:; BB(0x005e5dd5);
    /* 005e5dd5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5dd7: call 0x7773d4 */ r_esp -= 4; W32(r_esp, 0x5e5ddcu); f_007773d4();
L_005e5ddc:; BB(0x005e5ddc);
    /* 005e5ddc: ret  */ FN_RET(0x005e5dc8); r_esp += 4; return;
}

void f_005e5de0(void) /* sub_5E5DE0 */
{
    FN_ENTER(0x005e5de0);
    /* 005e5de0: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 005e5de3: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 005e5de6: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e5deb: jne 0x5e5df4 */ if (!fZ) goto L_005e5df4;
L_005e5ded:; BB(0x005e5ded);
    /* 005e5ded: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5def: call 0x777368 */ r_esp -= 4; W32(r_esp, 0x5e5df4u); f_00777368();
L_005e5df4:; BB(0x005e5df4);
    /* 005e5df4: ret  */ FN_RET(0x005e5de0); r_esp += 4; return;
}

void f_005e5df8(void) /* sub_5E5DF8 */
{
    FN_ENTER(0x005e5df8);
    /* 005e5df8: mov ecx, dword ptr [ecx + 0x28] */ r_ecx = R32((u32)(r_ecx+0x28u));
    /* 005e5dfb: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 005e5dfe: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e5e03: jne 0x5e5e12 */ if (!fZ) goto L_005e5e12;
L_005e5e05:; BB(0x005e5e05);
    /* 005e5e05: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e0a: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005e5e0c: call dword ptr [eax + 0x134] */ { u32 t = R32((u32)(r_eax+0x134u)); r_esp -= 4; W32(r_esp, 0x5e5e12u); call_ind(t); }
L_005e5e12:; BB(0x005e5e12);
    /* 005e5e12: ret  */ FN_RET(0x005e5df8); r_esp += 4; return;
}

void f_005e5e14(void) /* sub_5E5E14 */
{
    FN_ENTER(0x005e5e14);
    /* 005e5e14: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e15: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e5e18: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005e5e1a: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 005e5e1d: movsx eax, word ptr [ecx + 0x32c] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ecx+0x32cu));
    /* 005e5e24: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5e27: je 0x5e5e49 */ if (fZ) goto L_005e5e49;
L_005e5e29:; BB(0x005e5e29);
    /* 005e5e29: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005e5e2b: call dword ptr [eax + 0x8c] */ { u32 t = R32((u32)(r_eax+0x8cu)); r_esp -= 4; W32(r_esp, 0x5e5e31u); call_ind(t); }
    /* 005e5e31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5e33: jne 0x5e5e49 */ if (!fZ) goto L_005e5e49;
L_005e5e35:; BB(0x005e5e35);
    /* 005e5e35: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 005e5e38: push dword ptr [eax + 0x3ec] */ { u32 v = R32((u32)(r_eax+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e5e3e: call 0x807d8c */ r_esp -= 4; W32(r_esp, 0x5e5e43u); f_00807d8c();
    /* 005e5e43: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e5e44: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5e47: je 0x5e5e4e */ if (fZ) goto L_005e5e4e;
L_005e5e49:; BB(0x005e5e49);
    /* 005e5e49: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e5e4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5e4d: ret  */ FN_RET(0x005e5e14); r_esp += 4; return;
L_005e5e4e:; BB(0x005e5e4e);
    /* 005e5e4e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5e5e53u); f_008587a5();
    /* 005e5e53: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005e5e56: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005e5e59: fdiv dword ptr [0x92d59c] */ ST(0) = ST(0) / R_F32((u32)(0x92d59cu));
    /* 005e5e5f: fcomp dword ptr [ebp + 0x2c] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0x2cu))); FPOP();
    /* 005e5e62: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005e5e64: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005e5e65: jae 0x5e5e49 */ if (!fC) goto L_005e5e49;
L_005e5e67:; BB(0x005e5e67);
    /* 005e5e67: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e69: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 005e5e6c: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005e5e6e: call dword ptr [eax + 0xc8] */ { u32 t = R32((u32)(r_eax+0xc8u)); r_esp -= 4; W32(r_esp, 0x5e5e74u); call_ind(t); }
    /* 005e5e74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e76: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 005e5e79: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 005e5e7b: call dword ptr [eax + 0x130] */ { u32 t = R32((u32)(r_eax+0x130u)); r_esp -= 4; W32(r_esp, 0x5e5e81u); call_ind(t); }
    /* 005e5e81: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e5e84: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5e85: ret  */ FN_RET(0x005e5e14); r_esp += 4; return;
}

void f_005e5e88(void) /* sub_5E5E88 */
{
    FN_ENTER(0x005e5e88);
    /* 005e5e88: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5e89: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005e5e8b: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 005e5e8e: call 0x689b44 */ r_esp -= 4; W32(r_esp, 0x5e5e93u); f_00689b44();
    /* 005e5e93: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e5e95: jne 0x5e5ec5 */ if (!fZ) goto L_005e5ec5;
L_005e5e97:; BB(0x005e5e97);
    /* 005e5e97: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 005e5e9a: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 005e5ea0: test eax, 0x20000 */ {  u32 a = r_eax; u32 b = 0x20000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5ea5: je 0x5e5eae */ if (fZ) goto L_005e5eae;
L_005e5ea7:; BB(0x005e5ea7);
    /* 005e5ea7: mov eax, 1 */ r_eax = 0x1u;
    /* 005e5eac: jmp 0x5e5eb0 */ goto L_005e5eb0;
L_005e5eae:; BB(0x005e5eae);
    /* 005e5eae: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_005e5eb0:; BB(0x005e5eb0);
    /* 005e5eb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e5eb2: jne 0x5e5ec5 */ if (!fZ) goto L_005e5ec5;
L_005e5eb4:; BB(0x005e5eb4);
    /* 005e5eb4: push dword ptr [edx + 0x3ec] */ { u32 v = R32((u32)(r_edx+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e5eba: call 0x807d8c */ r_esp -= 4; W32(r_esp, 0x5e5ebfu); f_00807d8c();
    /* 005e5ebf: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e5ec0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 005e5ec3: je 0x5e5ec7 */ if (fZ) goto L_005e5ec7;
L_005e5ec5:; BB(0x005e5ec5);
    /* 005e5ec5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5ec6: ret  */ FN_RET(0x005e5e88); r_esp += 4; return;
L_005e5ec7:; BB(0x005e5ec7);
    /* 005e5ec7: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 005e5eca: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 005e5ecd: test eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e5ed2: jne 0x5e5ec5 */ if (!fZ) goto L_005e5ec5;
L_005e5ed4:; BB(0x005e5ed4);
    /* 005e5ed4: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ed6: push dword ptr [ebp + 0x2c] */ { u32 v = R32((u32)(r_ebp+0x2cu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e5ed9: add edx, 0x300 */ {  u32 a = r_edx; u32 b = 0x300u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005e5edf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ee0: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x5e5ee5u); f_0050b7a4();
    /* 005e5ee5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 005e5ee8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005e5eea: je 0x5e5ec5 */ if (fZ) goto L_005e5ec5;
L_005e5eec:; BB(0x005e5eec);
    /* 005e5eec: mov edx, dword ptr [ebp + 0x28] */ r_edx = R32((u32)(r_ebp+0x28u));
    /* 005e5eef: movzx ebp, word ptr [edx + 0x1c] */ r_ebp = (u32)R16((u32)(r_edx+0x1cu));
    /* 005e5ef3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005e5ef4: mov ecx, eax */ r_ecx = r_eax;
    /* 005e5ef6: call 0x508f14 */ r_esp -= 4; W32(r_esp, 0x5e5efbu); f_00508f14();
    /* 005e5efb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005e5efc: ret  */ FN_RET(0x005e5e88); r_esp += 4; return;
}

void f_005e5f00(void) /* sub_5E5F00 */
{
    FN_ENTER(0x005e5f00);
    /* 005e5f00: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f01: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e5f04: mov esi, ecx */ r_esi = r_ecx;
    /* 005e5f06: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 005e5f09: push dword ptr [eax + 0x3ec] */ { u32 v = R32((u32)(r_eax+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e5f0f: call 0x807d8c */ r_esp -= 4; W32(r_esp, 0x5e5f14u); f_00807d8c();
    /* 005e5f14: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e5f15: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5f18: je 0x5e5f1f */ if (fZ) goto L_005e5f1f;
L_005e5f1a:; BB(0x005e5f1a);
    /* 005e5f1a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e5f1d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e5f1e: ret  */ FN_RET(0x005e5f00); r_esp += 4; return;
L_005e5f1f:; BB(0x005e5f1f);
    /* 005e5f1f: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5e5f24u); f_008587a5();
    /* 005e5f24: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005e5f27: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005e5f2a: fdiv dword ptr [0x92d598] */ ST(0) = ST(0) / R_F32((u32)(0x92d598u));
    /* 005e5f30: fcomp dword ptr [esi + 0x2c] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x2cu))); FPOP();
    /* 005e5f33: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005e5f35: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005e5f36: jae 0x5e5f1a */ if (!fC) goto L_005e5f1a;
L_005e5f38:; BB(0x005e5f38);
    /* 005e5f38: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 005e5f3b: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 005e5f3d: mov dword ptr [esp + 8], 0x11 */ W32((u32)(r_esp+0x8u), 0x11u);
    /* 005e5f45: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005e5f4a: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 005e5f52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f53: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f54: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f56: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f58: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f5a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f5b: call dword ptr [esi + 0x60] */ { u32 t = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, 0x5e5f5eu); call_ind(t); }
    /* 005e5f5e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005e5f60: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e5f63: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e5f64: ret  */ FN_RET(0x005e5f00); r_esp += 4; return;
}

void f_005e5f68(void) /* sub_5E5F68 */
{
    FN_ENTER(0x005e5f68);
    /* 005e5f68: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e5f69: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e5f6c: mov esi, ecx */ r_esi = r_ecx;
    /* 005e5f6e: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 005e5f71: push dword ptr [eax + 0x3ec] */ { u32 v = R32((u32)(r_eax+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e5f77: call 0x807d8c */ r_esp -= 4; W32(r_esp, 0x5e5f7cu); f_00807d8c();
    /* 005e5f7c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e5f7d: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5f80: je 0x5e5f87 */ if (fZ) goto L_005e5f87;
L_005e5f82:; BB(0x005e5f82);
    /* 005e5f82: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e5f85: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e5f86: ret  */ FN_RET(0x005e5f68); r_esp += 4; return;
L_005e5f87:; BB(0x005e5f87);
    /* 005e5f87: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5e5f8cu); f_008587a5();
    /* 005e5f8c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005e5f8f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005e5f92: fdiv dword ptr [0x92d590] */ ST(0) = ST(0) / R_F32((u32)(0x92d590u));
    /* 005e5f98: fcomp dword ptr [esi + 0x2c] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x2cu))); FPOP();
    /* 005e5f9b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005e5f9d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005e5f9e: jae 0x5e5f82 */ if (!fC) goto L_005e5f82;
L_005e5fa0:; BB(0x005e5fa0);
    /* 005e5fa0: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 005e5fa3: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 005e5fa5: mov dword ptr [esp + 8], 0x12 */ W32((u32)(r_esp+0x8u), 0x12u);
    /* 005e5fad: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005e5fb2: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 005e5fba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5fbb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5fbc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5fbe: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5fc0: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 005e5fc2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e5fc3: call dword ptr [esi + 0x60] */ { u32 t = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, 0x5e5fc6u); call_ind(t); }
    /* 005e5fc6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005e5fc8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e5fcb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e5fcc: ret  */ FN_RET(0x005e5f68); r_esp += 4; return;
}

void f_005e5fd0(void) /* sub_5E5FD0 */
{
    FN_ENTER(0x005e5fd0);
    /* 005e5fd0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005e5fd1: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005e5fd4: mov esi, ecx */ r_esi = r_ecx;
    /* 005e5fd6: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 005e5fd9: push dword ptr [eax + 0x3ec] */ { u32 v = R32((u32)(r_eax+0x3ecu)); r_esp -= 4; W32(r_esp, v); }
    /* 005e5fdf: call 0x807d8c */ r_esp -= 4; W32(r_esp, 0x5e5fe4u); f_00807d8c();
    /* 005e5fe4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 005e5fe5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005e5fe8: je 0x5e5fef */ if (fZ) goto L_005e5fef;
L_005e5fea:; BB(0x005e5fea);
    /* 005e5fea: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e5fed: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e5fee: ret  */ FN_RET(0x005e5fd0); r_esp += 4; return;
L_005e5fef:; BB(0x005e5fef);
    /* 005e5fef: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x5e5ff4u); f_008587a5();
    /* 005e5ff4: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005e5ff7: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005e5ffa: fdiv dword ptr [0x92d588] */ ST(0) = ST(0) / R_F32((u32)(0x92d588u));
    /* 005e6000: fcomp dword ptr [esi + 0x2c] */ fx_compare(ST(0), R_F32((u32)(r_esi+0x2cu))); FPOP();
    /* 005e6003: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005e6005: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005e6006: jae 0x5e5fea */ if (!fC) goto L_005e5fea;
L_005e6008:; BB(0x005e6008);
    /* 005e6008: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 005e600b: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 005e600d: mov dword ptr [esp + 8], 0x10 */ W32((u32)(r_esp+0x8u), 0x10u);
    /* 005e6015: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 005e601a: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 005e6022: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6023: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005e6024: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6026: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 005e6028: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 005e602a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 005e602b: call dword ptr [esi + 0x60] */ { u32 t = R32((u32)(r_esi+0x60u)); r_esp -= 4; W32(r_esp, 0x5e602eu); call_ind(t); }
    /* 005e602e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005e6030: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005e6033: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005e6034: ret  */ FN_RET(0x005e5fd0); r_esp += 4; return;
}

