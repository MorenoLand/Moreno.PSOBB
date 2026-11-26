#include "protos.h"

void f_006b200c(void) /* sub_6B200C */
{
    FN_ENTER(0x006b200c);
    /* 006b200c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b200d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b2010: movzx eax, byte ptr [esp + 0x10] */ r_eax = (u32)R8((u32)(r_esp+0x10u));
    /* 006b2015: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 006b2019: lea ecx, [eax + ebx] */ r_ecx = (u32)(r_eax+r_ebx);
    /* 006b201c: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 006b201f: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006b2021: jle 0x6b2060 */ if ((fZ||fS!=fO)) goto L_006b2060;
L_006b2023:; BB(0x006b2023);
    /* 006b2023: mov edx, dword ptr [0xa954b8] */ r_edx = R32((u32)(0xa954b8u));
    /* 006b2029: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b202e: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 006b2032: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_006b2035:; BB(0x006b2035);
    /* 006b2035: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006b2037: jle 0x6b2065 */ if ((fZ||fS!=fO)) goto L_006b2065;
L_006b2039:; BB(0x006b2039);
    /* 006b2039: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b203c: mov esi, dword ptr [edx*4 + 0xa95380] */ r_esi = R32((u32)(r_edx*4+0xa95380u));
    /* 006b2043: mov dword ptr [0xa954b8], edx */ W32((u32)(0xa954b8u), r_edx);
L_006b2049:; BB(0x006b2049);
    /* 006b2049: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006b204c: movzx edi, cl */ r_edi = (u32)(u8)r_ecx;
    /* 006b204f: mov dword ptr [eax + edi*4], esi */ W32((u32)(r_eax+r_edi*4), r_esi);
    /* 006b2052: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b2055: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006b2057: jg 0x6b2035 */ if ((!fZ&&fS==fO)) goto L_006b2035;
L_006b2059:; BB(0x006b2059);
    /* 006b2059: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 006b205d: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_006b2060:; BB(0x006b2060);
    /* 006b2060: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b2063: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b2064: ret  */ FN_RET(0x006b200c); r_esp += 4; return;
L_006b2065:; BB(0x006b2065);
    /* 006b2065: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 006b2067: jmp 0x6b2049 */ goto L_006b2049;
}

