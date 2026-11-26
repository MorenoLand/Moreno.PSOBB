#include "protos.h"

void f_005bf7dc(void) /* sub_5BF7DC */
{
    FN_ENTER(0x005bf7dc);
    /* 005bf7dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bf7dd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf7de: mov esi, ecx */ r_esi = r_ecx;
    /* 005bf7e0: mov ebp, dword ptr [esp + 0xc] */ r_ebp = R32((u32)(r_esp+0xcu));
    /* 005bf7e4: mov ecx, esi */ r_ecx = r_esi;
    /* 005bf7e6: call 0x5bf818 */ r_esp -= 4; W32(r_esp, 0x5bf7ebu); f_005bf818();
    /* 005bf7eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf7ec: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005bf7ef: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005bf7f1: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x5bf7f4u); call_ind(t); }
    /* 005bf7f4: mov ecx, esi */ r_ecx = r_esi;
    /* 005bf7f6: call 0x5be270 */ r_esp -= 4; W32(r_esp, 0x5bf7fbu); f_005be270();
    /* 005bf7fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf7fd: je 0x5bf806 */ if (fZ) goto L_005bf806;
L_005bf7ff:; BB(0x005bf7ff);
    /* 005bf7ff: mov esi, 1 */ r_esi = 0x1u;
    /* 005bf804: jmp 0x5bf808 */ goto L_005bf808;
L_005bf806:; BB(0x005bf806);
    /* 005bf806: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_005bf808:; BB(0x005bf808);
    /* 005bf808: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf809: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 005bf80c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 005bf80e: call dword ptr [edx + 0xc] */ { u32 t = R32((u32)(r_edx+0xcu)); r_esp -= 4; W32(r_esp, 0x5bf811u); call_ind(t); }
    /* 005bf811: mov eax, esi */ r_eax = r_esi;
    /* 005bf813: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf814: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bf815: ret 4 */ FN_RET(0x005bf7dc); r_esp += 8; return;
}

