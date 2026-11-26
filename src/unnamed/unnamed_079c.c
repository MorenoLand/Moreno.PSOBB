#include "protos.h"

void f_0079c01c(void)
{
    FN_ENTER(0x0079c01c);
    /* 0079c01c: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0079c020: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c022: je 0x79c05a */ if (fZ) goto L_0079c05a;
L_0079c024:; BB(0x0079c024);
    /* 0079c024: call 0x6c1f04 */ r_esp -= 4; W32(r_esp, 0x79c029u); f_006c1f04();
    /* 0079c029: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x79c02eu); f_006dc358();
    /* 0079c02e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c030: je 0x79c04e */ if (fZ) goto L_0079c04e;
L_0079c032:; BB(0x0079c032);
    /* 0079c032: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c035: jne 0x79c040 */ if (!fZ) goto L_0079c040;
L_0079c037:; BB(0x0079c037);
    /* 0079c037: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c039: call 0x7a09d0 */ r_esp -= 4; W32(r_esp, 0x79c03eu); f_007a09d0();
    /* 0079c03e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079c03f: ret  */ FN_RET(0x0079c01c); r_esp += 4; return;
L_0079c040:; BB(0x0079c040);
    /* 0079c040: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079c043: jne 0x79c059 */ if (!fZ) goto L_0079c059;
L_0079c045:; BB(0x0079c045);
    /* 0079c045: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c047: call 0x7a09d0 */ r_esp -= 4; W32(r_esp, 0x79c04cu); f_007a09d0();
    /* 0079c04c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079c04d: ret  */ FN_RET(0x0079c01c); r_esp += 4; return;
L_0079c04e:; BB(0x0079c04e);
    /* 0079c04e: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079c054: call 0x7d7798 */ r_esp -= 4; W32(r_esp, 0x79c059u); f_007d7798();
L_0079c059:; BB(0x0079c059);
    /* 0079c059: ret  */ FN_RET(0x0079c01c); r_esp += 4; return;
L_0079c05a:; BB(0x0079c05a);
    /* 0079c05a: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c05c: call 0x7a0a7c */ r_esp -= 4; W32(r_esp, 0x79c061u); f_007a0a7c();
    /* 0079c061: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079c062: call 0x6c7754 */ r_esp -= 4; W32(r_esp, 0x79c067u); f_006c7754();
    /* 0079c067: call 0x6c1f04 */ r_esp -= 4; W32(r_esp, 0x79c06cu); f_006c1f04();
    /* 0079c06c: ret  */ FN_RET(0x0079c01c); r_esp += 4; return;
}

