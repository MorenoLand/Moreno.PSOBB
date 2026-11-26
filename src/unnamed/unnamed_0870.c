#include "protos.h"

void f_00870040(void)
{
    FN_ENTER(0x00870040);
    /* 00870040: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00870041: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00870045: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00870049: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 0087004d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087004f: je 0x87008e */ if (fZ) goto L_0087008e;
L_00870051:; BB(0x00870051);
    /* 00870051: cmp ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00870054: jne 0x87006d */ if (!fZ) goto L_0087006d;
L_00870056:; BB(0x00870056);
    /* 00870056: mov ebp, dword ptr [ecx + 0xc] */ r_ebp = R32((u32)(r_ecx+0xcu));
    /* 00870059: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 0087005d: add edx, dword ptr [ecx + 8] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r; fC = (r < a); }
    /* 00870060: adc ebp, eax */ { u32 c = fC; u32 a = r_ebp; u32 b = r_eax; u32 r = (a + b + c) & 0xffffffffu; r_ebp = r;  }
    /* 00870062: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00870065: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00870068: mov dword ptr [ecx + 0xc], ebp */ W32((u32)(r_ecx+0xcu), r_ebp);
    /* 0087006b: jmp 0x87009b */ goto L_0087009b;
L_0087006d:; BB(0x0087006d);
    /* 0087006d: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 00870070: cmp ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00870073: jne 0x870089 */ if (!fZ) goto L_00870089;
L_00870075:; BB(0x00870075);
    /* 00870075: lea ebp, [eax - 1] */ r_ebp = (u32)(r_eax+0xffffffffu);
    /* 00870078: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r; fC = (r < a); }
    /* 0087007a: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0087007e: adc ebp, 0 */ { u32 c = fC; u32 a = r_ebp; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_ebp = r;  }
    /* 00870081: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00870084: mov dword ptr [ecx + 0xc], ebp */ W32((u32)(r_ecx+0xcu), r_ebp);
    /* 00870087: jmp 0x87009b */ goto L_0087009b;
L_00870089:; BB(0x00870089);
    /* 00870089: mov edx, dword ptr [ecx + 8] */ r_edx = R32((u32)(r_ecx+0x8u));
    /* 0087008c: jmp 0x87009b */ goto L_0087009b;
L_0087008e:; BB(0x0087008e);
    /* 0087008e: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00870091: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00870095: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 00870098: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
L_0087009b:; BB(0x0087009b);
    /* 0087009b: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087009d: jae 0x8700a3 */ if (!fC) goto L_008700a3;
L_0087009f:; BB(0x0087009f);
    /* 0087009f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008700a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008700a2: ret  */ FN_RET(0x00870040); r_esp += 4; return;
L_008700a3:; BB(0x008700a3);
    /* 008700a3: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008700a4: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 008700a7: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 008700ae: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 008700b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008700b4: ret  */ FN_RET(0x00870040); r_esp += 4; return;
}

