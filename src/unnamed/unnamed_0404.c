#include "protos.h"

void f_00404040(void) /* sub_404040 */
{
    FN_ENTER(0x00404040);
    /* 00404040: or byte ptr [ebx + 0x147401f8], al */ { u32 ad = (u32)(r_ebx+0x147401f8u);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a | b) & 0xffu; W8(ad, r);  }
    /* 00404046: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0040404a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040404d: je 0x40405a */ if (fZ) goto L_0040405a;
L_0040404f:; BB(0x0040404f);
    /* 0040404f: mov eax, ecx */ r_eax = r_ecx;
    /* 00404051: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404054: jne 0x4040d6 */ if (!fZ) goto L_004040d6;
L_0040405a:; BB(0x0040405a);
    /* 0040405a: mov edx, dword ptr [ebx + 0x34] */ r_edx = R32((u32)(r_ebx+0x34u));
    /* 0040405d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040405f: jne 0x404093 */ if (!fZ) goto L_00404093;
L_00404061:; BB(0x00404061);
    /* 00404061: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00404064: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404067: je 0x404084 */ if (fZ) goto L_00404084;
L_00404069:; BB(0x00404069);
    /* 00404069: mov dword ptr [ebx + 0x1c], 8 */ W32((u32)(r_ebx+0x1cu), 0x8u);
    /* 00404070: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 00404077: mov eax, dword ptr [0x9a2de0] */ r_eax = R32((u32)(0x9a2de0u));
    /* 0040407c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040407e: je 0x404084 */ if (fZ) goto L_00404084;
L_00404080:; BB(0x00404080);
    /* 00404080: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00404082: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x404084u); call_ind(t); }
L_00404084:; BB(0x00404084);
    /* 00404084: mov dword ptr [ebx + 0x28], 1 */ W32((u32)(r_ebx+0x28u), 0x1u);
    /* 0040408b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040408e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040408f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404090: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00404091: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00404092: ret  */ FN_RET(0x00404040); r_esp += 4; return;
L_00404093:; BB(0x00404093);
    /* 00404093: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_00404095:; BB(0x00404095);
    /* 00404095: mov ebp, dword ptr [ebx + eax*8 + 0x38] */ r_ebp = R32((u32)(r_ebx+r_eax*8+0x38u));
    /* 00404099: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040409b: je 0x40419a */ if (fZ) goto L_0040419a;
L_004040a1:; BB(0x004040a1);
    /* 004040a1: mov ebp, dword ptr [ebx + eax*8 + 0x3c] */ r_ebp = R32((u32)(r_ebx+r_eax*8+0x3cu));
    /* 004040a5: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004040a7: je 0x404167 */ if (fZ) goto L_00404167;
L_004040ad:; BB(0x004040ad);
    /* 004040ad: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004040b0: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004040b3: jl 0x404095 */ if ((fS!=fO)) goto L_00404095;
L_004040b5:; BB(0x004040b5);
    /* 004040b5: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004040b8: jne 0x4040d6 */ if (!fZ) goto L_004040d6;
L_004040ba:; BB(0x004040ba);
    /* 004040ba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004040bc:; BB(0x004040bc);
    /* 004040bc: mov edx, dword ptr [ebx + eax*8 + 0x38] */ r_edx = R32((u32)(r_ebx+r_eax*8+0x38u));
    /* 004040c0: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004040c3: je 0x404134 */ if (fZ) goto L_00404134;
L_004040c5:; BB(0x004040c5);
    /* 004040c5: mov edx, dword ptr [ebx + eax*8 + 0x3c] */ r_edx = R32((u32)(r_ebx+r_eax*8+0x3cu));
    /* 004040c9: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004040cc: je 0x404101 */ if (fZ) goto L_00404101;
L_004040ce:; BB(0x004040ce);
    /* 004040ce: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004040d1: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004040d4: jl 0x4040bc */ if ((fS!=fO)) goto L_004040bc;
L_004040d6:; BB(0x004040d6);
    /* 004040d6: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004040d9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004040dc: je 0x4040f9 */ if (fZ) goto L_004040f9;
L_004040de:; BB(0x004040de);
    /* 004040de: mov dword ptr [ebx + 0x1c], 1 */ W32((u32)(r_ebx+0x1cu), 0x1u);
    /* 004040e5: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 004040ec: mov eax, dword ptr [0x9a2da8] */ r_eax = R32((u32)(0x9a2da8u));
    /* 004040f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004040f3: je 0x4040f9 */ if (fZ) goto L_004040f9;
L_004040f5:; BB(0x004040f5);
    /* 004040f5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004040f7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4040f9u); call_ind(t); }
L_004040f9:; BB(0x004040f9);
    /* 004040f9: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004040fc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004040fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004040fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004040ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00404100: ret  */ FN_RET(0x00404040); r_esp += 4; return;
L_00404101:; BB(0x00404101);
    /* 00404101: mov dword ptr [ebx + 0x58], eax */ W32((u32)(r_ebx+0x58u), r_eax);
    /* 00404104: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00404107: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040410a: je 0x404084 */ if (fZ) goto L_00404084;
L_00404110:; BB(0x00404110);
    /* 00404110: mov dword ptr [ebx + 0x1c], 0xc */ W32((u32)(r_ebx+0x1cu), 0xcu);
    /* 00404117: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 0040411e: mov eax, dword ptr [0x9a2e00] */ r_eax = R32((u32)(0x9a2e00u));
    /* 00404123: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404125: je 0x404084 */ if (fZ) goto L_00404084;
L_0040412b:; BB(0x0040412b);
    /* 0040412b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0040412d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40412fu); call_ind(t); }
    /* 0040412f: jmp 0x404084 */ goto L_00404084;
L_00404134:; BB(0x00404134);
    /* 00404134: mov dword ptr [ebx + 0x58], eax */ W32((u32)(r_ebx+0x58u), r_eax);
    /* 00404137: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0040413a: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040413d: je 0x404084 */ if (fZ) goto L_00404084;
L_00404143:; BB(0x00404143);
    /* 00404143: mov dword ptr [ebx + 0x1c], 0xa */ W32((u32)(r_ebx+0x1cu), 0xau);
    /* 0040414a: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 00404151: mov eax, dword ptr [0x9a2df0] */ r_eax = R32((u32)(0x9a2df0u));
    /* 00404156: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404158: je 0x404084 */ if (fZ) goto L_00404084;
L_0040415e:; BB(0x0040415e);
    /* 0040415e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00404160: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x404162u); call_ind(t); }
    /* 00404162: jmp 0x404084 */ goto L_00404084;
L_00404167:; BB(0x00404167);
    /* 00404167: mov dword ptr [ebx + 0x58], eax */ W32((u32)(r_ebx+0x58u), r_eax);
    /* 0040416a: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0040416d: cmp eax, 0xc */ {  u32 a = r_eax; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404170: je 0x404084 */ if (fZ) goto L_00404084;
L_00404176:; BB(0x00404176);
    /* 00404176: mov dword ptr [ebx + 0x1c], 0xc */ W32((u32)(r_ebx+0x1cu), 0xcu);
    /* 0040417d: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 00404184: mov eax, dword ptr [0x9a2e00] */ r_eax = R32((u32)(0x9a2e00u));
    /* 00404189: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040418b: je 0x404084 */ if (fZ) goto L_00404084;
L_00404191:; BB(0x00404191);
    /* 00404191: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00404193: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x404195u); call_ind(t); }
    /* 00404195: jmp 0x404084 */ goto L_00404084;
L_0040419a:; BB(0x0040419a);
    /* 0040419a: mov dword ptr [ebx + 0x58], eax */ W32((u32)(r_ebx+0x58u), r_eax);
    /* 0040419d: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004041a0: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004041a3: je 0x404084 */ if (fZ) goto L_00404084;
L_004041a9:; BB(0x004041a9);
    /* 004041a9: mov dword ptr [ebx + 0x1c], 0xa */ W32((u32)(r_ebx+0x1cu), 0xau);
    /* 004041b0: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 004041b7: mov eax, dword ptr [0x9a2df0] */ r_eax = R32((u32)(0x9a2df0u));
    /* 004041bc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004041be: je 0x404084 */ if (fZ) goto L_00404084;
L_004041c4:; BB(0x004041c4);
    /* 004041c4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004041c6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4041c8u); call_ind(t); }
    /* 004041c8: jmp 0x404084 */ goto L_00404084;
}

void f_0040406e(void)
{
    FN_ENTER(0x0040406e);
    /* 0040406e: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00404070: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 00404077: mov eax, dword ptr [0x9a2de0] */ r_eax = R32((u32)(0x9a2de0u));
    /* 0040407c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040407e: je 0x404084 */ if (fZ) goto L_00404084;
L_00404080:; BB(0x00404080);
    /* 00404080: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00404082: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x404084u); call_ind(t); }
L_00404084:; BB(0x00404084);
    /* 00404084: mov dword ptr [ebx + 0x28], 1 */ W32((u32)(r_ebx+0x28u), 0x1u);
    /* 0040408b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040408e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040408f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404090: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00404091: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00404092: ret  */ FN_RET(0x0040406e); r_esp += 4; return;
}

void f_0040406f(void)
{
    FN_ENTER(0x0040406f);
    /* 0040406f: add bh, al */ {  u32 a = (u8)(r_ebx>>8); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; r_ebx = (r_ebx & 0xffff00ffu) | (((r) & 0xffu) << 8);  }
    /* 00404071: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00404072: pushal  */ { u32 sp = r_esp; r_esp -= 32; W32(r_esp, r_edi); W32(r_esp + 4, r_esi); W32(r_esp + 8, r_ebp); W32(r_esp + 12, sp); W32(r_esp + 16, r_ebx); W32(r_esp + 20, r_edx); W32(r_esp + 24, r_ecx); W32(r_esp + 28, r_eax); }
    /* 00404073: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00404075: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00404077: mov eax, dword ptr [0x9a2de0] */ r_eax = R32((u32)(0x9a2de0u));
    /* 0040407c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040407e: je 0x404084 */ if (fZ) goto L_00404084;
L_00404080:; BB(0x00404080);
    /* 00404080: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00404082: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x404084u); call_ind(t); }
L_00404084:; BB(0x00404084);
    /* 00404084: mov dword ptr [ebx + 0x28], 1 */ W32((u32)(r_ebx+0x28u), 0x1u);
    /* 0040408b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040408e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040408f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404090: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00404091: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00404092: ret  */ FN_RET(0x0040406f); r_esp += 4; return;
}