void f_005bf818(void) /* sub_5BF818 */
{
    FN_ENTER(0x005bf818);
    /* 005bf818: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bf819: mov edi, ecx */ r_edi = r_ecx;
    /* 005bf81b: mov ecx, edi */ r_ecx = r_edi;
    /* 005bf81d: call 0x5bdea8 */ r_esp -= 4; W32(r_esp, 0x5bf822u); f_005bdea8();
    /* 005bf822: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf824: je 0x5bf8ac */ if (fZ) goto L_005bf8ac;
L_005bf82a:; BB(0x005bf82a);
    /* 005bf82a: push dword ptr [0xa8d7ac] */ { u32 v = R32((u32)(0xa8d7acu)); r_esp -= 4; W32(r_esp, v); }
    /* 005bf830: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005bf833: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 005bf836: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bf838: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bf83a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bf83c: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 005bf843: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x5bf848u); f_007c1160();
    /* 005bf848: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf84a: jne 0x5bf85b */ if (!fZ) goto L_005bf85b;
L_005bf84c:; BB(0x005bf84c);
    /* 005bf84c: mov eax, dword ptr [edi + 0x858] */ r_eax = R32((u32)(r_edi+0x858u));
    /* 005bf852: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf855: jge 0x5bf85b */ if ((fS==fO)) goto L_005bf85b;
L_005bf857:; BB(0x005bf857);
    /* 005bf857: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bf859: jmp 0x5bf860 */ goto L_005bf860;
L_005bf85b:; BB(0x005bf85b);
    /* 005bf85b: mov eax, 1 */ r_eax = 0x1u;
L_005bf860:; BB(0x005bf860);
    /* 005bf860: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bf862: je 0x5bf86b */ if (fZ) goto L_005bf86b;
L_005bf864:; BB(0x005bf864);
    /* 005bf864: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 005bf869: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bf86a: ret  */ FN_RET(0x005bf818); r_esp += 4; return;
L_005bf86b:; BB(0x005bf86b);
    /* 005bf86b: push dword ptr [0xa8d7a8] */ { u32 v = R32((u32)(0xa8d7a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bf871: mov eax, dword ptr [edi + 0x30] */ r_eax = R32((u32)(r_edi+0x30u));
    /* 005bf874: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 005bf877: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bf879: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bf87b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bf87d: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 005bf884: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x5bf889u); f_007c1160();
    /* 005bf889: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf88b: jne 0x5bf89c */ if (!fZ) goto L_005bf89c;
L_005bf88d:; BB(0x005bf88d);
    /* 005bf88d: mov eax, dword ptr [edi + 0x854] */ r_eax = R32((u32)(r_edi+0x854u));
    /* 005bf893: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf896: jge 0x5bf89c */ if ((fS==fO)) goto L_005bf89c;
L_005bf898:; BB(0x005bf898);
    /* 005bf898: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bf89a: jmp 0x5bf8a1 */ goto L_005bf8a1;
L_005bf89c:; BB(0x005bf89c);
    /* 005bf89c: mov eax, 1 */ r_eax = 0x1u;
L_005bf8a1:; BB(0x005bf8a1);
    /* 005bf8a1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bf8a3: je 0x5bf8ac */ if (fZ) goto L_005bf8ac;
L_005bf8a5:; BB(0x005bf8a5);
    /* 005bf8a5: mov eax, 1 */ r_eax = 0x1u;
    /* 005bf8aa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bf8ab: ret  */ FN_RET(0x005bf818); r_esp += 4; return;
L_005bf8ac:; BB(0x005bf8ac);
    /* 005bf8ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bf8ae: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bf8af: ret  */ FN_RET(0x005bf818); r_esp += 4; return;
}

void f_005bf8b0(void) /* sub_5BF8B0 */
{
    FN_ENTER(0x005bf8b0);
    /* 005bf8b0: mov eax, dword ptr [ecx + 0x538] */ r_eax = R32((u32)(r_ecx+0x538u));
    /* 005bf8b6: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 005bf8b9: mov dword ptr [ecx + 0x538], eax */ W32((u32)(r_ecx+0x538u), r_eax);
    /* 005bf8bf: ret  */ FN_RET(0x005bf8b0); r_esp += 4; return;
}

void f_005bf8c0(void) /* sub_5BF8C0 */
{
    FN_ENTER(0x005bf8c0);
    /* 005bf8c0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 005bf8c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 005bf8c2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bf8c3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bf8c4: sub esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 005bf8c7: mov esi, ecx */ r_esi = r_ecx;
    /* 005bf8c9: mov eax, dword ptr [esi + 0x53c] */ r_eax = R32((u32)(r_esi+0x53cu));
    /* 005bf8cf: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf8d2: jne 0x5c03a4 */ if (!fZ) goto L_005c03a4;
L_005bf8d8:; BB(0x005bf8d8);
    /* 005bf8d8: mov eax, dword ptr [esi + 0x538] */ r_eax = R32((u32)(r_esi+0x538u));
    /* 005bf8de: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bf8e0: jne 0x5bf8f6 */ if (!fZ) goto L_005bf8f6;
L_005bf8e2:; BB(0x005bf8e2);
    /* 005bf8e2: mov ecx, dword ptr [esi + 0x60c] */ r_ecx = R32((u32)(r_esi+0x60cu));
    /* 005bf8e8: or eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005bf8eb: mov dword ptr [esi + 0x538], eax */ W32((u32)(r_esi+0x538u), r_eax);
    /* 005bf8f1: jmp 0x5bf9ca */ goto L_005bf9ca;
L_005bf8f6:; BB(0x005bf8f6);
    /* 005bf8f6: push dword ptr [0xa8d7b4] */ { u32 v = R32((u32)(0xa8d7b4u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bf8fc: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005bf8ff: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 005bf902: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bf904: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bf906: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bf908: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 005bf90f: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x5bf914u); f_007c1160();
    /* 005bf914: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf916: jne 0x5bf927 */ if (!fZ) goto L_005bf927;
L_005bf918:; BB(0x005bf918);
    /* 005bf918: mov eax, dword ptr [esi + 0x860] */ r_eax = R32((u32)(r_esi+0x860u));
    /* 005bf91e: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf921: jge 0x5bf927 */ if ((fS==fO)) goto L_005bf927;
L_005bf923:; BB(0x005bf923);
    /* 005bf923: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bf925: jmp 0x5bf92c */ goto L_005bf92c;
L_005bf927:; BB(0x005bf927);
    /* 005bf927: mov eax, 1 */ r_eax = 0x1u;
L_005bf92c:; BB(0x005bf92c);
    /* 005bf92c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf92e: je 0x5bf971 */ if (fZ) goto L_005bf971;
L_005bf930:; BB(0x005bf930);
    /* 005bf930: mov ecx, dword ptr [esi + 0x60c] */ r_ecx = R32((u32)(r_esi+0x60cu));
    /* 005bf936: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bf939: cmp ecx, 0xb */ {  u32 a = r_ecx; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf93c: jge 0x5bf949 */ if ((fS==fO)) goto L_005bf949;
L_005bf93e:; BB(0x005bf93e);
    /* 005bf93e: mov dword ptr [esi + 0x60c], ecx */ W32((u32)(r_esi+0x60cu), r_ecx);
    /* 005bf944: jmp 0x5bf9ca */ goto L_005bf9ca;
L_005bf949:; BB(0x005bf949);
    /* 005bf949: mov eax, dword ptr [esi + 0x538] */ r_eax = R32((u32)(r_esi+0x538u));
    /* 005bf94f: mov dword ptr [esi + 0x60c], 0xa */ W32((u32)(r_esi+0x60cu), 0xau);
    /* 005bf959: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005bf95c: mov dword ptr [esi + 0x538], eax */ W32((u32)(r_esi+0x538u), r_eax);
    /* 005bf962: add dword ptr [esi + 0x53c], 1 */ { u32 ad = (u32)(r_esi+0x53cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005bf969: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005bf96c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bf96d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bf96e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bf96f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bf970: ret  */ FN_RET(0x005bf8c0); r_esp += 4; return;
L_005bf971:; BB(0x005bf971);
    /* 005bf971: push dword ptr [0xa8d7b0] */ { u32 v = R32((u32)(0xa8d7b0u)); r_esp -= 4; W32(r_esp, v); }
    /* 005bf977: mov eax, dword ptr [esi + 0x30] */ r_eax = R32((u32)(r_esi+0x30u));
    /* 005bf97a: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 005bf97d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bf97f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bf981: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bf983: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 005bf98a: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x5bf98fu); f_007c1160();
    /* 005bf98f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf991: jne 0x5bf9a2 */ if (!fZ) goto L_005bf9a2;
L_005bf993:; BB(0x005bf993);
    /* 005bf993: mov eax, dword ptr [esi + 0x85c] */ r_eax = R32((u32)(r_esi+0x85cu));
    /* 005bf999: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bf99c: jge 0x5bf9a2 */ if ((fS==fO)) goto L_005bf9a2;
L_005bf99e:; BB(0x005bf99e);
    /* 005bf99e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005bf9a0: jmp 0x5bf9a7 */ goto L_005bf9a7;
L_005bf9a2:; BB(0x005bf9a2);
    /* 005bf9a2: mov eax, 1 */ r_eax = 0x1u;
L_005bf9a7:; BB(0x005bf9a7);
    /* 005bf9a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf9a9: je 0x5bf9c4 */ if (fZ) goto L_005bf9c4;
L_005bf9ab:; BB(0x005bf9ab);
    /* 005bf9ab: mov ecx, dword ptr [esi + 0x60c] */ r_ecx = R32((u32)(r_esi+0x60cu));
    /* 005bf9b1: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bf9b4: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005bf9b6: jl 0x5c03d0 */ if ((fS!=fO)) goto L_005c03d0;
L_005bf9bc:; BB(0x005bf9bc);
    /* 005bf9bc: mov dword ptr [esi + 0x60c], ecx */ W32((u32)(r_esi+0x60cu), r_ecx);
    /* 005bf9c2: jmp 0x5bf9ca */ goto L_005bf9ca;
L_005bf9c4:; BB(0x005bf9c4);
    /* 005bf9c4: mov ecx, dword ptr [esi + 0x60c] */ r_ecx = R32((u32)(r_esi+0x60cu));
L_005bf9ca:; BB(0x005bf9ca);
    /* 005bf9ca: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf9cc: jne 0x5bfa25 */ if (!fZ) goto L_005bfa25;
L_005bf9ce:; BB(0x005bf9ce);
    /* 005bf9ce: lea eax, [esi + 0x610] */ r_eax = (u32)(r_esi+0x610u);
    /* 005bf9d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 005bf9d5: mov ecx, esi */ r_ecx = r_esi;
    /* 005bf9d7: call 0x5bf7dc */ r_esp -= 4; W32(r_esp, 0x5bf9dcu); f_005bf7dc();
    /* 005bf9dc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bf9de: je 0x5c03a4 */ if (fZ) goto L_005c03a4;
L_005bf9e4:; BB(0x005bf9e4);
    /* 005bf9e4: fld dword ptr [0x92b808] */ FPUSH(R_F32((u32)(0x92b808u)));
    /* 005bf9ea: fld dword ptr [esi + 0xd0] */ FPUSH(R_F32((u32)(r_esi+0xd0u)));
    /* 005bf9f0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005bf9f2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005bf9f4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005bf9f5: jbe 0x5bf9fb */ if ((fC||fZ)) goto L_005bf9fb;
L_005bf9f7:; BB(0x005bf9f7);
    /* 005bf9f7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 005bf9f9: jmp 0x5bfa10 */ goto L_005bfa10;
L_005bf9fb:; BB(0x005bf9fb);
    /* 005bf9fb: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 005bf9fd: fld dword ptr [0x92b804] */ FPUSH(R_F32((u32)(0x92b804u)));
    /* 005bfa03: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 005bfa05: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 005bfa07: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 005bfa08: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 005bfa0a: ja 0x5bfa0e */ if ((!fC&&!fZ)) goto L_005bfa0e;
L_005bfa0c:; BB(0x005bfa0c);
    /* 005bfa0c: fst st(1) */ ST(1) = ST(0);
L_005bfa0e:; BB(0x005bfa0e);
    /* 005bfa0e: fstp st(0) */ ST(0) = ST(0); FPOP();
L_005bfa10:; BB(0x005bfa10);
    /* 005bfa10: fstp dword ptr [esi + 0xd0] */ W_F32((u32)(r_esi+0xd0u), ST(0)); FPOP();
    /* 005bfa16: mov ecx, esi */ r_ecx = r_esi;
    /* 005bfa18: call 0x5bf8b0 */ r_esp -= 4; W32(r_esp, 0x5bfa1du); f_005bf8b0();
    /* 005bfa1d: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005bfa20: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bfa21: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bfa22: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bfa23: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bfa24: ret  */ FN_RET(0x005bf8c0); r_esp += 4; return;
L_005bfa25:; BB(0x005bfa25);
    /* 005bfa25: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bfa28: jne 0x5bfc93 */ if (!fZ) goto L_005bfc93;
L_005bfa2e:; BB(0x005bfa2e);
    /* 005bfa2e: mov ecx, esi */ r_ecx = r_esi;
    /* 005bfa30: call 0x5be270 */ r_esp -= 4; W32(r_esp, 0x5bfa35u); f_005be270();
    /* 005bfa35: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 005bfa37: je 0x5c03a4 */ if (fZ) goto L_005c03a4;
L_005bfa3d:; BB(0x005bfa3d);
    /* 005bfa3d: jle 0x5bfa61 */ if ((fZ||fS!=fO)) goto L_005bfa61;
L_005bfa3f:; BB(0x005bfa3f);
    /* 005bfa3f: mov eax, dword ptr [esi + 0xcc] */ r_eax = R32((u32)(r_esi+0xccu));
    /* 005bfa45: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bfa48: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bfa4b: jge 0x5bfa55 */ if ((fS==fO)) goto L_005bfa55;
L_005bfa4d:; BB(0x005bfa4d);
    /* 005bfa4d: mov dword ptr [esi + 0xcc], eax */ W32((u32)(r_esi+0xccu), r_eax);
    /* 005bfa53: jmp 0x5bfa82 */ goto L_005bfa82;
L_005bfa55:; BB(0x005bfa55);
    /* 005bfa55: mov dword ptr [esi + 0xcc], 0 */ W32((u32)(r_esi+0xccu), 0x0u);
    /* 005bfa5f: jmp 0x5bfa82 */ goto L_005bfa82;
L_005bfa61:; BB(0x005bfa61);
    /* 005bfa61: jge 0x5bfa82 */ if ((fS==fO)) goto L_005bfa82;
L_005bfa63:; BB(0x005bfa63);
    /* 005bfa63: mov eax, dword ptr [esi + 0xcc] */ r_eax = R32((u32)(r_esi+0xccu));
    /* 005bfa69: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bfa6c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005bfa6e: jl 0x5bfa78 */ if ((fS!=fO)) goto L_005bfa78;
L_005bfa70:; BB(0x005bfa70);
    /* 005bfa70: mov dword ptr [esi + 0xcc], eax */ W32((u32)(r_esi+0xccu), r_eax);
    /* 005bfa76: jmp 0x5bfa82 */ goto L_005bfa82;
L_005bfa78:; BB(0x005bfa78);
    /* 005bfa78: mov dword ptr [esi + 0xcc], 3 */ W32((u32)(r_esi+0xccu), 0x3u);
L_005bfa82:; BB(0x005bfa82);
    /* 005bfa82: mov eax, dword ptr [esi + 0xb8] */ r_eax = R32((u32)(r_esi+0xb8u));
    /* 005bfa88: lea ebx, [esi + 0xb8] */ r_ebx = (u32)(r_esi+0xb8u);
    /* 005bfa8e: lea edx, [esi + 0x138] */ r_edx = (u32)(r_esi+0x138u);
    /* 005bfa94: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bfa96: jne 0x5bfc7a */ if (!fZ) goto L_005bfc7a;
L_005bfa9c:; BB(0x005bfa9c);
    /* 005bfa9c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bfa9e: jne 0x5bfb8f */ if (!fZ) goto L_005bfb8f;
L_005bfaa4:; BB(0x005bfaa4);
    /* 005bfaa4: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bfaa6: je 0x5bfc84 */ if (fZ) goto L_005bfc84;
L_005bfaac:; BB(0x005bfaac);
    /* 005bfaac: lea ecx, [esi + 0x138] */ r_ecx = (u32)(r_esi+0x138u);
    /* 005bfab2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005bfab4: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005bfab6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005bfab8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bfaba: lea eax, [esi + 0x538] */ r_eax = (u32)(r_esi+0x538u);
L_005bfac0:; BB(0x005bfac0);
    /* 005bfac0: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005bfac2: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 005bfac5: mov dword ptr [ecx + 8], ebp */ W32((u32)(r_ecx+0x8u), r_ebp);
    /* 005bfac8: mov dword ptr [ecx + 0xc], edi */ W32((u32)(r_ecx+0xcu), r_edi);
    /* 005bfacb: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bface: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bfad0: ja 0x5bfac0 */ if ((!fC&&!fZ)) goto L_005bfac0;
L_005bfad2:; BB(0x005bfad2);
    /* 005bfad2: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 005bfad7: fld dword ptr [esi + 0xe0] */ FPUSH(R_F32((u32)(r_esi+0xe0u)));
    /* 005bfadd: fmul dword ptr [0x92b81c] */ ST(0) = ST(0) * R_F32((u32)(0x92b81cu));
    /* 005bfae3: fld dword ptr [esi + 0xd8] */ FPUSH(R_F32((u32)(r_esi+0xd8u)));
    /* 005bfae9: mov edi, dword ptr [esi + 0xd8] */ r_edi = R32((u32)(r_esi+0xd8u));
    /* 005bfaef: movzx ecx, byte ptr [esi + 0xf3] */ r_ecx = (u32)R8((u32)(r_esi+0xf3u));
    /* 005bfaf6: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005bfafa: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005bfafe: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 005bfb02: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bfb04: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bfb04, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bfb04, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bfb06: movzx edx, byte ptr [esi + 0xf2] */ r_edx = (u32)R8((u32)(r_esi+0xf2u));
    /* 005bfb0d: mov ebp, 0x7f */ r_ebp = 0x7fu;
    /* 005bfb12: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 005bfb16: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005bfb1a: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 005bfb1e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005bfb20: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 005bfb24: mov edi, ebx */ r_edi = r_ebx;
    /* 005bfb26: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_005bfb28:; BB(0x005bfb28);
    /* 005bfb28: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 005bfb2c: imul ecx, ebx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ebx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bfb2f: add ecx, 0xffffc000 */ {  u32 a = r_ecx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bfb35: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5bfb3au); f_0082dcbc();
    /* 005bfb3a: fadd dword ptr [0x92b818] */ ST(0) = ST(0) + R_F32((u32)(0x92b818u));
    /* 005bfb40: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 005bfb44: fadd dword ptr [esp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x34u));
    /* 005bfb48: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 005bfb4c: fstp dword ptr [esi + ebp*4 + 0x138] */ W_F32((u32)(r_esi+r_ebp*4+0x138u), ST(0)); FPOP();
    /* 005bfb53: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005bfb56: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005bfb59: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bfb5b: jl 0x5bfb64 */ if ((fS!=fO)) goto L_005bfb64;
L_005bfb5d:; BB(0x005bfb5d);
    /* 005bfb5d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005bfb5f: mov edi, 1 */ r_edi = 0x1u;
L_005bfb64:; BB(0x005bfb64);
    /* 005bfb64: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 005bfb68: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
L_005bfb6c:; BB(0x005bfb6c);
    /* 005bfb6c: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005bfb6e: jl 0x5bfc84 */ if ((fS!=fO)) goto L_005bfc84;
L_005bfb74:; BB(0x005bfb74);
    /* 005bfb74: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bfb76: je 0x5bfb28 */ if (fZ) goto L_005bfb28;
L_005bfb78:; BB(0x005bfb78);
    /* 005bfb78: mov dword ptr [esi + ebp*4 + 0x138], edx */ W32((u32)(r_esi+r_ebp*4+0x138u), r_edx);
    /* 005bfb7f: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 005bfb82: add ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005bfb85: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bfb87: jl 0x5bfb6c */ if ((fS!=fO)) goto L_005bfb6c;
L_005bfb89:; BB(0x005bfb89);
    /* 005bfb89: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005bfb8b: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005bfb8d: jmp 0x5bfb6c */ goto L_005bfb6c;
L_005bfb8f:; BB(0x005bfb8f);
    /* 005bfb8f: lea ecx, [esi + 0x138] */ r_ecx = (u32)(r_esi+0x138u);
    /* 005bfb95: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005bfb97: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005bfb99: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005bfb9b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bfb9d: lea eax, [esi + 0x538] */ r_eax = (u32)(r_esi+0x538u);
L_005bfba3:; BB(0x005bfba3);
    /* 005bfba3: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005bfba5: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 005bfba8: mov dword ptr [ecx + 8], ebp */ W32((u32)(r_ecx+0x8u), r_ebp);
    /* 005bfbab: mov dword ptr [ecx + 0xc], edi */ W32((u32)(r_ecx+0xcu), r_edi);
    /* 005bfbae: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bfbb1: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bfbb3: ja 0x5bfba3 */ if ((!fC&&!fZ)) goto L_005bfba3;
L_005bfbb5:; BB(0x005bfbb5);
    /* 005bfbb5: mov eax, dword ptr [esi + 0xcc] */ r_eax = R32((u32)(r_esi+0xccu));
    /* 005bfbbb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bfbbd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 005bfbbf: jbe 0x5bfc84 */ if ((fC||fZ)) goto L_005bfc84;
L_005bfbc5:; BB(0x005bfbc5);
    /* 005bfbc5: mov ecx, esi */ r_ecx = r_esi;
L_005bfbc7:; BB(0x005bfbc7);
    /* 005bfbc7: fld dword ptr [ecx + edx*8 + 0xd8] */ FPUSH(R_F32((u32)(r_ecx+r_edx*8+0xd8u)));
    /* 005bfbce: fmul dword ptr [0x92b81c] */ ST(0) = ST(0) * R_F32((u32)(0x92b81cu));
    /* 005bfbd4: movzx edi, byte ptr [ecx + edx*2 + 0xf2] */ r_edi = (u32)R8((u32)(r_ecx+r_edx*2+0xf2u));
    /* 005bfbdc: movzx eax, byte ptr [ecx + edx*2 + 0xf3] */ r_eax = (u32)R8((u32)(r_ecx+r_edx*2+0xf3u));
    /* 005bfbe4: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005bfbe8: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 005bfbeb: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 005bfbee: fdiv dword ptr [0x92b810] */ ST(0) = ST(0) / R_F32((u32)(0x92b810u));
    /* 005bfbf4: fmul dword ptr [0x92b814] */ ST(0) = ST(0) * R_F32((u32)(0x92b814u));
    /* 005bfbfa: fdiv dword ptr [0x92b80c] */ ST(0) = ST(0) / R_F32((u32)(0x92b80cu));
    /* 005bfc00: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 005bfc04: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005bfc08: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005bfc0d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005bfc12: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005bfc16: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005bfc1a: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005bfc1e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005bfc22: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 005bfc26: shl edi, 9 */ { u32 c = (9u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 005bfc29: add edi, 0xffffc000 */ {  u32 a = r_edi; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bfc2f: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 005bfc33: lea ebp, [ecx + 0x338] */ r_ebp = (u32)(r_ecx+0x338u);
    /* 005bfc39: lea ebx, [ecx + 0x13c] */ r_ebx = (u32)(r_ecx+0x13cu);
L_005bfc3f:; BB(0x005bfc3f);
    /* 005bfc3f: mov ecx, edi */ r_ecx = r_edi;
    /* 005bfc41: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5bfc46u); f_0082dcbc();
    /* 005bfc46: fadd dword ptr [0x92b818] */ ST(0) = ST(0) + R_F32((u32)(0x92b818u));
    /* 005bfc4c: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 005bfc50: fadd dword ptr [ebp - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffffcu));
    /* 005bfc53: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 005bfc56: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bfc58: add ebp, -4 */ {  u32 a = r_ebp; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005bfc5b: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bfc5d: jbe 0x5bfc3f */ if ((fC||fZ)) goto L_005bfc3f;
L_005bfc5f:; BB(0x005bfc5f);
    /* 005bfc5f: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 005bfc63: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 005bfc67: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bfc6a: cmp edx, dword ptr [ecx + 0xcc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xccu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bfc70: jb 0x5bfbc7 */ if (fC) goto L_005bfbc7;
L_005bfc76:; BB(0x005bfc76);
    /* 005bfc76: mov esi, ecx */ r_esi = r_ecx;
    /* 005bfc78: jmp 0x5bfc84 */ goto L_005bfc84;
L_005bfc7a:; BB(0x005bfc7a);
    /* 005bfc7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfc7b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bfc7c: call 0x5bcc88 */ r_esp -= 4; W32(r_esp, 0x5bfc81u); f_005bcc88();
    /* 005bfc81: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bfc84:; BB(0x005bfc84);
    /* 005bfc84: mov ecx, esi */ r_ecx = r_esi;
    /* 005bfc86: call 0x5bf8b0 */ r_esp -= 4; W32(r_esp, 0x5bfc8bu); f_005bf8b0();
    /* 005bfc8b: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005bfc8e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bfc8f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bfc90: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bfc91: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bfc92: ret  */ FN_RET(0x005bf8c0); r_esp += 4; return;
L_005bfc93:; BB(0x005bfc93);
    /* 005bfc93: mov eax, 0x55555556 */ r_eax = 0x55555556u;
    /* 005bfc98: add ecx, -2 */ {  u32 a = r_ecx; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bfc9b: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bfc9d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 005bfc9f: sar ebp, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 005bfca2: mov ebx, edx */ r_ebx = r_edx;
    /* 005bfca4: sub ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 005bfca6: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 005bfca9: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bfcab: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 005bfcad: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bfcaf: je 0x5c017f */ if (fZ) goto L_005c017f;
L_005bfcb5:; BB(0x005bfcb5);
    /* 005bfcb5: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bfcb8: jne 0x5bff1a */ if (!fZ) goto L_005bff1a;
L_005bfcbe:; BB(0x005bfcbe);
    /* 005bfcbe: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 005bfcc1: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bfcc3: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bfcc5: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bfcc7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bfcc9: lea ebp, [esi + eax + 0x6bc] */ r_ebp = (u32)(r_esi+r_eax+0x6bcu);
    /* 005bfcd0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bfcd1: mov ecx, esi */ r_ecx = r_esi;
    /* 005bfcd3: call 0x5bf7dc */ r_esp -= 4; W32(r_esp, 0x5bfcd8u); f_005bf7dc();
    /* 005bfcd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bfcda: je 0x5c03a4 */ if (fZ) goto L_005c03a4;
L_005bfce0:; BB(0x005bfce0);
    /* 005bfce0: mov eax, dword ptr [esi + ebx*4 + 0x6b0] */ r_eax = R32((u32)(r_esi+r_ebx*4+0x6b0u));
    /* 005bfce7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005bfce9: jl 0x5c03ac */ if ((fS!=fO)) goto L_005c03ac;
L_005bfcef:; BB(0x005bfcef);
    /* 005bfcef: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bfcf4: jl 0x5bfd06 */ if ((fS!=fO)) goto L_005bfd06;
L_005bfcf6:; BB(0x005bfcf6);
    /* 005bfcf6: mov dword ptr [esi + ebx*4 + 0x6b0], 0xff */ W32((u32)(r_esi+r_ebx*4+0x6b0u), 0xffu);
    /* 005bfd01: mov eax, 0xff */ r_eax = 0xffu;
L_005bfd06:; BB(0x005bfd06);
    /* 005bfd06: mov byte ptr [esi + ebx*2 + 0xf2], al */ W8((u32)(r_esi+r_ebx*2+0xf2u), (u8)r_eax);
    /* 005bfd0d: mov eax, dword ptr [esi + 0xb8] */ r_eax = R32((u32)(r_esi+0xb8u));
    /* 005bfd13: lea ebx, [esi + 0xb8] */ r_ebx = (u32)(r_esi+0xb8u);
    /* 005bfd19: lea edx, [esi + 0x138] */ r_edx = (u32)(r_esi+0x138u);
    /* 005bfd1f: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bfd21: jne 0x5bff01 */ if (!fZ) goto L_005bff01;
L_005bfd27:; BB(0x005bfd27);
    /* 005bfd27: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bfd29: jne 0x5bfe14 */ if (!fZ) goto L_005bfe14;
L_005bfd2f:; BB(0x005bfd2f);
    /* 005bfd2f: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bfd31: je 0x5bff0b */ if (fZ) goto L_005bff0b;
L_005bfd37:; BB(0x005bfd37);
    /* 005bfd37: lea ecx, [esi + 0x138] */ r_ecx = (u32)(r_esi+0x138u);
    /* 005bfd3d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005bfd3f: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005bfd41: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005bfd43: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bfd45: lea eax, [esi + 0x538] */ r_eax = (u32)(r_esi+0x538u);
L_005bfd4b:; BB(0x005bfd4b);
    /* 005bfd4b: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005bfd4d: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 005bfd50: mov dword ptr [ecx + 8], ebp */ W32((u32)(r_ecx+0x8u), r_ebp);
    /* 005bfd53: mov dword ptr [ecx + 0xc], edi */ W32((u32)(r_ecx+0xcu), r_edi);
    /* 005bfd56: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bfd59: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bfd5b: ja 0x5bfd4b */ if ((!fC&&!fZ)) goto L_005bfd4b;
L_005bfd5d:; BB(0x005bfd5d);
    /* 005bfd5d: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 005bfd62: fld dword ptr [esi + 0xe0] */ FPUSH(R_F32((u32)(r_esi+0xe0u)));
    /* 005bfd68: fmul dword ptr [0x92b81c] */ ST(0) = ST(0) * R_F32((u32)(0x92b81cu));
    /* 005bfd6e: fld dword ptr [esi + 0xd8] */ FPUSH(R_F32((u32)(r_esi+0xd8u)));
    /* 005bfd74: mov ebx, dword ptr [esi + 0xd8] */ r_ebx = R32((u32)(r_esi+0xd8u));
    /* 005bfd7a: movzx ecx, byte ptr [esi + 0xf3] */ r_ecx = (u32)R8((u32)(r_esi+0xf3u));
    /* 005bfd81: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005bfd85: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005bfd89: mov dword ptr [esp + 0x44], ebx */ W32((u32)(r_esp+0x44u), r_ebx);
    /* 005bfd8d: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bfd8f: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x005bfd8f, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bfd8f, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bfd91: movzx edx, byte ptr [esi + 0xf2] */ r_edx = (u32)R8((u32)(r_esi+0xf2u));
    /* 005bfd98: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 005bfd9c: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 005bfda0: mov edi, 0x7f */ r_edi = 0x7fu;
    /* 005bfda5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005bfda7: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 005bfdab: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_005bfdad:; BB(0x005bfdad);
    /* 005bfdad: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 005bfdb1: imul ecx, ebp */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ebp; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005bfdb4: add ecx, 0xffffc000 */ {  u32 a = r_ecx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bfdba: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5bfdbfu); f_0082dcbc();
    /* 005bfdbf: fadd dword ptr [0x92b818] */ ST(0) = ST(0) + R_F32((u32)(0x92b818u));
    /* 005bfdc5: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 005bfdc9: fadd dword ptr [esp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x34u));
    /* 005bfdcd: mov eax, dword ptr [esp + 0x28] */ r_eax = R32((u32)(r_esp+0x28u));
    /* 005bfdd1: fstp dword ptr [esi + edi*4 + 0x138] */ W_F32((u32)(r_esi+r_edi*4+0x138u), ST(0)); FPOP();
    /* 005bfdd8: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005bfddb: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bfdde: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bfde0: jl 0x5bfde9 */ if ((fS!=fO)) goto L_005bfde9;
L_005bfde2:; BB(0x005bfde2);
    /* 005bfde2: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005bfde4: mov ebx, 1 */ r_ebx = 0x1u;
L_005bfde9:; BB(0x005bfde9);
    /* 005bfde9: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 005bfded: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
L_005bfdf1:; BB(0x005bfdf1);
    /* 005bfdf1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005bfdf3: jl 0x5bff0b */ if ((fS!=fO)) goto L_005bff0b;
L_005bfdf9:; BB(0x005bfdf9);
    /* 005bfdf9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bfdfb: je 0x5bfdad */ if (fZ) goto L_005bfdad;
L_005bfdfd:; BB(0x005bfdfd);
    /* 005bfdfd: mov dword ptr [esi + edi*4 + 0x138], edx */ W32((u32)(r_esi+r_edi*4+0x138u), r_edx);
    /* 005bfe04: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005bfe07: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005bfe0a: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bfe0c: jl 0x5bfdf1 */ if ((fS!=fO)) goto L_005bfdf1;
L_005bfe0e:; BB(0x005bfe0e);
    /* 005bfe0e: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005bfe10: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005bfe12: jmp 0x5bfdf1 */ goto L_005bfdf1;
L_005bfe14:; BB(0x005bfe14);
    /* 005bfe14: lea ecx, [esi + 0x138] */ r_ecx = (u32)(r_esi+0x138u);
    /* 005bfe1a: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005bfe1c: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005bfe1e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005bfe20: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bfe22: lea eax, [esi + 0x538] */ r_eax = (u32)(r_esi+0x538u);
L_005bfe28:; BB(0x005bfe28);
    /* 005bfe28: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005bfe2a: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 005bfe2d: mov dword ptr [ecx + 8], ebp */ W32((u32)(r_ecx+0x8u), r_ebp);
    /* 005bfe30: mov dword ptr [ecx + 0xc], edi */ W32((u32)(r_ecx+0xcu), r_edi);
    /* 005bfe33: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bfe36: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bfe38: ja 0x5bfe28 */ if ((!fC&&!fZ)) goto L_005bfe28;
L_005bfe3a:; BB(0x005bfe3a);
    /* 005bfe3a: mov eax, dword ptr [esi + 0xcc] */ r_eax = R32((u32)(r_esi+0xccu));
    /* 005bfe40: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bfe42: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 005bfe44: jbe 0x5bff0b */ if ((fC||fZ)) goto L_005bff0b;
L_005bfe4a:; BB(0x005bfe4a);
    /* 005bfe4a: mov ecx, esi */ r_ecx = r_esi;
L_005bfe4c:; BB(0x005bfe4c);
    /* 005bfe4c: fld dword ptr [ecx + edx*8 + 0xd8] */ FPUSH(R_F32((u32)(r_ecx+r_edx*8+0xd8u)));
    /* 005bfe53: fmul dword ptr [0x92b81c] */ ST(0) = ST(0) * R_F32((u32)(0x92b81cu));
    /* 005bfe59: movzx esi, byte ptr [ecx + edx*2 + 0xf2] */ r_esi = (u32)R8((u32)(r_ecx+r_edx*2+0xf2u));
    /* 005bfe61: movzx eax, byte ptr [ecx + edx*2 + 0xf3] */ r_eax = (u32)R8((u32)(r_ecx+r_edx*2+0xf3u));
    /* 005bfe69: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005bfe6d: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005bfe71: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005bfe75: fdiv dword ptr [0x92b810] */ ST(0) = ST(0) / R_F32((u32)(0x92b810u));
    /* 005bfe7b: fmul dword ptr [0x92b814] */ ST(0) = ST(0) * R_F32((u32)(0x92b814u));
    /* 005bfe81: fdiv dword ptr [0x92b80c] */ ST(0) = ST(0) / R_F32((u32)(0x92b80cu));
    /* 005bfe87: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 005bfe8b: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005bfe8f: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005bfe94: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005bfe99: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005bfe9d: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005bfea1: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005bfea5: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005bfea9: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 005bfead: shl esi, 9 */ { u32 c = (9u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 005bfeb0: add esi, 0xffffc000 */ {  u32 a = r_esi; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005bfeb6: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 005bfeba: lea ebp, [ecx + 0x338] */ r_ebp = (u32)(r_ecx+0x338u);
    /* 005bfec0: lea ebx, [ecx + 0x13c] */ r_ebx = (u32)(r_ecx+0x13cu);
L_005bfec6:; BB(0x005bfec6);
    /* 005bfec6: mov ecx, esi */ r_ecx = r_esi;
    /* 005bfec8: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5bfecdu); f_0082dcbc();
    /* 005bfecd: fadd dword ptr [0x92b818] */ ST(0) = ST(0) + R_F32((u32)(0x92b818u));
    /* 005bfed3: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 005bfed7: fadd dword ptr [ebp - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffffcu));
    /* 005bfeda: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 005bfedd: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005bfedf: add ebp, -4 */ {  u32 a = r_ebp; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005bfee2: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bfee4: jbe 0x5bfec6 */ if ((fC||fZ)) goto L_005bfec6;
L_005bfee6:; BB(0x005bfee6);
    /* 005bfee6: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 005bfeea: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 005bfeee: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005bfef1: cmp edx, dword ptr [ecx + 0xcc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xccu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005bfef7: jb 0x5bfe4c */ if (fC) goto L_005bfe4c;
L_005bfefd:; BB(0x005bfefd);
    /* 005bfefd: mov esi, ecx */ r_esi = r_ecx;
    /* 005bfeff: jmp 0x5bff0b */ goto L_005bff0b;
L_005bff01:; BB(0x005bff01);
    /* 005bff01: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005bff02: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005bff03: call 0x5bcc88 */ r_esp -= 4; W32(r_esp, 0x5bff08u); f_005bcc88();
    /* 005bff08: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005bff0b:; BB(0x005bff0b);
    /* 005bff0b: mov ecx, esi */ r_ecx = r_esi;
    /* 005bff0d: call 0x5bf8b0 */ r_esp -= 4; W32(r_esp, 0x5bff12u); f_005bf8b0();
    /* 005bff12: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005bff15: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005bff16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005bff17: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005bff18: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005bff19: ret  */ FN_RET(0x005bf8c0); r_esp += 4; return;
L_005bff1a:; BB(0x005bff1a);
    /* 005bff1a: cmp ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bff1d: jne 0x5c03a4 */ if (!fZ) goto L_005c03a4;
L_005bff23:; BB(0x005bff23);
    /* 005bff23: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 005bff26: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bff28: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bff2a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bff2c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005bff2e: lea ebp, [esi + eax + 0x728] */ r_ebp = (u32)(r_esi+r_eax+0x728u);
    /* 005bff35: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 005bff36: mov ecx, esi */ r_ecx = r_esi;
    /* 005bff38: call 0x5bf7dc */ r_esp -= 4; W32(r_esp, 0x5bff3du); f_005bf7dc();
    /* 005bff3d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005bff3f: je 0x5c03a4 */ if (fZ) goto L_005c03a4;
L_005bff45:; BB(0x005bff45);
    /* 005bff45: mov eax, dword ptr [esi + ebx*4 + 0x71c] */ r_eax = R32((u32)(r_esi+r_ebx*4+0x71cu));
    /* 005bff4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005bff4e: jl 0x5c03be */ if ((fS!=fO)) goto L_005c03be;
L_005bff54:; BB(0x005bff54);
    /* 005bff54: cmp eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005bff59: jl 0x5bff6b */ if ((fS!=fO)) goto L_005bff6b;
L_005bff5b:; BB(0x005bff5b);
    /* 005bff5b: mov dword ptr [esi + ebx*4 + 0x71c], 0xff */ W32((u32)(r_esi+r_ebx*4+0x71cu), 0xffu);
    /* 005bff66: mov eax, 0xff */ r_eax = 0xffu;
L_005bff6b:; BB(0x005bff6b);
    /* 005bff6b: mov byte ptr [esi + ebx*2 + 0xf3], al */ W8((u32)(r_esi+r_ebx*2+0xf3u), (u8)r_eax);
    /* 005bff72: mov eax, dword ptr [esi + 0xb8] */ r_eax = R32((u32)(r_esi+0xb8u));
    /* 005bff78: lea ebx, [esi + 0xb8] */ r_ebx = (u32)(r_esi+0xb8u);
    /* 005bff7e: lea edx, [esi + 0x138] */ r_edx = (u32)(r_esi+0x138u);
    /* 005bff84: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bff86: jne 0x5c0166 */ if (!fZ) goto L_005c0166;
L_005bff8c:; BB(0x005bff8c);
    /* 005bff8c: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bff8e: jne 0x5c0079 */ if (!fZ) goto L_005c0079;
L_005bff94:; BB(0x005bff94);
    /* 005bff94: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005bff96: je 0x5c0170 */ if (fZ) goto L_005c0170;
L_005bff9c:; BB(0x005bff9c);
    /* 005bff9c: lea ecx, [esi + 0x138] */ r_ecx = (u32)(r_esi+0x138u);
    /* 005bffa2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005bffa4: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005bffa6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005bffa8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bffaa: lea eax, [esi + 0x538] */ r_eax = (u32)(r_esi+0x538u);
L_005bffb0:; BB(0x005bffb0);
    /* 005bffb0: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005bffb2: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 005bffb5: mov dword ptr [ecx + 8], ebp */ W32((u32)(r_ecx+0x8u), r_ebp);
    /* 005bffb8: mov dword ptr [ecx + 0xc], edi */ W32((u32)(r_ecx+0xcu), r_edi);
    /* 005bffbb: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005bffbe: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005bffc0: ja 0x5bffb0 */ if ((!fC&&!fZ)) goto L_005bffb0;
L_005bffc2:; BB(0x005bffc2);
    /* 005bffc2: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 005bffc7: fld dword ptr [esi + 0xe0] */ FPUSH(R_F32((u32)(r_esi+0xe0u)));
    /* 005bffcd: fmul dword ptr [0x92b81c] */ ST(0) = ST(0) * R_F32((u32)(0x92b81cu));
    /* 005bffd3: fld dword ptr [esi + 0xd8] */ FPUSH(R_F32((u32)(r_esi+0xd8u)));
    /* 005bffd9: mov ecx, dword ptr [esi + 0xd8] */ r_ecx = R32((u32)(r_esi+0xd8u));
    /* 005bffdf: movzx ebx, byte ptr [esi + 0xf3] */ r_ebx = (u32)R8((u32)(r_esi+0xf3u));
    /* 005bffe6: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005bffea: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005bffee: mov dword ptr [esp + 0x40], ebx */ W32((u32)(r_esp+0x40u), r_ebx);
    /* 005bfff2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005bfff4: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x005bfff4, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005bfff4, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005bfff6: movzx edx, byte ptr [esi + 0xf2] */ r_edx = (u32)R8((u32)(r_esi+0xf2u));
    /* 005bfffd: mov edi, 0x7f */ r_edi = 0x7fu;
    /* 005c0002: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 005c0006: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 005c000a: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 005c000e: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005c0010: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_005c0012:; BB(0x005c0012);
    /* 005c0012: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 005c0016: imul ecx, ebp */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ebp; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c0019: add ecx, 0xffffc000 */ {  u32 a = r_ecx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c001f: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5c0024u); f_0082dcbc();
    /* 005c0024: fadd dword ptr [0x92b818] */ ST(0) = ST(0) + R_F32((u32)(0x92b818u));
    /* 005c002a: fmul dword ptr [esp + 0x30] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x30u));
    /* 005c002e: fadd dword ptr [esp + 0x34] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x34u));
    /* 005c0032: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 005c0036: fstp dword ptr [esi + edi*4 + 0x138] */ W_F32((u32)(r_esi+r_edi*4+0x138u), ST(0)); FPOP();
    /* 005c003d: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c0040: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c0043: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0045: jl 0x5c004e */ if ((fS!=fO)) goto L_005c004e;
L_005c0047:; BB(0x005c0047);
    /* 005c0047: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005c0049: mov ebx, 1 */ r_ebx = 0x1u;
L_005c004e:; BB(0x005c004e);
    /* 005c004e: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 005c0052: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
L_005c0056:; BB(0x005c0056);
    /* 005c0056: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005c0058: jl 0x5c0170 */ if ((fS!=fO)) goto L_005c0170;
L_005c005e:; BB(0x005c005e);
    /* 005c005e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0060: je 0x5c0012 */ if (fZ) goto L_005c0012;
L_005c0062:; BB(0x005c0062);
    /* 005c0062: mov dword ptr [esi + edi*4 + 0x138], edx */ W32((u32)(r_esi+r_edi*4+0x138u), r_edx);
    /* 005c0069: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c006c: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c006f: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0071: jl 0x5c0056 */ if ((fS!=fO)) goto L_005c0056;
L_005c0073:; BB(0x005c0073);
    /* 005c0073: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005c0075: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005c0077: jmp 0x5c0056 */ goto L_005c0056;
L_005c0079:; BB(0x005c0079);
    /* 005c0079: lea ecx, [esi + 0x138] */ r_ecx = (u32)(r_esi+0x138u);
    /* 005c007f: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005c0081: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005c0083: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005c0085: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c0087: lea eax, [esi + 0x538] */ r_eax = (u32)(r_esi+0x538u);
L_005c008d:; BB(0x005c008d);
    /* 005c008d: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005c008f: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 005c0092: mov dword ptr [ecx + 8], ebp */ W32((u32)(r_ecx+0x8u), r_ebp);
    /* 005c0095: mov dword ptr [ecx + 0xc], edi */ W32((u32)(r_ecx+0xcu), r_edi);
    /* 005c0098: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c009b: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c009d: ja 0x5c008d */ if ((!fC&&!fZ)) goto L_005c008d;
L_005c009f:; BB(0x005c009f);
    /* 005c009f: mov eax, dword ptr [esi + 0xcc] */ r_eax = R32((u32)(r_esi+0xccu));
    /* 005c00a5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c00a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 005c00a9: jbe 0x5c0170 */ if ((fC||fZ)) goto L_005c0170;
L_005c00af:; BB(0x005c00af);
    /* 005c00af: mov ecx, esi */ r_ecx = r_esi;
L_005c00b1:; BB(0x005c00b1);
    /* 005c00b1: fld dword ptr [ecx + edx*8 + 0xd8] */ FPUSH(R_F32((u32)(r_ecx+r_edx*8+0xd8u)));
    /* 005c00b8: fmul dword ptr [0x92b81c] */ ST(0) = ST(0) * R_F32((u32)(0x92b81cu));
    /* 005c00be: movzx edi, byte ptr [ecx + edx*2 + 0xf2] */ r_edi = (u32)R8((u32)(r_ecx+r_edx*2+0xf2u));
    /* 005c00c6: movzx eax, byte ptr [ecx + edx*2 + 0xf3] */ r_eax = (u32)R8((u32)(r_ecx+r_edx*2+0xf3u));
    /* 005c00ce: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005c00d2: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005c00d6: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005c00da: fdiv dword ptr [0x92b810] */ ST(0) = ST(0) / R_F32((u32)(0x92b810u));
    /* 005c00e0: fmul dword ptr [0x92b814] */ ST(0) = ST(0) * R_F32((u32)(0x92b814u));
    /* 005c00e6: fdiv dword ptr [0x92b80c] */ ST(0) = ST(0) / R_F32((u32)(0x92b80cu));
    /* 005c00ec: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 005c00f0: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005c00f4: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005c00f9: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c00fe: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005c0102: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005c0106: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005c010a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005c010e: mov esi, dword ptr [esp + 0x18] */ r_esi = R32((u32)(r_esp+0x18u));
    /* 005c0112: shl edi, 9 */ { u32 c = (9u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edi = r;  } }
    /* 005c0115: add edi, 0xffffc000 */ {  u32 a = r_edi; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c011b: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 005c011f: lea ebp, [ecx + 0x338] */ r_ebp = (u32)(r_ecx+0x338u);
    /* 005c0125: lea ebx, [ecx + 0x13c] */ r_ebx = (u32)(r_ecx+0x13cu);
L_005c012b:; BB(0x005c012b);
    /* 005c012b: mov ecx, edi */ r_ecx = r_edi;
    /* 005c012d: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5c0132u); f_0082dcbc();
    /* 005c0132: fadd dword ptr [0x92b818] */ ST(0) = ST(0) + R_F32((u32)(0x92b818u));
    /* 005c0138: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 005c013c: fadd dword ptr [ebp - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffffcu));
    /* 005c013f: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 005c0142: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c0144: add ebp, -4 */ {  u32 a = r_ebp; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c0147: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c0149: jbe 0x5c012b */ if ((fC||fZ)) goto L_005c012b;
L_005c014b:; BB(0x005c014b);
    /* 005c014b: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 005c014f: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 005c0153: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c0156: cmp edx, dword ptr [ecx + 0xcc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xccu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c015c: jb 0x5c00b1 */ if (fC) goto L_005c00b1;
L_005c0162:; BB(0x005c0162);
    /* 005c0162: mov esi, ecx */ r_esi = r_ecx;
    /* 005c0164: jmp 0x5c0170 */ goto L_005c0170;
L_005c0166:; BB(0x005c0166);
    /* 005c0166: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0167: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0168: call 0x5bcc88 */ r_esp -= 4; W32(r_esp, 0x5c016du); f_005bcc88();
    /* 005c016d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c0170:; BB(0x005c0170);
    /* 005c0170: mov ecx, esi */ r_ecx = r_esi;
    /* 005c0172: call 0x5bf8b0 */ r_esp -= 4; W32(r_esp, 0x5c0177u); f_005bf8b0();
    /* 005c0177: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c017a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c017b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c017c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c017d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c017e: ret  */ FN_RET(0x005bf8c0); r_esp += 4; return;
L_005c017f:; BB(0x005c017f);
    /* 005c017f: lea eax, [ebx + ebx*4] */ r_eax = (u32)(r_ebx+r_ebx*4);
    /* 005c0182: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c0184: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c0186: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 005c0188: lea edx, [esi + eax + 0x638] */ r_edx = (u32)(r_esi+r_eax+0x638u);
    /* 005c018f: mov ecx, esi */ r_ecx = r_esi;
    /* 005c0191: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0192: call 0x5bf7dc */ r_esp -= 4; W32(r_esp, 0x5c0197u); f_005bf7dc();
    /* 005c0197: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c0199: je 0x5c03a4 */ if (fZ) goto L_005c03a4;
L_005c019f:; BB(0x005c019f);
    /* 005c019f: mov eax, dword ptr [esi + 0xb8] */ r_eax = R32((u32)(r_esi+0xb8u));
    /* 005c01a5: lea ebx, [esi + 0xb8] */ r_ebx = (u32)(r_esi+0xb8u);
    /* 005c01ab: lea edx, [esi + 0x138] */ r_edx = (u32)(r_esi+0x138u);
    /* 005c01b1: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c01b3: jne 0x5c0393 */ if (!fZ) goto L_005c0393;
L_005c01b9:; BB(0x005c01b9);
    /* 005c01b9: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c01bb: jne 0x5c02a6 */ if (!fZ) goto L_005c02a6;
L_005c01c1:; BB(0x005c01c1);
    /* 005c01c1: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 005c01c3: je 0x5c039d */ if (fZ) goto L_005c039d;
L_005c01c9:; BB(0x005c01c9);
    /* 005c01c9: lea ecx, [esi + 0x138] */ r_ecx = (u32)(r_esi+0x138u);
    /* 005c01cf: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005c01d1: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005c01d3: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005c01d5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c01d7: lea eax, [esi + 0x538] */ r_eax = (u32)(r_esi+0x538u);
L_005c01dd:; BB(0x005c01dd);
    /* 005c01dd: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005c01df: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 005c01e2: mov dword ptr [ecx + 8], ebp */ W32((u32)(r_ecx+0x8u), r_ebp);
    /* 005c01e5: mov dword ptr [ecx + 0xc], edi */ W32((u32)(r_ecx+0xcu), r_edi);
    /* 005c01e8: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c01eb: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c01ed: ja 0x5c01dd */ if ((!fC&&!fZ)) goto L_005c01dd;
L_005c01ef:; BB(0x005c01ef);
    /* 005c01ef: mov eax, 0x10000 */ r_eax = 0x10000u;
    /* 005c01f4: fld dword ptr [esi + 0xe0] */ FPUSH(R_F32((u32)(r_esi+0xe0u)));
    /* 005c01fa: fmul dword ptr [0x92b81c] */ ST(0) = ST(0) * R_F32((u32)(0x92b81cu));
    /* 005c0200: fld dword ptr [esi + 0xd8] */ FPUSH(R_F32((u32)(r_esi+0xd8u)));
    /* 005c0206: mov ecx, dword ptr [esi + 0xd8] */ r_ecx = R32((u32)(r_esi+0xd8u));
    /* 005c020c: movzx ebx, byte ptr [esi + 0xf3] */ r_ebx = (u32)R8((u32)(r_esi+0xf3u));
    /* 005c0213: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 005c0217: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005c021b: mov dword ptr [esp + 0x40], ebx */ W32((u32)(r_esp+0x40u), r_ebx);
    /* 005c021f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c0221: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x005c0221, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x005c0221, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 005c0223: movzx edx, byte ptr [esi + 0xf2] */ r_edx = (u32)R8((u32)(r_esi+0xf2u));
    /* 005c022a: mov edi, 0x7f */ r_edi = 0x7fu;
    /* 005c022f: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 005c0233: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 005c0237: mov dword ptr [esp + 0x28], ecx */ W32((u32)(r_esp+0x28u), r_ecx);
    /* 005c023b: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005c023d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_005c023f:; BB(0x005c023f);
    /* 005c023f: mov ecx, dword ptr [esp + 0x38] */ r_ecx = R32((u32)(r_esp+0x38u));
    /* 005c0243: imul ecx, ebp */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ebp; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 005c0246: add ecx, 0xffffc000 */ {  u32 a = r_ecx; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c024c: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5c0251u); f_0082dcbc();
    /* 005c0251: fadd dword ptr [0x92b818] */ ST(0) = ST(0) + R_F32((u32)(0x92b818u));
    /* 005c0257: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 005c025b: fadd dword ptr [esp + 0x30] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x30u));
    /* 005c025f: mov eax, dword ptr [esp + 0x40] */ r_eax = R32((u32)(r_esp+0x40u));
    /* 005c0263: fstp dword ptr [esi + edi*4 + 0x138] */ W_F32((u32)(r_esi+r_edi*4+0x138u), ST(0)); FPOP();
    /* 005c026a: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c026d: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c0270: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c0272: jl 0x5c027b */ if ((fS!=fO)) goto L_005c027b;
L_005c0274:; BB(0x005c0274);
    /* 005c0274: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005c0276: mov ebx, 1 */ r_ebx = 0x1u;
L_005c027b:; BB(0x005c027b);
    /* 005c027b: mov eax, dword ptr [esp + 0x2c] */ r_eax = R32((u32)(r_esp+0x2cu));
    /* 005c027f: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
L_005c0283:; BB(0x005c0283);
    /* 005c0283: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 005c0285: jl 0x5c039d */ if ((fS!=fO)) goto L_005c039d;
L_005c028b:; BB(0x005c028b);
    /* 005c028b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005c028d: je 0x5c023f */ if (fZ) goto L_005c023f;
L_005c028f:; BB(0x005c028f);
    /* 005c028f: mov dword ptr [esi + edi*4 + 0x138], edx */ W32((u32)(r_esi+r_edi*4+0x138u), r_edx);
    /* 005c0296: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c0299: add edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 005c029c: cmp ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 005c029e: jl 0x5c0283 */ if ((fS!=fO)) goto L_005c0283;
L_005c02a0:; BB(0x005c02a0);
    /* 005c02a0: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005c02a2: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005c02a4: jmp 0x5c0283 */ goto L_005c0283;
L_005c02a6:; BB(0x005c02a6);
    /* 005c02a6: lea ecx, [esi + 0x138] */ r_ecx = (u32)(r_esi+0x138u);
    /* 005c02ac: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 005c02ae: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 005c02b0: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 005c02b2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c02b4: lea eax, [esi + 0x538] */ r_eax = (u32)(r_esi+0x538u);
L_005c02ba:; BB(0x005c02ba);
    /* 005c02ba: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
    /* 005c02bc: mov dword ptr [ecx + 4], ebx */ W32((u32)(r_ecx+0x4u), r_ebx);
    /* 005c02bf: mov dword ptr [ecx + 8], ebp */ W32((u32)(r_ecx+0x8u), r_ebp);
    /* 005c02c2: mov dword ptr [ecx + 0xc], edi */ W32((u32)(r_ecx+0xcu), r_edi);
    /* 005c02c5: add ecx, 0x10 */ {  u32 a = r_ecx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 005c02c8: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c02ca: ja 0x5c02ba */ if ((!fC&&!fZ)) goto L_005c02ba;
L_005c02cc:; BB(0x005c02cc);
    /* 005c02cc: mov eax, dword ptr [esi + 0xcc] */ r_eax = R32((u32)(r_esi+0xccu));
    /* 005c02d2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 005c02d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 005c02d6: jbe 0x5c039d */ if ((fC||fZ)) goto L_005c039d;
L_005c02dc:; BB(0x005c02dc);
    /* 005c02dc: mov ecx, esi */ r_ecx = r_esi;
L_005c02de:; BB(0x005c02de);
    /* 005c02de: fld dword ptr [ecx + edx*8 + 0xd8] */ FPUSH(R_F32((u32)(r_ecx+r_edx*8+0xd8u)));
    /* 005c02e5: fmul dword ptr [0x92b81c] */ ST(0) = ST(0) * R_F32((u32)(0x92b81cu));
    /* 005c02eb: movzx esi, byte ptr [ecx + edx*2 + 0xf2] */ r_esi = (u32)R8((u32)(r_ecx+r_edx*2+0xf2u));
    /* 005c02f3: movzx eax, byte ptr [ecx + edx*2 + 0xf3] */ r_eax = (u32)R8((u32)(r_ecx+r_edx*2+0xf3u));
    /* 005c02fb: fstp dword ptr [esp + 0x34] */ W_F32((u32)(r_esp+0x34u), ST(0)); FPOP();
    /* 005c02ff: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 005c0303: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 005c0307: fdiv dword ptr [0x92b810] */ ST(0) = ST(0) / R_F32((u32)(0x92b810u));
    /* 005c030d: fmul dword ptr [0x92b814] */ ST(0) = ST(0) * R_F32((u32)(0x92b814u));
    /* 005c0313: fdiv dword ptr [0x92b80c] */ ST(0) = ST(0) / R_F32((u32)(0x92b80cu));
    /* 005c0319: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 005c031d: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 005c0321: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 005c0326: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 005c032b: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 005c032f: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 005c0333: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 005c0337: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 005c033b: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 005c033f: shl esi, 9 */ { u32 c = (9u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_esi = r;  } }
    /* 005c0342: add esi, 0xffffc000 */ {  u32 a = r_esi; u32 b = 0xffffc000u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c0348: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 005c034c: lea ebp, [ecx + 0x338] */ r_ebp = (u32)(r_ecx+0x338u);
    /* 005c0352: lea ebx, [ecx + 0x13c] */ r_ebx = (u32)(r_ecx+0x13cu);
L_005c0358:; BB(0x005c0358);
    /* 005c0358: mov ecx, esi */ r_ecx = r_esi;
    /* 005c035a: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x5c035fu); f_0082dcbc();
    /* 005c035f: fadd dword ptr [0x92b818] */ ST(0) = ST(0) + R_F32((u32)(0x92b818u));
    /* 005c0365: fmul dword ptr [esp + 0x34] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x34u));
    /* 005c0369: fadd dword ptr [ebp - 4] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffffcu));
    /* 005c036c: fstp dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0)); FPOP();
    /* 005c036f: add esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 005c0371: add ebp, -4 */ {  u32 a = r_ebp; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 005c0374: cmp ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 005c0376: jbe 0x5c0358 */ if ((fC||fZ)) goto L_005c0358;
L_005c0378:; BB(0x005c0378);
    /* 005c0378: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 005c037c: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 005c0380: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 005c0383: cmp edx, dword ptr [ecx + 0xcc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0xccu)); u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 005c0389: jb 0x5c02de */ if (fC) goto L_005c02de;
L_005c038f:; BB(0x005c038f);
    /* 005c038f: mov esi, ecx */ r_esi = r_ecx;
    /* 005c0391: jmp 0x5c039d */ goto L_005c039d;
L_005c0393:; BB(0x005c0393);
    /* 005c0393: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0394: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 005c0395: call 0x5bcc88 */ r_esp -= 4; W32(r_esp, 0x5c039au); f_005bcc88();
    /* 005c039a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_005c039d:; BB(0x005c039d);
    /* 005c039d: mov ecx, esi */ r_ecx = r_esi;
    /* 005c039f: call 0x5bf8b0 */ r_esp -= 4; W32(r_esp, 0x5c03a4u); f_005bf8b0();
L_005c03a4:; BB(0x005c03a4);
    /* 005c03a4: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c03a7: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c03a8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c03a9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c03aa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c03ab: ret  */ FN_RET(0x005bf8c0); r_esp += 4; return;
L_005c03ac:; BB(0x005c03ac);
    /* 005c03ac: mov dword ptr [esi + ebx*4 + 0x6b0], 0 */ W32((u32)(r_esi+r_ebx*4+0x6b0u), 0x0u);
    /* 005c03b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c03b9: jmp 0x5bfd06 */ goto L_005bfd06;
L_005c03be:; BB(0x005c03be);
    /* 005c03be: mov dword ptr [esi + ebx*4 + 0x71c], 0 */ W32((u32)(r_esi+r_ebx*4+0x71cu), 0x0u);
    /* 005c03c9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 005c03cb: jmp 0x5bff6b */ goto L_005bff6b;
L_005c03d0:; BB(0x005c03d0);
    /* 005c03d0: mov eax, dword ptr [esi + 0x538] */ r_eax = R32((u32)(r_esi+0x538u));
    /* 005c03d6: mov dword ptr [esi + 0x60c], 0 */ W32((u32)(r_esi+0x60cu), 0x0u);
    /* 005c03e0: and eax, 0xfffffffd */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 005c03e3: mov dword ptr [esi + 0x538], eax */ W32((u32)(r_esi+0x538u), r_eax);
    /* 005c03e9: add dword ptr [esi + 0x53c], -1 */ { u32 ad = (u32)(r_esi+0x53cu);  u32 a = R32(ad); u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 005c03f0: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 005c03f3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 005c03f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 005c03f5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 005c03f6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 005c03f7: ret  */ FN_RET(0x005bf8c0); r_esp += 4; return;
}

