#include "protos.h"

void f_006a5050(void)
{
    FN_ENTER(0x006a5050);
    /* 006a5050: mov ecx, dword ptr [ebp + 0x1c8] */ r_ecx = R32((u32)(r_ebp+0x1c8u));
    /* 006a5056: call 0x817574 */ r_esp -= 4; W32(r_esp, 0x6a505bu); f_00817574();
    /* 006a505b: mov edx, dword ptr [ebp + 0x1c8] */ r_edx = R32((u32)(r_ebp+0x1c8u));
    /* 006a5061: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 006a5065: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a506a: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 006a506e: mov dword ptr [ebp + 0x1c8], 0 */ W32((u32)(r_ebp+0x1c8u), 0x0u);
    /* 006a5078: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a507b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006a507c: ret 4 */ FN_RET(0x006a5050); r_esp += 8; return;
}

void f_006a5068(void)
{
    FN_ENTER(0x006a5068);
}

void f_006a5080(void) /* sub_6A5080 */
{
    FN_ENTER(0x006a5080);
    /* 006a5080: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a5083: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 006a5086: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5088: je 0x6a50f8 */ if (fZ) goto L_006a50f8;
L_006a508a:; BB(0x006a508a);
    /* 006a508a: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006a508e: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006a5091: mov esi, eax */ r_esi = r_eax;
L_006a5093:; BB(0x006a5093);
    /* 006a5093: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 006a5096: cmp edx, dword ptr [0x9cba2c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a509c: jne 0x6a50b4 */ if (!fZ) goto L_006a50b4;
L_006a509e:; BB(0x006a509e);
    /* 006a509e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a50a0: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a50a5u); f_008173b4();
    /* 006a50a5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a50a7: je 0x6a50b0 */ if (fZ) goto L_006a50b0;
L_006a50a9:; BB(0x006a50a9);
    /* 006a50a9: mov edx, 1 */ r_edx = 0x1u;
    /* 006a50ae: jmp 0x6a50b6 */ goto L_006a50b6;
L_006a50b0:; BB(0x006a50b0);
    /* 006a50b0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a50b2: jmp 0x6a50b6 */ goto L_006a50b6;
L_006a50b4:; BB(0x006a50b4);
    /* 006a50b4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a50b6:; BB(0x006a50b6);
    /* 006a50b6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a50b8: je 0x6a50e3 */ if (fZ) goto L_006a50e3;
L_006a50ba:; BB(0x006a50ba);
    /* 006a50ba: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 006a50bd: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a50c2u); f_008173b4();
    /* 006a50c2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a50c4: jne 0x6a50ca */ if (!fZ) goto L_006a50ca;
L_006a50c6:; BB(0x006a50c6);
    /* 006a50c6: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006a50c8: jmp 0x6a50cd */ goto L_006a50cd;
L_006a50ca:; BB(0x006a50ca);
    /* 006a50ca: mov ebx, dword ptr [esi + 0x1c] */ r_ebx = R32((u32)(r_esi+0x1cu));
L_006a50cd:; BB(0x006a50cd);
    /* 006a50cd: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a50cf: je 0x6a50e3 */ if (fZ) goto L_006a50e3;
L_006a50d1:; BB(0x006a50d1);
    /* 006a50d1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a50d3: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a50d8u); f_008173b4();
    /* 006a50d8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a50da: je 0x6a50e3 */ if (fZ) goto L_006a50e3;
L_006a50dc:; BB(0x006a50dc);
    /* 006a50dc: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006a50de: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a50e0: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x6a50e3u); call_ind(t); }
L_006a50e3:; BB(0x006a50e3);
    /* 006a50e3: mov ecx, esi */ r_ecx = r_esi;
    /* 006a50e5: call 0x6a5080 */ r_esp -= 4; W32(r_esp, 0x6a50eau); f_006a5080();
    /* 006a50ea: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 006a50ed: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a50ef: jne 0x6a5093 */ if (!fZ) goto L_006a5093;
L_006a50f1:; BB(0x006a50f1);
    /* 006a50f1: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006a50f5: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_006a50f8:; BB(0x006a50f8);
    /* 006a50f8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a50fb: ret  */ FN_RET(0x006a5080); r_esp += 4; return;
}

