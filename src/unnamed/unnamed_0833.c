#include "protos.h"

void f_00833018(void) /* sub_833018 */
{
    FN_ENTER(0x00833018);
    /* 00833018: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 0083301d: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0083301f: jne 0x833063 */ if (!fZ) goto L_00833063;
L_00833021:; BB(0x00833021);
    /* 00833021: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00833026: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0083302a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083302c: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 0083302f: push dword ptr [ecx*4 + 0xa2193c] */ { u32 v = R32((u32)(r_ecx*4+0xa2193cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00833036: push 0x91 */ { u32 v = 0x91u; r_esp -= 4; W32(r_esp, v); }
    /* 0083303b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083303c: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x833042u); call_ind(t); }
    /* 00833042: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00833047: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0083304b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0083304d: mov ecx, dword ptr [ecx + 4] */ r_ecx = R32((u32)(r_ecx+0x4u));
    /* 00833050: push dword ptr [ecx*4 + 0xa2193c] */ { u32 v = R32((u32)(r_ecx*4+0xa2193cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00833057: push 0x93 */ { u32 v = 0x93u; r_esp -= 4; W32(r_esp, v); }
    /* 0083305c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0083305d: call dword ptr [edx + 0xc8] */ { u32 t = R32((u32)(r_edx+0xc8u)); r_esp -= 4; W32(r_esp, 0x833063u); call_ind(t); }
L_00833063:; BB(0x00833063);
    /* 00833063: ret  */ FN_RET(0x00833018); r_esp += 4; return;
}

void f_00833064(void) /* sub_833064 */
{
    FN_ENTER(0x00833064);
    /* 00833064: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00833065: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00833066: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00833067: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00833068: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083306b: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0083306f: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 00833074: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00833076: jne 0x83307f */ if (!fZ) goto L_0083307f;
L_00833078:; BB(0x00833078);
    /* 00833078: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083307a: call 0x839a28 */ r_esp -= 4; W32(r_esp, 0x83307fu); f_00839a28();
L_0083307f:; BB(0x0083307f);
    /* 0083307f: mov esi, dword ptr [0xacc16c] */ r_esi = R32((u32)(0xacc16cu));
    /* 00833085: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00833089: mov ebp, dword ptr [0xacd52c] */ r_ebp = R32((u32)(0xacd52cu));
    /* 0083308f: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 00833092: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00833094: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00833096: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00833098: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0083309b: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083309d: je 0x8330ce */ if (fZ) goto L_008330ce;
L_0083309f:; BB(0x0083309f);
    /* 0083309f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008330a1: movzx eax, word ptr [ecx] */ r_eax = (u32)R16((u32)(r_ecx));
    /* 008330a4: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008330a7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008330a9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008330ab: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 008330ae: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008330b0: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 008330b4: mov ecx, dword ptr [edx + eax] */ r_ecx = R32((u32)(r_edx+r_eax));
    /* 008330b7: mov dword ptr [ebp], ecx */ W32((u32)(r_ebp), r_ecx);
    /* 008330ba: mov ecx, dword ptr [edx + eax + 4] */ r_ecx = R32((u32)(r_edx+r_eax+0x4u));
    /* 008330be: mov dword ptr [ebp + 4], ecx */ W32((u32)(r_ebp+0x4u), r_ecx);
    /* 008330c1: mov eax, dword ptr [edx + eax + 8] */ r_eax = R32((u32)(r_edx+r_eax+0x8u));
    /* 008330c5: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 008330c8: mov dword ptr [ebp + 0xc], esi */ W32((u32)(r_ebp+0xcu), r_esi);
    /* 008330cb: add ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_008330ce:; BB(0x008330ce);
    /* 008330ce: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 008330d2: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 008330d6: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 008330d9: shr ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008330db: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
L_008330df:; BB(0x008330df);
    /* 008330df: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008330e1: movzx edx, di */ r_edx = (u32)(u16)r_edi;
    /* 008330e4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008330e6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008330e8: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 008330eb: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008330ed: shr edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008330f0: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008330f2: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008330f4: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 008330f7: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008330f9: mov edi, dword ptr [esi + eax] */ r_edi = R32((u32)(r_esi+r_eax));
    /* 008330fc: mov dword ptr [ebp], edi */ W32((u32)(r_ebp), r_edi);
    /* 008330ff: mov edi, dword ptr [esi + eax + 4] */ r_edi = R32((u32)(r_esi+r_eax+0x4u));
    /* 00833103: mov dword ptr [ebp + 4], edi */ W32((u32)(r_ebp+0x4u), r_edi);
    /* 00833106: mov esi, dword ptr [esi + eax + 8] */ r_esi = R32((u32)(r_esi+r_eax+0x8u));
    /* 0083310a: mov dword ptr [ebp + 8], esi */ W32((u32)(r_ebp+0x8u), r_esi);
    /* 0083310d: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833110: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00833114: mov dword ptr [ebp + 0xc], esi */ W32((u32)(r_ebp+0xcu), r_esi);
    /* 00833117: mov edi, dword ptr [edx + eax] */ r_edi = R32((u32)(r_edx+r_eax));
    /* 0083311a: mov dword ptr [ebp + 0x10], edi */ W32((u32)(r_ebp+0x10u), r_edi);
    /* 0083311d: mov edi, dword ptr [edx + eax + 4] */ r_edi = R32((u32)(r_edx+r_eax+0x4u));
    /* 00833121: mov dword ptr [ebp + 0x14], edi */ W32((u32)(r_ebp+0x14u), r_edi);
    /* 00833124: mov edx, dword ptr [edx + eax + 8] */ r_edx = R32((u32)(r_edx+r_eax+0x8u));
    /* 00833128: mov dword ptr [ebp + 0x18], edx */ W32((u32)(r_ebp+0x18u), r_edx);
    /* 0083312b: mov dword ptr [ebp + 0x1c], esi */ W32((u32)(r_ebp+0x1cu), r_esi);
    /* 0083312e: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00833131: add ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00833134: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00833136: jne 0x8330df */ if (!fZ) goto L_008330df;
L_00833138:; BB(0x00833138);
    /* 00833138: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0083313b: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00833140: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00833142: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00833144: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00833146: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0083314c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083314e: shr edi, 4 */ { u32 c = (4u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00833151: add edi, -2 */ {  u32 a = r_edi; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00833154: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00833155: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00833157: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00833158: call dword ptr [edx + 0x120] */ { u32 t = R32((u32)(r_edx+0x120u)); r_esp -= 4; W32(r_esp, 0x83315eu); call_ind(t); }
    /* 0083315e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00833161: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00833162: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00833163: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00833164: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00833165: ret  */ FN_RET(0x00833064); r_esp += 4; return;
}

void f_00833168(void) /* sub_833168 */
{
    FN_ENTER(0x00833168);
    /* 00833168: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00833169: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083316a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083316b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083316c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083316f: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00833173: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00833177: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0083317b: mov esi, dword ptr [0xacc16c] */ r_esi = R32((u32)(0xacc16cu));
    /* 00833181: mov edx, dword ptr [0xacd52c] */ r_edx = R32((u32)(0xacd52cu));
    /* 00833187: lea ebx, [eax + eax] */ r_ebx = (u32)(r_eax+r_eax);
    /* 0083318a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083318c: sub ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 0083318e: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00833190: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00833192: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00833194: shr ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00833197: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00833199: je 0x8331cd */ if (fZ) goto L_008331cd;
L_0083319b:; BB(0x0083319b);
    /* 0083319b: mov edi, ebp */ r_edi = r_ebp;
    /* 0083319d: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 008331a0: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008331a3: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 008331a6: mov edi, dword ptr [ecx + eax*4] */ r_edi = R32((u32)(r_ecx+r_eax*4));
    /* 008331a9: mov dword ptr [edx], edi */ W32((u32)(r_edx), r_edi);
    /* 008331ab: mov edi, dword ptr [ecx + eax*4 + 4] */ r_edi = R32((u32)(r_ecx+r_eax*4+0x4u));
    /* 008331af: mov dword ptr [edx + 4], edi */ W32((u32)(r_edx+0x4u), r_edi);
    /* 008331b2: mov edi, dword ptr [ecx + eax*4 + 8] */ r_edi = R32((u32)(r_ecx+r_eax*4+0x8u));
    /* 008331b6: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 008331b9: mov dword ptr [edx + 0xc], esi */ W32((u32)(r_edx+0xcu), r_esi);
    /* 008331bc: mov edi, dword ptr [ecx + eax*4 + 0xc] */ r_edi = R32((u32)(r_ecx+r_eax*4+0xcu));
    /* 008331c0: mov dword ptr [edx + 0x10], edi */ W32((u32)(r_edx+0x10u), r_edi);
    /* 008331c3: mov eax, dword ptr [ecx + eax*4 + 0x10] */ r_eax = R32((u32)(r_ecx+r_eax*4+0x10u));
    /* 008331c7: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 008331ca: add edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_008331cd:; BB(0x008331cd);
    /* 008331cd: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 008331d1: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 008331d4: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 008331d8: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_008331da:; BB(0x008331da);
    /* 008331da: mov ebx, dword ptr [ebp] */ r_ebx = R32((u32)(r_ebp));
    /* 008331dd: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 008331e1: movzx edi, bx */ r_edi = (u32)(u16)r_ebx;
    /* 008331e4: lea esi, [edi + edi*4] */ r_esi = (u32)(r_edi+r_edi*4);
    /* 008331e7: shr ebx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 008331ea: lea ebp, [ebx + ebx*4] */ r_ebp = (u32)(r_ebx+r_ebx*4);
    /* 008331ed: mov ebx, dword ptr [ecx + esi*4] */ r_ebx = R32((u32)(r_ecx+r_esi*4));
    /* 008331f0: mov dword ptr [edx], ebx */ W32((u32)(r_edx), r_ebx);
    /* 008331f2: mov ebx, dword ptr [ecx + esi*4 + 4] */ r_ebx = R32((u32)(r_ecx+r_esi*4+0x4u));
    /* 008331f6: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 008331f9: mov ebx, dword ptr [ecx + esi*4 + 8] */ r_ebx = R32((u32)(r_ecx+r_esi*4+0x8u));
    /* 008331fd: mov dword ptr [edx + 8], ebx */ W32((u32)(r_edx+0x8u), r_ebx);
    /* 00833200: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00833204: mov dword ptr [edx + 0xc], ebx */ W32((u32)(r_edx+0xcu), r_ebx);
    /* 00833207: mov edi, dword ptr [ecx + esi*4 + 0xc] */ r_edi = R32((u32)(r_ecx+r_esi*4+0xcu));
    /* 0083320b: mov dword ptr [edx + 0x10], edi */ W32((u32)(r_edx+0x10u), r_edi);
    /* 0083320e: mov esi, dword ptr [ecx + esi*4 + 0x10] */ r_esi = R32((u32)(r_ecx+r_esi*4+0x10u));
    /* 00833212: mov dword ptr [edx + 0x14], esi */ W32((u32)(r_edx+0x14u), r_esi);
    /* 00833215: mov esi, dword ptr [ecx + ebp*4] */ r_esi = R32((u32)(r_ecx+r_ebp*4));
    /* 00833218: mov dword ptr [edx + 0x18], esi */ W32((u32)(r_edx+0x18u), r_esi);
    /* 0083321b: mov esi, dword ptr [ecx + ebp*4 + 4] */ r_esi = R32((u32)(r_ecx+r_ebp*4+0x4u));
    /* 0083321f: mov dword ptr [edx + 0x1c], esi */ W32((u32)(r_edx+0x1cu), r_esi);
    /* 00833222: mov esi, dword ptr [ecx + ebp*4 + 8] */ r_esi = R32((u32)(r_ecx+r_ebp*4+0x8u));
    /* 00833226: mov dword ptr [edx + 0x20], esi */ W32((u32)(r_edx+0x20u), r_esi);
    /* 00833229: mov dword ptr [edx + 0x24], ebx */ W32((u32)(r_edx+0x24u), r_ebx);
    /* 0083322c: mov ebx, dword ptr [ecx + ebp*4 + 0xc] */ r_ebx = R32((u32)(r_ecx+r_ebp*4+0xcu));
    /* 00833230: mov dword ptr [edx + 0x28], ebx */ W32((u32)(r_edx+0x28u), r_ebx);
    /* 00833233: mov ebx, dword ptr [ecx + ebp*4 + 0x10] */ r_ebx = R32((u32)(r_ecx+r_ebp*4+0x10u));
    /* 00833237: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0083323b: mov dword ptr [edx + 0x2c], ebx */ W32((u32)(r_edx+0x2cu), r_ebx);
    /* 0083323e: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00833241: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00833244: add edx, 0x30 */ {  u32 a = r_edx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833247: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00833249: jne 0x8331da */ if (!fZ) goto L_008331da;
L_0083324b:; BB(0x0083324b);
    /* 0083324b: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0083324e: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00833254: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00833256: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 00833258: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083325a: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00833260: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00833262: mov eax, 0xcccccccd */ r_eax = 0xcccccccdu;
    /* 00833267: mul ebx */ { u64 t = (u64)r_eax * r_ebx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00833269: shr edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0083326c: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083326f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00833270: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00833272: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00833273: call dword ptr [ebp + 0x120] */ { u32 t = R32((u32)(r_ebp+0x120u)); r_esp -= 4; W32(r_esp, 0x833279u); call_ind(t); }
    /* 00833279: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0083327c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083327d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083327e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083327f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00833280: ret  */ FN_RET(0x00833168); r_esp += 4; return;
}

void f_00833284(void) /* sub_833284 */
{
    FN_ENTER(0x00833284);
    /* 00833284: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00833285: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00833286: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00833287: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00833288: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0083328b: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 0083328f: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 00833293: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 00833298: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083329a: jne 0x8332a3 */ if (!fZ) goto L_008332a3;
L_0083329c:; BB(0x0083329c);
    /* 0083329c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0083329e: call 0x839a28 */ r_esp -= 4; W32(r_esp, 0x8332a3u); f_00839a28();
L_008332a3:; BB(0x008332a3);
    /* 008332a3: mov edi, dword ptr [0xacc16c] */ r_edi = R32((u32)(0xacc16cu));
    /* 008332a9: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 008332ad: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 008332b0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008332b2: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 008332b5: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008332b7: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008332b9: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008332bb: mov ecx, dword ptr [0xacd52c] */ r_ecx = R32((u32)(0xacd52cu));
    /* 008332c1: shr esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008332c4: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008332c6: je 0x833306 */ if (fZ) goto L_00833306;
L_008332c8:; BB(0x008332c8);
    /* 008332c8: mov edx, ebx */ r_edx = r_ebx;
    /* 008332ca: movzx edx, word ptr [edx] */ r_edx = (u32)R16((u32)(r_edx));
    /* 008332cd: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008332d0: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 008332d3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008332d5: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008332d7: mov edx, dword ptr [ebp + eax*8] */ r_edx = R32((u32)(r_ebp+r_eax*8));
    /* 008332db: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 008332dd: mov edx, dword ptr [ebp + eax*8 + 4] */ r_edx = R32((u32)(r_ebp+r_eax*8+0x4u));
    /* 008332e1: mov dword ptr [ecx + 4], edx */ W32((u32)(r_ecx+0x4u), r_edx);
    /* 008332e4: mov edx, dword ptr [ebp + eax*8 + 8] */ r_edx = R32((u32)(r_ebp+r_eax*8+0x8u));
    /* 008332e8: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 008332eb: mov edx, dword ptr [ebp + eax*8 + 0xc] */ r_edx = R32((u32)(r_ebp+r_eax*8+0xcu));
    /* 008332ef: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 008332f2: mov edx, dword ptr [ebp + eax*8 + 0x10] */ r_edx = R32((u32)(r_ebp+r_eax*8+0x10u));
    /* 008332f6: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 008332f9: mov eax, dword ptr [ebp + eax*8 + 0x14] */ r_eax = R32((u32)(r_ebp+r_eax*8+0x14u));
    /* 008332fd: mov dword ptr [ecx + 0x14], eax */ W32((u32)(r_ecx+0x14u), r_eax);
    /* 00833300: mov dword ptr [ecx + 0x18], edi */ W32((u32)(r_ecx+0x18u), r_edi);
    /* 00833303: add ecx, 0x1c */ {  u32 a = r_ecx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
L_00833306:; BB(0x00833306);
    /* 00833306: mov edx, dword ptr [esp + 0x20] */ r_edx = R32((u32)(r_esp+0x20u));
    /* 0083330a: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0083330d: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00833311: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
L_00833313:; BB(0x00833313);
    /* 00833313: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 00833315: movzx eax, di */ r_eax = (u32)(u16)r_edi;
    /* 00833318: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 0083331b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083331d: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0083331f: shr edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00833322: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 00833325: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00833327: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00833329: mov edi, dword ptr [ebp + esi*8] */ r_edi = R32((u32)(r_ebp+r_esi*8));
    /* 0083332d: mov dword ptr [ecx], edi */ W32((u32)(r_ecx), r_edi);
    /* 0083332f: mov edi, dword ptr [ebp + esi*8 + 4] */ r_edi = R32((u32)(r_ebp+r_esi*8+0x4u));
    /* 00833333: mov dword ptr [ecx + 4], edi */ W32((u32)(r_ecx+0x4u), r_edi);
    /* 00833336: mov edi, dword ptr [ebp + esi*8 + 8] */ r_edi = R32((u32)(r_ebp+r_esi*8+0x8u));
    /* 0083333a: mov dword ptr [ecx + 8], edi */ W32((u32)(r_ecx+0x8u), r_edi);
    /* 0083333d: mov edi, dword ptr [ebp + esi*8 + 0xc] */ r_edi = R32((u32)(r_ebp+r_esi*8+0xcu));
    /* 00833341: mov dword ptr [ecx + 0xc], edi */ W32((u32)(r_ecx+0xcu), r_edi);
    /* 00833344: mov edi, dword ptr [ebp + esi*8 + 0x10] */ r_edi = R32((u32)(r_ebp+r_esi*8+0x10u));
    /* 00833348: mov dword ptr [ecx + 0x10], edi */ W32((u32)(r_ecx+0x10u), r_edi);
    /* 0083334b: mov esi, dword ptr [ebp + esi*8 + 0x14] */ r_esi = R32((u32)(r_ebp+r_esi*8+0x14u));
    /* 0083334f: mov dword ptr [ecx + 0x14], esi */ W32((u32)(r_ecx+0x14u), r_esi);
    /* 00833352: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00833356: mov dword ptr [ecx + 0x18], esi */ W32((u32)(r_ecx+0x18u), r_esi);
    /* 00833359: mov edi, dword ptr [ebp + eax*8] */ r_edi = R32((u32)(r_ebp+r_eax*8));
    /* 0083335d: mov dword ptr [ecx + 0x1c], edi */ W32((u32)(r_ecx+0x1cu), r_edi);
    /* 00833360: mov edi, dword ptr [ebp + eax*8 + 4] */ r_edi = R32((u32)(r_ebp+r_eax*8+0x4u));
    /* 00833364: mov dword ptr [ecx + 0x20], edi */ W32((u32)(r_ecx+0x20u), r_edi);
    /* 00833367: mov edi, dword ptr [ebp + eax*8 + 8] */ r_edi = R32((u32)(r_ebp+r_eax*8+0x8u));
    /* 0083336b: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 0083336e: mov edi, dword ptr [ebp + eax*8 + 0xc] */ r_edi = R32((u32)(r_ebp+r_eax*8+0xcu));
    /* 00833372: mov dword ptr [ecx + 0x28], edi */ W32((u32)(r_ecx+0x28u), r_edi);
    /* 00833375: mov edi, dword ptr [ebp + eax*8 + 0x10] */ r_edi = R32((u32)(r_ebp+r_eax*8+0x10u));
    /* 00833379: mov dword ptr [ecx + 0x2c], edi */ W32((u32)(r_ecx+0x2cu), r_edi);
    /* 0083337c: mov eax, dword ptr [ebp + eax*8 + 0x14] */ r_eax = R32((u32)(r_ebp+r_eax*8+0x14u));
    /* 00833380: mov dword ptr [ecx + 0x30], eax */ W32((u32)(r_ecx+0x30u), r_eax);
    /* 00833383: mov dword ptr [ecx + 0x34], esi */ W32((u32)(r_ecx+0x34u), r_esi);
    /* 00833386: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833389: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083338c: add ecx, 0x38 */ {  u32 a = r_ecx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083338f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00833391: jne 0x833313 */ if (!fZ) goto L_00833313;
L_00833393:; BB(0x00833393);
    /* 00833393: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00833396: mov eax, 0x24924925 */ r_eax = 0x24924925u;
    /* 0083339b: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 008333a1: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 008333a3: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008333a5: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 008333a7: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008333ad: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008333af: shr esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008333b2: mul esi */ { u64 t = (u64)r_eax * r_esi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 008333b4: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008333b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008333b8: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008333ba: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008333bb: call dword ptr [ebx + 0x120] */ { u32 t = R32((u32)(r_ebx+0x120u)); r_esp -= 4; W32(r_esp, 0x8333c1u); call_ind(t); }
    /* 008333c1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008333c4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008333c5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008333c6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008333c7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008333c8: ret  */ FN_RET(0x00833284); r_esp += 4; return;
}

void f_008333cc(void) /* sub_8333CC */
{
    FN_ENTER(0x008333cc);
    /* 008333cc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008333cd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008333ce: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008333cf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008333d0: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008333d3: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 008333d7: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 008333db: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 008333df: mov esi, dword ptr [0xacc16c] */ r_esi = R32((u32)(0xacc16cu));
    /* 008333e5: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 008333e8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008333ea: lea ebx, [edx + edx*8] */ r_ebx = (u32)(r_edx+r_edx*8);
    /* 008333ed: shr ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 008333f0: mov edx, dword ptr [0xacd52c] */ r_edx = R32((u32)(0xacd52cu));
    /* 008333f6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008333f8: je 0x833442 */ if (fZ) goto L_00833442;
L_008333fa:; BB(0x008333fa);
    /* 008333fa: mov edi, ebp */ r_edi = r_ebp;
    /* 008333fc: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 008333ff: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00833402: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00833404: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00833406: mov edi, dword ptr [ecx + eax*8] */ r_edi = R32((u32)(r_ecx+r_eax*8));
    /* 00833409: mov dword ptr [edx], edi */ W32((u32)(r_edx), r_edi);
    /* 0083340b: mov edi, dword ptr [ecx + eax*8 + 4] */ r_edi = R32((u32)(r_ecx+r_eax*8+0x4u));
    /* 0083340f: mov dword ptr [edx + 4], edi */ W32((u32)(r_edx+0x4u), r_edi);
    /* 00833412: mov edi, dword ptr [ecx + eax*8 + 8] */ r_edi = R32((u32)(r_ecx+r_eax*8+0x8u));
    /* 00833416: mov dword ptr [edx + 8], edi */ W32((u32)(r_edx+0x8u), r_edi);
    /* 00833419: mov edi, dword ptr [ecx + eax*8 + 0xc] */ r_edi = R32((u32)(r_ecx+r_eax*8+0xcu));
    /* 0083341d: mov dword ptr [edx + 0xc], edi */ W32((u32)(r_edx+0xcu), r_edi);
    /* 00833420: mov edi, dword ptr [ecx + eax*8 + 0x10] */ r_edi = R32((u32)(r_ecx+r_eax*8+0x10u));
    /* 00833424: mov dword ptr [edx + 0x10], edi */ W32((u32)(r_edx+0x10u), r_edi);
    /* 00833427: mov edi, dword ptr [ecx + eax*8 + 0x14] */ r_edi = R32((u32)(r_ecx+r_eax*8+0x14u));
    /* 0083342b: mov dword ptr [edx + 0x14], edi */ W32((u32)(r_edx+0x14u), r_edi);
    /* 0083342e: mov dword ptr [edx + 0x18], esi */ W32((u32)(r_edx+0x18u), r_esi);
    /* 00833431: mov edi, dword ptr [ecx + eax*8 + 0x18] */ r_edi = R32((u32)(r_ecx+r_eax*8+0x18u));
    /* 00833435: mov dword ptr [edx + 0x1c], edi */ W32((u32)(r_edx+0x1cu), r_edi);
    /* 00833438: mov eax, dword ptr [ecx + eax*8 + 0x1c] */ r_eax = R32((u32)(r_ecx+r_eax*8+0x1cu));
    /* 0083343c: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 0083343f: add edx, 0x24 */ {  u32 a = r_edx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_00833442:; BB(0x00833442);
    /* 00833442: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00833446: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00833449: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0083344d: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_0083344f:; BB(0x0083344f);
    /* 0083344f: mov esi, dword ptr [ebp] */ r_esi = R32((u32)(r_ebp));
    /* 00833452: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 00833456: movzx ebp, si */ r_ebp = (u32)(u16)r_esi;
    /* 00833459: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083345b: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083345d: mov edi, dword ptr [ecx + ebp*8] */ r_edi = R32((u32)(r_ecx+r_ebp*8));
    /* 00833460: shr esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00833463: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00833465: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00833467: mov dword ptr [edx], edi */ W32((u32)(r_edx), r_edi);
    /* 00833469: mov ebx, dword ptr [ecx + ebp*8 + 4] */ r_ebx = R32((u32)(r_ecx+r_ebp*8+0x4u));
    /* 0083346d: mov dword ptr [edx + 4], ebx */ W32((u32)(r_edx+0x4u), r_ebx);
    /* 00833470: mov ebx, dword ptr [ecx + ebp*8 + 8] */ r_ebx = R32((u32)(r_ecx+r_ebp*8+0x8u));
    /* 00833474: mov dword ptr [edx + 8], ebx */ W32((u32)(r_edx+0x8u), r_ebx);
    /* 00833477: mov ebx, dword ptr [ecx + ebp*8 + 0xc] */ r_ebx = R32((u32)(r_ecx+r_ebp*8+0xcu));
    /* 0083347b: mov dword ptr [edx + 0xc], ebx */ W32((u32)(r_edx+0xcu), r_ebx);
    /* 0083347e: mov ebx, dword ptr [ecx + ebp*8 + 0x10] */ r_ebx = R32((u32)(r_ecx+r_ebp*8+0x10u));
    /* 00833482: mov dword ptr [edx + 0x10], ebx */ W32((u32)(r_edx+0x10u), r_ebx);
    /* 00833485: mov ebx, dword ptr [ecx + ebp*8 + 0x14] */ r_ebx = R32((u32)(r_ecx+r_ebp*8+0x14u));
    /* 00833489: mov dword ptr [edx + 0x14], ebx */ W32((u32)(r_edx+0x14u), r_ebx);
    /* 0083348c: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00833490: mov dword ptr [edx + 0x18], ebx */ W32((u32)(r_edx+0x18u), r_ebx);
    /* 00833493: mov edi, dword ptr [ecx + ebp*8 + 0x18] */ r_edi = R32((u32)(r_ecx+r_ebp*8+0x18u));
    /* 00833497: mov dword ptr [edx + 0x1c], edi */ W32((u32)(r_edx+0x1cu), r_edi);
    /* 0083349a: mov ebp, dword ptr [ecx + ebp*8 + 0x1c] */ r_ebp = R32((u32)(r_ecx+r_ebp*8+0x1cu));
    /* 0083349e: mov dword ptr [edx + 0x20], ebp */ W32((u32)(r_edx+0x20u), r_ebp);
    /* 008334a1: mov ebp, dword ptr [ecx + esi*8] */ r_ebp = R32((u32)(r_ecx+r_esi*8));
    /* 008334a4: mov dword ptr [edx + 0x24], ebp */ W32((u32)(r_edx+0x24u), r_ebp);
    /* 008334a7: mov ebp, dword ptr [ecx + esi*8 + 4] */ r_ebp = R32((u32)(r_ecx+r_esi*8+0x4u));
    /* 008334ab: mov dword ptr [edx + 0x28], ebp */ W32((u32)(r_edx+0x28u), r_ebp);
    /* 008334ae: mov ebp, dword ptr [ecx + esi*8 + 8] */ r_ebp = R32((u32)(r_ecx+r_esi*8+0x8u));
    /* 008334b2: mov dword ptr [edx + 0x2c], ebp */ W32((u32)(r_edx+0x2cu), r_ebp);
    /* 008334b5: mov ebp, dword ptr [ecx + esi*8 + 0xc] */ r_ebp = R32((u32)(r_ecx+r_esi*8+0xcu));
    /* 008334b9: mov dword ptr [edx + 0x30], ebp */ W32((u32)(r_edx+0x30u), r_ebp);
    /* 008334bc: mov ebp, dword ptr [ecx + esi*8 + 0x10] */ r_ebp = R32((u32)(r_ecx+r_esi*8+0x10u));
    /* 008334c0: mov dword ptr [edx + 0x34], ebp */ W32((u32)(r_edx+0x34u), r_ebp);
    /* 008334c3: mov ebp, dword ptr [ecx + esi*8 + 0x14] */ r_ebp = R32((u32)(r_ecx+r_esi*8+0x14u));
    /* 008334c7: mov dword ptr [edx + 0x38], ebp */ W32((u32)(r_edx+0x38u), r_ebp);
    /* 008334ca: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 008334ce: mov dword ptr [edx + 0x3c], ebx */ W32((u32)(r_edx+0x3cu), r_ebx);
    /* 008334d1: mov ebx, dword ptr [ecx + esi*8 + 0x18] */ r_ebx = R32((u32)(r_ecx+r_esi*8+0x18u));
    /* 008334d5: mov dword ptr [edx + 0x40], ebx */ W32((u32)(r_edx+0x40u), r_ebx);
    /* 008334d8: mov ebx, dword ptr [ecx + esi*8 + 0x1c] */ r_ebx = R32((u32)(r_ecx+r_esi*8+0x1cu));
    /* 008334dc: mov dword ptr [edx + 0x44], ebx */ W32((u32)(r_edx+0x44u), r_ebx);
    /* 008334df: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008334e2: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008334e5: add edx, 0x48 */ {  u32 a = r_edx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008334e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008334ea: jne 0x83344f */ if (!fZ) goto L_0083344f;
L_008334f0:; BB(0x008334f0);
    /* 008334f0: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 008334f3: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 008334f8: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 008334fe: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 00833500: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00833502: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00833504: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0083350a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0083350c: mul ebx */ { u64 t = (u64)r_eax * r_ebx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0083350e: shr edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00833511: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833514: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00833515: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00833517: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00833518: call dword ptr [ebp + 0x120] */ { u32 t = R32((u32)(r_ebp+0x120u)); r_esp -= 4; W32(r_esp, 0x83351eu); call_ind(t); }
    /* 0083351e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00833521: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00833522: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00833523: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00833524: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00833525: ret  */ FN_RET(0x008333cc); r_esp += 4; return;
}

void f_00833528(void) /* sub_833528 */
{
    FN_ENTER(0x00833528);
    /* 00833528: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00833529: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083352a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083352b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0083352c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083352d: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00833531: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00833535: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 0083353a: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083353c: jne 0x833545 */ if (!fZ) goto L_00833545;
L_0083353e:; BB(0x0083353e);
    /* 0083353e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00833540: call 0x839a28 */ r_esp -= 4; W32(r_esp, 0x833545u); f_00839a28();
L_00833545:; BB(0x00833545);
    /* 00833545: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 00833549: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 0083354e: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00833551: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00833553: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00833555: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00833557: shr esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0083355a: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083355d: je 0x833589 */ if (fZ) goto L_00833589;
L_0083355f:; BB(0x0083355f);
    /* 0083355f: mov edi, ebx */ r_edi = r_ebx;
    /* 00833561: movzx edx, word ptr [edi] */ r_edx = (u32)R16((u32)(r_edi));
    /* 00833564: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00833567: mov ecx, eax */ r_ecx = r_eax;
    /* 00833569: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083356c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083356e: mov edi, dword ptr [ebp + edx*8] */ r_edi = R32((u32)(r_ebp+r_edx*8));
    /* 00833572: mov dword ptr [ecx], edi */ W32((u32)(r_ecx), r_edi);
    /* 00833574: mov edi, dword ptr [ebp + edx*8 + 4] */ r_edi = R32((u32)(r_ebp+r_edx*8+0x4u));
    /* 00833578: mov dword ptr [ecx + 4], edi */ W32((u32)(r_ecx+0x4u), r_edi);
    /* 0083357b: mov edi, dword ptr [ebp + edx*8 + 8] */ r_edi = R32((u32)(r_ebp+r_edx*8+0x8u));
    /* 0083357f: mov dword ptr [ecx + 8], edi */ W32((u32)(r_ecx+0x8u), r_edi);
    /* 00833582: mov edx, dword ptr [ebp + edx*8 + 0xc] */ r_edx = R32((u32)(r_ebp+r_edx*8+0xcu));
    /* 00833586: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
L_00833589:; BB(0x00833589);
    /* 00833589: mov edi, dword ptr [esp + 0x1c] */ r_edi = R32((u32)(r_esp+0x1cu));
    /* 0083358d: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00833590: shr edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
L_00833592:; BB(0x00833592);
    /* 00833592: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 00833594: movzx edx, cx */ r_edx = (u32)(u16)r_ecx;
    /* 00833597: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833599: mov esi, dword ptr [ebp + edx*8] */ r_esi = R32((u32)(r_ebp+r_edx*8));
    /* 0083359d: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 0083359f: mov esi, dword ptr [ebp + edx*8 + 4] */ r_esi = R32((u32)(r_ebp+r_edx*8+0x4u));
    /* 008335a3: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 008335a6: mov esi, dword ptr [ebp + edx*8 + 8] */ r_esi = R32((u32)(r_ebp+r_edx*8+0x8u));
    /* 008335aa: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 008335ad: mov edx, dword ptr [ebp + edx*8 + 0xc] */ r_edx = R32((u32)(r_ebp+r_edx*8+0xcu));
    /* 008335b1: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 008335b4: shr ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 008335b7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008335b9: mov edx, dword ptr [ebp + ecx*8] */ r_edx = R32((u32)(r_ebp+r_ecx*8));
    /* 008335bd: mov dword ptr [eax + 0x10], edx */ W32((u32)(r_eax+0x10u), r_edx);
    /* 008335c0: mov edx, dword ptr [ebp + ecx*8 + 4] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0x4u));
    /* 008335c4: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 008335c7: mov edx, dword ptr [ebp + ecx*8 + 8] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0x8u));
    /* 008335cb: mov dword ptr [eax + 0x18], edx */ W32((u32)(r_eax+0x18u), r_edx);
    /* 008335ce: mov edx, dword ptr [ebp + ecx*8 + 0xc] */ r_edx = R32((u32)(r_ebp+r_ecx*8+0xcu));
    /* 008335d2: mov dword ptr [eax + 0x1c], edx */ W32((u32)(r_eax+0x1cu), r_edx);
    /* 008335d5: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008335d8: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008335db: add eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008335de: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008335e0: jne 0x833592 */ if (!fZ) goto L_00833592;
L_008335e2:; BB(0x008335e2);
    /* 008335e2: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 008335e5: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 008335ea: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008335ec: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 008335ee: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008335f0: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008335f6: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008335f8: shr esi, 4 */ { u32 c = (4u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008335fb: add esi, -2 */ {  u32 a = r_esi; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008335fe: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008335ff: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00833601: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00833602: call dword ptr [edx + 0x120] */ { u32 t = R32((u32)(r_edx+0x120u)); r_esp -= 4; W32(r_esp, 0x833608u); call_ind(t); }
    /* 00833608: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00833609: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083360a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083360b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083360c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083360d: ret  */ FN_RET(0x00833528); r_esp += 4; return;
}

void f_00833610(void) /* sub_833610 */
{
    FN_ENTER(0x00833610);
    /* 00833610: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00833611: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00833612: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00833613: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00833614: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00833615: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00833619: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0083361d: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00833621: mov ecx, dword ptr [0xacd52c] */ r_ecx = R32((u32)(0xacd52cu));
    /* 00833627: lea ebp, [eax + eax] */ r_ebp = (u32)(r_eax+r_eax);
    /* 0083362a: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083362c: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 0083362e: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00833630: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00833632: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00833634: shr ebp, 2 */ { u32 c = (2u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 00833637: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00833639: je 0x833677 */ if (fZ) goto L_00833677;
L_0083363b:; BB(0x0083363b);
    /* 0083363b: mov edi, edx */ r_edi = r_edx;
    /* 0083363d: movzx edi, word ptr [edi] */ r_edi = (u32)R16((u32)(r_edi));
    /* 00833640: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833643: mov esi, ecx */ r_esi = r_ecx;
    /* 00833645: add ecx, 0x18 */ {  u32 a = r_ecx; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833648: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0083364b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083364d: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0083364f: mov edi, dword ptr [ebx + eax*8] */ r_edi = R32((u32)(r_ebx+r_eax*8));
    /* 00833652: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 00833654: mov edi, dword ptr [ebx + eax*8 + 4] */ r_edi = R32((u32)(r_ebx+r_eax*8+0x4u));
    /* 00833658: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 0083365b: mov edi, dword ptr [ebx + eax*8 + 8] */ r_edi = R32((u32)(r_ebx+r_eax*8+0x8u));
    /* 0083365f: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 00833662: mov edi, dword ptr [ebx + eax*8 + 0xc] */ r_edi = R32((u32)(r_ebx+r_eax*8+0xcu));
    /* 00833666: mov dword ptr [esi + 0xc], edi */ W32((u32)(r_esi+0xcu), r_edi);
    /* 00833669: mov edi, dword ptr [ebx + eax*8 + 0x10] */ r_edi = R32((u32)(r_ebx+r_eax*8+0x10u));
    /* 0083366d: mov dword ptr [esi + 0x10], edi */ W32((u32)(r_esi+0x10u), r_edi);
    /* 00833670: mov eax, dword ptr [ebx + eax*8 + 0x14] */ r_eax = R32((u32)(r_ebx+r_eax*8+0x14u));
    /* 00833674: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
L_00833677:; BB(0x00833677);
    /* 00833677: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0083367b: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0083367e: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_00833680:; BB(0x00833680);
    /* 00833680: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00833682: movzx ebp, di */ r_ebp = (u32)(u16)r_edi;
    /* 00833685: lea esi, [ebp + ebp] */ r_esi = (u32)(r_ebp+r_ebp);
    /* 00833689: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0083368b: sub esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0083368d: mov ebp, dword ptr [ebx + esi*8] */ r_ebp = R32((u32)(r_ebx+r_esi*8));
    /* 00833690: mov dword ptr [ecx], ebp */ W32((u32)(r_ecx), r_ebp);
    /* 00833692: mov ebp, dword ptr [ebx + esi*8 + 4] */ r_ebp = R32((u32)(r_ebx+r_esi*8+0x4u));
    /* 00833696: mov dword ptr [ecx + 4], ebp */ W32((u32)(r_ecx+0x4u), r_ebp);
    /* 00833699: mov ebp, dword ptr [ebx + esi*8 + 8] */ r_ebp = R32((u32)(r_ebx+r_esi*8+0x8u));
    /* 0083369d: mov dword ptr [ecx + 8], ebp */ W32((u32)(r_ecx+0x8u), r_ebp);
    /* 008336a0: mov ebp, dword ptr [ebx + esi*8 + 0xc] */ r_ebp = R32((u32)(r_ebx+r_esi*8+0xcu));
    /* 008336a4: mov dword ptr [ecx + 0xc], ebp */ W32((u32)(r_ecx+0xcu), r_ebp);
    /* 008336a7: mov ebp, dword ptr [ebx + esi*8 + 0x10] */ r_ebp = R32((u32)(r_ebx+r_esi*8+0x10u));
    /* 008336ab: mov dword ptr [ecx + 0x10], ebp */ W32((u32)(r_ecx+0x10u), r_ebp);
    /* 008336ae: mov ebp, dword ptr [ebx + esi*8 + 0x14] */ r_ebp = R32((u32)(r_ebx+r_esi*8+0x14u));
    /* 008336b2: mov dword ptr [ecx + 0x14], ebp */ W32((u32)(r_ecx+0x14u), r_ebp);
    /* 008336b5: shr edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008336b8: lea ebp, [edi + edi] */ r_ebp = (u32)(r_edi+r_edi);
    /* 008336bb: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008336bd: sub ebp, edi */ {  u32 a = r_ebp; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 008336bf: mov esi, dword ptr [ebx + ebp*8] */ r_esi = R32((u32)(r_ebx+r_ebp*8));
    /* 008336c2: mov dword ptr [ecx + 0x18], esi */ W32((u32)(r_ecx+0x18u), r_esi);
    /* 008336c5: mov esi, dword ptr [ebx + ebp*8 + 4] */ r_esi = R32((u32)(r_ebx+r_ebp*8+0x4u));
    /* 008336c9: mov dword ptr [ecx + 0x1c], esi */ W32((u32)(r_ecx+0x1cu), r_esi);
    /* 008336cc: mov esi, dword ptr [ebx + ebp*8 + 8] */ r_esi = R32((u32)(r_ebx+r_ebp*8+0x8u));
    /* 008336d0: mov dword ptr [ecx + 0x20], esi */ W32((u32)(r_ecx+0x20u), r_esi);
    /* 008336d3: mov esi, dword ptr [ebx + ebp*8 + 0xc] */ r_esi = R32((u32)(r_ebx+r_ebp*8+0xcu));
    /* 008336d7: mov dword ptr [ecx + 0x24], esi */ W32((u32)(r_ecx+0x24u), r_esi);
    /* 008336da: mov esi, dword ptr [ebx + ebp*8 + 0x10] */ r_esi = R32((u32)(r_ebx+r_ebp*8+0x10u));
    /* 008336de: mov dword ptr [ecx + 0x28], esi */ W32((u32)(r_ecx+0x28u), r_esi);
    /* 008336e1: mov ebp, dword ptr [ebx + ebp*8 + 0x14] */ r_ebp = R32((u32)(r_ebx+r_ebp*8+0x14u));
    /* 008336e5: mov dword ptr [ecx + 0x2c], ebp */ W32((u32)(r_ecx+0x2cu), r_ebp);
    /* 008336e8: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008336eb: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008336ee: add ecx, 0x30 */ {  u32 a = r_ecx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008336f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008336f3: jne 0x833680 */ if (!fZ) goto L_00833680;
L_008336f5:; BB(0x008336f5);
    /* 008336f5: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 008336f8: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 008336fe: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00833700: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 00833702: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00833704: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0083370a: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0083370c: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 00833711: mul ebp */ { u64 t = (u64)r_eax * r_ebp; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00833713: shr edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00833716: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833719: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0083371a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0083371c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0083371d: call dword ptr [ebx + 0x120] */ { u32 t = R32((u32)(r_ebx+0x120u)); r_esp -= 4; W32(r_esp, 0x833723u); call_ind(t); }
    /* 00833723: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00833724: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00833725: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00833726: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00833727: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00833728: ret  */ FN_RET(0x00833610); r_esp += 4; return;
}

void f_0083372c(void) /* sub_83372C */
{
    FN_ENTER(0x0083372c);
    /* 0083372c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0083372d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0083372e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0083372f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00833730: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00833731: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00833735: mov ebp, dword ptr [esp + 0x20] */ r_ebp = R32((u32)(r_esp+0x20u));
    /* 00833739: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 0083373e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00833740: jne 0x833749 */ if (!fZ) goto L_00833749;
L_00833742:; BB(0x00833742);
    /* 00833742: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00833744: call 0x839a28 */ r_esp -= 4; W32(r_esp, 0x833749u); f_00839a28();
L_00833749:; BB(0x00833749);
    /* 00833749: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0083374d: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00833750: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833752: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00833755: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833757: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833759: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0083375b: mov edx, dword ptr [0xacd52c] */ r_edx = R32((u32)(0xacd52cu));
    /* 00833761: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00833764: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00833766: je 0x8337b1 */ if (fZ) goto L_008337b1;
L_00833768:; BB(0x00833768);
    /* 00833768: mov edi, ebx */ r_edi = r_ebx;
    /* 0083376a: movzx edi, word ptr [edi] */ r_edi = (u32)R16((u32)(r_edi));
    /* 0083376d: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00833770: mov esi, edx */ r_esi = r_edx;
    /* 00833772: add edx, 0x1c */ {  u32 a = r_edx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833775: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00833777: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00833779: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0083377c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083377e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00833780: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00833782: mov edi, dword ptr [eax + ebp] */ r_edi = R32((u32)(r_eax+r_ebp));
    /* 00833785: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 00833787: mov edi, dword ptr [eax + ebp + 4] */ r_edi = R32((u32)(r_eax+r_ebp+0x4u));
    /* 0083378b: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 0083378e: mov edi, dword ptr [eax + ebp + 8] */ r_edi = R32((u32)(r_eax+r_ebp+0x8u));
    /* 00833792: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 00833795: mov edi, dword ptr [eax + ebp + 0xc] */ r_edi = R32((u32)(r_eax+r_ebp+0xcu));
    /* 00833799: mov dword ptr [esi + 0xc], edi */ W32((u32)(r_esi+0xcu), r_edi);
    /* 0083379c: mov edi, dword ptr [eax + ebp + 0x10] */ r_edi = R32((u32)(r_eax+r_ebp+0x10u));
    /* 008337a0: mov dword ptr [esi + 0x10], edi */ W32((u32)(r_esi+0x10u), r_edi);
    /* 008337a3: mov edi, dword ptr [eax + ebp + 0x14] */ r_edi = R32((u32)(r_eax+r_ebp+0x14u));
    /* 008337a7: mov dword ptr [esi + 0x14], edi */ W32((u32)(r_esi+0x14u), r_edi);
    /* 008337aa: mov eax, dword ptr [eax + ebp + 0x18] */ r_eax = R32((u32)(r_eax+r_ebp+0x18u));
    /* 008337ae: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
L_008337b1:; BB(0x008337b1);
    /* 008337b1: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 008337b5: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 008337b8: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_008337ba:; BB(0x008337ba);
    /* 008337ba: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 008337bc: movzx ecx, di */ r_ecx = (u32)(u16)r_edi;
    /* 008337bf: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008337c1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008337c3: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 008337c6: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008337c8: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008337ca: sub esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008337cc: mov ecx, dword ptr [esi + ebp] */ r_ecx = R32((u32)(r_esi+r_ebp));
    /* 008337cf: mov dword ptr [edx], ecx */ W32((u32)(r_edx), r_ecx);
    /* 008337d1: mov ecx, dword ptr [esi + ebp + 4] */ r_ecx = R32((u32)(r_esi+r_ebp+0x4u));
    /* 008337d5: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 008337d8: mov ecx, dword ptr [esi + ebp + 8] */ r_ecx = R32((u32)(r_esi+r_ebp+0x8u));
    /* 008337dc: mov dword ptr [edx + 8], ecx */ W32((u32)(r_edx+0x8u), r_ecx);
    /* 008337df: mov ecx, dword ptr [esi + ebp + 0xc] */ r_ecx = R32((u32)(r_esi+r_ebp+0xcu));
    /* 008337e3: mov dword ptr [edx + 0xc], ecx */ W32((u32)(r_edx+0xcu), r_ecx);
    /* 008337e6: mov ecx, dword ptr [esi + ebp + 0x10] */ r_ecx = R32((u32)(r_esi+r_ebp+0x10u));
    /* 008337ea: mov dword ptr [edx + 0x10], ecx */ W32((u32)(r_edx+0x10u), r_ecx);
    /* 008337ed: mov ecx, dword ptr [esi + ebp + 0x14] */ r_ecx = R32((u32)(r_esi+r_ebp+0x14u));
    /* 008337f1: mov dword ptr [edx + 0x14], ecx */ W32((u32)(r_edx+0x14u), r_ecx);
    /* 008337f4: mov ecx, dword ptr [esi + ebp + 0x18] */ r_ecx = R32((u32)(r_esi+r_ebp+0x18u));
    /* 008337f8: mov dword ptr [edx + 0x18], ecx */ W32((u32)(r_edx+0x18u), r_ecx);
    /* 008337fb: shr edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 008337fe: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00833800: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00833802: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 00833805: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833807: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833809: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0083380b: mov esi, dword ptr [ecx + ebp] */ r_esi = R32((u32)(r_ecx+r_ebp));
    /* 0083380e: mov dword ptr [edx + 0x1c], esi */ W32((u32)(r_edx+0x1cu), r_esi);
    /* 00833811: mov esi, dword ptr [ecx + ebp + 4] */ r_esi = R32((u32)(r_ecx+r_ebp+0x4u));
    /* 00833815: mov dword ptr [edx + 0x20], esi */ W32((u32)(r_edx+0x20u), r_esi);
    /* 00833818: mov esi, dword ptr [ecx + ebp + 8] */ r_esi = R32((u32)(r_ecx+r_ebp+0x8u));
    /* 0083381c: mov dword ptr [edx + 0x24], esi */ W32((u32)(r_edx+0x24u), r_esi);
    /* 0083381f: mov esi, dword ptr [ecx + ebp + 0xc] */ r_esi = R32((u32)(r_ecx+r_ebp+0xcu));
    /* 00833823: mov dword ptr [edx + 0x28], esi */ W32((u32)(r_edx+0x28u), r_esi);
    /* 00833826: mov esi, dword ptr [ecx + ebp + 0x10] */ r_esi = R32((u32)(r_ecx+r_ebp+0x10u));
    /* 0083382a: mov dword ptr [edx + 0x2c], esi */ W32((u32)(r_edx+0x2cu), r_esi);
    /* 0083382d: mov esi, dword ptr [ecx + ebp + 0x14] */ r_esi = R32((u32)(r_ecx+r_ebp+0x14u));
    /* 00833831: mov dword ptr [edx + 0x30], esi */ W32((u32)(r_edx+0x30u), r_esi);
    /* 00833834: mov ecx, dword ptr [ecx + ebp + 0x18] */ r_ecx = R32((u32)(r_ecx+r_ebp+0x18u));
    /* 00833838: mov dword ptr [edx + 0x34], ecx */ W32((u32)(r_edx+0x34u), r_ecx);
    /* 0083383b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083383e: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00833841: add edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833844: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00833846: jne 0x8337ba */ if (!fZ) goto L_008337ba;
L_0083384c:; BB(0x0083384c);
    /* 0083384c: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 0083384f: mov eax, 0x24924925 */ r_eax = 0x24924925u;
    /* 00833854: mov ebx, dword ptr [0xacd528] */ r_ebx = R32((u32)(0xacd528u));
    /* 0083385a: mov ebp, dword ptr [ebx] */ r_ebp = R32((u32)(r_ebx));
    /* 0083385c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083385e: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00833860: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00833866: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833868: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0083386b: mul ecx */ { u64 t = (u64)r_eax * r_ecx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0083386d: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833870: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00833871: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00833873: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00833874: call dword ptr [ebp + 0x120] */ { u32 t = R32((u32)(r_ebp+0x120u)); r_esp -= 4; W32(r_esp, 0x83387au); call_ind(t); }
    /* 0083387a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083387b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083387c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0083387d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0083387e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0083387f: ret  */ FN_RET(0x0083372c); r_esp += 4; return;
}

void f_00833880(void) /* sub_833880 */
{
    FN_ENTER(0x00833880);
    /* 00833880: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00833881: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00833882: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00833883: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00833884: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00833885: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 00833889: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0083388d: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00833891: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00833894: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833896: lea ebp, [ecx + ecx*8] */ r_ebp = (u32)(r_ecx+r_ecx*8);
    /* 00833899: shr ebp, 2 */ { u32 c = (2u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebp = r;  } }
    /* 0083389c: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0083389e: mov ecx, dword ptr [0xacd52c] */ r_ecx = R32((u32)(0xacd52cu));
    /* 008338a4: je 0x8338f7 */ if (fZ) goto L_008338f7;
L_008338a6:; BB(0x008338a6);
    /* 008338a6: mov edi, edx */ r_edi = r_edx;
    /* 008338a8: movzx eax, word ptr [edi] */ r_eax = (u32)R16((u32)(r_edi));
    /* 008338ab: add edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008338ae: mov esi, ecx */ r_esi = r_ecx;
    /* 008338b0: add ecx, 0x24 */ {  u32 a = r_ecx; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008338b3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008338b5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008338b7: lea eax, [eax + eax*8] */ r_eax = (u32)(r_eax+r_eax*8);
    /* 008338ba: mov edi, dword ptr [eax + ebx] */ r_edi = R32((u32)(r_eax+r_ebx));
    /* 008338bd: mov dword ptr [esi], edi */ W32((u32)(r_esi), r_edi);
    /* 008338bf: mov edi, dword ptr [eax + ebx + 4] */ r_edi = R32((u32)(r_eax+r_ebx+0x4u));
    /* 008338c3: mov dword ptr [esi + 4], edi */ W32((u32)(r_esi+0x4u), r_edi);
    /* 008338c6: mov edi, dword ptr [eax + ebx + 8] */ r_edi = R32((u32)(r_eax+r_ebx+0x8u));
    /* 008338ca: mov dword ptr [esi + 8], edi */ W32((u32)(r_esi+0x8u), r_edi);
    /* 008338cd: mov edi, dword ptr [eax + ebx + 0xc] */ r_edi = R32((u32)(r_eax+r_ebx+0xcu));
    /* 008338d1: mov dword ptr [esi + 0xc], edi */ W32((u32)(r_esi+0xcu), r_edi);
    /* 008338d4: mov edi, dword ptr [eax + ebx + 0x10] */ r_edi = R32((u32)(r_eax+r_ebx+0x10u));
    /* 008338d8: mov dword ptr [esi + 0x10], edi */ W32((u32)(r_esi+0x10u), r_edi);
    /* 008338db: mov edi, dword ptr [eax + ebx + 0x14] */ r_edi = R32((u32)(r_eax+r_ebx+0x14u));
    /* 008338df: mov dword ptr [esi + 0x14], edi */ W32((u32)(r_esi+0x14u), r_edi);
    /* 008338e2: mov edi, dword ptr [eax + ebx + 0x18] */ r_edi = R32((u32)(r_eax+r_ebx+0x18u));
    /* 008338e6: mov dword ptr [esi + 0x18], edi */ W32((u32)(r_esi+0x18u), r_edi);
    /* 008338e9: mov edi, dword ptr [eax + ebx + 0x1c] */ r_edi = R32((u32)(r_eax+r_ebx+0x1cu));
    /* 008338ed: mov dword ptr [esi + 0x1c], edi */ W32((u32)(r_esi+0x1cu), r_edi);
    /* 008338f0: mov eax, dword ptr [eax + ebx + 0x20] */ r_eax = R32((u32)(r_eax+r_ebx+0x20u));
    /* 008338f4: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
L_008338f7:; BB(0x008338f7);
    /* 008338f7: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 008338fb: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 008338fe: shr eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
L_00833900:; BB(0x00833900);
    /* 00833900: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 00833902: movzx ebp, di */ r_ebp = (u32)(u16)r_edi;
    /* 00833905: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00833907: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00833909: lea esi, [ebp + ebp*8] */ r_esi = (u32)(r_ebp+r_ebp*8);
    /* 0083390d: mov ebp, dword ptr [esi + ebx] */ r_ebp = R32((u32)(r_esi+r_ebx));
    /* 00833910: mov dword ptr [ecx], ebp */ W32((u32)(r_ecx), r_ebp);
    /* 00833912: mov ebp, dword ptr [esi + ebx + 4] */ r_ebp = R32((u32)(r_esi+r_ebx+0x4u));
    /* 00833916: mov dword ptr [ecx + 4], ebp */ W32((u32)(r_ecx+0x4u), r_ebp);
    /* 00833919: mov ebp, dword ptr [esi + ebx + 8] */ r_ebp = R32((u32)(r_esi+r_ebx+0x8u));
    /* 0083391d: mov dword ptr [ecx + 8], ebp */ W32((u32)(r_ecx+0x8u), r_ebp);
    /* 00833920: mov ebp, dword ptr [esi + ebx + 0xc] */ r_ebp = R32((u32)(r_esi+r_ebx+0xcu));
    /* 00833924: mov dword ptr [ecx + 0xc], ebp */ W32((u32)(r_ecx+0xcu), r_ebp);
    /* 00833927: mov ebp, dword ptr [esi + ebx + 0x10] */ r_ebp = R32((u32)(r_esi+r_ebx+0x10u));
    /* 0083392b: mov dword ptr [ecx + 0x10], ebp */ W32((u32)(r_ecx+0x10u), r_ebp);
    /* 0083392e: mov ebp, dword ptr [esi + ebx + 0x14] */ r_ebp = R32((u32)(r_esi+r_ebx+0x14u));
    /* 00833932: mov dword ptr [ecx + 0x14], ebp */ W32((u32)(r_ecx+0x14u), r_ebp);
    /* 00833935: mov ebp, dword ptr [esi + ebx + 0x18] */ r_ebp = R32((u32)(r_esi+r_ebx+0x18u));
    /* 00833939: mov dword ptr [ecx + 0x18], ebp */ W32((u32)(r_ecx+0x18u), r_ebp);
    /* 0083393c: mov ebp, dword ptr [esi + ebx + 0x1c] */ r_ebp = R32((u32)(r_esi+r_ebx+0x1cu));
    /* 00833940: mov dword ptr [ecx + 0x1c], ebp */ W32((u32)(r_ecx+0x1cu), r_ebp);
    /* 00833943: mov ebp, dword ptr [esi + ebx + 0x20] */ r_ebp = R32((u32)(r_esi+r_ebx+0x20u));
    /* 00833947: mov dword ptr [ecx + 0x20], ebp */ W32((u32)(r_ecx+0x20u), r_ebp);
    /* 0083394a: shr edi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0083394d: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0083394f: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00833951: lea ebp, [edi + edi*8] */ r_ebp = (u32)(r_edi+r_edi*8);
    /* 00833954: mov esi, dword ptr [ebp + ebx] */ r_esi = R32((u32)(r_ebp+r_ebx));
    /* 00833958: mov dword ptr [ecx + 0x24], esi */ W32((u32)(r_ecx+0x24u), r_esi);
    /* 0083395b: mov esi, dword ptr [ebp + ebx + 4] */ r_esi = R32((u32)(r_ebp+r_ebx+0x4u));
    /* 0083395f: mov dword ptr [ecx + 0x28], esi */ W32((u32)(r_ecx+0x28u), r_esi);
    /* 00833962: mov esi, dword ptr [ebp + ebx + 8] */ r_esi = R32((u32)(r_ebp+r_ebx+0x8u));
    /* 00833966: mov dword ptr [ecx + 0x2c], esi */ W32((u32)(r_ecx+0x2cu), r_esi);
    /* 00833969: mov esi, dword ptr [ebp + ebx + 0xc] */ r_esi = R32((u32)(r_ebp+r_ebx+0xcu));
    /* 0083396d: mov dword ptr [ecx + 0x30], esi */ W32((u32)(r_ecx+0x30u), r_esi);
    /* 00833970: mov esi, dword ptr [ebp + ebx + 0x10] */ r_esi = R32((u32)(r_ebp+r_ebx+0x10u));
    /* 00833974: mov dword ptr [ecx + 0x34], esi */ W32((u32)(r_ecx+0x34u), r_esi);
    /* 00833977: mov esi, dword ptr [ebp + ebx + 0x14] */ r_esi = R32((u32)(r_ebp+r_ebx+0x14u));
    /* 0083397b: mov dword ptr [ecx + 0x38], esi */ W32((u32)(r_ecx+0x38u), r_esi);
    /* 0083397e: mov esi, dword ptr [ebp + ebx + 0x18] */ r_esi = R32((u32)(r_ebp+r_ebx+0x18u));
    /* 00833982: mov dword ptr [ecx + 0x3c], esi */ W32((u32)(r_ecx+0x3cu), r_esi);
    /* 00833985: mov esi, dword ptr [ebp + ebx + 0x1c] */ r_esi = R32((u32)(r_ebp+r_ebx+0x1cu));
    /* 00833989: mov dword ptr [ecx + 0x40], esi */ W32((u32)(r_ecx+0x40u), r_esi);
    /* 0083398c: mov ebp, dword ptr [ebp + ebx + 0x20] */ r_ebp = R32((u32)(r_ebp+r_ebx+0x20u));
    /* 00833990: mov dword ptr [ecx + 0x44], ebp */ W32((u32)(r_ecx+0x44u), r_ebp);
    /* 00833993: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00833996: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833999: add ecx, 0x48 */ {  u32 a = r_ecx; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0083399c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083399e: jne 0x833900 */ if (!fZ) goto L_00833900;
L_008339a4:; BB(0x008339a4);
    /* 008339a4: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 008339a7: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 008339ac: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 008339b2: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 008339b4: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008339b6: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 008339b8: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008339be: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008339c0: mul ebp */ { u64 t = (u64)r_eax * r_ebp; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 008339c2: shr edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008339c5: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008339c8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008339c9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 008339cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008339cc: call dword ptr [ebx + 0x120] */ { u32 t = R32((u32)(r_ebx+0x120u)); r_esp -= 4; W32(r_esp, 0x8339d2u); call_ind(t); }
    /* 008339d2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008339d3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008339d4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008339d5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008339d6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008339d7: ret  */ FN_RET(0x00833880); r_esp += 4; return;
}

void f_008339d8(void) /* sub_8339D8 */
{
    FN_ENTER(0x008339d8);
    /* 008339d8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008339d9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008339da: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008339db: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008339dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008339dd: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 008339e1: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 008339e5: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 008339ea: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008339ec: jne 0x8339f5 */ if (!fZ) goto L_008339f5;
L_008339ee:; BB(0x008339ee);
    /* 008339ee: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008339f0: call 0x839a28 */ r_esp -= 4; W32(r_esp, 0x8339f5u); f_00839a28();
L_008339f5:; BB(0x008339f5);
    /* 008339f5: mov edx, dword ptr [0xacc16c] */ r_edx = R32((u32)(0xacc16cu));
    /* 008339fb: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 00833a00: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00833a04: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 00833a08: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833a0a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833a0c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833a0e: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00833a11: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
L_00833a14:; BB(0x00833a14);
    /* 00833a14: movzx esi, word ptr [edi] */ r_esi = (u32)R16((u32)(r_edi));
    /* 00833a17: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00833a19: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00833a1b: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 00833a1e: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833a20: mov esi, dword ptr [ecx + ebx] */ r_esi = R32((u32)(r_ecx+r_ebx));
    /* 00833a23: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00833a25: mov esi, dword ptr [ecx + ebx + 4] */ r_esi = R32((u32)(r_ecx+r_ebx+0x4u));
    /* 00833a29: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00833a2c: mov ecx, dword ptr [ecx + ebx + 8] */ r_ecx = R32((u32)(r_ecx+r_ebx+0x8u));
    /* 00833a30: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00833a33: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 00833a36: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00833a39: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00833a3c: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00833a3f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00833a41: jne 0x833a14 */ if (!fZ) goto L_00833a14;
L_00833a43:; BB(0x00833a43);
    /* 00833a43: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00833a46: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00833a4b: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00833a4d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00833a4f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833a51: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00833a57: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833a59: shr ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00833a5c: add ecx, -2 */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833a5f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00833a60: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00833a62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00833a63: call dword ptr [edx + 0x120] */ { u32 t = R32((u32)(r_edx+0x120u)); r_esp -= 4; W32(r_esp, 0x833a69u); call_ind(t); }
    /* 00833a69: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00833a6a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00833a6b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00833a6c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00833a6d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00833a6e: ret  */ FN_RET(0x008339d8); r_esp += 4; return;
}

void f_00833a70(void) /* sub_833A70 */
{
    FN_ENTER(0x00833a70);
    /* 00833a70: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00833a71: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00833a72: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00833a73: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00833a74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00833a75: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00833a79: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00833a7d: mov ecx, dword ptr [0xacc16c] */ r_ecx = R32((u32)(0xacc16cu));
    /* 00833a83: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 00833a88: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00833a8c: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 00833a90: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833a92: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00833a94: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833a96: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833a98: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833a9a: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00833a9d: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
L_00833aa0:; BB(0x00833aa0);
    /* 00833aa0: movzx esi, word ptr [edi] */ r_esi = (u32)R16((u32)(r_edi));
    /* 00833aa3: lea edx, [esi + esi*4] */ r_edx = (u32)(r_esi+r_esi*4);
    /* 00833aa6: mov esi, dword ptr [ebx + edx*4] */ r_esi = R32((u32)(r_ebx+r_edx*4));
    /* 00833aa9: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00833aab: mov esi, dword ptr [ebx + edx*4 + 4] */ r_esi = R32((u32)(r_ebx+r_edx*4+0x4u));
    /* 00833aaf: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00833ab2: mov esi, dword ptr [ebx + edx*4 + 8] */ r_esi = R32((u32)(r_ebx+r_edx*4+0x8u));
    /* 00833ab6: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 00833ab9: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 00833abc: mov esi, dword ptr [ebx + edx*4 + 0xc] */ r_esi = R32((u32)(r_ebx+r_edx*4+0xcu));
    /* 00833ac0: mov dword ptr [eax + 0x10], esi */ W32((u32)(r_eax+0x10u), r_esi);
    /* 00833ac3: mov edx, dword ptr [ebx + edx*4 + 0x10] */ r_edx = R32((u32)(r_ebx+r_edx*4+0x10u));
    /* 00833ac7: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00833aca: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00833acd: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00833ad0: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00833ad3: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00833ad5: jne 0x833aa0 */ if (!fZ) goto L_00833aa0;
L_00833ad7:; BB(0x00833ad7);
    /* 00833ad7: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00833ada: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00833ae0: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00833ae2: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 00833ae4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833ae6: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00833aec: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833aee: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 00833af3: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00833af5: shr edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00833af8: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833afb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00833afc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00833afe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00833aff: call dword ptr [ebp + 0x120] */ { u32 t = R32((u32)(r_ebp+0x120u)); r_esp -= 4; W32(r_esp, 0x833b05u); call_ind(t); }
    /* 00833b05: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00833b06: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00833b07: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00833b08: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00833b09: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00833b0a: ret  */ FN_RET(0x00833a70); r_esp += 4; return;
}

void f_00833b0c(void) /* sub_833B0C */
{
    FN_ENTER(0x00833b0c);
    /* 00833b0c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00833b0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00833b0e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00833b0f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00833b10: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00833b11: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00833b15: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00833b19: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 00833b1e: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00833b20: jne 0x833b29 */ if (!fZ) goto L_00833b29;
L_00833b22:; BB(0x00833b22);
    /* 00833b22: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00833b24: call 0x839a28 */ r_esp -= 4; W32(r_esp, 0x833b29u); f_00839a28();
L_00833b29:; BB(0x00833b29);
    /* 00833b29: mov ecx, dword ptr [0xacc16c] */ r_ecx = R32((u32)(0xacc16cu));
    /* 00833b2f: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00833b33: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 00833b37: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00833b39: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00833b3c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833b3e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833b40: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00833b42: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 00833b47: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00833b4a: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
L_00833b4d:; BB(0x00833b4d);
    /* 00833b4d: movzx esi, word ptr [edi] */ r_esi = (u32)R16((u32)(r_edi));
    /* 00833b50: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00833b53: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833b55: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00833b57: mov esi, dword ptr [ebx + edx*8] */ r_esi = R32((u32)(r_ebx+r_edx*8));
    /* 00833b5a: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00833b5c: mov esi, dword ptr [ebx + edx*8 + 4] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x4u));
    /* 00833b60: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00833b63: mov esi, dword ptr [ebx + edx*8 + 8] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x8u));
    /* 00833b67: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 00833b6a: mov esi, dword ptr [ebx + edx*8 + 0xc] */ r_esi = R32((u32)(r_ebx+r_edx*8+0xcu));
    /* 00833b6e: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 00833b71: mov esi, dword ptr [ebx + edx*8 + 0x10] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x10u));
    /* 00833b75: mov dword ptr [eax + 0x10], esi */ W32((u32)(r_eax+0x10u), r_esi);
    /* 00833b78: mov edx, dword ptr [ebx + edx*8 + 0x14] */ r_edx = R32((u32)(r_ebx+r_edx*8+0x14u));
    /* 00833b7c: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00833b7f: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 00833b82: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00833b85: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00833b88: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00833b8b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00833b8d: jne 0x833b4d */ if (!fZ) goto L_00833b4d;
L_00833b8f:; BB(0x00833b8f);
    /* 00833b8f: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00833b92: mov eax, 0x24924925 */ r_eax = 0x24924925u;
    /* 00833b97: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00833b9d: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 00833b9f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833ba1: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00833ba3: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00833ba9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833bab: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00833bae: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00833bb0: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833bb3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00833bb4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00833bb6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00833bb7: call dword ptr [ebp + 0x120] */ { u32 t = R32((u32)(r_ebp+0x120u)); r_esp -= 4; W32(r_esp, 0x833bbdu); call_ind(t); }
    /* 00833bbd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00833bbe: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00833bbf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00833bc0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00833bc1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00833bc2: ret  */ FN_RET(0x00833b0c); r_esp += 4; return;
}

void f_00833bc4(void) /* sub_833BC4 */
{
    FN_ENTER(0x00833bc4);
    /* 00833bc4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00833bc5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00833bc6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00833bc7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00833bc8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00833bc9: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00833bcd: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00833bd1: mov ecx, dword ptr [0xacc16c] */ r_ecx = R32((u32)(0xacc16cu));
    /* 00833bd7: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00833bdb: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 00833bdf: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00833be1: lea edx, [eax + eax*8] */ r_edx = (u32)(r_eax+r_eax*8);
    /* 00833be4: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00833be7: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 00833bec: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
L_00833bef:; BB(0x00833bef);
    /* 00833bef: movzx edx, word ptr [edi] */ r_edx = (u32)R16((u32)(r_edi));
    /* 00833bf2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833bf4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833bf6: mov esi, dword ptr [ebx + edx*8] */ r_esi = R32((u32)(r_ebx+r_edx*8));
    /* 00833bf9: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00833bfb: mov esi, dword ptr [ebx + edx*8 + 4] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x4u));
    /* 00833bff: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00833c02: mov esi, dword ptr [ebx + edx*8 + 8] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x8u));
    /* 00833c06: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 00833c09: mov esi, dword ptr [ebx + edx*8 + 0xc] */ r_esi = R32((u32)(r_ebx+r_edx*8+0xcu));
    /* 00833c0d: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 00833c10: mov esi, dword ptr [ebx + edx*8 + 0x10] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x10u));
    /* 00833c14: mov dword ptr [eax + 0x10], esi */ W32((u32)(r_eax+0x10u), r_esi);
    /* 00833c17: mov esi, dword ptr [ebx + edx*8 + 0x14] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x14u));
    /* 00833c1b: mov dword ptr [eax + 0x14], esi */ W32((u32)(r_eax+0x14u), r_esi);
    /* 00833c1e: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 00833c21: mov esi, dword ptr [ebx + edx*8 + 0x18] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x18u));
    /* 00833c25: mov dword ptr [eax + 0x1c], esi */ W32((u32)(r_eax+0x1cu), r_esi);
    /* 00833c28: mov edx, dword ptr [ebx + edx*8 + 0x1c] */ r_edx = R32((u32)(r_ebx+r_edx*8+0x1cu));
    /* 00833c2c: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 00833c2f: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00833c32: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00833c35: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00833c38: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00833c3a: jne 0x833bef */ if (!fZ) goto L_00833bef;
L_00833c3c:; BB(0x00833c3c);
    /* 00833c3c: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00833c3f: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00833c44: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00833c4a: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 00833c4c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833c4e: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00833c50: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00833c56: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833c58: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00833c5a: shr edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00833c5d: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833c60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00833c61: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00833c63: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00833c64: call dword ptr [ebp + 0x120] */ { u32 t = R32((u32)(r_ebp+0x120u)); r_esp -= 4; W32(r_esp, 0x833c6au); call_ind(t); }
    /* 00833c6a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00833c6b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00833c6c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00833c6d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00833c6e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00833c6f: ret  */ FN_RET(0x00833bc4); r_esp += 4; return;
}

void f_00833c70(void) /* sub_833C70 */
{
    FN_ENTER(0x00833c70);
    /* 00833c70: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00833c71: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00833c72: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00833c73: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00833c74: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00833c75: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00833c79: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00833c7d: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 00833c82: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00833c84: jne 0x833c8d */ if (!fZ) goto L_00833c8d;
L_00833c86:; BB(0x00833c86);
    /* 00833c86: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00833c88: call 0x839a28 */ r_esp -= 4; W32(r_esp, 0x833c8du); f_00839a28();
L_00833c8d:; BB(0x00833c8d);
    /* 00833c8d: mov edx, dword ptr [0xacc16c] */ r_edx = R32((u32)(0xacc16cu));
    /* 00833c93: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 00833c98: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00833c9c: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 00833ca0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833ca2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833ca4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833ca6: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00833ca9: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
L_00833cac:; BB(0x00833cac);
    /* 00833cac: movzx ecx, word ptr [edi] */ r_ecx = (u32)R16((u32)(r_edi));
    /* 00833caf: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833cb1: mov esi, dword ptr [ebx + ecx*8] */ r_esi = R32((u32)(r_ebx+r_ecx*8));
    /* 00833cb4: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00833cb6: mov esi, dword ptr [ebx + ecx*8 + 4] */ r_esi = R32((u32)(r_ebx+r_ecx*8+0x4u));
    /* 00833cba: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00833cbd: mov ecx, dword ptr [ebx + ecx*8 + 8] */ r_ecx = R32((u32)(r_ebx+r_ecx*8+0x8u));
    /* 00833cc1: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00833cc4: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 00833cc7: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00833cca: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00833ccd: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00833cd0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00833cd2: jne 0x833cac */ if (!fZ) goto L_00833cac;
L_00833cd4:; BB(0x00833cd4);
    /* 00833cd4: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00833cd7: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00833cdc: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00833cde: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00833ce0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833ce2: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00833ce8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833cea: shr ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00833ced: add ecx, -2 */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833cf0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00833cf1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00833cf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00833cf4: call dword ptr [edx + 0x120] */ { u32 t = R32((u32)(r_edx+0x120u)); r_esp -= 4; W32(r_esp, 0x833cfau); call_ind(t); }
    /* 00833cfa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00833cfb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00833cfc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00833cfd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00833cfe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00833cff: ret  */ FN_RET(0x00833c70); r_esp += 4; return;
}

void f_00833d00(void) /* sub_833D00 */
{
    FN_ENTER(0x00833d00);
    /* 00833d00: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00833d01: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00833d02: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00833d03: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00833d04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00833d05: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00833d09: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00833d0d: mov ecx, dword ptr [0xacc16c] */ r_ecx = R32((u32)(0xacc16cu));
    /* 00833d13: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 00833d18: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00833d1c: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 00833d20: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833d22: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00833d24: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833d26: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833d28: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833d2a: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00833d2d: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
L_00833d30:; BB(0x00833d30);
    /* 00833d30: movzx esi, word ptr [edi] */ r_esi = (u32)R16((u32)(r_edi));
    /* 00833d33: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00833d36: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833d38: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00833d3a: mov esi, dword ptr [ebx + edx*8] */ r_esi = R32((u32)(r_ebx+r_edx*8));
    /* 00833d3d: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00833d3f: mov esi, dword ptr [ebx + edx*8 + 4] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x4u));
    /* 00833d43: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00833d46: mov esi, dword ptr [ebx + edx*8 + 8] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x8u));
    /* 00833d4a: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 00833d4d: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 00833d50: mov esi, dword ptr [ebx + edx*8 + 0x10] */ r_esi = R32((u32)(r_ebx+r_edx*8+0x10u));
    /* 00833d54: mov dword ptr [eax + 0x10], esi */ W32((u32)(r_eax+0x10u), r_esi);
    /* 00833d57: mov edx, dword ptr [ebx + edx*8 + 0x14] */ r_edx = R32((u32)(r_ebx+r_edx*8+0x14u));
    /* 00833d5b: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00833d5e: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00833d61: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00833d64: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00833d67: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00833d69: jne 0x833d30 */ if (!fZ) goto L_00833d30;
L_00833d6b:; BB(0x00833d6b);
    /* 00833d6b: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00833d6e: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00833d74: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00833d76: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 00833d78: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833d7a: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00833d80: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833d82: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 00833d87: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00833d89: shr edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00833d8c: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833d8f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00833d90: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00833d92: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00833d93: call dword ptr [ebp + 0x120] */ { u32 t = R32((u32)(r_ebp+0x120u)); r_esp -= 4; W32(r_esp, 0x833d99u); call_ind(t); }
    /* 00833d99: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00833d9a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00833d9b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00833d9c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00833d9d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00833d9e: ret  */ FN_RET(0x00833d00); r_esp += 4; return;
}

void f_00833da0(void) /* sub_833DA0 */
{
    FN_ENTER(0x00833da0);
    /* 00833da0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00833da1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00833da2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00833da3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00833da4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00833da5: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00833da9: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00833dad: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 00833db2: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00833db4: jne 0x833dbd */ if (!fZ) goto L_00833dbd;
L_00833db6:; BB(0x00833db6);
    /* 00833db6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00833db8: call 0x839a28 */ r_esp -= 4; W32(r_esp, 0x833dbdu); f_00839a28();
L_00833dbd:; BB(0x00833dbd);
    /* 00833dbd: mov ecx, dword ptr [0xacc16c] */ r_ecx = R32((u32)(0xacc16cu));
    /* 00833dc3: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00833dc7: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 00833dcb: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00833dcd: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00833dd0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833dd2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833dd4: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00833dd6: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 00833ddb: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00833dde: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
L_00833de1:; BB(0x00833de1);
    /* 00833de1: movzx esi, word ptr [edi] */ r_esi = (u32)R16((u32)(r_edi));
    /* 00833de4: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00833de6: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00833de8: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 00833deb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833ded: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833def: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00833df1: mov esi, dword ptr [edx + ebx] */ r_esi = R32((u32)(r_edx+r_ebx));
    /* 00833df4: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00833df6: mov esi, dword ptr [edx + ebx + 4] */ r_esi = R32((u32)(r_edx+r_ebx+0x4u));
    /* 00833dfa: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00833dfd: mov esi, dword ptr [edx + ebx + 8] */ r_esi = R32((u32)(r_edx+r_ebx+0x8u));
    /* 00833e01: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 00833e04: mov esi, dword ptr [edx + ebx + 0xc] */ r_esi = R32((u32)(r_edx+r_ebx+0xcu));
    /* 00833e08: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 00833e0b: mov esi, dword ptr [edx + ebx + 0x10] */ r_esi = R32((u32)(r_edx+r_ebx+0x10u));
    /* 00833e0f: mov dword ptr [eax + 0x10], esi */ W32((u32)(r_eax+0x10u), r_esi);
    /* 00833e12: mov edx, dword ptr [edx + ebx + 0x14] */ r_edx = R32((u32)(r_edx+r_ebx+0x14u));
    /* 00833e16: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00833e19: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 00833e1c: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00833e1f: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00833e22: add eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00833e25: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00833e27: jne 0x833de1 */ if (!fZ) goto L_00833de1;
L_00833e29:; BB(0x00833e29);
    /* 00833e29: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00833e2c: mov eax, 0x24924925 */ r_eax = 0x24924925u;
    /* 00833e31: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00833e37: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 00833e39: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833e3b: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 00833e3d: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00833e43: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833e45: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00833e48: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00833e4a: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833e4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00833e4e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00833e50: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00833e51: call dword ptr [ebp + 0x120] */ { u32 t = R32((u32)(r_ebp+0x120u)); r_esp -= 4; W32(r_esp, 0x833e57u); call_ind(t); }
    /* 00833e57: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00833e58: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00833e59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00833e5a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00833e5b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00833e5c: ret  */ FN_RET(0x00833da0); r_esp += 4; return;
}

void f_00833e60(void) /* sub_833E60 */
{
    FN_ENTER(0x00833e60);
    /* 00833e60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00833e61: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00833e62: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00833e63: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00833e64: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00833e65: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00833e69: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00833e6d: mov ecx, dword ptr [0xacc16c] */ r_ecx = R32((u32)(0xacc16cu));
    /* 00833e73: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00833e77: lea eax, [ebp + ebp] */ r_eax = (u32)(r_ebp+r_ebp);
    /* 00833e7b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00833e7d: lea edx, [eax + eax*8] */ r_edx = (u32)(r_eax+r_eax*8);
    /* 00833e80: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00833e83: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 00833e88: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
L_00833e8b:; BB(0x00833e8b);
    /* 00833e8b: movzx esi, word ptr [edi] */ r_esi = (u32)R16((u32)(r_edi));
    /* 00833e8e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00833e90: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00833e92: lea edx, [esi + esi*8] */ r_edx = (u32)(r_esi+r_esi*8);
    /* 00833e95: mov esi, dword ptr [edx + ebx] */ r_esi = R32((u32)(r_edx+r_ebx));
    /* 00833e98: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00833e9a: mov esi, dword ptr [edx + ebx + 4] */ r_esi = R32((u32)(r_edx+r_ebx+0x4u));
    /* 00833e9e: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00833ea1: mov esi, dword ptr [edx + ebx + 8] */ r_esi = R32((u32)(r_edx+r_ebx+0x8u));
    /* 00833ea5: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 00833ea8: mov esi, dword ptr [edx + ebx + 0xc] */ r_esi = R32((u32)(r_edx+r_ebx+0xcu));
    /* 00833eac: mov dword ptr [eax + 0xc], esi */ W32((u32)(r_eax+0xcu), r_esi);
    /* 00833eaf: mov esi, dword ptr [edx + ebx + 0x10] */ r_esi = R32((u32)(r_edx+r_ebx+0x10u));
    /* 00833eb3: mov dword ptr [eax + 0x10], esi */ W32((u32)(r_eax+0x10u), r_esi);
    /* 00833eb6: mov esi, dword ptr [edx + ebx + 0x14] */ r_esi = R32((u32)(r_edx+r_ebx+0x14u));
    /* 00833eba: mov dword ptr [eax + 0x14], esi */ W32((u32)(r_eax+0x14u), r_esi);
    /* 00833ebd: mov dword ptr [eax + 0x18], ecx */ W32((u32)(r_eax+0x18u), r_ecx);
    /* 00833ec0: mov esi, dword ptr [edx + ebx + 0x1c] */ r_esi = R32((u32)(r_edx+r_ebx+0x1cu));
    /* 00833ec4: mov dword ptr [eax + 0x1c], esi */ W32((u32)(r_eax+0x1cu), r_esi);
    /* 00833ec7: mov edx, dword ptr [edx + ebx + 0x20] */ r_edx = R32((u32)(r_edx+r_ebx+0x20u));
    /* 00833ecb: mov dword ptr [eax + 0x20], edx */ W32((u32)(r_eax+0x20u), r_edx);
    /* 00833ece: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00833ed1: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00833ed4: add eax, 0x24 */ {  u32 a = r_eax; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00833ed7: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00833ed9: jne 0x833e8b */ if (!fZ) goto L_00833e8b;
L_00833edb:; BB(0x00833edb);
    /* 00833edb: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00833ede: mov eax, 0x38e38e39 */ r_eax = 0x38e38e39u;
    /* 00833ee3: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00833ee9: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 00833eeb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833eed: push 0x24 */ { u32 v = 0x24u; r_esp -= 4; W32(r_esp, v); }
    /* 00833eef: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00833ef5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833ef7: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 00833ef9: shr edx, 3 */ { u32 c = (3u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00833efc: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833eff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00833f00: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00833f02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00833f03: call dword ptr [ebp + 0x120] */ { u32 t = R32((u32)(r_ebp+0x120u)); r_esp -= 4; W32(r_esp, 0x833f09u); call_ind(t); }
    /* 00833f09: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00833f0a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00833f0b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00833f0c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00833f0d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00833f0e: ret  */ FN_RET(0x00833e60); r_esp += 4; return;
}

void f_00833f10(void) /* sub_833F10 */
{
    FN_ENTER(0x00833f10);
    /* 00833f10: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00833f11: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00833f12: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00833f13: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00833f14: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00833f15: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00833f19: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00833f1d: mov eax, dword ptr [0xacc18c] */ r_eax = R32((u32)(0xacc18cu));
    /* 00833f22: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00833f24: jne 0x833f2d */ if (!fZ) goto L_00833f2d;
L_00833f26:; BB(0x00833f26);
    /* 00833f26: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00833f28: call 0x839a28 */ r_esp -= 4; W32(r_esp, 0x833f2du); f_00839a28();
L_00833f2d:; BB(0x00833f2d);
    /* 00833f2d: mov edx, dword ptr [0xacc180] */ r_edx = R32((u32)(0xacc180u));
    /* 00833f33: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 00833f38: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00833f3c: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 00833f40: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833f42: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833f44: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833f46: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00833f49: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
L_00833f4c:; BB(0x00833f4c);
    /* 00833f4c: movzx esi, word ptr [edi] */ r_esi = (u32)R16((u32)(r_edi));
    /* 00833f4f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00833f51: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00833f53: lea ecx, [esi + esi] */ r_ecx = (u32)(r_esi+r_esi);
    /* 00833f56: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833f58: mov esi, dword ptr [ecx + ebx] */ r_esi = R32((u32)(r_ecx+r_ebx));
    /* 00833f5b: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00833f5d: mov esi, dword ptr [ecx + ebx + 4] */ r_esi = R32((u32)(r_ecx+r_ebx+0x4u));
    /* 00833f61: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00833f64: mov ecx, dword ptr [ecx + ebx + 8] */ r_ecx = R32((u32)(r_ecx+r_ebx+0x8u));
    /* 00833f68: mov dword ptr [eax + 8], ecx */ W32((u32)(r_eax+0x8u), r_ecx);
    /* 00833f6b: mov dword ptr [eax + 0xc], edx */ W32((u32)(r_eax+0xcu), r_edx);
    /* 00833f6e: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00833f71: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00833f74: add eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00833f77: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00833f79: jne 0x833f4c */ if (!fZ) goto L_00833f4c;
L_00833f7b:; BB(0x00833f7b);
    /* 00833f7b: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 00833f7e: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00833f83: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 00833f85: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00833f87: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833f89: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00833f8f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833f91: shr ecx, 4 */ { u32 c = (4u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00833f94: add ecx, -2 */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00833f97: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00833f98: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00833f9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00833f9b: call dword ptr [edx + 0x120] */ { u32 t = R32((u32)(r_edx+0x120u)); r_esp -= 4; W32(r_esp, 0x833fa1u); call_ind(t); }
    /* 00833fa1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00833fa2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00833fa3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00833fa4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00833fa5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00833fa6: ret  */ FN_RET(0x00833f10); r_esp += 4; return;
}

void f_00833fa8(void) /* sub_833FA8 */
{
    FN_ENTER(0x00833fa8);
    /* 00833fa8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00833fa9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00833faa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00833fab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00833fac: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00833fad: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00833fb1: mov ebp, dword ptr [esp + 0x1c] */ r_ebp = R32((u32)(r_esp+0x1cu));
    /* 00833fb5: mov ecx, dword ptr [0xacc180] */ r_ecx = R32((u32)(0xacc180u));
    /* 00833fbb: mov eax, dword ptr [0xacd52c] */ r_eax = R32((u32)(0xacd52cu));
    /* 00833fc0: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00833fc4: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 00833fc8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833fca: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00833fcc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833fce: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833fd0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00833fd2: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00833fd5: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
L_00833fd8:; BB(0x00833fd8);
    /* 00833fd8: movzx esi, word ptr [edi] */ r_esi = (u32)R16((u32)(r_edi));
    /* 00833fdb: lea edx, [esi + esi*4] */ r_edx = (u32)(r_esi+r_esi*4);
    /* 00833fde: mov esi, dword ptr [ebx + edx*4] */ r_esi = R32((u32)(r_ebx+r_edx*4));
    /* 00833fe1: mov dword ptr [eax], esi */ W32((u32)(r_eax), r_esi);
    /* 00833fe3: mov esi, dword ptr [ebx + edx*4 + 4] */ r_esi = R32((u32)(r_ebx+r_edx*4+0x4u));
    /* 00833fe7: mov dword ptr [eax + 4], esi */ W32((u32)(r_eax+0x4u), r_esi);
    /* 00833fea: mov esi, dword ptr [ebx + edx*4 + 8] */ r_esi = R32((u32)(r_ebx+r_edx*4+0x8u));
    /* 00833fee: mov dword ptr [eax + 8], esi */ W32((u32)(r_eax+0x8u), r_esi);
    /* 00833ff1: mov dword ptr [eax + 0xc], ecx */ W32((u32)(r_eax+0xcu), r_ecx);
    /* 00833ff4: mov esi, dword ptr [ebx + edx*4 + 0xc] */ r_esi = R32((u32)(r_ebx+r_edx*4+0xcu));
    /* 00833ff8: mov dword ptr [eax + 0x10], esi */ W32((u32)(r_eax+0x10u), r_esi);
    /* 00833ffb: mov edx, dword ptr [ebx + edx*4 + 0x10] */ r_edx = R32((u32)(r_ebx+r_edx*4+0x10u));
    /* 00833fff: mov dword ptr [eax + 0x14], edx */ W32((u32)(r_eax+0x14u), r_edx);
    /* 00834002: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00834005: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00834008: add eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0083400b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0083400d: jne 0x833fd8 */ if (!fZ) goto L_00833fd8;
L_0083400f:; BB(0x0083400f);
    /* 0083400f: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00834012: mov ecx, dword ptr [0xacd528] */ r_ecx = R32((u32)(0xacd528u));
    /* 00834018: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0083401a: mov ebp, dword ptr [ecx] */ r_ebp = R32((u32)(r_ecx));
    /* 0083401c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0083401e: push dword ptr [0xacd52c] */ { u32 v = R32((u32)(0xacd52cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00834024: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00834026: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 0083402b: mul edx */ { u64 t = (u64)r_eax * r_edx; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0083402d: shr edx, 4 */ { u32 c = (4u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00834030: add edx, -2 */ {  u32 a = r_edx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00834033: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00834034: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00834036: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00834037: call dword ptr [ebp + 0x120] */ { u32 t = R32((u32)(r_ebp+0x120u)); r_esp -= 4; W32(r_esp, 0x83403du); call_ind(t); }
    /* 0083403d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0083403e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0083403f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00834040: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00834041: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00834042: ret  */ FN_RET(0x00833fa8); r_esp += 4; return;
}