void f_00870086(void)
{
    FN_ENTER(0x00870086);
    /* 00870086: or al, 0xeb */ {  u32 a = (u8)r_eax; u32 b = 0xebu; u32 r = (a | b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu); fC = 0; }
    /* 00870088: adc cl, byte ptr [ebx + 0xdeb0851] */ { u32 c = fC; u32 a = (u8)r_ecx; u32 b = R8((u32)(r_ebx+0xdeb0851u)); u32 r = (a + b + c) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 0087008e: mov dword ptr [ecx + 8], edx */ W32((u32)(r_ecx+0x8u), r_edx);
    /* 00870091: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 00870095: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 00870098: mov eax, dword ptr [ecx + 4] */ r_eax = R32((u32)(r_ecx+0x4u));
    /* 0087009b: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087009d: jae 0x8700a3 */ if (!fC) goto L_008700a3;
L_0087009f:; BB(0x0087009f);
    /* 0087009f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008700a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008700a2: ret  */ FN_RET(0x00870086); r_esp += 4; return;
L_008700a3:; BB(0x008700a3);
    /* 008700a3: dec eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008700a4: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 008700a7: mov dword ptr [ecx + 0xc], 0 */ W32((u32)(r_ecx+0xcu), 0x0u);
    /* 008700ae: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 008700b3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008700b4: ret  */ FN_RET(0x00870086); r_esp += 4; return;
}

void f_008700b8(void) /* sub_8700B8 */
{
    FN_ENTER(0x008700b8);
    /* 008700b8: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 008700bc: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 008700bf: ret  */ FN_RET(0x008700b8); r_esp += 4; return;
}

void f_008700c0(void) /* sub_8700C0 */
{
    FN_ENTER(0x008700c0);
    /* 008700c0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008700c1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008700c2: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008700c5: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 008700c9: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008700cb: je 0x8701b6 */ if (fZ) goto L_008701b6;
L_008700d1:; BB(0x008700d1);
    /* 008700d1: lea eax, [ebx + 0x250] */ r_eax = (u32)(r_ebx+0x250u);
    /* 008700d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008700d8: call 0x873ec4 */ r_esp -= 4; W32(r_esp, 0x8700ddu); f_00873ec4();
    /* 008700dd: lea eax, [ebx + 0x1e0] */ r_eax = (u32)(r_ebx+0x1e0u);
    /* 008700e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008700e4: call 0x873fc4 */ r_esp -= 4; W32(r_esp, 0x8700e9u); f_00873fc4();
    /* 008700e9: lea eax, [ebx + 0x78] */ r_eax = (u32)(r_ebx+0x78u);
    /* 008700ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008700ed: call 0x876024 */ r_esp -= 4; W32(r_esp, 0x8700f2u); f_00876024();
    /* 008700f2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008700f5: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 008700f8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008700fa: je 0x870156 */ if (fZ) goto L_00870156;
L_008700fc:; BB(0x008700fc);
    /* 008700fc: mov ecx, dword ptr [ebx + 0x34] */ r_ecx = R32((u32)(r_ebx+0x34u));
    /* 008700ff: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00870101: je 0x870156 */ if (fZ) goto L_00870156;
L_00870103:; BB(0x00870103);
    /* 00870103: mov edx, 0 */ r_edx = 0x0u;
    /* 00870108: jle 0x8701c8 */ if ((fZ||fS!=fO)) goto L_008701c8;
L_0087010e:; BB(0x0087010e);
    /* 0087010e: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00870111: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00870113: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00870115: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00870117: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00870119: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 0087011c: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087011e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00870120: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00870122: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00870126: mov edi, edx */ r_edi = r_edx;
    /* 00870128: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 0087012b: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0087012d: jmp 0x870132 */ goto L_00870132;
L_0087012f:; BB(0x0087012f);
    /* 0087012f: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
L_00870132:; BB(0x00870132);
    /* 00870132: add eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00870134: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00870135: call 0x876cd8 */ r_esp -= 4; W32(r_esp, 0x87013au); f_00876cd8();
    /* 0087013a: mov eax, esi */ r_eax = r_esi;
    /* 0087013c: add eax, dword ptr [ebx + 0x4c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x4cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087013f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00870140: call 0x876c4c */ r_esp -= 4; W32(r_esp, 0x870145u); f_00876c4c();
    /* 00870145: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00870148: add ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0087014b: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087014e: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087014f: cmp edi, dword ptr [ebx + 0x34] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x34u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00870152: jl 0x87012f */ if ((fS!=fO)) goto L_0087012f;
L_00870154:; BB(0x00870154);
    /* 00870154: jmp 0x8701be */ goto L_008701be;
L_00870156:; BB(0x00870156);
    /* 00870156: mov eax, dword ptr [ebx + 0x3c] */ r_eax = R32((u32)(r_ebx+0x3cu));
    /* 00870159: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087015b: je 0x870164 */ if (fZ) goto L_00870164;
L_0087015d:; BB(0x0087015d);
    /* 0087015d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0087015e: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x870163u); f_00858882();
    /* 00870163: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00870164:; BB(0x00870164);
    /* 00870164: mov eax, dword ptr [ebx + 0x44] */ r_eax = R32((u32)(r_ebx+0x44u));
    /* 00870167: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00870169: je 0x870172 */ if (fZ) goto L_00870172;
L_0087016b:; BB(0x0087016b);
    /* 0087016b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0087016c: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x870171u); f_00858882();
    /* 00870171: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00870172:; BB(0x00870172);
    /* 00870172: mov eax, dword ptr [ebx + 0x40] */ r_eax = R32((u32)(r_ebx+0x40u));
    /* 00870175: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00870177: je 0x870180 */ if (fZ) goto L_00870180;
L_00870179:; BB(0x00870179);
    /* 00870179: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0087017a: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x87017fu); f_00858882();
    /* 0087017f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00870180:; BB(0x00870180);
    /* 00870180: mov eax, dword ptr [ebx + 0x38] */ r_eax = R32((u32)(r_ebx+0x38u));
    /* 00870183: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00870185: je 0x87018e */ if (fZ) goto L_0087018e;
L_00870187:; BB(0x00870187);
    /* 00870187: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00870188: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x87018du); f_00858882();
    /* 0087018d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0087018e:; BB(0x0087018e);
    /* 0087018e: lea eax, [ebx + 0x18] */ r_eax = (u32)(r_ebx+0x18u);
    /* 00870191: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00870192: call 0x8760d4 */ r_esp -= 4; W32(r_esp, 0x870197u); f_008760d4();
    /* 00870197: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00870198: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 0087019a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087019c: je 0x8701a6 */ if (fZ) goto L_008701a6;
L_0087019e:; BB(0x0087019e);
    /* 0087019e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0087019f: call dword ptr [ebx + 0x2c8] */ { u32 t = R32((u32)(r_ebx+0x2c8u)); r_esp -= 4; W32(r_esp, 0x8701a5u); call_ind(t); }
    /* 008701a5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008701a6:; BB(0x008701a6);
    /* 008701a6: push 0x2d0 */ { u32 v = 0x2d0u; r_esp -= 4; W32(r_esp, v); }
    /* 008701ab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008701ad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008701ae: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x8701b3u); f_0086b688();
    /* 008701b3: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008701b6:; BB(0x008701b6);
    /* 008701b6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008701b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008701bb: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008701bc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008701bd: ret  */ FN_RET(0x008700c0); r_esp += 4; return;
L_008701be:; BB(0x008701be);
    /* 008701be: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 008701c2: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 008701c5: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
L_008701c8:; BB(0x008701c8);
    /* 008701c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008701c9: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8701ceu); f_00858882();
    /* 008701ce: push dword ptr [ebx + 0x4c] */ { u32 v = R32((u32)(r_ebx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008701d1: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8701d6u); f_00858882();
    /* 008701d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008701d9: jmp 0x870156 */ goto L_00870156;
}

void f_008701e0(void) /* sub_8701E0 */
{
    FN_ENTER(0x008701e0);
    /* 008701e0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 008701e4: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008701e8: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008701ec: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008701ed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008701ee: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008701f1: mov ebx, edx */ r_ebx = r_edx;
    /* 008701f3: mov ebp, dword ptr [esp + 0x38] */ r_ebp = R32((u32)(r_esp+0x38u));
    /* 008701f7: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 008701fb: lea ebp, [esp + 0x10] */ r_ebp = (u32)(r_esp+0x10u);
    /* 008701ff: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 00870203: mov dword ptr [ebp], edx */ W32((u32)(r_ebp), r_edx);
    /* 00870206: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 0087020a: mov dword ptr [ebp + 4], edx */ W32((u32)(r_ebp+0x4u), r_edx);
    /* 0087020d: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 00870211: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 00870214: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00870218: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 0087021b: mov edx, ebx */ r_edx = r_ebx;
    /* 0087021d: call 0x87023c */ r_esp -= 4; W32(r_esp, 0x870222u); f_0087023c();
    /* 00870222: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00870224: je 0x87022c */ if (fZ) goto L_0087022c;
L_00870226:; BB(0x00870226);
    /* 00870226: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00870229: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0087022a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087022b: ret  */ FN_RET(0x008701e0); r_esp += 4; return;
L_0087022c:; BB(0x0087022c);
    /* 0087022c: mov eax, ebx */ r_eax = r_ebx;
    /* 0087022e: call 0x87044c */ r_esp -= 4; W32(r_esp, 0x870233u); f_0087044c();
    /* 00870233: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00870236: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00870237: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00870238: ret  */ FN_RET(0x008701e0); r_esp += 4; return;
}

void f_0087023c(void) /* sub_87023C */
{
    FN_ENTER(0x0087023c);
    /* 0087023c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0087023d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087023e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087023f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00870240: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00870243: mov esi, ecx */ r_esi = r_ecx;
    /* 00870245: mov ebx, edx */ r_ebx = r_edx;
    /* 00870247: mov ebp, eax */ r_ebp = r_eax;
    /* 00870249: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087024b: je 0x87025f */ if (fZ) goto L_0087025f;
L_0087024d:; BB(0x0087024d);
    /* 0087024d: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0087024f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00870251: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00870252: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00870253: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00870254: call dword ptr [esp + 0x54] */ { u32 t = R32((u32)(r_esp+0x54u)); r_esp -= 4; W32(r_esp, 0x870258u); call_ind(t); }
    /* 00870258: mov edi, eax */ r_edi = r_eax;
    /* 0087025a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087025d: jmp 0x870264 */ goto L_00870264;
L_0087025f:; BB(0x0087025f);
    /* 0087025f: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
L_00870264:; BB(0x00870264);
    /* 00870264: push 0x2d0 */ { u32 v = 0x2d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00870269: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0087026b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0087026c: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x870271u); f_0086b688();
    /* 00870271: mov dword ptr [ebx], ebp */ W32((u32)(r_ebx), r_ebp);
    /* 00870273: mov ebp, dword ptr [esp + 0x4c] */ r_ebp = R32((u32)(r_esp+0x4cu));
    /* 00870277: mov dword ptr [ebx + 0x2c0], ebp */ W32((u32)(r_ebx+0x2c0u), r_ebp);
    /* 0087027d: mov ebp, dword ptr [esp + 0x50] */ r_ebp = R32((u32)(r_esp+0x50u));
    /* 00870281: mov dword ptr [ebx + 0x2c4], ebp */ W32((u32)(r_ebx+0x2c4u), r_ebp);
    /* 00870287: mov ebp, dword ptr [esp + 0x54] */ r_ebp = R32((u32)(r_esp+0x54u));
    /* 0087028b: mov dword ptr [ebx + 0x2c8], ebp */ W32((u32)(r_ebx+0x2c8u), r_ebp);
    /* 00870291: mov ebp, dword ptr [esp + 0x58] */ r_ebp = R32((u32)(r_esp+0x58u));
    /* 00870295: mov dword ptr [ebx + 0x2cc], ebp */ W32((u32)(r_ebx+0x2ccu), r_ebp);
    /* 0087029b: lea ebp, [ebx + 0x18] */ r_ebp = (u32)(r_ebx+0x18u);
    /* 0087029e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087029f: call 0x876bc0 */ r_esp -= 4; W32(r_esp, 0x8702a4u); f_00876bc0();
    /* 008702a4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008702a7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008702a9: je 0x8702d2 */ if (fZ) goto L_008702d2;
L_008702ab:; BB(0x008702ab);
    /* 008702ab: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 008702af: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008702b0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008702b1: call 0x8760f8 */ r_esp -= 4; W32(r_esp, 0x8702b6u); f_008760f8();
    /* 008702b6: mov edx, eax */ r_edx = r_eax;
    /* 008702b8: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 008702bc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008702bd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008702be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008702bf: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x8702c4u); f_0086b6b8();
    /* 008702c4: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 008702c8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008702c9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008702ca: call 0x87617c */ r_esp -= 4; W32(r_esp, 0x8702cfu); f_0087617c();
    /* 008702cf: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008702d2:; BB(0x008702d2);
    /* 008702d2: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008702d5: je 0x8702de */ if (fZ) goto L_008702de;
L_008702d7:; BB(0x008702d7);
    /* 008702d7: mov dword ptr [ebx + 4], 1 */ W32((u32)(r_ebx+0x4u), 0x1u);
L_008702de:; BB(0x008702de);
    /* 008702de: mov ecx, 1 */ r_ecx = 0x1u;
    /* 008702e3: mov dword ptr [ebx + 0x34], ecx */ W32((u32)(r_ebx+0x34u), r_ecx);
    /* 008702e6: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 008702e8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008702e9: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x8702eeu); f_008587c7();
    /* 008702ee: mov dword ptr [ebx + 0x48], eax */ W32((u32)(r_ebx+0x48u), r_eax);
    /* 008702f1: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 008702f3: push dword ptr [ebx + 0x34] */ { u32 v = R32((u32)(r_ebx+0x34u)); r_esp -= 4; W32(r_esp, v); }
    /* 008702f6: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x8702fbu); f_008587c7();
    /* 008702fb: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 008702fe: lea esi, [ebx + 0x78] */ r_esi = (u32)(r_ebx+0x78u);
    /* 00870301: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00870303: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00870304: call 0x876be4 */ r_esp -= 4; W32(r_esp, 0x870309u); f_00876be4();
    /* 00870309: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087030c: lea edi, [ebx + 0x5c] */ r_edi = (u32)(r_ebx+0x5cu);
    /* 0087030f: mov eax, ebx */ r_eax = r_ebx;
    /* 00870311: mov edx, dword ptr [ebx + 0x48] */ r_edx = R32((u32)(r_ebx+0x48u));
    /* 00870314: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00870318: mov ecx, dword ptr [ebx + 0x4c] */ r_ecx = R32((u32)(r_ebx+0x4cu));
    /* 0087031b: mov dword ptr [esp + 0x10], 0 */ W32((u32)(r_esp+0x10u), 0x0u);
    /* 00870323: call 0x871058 */ r_esp -= 4; W32(r_esp, 0x870328u); f_00871058();
    /* 00870328: mov edi, eax */ r_edi = r_eax;
    /* 0087032a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0087032c: jl 0x87033f */ if ((fS!=fO)) goto L_0087033f;
L_0087032e:; BB(0x0087032e);
    /* 0087032e: mov dword ptr [ebx + 0x58], 1 */ W32((u32)(r_ebx+0x58u), 0x1u);
L_00870335:; BB(0x00870335);
    /* 00870335: mov eax, edi */ r_eax = r_edi;
    /* 00870337: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0087033a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0087033b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087033c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0087033d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087033e: ret  */ FN_RET(0x0087023c); r_esp += 4; return;
L_0087033f:; BB(0x0087033f);
    /* 0087033f: mov dword ptr [ebx], 0 */ W32((u32)(r_ebx), 0x0u);
    /* 00870345: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00870347: je 0x870335 */ if (fZ) goto L_00870335;
L_00870349:; BB(0x00870349);
    /* 00870349: lea ecx, [ebx + 0x250] */ r_ecx = (u32)(r_ebx+0x250u);
    /* 0087034f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00870350: call 0x873ec4 */ r_esp -= 4; W32(r_esp, 0x870355u); f_00873ec4();
    /* 00870355: lea ecx, [ebx + 0x1e0] */ r_ecx = (u32)(r_ebx+0x1e0u);
    /* 0087035b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0087035c: call 0x873fc4 */ r_esp -= 4; W32(r_esp, 0x870361u); f_00873fc4();
    /* 00870361: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00870362: call 0x876024 */ r_esp -= 4; W32(r_esp, 0x870367u); f_00876024();
    /* 00870367: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087036a: mov ecx, dword ptr [ebx + 0x48] */ r_ecx = R32((u32)(r_ebx+0x48u));
    /* 0087036d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087036f: je 0x8703cc */ if (fZ) goto L_008703cc;
L_00870371:; BB(0x00870371);
    /* 00870371: mov esi, dword ptr [ebx + 0x34] */ r_esi = R32((u32)(r_ebx+0x34u));
    /* 00870374: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00870376: je 0x8703cc */ if (fZ) goto L_008703cc;
L_00870378:; BB(0x00870378);
    /* 00870378: mov eax, 0 */ r_eax = 0x0u;
    /* 0087037d: jle 0x870439 */ if ((fZ||fS!=fO)) goto L_00870439;
L_00870383:; BB(0x00870383);
    /* 00870383: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00870386: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870388: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087038a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087038c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087038e: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 00870391: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00870393: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00870395: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00870397: mov dword ptr [esp + 0x18], edi */ W32((u32)(r_esp+0x18u), r_edi);
    /* 0087039b: mov edi, eax */ r_edi = r_eax;
    /* 0087039d: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 008703a1: mov ebp, edx */ r_ebp = r_edx;
    /* 008703a3: jmp 0x8703a8 */ goto L_008703a8;
L_008703a5:; BB(0x008703a5);
    /* 008703a5: mov ecx, dword ptr [ebx + 0x48] */ r_ecx = R32((u32)(r_ebx+0x48u));
L_008703a8:; BB(0x008703a8);
    /* 008703a8: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008703aa: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008703ab: call 0x876cd8 */ r_esp -= 4; W32(r_esp, 0x8703b0u); f_00876cd8();
    /* 008703b0: mov ecx, esi */ r_ecx = r_esi;
    /* 008703b2: add ecx, dword ptr [ebx + 0x4c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x4cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008703b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008703b6: call 0x876c4c */ r_esp -= 4; W32(r_esp, 0x8703bbu); f_00876c4c();
    /* 008703bb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008703be: add ebp, 0x20 */ {  u32 a = r_ebp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008703c1: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008703c4: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008703c5: cmp edi, dword ptr [ebx + 0x34] */ {  u32 a = r_edi; u32 b = R32((u32)(r_ebx+0x34u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008703c8: jl 0x8703a5 */ if ((fS!=fO)) goto L_008703a5;
L_008703ca:; BB(0x008703ca);
    /* 008703ca: jmp 0x87042e */ goto L_0087042e;
L_008703cc:; BB(0x008703cc);
    /* 008703cc: mov ecx, dword ptr [ebx + 0x3c] */ r_ecx = R32((u32)(r_ebx+0x3cu));
    /* 008703cf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008703d1: je 0x8703da */ if (fZ) goto L_008703da;
L_008703d3:; BB(0x008703d3);
    /* 008703d3: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008703d4: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8703d9u); f_00858882();
    /* 008703d9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008703da:; BB(0x008703da);
    /* 008703da: mov ecx, dword ptr [ebx + 0x44] */ r_ecx = R32((u32)(r_ebx+0x44u));
    /* 008703dd: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008703df: je 0x8703e8 */ if (fZ) goto L_008703e8;
L_008703e1:; BB(0x008703e1);
    /* 008703e1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008703e2: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8703e7u); f_00858882();
    /* 008703e7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008703e8:; BB(0x008703e8);
    /* 008703e8: mov ecx, dword ptr [ebx + 0x40] */ r_ecx = R32((u32)(r_ebx+0x40u));
    /* 008703eb: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008703ed: je 0x8703f6 */ if (fZ) goto L_008703f6;
L_008703ef:; BB(0x008703ef);
    /* 008703ef: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008703f0: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8703f5u); f_00858882();
    /* 008703f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008703f6:; BB(0x008703f6);
    /* 008703f6: mov ecx, dword ptr [ebx + 0x38] */ r_ecx = R32((u32)(r_ebx+0x38u));
    /* 008703f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008703fb: je 0x870404 */ if (fZ) goto L_00870404;
L_008703fd:; BB(0x008703fd);
    /* 008703fd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008703fe: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x870403u); f_00858882();
    /* 00870403: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00870404:; BB(0x00870404);
    /* 00870404: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00870405: call 0x8760d4 */ r_esp -= 4; W32(r_esp, 0x87040au); f_008760d4();
    /* 0087040a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0087040b: mov ecx, dword ptr [ebx] */ r_ecx = R32((u32)(r_ebx));
    /* 0087040d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087040f: je 0x870419 */ if (fZ) goto L_00870419;
L_00870411:; BB(0x00870411);
    /* 00870411: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00870412: call dword ptr [ebx + 0x2c8] */ { u32 t = R32((u32)(r_ebx+0x2c8u)); r_esp -= 4; W32(r_esp, 0x870418u); call_ind(t); }
    /* 00870418: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00870419:; BB(0x00870419);
    /* 00870419: push 0x2d0 */ { u32 v = 0x2d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0087041e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00870420: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00870421: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x870426u); f_0086b688();
    /* 00870426: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00870429: jmp 0x870335 */ goto L_00870335;
L_0087042e:; BB(0x0087042e);
    /* 0087042e: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 00870432: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 00870436: mov ecx, dword ptr [ebx + 0x48] */ r_ecx = R32((u32)(r_ebx+0x48u));
L_00870439:; BB(0x00870439);
    /* 00870439: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0087043a: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x87043fu); f_00858882();
    /* 0087043f: push dword ptr [ebx + 0x4c] */ { u32 v = R32((u32)(r_ebx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00870442: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x870447u); f_00858882();
    /* 00870447: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087044a: jmp 0x8703cc */ goto L_008703cc;
}

void f_0087044c(void) /* sub_87044C */
{
    FN_ENTER(0x0087044c);
    /* 0087044c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0087044d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0087044e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087044f: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00870452: mov ebp, eax */ r_ebp = r_eax;
    /* 00870454: mov edx, dword ptr [ebp + 0x58] */ r_edx = R32((u32)(r_ebp+0x58u));
    /* 00870457: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087045a: je 0x870468 */ if (fZ) goto L_00870468;
L_0087045c:; BB(0x0087045c);
    /* 0087045c: mov eax, 0xffffff7d */ r_eax = 0xffffff7du;
    /* 00870461: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00870464: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00870465: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00870466: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00870467: ret  */ FN_RET(0x0087044c); r_esp += 4; return;
L_00870468:; BB(0x00870468);
    /* 00870468: cmp dword ptr [ebp + 4], 0 */ {  u32 a = R32((u32)(r_ebp+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087046c: jne 0x87047e */ if (!fZ) goto L_0087047e;
L_0087046e:; BB(0x0087046e);
    /* 0087046e: mov dword ptr [ebp + 0x58], 3 */ W32((u32)(r_ebp+0x58u), 0x3u);
    /* 00870475: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00870477: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0087047a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087047b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0087047c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087047d: ret  */ FN_RET(0x0087044c); r_esp += 4; return;
L_0087047e:; BB(0x0087047e);
    /* 0087047e: mov dword ptr [ebp + 0x58], 2 */ W32((u32)(r_ebp+0x58u), 0x2u);
    /* 00870485: mov eax, ebp */ r_eax = r_ebp;
    /* 00870487: call 0x8705b8 */ r_esp -= 4; W32(r_esp, 0x87048cu); f_008705b8();
    /* 0087048c: mov edi, eax */ r_edi = r_eax;
    /* 0087048e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00870490: je 0x87058c */ if (fZ) goto L_0087058c;
L_00870496:; BB(0x00870496);
    /* 00870496: mov dword ptr [ebp], 0 */ W32((u32)(r_ebp), 0x0u);
    /* 0087049d: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087049f: je 0x87058c */ if (fZ) goto L_0087058c;
L_008704a5:; BB(0x008704a5);
    /* 008704a5: lea edx, [ebp + 0x250] */ r_edx = (u32)(r_ebp+0x250u);
    /* 008704ab: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008704ac: call 0x873ec4 */ r_esp -= 4; W32(r_esp, 0x8704b1u); f_00873ec4();
    /* 008704b1: lea edx, [ebp + 0x1e0] */ r_edx = (u32)(r_ebp+0x1e0u);
    /* 008704b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008704b8: call 0x873fc4 */ r_esp -= 4; W32(r_esp, 0x8704bdu); f_00873fc4();
    /* 008704bd: lea edx, [ebp + 0x78] */ r_edx = (u32)(r_ebp+0x78u);
    /* 008704c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008704c1: call 0x876024 */ r_esp -= 4; W32(r_esp, 0x8704c6u); f_00876024();
    /* 008704c6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008704c9: mov edx, dword ptr [ebp + 0x48] */ r_edx = R32((u32)(r_ebp+0x48u));
    /* 008704cc: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008704ce: je 0x87052b */ if (fZ) goto L_0087052b;
L_008704d0:; BB(0x008704d0);
    /* 008704d0: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 008704d3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008704d5: je 0x87052b */ if (fZ) goto L_0087052b;
L_008704d7:; BB(0x008704d7);
    /* 008704d7: mov eax, 0 */ r_eax = 0x0u;
    /* 008704dc: jle 0x8705a0 */ if ((fZ||fS!=fO)) goto L_008705a0;
L_008704e2:; BB(0x008704e2);
    /* 008704e2: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 008704e5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008704e7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008704e9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008704eb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008704ed: lea esi, [eax + eax] */ r_esi = (u32)(r_eax+r_eax);
    /* 008704f0: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008704f2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008704f4: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008704f6: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 008704fa: mov edi, ecx */ r_edi = r_ecx;
    /* 008704fc: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00870500: mov ebx, eax */ r_ebx = r_eax;
    /* 00870502: jmp 0x870507 */ goto L_00870507;
L_00870504:; BB(0x00870504);
    /* 00870504: mov edx, dword ptr [ebp + 0x48] */ r_edx = R32((u32)(r_ebp+0x48u));
L_00870507:; BB(0x00870507);
    /* 00870507: add edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870509: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087050a: call 0x876cd8 */ r_esp -= 4; W32(r_esp, 0x87050fu); f_00876cd8();
    /* 0087050f: mov edx, esi */ r_edx = r_esi;
    /* 00870511: add edx, dword ptr [ebp + 0x4c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x4cu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870514: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00870515: call 0x876c4c */ r_esp -= 4; W32(r_esp, 0x87051au); f_00876c4c();
    /* 0087051a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087051d: add edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00870520: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00870523: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00870524: cmp ebx, dword ptr [ebp + 0x34] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_ebp+0x34u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00870527: jl 0x870504 */ if ((fS!=fO)) goto L_00870504;
L_00870529:; BB(0x00870529);
    /* 00870529: jmp 0x870595 */ goto L_00870595;
L_0087052b:; BB(0x0087052b);
    /* 0087052b: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 0087052e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00870530: je 0x870539 */ if (fZ) goto L_00870539;
L_00870532:; BB(0x00870532);
    /* 00870532: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00870533: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x870538u); f_00858882();
    /* 00870538: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00870539:; BB(0x00870539);
    /* 00870539: mov edx, dword ptr [ebp + 0x44] */ r_edx = R32((u32)(r_ebp+0x44u));
    /* 0087053c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087053e: je 0x870547 */ if (fZ) goto L_00870547;
L_00870540:; BB(0x00870540);
    /* 00870540: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00870541: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x870546u); f_00858882();
    /* 00870546: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00870547:; BB(0x00870547);
    /* 00870547: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 0087054a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087054c: je 0x870555 */ if (fZ) goto L_00870555;
L_0087054e:; BB(0x0087054e);
    /* 0087054e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087054f: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x870554u); f_00858882();
    /* 00870554: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00870555:; BB(0x00870555);
    /* 00870555: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 00870558: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087055a: je 0x870563 */ if (fZ) goto L_00870563;
L_0087055c:; BB(0x0087055c);
    /* 0087055c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087055d: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x870562u); f_00858882();
    /* 00870562: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00870563:; BB(0x00870563);
    /* 00870563: lea edx, [ebp + 0x18] */ r_edx = (u32)(r_ebp+0x18u);
    /* 00870566: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00870567: call 0x8760d4 */ r_esp -= 4; W32(r_esp, 0x87056cu); f_008760d4();
    /* 0087056c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0087056d: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00870570: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00870572: je 0x87057c */ if (fZ) goto L_0087057c;
L_00870574:; BB(0x00870574);
    /* 00870574: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00870575: call dword ptr [ebp + 0x2c8] */ { u32 t = R32((u32)(r_ebp+0x2c8u)); r_esp -= 4; W32(r_esp, 0x87057bu); call_ind(t); }
    /* 0087057b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0087057c:; BB(0x0087057c);
    /* 0087057c: push 0x2d0 */ { u32 v = 0x2d0u; r_esp -= 4; W32(r_esp, v); }
    /* 00870581: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00870583: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00870584: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x870589u); f_0086b688();
    /* 00870589: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0087058c:; BB(0x0087058c);
    /* 0087058c: mov eax, edi */ r_eax = r_edi;
    /* 0087058e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00870591: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00870592: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00870593: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00870594: ret  */ FN_RET(0x0087044c); r_esp += 4; return;
L_00870595:; BB(0x00870595);
    /* 00870595: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00870599: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 0087059d: mov edx, dword ptr [ebp + 0x48] */ r_edx = R32((u32)(r_ebp+0x48u));
L_008705a0:; BB(0x008705a0);
    /* 008705a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008705a1: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8705a6u); f_00858882();
    /* 008705a6: push dword ptr [ebp + 0x4c] */ { u32 v = R32((u32)(r_ebp+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008705a9: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8705aeu); f_00858882();
    /* 008705ae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008705b1: jmp 0x87052b */ goto L_0087052b;
}

void f_008705b8(void) /* sub_8705B8 */
{
    FN_ENTER(0x008705b8);
    /* 008705b8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008705b9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008705ba: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008705bb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008705bc: sub esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008705bf: mov edi, eax */ r_edi = r_eax;
    /* 008705c1: mov esi, dword ptr [edi + 0x5c] */ r_esi = R32((u32)(r_edi+0x5cu));
    /* 008705c4: mov ecx, dword ptr [edi + 8] */ r_ecx = R32((u32)(r_edi+0x8u));
    /* 008705c7: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 008705cb: mov ecx, dword ptr [edi + 0xc] */ r_ecx = R32((u32)(r_edi+0xcu));
    /* 008705ce: mov dword ptr [esp + 0x34], ecx */ W32((u32)(r_esp+0x34u), r_ecx);
    /* 008705d2: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008705d4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 008705d6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008705d7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008705d8: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 008705da: call dword ptr [edi + 0x2c4] */ { u32 t = R32((u32)(r_edi+0x2c4u)); r_esp -= 4; W32(r_esp, 0x8705e0u); call_ind(t); }
    /* 008705e0: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 008705e2: call dword ptr [edi + 0x2cc] */ { u32 t = R32((u32)(r_edi+0x2ccu)); r_esp -= 4; W32(r_esp, 0x8705e8u); call_ind(t); }
    /* 008705e8: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008705eb: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008705ec: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 008705ef: mov dword ptr [edi + 0x14], edx */ W32((u32)(r_edi+0x14u), r_edx);
    /* 008705f2: mov dword ptr [edi + 8], eax */ W32((u32)(r_edi+0x8u), r_eax);
    /* 008705f5: mov dword ptr [edi + 0xc], edx */ W32((u32)(r_edi+0xcu), r_edx);
    /* 008705f8: mov eax, edi */ r_eax = r_edi;
    /* 008705fa: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 008705fe: call 0x8713c8 */ r_esp -= 4; W32(r_esp, 0x870603u); f_008713c8();
    /* 00870603: mov ebx, edx */ r_ebx = r_edx;
    /* 00870605: mov ebp, eax */ r_ebp = r_eax;
    /* 00870607: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00870609: sub ecx, 0 */ {  u32 a = r_ecx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087060c: jl 0x8706c5 */ if ((fS!=fO)) goto L_008706c5;
L_00870612:; BB(0x00870612);
    /* 00870612: lea ecx, [esp + 0x24] */ r_ecx = (u32)(r_esp+0x24u);
    /* 00870616: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00870617: call 0x875ffc */ r_esp -= 4; W32(r_esp, 0x87061cu); f_00875ffc();
    /* 0087061c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0087061d: cmp eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087061f: je 0x870655 */ if (fZ) goto L_00870655;
L_00870621:; BB(0x00870621);
    /* 00870621: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r; fC = (r < a); }
    /* 00870624: mov ecx, 0 */ r_ecx = 0x0u;
    /* 00870629: mov eax, edi */ r_eax = r_edi;
    /* 0087062b: adc ebx, 0 */ { u32 c = fC; u32 a = r_ebx; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_ebx = r;  }
    /* 0087062e: mov edx, esi */ r_edx = r_esi;
    /* 00870630: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00870634: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00870638: mov dword ptr [esp + 0xc], ecx */ W32((u32)(r_esp+0xcu), r_ecx);
    /* 0087063c: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 00870640: mov dword ptr [esp + 0x14], ebp */ W32((u32)(r_esp+0x14u), r_ebp);
    /* 00870644: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00870646: mov dword ptr [esp + 0x18], ebx */ W32((u32)(r_esp+0x18u), r_ebx);
    /* 0087064a: call 0x8706d0 */ r_esp -= 4; W32(r_esp, 0x87064fu); f_008706d0();
    /* 0087064f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00870651: jl 0x870688 */ if ((fS!=fO)) goto L_00870688;
L_00870653:; BB(0x00870653);
    /* 00870653: jmp 0x870695 */ goto L_00870695;
L_00870655:; BB(0x00870655);
    /* 00870655: mov eax, ebp */ r_eax = r_ebp;
    /* 00870657: mov edx, ebx */ r_edx = r_ebx;
    /* 00870659: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0087065b: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 0087065e: adc edx, 0 */ { u32 c = fC; u32 a = r_edx; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 00870661: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00870665: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00870669: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 0087066d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0087066f: mov dword ptr [esp + 0x10], ebx */ W32((u32)(r_esp+0x10u), r_ebx);
    /* 00870673: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 00870677: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 0087067b: mov eax, edi */ r_eax = r_edi;
    /* 0087067d: mov edx, esi */ r_edx = r_esi;
    /* 0087067f: call 0x8706d0 */ r_esp -= 4; W32(r_esp, 0x870684u); f_008706d0();
    /* 00870684: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00870686: je 0x870695 */ if (fZ) goto L_00870695;
L_00870688:; BB(0x00870688);
    /* 00870688: mov eax, 0xffffff80 */ r_eax = 0xffffff80u;
    /* 0087068d: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00870690: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00870691: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00870692: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00870693: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00870694: ret  */ FN_RET(0x008705b8); r_esp += 4; return;
L_00870695:; BB(0x00870695);
    /* 00870695: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 00870699: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 0087069d: mov eax, edi */ r_eax = r_edi;
    /* 0087069f: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 008706a3: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008706a7: call 0x870b84 */ r_esp -= 4; W32(r_esp, 0x8706acu); f_00870b84();
    /* 008706ac: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008706ae: mov eax, edi */ r_eax = r_edi;
    /* 008706b0: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 008706b4: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 008706b8: call 0x87177c */ r_esp -= 4; W32(r_esp, 0x8706bdu); f_0087177c();
    /* 008706bd: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008706c0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008706c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008706c2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008706c3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008706c4: ret  */ FN_RET(0x008705b8); r_esp += 4; return;
L_008706c5:; BB(0x008706c5);
    /* 008706c5: mov eax, ebp */ r_eax = r_ebp;
    /* 008706c7: add esp, 0x3c */ {  u32 a = r_esp; u32 b = 0x3cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008706ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008706cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008706cc: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008706cd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008706ce: ret  */ FN_RET(0x008705b8); r_esp += 4; return;
}

void f_008706d0(void) /* sub_8706D0 */
{
    FN_ENTER(0x008706d0);
    /* 008706d0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008706d1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008706d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008706d3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008706d4: sub esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008706d7: mov dword ptr [esp + 0x48], ecx */ W32((u32)(r_esp+0x48u), r_ecx);
    /* 008706db: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 008706df: mov ebp, eax */ r_ebp = r_eax;
    /* 008706e1: mov ebx, dword ptr [esp + 0x80] */ r_ebx = R32((u32)(r_esp+0x80u));
    /* 008706e8: mov ecx, dword ptr [esp + 0x84] */ r_ecx = R32((u32)(r_esp+0x84u));
    /* 008706ef: mov dword ptr [esp + 0x3c], ebx */ W32((u32)(r_esp+0x3cu), r_ebx);
    /* 008706f3: mov edi, dword ptr [esp + 0x88] */ r_edi = R32((u32)(r_esp+0x88u));
    /* 008706fa: mov esi, dword ptr [esp + 0x8c] */ r_esi = R32((u32)(r_esp+0x8cu));
    /* 00870701: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 00870705: mov edx, edi */ r_edx = r_edi;
    /* 00870707: mov eax, esi */ r_eax = r_esi;
    /* 00870709: mov dword ptr [esp + 0x38], edi */ W32((u32)(r_esp+0x38u), r_edi);
    /* 0087070d: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
    /* 00870711: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fC = (a < b); }
    /* 00870713: sbb ecx, esi */ { u32 c = fC; u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00870715: jge 0x870b2c */ if ((fS==fO)) goto L_00870b2c;
L_0087071b:; BB(0x0087071b);
    /* 0087071b: lea ebx, [ebp + 0x18] */ r_ebx = (u32)(r_ebp+0x18u);
    /* 0087071e: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00870722: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
L_00870726:; BB(0x00870726);
    /* 00870726: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 0087072a: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 0087072e: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 00870730: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
    /* 00870734: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 00870738: sbb esi, edi */ { u32 c = fC; u32 a = r_esi; u32 b = r_edi; u32 r = (a - b - c) & 0xffffffffu; r_esi = r;  }
    /* 0087073a: sub edx, 0x2134 */ {  u32 a = r_edx; u32 b = 0x2134u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 00870740: sbb esi, 0 */ { u32 c = fC; u32 a = r_esi; u32 b = 0x0u; u32 r = (a - b - c) & 0xffffffffu; r_esi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00870743: jge 0x870753 */ if ((fS==fO)) goto L_00870753;
L_00870745:; BB(0x00870745);
    /* 00870745: mov edx, ecx */ r_edx = r_ecx;
    /* 00870747: mov ecx, edi */ r_ecx = r_edi;
    /* 00870749: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 0087074d: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 00870751: jmp 0x870791 */ goto L_00870791;
L_00870753:; BB(0x00870753);
    /* 00870753: mov edx, ecx */ r_edx = r_ecx;
    /* 00870755: mov ecx, dword ptr [esp + 0x58] */ r_ecx = R32((u32)(r_esp+0x58u));
    /* 00870759: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fC = (r < a); }
    /* 0087075b: mov esi, edi */ r_esi = r_edi;
    /* 0087075d: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00870761: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00870765: adc esi, edi */ { u32 c = fC; u32 a = r_esi; u32 b = r_edi; u32 r = (a + b + c) & 0xffffffffu; r_esi = r;  }
    /* 00870767: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00870769: mov dword ptr [esp + 0x50], esi */ W32((u32)(r_esp+0x50u), r_esi);
    /* 0087076d: jge 0x87077f */ if ((fS==fO)) goto L_0087077f;
L_0087076f:; BB(0x0087076f);
    /* 0087076f: mov ecx, esi */ r_ecx = r_esi;
    /* 00870771: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fC = (r < a); }
    /* 00870774: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 00870778: adc ecx, 0 */ { u32 c = fC; u32 a = r_ecx; u32 b = 0x0u; u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 0087077b: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
L_0087077f:; BB(0x0087077f);
    /* 0087077f: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 00870783: shrd edx, ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 b = r_ecx; u32 r = a; if (c) { r = (a >> c) | (b << (32 - c)); fC = (a >> (c - 1)) & 1; r_edx = r; } }
    /* 00870787: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00870789: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 0087078d: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
L_00870791:; BB(0x00870791);
    /* 00870791: mov esi, dword ptr [ebp] */ r_esi = R32((u32)(r_ebp));
    /* 00870794: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00870796: je 0x8707c0 */ if (fZ) goto L_008707c0;
L_00870798:; BB(0x00870798);
    /* 00870798: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0087079a: mov edx, ecx */ r_edx = r_ecx;
    /* 0087079c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087079d: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 008707a1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008707a2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008707a3: call dword ptr [ebp + 0x2c4] */ { u32 t = R32((u32)(r_ebp+0x2c4u)); r_esp -= 4; W32(r_esp, 0x8707a9u); call_ind(t); }
    /* 008707a9: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 008707ad: mov ecx, dword ptr [esp + 0x60] */ r_ecx = R32((u32)(r_esp+0x60u));
    /* 008707b1: mov dword ptr [ebp + 8], edx */ W32((u32)(r_ebp+0x8u), r_edx);
    /* 008707b4: mov dword ptr [ebp + 0xc], ecx */ W32((u32)(r_ebp+0xcu), r_ecx);
    /* 008707b7: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008707b8: call 0x876954 */ r_esp -= 4; W32(r_esp, 0x8707bdu); f_00876954();
    /* 008707bd: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_008707c0:; BB(0x008707c0);
    /* 008707c0: lea esi, [esp + 0x24] */ r_esi = (u32)(r_esp+0x24u);
L_008707c4:; BB(0x008707c4);
    /* 008707c4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008707c5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008707c6: call 0x876198 */ r_esp -= 4; W32(r_esp, 0x8707cbu); f_00876198();
    /* 008707cb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008707ce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008707d0: jl 0x870b16 */ if ((fS!=fO)) goto L_00870b16;
L_008707d6:; BB(0x008707d6);
    /* 008707d6: jne 0x870afc */ if (!fZ) goto L_00870afc;
L_008707dc:; BB(0x008707dc);
    /* 008707dc: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x8707e1u); f_00859dd6();
    /* 008707e1: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 008707e7: cmp dword ptr [ebp], 0 */ {  u32 a = R32((u32)(r_ebp)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008707eb: je 0x870831 */ if (fZ) goto L_00870831;
L_008707ed:; BB(0x008707ed);
    /* 008707ed: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 008707f2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008707f3: call 0x8760f8 */ r_esp -= 4; W32(r_esp, 0x8707f8u); f_008760f8();
    /* 008707f8: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 008707fb: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 00870800: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00870802: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00870803: call dword ptr [ebp + 0x2c0] */ { u32 t = R32((u32)(r_ebp+0x2c0u)); r_esp -= 4; W32(r_esp, 0x870809u); call_ind(t); }
    /* 00870809: mov edi, eax */ r_edi = r_eax;
    /* 0087080b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087080e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00870810: jle 0x87081e */ if ((fZ||fS!=fO)) goto L_0087081e;
L_00870812:; BB(0x00870812);
    /* 00870812: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00870813: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00870814: call 0x87617c */ r_esp -= 4; W32(r_esp, 0x870819u); f_0087617c();
    /* 00870819: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087081c: jmp 0x870833 */ goto L_00870833;
L_0087081e:; BB(0x0087081e);
    /* 0087081e: jne 0x870833 */ if (!fZ) goto L_00870833;
L_00870820:; BB(0x00870820);
    /* 00870820: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x870825u); f_00859dd6();
    /* 00870825: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00870828: je 0x870833 */ if (fZ) goto L_00870833;
L_0087082a:; BB(0x0087082a);
    /* 0087082a: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 0087082f: jmp 0x870833 */ goto L_00870833;
L_00870831:; BB(0x00870831);
    /* 00870831: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00870833:; BB(0x00870833);
    /* 00870833: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00870835: je 0x870ae9 */ if (fZ) goto L_00870ae9;
L_0087083b:; BB(0x0087083b);
    /* 0087083b: jge 0x8707c4 */ if ((fS==fO)) goto L_008707c4;
L_0087083d:; BB(0x0087083d);
    /* 0087083d: mov edx, 0xffffff80 */ r_edx = 0xffffff80u;
    /* 00870842: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 00870847: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
L_0087084b:; BB(0x0087084b);
    /* 0087084b: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 0087084f: lea edi, [edx + 0x80] */ r_edi = (u32)(r_edx+0x80u);
    /* 00870855: lea ecx, [esi + 1] */ r_ecx = (u32)(r_esi+0x1u);
    /* 00870858: or edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 0087085a: je 0x870b41 */ if (fZ) goto L_00870b41;
L_00870860:; BB(0x00870860);
    /* 00870860: mov edx, esi */ r_edx = r_esi;
    /* 00870862: sub edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00870865: jl 0x87089e */ if ((fS!=fO)) goto L_0087089e;
L_00870867:; BB(0x00870867);
    /* 00870867: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 0087086b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087086c: call 0x875ffc */ r_esp -= 4; W32(r_esp, 0x870871u); f_00875ffc();
    /* 00870871: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00870872: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 00870876: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00870878: jne 0x87089e */ if (!fZ) goto L_0087089e;
L_0087087a:; BB(0x0087087a);
    /* 0087087a: mov ecx, dword ptr [esp + 0x28] */ r_ecx = R32((u32)(r_esp+0x28u));
    /* 0087087e: mov eax, ecx */ r_eax = r_ecx;
    /* 00870880: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00870881: mov edi, edx */ r_edi = r_edx;
    /* 00870883: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 00870887: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00870888: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 0087088a: adc edi, edx */ { u32 c = fC; u32 a = r_edi; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_edi = r;  }
    /* 0087088c: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 00870890: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 00870892: mov dword ptr [esp + 0x3c], ecx */ W32((u32)(r_esp+0x3cu), r_ecx);
    /* 00870896: adc edi, esi */ { u32 c = fC; u32 a = r_edi; u32 b = r_esi; u32 r = (a + b + c) & 0xffffffffu; r_edi = r;  }
    /* 00870898: mov dword ptr [esp + 0x40], edi */ W32((u32)(r_esp+0x40u), r_edi);
    /* 0087089c: jmp 0x8708c1 */ goto L_008708c1;
L_0087089e:; BB(0x0087089e);
    /* 0087089e: mov edx, dword ptr [esp + 0x4c] */ r_edx = R32((u32)(r_esp+0x4cu));
    /* 008708a2: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 008708a6: mov edi, esi */ r_edi = r_esi;
    /* 008708a8: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 008708ac: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 008708b0: sub edi, 0 */ {  u32 a = r_edi; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_edi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008708b3: jl 0x8708c1 */ if ((fS!=fO)) goto L_008708c1;
L_008708b5:; BB(0x008708b5);
    /* 008708b5: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 008708b9: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 008708bd: mov dword ptr [esp + 0x34], esi */ W32((u32)(r_esp+0x34u), r_esi);
L_008708c1:; BB(0x008708c1);
    /* 008708c1: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 008708c5: mov ecx, dword ptr [esp + 0x58] */ r_ecx = R32((u32)(r_esp+0x58u));
    /* 008708c9: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 008708cb: mov esi, dword ptr [esp + 0x40] */ r_esi = R32((u32)(r_esp+0x40u));
    /* 008708cf: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 008708d3: sbb esi, edi */ { u32 c = fC; u32 a = r_esi; u32 b = r_edi; u32 r = (a - b - c) & 0xffffffffu; r_esi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008708d5: jl 0x870726 */ if ((fS!=fO)) goto L_00870726;
L_008708db:; BB(0x008708db);
    /* 008708db: mov esi, dword ptr [esp + 0x8c] */ r_esi = R32((u32)(r_esp+0x8cu));
    /* 008708e2: mov edi, dword ptr [esp + 0x88] */ r_edi = R32((u32)(r_esp+0x88u));
L_008708e9:; BB(0x008708e9);
    /* 008708e9: mov edx, dword ptr [esp + 0x38] */ r_edx = R32((u32)(r_esp+0x38u));
    /* 008708ed: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 008708f1: mov eax, ebp */ r_eax = r_ebp;
    /* 008708f3: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 008708f7: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 008708fb: call 0x870b50 */ r_esp -= 4; W32(r_esp, 0x870900u); f_00870b50();
    /* 00870900: lea eax, [esp + 0x24] */ r_eax = (u32)(r_esp+0x24u);
    /* 00870904: mov esi, eax */ r_esi = r_eax;
L_00870906:; BB(0x00870906);
    /* 00870906: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00870907: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00870908: call 0x876198 */ r_esp -= 4; W32(r_esp, 0x87090du); f_00876198();
    /* 0087090d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00870910: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00870912: jl 0x870ad3 */ if ((fS!=fO)) goto L_00870ad3;
L_00870918:; BB(0x00870918);
    /* 00870918: jne 0x870aaf */ if (!fZ) goto L_00870aaf;
L_0087091e:; BB(0x0087091e);
    /* 0087091e: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x870923u); f_00859dd6();
    /* 00870923: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00870929: cmp dword ptr [ebp], 0 */ {  u32 a = R32((u32)(r_ebp)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087092d: je 0x870973 */ if (fZ) goto L_00870973;
L_0087092f:; BB(0x0087092f);
    /* 0087092f: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 00870934: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00870935: call 0x8760f8 */ r_esp -= 4; W32(r_esp, 0x87093au); f_008760f8();
    /* 0087093a: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 0087093d: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 00870942: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00870944: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00870945: call dword ptr [ebp + 0x2c0] */ { u32 t = R32((u32)(r_ebp+0x2c0u)); r_esp -= 4; W32(r_esp, 0x87094bu); call_ind(t); }
    /* 0087094b: mov edi, eax */ r_edi = r_eax;
    /* 0087094d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00870950: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00870952: jle 0x870960 */ if ((fZ||fS!=fO)) goto L_00870960;
L_00870954:; BB(0x00870954);
    /* 00870954: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00870955: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00870956: call 0x87617c */ r_esp -= 4; W32(r_esp, 0x87095bu); f_0087617c();
    /* 0087095b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087095e: jmp 0x870975 */ goto L_00870975;
L_00870960:; BB(0x00870960);
    /* 00870960: jne 0x870975 */ if (!fZ) goto L_00870975;
L_00870962:; BB(0x00870962);
    /* 00870962: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x870967u); f_00859dd6();
    /* 00870967: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087096a: je 0x870975 */ if (fZ) goto L_00870975;
L_0087096c:; BB(0x0087096c);
    /* 0087096c: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00870971: jmp 0x870975 */ goto L_00870975;
L_00870973:; BB(0x00870973);
    /* 00870973: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00870975:; BB(0x00870975);
    /* 00870975: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00870977: je 0x870a92 */ if (fZ) goto L_00870a92;
L_0087097d:; BB(0x0087097d);
    /* 0087097d: jge 0x870906 */ if ((fS==fO)) goto L_00870906;
L_0087097f:; BB(0x0087097f);
    /* 0087097f: mov esi, dword ptr [esp + 0x8c] */ r_esi = R32((u32)(r_esp+0x8cu));
    /* 00870986: mov edi, dword ptr [esp + 0x88] */ r_edi = R32((u32)(r_esp+0x88u));
    /* 0087098d: mov ebx, 0xffffff80 */ r_ebx = 0xffffff80u;
    /* 00870992: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
L_00870997:; BB(0x00870997);
    /* 00870997: add ebx, 0x80 */ {  u32 a = r_ebx; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0087099d: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 008709a0: or ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebx = r; fZ = (r == 0); }
    /* 008709a2: je 0x870b34 */ if (fZ) goto L_00870b34;
L_008709a8:; BB(0x008709a8);
    /* 008709a8: mov edx, dword ptr [esp + 0x3c] */ r_edx = R32((u32)(r_esp+0x3cu));
    /* 008709ac: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 008709b0: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 008709b2: sbb ebx, esi */ { u32 c = fC; u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b - c) & 0xffffffffu; r_ebx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008709b4: jge 0x870a1a */ if ((fS==fO)) goto L_00870a1a;
L_008709b6:; BB(0x008709b6);
    /* 008709b6: sub ecx, 0 */ {  u32 a = r_ecx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008709b9: jl 0x870a1a */ if ((fS!=fO)) goto L_00870a1a;
L_008709bb:; BB(0x008709bb);
    /* 008709bb: lea edx, [esp + 0x24] */ r_edx = (u32)(r_esp+0x24u);
    /* 008709bf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008709c0: call 0x875ffc */ r_esp -= 4; W32(r_esp, 0x8709c5u); f_00875ffc();
    /* 008709c5: mov edx, eax */ r_edx = r_eax;
    /* 008709c7: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008709ca: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 008709ce: lea ecx, [ebx + 1] */ r_ecx = (u32)(r_ebx+0x1u);
    /* 008709d1: mov ebx, dword ptr [esp + 0x38] */ r_ebx = R32((u32)(r_esp+0x38u));
    /* 008709d5: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 008709d9: mov ebx, dword ptr [esp + 0x34] */ r_ebx = R32((u32)(r_esp+0x34u));
    /* 008709dd: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 008709e0: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 008709e4: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 008709e7: mov dword ptr [esp + 0xc], ebx */ W32((u32)(r_esp+0xcu), r_ebx);
    /* 008709eb: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 008709ef: mov eax, ebp */ r_eax = r_ebp;
    /* 008709f1: mov dword ptr [esp + 0x14], edi */ W32((u32)(r_esp+0x14u), r_edi);
    /* 008709f5: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 008709f9: call 0x8706d0 */ r_esp -= 4; W32(r_esp, 0x8709feu); f_008706d0();
    /* 008709fe: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008709ff: add eax, 0x80 */ {  u32 a = r_eax; u32 b = 0x80u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00870a04: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870a05: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00870a07: je 0x870b34 */ if (fZ) goto L_00870b34;
L_00870a0d:; BB(0x00870a0d);
    /* 00870a0d: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00870a11: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 00870a14: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870a16: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870a18: jmp 0x870a68 */ goto L_00870a68;
L_00870a1a:; BB(0x00870a1a);
    /* 00870a1a: mov ecx, dword ptr [esp + 0x48] */ r_ecx = R32((u32)(r_esp+0x48u));
    /* 00870a1e: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 00870a21: lea ebx, [ecx + ecx + 2] */ r_ebx = (u32)(r_ecx+r_ecx+0x2u);
    /* 00870a25: mov dword ptr [ebp + 0x34], edx */ W32((u32)(r_ebp+0x34u), r_edx);
    /* 00870a28: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00870a2a: lea esi, [ebx + ebx + 8] */ r_esi = (u32)(r_ebx+r_ebx+0x8u);
    /* 00870a2e: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00870a2f: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x870a34u); f_00859c55();
    /* 00870a34: mov dword ptr [ebp + 0x38], eax */ W32((u32)(r_ebp+0x38u), r_eax);
    /* 00870a37: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 00870a3a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870a3c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870a3e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00870a3f: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x870a44u); f_00859c55();
    /* 00870a44: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00870a47: mov dword ptr [ebp + 0x40], eax */ W32((u32)(r_ebp+0x40u), r_eax);
    /* 00870a4a: mov edx, dword ptr [esp + 0x48] */ r_edx = R32((u32)(r_esp+0x48u));
    /* 00870a4e: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 00870a51: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870a53: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870a55: mov esi, dword ptr [ebp + 0x38] */ r_esi = R32((u32)(r_ebp+0x38u));
    /* 00870a58: mov ecx, dword ptr [esp + 0x3c] */ r_ecx = R32((u32)(r_esp+0x3cu));
    /* 00870a5c: mov ebx, dword ptr [esp + 0x40] */ r_ebx = R32((u32)(r_esp+0x40u));
    /* 00870a60: mov dword ptr [esi + edx + 8], ecx */ W32((u32)(r_esi+r_edx+0x8u), r_ecx);
    /* 00870a64: mov dword ptr [esi + edx + 0xc], ebx */ W32((u32)(r_esi+r_edx+0xcu), r_ebx);
L_00870a68:; BB(0x00870a68);
    /* 00870a68: mov esi, dword ptr [ebp + 0x38] */ r_esi = R32((u32)(r_ebp+0x38u));
    /* 00870a6b: mov ecx, dword ptr [esp + 0x78] */ r_ecx = R32((u32)(r_esp+0x78u));
    /* 00870a6f: mov ebx, dword ptr [esp + 0x7c] */ r_ebx = R32((u32)(r_esp+0x7cu));
    /* 00870a73: mov dword ptr [esi + edx], ecx */ W32((u32)(r_esi+r_edx), r_ecx);
    /* 00870a76: mov dword ptr [esi + edx + 4], ebx */ W32((u32)(r_esi+r_edx+0x4u), r_ebx);
    /* 00870a7a: mov eax, dword ptr [ebp + 0x40] */ r_eax = R32((u32)(r_ebp+0x40u));
    /* 00870a7d: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 00870a81: mov ebp, dword ptr [esp + 0x48] */ r_ebp = R32((u32)(r_esp+0x48u));
    /* 00870a85: mov dword ptr [eax + ebp*4], edx */ W32((u32)(r_eax+r_ebp*4), r_edx);
    /* 00870a88: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00870a8a: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00870a8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00870a8e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00870a8f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00870a90: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00870a91: ret  */ FN_RET(0x008706d0); r_esp += 4; return;
L_00870a92:; BB(0x00870a92);
    /* 00870a92: mov esi, dword ptr [esp + 0x8c] */ r_esi = R32((u32)(r_esp+0x8cu));
    /* 00870a99: mov edi, dword ptr [esp + 0x88] */ r_edi = R32((u32)(r_esp+0x88u));
    /* 00870aa0: mov ebx, 0xfffffffe */ r_ebx = 0xfffffffeu;
    /* 00870aa5: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00870aaa: jmp 0x870997 */ goto L_00870997;
L_00870aaf:; BB(0x00870aaf);
    /* 00870aaf: mov esi, dword ptr [esp + 0x8c] */ r_esi = R32((u32)(r_esp+0x8cu));
    /* 00870ab6: mov edi, dword ptr [esp + 0x88] */ r_edi = R32((u32)(r_esp+0x88u));
    /* 00870abd: mov ebx, dword ptr [ebp + 8] */ r_ebx = R32((u32)(r_ebp+0x8u));
    /* 00870ac0: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00870ac3: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00870ac4: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 00870ac6: adc edx, ecx */ { u32 c = fC; u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 00870ac8: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00870acb: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 00870ace: jmp 0x870997 */ goto L_00870997;
L_00870ad3:; BB(0x00870ad3);
    /* 00870ad3: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00870ad6: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 00870ad9: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00870ada: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 00870adc: sbb edi, edx */ { u32 c = fC; u32 a = r_edi; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edi = r;  }
    /* 00870ade: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 00870ae1: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 00870ae4: jmp 0x870906 */ goto L_00870906;
L_00870ae9:; BB(0x00870ae9);
    /* 00870ae9: mov edx, 0xfffffffe */ r_edx = 0xfffffffeu;
    /* 00870aee: mov esi, 0xffffffff */ r_esi = 0xffffffffu;
    /* 00870af3: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 00870af7: jmp 0x87084b */ goto L_0087084b;
L_00870afc:; BB(0x00870afc);
    /* 00870afc: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00870aff: mov esi, dword ptr [ebp + 0xc] */ r_esi = R32((u32)(r_ebp+0xcu));
    /* 00870b02: mov dword ptr [esp + 0x5c], ecx */ W32((u32)(r_esp+0x5cu), r_ecx);
    /* 00870b06: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00870b07: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 00870b09: adc edx, esi */ { u32 c = fC; u32 a = r_edx; u32 b = r_esi; u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 00870b0b: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00870b0e: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 00870b11: jmp 0x87084b */ goto L_0087084b;
L_00870b16:; BB(0x00870b16);
    /* 00870b16: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00870b19: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 00870b1c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00870b1d: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 00870b1f: sbb edi, edx */ { u32 c = fC; u32 a = r_edi; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edi = r;  }
    /* 00870b21: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 00870b24: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 00870b27: jmp 0x8707c4 */ goto L_008707c4;
L_00870b2c:; BB(0x00870b2c);
    /* 00870b2c: lea ebx, [ebp + 0x18] */ r_ebx = (u32)(r_ebp+0x18u);
    /* 00870b2f: jmp 0x8708e9 */ goto L_008708e9;
L_00870b34:; BB(0x00870b34);
    /* 00870b34: mov eax, 0xffffff80 */ r_eax = 0xffffff80u;
    /* 00870b39: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00870b3c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00870b3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00870b3e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00870b3f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00870b40: ret  */ FN_RET(0x008706d0); r_esp += 4; return;
L_00870b41:; BB(0x00870b41);
    /* 00870b41: mov eax, 0xffffff80 */ r_eax = 0xffffff80u;
    /* 00870b46: add esp, 0x60 */ {  u32 a = r_esp; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00870b49: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00870b4a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00870b4b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00870b4c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00870b4d: ret  */ FN_RET(0x008706d0); r_esp += 4; return;
}

void f_00870b50(void) /* sub_870B50 */
{
    FN_ENTER(0x00870b50);
    /* 00870b50: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00870b51: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00870b52: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00870b53: mov esi, eax */ r_esi = r_eax;
    /* 00870b55: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 00870b59: mov ebx, dword ptr [esp + 0x18] */ r_ebx = R32((u32)(r_esp+0x18u));
    /* 00870b5d: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00870b5f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00870b61: je 0x870b80 */ if (fZ) goto L_00870b80;
L_00870b63:; BB(0x00870b63);
    /* 00870b63: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00870b65: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00870b66: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00870b67: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00870b68: call dword ptr [esi + 0x2c4] */ { u32 t = R32((u32)(r_esi+0x2c4u)); r_esp -= 4; W32(r_esp, 0x870b6eu); call_ind(t); }
    /* 00870b6e: mov dword ptr [esi + 8], ebp */ W32((u32)(r_esi+0x8u), r_ebp);
    /* 00870b71: mov dword ptr [esi + 0xc], ebx */ W32((u32)(r_esi+0xcu), r_ebx);
    /* 00870b74: add esi, 0x18 */ {  u32 a = r_esi; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00870b77: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00870b78: call 0x876954 */ r_esp -= 4; W32(r_esp, 0x870b7du); f_00876954();
    /* 00870b7d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00870b80:; BB(0x00870b80);
    /* 00870b80: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00870b81: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00870b82: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00870b83: ret  */ FN_RET(0x00870b50); r_esp += 4; return;
}

void f_00870b84(void) /* sub_870B84 */
{
    FN_ENTER(0x00870b84);
    /* 00870b84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00870b85: sub esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00870b88: mov ebp, eax */ r_ebp = r_eax;
    /* 00870b8a: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 00870b8d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870b8f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870b91: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870b93: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870b95: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870b97: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00870b98: push dword ptr [ebp + 0x48] */ { u32 v = R32((u32)(r_ebp+0x48u)); r_esp -= 4; W32(r_esp, v); }
    /* 00870b9b: call 0x860f6c */ r_esp -= 4; W32(r_esp, 0x870ba0u); f_00860f6c();
    /* 00870ba0: mov dword ptr [ebp + 0x48], eax */ W32((u32)(r_ebp+0x48u), r_eax);
    /* 00870ba3: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 00870ba6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870ba8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870baa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870bac: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870bae: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00870baf: push dword ptr [ebp + 0x4c] */ { u32 v = R32((u32)(r_ebp+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00870bb2: call 0x860f6c */ r_esp -= 4; W32(r_esp, 0x870bb7u); f_00860f6c();
    /* 00870bb7: mov dword ptr [ebp + 0x4c], eax */ W32((u32)(r_ebp+0x4cu), r_eax);
    /* 00870bba: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 00870bbd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870bbf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870bc1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870bc3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00870bc4: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x870bc9u); f_00859c55();
    /* 00870bc9: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 00870bcc: mov edx, dword ptr [ebp + 0x34] */ r_edx = R32((u32)(r_ebp+0x34u));
    /* 00870bcf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870bd1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870bd3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870bd5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870bd7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00870bd8: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x870bddu); f_00859c55();
    /* 00870bdd: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00870be0: mov dword ptr [ebp + 0x44], eax */ W32((u32)(r_ebp+0x44u), r_eax);
    /* 00870be3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00870be5: cmp dword ptr [ebp + 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0x34u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00870be9: jle 0x87101c */ if ((fZ||fS!=fO)) goto L_0087101c;
L_00870bef:; BB(0x00870bef);
    /* 00870bef: lea edx, [ebp + 0x18] */ r_edx = (u32)(r_ebp+0x18u);
    /* 00870bf2: lea eax, [ebp + 0x78] */ r_eax = (u32)(r_ebp+0x78u);
    /* 00870bf5: mov dword ptr [esp + 0x44], eax */ W32((u32)(r_esp+0x44u), r_eax);
    /* 00870bf9: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00870bfd: mov dword ptr [esp + 0x58], ecx */ W32((u32)(r_esp+0x58u), r_ecx);
    /* 00870c01: mov dword ptr [esp + 0x48], ebx */ W32((u32)(r_esp+0x48u), r_ebx);
    /* 00870c05: mov dword ptr [esp + 0x4c], esi */ W32((u32)(r_esp+0x4cu), r_esi);
    /* 00870c09: mov esi, dword ptr [esp + 0x88] */ r_esi = R32((u32)(r_esp+0x88u));
    /* 00870c10: mov dword ptr [esp + 0x50], edi */ W32((u32)(r_esp+0x50u), r_edi);
    /* 00870c14: mov edi, dword ptr [esp + 0x84] */ r_edi = R32((u32)(r_esp+0x84u));
    /* 00870c1b: jmp 0x870c2f */ goto L_00870c2f;
L_00870c1d:; BB(0x00870c1d);
    /* 00870c1d: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 00870c21: mov esi, dword ptr [esp + 0x88] */ r_esi = R32((u32)(r_esp+0x88u));
    /* 00870c28: mov edi, dword ptr [esp + 0x84] */ r_edi = R32((u32)(r_esp+0x84u));
L_00870c2f:; BB(0x00870c2f);
    /* 00870c2f: mov ebx, dword ptr [esp + 0x58] */ r_ebx = R32((u32)(r_esp+0x58u));
    /* 00870c33: lea ebx, [ebx + ebx] */ r_ebx = (u32)(r_ebx+r_ebx);
    /* 00870c36: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00870c38: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00870c3a: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 00870c3d: mov dword ptr [edx + ebx], edi */ W32((u32)(r_edx+r_ebx), r_edi);
    /* 00870c40: mov dword ptr [edx + ebx + 4], esi */ W32((u32)(r_edx+r_ebx+0x4u), r_esi);
    /* 00870c44: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00870c47: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00870c49: je 0x870c69 */ if (fZ) goto L_00870c69;
L_00870c4b:; BB(0x00870c4b);
    /* 00870c4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00870c4d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00870c4e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00870c4f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00870c50: call dword ptr [ebp + 0x2c4] */ { u32 t = R32((u32)(r_ebp+0x2c4u)); r_esp -= 4; W32(r_esp, 0x870c56u); call_ind(t); }
    /* 00870c56: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 00870c59: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00870c5d: mov dword ptr [ebp + 0xc], esi */ W32((u32)(r_ebp+0xcu), r_esi);
    /* 00870c60: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00870c61: call 0x876954 */ r_esp -= 4; W32(r_esp, 0x870c66u); f_00876954();
    /* 00870c66: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00870c69:; BB(0x00870c69);
    /* 00870c69: mov dword ptr [esp + 0x5c], ebx */ W32((u32)(r_esp+0x5cu), r_ebx);
    /* 00870c6d: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
L_00870c71:; BB(0x00870c71);
    /* 00870c71: mov edx, dword ptr [ebp + 0x3c] */ r_edx = R32((u32)(r_ebp+0x3cu));
    /* 00870c74: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 00870c78: mov edi, dword ptr [edx + ecx] */ r_edi = R32((u32)(r_edx+r_ecx));
    /* 00870c7b: mov ebx, dword ptr [edx + ecx + 4] */ r_ebx = R32((u32)(r_edx+r_ecx+0x4u));
    /* 00870c7f: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00870c80: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00870c81: or edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a | b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00870c83: je 0x870d3f */ if (fZ) goto L_00870d3f;
L_00870c89:; BB(0x00870c89);
    /* 00870c89: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00870c8b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00870c8d: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 00870c92: mov dword ptr [esp + 0x70], edi */ W32((u32)(r_esp+0x70u), r_edi);
    /* 00870c96: mov ebx, dword ptr [ebp + 0x40] */ r_ebx = R32((u32)(r_ebp+0x40u));
    /* 00870c99: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 00870c9d: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 00870ca1: lea edi, [edx + edx] */ r_edi = (u32)(r_edx+r_edx);
    /* 00870ca4: mov dword ptr [esp + 0x6c], ecx */ W32((u32)(r_esp+0x6cu), r_ecx);
    /* 00870ca8: push dword ptr [ebx + edx*4] */ { u32 v = R32((u32)(r_ebx+r_edx*4)); r_esp -= 4; W32(r_esp, v); }
    /* 00870cab: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00870cac: call 0x87696c */ r_esp -= 4; W32(r_esp, 0x870cb1u); f_0087696c();
    /* 00870cb1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00870cb4:; BB(0x00870cb4);
    /* 00870cb4: lea ebx, [esp + 0x34] */ r_ebx = (u32)(r_esp+0x34u);
    /* 00870cb8: mov dword ptr [esp + 0x60], edi */ W32((u32)(r_esp+0x60u), r_edi);
    /* 00870cbc: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 00870cc0: mov esi, dword ptr [esp + 0x54] */ r_esi = R32((u32)(r_esp+0x54u));
L_00870cc4:; BB(0x00870cc4);
    /* 00870cc4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00870cc5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00870cc6: call 0x876198 */ r_esp -= 4; W32(r_esp, 0x870ccbu); f_00876198();
    /* 00870ccb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00870cce: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00870cd0: jl 0x870f10 */ if ((fS!=fO)) goto L_00870f10;
L_00870cd6:; BB(0x00870cd6);
    /* 00870cd6: jne 0x870ef2 */ if (!fZ) goto L_00870ef2;
L_00870cdc:; BB(0x00870cdc);
    /* 00870cdc: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x870ce1u); f_00859dd6();
    /* 00870ce1: mov dword ptr [eax], 0 */ W32((u32)(r_eax), 0x0u);
    /* 00870ce7: cmp dword ptr [ebp], 0 */ {  u32 a = R32((u32)(r_ebp)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00870ceb: je 0x870d31 */ if (fZ) goto L_00870d31;
L_00870ced:; BB(0x00870ced);
    /* 00870ced: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 00870cf2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00870cf3: call 0x8760f8 */ r_esp -= 4; W32(r_esp, 0x870cf8u); f_008760f8();
    /* 00870cf8: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 00870cfb: push 0x2134 */ { u32 v = 0x2134u; r_esp -= 4; W32(r_esp, v); }
    /* 00870d00: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00870d02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00870d03: call dword ptr [ebp + 0x2c0] */ { u32 t = R32((u32)(r_ebp+0x2c0u)); r_esp -= 4; W32(r_esp, 0x870d09u); call_ind(t); }
    /* 00870d09: mov edi, eax */ r_edi = r_eax;
    /* 00870d0b: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00870d0e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00870d10: jle 0x870d1e */ if ((fZ||fS!=fO)) goto L_00870d1e;
L_00870d12:; BB(0x00870d12);
    /* 00870d12: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00870d13: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00870d14: call 0x87617c */ r_esp -= 4; W32(r_esp, 0x870d19u); f_0087617c();
    /* 00870d19: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00870d1c: jmp 0x870d33 */ goto L_00870d33;
L_00870d1e:; BB(0x00870d1e);
    /* 00870d1e: jne 0x870d33 */ if (!fZ) goto L_00870d33;
L_00870d20:; BB(0x00870d20);
    /* 00870d20: call 0x859dd6 */ r_esp -= 4; W32(r_esp, 0x870d25u); f_00859dd6();
    /* 00870d25: cmp dword ptr [eax], 0 */ {  u32 a = R32((u32)(r_eax)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00870d28: je 0x870d33 */ if (fZ) goto L_00870d33;
L_00870d2a:; BB(0x00870d2a);
    /* 00870d2a: mov edi, 0xffffffff */ r_edi = 0xffffffffu;
    /* 00870d2f: jmp 0x870d33 */ goto L_00870d33;
L_00870d31:; BB(0x00870d31);
    /* 00870d31: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_00870d33:; BB(0x00870d33);
    /* 00870d33: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00870d35: je 0x870ee0 */ if (fZ) goto L_00870ee0;
L_00870d3b:; BB(0x00870d3b);
    /* 00870d3b: jge 0x870cc4 */ if ((fS==fO)) goto L_00870cc4;
L_00870d3d:; BB(0x00870d3d);
    /* 00870d3d: jmp 0x870dac */ goto L_00870dac;
L_00870d3f:; BB(0x00870d3f);
    /* 00870d3f: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 00870d42: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 00870d46: mov edi, dword ptr [edx + ecx + 8] */ r_edi = R32((u32)(r_edx+r_ecx+0x8u));
    /* 00870d4a: mov ebx, dword ptr [edx + ecx + 0xc] */ r_ebx = R32((u32)(r_edx+r_ecx+0xcu));
    /* 00870d4e: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00870d51: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00870d53: je 0x870d7b */ if (fZ) goto L_00870d7b;
L_00870d55:; BB(0x00870d55);
    /* 00870d55: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00870d57: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00870d58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00870d59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00870d5a: call dword ptr [ebp + 0x2c4] */ { u32 t = R32((u32)(r_ebp+0x2c4u)); r_esp -= 4; W32(r_esp, 0x870d60u); call_ind(t); }
    /* 00870d60: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 00870d63: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00870d67: mov dword ptr [ebp + 0xc], ebx */ W32((u32)(r_ebp+0xcu), r_ebx);
    /* 00870d6a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00870d6b: call 0x876954 */ r_esp -= 4; W32(r_esp, 0x870d70u); f_00876954();
    /* 00870d70: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00870d73: jmp 0x870d7b */ goto L_00870d7b;
L_00870d75:; BB(0x00870d75);
    /* 00870d75: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 00870d78: mov dword ptr [ebp + 0xc], ebx */ W32((u32)(r_ebp+0xcu), r_ebx);
L_00870d7b:; BB(0x00870d7b);
    /* 00870d7b: mov eax, ebp */ r_eax = r_ebp;
    /* 00870d7d: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 00870d81: call 0x8713c8 */ r_esp -= 4; W32(r_esp, 0x870d86u); f_008713c8();
    /* 00870d86: mov ebx, edx */ r_ebx = r_edx;
    /* 00870d88: mov edi, eax */ r_edi = r_eax;
    /* 00870d8a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00870d8c: sub ecx, 0 */ {  u32 a = r_ecx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00870d8f: jl 0x871021 */ if ((fS!=fO)) goto L_00871021;
L_00870d95:; BB(0x00870d95);
    /* 00870d95: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 00870d99: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00870d9a: call 0x8768e8 */ r_esp -= 4; W32(r_esp, 0x870d9fu); f_008768e8();
    /* 00870d9f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00870da0: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00870da1: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870da2: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00870da4: jne 0x870f26 */ if (!fZ) goto L_00870f26;
L_00870daa:; BB(0x00870daa);
    /* 00870daa: jmp 0x870d75 */ goto L_00870d75;
L_00870dac:; BB(0x00870dac);
    /* 00870dac: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 00870db0: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 00870db4: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
L_00870db9:; BB(0x00870db9);
    /* 00870db9: sub ebx, 0 */ {  u32 a = r_ebx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_ebx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00870dbc: jl 0x870ead */ if ((fS!=fO)) goto L_00870ead;
L_00870dc2:; BB(0x00870dc2);
    /* 00870dc2: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 00870dc6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00870dc7: call 0x875ffc */ r_esp -= 4; W32(r_esp, 0x870dccu); f_00875ffc();
    /* 00870dcc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00870dcd: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 00870dd0: cmp eax, dword ptr [edx + edi*2] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+r_edi*2)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00870dd3: jne 0x870ead */ if (!fZ) goto L_00870ead;
L_00870dd9:; BB(0x00870dd9);
    /* 00870dd9: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 00870ddd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00870dde: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00870ddf: call 0x87658c */ r_esp -= 4; W32(r_esp, 0x870de4u); f_0087658c();
    /* 00870de4: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 00870de8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00870de9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00870dea: call 0x8769d4 */ r_esp -= 4; W32(r_esp, 0x870defu); f_008769d4();
    /* 00870def: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00870df2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00870df4: je 0x870e79 */ if (fZ) goto L_00870e79;
L_00870dfa:; BB(0x00870dfa);
    /* 00870dfa: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 00870dfe: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 00870e01: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870e03: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870e05: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870e07: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870e09: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 00870e0d: mov ebx, dword ptr [esp + 0x74] */ r_ebx = R32((u32)(r_esp+0x74u));
    /* 00870e11: mov dword ptr [esp + 0x60], edi */ W32((u32)(r_esp+0x60u), r_edi);
    /* 00870e15: mov edi, dword ptr [esp + 0x70] */ r_edi = R32((u32)(r_esp+0x70u));
    /* 00870e19: mov dword ptr [esp + 0x68], ebp */ W32((u32)(r_esp+0x68u), r_ebp);
    /* 00870e1d: mov ebp, dword ptr [esp + 0x6c] */ r_ebp = R32((u32)(r_esp+0x6cu));
L_00870e21:; BB(0x00870e21);
    /* 00870e21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00870e23: jle 0x870e53 */ if ((fZ||fS!=fO)) goto L_00870e53;
L_00870e25:; BB(0x00870e25);
    /* 00870e25: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 00870e29: mov edx, dword ptr [edx + 0x48] */ r_edx = R32((u32)(r_edx+0x48u));
    /* 00870e2c: lea ecx, [esp + 0x14] */ r_ecx = (u32)(r_esp+0x14u);
    /* 00870e30: add edx, dword ptr [esp + 0x64] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x64u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870e34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00870e35: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00870e36: call 0x877960 */ r_esp -= 4; W32(r_esp, 0x870e3bu); f_00877960();
    /* 00870e3b: mov ecx, eax */ r_ecx = r_eax;
    /* 00870e3d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00870e40: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00870e43: je 0x870e51 */ if (fZ) goto L_00870e51;
L_00870e45:; BB(0x00870e45);
    /* 00870e45: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00870e47: sar ebp, 2 */ { u32 c = (2u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00870e4a: mov eax, ebp */ r_eax = r_ebp;
    /* 00870e4c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00870e4d: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 00870e4f: adc ebx, edx */ { u32 c = fC; u32 a = r_ebx; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_ebx = r;  }
L_00870e51:; BB(0x00870e51);
    /* 00870e51: mov ebp, ecx */ r_ebp = r_ecx;
L_00870e53:; BB(0x00870e53);
    /* 00870e53: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 00870e57: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00870e58: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00870e59: call 0x8769d4 */ r_esp -= 4; W32(r_esp, 0x870e5eu); f_008769d4();
    /* 00870e5e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00870e61: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00870e63: jne 0x870e21 */ if (!fZ) goto L_00870e21;
L_00870e65:; BB(0x00870e65);
    /* 00870e65: mov dword ptr [esp + 0x74], ebx */ W32((u32)(r_esp+0x74u), r_ebx);
    /* 00870e69: mov dword ptr [esp + 0x6c], ebp */ W32((u32)(r_esp+0x6cu), r_ebp);
    /* 00870e6d: mov dword ptr [esp + 0x70], edi */ W32((u32)(r_esp+0x70u), r_edi);
    /* 00870e71: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 00870e75: mov ebp, dword ptr [esp + 0x68] */ r_ebp = R32((u32)(r_esp+0x68u));
L_00870e79:; BB(0x00870e79);
    /* 00870e79: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 00870e7d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00870e7e: call 0x8768e8 */ r_esp -= 4; W32(r_esp, 0x870e83u); f_008768e8();
    /* 00870e83: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00870e84: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00870e85: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870e86: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 00870e88: je 0x870cb4 */ if (fZ) goto L_00870cb4;
L_00870e8e:; BB(0x00870e8e);
    /* 00870e8e: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 00870e92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00870e93: call 0x8768e8 */ r_esp -= 4; W32(r_esp, 0x870e98u); f_008768e8();
    /* 00870e98: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00870e99: mov ecx, dword ptr [esp + 0x70] */ r_ecx = R32((u32)(r_esp+0x70u));
    /* 00870e9d: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 00870e9f: mov ebx, dword ptr [esp + 0x74] */ r_ebx = R32((u32)(r_esp+0x74u));
    /* 00870ea3: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 00870ea7: sbb edx, ebx */ { u32 c = fC; u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00870ea9: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
L_00870ead:; BB(0x00870ead);
    /* 00870ead: mov edx, dword ptr [esp + 0x74] */ r_edx = R32((u32)(r_esp+0x74u));
    /* 00870eb1: sub edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00870eb4: jge 0x870ec2 */ if ((fS==fO)) goto L_00870ec2;
L_00870eb6:; BB(0x00870eb6);
    /* 00870eb6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00870eb8: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00870eba: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 00870ebe: mov dword ptr [esp + 0x74], ecx */ W32((u32)(r_esp+0x74u), r_ecx);
L_00870ec2:; BB(0x00870ec2);
    /* 00870ec2: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 00870ec6: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 00870ec9: mov edi, dword ptr [ebp + 0x44] */ r_edi = R32((u32)(r_ebp+0x44u));
    /* 00870ecc: mov ecx, dword ptr [esp + 0x70] */ r_ecx = R32((u32)(r_esp+0x70u));
    /* 00870ed0: mov ebx, dword ptr [esp + 0x74] */ r_ebx = R32((u32)(r_esp+0x74u));
    /* 00870ed4: mov dword ptr [edi + edx*8], ecx */ W32((u32)(r_edi+r_edx*8), r_ecx);
    /* 00870ed7: mov dword ptr [edi + edx*8 + 4], ebx */ W32((u32)(r_edi+r_edx*8+0x4u), r_ebx);
    /* 00870edb: jmp 0x870d3f */ goto L_00870d3f;
L_00870ee0:; BB(0x00870ee0);
    /* 00870ee0: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 00870ee4: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 00870ee8: mov ebx, 0xffffffff */ r_ebx = 0xffffffffu;
    /* 00870eed: jmp 0x870db9 */ goto L_00870db9;
L_00870ef2:; BB(0x00870ef2);
    /* 00870ef2: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 00870ef6: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 00870efa: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00870efd: mov ebx, dword ptr [ebp + 0xc] */ r_ebx = R32((u32)(r_ebp+0xcu));
    /* 00870f00: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00870f01: add eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_eax = r; fC = (r < a); }
    /* 00870f03: adc edx, ebx */ { u32 c = fC; u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b + c) & 0xffffffffu; r_edx = r;  }
    /* 00870f05: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 00870f08: mov dword ptr [ebp + 0xc], edx */ W32((u32)(r_ebp+0xcu), r_edx);
    /* 00870f0b: jmp 0x870db9 */ goto L_00870db9;
L_00870f10:; BB(0x00870f10);
    /* 00870f10: mov ecx, dword ptr [ebp + 8] */ r_ecx = R32((u32)(r_ebp+0x8u));
    /* 00870f13: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 00870f16: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00870f17: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r; fC = (a < b); }
    /* 00870f19: sbb edi, edx */ { u32 c = fC; u32 a = r_edi; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_edi = r;  }
    /* 00870f1b: mov dword ptr [ebp + 8], ecx */ W32((u32)(r_ebp+0x8u), r_ecx);
    /* 00870f1e: mov dword ptr [ebp + 0xc], edi */ W32((u32)(r_ebp+0xcu), r_edi);
    /* 00870f21: jmp 0x870cc4 */ goto L_00870cc4;
L_00870f26:; BB(0x00870f26);
    /* 00870f26: lea edx, [esp + 0x34] */ r_edx = (u32)(r_esp+0x34u);
    /* 00870f2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00870f2b: call 0x8768e8 */ r_esp -= 4; W32(r_esp, 0x870f30u); f_008768e8();
    /* 00870f30: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00870f31: mov dword ptr [esp + 0x44], esi */ W32((u32)(r_esp+0x44u), r_esi);
    /* 00870f35: mov ecx, dword ptr [ebp + 0x44] */ r_ecx = R32((u32)(r_ebp+0x44u));
    /* 00870f38: mov ebx, dword ptr [esp + 0x58] */ r_ebx = R32((u32)(r_esp+0x58u));
    /* 00870f3c: lea ebx, [ebx + ebx] */ r_ebx = (u32)(r_ebx+r_ebx);
    /* 00870f3f: mov esi, dword ptr [ecx + ebx*8] */ r_esi = R32((u32)(r_ecx+r_ebx*8));
    /* 00870f42: mov edi, dword ptr [ecx + ebx*8 + 4] */ r_edi = R32((u32)(r_ecx+r_ebx*8+0x4u));
    /* 00870f46: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 00870f48: mov esi, dword ptr [esp + 0x44] */ r_esi = R32((u32)(r_esp+0x44u));
    /* 00870f4c: sbb edx, edi */ { u32 c = fC; u32 a = r_edx; u32 b = r_edi; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 00870f4e: mov dword ptr [ecx + ebx*8 + 8], eax */ W32((u32)(r_ecx+r_ebx*8+0x8u), r_eax);
    /* 00870f52: mov dword ptr [ecx + ebx*8 + 0xc], edx */ W32((u32)(r_ecx+r_ebx*8+0xcu), r_edx);
L_00870f56:; BB(0x00870f56);
    /* 00870f56: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 00870f5a: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870f5b: cmp edx, dword ptr [ebp + 0x34] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x34u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00870f5e: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 00870f62: jge 0x871010 */ if ((fS==fO)) goto L_00871010;
L_00870f68:; BB(0x00870f68);
    /* 00870f68: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00870f6a: je 0x870c1d */ if (fZ) goto L_00870c1d;
L_00870f70:; BB(0x00870f70);
    /* 00870f70: mov edi, edx */ r_edi = r_edx;
    /* 00870f72: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
    /* 00870f75: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00870f77: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00870f79: mov edx, dword ptr [ebp + 0x38] */ r_edx = R32((u32)(r_ebp+0x38u));
    /* 00870f7c: mov edi, dword ptr [edx + ecx] */ r_edi = R32((u32)(r_edx+r_ecx));
    /* 00870f7f: mov dword ptr [esp + 0x5c], ecx */ W32((u32)(r_esp+0x5cu), r_ecx);
    /* 00870f83: mov ebx, dword ptr [edx + ecx + 4] */ r_ebx = R32((u32)(r_edx+r_ecx+0x4u));
    /* 00870f87: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 00870f8a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00870f8c: je 0x870fac */ if (fZ) goto L_00870fac;
L_00870f8e:; BB(0x00870f8e);
    /* 00870f8e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00870f90: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00870f91: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00870f92: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00870f93: call dword ptr [ebp + 0x2c4] */ { u32 t = R32((u32)(r_ebp+0x2c4u)); r_esp -= 4; W32(r_esp, 0x870f99u); call_ind(t); }
    /* 00870f99: mov dword ptr [ebp + 8], edi */ W32((u32)(r_ebp+0x8u), r_edi);
    /* 00870f9c: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00870fa0: mov dword ptr [ebp + 0xc], ebx */ W32((u32)(r_ebp+0xcu), r_ebx);
    /* 00870fa3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00870fa4: call 0x876954 */ r_esp -= 4; W32(r_esp, 0x870fa9u); f_00876954();
    /* 00870fa9: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00870fac:; BB(0x00870fac);
    /* 00870fac: mov ebx, dword ptr [esp + 0x58] */ r_ebx = R32((u32)(r_esp+0x58u));
    /* 00870fb0: lea edx, [ebx + ebx] */ r_edx = (u32)(r_ebx+r_ebx);
    /* 00870fb3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870fb5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870fb7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870fb9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870fbb: add edx, dword ptr [ebp + 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0x48u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00870fbe: lea ecx, [ebx + ebx] */ r_ecx = (u32)(r_ebx+r_ebx);
    /* 00870fc1: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00870fc3: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00870fc5: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00870fc7: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00870fc9: add ecx, dword ptr [ebp + 0x4c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x4cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00870fcc: mov eax, ebp */ r_eax = r_ebp;
    /* 00870fce: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00870fd2: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 00870fd6: call 0x871058 */ r_esp -= 4; W32(r_esp, 0x870fdbu); f_00871058();
    /* 00870fdb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00870fdd: jl 0x870ff8 */ if ((fS!=fO)) goto L_00870ff8;
L_00870fdf:; BB(0x00870fdf);
    /* 00870fdf: mov ebx, dword ptr [ebp + 0x3c] */ r_ebx = R32((u32)(r_ebp+0x3cu));
    /* 00870fe2: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00870fe5: mov ecx, dword ptr [ebp + 0xc] */ r_ecx = R32((u32)(r_ebp+0xcu));
    /* 00870fe8: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
    /* 00870fec: mov dword ptr [ebx + edi], edx */ W32((u32)(r_ebx+r_edi), r_edx);
    /* 00870fef: mov dword ptr [ebx + edi + 4], ecx */ W32((u32)(r_ebx+r_edi+0x4u), r_ecx);
    /* 00870ff3: jmp 0x870c71 */ goto L_00870c71;
L_00870ff8:; BB(0x00870ff8);
    /* 00870ff8: mov ecx, dword ptr [ebp + 0x3c] */ r_ecx = R32((u32)(r_ebp+0x3cu));
    /* 00870ffb: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00871000: mov ebx, dword ptr [esp + 0x5c] */ r_ebx = R32((u32)(r_esp+0x5cu));
    /* 00871004: mov dword ptr [ecx + ebx], edx */ W32((u32)(r_ecx+r_ebx), r_edx);
    /* 00871007: mov dword ptr [ecx + ebx + 4], edx */ W32((u32)(r_ecx+r_ebx+0x4u), r_edx);
    /* 0087100b: jmp 0x870c71 */ goto L_00870c71;
L_00871010:; BB(0x00871010);
    /* 00871010: mov ebx, dword ptr [esp + 0x48] */ r_ebx = R32((u32)(r_esp+0x48u));
    /* 00871014: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
    /* 00871018: mov edi, dword ptr [esp + 0x50] */ r_edi = R32((u32)(r_esp+0x50u));
L_0087101c:; BB(0x0087101c);
    /* 0087101c: add esp, 0x78 */ {  u32 a = r_esp; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0087101f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00871020: ret  */ FN_RET(0x00870b84); r_esp += 4; return;
L_00871021:; BB(0x00871021);
    /* 00871021: mov edx, dword ptr [esp + 0x58] */ r_edx = R32((u32)(r_esp+0x58u));
    /* 00871025: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00871028: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087102a: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087102c: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087102e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871030: add ecx, dword ptr [ebp + 0x48] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x48u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871033: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00871034: call 0x876cd8 */ r_esp -= 4; W32(r_esp, 0x871039u); f_00876cd8();
    /* 00871039: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 0087103d: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00871040: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871042: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871044: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871046: add ecx, dword ptr [ebp + 0x4c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebp+0x4cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00871049: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0087104a: call 0x876c4c */ r_esp -= 4; W32(r_esp, 0x87104fu); f_00876c4c();
    /* 0087104f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00871052: jmp 0x870f56 */ goto L_00870f56;
}