void f_006a50fc(void) /* sub_6A50FC */
{
    FN_ENTER(0x006a50fc);
    /* 006a50fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a50fd: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006a5101: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 006a5107: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 006a510a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a510c: mov dword ptr [0xa9437c], 0 */ W32((u32)(0xa9437cu), 0x0u);
    /* 006a5116: mov dword ptr [0xa94384], eax */ W32((u32)(0xa94384u), r_eax);
    /* 006a511b: mov eax, 0 */ r_eax = 0x0u;
    /* 006a5120: je 0x6a5193 */ if (fZ) goto L_006a5193;
L_006a5122:; BB(0x006a5122);
    /* 006a5122: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 006a5125: mov ebx, edx */ r_ebx = r_edx;
L_006a5127:; BB(0x006a5127);
    /* 006a5127: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 006a512a: cmp eax, dword ptr [0x9cba2c] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5130: jne 0x6a5148 */ if (!fZ) goto L_006a5148;
L_006a5132:; BB(0x006a5132);
    /* 006a5132: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a5134: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a5139u); f_008173b4();
    /* 006a5139: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a513b: je 0x6a5144 */ if (fZ) goto L_006a5144;
L_006a513d:; BB(0x006a513d);
    /* 006a513d: mov eax, 1 */ r_eax = 0x1u;
    /* 006a5142: jmp 0x6a514a */ goto L_006a514a;
L_006a5144:; BB(0x006a5144);
    /* 006a5144: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a5146: jmp 0x6a514a */ goto L_006a514a;
L_006a5148:; BB(0x006a5148);
    /* 006a5148: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a514a:; BB(0x006a514a);
    /* 006a514a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a514c: je 0x6a517d */ if (fZ) goto L_006a517d;
L_006a514e:; BB(0x006a514e);
    /* 006a514e: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006a5151: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a5156u); f_008173b4();
    /* 006a5156: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5158: jne 0x6a515e */ if (!fZ) goto L_006a515e;
L_006a515a:; BB(0x006a515a);
    /* 006a515a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a515c: jmp 0x6a5161 */ goto L_006a5161;
L_006a515e:; BB(0x006a515e);
    /* 006a515e: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
L_006a5161:; BB(0x006a5161);
    /* 006a5161: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5163: je 0x6a517d */ if (fZ) goto L_006a517d;
L_006a5165:; BB(0x006a5165);
    /* 006a5165: mov edx, dword ptr [0xa94384] */ r_edx = R32((u32)(0xa94384u));
    /* 006a516b: add dword ptr [0xa9437c], 1 */ { u32 ad = (u32)(0xa9437cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006a5172: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006a5174: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a5177: mov dword ptr [0xa94384], edx */ W32((u32)(0xa94384u), r_edx);
L_006a517d:; BB(0x006a517d);
    /* 006a517d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a517f: call 0x6a5198 */ r_esp -= 4; W32(r_esp, 0x6a5184u); f_006a5198();
    /* 006a5184: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006a5187: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a5189: jne 0x6a5127 */ if (!fZ) goto L_006a5127;
L_006a518b:; BB(0x006a518b);
    /* 006a518b: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 006a518e: mov eax, dword ptr [0xa9437c] */ r_eax = R32((u32)(0xa9437cu));
L_006a5193:; BB(0x006a5193);
    /* 006a5193: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a5194: ret 4 */ FN_RET(0x006a50fc); r_esp += 8; return;
}

void f_006a5198(void) /* sub_6A5198 */
{
    FN_ENTER(0x006a5198);
    /* 006a5198: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a5199: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 006a519c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a519e: je 0x6a520a */ if (fZ) goto L_006a520a;
L_006a51a0:; BB(0x006a51a0);
    /* 006a51a0: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 006a51a3: mov ebx, eax */ r_ebx = r_eax;
L_006a51a5:; BB(0x006a51a5);
    /* 006a51a5: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 006a51a8: cmp edx, dword ptr [0x9cba2c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a51ae: jne 0x6a51c6 */ if (!fZ) goto L_006a51c6;
L_006a51b0:; BB(0x006a51b0);
    /* 006a51b0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a51b2: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a51b7u); f_008173b4();
    /* 006a51b7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a51b9: je 0x6a51c2 */ if (fZ) goto L_006a51c2;
L_006a51bb:; BB(0x006a51bb);
    /* 006a51bb: mov edx, 1 */ r_edx = 0x1u;
    /* 006a51c0: jmp 0x6a51c8 */ goto L_006a51c8;
L_006a51c2:; BB(0x006a51c2);
    /* 006a51c2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a51c4: jmp 0x6a51c8 */ goto L_006a51c8;
L_006a51c6:; BB(0x006a51c6);
    /* 006a51c6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a51c8:; BB(0x006a51c8);
    /* 006a51c8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a51ca: je 0x6a51f9 */ if (fZ) goto L_006a51f9;
L_006a51cc:; BB(0x006a51cc);
    /* 006a51cc: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006a51cf: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a51d4u); f_008173b4();
    /* 006a51d4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a51d6: jne 0x6a51dc */ if (!fZ) goto L_006a51dc;
L_006a51d8:; BB(0x006a51d8);
    /* 006a51d8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a51da: jmp 0x6a51df */ goto L_006a51df;
L_006a51dc:; BB(0x006a51dc);
    /* 006a51dc: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
L_006a51df:; BB(0x006a51df);
    /* 006a51df: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a51e1: je 0x6a51f9 */ if (fZ) goto L_006a51f9;
L_006a51e3:; BB(0x006a51e3);
    /* 006a51e3: mov eax, dword ptr [0xa94384] */ r_eax = R32((u32)(0xa94384u));
    /* 006a51e8: add dword ptr [0xa9437c], 1 */ { u32 ad = (u32)(0xa9437cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006a51ef: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 006a51f1: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a51f4: mov dword ptr [0xa94384], eax */ W32((u32)(0xa94384u), r_eax);
L_006a51f9:; BB(0x006a51f9);
    /* 006a51f9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a51fb: call 0x6a5198 */ r_esp -= 4; W32(r_esp, 0x6a5200u); f_006a5198();
    /* 006a5200: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006a5203: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a5205: jne 0x6a51a5 */ if (!fZ) goto L_006a51a5;
L_006a5207:; BB(0x006a5207);
    /* 006a5207: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_006a520a:; BB(0x006a520a);
    /* 006a520a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a520b: ret  */ FN_RET(0x006a5198); r_esp += 4; return;
}

void f_006a520c(void) /* sub_6A520C */
{
    FN_ENTER(0x006a520c);
    /* 006a520c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a520d: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006a5211: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 006a5217: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 006a521a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a521c: mov dword ptr [0xa9437c], 0 */ W32((u32)(0xa9437cu), 0x0u);
    /* 006a5226: mov dword ptr [0xa94384], eax */ W32((u32)(0xa94384u), r_eax);
    /* 006a522b: mov eax, 0 */ r_eax = 0x0u;
    /* 006a5230: je 0x6a52b2 */ if (fZ) goto L_006a52b2;
L_006a5236:; BB(0x006a5236);
    /* 006a5236: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 006a5239: mov ebx, edx */ r_ebx = r_edx;
L_006a523b:; BB(0x006a523b);
    /* 006a523b: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 006a523e: cmp eax, dword ptr [0x9cba2c] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5244: jne 0x6a525c */ if (!fZ) goto L_006a525c;
L_006a5246:; BB(0x006a5246);
    /* 006a5246: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a5248: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a524du); f_008173b4();
    /* 006a524d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a524f: je 0x6a5258 */ if (fZ) goto L_006a5258;
L_006a5251:; BB(0x006a5251);
    /* 006a5251: mov eax, 1 */ r_eax = 0x1u;
    /* 006a5256: jmp 0x6a525e */ goto L_006a525e;
L_006a5258:; BB(0x006a5258);
    /* 006a5258: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a525a: jmp 0x6a525e */ goto L_006a525e;
L_006a525c:; BB(0x006a525c);
    /* 006a525c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a525e:; BB(0x006a525e);
    /* 006a525e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5260: je 0x6a529c */ if (fZ) goto L_006a529c;
L_006a5262:; BB(0x006a5262);
    /* 006a5262: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006a5265: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a526au); f_008173b4();
    /* 006a526a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a526c: jne 0x6a5272 */ if (!fZ) goto L_006a5272;
L_006a526e:; BB(0x006a526e);
    /* 006a526e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a5270: jmp 0x6a5275 */ goto L_006a5275;
L_006a5272:; BB(0x006a5272);
    /* 006a5272: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
L_006a5275:; BB(0x006a5275);
    /* 006a5275: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5277: je 0x6a529c */ if (fZ) goto L_006a529c;
L_006a5279:; BB(0x006a5279);
    /* 006a5279: mov eax, dword ptr [edx + 0xdc] */ r_eax = R32((u32)(r_edx+0xdcu));
    /* 006a527f: test eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5284: jne 0x6a529c */ if (!fZ) goto L_006a529c;
L_006a5286:; BB(0x006a5286);
    /* 006a5286: mov eax, dword ptr [0xa94384] */ r_eax = R32((u32)(0xa94384u));
    /* 006a528b: add dword ptr [0xa9437c], 1 */ { u32 ad = (u32)(0xa9437cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006a5292: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
    /* 006a5294: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a5297: mov dword ptr [0xa94384], eax */ W32((u32)(0xa94384u), r_eax);
L_006a529c:; BB(0x006a529c);
    /* 006a529c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a529e: call 0x6a52b8 */ r_esp -= 4; W32(r_esp, 0x6a52a3u); f_006a52b8();
    /* 006a52a3: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006a52a6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a52a8: jne 0x6a523b */ if (!fZ) goto L_006a523b;
L_006a52aa:; BB(0x006a52aa);
    /* 006a52aa: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 006a52ad: mov eax, dword ptr [0xa9437c] */ r_eax = R32((u32)(0xa9437cu));
L_006a52b2:; BB(0x006a52b2);
    /* 006a52b2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a52b3: ret 4 */ FN_RET(0x006a520c); r_esp += 8; return;
}

void f_006a52b8(void) /* sub_6A52B8 */
{
    FN_ENTER(0x006a52b8);
    /* 006a52b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a52b9: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 006a52bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a52be: je 0x6a533e */ if (fZ) goto L_006a533e;
L_006a52c4:; BB(0x006a52c4);
    /* 006a52c4: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 006a52c7: mov ebx, eax */ r_ebx = r_eax;
L_006a52c9:; BB(0x006a52c9);
    /* 006a52c9: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 006a52cc: cmp edx, dword ptr [0x9cba2c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a52d2: jne 0x6a52ea */ if (!fZ) goto L_006a52ea;
L_006a52d4:; BB(0x006a52d4);
    /* 006a52d4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a52d6: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a52dbu); f_008173b4();
    /* 006a52db: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a52dd: je 0x6a52e6 */ if (fZ) goto L_006a52e6;
L_006a52df:; BB(0x006a52df);
    /* 006a52df: mov edx, 1 */ r_edx = 0x1u;
    /* 006a52e4: jmp 0x6a52ec */ goto L_006a52ec;
L_006a52e6:; BB(0x006a52e6);
    /* 006a52e6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a52e8: jmp 0x6a52ec */ goto L_006a52ec;
L_006a52ea:; BB(0x006a52ea);
    /* 006a52ea: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a52ec:; BB(0x006a52ec);
    /* 006a52ec: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a52ee: je 0x6a532d */ if (fZ) goto L_006a532d;
L_006a52f0:; BB(0x006a52f0);
    /* 006a52f0: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006a52f3: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a52f8u); f_008173b4();
    /* 006a52f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a52fa: jne 0x6a5300 */ if (!fZ) goto L_006a5300;
L_006a52fc:; BB(0x006a52fc);
    /* 006a52fc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a52fe: jmp 0x6a5303 */ goto L_006a5303;
L_006a5300:; BB(0x006a5300);
    /* 006a5300: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
L_006a5303:; BB(0x006a5303);
    /* 006a5303: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5305: je 0x6a532d */ if (fZ) goto L_006a532d;
L_006a5307:; BB(0x006a5307);
    /* 006a5307: mov edx, dword ptr [eax + 0xdc] */ r_edx = R32((u32)(r_eax+0xdcu));
    /* 006a530d: test edx, 0x80 */ {  u32 a = r_edx; u32 b = 0x80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5313: jne 0x6a532d */ if (!fZ) goto L_006a532d;
L_006a5315:; BB(0x006a5315);
    /* 006a5315: mov edx, dword ptr [0xa94384] */ r_edx = R32((u32)(0xa94384u));
    /* 006a531b: add dword ptr [0xa9437c], 1 */ { u32 ad = (u32)(0xa9437cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006a5322: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006a5324: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a5327: mov dword ptr [0xa94384], edx */ W32((u32)(0xa94384u), r_edx);
L_006a532d:; BB(0x006a532d);
    /* 006a532d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a532f: call 0x6a52b8 */ r_esp -= 4; W32(r_esp, 0x6a5334u); f_006a52b8();
    /* 006a5334: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006a5337: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a5339: jne 0x6a52c9 */ if (!fZ) goto L_006a52c9;
L_006a533b:; BB(0x006a533b);
    /* 006a533b: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_006a533e:; BB(0x006a533e);
    /* 006a533e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a533f: ret  */ FN_RET(0x006a52b8); r_esp += 4; return;
}

void f_006a5340(void) /* sub_6A5340 */
{
    FN_ENTER(0x006a5340);
    /* 006a5340: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a5343: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006a5347: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 006a534d: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 006a5350: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5352: mov dword ptr [0xa9437c], 0 */ W32((u32)(0xa9437cu), 0x0u);
    /* 006a535c: mov dword ptr [0xa94388], eax */ W32((u32)(0xa94388u), r_eax);
    /* 006a5361: mov eax, 0 */ r_eax = 0x0u;
    /* 006a5366: je 0x6a5416 */ if (fZ) goto L_006a5416;
L_006a536c:; BB(0x006a536c);
    /* 006a536c: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 006a5370: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 006a5374: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006a5377: mov edi, edx */ r_edi = r_edx;
L_006a5379:; BB(0x006a5379);
    /* 006a5379: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 006a537c: cmp eax, dword ptr [0x9cba2c] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5382: jne 0x6a539a */ if (!fZ) goto L_006a539a;
L_006a5384:; BB(0x006a5384);
    /* 006a5384: mov ecx, edi */ r_ecx = r_edi;
    /* 006a5386: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a538bu); f_008173b4();
    /* 006a538b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a538d: je 0x6a5396 */ if (fZ) goto L_006a5396;
L_006a538f:; BB(0x006a538f);
    /* 006a538f: mov eax, 1 */ r_eax = 0x1u;
    /* 006a5394: jmp 0x6a539c */ goto L_006a539c;
L_006a5396:; BB(0x006a5396);
    /* 006a5396: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a5398: jmp 0x6a539c */ goto L_006a539c;
L_006a539a:; BB(0x006a539a);
    /* 006a539a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a539c:; BB(0x006a539c);
    /* 006a539c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a539e: je 0x6a53f4 */ if (fZ) goto L_006a53f4;
L_006a53a0:; BB(0x006a53a0);
    /* 006a53a0: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 006a53a3: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a53a8u); f_008173b4();
    /* 006a53a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a53aa: jne 0x6a53b0 */ if (!fZ) goto L_006a53b0;
L_006a53ac:; BB(0x006a53ac);
    /* 006a53ac: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006a53ae: jmp 0x6a53b3 */ goto L_006a53b3;
L_006a53b0:; BB(0x006a53b0);
    /* 006a53b0: mov ebx, dword ptr [edi + 0x1c] */ r_ebx = R32((u32)(r_edi+0x1cu));
L_006a53b3:; BB(0x006a53b3);
    /* 006a53b3: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a53b5: je 0x6a53f4 */ if (fZ) goto L_006a53f4;
L_006a53b7:; BB(0x006a53b7);
    /* 006a53b7: mov esi, dword ptr [0xa94388] */ r_esi = R32((u32)(0xa94388u));
    /* 006a53bd: lea eax, [esi + 8] */ r_eax = (u32)(r_esi+0x8u);
    /* 006a53c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a53c1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a53c3: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x6a53c8u); f_005c425c();
    /* 006a53c8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a53ca: je 0x6a53f4 */ if (fZ) goto L_006a53f4;
L_006a53cc:; BB(0x006a53cc);
    /* 006a53cc: movzx eax, byte ptr [ebx + 0xf1] */ r_eax = (u32)R8((u32)(r_ebx+0xf1u));
    /* 006a53d3: add dword ptr [0xa9437c], 1 */ { u32 ad = (u32)(0xa9437cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006a53da: mov byte ptr [esi], al */ W8((u32)(r_esi), (u8)r_eax);
    /* 006a53dc: mov ebx, dword ptr [ebx + 0xdc] */ r_ebx = R32((u32)(r_ebx+0xdcu));
    /* 006a53e2: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 006a53e5: mov esi, dword ptr [0xa94388] */ r_esi = R32((u32)(0xa94388u));
    /* 006a53eb: add esi, 0x1c */ {  u32 a = r_esi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006a53ee: mov dword ptr [0xa94388], esi */ W32((u32)(0xa94388u), r_esi);
L_006a53f4:; BB(0x006a53f4);
    /* 006a53f4: mov ecx, edi */ r_ecx = r_edi;
    /* 006a53f6: call 0x6a541c */ r_esp -= 4; W32(r_esp, 0x6a53fbu); f_006a541c();
    /* 006a53fb: mov edi, dword ptr [edi + 0x10] */ r_edi = R32((u32)(r_edi+0x10u));
    /* 006a53fe: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5400: jne 0x6a5379 */ if (!fZ) goto L_006a5379;
L_006a5406:; BB(0x006a5406);
    /* 006a5406: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 006a540a: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 006a540e: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 006a5411: mov eax, dword ptr [0xa9437c] */ r_eax = R32((u32)(0xa9437cu));
L_006a5416:; BB(0x006a5416);
    /* 006a5416: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a5419: ret 4 */ FN_RET(0x006a5340); r_esp += 8; return;
}

void f_006a541c(void) /* sub_6A541C */
{
    FN_ENTER(0x006a541c);
    /* 006a541c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a541f: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 006a5422: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5424: je 0x6a54cf */ if (fZ) goto L_006a54cf;
L_006a542a:; BB(0x006a542a);
    /* 006a542a: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 006a542e: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 006a5432: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 006a5435: mov edi, eax */ r_edi = r_eax;
L_006a5437:; BB(0x006a5437);
    /* 006a5437: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 006a543a: cmp edx, dword ptr [0x9cba2c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5440: jne 0x6a5458 */ if (!fZ) goto L_006a5458;
L_006a5442:; BB(0x006a5442);
    /* 006a5442: mov ecx, edi */ r_ecx = r_edi;
    /* 006a5444: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a5449u); f_008173b4();
    /* 006a5449: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a544b: je 0x6a5454 */ if (fZ) goto L_006a5454;
L_006a544d:; BB(0x006a544d);
    /* 006a544d: mov edx, 1 */ r_edx = 0x1u;
    /* 006a5452: jmp 0x6a545a */ goto L_006a545a;
L_006a5454:; BB(0x006a5454);
    /* 006a5454: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a5456: jmp 0x6a545a */ goto L_006a545a;
L_006a5458:; BB(0x006a5458);
    /* 006a5458: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a545a:; BB(0x006a545a);
    /* 006a545a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a545c: je 0x6a54b2 */ if (fZ) goto L_006a54b2;
L_006a545e:; BB(0x006a545e);
    /* 006a545e: mov ecx, dword ptr [edi + 0x1c] */ r_ecx = R32((u32)(r_edi+0x1cu));
    /* 006a5461: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a5466u); f_008173b4();
    /* 006a5466: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5468: jne 0x6a546e */ if (!fZ) goto L_006a546e;
L_006a546a:; BB(0x006a546a);
    /* 006a546a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006a546c: jmp 0x6a5471 */ goto L_006a5471;
L_006a546e:; BB(0x006a546e);
    /* 006a546e: mov ebx, dword ptr [edi + 0x1c] */ r_ebx = R32((u32)(r_edi+0x1cu));
L_006a5471:; BB(0x006a5471);
    /* 006a5471: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5473: je 0x6a54b2 */ if (fZ) goto L_006a54b2;
L_006a5475:; BB(0x006a5475);
    /* 006a5475: mov esi, dword ptr [0xa94388] */ r_esi = R32((u32)(0xa94388u));
    /* 006a547b: lea edx, [esi + 8] */ r_edx = (u32)(r_esi+0x8u);
    /* 006a547e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a547f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a5481: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x6a5486u); f_005c425c();
    /* 006a5486: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5488: je 0x6a54b2 */ if (fZ) goto L_006a54b2;
L_006a548a:; BB(0x006a548a);
    /* 006a548a: movzx edx, byte ptr [ebx + 0xf1] */ r_edx = (u32)R8((u32)(r_ebx+0xf1u));
    /* 006a5491: add dword ptr [0xa9437c], 1 */ { u32 ad = (u32)(0xa9437cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006a5498: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 006a549a: mov ebx, dword ptr [ebx + 0xdc] */ r_ebx = R32((u32)(r_ebx+0xdcu));
    /* 006a54a0: mov dword ptr [esi + 4], ebx */ W32((u32)(r_esi+0x4u), r_ebx);
    /* 006a54a3: mov esi, dword ptr [0xa94388] */ r_esi = R32((u32)(0xa94388u));
    /* 006a54a9: add esi, 0x1c */ {  u32 a = r_esi; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006a54ac: mov dword ptr [0xa94388], esi */ W32((u32)(0xa94388u), r_esi);
L_006a54b2:; BB(0x006a54b2);
    /* 006a54b2: mov ecx, edi */ r_ecx = r_edi;
    /* 006a54b4: call 0x6a541c */ r_esp -= 4; W32(r_esp, 0x6a54b9u); f_006a541c();
    /* 006a54b9: mov edi, dword ptr [edi + 0x10] */ r_edi = R32((u32)(r_edi+0x10u));
    /* 006a54bc: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a54be: jne 0x6a5437 */ if (!fZ) goto L_006a5437;
L_006a54c4:; BB(0x006a54c4);
    /* 006a54c4: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 006a54c8: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 006a54cc: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_006a54cf:; BB(0x006a54cf);
    /* 006a54cf: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a54d2: ret  */ FN_RET(0x006a541c); r_esp += 4; return;
}

void f_006a54d4(void) /* sub_6A54D4 */
{
    FN_ENTER(0x006a54d4);
    /* 006a54d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a54d5: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006a54d9: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 006a54df: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 006a54e2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a54e4: mov dword ptr [0xa9437c], 0 */ W32((u32)(0xa9437cu), 0x0u);
    /* 006a54ee: mov dword ptr [0xa9438c], eax */ W32((u32)(0xa9438cu), r_eax);
    /* 006a54f3: mov eax, 0 */ r_eax = 0x0u;
    /* 006a54f8: je 0x6a5570 */ if (fZ) goto L_006a5570;
L_006a54fa:; BB(0x006a54fa);
    /* 006a54fa: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 006a54fd: mov ebx, edx */ r_ebx = r_edx;
L_006a54ff:; BB(0x006a54ff);
    /* 006a54ff: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 006a5502: cmp eax, dword ptr [0x9cba2c] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5508: jne 0x6a5520 */ if (!fZ) goto L_006a5520;
L_006a550a:; BB(0x006a550a);
    /* 006a550a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a550c: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a5511u); f_008173b4();
    /* 006a5511: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5513: je 0x6a551c */ if (fZ) goto L_006a551c;
L_006a5515:; BB(0x006a5515);
    /* 006a5515: mov eax, 1 */ r_eax = 0x1u;
    /* 006a551a: jmp 0x6a5522 */ goto L_006a5522;
L_006a551c:; BB(0x006a551c);
    /* 006a551c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a551e: jmp 0x6a5522 */ goto L_006a5522;
L_006a5520:; BB(0x006a5520);
    /* 006a5520: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a5522:; BB(0x006a5522);
    /* 006a5522: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5524: je 0x6a555a */ if (fZ) goto L_006a555a;
L_006a5526:; BB(0x006a5526);
    /* 006a5526: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006a5529: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a552eu); f_008173b4();
    /* 006a552e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5530: jne 0x6a5536 */ if (!fZ) goto L_006a5536;
L_006a5532:; BB(0x006a5532);
    /* 006a5532: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a5534: jmp 0x6a5539 */ goto L_006a5539;
L_006a5536:; BB(0x006a5536);
    /* 006a5536: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
L_006a5539:; BB(0x006a5539);
    /* 006a5539: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a553b: je 0x6a555a */ if (fZ) goto L_006a555a;
L_006a553d:; BB(0x006a553d);
    /* 006a553d: mov ecx, dword ptr [0xa9438c] */ r_ecx = R32((u32)(0xa9438cu));
    /* 006a5543: mov edx, dword ptr [eax + 0xd8] */ r_edx = R32((u32)(r_eax+0xd8u));
    /* 006a5549: add dword ptr [0xa9437c], 1 */ { u32 ad = (u32)(0xa9437cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006a5550: lea eax, [ecx + 4] */ r_eax = (u32)(r_ecx+0x4u);
    /* 006a5553: mov dword ptr [0xa9438c], eax */ W32((u32)(0xa9438cu), r_eax);
    /* 006a5558: mov dword ptr [ecx], edx */ W32((u32)(r_ecx), r_edx);
L_006a555a:; BB(0x006a555a);
    /* 006a555a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a555c: call 0x6a5574 */ r_esp -= 4; W32(r_esp, 0x6a5561u); f_006a5574();
    /* 006a5561: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006a5564: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a5566: jne 0x6a54ff */ if (!fZ) goto L_006a54ff;
L_006a5568:; BB(0x006a5568);
    /* 006a5568: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 006a556b: mov eax, dword ptr [0xa9437c] */ r_eax = R32((u32)(0xa9437cu));
L_006a5570:; BB(0x006a5570);
    /* 006a5570: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a5571: ret 4 */ FN_RET(0x006a54d4); r_esp += 8; return;
}

void f_006a5574(void) /* sub_6A5574 */
{
    FN_ENTER(0x006a5574);
    /* 006a5574: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006a5575: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 006a5578: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a557a: je 0x6a55ee */ if (fZ) goto L_006a55ee;
L_006a557c:; BB(0x006a557c);
    /* 006a557c: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 006a557f: mov ebx, eax */ r_ebx = r_eax;
L_006a5581:; BB(0x006a5581);
    /* 006a5581: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 006a5584: cmp edx, dword ptr [0x9cba2c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a558a: jne 0x6a55a2 */ if (!fZ) goto L_006a55a2;
L_006a558c:; BB(0x006a558c);
    /* 006a558c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a558e: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a5593u); f_008173b4();
    /* 006a5593: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5595: je 0x6a559e */ if (fZ) goto L_006a559e;
L_006a5597:; BB(0x006a5597);
    /* 006a5597: mov edx, 1 */ r_edx = 0x1u;
    /* 006a559c: jmp 0x6a55a4 */ goto L_006a55a4;
L_006a559e:; BB(0x006a559e);
    /* 006a559e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a55a0: jmp 0x6a55a4 */ goto L_006a55a4;
L_006a55a2:; BB(0x006a55a2);
    /* 006a55a2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a55a4:; BB(0x006a55a4);
    /* 006a55a4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a55a6: je 0x6a55dd */ if (fZ) goto L_006a55dd;
L_006a55a8:; BB(0x006a55a8);
    /* 006a55a8: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006a55ab: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a55b0u); f_008173b4();
    /* 006a55b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a55b2: jne 0x6a55b8 */ if (!fZ) goto L_006a55b8;
L_006a55b4:; BB(0x006a55b4);
    /* 006a55b4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a55b6: jmp 0x6a55bb */ goto L_006a55bb;
L_006a55b8:; BB(0x006a55b8);
    /* 006a55b8: mov edx, dword ptr [ebx + 0x1c] */ r_edx = R32((u32)(r_ebx+0x1cu));
L_006a55bb:; BB(0x006a55bb);
    /* 006a55bb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a55bd: je 0x6a55dd */ if (fZ) goto L_006a55dd;
L_006a55bf:; BB(0x006a55bf);
    /* 006a55bf: mov ecx, dword ptr [0xa9438c] */ r_ecx = R32((u32)(0xa9438cu));
    /* 006a55c5: mov eax, dword ptr [edx + 0xd8] */ r_eax = R32((u32)(r_edx+0xd8u));
    /* 006a55cb: add dword ptr [0xa9437c], 1 */ { u32 ad = (u32)(0xa9437cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006a55d2: lea edx, [ecx + 4] */ r_edx = (u32)(r_ecx+0x4u);
    /* 006a55d5: mov dword ptr [0xa9438c], edx */ W32((u32)(0xa9438cu), r_edx);
    /* 006a55db: mov dword ptr [ecx], eax */ W32((u32)(r_ecx), r_eax);
L_006a55dd:; BB(0x006a55dd);
    /* 006a55dd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a55df: call 0x6a5574 */ r_esp -= 4; W32(r_esp, 0x6a55e4u); f_006a5574();
    /* 006a55e4: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006a55e7: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a55e9: jne 0x6a5581 */ if (!fZ) goto L_006a5581;
L_006a55eb:; BB(0x006a55eb);
    /* 006a55eb: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
L_006a55ee:; BB(0x006a55ee);
    /* 006a55ee: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006a55ef: ret  */ FN_RET(0x006a5574); r_esp += 4; return;
}

void f_006a55f0(void) /* sub_6A55F0 */
{
    FN_ENTER(0x006a55f0);
    /* 006a55f0: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a55f3: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 006a55f7: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 006a55fd: mov dword ptr [0xa94380], eax */ W32((u32)(0xa94380u), r_eax);
    /* 006a5602: mov eax, dword ptr [edx + 0x18] */ r_eax = R32((u32)(r_edx+0x18u));
    /* 006a5605: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5607: je 0x6a56d3 */ if (fZ) goto L_006a56d3;
L_006a560d:; BB(0x006a560d);
    /* 006a560d: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006a5611: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006a5614: mov esi, eax */ r_esi = r_eax;
L_006a5616:; BB(0x006a5616);
    /* 006a5616: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 006a5619: cmp edx, dword ptr [0x9cba2c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a561f: jne 0x6a5637 */ if (!fZ) goto L_006a5637;
L_006a5621:; BB(0x006a5621);
    /* 006a5621: mov ecx, esi */ r_ecx = r_esi;
    /* 006a5623: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a5628u); f_008173b4();
    /* 006a5628: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a562a: je 0x6a5633 */ if (fZ) goto L_006a5633;
L_006a562c:; BB(0x006a562c);
    /* 006a562c: mov edx, 1 */ r_edx = 0x1u;
    /* 006a5631: jmp 0x6a5639 */ goto L_006a5639;
L_006a5633:; BB(0x006a5633);
    /* 006a5633: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a5635: jmp 0x6a5639 */ goto L_006a5639;
L_006a5637:; BB(0x006a5637);
    /* 006a5637: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a5639:; BB(0x006a5639);
    /* 006a5639: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a563b: je 0x6a56ba */ if (fZ) goto L_006a56ba;
L_006a5641:; BB(0x006a5641);
    /* 006a5641: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 006a5644: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a5649u); f_008173b4();
    /* 006a5649: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a564b: jne 0x6a5651 */ if (!fZ) goto L_006a5651;
L_006a564d:; BB(0x006a564d);
    /* 006a564d: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006a564f: jmp 0x6a5654 */ goto L_006a5654;
L_006a5651:; BB(0x006a5651);
    /* 006a5651: mov ebx, dword ptr [esi + 0x1c] */ r_ebx = R32((u32)(r_esi+0x1cu));
L_006a5654:; BB(0x006a5654);
    /* 006a5654: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5656: je 0x6a56ba */ if (fZ) goto L_006a56ba;
L_006a5658:; BB(0x006a5658);
    /* 006a5658: mov edx, dword ptr [ebx + 0xdc] */ r_edx = R32((u32)(r_ebx+0xdcu));
    /* 006a565e: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a5661: jne 0x6a5667 */ if (!fZ) goto L_006a5667;
L_006a5663:; BB(0x006a5663);
    /* 006a5663: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a5665: jmp 0x6a5675 */ goto L_006a5675;
L_006a5667:; BB(0x006a5667);
    /* 006a5667: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a566a: je 0x6a5673 */ if (fZ) goto L_006a5673;
L_006a566c:; BB(0x006a566c);
    /* 006a566c: mov edx, 1 */ r_edx = 0x1u;
    /* 006a5671: jmp 0x6a5675 */ goto L_006a5675;
L_006a5673:; BB(0x006a5673);
    /* 006a5673: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a5675:; BB(0x006a5675);
    /* 006a5675: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5677: je 0x6a56ba */ if (fZ) goto L_006a56ba;
L_006a5679:; BB(0x006a5679);
    /* 006a5679: movzx edx, byte ptr [ebx + 0xf2] */ r_edx = (u32)R8((u32)(r_ebx+0xf2u));
    /* 006a5680: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5683: je 0x6a56d9 */ if (fZ) goto L_006a56d9;
L_006a5685:; BB(0x006a5685);
    /* 006a5685: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a5687:; BB(0x006a5687);
    /* 006a5687: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5689: jne 0x6a56ba */ if (!fZ) goto L_006a56ba;
L_006a568b:; BB(0x006a568b);
    /* 006a568b: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006a568d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a568f: call dword ptr [edx + 0x7c] */ { u32 t = R32((u32)(r_edx+0x7cu)); r_esp -= 4; W32(r_esp, 0x6a5692u); call_ind(t); }
    /* 006a5692: mov ecx, dword ptr [0xa94380] */ r_ecx = R32((u32)(0xa94380u));
    /* 006a5698: add ecx, 0xdf8 */ {  u32 a = r_ecx; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006a569e: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 006a56a1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a56a2: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x6a56a7u); f_0069792c();
    /* 006a56a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a56a9: je 0x6a56ba */ if (fZ) goto L_006a56ba;
L_006a56ab:; BB(0x006a56ab);
    /* 006a56ab: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a56ac: push dword ptr [0xa94380] */ { u32 v = R32((u32)(0xa94380u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a56b2: call 0x68e8a8 */ r_esp -= 4; W32(r_esp, 0x6a56b7u); f_0068e8a8();
    /* 006a56b7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006a56ba:; BB(0x006a56ba);
    /* 006a56ba: mov ecx, esi */ r_ecx = r_esi;
    /* 006a56bc: call 0x6a56ec */ r_esp -= 4; W32(r_esp, 0x6a56c1u); f_006a56ec();
    /* 006a56c1: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 006a56c4: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a56c6: jne 0x6a5616 */ if (!fZ) goto L_006a5616;
L_006a56cc:; BB(0x006a56cc);
    /* 006a56cc: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006a56d0: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_006a56d3:; BB(0x006a56d3);
    /* 006a56d3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a56d6: ret 4 */ FN_RET(0x006a55f0); r_esp += 8; return;
L_006a56d9:; BB(0x006a56d9);
    /* 006a56d9: movzx edx, byte ptr [ebx + 0xf3] */ r_edx = (u32)R8((u32)(r_ebx+0xf3u));
    /* 006a56e0: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a56e3: jne 0x6a5685 */ if (!fZ) goto L_006a5685;
L_006a56e5:; BB(0x006a56e5);
    /* 006a56e5: mov edx, 1 */ r_edx = 0x1u;
    /* 006a56ea: jmp 0x6a5687 */ goto L_006a5687;
}

void f_006a56d2(void)
{
    FN_ENTER(0x006a56d2);
    /* 006a56d2: and al, 0x83 */ {  u32 a = (u8)r_eax; u32 b = 0x83u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006a56d4: les ecx, ptr [eax] */ UNSUP(0x006a56d4, "les ecx, ptr [eax]");
    /* 006a56d6: ret 4 */ FN_RET(0x006a56d2); r_esp += 8; return;
}

void f_006a56ec(void) /* sub_6A56EC */
{
    FN_ENTER(0x006a56ec);
    /* 006a56ec: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a56ef: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 006a56f2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a56f4: je 0x6a57c0 */ if (fZ) goto L_006a57c0;
L_006a56fa:; BB(0x006a56fa);
    /* 006a56fa: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006a56fe: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006a5701: mov esi, eax */ r_esi = r_eax;
L_006a5703:; BB(0x006a5703);
    /* 006a5703: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 006a5706: cmp edx, dword ptr [0x9cba2c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a570c: jne 0x6a5724 */ if (!fZ) goto L_006a5724;
L_006a570e:; BB(0x006a570e);
    /* 006a570e: mov ecx, esi */ r_ecx = r_esi;
    /* 006a5710: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a5715u); f_008173b4();
    /* 006a5715: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5717: je 0x6a5720 */ if (fZ) goto L_006a5720;
L_006a5719:; BB(0x006a5719);
    /* 006a5719: mov edx, 1 */ r_edx = 0x1u;
    /* 006a571e: jmp 0x6a5726 */ goto L_006a5726;
L_006a5720:; BB(0x006a5720);
    /* 006a5720: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a5722: jmp 0x6a5726 */ goto L_006a5726;
L_006a5724:; BB(0x006a5724);
    /* 006a5724: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a5726:; BB(0x006a5726);
    /* 006a5726: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5728: je 0x6a57a7 */ if (fZ) goto L_006a57a7;
L_006a572e:; BB(0x006a572e);
    /* 006a572e: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 006a5731: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a5736u); f_008173b4();
    /* 006a5736: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5738: jne 0x6a573e */ if (!fZ) goto L_006a573e;
L_006a573a:; BB(0x006a573a);
    /* 006a573a: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006a573c: jmp 0x6a5741 */ goto L_006a5741;
L_006a573e:; BB(0x006a573e);
    /* 006a573e: mov ebx, dword ptr [esi + 0x1c] */ r_ebx = R32((u32)(r_esi+0x1cu));
L_006a5741:; BB(0x006a5741);
    /* 006a5741: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5743: je 0x6a57a7 */ if (fZ) goto L_006a57a7;
L_006a5745:; BB(0x006a5745);
    /* 006a5745: mov edx, dword ptr [ebx + 0xdc] */ r_edx = R32((u32)(r_ebx+0xdcu));
    /* 006a574b: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a574e: jne 0x6a5754 */ if (!fZ) goto L_006a5754;
L_006a5750:; BB(0x006a5750);
    /* 006a5750: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a5752: jmp 0x6a5762 */ goto L_006a5762;
L_006a5754:; BB(0x006a5754);
    /* 006a5754: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a5757: je 0x6a5760 */ if (fZ) goto L_006a5760;
L_006a5759:; BB(0x006a5759);
    /* 006a5759: mov edx, 1 */ r_edx = 0x1u;
    /* 006a575e: jmp 0x6a5762 */ goto L_006a5762;
L_006a5760:; BB(0x006a5760);
    /* 006a5760: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a5762:; BB(0x006a5762);
    /* 006a5762: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5764: je 0x6a57a7 */ if (fZ) goto L_006a57a7;
L_006a5766:; BB(0x006a5766);
    /* 006a5766: movzx edx, byte ptr [ebx + 0xf2] */ r_edx = (u32)R8((u32)(r_ebx+0xf2u));
    /* 006a576d: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5770: je 0x6a57c4 */ if (fZ) goto L_006a57c4;
L_006a5772:; BB(0x006a5772);
    /* 006a5772: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a5774:; BB(0x006a5774);
    /* 006a5774: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5776: jne 0x6a57a7 */ if (!fZ) goto L_006a57a7;
L_006a5778:; BB(0x006a5778);
    /* 006a5778: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006a577a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a577c: call dword ptr [edx + 0x7c] */ { u32 t = R32((u32)(r_edx+0x7cu)); r_esp -= 4; W32(r_esp, 0x6a577fu); call_ind(t); }
    /* 006a577f: mov ecx, dword ptr [0xa94380] */ r_ecx = R32((u32)(0xa94380u));
    /* 006a5785: add ecx, 0xdf8 */ {  u32 a = r_ecx; u32 b = 0xdf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006a578b: movsx edx, al */ r_edx = (u32)(i32)(i8)(u8)r_eax;
    /* 006a578e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a578f: call 0x69792c */ r_esp -= 4; W32(r_esp, 0x6a5794u); f_0069792c();
    /* 006a5794: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5796: je 0x6a57a7 */ if (fZ) goto L_006a57a7;
L_006a5798:; BB(0x006a5798);
    /* 006a5798: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a5799: push dword ptr [0xa94380] */ { u32 v = R32((u32)(0xa94380u)); r_esp -= 4; W32(r_esp, v); }
    /* 006a579f: call 0x68e8a8 */ r_esp -= 4; W32(r_esp, 0x6a57a4u); f_0068e8a8();
    /* 006a57a4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006a57a7:; BB(0x006a57a7);
    /* 006a57a7: mov ecx, esi */ r_ecx = r_esi;
    /* 006a57a9: call 0x6a56ec */ r_esp -= 4; W32(r_esp, 0x6a57aeu); f_006a56ec();
    /* 006a57ae: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 006a57b1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a57b3: jne 0x6a5703 */ if (!fZ) goto L_006a5703;
L_006a57b9:; BB(0x006a57b9);
    /* 006a57b9: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006a57bd: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_006a57c0:; BB(0x006a57c0);
    /* 006a57c0: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a57c3: ret  */ FN_RET(0x006a56ec); r_esp += 4; return;
L_006a57c4:; BB(0x006a57c4);
    /* 006a57c4: movzx edx, byte ptr [ebx + 0xf3] */ r_edx = (u32)R8((u32)(r_ebx+0xf3u));
    /* 006a57cb: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a57ce: jne 0x6a5772 */ if (!fZ) goto L_006a5772;
L_006a57d0:; BB(0x006a57d0);
    /* 006a57d0: mov edx, 1 */ r_edx = 0x1u;
    /* 006a57d5: jmp 0x6a5774 */ goto L_006a5774;
}

void f_006a57d8(void) /* sub_6A57D8 */
{
    FN_ENTER(0x006a57d8);
    /* 006a57d8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a57db: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 006a57df: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 006a57e5: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 006a57e8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a57ea: mov dword ptr [0xa9437c], 0 */ W32((u32)(0xa9437cu), 0x0u);
    /* 006a57f4: mov dword ptr [0xa9439c], eax */ W32((u32)(0xa9439cu), r_eax);
    /* 006a57f9: mov eax, 0 */ r_eax = 0x0u;
    /* 006a57fe: je 0x6a58c2 */ if (fZ) goto L_006a58c2;
L_006a5804:; BB(0x006a5804);
    /* 006a5804: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006a5808: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006a580b: mov esi, edx */ r_esi = r_edx;
L_006a580d:; BB(0x006a580d);
    /* 006a580d: mov eax, dword ptr [esi + 4] */ r_eax = R32((u32)(r_esi+0x4u));
    /* 006a5810: cmp eax, dword ptr [0x9cba2c] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5816: jne 0x6a582e */ if (!fZ) goto L_006a582e;
L_006a5818:; BB(0x006a5818);
    /* 006a5818: mov ecx, esi */ r_ecx = r_esi;
    /* 006a581a: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a581fu); f_008173b4();
    /* 006a581f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5821: je 0x6a582a */ if (fZ) goto L_006a582a;
L_006a5823:; BB(0x006a5823);
    /* 006a5823: mov eax, 1 */ r_eax = 0x1u;
    /* 006a5828: jmp 0x6a5830 */ goto L_006a5830;
L_006a582a:; BB(0x006a582a);
    /* 006a582a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a582c: jmp 0x6a5830 */ goto L_006a5830;
L_006a582e:; BB(0x006a582e);
    /* 006a582e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a5830:; BB(0x006a5830);
    /* 006a5830: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5832: je 0x6a58a4 */ if (fZ) goto L_006a58a4;
L_006a5834:; BB(0x006a5834);
    /* 006a5834: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 006a5837: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a583cu); f_008173b4();
    /* 006a583c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a583e: jne 0x6a5844 */ if (!fZ) goto L_006a5844;
L_006a5840:; BB(0x006a5840);
    /* 006a5840: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006a5842: jmp 0x6a5847 */ goto L_006a5847;
L_006a5844:; BB(0x006a5844);
    /* 006a5844: mov ebx, dword ptr [esi + 0x1c] */ r_ebx = R32((u32)(r_esi+0x1cu));
L_006a5847:; BB(0x006a5847);
    /* 006a5847: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5849: je 0x6a58a4 */ if (fZ) goto L_006a58a4;
L_006a584b:; BB(0x006a584b);
    /* 006a584b: mov eax, dword ptr [ebx + 0xdc] */ r_eax = R32((u32)(r_ebx+0xdcu));
    /* 006a5851: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a5853: jne 0x6a5859 */ if (!fZ) goto L_006a5859;
L_006a5855:; BB(0x006a5855);
    /* 006a5855: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a5857: jmp 0x6a5866 */ goto L_006a5866;
L_006a5859:; BB(0x006a5859);
    /* 006a5859: test al, 8 */ {  u32 a = (u8)r_eax; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a585b: je 0x6a5864 */ if (fZ) goto L_006a5864;
L_006a585d:; BB(0x006a585d);
    /* 006a585d: mov eax, 1 */ r_eax = 0x1u;
    /* 006a5862: jmp 0x6a5866 */ goto L_006a5866;
L_006a5864:; BB(0x006a5864);
    /* 006a5864: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a5866:; BB(0x006a5866);
    /* 006a5866: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5868: je 0x6a58a4 */ if (fZ) goto L_006a58a4;
L_006a586a:; BB(0x006a586a);
    /* 006a586a: movzx eax, byte ptr [ebx + 0xf2] */ r_eax = (u32)R8((u32)(r_ebx+0xf2u));
    /* 006a5871: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5873: jne 0x6a58a4 */ if (!fZ) goto L_006a58a4;
L_006a5875:; BB(0x006a5875);
    /* 006a5875: mov eax, dword ptr [0xa9439c] */ r_eax = R32((u32)(0xa9439cu));
    /* 006a587a: add eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a587d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006a587e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a5880: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x6a5885u); f_005c425c();
    /* 006a5885: mov eax, dword ptr [ebx + 0xd8] */ r_eax = R32((u32)(r_ebx+0xd8u));
    /* 006a588b: mov ebx, dword ptr [0xa9439c] */ r_ebx = R32((u32)(0xa9439cu));
    /* 006a5891: add dword ptr [0xa9437c], 1 */ { u32 ad = (u32)(0xa9437cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006a5898: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 006a589b: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a589e: mov dword ptr [0xa9439c], ebx */ W32((u32)(0xa9439cu), r_ebx);
L_006a58a4:; BB(0x006a58a4);
    /* 006a58a4: mov ecx, esi */ r_ecx = r_esi;
    /* 006a58a6: call 0x6a58c8 */ r_esp -= 4; W32(r_esp, 0x6a58abu); f_006a58c8();
    /* 006a58ab: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 006a58ae: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a58b0: jne 0x6a580d */ if (!fZ) goto L_006a580d;
L_006a58b6:; BB(0x006a58b6);
    /* 006a58b6: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006a58ba: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006a58bd: mov eax, dword ptr [0xa9437c] */ r_eax = R32((u32)(0xa9437cu));
L_006a58c2:; BB(0x006a58c2);
    /* 006a58c2: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a58c5: ret 8 */ FN_RET(0x006a57d8); r_esp += 12; return;
}

void f_006a58c8(void) /* sub_6A58C8 */
{
    FN_ENTER(0x006a58c8);
    /* 006a58c8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a58cb: mov eax, dword ptr [ecx + 0x18] */ r_eax = R32((u32)(r_ecx+0x18u));
    /* 006a58ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a58d0: je 0x6a5992 */ if (fZ) goto L_006a5992;
L_006a58d6:; BB(0x006a58d6);
    /* 006a58d6: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006a58da: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 006a58dd: mov esi, eax */ r_esi = r_eax;
L_006a58df:; BB(0x006a58df);
    /* 006a58df: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 006a58e2: cmp edx, dword ptr [0x9cba2c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a58e8: jne 0x6a5900 */ if (!fZ) goto L_006a5900;
L_006a58ea:; BB(0x006a58ea);
    /* 006a58ea: mov ecx, esi */ r_ecx = r_esi;
    /* 006a58ec: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a58f1u); f_008173b4();
    /* 006a58f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a58f3: je 0x6a58fc */ if (fZ) goto L_006a58fc;
L_006a58f5:; BB(0x006a58f5);
    /* 006a58f5: mov edx, 1 */ r_edx = 0x1u;
    /* 006a58fa: jmp 0x6a5902 */ goto L_006a5902;
L_006a58fc:; BB(0x006a58fc);
    /* 006a58fc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a58fe: jmp 0x6a5902 */ goto L_006a5902;
L_006a5900:; BB(0x006a5900);
    /* 006a5900: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a5902:; BB(0x006a5902);
    /* 006a5902: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5904: je 0x6a5979 */ if (fZ) goto L_006a5979;
L_006a5906:; BB(0x006a5906);
    /* 006a5906: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 006a5909: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a590eu); f_008173b4();
    /* 006a590e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5910: jne 0x6a5916 */ if (!fZ) goto L_006a5916;
L_006a5912:; BB(0x006a5912);
    /* 006a5912: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006a5914: jmp 0x6a5919 */ goto L_006a5919;
L_006a5916:; BB(0x006a5916);
    /* 006a5916: mov ebx, dword ptr [esi + 0x1c] */ r_ebx = R32((u32)(r_esi+0x1cu));
L_006a5919:; BB(0x006a5919);
    /* 006a5919: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a591b: je 0x6a5979 */ if (fZ) goto L_006a5979;
L_006a591d:; BB(0x006a591d);
    /* 006a591d: mov edx, dword ptr [ebx + 0xdc] */ r_edx = R32((u32)(r_ebx+0xdcu));
    /* 006a5923: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a5926: jne 0x6a592c */ if (!fZ) goto L_006a592c;
L_006a5928:; BB(0x006a5928);
    /* 006a5928: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a592a: jmp 0x6a593a */ goto L_006a593a;
L_006a592c:; BB(0x006a592c);
    /* 006a592c: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a592f: je 0x6a5938 */ if (fZ) goto L_006a5938;
L_006a5931:; BB(0x006a5931);
    /* 006a5931: mov edx, 1 */ r_edx = 0x1u;
    /* 006a5936: jmp 0x6a593a */ goto L_006a593a;
L_006a5938:; BB(0x006a5938);
    /* 006a5938: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a593a:; BB(0x006a593a);
    /* 006a593a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a593c: je 0x6a5979 */ if (fZ) goto L_006a5979;
L_006a593e:; BB(0x006a593e);
    /* 006a593e: movzx edx, byte ptr [ebx + 0xf2] */ r_edx = (u32)R8((u32)(r_ebx+0xf2u));
    /* 006a5945: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5947: jne 0x6a5979 */ if (!fZ) goto L_006a5979;
L_006a5949:; BB(0x006a5949);
    /* 006a5949: mov edx, dword ptr [0xa9439c] */ r_edx = R32((u32)(0xa9439cu));
    /* 006a594f: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a5952: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a5953: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a5955: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x6a595au); f_005c425c();
    /* 006a595a: mov edx, dword ptr [ebx + 0xd8] */ r_edx = R32((u32)(r_ebx+0xd8u));
    /* 006a5960: mov ebx, dword ptr [0xa9439c] */ r_ebx = R32((u32)(0xa9439cu));
    /* 006a5966: add dword ptr [0xa9437c], 1 */ { u32 ad = (u32)(0xa9437cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006a596d: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 006a5970: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a5973: mov dword ptr [0xa9439c], ebx */ W32((u32)(0xa9439cu), r_ebx);
L_006a5979:; BB(0x006a5979);
    /* 006a5979: mov ecx, esi */ r_ecx = r_esi;
    /* 006a597b: call 0x6a58c8 */ r_esp -= 4; W32(r_esp, 0x6a5980u); f_006a58c8();
    /* 006a5980: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 006a5983: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5985: jne 0x6a58df */ if (!fZ) goto L_006a58df;
L_006a598b:; BB(0x006a598b);
    /* 006a598b: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006a598f: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_006a5992:; BB(0x006a5992);
    /* 006a5992: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a5995: ret  */ FN_RET(0x006a58c8); r_esp += 4; return;
}

void f_006a5900(void)
{
    FN_ENTER(0x006a5900);
    goto L_006a5900;
L_006a58df:; BB(0x006a58df);
    /* 006a58df: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 006a58e2: cmp edx, dword ptr [0x9cba2c] */ {  u32 a = r_edx; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a58e8: jne 0x6a5900 */ if (!fZ) goto L_006a5900;
L_006a58ea:; BB(0x006a58ea);
    /* 006a58ea: mov ecx, esi */ r_ecx = r_esi;
    /* 006a58ec: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a58f1u); f_008173b4();
    /* 006a58f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a58f3: je 0x6a58fc */ if (fZ) goto L_006a58fc;
L_006a58f5:; BB(0x006a58f5);
    /* 006a58f5: mov edx, 1 */ r_edx = 0x1u;
    /* 006a58fa: jmp 0x6a5902 */ goto L_006a5902;
L_006a58fc:; BB(0x006a58fc);
    /* 006a58fc: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a58fe: jmp 0x6a5902 */ goto L_006a5902;
L_006a5900:; BB(0x006a5900);
    /* 006a5900: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a5902:; BB(0x006a5902);
    /* 006a5902: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5904: je 0x6a5979 */ if (fZ) goto L_006a5979;
L_006a5906:; BB(0x006a5906);
    /* 006a5906: mov ecx, dword ptr [esi + 0x1c] */ r_ecx = R32((u32)(r_esi+0x1cu));
    /* 006a5909: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a590eu); f_008173b4();
    /* 006a590e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5910: jne 0x6a5916 */ if (!fZ) goto L_006a5916;
L_006a5912:; BB(0x006a5912);
    /* 006a5912: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 006a5914: jmp 0x6a5919 */ goto L_006a5919;
L_006a5916:; BB(0x006a5916);
    /* 006a5916: mov ebx, dword ptr [esi + 0x1c] */ r_ebx = R32((u32)(r_esi+0x1cu));
L_006a5919:; BB(0x006a5919);
    /* 006a5919: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a591b: je 0x6a5979 */ if (fZ) goto L_006a5979;
L_006a591d:; BB(0x006a591d);
    /* 006a591d: mov edx, dword ptr [ebx + 0xdc] */ r_edx = R32((u32)(r_ebx+0xdcu));
    /* 006a5923: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a5926: jne 0x6a592c */ if (!fZ) goto L_006a592c;
L_006a5928:; BB(0x006a5928);
    /* 006a5928: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a592a: jmp 0x6a593a */ goto L_006a593a;
L_006a592c:; BB(0x006a592c);
    /* 006a592c: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a592f: je 0x6a5938 */ if (fZ) goto L_006a5938;
L_006a5931:; BB(0x006a5931);
    /* 006a5931: mov edx, 1 */ r_edx = 0x1u;
    /* 006a5936: jmp 0x6a593a */ goto L_006a593a;
L_006a5938:; BB(0x006a5938);
    /* 006a5938: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a593a:; BB(0x006a593a);
    /* 006a593a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a593c: je 0x6a5979 */ if (fZ) goto L_006a5979;
L_006a593e:; BB(0x006a593e);
    /* 006a593e: movzx edx, byte ptr [ebx + 0xf2] */ r_edx = (u32)R8((u32)(r_ebx+0xf2u));
    /* 006a5945: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5947: jne 0x6a5979 */ if (!fZ) goto L_006a5979;
L_006a5949:; BB(0x006a5949);
    /* 006a5949: mov edx, dword ptr [0xa9439c] */ r_edx = R32((u32)(0xa9439cu));
    /* 006a594f: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006a5952: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a5953: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a5955: call 0x5c425c */ r_esp -= 4; W32(r_esp, 0x6a595au); f_005c425c();
    /* 006a595a: mov edx, dword ptr [ebx + 0xd8] */ r_edx = R32((u32)(r_ebx+0xd8u));
    /* 006a5960: mov ebx, dword ptr [0xa9439c] */ r_ebx = R32((u32)(0xa9439cu));
    /* 006a5966: add dword ptr [0xa9437c], 1 */ { u32 ad = (u32)(0xa9437cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 006a596d: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 006a5970: add ebx, 0x1c */ {  u32 a = r_ebx; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 006a5973: mov dword ptr [0xa9439c], ebx */ W32((u32)(0xa9439cu), r_ebx);
L_006a5979:; BB(0x006a5979);
    /* 006a5979: mov ecx, esi */ r_ecx = r_esi;
    /* 006a597b: call 0x6a58c8 */ r_esp -= 4; W32(r_esp, 0x6a5980u); f_006a58c8();
    /* 006a5980: mov esi, dword ptr [esi + 0x10] */ r_esi = R32((u32)(r_esi+0x10u));
    /* 006a5983: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5985: jne 0x6a58df */ if (!fZ) goto L_006a58df;
L_006a598b:; BB(0x006a598b);
    /* 006a598b: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006a598f: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 006a5992: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a5995: ret  */ FN_RET(0x006a5900); r_esp += 4; return;
}

void f_006a5998(void) /* sub_6A5998 */
{
    FN_ENTER(0x006a5998);
    /* 006a5998: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a599b: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 006a599f: movzx edx, byte ptr [esp + 0x1c] */ r_edx = (u32)R8((u32)(r_esp+0x1cu));
    /* 006a59a4: mov dword ptr [0xa94380], eax */ W32((u32)(0xa94380u), r_eax);
    /* 006a59a9: mov eax, dword ptr [ecx + 0x1c4] */ r_eax = R32((u32)(r_ecx+0x1c4u));
    /* 006a59af: mov ecx, dword ptr [eax + 0x18] */ r_ecx = R32((u32)(r_eax+0x18u));
    /* 006a59b2: mov byte ptr [0xa943a0], dl */ W8((u32)(0xa943a0u), (u8)r_edx);
    /* 006a59b8: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a59ba: je 0x6a5a83 */ if (fZ) goto L_006a5a83;
L_006a59c0:; BB(0x006a59c0);
    /* 006a59c0: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 006a59c4: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a59c6: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 006a59ca: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006a59ce: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
L_006a59d1:; BB(0x006a59d1);
    /* 006a59d1: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 006a59d4: cmp eax, dword ptr [0x9cba2c] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a59da: jne 0x6a59f2 */ if (!fZ) goto L_006a59f2;
L_006a59dc:; BB(0x006a59dc);
    /* 006a59dc: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a59de: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a59e3u); f_008173b4();
    /* 006a59e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a59e5: je 0x6a59ee */ if (fZ) goto L_006a59ee;
L_006a59e7:; BB(0x006a59e7);
    /* 006a59e7: mov eax, 1 */ r_eax = 0x1u;
    /* 006a59ec: jmp 0x6a59f4 */ goto L_006a59f4;
L_006a59ee:; BB(0x006a59ee);
    /* 006a59ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a59f0: jmp 0x6a59f4 */ goto L_006a59f4;
L_006a59f2:; BB(0x006a59f2);
    /* 006a59f2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a59f4:; BB(0x006a59f4);
    /* 006a59f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a59f6: je 0x6a5a62 */ if (fZ) goto L_006a5a62;
L_006a59f8:; BB(0x006a59f8);
    /* 006a59f8: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006a59fb: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a5a00u); f_008173b4();
    /* 006a5a00: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5a02: jne 0x6a5a08 */ if (!fZ) goto L_006a5a08;
L_006a5a04:; BB(0x006a5a04);
    /* 006a5a04: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006a5a06: jmp 0x6a5a0b */ goto L_006a5a0b;
L_006a5a08:; BB(0x006a5a08);
    /* 006a5a08: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
L_006a5a0b:; BB(0x006a5a0b);
    /* 006a5a0b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5a0d: je 0x6a5a62 */ if (fZ) goto L_006a5a62;
L_006a5a0f:; BB(0x006a5a0f);
    /* 006a5a0f: movzx edx, byte ptr [0xa943a0] */ r_edx = (u32)R8((u32)(0xa943a0u));
    /* 006a5a16: movzx eax, byte ptr [ecx + 0xf2] */ r_eax = (u32)R8((u32)(r_ecx+0xf2u));
    /* 006a5a1d: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5a1f: jne 0x6a5a62 */ if (!fZ) goto L_006a5a62;
L_006a5a21:; BB(0x006a5a21);
    /* 006a5a21: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5a24: je 0x6a5ad0 */ if (fZ) goto L_006a5ad0;
L_006a5a2a:; BB(0x006a5a2a);
    /* 006a5a2a: mov edi, dword ptr [0xa94380] */ r_edi = R32((u32)(0xa94380u));
    /* 006a5a30: mov esi, dword ptr [edi + 0xdf4] */ r_esi = R32((u32)(r_edi+0xdf4u));
    /* 006a5a36: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a5a38: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x6a5a3du); f_006a60dc();
    /* 006a5a3d: mov ebp, eax */ r_ebp = r_eax;
    /* 006a5a3f: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5a41: je 0x6a5a62 */ if (fZ) goto L_006a5a62;
L_006a5a43:; BB(0x006a5a43);
    /* 006a5a43: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006a5a46: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a5a48: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x6a5a4eu); call_ind(t); }
    /* 006a5a4e: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a5a51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a5a53: jle 0x6a5a89 */ if ((fZ||fS!=fO)) goto L_006a5a89;
L_006a5a55:; BB(0x006a5a55);
    /* 006a5a55: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a5a57: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006a5a5a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a5a5c: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6a5a62u); call_ind(t); }
L_006a5a62:; BB(0x006a5a62);
    /* 006a5a62: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a5a64: call 0x6a5b74 */ r_esp -= 4; W32(r_esp, 0x6a5a69u); f_006a5b74();
    /* 006a5a69: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006a5a6c: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5a6e: jne 0x6a59d1 */ if (!fZ) goto L_006a59d1;
L_006a5a74:; BB(0x006a5a74);
    /* 006a5a74: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 006a5a78: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 006a5a7c: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 006a5a80: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_006a5a83:; BB(0x006a5a83);
    /* 006a5a83: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a5a86: ret 8 */ FN_RET(0x006a5998); r_esp += 12; return;
L_006a5a89:; BB(0x006a5a89);
    /* 006a5a89: mov edx, dword ptr [ebp + 0xdc] */ r_edx = R32((u32)(r_ebp+0xdcu));
    /* 006a5a8f: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a5a92: jne 0x6a5a98 */ if (!fZ) goto L_006a5a98;
L_006a5a94:; BB(0x006a5a94);
    /* 006a5a94: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a5a96: jmp 0x6a5aa6 */ goto L_006a5aa6;
L_006a5a98:; BB(0x006a5a98);
    /* 006a5a98: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a5a9b: je 0x6a5aa4 */ if (fZ) goto L_006a5aa4;
L_006a5a9d:; BB(0x006a5a9d);
    /* 006a5a9d: mov edx, 1 */ r_edx = 0x1u;
    /* 006a5aa2: jmp 0x6a5aa6 */ goto L_006a5aa6;
L_006a5aa4:; BB(0x006a5aa4);
    /* 006a5aa4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a5aa6:; BB(0x006a5aa6);
    /* 006a5aa6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5aa8: je 0x6a5ab4 */ if (fZ) goto L_006a5ab4;
L_006a5aaa:; BB(0x006a5aaa);
    /* 006a5aaa: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a5aab: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a5aac: call 0x68e8a8 */ r_esp -= 4; W32(r_esp, 0x6a5ab1u); f_0068e8a8();
    /* 006a5ab1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006a5ab4:; BB(0x006a5ab4);
    /* 006a5ab4: add word ptr [esi + 0x1c], -1 */ { u32 ad = (u32)(r_esi+0x1cu);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006a5ab9: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006a5abc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a5abe: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x6a5ac1u); call_ind(t); }
    /* 006a5ac1: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006a5ac5: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a5aca: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006a5ace: jmp 0x6a5a62 */ goto L_006a5a62;
L_006a5ad0:; BB(0x006a5ad0);
    /* 006a5ad0: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a5ad2: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x6a5ad8u); call_ind(t); }
    /* 006a5ad8: mov edi, eax */ r_edi = r_eax;
    /* 006a5ada: mov edx, dword ptr [0xa94380] */ r_edx = R32((u32)(0xa94380u));
    /* 006a5ae0: mov esi, dword ptr [edx + 0xdf4] */ r_esi = R32((u32)(r_edx+0xdf4u));
    /* 006a5ae6: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006a5aea: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a5aec: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x6a5af1u); f_006a60dc();
    /* 006a5af1: mov ebp, eax */ r_ebp = r_eax;
    /* 006a5af3: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5af5: je 0x6a5a62 */ if (fZ) goto L_006a5a62;
L_006a5afb:; BB(0x006a5afb);
    /* 006a5afb: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a5afd: jl 0x6a5a62 */ if ((fS!=fO)) goto L_006a5a62;
L_006a5b03:; BB(0x006a5b03);
    /* 006a5b03: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006a5b06: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a5b08: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x6a5b0eu); call_ind(t); }
    /* 006a5b0e: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006a5b10: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a5b12: jle 0x6a5b25 */ if ((fZ||fS!=fO)) goto L_006a5b25;
L_006a5b14:; BB(0x006a5b14);
    /* 006a5b14: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a5b15: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006a5b18: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a5b1a: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6a5b20u); call_ind(t); }
    /* 006a5b20: jmp 0x6a5a62 */ goto L_006a5a62;
L_006a5b25:; BB(0x006a5b25);
    /* 006a5b25: mov edx, dword ptr [ebp + 0xdc] */ r_edx = R32((u32)(r_ebp+0xdcu));
    /* 006a5b2b: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a5b2e: jne 0x6a5b34 */ if (!fZ) goto L_006a5b34;
L_006a5b30:; BB(0x006a5b30);
    /* 006a5b30: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a5b32: jmp 0x6a5b42 */ goto L_006a5b42;
L_006a5b34:; BB(0x006a5b34);
    /* 006a5b34: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a5b37: je 0x6a5b40 */ if (fZ) goto L_006a5b40;
L_006a5b39:; BB(0x006a5b39);
    /* 006a5b39: mov edx, 1 */ r_edx = 0x1u;
    /* 006a5b3e: jmp 0x6a5b42 */ goto L_006a5b42;
L_006a5b40:; BB(0x006a5b40);
    /* 006a5b40: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a5b42:; BB(0x006a5b42);
    /* 006a5b42: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5b44: je 0x6a5b54 */ if (fZ) goto L_006a5b54;
L_006a5b46:; BB(0x006a5b46);
    /* 006a5b46: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a5b47: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 006a5b4b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a5b4c: call 0x68e8a8 */ r_esp -= 4; W32(r_esp, 0x6a5b51u); f_0068e8a8();
    /* 006a5b51: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006a5b54:; BB(0x006a5b54);
    /* 006a5b54: add word ptr [esi + 0x1c], -1 */ { u32 ad = (u32)(r_esi+0x1cu);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006a5b59: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006a5b5c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a5b5e: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x6a5b61u); call_ind(t); }
    /* 006a5b61: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006a5b65: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a5b6a: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006a5b6e: jmp 0x6a5a62 */ goto L_006a5a62;
}

void f_006a5b74(void) /* sub_6A5B74 */
{
    FN_ENTER(0x006a5b74);
    /* 006a5b74: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a5b77: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 006a5b7a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5b7c: je 0x6a5c45 */ if (fZ) goto L_006a5c45;
L_006a5b82:; BB(0x006a5b82);
    /* 006a5b82: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 006a5b86: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006a5b88: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 006a5b8c: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 006a5b90: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
L_006a5b93:; BB(0x006a5b93);
    /* 006a5b93: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 006a5b96: cmp eax, dword ptr [0x9cba2c] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5b9c: jne 0x6a5bb4 */ if (!fZ) goto L_006a5bb4;
L_006a5b9e:; BB(0x006a5b9e);
    /* 006a5b9e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a5ba0: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a5ba5u); f_008173b4();
    /* 006a5ba5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5ba7: je 0x6a5bb0 */ if (fZ) goto L_006a5bb0;
L_006a5ba9:; BB(0x006a5ba9);
    /* 006a5ba9: mov eax, 1 */ r_eax = 0x1u;
    /* 006a5bae: jmp 0x6a5bb6 */ goto L_006a5bb6;
L_006a5bb0:; BB(0x006a5bb0);
    /* 006a5bb0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a5bb2: jmp 0x6a5bb6 */ goto L_006a5bb6;
L_006a5bb4:; BB(0x006a5bb4);
    /* 006a5bb4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a5bb6:; BB(0x006a5bb6);
    /* 006a5bb6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5bb8: je 0x6a5c24 */ if (fZ) goto L_006a5c24;
L_006a5bba:; BB(0x006a5bba);
    /* 006a5bba: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006a5bbd: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a5bc2u); f_008173b4();
    /* 006a5bc2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5bc4: jne 0x6a5bca */ if (!fZ) goto L_006a5bca;
L_006a5bc6:; BB(0x006a5bc6);
    /* 006a5bc6: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006a5bc8: jmp 0x6a5bcd */ goto L_006a5bcd;
L_006a5bca:; BB(0x006a5bca);
    /* 006a5bca: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
L_006a5bcd:; BB(0x006a5bcd);
    /* 006a5bcd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5bcf: je 0x6a5c24 */ if (fZ) goto L_006a5c24;
L_006a5bd1:; BB(0x006a5bd1);
    /* 006a5bd1: movzx edx, byte ptr [0xa943a0] */ r_edx = (u32)R8((u32)(0xa943a0u));
    /* 006a5bd8: movzx eax, byte ptr [ecx + 0xf2] */ r_eax = (u32)R8((u32)(r_ecx+0xf2u));
    /* 006a5bdf: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5be1: jne 0x6a5c24 */ if (!fZ) goto L_006a5c24;
L_006a5be3:; BB(0x006a5be3);
    /* 006a5be3: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5be6: je 0x6a5c90 */ if (fZ) goto L_006a5c90;
L_006a5bec:; BB(0x006a5bec);
    /* 006a5bec: mov edi, dword ptr [0xa94380] */ r_edi = R32((u32)(0xa94380u));
    /* 006a5bf2: mov esi, dword ptr [edi + 0xdf4] */ r_esi = R32((u32)(r_edi+0xdf4u));
    /* 006a5bf8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a5bfa: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x6a5bffu); f_006a60dc();
    /* 006a5bff: mov ebp, eax */ r_ebp = r_eax;
    /* 006a5c01: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5c03: je 0x6a5c24 */ if (fZ) goto L_006a5c24;
L_006a5c05:; BB(0x006a5c05);
    /* 006a5c05: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006a5c08: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a5c0a: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x6a5c10u); call_ind(t); }
    /* 006a5c10: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a5c13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a5c15: jle 0x6a5c49 */ if ((fZ||fS!=fO)) goto L_006a5c49;
L_006a5c17:; BB(0x006a5c17);
    /* 006a5c17: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a5c19: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006a5c1c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a5c1e: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6a5c24u); call_ind(t); }
L_006a5c24:; BB(0x006a5c24);
    /* 006a5c24: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a5c26: call 0x6a5b74 */ r_esp -= 4; W32(r_esp, 0x6a5c2bu); f_006a5b74();
    /* 006a5c2b: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006a5c2e: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5c30: jne 0x6a5b93 */ if (!fZ) goto L_006a5b93;
L_006a5c36:; BB(0x006a5c36);
    /* 006a5c36: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 006a5c3a: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 006a5c3e: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 006a5c42: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_006a5c45:; BB(0x006a5c45);
    /* 006a5c45: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a5c48: ret  */ FN_RET(0x006a5b74); r_esp += 4; return;
L_006a5c49:; BB(0x006a5c49);
    /* 006a5c49: mov edx, dword ptr [ebp + 0xdc] */ r_edx = R32((u32)(r_ebp+0xdcu));
    /* 006a5c4f: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a5c52: jne 0x6a5c58 */ if (!fZ) goto L_006a5c58;
L_006a5c54:; BB(0x006a5c54);
    /* 006a5c54: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a5c56: jmp 0x6a5c66 */ goto L_006a5c66;
L_006a5c58:; BB(0x006a5c58);
    /* 006a5c58: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a5c5b: je 0x6a5c64 */ if (fZ) goto L_006a5c64;
L_006a5c5d:; BB(0x006a5c5d);
    /* 006a5c5d: mov edx, 1 */ r_edx = 0x1u;
    /* 006a5c62: jmp 0x6a5c66 */ goto L_006a5c66;
L_006a5c64:; BB(0x006a5c64);
    /* 006a5c64: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a5c66:; BB(0x006a5c66);
    /* 006a5c66: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5c68: je 0x6a5c74 */ if (fZ) goto L_006a5c74;
L_006a5c6a:; BB(0x006a5c6a);
    /* 006a5c6a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a5c6b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a5c6c: call 0x68e8a8 */ r_esp -= 4; W32(r_esp, 0x6a5c71u); f_0068e8a8();
    /* 006a5c71: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006a5c74:; BB(0x006a5c74);
    /* 006a5c74: add word ptr [esi + 0x1c], -1 */ { u32 ad = (u32)(r_esi+0x1cu);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006a5c79: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006a5c7c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a5c7e: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x6a5c81u); call_ind(t); }
    /* 006a5c81: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006a5c85: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a5c8a: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006a5c8e: jmp 0x6a5c24 */ goto L_006a5c24;
L_006a5c90:; BB(0x006a5c90);
    /* 006a5c90: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a5c92: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x6a5c98u); call_ind(t); }
    /* 006a5c98: mov edi, eax */ r_edi = r_eax;
    /* 006a5c9a: mov edx, dword ptr [0xa94380] */ r_edx = R32((u32)(0xa94380u));
    /* 006a5ca0: mov esi, dword ptr [edx + 0xdf4] */ r_esi = R32((u32)(r_edx+0xdf4u));
    /* 006a5ca6: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 006a5caa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a5cac: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x6a5cb1u); f_006a60dc();
    /* 006a5cb1: mov ebp, eax */ r_ebp = r_eax;
    /* 006a5cb3: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5cb5: je 0x6a5c24 */ if (fZ) goto L_006a5c24;
L_006a5cbb:; BB(0x006a5cbb);
    /* 006a5cbb: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a5cbd: jl 0x6a5c24 */ if ((fS!=fO)) goto L_006a5c24;
L_006a5cc3:; BB(0x006a5cc3);
    /* 006a5cc3: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006a5cc6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a5cc8: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x6a5cceu); call_ind(t); }
    /* 006a5cce: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006a5cd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a5cd2: jle 0x6a5ce5 */ if ((fZ||fS!=fO)) goto L_006a5ce5;
L_006a5cd4:; BB(0x006a5cd4);
    /* 006a5cd4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a5cd5: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006a5cd8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a5cda: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6a5ce0u); call_ind(t); }
    /* 006a5ce0: jmp 0x6a5c24 */ goto L_006a5c24;
L_006a5ce5:; BB(0x006a5ce5);
    /* 006a5ce5: mov edx, dword ptr [ebp + 0xdc] */ r_edx = R32((u32)(r_ebp+0xdcu));
    /* 006a5ceb: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a5cee: jne 0x6a5cf4 */ if (!fZ) goto L_006a5cf4;
L_006a5cf0:; BB(0x006a5cf0);
    /* 006a5cf0: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a5cf2: jmp 0x6a5d02 */ goto L_006a5d02;
L_006a5cf4:; BB(0x006a5cf4);
    /* 006a5cf4: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a5cf7: je 0x6a5d00 */ if (fZ) goto L_006a5d00;
L_006a5cf9:; BB(0x006a5cf9);
    /* 006a5cf9: mov edx, 1 */ r_edx = 0x1u;
    /* 006a5cfe: jmp 0x6a5d02 */ goto L_006a5d02;
L_006a5d00:; BB(0x006a5d00);
    /* 006a5d00: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a5d02:; BB(0x006a5d02);
    /* 006a5d02: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5d04: je 0x6a5d14 */ if (fZ) goto L_006a5d14;
L_006a5d06:; BB(0x006a5d06);
    /* 006a5d06: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a5d07: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 006a5d0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a5d0c: call 0x68e8a8 */ r_esp -= 4; W32(r_esp, 0x6a5d11u); f_0068e8a8();
    /* 006a5d11: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006a5d14:; BB(0x006a5d14);
    /* 006a5d14: add word ptr [esi + 0x1c], -1 */ { u32 ad = (u32)(r_esi+0x1cu);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006a5d19: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006a5d1c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a5d1e: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x6a5d21u); call_ind(t); }
    /* 006a5d21: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006a5d25: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a5d2a: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006a5d2e: jmp 0x6a5c24 */ goto L_006a5c24;
}

void f_006a5d34(void) /* sub_6A5D34 */
{
    FN_ENTER(0x006a5d34);
    /* 006a5d34: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 006a5d38: movzx eax, byte ptr [esp + 0xc] */ r_eax = (u32)R8((u32)(r_esp+0xcu));
    /* 006a5d3d: mov ecx, dword ptr [ecx + 0x1c4] */ r_ecx = R32((u32)(r_ecx+0x1c4u));
    /* 006a5d43: mov dword ptr [0xa94380], edx */ W32((u32)(0xa94380u), r_edx);
    /* 006a5d49: movzx edx, byte ptr [esp + 8] */ r_edx = (u32)R8((u32)(r_esp+0x8u));
    /* 006a5d4e: mov byte ptr [0xa943a0], dl */ W8((u32)(0xa943a0u), (u8)r_edx);
    /* 006a5d54: mov byte ptr [0xa943a4], al */ W8((u32)(0xa943a4u), (u8)r_eax);
    /* 006a5d59: call 0x6a5d64 */ r_esp -= 4; W32(r_esp, 0x6a5d5eu); f_006a5d64();
    /* 006a5d5e: ret 0xc */ FN_RET(0x006a5d34); r_esp += 16; return;
}

void f_006a5d64(void) /* sub_6A5D64 */
{
    FN_ENTER(0x006a5d64);
    /* 006a5d64: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006a5d67: mov ecx, dword ptr [ecx + 0x18] */ r_ecx = R32((u32)(r_ecx+0x18u));
    /* 006a5d6a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5d6c: je 0x6a5f00 */ if (fZ) goto L_006a5f00;
L_006a5d72:; BB(0x006a5d72);
    /* 006a5d72: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 006a5d76: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 006a5d7a: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 006a5d7e: mov dword ptr [esp + 0x10], ebp */ W32((u32)(r_esp+0x10u), r_ebp);
    /* 006a5d82: mov ebp, ecx */ r_ebp = r_ecx;
L_006a5d84:; BB(0x006a5d84);
    /* 006a5d84: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 006a5d87: cmp eax, dword ptr [0x9cba2c] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5d8d: jne 0x6a5da5 */ if (!fZ) goto L_006a5da5;
L_006a5d8f:; BB(0x006a5d8f);
    /* 006a5d8f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a5d91: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a5d96u); f_008173b4();
    /* 006a5d96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5d98: je 0x6a5da1 */ if (fZ) goto L_006a5da1;
L_006a5d9a:; BB(0x006a5d9a);
    /* 006a5d9a: mov eax, 1 */ r_eax = 0x1u;
    /* 006a5d9f: jmp 0x6a5da7 */ goto L_006a5da7;
L_006a5da1:; BB(0x006a5da1);
    /* 006a5da1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a5da3: jmp 0x6a5da7 */ goto L_006a5da7;
L_006a5da5:; BB(0x006a5da5);
    /* 006a5da5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a5da7:; BB(0x006a5da7);
    /* 006a5da7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5da9: je 0x6a5e2d */ if (fZ) goto L_006a5e2d;
L_006a5daf:; BB(0x006a5daf);
    /* 006a5daf: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
    /* 006a5db2: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a5db7u); f_008173b4();
    /* 006a5db7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5db9: jne 0x6a5dbf */ if (!fZ) goto L_006a5dbf;
L_006a5dbb:; BB(0x006a5dbb);
    /* 006a5dbb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006a5dbd: jmp 0x6a5dc2 */ goto L_006a5dc2;
L_006a5dbf:; BB(0x006a5dbf);
    /* 006a5dbf: mov ecx, dword ptr [ebp + 0x1c] */ r_ecx = R32((u32)(r_ebp+0x1cu));
L_006a5dc2:; BB(0x006a5dc2);
    /* 006a5dc2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5dc4: je 0x6a5e2d */ if (fZ) goto L_006a5e2d;
L_006a5dc6:; BB(0x006a5dc6);
    /* 006a5dc6: movzx ebx, byte ptr [0xa943a0] */ r_ebx = (u32)R8((u32)(0xa943a0u));
    /* 006a5dcd: movzx eax, byte ptr [ecx + 0xf2] */ r_eax = (u32)R8((u32)(r_ecx+0xf2u));
    /* 006a5dd4: cmp ebx, eax */ {  u32 a = r_ebx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5dd6: jne 0x6a5e2d */ if (!fZ) goto L_006a5e2d;
L_006a5dd8:; BB(0x006a5dd8);
    /* 006a5dd8: movzx eax, byte ptr [0xa943a4] */ r_eax = (u32)R8((u32)(0xa943a4u));
    /* 006a5ddf: movzx edx, byte ptr [ecx + 0xf3] */ r_edx = (u32)R8((u32)(r_ecx+0xf3u));
    /* 006a5de6: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5de8: jne 0x6a5e2d */ if (!fZ) goto L_006a5e2d;
L_006a5dea:; BB(0x006a5dea);
    /* 006a5dea: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5ded: je 0x6a5f4d */ if (fZ) goto L_006a5f4d;
L_006a5df3:; BB(0x006a5df3);
    /* 006a5df3: mov edi, dword ptr [0xa94380] */ r_edi = R32((u32)(0xa94380u));
    /* 006a5df9: mov esi, dword ptr [edi + 0xdf4] */ r_esi = R32((u32)(r_edi+0xdf4u));
    /* 006a5dff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a5e01: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x6a5e06u); f_006a60dc();
    /* 006a5e06: mov ebx, eax */ r_ebx = r_eax;
    /* 006a5e08: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5e0a: je 0x6a5e2d */ if (fZ) goto L_006a5e2d;
L_006a5e0c:; BB(0x006a5e0c);
    /* 006a5e0c: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006a5e0e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a5e10: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x6a5e16u); call_ind(t); }
    /* 006a5e16: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a5e19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a5e1b: jle 0x6a5f04 */ if ((fZ||fS!=fO)) goto L_006a5f04;
L_006a5e21:; BB(0x006a5e21);
    /* 006a5e21: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a5e23: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006a5e25: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a5e27: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6a5e2du); call_ind(t); }
L_006a5e2d:; BB(0x006a5e2d);
    /* 006a5e2d: mov ebx, dword ptr [ebp + 0x18] */ r_ebx = R32((u32)(r_ebp+0x18u));
    /* 006a5e30: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5e32: je 0x6a5ee5 */ if (fZ) goto L_006a5ee5;
L_006a5e38:; BB(0x006a5e38);
    /* 006a5e38: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
L_006a5e3b:; BB(0x006a5e3b);
    /* 006a5e3b: mov eax, dword ptr [ebx + 4] */ r_eax = R32((u32)(r_ebx+0x4u));
    /* 006a5e3e: cmp eax, dword ptr [0x9cba2c] */ {  u32 a = r_eax; u32 b = R32((u32)(0x9cba2cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5e44: jne 0x6a5e5c */ if (!fZ) goto L_006a5e5c;
L_006a5e46:; BB(0x006a5e46);
    /* 006a5e46: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a5e48: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a5e4du); f_008173b4();
    /* 006a5e4d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5e4f: je 0x6a5e58 */ if (fZ) goto L_006a5e58;
L_006a5e51:; BB(0x006a5e51);
    /* 006a5e51: mov eax, 1 */ r_eax = 0x1u;
    /* 006a5e56: jmp 0x6a5e5e */ goto L_006a5e5e;
L_006a5e58:; BB(0x006a5e58);
    /* 006a5e58: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006a5e5a: jmp 0x6a5e5e */ goto L_006a5e5e;
L_006a5e5c:; BB(0x006a5e5c);
    /* 006a5e5c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_006a5e5e:; BB(0x006a5e5e);
    /* 006a5e5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5e60: je 0x6a5ed0 */ if (fZ) goto L_006a5ed0;
L_006a5e62:; BB(0x006a5e62);
    /* 006a5e62: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
    /* 006a5e65: call 0x8173b4 */ r_esp -= 4; W32(r_esp, 0x6a5e6au); f_008173b4();
    /* 006a5e6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5e6c: jne 0x6a5e72 */ if (!fZ) goto L_006a5e72;
L_006a5e6e:; BB(0x006a5e6e);
    /* 006a5e6e: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006a5e70: jmp 0x6a5e75 */ goto L_006a5e75;
L_006a5e72:; BB(0x006a5e72);
    /* 006a5e72: mov ecx, dword ptr [ebx + 0x1c] */ r_ecx = R32((u32)(r_ebx+0x1cu));
L_006a5e75:; BB(0x006a5e75);
    /* 006a5e75: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5e77: je 0x6a5ed0 */ if (fZ) goto L_006a5ed0;
L_006a5e79:; BB(0x006a5e79);
    /* 006a5e79: movzx edx, byte ptr [0xa943a0] */ r_edx = (u32)R8((u32)(0xa943a0u));
    /* 006a5e80: movzx eax, byte ptr [ecx + 0xf2] */ r_eax = (u32)R8((u32)(r_ecx+0xf2u));
    /* 006a5e87: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5e89: jne 0x6a5ed0 */ if (!fZ) goto L_006a5ed0;
L_006a5e8b:; BB(0x006a5e8b);
    /* 006a5e8b: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5e8e: je 0x6a6037 */ if (fZ) goto L_006a6037;
L_006a5e94:; BB(0x006a5e94);
    /* 006a5e94: mov edi, dword ptr [0xa94380] */ r_edi = R32((u32)(0xa94380u));
    /* 006a5e9a: mov esi, dword ptr [edi + 0xdf4] */ r_esi = R32((u32)(r_edi+0xdf4u));
    /* 006a5ea0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a5ea2: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x6a5ea7u); f_006a60dc();
    /* 006a5ea7: mov ebp, eax */ r_ebp = r_eax;
    /* 006a5ea9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5eab: je 0x6a5ed0 */ if (fZ) goto L_006a5ed0;
L_006a5ead:; BB(0x006a5ead);
    /* 006a5ead: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006a5eb0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a5eb2: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x6a5eb8u); call_ind(t); }
    /* 006a5eb8: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006a5ebb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a5ebd: jle 0x6a5fed */ if ((fZ||fS!=fO)) goto L_006a5fed;
L_006a5ec3:; BB(0x006a5ec3);
    /* 006a5ec3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006a5ec5: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006a5ec8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a5eca: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6a5ed0u); call_ind(t); }
L_006a5ed0:; BB(0x006a5ed0);
    /* 006a5ed0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a5ed2: call 0x6a5b74 */ r_esp -= 4; W32(r_esp, 0x6a5ed7u); f_006a5b74();
    /* 006a5ed7: mov ebx, dword ptr [ebx + 0x10] */ r_ebx = R32((u32)(r_ebx+0x10u));
    /* 006a5eda: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5edc: jne 0x6a5e3b */ if (!fZ) goto L_006a5e3b;
L_006a5ee2:; BB(0x006a5ee2);
    /* 006a5ee2: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_006a5ee5:; BB(0x006a5ee5);
    /* 006a5ee5: mov ebp, dword ptr [ebp + 0x10] */ r_ebp = R32((u32)(r_ebp+0x10u));
    /* 006a5ee8: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5eea: jne 0x6a5d84 */ if (!fZ) goto L_006a5d84;
L_006a5ef0:; BB(0x006a5ef0);
    /* 006a5ef0: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 006a5ef4: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 006a5ef8: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 006a5efc: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
L_006a5f00:; BB(0x006a5f00);
    /* 006a5f00: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006a5f03: ret  */ FN_RET(0x006a5d64); r_esp += 4; return;
L_006a5f04:; BB(0x006a5f04);
    /* 006a5f04: mov edx, dword ptr [ebx + 0xdc] */ r_edx = R32((u32)(r_ebx+0xdcu));
    /* 006a5f0a: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a5f0d: jne 0x6a5f13 */ if (!fZ) goto L_006a5f13;
L_006a5f0f:; BB(0x006a5f0f);
    /* 006a5f0f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a5f11: jmp 0x6a5f21 */ goto L_006a5f21;
L_006a5f13:; BB(0x006a5f13);
    /* 006a5f13: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a5f16: je 0x6a5f1f */ if (fZ) goto L_006a5f1f;
L_006a5f18:; BB(0x006a5f18);
    /* 006a5f18: mov edx, 1 */ r_edx = 0x1u;
    /* 006a5f1d: jmp 0x6a5f21 */ goto L_006a5f21;
L_006a5f1f:; BB(0x006a5f1f);
    /* 006a5f1f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a5f21:; BB(0x006a5f21);
    /* 006a5f21: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5f23: je 0x6a5f2f */ if (fZ) goto L_006a5f2f;
L_006a5f25:; BB(0x006a5f25);
    /* 006a5f25: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a5f26: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a5f27: call 0x68e8a8 */ r_esp -= 4; W32(r_esp, 0x6a5f2cu); f_0068e8a8();
    /* 006a5f2c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006a5f2f:; BB(0x006a5f2f);
    /* 006a5f2f: add word ptr [esi + 0x1c], -1 */ { u32 ad = (u32)(r_esi+0x1cu);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006a5f34: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006a5f36: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a5f38: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x6a5f3bu); call_ind(t); }
    /* 006a5f3b: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006a5f3f: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a5f44: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 006a5f48: jmp 0x6a5e2d */ goto L_006a5e2d;
L_006a5f4d:; BB(0x006a5f4d);
    /* 006a5f4d: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a5f4f: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x6a5f55u); call_ind(t); }
    /* 006a5f55: mov edi, eax */ r_edi = r_eax;
    /* 006a5f57: mov edx, dword ptr [0xa94380] */ r_edx = R32((u32)(0xa94380u));
    /* 006a5f5d: mov esi, dword ptr [edx + 0xdf4] */ r_esi = R32((u32)(r_edx+0xdf4u));
    /* 006a5f63: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 006a5f67: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a5f69: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x6a5f6eu); f_006a60dc();
    /* 006a5f6e: mov ebx, eax */ r_ebx = r_eax;
    /* 006a5f70: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5f72: je 0x6a5e2d */ if (fZ) goto L_006a5e2d;
L_006a5f78:; BB(0x006a5f78);
    /* 006a5f78: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a5f7a: jl 0x6a5e2d */ if ((fS!=fO)) goto L_006a5e2d;
L_006a5f80:; BB(0x006a5f80);
    /* 006a5f80: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006a5f82: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a5f84: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x6a5f8au); call_ind(t); }
    /* 006a5f8a: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006a5f8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a5f8e: jle 0x6a5fa0 */ if ((fZ||fS!=fO)) goto L_006a5fa0;
L_006a5f90:; BB(0x006a5f90);
    /* 006a5f90: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a5f91: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006a5f93: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a5f95: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6a5f9bu); call_ind(t); }
    /* 006a5f9b: jmp 0x6a5e2d */ goto L_006a5e2d;
L_006a5fa0:; BB(0x006a5fa0);
    /* 006a5fa0: mov edx, dword ptr [ebx + 0xdc] */ r_edx = R32((u32)(r_ebx+0xdcu));
    /* 006a5fa6: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a5fa9: jne 0x6a5faf */ if (!fZ) goto L_006a5faf;
L_006a5fab:; BB(0x006a5fab);
    /* 006a5fab: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a5fad: jmp 0x6a5fbd */ goto L_006a5fbd;
L_006a5faf:; BB(0x006a5faf);
    /* 006a5faf: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a5fb2: je 0x6a5fbb */ if (fZ) goto L_006a5fbb;
L_006a5fb4:; BB(0x006a5fb4);
    /* 006a5fb4: mov edx, 1 */ r_edx = 0x1u;
    /* 006a5fb9: jmp 0x6a5fbd */ goto L_006a5fbd;
L_006a5fbb:; BB(0x006a5fbb);
    /* 006a5fbb: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a5fbd:; BB(0x006a5fbd);
    /* 006a5fbd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a5fbf: je 0x6a5fcf */ if (fZ) goto L_006a5fcf;
L_006a5fc1:; BB(0x006a5fc1);
    /* 006a5fc1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006a5fc2: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 006a5fc6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a5fc7: call 0x68e8a8 */ r_esp -= 4; W32(r_esp, 0x6a5fccu); f_0068e8a8();
    /* 006a5fcc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006a5fcf:; BB(0x006a5fcf);
    /* 006a5fcf: add word ptr [esi + 0x1c], -1 */ { u32 ad = (u32)(r_esi+0x1cu);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006a5fd4: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006a5fd6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a5fd8: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x6a5fdbu); call_ind(t); }
    /* 006a5fdb: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 006a5fdf: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a5fe4: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 006a5fe8: jmp 0x6a5e2d */ goto L_006a5e2d;
L_006a5fed:; BB(0x006a5fed);
    /* 006a5fed: mov edx, dword ptr [ebp + 0xdc] */ r_edx = R32((u32)(r_ebp+0xdcu));
    /* 006a5ff3: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a5ff6: jne 0x6a5ffc */ if (!fZ) goto L_006a5ffc;
L_006a5ff8:; BB(0x006a5ff8);
    /* 006a5ff8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a5ffa: jmp 0x6a600a */ goto L_006a600a;
L_006a5ffc:; BB(0x006a5ffc);
    /* 006a5ffc: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a5fff: je 0x6a6008 */ if (fZ) goto L_006a6008;
L_006a6001:; BB(0x006a6001);
    /* 006a6001: mov edx, 1 */ r_edx = 0x1u;
    /* 006a6006: jmp 0x6a600a */ goto L_006a600a;
L_006a6008:; BB(0x006a6008);
    /* 006a6008: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a600a:; BB(0x006a600a);
    /* 006a600a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a600c: je 0x6a6018 */ if (fZ) goto L_006a6018;
L_006a600e:; BB(0x006a600e);
    /* 006a600e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a600f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a6010: call 0x68e8a8 */ r_esp -= 4; W32(r_esp, 0x6a6015u); f_0068e8a8();
    /* 006a6015: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006a6018:; BB(0x006a6018);
    /* 006a6018: add word ptr [esi + 0x1c], -1 */ { u32 ad = (u32)(r_esi+0x1cu);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006a601d: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006a6020: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a6022: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x6a6025u); call_ind(t); }
    /* 006a6025: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006a6029: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a602e: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006a6032: jmp 0x6a5ed0 */ goto L_006a5ed0;
L_006a6037:; BB(0x006a6037);
    /* 006a6037: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 006a6039: call dword ptr [eax + 0x88] */ { u32 t = R32((u32)(r_eax+0x88u)); r_esp -= 4; W32(r_esp, 0x6a603fu); call_ind(t); }
    /* 006a603f: mov edi, eax */ r_edi = r_eax;
    /* 006a6041: mov edx, dword ptr [0xa94380] */ r_edx = R32((u32)(0xa94380u));
    /* 006a6047: mov esi, dword ptr [edx + 0xdf4] */ r_esi = R32((u32)(r_edx+0xdf4u));
    /* 006a604d: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 006a6051: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006a6053: call 0x6a60dc */ r_esp -= 4; W32(r_esp, 0x6a6058u); f_006a60dc();
    /* 006a6058: mov ebp, eax */ r_ebp = r_eax;
    /* 006a605a: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a605c: je 0x6a5ed0 */ if (fZ) goto L_006a5ed0;
L_006a6062:; BB(0x006a6062);
    /* 006a6062: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 006a6064: jl 0x6a5ed0 */ if ((fS!=fO)) goto L_006a5ed0;
L_006a606a:; BB(0x006a606a);
    /* 006a606a: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006a606d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a606f: call dword ptr [edx + 0x88] */ { u32 t = R32((u32)(r_edx+0x88u)); r_esp -= 4; W32(r_esp, 0x6a6075u); call_ind(t); }
    /* 006a6075: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 006a6077: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 006a6079: jle 0x6a608c */ if ((fZ||fS!=fO)) goto L_006a608c;
L_006a607b:; BB(0x006a607b);
    /* 006a607b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006a607c: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006a607f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a6081: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6a6087u); call_ind(t); }
    /* 006a6087: jmp 0x6a5ed0 */ goto L_006a5ed0;
L_006a608c:; BB(0x006a608c);
    /* 006a608c: mov edx, dword ptr [ebp + 0xdc] */ r_edx = R32((u32)(r_ebp+0xdcu));
    /* 006a6092: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a6095: jne 0x6a609b */ if (!fZ) goto L_006a609b;
L_006a6097:; BB(0x006a6097);
    /* 006a6097: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 006a6099: jmp 0x6a60a9 */ goto L_006a60a9;
L_006a609b:; BB(0x006a609b);
    /* 006a609b: test dl, 8 */ {  u32 a = (u8)r_edx; u32 b = 0x8u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 006a609e: je 0x6a60a7 */ if (fZ) goto L_006a60a7;
L_006a60a0:; BB(0x006a60a0);
    /* 006a60a0: mov edx, 1 */ r_edx = 0x1u;
    /* 006a60a5: jmp 0x6a60a9 */ goto L_006a60a9;
L_006a60a7:; BB(0x006a60a7);
    /* 006a60a7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_006a60a9:; BB(0x006a60a9);
    /* 006a60a9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006a60ab: je 0x6a60bb */ if (fZ) goto L_006a60bb;
L_006a60ad:; BB(0x006a60ad);
    /* 006a60ad: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006a60ae: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 006a60b2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006a60b3: call 0x68e8a8 */ r_esp -= 4; W32(r_esp, 0x6a60b8u); f_0068e8a8();
    /* 006a60b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_006a60bb:; BB(0x006a60bb);
    /* 006a60bb: add word ptr [esi + 0x1c], -1 */ { u32 ad = (u32)(r_esi+0x1cu);  u32 a = R16(ad); u32 b = 0xffffu; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 006a60c0: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 006a60c3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006a60c5: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x6a60c8u); call_ind(t); }
    /* 006a60c8: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 006a60cc: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006a60d1: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 006a60d5: jmp 0x6a5ed0 */ goto L_006a5ed0;
}