void f_004041d0(void) /* sub_4041D0 */
{
    FN_ENTER(0x004041d0);
    /* 004041d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004041d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004041d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004041d3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004041d4: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004041d7: mov esi, dword ptr [ecx + 0x34] */ r_esi = R32((u32)(r_ecx+0x34u));
    /* 004041da: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004041dc: je 0x404377 */ if (fZ) goto L_00404377;
L_004041e2:; BB(0x004041e2);
    /* 004041e2: mov ebp, dword ptr [ecx + 0x38] */ r_ebp = R32((u32)(r_ecx+0x38u));
    /* 004041e5: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004041e7: je 0x404377 */ if (fZ) goto L_00404377;
L_004041ed:; BB(0x004041ed);
    /* 004041ed: mov ebx, dword ptr [ecx + 0x3c] */ r_ebx = R32((u32)(r_ecx+0x3cu));
    /* 004041f0: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004041f2: je 0x404377 */ if (fZ) goto L_00404377;
L_004041f8:; BB(0x004041f8);
    /* 004041f8: mov edx, dword ptr [ecx + 0x40] */ r_edx = R32((u32)(r_ecx+0x40u));
    /* 004041fb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004041fd: je 0x404377 */ if (fZ) goto L_00404377;
L_00404203:; BB(0x00404203);
    /* 00404203: mov eax, dword ptr [ecx + 0x44] */ r_eax = R32((u32)(r_ecx+0x44u));
    /* 00404206: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404208: je 0x404377 */ if (fZ) goto L_00404377;
L_0040420e:; BB(0x0040420e);
    /* 0040420e: mov edi, dword ptr [ecx + 0x48] */ r_edi = R32((u32)(r_ecx+0x48u));
    /* 00404211: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00404215: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404217: je 0x404377 */ if (fZ) goto L_00404377;
L_0040421d:; BB(0x0040421d);
    /* 0040421d: mov edi, dword ptr [ecx + 0x4c] */ r_edi = R32((u32)(r_ecx+0x4cu));
    /* 00404220: mov dword ptr [esp + 8], edi */ W32((u32)(r_esp+0x8u), r_edi);
    /* 00404224: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404226: je 0x404377 */ if (fZ) goto L_00404377;
L_0040422c:; BB(0x0040422c);
    /* 0040422c: mov edi, dword ptr [ecx + 0x50] */ r_edi = R32((u32)(r_ecx+0x50u));
    /* 0040422f: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00404233: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404235: je 0x404377 */ if (fZ) goto L_00404377;
L_0040423b:; BB(0x0040423b);
    /* 0040423b: mov edi, dword ptr [ecx + 0x54] */ r_edi = R32((u32)(r_ecx+0x54u));
    /* 0040423e: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00404241: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404243: je 0x404377 */ if (fZ) goto L_00404377;
L_00404249:; BB(0x00404249);
    /* 00404249: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040424c: jne 0x4042a5 */ if (!fZ) goto L_004042a5;
L_0040424e:; BB(0x0040424e);
    /* 0040424e: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404251: je 0x404377 */ if (fZ) goto L_00404377;
L_00404257:; BB(0x00404257);
    /* 00404257: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040425a: je 0x404377 */ if (fZ) goto L_00404377;
L_00404260:; BB(0x00404260);
    /* 00404260: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404263: je 0x404377 */ if (fZ) goto L_00404377;
L_00404269:; BB(0x00404269);
    /* 00404269: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040426c: je 0x404377 */ if (fZ) goto L_00404377;
L_00404272:; BB(0x00404272);
    /* 00404272: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00404276: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404279: je 0x404377 */ if (fZ) goto L_00404377;
L_0040427f:; BB(0x0040427f);
    /* 0040427f: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00404283: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404286: je 0x404377 */ if (fZ) goto L_00404377;
L_0040428c:; BB(0x0040428c);
    /* 0040428c: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00404290: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404293: je 0x404377 */ if (fZ) goto L_00404377;
L_00404299:; BB(0x00404299);
    /* 00404299: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0040429c: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040429f: je 0x404377 */ if (fZ) goto L_00404377;
L_004042a5:; BB(0x004042a5);
    /* 004042a5: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004042a7: je 0x404377 */ if (fZ) goto L_00404377;
L_004042ad:; BB(0x004042ad);
    /* 004042ad: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004042af: je 0x404377 */ if (fZ) goto L_00404377;
L_004042b5:; BB(0x004042b5);
    /* 004042b5: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004042b7: je 0x404377 */ if (fZ) goto L_00404377;
L_004042bd:; BB(0x004042bd);
    /* 004042bd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004042bf: je 0x404377 */ if (fZ) goto L_00404377;
L_004042c5:; BB(0x004042c5);
    /* 004042c5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004042c7: je 0x404377 */ if (fZ) goto L_00404377;
L_004042cd:; BB(0x004042cd);
    /* 004042cd: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 004042d1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004042d3: je 0x404377 */ if (fZ) goto L_00404377;
L_004042d9:; BB(0x004042d9);
    /* 004042d9: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 004042dd: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004042df: je 0x404377 */ if (fZ) goto L_00404377;
L_004042e5:; BB(0x004042e5);
    /* 004042e5: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 004042e9: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004042eb: je 0x404377 */ if (fZ) goto L_00404377;
L_004042f1:; BB(0x004042f1);
    /* 004042f1: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 004042f4: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004042f6: je 0x404377 */ if (fZ) goto L_00404377;
L_004042fc:; BB(0x004042fc);
    /* 004042fc: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004042ff: jne 0x40433c */ if (!fZ) goto L_0040433c;
L_00404301:; BB(0x00404301);
    /* 00404301: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404304: je 0x404377 */ if (fZ) goto L_00404377;
L_0040430a:; BB(0x0040430a);
    /* 0040430a: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040430d: je 0x404377 */ if (fZ) goto L_00404377;
L_0040430f:; BB(0x0040430f);
    /* 0040430f: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404312: je 0x404377 */ if (fZ) goto L_00404377;
L_00404314:; BB(0x00404314);
    /* 00404314: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404317: je 0x404377 */ if (fZ) goto L_00404377;
L_00404319:; BB(0x00404319);
    /* 00404319: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 0040431d: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404320: je 0x404377 */ if (fZ) goto L_00404377;
L_00404322:; BB(0x00404322);
    /* 00404322: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00404326: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404329: je 0x404377 */ if (fZ) goto L_00404377;
L_0040432b:; BB(0x0040432b);
    /* 0040432b: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0040432f: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404332: je 0x404377 */ if (fZ) goto L_00404377;
L_00404334:; BB(0x00404334);
    /* 00404334: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 00404337: cmp edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040433a: je 0x404377 */ if (fZ) goto L_00404377;
L_0040433c:; BB(0x0040433c);
    /* 0040433c: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040433f: je 0x4043a7 */ if (fZ) goto L_004043a7;
L_00404341:; BB(0x00404341);
    /* 00404341: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404344: je 0x4043a7 */ if (fZ) goto L_004043a7;
L_00404346:; BB(0x00404346);
    /* 00404346: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404349: je 0x4043a7 */ if (fZ) goto L_004043a7;
L_0040434b:; BB(0x0040434b);
    /* 0040434b: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040434e: je 0x4043a7 */ if (fZ) goto L_004043a7;
L_00404350:; BB(0x00404350);
    /* 00404350: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404353: je 0x4043a7 */ if (fZ) goto L_004043a7;
L_00404355:; BB(0x00404355);
    /* 00404355: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00404359: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040435c: je 0x4043a7 */ if (fZ) goto L_004043a7;
L_0040435e:; BB(0x0040435e);
    /* 0040435e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00404362: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404365: je 0x4043a7 */ if (fZ) goto L_004043a7;
L_00404367:; BB(0x00404367);
    /* 00404367: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0040436b: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040436e: je 0x4043a7 */ if (fZ) goto L_004043a7;
L_00404370:; BB(0x00404370);
    /* 00404370: mov eax, edi */ r_eax = r_edi;
    /* 00404372: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404375: je 0x4043a7 */ if (fZ) goto L_004043a7;
L_00404377:; BB(0x00404377);
    /* 00404377: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 0040437a: mov dword ptr [ecx + 0x2c], 1 */ W32((u32)(r_ecx+0x2cu), 0x1u);
    /* 00404381: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404384: je 0x40439f */ if (fZ) goto L_0040439f;
L_00404386:; BB(0x00404386);
    /* 00404386: mov dword ptr [ecx + 0x1c], 1 */ W32((u32)(r_ecx+0x1cu), 0x1u);
    /* 0040438d: mov dword ptr [ecx + 0x60], 0 */ W32((u32)(r_ecx+0x60u), 0x0u);
    /* 00404394: mov eax, dword ptr [0x9a2da8] */ r_eax = R32((u32)(0x9a2da8u));
    /* 00404399: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040439b: je 0x40439f */ if (fZ) goto L_0040439f;
L_0040439d:; BB(0x0040439d);
    /* 0040439d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40439fu); call_ind(t); }
L_0040439f:; BB(0x0040439f);
    /* 0040439f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004043a2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004043a3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004043a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004043a5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004043a6: ret  */ FN_RET(0x004041d0); r_esp += 4; return;
L_004043a7:; BB(0x004043a7);
    /* 004043a7: mov eax, dword ptr [ecx + 0x34] */ r_eax = R32((u32)(r_ecx+0x34u));
    /* 004043aa: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004043ad: je 0x404425 */ if (fZ) goto L_00404425;
L_004043af:; BB(0x004043af);
    /* 004043af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004043b1:; BB(0x004043b1);
    /* 004043b1: mov edx, dword ptr [ecx + eax*8 + 0x38] */ r_edx = R32((u32)(r_ecx+r_eax*8+0x38u));
    /* 004043b5: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004043b8: je 0x4043f9 */ if (fZ) goto L_004043f9;
L_004043ba:; BB(0x004043ba);
    /* 004043ba: mov edx, dword ptr [ecx + eax*8 + 0x3c] */ r_edx = R32((u32)(r_ecx+r_eax*8+0x3cu));
    /* 004043be: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004043c1: je 0x4043cd */ if (fZ) goto L_004043cd;
L_004043c3:; BB(0x004043c3);
    /* 004043c3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004043c6: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004043c9: jl 0x4043b1 */ if ((fS!=fO)) goto L_004043b1;
L_004043cb:; BB(0x004043cb);
    /* 004043cb: jmp 0x404377 */ goto L_00404377;
L_004043cd:; BB(0x004043cd);
    /* 004043cd: mov dword ptr [ecx + 0x58], eax */ W32((u32)(r_ecx+0x58u), r_eax);
    /* 004043d0: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 004043d3: cmp eax, 0x10 */ {  u32 a = r_eax; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004043d6: je 0x4043f1 */ if (fZ) goto L_004043f1;
L_004043d8:; BB(0x004043d8);
    /* 004043d8: mov dword ptr [ecx + 0x1c], 0x10 */ W32((u32)(r_ecx+0x1cu), 0x10u);
    /* 004043df: mov dword ptr [ecx + 0x60], 0 */ W32((u32)(r_ecx+0x60u), 0x0u);
    /* 004043e6: mov eax, dword ptr [0x9a2e20] */ r_eax = R32((u32)(0x9a2e20u));
    /* 004043eb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004043ed: je 0x4043f1 */ if (fZ) goto L_004043f1;
L_004043ef:; BB(0x004043ef);
    /* 004043ef: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4043f1u); call_ind(t); }
L_004043f1:; BB(0x004043f1);
    /* 004043f1: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004043f4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004043f5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004043f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004043f7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004043f8: ret  */ FN_RET(0x004041d0); r_esp += 4; return;
L_004043f9:; BB(0x004043f9);
    /* 004043f9: mov dword ptr [ecx + 0x58], eax */ W32((u32)(r_ecx+0x58u), r_eax);
    /* 004043fc: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 004043ff: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404402: je 0x4043f1 */ if (fZ) goto L_004043f1;
L_00404404:; BB(0x00404404);
    /* 00404404: mov dword ptr [ecx + 0x1c], 0xf */ W32((u32)(r_ecx+0x1cu), 0xfu);
    /* 0040440b: mov dword ptr [ecx + 0x60], 0 */ W32((u32)(r_ecx+0x60u), 0x0u);
    /* 00404412: mov eax, dword ptr [0x9a2e18] */ r_eax = R32((u32)(0x9a2e18u));
    /* 00404417: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404419: je 0x4043f1 */ if (fZ) goto L_004043f1;
L_0040441b:; BB(0x0040441b);
    /* 0040441b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40441du); call_ind(t); }
    /* 0040441d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00404420: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00404421: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404422: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00404423: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00404424: ret  */ FN_RET(0x004041d0); r_esp += 4; return;
L_00404425:; BB(0x00404425);
    /* 00404425: mov eax, dword ptr [ecx + 0x1c] */ r_eax = R32((u32)(r_ecx+0x1cu));
    /* 00404428: cmp eax, 0xe */ {  u32 a = r_eax; u32 b = 0xeu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040442b: je 0x4043f1 */ if (fZ) goto L_004043f1;
L_0040442d:; BB(0x0040442d);
    /* 0040442d: mov dword ptr [ecx + 0x1c], 0xe */ W32((u32)(r_ecx+0x1cu), 0xeu);
    /* 00404434: mov dword ptr [ecx + 0x60], 0 */ W32((u32)(r_ecx+0x60u), 0x0u);
    /* 0040443b: mov eax, dword ptr [0x9a2e10] */ r_eax = R32((u32)(0x9a2e10u));
    /* 00404440: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404442: je 0x4043f1 */ if (fZ) goto L_004043f1;
L_00404444:; BB(0x00404444);
    /* 00404444: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x404446u); call_ind(t); }
    /* 00404446: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00404449: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040444a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0040444b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0040444c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0040444d: ret  */ FN_RET(0x004041d0); r_esp += 4; return;
}

void f_00404420(void)
{
    FN_ENTER(0x00404420);
    /* 00404420: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00404421: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404422: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00404423: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00404424: ret  */ FN_RET(0x00404420); r_esp += 4; return;
}

void f_00404450(void) /* sub_404450 */
{
    FN_ENTER(0x00404450);
    /* 00404450: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00404451: mov edi, ecx */ r_edi = r_ecx;
    /* 00404453: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 00404456: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00404458: je 0x4044db */ if (fZ) goto L_004044db;
L_0040445e:; BB(0x0040445e);
    /* 0040445e: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 00404465: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00404467: je 0x4044db */ if (fZ) goto L_004044db;
L_00404469:; BB(0x00404469);
    /* 00404469: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x40446eu); f_007365f4();
    /* 0040446e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404470: jne 0x4044a5 */ if (!fZ) goto L_004044a5;
L_00404472:; BB(0x00404472);
    /* 00404472: mov dword ptr [edi + 0x20], 1 */ W32((u32)(r_edi+0x20u), 0x1u);
    /* 00404479: mov ecx, edi */ r_ecx = r_edi;
    /* 0040447b: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x404480u); f_00404a34();
    /* 00404480: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 00404483: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00404486: je 0x4044a3 */ if (fZ) goto L_004044a3;
L_00404488:; BB(0x00404488);
    /* 00404488: mov dword ptr [edi + 0x1c], 1 */ W32((u32)(r_edi+0x1cu), 0x1u);
    /* 0040448f: mov dword ptr [edi + 0x60], 0 */ W32((u32)(r_edi+0x60u), 0x0u);
    /* 00404496: mov eax, dword ptr [0x9a2da8] */ r_eax = R32((u32)(0x9a2da8u));
    /* 0040449b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040449d: je 0x4044a3 */ if (fZ) goto L_004044a3;
L_0040449f:; BB(0x0040449f);
    /* 0040449f: mov ecx, edi */ r_ecx = r_edi;
    /* 004044a1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4044a3u); call_ind(t); }
L_004044a3:; BB(0x004044a3);
    /* 004044a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004044a4: ret  */ FN_RET(0x00404450); r_esp += 4; return;
L_004044a5:; BB(0x004044a5);
    /* 004044a5: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004044a8: jne 0x4044db */ if (!fZ) goto L_004044db;
L_004044aa:; BB(0x004044aa);
    /* 004044aa: mov dword ptr [edi + 0x30], 1 */ W32((u32)(r_edi+0x30u), 0x1u);
    /* 004044b1: mov ecx, edi */ r_ecx = r_edi;
    /* 004044b3: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x4044b8u); f_00404a34();
    /* 004044b8: mov eax, dword ptr [edi + 0x1c] */ r_eax = R32((u32)(r_edi+0x1cu));
    /* 004044bb: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004044be: je 0x4044db */ if (fZ) goto L_004044db;
L_004044c0:; BB(0x004044c0);
    /* 004044c0: mov dword ptr [edi + 0x1c], 0x17 */ W32((u32)(r_edi+0x1cu), 0x17u);
    /* 004044c7: mov dword ptr [edi + 0x60], 0 */ W32((u32)(r_edi+0x60u), 0x0u);
    /* 004044ce: mov eax, dword ptr [0x9a2e58] */ r_eax = R32((u32)(0x9a2e58u));
    /* 004044d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004044d5: je 0x4044db */ if (fZ) goto L_004044db;
L_004044d7:; BB(0x004044d7);
    /* 004044d7: mov ecx, edi */ r_ecx = r_edi;
    /* 004044d9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4044dbu); call_ind(t); }
L_004044db:; BB(0x004044db);
    /* 004044db: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004044dc: ret  */ FN_RET(0x00404450); r_esp += 4; return;
}

void f_004044e0(void) /* sub_4044E0 */
{
    FN_ENTER(0x004044e0);
    /* 004044e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004044e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004044e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004044e3: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004044e5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004044e7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004044e9: mov edi, ebp */ r_edi = r_ebp;
    /* 004044eb: mov ebp, eax */ r_ebp = r_eax;
    /* 004044ed: mov esi, edx */ r_esi = r_edx;
L_004044ef:; BB(0x004044ef);
    /* 004044ef: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 004044f4: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004044fa: lea ecx, [ebp + 0xaae75c] */ r_ecx = (u32)(r_ebp+0xaae75cu);
    /* 00404500: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00404501: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x404506u); f_007c1160();
    /* 00404506: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404508: je 0x40450f */ if (fZ) goto L_0040450f;
L_0040450a:; BB(0x0040450a);
    /* 0040450a: mov esi, 1 */ r_esi = 0x1u;
L_0040450f:; BB(0x0040450f);
    /* 0040450f: add ebp, 0x50 */ {  u32 a = r_ebp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00404512: cmp ebp, 0x140 */ {  u32 a = r_ebp; u32 b = 0x140u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00404518: jb 0x4044ef */ if (fC) goto L_004044ef;
L_0040451a:; BB(0x0040451a);
    /* 0040451a: mov edx, esi */ r_edx = r_esi;
    /* 0040451c: mov ebp, edi */ r_ebp = r_edi;
    /* 0040451e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00404520: je 0x404553 */ if (fZ) goto L_00404553;
L_00404522:; BB(0x00404522);
    /* 00404522: mov dword ptr [ebp + 0x30], 2 */ W32((u32)(r_ebp+0x30u), 0x2u);
    /* 00404529: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0040452b: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x404530u); f_00404a34();
    /* 00404530: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00404533: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00404536: je 0x404553 */ if (fZ) goto L_00404553;
L_00404538:; BB(0x00404538);
    /* 00404538: mov dword ptr [ebp + 0x1c], 0x17 */ W32((u32)(r_ebp+0x1cu), 0x17u);
    /* 0040453f: mov dword ptr [ebp + 0x60], 0 */ W32((u32)(r_ebp+0x60u), 0x0u);
    /* 00404546: mov eax, dword ptr [0x9a2e58] */ r_eax = R32((u32)(0x9a2e58u));
    /* 0040454b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0040454d: je 0x404553 */ if (fZ) goto L_00404553;
L_0040454f:; BB(0x0040454f);
    /* 0040454f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00404551: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x404553u); call_ind(t); }
L_00404553:; BB(0x00404553);
    /* 00404553: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404554: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00404555: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00404556: ret  */ FN_RET(0x004044e0); r_esp += 4; return;
}

void f_00404558(void) /* sub_404558 */
{
    FN_ENTER(0x00404558);
    /* 00404558: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00404559: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0040455b: mov ecx, dword ptr [0xa3a93c] */ r_ecx = R32((u32)(0xa3a93cu));
    /* 00404561: call 0x482250 */ r_esp -= 4; W32(r_esp, 0x404566u); f_00482250();
    /* 00404566: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00404568: jne 0x40456c */ if (!fZ) goto L_0040456c;
L_0040456a:; BB(0x0040456a);
    /* 0040456a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0040456b: ret  */ FN_RET(0x00404558); r_esp += 4; return;
L_0040456c:; BB(0x0040456c);
    /* 0040456c: mov ecx, dword ptr [0xa3a93c] */ r_ecx = R32((u32)(0xa3a93cu));
    /* 00404572: call 0x482488 */ r_esp -= 4; W32(r_esp, 0x404577u); f_00482488();
    /* 00404577: cmp eax, 0xf */ {  u32 a = r_eax; u32 b = 0xfu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040457a: jne 0x4045b6 */ if (!fZ) goto L_004045b6;
L_0040457c:; BB(0x0040457c);
    /* 0040457c: call 0x82d2f8 */ r_esp -= 4; W32(r_esp, 0x404581u); f_0082d2f8();
    /* 00404581: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404583: jne 0x40458a */ if (!fZ) goto L_0040458a;
L_00404585:; BB(0x00404585);
    /* 00404585: call 0x4045dc */ r_esp -= 4; W32(r_esp, 0x40458au); f_004045dc();
L_0040458a:; BB(0x0040458a);
    /* 0040458a: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0040458d: mov dword ptr [ebx + 0x30], 0 */ W32((u32)(r_ebx+0x30u), 0x0u);
    /* 00404594: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00404597: je 0x40456a */ if (fZ) goto L_0040456a;
L_00404599:; BB(0x00404599);
    /* 00404599: mov dword ptr [ebx + 0x1c], 0x17 */ W32((u32)(r_ebx+0x1cu), 0x17u);
    /* 004045a0: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 004045a7: mov eax, dword ptr [0x9a2e58] */ r_eax = R32((u32)(0x9a2e58u));
    /* 004045ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004045ae: je 0x40456a */ if (fZ) goto L_0040456a;
L_004045b0:; BB(0x004045b0);
    /* 004045b0: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004045b2: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4045b4u); call_ind(t); }
    /* 004045b4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004045b5: ret  */ FN_RET(0x00404558); r_esp += 4; return;
L_004045b6:; BB(0x004045b6);
    /* 004045b6: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004045b9: cmp eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004045bc: je 0x40456a */ if (fZ) goto L_0040456a;
L_004045be:; BB(0x004045be);
    /* 004045be: mov dword ptr [ebx + 0x1c], 0x19 */ W32((u32)(r_ebx+0x1cu), 0x19u);
    /* 004045c5: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 004045cc: mov eax, dword ptr [0x9a2e68] */ r_eax = R32((u32)(0x9a2e68u));
    /* 004045d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004045d3: je 0x40456a */ if (fZ) goto L_0040456a;
L_004045d5:; BB(0x004045d5);
    /* 004045d5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004045d7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4045d9u); call_ind(t); }
    /* 004045d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004045da: ret  */ FN_RET(0x00404558); r_esp += 4; return;
}

void f_004045dc(void) /* sub_4045DC */
{
    FN_ENTER(0x004045dc);
    /* 004045dc: mov eax, 0x1134 */ r_eax = 0x1134u;
    /* 004045e1: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x4045e6u); f_00858020();
    /* 004045e6: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 004045ed: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004045f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004045f1: push 0x8f87f0 */ { u32 v = 0x8f87f0u; r_esp -= 4; W32(r_esp, v); }
    /* 004045f6: call 0x82d3c0 */ r_esp -= 4; W32(r_esp, 0x4045fbu); f_0082d3c0();
    /* 004045fb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004045fe: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00404601: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404604: je 0x404630 */ if (fZ) goto L_00404630;
L_00404606:; BB(0x00404606);
    /* 00404606: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x40460bu); f_006dc358();
    /* 0040460b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040460e: je 0x404617 */ if (fZ) goto L_00404617;
L_00404610:; BB(0x00404610);
    /* 00404610: add esp, 0x1134 */ {  u32 a = r_esp; u32 b = 0x1134u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00404616: ret  */ FN_RET(0x004045dc); r_esp += 4; return;
L_00404617:; BB(0x00404617);
    /* 00404617: push 0x8f8814 */ { u32 v = 0x8f8814u; r_esp -= 4; W32(r_esp, v); }
    /* 0040461c: push 0x8f8808 */ { u32 v = 0x8f8808u; r_esp -= 4; W32(r_esp, v); }
    /* 00404621: call 0x82d564 */ r_esp -= 4; W32(r_esp, 0x404626u); f_0082d564();
    /* 00404626: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404629: add esp, 0x1134 */ {  u32 a = r_esp; u32 b = 0x1134u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0040462f: ret  */ FN_RET(0x004045dc); r_esp += 4; return;
L_00404630:; BB(0x00404630);
    /* 00404630: push 0xa46b9c */ { u32 v = 0xa46b9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00404635: push 0x8f8800 */ { u32 v = 0x8f8800u; r_esp -= 4; W32(r_esp, v); }
    /* 0040463a: call 0x82d564 */ r_esp -= 4; W32(r_esp, 0x40463fu); f_0082d564();
    /* 0040463f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404642: mov eax, 0xa46bcc */ r_eax = 0xa46bccu;
    /* 00404647: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00404649: mov ecx, dword ptr [eax + 4] */ r_ecx = R32((u32)(r_eax+0x4u));
    /* 0040464c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00404650: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00404653: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00404657: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 0040465b: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 0040465e: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 00404662: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 00404665: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00404669: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 0040466c: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00404670: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 00404673: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00404677: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 0040467a: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0040467e: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 00404681: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00404685: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 00404688: mov dword ptr [esp + 0x28], edx */ W32((u32)(r_esp+0x28u), r_edx);
    /* 0040468c: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 0040468f: mov eax, dword ptr [eax + 0x2c] */ r_eax = R32((u32)(r_eax+0x2cu));
    /* 00404692: mov dword ptr [esp + 0x2c], edx */ W32((u32)(r_esp+0x2cu), r_edx);
    /* 00404696: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 0040469a: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 0040469e: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004046a0: push 0xa46b9c */ { u32 v = 0xa46b9cu; r_esp -= 4; W32(r_esp, v); }
    /* 004046a5: call 0x763fd0 */ r_esp -= 4; W32(r_esp, 0x4046aau); f_00763fd0();
    /* 004046aa: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 004046ae: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 004046b2: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004046b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004046b5: call 0x763d08 */ r_esp -= 4; W32(r_esp, 0x4046bau); f_00763d08();
    /* 004046ba: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 004046be: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 004046c0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004046c1: push 0x8f8808 */ { u32 v = 0x8f8808u; r_esp -= 4; W32(r_esp, v); }
    /* 004046c6: call 0x82d628 */ r_esp -= 4; W32(r_esp, 0x4046cbu); f_0082d628();
    /* 004046cb: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004046ce: jmp 0x404606 */ goto L_00404606;
}

void f_004046d4(void) /* sub_4046D4 */
{
    FN_ENTER(0x004046d4);
    /* 004046d4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004046d5: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004046d8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004046da: mov eax, dword ptr [ebp + 0x6c] */ r_eax = R32((u32)(r_ebp+0x6cu));
    /* 004046dd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004046df: je 0x40475b */ if (fZ) goto L_0040475b;
L_004046e1:; BB(0x004046e1);
    /* 004046e1: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 004046e7: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 004046ec: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4046f1u); f_007c1160();
    /* 004046f1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004046f3: je 0x404704 */ if (fZ) goto L_00404704;
L_004046f5:; BB(0x004046f5);
    /* 004046f5: push 0xc0c00000 */ { u32 v = 0xc0c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004046fa: mov ecx, dword ptr [ebp + 0x6c] */ r_ecx = R32((u32)(r_ebp+0x6cu));
    /* 004046fd: call 0x73c554 */ r_esp -= 4; W32(r_esp, 0x404702u); f_0073c554();
    /* 00404702: jmp 0x40475b */ goto L_0040475b;
L_00404704:; BB(0x00404704);
    /* 00404704: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 0040470a: mov ecx, 0xaae75c */ r_ecx = 0xaae75cu;
    /* 0040470f: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x404714u); f_007c1160();
    /* 00404714: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404716: je 0x404727 */ if (fZ) goto L_00404727;
L_00404718:; BB(0x00404718);
    /* 00404718: push 0x40c00000 */ { u32 v = 0x40c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 0040471d: mov ecx, dword ptr [ebp + 0x6c] */ r_ecx = R32((u32)(r_ebp+0x6cu));
    /* 00404720: call 0x73c554 */ r_esp -= 4; W32(r_esp, 0x404725u); f_0073c554();
    /* 00404725: jmp 0x40475b */ goto L_0040475b;
L_00404727:; BB(0x00404727);
    /* 00404727: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00404729: call 0x7bfe60 */ r_esp -= 4; W32(r_esp, 0x40472eu); f_007bfe60();
    /* 0040472e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040472f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404731: je 0x404742 */ if (fZ) goto L_00404742;
L_00404733:; BB(0x00404733);
    /* 00404733: push 0xc30c0000 */ { u32 v = 0xc30c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00404738: mov ecx, dword ptr [ebp + 0x6c] */ r_ecx = R32((u32)(r_ebp+0x6cu));
    /* 0040473b: call 0x73c554 */ r_esp -= 4; W32(r_esp, 0x404740u); f_0073c554();
    /* 00404740: jmp 0x40475b */ goto L_0040475b;
L_00404742:; BB(0x00404742);
    /* 00404742: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00404744: call 0x7bfe60 */ r_esp -= 4; W32(r_esp, 0x404749u); f_007bfe60();
    /* 00404749: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0040474a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040474c: je 0x40475b */ if (fZ) goto L_0040475b;
L_0040474e:; BB(0x0040474e);
    /* 0040474e: push 0x430c0000 */ { u32 v = 0x430c0000u; r_esp -= 4; W32(r_esp, v); }
    /* 00404753: mov ecx, dword ptr [ebp + 0x6c] */ r_ecx = R32((u32)(r_ebp+0x6cu));
    /* 00404756: call 0x73c554 */ r_esp -= 4; W32(r_esp, 0x40475bu); f_0073c554();
L_0040475b:; BB(0x0040475b);
    /* 0040475b: mov ecx, dword ptr [ebp + 0x1284] */ r_ecx = R32((u32)(r_ebp+0x1284u));
    /* 00404761: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404763: je 0x4047aa */ if (fZ) goto L_004047aa;
L_00404765:; BB(0x00404765);
    /* 00404765: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00404767: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00404769: jne 0x404772 */ if (!fZ) goto L_00404772;
L_0040476b:; BB(0x0040476b);
    /* 0040476b: call 0x70c40c */ r_esp -= 4; W32(r_esp, 0x404770u); f_0070c40c();
    /* 00404770: jmp 0x404793 */ goto L_00404793;
L_00404772:; BB(0x00404772);
    /* 00404772: mov eax, dword ptr [0xa3a938] */ r_eax = R32((u32)(0xa3a938u));
    /* 00404777: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404779: je 0x404798 */ if (fZ) goto L_00404798;
L_0040477b:; BB(0x0040477b);
    /* 0040477b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040477d: je 0x404786 */ if (fZ) goto L_00404786;
L_0040477f:; BB(0x0040477f);
    /* 0040477f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00404781: call 0x402a98 */ r_esp -= 4; W32(r_esp, 0x404786u); f_00402a98();
L_00404786:; BB(0x00404786);
    /* 00404786: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00404788: mov dword ptr [0xa3a920], eax */ W32((u32)(0xa3a920u), r_eax);
    /* 0040478d: mov dword ptr [ebp + 0x1284], eax */ W32((u32)(r_ebp+0x1284u), r_eax);
L_00404793:; BB(0x00404793);
    /* 00404793: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00404796: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404797: ret  */ FN_RET(0x004046d4); r_esp += 4; return;
L_00404798:; BB(0x00404798);
    /* 00404798: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0040479a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0040479b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0040479d: call 0x40590c */ r_esp -= 4; W32(r_esp, 0x4047a2u); f_0040590c();
    /* 004047a2: mov ecx, dword ptr [ebp + 0x1284] */ r_ecx = R32((u32)(r_ebp+0x1284u));
    /* 004047a8: jmp 0x40477b */ goto L_0040477b;
L_004047aa:; BB(0x004047aa);
    /* 004047aa: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 004047ad: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 004047b1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004047b3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004047b5: mov edi, ebp */ r_edi = r_ebp;
    /* 004047b7: mov ebp, eax */ r_ebp = r_eax;
    /* 004047b9: mov esi, edx */ r_esi = r_edx;
L_004047bb:; BB(0x004047bb);
    /* 004047bb: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 004047c0: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004047c6: lea ecx, [ebp + 0xaae75c] */ r_ecx = (u32)(r_ebp+0xaae75cu);
    /* 004047cc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004047cd: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4047d2u); f_007c1160();
    /* 004047d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004047d4: je 0x4047db */ if (fZ) goto L_004047db;
L_004047d6:; BB(0x004047d6);
    /* 004047d6: mov esi, 1 */ r_esi = 0x1u;
L_004047db:; BB(0x004047db);
    /* 004047db: add ebp, 0x50 */ {  u32 a = r_ebp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 004047de: cmp ebp, 0x140 */ {  u32 a = r_ebp; u32 b = 0x140u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 004047e4: jb 0x4047bb */ if (fC) goto L_004047bb;
L_004047e6:; BB(0x004047e6);
    /* 004047e6: mov edx, esi */ r_edx = r_esi;
    /* 004047e8: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 004047eb: mov ebp, edi */ r_ebp = r_edi;
    /* 004047ed: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 004047f1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004047f3: je 0x404793 */ if (fZ) goto L_00404793;
L_004047f5:; BB(0x004047f5);
    /* 004047f5: mov eax, dword ptr [ebp + 0x128c] */ r_eax = R32((u32)(r_ebp+0x128cu));
    /* 004047fb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004047fd: jne 0x4048d4 */ if (!fZ) goto L_004048d4;
L_00404803:; BB(0x00404803);
    /* 00404803: mov eax, dword ptr [0xa3a940] */ r_eax = R32((u32)(0xa3a940u));
    /* 00404808: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040480a: je 0x404870 */ if (fZ) goto L_00404870;
L_0040480c:; BB(0x0040480c);
    /* 0040480c: mov edx, dword ptr [ebp + 0x1288] */ r_edx = R32((u32)(r_ebp+0x1288u));
    /* 00404812: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404814: je 0x40482d */ if (fZ) goto L_0040482d;
L_00404816:; BB(0x00404816);
    /* 00404816: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040481a: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0040481f: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00404823: mov dword ptr [ebp + 0x1288], 0 */ W32((u32)(r_ebp+0x1288u), 0x0u);
L_0040482d:; BB(0x0040482d);
    /* 0040482d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0040482f: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x404834u); f_00404a34();
    /* 00404834: call 0x5bbf1c */ r_esp -= 4; W32(r_esp, 0x404839u); f_005bbf1c();
    /* 00404839: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 0040483c: mov dword ptr [ebp + 0x30], 1 */ W32((u32)(r_ebp+0x30u), 0x1u);
    /* 00404843: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404846: je 0x404793 */ if (fZ) goto L_00404793;
L_0040484c:; BB(0x0040484c);
    /* 0040484c: mov dword ptr [ebp + 0x1c], 0x17 */ W32((u32)(r_ebp+0x1cu), 0x17u);
    /* 00404853: mov dword ptr [ebp + 0x60], 0 */ W32((u32)(r_ebp+0x60u), 0x0u);
    /* 0040485a: mov eax, dword ptr [0x9a2e58] */ r_eax = R32((u32)(0x9a2e58u));
    /* 0040485f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404861: je 0x404793 */ if (fZ) goto L_00404793;
L_00404867:; BB(0x00404867);
    /* 00404867: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00404869: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x40486bu); call_ind(t); }
    /* 0040486b: jmp 0x404793 */ goto L_00404793;
L_00404870:; BB(0x00404870);
    /* 00404870: mov edx, dword ptr [ebp + 0x1288] */ r_edx = R32((u32)(r_ebp+0x1288u));
    /* 00404876: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404878: je 0x404891 */ if (fZ) goto L_00404891;
L_0040487a:; BB(0x0040487a);
    /* 0040487a: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 0040487e: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00404883: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 00404887: mov dword ptr [ebp + 0x1288], 0 */ W32((u32)(r_ebp+0x1288u), 0x0u);
L_00404891:; BB(0x00404891);
    /* 00404891: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00404893: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x404898u); f_00404a34();
    /* 00404898: call 0x5bbf1c */ r_esp -= 4; W32(r_esp, 0x40489du); f_005bbf1c();
    /* 0040489d: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 004048a0: mov dword ptr [ebp + 0x30], 0 */ W32((u32)(r_ebp+0x30u), 0x0u);
    /* 004048a7: cmp eax, 0x18 */ {  u32 a = r_eax; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004048aa: je 0x404793 */ if (fZ) goto L_00404793;
L_004048b0:; BB(0x004048b0);
    /* 004048b0: mov dword ptr [ebp + 0x1c], 0x18 */ W32((u32)(r_ebp+0x1cu), 0x18u);
    /* 004048b7: mov dword ptr [ebp + 0x60], 0 */ W32((u32)(r_ebp+0x60u), 0x0u);
    /* 004048be: mov eax, dword ptr [0x9a2e60] */ r_eax = R32((u32)(0x9a2e60u));
    /* 004048c3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004048c5: je 0x404793 */ if (fZ) goto L_00404793;
L_004048cb:; BB(0x004048cb);
    /* 004048cb: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004048cd: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4048cfu); call_ind(t); }
    /* 004048cf: jmp 0x404793 */ goto L_00404793;
L_004048d4:; BB(0x004048d4);
    /* 004048d4: call 0x5bbf1c */ r_esp -= 4; W32(r_esp, 0x4048d9u); f_005bbf1c();
    /* 004048d9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004048db: call 0x7a60dc */ r_esp -= 4; W32(r_esp, 0x4048e0u); f_007a60dc();
    /* 004048e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004048e1: jmp 0x404793 */ goto L_00404793;
}

void f_004048e8(void) /* sub_4048E8 */
{
    FN_ENTER(0x004048e8);
    /* 004048e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004048e9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004048ea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004048eb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004048ec: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004048ee: mov eax, dword ptr [ebx + 0x78] */ r_eax = R32((u32)(r_ebx+0x78u));
    /* 004048f1: mov ecx, dword ptr [eax + 0x81c] */ r_ecx = R32((u32)(r_eax+0x81cu));
    /* 004048f7: movzx edx, word ptr [ecx + 0x84] */ r_edx = (u32)R16((u32)(r_ecx+0x84u));
    /* 004048fe: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00404901: je 0x40490a */ if (fZ) goto L_0040490a;
L_00404903:; BB(0x00404903);
    /* 00404903: mov eax, 1 */ r_eax = 0x1u;
    /* 00404908: jmp 0x40490c */ goto L_0040490c;
L_0040490a:; BB(0x0040490a);
    /* 0040490a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_0040490c:; BB(0x0040490c);
    /* 0040490c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040490e: je 0x4049b3 */ if (fZ) goto L_004049b3;
L_00404914:; BB(0x00404914);
    /* 00404914: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x404919u); f_007365f4();
    /* 00404919: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0040491c: je 0x4049fb */ if (fZ) goto L_004049fb;
L_00404922:; BB(0x00404922);
    /* 00404922: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00404925: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00404927: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00404929: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040492b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040492d: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0040492f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00404931: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00404933: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00404935: lea ebp, [ecx + ecx] */ r_ebp = (u32)(r_ecx+r_ecx);
    /* 00404938: mov esi, 0xa435e0 */ r_esi = 0xa435e0u;
    /* 0040493d: lea edi, [ebp + ebp + 0xa3b360] */ r_edi = (u32)(r_ebp+r_ebp+0xa3b360u);
L_00404944:; BB(0x00404944);
    /* 00404944: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00404946: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00404949: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 0040494b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0040494e: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00404950: jne 0x404944 */ if (!fZ) goto L_00404944;
L_00404952:; BB(0x00404952);
    /* 00404952: mov eax, dword ptr [ecx*4 + 0xa3b3e0] */ r_eax = R32((u32)(r_ecx*4+0xa3b3e0u));
    /* 00404959: mov dword ptr [0xa43674], eax */ W32((u32)(0xa43674u), r_eax);
    /* 0040495e: lea edi, [ebp + ebp + 0xa3b3e4] */ r_edi = (u32)(r_ebp+r_ebp+0xa3b3e4u);
    /* 00404965: mov esi, 0xa43560 */ r_esi = 0xa43560u;
L_0040496a:; BB(0x0040496a);
    /* 0040496a: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 0040496c: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0040496f: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 00404971: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00404974: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00404976: jne 0x40496a */ if (!fZ) goto L_0040496a;
L_00404978:; BB(0x00404978);
    /* 00404978: mov eax, dword ptr [ecx*4 + 0xa3b464] */ r_eax = R32((u32)(r_ecx*4+0xa3b464u));
    /* 0040497f: mov dword ptr [0xa43670], eax */ W32((u32)(0xa43670u), r_eax);
    /* 00404984: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00404986: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x40498bu); f_00404a34();
    /* 0040498b: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0040498e: cmp eax, 0x1a */ {  u32 a = r_eax; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00404991: je 0x4049ae */ if (fZ) goto L_004049ae;
L_00404993:; BB(0x00404993);
    /* 00404993: mov dword ptr [ebx + 0x1c], 0x1a */ W32((u32)(r_ebx+0x1cu), 0x1au);
    /* 0040499a: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 004049a1: mov eax, dword ptr [0x9a2e70] */ r_eax = R32((u32)(0x9a2e70u));
    /* 004049a6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004049a8: je 0x4049ae */ if (fZ) goto L_004049ae;
L_004049aa:; BB(0x004049aa);
    /* 004049aa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004049ac: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4049aeu); call_ind(t); }
L_004049ae:; BB(0x004049ae);
    /* 004049ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004049af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004049b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004049b1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004049b2: ret  */ FN_RET(0x004048e8); r_esp += 4; return;
L_004049b3:; BB(0x004049b3);
    /* 004049b3: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004049b6: je 0x4049bf */ if (fZ) goto L_004049bf;
L_004049b8:; BB(0x004049b8);
    /* 004049b8: mov eax, 1 */ r_eax = 0x1u;
    /* 004049bd: jmp 0x4049c1 */ goto L_004049c1;
L_004049bf:; BB(0x004049bf);
    /* 004049bf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004049c1:; BB(0x004049c1);
    /* 004049c1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004049c3: je 0x4049ae */ if (fZ) goto L_004049ae;
L_004049c5:; BB(0x004049c5);
    /* 004049c5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004049c7: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x4049ccu); f_00404a34();
    /* 004049cc: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 004049cf: mov dword ptr [ebx + 0x30], 1 */ W32((u32)(r_ebx+0x30u), 0x1u);
    /* 004049d6: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004049d9: je 0x4049f6 */ if (fZ) goto L_004049f6;
L_004049db:; BB(0x004049db);
    /* 004049db: mov dword ptr [ebx + 0x1c], 0x17 */ W32((u32)(r_ebx+0x1cu), 0x17u);
    /* 004049e2: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 004049e9: mov eax, dword ptr [0x9a2e58] */ r_eax = R32((u32)(0x9a2e58u));
    /* 004049ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004049f0: je 0x4049f6 */ if (fZ) goto L_004049f6;
L_004049f2:; BB(0x004049f2);
    /* 004049f2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004049f4: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x4049f6u); call_ind(t); }
L_004049f6:; BB(0x004049f6);
    /* 004049f6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004049f7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004049f8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004049f9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004049fa: ret  */ FN_RET(0x004048e8); r_esp += 4; return;
L_004049fb:; BB(0x004049fb);
    /* 004049fb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004049fd: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x404a02u); f_00404a34();
    /* 00404a02: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 00404a05: mov dword ptr [ebx + 0x30], 1 */ W32((u32)(r_ebx+0x30u), 0x1u);
    /* 00404a0c: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00404a0f: je 0x404a2c */ if (fZ) goto L_00404a2c;
L_00404a11:; BB(0x00404a11);
    /* 00404a11: mov dword ptr [ebx + 0x1c], 0x17 */ W32((u32)(r_ebx+0x1cu), 0x17u);
    /* 00404a18: mov dword ptr [ebx + 0x60], 0 */ W32((u32)(r_ebx+0x60u), 0x0u);
    /* 00404a1f: mov eax, dword ptr [0x9a2e58] */ r_eax = R32((u32)(0x9a2e58u));
    /* 00404a24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00404a26: je 0x404a2c */ if (fZ) goto L_00404a2c;
L_00404a28:; BB(0x00404a28);
    /* 00404a28: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00404a2a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x404a2cu); call_ind(t); }
L_00404a2c:; BB(0x00404a2c);
    /* 00404a2c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00404a2d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404a2e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00404a2f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00404a30: ret  */ FN_RET(0x004048e8); r_esp += 4; return;
}

void f_00404a34(void) /* sub_404A34 */
{
    FN_ENTER(0x00404a34);
    /* 00404a34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00404a35: mov edi, ecx */ r_edi = r_ecx;
    /* 00404a37: mov ecx, dword ptr [edi + 0x74] */ r_ecx = R32((u32)(r_edi+0x74u));
    /* 00404a3a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404a3c: je 0x404a54 */ if (fZ) goto L_00404a54;
L_00404a3e:; BB(0x00404a3e);
    /* 00404a3e: je 0x404a46 */ if (fZ) goto L_00404a46;
L_00404a40:; BB(0x00404a40);
    /* 00404a40: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00404a42: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00404a44: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x404a46u); call_ind(t); }
L_00404a46:; BB(0x00404a46);
    /* 00404a46: mov dword ptr [edi + 0x74], 0 */ W32((u32)(r_edi+0x74u), 0x0u);
    /* 00404a4d: mov dword ptr [edi + 0x7c], 7 */ W32((u32)(r_edi+0x7cu), 0x7u);
L_00404a54:; BB(0x00404a54);
    /* 00404a54: mov ecx, dword ptr [edi + 0x6c] */ r_ecx = R32((u32)(r_edi+0x6cu));
    /* 00404a57: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404a59: je 0x404a6e */ if (fZ) goto L_00404a6e;
L_00404a5b:; BB(0x00404a5b);
    /* 00404a5b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x404a60u); f_007127b0();
    /* 00404a60: mov dword ptr [edi + 0x6c], 0 */ W32((u32)(r_edi+0x6cu), 0x0u);
    /* 00404a67: mov dword ptr [edi + 0x7c], 7 */ W32((u32)(r_edi+0x7cu), 0x7u);
L_00404a6e:; BB(0x00404a6e);
    /* 00404a6e: mov ecx, dword ptr [edi + 0x70] */ r_ecx = R32((u32)(r_edi+0x70u));
    /* 00404a71: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404a73: je 0x404a88 */ if (fZ) goto L_00404a88;
L_00404a75:; BB(0x00404a75);
    /* 00404a75: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x404a7au); f_007127b0();
    /* 00404a7a: mov dword ptr [edi + 0x70], 0 */ W32((u32)(r_edi+0x70u), 0x0u);
    /* 00404a81: mov dword ptr [edi + 0x7c], 7 */ W32((u32)(r_edi+0x7cu), 0x7u);
L_00404a88:; BB(0x00404a88);
    /* 00404a88: mov ecx, dword ptr [edi + 0x78] */ r_ecx = R32((u32)(r_edi+0x78u));
    /* 00404a8b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00404a8d: je 0x404aa5 */ if (fZ) goto L_00404aa5;
L_00404a8f:; BB(0x00404a8f);
    /* 00404a8f: je 0x404a97 */ if (fZ) goto L_00404a97;
L_00404a91:; BB(0x00404a91);
    /* 00404a91: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00404a93: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00404a95: call dword ptr [eax] */ { u32 t = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, 0x404a97u); call_ind(t); }
L_00404a97:; BB(0x00404a97);
    /* 00404a97: mov dword ptr [edi + 0x78], 0 */ W32((u32)(r_edi+0x78u), 0x0u);
    /* 00404a9e: mov dword ptr [edi + 0x7c], 7 */ W32((u32)(r_edi+0x7cu), 0x7u);
L_00404aa5:; BB(0x00404aa5);
    /* 00404aa5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00404aa6: ret  */ FN_RET(0x00404a34); r_esp += 4; return;
}

void f_00404adc(void) /* sub_404ADC */
{
    FN_ENTER(0x00404adc);
    /* 00404adc: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00404ae0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00404ae1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00404ae2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404ae3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00404ae4: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00404ae7: mov esi, eax */ r_esi = r_eax;
    /* 00404ae9: mov ebp, dword ptr [esi] */ r_ebp = R32((u32)(r_esi));
    /* 00404aeb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404aed: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404af3:; BB(0x00404af3);
    /* 00404af3: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 00404af6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404af8: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404afe:; BB(0x00404afe);
    /* 00404afe: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00404b01: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b03: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404b09:; BB(0x00404b09);
    /* 00404b09: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 00404b0c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b0e: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404b14:; BB(0x00404b14);
    /* 00404b14: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 00404b17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b19: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404b1f:; BB(0x00404b1f);
    /* 00404b1f: mov edi, dword ptr [esi + 0x14] */ r_edi = R32((u32)(r_esi+0x14u));
    /* 00404b22: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00404b26: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b28: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404b2e:; BB(0x00404b2e);
    /* 00404b2e: mov edi, dword ptr [esi + 0x18] */ r_edi = R32((u32)(r_esi+0x18u));
    /* 00404b31: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00404b35: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b37: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404b3d:; BB(0x00404b3d);
    /* 00404b3d: mov edi, dword ptr [esi + 0x1c] */ r_edi = R32((u32)(r_esi+0x1cu));
    /* 00404b40: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00404b43: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b45: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404b4b:; BB(0x00404b4b);
    /* 00404b4b: mov esi, dword ptr [esi + 0x20] */ r_esi = R32((u32)(r_esi+0x20u));
    /* 00404b4e: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00404b52: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b54: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404b5a:; BB(0x00404b5a);
    /* 00404b5a: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b5d: jne 0x404bb5 */ if (!fZ) goto L_00404bb5;
L_00404b5f:; BB(0x00404b5f);
    /* 00404b5f: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b62: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404b68:; BB(0x00404b68);
    /* 00404b68: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b6b: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404b71:; BB(0x00404b71);
    /* 00404b71: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b74: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404b7a:; BB(0x00404b7a);
    /* 00404b7a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b7d: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404b83:; BB(0x00404b83);
    /* 00404b83: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00404b87: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b8a: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404b90:; BB(0x00404b90);
    /* 00404b90: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00404b94: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b97: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404b9d:; BB(0x00404b9d);
    /* 00404b9d: mov esi, edi */ r_esi = r_edi;
    /* 00404b9f: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404ba2: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404ba8:; BB(0x00404ba8);
    /* 00404ba8: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00404bac: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404baf: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404bb5:; BB(0x00404bb5);
    /* 00404bb5: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404bb7: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404bbd:; BB(0x00404bbd);
    /* 00404bbd: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404bbf: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404bc5:; BB(0x00404bc5);
    /* 00404bc5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404bc7: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404bcd:; BB(0x00404bcd);
    /* 00404bcd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404bcf: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404bd5:; BB(0x00404bd5);
    /* 00404bd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404bd7: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404bdd:; BB(0x00404bdd);
    /* 00404bdd: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00404be1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404be3: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404be9:; BB(0x00404be9);
    /* 00404be9: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00404bed: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404bef: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404bf5:; BB(0x00404bf5);
    /* 00404bf5: mov esi, edi */ r_esi = r_edi;
    /* 00404bf7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404bf9: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404bff:; BB(0x00404bff);
    /* 00404bff: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00404c03: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c05: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404c0b:; BB(0x00404c0b);
    /* 00404c0b: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c0e: jne 0x404c4e */ if (!fZ) goto L_00404c4e;
L_00404c10:; BB(0x00404c10);
    /* 00404c10: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c13: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404c19:; BB(0x00404c19);
    /* 00404c19: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c1c: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404c22:; BB(0x00404c22);
    /* 00404c22: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c25: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404c27:; BB(0x00404c27);
    /* 00404c27: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c2a: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404c2c:; BB(0x00404c2c);
    /* 00404c2c: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00404c30: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c33: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404c35:; BB(0x00404c35);
    /* 00404c35: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00404c39: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c3c: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404c3e:; BB(0x00404c3e);
    /* 00404c3e: mov esi, edi */ r_esi = r_edi;
    /* 00404c40: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c43: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404c45:; BB(0x00404c45);
    /* 00404c45: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00404c49: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c4c: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404c4e:; BB(0x00404c4e);
    /* 00404c4e: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c51: jne 0x404c91 */ if (!fZ) goto L_00404c91;
L_00404c53:; BB(0x00404c53);
    /* 00404c53: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c56: jne 0x404c91 */ if (!fZ) goto L_00404c91;
L_00404c58:; BB(0x00404c58);
    /* 00404c58: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c5b: jne 0x404c91 */ if (!fZ) goto L_00404c91;
L_00404c5d:; BB(0x00404c5d);
    /* 00404c5d: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c60: jne 0x404c91 */ if (!fZ) goto L_00404c91;
L_00404c62:; BB(0x00404c62);
    /* 00404c62: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c65: jne 0x404c91 */ if (!fZ) goto L_00404c91;
L_00404c67:; BB(0x00404c67);
    /* 00404c67: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00404c6b: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c6e: jne 0x404c91 */ if (!fZ) goto L_00404c91;
L_00404c70:; BB(0x00404c70);
    /* 00404c70: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00404c74: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c77: jne 0x404c91 */ if (!fZ) goto L_00404c91;
L_00404c79:; BB(0x00404c79);
    /* 00404c79: mov eax, edi */ r_eax = r_edi;
    /* 00404c7b: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c7e: jne 0x404c91 */ if (!fZ) goto L_00404c91;
L_00404c80:; BB(0x00404c80);
    /* 00404c80: mov eax, esi */ r_eax = r_esi;
    /* 00404c82: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c85: jne 0x404c91 */ if (!fZ) goto L_00404c91;
L_00404c87:; BB(0x00404c87);
    /* 00404c87: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00404c89: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00404c8c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00404c8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404c8e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00404c8f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00404c90: ret  */ FN_RET(0x00404adc); r_esp += 4; return;
L_00404c91:; BB(0x00404c91);
    /* 00404c91: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c94: je 0x404c87 */ if (fZ) goto L_00404c87;
L_00404c96:; BB(0x00404c96);
    /* 00404c96: mov eax, 1 */ r_eax = 0x1u;
    /* 00404c9b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00404c9e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00404c9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404ca0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00404ca1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00404ca2: ret  */ FN_RET(0x00404adc); r_esp += 4; return;
}

void f_00404ae0(void)
{
    FN_ENTER(0x00404ae0);
    /* 00404ae0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00404ae1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00404ae2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404ae3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00404ae4: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00404ae7: mov esi, eax */ r_esi = r_eax;
    /* 00404ae9: mov ebp, dword ptr [esi] */ r_ebp = R32((u32)(r_esi));
    /* 00404aeb: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404aed: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404af3:; BB(0x00404af3);
    /* 00404af3: mov ebx, dword ptr [esi + 4] */ r_ebx = R32((u32)(r_esi+0x4u));
    /* 00404af6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404af8: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404afe:; BB(0x00404afe);
    /* 00404afe: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00404b01: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b03: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404b09:; BB(0x00404b09);
    /* 00404b09: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 00404b0c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b0e: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404b14:; BB(0x00404b14);
    /* 00404b14: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 00404b17: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b19: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404b1f:; BB(0x00404b1f);
    /* 00404b1f: mov edi, dword ptr [esi + 0x14] */ r_edi = R32((u32)(r_esi+0x14u));
    /* 00404b22: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00404b26: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b28: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404b2e:; BB(0x00404b2e);
    /* 00404b2e: mov edi, dword ptr [esi + 0x18] */ r_edi = R32((u32)(r_esi+0x18u));
    /* 00404b31: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00404b35: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b37: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404b3d:; BB(0x00404b3d);
    /* 00404b3d: mov edi, dword ptr [esi + 0x1c] */ r_edi = R32((u32)(r_esi+0x1cu));
    /* 00404b40: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00404b43: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b45: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404b4b:; BB(0x00404b4b);
    /* 00404b4b: mov esi, dword ptr [esi + 0x20] */ r_esi = R32((u32)(r_esi+0x20u));
    /* 00404b4e: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00404b52: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b54: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404b5a:; BB(0x00404b5a);
    /* 00404b5a: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b5d: jne 0x404bb5 */ if (!fZ) goto L_00404bb5;
L_00404b5f:; BB(0x00404b5f);
    /* 00404b5f: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b62: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404b68:; BB(0x00404b68);
    /* 00404b68: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b6b: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404b71:; BB(0x00404b71);
    /* 00404b71: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b74: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404b7a:; BB(0x00404b7a);
    /* 00404b7a: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b7d: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404b83:; BB(0x00404b83);
    /* 00404b83: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00404b87: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b8a: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404b90:; BB(0x00404b90);
    /* 00404b90: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00404b94: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404b97: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404b9d:; BB(0x00404b9d);
    /* 00404b9d: mov esi, edi */ r_esi = r_edi;
    /* 00404b9f: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404ba2: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404ba8:; BB(0x00404ba8);
    /* 00404ba8: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00404bac: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404baf: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404bb5:; BB(0x00404bb5);
    /* 00404bb5: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404bb7: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404bbd:; BB(0x00404bbd);
    /* 00404bbd: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404bbf: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404bc5:; BB(0x00404bc5);
    /* 00404bc5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404bc7: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404bcd:; BB(0x00404bcd);
    /* 00404bcd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404bcf: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404bd5:; BB(0x00404bd5);
    /* 00404bd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404bd7: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404bdd:; BB(0x00404bdd);
    /* 00404bdd: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00404be1: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404be3: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404be9:; BB(0x00404be9);
    /* 00404be9: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00404bed: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404bef: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404bf5:; BB(0x00404bf5);
    /* 00404bf5: mov esi, edi */ r_esi = r_edi;
    /* 00404bf7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404bf9: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404bff:; BB(0x00404bff);
    /* 00404bff: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00404c03: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c05: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404c0b:; BB(0x00404c0b);
    /* 00404c0b: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c0e: jne 0x404c4e */ if (!fZ) goto L_00404c4e;
L_00404c10:; BB(0x00404c10);
    /* 00404c10: cmp ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c13: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404c19:; BB(0x00404c19);
    /* 00404c19: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c1c: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404c22:; BB(0x00404c22);
    /* 00404c22: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c25: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404c27:; BB(0x00404c27);
    /* 00404c27: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c2a: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404c2c:; BB(0x00404c2c);
    /* 00404c2c: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00404c30: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c33: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404c35:; BB(0x00404c35);
    /* 00404c35: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00404c39: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c3c: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404c3e:; BB(0x00404c3e);
    /* 00404c3e: mov esi, edi */ r_esi = r_edi;
    /* 00404c40: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c43: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404c45:; BB(0x00404c45);
    /* 00404c45: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00404c49: cmp esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c4c: je 0x404c91 */ if (fZ) goto L_00404c91;
L_00404c4e:; BB(0x00404c4e);
    /* 00404c4e: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c51: jne 0x404c91 */ if (!fZ) goto L_00404c91;
L_00404c53:; BB(0x00404c53);
    /* 00404c53: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c56: jne 0x404c91 */ if (!fZ) goto L_00404c91;
L_00404c58:; BB(0x00404c58);
    /* 00404c58: cmp ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c5b: jne 0x404c91 */ if (!fZ) goto L_00404c91;
L_00404c5d:; BB(0x00404c5d);
    /* 00404c5d: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c60: jne 0x404c91 */ if (!fZ) goto L_00404c91;
L_00404c62:; BB(0x00404c62);
    /* 00404c62: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c65: jne 0x404c91 */ if (!fZ) goto L_00404c91;
L_00404c67:; BB(0x00404c67);
    /* 00404c67: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00404c6b: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c6e: jne 0x404c91 */ if (!fZ) goto L_00404c91;
L_00404c70:; BB(0x00404c70);
    /* 00404c70: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00404c74: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c77: jne 0x404c91 */ if (!fZ) goto L_00404c91;
L_00404c79:; BB(0x00404c79);
    /* 00404c79: mov eax, edi */ r_eax = r_edi;
    /* 00404c7b: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c7e: jne 0x404c91 */ if (!fZ) goto L_00404c91;
L_00404c80:; BB(0x00404c80);
    /* 00404c80: mov eax, esi */ r_eax = r_esi;
    /* 00404c82: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c85: jne 0x404c91 */ if (!fZ) goto L_00404c91;
L_00404c87:; BB(0x00404c87);
    /* 00404c87: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00404c89: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00404c8c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00404c8d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404c8e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00404c8f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00404c90: ret  */ FN_RET(0x00404ae0); r_esp += 4; return;
L_00404c91:; BB(0x00404c91);
    /* 00404c91: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404c94: je 0x404c87 */ if (fZ) goto L_00404c87;
L_00404c96:; BB(0x00404c96);
    /* 00404c96: mov eax, 1 */ r_eax = 0x1u;
    /* 00404c9b: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00404c9e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00404c9f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404ca0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00404ca1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00404ca2: ret  */ FN_RET(0x00404ae0); r_esp += 4; return;
}

void f_00404ca4(void) /* sub_404CA4 */
{
    FN_ENTER(0x00404ca4);
    /* 00404ca4: mov eax, dword ptr [ecx + 0x7c] */ r_eax = R32((u32)(r_ecx+0x7cu));
    /* 00404ca7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00404ca9: jle 0x404cac */ if ((fZ||fS!=fO)) goto L_00404cac;
L_00404cab:; BB(0x00404cab);
    /* 00404cab: ret  */ FN_RET(0x00404ca4); r_esp += 4; return;
L_00404cac:; BB(0x00404cac);
    /* 00404cac: mov eax, dword ptr [ecx + 0x30] */ r_eax = R32((u32)(r_ecx+0x30u));
    /* 00404caf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404cb1: je 0x404ccf */ if (fZ) goto L_00404ccf;
L_00404cb3:; BB(0x00404cb3);
    /* 00404cb3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404cb6: jne 0x404cbe */ if (!fZ) goto L_00404cbe;
L_00404cb8:; BB(0x00404cb8);
    /* 00404cb8: call 0x81e298 */ r_esp -= 4; W32(r_esp, 0x404cbdu); f_0081e298();
    /* 00404cbd: ret  */ FN_RET(0x00404ca4); r_esp += 4; return;
L_00404cbe:; BB(0x00404cbe);
    /* 00404cbe: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404cc1: jne 0x404cc9 */ if (!fZ) goto L_00404cc9;
L_00404cc3:; BB(0x00404cc3);
    /* 00404cc3: call 0x405768 */ r_esp -= 4; W32(r_esp, 0x404cc8u); f_00405768();
    /* 00404cc8: ret  */ FN_RET(0x00404ca4); r_esp += 4; return;
L_00404cc9:; BB(0x00404cc9);
    /* 00404cc9: call 0x405768 */ r_esp -= 4; W32(r_esp, 0x404cceu); f_00405768();
    /* 00404cce: ret  */ FN_RET(0x00404ca4); r_esp += 4; return;
L_00404ccf:; BB(0x00404ccf);
    /* 00404ccf: call 0x40578c */ r_esp -= 4; W32(r_esp, 0x404cd4u); f_0040578c();
    /* 00404cd4: ret  */ FN_RET(0x00404ca4); r_esp += 4; return;
}

void f_00404cd8(void) /* sub_404CD8 */
{
    FN_ENTER(0x00404cd8);
    /* 00404cd8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404cd9: mov ebp, esp */ r_ebp = r_esp;
    /* 00404cdb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00404cdd: push 0x8cc154 */ { u32 v = 0x8cc154u; r_esp -= 4; W32(r_esp, v); }
    /* 00404ce2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00404ce8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00404ce9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00404cf0: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00404cf3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00404cf6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00404cf9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00404cfc: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00404cff: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00404d02: call 0x403784 */ r_esp -= 4; W32(r_esp, 0x404d07u); f_00403784();
    /* 00404d07: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
    /* 00404d0e: push 0x824 */ { u32 v = 0x824u; r_esp -= 4; W32(r_esp, v); }
    /* 00404d13: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x404d18u); f_005caba4();
    /* 00404d18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00404d19: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00404d1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404d1e: je 0x404d5a */ if (fZ) goto L_00404d5a;
L_00404d20:; BB(0x00404d20);
    /* 00404d20: mov dword ptr [ebp - 0x28], 1 */ W32((u32)(r_ebp+0xffffffd8u), 0x1u);
    /* 00404d27: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00404d2e: push dword ptr [0xaca37c] */ { u32 v = R32((u32)(0xaca37cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00404d34: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00404d37: call 0x4170ac */ r_esp -= 4; W32(r_esp, 0x404d3cu); f_004170ac();
    /* 00404d3c: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00404d3f: mov dword ptr [ebp - 0x28], 0 */ W32((u32)(r_ebp+0xffffffd8u), 0x0u);
L_00404d46:; BB(0x00404d46);
    /* 00404d46: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00404d49: mov dword ptr [eax + 0x78], edx */ W32((u32)(r_eax+0x78u), r_edx);
    /* 00404d4c: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00404d4f: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00404d56: mov esp, ebp */ r_esp = r_ebp;
    /* 00404d58: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404d59: ret  */ FN_RET(0x00404cd8); r_esp += 4; return;
L_00404d5a:; BB(0x00404d5a);
    /* 00404d5a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00404d5c: jmp 0x404d46 */ goto L_00404d46;
}

void f_00404d60(void) /* sub_404D60 */
{
    FN_ENTER(0x00404d60);
    /* 00404d60: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00404d61: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00404d62: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404d63: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00404d65: mov ecx, dword ptr [ebp + 0x1284] */ r_ecx = R32((u32)(r_ebp+0x1284u));
    /* 00404d6b: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404d6d: je 0x404d82 */ if (fZ) goto L_00404d82;
L_00404d6f:; BB(0x00404d6f);
    /* 00404d6f: je 0x404d78 */ if (fZ) goto L_00404d78;
L_00404d71:; BB(0x00404d71);
    /* 00404d71: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00404d73: call 0x402a98 */ r_esp -= 4; W32(r_esp, 0x404d78u); f_00402a98();
L_00404d78:; BB(0x00404d78);
    /* 00404d78: mov dword ptr [ebp + 0x1284], 0 */ W32((u32)(r_ebp+0x1284u), 0x0u);
L_00404d82:; BB(0x00404d82);
    /* 00404d82: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00404d84: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00404d86: mov edi, ebp */ r_edi = r_ebp;
    /* 00404d88: mov ebp, eax */ r_ebp = r_eax;
    /* 00404d8a: mov esi, edx */ r_esi = r_edx;
L_00404d8c:; BB(0x00404d8c);
    /* 00404d8c: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 00404d91: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00404d97: lea ecx, [ebp + 0xaae75c] */ r_ecx = (u32)(r_ebp+0xaae75cu);
    /* 00404d9d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00404d9e: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x404da3u); f_007c1160();
    /* 00404da3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404da5: je 0x404dac */ if (fZ) goto L_00404dac;
L_00404da7:; BB(0x00404da7);
    /* 00404da7: mov esi, 1 */ r_esi = 0x1u;
L_00404dac:; BB(0x00404dac);
    /* 00404dac: add ebp, 0x50 */ {  u32 a = r_ebp; u32 b = 0x50u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00404daf: cmp ebp, 0x140 */ {  u32 a = r_ebp; u32 b = 0x140u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00404db5: jb 0x404d8c */ if (fC) goto L_00404d8c;
L_00404db7:; BB(0x00404db7);
    /* 00404db7: mov edx, esi */ r_edx = r_esi;
    /* 00404db9: mov ebp, edi */ r_ebp = r_edi;
    /* 00404dbb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00404dbd: je 0x404df5 */ if (fZ) goto L_00404df5;
L_00404dbf:; BB(0x00404dbf);
    /* 00404dbf: mov dword ptr [ebp + 0x30], 1 */ W32((u32)(r_ebp+0x30u), 0x1u);
    /* 00404dc6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00404dc8: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x404dcdu); f_00404a34();
    /* 00404dcd: call 0x5bbf1c */ r_esp -= 4; W32(r_esp, 0x404dd2u); f_005bbf1c();
    /* 00404dd2: mov eax, dword ptr [ebp + 0x1c] */ r_eax = R32((u32)(r_ebp+0x1cu));
    /* 00404dd5: cmp eax, 0x17 */ {  u32 a = r_eax; u32 b = 0x17u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00404dd8: je 0x404df5 */ if (fZ) goto L_00404df5;
L_00404dda:; BB(0x00404dda);
    /* 00404dda: mov dword ptr [ebp + 0x1c], 0x17 */ W32((u32)(r_ebp+0x1cu), 0x17u);
    /* 00404de1: mov dword ptr [ebp + 0x60], 0 */ W32((u32)(r_ebp+0x60u), 0x0u);
    /* 00404de8: mov eax, dword ptr [0x9a2e58] */ r_eax = R32((u32)(0x9a2e58u));
    /* 00404ded: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00404def: je 0x404df5 */ if (fZ) goto L_00404df5;
L_00404df1:; BB(0x00404df1);
    /* 00404df1: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00404df3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x404df5u); call_ind(t); }
L_00404df5:; BB(0x00404df5);
    /* 00404df5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00404df6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00404df7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00404df8: ret  */ FN_RET(0x00404d60); r_esp += 4; return;
}

void f_00404dfc(void) /* sub_404DFC */
{
    FN_ENTER(0x00404dfc);
    /* 00404dfc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00404dfd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00404dfe: mov edi, ecx */ r_edi = r_ecx;
    /* 00404e00: mov ecx, edi */ r_ecx = r_edi;
    /* 00404e02: call 0x403784 */ r_esp -= 4; W32(r_esp, 0x404e07u); f_00403784();
    /* 00404e07: lea esi, [edi + 0x84] */ r_esi = (u32)(r_edi+0x84u);
    /* 00404e0d: mov ecx, edi */ r_ecx = r_edi;
    /* 00404e0f: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x404e14u); f_00404a34();
    /* 00404e14: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00404e16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00404e17: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00404e18: mov ecx, edi */ r_ecx = r_edi;
    /* 00404e1a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00404e1c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00404e1d: call 0x402f0c */ r_esp -= 4; W32(r_esp, 0x404e22u); f_00402f0c();
    /* 00404e22: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00404e23: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00404e24: ret  */ FN_RET(0x00404dfc); r_esp += 4; return;
}

void f_00404e28(void) /* sub_404E28 */
{
    FN_ENTER(0x00404e28);
    /* 00404e28: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00404e29: mov ebp, esp */ r_ebp = r_esp;
    /* 00404e2b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00404e2d: push 0x8cc19c */ { u32 v = 0x8cc19cu; r_esp -= 4; W32(r_esp, v); }
    /* 00404e32: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00404e38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00404e39: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00404e40: sub esp, 0x1ac */ {  u32 a = r_esp; u32 b = 0x1acu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00404e46: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00404e49: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00404e4c: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00404e4f: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 00404e52: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00404e55: call 0x5bb198 */ r_esp -= 4; W32(r_esp, 0x404e5au); f_005bb198();
    /* 00404e5a: mov dword ptr [ebp - 0x1b8], 0 */ W32((u32)(r_ebp+0xfffffe48u), 0x0u);
    /* 00404e64: push 0x244 */ { u32 v = 0x244u; r_esp -= 4; W32(r_esp, v); }
    /* 00404e69: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x404e6eu); f_005caba4();
    /* 00404e6e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00404e6f: mov dword ptr [ebp - 0x1b4], eax */ W32((u32)(r_ebp+0xfffffe4cu), r_eax);
    /* 00404e75: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404e77: je 0x4050e7 */ if (fZ) goto L_004050e7;
L_00404e7d:; BB(0x00404e7d);
    /* 00404e7d: mov dword ptr [ebp - 0x1b8], 1 */ W32((u32)(r_ebp+0xfffffe48u), 0x1u);
    /* 00404e87: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00404e8e: push dword ptr [0xaca338] */ { u32 v = R32((u32)(0xaca338u)); r_esp -= 4; W32(r_esp, v); }
    /* 00404e94: mov ecx, dword ptr [ebp - 0x1b4] */ r_ecx = R32((u32)(r_ebp+0xfffffe4cu));
    /* 00404e9a: call 0x70cc78 */ r_esp -= 4; W32(r_esp, 0x404e9fu); f_0070cc78();
    /* 00404e9f: mov edx, dword ptr [ebp - 0x1b4] */ r_edx = R32((u32)(r_ebp+0xfffffe4cu));
    /* 00404ea5: mov dword ptr [ebp - 0x1b8], 0 */ W32((u32)(r_ebp+0xfffffe48u), 0x0u);
L_00404eaf:; BB(0x00404eaf);
    /* 00404eaf: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00404eb2: mov dword ptr [eax + 0x1288], edx */ W32((u32)(r_eax+0x1288u), r_edx);
    /* 00404eb8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00404ebf: call 0x70b7cc */ r_esp -= 4; W32(r_esp, 0x404ec4u); f_0070b7cc();
    /* 00404ec4: lea eax, [ebp - 0x1b0] */ r_eax = (u32)(r_ebp+0xfffffe50u);
    /* 00404eca: push 0x104 */ { u32 v = 0x104u; r_esp -= 4; W32(r_esp, v); }
    /* 00404ecf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00404ed0: call 0x85817f */ r_esp -= 4; W32(r_esp, 0x404ed5u); f_0085817f();
    /* 00404ed5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00404ed8: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x404eddu); f_006dc358();
    /* 00404edd: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404ee0: je 0x4050c1 */ if (fZ) goto L_004050c1;
L_00404ee6:; BB(0x00404ee6);
    /* 00404ee6: call 0x708514 */ r_esp -= 4; W32(r_esp, 0x404eebu); f_00708514();
    /* 00404eeb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404eed: je 0x404f14 */ if (fZ) goto L_00404f14;
L_00404eef:; BB(0x00404eef);
    /* 00404eef: call 0x708318 */ r_esp -= 4; W32(r_esp, 0x404ef4u); f_00708318();
    /* 00404ef4: lea esi, [ebp - 0xac] */ r_esi = (u32)(r_ebp+0xffffff54u);
    /* 00404efa: mov edi, eax */ r_edi = r_eax;
L_00404efc:; BB(0x00404efc);
    /* 00404efc: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00404efe: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00404f01: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 00404f03: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00404f06: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00404f08: jne 0x404efc */ if (!fZ) goto L_00404efc;
L_00404f0a:; BB(0x00404f0a);
    /* 00404f0a: call 0x708348 */ r_esp -= 4; W32(r_esp, 0x404f0fu); f_00708348();
    /* 00404f0f: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00404f12: jmp 0x404f37 */ goto L_00404f37;
L_00404f14:; BB(0x00404f14);
    /* 00404f14: call 0x7082dc */ r_esp -= 4; W32(r_esp, 0x404f19u); f_007082dc();
    /* 00404f19: lea esi, [ebp - 0xac] */ r_esi = (u32)(r_ebp+0xffffff54u);
    /* 00404f1f: mov edi, eax */ r_edi = r_eax;
L_00404f21:; BB(0x00404f21);
    /* 00404f21: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00404f23: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00404f26: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 00404f28: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00404f2b: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00404f2d: jne 0x404f21 */ if (!fZ) goto L_00404f21;
L_00404f2f:; BB(0x00404f2f);
    /* 00404f2f: call 0x708300 */ r_esp -= 4; W32(r_esp, 0x404f34u); f_00708300();
    /* 00404f34: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
L_00404f37:; BB(0x00404f37);
    /* 00404f37: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00404f3a: mov ecx, dword ptr [eax + 0x1284] */ r_ecx = R32((u32)(r_eax+0x1284u));
    /* 00404f40: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404f42: je 0x404f4d */ if (fZ) goto L_00404f4d;
L_00404f44:; BB(0x00404f44);
    /* 00404f44: je 0x404f4d */ if (fZ) goto L_00404f4d;
L_00404f46:; BB(0x00404f46);
    /* 00404f46: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00404f48: call 0x402a98 */ r_esp -= 4; W32(r_esp, 0x404f4du); f_00402a98();
L_00404f4d:; BB(0x00404f4d);
    /* 00404f4d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00404f54: push 0x1a9a0 */ { u32 v = 0x1a9a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00404f59: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x404f5eu); f_008581c5();
    /* 00404f5e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00404f5f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00404f62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00404f64: je 0x4050ba */ if (fZ) goto L_004050ba;
L_00404f6a:; BB(0x00404f6a);
    /* 00404f6a: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 00404f71: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00404f78: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00404f7b: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00404f7e: lea esi, [ebp - 0x1b0] */ r_esi = (u32)(r_ebp+0xfffffe50u);
    /* 00404f84: lea ebx, [ebp - 0xac] */ r_ebx = (u32)(r_ebp+0xffffff54u);
    /* 00404f8a: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00404f8d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00404f8e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00404f8f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00404f90: call 0x70c150 */ r_esp -= 4; W32(r_esp, 0x404f95u); f_0070c150();
    /* 00404f95: mov edx, dword ptr [ebp - 0x28] */ r_edx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00404f98: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00404f9f:; BB(0x00404f9f);
    /* 00404f9f: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00404fa2: mov dword ptr [eax + 0x1284], edx */ W32((u32)(r_eax+0x1284u), r_edx);
    /* 00404fa8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00404faf: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00404fb1: je 0x4050a3 */ if (fZ) goto L_004050a3;
L_00404fb7:; BB(0x00404fb7);
    /* 00404fb7: mov ecx, eax */ r_ecx = r_eax;
    /* 00404fb9: call 0x403784 */ r_esp -= 4; W32(r_esp, 0x404fbeu); f_00403784();
    /* 00404fbe: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00404fc1: call 0x404a34 */ r_esp -= 4; W32(r_esp, 0x404fc6u); f_00404a34();
    /* 00404fc6: push 0x8f8814 */ { u32 v = 0x8f8814u; r_esp -= 4; W32(r_esp, v); }
    /* 00404fcb: push 0xa46bcc */ { u32 v = 0xa46bccu; r_esp -= 4; W32(r_esp, v); }
    /* 00404fd0: push 0xa46b9c */ { u32 v = 0xa46b9cu; r_esp -= 4; W32(r_esp, v); }
    /* 00404fd5: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00404fd8: mov ebx, dword ptr [eax + 0x1284] */ r_ebx = R32((u32)(r_eax+0x1284u));
    /* 00404fde: mov dword ptr [0xa3a920], eax */ W32((u32)(0xa3a920u), r_eax);
    /* 00404fe3: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00404fe5: mov word ptr [eax + 0x884], dx */ W16((u32)(r_eax+0x884u), (u16)r_edx);
    /* 00404fec: mov word ptr [eax + 0xa84], dx */ W16((u32)(r_eax+0xa84u), (u16)r_edx);
    /* 00404ff3: mov word ptr [eax + 0xc84], dx */ W16((u32)(r_eax+0xc84u), (u16)r_edx);
    /* 00404ffa: mov word ptr [eax + 0xe84], dx */ W16((u32)(r_eax+0xe84u), (u16)r_edx);
    /* 00405001: mov word ptr [eax + 0x1084], dx */ W16((u32)(r_eax+0x1084u), (u16)r_edx);
    /* 00405008: mov dword ptr [0xa3a938], edx */ W32((u32)(0xa3a938u), r_edx);
    /* 0040500e: mov dword ptr [ebx + 0x1a8a0], 0x61cdb0 */ W32((u32)(r_ebx+0x1a8a0u), 0x61cdb0u);
    /* 00405018: mov esi, dword ptr [eax + 0x1284] */ r_esi = R32((u32)(r_eax+0x1284u));
    /* 0040501e: mov dword ptr [esi + 0x1a8a4], 0x402bc0 */ W32((u32)(r_esi+0x1a8a4u), 0x402bc0u);
    /* 00405028: mov edi, dword ptr [eax + 0x1284] */ r_edi = R32((u32)(r_eax+0x1284u));
    /* 0040502e: mov dword ptr [edi + 0x1a8a8], 0x402c28 */ W32((u32)(r_edi+0x1a8a8u), 0x402c28u);
    /* 00405038: mov ecx, dword ptr [eax + 0x1284] */ r_ecx = R32((u32)(r_eax+0x1284u));
    /* 0040503e: mov dword ptr [ecx + 0x1a8ac], 0x402cc8 */ W32((u32)(r_ecx+0x1a8acu), 0x402cc8u);
    /* 00405048: mov edx, dword ptr [eax + 0x1284] */ r_edx = R32((u32)(r_eax+0x1284u));
    /* 0040504e: mov dword ptr [edx + 0x1a8b0], 0x402cf0 */ W32((u32)(r_edx+0x1a8b0u), 0x402cf0u);
    /* 00405058: mov edx, dword ptr [eax + 0x1284] */ r_edx = R32((u32)(r_eax+0x1284u));
    /* 0040505e: mov dword ptr [edx + 0x1a8b4], 0x402d34 */ W32((u32)(r_edx+0x1a8b4u), 0x402d34u);
    /* 00405068: mov edx, dword ptr [eax + 0x1284] */ r_edx = R32((u32)(r_eax+0x1284u));
    /* 0040506e: mov dword ptr [edx + 0x1a8b8], 0x402ec4 */ W32((u32)(r_edx+0x1a8b8u), 0x402ec4u);
    /* 00405078: mov edx, dword ptr [eax + 0x1284] */ r_edx = R32((u32)(r_eax+0x1284u));
    /* 0040507e: mov dword ptr [edx + 0x1a8bc], 0x405994 */ W32((u32)(r_edx+0x1a8bcu), 0x405994u);
    /* 00405088: mov edx, dword ptr [eax + 0x1284] */ r_edx = R32((u32)(r_eax+0x1284u));
    /* 0040508e: mov dword ptr [edx + 0x1a8c0], 0x40597c */ W32((u32)(r_edx+0x1a8c0u), 0x40597cu);
    /* 00405098: mov ecx, dword ptr [eax + 0x1284] */ r_ecx = R32((u32)(r_eax+0x1284u));
    /* 0040509e: call 0x70c294 */ r_esp -= 4; W32(r_esp, 0x4050a3u); f_0070c294();
L_004050a3:; BB(0x004050a3);
    /* 004050a3: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 004050a6: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 004050a9: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 004050ac: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004050af: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004050b6: mov esp, ebp */ r_esp = r_ebp;
    /* 004050b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004050b9: ret  */ FN_RET(0x00404e28); r_esp += 4; return;
L_004050ba:; BB(0x004050ba);
    /* 004050ba: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004050bc: jmp 0x404f9f */ goto L_00404f9f;
L_004050c1:; BB(0x004050c1);
    /* 004050c1: lea esi, [ebp - 0xac] */ r_esi = (u32)(r_ebp+0xffffff54u);
    /* 004050c7: mov edi, 0xa435e0 */ r_edi = 0xa435e0u;
L_004050cc:; BB(0x004050cc);
    /* 004050cc: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 004050ce: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004050d1: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 004050d3: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004050d6: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004050d8: jne 0x4050cc */ if (!fZ) goto L_004050cc;
L_004050da:; BB(0x004050da);
    /* 004050da: mov eax, dword ptr [0xa43674] */ r_eax = R32((u32)(0xa43674u));
    /* 004050df: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 004050e2: jmp 0x404f37 */ goto L_00404f37;
L_004050e7:; BB(0x004050e7);
    /* 004050e7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004050e9: jmp 0x404eaf */ goto L_00404eaf;
}