void f_006b206c(void) /* sub_6B206C */
{
    FN_ENTER(0x006b206c);
    /* 006b206c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b206d: mov ebp, esp */ r_ebp = r_esp;
    /* 006b206f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b2071: push 0x8ebe26 */ { u32 v = 0x8ebe26u; r_esp -= 4; W32(r_esp, v); }
    /* 006b2076: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006b207c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b207d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006b2084: sub esp, 0x424 */ {  u32 a = r_esp; u32 b = 0x424u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b208a: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006b208d: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 006b2090: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 006b2093: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 006b2096: movzx eax, byte ptr [0xa954cc] */ r_eax = (u32)R8((u32)(0xa954ccu));
    /* 006b209d: mov edx, dword ptr [0xa954d0] */ r_edx = R32((u32)(0xa954d0u));
    /* 006b20a3: mov dword ptr [ebp - 0x430], 0 */ W32((u32)(r_ebp+0xfffffbd0u), 0x0u);
    /* 006b20ad: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006b20b0: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 006b20b3: push 0x20a8 */ { u32 v = 0x20a8u; r_esp -= 4; W32(r_esp, v); }
    /* 006b20b8: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6b20bdu); f_005caba4();
    /* 006b20bd: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006b20c0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b20c3: mov dword ptr [ebp - 0x42c], eax */ W32((u32)(r_ebp+0xfffffbd4u), r_eax);
    /* 006b20c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b20cb: je 0x6b2243 */ if (fZ) goto L_006b2243;
L_006b20d1:; BB(0x006b20d1);
    /* 006b20d1: mov dword ptr [ebp - 0x430], 1 */ W32((u32)(r_ebp+0xfffffbd0u), 0x1u);
    /* 006b20db: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006b20e2: mov ecx, eax */ r_ecx = r_eax;
    /* 006b20e4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b20e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b20e7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b20e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b20e9: call 0x815cc0 */ r_esp -= 4; W32(r_esp, 0x6b20eeu); f_00815cc0();
    /* 006b20ee: mov dword ptr [ebp - 0x430], 0 */ W32((u32)(r_ebp+0xfffffbd0u), 0x0u);
L_006b20f8:; BB(0x006b20f8);
    /* 006b20f8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b20ff: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006b2102: lea edx, [ebp - 0x428] */ r_edx = (u32)(r_ebp+0xfffffbd8u);
    /* 006b2108: push 0x1ff */ { u32 v = 0x1ffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b210d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b210e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b210f: call 0x857dec */ r_esp -= 4; W32(r_esp, 0x6b2114u); f_00857dec();
    /* 006b2114: lea eax, [ebp - 0x428] */ r_eax = (u32)(r_ebp+0xfffffbd8u);
    /* 006b211a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b211b: call 0x815964 */ r_esp -= 4; W32(r_esp, 0x6b2120u); f_00815964();
    /* 006b2120: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b2123: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006b2126: lea eax, [ebp - 0x428] */ r_eax = (u32)(r_ebp+0xfffffbd8u);
    /* 006b212c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b212d: call 0x815b78 */ r_esp -= 4; W32(r_esp, 0x6b2132u); f_00815b78();
    /* 006b2132: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 006b2134: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6b2139u); f_0073ec50();
    /* 006b2139: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006b213c: push dword ptr [edx + 0x209c] */ { u32 v = R32((u32)(r_edx+0x209cu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b2142: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b2143: call 0x735708 */ r_esp -= 4; W32(r_esp, 0x6b2148u); f_00735708();
    /* 006b2148: mov ecx, eax */ r_ecx = r_eax;
    /* 006b214a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b214d: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006b2150: mov esi, dword ptr [edx + 0x209c] */ r_esi = R32((u32)(r_edx+0x209cu));
    /* 006b2156: mov dword ptr [0xa95488], ecx */ W32((u32)(0xa95488u), r_ecx);
    /* 006b215c: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006b215e: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006b2160: jle 0x6b219b */ if ((fZ||fS!=fO)) goto L_006b219b;
L_006b2162:; BB(0x006b2162);
    /* 006b2162: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006b2165: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2166: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 006b2168: lea esi, [ebx + ebx] */ r_esi = (u32)(r_ebx+r_ebx);
    /* 006b216b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006b216d: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006b216f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006b2171: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006b2173: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006b2175: lea edi, [edx + esi + 0x1c] */ r_edi = (u32)(r_edx+r_esi+0x1cu);
    /* 006b2179: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b217a: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x6b217fu); f_00735c90();
    /* 006b217f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006b2182: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b2185: cmp ebx, dword ptr [eax + 0x209c] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_eax+0x209cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b218b: jge 0x6b2195 */ if ((fS==fO)) goto L_006b2195;
L_006b218d:; BB(0x006b218d);
    /* 006b218d: mov ecx, dword ptr [0xa95488] */ r_ecx = R32((u32)(0xa95488u));
    /* 006b2193: jmp 0x6b2162 */ goto L_006b2162;
L_006b2195:; BB(0x006b2195);
    /* 006b2195: mov ecx, dword ptr [0xa95488] */ r_ecx = R32((u32)(0xa95488u));
L_006b219b:; BB(0x006b219b);
    /* 006b219b: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x6b21a0u); f_0073608c();
    /* 006b21a0: mov ecx, dword ptr [0xa95488] */ r_ecx = R32((u32)(0xa95488u));
    /* 006b21a6: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x6b21abu); f_00736458();
    /* 006b21ab: push 0x47185800 */ { u32 v = 0x47185800u; r_esp -= 4; W32(r_esp, v); }
    /* 006b21b0: mov ecx, dword ptr [0xa95488] */ r_ecx = R32((u32)(0xa95488u));
    /* 006b21b6: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 006b21bd: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b21c2: mov word ptr [ecx + 0x84], ax */ W16((u32)(r_ecx+0x84u), (u16)r_eax);
    /* 006b21c9: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x6b21ceu); f_00712624();
    /* 006b21ce: mov esi, dword ptr [0xa954b0] */ r_esi = R32((u32)(0xa954b0u));
    /* 006b21d4: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006b21d7: mov dword ptr [esi + eax*4], 0 */ W32((u32)(r_esi+r_eax*4), 0x0u);
    /* 006b21de: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b21e4: mov dword ptr [0xa954a0], 7 */ W32((u32)(0xa954a0u), 0x7u);
    /* 006b21ee: mov byte ptr [0xa954b4], al */ W8((u32)(0xa954b4u), (u8)r_eax);
    /* 006b21f3: call 0x718198 */ r_esp -= 4; W32(r_esp, 0x6b21f8u); f_00718198();
    /* 006b21f8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b21f9: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x6b21feu); f_00717d68();
    /* 006b21fe: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 006b2204: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2206: je 0x6b2215 */ if (fZ) goto L_006b2215;
L_006b2208:; BB(0x006b2208);
    /* 006b2208: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006b220c: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b2211: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_006b2215:; BB(0x006b2215);
    /* 006b2215: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b2217: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6b221cu); f_00791748();
    /* 006b221c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b221d: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006b2220: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b2222: je 0x6b222c */ if (fZ) goto L_006b222c;
L_006b2224:; BB(0x006b2224);
    /* 006b2224: mov ecx, eax */ r_ecx = r_eax;
    /* 006b2226: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006b2228: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006b222a: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x6b222cu); call_ind(t); }
L_006b222c:; BB(0x006b222c);
    /* 006b222c: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 006b222f: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 006b2232: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006b2235: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006b2238: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006b223f: mov esp, ebp */ r_esp = r_ebp;
    /* 006b2241: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b2242: ret  */ FN_RET(0x006b206c); r_esp += 4; return;
L_006b2243:; BB(0x006b2243);
    /* 006b2243: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b2245: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006b2248: jmp 0x6b20f8 */ goto L_006b20f8;
}

void f_006b2250(void) /* sub_6B2250 */
{
    FN_ENTER(0x006b2250);
    /* 006b2250: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b2252: call 0x788f38 */ r_esp -= 4; W32(r_esp, 0x6b2257u); f_00788f38();
    /* 006b2257: mov dword ptr [0xa954a0], 8 */ W32((u32)(0xa954a0u), 0x8u);
    /* 006b2261: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b2262: ret  */ FN_RET(0x006b2250); r_esp += 4; return;
}

void f_006b2264(void) /* sub_6B2264 */
{
    FN_ENTER(0x006b2264);
    /* 006b2264: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b2266: call 0x788f64 */ r_esp -= 4; W32(r_esp, 0x6b226bu); f_00788f64();
    /* 006b226b: mov dword ptr [0xa954a0], 8 */ W32((u32)(0xa954a0u), 0x8u);
    /* 006b2275: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b2276: ret  */ FN_RET(0x006b2264); r_esp += 4; return;
}

void f_006b2278(void) /* sub_6B2278 */
{
    FN_ENTER(0x006b2278);
    /* 006b2278: mov edx, dword ptr [0xa954cc] */ r_edx = R32((u32)(0xa954ccu));
    /* 006b227e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b2280: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b2281: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b2282: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b2283: push dword ptr [edx*4 + 0x969880] */ { u32 v = R32((u32)(r_edx*4+0x969880u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b228a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x6b228fu); f_00814298();
    /* 006b228f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b2292: ret  */ FN_RET(0x006b2278); r_esp += 4; return;
}

void f_006b2294(void) /* sub_6B2294 */
{
    FN_ENTER(0x006b2294);
    /* 006b2294: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b2299: push dword ptr [eax*4 + 0x9ce4a4] */ { u32 v = R32((u32)(r_eax*4+0x9ce4a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b22a0: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x6b22a5u); f_00814f0c();
    /* 006b22a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b22a6: ret  */ FN_RET(0x006b2294); r_esp += 4; return;
}

void f_006b22a8(void)
{
    FN_ENTER(0x006b22a8);
    /* 006b22a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b22a9: mov esi, dword ptr [0xa954cc] */ r_esi = R32((u32)(0xa954ccu));
    /* 006b22af: mov ecx, dword ptr [0xa95480] */ r_ecx = R32((u32)(0xa95480u));
    /* 006b22b5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b22b7: je 0x6b22be */ if (fZ) goto L_006b22be;
L_006b22b9:; BB(0x006b22b9);
    /* 006b22b9: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6b22beu); f_007127b0();
L_006b22be:; BB(0x006b22be);
    /* 006b22be: call 0x73c9b0 */ r_esp -= 4; W32(r_esp, 0x6b22c3u); f_0073c9b0();
    /* 006b22c3: mov dword ptr [0xa95480], eax */ W32((u32)(0xa95480u), r_eax);
    /* 006b22c8: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006b22ca: mov ecx, eax */ r_ecx = r_eax;
    /* 006b22cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b22cd: call 0x73cadc */ r_esp -= 4; W32(r_esp, 0x6b22d2u); f_0073cadc();
    /* 006b22d2: mov dword ptr [0xa954a0], 4 */ W32((u32)(0xa954a0u), 0x4u);
    /* 006b22dc: call 0x71802c */ r_esp -= 4; W32(r_esp, 0x6b22e1u); f_0071802c();
    /* 006b22e1: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b22e7: call 0x718198 */ r_esp -= 4; W32(r_esp, 0x6b22ecu); f_00718198();
    /* 006b22ec: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b22ed: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x6b22f2u); f_00717d68();
    /* 006b22f2: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 006b22f8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b22fa: je 0x6b2309 */ if (fZ) goto L_006b2309;
L_006b22fc:; BB(0x006b22fc);
    /* 006b22fc: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006b2300: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b2305: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_006b2309:; BB(0x006b2309);
    /* 006b2309: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b230a: ret  */ FN_RET(0x006b22a8); r_esp += 4; return;
}

void f_006b230c(void) /* sub_6B230C */
{
    FN_ENTER(0x006b230c);
    /* 006b230c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b230d: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b2310: mov ebp, dword ptr [0xa954cc] */ r_ebp = R32((u32)(0xa954ccu));
    /* 006b2316: mov ecx, dword ptr [0xa95484] */ r_ecx = R32((u32)(0xa95484u));
    /* 006b231c: mov dword ptr [esp], 0x43c50000 */ W32((u32)(r_esp), 0x43c50000u);
    /* 006b2323: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2325: mov dword ptr [esp + 4], 0x42a00000 */ W32((u32)(r_esp+0x4u), 0x42a00000u);
    /* 006b232d: je 0x6b233e */ if (fZ) goto L_006b233e;
L_006b232f:; BB(0x006b232f);
    /* 006b232f: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6b2334u); f_007127b0();
    /* 006b2334: mov dword ptr [0xa95484], 0 */ W32((u32)(0xa95484u), 0x0u);
L_006b233e:; BB(0x006b233e);
    /* 006b233e: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 006b2340: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x6b2345u); f_0073ec50();
    /* 006b2345: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 006b2349: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b234a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b234b: call 0x73a888 */ r_esp -= 4; W32(r_esp, 0x6b2350u); f_0073a888();
    /* 006b2350: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b2353: mov dword ptr [0xa95484], eax */ W32((u32)(0xa95484u), r_eax);
    /* 006b2358: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006b235a: mov ecx, eax */ r_ecx = r_eax;
    /* 006b235c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b235d: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6b2362u); f_0073ae38();
    /* 006b2362: push 0x47436e00 */ { u32 v = 0x47436e00u; r_esp -= 4; W32(r_esp, v); }
    /* 006b2367: mov ecx, dword ptr [0xa95484] */ r_ecx = R32((u32)(0xa95484u));
    /* 006b236d: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x6b2372u); f_00712624();
    /* 006b2372: mov dword ptr [0xa954a0], 5 */ W32((u32)(0xa954a0u), 0x5u);
    /* 006b237c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b237f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b2380: ret  */ FN_RET(0x006b230c); r_esp += 4; return;
}

void f_006b2384(void)
{
    FN_ENTER(0x006b2384);
    /* 006b2384: mov ecx, dword ptr [0xa95484] */ r_ecx = R32((u32)(0xa95484u));
    /* 006b238a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b238c: je 0x6b239d */ if (fZ) goto L_006b239d;
L_006b238e:; BB(0x006b238e);
    /* 006b238e: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6b2393u); f_007127b0();
    /* 006b2393: mov dword ptr [0xa95484], 0 */ W32((u32)(0xa95484u), 0x0u);
L_006b239d:; BB(0x006b239d);
    /* 006b239d: ret  */ FN_RET(0x006b2384); r_esp += 4; return;
}

void f_006b23a0(void)
{
    FN_ENTER(0x006b23a0);
    /* 006b23a0: mov eax, dword ptr [0xa954cc] */ r_eax = R32((u32)(0xa954ccu));
    /* 006b23a5: mov ecx, dword ptr [0xa95480] */ r_ecx = R32((u32)(0xa95480u));
    /* 006b23ab: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b23ad: je 0x6b23c2 */ if (fZ) goto L_006b23c2;
L_006b23af:; BB(0x006b23af);
    /* 006b23af: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006b23b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b23b2: call 0x73cadc */ r_esp -= 4; W32(r_esp, 0x6b23b7u); f_0073cadc();
    /* 006b23b7: mov dword ptr [0xa954a0], 4 */ W32((u32)(0xa954a0u), 0x4u);
    /* 006b23c1: ret  */ FN_RET(0x006b23a0); r_esp += 4; return;
L_006b23c2:; BB(0x006b23c2);
    /* 006b23c2: mov ecx, dword ptr [0xa95484] */ r_ecx = R32((u32)(0xa95484u));
    /* 006b23c8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b23ca: je 0x6b23df */ if (fZ) goto L_006b23df;
L_006b23cc:; BB(0x006b23cc);
    /* 006b23cc: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006b23ce: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b23cf: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x6b23d4u); f_0073ae38();
    /* 006b23d4: mov dword ptr [0xa954a0], 5 */ W32((u32)(0xa954a0u), 0x5u);
    /* 006b23de: ret  */ FN_RET(0x006b23a0); r_esp += 4; return;
L_006b23df:; BB(0x006b23df);
    /* 006b23df: mov edx, dword ptr [0xa954c4] */ r_edx = R32((u32)(0xa954c4u));
    /* 006b23e5: mov dword ptr [0xa954cc], edx */ W32((u32)(0xa954ccu), r_edx);
    /* 006b23eb: mov dword ptr [0xa954d0], eax */ W32((u32)(0xa954d0u), r_eax);
    /* 006b23f0: call 0x6b23f8 */ r_esp -= 4; W32(r_esp, 0x6b23f5u); f_006b23f8();
    /* 006b23f5: ret  */ FN_RET(0x006b23a0); r_esp += 4; return;
}

void f_006b23f8(void) /* sub_6B23F8 */
{
    FN_ENTER(0x006b23f8);
    /* 006b23f8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b23f9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b23fa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b23fb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b23fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b23fd: mov ebp, dword ptr [0xa954cc] */ r_ebp = R32((u32)(0xa954ccu));
    /* 006b2403: mov edi, dword ptr [0xa954d0] */ r_edi = R32((u32)(0xa954d0u));
    /* 006b2409: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b240f: call 0x718198 */ r_esp -= 4; W32(r_esp, 0x6b2414u); f_00718198();
    /* 006b2414: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b2415: call 0x717d68 */ r_esp -= 4; W32(r_esp, 0x6b241au); f_00717d68();
    /* 006b241a: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 006b2420: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2422: je 0x6b2431 */ if (fZ) goto L_006b2431;
L_006b2424:; BB(0x006b2424);
    /* 006b2424: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006b2428: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b242d: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_006b2431:; BB(0x006b2431);
    /* 006b2431: mov dword ptr [0xa954c4], ebp */ W32((u32)(0xa954c4u), r_ebp);
    /* 006b2437: cmp ebp, 0x64 */ {  u32 a = r_ebp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b243a: jl 0x6b24bb */ if ((fS!=fO)) goto L_006b24bb;
L_006b2440:; BB(0x006b2440);
    /* 006b2440: mov edx, dword ptr [0xaae168] */ r_edx = R32((u32)(0xaae168u));
    /* 006b2446: mov eax, dword ptr [0xaae16c] */ r_eax = R32((u32)(0xaae16cu));
    /* 006b244b: mov ecx, 0xffff */ r_ecx = 0xffffu;
    /* 006b2450: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006b2452: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b2454: jge 0x6b24b9 */ if ((fS==fO)) goto L_006b24b9;
L_006b2456:; BB(0x006b2456);
    /* 006b2456: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
L_006b2459:; BB(0x006b2459);
    /* 006b2459: mov esi, dword ptr [edx*4 + 0xaad720] */ r_esi = R32((u32)(r_edx*4+0xaad720u));
    /* 006b2460: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2462: je 0x6b24af */ if (fZ) goto L_006b24af;
L_006b2464:; BB(0x006b2464);
    /* 006b2464: movzx ebx, word ptr [esi + 0x1c] */ r_ebx = (u32)R16((u32)(r_esi+0x1cu));
    /* 006b2468: cmp ebx, 0x4000 */ {  u32 a = r_ebx; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b246e: jge 0x6b24a0 */ if ((fS==fO)) goto L_006b24a0;
L_006b2470:; BB(0x006b2470);
    /* 006b2470: mov edi, dword ptr [esi + 0x398] */ r_edi = R32((u32)(r_esi+0x398u));
    /* 006b2476: cmp ebp, dword ptr [esi + 0x3b4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0x3b4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b247c: jne 0x6b24af */ if (!fZ) goto L_006b24af;
L_006b247e:; BB(0x006b247e);
    /* 006b247e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2480: jne 0x6b24e8 */ if (!fZ) goto L_006b24e8;
L_006b2482:; BB(0x006b2482);
    /* 006b2482: mov esi, dword ptr [0xaafdb8] */ r_esi = R32((u32)(0xaafdb8u));
    /* 006b2488: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b248b: je 0x6b2494 */ if (fZ) goto L_006b2494;
L_006b248d:; BB(0x006b248d);
    /* 006b248d: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 006b2490: mov ebp, ebx */ r_ebp = r_ebx;
    /* 006b2492: jmp 0x6b24bb */ goto L_006b24bb;
L_006b2494:; BB(0x006b2494);
    /* 006b2494: cmp ecx, 0xffff */ {  u32 a = r_ecx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b249a: jne 0x6b24af */ if (!fZ) goto L_006b24af;
L_006b249c:; BB(0x006b249c);
    /* 006b249c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006b249e: jmp 0x6b24af */ goto L_006b24af;
L_006b24a0:; BB(0x006b24a0);
    /* 006b24a0: cmp ebp, dword ptr [esi + 0xd4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esi+0xd4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b24a6: jne 0x6b24af */ if (!fZ) goto L_006b24af;
L_006b24a8:; BB(0x006b24a8);
    /* 006b24a8: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 006b24ab: mov ebp, ebx */ r_ebp = r_ebx;
    /* 006b24ad: jmp 0x6b24bb */ goto L_006b24bb;
L_006b24af:; BB(0x006b24af);
    /* 006b24af: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b24b2: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b24b4: jl 0x6b2459 */ if ((fS!=fO)) goto L_006b2459;
L_006b24b6:; BB(0x006b24b6);
    /* 006b24b6: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_006b24b9:; BB(0x006b24b9);
    /* 006b24b9: mov ebp, ecx */ r_ebp = r_ecx;
L_006b24bb:; BB(0x006b24bb);
    /* 006b24bb: cmp ebp, 0xffff */ {  u32 a = r_ebp; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b24c1: je 0x6b24e2 */ if (fZ) goto L_006b24e2;
L_006b24c3:; BB(0x006b24c3);
    /* 006b24c3: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006b24c5: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b24c6: movzx ebp, bp */ r_ebp = (u32)(u16)r_ebp;
    /* 006b24c9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b24ca: call 0x7184f8 */ r_esp -= 4; W32(r_esp, 0x6b24cfu); f_007184f8();
    /* 006b24cf: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b24d0: call 0x718930 */ r_esp -= 4; W32(r_esp, 0x6b24d5u); f_00718930();
    /* 006b24d5: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b24d8: mov dword ptr [0xa954a0], 4 */ W32((u32)(0xa954a0u), 0x4u);
L_006b24e2:; BB(0x006b24e2);
    /* 006b24e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b24e3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b24e4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b24e5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b24e6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b24e7: ret  */ FN_RET(0x006b23f8); r_esp += 4; return;
L_006b24e8:; BB(0x006b24e8);
    /* 006b24e8: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 006b24eb: mov ebp, ebx */ r_ebp = r_ebx;
    /* 006b24ed: jmp 0x6b24bb */ goto L_006b24bb;
}

void f_006b24f0(void) /* sub_6B24F0 */
{
    FN_ENTER(0x006b24f0);
    /* 006b24f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b24f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b24f2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b24f3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b24f4: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b24fa: call 0x718108 */ r_esp -= 4; W32(r_esp, 0x6b24ffu); f_00718108();
    /* 006b24ff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b2500: call 0x717d48 */ r_esp -= 4; W32(r_esp, 0x6b2505u); f_00717d48();
    /* 006b2505: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 006b250b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b250d: je 0x6b251c */ if (fZ) goto L_006b251c;
L_006b250f:; BB(0x006b250f);
    /* 006b250f: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006b2513: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006b2518: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_006b251c:; BB(0x006b251c);
    /* 006b251c: mov eax, dword ptr [0xa954c4] */ r_eax = R32((u32)(0xa954c4u));
    /* 006b2521: cmp eax, 0x64 */ {  u32 a = r_eax; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b2524: jl 0x6b2596 */ if ((fS!=fO)) goto L_006b2596;
L_006b2526:; BB(0x006b2526);
    /* 006b2526: mov ecx, dword ptr [0xaae168] */ r_ecx = R32((u32)(0xaae168u));
    /* 006b252c: mov edx, dword ptr [0xaae16c] */ r_edx = R32((u32)(0xaae16cu));
    /* 006b2532: mov ebx, 0xffff */ r_ebx = 0xffffu;
    /* 006b2537: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006b2539: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b253b: jge 0x6b2594 */ if ((fS==fO)) goto L_006b2594;
L_006b253d:; BB(0x006b253d);
    /* 006b253d: mov esi, dword ptr [ecx*4 + 0xaad720] */ r_esi = R32((u32)(r_ecx*4+0xaad720u));
    /* 006b2544: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2546: je 0x6b258d */ if (fZ) goto L_006b258d;
L_006b2548:; BB(0x006b2548);
    /* 006b2548: movzx ebp, word ptr [esi + 0x1c] */ r_ebp = (u32)R16((u32)(r_esi+0x1cu));
    /* 006b254c: cmp ebp, 0x4000 */ {  u32 a = r_ebp; u32 b = 0x4000u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b2552: jge 0x6b2581 */ if ((fS==fO)) goto L_006b2581;
L_006b2554:; BB(0x006b2554);
    /* 006b2554: mov edi, dword ptr [esi + 0x398] */ r_edi = R32((u32)(r_esi+0x398u));
    /* 006b255a: cmp eax, dword ptr [esi + 0x3b4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0x3b4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2560: jne 0x6b258d */ if (!fZ) goto L_006b258d;
L_006b2562:; BB(0x006b2562);
    /* 006b2562: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2564: jne 0x6b25ac */ if (!fZ) goto L_006b25ac;
L_006b2566:; BB(0x006b2566);
    /* 006b2566: mov esi, dword ptr [0xaafdb8] */ r_esi = R32((u32)(0xaafdb8u));
    /* 006b256c: cmp esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b256f: je 0x6b2575 */ if (fZ) goto L_006b2575;
L_006b2571:; BB(0x006b2571);
    /* 006b2571: mov eax, ebp */ r_eax = r_ebp;
    /* 006b2573: jmp 0x6b2596 */ goto L_006b2596;
L_006b2575:; BB(0x006b2575);
    /* 006b2575: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b257b: jne 0x6b258d */ if (!fZ) goto L_006b258d;
L_006b257d:; BB(0x006b257d);
    /* 006b257d: mov ebx, ebp */ r_ebx = r_ebp;
    /* 006b257f: jmp 0x6b258d */ goto L_006b258d;
L_006b2581:; BB(0x006b2581);
    /* 006b2581: cmp eax, dword ptr [esi + 0xd4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esi+0xd4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2587: jne 0x6b258d */ if (!fZ) goto L_006b258d;
L_006b2589:; BB(0x006b2589);
    /* 006b2589: mov eax, ebp */ r_eax = r_ebp;
    /* 006b258b: jmp 0x6b2596 */ goto L_006b2596;
L_006b258d:; BB(0x006b258d);
    /* 006b258d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006b2590: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006b2592: jl 0x6b253d */ if ((fS!=fO)) goto L_006b253d;
L_006b2594:; BB(0x006b2594);
    /* 006b2594: mov eax, ebx */ r_eax = r_ebx;
L_006b2596:; BB(0x006b2596);
    /* 006b2596: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006b259b: je 0x6b25a7 */ if (fZ) goto L_006b25a7;
L_006b259d:; BB(0x006b259d);
    /* 006b259d: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006b25a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b25a1: call 0x7188b8 */ r_esp -= 4; W32(r_esp, 0x6b25a6u); f_007188b8();
    /* 006b25a6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006b25a7:; BB(0x006b25a7);
    /* 006b25a7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b25a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b25a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b25aa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b25ab: ret  */ FN_RET(0x006b24f0); r_esp += 4; return;
L_006b25ac:; BB(0x006b25ac);
    /* 006b25ac: mov eax, ebp */ r_eax = r_ebp;
    /* 006b25ae: jmp 0x6b2596 */ goto L_006b2596;
}

void f_006b25b0(void)
{
    FN_ENTER(0x006b25b0);
    /* 006b25b0: mov ecx, dword ptr [0xa95480] */ r_ecx = R32((u32)(0xa95480u));
    /* 006b25b6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b25b8: je 0x6b25c9 */ if (fZ) goto L_006b25c9;
L_006b25ba:; BB(0x006b25ba);
    /* 006b25ba: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x6b25bfu); f_007127b0();
    /* 006b25bf: mov dword ptr [0xa95480], 0 */ W32((u32)(0xa95480u), 0x0u);
L_006b25c9:; BB(0x006b25c9);
    /* 006b25c9: call 0x718010 */ r_esp -= 4; W32(r_esp, 0x6b25ceu); f_00718010();
    /* 006b25ce: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b25d4: call 0x718108 */ r_esp -= 4; W32(r_esp, 0x6b25d9u); f_00718108();
    /* 006b25d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b25da: call 0x717d48 */ r_esp -= 4; W32(r_esp, 0x6b25dfu); f_00717d48();
    /* 006b25df: mov edx, dword ptr [0xa98478] */ r_edx = R32((u32)(0xa98478u));
    /* 006b25e5: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b25e7: je 0x6b25f6 */ if (fZ) goto L_006b25f6;
L_006b25e9:; BB(0x006b25e9);
    /* 006b25e9: movzx eax, word ptr [edx + 0x1c] */ r_eax = (u32)R16((u32)(r_edx+0x1cu));
    /* 006b25ed: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b25f2: mov word ptr [edx + 0x1c], ax */ W16((u32)(r_edx+0x1cu), (u16)r_eax);
L_006b25f6:; BB(0x006b25f6);
    /* 006b25f6: ret  */ FN_RET(0x006b25b0); r_esp += 4; return;
}

void f_006b25f8(void)
{
    FN_ENTER(0x006b25f8);
    /* 006b25f8: mov edx, dword ptr [0xa95aa8] */ r_edx = R32((u32)(0xa95aa8u));
    /* 006b25fe: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2600: je 0x6b260f */ if (fZ) goto L_006b260f;
L_006b2602:; BB(0x006b2602);
    /* 006b2602: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006b2606: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b260b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006b260f:; BB(0x006b260f);
    /* 006b260f: push dword ptr [0xa954d0] */ { u32 v = R32((u32)(0xa954d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b2615: movzx eax, word ptr [0xa954cc] */ r_eax = (u32)R16((u32)(0xa954ccu));
    /* 006b261c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b261d: call 0x7b3714 */ r_esp -= 4; W32(r_esp, 0x6b2622u); f_007b3714();
    /* 006b2622: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b2625: mov edx, dword ptr [0xa95aa8] */ r_edx = R32((u32)(0xa95aa8u));
    /* 006b262b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b262d: je 0x6b263c */ if (fZ) goto L_006b263c;
L_006b262f:; BB(0x006b262f);
    /* 006b262f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006b2633: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b2638: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006b263c:; BB(0x006b263c);
    /* 006b263c: ret  */ FN_RET(0x006b25f8); r_esp += 4; return;
}

void f_006b2640(void) /* sub_6B2640 */
{
    FN_ENTER(0x006b2640);
    /* 006b2640: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b2641: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b2642: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2643: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b2646: movzx ebx, byte ptr [0xa954cc] */ r_ebx = (u32)R8((u32)(0xa954ccu));
    /* 006b264d: mov ecx, dword ptr [0xa954d0] */ r_ecx = R32((u32)(0xa954d0u));
    /* 006b2653: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b2659: mov eax, dword ptr [edx + ebx*4] */ r_eax = R32((u32)(r_edx+r_ebx*4));
    /* 006b265c: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 006b2660: lea eax, [ebx + 1] */ r_eax = (u32)(r_ebx+0x1u);
    /* 006b2663: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2666: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2669: mov word ptr [esp + 2], ax */ W16((u32)(r_esp+0x2u), (u16)r_eax);
    /* 006b266e: lea eax, [ebx + 2] */ r_eax = (u32)(r_ebx+0x2u);
    /* 006b2671: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2674: mov ebp, dword ptr [edx + eax*4] */ r_ebp = R32((u32)(r_edx+r_eax*4));
    /* 006b2677: lea eax, [ebx + 3] */ r_eax = (u32)(r_ebx+0x3u);
    /* 006b267a: cmp ebp, 0xd */ {  u32 a = r_ebp; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 006b267d: ja 0x6b26be */ if ((!fC&&!fZ)) goto L_006b26be;
L_006b267f:; BB(0x006b267f);
    /* 006b267f: mov ebp, dword ptr [ebp*4 + 0x9696f0] */ r_ebp = R32((u32)(r_ebp*4+0x9696f0u));
    /* 006b2686: jmp ebp */ { u32 t = r_ebp; jmp_ind(t); return; }
L_006b26be:; BB(0x006b26be);
    /* 006b26be: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006b26c2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26c5: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b26c8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b26cc: lea ebp, [ebx + 4] */ r_ebp = (u32)(r_ebx+0x4u);
    /* 006b26cf: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 006b26d5: fild dword ptr [edx + ebp*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ebp*4)));
    /* 006b26d8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006b26dc: lea edi, [ebx + 5] */ r_edi = (u32)(r_ebx+0x5u);
    /* 006b26df: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006b26e5: fild dword ptr [edx + edi*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_edi*4)));
    /* 006b26e8: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b26ec: lea eax, [ebx + 6] */ r_eax = (u32)(r_ebx+0x6u);
    /* 006b26ef: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26f2: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b26f5: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b26f9: lea eax, [ebx + 7] */ r_eax = (u32)(r_ebx+0x7u);
    /* 006b26fc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26ff: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b2702: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006b2706: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 006b2709: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b270c: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b270f: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006b2713: lea eax, [ebx + 9] */ r_eax = (u32)(r_ebx+0x9u);
    /* 006b2716: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2719: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b271c: mov byte ptr [esp + 0x20], al */ W8((u32)(r_esp+0x20u), (u8)r_eax);
    /* 006b2720: lea eax, [ebx + 0xa] */ r_eax = (u32)(r_ebx+0xau);
    /* 006b2723: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2726: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2729: mov byte ptr [esp + 0x21], al */ W8((u32)(r_esp+0x21u), (u8)r_eax);
    /* 006b272d: lea eax, [ebx + 0xb] */ r_eax = (u32)(r_ebx+0xbu);
    /* 006b2730: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2733: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2736: mov byte ptr [esp + 0x22], al */ W8((u32)(r_esp+0x22u), (u8)r_eax);
    /* 006b273a: lea eax, [ebx + 0xc] */ r_eax = (u32)(r_ebx+0xcu);
    /* 006b273d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2740: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2743: add ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b2746: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b2749: mov byte ptr [esp + 0x23], al */ W8((u32)(r_esp+0x23u), (u8)r_eax);
    /* 006b274d: fild dword ptr [edx + ebx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ebx*4)));
    /* 006b2750: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 006b2754: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b2757: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2758: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2759: call 0x7b444c */ r_esp -= 4; W32(r_esp, 0x6b275eu); f_007b444c();
    /* 006b275e: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b2761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b2762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b2763: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b2764: ret  */ FN_RET(0x006b2640); r_esp += 4; return;
}

void f_006b2688(void)
{
    FN_ENTER(0x006b2688);
    /* 006b2688: mov edi, 0x90 */ r_edi = 0x90u;
    /* 006b268d: jmp 0x6b26be */ goto L_006b26be;
L_006b26be:; BB(0x006b26be);
    /* 006b26be: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006b26c2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26c5: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b26c8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b26cc: lea ebp, [ebx + 4] */ r_ebp = (u32)(r_ebx+0x4u);
    /* 006b26cf: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 006b26d5: fild dword ptr [edx + ebp*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ebp*4)));
    /* 006b26d8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006b26dc: lea edi, [ebx + 5] */ r_edi = (u32)(r_ebx+0x5u);
    /* 006b26df: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006b26e5: fild dword ptr [edx + edi*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_edi*4)));
    /* 006b26e8: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b26ec: lea eax, [ebx + 6] */ r_eax = (u32)(r_ebx+0x6u);
    /* 006b26ef: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26f2: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b26f5: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b26f9: lea eax, [ebx + 7] */ r_eax = (u32)(r_ebx+0x7u);
    /* 006b26fc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26ff: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b2702: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006b2706: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 006b2709: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b270c: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b270f: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006b2713: lea eax, [ebx + 9] */ r_eax = (u32)(r_ebx+0x9u);
    /* 006b2716: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2719: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b271c: mov byte ptr [esp + 0x20], al */ W8((u32)(r_esp+0x20u), (u8)r_eax);
    /* 006b2720: lea eax, [ebx + 0xa] */ r_eax = (u32)(r_ebx+0xau);
    /* 006b2723: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2726: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2729: mov byte ptr [esp + 0x21], al */ W8((u32)(r_esp+0x21u), (u8)r_eax);
    /* 006b272d: lea eax, [ebx + 0xb] */ r_eax = (u32)(r_ebx+0xbu);
    /* 006b2730: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2733: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2736: mov byte ptr [esp + 0x22], al */ W8((u32)(r_esp+0x22u), (u8)r_eax);
    /* 006b273a: lea eax, [ebx + 0xc] */ r_eax = (u32)(r_ebx+0xcu);
    /* 006b273d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2740: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2743: add ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b2746: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b2749: mov byte ptr [esp + 0x23], al */ W8((u32)(r_esp+0x23u), (u8)r_eax);
    /* 006b274d: fild dword ptr [edx + ebx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ebx*4)));
    /* 006b2750: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 006b2754: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b2757: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2758: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2759: call 0x7b444c */ r_esp -= 4; W32(r_esp, 0x6b275eu); f_007b444c();
    /* 006b275e: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b2761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b2762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b2763: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b2764: ret  */ FN_RET(0x006b2688); r_esp += 4; return;
}

void f_006b268f(void)
{
    FN_ENTER(0x006b268f);
    /* 006b268f: mov edi, 0x88 */ r_edi = 0x88u;
    /* 006b2694: jmp 0x6b26be */ goto L_006b26be;
L_006b26be:; BB(0x006b26be);
    /* 006b26be: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006b26c2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26c5: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b26c8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b26cc: lea ebp, [ebx + 4] */ r_ebp = (u32)(r_ebx+0x4u);
    /* 006b26cf: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 006b26d5: fild dword ptr [edx + ebp*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ebp*4)));
    /* 006b26d8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006b26dc: lea edi, [ebx + 5] */ r_edi = (u32)(r_ebx+0x5u);
    /* 006b26df: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006b26e5: fild dword ptr [edx + edi*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_edi*4)));
    /* 006b26e8: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b26ec: lea eax, [ebx + 6] */ r_eax = (u32)(r_ebx+0x6u);
    /* 006b26ef: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26f2: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b26f5: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b26f9: lea eax, [ebx + 7] */ r_eax = (u32)(r_ebx+0x7u);
    /* 006b26fc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26ff: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b2702: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006b2706: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 006b2709: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b270c: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b270f: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006b2713: lea eax, [ebx + 9] */ r_eax = (u32)(r_ebx+0x9u);
    /* 006b2716: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2719: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b271c: mov byte ptr [esp + 0x20], al */ W8((u32)(r_esp+0x20u), (u8)r_eax);
    /* 006b2720: lea eax, [ebx + 0xa] */ r_eax = (u32)(r_ebx+0xau);
    /* 006b2723: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2726: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2729: mov byte ptr [esp + 0x21], al */ W8((u32)(r_esp+0x21u), (u8)r_eax);
    /* 006b272d: lea eax, [ebx + 0xb] */ r_eax = (u32)(r_ebx+0xbu);
    /* 006b2730: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2733: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2736: mov byte ptr [esp + 0x22], al */ W8((u32)(r_esp+0x22u), (u8)r_eax);
    /* 006b273a: lea eax, [ebx + 0xc] */ r_eax = (u32)(r_ebx+0xcu);
    /* 006b273d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2740: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2743: add ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b2746: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b2749: mov byte ptr [esp + 0x23], al */ W8((u32)(r_esp+0x23u), (u8)r_eax);
    /* 006b274d: fild dword ptr [edx + ebx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ebx*4)));
    /* 006b2750: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 006b2754: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b2757: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2758: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2759: call 0x7b444c */ r_esp -= 4; W32(r_esp, 0x6b275eu); f_007b444c();
    /* 006b275e: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b2761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b2762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b2763: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b2764: ret  */ FN_RET(0x006b268f); r_esp += 4; return;
}

void f_006b2696(void)
{
    FN_ENTER(0x006b2696);
    /* 006b2696: mov edi, 0x84 */ r_edi = 0x84u;
    /* 006b269b: jmp 0x6b26be */ goto L_006b26be;
L_006b26be:; BB(0x006b26be);
    /* 006b26be: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006b26c2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26c5: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b26c8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b26cc: lea ebp, [ebx + 4] */ r_ebp = (u32)(r_ebx+0x4u);
    /* 006b26cf: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 006b26d5: fild dword ptr [edx + ebp*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ebp*4)));
    /* 006b26d8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006b26dc: lea edi, [ebx + 5] */ r_edi = (u32)(r_ebx+0x5u);
    /* 006b26df: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006b26e5: fild dword ptr [edx + edi*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_edi*4)));
    /* 006b26e8: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b26ec: lea eax, [ebx + 6] */ r_eax = (u32)(r_ebx+0x6u);
    /* 006b26ef: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26f2: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b26f5: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b26f9: lea eax, [ebx + 7] */ r_eax = (u32)(r_ebx+0x7u);
    /* 006b26fc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26ff: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b2702: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006b2706: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 006b2709: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b270c: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b270f: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006b2713: lea eax, [ebx + 9] */ r_eax = (u32)(r_ebx+0x9u);
    /* 006b2716: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2719: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b271c: mov byte ptr [esp + 0x20], al */ W8((u32)(r_esp+0x20u), (u8)r_eax);
    /* 006b2720: lea eax, [ebx + 0xa] */ r_eax = (u32)(r_ebx+0xau);
    /* 006b2723: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2726: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2729: mov byte ptr [esp + 0x21], al */ W8((u32)(r_esp+0x21u), (u8)r_eax);
    /* 006b272d: lea eax, [ebx + 0xb] */ r_eax = (u32)(r_ebx+0xbu);
    /* 006b2730: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2733: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2736: mov byte ptr [esp + 0x22], al */ W8((u32)(r_esp+0x22u), (u8)r_eax);
    /* 006b273a: lea eax, [ebx + 0xc] */ r_eax = (u32)(r_ebx+0xcu);
    /* 006b273d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2740: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2743: add ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b2746: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b2749: mov byte ptr [esp + 0x23], al */ W8((u32)(r_esp+0x23u), (u8)r_eax);
    /* 006b274d: fild dword ptr [edx + ebx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ebx*4)));
    /* 006b2750: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 006b2754: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b2757: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2758: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2759: call 0x7b444c */ r_esp -= 4; W32(r_esp, 0x6b275eu); f_007b444c();
    /* 006b275e: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b2761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b2762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b2763: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b2764: ret  */ FN_RET(0x006b2696); r_esp += 4; return;
}

void f_006b269d(void)
{
    FN_ENTER(0x006b269d);
    /* 006b269d: mov edi, 0xc0 */ r_edi = 0xc0u;
    /* 006b26a2: jmp 0x6b26be */ goto L_006b26be;
L_006b26be:; BB(0x006b26be);
    /* 006b26be: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006b26c2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26c5: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b26c8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b26cc: lea ebp, [ebx + 4] */ r_ebp = (u32)(r_ebx+0x4u);
    /* 006b26cf: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 006b26d5: fild dword ptr [edx + ebp*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ebp*4)));
    /* 006b26d8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006b26dc: lea edi, [ebx + 5] */ r_edi = (u32)(r_ebx+0x5u);
    /* 006b26df: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006b26e5: fild dword ptr [edx + edi*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_edi*4)));
    /* 006b26e8: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b26ec: lea eax, [ebx + 6] */ r_eax = (u32)(r_ebx+0x6u);
    /* 006b26ef: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26f2: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b26f5: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b26f9: lea eax, [ebx + 7] */ r_eax = (u32)(r_ebx+0x7u);
    /* 006b26fc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26ff: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b2702: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006b2706: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 006b2709: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b270c: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b270f: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006b2713: lea eax, [ebx + 9] */ r_eax = (u32)(r_ebx+0x9u);
    /* 006b2716: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2719: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b271c: mov byte ptr [esp + 0x20], al */ W8((u32)(r_esp+0x20u), (u8)r_eax);
    /* 006b2720: lea eax, [ebx + 0xa] */ r_eax = (u32)(r_ebx+0xau);
    /* 006b2723: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2726: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2729: mov byte ptr [esp + 0x21], al */ W8((u32)(r_esp+0x21u), (u8)r_eax);
    /* 006b272d: lea eax, [ebx + 0xb] */ r_eax = (u32)(r_ebx+0xbu);
    /* 006b2730: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2733: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2736: mov byte ptr [esp + 0x22], al */ W8((u32)(r_esp+0x22u), (u8)r_eax);
    /* 006b273a: lea eax, [ebx + 0xc] */ r_eax = (u32)(r_ebx+0xcu);
    /* 006b273d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2740: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2743: add ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b2746: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b2749: mov byte ptr [esp + 0x23], al */ W8((u32)(r_esp+0x23u), (u8)r_eax);
    /* 006b274d: fild dword ptr [edx + ebx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ebx*4)));
    /* 006b2750: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 006b2754: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b2757: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2758: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2759: call 0x7b444c */ r_esp -= 4; W32(r_esp, 0x6b275eu); f_007b444c();
    /* 006b275e: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b2761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b2762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b2763: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b2764: ret  */ FN_RET(0x006b269d); r_esp += 4; return;
}

void f_006b26a4(void)
{
    FN_ENTER(0x006b26a4);
    /* 006b26a4: mov edi, 0x10 */ r_edi = 0x10u;
    /* 006b26a9: jmp 0x6b26be */ goto L_006b26be;
L_006b26be:; BB(0x006b26be);
    /* 006b26be: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006b26c2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26c5: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b26c8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b26cc: lea ebp, [ebx + 4] */ r_ebp = (u32)(r_ebx+0x4u);
    /* 006b26cf: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 006b26d5: fild dword ptr [edx + ebp*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ebp*4)));
    /* 006b26d8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006b26dc: lea edi, [ebx + 5] */ r_edi = (u32)(r_ebx+0x5u);
    /* 006b26df: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006b26e5: fild dword ptr [edx + edi*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_edi*4)));
    /* 006b26e8: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b26ec: lea eax, [ebx + 6] */ r_eax = (u32)(r_ebx+0x6u);
    /* 006b26ef: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26f2: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b26f5: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b26f9: lea eax, [ebx + 7] */ r_eax = (u32)(r_ebx+0x7u);
    /* 006b26fc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26ff: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b2702: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006b2706: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 006b2709: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b270c: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b270f: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006b2713: lea eax, [ebx + 9] */ r_eax = (u32)(r_ebx+0x9u);
    /* 006b2716: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2719: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b271c: mov byte ptr [esp + 0x20], al */ W8((u32)(r_esp+0x20u), (u8)r_eax);
    /* 006b2720: lea eax, [ebx + 0xa] */ r_eax = (u32)(r_ebx+0xau);
    /* 006b2723: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2726: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2729: mov byte ptr [esp + 0x21], al */ W8((u32)(r_esp+0x21u), (u8)r_eax);
    /* 006b272d: lea eax, [ebx + 0xb] */ r_eax = (u32)(r_ebx+0xbu);
    /* 006b2730: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2733: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2736: mov byte ptr [esp + 0x22], al */ W8((u32)(r_esp+0x22u), (u8)r_eax);
    /* 006b273a: lea eax, [ebx + 0xc] */ r_eax = (u32)(r_ebx+0xcu);
    /* 006b273d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2740: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2743: add ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b2746: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b2749: mov byte ptr [esp + 0x23], al */ W8((u32)(r_esp+0x23u), (u8)r_eax);
    /* 006b274d: fild dword ptr [edx + ebx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ebx*4)));
    /* 006b2750: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 006b2754: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b2757: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2758: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2759: call 0x7b444c */ r_esp -= 4; W32(r_esp, 0x6b275eu); f_007b444c();
    /* 006b275e: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b2761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b2762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b2763: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b2764: ret  */ FN_RET(0x006b26a4); r_esp += 4; return;
}

void f_006b26ab(void)
{
    FN_ENTER(0x006b26ab);
    /* 006b26ab: mov edi, 8 */ r_edi = 0x8u;
    /* 006b26b0: jmp 0x6b26be */ goto L_006b26be;
L_006b26be:; BB(0x006b26be);
    /* 006b26be: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006b26c2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26c5: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b26c8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b26cc: lea ebp, [ebx + 4] */ r_ebp = (u32)(r_ebx+0x4u);
    /* 006b26cf: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 006b26d5: fild dword ptr [edx + ebp*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ebp*4)));
    /* 006b26d8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006b26dc: lea edi, [ebx + 5] */ r_edi = (u32)(r_ebx+0x5u);
    /* 006b26df: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006b26e5: fild dword ptr [edx + edi*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_edi*4)));
    /* 006b26e8: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b26ec: lea eax, [ebx + 6] */ r_eax = (u32)(r_ebx+0x6u);
    /* 006b26ef: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26f2: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b26f5: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b26f9: lea eax, [ebx + 7] */ r_eax = (u32)(r_ebx+0x7u);
    /* 006b26fc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26ff: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b2702: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006b2706: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 006b2709: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b270c: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b270f: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006b2713: lea eax, [ebx + 9] */ r_eax = (u32)(r_ebx+0x9u);
    /* 006b2716: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2719: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b271c: mov byte ptr [esp + 0x20], al */ W8((u32)(r_esp+0x20u), (u8)r_eax);
    /* 006b2720: lea eax, [ebx + 0xa] */ r_eax = (u32)(r_ebx+0xau);
    /* 006b2723: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2726: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2729: mov byte ptr [esp + 0x21], al */ W8((u32)(r_esp+0x21u), (u8)r_eax);
    /* 006b272d: lea eax, [ebx + 0xb] */ r_eax = (u32)(r_ebx+0xbu);
    /* 006b2730: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2733: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2736: mov byte ptr [esp + 0x22], al */ W8((u32)(r_esp+0x22u), (u8)r_eax);
    /* 006b273a: lea eax, [ebx + 0xc] */ r_eax = (u32)(r_ebx+0xcu);
    /* 006b273d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2740: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2743: add ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b2746: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b2749: mov byte ptr [esp + 0x23], al */ W8((u32)(r_esp+0x23u), (u8)r_eax);
    /* 006b274d: fild dword ptr [edx + ebx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ebx*4)));
    /* 006b2750: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 006b2754: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b2757: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2758: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2759: call 0x7b444c */ r_esp -= 4; W32(r_esp, 0x6b275eu); f_007b444c();
    /* 006b275e: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b2761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b2762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b2763: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b2764: ret  */ FN_RET(0x006b26ab); r_esp += 4; return;
}

void f_006b26b2(void)
{
    FN_ENTER(0x006b26b2);
    /* 006b26b2: mov edi, 4 */ r_edi = 0x4u;
    /* 006b26b7: jmp 0x6b26be */ goto L_006b26be;
L_006b26be:; BB(0x006b26be);
    /* 006b26be: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006b26c2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26c5: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b26c8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b26cc: lea ebp, [ebx + 4] */ r_ebp = (u32)(r_ebx+0x4u);
    /* 006b26cf: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 006b26d5: fild dword ptr [edx + ebp*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ebp*4)));
    /* 006b26d8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006b26dc: lea edi, [ebx + 5] */ r_edi = (u32)(r_ebx+0x5u);
    /* 006b26df: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006b26e5: fild dword ptr [edx + edi*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_edi*4)));
    /* 006b26e8: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b26ec: lea eax, [ebx + 6] */ r_eax = (u32)(r_ebx+0x6u);
    /* 006b26ef: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26f2: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b26f5: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b26f9: lea eax, [ebx + 7] */ r_eax = (u32)(r_ebx+0x7u);
    /* 006b26fc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26ff: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b2702: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006b2706: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 006b2709: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b270c: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b270f: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006b2713: lea eax, [ebx + 9] */ r_eax = (u32)(r_ebx+0x9u);
    /* 006b2716: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2719: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b271c: mov byte ptr [esp + 0x20], al */ W8((u32)(r_esp+0x20u), (u8)r_eax);
    /* 006b2720: lea eax, [ebx + 0xa] */ r_eax = (u32)(r_ebx+0xau);
    /* 006b2723: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2726: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2729: mov byte ptr [esp + 0x21], al */ W8((u32)(r_esp+0x21u), (u8)r_eax);
    /* 006b272d: lea eax, [ebx + 0xb] */ r_eax = (u32)(r_ebx+0xbu);
    /* 006b2730: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2733: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2736: mov byte ptr [esp + 0x22], al */ W8((u32)(r_esp+0x22u), (u8)r_eax);
    /* 006b273a: lea eax, [ebx + 0xc] */ r_eax = (u32)(r_ebx+0xcu);
    /* 006b273d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2740: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2743: add ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b2746: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b2749: mov byte ptr [esp + 0x23], al */ W8((u32)(r_esp+0x23u), (u8)r_eax);
    /* 006b274d: fild dword ptr [edx + ebx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ebx*4)));
    /* 006b2750: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 006b2754: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b2757: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2758: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2759: call 0x7b444c */ r_esp -= 4; W32(r_esp, 0x6b275eu); f_007b444c();
    /* 006b275e: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b2761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b2762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b2763: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b2764: ret  */ FN_RET(0x006b26b2); r_esp += 4; return;
}

void f_006b26b9(void)
{
    FN_ENTER(0x006b26b9);
    /* 006b26b9: mov edi, 0x40 */ r_edi = 0x40u;
    /* 006b26be: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006b26c2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26c5: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b26c8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b26cc: lea ebp, [ebx + 4] */ r_ebp = (u32)(r_ebx+0x4u);
    /* 006b26cf: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 006b26d5: fild dword ptr [edx + ebp*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ebp*4)));
    /* 006b26d8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006b26dc: lea edi, [ebx + 5] */ r_edi = (u32)(r_ebx+0x5u);
    /* 006b26df: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006b26e5: fild dword ptr [edx + edi*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_edi*4)));
    /* 006b26e8: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b26ec: lea eax, [ebx + 6] */ r_eax = (u32)(r_ebx+0x6u);
    /* 006b26ef: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26f2: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b26f5: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b26f9: lea eax, [ebx + 7] */ r_eax = (u32)(r_ebx+0x7u);
    /* 006b26fc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26ff: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b2702: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006b2706: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 006b2709: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b270c: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b270f: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006b2713: lea eax, [ebx + 9] */ r_eax = (u32)(r_ebx+0x9u);
    /* 006b2716: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2719: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b271c: mov byte ptr [esp + 0x20], al */ W8((u32)(r_esp+0x20u), (u8)r_eax);
    /* 006b2720: lea eax, [ebx + 0xa] */ r_eax = (u32)(r_ebx+0xau);
    /* 006b2723: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2726: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2729: mov byte ptr [esp + 0x21], al */ W8((u32)(r_esp+0x21u), (u8)r_eax);
    /* 006b272d: lea eax, [ebx + 0xb] */ r_eax = (u32)(r_ebx+0xbu);
    /* 006b2730: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2733: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2736: mov byte ptr [esp + 0x22], al */ W8((u32)(r_esp+0x22u), (u8)r_eax);
    /* 006b273a: lea eax, [ebx + 0xc] */ r_eax = (u32)(r_ebx+0xcu);
    /* 006b273d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2740: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2743: add ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b2746: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b2749: mov byte ptr [esp + 0x23], al */ W8((u32)(r_esp+0x23u), (u8)r_eax);
    /* 006b274d: fild dword ptr [edx + ebx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ebx*4)));
    /* 006b2750: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 006b2754: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b2757: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2758: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2759: call 0x7b444c */ r_esp -= 4; W32(r_esp, 0x6b275eu); f_007b444c();
    /* 006b275e: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b2761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b2762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b2763: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b2764: ret  */ FN_RET(0x006b26b9); r_esp += 4; return;
}

void f_006b26be(void)
{
    FN_ENTER(0x006b26be);
    /* 006b26be: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006b26c2: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26c5: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b26c8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b26cc: lea ebp, [ebx + 4] */ r_ebp = (u32)(r_ebx+0x4u);
    /* 006b26cf: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 006b26d5: fild dword ptr [edx + ebp*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ebp*4)));
    /* 006b26d8: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006b26dc: lea edi, [ebx + 5] */ r_edi = (u32)(r_ebx+0x5u);
    /* 006b26df: and edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
    /* 006b26e5: fild dword ptr [edx + edi*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_edi*4)));
    /* 006b26e8: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b26ec: lea eax, [ebx + 6] */ r_eax = (u32)(r_ebx+0x6u);
    /* 006b26ef: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26f2: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b26f5: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b26f9: lea eax, [ebx + 7] */ r_eax = (u32)(r_ebx+0x7u);
    /* 006b26fc: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b26ff: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b2702: fstp dword ptr [esp + 0x18] */ W_F32((u32)(r_esp+0x18u), ST(0)); FPOP();
    /* 006b2706: lea eax, [ebx + 8] */ r_eax = (u32)(r_ebx+0x8u);
    /* 006b2709: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b270c: fild dword ptr [edx + eax*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_eax*4)));
    /* 006b270f: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 006b2713: lea eax, [ebx + 9] */ r_eax = (u32)(r_ebx+0x9u);
    /* 006b2716: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2719: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b271c: mov byte ptr [esp + 0x20], al */ W8((u32)(r_esp+0x20u), (u8)r_eax);
    /* 006b2720: lea eax, [ebx + 0xa] */ r_eax = (u32)(r_ebx+0xau);
    /* 006b2723: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2726: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2729: mov byte ptr [esp + 0x21], al */ W8((u32)(r_esp+0x21u), (u8)r_eax);
    /* 006b272d: lea eax, [ebx + 0xb] */ r_eax = (u32)(r_ebx+0xbu);
    /* 006b2730: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2733: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2736: mov byte ptr [esp + 0x22], al */ W8((u32)(r_esp+0x22u), (u8)r_eax);
    /* 006b273a: lea eax, [ebx + 0xc] */ r_eax = (u32)(r_ebx+0xcu);
    /* 006b273d: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 006b2740: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 006b2743: add ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006b2746: movzx ebx, bl */ r_ebx = (u32)(u8)r_ebx;
    /* 006b2749: mov byte ptr [esp + 0x23], al */ W8((u32)(r_esp+0x23u), (u8)r_eax);
    /* 006b274d: fild dword ptr [edx + ebx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ebx*4)));
    /* 006b2750: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 006b2754: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b2757: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2758: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2759: call 0x7b444c */ r_esp -= 4; W32(r_esp, 0x6b275eu); f_007b444c();
    /* 006b275e: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b2761: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b2762: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b2763: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b2764: ret  */ FN_RET(0x006b26be); r_esp += 4; return;
}

void f_006b2768(void) /* sub_6B2768 */
{
    FN_ENTER(0x006b2768);
    /* 006b2768: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2769: mov ebx, dword ptr [0xa954cc] */ r_ebx = R32((u32)(0xa954ccu));
    /* 006b276f: mov eax, dword ptr [0xa954d0] */ r_eax = R32((u32)(0xa954d0u));
    /* 006b2774: mov ecx, dword ptr [0xa95aa8] */ r_ecx = R32((u32)(0xa95aa8u));
    /* 006b277a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b277c: je 0x6b278c */ if (fZ) goto L_006b278c;
L_006b277e:; BB(0x006b277e);
    /* 006b277e: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 006b2782: or edx, 0xffff0004 */ {  u32 a = r_edx; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 006b2788: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
L_006b278c:; BB(0x006b278c);
    /* 006b278c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b278d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006b278f: movzx edx, bx */ r_edx = (u32)(u16)r_ebx;
    /* 006b2792: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2793: call 0x7b3790 */ r_esp -= 4; W32(r_esp, 0x6b2798u); f_007b3790();
    /* 006b2798: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b279b: mov edx, dword ptr [0xa95aa8] */ r_edx = R32((u32)(0xa95aa8u));
    /* 006b27a1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b27a3: je 0x6b27b2 */ if (fZ) goto L_006b27b2;
L_006b27a5:; BB(0x006b27a5);
    /* 006b27a5: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006b27a9: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b27ae: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006b27b2:; BB(0x006b27b2);
    /* 006b27b2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b27b3: ret  */ FN_RET(0x006b2768); r_esp += 4; return;
}

void f_006b27b4(void) /* sub_6B27B4 */
{
    FN_ENTER(0x006b27b4);
    /* 006b27b4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b27b5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b27b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b27b7: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b27ba: movzx edi, byte ptr [esp + 0x34] */ r_edi = (u32)R8((u32)(r_esp+0x34u));
    /* 006b27bf: mov ebp, dword ptr [0xa954b0] */ r_ebp = R32((u32)(0xa954b0u));
    /* 006b27c5: fild dword ptr [ebp + edi*4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+r_edi*4)));
    /* 006b27c9: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b27cc: fild dword ptr [ebp + edi*4 + 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+r_edi*4+0x4u)));
    /* 006b27d0: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006b27d4: fild dword ptr [ebp + edi*4 + 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+r_edi*4+0x8u)));
    /* 006b27d8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b27dc: fild dword ptr [ebp + edi*4 + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+r_edi*4+0xcu)));
    /* 006b27e0: mov ecx, dword ptr [ebp + edi*4 + 0x10] */ r_ecx = R32((u32)(r_ebp+r_edi*4+0x10u));
    /* 006b27e4: fmul dword ptr [0x969990] */ ST(0) = ST(0) * R_F32((u32)(0x969990u));
    /* 006b27ea: fdiv dword ptr [0x96998c] */ ST(0) = ST(0) / R_F32((u32)(0x96998cu));
    /* 006b27f0: mov edx, dword ptr [ebp + edi*4 + 0x14] */ r_edx = R32((u32)(r_ebp+r_edi*4+0x14u));
    /* 006b27f4: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 006b27f8: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 006b27fd: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b2802: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006b2806: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006b280a: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006b280e: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 006b2812: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 006b2816: mov eax, dword ptr [ebp + edi*4 + 0x18] */ r_eax = R32((u32)(r_ebp+r_edi*4+0x18u));
    /* 006b281a: mov edi, dword ptr [0xa95aa8] */ r_edi = R32((u32)(0xa95aa8u));
    /* 006b2820: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2822: je 0x6b2832 */ if (fZ) goto L_006b2832;
L_006b2824:; BB(0x006b2824);
    /* 006b2824: movzx ebp, word ptr [edi + 8] */ r_ebp = (u32)R16((u32)(r_edi+0x8u));
    /* 006b2828: or ebp, 0xffff0004 */ {  u32 a = r_ebp; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 006b282e: mov word ptr [edi + 8], bp */ W16((u32)(r_edi+0x8u), (u16)r_ebp);
L_006b2832:; BB(0x006b2832);
    /* 006b2832: movzx ebp, cx */ r_ebp = (u32)(u16)r_ecx;
    /* 006b2835: movzx ecx, ax */ r_ecx = (u32)(u16)r_eax;
    /* 006b2838: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b283b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b283c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b283d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b283e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b283f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b2840: call 0x7b38fc */ r_esp -= 4; W32(r_esp, 0x6b2845u); f_007b38fc();
    /* 006b2845: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b2848: mov edx, dword ptr [0xa95aa8] */ r_edx = R32((u32)(0xa95aa8u));
    /* 006b284e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2850: je 0x6b285f */ if (fZ) goto L_006b285f;
L_006b2852:; BB(0x006b2852);
    /* 006b2852: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006b2856: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006b285b: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006b285f:; BB(0x006b285f);
    /* 006b285f: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b2862: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b2863: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b2864: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b2865: ret  */ FN_RET(0x006b27b4); r_esp += 4; return;
}

void f_006b2868(void)
{
    FN_ENTER(0x006b2868);
    /* 006b2868: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b2869: mov ebp, esp */ r_ebp = r_esp;
    /* 006b286b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b286d: push 0x8ebe4c */ { u32 v = 0x8ebe4cu; r_esp -= 4; W32(r_esp, v); }
    /* 006b2872: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006b2878: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b2879: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006b2880: sub esp, 0x4c */ {  u32 a = r_esp; u32 b = 0x4cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b2883: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006b2886: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 006b2889: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 006b288c: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 006b288f: movzx ebx, byte ptr [ebp + 8] */ r_ebx = (u32)R8((u32)(r_ebp+0x8u));
    /* 006b2893: mov ecx, dword ptr [0xa954b0] */ r_ecx = R32((u32)(0xa954b0u));
    /* 006b2899: fild dword ptr [ecx + ebx*4] */ FPUSH((long double)(i32)R32((u32)(r_ecx+r_ebx*4)));
    /* 006b289c: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 006b289f: fild dword ptr [ecx + ebx*4 + 4] */ FPUSH((long double)(i32)R32((u32)(r_ecx+r_ebx*4+0x4u)));
    /* 006b28a3: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 006b28a6: fild dword ptr [ecx + ebx*4 + 8] */ FPUSH((long double)(i32)R32((u32)(r_ecx+r_ebx*4+0x8u)));
    /* 006b28aa: fstp dword ptr [ebp - 0x50] */ W_F32((u32)(r_ebp+0xffffffb0u), ST(0)); FPOP();
    /* 006b28ad: fild dword ptr [ecx + ebx*4 + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ecx+r_ebx*4+0xcu)));
    /* 006b28b1: mov edx, dword ptr [ecx + ebx*4 + 0x10] */ r_edx = R32((u32)(r_ecx+r_ebx*4+0x10u));
    /* 006b28b5: fmul dword ptr [0x969988] */ ST(0) = ST(0) * R_F32((u32)(0x969988u));
    /* 006b28bb: fdiv dword ptr [0x969984] */ ST(0) = ST(0) / R_F32((u32)(0x969984u));
    /* 006b28c1: fnstcw word ptr [ebp - 0x44] */ W16((u32)(r_ebp+0xffffffbcu), fcw);
    /* 006b28c4: movzx eax, word ptr [ebp - 0x44] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffbcu));
    /* 006b28c8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b28cd: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 006b28d0: fldcw word ptr [ebp - 0x3c] */ fcw = R16((u32)(r_ebp+0xffffffc4u));
    /* 006b28d3: fistp dword ptr [ebp - 0x34] */ W32((u32)(r_ebp+0xffffffccu), (u32)fx_int32(ST(0))); FPOP();
    /* 006b28d6: fldcw word ptr [ebp - 0x44] */ fcw = R16((u32)(r_ebp+0xffffffbcu));
    /* 006b28d9: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 006b28dc: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006b28df: mov eax, dword ptr [ecx + ebx*4 + 0x14] */ r_eax = R32((u32)(r_ecx+r_ebx*4+0x14u));
    /* 006b28e3: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 006b28e6: mov edx, dword ptr [0xa95aa8] */ r_edx = R32((u32)(0xa95aa8u));
    /* 006b28ec: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006b28ef: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b28f1: je 0x6b2900 */ if (fZ) goto L_006b2900;
L_006b28f3:; BB(0x006b28f3);
    /* 006b28f3: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006b28f7: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b28fc: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006b2900:; BB(0x006b2900);
    /* 006b2900: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 006b2907: push 0xec0 */ { u32 v = 0xec0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b290c: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6b2911u); f_005caba4();
    /* 006b2911: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006b2914: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b2917: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 006b291a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b291c: je 0x6b29ea */ if (fZ) goto L_006b29ea;
L_006b2922:; BB(0x006b2922);
    /* 006b2922: mov dword ptr [ebp - 0x4c], 1 */ W32((u32)(r_ebp+0xffffffb4u), 0x1u);
    /* 006b2929: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006b2930: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006b2933: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b2934: call 0x7adf48 */ r_esp -= 4; W32(r_esp, 0x6b2939u); f_007adf48();
    /* 006b2939: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b293a: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006b293d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b293e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006b2940: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006b2942: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b2948: call 0x6862e8 */ r_esp -= 4; W32(r_esp, 0x6b294du); f_006862e8();
    /* 006b294d: mov dword ptr [ebp - 0x4c], 0 */ W32((u32)(r_ebp+0xffffffb4u), 0x0u);
    /* 006b2954: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b295b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006b295e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2960: je 0x6b29c2 */ if (fZ) goto L_006b29c2;
L_006b2962:; BB(0x006b2962);
    /* 006b2962: mov edx, eax */ r_edx = r_eax;
    /* 006b2964: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006b2967: lea ebx, [ebp - 0x58] */ r_ebx = (u32)(r_ebp+0xffffffa8u);
    /* 006b296a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b296b: mov eax, 6 */ r_eax = 0x6u;
    /* 006b2970: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2971: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006b2973: mov word ptr [edx + 0x32c], ax */ W16((u32)(r_edx+0x32cu), (u16)r_eax);
    /* 006b297a: call 0x688ee4 */ r_esp -= 4; W32(r_esp, 0x6b297fu); f_00688ee4();
    /* 006b297f: push dword ptr [ebp - 0x50] */ { u32 v = R32((u32)(r_ebp+0xffffffb0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b2982: push dword ptr [ebp - 0x54] */ { u32 v = R32((u32)(r_ebp+0xffffffacu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b2985: push dword ptr [ebp - 0x58] */ { u32 v = R32((u32)(r_ebp+0xffffffa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b2988: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006b298b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b298c: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 006b298e: call 0x6986ac */ r_esp -= 4; W32(r_esp, 0x6b2993u); f_006986ac();
    /* 006b2993: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b2996: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006b2999: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006b299b: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x6b299eu); call_ind(t); }
    /* 006b299e: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006b29a1: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b29a4: jne 0x6b29c2 */ if (!fZ) goto L_006b29c2;
L_006b29a6:; BB(0x006b29a6);
    /* 006b29a6: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006b29a9: call 0x69adc8 */ r_esp -= 4; W32(r_esp, 0x6b29aeu); f_0069adc8();
    /* 006b29ae: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006b29b1: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 006b29b7: or eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b29bc: mov dword ptr [edx + 0x33c], eax */ W32((u32)(r_edx+0x33cu), r_eax);
L_006b29c2:; BB(0x006b29c2);
    /* 006b29c2: mov edx, dword ptr [0xa95aa8] */ r_edx = R32((u32)(0xa95aa8u));
    /* 006b29c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b29ca: je 0x6b29d9 */ if (fZ) goto L_006b29d9;
L_006b29cc:; BB(0x006b29cc);
    /* 006b29cc: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006b29d0: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b29d5: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006b29d9:; BB(0x006b29d9);
    /* 006b29d9: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006b29dc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006b29df: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006b29e6: mov esp, ebp */ r_esp = r_ebp;
    /* 006b29e8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b29e9: ret  */ FN_RET(0x006b2868); r_esp += 4; return;
L_006b29ea:; BB(0x006b29ea);
    /* 006b29ea: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b29ec: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006b29ef: jmp 0x6b2954 */ f_006b2954(); return;
}

void f_006b29f4(void)
{
    FN_ENTER(0x006b29f4);
    /* 006b29f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b29f5: mov ebp, esp */ r_ebp = r_esp;
    /* 006b29f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006b29f9: push 0x8ebe74 */ { u32 v = 0x8ebe74u; r_esp -= 4; W32(r_esp, v); }
    /* 006b29fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006b2a04: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b2a05: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006b2a0c: sub esp, 0x50 */ {  u32 a = r_esp; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b2a0f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006b2a12: mov dword ptr [ebp - 0x30], edi */ W32((u32)(r_ebp+0xffffffd0u), r_edi);
    /* 006b2a15: mov dword ptr [ebp - 0x2c], esi */ W32((u32)(r_ebp+0xffffffd4u), r_esi);
    /* 006b2a18: mov dword ptr [ebp - 0x28], ebx */ W32((u32)(r_ebp+0xffffffd8u), r_ebx);
    /* 006b2a1b: movzx esi, byte ptr [ebp + 8] */ r_esi = (u32)R8((u32)(r_ebp+0x8u));
    /* 006b2a1f: mov ebx, dword ptr [0xa954b0] */ r_ebx = R32((u32)(0xa954b0u));
    /* 006b2a25: fild dword ptr [ebx + esi*4] */ FPUSH((long double)(i32)R32((u32)(r_ebx+r_esi*4)));
    /* 006b2a28: fstp dword ptr [ebp - 0x5c] */ W_F32((u32)(r_ebp+0xffffffa4u), ST(0)); FPOP();
    /* 006b2a2b: fild dword ptr [ebx + esi*4 + 4] */ FPUSH((long double)(i32)R32((u32)(r_ebx+r_esi*4+0x4u)));
    /* 006b2a2f: fstp dword ptr [ebp - 0x58] */ W_F32((u32)(r_ebp+0xffffffa8u), ST(0)); FPOP();
    /* 006b2a32: fild dword ptr [ebx + esi*4 + 8] */ FPUSH((long double)(i32)R32((u32)(r_ebx+r_esi*4+0x8u)));
    /* 006b2a36: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 006b2a39: fild dword ptr [ebx + esi*4 + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebx+r_esi*4+0xcu)));
    /* 006b2a3d: mov edx, dword ptr [ebx + esi*4 + 0x10] */ r_edx = R32((u32)(r_ebx+r_esi*4+0x10u));
    /* 006b2a41: fmul dword ptr [0x969980] */ ST(0) = ST(0) * R_F32((u32)(0x969980u));
    /* 006b2a47: fdiv dword ptr [0x96997c] */ ST(0) = ST(0) / R_F32((u32)(0x96997cu));
    /* 006b2a4d: mov ecx, dword ptr [ebx + esi*4 + 0x14] */ r_ecx = R32((u32)(r_ebx+r_esi*4+0x14u));
    /* 006b2a51: fnstcw word ptr [ebp - 0x48] */ W16((u32)(r_ebp+0xffffffb8u), fcw);
    /* 006b2a54: movzx eax, word ptr [ebp - 0x48] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffb8u));
    /* 006b2a58: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b2a5d: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 006b2a60: fldcw word ptr [ebp - 0x40] */ fcw = R16((u32)(r_ebp+0xffffffc0u));
    /* 006b2a63: fistp dword ptr [ebp - 0x38] */ W32((u32)(r_ebp+0xffffffc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 006b2a66: fldcw word ptr [ebp - 0x48] */ fcw = R16((u32)(r_ebp+0xffffffb8u));
    /* 006b2a69: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 006b2a6c: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 006b2a6f: mov eax, dword ptr [ebx + esi*4 + 0x18] */ r_eax = R32((u32)(r_ebx+r_esi*4+0x18u));
    /* 006b2a73: mov dword ptr [ebp - 0x24], edx */ W32((u32)(r_ebp+0xffffffdcu), r_edx);
    /* 006b2a76: mov edx, dword ptr [0xa95aa8] */ r_edx = R32((u32)(0xa95aa8u));
    /* 006b2a7c: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006b2a7f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2a81: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 006b2a84: je 0x6b2a93 */ if (fZ) goto L_006b2a93;
L_006b2a86:; BB(0x006b2a86);
    /* 006b2a86: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006b2a8a: or eax, 0xffff0004 */ {  u32 a = r_eax; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b2a8f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006b2a93:; BB(0x006b2a93);
    /* 006b2a93: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 006b2a9a: push 0xec0 */ { u32 v = 0xec0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b2a9f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x6b2aa4u); f_005caba4();
    /* 006b2aa4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006b2aa7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b2aaa: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 006b2aad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2aaf: je 0x6b2b84 */ if (fZ) goto L_006b2b84;
L_006b2ab5:; BB(0x006b2ab5);
    /* 006b2ab5: mov dword ptr [ebp - 0x50], 1 */ W32((u32)(r_ebp+0xffffffb0u), 0x1u);
    /* 006b2abc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006b2ac3: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006b2ac6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b2ac7: call 0x7adf48 */ r_esp -= 4; W32(r_esp, 0x6b2accu); f_007adf48();
    /* 006b2acc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b2acd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006b2ad0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b2ad1: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 006b2ad4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 006b2ad6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b2ad7: push dword ptr [0xaca374] */ { u32 v = R32((u32)(0xaca374u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b2add: call 0x6862e8 */ r_esp -= 4; W32(r_esp, 0x6b2ae2u); f_006862e8();
    /* 006b2ae2: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
    /* 006b2ae9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006b2af0: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 006b2af3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2af5: je 0x6b2b59 */ if (fZ) goto L_006b2b59;
L_006b2af7:; BB(0x006b2af7);
    /* 006b2af7: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006b2afa: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 006b2afd: lea esi, [ebp - 0x5c] */ r_esi = (u32)(r_ebp+0xffffffa4u);
    /* 006b2b00: mov ebx, 6 */ r_ebx = 0x6u;
    /* 006b2b05: mov word ptr [eax + 0x32c], bx */ W16((u32)(r_eax+0x32cu), (u16)r_ebx);
    /* 006b2b0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2b0d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b2b0e: movzx ebx, dx */ r_ebx = (u32)(u16)r_edx;
    /* 006b2b11: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2b12: call 0x688ee4 */ r_esp -= 4; W32(r_esp, 0x6b2b17u); f_00688ee4();
    /* 006b2b17: push dword ptr [ebp - 0x54] */ { u32 v = R32((u32)(r_ebp+0xffffffacu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b2b1a: push dword ptr [ebp - 0x58] */ { u32 v = R32((u32)(r_ebp+0xffffffa8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b2b1d: push dword ptr [ebp - 0x5c] */ { u32 v = R32((u32)(r_ebp+0xffffffa4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b2b20: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 006b2b23: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b2b24: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2b25: call 0x6986ac */ r_esp -= 4; W32(r_esp, 0x6b2b2au); f_006986ac();
    /* 006b2b2a: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b2b2d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006b2b30: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006b2b32: call dword ptr [eax + 0x18] */ { u32 t = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, 0x6b2b35u); call_ind(t); }
    /* 006b2b35: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006b2b38: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2b3b: jne 0x6b2b59 */ if (!fZ) goto L_006b2b59;
L_006b2b3d:; BB(0x006b2b3d);
    /* 006b2b3d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 006b2b40: call 0x69adc8 */ r_esp -= 4; W32(r_esp, 0x6b2b45u); f_0069adc8();
    /* 006b2b45: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006b2b48: mov eax, dword ptr [edx + 0x33c] */ r_eax = R32((u32)(r_edx+0x33cu));
    /* 006b2b4e: or eax, 0x8000 */ {  u32 a = r_eax; u32 b = 0x8000u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b2b53: mov dword ptr [edx + 0x33c], eax */ W32((u32)(r_edx+0x33cu), r_eax);
L_006b2b59:; BB(0x006b2b59);
    /* 006b2b59: mov edx, dword ptr [0xa95aa8] */ r_edx = R32((u32)(0xa95aa8u));
    /* 006b2b5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b2b61: je 0x6b2b70 */ if (fZ) goto L_006b2b70;
L_006b2b63:; BB(0x006b2b63);
    /* 006b2b63: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006b2b67: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006b2b6c: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006b2b70:; BB(0x006b2b70);
    /* 006b2b70: mov esi, dword ptr [ebp - 0x2c] */ r_esi = R32((u32)(r_ebp+0xffffffd4u));
    /* 006b2b73: mov ebx, dword ptr [ebp - 0x28] */ r_ebx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006b2b76: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006b2b79: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006b2b80: mov esp, ebp */ r_esp = r_ebp;
    /* 006b2b82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b2b83: ret  */ FN_RET(0x006b29f4); r_esp += 4; return;
L_006b2b84:; BB(0x006b2b84);
    /* 006b2b84: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006b2b86: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006b2b89: jmp 0x6b2ae9 */ f_006b2ae9(); return;
}

void f_006b2b90(void) /* sub_6B2B90 */
{
    FN_ENTER(0x006b2b90);
    /* 006b2b90: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b2b91: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2b92: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b2b95: movzx ebp, byte ptr [esp + 0x30] */ r_ebp = (u32)R8((u32)(r_esp+0x30u));
    /* 006b2b9a: mov ebx, dword ptr [0xa954b0] */ r_ebx = R32((u32)(0xa954b0u));
    /* 006b2ba0: fild dword ptr [ebx + ebp*4] */ FPUSH((long double)(i32)R32((u32)(r_ebx+r_ebp*4)));
    /* 006b2ba3: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b2ba6: fild dword ptr [ebx + ebp*4 + 4] */ FPUSH((long double)(i32)R32((u32)(r_ebx+r_ebp*4+0x4u)));
    /* 006b2baa: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006b2bae: fild dword ptr [ebx + ebp*4 + 8] */ FPUSH((long double)(i32)R32((u32)(r_ebx+r_ebp*4+0x8u)));
    /* 006b2bb2: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b2bb6: fild dword ptr [ebx + ebp*4 + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebx+r_ebp*4+0xcu)));
    /* 006b2bba: mov edx, dword ptr [ebx + ebp*4 + 0x10] */ r_edx = R32((u32)(r_ebx+r_ebp*4+0x10u));
    /* 006b2bbe: fmul dword ptr [0x969978] */ ST(0) = ST(0) * R_F32((u32)(0x969978u));
    /* 006b2bc4: fdiv dword ptr [0x969974] */ ST(0) = ST(0) / R_F32((u32)(0x969974u));
    /* 006b2bca: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 006b2bce: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 006b2bd3: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b2bd8: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006b2bdc: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006b2be0: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006b2be4: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 006b2be8: mov eax, dword ptr [ebx + ebp*4 + 0x14] */ r_eax = R32((u32)(r_ebx+r_ebp*4+0x14u));
    /* 006b2bec: mov ebp, dword ptr [0xa95aa8] */ r_ebp = R32((u32)(0xa95aa8u));
    /* 006b2bf2: mov ecx, dword ptr [esp + 0x1c] */ r_ecx = R32((u32)(r_esp+0x1cu));
    /* 006b2bf6: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2bf8: je 0x6b2c08 */ if (fZ) goto L_006b2c08;
L_006b2bfa:; BB(0x006b2bfa);
    /* 006b2bfa: movzx ebx, word ptr [ebp + 8] */ r_ebx = (u32)R16((u32)(r_ebp+0x8u));
    /* 006b2bfe: or ebx, 0xffff0004 */ {  u32 a = r_ebx; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_ebx = r;  }
    /* 006b2c04: mov word ptr [ebp + 8], bx */ W16((u32)(r_ebp+0x8u), (u16)r_ebx);
L_006b2c08:; BB(0x006b2c08);
    /* 006b2c08: movzx ebx, dx */ r_ebx = (u32)(u16)r_edx;
    /* 006b2c0b: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b2c0e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2c0f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2c10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b2c11: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2c12: call 0x7b37f0 */ r_esp -= 4; W32(r_esp, 0x6b2c17u); f_007b37f0();
    /* 006b2c17: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b2c1a: mov edx, dword ptr [0xa95aa8] */ r_edx = R32((u32)(0xa95aa8u));
    /* 006b2c20: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2c22: je 0x6b2c31 */ if (fZ) goto L_006b2c31;
L_006b2c24:; BB(0x006b2c24);
    /* 006b2c24: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006b2c28: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006b2c2d: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006b2c31:; BB(0x006b2c31);
    /* 006b2c31: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b2c34: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b2c35: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b2c36: ret  */ FN_RET(0x006b2b90); r_esp += 4; return;
}

void f_006b2c38(void) /* sub_6B2C38 */
{
    FN_ENTER(0x006b2c38);
    /* 006b2c38: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b2c39: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b2c3a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2c3b: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b2c3e: movzx edi, byte ptr [esp + 0x34] */ r_edi = (u32)R8((u32)(r_esp+0x34u));
    /* 006b2c43: mov ebp, dword ptr [0xa954b0] */ r_ebp = R32((u32)(0xa954b0u));
    /* 006b2c49: fild dword ptr [ebp + edi*4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+r_edi*4)));
    /* 006b2c4d: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b2c50: fild dword ptr [ebp + edi*4 + 4] */ FPUSH((long double)(i32)R32((u32)(r_ebp+r_edi*4+0x4u)));
    /* 006b2c54: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006b2c58: fild dword ptr [ebp + edi*4 + 8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+r_edi*4+0x8u)));
    /* 006b2c5c: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b2c60: fild dword ptr [ebp + edi*4 + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_ebp+r_edi*4+0xcu)));
    /* 006b2c64: mov ecx, dword ptr [ebp + edi*4 + 0x10] */ r_ecx = R32((u32)(r_ebp+r_edi*4+0x10u));
    /* 006b2c68: fmul dword ptr [0x969970] */ ST(0) = ST(0) * R_F32((u32)(0x969970u));
    /* 006b2c6e: fdiv dword ptr [0x96996c] */ ST(0) = ST(0) / R_F32((u32)(0x96996cu));
    /* 006b2c74: mov edx, dword ptr [ebp + edi*4 + 0x14] */ r_edx = R32((u32)(r_ebp+r_edi*4+0x14u));
    /* 006b2c78: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 006b2c7c: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 006b2c81: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b2c86: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006b2c8a: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006b2c8e: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006b2c92: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 006b2c96: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
    /* 006b2c9a: mov eax, dword ptr [ebp + edi*4 + 0x18] */ r_eax = R32((u32)(r_ebp+r_edi*4+0x18u));
    /* 006b2c9e: mov edi, dword ptr [0xa95aa8] */ r_edi = R32((u32)(0xa95aa8u));
    /* 006b2ca4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2ca6: je 0x6b2cb6 */ if (fZ) goto L_006b2cb6;
L_006b2ca8:; BB(0x006b2ca8);
    /* 006b2ca8: movzx ebp, word ptr [edi + 8] */ r_ebp = (u32)R16((u32)(r_edi+0x8u));
    /* 006b2cac: or ebp, 0xffff0004 */ {  u32 a = r_ebp; u32 b = 0xffff0004u; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 006b2cb2: mov word ptr [edi + 8], bp */ W16((u32)(r_edi+0x8u), (u16)r_ebp);
L_006b2cb6:; BB(0x006b2cb6);
    /* 006b2cb6: movzx ebp, cx */ r_ebp = (u32)(u16)r_ecx;
    /* 006b2cb9: movzx ecx, dx */ r_ecx = (u32)(u16)r_edx;
    /* 006b2cbc: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b2cbf: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2cc0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2cc1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b2cc2: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2cc3: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b2cc4: call 0x7b3894 */ r_esp -= 4; W32(r_esp, 0x6b2cc9u); f_007b3894();
    /* 006b2cc9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b2ccc: mov edx, dword ptr [0xa95aa8] */ r_edx = R32((u32)(0xa95aa8u));
    /* 006b2cd2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2cd4: je 0x6b2ce3 */ if (fZ) goto L_006b2ce3;
L_006b2cd6:; BB(0x006b2cd6);
    /* 006b2cd6: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006b2cda: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006b2cdf: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
L_006b2ce3:; BB(0x006b2ce3);
    /* 006b2ce3: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b2ce6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b2ce7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b2ce8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b2ce9: ret  */ FN_RET(0x006b2c38); r_esp += 4; return;
}

void f_006b2cec(void)
{
    FN_ENTER(0x006b2cec);
    /* 006b2cec: movzx eax, word ptr [0xa954cc] */ r_eax = (u32)R16((u32)(0xa954ccu));
    /* 006b2cf3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b2cf4: call 0x7b4874 */ r_esp -= 4; W32(r_esp, 0x6b2cf9u); f_007b4874();
    /* 006b2cf9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b2cfa: ret  */ FN_RET(0x006b2cec); r_esp += 4; return;
}

void f_006b2cfc(void)
{
    FN_ENTER(0x006b2cfc);
    /* 006b2cfc: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006b2cfe: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x6b2d03u); f_004d4288();
    /* 006b2d03: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b2d04: ret  */ FN_RET(0x006b2cfc); r_esp += 4; return;
}

void f_006b2d08(void)
{
    FN_ENTER(0x006b2d08);
    /* 006b2d08: call 0x4d83f4 */ r_esp -= 4; W32(r_esp, 0x6b2d0du); f_004d83f4();
    /* 006b2d0d: ret  */ FN_RET(0x006b2d08); r_esp += 4; return;
}

void f_006b2d10(void)
{
    FN_ENTER(0x006b2d10);
    /* 006b2d10: call 0x4d7e4c */ r_esp -= 4; W32(r_esp, 0x6b2d15u); f_004d7e4c();
    /* 006b2d15: ret  */ FN_RET(0x006b2d10); r_esp += 4; return;
}

void f_006b2d18(void) /* sub_6B2D18 */
{
    FN_ENTER(0x006b2d18);
    /* 006b2d18: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b2d1b: movzx edx, byte ptr [esp + 0x10] */ r_edx = (u32)R8((u32)(r_esp+0x10u));
    /* 006b2d20: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b2d25: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b2d28: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b2d2b: fild dword ptr [eax + edx*4 + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x4u)));
    /* 006b2d2f: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b2d32: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006b2d36: fild dword ptr [eax + edx*4 + 8] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x8u)));
    /* 006b2d3a: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b2d3e: push dword ptr [eax + edx*4 + 0x10] */ { u32 v = R32((u32)(r_eax+r_edx*4+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b2d42: push dword ptr [eax + edx*4 + 0xc] */ { u32 v = R32((u32)(r_eax+r_edx*4+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006b2d46: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2d47: call 0x4d5b20 */ r_esp -= 4; W32(r_esp, 0x6b2d4cu); f_004d5b20();
    /* 006b2d4c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b2d4f: ret  */ FN_RET(0x006b2d18); r_esp += 4; return;
}

void f_006b2d50(void)
{
    FN_ENTER(0x006b2d50);
    /* 006b2d50: call 0x4d8598 */ r_esp -= 4; W32(r_esp, 0x6b2d55u); f_004d8598();
    /* 006b2d55: ret  */ FN_RET(0x006b2d50); r_esp += 4; return;
}

void f_006b2d58(void)
{
    FN_ENTER(0x006b2d58);
    /* 006b2d58: movzx eax, word ptr [0xa954cc] */ r_eax = (u32)R16((u32)(0xa954ccu));
    /* 006b2d5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b2d60: call 0x7b3984 */ r_esp -= 4; W32(r_esp, 0x6b2d65u); f_007b3984();
    /* 006b2d65: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b2d66: ret  */ FN_RET(0x006b2d58); r_esp += 4; return;
}

void f_006b2d68(void)
{
    FN_ENTER(0x006b2d68);
    /* 006b2d68: call 0x7b3a14 */ r_esp -= 4; W32(r_esp, 0x6b2d6du); f_007b3a14();
    /* 006b2d6d: ret  */ FN_RET(0x006b2d68); r_esp += 4; return;
}

void f_006b2d70(void)
{
    FN_ENTER(0x006b2d70);
    /* 006b2d70: call 0x7b3a24 */ r_esp -= 4; W32(r_esp, 0x6b2d75u); f_007b3a24();
    /* 006b2d75: ret  */ FN_RET(0x006b2d70); r_esp += 4; return;
}

void f_006b2d78(void)
{
    FN_ENTER(0x006b2d78);
    /* 006b2d78: movzx eax, word ptr [0xa954cc] */ r_eax = (u32)R16((u32)(0xa954ccu));
    /* 006b2d7f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b2d80: call 0x7b3ce0 */ r_esp -= 4; W32(r_esp, 0x6b2d85u); f_007b3ce0();
    /* 006b2d85: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b2d86: ret  */ FN_RET(0x006b2d78); r_esp += 4; return;
}

void f_006b2d88(void)
{
    FN_ENTER(0x006b2d88);
    /* 006b2d88: movzx eax, word ptr [0xa954cc] */ r_eax = (u32)R16((u32)(0xa954ccu));
    /* 006b2d8f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b2d90: call 0x7b3d08 */ r_esp -= 4; W32(r_esp, 0x6b2d95u); f_007b3d08();
    /* 006b2d95: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b2d96: ret  */ FN_RET(0x006b2d88); r_esp += 4; return;
}

void f_006b2d98(void)
{
    FN_ENTER(0x006b2d98);
    /* 006b2d98: call 0x65a520 */ r_esp -= 4; W32(r_esp, 0x6b2d9du); f_0065a520();
    /* 006b2d9d: ret  */ FN_RET(0x006b2d98); r_esp += 4; return;
}

void f_006b2da0(void)
{
    FN_ENTER(0x006b2da0);
    /* 006b2da0: call 0x65a52c */ r_esp -= 4; W32(r_esp, 0x6b2da5u); f_0065a52c();
    /* 006b2da5: ret  */ FN_RET(0x006b2da0); r_esp += 4; return;
}

void f_006b2da8(void)
{
    FN_ENTER(0x006b2da8);
    /* 006b2da8: movzx eax, word ptr [0xa954cc] */ r_eax = (u32)R16((u32)(0xa954ccu));
    /* 006b2daf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b2db0: call 0x7b3ad0 */ r_esp -= 4; W32(r_esp, 0x6b2db5u); f_007b3ad0();
    /* 006b2db5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b2db6: ret  */ FN_RET(0x006b2da8); r_esp += 4; return;
}

void f_006b2db8(void) /* sub_6B2DB8 */
{
    FN_ENTER(0x006b2db8);
    /* 006b2db8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b2db9: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b2dbc: movzx edx, byte ptr [esp + 0x20] */ r_edx = (u32)R8((u32)(r_esp+0x20u));
    /* 006b2dc1: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b2dc6: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b2dc9: fild dword ptr [eax + edx*4 + 8] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x8u)));
    /* 006b2dcd: movzx ebp, word ptr [eax + edx*4 + 0xc] */ r_ebp = (u32)R16((u32)(r_eax+r_edx*4+0xcu));
    /* 006b2dd2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006b2dd4: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b2dd8: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b2ddc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b2ddd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b2de2u); f_0068d5a8();
    /* 006b2de2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b2de3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2de5: je 0x6b2e2c */ if (fZ) goto L_006b2e2c;
L_006b2de7:; BB(0x006b2de7);
    /* 006b2de7: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 006b2deb: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 006b2def: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 006b2df2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006b2df4: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006b2df8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b2dfc: mov word ptr [esp + 2], bp */ W16((u32)(r_esp+0x2u), (u16)r_ebp);
    /* 006b2e01: mov byte ptr [esp], 0x40 */ W8((u32)(r_esp), 0x40u);
    /* 006b2e05: test eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2e0a: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 006b2e0f: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 006b2e17: je 0x6b2e24 */ if (fZ) goto L_006b2e24;
L_006b2e19:; BB(0x006b2e19);
    /* 006b2e19: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006b2e1d: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b2e20: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
L_006b2e24:; BB(0x006b2e24);
    /* 006b2e24: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b2e27: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6b2e2cu); f_008003e0();
L_006b2e2c:; BB(0x006b2e2c);
    /* 006b2e2c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b2e2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b2e30: ret  */ FN_RET(0x006b2db8); r_esp += 4; return;
}

void f_006b2dc0(void)
{
    FN_ENTER(0x006b2dc0);
    /* 006b2dc0: and byte ptr [ecx + 0xa954b0], ah */ { u32 ad = (u32)(r_ecx+0xa954b0u);  u32 a = R8(ad); u32 b = (u8)(r_eax>>8); u32 r = (a & b) & 0xffu; W8(ad, r);  }
    /* 006b2dc6: fild dword ptr [eax + edx*4] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4)));
    /* 006b2dc9: fild dword ptr [eax + edx*4 + 8] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0x8u)));
    /* 006b2dcd: movzx ebp, word ptr [eax + edx*4 + 0xc] */ r_ebp = (u32)R16((u32)(r_eax+r_edx*4+0xcu));
    /* 006b2dd2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006b2dd4: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 006b2dd8: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 006b2ddc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b2ddd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6b2de2u); f_0068d5a8();
    /* 006b2de2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b2de3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2de5: je 0x6b2e2c */ if (fZ) goto L_006b2e2c;
L_006b2de7:; BB(0x006b2de7);
    /* 006b2de7: fld dword ptr [esp + 0x14] */ FPUSH(R_F32((u32)(r_esp+0x14u)));
    /* 006b2deb: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 006b2def: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 006b2df2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006b2df4: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006b2df8: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b2dfc: mov word ptr [esp + 2], bp */ W16((u32)(r_esp+0x2u), (u16)r_ebp);
    /* 006b2e01: mov byte ptr [esp], 0x40 */ W8((u32)(r_esp), 0x40u);
    /* 006b2e05: test eax, 0x100000 */ {  u32 a = r_eax; u32 b = 0x100000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2e0a: mov byte ptr [esp + 1], 4 */ W8((u32)(r_esp+0x1u), 0x4u);
    /* 006b2e0f: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 006b2e17: je 0x6b2e24 */ if (fZ) goto L_006b2e24;
L_006b2e19:; BB(0x006b2e19);
    /* 006b2e19: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006b2e1d: or eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b2e20: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
L_006b2e24:; BB(0x006b2e24);
    /* 006b2e24: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b2e27: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x6b2e2cu); f_008003e0();
L_006b2e2c:; BB(0x006b2e2c);
    /* 006b2e2c: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b2e2f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b2e30: ret  */ FN_RET(0x006b2dc0); r_esp += 4; return;
}

void f_006b2e34(void) /* sub_6B2E34 */
{
    FN_ENTER(0x006b2e34);
    /* 006b2e34: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b2e37: mov ecx, dword ptr [0xa954cc] */ r_ecx = R32((u32)(0xa954ccu));
    /* 006b2e3d: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b2e43: fld dword ptr [0xa954d4] */ FPUSH(R_F32((u32)(0xa954d4u)));
    /* 006b2e49: mov eax, dword ptr [edx + ecx*4] */ r_eax = R32((u32)(r_edx+r_ecx*4));
    /* 006b2e4c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006b2e4f: mov eax, dword ptr [edx + ecx*4 + 4] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x4u));
    /* 006b2e53: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 006b2e57: mov eax, dword ptr [edx + ecx*4 + 8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x8u));
    /* 006b2e5b: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006b2e5f: fnstcw word ptr [esp + 0xc] */ W16((u32)(r_esp+0xcu), fcw);
    /* 006b2e63: movzx eax, word ptr [esp + 0xc] */ r_eax = (u32)R16((u32)(r_esp+0xcu));
    /* 006b2e68: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006b2e6d: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 006b2e71: fldcw word ptr [esp + 0x14] */ fcw = R16((u32)(r_esp+0x14u));
    /* 006b2e75: fistp dword ptr [esp + 0x1c] */ W32((u32)(r_esp+0x1cu), (u32)fx_int32(ST(0))); FPOP();
    /* 006b2e79: fldcw word ptr [esp + 0xc] */ fcw = R16((u32)(r_esp+0xcu));
    /* 006b2e7d: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 006b2e81: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 006b2e84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b2e85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b2e87: push dword ptr [0xa954d0] */ { u32 v = R32((u32)(0xa954d0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006b2e8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2e8e: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x6b2e93u); f_0050a984();
    /* 006b2e93: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b2e96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2e98: je 0x6b2ea3 */ if (fZ) goto L_006b2ea3;
L_006b2e9a:; BB(0x006b2e9a);
    /* 006b2e9a: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006b2e9c: mov ecx, eax */ r_ecx = r_eax;
    /* 006b2e9e: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x6b2ea3u); f_00508efc();
L_006b2ea3:; BB(0x006b2ea3);
    /* 006b2ea3: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b2ea6: ret  */ FN_RET(0x006b2e34); r_esp += 4; return;
}

void f_006b2ea8(void) /* sub_6B2EA8 */
{
    FN_ENTER(0x006b2ea8);
    /* 006b2ea8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b2eab: movzx ecx, byte ptr [esp + 0x10] */ r_ecx = (u32)R8((u32)(r_esp+0x10u));
    /* 006b2eb0: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b2eb6: fild dword ptr [edx + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4)));
    /* 006b2eb9: fild dword ptr [edx + ecx*4 + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4+0x4u)));
    /* 006b2ebd: fild dword ptr [edx + ecx*4 + 8] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4+0x8u)));
    /* 006b2ec1: movsx eax, word ptr [edx + ecx*4 + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*4+0xcu));
    /* 006b2ec6: mov edx, dword ptr [edx + ecx*4 + 0x10] */ r_edx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 006b2eca: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006b2ecc: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b2ecf: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006b2ed3: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b2ed7: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b2eda: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2edb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b2edd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b2ede: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2edf: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x6b2ee4u); f_0050a984();
    /* 006b2ee4: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b2ee7: ret  */ FN_RET(0x006b2ea8); r_esp += 4; return;
}

void f_006b2ee8(void) /* sub_6B2EE8 */
{
    FN_ENTER(0x006b2ee8);
    /* 006b2ee8: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b2eeb: movzx ecx, byte ptr [esp + 0x10] */ r_ecx = (u32)R8((u32)(r_esp+0x10u));
    /* 006b2ef0: mov edx, dword ptr [0xa954b0] */ r_edx = R32((u32)(0xa954b0u));
    /* 006b2ef6: fild dword ptr [edx + ecx*4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4)));
    /* 006b2ef9: fild dword ptr [edx + ecx*4 + 4] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4+0x4u)));
    /* 006b2efd: fild dword ptr [edx + ecx*4 + 8] */ FPUSH((long double)(i32)R32((u32)(r_edx+r_ecx*4+0x8u)));
    /* 006b2f01: movsx eax, word ptr [edx + ecx*4 + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edx+r_ecx*4+0xcu));
    /* 006b2f06: mov edx, dword ptr [edx + ecx*4 + 0x10] */ r_edx = R32((u32)(r_edx+r_ecx*4+0x10u));
    /* 006b2f0a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006b2f0c: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006b2f0f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006b2f13: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 006b2f17: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 006b2f1a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2f1b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b2f1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b2f1e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2f1f: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x6b2f24u); f_0050a984();
    /* 006b2f24: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b2f27: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2f29: je 0x6b2f34 */ if (fZ) goto L_006b2f34;
L_006b2f2b:; BB(0x006b2f2b);
    /* 006b2f2b: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006b2f2d: mov ecx, eax */ r_ecx = r_eax;
    /* 006b2f2f: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x6b2f34u); f_00508efc();
L_006b2f34:; BB(0x006b2f34);
    /* 006b2f34: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b2f37: ret  */ FN_RET(0x006b2ee8); r_esp += 4; return;
}

void f_006b2f38(void) /* sub_6B2F38 */
{
    FN_ENTER(0x006b2f38);
    /* 006b2f38: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b2f39: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2f3a: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b2f3d: movzx edx, byte ptr [esp + 0x1c] */ r_edx = (u32)R8((u32)(r_esp+0x1cu));
    /* 006b2f42: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b2f47: fild dword ptr [eax + edx*4 + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0xcu)));
    /* 006b2f4b: movsx ebx, word ptr [eax + edx*4] */ r_ebx = (u32)(i32)(i16)R16((u32)(r_eax+r_edx*4));
    /* 006b2f4f: mov esi, dword ptr [eax + edx*4 + 4] */ r_esi = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 006b2f53: movzx ecx, word ptr [eax + edx*4 + 8] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*4+0x8u));
    /* 006b2f58: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006b2f5c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2f5d: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6b2f62u); f_007b4d18();
    /* 006b2f62: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b2f63: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2f65: je 0x6b2f97 */ if (fZ) goto L_006b2f97;
L_006b2f67:; BB(0x006b2f67);
    /* 006b2f67: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006b2f6a: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006b2f6d: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 006b2f70: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006b2f73: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 006b2f77: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006b2f7b: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 006b2f7f: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006b2f83: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006b2f87: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b2f8a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006b2f8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b2f8d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2f8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b2f8f: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x6b2f94u); f_0050a984();
    /* 006b2f94: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006b2f97:; BB(0x006b2f97);
    /* 006b2f97: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b2f9a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006b2f9b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006b2f9c: ret  */ FN_RET(0x006b2f38); r_esp += 4; return;
}

void f_006b2fa0(void) /* sub_6B2FA0 */
{
    FN_ENTER(0x006b2fa0);
    /* 006b2fa0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b2fa1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b2fa2: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006b2fa5: movzx edx, byte ptr [esp + 0x1c] */ r_edx = (u32)R8((u32)(r_esp+0x1cu));
    /* 006b2faa: mov eax, dword ptr [0xa954b0] */ r_eax = R32((u32)(0xa954b0u));
    /* 006b2faf: fild dword ptr [eax + edx*4 + 0xc] */ FPUSH((long double)(i32)R32((u32)(r_eax+r_edx*4+0xcu)));
    /* 006b2fb3: movsx ebp, word ptr [eax + edx*4] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+r_edx*4));
    /* 006b2fb7: mov edi, dword ptr [eax + edx*4 + 4] */ r_edi = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 006b2fbb: movzx ecx, word ptr [eax + edx*4 + 8] */ r_ecx = (u32)R16((u32)(r_eax+r_edx*4+0x8u));
    /* 006b2fc0: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 006b2fc4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 006b2fc5: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x6b2fcau); f_007b4d18();
    /* 006b2fca: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006b2fcb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b2fcd: je 0x6b300c */ if (fZ) goto L_006b300c;
L_006b2fcf:; BB(0x006b2fcf);
    /* 006b2fcf: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 006b2fd2: mov ecx, dword ptr [eax + 0x3c] */ r_ecx = R32((u32)(r_eax+0x3cu));
    /* 006b2fd5: mov eax, dword ptr [eax + 0x40] */ r_eax = R32((u32)(r_eax+0x40u));
    /* 006b2fd8: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 006b2fdb: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 006b2fdf: fld dword ptr [esp + 4] */ FPUSH(R_F32((u32)(r_esp+0x4u)));
    /* 006b2fe3: fadd dword ptr [esp + 0xc] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0xcu));
    /* 006b2fe7: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 006b2feb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 006b2fef: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 006b2ff2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006b2ff3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006b2ff5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006b2ff6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006b2ff7: call 0x50a984 */ r_esp -= 4; W32(r_esp, 0x6b2ffcu); f_0050a984();
    /* 006b2ffc: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006b2fff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006b3001: je 0x6b300c */ if (fZ) goto L_006b300c;
L_006b3003:; BB(0x006b3003);
    /* 006b3003: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 006b3005: mov ecx, eax */ r_ecx = r_eax;
    /* 006b3007: call 0x508efc */ r_esp -= 4; W32(r_esp, 0x6b300cu); f_00508efc();
L_006b300c:; BB(0x006b300c);
    /* 006b300c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006b300f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006b3010: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006b3011: ret  */ FN_RET(0x006b2fa0); r_esp += 4; return;
}