void f_0079c070(void) /* sub_79C070 */
{
    FN_ENTER(0x0079c070);
    /* 0079c070: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079c071: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079c072: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079c073: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079c074: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079c077: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 0079c07b: mov ebx, dword ptr [edi + 4] */ r_ebx = R32((u32)(r_edi+0x4u));
    /* 0079c07e: movsx eax, byte ptr [edi + 8] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x8u));
    /* 0079c082: movsx esi, byte ptr [edi + 9] */ r_esi = (u32)(i32)(i8)R8((u32)(r_edi+0x9u));
    /* 0079c086: movsx ebp, byte ptr [edi + 0xb] */ r_ebp = (u32)(i32)(i8)R8((u32)(r_edi+0xbu));
    /* 0079c08a: movsx edx, byte ptr [edi + 0xc] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0xcu));
    /* 0079c08e: movsx ecx, byte ptr [edi + 0xd] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_edi+0xdu));
    /* 0079c092: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 0079c095: movsx eax, byte ptr [edi + 0xe] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0xeu));
    /* 0079c099: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0079c09d: mov dword ptr [esp + 0x1c], ecx */ W32((u32)(r_esp+0x1cu), r_ecx);
    /* 0079c0a1: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 0079c0a5: movsx eax, byte ptr [edi + 0xf] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0xfu));
    /* 0079c0a9: mov dword ptr [0xaab194], eax */ W32((u32)(0xaab194u), r_eax);
    /* 0079c0ae: call 0x797384 */ r_esp -= 4; W32(r_esp, 0x79c0b3u); f_00797384();
    /* 0079c0b3: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0079c0b6: mov ecx, dword ptr [esp + 0x20] */ r_ecx = R32((u32)(r_esp+0x20u));
    /* 0079c0ba: mov dword ptr [0xa9c4f4], eax */ W32((u32)(0xa9c4f4u), r_eax);
    /* 0079c0bf: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 0079c0c3: mov dword ptr [0xaab204], ebp */ W32((u32)(0xaab204u), r_ebp);
    /* 0079c0c9: mov dword ptr [0xaab208], ecx */ W32((u32)(0xaab208u), r_ecx);
    /* 0079c0cf: mov dword ptr [0xaab1fc], eax */ W32((u32)(0xaab1fcu), r_eax);
    /* 0079c0d4: mov dword ptr [0xa9c4dc], esi */ W32((u32)(0xa9c4dcu), r_esi);
    /* 0079c0da: mov edx, 1 */ r_edx = 0x1u;
    /* 0079c0df: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079c0e1: mov dword ptr [0xaab280], edx */ W32((u32)(0xaab280u), r_edx);
    /* 0079c0e7: mov dword ptr [0xaab27c], edx */ W32((u32)(0xaab27cu), r_edx);
    /* 0079c0ed: mov dword ptr [0xa942c0], eax */ W32((u32)(0xa942c0u), r_eax);
    /* 0079c0f2: mov dword ptr [0xaab21c], eax */ W32((u32)(0xaab21cu), r_eax);
    /* 0079c0f7: mov eax, dword ptr [0xaaecf8] */ r_eax = R32((u32)(0xaaecf8u));
    /* 0079c0fc: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 0079c0ff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c101: je 0x79c11c */ if (fZ) goto L_0079c11c;
L_0079c103:; BB(0x0079c103);
    /* 0079c103: mov edi, ecx */ r_edi = r_ecx;
L_0079c105:; BB(0x0079c105);
    /* 0079c105: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c107: je 0x79c111 */ if (fZ) goto L_0079c111;
L_0079c109:; BB(0x0079c109);
    /* 0079c109: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c10b: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0079c10d: mov ecx, edi */ r_ecx = r_edi;
    /* 0079c10f: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x79c111u); call_ind(t); }
L_0079c111:; BB(0x0079c111);
    /* 0079c111: mov edi, dword ptr [edi + 0x10] */ r_edi = R32((u32)(r_edi+0x10u));
    /* 0079c114: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c116: jne 0x79c105 */ if (!fZ) goto L_0079c105;
L_0079c118:; BB(0x0079c118);
    /* 0079c118: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
L_0079c11c:; BB(0x0079c11c);
    /* 0079c11c: movzx eax, byte ptr [0xaab1e8] */ r_eax = (u32)R8((u32)(0xaab1e8u));
    /* 0079c123: movzx edx, byte ptr [0xaab1e9] */ r_edx = (u32)R8((u32)(0xaab1e9u));
    /* 0079c12a: movzx ecx, byte ptr [0xaab1ea] */ r_ecx = (u32)R8((u32)(0xaab1eau));
    /* 0079c131: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079c133: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079c135: movzx edx, byte ptr [0xaab1eb] */ r_edx = (u32)R8((u32)(0xaab1ebu));
    /* 0079c13c: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079c13e: movzx edx, byte ptr [0xaab1ec] */ r_edx = (u32)R8((u32)(0xaab1ecu));
    /* 0079c145: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079c147: movzx edx, byte ptr [0xaab1ed] */ r_edx = (u32)R8((u32)(0xaab1edu));
    /* 0079c14e: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079c150: movzx edx, byte ptr [0xaab1ee] */ r_edx = (u32)R8((u32)(0xaab1eeu));
    /* 0079c157: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0079c159: movzx edx, byte ptr [0xaab1ef] */ r_edx = (u32)R8((u32)(0xaab1efu));
    /* 0079c160: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0079c162: je 0x79c18d */ if (fZ) goto L_0079c18d;
L_0079c164:; BB(0x0079c164);
    /* 0079c164: push 0xaab1e8 */ { u32 v = 0xaab1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c169: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x79c16eu); f_006dc358();
    /* 0079c16e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079c16f: mov edx, 0xaab1e8 */ r_edx = 0xaab1e8u;
    /* 0079c174: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079c176: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0079c178: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0079c17b: mov edx, 0xaab1d8 */ r_edx = 0xaab1d8u;
    /* 0079c180: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079c182: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0079c184: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0079c187: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0079c18a: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
L_0079c18d:; BB(0x0079c18d);
    /* 0079c18d: push 0xaab1d8 */ { u32 v = 0xaab1d8u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c192: push 0xaab1e8 */ { u32 v = 0xaab1e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c197: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x79c19cu); f_006dc358();
    /* 0079c19c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079c19f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079c1a1: mov word ptr [0xaab000], ax */ W16((u32)(0xaab000u), (u16)r_eax);
    /* 0079c1a7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0079c1a9: mov word ptr [0xaab020], ax */ W16((u32)(0xaab020u), (u16)r_eax);
    /* 0079c1af: mov edx, 0 */ r_edx = 0x0u;
    /* 0079c1b4: mov word ptr [0xaab040], ax */ W16((u32)(0xaab040u), (u16)r_eax);
    /* 0079c1ba: mov word ptr [0xaab060], ax */ W16((u32)(0xaab060u), (u16)r_eax);
    /* 0079c1c0: mov word ptr [0xaab080], ax */ W16((u32)(0xaab080u), (u16)r_eax);
    /* 0079c1c6: mov word ptr [0xaab0a0], ax */ W16((u32)(0xaab0a0u), (u16)r_eax);
    /* 0079c1cc: mov word ptr [0xaab0c0], ax */ W16((u32)(0xaab0c0u), (u16)r_eax);
    /* 0079c1d2: mov word ptr [0xaab0e0], ax */ W16((u32)(0xaab0e0u), (u16)r_eax);
    /* 0079c1d8: mov word ptr [0xaab100], ax */ W16((u32)(0xaab100u), (u16)r_eax);
    /* 0079c1de: mov word ptr [0xaab120], ax */ W16((u32)(0xaab120u), (u16)r_eax);
    /* 0079c1e4: mov word ptr [0xaab140], ax */ W16((u32)(0xaab140u), (u16)r_eax);
    /* 0079c1ea: mov word ptr [0xaab160], ax */ W16((u32)(0xaab160u), (u16)r_eax);
    /* 0079c1f0: jle 0x79c26a */ if ((fZ||fS!=fO)) goto L_0079c26a;
L_0079c1f2:; BB(0x0079c1f2);
    /* 0079c1f2: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0079c1f6: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0079c1fa: mov esi, edx */ r_esi = r_edx;
    /* 0079c1fc: lea eax, [edx + edx*4] */ r_eax = (u32)(r_edx+r_edx*4);
    /* 0079c1ff: lea eax, [edx + eax*8] */ r_eax = (u32)(r_edx+r_eax*8);
    /* 0079c202: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0079c206: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079c208: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079c20a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079c20c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079c20e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079c210: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 0079c213: lea ecx, [edx + ecx*8] */ r_ecx = (u32)(r_edx+r_ecx*8);
    /* 0079c216: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079c218: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079c21a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079c21c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079c21e: lea ecx, [ecx + ecx + 0x20] */ r_ecx = (u32)(r_ecx+r_ecx+0x20u);
    /* 0079c222: lea ecx, [ecx + edi + 0x14] */ r_ecx = (u32)(r_ecx+r_edi+0x14u);
    /* 0079c226: mov ebp, eax */ r_ebp = r_eax;
    /* 0079c228: mov ebx, ecx */ r_ebx = r_ecx;
L_0079c22a:; BB(0x0079c22a);
    /* 0079c22a: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c22c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079c22d: mov eax, dword ptr [ebp + edi + 0x30] */ r_eax = R32((u32)(r_ebp+r_edi+0x30u));
    /* 0079c231: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079c233: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079c235: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079c237: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079c239: lea eax, [eax + eax + 0xaab000] */ r_eax = (u32)(r_eax+r_eax+0xaab000u);
    /* 0079c240: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079c241: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x79c246u); f_00857dec();
    /* 0079c246: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079c249: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0079c24d: add ebp, 0x520 */ {  u32 a = r_ebp; u32 b = 0x520u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079c253: add ebx, 0x520 */ {  u32 a = r_ebx; u32 b = 0x520u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079c259: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079c25c: cmp esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079c25e: jl 0x79c22a */ if ((fS!=fO)) goto L_0079c22a;
L_0079c260:; BB(0x0079c260);
    /* 0079c260: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0079c264: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0079c268: mov ebx, eax */ r_ebx = r_eax;
L_0079c26a:; BB(0x0079c26a);
    /* 0079c26a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079c26c: mov edi, eax */ r_edi = r_eax;
L_0079c26e:; BB(0x0079c26e);
    /* 0079c26e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079c26f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x79c274u); f_0068d5a8();
    /* 0079c274: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079c275: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c277: je 0x79c281 */ if (fZ) goto L_0079c281;
L_0079c279:; BB(0x0079c279);
    /* 0079c279: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c27b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0079c27d: mov ecx, eax */ r_ecx = r_eax;
    /* 0079c27f: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x79c281u); call_ind(t); }
L_0079c281:; BB(0x0079c281);
    /* 0079c281: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079c284: cmp edi, 0xc */ {  u32 a = r_edi; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079c287: jl 0x79c26e */ if ((fS!=fO)) goto L_0079c26e;
L_0079c289:; BB(0x0079c289);
    /* 0079c289: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
    /* 0079c28d: push 0x330 */ { u32 v = 0x330u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c292: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c294: push 0xaaacc0 */ { u32 v = 0xaaacc0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c299: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x79c29eu); f_0086b688();
    /* 0079c29e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079c2a1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0079c2a3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0079c2a5: jle 0x79c3c4 */ if ((fZ||fS!=fO)) goto L_0079c3c4;
L_0079c2ab:; BB(0x0079c2ab);
    /* 0079c2ab: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0079c2af: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0079c2b3: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0079c2b7: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 0079c2bb: lea eax, [edx + edx*4] */ r_eax = (u32)(r_edx+r_edx*4);
    /* 0079c2be: lea ecx, [edx + eax*8] */ r_ecx = (u32)(r_edx+r_eax*8);
    /* 0079c2c1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079c2c3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079c2c5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079c2c7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079c2c9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079c2cb: lea eax, [edi + ecx + 0x30] */ r_eax = (u32)(r_edi+r_ecx+0x30u);
    /* 0079c2cf: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 0079c2d2: lea ecx, [edx + ecx*8] */ r_ecx = (u32)(r_edx+r_ecx*8);
    /* 0079c2d5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079c2d7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079c2d9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079c2db: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079c2dd: lea ecx, [ecx + ecx + 8] */ r_ecx = (u32)(r_ecx+r_ecx+0x8u);
    /* 0079c2e1: lea ecx, [ecx + edi + 0x14] */ r_ecx = (u32)(r_ecx+r_edi+0x14u);
    /* 0079c2e5: mov dword ptr [esp + 0x20], ecx */ W32((u32)(r_esp+0x20u), r_ecx);
    /* 0079c2e9: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 0079c2ec: lea ecx, [edx + ecx*8] */ r_ecx = (u32)(r_edx+r_ecx*8);
    /* 0079c2ef: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079c2f1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079c2f3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079c2f5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079c2f7: lea ecx, [ecx + ecx + 0x20] */ r_ecx = (u32)(r_ecx+r_ecx+0x20u);
    /* 0079c2fb: lea ecx, [ecx + edi + 0x14] */ r_ecx = (u32)(r_ecx+r_edi+0x14u);
    /* 0079c2ff: mov esi, eax */ r_esi = r_eax;
    /* 0079c301: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 0079c305: mov ebp, ecx */ r_ebp = r_ecx;
L_0079c307:; BB(0x0079c307);
    /* 0079c307: mov ebx, dword ptr [esi] */ r_ebx = R32((u32)(r_esi));
    /* 0079c309: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0079c30b: jl 0x79c38f */ if ((fS!=fO)) goto L_0079c38f;
L_0079c311:; BB(0x0079c311);
    /* 0079c311: cmp ebx, 0xc */ {  u32 a = r_ebx; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0079c314: jae 0x79c38f */ if (!fC) goto L_0079c38f;
L_0079c316:; BB(0x0079c316);
    /* 0079c316: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079c318: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079c31a: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 0079c31d: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0079c321: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 0079c324: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079c326: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079c328: lea eax, [ebx + edx + 0xaaacc0] */ r_eax = (u32)(r_ebx+r_edx+0xaaacc0u);
    /* 0079c32f: mov edx, dword ptr [esi - 0x1c] */ r_edx = R32((u32)(r_esi+0xffffffe4u));
    /* 0079c332: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0079c336: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 0079c338: mov edx, dword ptr [esi - 0x18] */ r_edx = R32((u32)(r_esi+0xffffffe8u));
    /* 0079c33b: mov dword ptr [eax + 4], edx */ W32((u32)(r_eax+0x4u), r_edx);
    /* 0079c33e: lea edx, [eax + 8] */ r_edx = (u32)(r_eax+0x8u);
    /* 0079c341: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0079c343: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0079c345: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 0079c348: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0079c34b: mov eax, dword ptr [edi + 8] */ r_eax = R32((u32)(r_edi+0x8u));
    /* 0079c34e: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0079c351: mov eax, dword ptr [edi + 0xc] */ r_eax = R32((u32)(r_edi+0xcu));
    /* 0079c354: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0079c357: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0079c35b: mov edx, dword ptr [esi - 4] */ r_edx = R32((u32)(r_esi+0xfffffffcu));
    /* 0079c35e: mov dword ptr [ebx + eax*8 + 0xaaacd8], edx */ W32((u32)(r_ebx+r_eax*8+0xaaacd8u), r_edx);
    /* 0079c365: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0079c367: mov dword ptr [ebx + eax*8 + 0xaaacdc], edx */ W32((u32)(r_ebx+r_eax*8+0xaaacdcu), r_edx);
    /* 0079c36e: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 0079c372: add edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079c375: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c377: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079c378: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079c379: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x79c37eu); f_00857dec();
    /* 0079c37e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079c381: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 0079c385: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 0079c388: mov dword ptr [ebx + eax*8 + 0xaaad00], edx */ W32((u32)(r_ebx+r_eax*8+0xaaad00u), r_edx);
L_0079c38f:; BB(0x0079c38f);
    /* 0079c38f: mov edx, dword ptr [esp + 0x1c] */ r_edx = R32((u32)(r_esp+0x1cu));
    /* 0079c393: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 0079c397: add esi, 0x520 */ {  u32 a = r_esi; u32 b = 0x520u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0079c39d: add edi, 0x520 */ {  u32 a = r_edi; u32 b = 0x520u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079c3a3: add ebp, 0x520 */ {  u32 a = r_ebp; u32 b = 0x520u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079c3a9: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079c3ac: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 0079c3b0: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079c3b2: jl 0x79c307 */ if ((fS!=fO)) goto L_0079c307;
L_0079c3b8:; BB(0x0079c3b8);
    /* 0079c3b8: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0079c3bc: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 0079c3c0: mov edi, dword ptr [esp + 0x38] */ r_edi = R32((u32)(r_esp+0x38u));
L_0079c3c4:; BB(0x0079c3c4);
    /* 0079c3c4: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0079c3c7: mov dword ptr [0xaab220], 2 */ W32((u32)(0xaab220u), 0x2u);
    /* 0079c3d1: mov word ptr [0xaab228], dx */ W16((u32)(0xaab228u), (u16)r_edx);
    /* 0079c3d8: movsx edx, word ptr [0xaab224] */ r_edx = (u32)(i32)(i16)R16((u32)(0xaab224u));
    /* 0079c3df: lea eax, [edx + ebx] */ r_eax = (u32)(r_edx+r_ebx);
    /* 0079c3e2: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079c3e4: jge 0x79c450 */ if ((fS==fO)) goto L_0079c450;
L_0079c3e6:; BB(0x0079c3e6);
    /* 0079c3e6: mov dword ptr [esp + 8], ebp */ W32((u32)(r_esp+0x8u), r_ebp);
    /* 0079c3ea: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 0079c3ee: lea eax, [edx + edx*4] */ r_eax = (u32)(r_edx+r_edx*4);
    /* 0079c3f1: lea eax, [edx + eax*8] */ r_eax = (u32)(r_edx+r_eax*8);
    /* 0079c3f4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079c3f6: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079c3f8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079c3fa: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079c3fc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079c3fe: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 0079c401: lea ecx, [edx + ecx*8] */ r_ecx = (u32)(r_edx+r_ecx*8);
    /* 0079c404: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079c406: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079c408: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079c40a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079c40c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0079c40e: lea ecx, [ecx + edi + 0x14] */ r_ecx = (u32)(r_ecx+r_edi+0x14u);
    /* 0079c412: mov ebp, ecx */ r_ebp = r_ecx;
L_0079c414:; BB(0x0079c414);
    /* 0079c414: lea edi, [eax + 0xaa6d40] */ r_edi = (u32)(r_eax+0xaa6d40u);
    /* 0079c41a: mov esi, ebp */ r_esi = r_ebp;
    /* 0079c41c: mov ecx, 0x520 */ r_ecx = 0x520u;
    /* 0079c421: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079c422: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0079c425: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0079c427: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079c428: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0079c42b: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0079c42d: movsx edi, word ptr [0xaab224] */ r_edi = (u32)(i32)(i16)R16((u32)(0xaab224u));
    /* 0079c434: add eax, 0x520 */ {  u32 a = r_eax; u32 b = 0x520u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079c439: add ebp, 0x520 */ {  u32 a = r_ebp; u32 b = 0x520u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079c43f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079c442: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079c444: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0079c446: jl 0x79c414 */ if ((fS!=fO)) goto L_0079c414;
L_0079c448:; BB(0x0079c448);
    /* 0079c448: mov ebp, dword ptr [esp + 8] */ r_ebp = R32((u32)(r_esp+0x8u));
    /* 0079c44c: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
L_0079c450:; BB(0x0079c450);
    /* 0079c450: mov word ptr [0xaab224], bx */ W16((u32)(0xaab224u), (u16)r_ebx);
    /* 0079c457: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079c458: push dword ptr [0xaafca0] */ { u32 v = R32((u32)(0xaafca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079c45e: mov dword ptr [0xa9c4dc], esi */ W32((u32)(0xa9c4dcu), r_esi);
    /* 0079c464: call 0x80c2c0 */ r_esp -= 4; W32(r_esp, 0x79c469u); f_0080c2c0();
    /* 0079c469: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079c46c: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 0079c470: mov edx, dword ptr [0xaab1d4] */ r_edx = R32((u32)(0xaab1d4u));
    /* 0079c476: mov dword ptr [0xaab210], eax */ W32((u32)(0xaab210u), r_eax);
    /* 0079c47b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c47d: je 0x79c4a6 */ if (fZ) goto L_0079c4a6;
L_0079c47f:; BB(0x0079c47f);
    /* 0079c47f: push dword ptr [0xaab1d0] */ { u32 v = R32((u32)(0xaab1d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079c485: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 0079c48b: push dword ptr [ecx + 0x12124] */ { u32 v = R32((u32)(r_ecx+0x12124u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079c491: push dword ptr [ecx + 0x12120] */ { u32 v = R32((u32)(r_ecx+0x12120u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079c497: call 0x7d40c4 */ r_esp -= 4; W32(r_esp, 0x79c49cu); f_007d40c4();
    /* 0079c49c: mov dword ptr [0xaab1d4], 0 */ W32((u32)(0xaab1d4u), 0x0u);
L_0079c4a6:; BB(0x0079c4a6);
    /* 0079c4a6: call 0x7a6134 */ r_esp -= 4; W32(r_esp, 0x79c4abu); f_007a6134();
    /* 0079c4ab: push -5 */ { u32 v = 0xfffffffbu; r_esp -= 4; W32(r_esp, v); }
    /* 0079c4ad: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c4af: call 0x708698 */ r_esp -= 4; W32(r_esp, 0x79c4b4u); f_00708698();
    /* 0079c4b4: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079c4b7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079c4b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079c4b9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079c4ba: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079c4bb: ret  */ FN_RET(0x0079c070); r_esp += 4; return;
}

void f_0079c4bc(void) /* sub_79C4BC */
{
    FN_ENTER(0x0079c4bc);
    /* 0079c4bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079c4bd: mov ebp, esp */ r_ebp = r_esp;
    /* 0079c4bf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079c4c1: push 0x8f5600 */ { u32 v = 0x8f5600u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c4c6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0079c4cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079c4cd: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0079c4d4: sub esp, 0x58c */ {  u32 a = r_esp; u32 b = 0x58cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079c4da: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0079c4dd: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0079c4e0: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0079c4e3: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0079c4e6: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 0079c4eb: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c4ee: je 0x79c4f9 */ if (fZ) goto L_0079c4f9;
L_0079c4f0:; BB(0x0079c4f0);
    /* 0079c4f0: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079c4f3: jne 0x79c9d8 */ if (!fZ) goto L_0079c9d8;
L_0079c4f9:; BB(0x0079c4f9);
    /* 0079c4f9: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0079c4fc: lea edi, [ebp - 0x54c] */ r_edi = (u32)(r_ebp+0xfffffab4u);
    /* 0079c502: mov ecx, 0x520 */ r_ecx = 0x520u;
    /* 0079c507: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079c508: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0079c50b: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0079c50d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079c50e: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0079c511: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0079c513: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0079c51a: mov eax, dword ptr [ebp - 0x530] */ r_eax = R32((u32)(r_ebp+0xfffffad0u));
    /* 0079c520: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c526: jne 0x79c5ec */ if (!fZ) goto L_0079c5ec;
L_0079c52c:; BB(0x0079c52c);
    /* 0079c52c: lea eax, [ebp - 0x54c] */ r_eax = (u32)(r_ebp+0xfffffab4u);
    /* 0079c532: mov dword ptr [ebp - 0x598], eax */ W32((u32)(r_ebp+0xfffffa68u), r_eax);
    /* 0079c538: lea eax, [ebp - 0x508] */ r_eax = (u32)(r_ebp+0xfffffaf8u);
    /* 0079c53e: mov dword ptr [ebp - 0x590], eax */ W32((u32)(r_ebp+0xfffffa70u), r_eax);
    /* 0079c544: lea eax, [ebp - 0x128] */ r_eax = (u32)(r_ebp+0xfffffed8u);
    /* 0079c54a: mov dword ptr [ebp - 0x588], eax */ W32((u32)(r_ebp+0xfffffa78u), r_eax);
    /* 0079c550: lea eax, [ebp - 0xb4] */ r_eax = (u32)(r_ebp+0xffffff4cu);
    /* 0079c556: mov dword ptr [ebp - 0x580], eax */ W32((u32)(r_ebp+0xfffffa80u), r_eax);
    /* 0079c55c: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0079c563: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c568: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 0079c56b: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079c56d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c56f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079c570: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x79c575u); f_008586d6();
    /* 0079c575: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0079c57c: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c581: lea eax, [ebp - 0xb0] */ r_eax = (u32)(r_ebp+0xffffff50u);
    /* 0079c587: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079c589: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c58b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079c58c: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x79c591u); f_008586d6();
    /* 0079c591: lea eax, [ebp - 0x128] */ r_eax = (u32)(r_ebp+0xfffffed8u);
    /* 0079c597: mov dword ptr [ebp - 0x578], eax */ W32((u32)(r_ebp+0xfffffa88u), r_eax);
    /* 0079c59d: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0079c5a4: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c5a9: lea eax, [ebp - 0xec] */ r_eax = (u32)(r_ebp+0xffffff14u);
    /* 0079c5af: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079c5b1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c5b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079c5b4: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x79c5b9u); f_008586d6();
    /* 0079c5b9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0079c5c0: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c5c5: lea eax, [ebp - 0x124] */ r_eax = (u32)(r_ebp+0xfffffedcu);
    /* 0079c5cb: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079c5cd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c5cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079c5d0: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x79c5d5u); f_008586d6();
    /* 0079c5d5: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0079c5d8: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0079c5db: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0079c5de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0079c5e1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0079c5e8: mov esp, ebp */ r_esp = r_ebp;
    /* 0079c5ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079c5eb: ret  */ FN_RET(0x0079c4bc); r_esp += 4; return;
L_0079c5ec:; BB(0x0079c5ec);
    /* 0079c5ec: lea edx, [ebp - 0x54c] */ r_edx = (u32)(r_ebp+0xfffffab4u);
    /* 0079c5f2: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079c5f5: call 0x79cbd8 */ r_esp -= 4; W32(r_esp, 0x79c5fau); f_0079cbd8();
    /* 0079c5fa: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0079c5fd: mov dword ptr [0xaab27c], eax */ W32((u32)(0xaab27cu), r_eax);
    /* 0079c602: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c604: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79c609u); f_00793168();
    /* 0079c609: lea edx, [ebp - 0x52c] */ r_edx = (u32)(r_ebp+0xfffffad4u);
    /* 0079c60f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079c610: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079c611: push 0xa9d560 */ { u32 v = 0xa9d560u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c616: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79c61bu); f_00857e29();
    /* 0079c61b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079c61e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079c61f: mov eax, 0xa9d560 */ r_eax = 0xa9d560u;
    /* 0079c624: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x79c629u); f_0079a8c4();
    /* 0079c629: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079c62a: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 0079c630: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c632: je 0x79c644 */ if (fZ) goto L_0079c644;
L_0079c634:; BB(0x0079c634);
    /* 0079c634: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x79c639u); f_0073b0f0();
    /* 0079c639: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 0079c63f: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x79c644u); f_00712c00();
L_0079c644:; BB(0x0079c644);
    /* 0079c644: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0079c649: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x79c64eu); f_0061cdb0();
    /* 0079c64e: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0079c653: call 0x81888c */ r_esp -= 4; W32(r_esp, 0x79c658u); f_0081888c();
    /* 0079c658: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0079c65d: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x79c662u); f_00817604();
    /* 0079c662: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0079c667: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x79c66cu); f_00818f80();
    /* 0079c66c: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x79c671u); f_0080030c();
    /* 0079c671: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0079c676: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x79c67bu); f_0061cdb0();
    /* 0079c67b: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0079c680: call 0x81888c */ r_esp -= 4; W32(r_esp, 0x79c685u); f_0081888c();
    /* 0079c685: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0079c68a: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x79c68fu); f_00817604();
    /* 0079c68f: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0079c694: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x79c699u); f_00818f80();
    /* 0079c699: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x79c69eu); f_0080030c();
    /* 0079c69e: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0079c6a3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x79c6a8u); f_0061cdb0();
    /* 0079c6a8: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0079c6ad: call 0x81888c */ r_esp -= 4; W32(r_esp, 0x79c6b2u); f_0081888c();
    /* 0079c6b2: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0079c6b7: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x79c6bcu); f_00817604();
    /* 0079c6bc: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0079c6c1: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x79c6c6u); f_00818f80();
    /* 0079c6c6: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x79c6cbu); f_0080030c();
    /* 0079c6cb: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0079c6d0: call 0x8183b4 */ r_esp -= 4; W32(r_esp, 0x79c6d5u); f_008183b4();
    /* 0079c6d5: push dword ptr [ebp - 0x530] */ { u32 v = R32((u32)(r_ebp+0xfffffad0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079c6db: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0079c6de: mov dword ptr [0xa9c4dc], eax */ W32((u32)(0xa9c4dcu), r_eax);
    /* 0079c6e3: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x79c6e8u); f_0068d5a8();
    /* 0079c6e8: mov ebx, eax */ r_ebx = r_eax;
    /* 0079c6ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079c6ed: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c6ef: je 0x79c720 */ if (fZ) goto L_0079c720;
L_0079c6f1:; BB(0x0079c6f1);
    /* 0079c6f1: mov esi, dword ptr [ebp - 0x530] */ r_esi = R32((u32)(r_ebp+0xfffffad0u));
    /* 0079c6f7: mov edx, dword ptr [0xaaecf8] */ r_edx = R32((u32)(0xaaecf8u));
    /* 0079c6fd: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0079c700: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c702: je 0x79c9ef */ if (fZ) goto L_0079c9ef;
L_0079c708:; BB(0x0079c708);
    /* 0079c708: movzx edx, word ptr [ecx + 0xa] */ r_edx = (u32)R16((u32)(r_ecx+0xau));
    /* 0079c70c: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c70e: je 0x79ca04 */ if (fZ) goto L_0079ca04;
L_0079c714:; BB(0x0079c714);
    /* 0079c714: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0079c717: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c719: jne 0x79c708 */ if (!fZ) goto L_0079c708;
L_0079c71b:; BB(0x0079c71b);
    /* 0079c71b: jmp 0x79c9ef */ goto L_0079c9ef;
L_0079c720:; BB(0x0079c720);
    /* 0079c720: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 0079c725: cmp eax, dword ptr [0xa9c4dc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c72b: jne 0x79c8c3 */ if (!fZ) goto L_0079c8c3;
L_0079c731:; BB(0x0079c731);
    /* 0079c731: mov eax, dword ptr [ebp - 0x530] */ r_eax = R32((u32)(r_ebp+0xfffffad0u));
    /* 0079c737: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079c738: call 0x79cc64 */ r_esp -= 4; W32(r_esp, 0x79c73du); f_0079cc64();
    /* 0079c73d: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c742: mov eax, dword ptr [ebp - 0x530] */ r_eax = R32((u32)(r_ebp+0xfffffad0u));
    /* 0079c748: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0079c74b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79c750u); f_008581c5();
    /* 0079c750: mov esi, eax */ r_esi = r_eax;
    /* 0079c752: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079c755: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c757: je 0x79c7f4 */ if (fZ) goto L_0079c7f4;
L_0079c75d:; BB(0x0079c75d);
    /* 0079c75d: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c762: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c764: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079c765: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x79c76au); f_0086b5cc();
    /* 0079c76a: push 0x7230 */ { u32 v = 0x7230u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c76f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79c774u); f_008581c5();
    /* 0079c774: mov ebx, eax */ r_ebx = r_eax;
    /* 0079c776: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079c779: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c77b: je 0x79c7ed */ if (fZ) goto L_0079c7ed;
L_0079c77d:; BB(0x0079c77d);
    /* 0079c77d: mov edi, dword ptr [0xab02b8] */ r_edi = R32((u32)(0xab02b8u));
    /* 0079c783: mov edx, dword ptr [0xab02b0] */ r_edx = R32((u32)(0xab02b0u));
    /* 0079c789: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0079c78c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079c78e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079c790: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0079c793: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079c795: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0079c798: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 0079c79d: mul edi */ { u64 t = (u64)r_eax * r_edi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0079c79f: mov edi, edx */ r_edi = r_edx;
    /* 0079c7a1: shr edi, 3 */ { u32 c = (3u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0079c7a4: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0079c7a7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079c7a9: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0079c7ac: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079c7ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079c7af: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79c7b4u); f_008581c5();
    /* 0079c7b4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0079c7b7: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0079c7ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079c7bb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0079c7be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079c7bf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0079c7c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079c7c3: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x79c7c8u); f_0086b6b8();
    /* 0079c7c8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079c7cb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0079c7cd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0079c7cf: jbe 0x79ca17 */ if ((fC||fZ)) goto L_0079ca17;
L_0079c7d5:; BB(0x0079c7d5);
    /* 0079c7d5: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0079c7d8: jb 0x79ca10 */ if (fC) goto L_0079ca10;
L_0079c7de:; BB(0x0079c7de);
    /* 0079c7de: lea eax, [edi - 6] */ r_eax = (u32)(r_edi+0xfffffffau);
L_0079c7e1:; BB(0x0079c7e1);
    /* 0079c7e1: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079c7e4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0079c7e6: jbe 0x79c7e1 */ if ((fC||fZ)) goto L_0079c7e1;
L_0079c7e8:; BB(0x0079c7e8);
    /* 0079c7e8: jmp 0x79ca10 */ goto L_0079ca10;
L_0079c7ed:; BB(0x0079c7ed);
    /* 0079c7ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079c7ee: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79c7f3u); f_00857e98();
    /* 0079c7f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0079c7f4:; BB(0x0079c7f4);
    /* 0079c7f4: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c7f9: mov eax, dword ptr [ebp - 0x530] */ r_eax = R32((u32)(r_ebp+0xfffffad0u));
    /* 0079c7ff: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0079c802: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79c807u); f_008581c5();
    /* 0079c807: mov esi, eax */ r_esi = r_eax;
    /* 0079c809: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079c80c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c80e: je 0x79c897 */ if (fZ) goto L_0079c897;
L_0079c814:; BB(0x0079c814);
    /* 0079c814: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c819: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c81b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079c81c: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x79c821u); f_0086b5cc();
    /* 0079c821: push 0x7230 */ { u32 v = 0x7230u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c826: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79c82bu); f_008581c5();
    /* 0079c82b: mov ebx, eax */ r_ebx = r_eax;
    /* 0079c82d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079c830: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c832: je 0x79c890 */ if (fZ) goto L_0079c890;
L_0079c834:; BB(0x0079c834);
    /* 0079c834: mov edi, dword ptr [0xab02bc] */ r_edi = R32((u32)(0xab02bcu));
    /* 0079c83a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0079c83d: mov edi, dword ptr [0xab02b4] */ r_edi = R32((u32)(0xab02b4u));
    /* 0079c843: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079c845: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079c847: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0079c84a: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0079c84d: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0079c850: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079c852: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079c853: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79c858u); f_008581c5();
    /* 0079c858: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0079c85b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0079c85e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079c85f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0079c862: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079c863: mov edx, eax */ r_edx = r_eax;
    /* 0079c865: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079c866: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x79c86bu); f_0086b6b8();
    /* 0079c86b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079c86e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079c870: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c872: je 0x79ca70 */ if (fZ) goto L_0079ca70;
L_0079c878:; BB(0x0079c878);
    /* 0079c878: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0079c87b: jb 0x79ca69 */ if (fC) goto L_0079ca69;
L_0079c881:; BB(0x0079c881);
    /* 0079c881: lea edx, [edi - 6] */ r_edx = (u32)(r_edi+0xfffffffau);
L_0079c884:; BB(0x0079c884);
    /* 0079c884: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079c887: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0079c889: jbe 0x79c884 */ if ((fC||fZ)) goto L_0079c884;
L_0079c88b:; BB(0x0079c88b);
    /* 0079c88b: jmp 0x79ca69 */ goto L_0079ca69;
L_0079c890:; BB(0x0079c890);
    /* 0079c890: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079c891: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79c896u); f_00857e98();
    /* 0079c896: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0079c897:; BB(0x0079c897);
    /* 0079c897: mov eax, dword ptr [ebp - 0x530] */ r_eax = R32((u32)(r_ebp+0xfffffad0u));
    /* 0079c89d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079c89e: call 0x79cd30 */ r_esp -= 4; W32(r_esp, 0x79c8a3u); f_0079cd30();
    /* 0079c8a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079c8a4: mov eax, dword ptr [ebp - 0x530] */ r_eax = R32((u32)(r_ebp+0xfffffad0u));
    /* 0079c8aa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079c8ab: call 0x79ce2c */ r_esp -= 4; W32(r_esp, 0x79c8b0u); f_0079ce2c();
    /* 0079c8b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079c8b1: mov eax, dword ptr [ebp - 0x530] */ r_eax = R32((u32)(r_ebp+0xfffffad0u));
    /* 0079c8b7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079c8b8: call 0x79ce78 */ r_esp -= 4; W32(r_esp, 0x79c8bdu); f_0079ce78();
    /* 0079c8bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079c8be: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
L_0079c8c3:; BB(0x0079c8c3);
    /* 0079c8c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079c8c4: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x79c8c9u); f_0068d5a8();
    /* 0079c8c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079c8ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c8cc: je 0x79c8f2 */ if (fZ) goto L_0079c8f2;
L_0079c8ce:; BB(0x0079c8ce);
    /* 0079c8ce: mov eax, dword ptr [ebp - 0x530] */ r_eax = R32((u32)(r_ebp+0xfffffad0u));
    /* 0079c8d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079c8d5: call 0x79ce9c */ r_esp -= 4; W32(r_esp, 0x79c8dau); f_0079ce9c();
    /* 0079c8da: push dword ptr [ebp - 0x530] */ { u32 v = R32((u32)(r_ebp+0xfffffad0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079c8e0: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x79c8e5u); f_0068d5a8();
    /* 0079c8e5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079c8e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c8ea: je 0x79cac2 */ if (fZ) goto L_0079cac2;
L_0079c8f0:; BB(0x0079c8f0);
    /* 0079c8f0: jmp 0x79c92f */ goto L_0079c92f;
L_0079c8f2:; BB(0x0079c8f2);
    /* 0079c8f2: mov eax, dword ptr [ebp - 0x530] */ r_eax = R32((u32)(r_ebp+0xfffffad0u));
    /* 0079c8f8: mov dword ptr [eax*4 + 0xaab28c], 1 */ W32((u32)(r_eax*4+0xaab28cu), 0x1u);
    /* 0079c903: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0079c906: lea ebx, [eax + edx*8] */ r_ebx = (u32)(r_eax+r_edx*8);
    /* 0079c909: lea esi, [ebp - 0x54c] */ r_esi = (u32)(r_ebp+0xfffffab4u);
    /* 0079c90f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079c911: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079c913: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079c915: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079c917: mov ecx, 0x520 */ r_ecx = 0x520u;
    /* 0079c91c: lea edi, [ebx + ebx + 0xaa6d40] */ r_edi = (u32)(r_ebx+r_ebx+0xaa6d40u);
    /* 0079c923: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079c924: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0079c927: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0079c929: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079c92a: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0079c92d: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
L_0079c92f:; BB(0x0079c92f);
    /* 0079c92f: lea eax, [ebp - 0x54c] */ r_eax = (u32)(r_ebp+0xfffffab4u);
    /* 0079c935: mov dword ptr [ebp - 0x570], eax */ W32((u32)(r_ebp+0xfffffa90u), r_eax);
    /* 0079c93b: lea eax, [ebp - 0x508] */ r_eax = (u32)(r_ebp+0xfffffaf8u);
    /* 0079c941: mov dword ptr [ebp - 0x568], eax */ W32((u32)(r_ebp+0xfffffa98u), r_eax);
    /* 0079c947: lea eax, [ebp - 0x128] */ r_eax = (u32)(r_ebp+0xfffffed8u);
    /* 0079c94d: mov dword ptr [ebp - 0x560], eax */ W32((u32)(r_ebp+0xfffffaa0u), r_eax);
    /* 0079c953: lea eax, [ebp - 0xb4] */ r_eax = (u32)(r_ebp+0xffffff4cu);
    /* 0079c959: mov dword ptr [ebp - 0x558], eax */ W32((u32)(r_ebp+0xfffffaa8u), r_eax);
    /* 0079c95f: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 0079c966: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c96b: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 0079c96e: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079c970: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c972: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079c973: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x79c978u); f_008586d6();
    /* 0079c978: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0079c97f: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c984: lea eax, [ebp - 0xb0] */ r_eax = (u32)(r_ebp+0xffffff50u);
    /* 0079c98a: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079c98c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c98e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079c98f: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x79c994u); f_008586d6();
    /* 0079c994: lea eax, [ebp - 0x128] */ r_eax = (u32)(r_ebp+0xfffffed8u);
    /* 0079c99a: mov dword ptr [ebp - 0x550], eax */ W32((u32)(r_ebp+0xfffffab0u), r_eax);
    /* 0079c9a0: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 0079c9a7: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c9ac: lea eax, [ebp - 0xec] */ r_eax = (u32)(r_ebp+0xffffff14u);
    /* 0079c9b2: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079c9b4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c9b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079c9b7: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x79c9bcu); f_008586d6();
    /* 0079c9bc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0079c9c3: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c9c8: lea eax, [ebp - 0x124] */ r_eax = (u32)(r_ebp+0xfffffedcu);
    /* 0079c9ce: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079c9d0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c9d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079c9d3: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x79c9d8u); f_008586d6();
L_0079c9d8:; BB(0x0079c9d8);
    /* 0079c9d8: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0079c9db: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0079c9de: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0079c9e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0079c9e4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0079c9eb: mov esp, ebp */ r_esp = r_ebp;
    /* 0079c9ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079c9ee: ret  */ FN_RET(0x0079c4bc); r_esp += 4; return;
L_0079c9ef:; BB(0x0079c9ef);
    /* 0079c9ef: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c9f1: je 0x79c720 */ if (fZ) goto L_0079c720;
L_0079c9f7:; BB(0x0079c9f7);
    /* 0079c9f7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c9f9: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0079c9fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0079c9fd: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x79c9ffu); call_ind(t); }
    /* 0079c9ff: jmp 0x79c720 */ goto L_0079c720;
L_0079ca04:; BB(0x0079ca04);
    /* 0079ca04: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ca06: je 0x79c9ef */ if (fZ) goto L_0079c9ef;
L_0079ca08:; BB(0x0079ca08);
    /* 0079ca08: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ca0a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0079ca0c: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x79ca0eu); call_ind(t); }
    /* 0079ca0e: jmp 0x79c9ef */ goto L_0079c9ef;
L_0079ca10:; BB(0x0079ca10);
    /* 0079ca10: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079ca13: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0079ca15: jb 0x79ca10 */ if (fC) goto L_0079ca10;
L_0079ca17:; BB(0x0079ca17);
    /* 0079ca17: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0079ca1a: lea edx, [esi + 8] */ r_edx = (u32)(r_esi+0x8u);
    /* 0079ca1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ca1e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0079ca20: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0079ca23: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079ca24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ca25: call 0x7a47dc */ r_esp -= 4; W32(r_esp, 0x79ca2au); f_007a47dc();
    /* 0079ca2a: mov edi, eax */ r_edi = r_eax;
    /* 0079ca2c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0079ca2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ca30: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79ca35u); f_00857e98();
    /* 0079ca35: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ca36: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79ca3bu); f_00857e98();
    /* 0079ca3b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079ca3e: mov byte ptr [esi], 0x6b */ W8((u32)(r_esi), 0x6bu);
    /* 0079ca41: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0079ca43: mov byte ptr [esi + 1], dl */ W8((u32)(r_esi+0x1u), (u8)r_edx);
    /* 0079ca46: mov word ptr [esi + 2], dx */ W16((u32)(r_esi+0x2u), (u16)r_edx);
    /* 0079ca4a: add edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079ca4d: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0079ca50: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079ca52: lea ebx, [edi + edi + 8] */ r_ebx = (u32)(r_edi+r_edi+0x8u);
    /* 0079ca56: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0079ca59: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079ca5a: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 0079ca5d: mov ecx, esi */ r_ecx = r_esi;
    /* 0079ca5f: call 0x8005e0 */ r_esp -= 4; W32(r_esp, 0x79ca64u); f_008005e0();
    /* 0079ca64: jmp 0x79c7ed */ goto L_0079c7ed;
L_0079ca69:; BB(0x0079ca69);
    /* 0079ca69: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079ca6c: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0079ca6e: jb 0x79ca69 */ if (fC) goto L_0079ca69;
L_0079ca70:; BB(0x0079ca70);
    /* 0079ca70: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0079ca73: lea edx, [esi + 8] */ r_edx = (u32)(r_esi+0x8u);
    /* 0079ca76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ca77: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0079ca79: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0079ca7c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079ca7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ca7e: call 0x7a47dc */ r_esp -= 4; W32(r_esp, 0x79ca83u); f_007a47dc();
    /* 0079ca83: mov edi, eax */ r_edi = r_eax;
    /* 0079ca85: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0079ca88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ca89: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79ca8eu); f_00857e98();
    /* 0079ca8e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ca8f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79ca94u); f_00857e98();
    /* 0079ca94: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079ca97: mov byte ptr [esi], 0x6c */ W8((u32)(r_esi), 0x6cu);
    /* 0079ca9a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0079ca9c: mov byte ptr [esi + 1], dl */ W8((u32)(r_esi+0x1u), (u8)r_edx);
    /* 0079ca9f: mov word ptr [esi + 2], dx */ W16((u32)(r_esi+0x2u), (u16)r_edx);
    /* 0079caa3: add edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079caa6: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0079caa9: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079caab: lea ebx, [edi + edi + 8] */ r_ebx = (u32)(r_edi+r_edi+0x8u);
    /* 0079caaf: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0079cab2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079cab3: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 0079cab6: mov ecx, esi */ r_ecx = r_esi;
    /* 0079cab8: call 0x8005e0 */ r_esp -= 4; W32(r_esp, 0x79cabdu); f_008005e0();
    /* 0079cabd: jmp 0x79c890 */ goto L_0079c890;
L_0079cac2:; BB(0x0079cac2);
    /* 0079cac2: lea eax, [ebp - 0x508] */ r_eax = (u32)(r_ebp+0xfffffaf8u);
    /* 0079cac8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079cac9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cacb: push dword ptr [ebp - 0x530] */ { u32 v = R32((u32)(r_ebp+0xfffffad0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079cad1: call 0x686258 */ r_esp -= 4; W32(r_esp, 0x79cad6u); f_00686258();
    /* 0079cad6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079cad9: mov edx, dword ptr [ebp - 0x54c] */ r_edx = R32((u32)(r_ebp+0xfffffab4u));
    /* 0079cadf: mov ebx, dword ptr [ebp - 0x548] */ r_ebx = R32((u32)(r_ebp+0xfffffab8u));
    /* 0079cae5: mov esi, dword ptr [ebp - 0x50c] */ r_esi = R32((u32)(r_ebp+0xfffffaf4u));
    /* 0079caeb: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 0079caed: mov dword ptr [eax + 0xeb0], edx */ W32((u32)(r_eax+0xeb0u), r_edx);
    /* 0079caf3: mov dword ptr [eax + 0xeb4], ebx */ W32((u32)(r_eax+0xeb4u), r_ebx);
    /* 0079caf9: mov dword ptr [eax + 0xeb8], esi */ W32((u32)(r_eax+0xeb8u), r_esi);
    /* 0079caff: mov ecx, eax */ r_ecx = r_eax;
    /* 0079cb01: call dword ptr [edi + 0x18] */ { u32 t = R32((u32)(r_edi+0x18u)); r_esp -= 4; W32(r_esp, 0x79cb04u); call_ind(t); }
    /* 0079cb04: jmp 0x79c92f */ goto L_0079c92f;
}

void f_0079c4d8(void)
{
    FN_ENTER(0x0079c4d8);
    /* 0079c4d8: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 0079c4da: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0079c4dd: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 0079c4e0: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 0079c4e3: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 0079c4e6: mov eax, dword ptr [0xaab218] */ r_eax = R32((u32)(0xaab218u));
    /* 0079c4eb: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c4ee: je 0x79c4f9 */ if (fZ) goto L_0079c4f9;
L_0079c4f0:; BB(0x0079c4f0);
    /* 0079c4f0: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079c4f3: jne 0x79c9d8 */ if (!fZ) goto L_0079c9d8;
L_0079c4f9:; BB(0x0079c4f9);
    /* 0079c4f9: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0079c4fc: lea edi, [ebp - 0x54c] */ r_edi = (u32)(r_ebp+0xfffffab4u);
    /* 0079c502: mov ecx, 0x520 */ r_ecx = 0x520u;
    /* 0079c507: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079c508: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0079c50b: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0079c50d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079c50e: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0079c511: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0079c513: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0079c51a: mov eax, dword ptr [ebp - 0x530] */ r_eax = R32((u32)(r_ebp+0xfffffad0u));
    /* 0079c520: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c526: jne 0x79c5ec */ if (!fZ) goto L_0079c5ec;
L_0079c52c:; BB(0x0079c52c);
    /* 0079c52c: lea eax, [ebp - 0x54c] */ r_eax = (u32)(r_ebp+0xfffffab4u);
    /* 0079c532: mov dword ptr [ebp - 0x598], eax */ W32((u32)(r_ebp+0xfffffa68u), r_eax);
    /* 0079c538: lea eax, [ebp - 0x508] */ r_eax = (u32)(r_ebp+0xfffffaf8u);
    /* 0079c53e: mov dword ptr [ebp - 0x590], eax */ W32((u32)(r_ebp+0xfffffa70u), r_eax);
    /* 0079c544: lea eax, [ebp - 0x128] */ r_eax = (u32)(r_ebp+0xfffffed8u);
    /* 0079c54a: mov dword ptr [ebp - 0x588], eax */ W32((u32)(r_ebp+0xfffffa78u), r_eax);
    /* 0079c550: lea eax, [ebp - 0xb4] */ r_eax = (u32)(r_ebp+0xffffff4cu);
    /* 0079c556: mov dword ptr [ebp - 0x580], eax */ W32((u32)(r_ebp+0xfffffa80u), r_eax);
    /* 0079c55c: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0079c563: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c568: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 0079c56b: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079c56d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c56f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079c570: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x79c575u); f_008586d6();
    /* 0079c575: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0079c57c: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c581: lea eax, [ebp - 0xb0] */ r_eax = (u32)(r_ebp+0xffffff50u);
    /* 0079c587: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079c589: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c58b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079c58c: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x79c591u); f_008586d6();
    /* 0079c591: lea eax, [ebp - 0x128] */ r_eax = (u32)(r_ebp+0xfffffed8u);
    /* 0079c597: mov dword ptr [ebp - 0x578], eax */ W32((u32)(r_ebp+0xfffffa88u), r_eax);
    /* 0079c59d: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0079c5a4: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c5a9: lea eax, [ebp - 0xec] */ r_eax = (u32)(r_ebp+0xffffff14u);
    /* 0079c5af: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079c5b1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c5b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079c5b4: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x79c5b9u); f_008586d6();
    /* 0079c5b9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0079c5c0: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c5c5: lea eax, [ebp - 0x124] */ r_eax = (u32)(r_ebp+0xfffffedcu);
    /* 0079c5cb: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079c5cd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c5cf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079c5d0: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x79c5d5u); f_008586d6();
    /* 0079c5d5: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0079c5d8: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0079c5db: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0079c5de: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0079c5e1: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0079c5e8: mov esp, ebp */ r_esp = r_ebp;
    /* 0079c5ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079c5eb: ret  */ FN_RET(0x0079c4d8); r_esp += 4; return;
L_0079c5ec:; BB(0x0079c5ec);
    /* 0079c5ec: lea edx, [ebp - 0x54c] */ r_edx = (u32)(r_ebp+0xfffffab4u);
    /* 0079c5f2: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079c5f5: call 0x79cbd8 */ r_esp -= 4; W32(r_esp, 0x79c5fau); f_0079cbd8();
    /* 0079c5fa: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 0079c5fd: mov dword ptr [0xaab27c], eax */ W32((u32)(0xaab27cu), r_eax);
    /* 0079c602: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c604: call 0x793168 */ r_esp -= 4; W32(r_esp, 0x79c609u); f_00793168();
    /* 0079c609: lea edx, [ebp - 0x52c] */ r_edx = (u32)(r_ebp+0xfffffad4u);
    /* 0079c60f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079c610: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079c611: push 0xa9d560 */ { u32 v = 0xa9d560u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c616: call 0x857e29 */ r_esp -= 4; W32(r_esp, 0x79c61bu); f_00857e29();
    /* 0079c61b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079c61e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079c61f: mov eax, 0xa9d560 */ r_eax = 0xa9d560u;
    /* 0079c624: call 0x79a8c4 */ r_esp -= 4; W32(r_esp, 0x79c629u); f_0079a8c4();
    /* 0079c629: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079c62a: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 0079c630: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c632: je 0x79c644 */ if (fZ) goto L_0079c644;
L_0079c634:; BB(0x0079c634);
    /* 0079c634: call 0x73b0f0 */ r_esp -= 4; W32(r_esp, 0x79c639u); f_0073b0f0();
    /* 0079c639: mov ecx, dword ptr [0xaab264] */ r_ecx = R32((u32)(0xaab264u));
    /* 0079c63f: call 0x712c00 */ r_esp -= 4; W32(r_esp, 0x79c644u); f_00712c00();
L_0079c644:; BB(0x0079c644);
    /* 0079c644: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0079c649: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x79c64eu); f_0061cdb0();
    /* 0079c64e: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0079c653: call 0x81888c */ r_esp -= 4; W32(r_esp, 0x79c658u); f_0081888c();
    /* 0079c658: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0079c65d: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x79c662u); f_00817604();
    /* 0079c662: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0079c667: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x79c66cu); f_00818f80();
    /* 0079c66c: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x79c671u); f_0080030c();
    /* 0079c671: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0079c676: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x79c67bu); f_0061cdb0();
    /* 0079c67b: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0079c680: call 0x81888c */ r_esp -= 4; W32(r_esp, 0x79c685u); f_0081888c();
    /* 0079c685: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0079c68a: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x79c68fu); f_00817604();
    /* 0079c68f: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0079c694: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x79c699u); f_00818f80();
    /* 0079c699: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x79c69eu); f_0080030c();
    /* 0079c69e: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0079c6a3: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x79c6a8u); f_0061cdb0();
    /* 0079c6a8: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0079c6ad: call 0x81888c */ r_esp -= 4; W32(r_esp, 0x79c6b2u); f_0081888c();
    /* 0079c6b2: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0079c6b7: call 0x817604 */ r_esp -= 4; W32(r_esp, 0x79c6bcu); f_00817604();
    /* 0079c6bc: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0079c6c1: call 0x818f80 */ r_esp -= 4; W32(r_esp, 0x79c6c6u); f_00818f80();
    /* 0079c6c6: call 0x80030c */ r_esp -= 4; W32(r_esp, 0x79c6cbu); f_0080030c();
    /* 0079c6cb: mov ecx, 0xaca2e4 */ r_ecx = 0xaca2e4u;
    /* 0079c6d0: call 0x8183b4 */ r_esp -= 4; W32(r_esp, 0x79c6d5u); f_008183b4();
    /* 0079c6d5: push dword ptr [ebp - 0x530] */ { u32 v = R32((u32)(r_ebp+0xfffffad0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079c6db: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0079c6de: mov dword ptr [0xa9c4dc], eax */ W32((u32)(0xa9c4dcu), r_eax);
    /* 0079c6e3: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x79c6e8u); f_0068d5a8();
    /* 0079c6e8: mov ebx, eax */ r_ebx = r_eax;
    /* 0079c6ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079c6ed: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c6ef: je 0x79c720 */ if (fZ) goto L_0079c720;
L_0079c6f1:; BB(0x0079c6f1);
    /* 0079c6f1: mov esi, dword ptr [ebp - 0x530] */ r_esi = R32((u32)(r_ebp+0xfffffad0u));
    /* 0079c6f7: mov edx, dword ptr [0xaaecf8] */ r_edx = R32((u32)(0xaaecf8u));
    /* 0079c6fd: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0079c700: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c702: je 0x79c9ef */ if (fZ) goto L_0079c9ef;
L_0079c708:; BB(0x0079c708);
    /* 0079c708: movzx edx, word ptr [ecx + 0xa] */ r_edx = (u32)R16((u32)(r_ecx+0xau));
    /* 0079c70c: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c70e: je 0x79ca04 */ if (fZ) goto L_0079ca04;
L_0079c714:; BB(0x0079c714);
    /* 0079c714: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0079c717: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c719: jne 0x79c708 */ if (!fZ) goto L_0079c708;
L_0079c71b:; BB(0x0079c71b);
    /* 0079c71b: jmp 0x79c9ef */ goto L_0079c9ef;
L_0079c720:; BB(0x0079c720);
    /* 0079c720: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 0079c725: cmp eax, dword ptr [0xa9c4dc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c72b: jne 0x79c8c3 */ if (!fZ) goto L_0079c8c3;
L_0079c731:; BB(0x0079c731);
    /* 0079c731: mov eax, dword ptr [ebp - 0x530] */ r_eax = R32((u32)(r_ebp+0xfffffad0u));
    /* 0079c737: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079c738: call 0x79cc64 */ r_esp -= 4; W32(r_esp, 0x79c73du); f_0079cc64();
    /* 0079c73d: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c742: mov eax, dword ptr [ebp - 0x530] */ r_eax = R32((u32)(r_ebp+0xfffffad0u));
    /* 0079c748: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0079c74b: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79c750u); f_008581c5();
    /* 0079c750: mov esi, eax */ r_esi = r_eax;
    /* 0079c752: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079c755: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c757: je 0x79c7f4 */ if (fZ) goto L_0079c7f4;
L_0079c75d:; BB(0x0079c75d);
    /* 0079c75d: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c762: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c764: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079c765: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x79c76au); f_0086b5cc();
    /* 0079c76a: push 0x7230 */ { u32 v = 0x7230u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c76f: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79c774u); f_008581c5();
    /* 0079c774: mov ebx, eax */ r_ebx = r_eax;
    /* 0079c776: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079c779: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c77b: je 0x79c7ed */ if (fZ) goto L_0079c7ed;
L_0079c77d:; BB(0x0079c77d);
    /* 0079c77d: mov edi, dword ptr [0xab02b8] */ r_edi = R32((u32)(0xab02b8u));
    /* 0079c783: mov edx, dword ptr [0xab02b0] */ r_edx = R32((u32)(0xab02b0u));
    /* 0079c789: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0079c78c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079c78e: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079c790: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 0079c793: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079c795: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0079c798: mov eax, 0xaaaaaaab */ r_eax = 0xaaaaaaabu;
    /* 0079c79d: mul edi */ { u64 t = (u64)r_eax * r_edi; r_eax = (u32)t; r_edx = (u32)(t >> 32); fC = fO = (r_edx != 0); }
    /* 0079c79f: mov edi, edx */ r_edi = r_edx;
    /* 0079c7a1: shr edi, 3 */ { u32 c = (3u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0079c7a4: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 0079c7a7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079c7a9: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 0079c7ac: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079c7ae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079c7af: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79c7b4u); f_008581c5();
    /* 0079c7b4: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0079c7b7: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0079c7ba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079c7bb: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0079c7be: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079c7bf: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0079c7c2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079c7c3: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x79c7c8u); f_0086b6b8();
    /* 0079c7c8: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079c7cb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0079c7cd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0079c7cf: jbe 0x79ca17 */ if ((fC||fZ)) goto L_0079ca17;
L_0079c7d5:; BB(0x0079c7d5);
    /* 0079c7d5: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0079c7d8: jb 0x79ca10 */ if (fC) goto L_0079ca10;
L_0079c7de:; BB(0x0079c7de);
    /* 0079c7de: lea eax, [edi - 6] */ r_eax = (u32)(r_edi+0xfffffffau);
L_0079c7e1:; BB(0x0079c7e1);
    /* 0079c7e1: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079c7e4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0079c7e6: jbe 0x79c7e1 */ if ((fC||fZ)) goto L_0079c7e1;
L_0079c7e8:; BB(0x0079c7e8);
    /* 0079c7e8: jmp 0x79ca10 */ goto L_0079ca10;
L_0079c7ed:; BB(0x0079c7ed);
    /* 0079c7ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079c7ee: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79c7f3u); f_00857e98();
    /* 0079c7f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0079c7f4:; BB(0x0079c7f4);
    /* 0079c7f4: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c7f9: mov eax, dword ptr [ebp - 0x530] */ r_eax = R32((u32)(r_ebp+0xfffffad0u));
    /* 0079c7ff: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0079c802: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79c807u); f_008581c5();
    /* 0079c807: mov esi, eax */ r_esi = r_eax;
    /* 0079c809: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079c80c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c80e: je 0x79c897 */ if (fZ) goto L_0079c897;
L_0079c814:; BB(0x0079c814);
    /* 0079c814: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c819: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c81b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079c81c: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x79c821u); f_0086b5cc();
    /* 0079c821: push 0x7230 */ { u32 v = 0x7230u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c826: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79c82bu); f_008581c5();
    /* 0079c82b: mov ebx, eax */ r_ebx = r_eax;
    /* 0079c82d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079c830: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c832: je 0x79c890 */ if (fZ) goto L_0079c890;
L_0079c834:; BB(0x0079c834);
    /* 0079c834: mov edi, dword ptr [0xab02bc] */ r_edi = R32((u32)(0xab02bcu));
    /* 0079c83a: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 0079c83d: mov edi, dword ptr [0xab02b4] */ r_edi = R32((u32)(0xab02b4u));
    /* 0079c843: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079c845: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079c847: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0079c84a: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0079c84d: lea edx, [edi + edi] */ r_edx = (u32)(r_edi+r_edi);
    /* 0079c850: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079c852: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079c853: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79c858u); f_008581c5();
    /* 0079c858: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0079c85b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0079c85e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079c85f: mov edx, dword ptr [ebp - 0x20] */ r_edx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0079c862: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079c863: mov edx, eax */ r_edx = r_eax;
    /* 0079c865: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079c866: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x79c86bu); f_0086b6b8();
    /* 0079c86b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079c86e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0079c870: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c872: je 0x79ca70 */ if (fZ) goto L_0079ca70;
L_0079c878:; BB(0x0079c878);
    /* 0079c878: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0079c87b: jb 0x79ca69 */ if (fC) goto L_0079ca69;
L_0079c881:; BB(0x0079c881);
    /* 0079c881: lea edx, [edi - 6] */ r_edx = (u32)(r_edi+0xfffffffau);
L_0079c884:; BB(0x0079c884);
    /* 0079c884: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079c887: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0079c889: jbe 0x79c884 */ if ((fC||fZ)) goto L_0079c884;
L_0079c88b:; BB(0x0079c88b);
    /* 0079c88b: jmp 0x79ca69 */ goto L_0079ca69;
L_0079c890:; BB(0x0079c890);
    /* 0079c890: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079c891: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79c896u); f_00857e98();
    /* 0079c896: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0079c897:; BB(0x0079c897);
    /* 0079c897: mov eax, dword ptr [ebp - 0x530] */ r_eax = R32((u32)(r_ebp+0xfffffad0u));
    /* 0079c89d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079c89e: call 0x79cd30 */ r_esp -= 4; W32(r_esp, 0x79c8a3u); f_0079cd30();
    /* 0079c8a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079c8a4: mov eax, dword ptr [ebp - 0x530] */ r_eax = R32((u32)(r_ebp+0xfffffad0u));
    /* 0079c8aa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079c8ab: call 0x79ce2c */ r_esp -= 4; W32(r_esp, 0x79c8b0u); f_0079ce2c();
    /* 0079c8b0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079c8b1: mov eax, dword ptr [ebp - 0x530] */ r_eax = R32((u32)(r_ebp+0xfffffad0u));
    /* 0079c8b7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079c8b8: call 0x79ce78 */ r_esp -= 4; W32(r_esp, 0x79c8bdu); f_0079ce78();
    /* 0079c8bd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079c8be: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
L_0079c8c3:; BB(0x0079c8c3);
    /* 0079c8c3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079c8c4: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x79c8c9u); f_0068d5a8();
    /* 0079c8c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079c8ca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c8cc: je 0x79c8f2 */ if (fZ) goto L_0079c8f2;
L_0079c8ce:; BB(0x0079c8ce);
    /* 0079c8ce: mov eax, dword ptr [ebp - 0x530] */ r_eax = R32((u32)(r_ebp+0xfffffad0u));
    /* 0079c8d4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079c8d5: call 0x79ce9c */ r_esp -= 4; W32(r_esp, 0x79c8dau); f_0079ce9c();
    /* 0079c8da: push dword ptr [ebp - 0x530] */ { u32 v = R32((u32)(r_ebp+0xfffffad0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079c8e0: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x79c8e5u); f_0068d5a8();
    /* 0079c8e5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079c8e8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c8ea: je 0x79cac2 */ if (fZ) goto L_0079cac2;
L_0079c8f0:; BB(0x0079c8f0);
    /* 0079c8f0: jmp 0x79c92f */ goto L_0079c92f;
L_0079c8f2:; BB(0x0079c8f2);
    /* 0079c8f2: mov eax, dword ptr [ebp - 0x530] */ r_eax = R32((u32)(r_ebp+0xfffffad0u));
    /* 0079c8f8: mov dword ptr [eax*4 + 0xaab28c], 1 */ W32((u32)(r_eax*4+0xaab28cu), 0x1u);
    /* 0079c903: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 0079c906: lea ebx, [eax + edx*8] */ r_ebx = (u32)(r_eax+r_edx*8);
    /* 0079c909: lea esi, [ebp - 0x54c] */ r_esi = (u32)(r_ebp+0xfffffab4u);
    /* 0079c90f: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079c911: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079c913: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079c915: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079c917: mov ecx, 0x520 */ r_ecx = 0x520u;
    /* 0079c91c: lea edi, [ebx + ebx + 0xaa6d40] */ r_edi = (u32)(r_ebx+r_ebx+0xaa6d40u);
    /* 0079c923: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079c924: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0079c927: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0079c929: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079c92a: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0079c92d: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
L_0079c92f:; BB(0x0079c92f);
    /* 0079c92f: lea eax, [ebp - 0x54c] */ r_eax = (u32)(r_ebp+0xfffffab4u);
    /* 0079c935: mov dword ptr [ebp - 0x570], eax */ W32((u32)(r_ebp+0xfffffa90u), r_eax);
    /* 0079c93b: lea eax, [ebp - 0x508] */ r_eax = (u32)(r_ebp+0xfffffaf8u);
    /* 0079c941: mov dword ptr [ebp - 0x568], eax */ W32((u32)(r_ebp+0xfffffa98u), r_eax);
    /* 0079c947: lea eax, [ebp - 0x128] */ r_eax = (u32)(r_ebp+0xfffffed8u);
    /* 0079c94d: mov dword ptr [ebp - 0x560], eax */ W32((u32)(r_ebp+0xfffffaa0u), r_eax);
    /* 0079c953: lea eax, [ebp - 0xb4] */ r_eax = (u32)(r_ebp+0xffffff4cu);
    /* 0079c959: mov dword ptr [ebp - 0x558], eax */ W32((u32)(r_ebp+0xfffffaa8u), r_eax);
    /* 0079c95f: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 0079c966: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c96b: lea eax, [ebp - 0x78] */ r_eax = (u32)(r_ebp+0xffffff88u);
    /* 0079c96e: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079c970: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c972: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079c973: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x79c978u); f_008586d6();
    /* 0079c978: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0079c97f: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c984: lea eax, [ebp - 0xb0] */ r_eax = (u32)(r_ebp+0xffffff50u);
    /* 0079c98a: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079c98c: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c98e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079c98f: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x79c994u); f_008586d6();
    /* 0079c994: lea eax, [ebp - 0x128] */ r_eax = (u32)(r_ebp+0xfffffed8u);
    /* 0079c99a: mov dword ptr [ebp - 0x550], eax */ W32((u32)(r_ebp+0xfffffab0u), r_eax);
    /* 0079c9a0: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 0079c9a7: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c9ac: lea eax, [ebp - 0xec] */ r_eax = (u32)(r_ebp+0xffffff14u);
    /* 0079c9b2: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079c9b4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c9b6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079c9b7: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x79c9bcu); f_008586d6();
    /* 0079c9bc: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0079c9c3: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c9c8: lea eax, [ebp - 0x124] */ r_eax = (u32)(r_ebp+0xfffffedcu);
    /* 0079c9ce: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079c9d0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c9d2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079c9d3: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x79c9d8u); f_008586d6();
L_0079c9d8:; BB(0x0079c9d8);
    /* 0079c9d8: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0079c9db: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0079c9de: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0079c9e1: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0079c9e4: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0079c9eb: mov esp, ebp */ r_esp = r_ebp;
    /* 0079c9ed: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079c9ee: ret  */ FN_RET(0x0079c4d8); r_esp += 4; return;
L_0079c9ef:; BB(0x0079c9ef);
    /* 0079c9ef: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079c9f1: je 0x79c720 */ if (fZ) goto L_0079c720;
L_0079c9f7:; BB(0x0079c9f7);
    /* 0079c9f7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079c9f9: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0079c9fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0079c9fd: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x79c9ffu); call_ind(t); }
    /* 0079c9ff: jmp 0x79c720 */ goto L_0079c720;
L_0079ca04:; BB(0x0079ca04);
    /* 0079ca04: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ca06: je 0x79c9ef */ if (fZ) goto L_0079c9ef;
L_0079ca08:; BB(0x0079ca08);
    /* 0079ca08: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ca0a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0079ca0c: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x79ca0eu); call_ind(t); }
    /* 0079ca0e: jmp 0x79c9ef */ goto L_0079c9ef;
L_0079ca10:; BB(0x0079ca10);
    /* 0079ca10: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0079ca13: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0079ca15: jb 0x79ca10 */ if (fC) goto L_0079ca10;
L_0079ca17:; BB(0x0079ca17);
    /* 0079ca17: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0079ca1a: lea edx, [esi + 8] */ r_edx = (u32)(r_esi+0x8u);
    /* 0079ca1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ca1e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0079ca20: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0079ca23: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079ca24: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ca25: call 0x7a47dc */ r_esp -= 4; W32(r_esp, 0x79ca2au); f_007a47dc();
    /* 0079ca2a: mov edi, eax */ r_edi = r_eax;
    /* 0079ca2c: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0079ca2f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ca30: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79ca35u); f_00857e98();
    /* 0079ca35: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ca36: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79ca3bu); f_00857e98();
    /* 0079ca3b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079ca3e: mov byte ptr [esi], 0x6b */ W8((u32)(r_esi), 0x6bu);
    /* 0079ca41: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0079ca43: mov byte ptr [esi + 1], dl */ W8((u32)(r_esi+0x1u), (u8)r_edx);
    /* 0079ca46: mov word ptr [esi + 2], dx */ W16((u32)(r_esi+0x2u), (u16)r_edx);
    /* 0079ca4a: add edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079ca4d: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0079ca50: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079ca52: lea ebx, [edi + edi + 8] */ r_ebx = (u32)(r_edi+r_edi+0x8u);
    /* 0079ca56: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0079ca59: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079ca5a: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 0079ca5d: mov ecx, esi */ r_ecx = r_esi;
    /* 0079ca5f: call 0x8005e0 */ r_esp -= 4; W32(r_esp, 0x79ca64u); f_008005e0();
    /* 0079ca64: jmp 0x79c7ed */ goto L_0079c7ed;
L_0079ca69:; BB(0x0079ca69);
    /* 0079ca69: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079ca6c: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0079ca6e: jb 0x79ca69 */ if (fC) goto L_0079ca69;
L_0079ca70:; BB(0x0079ca70);
    /* 0079ca70: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0079ca73: lea edx, [esi + 8] */ r_edx = (u32)(r_esi+0x8u);
    /* 0079ca76: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ca77: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0079ca79: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0079ca7c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079ca7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ca7e: call 0x7a47dc */ r_esp -= 4; W32(r_esp, 0x79ca83u); f_007a47dc();
    /* 0079ca83: mov edi, eax */ r_edi = r_eax;
    /* 0079ca85: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0079ca88: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ca89: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79ca8eu); f_00857e98();
    /* 0079ca8e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ca8f: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79ca94u); f_00857e98();
    /* 0079ca94: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079ca97: mov byte ptr [esi], 0x6c */ W8((u32)(r_esi), 0x6cu);
    /* 0079ca9a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0079ca9c: mov byte ptr [esi + 1], dl */ W8((u32)(r_esi+0x1u), (u8)r_edx);
    /* 0079ca9f: mov word ptr [esi + 2], dx */ W16((u32)(r_esi+0x2u), (u16)r_edx);
    /* 0079caa3: add edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079caa6: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 0079caa9: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079caab: lea ebx, [edi + edi + 8] */ r_ebx = (u32)(r_edi+r_edi+0x8u);
    /* 0079caaf: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0079cab2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079cab3: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 0079cab6: mov ecx, esi */ r_ecx = r_esi;
    /* 0079cab8: call 0x8005e0 */ r_esp -= 4; W32(r_esp, 0x79cabdu); f_008005e0();
    /* 0079cabd: jmp 0x79c890 */ goto L_0079c890;
L_0079cac2:; BB(0x0079cac2);
    /* 0079cac2: lea eax, [ebp - 0x508] */ r_eax = (u32)(r_ebp+0xfffffaf8u);
    /* 0079cac8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079cac9: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cacb: push dword ptr [ebp - 0x530] */ { u32 v = R32((u32)(r_ebp+0xfffffad0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079cad1: call 0x686258 */ r_esp -= 4; W32(r_esp, 0x79cad6u); f_00686258();
    /* 0079cad6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079cad9: mov edx, dword ptr [ebp - 0x54c] */ r_edx = R32((u32)(r_ebp+0xfffffab4u));
    /* 0079cadf: mov ebx, dword ptr [ebp - 0x548] */ r_ebx = R32((u32)(r_ebp+0xfffffab8u));
    /* 0079cae5: mov esi, dword ptr [ebp - 0x50c] */ r_esi = R32((u32)(r_ebp+0xfffffaf4u));
    /* 0079caeb: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 0079caed: mov dword ptr [eax + 0xeb0], edx */ W32((u32)(r_eax+0xeb0u), r_edx);
    /* 0079caf3: mov dword ptr [eax + 0xeb4], ebx */ W32((u32)(r_eax+0xeb4u), r_ebx);
    /* 0079caf9: mov dword ptr [eax + 0xeb8], esi */ W32((u32)(r_eax+0xeb8u), r_esi);
    /* 0079caff: mov ecx, eax */ r_ecx = r_eax;
    /* 0079cb01: call dword ptr [edi + 0x18] */ { u32 t = R32((u32)(r_edi+0x18u)); r_esp -= 4; W32(r_esp, 0x79cb04u); call_ind(t); }
    /* 0079cb04: jmp 0x79c92f */ goto L_0079c92f;
}

void f_0079ca00(void)
{
    FN_ENTER(0x0079ca00);
    /* 0079ca00: sbb al, 0xfd */ { u32 c = fC; u32 a = (u8)r_eax; u32 b = 0xfdu; u32 r = (a - b - c) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    UNSUP(0x0079ca02, "falls out of decoded code");
}

void f_0079cb0c(void) /* sub_79CB0C */
{
    FN_ENTER(0x0079cb0c);
    /* 0079cb0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079cb0d: mov ebp, esp */ r_ebp = r_esp;
    /* 0079cb0f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079cb11: push 0x8f567c */ { u32 v = 0x8f567cu; r_esp -= 4; W32(r_esp, v); }
    /* 0079cb16: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0079cb1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079cb1d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0079cb24: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079cb27: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0079cb2a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0079cb2d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0079cb30: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0079cb33: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0079cb36: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0079cb39: add eax, 0x44 */ {  u32 a = r_eax; u32 b = 0x44u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079cb3c: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0079cb3f: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0079cb42: add eax, 0x3e0 */ {  u32 a = r_eax; u32 b = 0x3e0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079cb47: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0079cb4a: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0079cb4d: add eax, 0x74 */ {  u32 a = r_eax; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079cb50: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0079cb53: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0079cb5a: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cb5f: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0079cb62: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079cb65: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079cb67: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cb69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079cb6a: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x79cb6fu); f_008586d6();
    /* 0079cb6f: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 0079cb76: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cb7b: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0079cb7e: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079cb81: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079cb83: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cb85: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079cb86: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x79cb8bu); f_008586d6();
    /* 0079cb8b: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0079cb8e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0079cb91: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0079cb98: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cb9d: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0079cba0: add eax, 0x3c */ {  u32 a = r_eax; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079cba3: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079cba5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cba7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079cba8: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x79cbadu); f_008586d6();
    /* 0079cbad: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0079cbb4: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cbb9: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0079cbbc: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079cbbf: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079cbc1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cbc3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079cbc4: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x79cbc9u); f_008586d6();
    /* 0079cbc9: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0079cbcc: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0079cbd3: mov esp, ebp */ r_esp = r_ebp;
    /* 0079cbd5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079cbd6: ret  */ FN_RET(0x0079cb0c); r_esp += 4; return;
}

void f_0079cbd8(void) /* sub_79CBD8 */
{
    FN_ENTER(0x0079cbd8);
    /* 0079cbd8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079cbd9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079cbda: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079cbdb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079cbdc: mov esi, edx */ r_esi = r_edx;
    /* 0079cbde: mov ebp, eax */ r_ebp = r_eax;
    /* 0079cbe0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0079cbe2: jl 0x79cbe9 */ if ((fS!=fO)) goto L_0079cbe9;
L_0079cbe4:; BB(0x0079cbe4);
    /* 0079cbe4: cmp ebp, 0xc */ {  u32 a = r_ebp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0079cbe7: jb 0x79cbee */ if (fC) goto L_0079cbee;
L_0079cbe9:; BB(0x0079cbe9);
    /* 0079cbe9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079cbea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079cbeb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079cbec: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079cbed: ret  */ FN_RET(0x0079cbd8); r_esp += 4; return;
L_0079cbee:; BB(0x0079cbee);
    /* 0079cbee: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 0079cbf0: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079cbf2: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079cbf4: lea ebx, [ebp + ebp] */ r_ebx = (u32)(r_ebp+r_ebp);
    /* 0079cbf8: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 0079cbfb: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079cbfd: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079cbff: lea edi, [ebp + edi + 0xaaacc0] */ r_edi = (u32)(r_ebp+r_edi+0xaaacc0u);
    /* 0079cc06: mov dword ptr [edi], ecx */ W32((u32)(r_edi), r_ecx);
    /* 0079cc08: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 0079cc0b: mov dword ptr [edi + 4], ecx */ W32((u32)(r_edi+0x4u), r_ecx);
    /* 0079cc0e: lea ecx, [edi + 8] */ r_ecx = (u32)(r_edi+0x8u);
    /* 0079cc11: lea edx, [esi + 8] */ r_edx = (u32)(r_esi+0x8u);
    /* 0079cc14: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0079cc16: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
    /* 0079cc18: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0079cc1b: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0079cc1e: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 0079cc21: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0079cc24: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0079cc27: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 0079cc2a: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cc2c: mov ecx, dword ptr [esi + 0x18] */ r_ecx = R32((u32)(r_esi+0x18u));
    /* 0079cc2f: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0079cc32: mov dword ptr [ebp + ebx*8 + 0xaaacd8], ecx */ W32((u32)(r_ebp+r_ebx*8+0xaaacd8u), r_ecx);
    /* 0079cc39: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 0079cc3c: mov dword ptr [ebp + ebx*8 + 0xaaacdc], ecx */ W32((u32)(r_ebp+r_ebx*8+0xaaacdcu), r_ecx);
    /* 0079cc43: lea ecx, [esi + 0x20] */ r_ecx = (u32)(r_esi+0x20u);
    /* 0079cc46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079cc47: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079cc48: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x79cc4du); f_00857dec();
    /* 0079cc4d: mov edx, dword ptr [esi + 0x40] */ r_edx = R32((u32)(r_esi+0x40u));
    /* 0079cc50: mov dword ptr [ebp + ebx*8 + 0xaaad00], edx */ W32((u32)(r_ebp+r_ebx*8+0xaaad00u), r_edx);
    /* 0079cc57: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079cc5a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079cc5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079cc5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079cc5d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079cc5e: ret  */ FN_RET(0x0079cbd8); r_esp += 4; return;
}

void f_0079cc64(void) /* sub_79CC64 */
{
    FN_ENTER(0x0079cc64);
    /* 0079cc64: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079cc65: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079cc66: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079cc67: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079cc68: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079cc6b: mov edi, eax */ r_edi = r_eax;
    /* 0079cc6d: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cc72: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79cc77u); f_008581c5();
    /* 0079cc77: mov esi, eax */ r_esi = r_eax;
    /* 0079cc79: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079cc7c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079cc7e: je 0x79cd21 */ if (fZ) goto L_0079cd21;
L_0079cc84:; BB(0x0079cc84);
    /* 0079cc84: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cc89: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cc8b: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079cc8c: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x79cc91u); f_0086b5cc();
    /* 0079cc91: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cc96: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79cc9bu); f_008581c5();
    /* 0079cc9b: mov ebp, eax */ r_ebp = r_eax;
    /* 0079cc9d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079cca0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079cca2: je 0x79ccf7 */ if (fZ) goto L_0079ccf7;
L_0079cca4:; BB(0x0079cca4);
    /* 0079cca4: push 0x8000 */ { u32 v = 0x8000u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cca9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ccab: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079ccac: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x79ccb1u); f_0086b5cc();
    /* 0079ccb1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079ccb2: call 0x5c84bc */ r_esp -= 4; W32(r_esp, 0x79ccb7u); f_005c84bc();
    /* 0079ccb7: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 0079ccbb: push 0x7230 */ { u32 v = 0x7230u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ccc0: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79ccc5u); f_008581c5();
    /* 0079ccc5: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 0079ccc9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079cccc: mov edx, eax */ r_edx = r_eax;
    /* 0079ccce: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079ccd0: je 0x79ccf0 */ if (fZ) goto L_0079ccf0;
L_0079ccd2:; BB(0x0079ccd2);
    /* 0079ccd2: lea edx, [esi + 8] */ r_edx = (u32)(r_esi+0x8u);
    /* 0079ccd5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ccd6: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0079ccda: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ccdb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079ccdc: mov ecx, eax */ r_ecx = r_eax;
    /* 0079ccde: call 0x7a47dc */ r_esp -= 4; W32(r_esp, 0x79cce3u); f_007a47dc();
    /* 0079cce3: mov ebx, eax */ r_ebx = r_eax;
    /* 0079cce5: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 0079cce9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ccea: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79ccefu); f_00857e98();
    /* 0079ccef: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0079ccf0:; BB(0x0079ccf0);
    /* 0079ccf0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079ccf1: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79ccf6u); f_00857e98();
    /* 0079ccf6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0079ccf7:; BB(0x0079ccf7);
    /* 0079ccf7: mov byte ptr [esi], 0x6d */ W8((u32)(r_esi), 0x6du);
    /* 0079ccfa: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079ccfb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0079ccfd: mov byte ptr [esi + 1], dl */ W8((u32)(r_esi+0x1u), (u8)r_edx);
    /* 0079cd00: mov word ptr [esi + 2], dx */ W16((u32)(r_esi+0x2u), (u16)r_edx);
    /* 0079cd04: add ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079cd07: shr ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0079cd0a: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079cd0c: lea ebx, [ebx + ebx + 8] */ r_ebx = (u32)(r_ebx+r_ebx+0x8u);
    /* 0079cd10: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 0079cd13: mov ecx, esi */ r_ecx = r_esi;
    /* 0079cd15: call 0x8005e0 */ r_esp -= 4; W32(r_esp, 0x79cd1au); f_008005e0();
    /* 0079cd1a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079cd1b: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79cd20u); f_00857e98();
    /* 0079cd20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0079cd21:; BB(0x0079cd21);
    /* 0079cd21: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079cd24: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079cd25: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079cd26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079cd27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079cd28: ret  */ FN_RET(0x0079cc64); r_esp += 4; return;
}

void f_0079cd30(void) /* sub_79CD30 */
{
    FN_ENTER(0x0079cd30);
    /* 0079cd30: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079cd31: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079cd32: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079cd33: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079cd34: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079cd37: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0079cd3b: push 0x4000 */ { u32 v = 0x4000u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cd40: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79cd45u); f_008581c5();
    /* 0079cd45: mov edi, eax */ r_edi = r_eax;
    /* 0079cd47: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079cd4a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079cd4c: je 0x79ce1d */ if (fZ) goto L_0079ce1d;
L_0079cd52:; BB(0x0079cd52);
    /* 0079cd52: push 0x4000 */ { u32 v = 0x4000u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cd57: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cd59: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079cd5a: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x79cd5fu); f_0086b688();
    /* 0079cd5f: push 0x4008 */ { u32 v = 0x4008u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cd64: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79cd69u); f_008581c5();
    /* 0079cd69: mov esi, eax */ r_esi = r_eax;
    /* 0079cd6b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079cd6e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079cd70: je 0x79cdef */ if (fZ) goto L_0079cdef;
L_0079cd72:; BB(0x0079cd72);
    /* 0079cd72: push 0x4008 */ { u32 v = 0x4008u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cd77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cd79: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079cd7a: call 0x86b5cc */ r_esp -= 4; W32(r_esp, 0x79cd7fu); f_0086b5cc();
    /* 0079cd7f: lea edx, [esi + 8] */ r_edx = (u32)(r_esi+0x8u);
    /* 0079cd82: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079cd83: call 0x8123f0 */ r_esp -= 4; W32(r_esp, 0x79cd88u); f_008123f0();
    /* 0079cd88: movzx ebp, ax */ r_ebp = (u32)(u16)r_eax;
    /* 0079cd8b: mov word ptr [esi + 2], bp */ W16((u32)(r_esi+0x2u), (u16)r_ebp);
    /* 0079cd8f: lea edx, [esi + ebp + 8] */ r_edx = (u32)(r_esi+r_ebp+0x8u);
    /* 0079cd93: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079cd94: call 0x80d32c */ r_esp -= 4; W32(r_esp, 0x79cd99u); f_0080d32c();
    /* 0079cd99: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0079cd9c: mov word ptr [esi + 4], dx */ W16((u32)(r_esi+0x4u), (u16)r_edx);
    /* 0079cda0: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079cda2: lea ecx, [esi + ebp + 8] */ r_ecx = (u32)(r_esi+r_ebp+0x8u);
    /* 0079cda6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079cda7: call 0x816fac */ r_esp -= 4; W32(r_esp, 0x79cdacu); f_00816fac();
    /* 0079cdac: push 0x7230 */ { u32 v = 0x7230u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cdb1: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 0079cdb4: mov word ptr [esi + 6], dx */ W16((u32)(r_esi+0x6u), (u16)r_edx);
    /* 0079cdb8: add ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0079cdba: mov word ptr [esi], bp */ W16((u32)(r_esi), (u16)r_ebp);
    /* 0079cdbd: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79cdc2u); f_008581c5();
    /* 0079cdc2: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 0079cdc6: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079cdc9: mov edx, eax */ r_edx = r_eax;
    /* 0079cdcb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079cdcd: je 0x79cde8 */ if (fZ) goto L_0079cde8;
L_0079cdcf:; BB(0x0079cdcf);
    /* 0079cdcf: lea edx, [edi + 8] */ r_edx = (u32)(r_edi+0x8u);
    /* 0079cdd2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079cdd3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079cdd4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079cdd5: mov ecx, eax */ r_ecx = r_eax;
    /* 0079cdd7: call 0x7a47dc */ r_esp -= 4; W32(r_esp, 0x79cddcu); f_007a47dc();
    /* 0079cddc: mov ebx, eax */ r_ebx = r_eax;
    /* 0079cdde: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0079cde1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079cde2: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79cde7u); f_00857e98();
    /* 0079cde7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0079cde8:; BB(0x0079cde8);
    /* 0079cde8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079cde9: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79cdeeu); f_00857e98();
    /* 0079cdee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0079cdef:; BB(0x0079cdef);
    /* 0079cdef: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 0079cdf3: mov byte ptr [edi], 0x6e */ W8((u32)(r_edi), 0x6eu);
    /* 0079cdf6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0079cdf8: mov byte ptr [edi + 1], dl */ W8((u32)(r_edi+0x1u), (u8)r_edx);
    /* 0079cdfb: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079cdfc: mov word ptr [edi + 2], dx */ W16((u32)(r_edi+0x2u), (u16)r_edx);
    /* 0079ce00: add ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079ce03: shr ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 0079ce06: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0079ce08: lea ebx, [ebx + ebx + 8] */ r_ebx = (u32)(r_ebx+r_ebx+0x8u);
    /* 0079ce0c: mov dword ptr [edi + 4], ebx */ W32((u32)(r_edi+0x4u), r_ebx);
    /* 0079ce0f: mov ecx, edi */ r_ecx = r_edi;
    /* 0079ce11: call 0x8005e0 */ r_esp -= 4; W32(r_esp, 0x79ce16u); f_008005e0();
    /* 0079ce16: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0079ce17: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79ce1cu); f_00857e98();
    /* 0079ce1c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0079ce1d:; BB(0x0079ce1d);
    /* 0079ce1d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079ce20: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079ce21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079ce22: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079ce23: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0079ce24: ret  */ FN_RET(0x0079cd30); r_esp += 4; return;
}

void f_0079ce2c(void) /* sub_79CE2C */
{
    FN_ENTER(0x0079ce2c);
    /* 0079ce2c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ce2d: sub esp, 0x208 */ {  u32 a = r_esp; u32 b = 0x208u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079ce33: mov ebx, eax */ r_ebx = r_eax;
    /* 0079ce35: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 0079ce39: mov byte ptr [esp], 0x6f */ W8((u32)(r_esp), 0x6fu);
    /* 0079ce3d: mov byte ptr [esp + 1], 0x82 */ W8((u32)(r_esp+0x1u), 0x82u);
    /* 0079ce42: mov dword ptr [esp + 0x204], 1 */ W32((u32)(r_esp+0x204u), 0x1u);
    /* 0079ce4d: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ce52: push 0xa95680 */ { u32 v = 0xa95680u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ce57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ce58: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x79ce5du); f_0086b6b8();
    /* 0079ce5d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079ce60: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ce61: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0079ce65: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x79ce6au); f_00800464();
    /* 0079ce6a: add esp, 0x208 */ {  u32 a = r_esp; u32 b = 0x208u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079ce70: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079ce71: ret  */ FN_RET(0x0079ce2c); r_esp += 4; return;
}

void f_0079ce78(void) /* sub_79CE78 */
{
    FN_ENTER(0x0079ce78);
    /* 0079ce78: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079ce79: mov byte ptr [esp], 0x71 */ W8((u32)(r_esp), 0x71u);
    /* 0079ce7d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0079ce7f: mov byte ptr [esp + 1], 1 */ W8((u32)(r_esp+0x1u), 0x1u);
    /* 0079ce84: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 0079ce89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079ce8a: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 0079ce8e: call 0x800464 */ r_esp -= 4; W32(r_esp, 0x79ce93u); f_00800464();
    /* 0079ce93: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079ce94: ret  */ FN_RET(0x0079ce78); r_esp += 4; return;
}

void f_0079ce9c(void) /* sub_79CE9C */
{
    FN_ENTER(0x0079ce9c);
    /* 0079ce9c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079ce9d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ce9e: sub esp, 0x4b8 */ {  u32 a = r_esp; u32 b = 0x4b8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079cea4: mov esi, eax */ r_esi = r_eax;
    /* 0079cea6: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0079cea9: call 0x6857f0 */ r_esp -= 4; W32(r_esp, 0x79ceaeu); f_006857f0();
    /* 0079ceae: push 0x4c0 */ { u32 v = 0x4c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079ceb3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x79ceb8u); f_008581c5();
    /* 0079ceb8: mov ebx, eax */ r_ebx = r_eax;
    /* 0079ceba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079cebd: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079cebf: je 0x79ceff */ if (fZ) goto L_0079ceff;
L_0079cec1:; BB(0x0079cec1);
    /* 0079cec1: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079cec7: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x79ceccu); f_0068d5a8();
    /* 0079cecc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079cecd: lea edx, [ebx + 8] */ r_edx = (u32)(r_ebx+0x8u);
    /* 0079ced0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079ced1: mov ecx, eax */ r_ecx = r_eax;
    /* 0079ced3: call 0x68cee8 */ r_esp -= 4; W32(r_esp, 0x79ced8u); f_0068cee8();
    /* 0079ced8: mov byte ptr [ebx], 0x70 */ W8((u32)(r_ebx), 0x70u);
    /* 0079cedb: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0079cedc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0079cede: mov byte ptr [ebx + 1], 0 */ W8((u32)(r_ebx+0x1u), 0x0u);
    /* 0079cee2: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 0079cee8: mov word ptr [ebx + 2], dx */ W16((u32)(r_ebx+0x2u), (u16)r_edx);
    /* 0079ceec: mov dword ptr [ebx + 4], 0x4c0 */ W32((u32)(r_ebx+0x4u), 0x4c0u);
    /* 0079cef3: call 0x8005e0 */ r_esp -= 4; W32(r_esp, 0x79cef8u); f_008005e0();
    /* 0079cef8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0079cef9: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x79cefeu); f_00857e98();
    /* 0079cefe: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0079ceff:; BB(0x0079ceff);
    /* 0079ceff: add esp, 0x4b8 */ {  u32 a = r_esp; u32 b = 0x4b8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0079cf05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0079cf06: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0079cf07: ret  */ FN_RET(0x0079ce9c); r_esp += 4; return;
}

void f_0079cf08(void) /* sub_79CF08 */
{
    FN_ENTER(0x0079cf08);
    /* 0079cf08: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0079cf09: mov ebp, esp */ r_ebp = r_esp;
    /* 0079cf0b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0079cf0d: push 0x8f5798 */ { u32 v = 0x8f5798u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cf12: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0079cf18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079cf19: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0079cf20: sub esp, 0x57c */ {  u32 a = r_esp; u32 b = 0x57cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0079cf26: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0079cf29: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0079cf2c: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0079cf2f: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0079cf32: mov ecx, 0x520 */ r_ecx = 0x520u;
    /* 0079cf37: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 0079cf3a: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 0079cf3d: lea edi, [ebp - 0x53c] */ r_edi = (u32)(r_ebp+0xfffffac4u);
    /* 0079cf43: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079cf44: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0079cf47: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 0079cf49: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0079cf4a: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0079cf4d: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 0079cf4f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0079cf56: mov dword ptr [0xa9c4dc], eax */ W32((u32)(0xa9c4dcu), r_eax);
    /* 0079cf5b: mov eax, dword ptr [ebp - 0x520] */ r_eax = R32((u32)(r_ebp+0xfffffae0u));
    /* 0079cf61: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079cf67: jne 0x79d02d */ if (!fZ) goto L_0079d02d;
L_0079cf6d:; BB(0x0079cf6d);
    /* 0079cf6d: lea eax, [ebp - 0x53c] */ r_eax = (u32)(r_ebp+0xfffffac4u);
    /* 0079cf73: mov dword ptr [ebp - 0x588], eax */ W32((u32)(r_ebp+0xfffffa78u), r_eax);
    /* 0079cf79: lea eax, [ebp - 0x4f8] */ r_eax = (u32)(r_ebp+0xfffffb08u);
    /* 0079cf7f: mov dword ptr [ebp - 0x580], eax */ W32((u32)(r_ebp+0xfffffa80u), r_eax);
    /* 0079cf85: lea eax, [ebp - 0x118] */ r_eax = (u32)(r_ebp+0xfffffee8u);
    /* 0079cf8b: mov dword ptr [ebp - 0x578], eax */ W32((u32)(r_ebp+0xfffffa88u), r_eax);
    /* 0079cf91: lea eax, [ebp - 0xa4] */ r_eax = (u32)(r_ebp+0xffffff5cu);
    /* 0079cf97: mov dword ptr [ebp - 0x570], eax */ W32((u32)(r_ebp+0xfffffa90u), r_eax);
    /* 0079cf9d: mov dword ptr [ebp - 4], 4 */ W32((u32)(r_ebp+0xfffffffcu), 0x4u);
    /* 0079cfa4: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cfa9: lea eax, [ebp - 0x68] */ r_eax = (u32)(r_ebp+0xffffff98u);
    /* 0079cfac: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079cfae: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cfb0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079cfb1: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x79cfb6u); f_008586d6();
    /* 0079cfb6: mov dword ptr [ebp - 4], 3 */ W32((u32)(r_ebp+0xfffffffcu), 0x3u);
    /* 0079cfbd: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cfc2: lea eax, [ebp - 0xa0] */ r_eax = (u32)(r_ebp+0xffffff60u);
    /* 0079cfc8: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079cfca: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cfcc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079cfcd: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x79cfd2u); f_008586d6();
    /* 0079cfd2: lea eax, [ebp - 0x118] */ r_eax = (u32)(r_ebp+0xfffffee8u);
    /* 0079cfd8: mov dword ptr [ebp - 0x568], eax */ W32((u32)(r_ebp+0xfffffa98u), r_eax);
    /* 0079cfde: mov dword ptr [ebp - 4], 5 */ W32((u32)(r_ebp+0xfffffffcu), 0x5u);
    /* 0079cfe5: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cfea: lea eax, [ebp - 0xdc] */ r_eax = (u32)(r_ebp+0xffffff24u);
    /* 0079cff0: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079cff2: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079cff4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079cff5: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x79cffau); f_008586d6();
    /* 0079cffa: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0079d001: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d006: lea eax, [ebp - 0x114] */ r_eax = (u32)(r_ebp+0xfffffeecu);
    /* 0079d00c: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079d00e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d010: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079d011: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x79d016u); f_008586d6();
    /* 0079d016: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0079d019: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0079d01c: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0079d01f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0079d022: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0079d029: mov esp, ebp */ r_esp = r_ebp;
    /* 0079d02b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079d02c: ret  */ FN_RET(0x0079cf08); r_esp += 4; return;
L_0079d02d:; BB(0x0079d02d);
    /* 0079d02d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079d02e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x79d033u); f_0068d5a8();
    /* 0079d033: mov ebx, eax */ r_ebx = r_eax;
    /* 0079d035: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079d038: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079d03a: je 0x79d06b */ if (fZ) goto L_0079d06b;
L_0079d03c:; BB(0x0079d03c);
    /* 0079d03c: mov esi, dword ptr [ebp - 0x520] */ r_esi = R32((u32)(r_ebp+0xfffffae0u));
    /* 0079d042: mov edx, dword ptr [0xaaecf8] */ r_edx = R32((u32)(0xaaecf8u));
    /* 0079d048: mov ecx, dword ptr [edx + 0x18] */ r_ecx = R32((u32)(r_edx+0x18u));
    /* 0079d04b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079d04d: je 0x79d1a8 */ if (fZ) goto L_0079d1a8;
L_0079d053:; BB(0x0079d053);
    /* 0079d053: movzx edx, word ptr [ecx + 0xa] */ r_edx = (u32)R16((u32)(r_ecx+0xau));
    /* 0079d057: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079d059: je 0x79d1bd */ if (fZ) goto L_0079d1bd;
L_0079d05f:; BB(0x0079d05f);
    /* 0079d05f: mov ecx, dword ptr [ecx + 0x10] */ r_ecx = R32((u32)(r_ecx+0x10u));
    /* 0079d062: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079d064: jne 0x79d053 */ if (!fZ) goto L_0079d053;
L_0079d066:; BB(0x0079d066);
    /* 0079d066: jmp 0x79d1a8 */ goto L_0079d1a8;
L_0079d06b:; BB(0x0079d06b);
    /* 0079d06b: mov eax, dword ptr [ebp - 0x520] */ r_eax = R32((u32)(r_ebp+0xfffffae0u));
    /* 0079d071: lea edx, [ebp - 0x51c] */ r_edx = (u32)(r_ebp+0xfffffae4u);
    /* 0079d077: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d079: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079d07b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079d07d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0079d07e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079d080: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0079d082: lea ecx, [eax + eax + 0xaab000] */ r_ecx = (u32)(r_eax+r_eax+0xaab000u);
    /* 0079d089: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0079d08a: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x79d08fu); f_00857dec();
    /* 0079d08f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079d092: mov eax, dword ptr [ebp - 0x520] */ r_eax = R32((u32)(r_ebp+0xfffffae0u));
    /* 0079d098: lea edx, [ebp - 0x53c] */ r_edx = (u32)(r_ebp+0xfffffac4u);
    /* 0079d09e: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079d0a1: call 0x79cbd8 */ r_esp -= 4; W32(r_esp, 0x79d0a6u); f_0079cbd8();
    /* 0079d0a6: lea eax, [ebp - 0x4f8] */ r_eax = (u32)(r_ebp+0xfffffb08u);
    /* 0079d0ac: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079d0ad: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d0af: push dword ptr [ebp - 0x520] */ { u32 v = R32((u32)(r_ebp+0xfffffae0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0079d0b5: call 0x686258 */ r_esp -= 4; W32(r_esp, 0x79d0bau); f_00686258();
    /* 0079d0ba: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0079d0bd: mov edx, dword ptr [ebp - 0x53c] */ r_edx = R32((u32)(r_ebp+0xfffffac4u));
    /* 0079d0c3: mov ebx, dword ptr [ebp - 0x538] */ r_ebx = R32((u32)(r_ebp+0xfffffac8u));
    /* 0079d0c9: mov esi, dword ptr [ebp - 0x4fc] */ r_esi = R32((u32)(r_ebp+0xfffffb04u));
    /* 0079d0cf: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 0079d0d1: mov dword ptr [eax + 0xeb0], edx */ W32((u32)(r_eax+0xeb0u), r_edx);
    /* 0079d0d7: mov dword ptr [eax + 0xeb4], ebx */ W32((u32)(r_eax+0xeb4u), r_ebx);
    /* 0079d0dd: mov dword ptr [eax + 0xeb8], esi */ W32((u32)(r_eax+0xeb8u), r_esi);
    /* 0079d0e3: mov ecx, eax */ r_ecx = r_eax;
    /* 0079d0e5: call dword ptr [edi + 0x18] */ { u32 t = R32((u32)(r_edi+0x18u)); r_esp -= 4; W32(r_esp, 0x79d0e8u); call_ind(t); }
    /* 0079d0e8: lea eax, [ebp - 0x53c] */ r_eax = (u32)(r_ebp+0xfffffac4u);
    /* 0079d0ee: mov dword ptr [ebp - 0x560], eax */ W32((u32)(r_ebp+0xfffffaa0u), r_eax);
    /* 0079d0f4: lea eax, [ebp - 0x4f8] */ r_eax = (u32)(r_ebp+0xfffffb08u);
    /* 0079d0fa: mov dword ptr [ebp - 0x558], eax */ W32((u32)(r_ebp+0xfffffaa8u), r_eax);
    /* 0079d100: lea eax, [ebp - 0x118] */ r_eax = (u32)(r_ebp+0xfffffee8u);
    /* 0079d106: mov dword ptr [ebp - 0x550], eax */ W32((u32)(r_ebp+0xfffffab0u), r_eax);
    /* 0079d10c: lea eax, [ebp - 0xa4] */ r_eax = (u32)(r_ebp+0xffffff5cu);
    /* 0079d112: mov dword ptr [ebp - 0x548], eax */ W32((u32)(r_ebp+0xfffffab8u), r_eax);
    /* 0079d118: mov dword ptr [ebp - 4], 9 */ W32((u32)(r_ebp+0xfffffffcu), 0x9u);
    /* 0079d11f: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d124: lea eax, [ebp - 0x68] */ r_eax = (u32)(r_ebp+0xffffff98u);
    /* 0079d127: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079d129: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d12b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079d12c: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x79d131u); f_008586d6();
    /* 0079d131: mov dword ptr [ebp - 4], 8 */ W32((u32)(r_ebp+0xfffffffcu), 0x8u);
    /* 0079d138: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d13d: lea eax, [ebp - 0xa0] */ r_eax = (u32)(r_ebp+0xffffff60u);
    /* 0079d143: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079d145: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d147: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079d148: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x79d14du); f_008586d6();
    /* 0079d14d: lea eax, [ebp - 0x118] */ r_eax = (u32)(r_ebp+0xfffffee8u);
    /* 0079d153: mov dword ptr [ebp - 0x540], eax */ W32((u32)(r_ebp+0xfffffac0u), r_eax);
    /* 0079d159: mov dword ptr [ebp - 4], 0xa */ W32((u32)(r_ebp+0xfffffffcu), 0xau);
    /* 0079d160: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d165: lea eax, [ebp - 0xdc] */ r_eax = (u32)(r_ebp+0xffffff24u);
    /* 0079d16b: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079d16d: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d16f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079d170: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x79d175u); f_008586d6();
    /* 0079d175: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0079d17c: push 0x61cdb0 */ { u32 v = 0x61cdb0u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d181: lea eax, [ebp - 0x114] */ r_eax = (u32)(r_ebp+0xfffffeecu);
    /* 0079d187: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0079d189: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d18b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0079d18c: call 0x8586d6 */ r_esp -= 4; W32(r_esp, 0x79d191u); f_008586d6();
    /* 0079d191: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0079d194: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0079d197: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 0079d19a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0079d19d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0079d1a4: mov esp, ebp */ r_esp = r_ebp;
    /* 0079d1a6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0079d1a7: ret  */ FN_RET(0x0079cf08); r_esp += 4; return;
L_0079d1a8:; BB(0x0079d1a8);
    /* 0079d1a8: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079d1aa: je 0x79d06b */ if (fZ) goto L_0079d06b;
L_0079d1b0:; BB(0x0079d1b0);
    /* 0079d1b0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d1b2: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 0079d1b4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0079d1b6: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x79d1b8u); call_ind(t); }
    /* 0079d1b8: jmp 0x79d06b */ goto L_0079d06b;
L_0079d1bd:; BB(0x0079d1bd);
    /* 0079d1bd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0079d1bf: je 0x79d1a8 */ if (fZ) goto L_0079d1a8;
L_0079d1c1:; BB(0x0079d1c1);
    /* 0079d1c1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0079d1c3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0079d1c5: call dword ptr [edx] */ { u32 t = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, 0x79d1c7u); call_ind(t); }
    /* 0079d1c7: jmp 0x79d1a8 */ goto L_0079d1a8;
}

