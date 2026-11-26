#include "protos.h"

void f_0087906c(void) /* sub_87906C */
{
    FN_ENTER(0x0087906c);
    /* 0087906c: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00879070: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00879072: je 0x879097 */ if (fZ) goto L_00879097;
L_00879074:; BB(0x00879074);
    /* 00879074: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00879076: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00879078: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0087907b: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0087907e: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00879081: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00879084: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 00879087: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0087908a: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0087908d: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00879090: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00879091: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x879096u); f_00858882();
    /* 00879096: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00879097:; BB(0x00879097);
    /* 00879097: ret  */ FN_RET(0x0087906c); r_esp += 4; return;
}

void f_00879098(void) /* sub_879098 */
{
    FN_ENTER(0x00879098);
    /* 00879098: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00879099: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 0087909d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0087909f: je 0x8790b7 */ if (fZ) goto L_008790b7;
L_008790a1:; BB(0x008790a1);
    /* 008790a1: push 0x210 */ { u32 v = 0x210u; r_esp -= 4; W32(r_esp, v); }
    /* 008790a6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008790a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008790a9: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x8790aeu); f_0086b688();
    /* 008790ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008790af: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8790b4u); f_00858882();
    /* 008790b4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_008790b7:; BB(0x008790b7);
    /* 008790b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008790b8: ret  */ FN_RET(0x00879098); r_esp += 4; return;
}

void f_008790a3(void)
{
    FN_ENTER(0x008790a3);
    /* 008790a3: add al, byte ptr [eax] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_eax)); u32 r = (a + b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 008790a5: add byte ptr [edx], ch */ { u32 ad = (u32)(r_edx);  u32 a = R8(ad); u32 b = (u8)(r_ecx>>8); u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 008790a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008790a9: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x8790aeu); f_0086b688();
    /* 008790ae: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008790af: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8790b4u); f_00858882();
    /* 008790b4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008790b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008790b8: ret  */ FN_RET(0x008790a3); r_esp += 4; return;
}

void f_008790bc(void) /* sub_8790BC */
{
    FN_ENTER(0x008790bc);
    /* 008790bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008790bd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008790be: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008790c1: mov ebp, dword ptr [esp + 0x14] */ r_ebp = R32((u32)(r_esp+0x14u));
    /* 008790c5: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008790c7: je 0x87919a */ if (fZ) goto L_0087919a;
L_008790cd:; BB(0x008790cd);
    /* 008790cd: mov eax, dword ptr [ebp + 0x10] */ r_eax = R32((u32)(r_ebp+0x10u));
    /* 008790d0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008790d2: je 0x8790db */ if (fZ) goto L_008790db;
L_008790d4:; BB(0x008790d4);
    /* 008790d4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008790d5: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8790dau); f_00858882();
    /* 008790da: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008790db:; BB(0x008790db);
    /* 008790db: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 008790de: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008790e0: je 0x8790e9 */ if (fZ) goto L_008790e9;
L_008790e2:; BB(0x008790e2);
    /* 008790e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008790e3: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8790e8u); f_00858882();
    /* 008790e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008790e9:; BB(0x008790e9);
    /* 008790e9: mov eax, dword ptr [ebp + 0x18] */ r_eax = R32((u32)(r_ebp+0x18u));
    /* 008790ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008790ee: je 0x8790f7 */ if (fZ) goto L_008790f7;
L_008790f0:; BB(0x008790f0);
    /* 008790f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008790f1: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x8790f6u); f_00858882();
    /* 008790f6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_008790f7:; BB(0x008790f7);
    /* 008790f7: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 008790fa: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008790fc: je 0x87914c */ if (fZ) goto L_0087914c;
L_008790fe:; BB(0x008790fe);
    /* 008790fe: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00879100: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00879103: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00879107: mov ebx, eax */ r_ebx = r_eax;
    /* 00879109: jmp 0x87910e */ goto L_0087910e;
L_0087910b:; BB(0x0087910b);
    /* 0087910b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
L_0087910e:; BB(0x0087910e);
    /* 0087910e: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00879110: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 00879113: jmp 0x879118 */ goto L_00879118;
L_00879115:; BB(0x00879115);
    /* 00879115: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
L_00879118:; BB(0x00879118);
    /* 00879118: mov edx, dword ptr [edx + edi*2] */ r_edx = R32((u32)(r_edx+r_edi*2));
    /* 0087911b: push dword ptr [edx + esi*4] */ { u32 v = R32((u32)(r_edx+r_esi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0087911e: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x879123u); f_00858882();
    /* 00879123: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00879124: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00879125: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00879128: jl 0x879115 */ if ((fS!=fO)) goto L_00879115;
L_0087912a:; BB(0x0087912a);
    /* 0087912a: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0087912d: push dword ptr [edx + edi*2] */ { u32 v = R32((u32)(r_edx+r_edi*2)); r_esp -= 4; W32(r_esp, v); }
    /* 00879130: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x879135u); f_00858882();
    /* 00879135: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00879136: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00879137: cmp ebx, 0x11 */ {  u32 a = r_ebx; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087913a: jl 0x87910b */ if ((fS!=fO)) goto L_0087910b;
L_0087913c:; BB(0x0087913c);
    /* 0087913c: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 0087913f: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00879143: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00879146: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x87914bu); f_00858882();
    /* 0087914b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_0087914c:; BB(0x0087914c);
    /* 0087914c: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
    /* 0087914f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00879151: je 0x879174 */ if (fZ) goto L_00879174;
L_00879153:; BB(0x00879153);
    /* 00879153: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00879155: mov edi, eax */ r_edi = r_eax;
    /* 00879157: jmp 0x87915c */ goto L_0087915c;
L_00879159:; BB(0x00879159);
    /* 00879159: mov edx, dword ptr [ebp + 0xc] */ r_edx = R32((u32)(r_ebp+0xcu));
L_0087915c:; BB(0x0087915c);
    /* 0087915c: push dword ptr [edx + edi*4] */ { u32 v = R32((u32)(r_edx+r_edi*4)); r_esp -= 4; W32(r_esp, v); }
    /* 0087915f: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x879164u); f_00858882();
    /* 00879164: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00879165: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00879166: cmp edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00879169: jl 0x879159 */ if ((fS!=fO)) goto L_00879159;
L_0087916b:; BB(0x0087916b);
    /* 0087916b: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0087916e: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x879173u); f_00858882();
    /* 00879173: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00879174:; BB(0x00879174);
    /* 00879174: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00879176: mov dword ptr [ebp], eax */ W32((u32)(r_ebp), r_eax);
    /* 00879179: mov dword ptr [ebp + 4], eax */ W32((u32)(r_ebp+0x4u), r_eax);
    /* 0087917c: mov dword ptr [ebp + 8], eax */ W32((u32)(r_ebp+0x8u), r_eax);
    /* 0087917f: mov dword ptr [ebp + 0xc], eax */ W32((u32)(r_ebp+0xcu), r_eax);
    /* 00879182: mov dword ptr [ebp + 0x10], eax */ W32((u32)(r_ebp+0x10u), r_eax);
    /* 00879185: mov dword ptr [ebp + 0x14], eax */ W32((u32)(r_ebp+0x14u), r_eax);
    /* 00879188: mov dword ptr [ebp + 0x18], eax */ W32((u32)(r_ebp+0x18u), r_eax);
    /* 0087918b: mov dword ptr [ebp + 0x1c], eax */ W32((u32)(r_ebp+0x1cu), r_eax);
    /* 0087918e: mov dword ptr [ebp + 0x20], eax */ W32((u32)(r_ebp+0x20u), r_eax);
    /* 00879191: mov dword ptr [ebp + 0x24], eax */ W32((u32)(r_ebp+0x24u), r_eax);
    /* 00879194: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 00879197: mov dword ptr [ebp + 0x2c], eax */ W32((u32)(r_ebp+0x2cu), r_eax);
L_0087919a:; BB(0x0087919a);
    /* 0087919a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0087919d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087919e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087919f: ret  */ FN_RET(0x008790bc); r_esp += 4; return;
}

void f_008791a0(void) /* sub_8791A0 */
{
    FN_ENTER(0x008791a0);
L_008791a0:; BB(0x008791a0);
    /* 008791a0: test dword ptr [0xae7f00], 0xffffff80 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008791aa: jne 0x8791c8 */ if (!fZ) goto L_008791c8;
L_008791b0:; BB(0x008791b0);
    /* 008791b0: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008791ba: jne 0x879310 */ if (!fZ) goto L_00879310;
L_008791c0:; BB(0x008791c0);
    /* 008791c0: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x8791c5u); f_0086b8a0();
    /* 008791c5: jmp 0x8791a0 */ goto L_008791a0;
L_008791c8:; BB(0x008791c8);
    /* 008791c8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008791c9: mov ebx, esp */ r_ebx = r_esp;
    /* 008791cb: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008791ce: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008791cf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008791d0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008791d1: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008791d4: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 008791d7: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 008791da: mov esi, dword ptr [ebx + 0x10] */ r_esi = R32((u32)(r_ebx+0x10u));
    /* 008791dd: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 008791e0: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 008791e3: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 008791e5: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008791e7: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 008791eb: cmovl ecx, eax */ if ((fS!=fO)) { r_ecx = r_eax; }
    /* 008791ee: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008791f0: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008791f2: jle 0x879289 */ if ((fZ||fS!=fO)) goto L_00879289;
L_008791f8:; BB(0x008791f8);
    /* 008791f8: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008791fb: jl 0x87926e */ if ((fS!=fO)) goto L_0087926e;
L_008791fd:; BB(0x008791fd);
    /* 008791fd: lea ebp, [ecx - 5] */ r_ebp = (u32)(r_ecx+0xfffffffbu);
    /* 00879200: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
L_00879203:; BB(0x00879203);
    /* 00879203: movss xmm0, dword ptr [edi + eax*4] */ { u32 v = R32((u32)(r_edi+r_eax*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 00879208: mov ecx, dword ptr [esi + eax*4] */ r_ecx = R32((u32)(r_esi+r_eax*4));
    /* 0087920b: mulss xmm0, dword ptr [ecx*4 + 0xa2aee0] */ { XMM s; s.d[0] = R32((u32)(r_ecx*4+0xa2aee0u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 00879214: movss dword ptr [edx + eax*4], xmm0 */ W32((u32)(r_edx+r_eax*4), xmm[0].d[0]);
    /* 00879219: movss xmm1, dword ptr [edi + eax*4 + 4] */ { u32 v = R32((u32)(r_edi+r_eax*4+0x4u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087921f: mov ecx, dword ptr [esi + eax*4 + 4] */ r_ecx = R32((u32)(r_esi+r_eax*4+0x4u));
    /* 00879223: mulss xmm1, dword ptr [ecx*4 + 0xa2aee0] */ { XMM s; s.d[0] = R32((u32)(r_ecx*4+0xa2aee0u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; }
    /* 0087922c: movss dword ptr [edx + eax*4 + 4], xmm1 */ W32((u32)(r_edx+r_eax*4+0x4u), xmm[1].d[0]);
    /* 00879232: movss xmm3, dword ptr [edi + eax*4 + 8] */ { u32 v = R32((u32)(r_edi+r_eax*4+0x8u)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 00879238: mov ecx, dword ptr [esi + eax*4 + 8] */ r_ecx = R32((u32)(r_esi+r_eax*4+0x8u));
    /* 0087923c: mulss xmm3, dword ptr [ecx*4 + 0xa2aee0] */ { XMM s; s.d[0] = R32((u32)(r_ecx*4+0xa2aee0u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; }
    /* 00879245: movss dword ptr [edx + eax*4 + 8], xmm3 */ W32((u32)(r_edx+r_eax*4+0x8u), xmm[3].d[0]);
    /* 0087924b: movss xmm2, dword ptr [edi + eax*4 + 0xc] */ { u32 v = R32((u32)(r_edi+r_eax*4+0xcu)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 00879251: mov ecx, dword ptr [esi + eax*4 + 0xc] */ r_ecx = R32((u32)(r_esi+r_eax*4+0xcu));
    /* 00879255: mulss xmm2, dword ptr [ecx*4 + 0xa2aee0] */ { XMM s; s.d[0] = R32((u32)(r_ecx*4+0xa2aee0u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; }
    /* 0087925e: movss dword ptr [edx + eax*4 + 0xc], xmm2 */ W32((u32)(r_edx+r_eax*4+0xcu), xmm[2].d[0]);
    /* 00879264: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00879267: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00879269: jle 0x879203 */ if ((fZ||fS!=fO)) goto L_00879203;
L_0087926b:; BB(0x0087926b);
    /* 0087926b: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
L_0087926e:; BB(0x0087926e);
    /* 0087926e: movss xmm0, dword ptr [edi + eax*4] */ { u32 v = R32((u32)(r_edi+r_eax*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 00879273: mov ebp, dword ptr [esi + eax*4] */ r_ebp = R32((u32)(r_esi+r_eax*4));
    /* 00879276: mulss xmm0, dword ptr [ebp*4 + 0xa2aee0] */ { XMM s; s.d[0] = R32((u32)(r_ebp*4+0xa2aee0u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] * s.fs[0]; }
    /* 0087927f: movss dword ptr [edx + eax*4], xmm0 */ W32((u32)(r_edx+r_eax*4), xmm[0].d[0]);
    /* 00879284: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00879285: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00879287: jl 0x87926e */ if ((fS!=fO)) goto L_0087926e;
L_00879289:; BB(0x00879289);
    /* 00879289: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0087928d: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087928f: jge 0x8792fd */ if ((fS==fO)) goto L_008792fd;
L_00879291:; BB(0x00879291);
    /* 00879291: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00879293: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 00879297: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 00879299: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0087929d: cmp ebp, 0xb */ {  u32 a = r_ebp; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008792a0: jb 0x879307 */ if (fC) goto L_00879307;
L_008792a2:; BB(0x008792a2);
    /* 008792a2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008792a4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008792a6: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008792a8: mov esi, eax */ r_esi = r_eax;
    /* 008792aa: and esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 008792ad: je 0x8792cb */ if (fZ) goto L_008792cb;
L_008792af:; BB(0x008792af);
    /* 008792af: test esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008792b5: jne 0x8792ef */ if (!fZ) goto L_008792ef;
L_008792b7:; BB(0x008792b7);
    /* 008792b7: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 008792b9: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008792bc: shr esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 008792bf: sub ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 008792c1: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_008792c3:; BB(0x008792c3);
    /* 008792c3: mov dword ptr [eax + ecx*4], edx */ W32((u32)(r_eax+r_ecx*4), r_edx);
    /* 008792c6: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008792c7: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008792c9: jb 0x8792c3 */ if (fC) goto L_008792c3;
L_008792cb:; BB(0x008792cb);
    /* 008792cb: and ebp, 7 */ {  u32 a = r_ebp; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 008792ce: neg ebp */ { u32 x = r_ebp; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 008792d0: add ebp, dword ptr [esp + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_esp+0x4u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008792d4: xorps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].q[0] = xmm[0].q[0] ^ s.q[0]; xmm[0].q[1] = xmm[0].q[1] ^ s.q[1]; }
L_008792d7:; BB(0x008792d7);
    /* 008792d7: movaps xmmword ptr [eax + ecx*4], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_eax+r_ecx*4), &xmm[0], 16);
    /* 008792db: movaps xmmword ptr [eax + ecx*4 + 0x10], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_eax+r_ecx*4+0x10u), &xmm[0], 16);
    /* 008792e0: add ecx, 8 */ {  u32 a = r_ecx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008792e3: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008792e5: jb 0x8792d7 */ if (fC) goto L_008792d7;
L_008792e7:; BB(0x008792e7);
    /* 008792e7: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 008792eb: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008792ed: jae 0x8792fd */ if (!fC) goto L_008792fd;
L_008792ef:; BB(0x008792ef);
    /* 008792ef: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008792f1: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_008792f5:; BB(0x008792f5);
    /* 008792f5: mov dword ptr [eax + ecx*4], edx */ W32((u32)(r_eax+r_ecx*4), r_edx);
    /* 008792f8: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008792f9: cmp ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008792fb: jb 0x8792f5 */ if (fC) goto L_008792f5;
L_008792fd:; BB(0x008792fd);
    /* 008792fd: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00879300: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00879301: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00879302: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00879303: mov esp, ebx */ r_esp = r_ebx;
    /* 00879305: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00879306: ret  */ FN_RET(0x008791a0); r_esp += 4; return;
L_00879307:; BB(0x00879307);
    /* 00879307: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00879309: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087930b: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087930d: jmp 0x8792ef */ goto L_008792ef;
L_00879310:; BB(0x00879310);
    /* 00879310: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00879311: mov ebx, esp */ r_ebx = r_esp;
    /* 00879313: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00879316: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00879317: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00879318: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00879319: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0087931c: mov eax, dword ptr [ebx + 8] */ r_eax = R32((u32)(r_ebx+0x8u));
    /* 0087931f: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 00879322: mov esi, dword ptr [ebx + 0x10] */ r_esi = R32((u32)(r_ebx+0x10u));
    /* 00879325: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 00879328: mov ecx, dword ptr [ebx + 0x18] */ r_ecx = R32((u32)(r_ebx+0x18u));
    /* 0087932b: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 0087932d: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00879330: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00879332: jge 0x879336 */ if ((fS==fO)) goto L_00879336;
L_00879334:; BB(0x00879334);
    /* 00879334: mov ecx, eax */ r_ecx = r_eax;
L_00879336:; BB(0x00879336);
    /* 00879336: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00879338: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087933a: jle 0x8793c2 */ if ((fZ||fS!=fO)) goto L_008793c2;
L_00879340:; BB(0x00879340);
    /* 00879340: cmp ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00879343: jl 0x8793a6 */ if ((fS!=fO)) goto L_008793a6;
L_00879345:; BB(0x00879345);
    /* 00879345: lea ebp, [ecx - 5] */ r_ebp = (u32)(r_ecx+0xfffffffbu);
    /* 00879348: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 0087934c: jmp 0x879352 */ goto L_00879352;
L_0087934e:; BB(0x0087934e);
    /* 0087934e: fstp dword ptr [edx + eax*4 - 4] */ W_F32((u32)(r_edx+r_eax*4+0xfffffffcu), ST(0)); FPOP();
L_00879352:; BB(0x00879352);
    /* 00879352: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 00879355: mov ecx, dword ptr [esi + eax*4] */ r_ecx = R32((u32)(r_esi+r_eax*4));
    /* 00879358: fmul dword ptr [ecx*4 + 0xa2aee0] */ ST(0) = ST(0) * R_F32((u32)(r_ecx*4+0xa2aee0u));
    /* 0087935f: fstp dword ptr [edx + eax*4] */ W_F32((u32)(r_edx+r_eax*4), ST(0)); FPOP();
    /* 00879362: fld dword ptr [edi + eax*4 + 4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4+0x4u)));
    /* 00879366: mov ecx, dword ptr [esi + eax*4 + 4] */ r_ecx = R32((u32)(r_esi+r_eax*4+0x4u));
    /* 0087936a: fmul dword ptr [ecx*4 + 0xa2aee0] */ ST(0) = ST(0) * R_F32((u32)(r_ecx*4+0xa2aee0u));
    /* 00879371: fstp dword ptr [edx + eax*4 + 4] */ W_F32((u32)(r_edx+r_eax*4+0x4u), ST(0)); FPOP();
    /* 00879375: fld dword ptr [edi + eax*4 + 8] */ FPUSH(R_F32((u32)(r_edi+r_eax*4+0x8u)));
    /* 00879379: mov ecx, dword ptr [esi + eax*4 + 8] */ r_ecx = R32((u32)(r_esi+r_eax*4+0x8u));
    /* 0087937d: fmul dword ptr [ecx*4 + 0xa2aee0] */ ST(0) = ST(0) * R_F32((u32)(r_ecx*4+0xa2aee0u));
    /* 00879384: fstp dword ptr [edx + eax*4 + 8] */ W_F32((u32)(r_edx+r_eax*4+0x8u), ST(0)); FPOP();
    /* 00879388: fld dword ptr [edi + eax*4 + 0xc] */ FPUSH(R_F32((u32)(r_edi+r_eax*4+0xcu)));
    /* 0087938c: mov ecx, dword ptr [esi + eax*4 + 0xc] */ r_ecx = R32((u32)(r_esi+r_eax*4+0xcu));
    /* 00879390: fmul dword ptr [ecx*4 + 0xa2aee0] */ ST(0) = ST(0) * R_F32((u32)(r_ecx*4+0xa2aee0u));
    /* 00879397: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087939a: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087939c: jle 0x87934e */ if ((fZ||fS!=fO)) goto L_0087934e;
L_0087939e:; BB(0x0087939e);
    /* 0087939e: fstp dword ptr [edx + eax*4 - 4] */ W_F32((u32)(r_edx+r_eax*4+0xfffffffcu), ST(0)); FPOP();
    /* 008793a2: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
L_008793a6:; BB(0x008793a6);
    /* 008793a6: jmp 0x8793ac */ goto L_008793ac;
L_008793a8:; BB(0x008793a8);
    /* 008793a8: fstp dword ptr [edx + eax*4 - 4] */ W_F32((u32)(r_edx+r_eax*4+0xfffffffcu), ST(0)); FPOP();
L_008793ac:; BB(0x008793ac);
    /* 008793ac: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 008793af: mov ebp, dword ptr [esi + eax*4] */ r_ebp = R32((u32)(r_esi+r_eax*4));
    /* 008793b2: fmul dword ptr [ebp*4 + 0xa2aee0] */ ST(0) = ST(0) * R_F32((u32)(r_ebp*4+0xa2aee0u));
    /* 008793b9: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008793ba: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008793bc: jl 0x8793a8 */ if ((fS!=fO)) goto L_008793a8;
L_008793be:; BB(0x008793be);
    /* 008793be: fstp dword ptr [edx + eax*4 - 4] */ W_F32((u32)(r_edx+r_eax*4+0xfffffffcu), ST(0)); FPOP();
L_008793c2:; BB(0x008793c2);
    /* 008793c2: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 008793c5: cmp eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008793c7: jge 0x87940f */ if ((fS==fO)) goto L_0087940f;
L_008793c9:; BB(0x008793c9);
    /* 008793c9: sub ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008793cb: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008793ce: jl 0x879419 */ if ((fS!=fO)) goto L_00879419;
L_008793d0:; BB(0x008793d0);
    /* 008793d0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008793d2: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008793d4: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 008793d6: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 008793d9: lea ebp, [ebp - 6] */ r_ebp = (u32)(r_ebp+0xfffffffau);
    /* 008793dc: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
L_008793e0:; BB(0x008793e0);
    /* 008793e0: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008793e2: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 008793e5: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008793e7: mov dword ptr [edx + eax*4 + 4], ecx */ W32((u32)(r_edx+r_eax*4+0x4u), r_ecx);
    /* 008793eb: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008793ed: mov dword ptr [edx + eax*4 + 8], ecx */ W32((u32)(r_edx+r_eax*4+0x8u), r_ecx);
    /* 008793f1: mov dword ptr [edx + eax*4 + 0xc], esi */ W32((u32)(r_edx+r_eax*4+0xcu), r_esi);
    /* 008793f5: mov dword ptr [edx + eax*4 + 0x10], edi */ W32((u32)(r_edx+r_eax*4+0x10u), r_edi);
    /* 008793f9: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008793fc: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008793fe: jle 0x8793e0 */ if ((fZ||fS!=fO)) goto L_008793e0;
L_00879400:; BB(0x00879400);
    /* 00879400: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
L_00879404:; BB(0x00879404);
    /* 00879404: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_00879407:; BB(0x00879407);
    /* 00879407: mov dword ptr [edx + eax*4], ecx */ W32((u32)(r_edx+r_eax*4), r_ecx);
    /* 0087940a: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087940b: cmp eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087940d: jl 0x879407 */ if ((fS!=fO)) goto L_00879407;
L_0087940f:; BB(0x0087940f);
    /* 0087940f: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00879412: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00879413: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00879414: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00879415: mov esp, ebx */ r_esp = r_ebx;
    /* 00879417: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00879418: ret  */ FN_RET(0x008791a0); r_esp += 4; return;
L_00879419:; BB(0x00879419);
    /* 00879419: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0087941b: jmp 0x879404 */ goto L_00879404;
}

void f_00879420(void) /* sub_879420 */
{
    FN_ENTER(0x00879420);
L_00879420:; BB(0x00879420);
    /* 00879420: test dword ptr [0xae7f00], 0xffffff80 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087942a: jne 0x879448 */ if (!fZ) goto L_00879448;
L_00879430:; BB(0x00879430);
    /* 00879430: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087943a: jne 0x8797b0 */ if (!fZ) goto L_008797b0;
L_00879440:; BB(0x00879440);
    /* 00879440: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x879445u); f_0086b8a0();
    /* 00879445: jmp 0x879420 */ goto L_00879420;
L_00879448:; BB(0x00879448);
    /* 00879448: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00879449: mov ebx, esp */ r_ebx = r_esp;
    /* 0087944b: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0087944e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087944f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00879450: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 00879453: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00879457: mov ebp, esp */ r_ebp = r_esp;
    /* 00879459: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0087945c: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0087945f: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00879462: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00879465: mov esi, dword ptr [edx] */ r_esi = R32((u32)(r_edx));
    /* 00879467: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 0087946a: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087946c: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x879471u); f_00858020();
    /* 00879471: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00879474: mov eax, esp */ r_eax = r_esp;
    /* 00879476: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 00879479: add esp, -0x18 */ {  u32 a = r_esp; u32 b = 0xffffffe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087947c: mov edi, dword ptr [ebx + 0x10] */ r_edi = R32((u32)(r_ebx+0x10u));
    /* 0087947f: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00879483: mov eax, esi */ r_eax = r_esi;
    /* 00879485: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00879488: mov dword ptr [esp + 0x14], 0xffffffff */ W32((u32)(r_esp+0x14u), 0xffffffffu);
    /* 00879490: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 00879493: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00879496: fld dword ptr [0x99acb4] */ FPUSH(R_F32((u32)(0x99acb4u)));
    /* 0087949c: call 0x879998 */ r_esp -= 4; W32(r_esp, 0x8794a1u); f_00879998();
    /* 008794a1: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008794a4: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 008794a6: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008794a8: jle 0x879540 */ if ((fZ||fS!=fO)) goto L_00879540;
L_008794ae:; BB(0x008794ae);
    /* 008794ae: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008794b1: jl 0x879523 */ if ((fS!=fO)) goto L_00879523;
L_008794b3:; BB(0x008794b3);
    /* 008794b3: lea edx, [esi - 6] */ r_edx = (u32)(r_esi+0xfffffffau);
    /* 008794b6: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008794b9: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 008794bc: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 008794bf: mov esi, dword ptr [ebx + 0x10] */ r_esi = R32((u32)(r_ebx+0x10u));
L_008794c2:; BB(0x008794c2);
    /* 008794c2: movss xmm0, dword ptr [edi + ecx*4] */ { u32 v = R32((u32)(r_edi+r_ecx*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008794c7: subss xmm0, dword ptr [esi + ecx*4] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_ecx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; }
    /* 008794cc: movss dword ptr [eax + ecx*4], xmm0 */ W32((u32)(r_eax+r_ecx*4), xmm[0].d[0]);
    /* 008794d1: movss xmm1, dword ptr [edi + ecx*4 + 4] */ { u32 v = R32((u32)(r_edi+r_ecx*4+0x4u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 008794d7: subss xmm1, dword ptr [esi + ecx*4 + 4] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_ecx*4+0x4u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 008794dd: movss dword ptr [eax + ecx*4 + 4], xmm1 */ W32((u32)(r_eax+r_ecx*4+0x4u), xmm[1].d[0]);
    /* 008794e3: movss xmm2, dword ptr [edi + ecx*4 + 8] */ { u32 v = R32((u32)(r_edi+r_ecx*4+0x8u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 008794e9: subss xmm2, dword ptr [esi + ecx*4 + 8] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_ecx*4+0x8u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; }
    /* 008794ef: movss dword ptr [eax + ecx*4 + 8], xmm2 */ W32((u32)(r_eax+r_ecx*4+0x8u), xmm[2].d[0]);
    /* 008794f5: movss xmm3, dword ptr [edi + ecx*4 + 0xc] */ { u32 v = R32((u32)(r_edi+r_ecx*4+0xcu)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 008794fb: subss xmm3, dword ptr [esi + ecx*4 + 0xc] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_ecx*4+0xcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; }
    /* 00879501: movss dword ptr [eax + ecx*4 + 0xc], xmm3 */ W32((u32)(r_eax+r_ecx*4+0xcu), xmm[3].d[0]);
    /* 00879507: movss xmm4, dword ptr [edi + ecx*4 + 0x10] */ { u32 v = R32((u32)(r_edi+r_ecx*4+0x10u)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 0087950d: subss xmm4, dword ptr [esi + ecx*4 + 0x10] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_ecx*4+0x10u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; }
    /* 00879513: movss dword ptr [eax + ecx*4 + 0x10], xmm4 */ W32((u32)(r_eax+r_ecx*4+0x10u), xmm[4].d[0]);
    /* 00879519: add ecx, 5 */ {  u32 a = r_ecx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087951c: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087951e: jle 0x8794c2 */ if ((fZ||fS!=fO)) goto L_008794c2;
L_00879520:; BB(0x00879520);
    /* 00879520: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
L_00879523:; BB(0x00879523);
    /* 00879523: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00879526: mov edi, dword ptr [ebx + 0x10] */ r_edi = R32((u32)(r_ebx+0x10u));
    /* 00879529: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
L_0087952c:; BB(0x0087952c);
    /* 0087952c: movss xmm0, dword ptr [eax + ecx*4] */ { u32 v = R32((u32)(r_eax+r_ecx*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 00879531: subss xmm0, dword ptr [edi + ecx*4] */ { XMM s; s.d[0] = R32((u32)(r_edi+r_ecx*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; }
    /* 00879536: movss dword ptr [edx + ecx*4], xmm0 */ W32((u32)(r_edx+r_ecx*4), xmm[0].d[0]);
    /* 0087953b: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087953c: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087953e: jl 0x87952c */ if ((fS!=fO)) goto L_0087952c;
L_00879540:; BB(0x00879540);
    /* 00879540: add esp, -0x18 */ {  u32 a = r_esp; u32 b = 0xffffffe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00879543: mov edi, dword ptr [ebx + 0x10] */ r_edi = R32((u32)(r_ebx+0x10u));
    /* 00879546: mov ecx, dword ptr [ebx + 8] */ r_ecx = R32((u32)(r_ebx+0x8u));
    /* 00879549: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 0087954d: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 00879550: mov edx, dword ptr [edx + 0x80] */ r_edx = R32((u32)(r_edx+0x80u));
    /* 00879556: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0087955a: mov eax, esi */ r_eax = r_esi;
    /* 0087955c: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 0087955f: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00879562: fld dword ptr [0x99acb0] */ FPUSH(R_F32((u32)(0x99acb0u)));
    /* 00879568: call 0x879998 */ r_esp -= 4; W32(r_esp, 0x87956du); f_00879998();
    /* 0087956d: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00879570: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00879572: jle 0x8796f0 */ if ((fZ||fS!=fO)) goto L_008796f0;
L_00879578:; BB(0x00879578);
    /* 00879578: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0087957a: cmp esi, 0xb */ {  u32 a = r_esi; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087957d: jb 0x879666 */ if (fC) goto L_00879666;
L_00879583:; BB(0x00879583);
    /* 00879583: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
    /* 00879586: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00879588: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087958b: lea edx, [edx + eax] */ r_edx = (u32)(r_edx+r_eax);
    /* 0087958e: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00879591: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00879593: jb 0x87979c */ if (fC) goto L_0087979c;
L_00879599:; BB(0x00879599);
    /* 00879599: mov ecx, esi */ r_ecx = r_esi;
    /* 0087959b: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087959e: and edx, 0xf */ {  u32 a = r_edx; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 008795a1: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 008795a4: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
    /* 008795a7: je 0x8795ed */ if (fZ) goto L_008795ed;
L_008795a9:; BB(0x008795a9);
    /* 008795a9: test dl, 3 */ {  u32 a = (u8)r_edx; u32 b = 0x3u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008795ac: jne 0x879666 */ if (!fZ) goto L_00879666;
L_008795b2:; BB(0x008795b2);
    /* 008795b2: mov eax, edx */ r_eax = r_edx;
    /* 008795b4: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008795b6: lea edx, [eax + 0x10] */ r_edx = (u32)(r_eax+0x10u);
    /* 008795b9: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008795bc: lea eax, [ecx + eax + 0x10] */ r_eax = (u32)(r_ecx+r_eax+0x10u);
    /* 008795c0: shr edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008795c3: mov ecx, esi */ r_ecx = r_esi;
    /* 008795c5: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008795c7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 008795ca: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 008795cd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 008795d0: mov esi, dword ptr [ebx + 0xc] */ r_esi = R32((u32)(r_ebx+0xcu));
L_008795d3:; BB(0x008795d3);
    /* 008795d3: movss xmm0, dword ptr [esi + edi*4] */ { u32 v = R32((u32)(r_esi+r_edi*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008795d8: subss xmm0, dword ptr [eax + edi*4] */ { XMM s; s.d[0] = R32((u32)(r_eax+r_edi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; }
    /* 008795dd: movss dword ptr [eax + edi*4], xmm0 */ W32((u32)(r_eax+r_edi*4), xmm[0].d[0]);
    /* 008795e2: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008795e3: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008795e5: jb 0x8795d3 */ if (fC) goto L_008795d3;
L_008795e7:; BB(0x008795e7);
    /* 008795e7: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008795ea: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
L_008795ed:; BB(0x008795ed);
    /* 008795ed: and ecx, 7 */ {  u32 a = r_ecx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 008795f0: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008795f2: add ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008795f4: test al, 0xf */ {  u32 a = (u8)r_eax; u32 b = 0xfu; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 008795f6: jne 0x87962c */ if (!fZ) goto L_0087962c;
L_008795f8:; BB(0x008795f8);
    /* 008795f8: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008795fb: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
L_008795fe:; BB(0x008795fe);
    /* 008795fe: prefetchnta byte ptr [edx + edi*4 + 0x40] */ ;
    /* 00879603: movaps xmm0, xmmword ptr [eax + edi*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_edi*4), 16); xmm[0] = s; }
    /* 00879607: prefetchnta byte ptr [eax + edi*4 + 0x40] */ ;
    /* 0087960c: subps xmm0, xmmword ptr [edx + edi*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx+r_edi*4), 16); xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] - s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] - s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] - s.fs[3]; }
    /* 00879610: movaps xmmword ptr [edx + edi*4], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+r_edi*4), &xmm[0], 16);
    /* 00879614: movaps xmm1, xmmword ptr [eax + edi*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_edi*4+0x10u), 16); xmm[1] = s; }
    /* 00879619: subps xmm1, xmmword ptr [edx + edi*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx+r_edi*4+0x10u), 16); xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] - s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] - s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] - s.fs[3]; }
    /* 0087961e: movaps xmmword ptr [edx + edi*4 + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_edx+r_edi*4+0x10u), &xmm[1], 16);
    /* 00879623: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00879626: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00879628: jb 0x8795fe */ if (fC) goto L_008795fe;
L_0087962a:; BB(0x0087962a);
    /* 0087962a: jmp 0x87965e */ goto L_0087965e;
L_0087962c:; BB(0x0087962c);
    /* 0087962c: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087962f: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
L_00879632:; BB(0x00879632);
    /* 00879632: movups xmm0, xmmword ptr [eax + edi*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_edi*4), 16); xmm[0] = s; }
    /* 00879636: prefetchnta byte ptr [edx + edi*4 + 0x40] */ ;
    /* 0087963b: prefetchnta byte ptr [eax + edi*4 + 0x40] */ ;
    /* 00879640: subps xmm0, xmmword ptr [edx + edi*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx+r_edi*4), 16); xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] - s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] - s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] - s.fs[3]; }
    /* 00879644: movaps xmmword ptr [edx + edi*4], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_edx+r_edi*4), &xmm[0], 16);
    /* 00879648: movups xmm1, xmmword ptr [eax + edi*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_eax+r_edi*4+0x10u), 16); xmm[1] = s; }
    /* 0087964d: subps xmm1, xmmword ptr [edx + edi*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_edx+r_edi*4+0x10u), 16); xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] - s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] - s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] - s.fs[3]; }
    /* 00879652: movaps xmmword ptr [edx + edi*4 + 0x10], xmm1 */ memcpy((void *)(uintptr_t)(u32)(r_edx+r_edi*4+0x10u), &xmm[1], 16);
    /* 00879657: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087965a: cmp edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087965c: jb 0x879632 */ if (fC) goto L_00879632;
L_0087965e:; BB(0x0087965e);
    /* 0087965e: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00879660: jae 0x8796f0 */ if (!fC) goto L_008796f0;
L_00879666:; BB(0x00879666);
    /* 00879666: mov edx, esi */ r_edx = r_esi;
    /* 00879668: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087966a: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087966d: jb 0x8796d6 */ if (fC) goto L_008796d6;
L_0087966f:; BB(0x0087966f);
    /* 0087966f: lea edx, [esi - 6] */ r_edx = (u32)(r_esi+0xfffffffau);
    /* 00879672: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00879675: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
L_00879678:; BB(0x00879678);
    /* 00879678: movss xmm0, dword ptr [eax + edi*4] */ { u32 v = R32((u32)(r_eax+r_edi*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087967d: subss xmm0, dword ptr [ecx + edi*4] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; }
    /* 00879682: movss dword ptr [ecx + edi*4], xmm0 */ W32((u32)(r_ecx+r_edi*4), xmm[0].d[0]);
    /* 00879687: movss xmm1, dword ptr [eax + edi*4 + 4] */ { u32 v = R32((u32)(r_eax+r_edi*4+0x4u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087968d: subss xmm1, dword ptr [ecx + edi*4 + 4] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edi*4+0x4u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[1].fs[0] = xmm[1].fs[0] - s.fs[0]; }
    /* 00879693: movss dword ptr [ecx + edi*4 + 4], xmm1 */ W32((u32)(r_ecx+r_edi*4+0x4u), xmm[1].d[0]);
    /* 00879699: movss xmm2, dword ptr [eax + edi*4 + 8] */ { u32 v = R32((u32)(r_eax+r_edi*4+0x8u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 0087969f: subss xmm2, dword ptr [ecx + edi*4 + 8] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edi*4+0x8u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; }
    /* 008796a5: movss dword ptr [ecx + edi*4 + 8], xmm2 */ W32((u32)(r_ecx+r_edi*4+0x8u), xmm[2].d[0]);
    /* 008796ab: movss xmm3, dword ptr [eax + edi*4 + 0xc] */ { u32 v = R32((u32)(r_eax+r_edi*4+0xcu)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 008796b1: subss xmm3, dword ptr [ecx + edi*4 + 0xc] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edi*4+0xcu)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; }
    /* 008796b7: movss dword ptr [ecx + edi*4 + 0xc], xmm3 */ W32((u32)(r_ecx+r_edi*4+0xcu), xmm[3].d[0]);
    /* 008796bd: movss xmm4, dword ptr [eax + edi*4 + 0x10] */ { u32 v = R32((u32)(r_eax+r_edi*4+0x10u)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 008796c3: subss xmm4, dword ptr [ecx + edi*4 + 0x10] */ { XMM s; s.d[0] = R32((u32)(r_ecx+r_edi*4+0x10u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; }
    /* 008796c9: movss dword ptr [ecx + edi*4 + 0x10], xmm4 */ W32((u32)(r_ecx+r_edi*4+0x10u), xmm[4].d[0]);
    /* 008796cf: add edi, 5 */ {  u32 a = r_edi; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008796d2: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008796d4: jbe 0x879678 */ if ((fC||fZ)) goto L_00879678;
L_008796d6:; BB(0x008796d6);
    /* 008796d6: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008796d9: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
L_008796dc:; BB(0x008796dc);
    /* 008796dc: movss xmm0, dword ptr [ecx + edi*4] */ { u32 v = R32((u32)(r_ecx+r_edi*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 008796e1: subss xmm0, dword ptr [edx + edi*4] */ { XMM s; s.d[0] = R32((u32)(r_edx+r_edi*4)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; }
    /* 008796e6: movss dword ptr [edx + edi*4], xmm0 */ W32((u32)(r_edx+r_edi*4), xmm[0].d[0]);
    /* 008796eb: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008796ec: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008796ee: jb 0x8796dc */ if (fC) goto L_008796dc;
L_008796f0:; BB(0x008796f0);
    /* 008796f0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008796f2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008796f4: jle 0x87978f */ if ((fZ||fS!=fO)) goto L_0087978f;
L_008796fa:; BB(0x008796fa);
    /* 008796fa: fld qword ptr [0x99ab80] */ FPUSH(R_F64((u32)(0x99ab80u)));
    /* 00879700: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
L_00879703:; BB(0x00879703);
    /* 00879703: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00879706: fld dword ptr [edx + eax*4] */ FPUSH(R_F32((u32)(r_edx+r_eax*4)));
    /* 00879709: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087970b: fstp qword ptr [ebp - 0x28] */ W_F64((u32)(r_ebp+0xffffffd8u), ST(0)); FPOP();
    /* 0087970e: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00879711: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00879714: mov ecx, edx */ r_ecx = r_edx;
    /* 00879716: shr ecx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00879719: and ecx, 0x7ff */ {  u32 a = r_ecx; u32 b = 0x7ffu; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 0087971f: cmp ecx, 0x3fe */ {  u32 a = r_ecx; u32 b = 0x3feu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00879725: jle 0x879749 */ if ((fZ||fS!=fO)) goto L_00879749;
L_00879727:; BB(0x00879727);
    /* 00879727: mov esi, edx */ r_esi = r_edx;
    /* 00879729: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0087972b: add ecx, 0x41e */ {  u32 a = r_ecx; u32 b = 0x41eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00879731: shld esi, edi, 0xb */ { u32 c = (11u) & 31; u32 a = r_esi; u32 b = r_edi; u32 r = a; if (c) { r = (a << c) | (b >> (32 - c)); fC = (a >> (32 - c)) & 1; r_esi = r; } }
    /* 00879735: or esi, 0x80000000 */ {  u32 a = r_esi; u32 b = 0x80000000u; u32 r = (a | b) & 0xffffffffu; r_esi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = 0; fC = 0; }
    /* 0087973b: shr esi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0087973d: mov ecx, esi */ r_ecx = r_esi;
    /* 0087973f: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00879741: cmp edx, 0 */ {  u32 a = r_edx; u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00879744: cmovge ecx, esi */ if ((fS==fO)) { r_ecx = r_esi; }
    /* 00879747: jmp 0x87974b */ goto L_0087974b;
L_00879749:; BB(0x00879749);
    /* 00879749: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_0087974b:; BB(0x0087974b);
    /* 0087974b: mov edx, 0x27 */ r_edx = 0x27u;
    /* 00879750: cmp ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00879753: mov esi, 0 */ r_esi = 0x0u;
    /* 00879758: jl 0x87975c */ if ((fS!=fO)) goto L_0087975c;
L_0087975a:; BB(0x0087975a);
    /* 0087975a: mov ecx, edx */ r_ecx = r_edx;
L_0087975c:; BB(0x0087975c);
    /* 0087975c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0087975e: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 00879761: jge 0x879765 */ if ((fS==fO)) goto L_00879765;
L_00879763:; BB(0x00879763);
    /* 00879763: mov ecx, esi */ r_ecx = r_esi;
L_00879765:; BB(0x00879765);
    /* 00879765: mov esi, dword ptr [edi + 4] */ r_esi = R32((u32)(r_edi+0x4u));
    /* 00879768: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087976b: movss xmm0, dword ptr [edx + eax*4] */ { u32 v = R32((u32)(r_edx+r_eax*4)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 00879770: addss xmm0, dword ptr [esi + ecx*4 + 0x150] */ { XMM s; s.d[0] = R32((u32)(r_esi+r_ecx*4+0x150u)); s.d[1] = 0; s.d[2] = 0; s.d[3] = 0; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; }
    /* 00879779: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
    /* 0087977c: movss dword ptr [ecx + eax*4], xmm0 */ W32((u32)(r_ecx+r_eax*4), xmm[0].d[0]);
    /* 00879781: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00879782: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00879785: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00879787: jl 0x879703 */ if ((fS!=fO)) goto L_00879703;
L_0087978d:; BB(0x0087978d);
    /* 0087978d: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087978f:; BB(0x0087978f);
    /* 0087978f: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00879792: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00879795: mov esp, ebp */ r_esp = r_ebp;
    /* 00879797: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00879798: mov esp, ebx */ r_esp = r_ebx;
    /* 0087979a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0087979b: ret  */ FN_RET(0x00879420); r_esp += 4; return;
L_0087979c:; BB(0x0087979c);
    /* 0087979c: add eax, dword ptr [ebx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0xcu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087979f: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008797a2: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008797a4: jb 0x879666 */ if (fC) goto L_00879666;
L_008797aa:; BB(0x008797aa);
    /* 008797aa: jmp 0x879599 */ goto L_00879599;
L_008797b0:; BB(0x008797b0);
    /* 008797b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008797b1: mov ebx, esp */ r_ebx = r_esp;
    /* 008797b3: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008797b6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008797b7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008797b8: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 008797bb: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 008797bf: mov ebp, esp */ r_ebp = r_esp;
    /* 008797c1: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008797c4: mov dword ptr [ebp - 0xc], edi */ W32((u32)(r_ebp+0xfffffff4u), r_edi);
    /* 008797c7: mov dword ptr [ebp - 0x10], esi */ W32((u32)(r_ebp+0xfffffff0u), r_esi);
    /* 008797ca: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008797cd: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 008797cf: lea eax, [edi + edi] */ r_eax = (u32)(r_edi+r_edi);
    /* 008797d2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008797d4: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x8797d9u); f_00858020();
    /* 008797d9: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008797dc: mov eax, esp */ r_eax = r_esp;
    /* 008797de: mov esi, eax */ r_esi = r_eax;
    /* 008797e0: add esp, -0x18 */ {  u32 a = r_esp; u32 b = 0xffffffe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008797e3: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 008797e6: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 008797ea: mov dword ptr [esp + 0x14], 0xffffffff */ W32((u32)(r_esp+0x14u), 0xffffffffu);
    /* 008797f2: mov eax, edi */ r_eax = r_edi;
    /* 008797f4: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 008797f7: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 008797fa: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008797fd: fld dword ptr [0x99acac] */ FPUSH(R_F32((u32)(0x99acacu)));
    /* 00879803: call 0x879998 */ r_esp -= 4; W32(r_esp, 0x879808u); f_00879998();
    /* 00879808: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087980b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0087980d: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087980f: jle 0x879886 */ if ((fZ||fS!=fO)) goto L_00879886;
L_00879811:; BB(0x00879811);
    /* 00879811: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00879814: jl 0x87986b */ if ((fS!=fO)) goto L_0087986b;
L_00879816:; BB(0x00879816);
    /* 00879816: lea edx, [edi - 6] */ r_edx = (u32)(r_edi+0xfffffffau);
    /* 00879819: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 0087981c: mov edi, dword ptr [ebx + 0x10] */ r_edi = R32((u32)(r_ebx+0x10u));
    /* 0087981f: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00879822: jmp 0x879828 */ goto L_00879828;
L_00879824:; BB(0x00879824);
    /* 00879824: fstp dword ptr [esi + eax*4 - 4] */ W_F32((u32)(r_esi+r_eax*4+0xfffffffcu), ST(0)); FPOP();
L_00879828:; BB(0x00879828);
    /* 00879828: fld dword ptr [ecx + eax*4] */ FPUSH(R_F32((u32)(r_ecx+r_eax*4)));
    /* 0087982b: fsub dword ptr [edi + eax*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_eax*4));
    /* 0087982e: fstp dword ptr [esi + eax*4] */ W_F32((u32)(r_esi+r_eax*4), ST(0)); FPOP();
    /* 00879831: fld dword ptr [ecx + eax*4 + 4] */ FPUSH(R_F32((u32)(r_ecx+r_eax*4+0x4u)));
    /* 00879835: fsub dword ptr [edi + eax*4 + 4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_eax*4+0x4u));
    /* 00879839: fstp dword ptr [esi + eax*4 + 4] */ W_F32((u32)(r_esi+r_eax*4+0x4u), ST(0)); FPOP();
    /* 0087983d: fld dword ptr [ecx + eax*4 + 8] */ FPUSH(R_F32((u32)(r_ecx+r_eax*4+0x8u)));
    /* 00879841: fsub dword ptr [edi + eax*4 + 8] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_eax*4+0x8u));
    /* 00879845: fstp dword ptr [esi + eax*4 + 8] */ W_F32((u32)(r_esi+r_eax*4+0x8u), ST(0)); FPOP();
    /* 00879849: fld dword ptr [ecx + eax*4 + 0xc] */ FPUSH(R_F32((u32)(r_ecx+r_eax*4+0xcu)));
    /* 0087984d: fsub dword ptr [edi + eax*4 + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_eax*4+0xcu));
    /* 00879851: fstp dword ptr [esi + eax*4 + 0xc] */ W_F32((u32)(r_esi+r_eax*4+0xcu), ST(0)); FPOP();
    /* 00879855: fld dword ptr [ecx + eax*4 + 0x10] */ FPUSH(R_F32((u32)(r_ecx+r_eax*4+0x10u)));
    /* 00879859: fsub dword ptr [edi + eax*4 + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_eax*4+0x10u));
    /* 0087985d: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00879860: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00879862: jle 0x879824 */ if ((fZ||fS!=fO)) goto L_00879824;
L_00879864:; BB(0x00879864);
    /* 00879864: fstp dword ptr [esi + eax*4 - 4] */ W_F32((u32)(r_esi+r_eax*4+0xfffffffcu), ST(0)); FPOP();
    /* 00879868: mov edi, dword ptr [ebp - 8] */ r_edi = R32((u32)(r_ebp+0xfffffff8u));
L_0087986b:; BB(0x0087986b);
    /* 0087986b: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0087986e: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00879871: jmp 0x879877 */ goto L_00879877;
L_00879873:; BB(0x00879873);
    /* 00879873: fstp dword ptr [esi + eax*4 - 4] */ W_F32((u32)(r_esi+r_eax*4+0xfffffffcu), ST(0)); FPOP();
L_00879877:; BB(0x00879877);
    /* 00879877: fld dword ptr [ecx + eax*4] */ FPUSH(R_F32((u32)(r_ecx+r_eax*4)));
    /* 0087987a: fsub dword ptr [edx + eax*4] */ ST(0) = ST(0) - R_F32((u32)(r_edx+r_eax*4));
    /* 0087987d: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087987e: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00879880: jl 0x879873 */ if ((fS!=fO)) goto L_00879873;
L_00879882:; BB(0x00879882);
    /* 00879882: fstp dword ptr [esi + eax*4 - 4] */ W_F32((u32)(r_esi+r_eax*4+0xfffffffcu), ST(0)); FPOP();
L_00879886:; BB(0x00879886);
    /* 00879886: add esp, -0x18 */ {  u32 a = r_esp; u32 b = 0xffffffe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00879889: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 0087988c: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00879890: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00879893: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00879896: mov eax, dword ptr [eax + 0x80] */ r_eax = R32((u32)(r_eax+0x80u));
    /* 0087989c: mov dword ptr [esp + 0x14], eax */ W32((u32)(r_esp+0x14u), r_eax);
    /* 008798a0: mov eax, edi */ r_eax = r_edi;
    /* 008798a2: mov edx, dword ptr [edx + 0x18] */ r_edx = R32((u32)(r_edx+0x18u));
    /* 008798a5: mov ecx, esi */ r_ecx = r_esi;
    /* 008798a7: fld dword ptr [0x99aca8] */ FPUSH(R_F32((u32)(0x99aca8u)));
    /* 008798ad: call 0x879998 */ r_esp -= 4; W32(r_esp, 0x8798b2u); f_00879998();
    /* 008798b2: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008798b5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008798b7: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008798b9: jle 0x879924 */ if ((fZ||fS!=fO)) goto L_00879924;
L_008798bb:; BB(0x008798bb);
    /* 008798bb: cmp edi, 6 */ {  u32 a = r_edi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008798be: jl 0x87990c */ if ((fS!=fO)) goto L_0087990c;
L_008798c0:; BB(0x008798c0);
    /* 008798c0: lea eax, [edi - 6] */ r_eax = (u32)(r_edi+0xfffffffau);
    /* 008798c3: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 008798c6: jmp 0x8798cc */ goto L_008798cc;
L_008798c8:; BB(0x008798c8);
    /* 008798c8: fstp dword ptr [esi + edx*4 - 4] */ W_F32((u32)(r_esi+r_edx*4+0xfffffffcu), ST(0)); FPOP();
L_008798cc:; BB(0x008798cc);
    /* 008798cc: fld dword ptr [ecx + edx*4] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4)));
    /* 008798cf: fsub dword ptr [esi + edx*4] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_edx*4));
    /* 008798d2: fstp dword ptr [esi + edx*4] */ W_F32((u32)(r_esi+r_edx*4), ST(0)); FPOP();
    /* 008798d5: fld dword ptr [ecx + edx*4 + 4] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0x4u)));
    /* 008798d9: fsub dword ptr [esi + edx*4 + 4] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_edx*4+0x4u));
    /* 008798dd: fstp dword ptr [esi + edx*4 + 4] */ W_F32((u32)(r_esi+r_edx*4+0x4u), ST(0)); FPOP();
    /* 008798e1: fld dword ptr [ecx + edx*4 + 8] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0x8u)));
    /* 008798e5: fsub dword ptr [esi + edx*4 + 8] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_edx*4+0x8u));
    /* 008798e9: fstp dword ptr [esi + edx*4 + 8] */ W_F32((u32)(r_esi+r_edx*4+0x8u), ST(0)); FPOP();
    /* 008798ed: fld dword ptr [ecx + edx*4 + 0xc] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0xcu)));
    /* 008798f1: fsub dword ptr [esi + edx*4 + 0xc] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_edx*4+0xcu));
    /* 008798f5: fstp dword ptr [esi + edx*4 + 0xc] */ W_F32((u32)(r_esi+r_edx*4+0xcu), ST(0)); FPOP();
    /* 008798f9: fld dword ptr [ecx + edx*4 + 0x10] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4+0x10u)));
    /* 008798fd: fsub dword ptr [esi + edx*4 + 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_edx*4+0x10u));
    /* 00879901: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00879904: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00879906: jle 0x8798c8 */ if ((fZ||fS!=fO)) goto L_008798c8;
L_00879908:; BB(0x00879908);
    /* 00879908: fstp dword ptr [esi + edx*4 - 4] */ W_F32((u32)(r_esi+r_edx*4+0xfffffffcu), ST(0)); FPOP();
L_0087990c:; BB(0x0087990c);
    /* 0087990c: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 0087990f: jmp 0x879915 */ goto L_00879915;
L_00879911:; BB(0x00879911);
    /* 00879911: fstp dword ptr [esi + edx*4 - 4] */ W_F32((u32)(r_esi+r_edx*4+0xfffffffcu), ST(0)); FPOP();
L_00879915:; BB(0x00879915);
    /* 00879915: fld dword ptr [eax + edx*4] */ FPUSH(R_F32((u32)(r_eax+r_edx*4)));
    /* 00879918: fsub dword ptr [esi + edx*4] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_edx*4));
    /* 0087991b: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087991c: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087991e: jl 0x879911 */ if ((fS!=fO)) goto L_00879911;
L_00879920:; BB(0x00879920);
    /* 00879920: fstp dword ptr [esi + edx*4 - 4] */ W_F32((u32)(r_esi+r_edx*4+0xfffffffcu), ST(0)); FPOP();
L_00879924:; BB(0x00879924);
    /* 00879924: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00879926: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00879928: jle 0x87998b */ if ((fZ||fS!=fO)) goto L_0087998b;
L_0087992a:; BB(0x0087992a);
    /* 0087992a: fld qword ptr [0x99ab78] */ FPUSH(R_F64((u32)(0x99ab78u)));
    /* 00879930: mov dword ptr [ebp - 4], esi */ W32((u32)(r_ebp+0xfffffffcu), r_esi);
    /* 00879933: mov dword ptr [ebp - 8], edi */ W32((u32)(r_ebp+0xfffffff8u), r_edi);
    /* 00879936: mov ecx, dword ptr [ebx + 0x10] */ r_ecx = R32((u32)(r_ebx+0x10u));
L_00879939:; BB(0x00879939);
    /* 00879939: fld dword ptr [ecx + edx*4] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4)));
    /* 0087993c: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087993e: fnstcw word ptr [ebp - 0x28] */ W16((u32)(r_ebp+0xffffffd8u), fcw);
    /* 00879941: movzx eax, word ptr [ebp - 0x28] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd8u));
    /* 00879945: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087994a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0087994d: fldcw word ptr [ebp - 0x20] */ fcw = R16((u32)(r_ebp+0xffffffe0u));
    /* 00879950: fistp dword ptr [ebp - 0x18] */ W32((u32)(r_ebp+0xffffffe8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00879953: fldcw word ptr [ebp - 0x28] */ fcw = R16((u32)(r_ebp+0xffffffd8u));
    /* 00879956: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00879959: cmp eax, 0x28 */ {  u32 a = r_eax; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087995c: jl 0x879963 */ if ((fS!=fO)) goto L_00879963;
L_0087995e:; BB(0x0087995e);
    /* 0087995e: mov eax, 0x27 */ r_eax = 0x27u;
L_00879963:; BB(0x00879963);
    /* 00879963: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00879965: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00879967: jge 0x87996b */ if ((fS==fO)) goto L_0087996b;
L_00879969:; BB(0x00879969);
    /* 00879969: mov eax, esi */ r_eax = r_esi;
L_0087996b:; BB(0x0087996b);
    /* 0087996b: mov edi, dword ptr [ebx + 8] */ r_edi = R32((u32)(r_ebx+0x8u));
    /* 0087996e: mov edi, dword ptr [edi + 4] */ r_edi = R32((u32)(r_edi+0x4u));
    /* 00879971: mov esi, dword ptr [ebp - 4] */ r_esi = R32((u32)(r_ebp+0xfffffffcu));
    /* 00879974: fld dword ptr [esi + edx*4] */ FPUSH(R_F32((u32)(r_esi+r_edx*4)));
    /* 00879977: fadd dword ptr [edi + eax*4 + 0x150] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_eax*4+0x150u));
    /* 0087997e: fstp dword ptr [ecx + edx*4] */ W_F32((u32)(r_ecx+r_edx*4), ST(0)); FPOP();
    /* 00879981: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00879982: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00879985: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00879987: jl 0x879939 */ if ((fS!=fO)) goto L_00879939;
L_00879989:; BB(0x00879989);
    /* 00879989: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087998b:; BB(0x0087998b);
    /* 0087998b: mov esi, dword ptr [ebp - 0x10] */ r_esi = R32((u32)(r_ebp+0xfffffff0u));
    /* 0087998e: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 00879991: mov esp, ebp */ r_esp = r_ebp;
    /* 00879993: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00879994: mov esp, ebx */ r_esp = r_ebx;
    /* 00879996: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00879997: ret  */ FN_RET(0x00879420); r_esp += 4; return;
}

void f_00879998(void) /* sub_879998 */
{
    FN_ENTER(0x00879998);
L_00879998:; BB(0x00879998);
    /* 00879998: test dword ptr [0xae7f00], 0xffffff80 */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffff80u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008799a2: jne 0x8799c0 */ if (!fZ) goto L_008799c0;
L_008799a8:; BB(0x008799a8);
    /* 008799a8: test dword ptr [0xae7f00], 0xffffffff */ {  u32 a = R32((u32)(0xae7f00u)); u32 b = 0xffffffffu; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008799b2: jne 0x87a348 */ if (!fZ) goto L_0087a348;
L_008799b8:; BB(0x008799b8);
    /* 008799b8: call 0x86b8a0 */ r_esp -= 4; W32(r_esp, 0x8799bdu); f_0086b8a0();
    /* 008799bd: jmp 0x879998 */ goto L_00879998;
L_008799c0:; BB(0x008799c0);
    /* 008799c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008799c1: mov ebx, esp */ r_ebx = r_esp;
    /* 008799c3: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 008799c6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008799c7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008799c8: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 008799cb: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 008799cf: mov ebp, esp */ r_ebp = r_esp;
    /* 008799d1: sub esp, 0x98 */ {  u32 a = r_esp; u32 b = 0x98u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008799d7: mov dword ptr [ebp - 0x88], edi */ W32((u32)(r_ebp+0xffffff78u), r_edi);
    /* 008799dd: mov dword ptr [ebp - 0x50], esi */ W32((u32)(r_ebp+0xffffffb0u), r_esi);
    /* 008799e0: fst dword ptr [ebp - 0x4c] */ W_F32((u32)(r_ebp+0xffffffb4u), ST(0));
    /* 008799e3: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
    /* 008799e6: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 008799e9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008799eb: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008799ed: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 008799f0: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 008799f3: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 008799f6: mov eax, edi */ r_eax = r_edi;
    /* 008799f8: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x8799fdu); f_00858020();
    /* 008799fd: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00879a00: mov eax, esp */ r_eax = r_esp;
    /* 00879a02: mov dword ptr [ebp - 0x40], eax */ W32((u32)(r_ebp+0xffffffc0u), r_eax);
    /* 00879a05: mov eax, edi */ r_eax = r_edi;
    /* 00879a07: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x879a0cu); f_00858020();
    /* 00879a0c: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00879a0f: mov eax, esp */ r_eax = r_esp;
    /* 00879a11: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 00879a14: mov eax, edi */ r_eax = r_edi;
    /* 00879a16: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x879a1bu); f_00858020();
    /* 00879a1b: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00879a1e: mov eax, esp */ r_eax = r_esp;
    /* 00879a20: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00879a23: mov eax, edi */ r_eax = r_edi;
    /* 00879a25: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x879a2au); f_00858020();
    /* 00879a2a: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00879a2d: mov eax, esp */ r_eax = r_esp;
    /* 00879a2f: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
    /* 00879a32: mov eax, edi */ r_eax = r_edi;
    /* 00879a34: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x879a39u); f_00858020();
    /* 00879a39: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 00879a3c: mov eax, esp */ r_eax = r_esp;
    /* 00879a3e: mov edx, eax */ r_edx = r_eax;
    /* 00879a40: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00879a43: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
    /* 00879a46: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00879a49: fld dword ptr [0x99ac94] */ FPUSH(R_F32((u32)(0x99ac94u)));
    /* 00879a4f: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 00879a52: fld dword ptr [0x99ac94] */ FPUSH(R_F32((u32)(0x99ac94u)));
    /* 00879a58: fld dword ptr [0x99ac94] */ FPUSH(R_F32((u32)(0x99ac94u)));
    /* 00879a5e: fld dword ptr [0x99ac90] */ FPUSH(R_F32((u32)(0x99ac90u)));
    /* 00879a64: fld dword ptr [ecx] */ FPUSH(R_F32((u32)(r_ecx)));
    /* 00879a66: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00879a69: fadd dword ptr [ebp - 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffb4u));
    /* 00879a6c: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00879a6e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00879a70: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00879a71: fcmovbe st(0), st(1) */ if (fC || fZ) ST(0) = ST(1);
    /* 00879a73: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00879a75: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00879a77: fmul qword ptr [0x99ab68] */ ST(0) = ST(0) * R_F64((u32)(0x99ab68u));
    /* 00879a7d: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00879a7f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00879a81: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00879a83: fst dword ptr [edi] */ W_F32((u32)(r_edi), ST(0));
    /* 00879a85: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00879a88: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00879a8b: fst dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0));
    /* 00879a8d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00879a90: mov dword ptr [ecx], 0 */ W32((u32)(r_ecx), 0x0u);
    /* 00879a96: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00879a99: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00879a9b: fst dword ptr [ecx] */ W_F32((u32)(r_ecx), ST(0));
    /* 00879a9d: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 00879aa3: mov edx, 1 */ r_edx = 0x1u;
    /* 00879aa8: fld dword ptr [0x99ac90] */ FPUSH(R_F32((u32)(0x99ac90u)));
    /* 00879aae: jle 0x87a2fb */ if ((fZ||fS!=fO)) goto L_0087a2fb;
L_00879ab4:; BB(0x00879ab4);
    /* 00879ab4: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00879ab6: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00879ab9: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00879abb: fstp dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0)); FPOP();
    /* 00879abe: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
L_00879ac1:; BB(0x00879ac1);
    /* 00879ac1: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00879ac3: fst dword ptr [ebp - 8] */ W_F32((u32)(r_ebp+0xfffffff8u), ST(0));
    /* 00879ac6: fld dword ptr [edi + edx*4] */ FPUSH(R_F32((u32)(r_edi+r_edx*4)));
    /* 00879ac9: fadd dword ptr [ebp - 0x4c] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffb4u));
    /* 00879acc: fld dword ptr [0x99ac90] */ FPUSH(R_F32((u32)(0x99ac90u)));
    /* 00879ad2: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00879ad4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00879ad6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00879ad7: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 00879ada: fcmovb st(0), st(1) */ if (fC) ST(0) = ST(1);
    /* 00879adc: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00879ade: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00879ae0: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00879ae2: fadd st(3), st(0) */ ST(3) = ST(3) + ST(0);
    /* 00879ae4: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 00879ae6: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00879ae8: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 00879aea: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 00879aec: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00879aee: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 00879af0: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00879af2: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 00879af4: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00879af6: fld dword ptr [ebp - 0x38] */ FPUSH(R_F32((u32)(r_ebp+0xffffffc8u)));
    /* 00879af9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00879afb: fst dword ptr [ebp - 0x38] */ W_F32((u32)(r_ebp+0xffffffc8u), ST(0));
    /* 00879afe: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00879b00: fst dword ptr [eax + edx*4] */ W_F32((u32)(r_eax+r_edx*4), ST(0));
    /* 00879b03: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00879b06: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00879b08: fst dword ptr [eax + edx*4] */ W_F32((u32)(r_eax+r_edx*4), ST(0));
    /* 00879b0b: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00879b0e: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00879b10: fst dword ptr [esi + edx*4] */ W_F32((u32)(r_esi+r_edx*4), ST(0));
    /* 00879b13: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00879b15: fst dword ptr [ecx + edx*4] */ W_F32((u32)(r_ecx+r_edx*4), ST(0));
    /* 00879b18: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00879b1a: fstp dword ptr [eax + edx*4] */ W_F32((u32)(r_eax+r_edx*4), ST(0)); FPOP();
    /* 00879b1d: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00879b1e: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 00879b21: fld dword ptr [ebp - 8] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff8u)));
    /* 00879b24: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00879b26: fadd dword ptr [0x99ac90] */ ST(0) = ST(0) + R_F32((u32)(0x99ac90u));
    /* 00879b2c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00879b2e: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00879b30: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00879b32: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00879b34: jl 0x879ac1 */ if ((fS!=fO)) goto L_00879ac1;
L_00879b36:; BB(0x00879b36);
    /* 00879b36: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 00879b38: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00879b3a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00879b3c: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00879b3e: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00879b40: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
    /* 00879b43: fld dword ptr [0x99ac90] */ FPUSH(R_F32((u32)(0x99ac90u)));
L_00879b49:; BB(0x00879b49);
    /* 00879b49: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00879b4b: fldz  */ FPUSH(0.0);
    /* 00879b4d: fldz  */ FPUSH(0.0);
    /* 00879b4f: fld dword ptr [0x99ac94] */ FPUSH(R_F32((u32)(0x99ac94u)));
    /* 00879b55: fldz  */ FPUSH(0.0);
    /* 00879b57: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00879b59: jmp 0x879bf4 */ goto L_00879bf4;
L_00879b5e:; BB(0x00879b5e);
    /* 00879b5e: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00879b60: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00879b62: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00879b64: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 00879b67: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00879b69: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00879b6b: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
    /* 00879b6e: mov esi, edi */ r_esi = r_edi;
    /* 00879b70: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00879b72: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00879b74: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 00879b77: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00879b78: fadd dword ptr [edi + edx*4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_edx*4));
    /* 00879b7b: mov edi, esi */ r_edi = r_esi;
    /* 00879b7d: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00879b7f: fld dword ptr [esi + edx*4] */ FPUSH(R_F32((u32)(r_esi+r_edx*4)));
    /* 00879b82: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 00879b84: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00879b87: mov esi, edi */ r_esi = r_edi;
    /* 00879b89: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00879b8b: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00879b8d: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00879b8f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00879b91: fadd dword ptr [edi + edx*4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_edx*4));
    /* 00879b94: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 00879b97: mov esi, edi */ r_esi = r_edi;
    /* 00879b99: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00879b9b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00879b9d: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00879b9f: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00879ba2: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00879ba4: fadd dword ptr [edi + edx*4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_edx*4));
    /* 00879ba7: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00879ba9: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00879bab: fld dword ptr [esi + edx*4] */ FPUSH(R_F32((u32)(r_esi+r_edx*4)));
    /* 00879bae: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00879bb0: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00879bb2: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00879bb4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00879bb6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00879bb8: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 00879bba: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00879bbc: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00879bbe: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00879bc0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00879bc2: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00879bc4: fsubrp st(4) */ ST(4) = ST(0) - ST(4); FPOP();
    /* 00879bc6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00879bc8: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00879bca: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 00879bcc: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00879bce: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00879bd0: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00879bd2: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00879bd4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00879bd7: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00879bda: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00879bdc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00879bde: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00879bdf: fcmovb st(0), st(1) */ if (fC) ST(0) = ST(1);
    /* 00879be1: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00879be3: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 00879be6: fsub dword ptr [ebp - 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffb4u));
    /* 00879be9: fstp dword ptr [eax + edx] */ W_F32((u32)(r_eax+r_edx), ST(0)); FPOP();
    /* 00879bec: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00879bee: fadd dword ptr [0x99ac90] */ ST(0) = ST(0) + R_F32((u32)(0x99ac90u));
L_00879bf4:; BB(0x00879bf4);
    /* 00879bf4: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 00879bf7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00879bf9: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00879bfc: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00879bff: mov edx, dword ptr [eax + edx] */ r_edx = R32((u32)(r_eax+r_edx));
    /* 00879c02: mov eax, edx */ r_eax = r_edx;
    /* 00879c04: sar eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00879c07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00879c09: jl 0x879b5e */ if ((fS!=fO)) goto L_00879b5e;
L_00879c0f:; BB(0x00879c0f);
    /* 00879c0f: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00879c12: fld dword ptr [0x99ac90] */ FPUSH(R_F32((u32)(0x99ac90u)));
    /* 00879c18: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00879c1a: jmp 0x879cb2 */ goto L_00879cb2;
L_00879c1f:; BB(0x00879c1f);
    /* 00879c1f: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00879c21: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00879c23: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00879c25: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
    /* 00879c28: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00879c29: fld dword ptr [edi + edx*4] */ FPUSH(R_F32((u32)(r_edi+r_edx*4)));
    /* 00879c2c: fsub dword ptr [edi + eax*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_eax*4));
    /* 00879c2f: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 00879c32: fld dword ptr [edi + edx*4] */ FPUSH(R_F32((u32)(r_edi+r_edx*4)));
    /* 00879c35: fsub dword ptr [edi + eax*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_eax*4));
    /* 00879c38: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00879c3b: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00879c3d: fld dword ptr [edi + edx*4] */ FPUSH(R_F32((u32)(r_edi+r_edx*4)));
    /* 00879c40: fsub dword ptr [edi + eax*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_eax*4));
    /* 00879c43: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 00879c46: fld dword ptr [edi + edx*4] */ FPUSH(R_F32((u32)(r_edi+r_edx*4)));
    /* 00879c49: fsub dword ptr [edi + eax*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_eax*4));
    /* 00879c4c: mov edi, dword ptr [ebp - 0x44] */ r_edi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00879c4f: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00879c51: fld dword ptr [edi + edx*4] */ FPUSH(R_F32((u32)(r_edi+r_edx*4)));
    /* 00879c54: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00879c56: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00879c58: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00879c5a: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00879c5c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00879c5e: fsub dword ptr [edi + eax*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_eax*4));
    /* 00879c61: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00879c63: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00879c65: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 00879c67: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00879c69: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00879c6b: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 00879c6d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00879c6f: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00879c71: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00879c73: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00879c75: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 00879c77: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00879c79: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00879c7b: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00879c7d: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00879c7f: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00879c82: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00879c84: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00879c86: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00879c87: fcmovb st(0), st(1) */ if (fC) ST(0) = ST(1);
    /* 00879c89: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00879c8b: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 00879c8e: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00879c91: fsub dword ptr [ebp - 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffb4u));
    /* 00879c94: fstp dword ptr [edx + esi] */ W_F32((u32)(r_edx+r_esi), ST(0)); FPOP();
    /* 00879c97: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00879c99: fadd dword ptr [0x99ac90] */ ST(0) = ST(0) + R_F32((u32)(0x99ac90u));
    /* 00879c9f: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 00879ca2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00879ca4: mov edx, dword ptr [eax + esi] */ r_edx = R32((u32)(r_eax+r_esi));
    /* 00879ca7: mov eax, edx */ r_eax = r_edx;
    /* 00879ca9: sar eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00879cac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00879cae: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00879cb0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_00879cb2:; BB(0x00879cb2);
    /* 00879cb2: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 00879cb5: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 00879cb8: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00879cba: jl 0x879c1f */ if ((fS!=fO)) goto L_00879c1f;
L_00879cc0:; BB(0x00879cc0);
    /* 00879cc0: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
    /* 00879cc3: mov eax, edi */ r_eax = r_edi;
    /* 00879cc5: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00879cc7: fld dword ptr [0x99ac90] */ FPUSH(R_F32((u32)(0x99ac90u)));
    /* 00879ccd: jge 0x87a30c */ if ((fS==fO)) goto L_0087a30c;
L_00879cd3:; BB(0x00879cd3);
    /* 00879cd3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00879cd5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00879cd8: mov eax, edi */ r_eax = r_edi;
    /* 00879cda: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00879cdc: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00879cdf: jb 0x87a2e9 */ if (fC) goto L_0087a2e9;
L_00879ce5:; BB(0x00879ce5);
    /* 00879ce5: mov edx, eax */ r_edx = r_eax;
    /* 00879ce7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00879ce9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00879ceb: add ecx, dword ptr [ebx + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00879cee: mov edi, ecx */ r_edi = r_ecx;
    /* 00879cf0: and edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00879cf3: je 0x879d6d */ if (fZ) goto L_00879d6d;
L_00879cf5:; BB(0x00879cf5);
    /* 00879cf5: test edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00879cfb: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00879cfd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00879cff: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00879d01: jne 0x879ec5 */ if (!fZ) goto L_00879ec5;
L_00879d07:; BB(0x00879d07);
    /* 00879d07: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00879d09: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00879d0c: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00879d0f: mov edx, eax */ r_edx = r_eax;
    /* 00879d11: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00879d13: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00879d16: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00879d19: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00879d1c: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
    /* 00879d1f: jmp 0x879d25 */ goto L_00879d25;
L_00879d21:; BB(0x00879d21);
    /* 00879d21: fstp dword ptr [ecx + esi*4 - 4] */ W_F32((u32)(r_ecx+r_esi*4+0xfffffffcu), ST(0)); FPOP();
L_00879d25:; BB(0x00879d25);
    /* 00879d25: mov dword ptr [ebp - 0x98], esi */ W32((u32)(r_ebp+0xffffff68u), r_esi);
    /* 00879d2b: mov eax, esi */ r_eax = r_esi;
    /* 00879d2d: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00879d30: fild dword ptr [ebp - 0x98] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff68u)));
    /* 00879d36: fadd dword ptr [eax*4 + 0x99ab60] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x99ab60u));
    /* 00879d3d: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00879d3f: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00879d41: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 00879d43: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00879d45: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00879d47: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00879d49: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00879d4a: fcmovbe st(0), st(2) */ if (fC || fZ) ST(0) = ST(2);
    /* 00879d4c: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00879d4e: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00879d4f: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00879d51: jb 0x879d21 */ if (fC) goto L_00879d21;
L_00879d53:; BB(0x00879d53);
    /* 00879d53: fstp dword ptr [ecx + esi*4 - 4] */ W_F32((u32)(r_ecx+r_esi*4+0xfffffffcu), ST(0)); FPOP();
    /* 00879d57: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00879d5a: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00879d5d: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
    /* 00879d60: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00879d62: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 00879d65: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00879d67: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00879d69: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00879d6b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
L_00879d6d:; BB(0x00879d6d);
    /* 00879d6d: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00879d70: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00879d72: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00879d74: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00879d76: fst dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0));
    /* 00879d7c: movss xmm0, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 00879d84: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 00879d88: movaps xmm7, xmmword ptr [0x99a840] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x99a840u), 16); xmm[7] = s; }
    /* 00879d8f: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00879d92: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00879d94: mov dword ptr [ebp - 0x90], edi */ W32((u32)(r_ebp+0xffffff70u), r_edi);
    /* 00879d9a: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00879d9d: fild dword ptr [ebp - 0x90] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff70u)));
    /* 00879da3: movaps xmmword ptr [ebp - 0x78], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_ebp+0xffffff88u), &xmm[0], 16);
    /* 00879da7: fadd dword ptr [edi*4 + 0x99ab60] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x99ab60u));
    /* 00879dae: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00879db0: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00879db2: fld dword ptr [0x99ac8c] */ FPUSH(R_F32((u32)(0x99ac8cu)));
    /* 00879db8: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00879dba: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00879dbd: fstp dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 00879dc3: movss xmm1, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 00879dcb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00879dcd: fstp dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 00879dd3: movss xmm3, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 00879ddb: unpcklps xmm3, xmm1 */ { XMM s = xmm[1]; u32 a0 = xmm[3].d[0], a1 = xmm[3].d[1]; xmm[3].d[0] = a0; xmm[3].d[1] = s.d[0]; xmm[3].d[2] = a1; xmm[3].d[3] = s.d[1]; }
    /* 00879dde: fld dword ptr [0x99ac88] */ FPUSH(R_F32((u32)(0x99ac88u)));
    /* 00879de4: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00879de6: fstp dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 00879dec: movss xmm2, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 00879df4: fstp dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 00879dfa: movss xmm6, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 00879e02: unpcklps xmm6, xmm2 */ { XMM s = xmm[2]; u32 a0 = xmm[6].d[0], a1 = xmm[6].d[1]; xmm[6].d[0] = a0; xmm[6].d[1] = s.d[0]; xmm[6].d[2] = a1; xmm[6].d[3] = s.d[1]; }
    /* 00879e05: unpcklps xmm6, xmm3 */ { XMM s = xmm[3]; u32 a0 = xmm[6].d[0], a1 = xmm[6].d[1]; xmm[6].d[0] = a0; xmm[6].d[1] = s.d[0]; xmm[6].d[2] = a1; xmm[6].d[3] = s.d[1]; }
    /* 00879e08: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00879e0a: fst dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0));
    /* 00879e10: movss xmm5, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 00879e18: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 00879e1c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00879e1e: fst dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0));
    /* 00879e24: movss xmm2, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 00879e2c: shufps xmm2, xmm2, 0 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[0]; u32 lo2 = xmm[2].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 00879e30: xorps xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 00879e33: movaps xmmword ptr [ebp - 0x28], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_ebp+0xffffffd8u), &xmm[2], 16);
    /* 00879e37: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
    /* 00879e3a: fstp dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 00879e40: movss xmm3, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 00879e48: shufps xmm3, xmm3, 0 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[0]; u32 lo2 = xmm[3].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 00879e4c: movaps xmmword ptr [ebp - 0x68], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_ebp+0xffffff98u), &xmm[3], 16);
L_00879e50:; BB(0x00879e50);
    /* 00879e50: movaps xmm2, xmm6 */ { XMM s = xmm[6]; xmm[2] = s; }
    /* 00879e53: mulps xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 00879e56: movaps xmm0, xmmword ptr [ebp - 0x78] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ebp+0xffffff88u), 16); xmm[0] = s; }
    /* 00879e5a: addps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 00879e5d: movaps xmm1, xmmword ptr [ebp - 0x28] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ebp+0xffffffd8u), 16); xmm[1] = s; }
    /* 00879e61: movaps xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3] = s; }
    /* 00879e64: rcpps xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4].fs[0] = 1.0f / s.fs[0]; xmm[4].fs[1] = 1.0f / s.fs[1]; xmm[4].fs[2] = 1.0f / s.fs[2]; xmm[4].fs[3] = 1.0f / s.fs[3]; }
    /* 00879e67: mulps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 00879e6a: mulps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 00879e6d: addps xmm4, xmm4 */ { XMM s = xmm[4]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 00879e70: subps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] - s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] - s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] - s.fs[3]; }
    /* 00879e73: mulps xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 00879e76: xorps xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].q[0] = xmm[3].q[0] ^ s.q[0]; xmm[3].q[1] = xmm[3].q[1] ^ s.q[1]; }
    /* 00879e79: maxps xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = (xmm[2].fs[0] > s.fs[0]) ? xmm[2].fs[0] : s.fs[0]; xmm[2].fs[1] = (xmm[2].fs[1] > s.fs[1]) ? xmm[2].fs[1] : s.fs[1]; xmm[2].fs[2] = (xmm[2].fs[2] > s.fs[2]) ? xmm[2].fs[2] : s.fs[2]; xmm[2].fs[3] = (xmm[2].fs[3] > s.fs[3]) ? xmm[2].fs[3] : s.fs[3]; }
    /* 00879e7c: movaps xmm4, xmmword ptr [ebp - 0x68] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ebp+0xffffff98u), 16); xmm[4] = s; }
    /* 00879e80: subps xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] - s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] - s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] - s.fs[3]; }
    /* 00879e83: movaps xmmword ptr [ecx + edi*4], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_ecx+r_edi*4), &xmm[2], 16);
    /* 00879e87: addps xmm6, xmm7 */ { XMM s = xmm[7]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] + s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] + s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] + s.fs[3]; }
    /* 00879e8a: movaps xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2] = s; }
    /* 00879e8d: mulps xmm2, xmm6 */ { XMM s = xmm[6]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 00879e90: addps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 00879e93: addps xmm6, xmm7 */ { XMM s = xmm[7]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] + s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] + s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] + s.fs[3]; }
    /* 00879e96: rcpps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = 1.0f / s.fs[0]; xmm[0].fs[1] = 1.0f / s.fs[1]; xmm[0].fs[2] = 1.0f / s.fs[2]; xmm[0].fs[3] = 1.0f / s.fs[3]; }
    /* 00879e99: mulps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 00879e9c: mulps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 00879e9f: addps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 00879ea2: subps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] - s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] - s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] - s.fs[3]; }
    /* 00879ea5: mulps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 00879ea8: maxps xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = (xmm[2].fs[0] > s.fs[0]) ? xmm[2].fs[0] : s.fs[0]; xmm[2].fs[1] = (xmm[2].fs[1] > s.fs[1]) ? xmm[2].fs[1] : s.fs[1]; xmm[2].fs[2] = (xmm[2].fs[2] > s.fs[2]) ? xmm[2].fs[2] : s.fs[2]; xmm[2].fs[3] = (xmm[2].fs[3] > s.fs[3]) ? xmm[2].fs[3] : s.fs[3]; }
    /* 00879eab: subps xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] - s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] - s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] - s.fs[3]; }
    /* 00879eae: movaps xmmword ptr [ecx + edi*4 + 0x10], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_ecx+r_edi*4+0x10u), &xmm[2], 16);
    /* 00879eb3: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00879eb6: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00879eb8: jb 0x879e50 */ if (fC) goto L_00879e50;
L_00879eba:; BB(0x00879eba);
    /* 00879eba: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 00879ebd: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00879ebf: jae 0x87a313 */ if (!fC) goto L_0087a313;
L_00879ec5:; BB(0x00879ec5);
    /* 00879ec5: mov edx, eax */ r_edx = r_eax;
    /* 00879ec7: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00879eca: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00879ecd: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
    /* 00879ed0: jmp 0x879ed6 */ goto L_00879ed6;
L_00879ed2:; BB(0x00879ed2);
    /* 00879ed2: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
L_00879ed6:; BB(0x00879ed6);
    /* 00879ed6: mov dword ptr [ebp - 0x90], edi */ W32((u32)(r_ebp+0xffffff70u), r_edi);
    /* 00879edc: mov eax, edi */ r_eax = r_edi;
    /* 00879ede: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00879ee1: fild dword ptr [ebp - 0x90] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff70u)));
    /* 00879ee7: fadd dword ptr [eax*4 + 0x99ab60] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x99ab60u));
    /* 00879eee: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00879ef0: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00879ef2: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 00879ef4: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00879ef6: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00879ef8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00879efa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00879efb: fcmovbe st(0), st(2) */ if (fC || fZ) ST(0) = ST(2);
    /* 00879efd: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00879eff: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00879f00: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00879f02: jb 0x879ed2 */ if (fC) goto L_00879ed2;
L_00879f04:; BB(0x00879f04);
    /* 00879f04: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
    /* 00879f08: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00879f0a: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 00879f0d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00879f0f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00879f11: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00879f13: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
L_00879f15:; BB(0x00879f15);
    /* 00879f15: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00879f17: jle 0x87a320 */ if ((fZ||fS!=fO)) goto L_0087a320;
L_00879f1d:; BB(0x00879f1d);
    /* 00879f1d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00879f1f: mov edi, esi */ r_edi = r_esi;
    /* 00879f21: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00879f24: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00879f26: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00879f28: mov dword ptr [ebp - 0xc], edi */ W32((u32)(r_ebp+0xfffffff4u), r_edi);
    /* 00879f2b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00879f2d: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00879f30: jmp 0x879fc5 */ goto L_00879fc5;
L_00879f35:; BB(0x00879f35);
    /* 00879f35: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00879f37: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00879f39: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00879f3b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00879f3d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00879f3f: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
    /* 00879f42: mov esi, edi */ r_esi = r_edi;
    /* 00879f44: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00879f46: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00879f48: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 00879f4b: fadd dword ptr [edi + edx*4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_edx*4));
    /* 00879f4e: mov edi, esi */ r_edi = r_esi;
    /* 00879f50: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00879f52: fld dword ptr [esi + edx*4] */ FPUSH(R_F32((u32)(r_esi+r_edx*4)));
    /* 00879f55: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 00879f57: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00879f5a: mov esi, edi */ r_esi = r_edi;
    /* 00879f5c: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00879f5e: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00879f60: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00879f62: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00879f64: fadd dword ptr [edi + edx*4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_edx*4));
    /* 00879f67: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 00879f6a: mov esi, edi */ r_esi = r_edi;
    /* 00879f6c: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00879f6e: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00879f70: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00879f72: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00879f75: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00879f77: fadd dword ptr [edi + edx*4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_edx*4));
    /* 00879f7a: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00879f7c: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00879f7e: fld dword ptr [esi + edx*4] */ FPUSH(R_F32((u32)(r_esi+r_edx*4)));
    /* 00879f81: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00879f83: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00879f85: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00879f87: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00879f89: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00879f8b: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 00879f8d: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00879f8f: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00879f91: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00879f93: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00879f95: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00879f97: fsubrp st(4) */ ST(4) = ST(0) - ST(4); FPOP();
    /* 00879f99: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00879f9b: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00879f9d: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 00879f9f: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00879fa1: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00879fa3: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00879fa5: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00879fa7: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 00879faa: fsub dword ptr [ebp - 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffb4u));
    /* 00879fad: fld dword ptr [edx + ecx*4] */ FPUSH(R_F32((u32)(r_edx+r_ecx*4)));
    /* 00879fb0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00879fb2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00879fb4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00879fb5: fcmovnbe st(0), st(1) */ if (!(fC || fZ)) ST(0) = ST(1);
    /* 00879fb7: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00879fb9: fstp dword ptr [edx + ecx*4] */ W_F32((u32)(r_edx+r_ecx*4), ST(0)); FPOP();
    /* 00879fbc: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00879fbd: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00879fbf: fadd dword ptr [0x99ac90] */ ST(0) = ST(0) + R_F32((u32)(0x99ac90u));
L_00879fc5:; BB(0x00879fc5);
    /* 00879fc5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00879fc8: lea edx, [ecx + eax] */ r_edx = (u32)(r_ecx+r_eax);
    /* 00879fcb: mov eax, edx */ r_eax = r_edx;
    /* 00879fcd: sub eax, dword ptr [ebx + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00879fd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00879fd2: jl 0x879f35 */ if ((fS!=fO)) goto L_00879f35;
L_00879fd8:; BB(0x00879fd8);
    /* 00879fd8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00879fdb: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 00879fde: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00879fe1: mov edx, eax */ r_edx = r_eax;
    /* 00879fe3: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00879fe6: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 00879fe9: mov esi, dword ptr [ebx + 0x14] */ r_esi = R32((u32)(r_ebx+0x14u));
    /* 00879fec: fld dword ptr [0x99ac90] */ FPUSH(R_F32((u32)(0x99ac90u)));
    /* 00879ff2: mov dword ptr [ebp - 0xc], edi */ W32((u32)(r_ebp+0xfffffff4u), r_edi);
    /* 00879ff5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00879ff7: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00879ffa: jmp 0x87a08a */ goto L_0087a08a;
L_00879fff:; BB(0x00879fff);
    /* 00879fff: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0087a001: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a003: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a005: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
    /* 0087a008: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0087a00b: fsub dword ptr [edi + edx*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_edx*4));
    /* 0087a00e: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 0087a011: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0087a014: fsub dword ptr [edi + edx*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_edx*4));
    /* 0087a017: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0087a01a: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0087a01c: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0087a01f: fsub dword ptr [edi + edx*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_edx*4));
    /* 0087a022: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 0087a025: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0087a028: fsub dword ptr [edi + edx*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_edx*4));
    /* 0087a02b: mov edi, dword ptr [ebp - 0x44] */ r_edi = R32((u32)(r_ebp+0xffffffbcu));
    /* 0087a02e: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0087a030: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0087a033: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a035: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0087a037: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087a039: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0087a03b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a03d: fsub dword ptr [edi + edx*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_edx*4));
    /* 0087a040: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0087a042: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0087a044: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0087a046: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a048: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0087a04a: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 0087a04c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a04e: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0087a050: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087a052: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0087a054: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0087a056: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0087a058: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0087a05a: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0087a05c: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 0087a05e: fsub dword ptr [ebp - 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffb4u));
    /* 0087a061: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087a064: fld dword ptr [esi + ecx*4] */ FPUSH(R_F32((u32)(r_esi+r_ecx*4)));
    /* 0087a067: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087a069: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087a06b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087a06c: fcmovnbe st(0), st(1) */ if (!(fC || fZ)) ST(0) = ST(1);
    /* 0087a06e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a070: fstp dword ptr [esi + ecx*4] */ W_F32((u32)(r_esi+r_ecx*4), ST(0)); FPOP();
    /* 0087a073: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087a074: lea eax, [edx + ecx] */ r_eax = (u32)(r_edx+r_ecx);
    /* 0087a077: mov edx, eax */ r_edx = r_eax;
    /* 0087a079: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a07b: fadd dword ptr [0x99ac90] */ ST(0) = ST(0) + R_F32((u32)(0x99ac90u));
    /* 0087a081: sub edx, dword ptr [ebx + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087a084: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a086: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a088: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_0087a08a:; BB(0x0087a08a);
    /* 0087a08a: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 0087a08d: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087a08f: jl 0x879fff */ if ((fS!=fO)) goto L_00879fff;
L_0087a095:; BB(0x0087a095);
    /* 0087a095: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 0087a098: mov eax, edi */ r_eax = r_edi;
    /* 0087a09a: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0087a09c: fld dword ptr [0x99ac90] */ FPUSH(R_F32((u32)(0x99ac90u)));
    /* 0087a0a2: jge 0x87a32a */ if ((fS==fO)) goto L_0087a32a;
L_0087a0a8:; BB(0x0087a0a8);
    /* 0087a0a8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0087a0aa: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087a0ac: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0087a0af: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087a0b2: jb 0x87a2dc */ if (fC) goto L_0087a2dc;
L_0087a0b8:; BB(0x0087a0b8);
    /* 0087a0b8: mov edx, eax */ r_edx = r_eax;
    /* 0087a0ba: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087a0bc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087a0be: add ecx, dword ptr [ebx + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087a0c1: mov esi, ecx */ r_esi = r_ecx;
    /* 0087a0c3: and esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 0087a0c6: je 0x87a128 */ if (fZ) goto L_0087a128;
L_0087a0c8:; BB(0x0087a0c8);
    /* 0087a0c8: test esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087a0ce: jne 0x87a334 */ if (!fZ) goto L_0087a334;
L_0087a0d4:; BB(0x0087a0d4);
    /* 0087a0d4: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0087a0d6: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087a0d9: shr esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0087a0dc: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087a0de: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 0087a0e1: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
    /* 0087a0e4: jmp 0x87a0ea */ goto L_0087a0ea;
L_0087a0e6:; BB(0x0087a0e6);
    /* 0087a0e6: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
L_0087a0ea:; BB(0x0087a0ea);
    /* 0087a0ea: mov dword ptr [ebp - 0x90], edi */ W32((u32)(r_ebp+0xffffff70u), r_edi);
    /* 0087a0f0: mov eax, edi */ r_eax = r_edi;
    /* 0087a0f2: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0087a0f5: fild dword ptr [ebp - 0x90] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff70u)));
    /* 0087a0fb: fadd dword ptr [eax*4 + 0x99ab60] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x99ab60u));
    /* 0087a102: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0087a104: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0087a106: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 0087a108: fdiv st(5) */ ST(0) = ST(0) / ST(5);
    /* 0087a10a: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0087a10c: fld dword ptr [ecx + edi*4] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4)));
    /* 0087a10f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087a111: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087a113: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087a114: fcmovnbe st(0), st(1) */ if (!(fC || fZ)) ST(0) = ST(1);
    /* 0087a116: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a118: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087a119: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087a11b: jb 0x87a0e6 */ if (fC) goto L_0087a0e6;
L_0087a11d:; BB(0x0087a11d);
    /* 0087a11d: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
    /* 0087a121: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a123: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 0087a126: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087a128:; BB(0x0087a128);
    /* 0087a128: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0087a12b: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087a12d: movaps xmm3, xmmword ptr [0x99a840] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x99a840u), 16); xmm[3] = s; }
    /* 0087a134: add edx, dword ptr [ebp - 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087a137: mov esi, edi */ r_esi = r_edi;
    /* 0087a139: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0087a13c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a13e: fst dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0));
    /* 0087a144: movss xmm2, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 0087a14c: shufps xmm2, xmm2, 0 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[0]; u32 lo2 = xmm[2].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 0087a150: mov dword ptr [ebp - 0x90], edi */ W32((u32)(r_ebp+0xffffff70u), r_edi);
    /* 0087a156: fild dword ptr [ebp - 0x90] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff70u)));
    /* 0087a15c: fadd dword ptr [esi*4 + 0x99ab60] */ ST(0) = ST(0) + R_F32((u32)(r_esi*4+0x99ab60u));
    /* 0087a163: fadd dword ptr [ebp - 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffacu));
    /* 0087a166: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 0087a168: fld dword ptr [0x99ac8c] */ FPUSH(R_F32((u32)(0x99ac8cu)));
    /* 0087a16e: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087a170: fstp dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 0087a176: movss xmm4, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 0087a17e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0087a180: fstp dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 0087a186: movss xmm5, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 0087a18e: unpcklps xmm5, xmm4 */ { XMM s = xmm[4]; u32 a0 = xmm[5].d[0], a1 = xmm[5].d[1]; xmm[5].d[0] = a0; xmm[5].d[1] = s.d[0]; xmm[5].d[2] = a1; xmm[5].d[3] = s.d[1]; }
    /* 0087a191: fld dword ptr [0x99ac88] */ FPUSH(R_F32((u32)(0x99ac88u)));
    /* 0087a197: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0087a199: fstp dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 0087a19f: movss xmm0, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087a1a7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a1a9: fstp dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 0087a1af: movss xmm1, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087a1b7: unpcklps xmm1, xmm0 */ { XMM s = xmm[0]; u32 a0 = xmm[1].d[0], a1 = xmm[1].d[1]; xmm[1].d[0] = a0; xmm[1].d[1] = s.d[0]; xmm[1].d[2] = a1; xmm[1].d[3] = s.d[1]; }
    /* 0087a1ba: unpcklps xmm1, xmm5 */ { XMM s = xmm[5]; u32 a0 = xmm[1].d[0], a1 = xmm[1].d[1]; xmm[1].d[0] = a0; xmm[1].d[1] = s.d[0]; xmm[1].d[2] = a1; xmm[1].d[3] = s.d[1]; }
    /* 0087a1bd: fst dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0));
    /* 0087a1c3: movss xmm0, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087a1cb: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 0087a1cf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a1d1: fst dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0));
    /* 0087a1d7: movss xmm4, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 0087a1df: shufps xmm4, xmm4, 0 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[0]; u32 lo2 = xmm[4].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 0087a1e3: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
    /* 0087a1e6: movaps xmmword ptr [ebp - 0x68], xmm4 */ memcpy((void *)(uintptr_t)(u32)(r_ebp+0xffffff98u), &xmm[4], 16);
    /* 0087a1ea: fstp dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 0087a1f0: movss xmm5, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 0087a1f8: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 0087a1fc: movaps xmmword ptr [ebp - 0x78], xmm5 */ memcpy((void *)(uintptr_t)(u32)(r_ebp+0xffffff88u), &xmm[5], 16);
L_0087a200:; BB(0x0087a200);
    /* 0087a200: prefetchnta byte ptr [ecx + edi*4 + 0x40] */ ;
    /* 0087a205: movaps xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5] = s; }
    /* 0087a208: mulps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 0087a20b: addps xmm5, xmm2 */ { XMM s = xmm[2]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 0087a20e: movaps xmm7, xmmword ptr [ebp - 0x68] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ebp+0xffffff98u), 16); xmm[7] = s; }
    /* 0087a212: movaps xmm3, xmm7 */ { XMM s = xmm[7]; xmm[3] = s; }
    /* 0087a215: rcpps xmm4, xmm7 */ { XMM s = xmm[7]; xmm[4].fs[0] = 1.0f / s.fs[0]; xmm[4].fs[1] = 1.0f / s.fs[1]; xmm[4].fs[2] = 1.0f / s.fs[2]; xmm[4].fs[3] = 1.0f / s.fs[3]; }
    /* 0087a218: mulps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 0087a21b: mulps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 0087a21e: addps xmm4, xmm4 */ { XMM s = xmm[4]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 0087a221: subps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] - s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] - s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] - s.fs[3]; }
    /* 0087a224: mulps xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 0087a227: movaps xmm6, xmmword ptr [ebp - 0x78] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ebp+0xffffff88u), 16); xmm[6] = s; }
    /* 0087a22b: subps xmm5, xmm6 */ { XMM s = xmm[6]; xmm[5].fs[0] = xmm[5].fs[0] - s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] - s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] - s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] - s.fs[3]; }
    /* 0087a22e: movaps xmm4, xmmword ptr [0x99a840] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x99a840u), 16); xmm[4] = s; }
    /* 0087a235: minps xmm5, xmmword ptr [ecx + edi*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_edi*4), 16); xmm[5].fs[0] = (xmm[5].fs[0] < s.fs[0]) ? xmm[5].fs[0] : s.fs[0]; xmm[5].fs[1] = (xmm[5].fs[1] < s.fs[1]) ? xmm[5].fs[1] : s.fs[1]; xmm[5].fs[2] = (xmm[5].fs[2] < s.fs[2]) ? xmm[5].fs[2] : s.fs[2]; xmm[5].fs[3] = (xmm[5].fs[3] < s.fs[3]) ? xmm[5].fs[3] : s.fs[3]; }
    /* 0087a239: movaps xmmword ptr [ecx + edi*4], xmm5 */ memcpy((void *)(uintptr_t)(u32)(r_ecx+r_edi*4), &xmm[5], 16);
    /* 0087a23d: addps xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 0087a240: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 0087a243: mulps xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 0087a246: addps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] + s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] + s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] + s.fs[3]; }
    /* 0087a249: rcpps xmm5, xmm7 */ { XMM s = xmm[7]; xmm[5].fs[0] = 1.0f / s.fs[0]; xmm[5].fs[1] = 1.0f / s.fs[1]; xmm[5].fs[2] = 1.0f / s.fs[2]; xmm[5].fs[3] = 1.0f / s.fs[3]; }
    /* 0087a24c: mulps xmm7, xmm5 */ { XMM s = xmm[5]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 0087a24f: mulps xmm7, xmm5 */ { XMM s = xmm[5]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 0087a252: addps xmm5, xmm5 */ { XMM s = xmm[5]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 0087a255: subps xmm5, xmm7 */ { XMM s = xmm[7]; xmm[5].fs[0] = xmm[5].fs[0] - s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] - s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] - s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] - s.fs[3]; }
    /* 0087a258: mulps xmm3, xmm5 */ { XMM s = xmm[5]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 0087a25b: subps xmm3, xmm6 */ { XMM s = xmm[6]; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] - s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] - s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] - s.fs[3]; }
    /* 0087a25e: addps xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 0087a261: minps xmm3, xmmword ptr [ecx + edi*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_edi*4+0x10u), 16); xmm[3].fs[0] = (xmm[3].fs[0] < s.fs[0]) ? xmm[3].fs[0] : s.fs[0]; xmm[3].fs[1] = (xmm[3].fs[1] < s.fs[1]) ? xmm[3].fs[1] : s.fs[1]; xmm[3].fs[2] = (xmm[3].fs[2] < s.fs[2]) ? xmm[3].fs[2] : s.fs[2]; xmm[3].fs[3] = (xmm[3].fs[3] < s.fs[3]) ? xmm[3].fs[3] : s.fs[3]; }
    /* 0087a266: movaps xmmword ptr [ecx + edi*4 + 0x10], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_ecx+r_edi*4+0x10u), &xmm[3], 16);
    /* 0087a26b: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087a26e: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087a270: jb 0x87a200 */ if (fC) goto L_0087a200;
L_0087a272:; BB(0x0087a272);
    /* 0087a272: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0087a275: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0087a277: jae 0x87a33d */ if (!fC) goto L_0087a33d;
L_0087a27d:; BB(0x0087a27d);
    /* 0087a27d: mov edx, eax */ r_edx = r_eax;
    /* 0087a27f: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 0087a282: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
    /* 0087a285: jmp 0x87a28b */ goto L_0087a28b;
L_0087a287:; BB(0x0087a287);
    /* 0087a287: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
L_0087a28b:; BB(0x0087a28b);
    /* 0087a28b: mov dword ptr [ebp - 0x90], edi */ W32((u32)(r_ebp+0xffffff70u), r_edi);
    /* 0087a291: mov esi, edi */ r_esi = r_edi;
    /* 0087a293: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0087a296: fild dword ptr [ebp - 0x90] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff70u)));
    /* 0087a29c: fadd dword ptr [esi*4 + 0x99ab60] */ ST(0) = ST(0) + R_F32((u32)(r_esi*4+0x99ab60u));
    /* 0087a2a3: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0087a2a5: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0087a2a7: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0087a2a9: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 0087a2ab: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0087a2ad: fld dword ptr [ecx + edi*4] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4)));
    /* 0087a2b0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087a2b2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087a2b4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087a2b5: fcmovnbe st(0), st(1) */ if (!(fC || fZ)) ST(0) = ST(1);
    /* 0087a2b7: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a2b9: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087a2ba: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0087a2bc: jb 0x87a287 */ if (fC) goto L_0087a287;
L_0087a2be:; BB(0x0087a2be);
    /* 0087a2be: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
    /* 0087a2c2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a2c4: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0087a2c6: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a2c8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a2ca: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087a2cc:; BB(0x0087a2cc);
    /* 0087a2cc: mov esi, dword ptr [ebp - 0x50] */ r_esi = R32((u32)(r_ebp+0xffffffb0u));
    /* 0087a2cf: mov edi, dword ptr [ebp - 0x88] */ r_edi = R32((u32)(r_ebp+0xffffff78u));
    /* 0087a2d5: mov esp, ebp */ r_esp = r_ebp;
    /* 0087a2d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087a2d8: mov esp, ebx */ r_esp = r_ebx;
    /* 0087a2da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0087a2db: ret  */ FN_RET(0x00879998); r_esp += 4; return;
L_0087a2dc:; BB(0x0087a2dc);
    /* 0087a2dc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a2de: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087a2e0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087a2e2: add ecx, dword ptr [ebx + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087a2e5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a2e7: jmp 0x87a27d */ goto L_0087a27d;
L_0087a2e9:; BB(0x0087a2e9);
    /* 0087a2e9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087a2eb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087a2ed: add ecx, dword ptr [ebx + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087a2f0: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0087a2f2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087a2f4: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a2f6: jmp 0x879ec5 */ goto L_00879ec5;
L_0087a2fb:; BB(0x0087a2fb);
    /* 0087a2fb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a2fd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a2ff: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a301: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a303: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a305: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a307: jmp 0x879b49 */ goto L_00879b49;
L_0087a30c:; BB(0x0087a30c);
    /* 0087a30c: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a30e: jmp 0x879f15 */ goto L_00879f15;
L_0087a313:; BB(0x0087a313);
    /* 0087a313: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a315: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087a317: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a319: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a31b: jmp 0x879f15 */ goto L_00879f15;
L_0087a320:; BB(0x0087a320);
    /* 0087a320: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a322: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0087a324: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a326: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a328: jmp 0x87a2cc */ goto L_0087a2cc;
L_0087a32a:; BB(0x0087a32a);
    /* 0087a32a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a32c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0087a32e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a330: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a332: jmp 0x87a2cc */ goto L_0087a2cc;
L_0087a334:; BB(0x0087a334);
    /* 0087a334: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a336: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a338: jmp 0x87a27d */ goto L_0087a27d;
L_0087a33d:; BB(0x0087a33d);
    /* 0087a33d: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0087a33f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a341: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a343: jmp 0x87a2cc */ goto L_0087a2cc;
L_0087a348:; BB(0x0087a348);
    /* 0087a348: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0087a349: mov ebx, esp */ r_ebx = r_esp;
    /* 0087a34b: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0087a34e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087a34f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0087a350: mov ebp, dword ptr [ebx + 4] */ r_ebp = R32((u32)(r_ebx+0x4u));
    /* 0087a353: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 0087a357: mov ebp, esp */ r_ebp = r_esp;
    /* 0087a359: sub esp, 0x38 */ {  u32 a = r_esp; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0087a35c: mov dword ptr [ebp - 0x34], edi */ W32((u32)(r_ebp+0xffffffccu), r_edi);
    /* 0087a35f: mov dword ptr [ebp - 0x38], esi */ W32((u32)(r_ebp+0xffffffc8u), r_esi);
    /* 0087a362: fst dword ptr [ebp - 0x10] */ W_F32((u32)(r_ebp+0xfffffff0u), ST(0));
    /* 0087a365: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a367: mov esi, ecx */ r_esi = r_ecx;
    /* 0087a369: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 0087a36c: mov dword ptr [ebp - 0x30], eax */ W32((u32)(r_ebp+0xffffffd0u), r_eax);
    /* 0087a36f: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 0087a372: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087a374: mov eax, edi */ r_eax = r_edi;
    /* 0087a376: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x87a37bu); f_00858020();
    /* 0087a37b: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0087a37e: mov eax, esp */ r_eax = r_esp;
    /* 0087a380: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0087a383: mov eax, edi */ r_eax = r_edi;
    /* 0087a385: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x87a38au); f_00858020();
    /* 0087a38a: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0087a38d: mov eax, esp */ r_eax = r_esp;
    /* 0087a38f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0087a392: mov eax, edi */ r_eax = r_edi;
    /* 0087a394: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x87a399u); f_00858020();
    /* 0087a399: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0087a39c: mov eax, esp */ r_eax = r_esp;
    /* 0087a39e: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0087a3a1: mov eax, edi */ r_eax = r_edi;
    /* 0087a3a3: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x87a3a8u); f_00858020();
    /* 0087a3a8: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0087a3ab: mov eax, esp */ r_eax = r_esp;
    /* 0087a3ad: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0087a3b0: mov eax, edi */ r_eax = r_edi;
    /* 0087a3b2: call 0x858020 */ r_esp -= 4; W32(r_esp, 0x87a3b7u); f_00858020();
    /* 0087a3b7: and esp, 0xfffffff0 */ {  u32 a = r_esp; u32 b = 0xfffffff0u; u32 r = (a & b) & 0xffffffffu; r_esp = r;  }
    /* 0087a3ba: mov eax, esp */ r_eax = r_esp;
    /* 0087a3bc: mov edx, eax */ r_edx = r_eax;
    /* 0087a3be: mov dword ptr [ebp - 0x1c], edx */ W32((u32)(r_ebp+0xffffffe4u), r_edx);
    /* 0087a3c1: fld dword ptr [0x99ac84] */ FPUSH(R_F32((u32)(0x99ac84u)));
    /* 0087a3c7: fld dword ptr [0x99ac84] */ FPUSH(R_F32((u32)(0x99ac84u)));
    /* 0087a3cd: fld dword ptr [0x99ac84] */ FPUSH(R_F32((u32)(0x99ac84u)));
    /* 0087a3d3: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 0087a3d5: fadd dword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0087a3d8: fld dword ptr [0x99ac80] */ FPUSH(R_F32((u32)(0x99ac80u)));
    /* 0087a3de: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087a3e0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087a3e2: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087a3e3: jbe 0x87a3e7 */ if ((fC||fZ)) goto L_0087a3e7;
L_0087a3e5:; BB(0x0087a3e5);
    /* 0087a3e5: fst st(1) */ ST(1) = ST(0);
L_0087a3e7:; BB(0x0087a3e7);
    /* 0087a3e7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a3e9: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0087a3eb: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0087a3ed: fmul qword ptr [0x99ab58] */ ST(0) = ST(0) * R_F64((u32)(0x99ab58u));
    /* 0087a3f3: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 0087a3f5: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087a3f7: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0087a3f9: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a3fb: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 0087a3fd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a3ff: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0087a401: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087a404: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a406: fst dword ptr [edi] */ W_F32((u32)(r_edi), ST(0));
    /* 0087a408: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0087a40b: fst dword ptr [edi] */ W_F32((u32)(r_edi), ST(0));
    /* 0087a40d: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087a410: mov dword ptr [edi], 0 */ W32((u32)(r_edi), 0x0u);
    /* 0087a416: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0087a419: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a41b: fst dword ptr [edi] */ W_F32((u32)(r_edi), ST(0));
    /* 0087a41d: mov dword ptr [edx], 0 */ W32((u32)(r_edx), 0x0u);
    /* 0087a423: mov edx, 1 */ r_edx = 0x1u;
    /* 0087a428: fld dword ptr [0x99ac80] */ FPUSH(R_F32((u32)(0x99ac80u)));
    /* 0087a42e: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0087a431: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087a434: jle 0x87a9af */ if ((fZ||fS!=fO)) goto L_0087a9af;
L_0087a43a:; BB(0x0087a43a);
    /* 0087a43a: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0087a43c: fstp dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0)); FPOP();
    /* 0087a43f: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 0087a441: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
    /* 0087a444: mov ecx, edi */ r_ecx = r_edi;
    /* 0087a446: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
L_0087a449:; BB(0x0087a449);
    /* 0087a449: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a44b: fst dword ptr [ebp - 4] */ W_F32((u32)(r_ebp+0xfffffffcu), ST(0));
    /* 0087a44e: fld dword ptr [esi + edx*4] */ FPUSH(R_F32((u32)(r_esi+r_edx*4)));
    /* 0087a451: fadd dword ptr [ebp - 0x10] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0087a454: fld dword ptr [0x99ac80] */ FPUSH(R_F32((u32)(0x99ac80u)));
    /* 0087a45a: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087a45c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087a45e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087a45f: jbe 0x87a463 */ if ((fC||fZ)) goto L_0087a463;
L_0087a461:; BB(0x0087a461);
    /* 0087a461: fst st(1) */ ST(1) = ST(0);
L_0087a463:; BB(0x0087a463);
    /* 0087a463: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a465: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0087a467: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0087a469: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 0087a46b: fld st(2) */ { long double v = ST(2); FPUSH(v); }
    /* 0087a46d: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0087a46f: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 0087a471: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 0087a473: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a475: faddp st(5) */ ST(5) = ST(5) + ST(0); FPOP();
    /* 0087a477: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0087a479: faddp st(6) */ ST(6) = ST(6) + ST(0); FPOP();
    /* 0087a47b: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 0087a47d: fld dword ptr [ebp - 0xc] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff4u)));
    /* 0087a480: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087a482: fst dword ptr [ebp - 0xc] */ W_F32((u32)(r_ebp+0xfffffff4u), ST(0));
    /* 0087a485: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087a488: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a48a: fst dword ptr [eax + edx*4] */ W_F32((u32)(r_eax+r_edx*4), ST(0));
    /* 0087a48d: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0087a490: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a492: fst dword ptr [eax + edx*4] */ W_F32((u32)(r_eax+r_edx*4), ST(0));
    /* 0087a495: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087a497: fst dword ptr [edi + edx*4] */ W_F32((u32)(r_edi+r_edx*4), ST(0));
    /* 0087a49a: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0087a49c: fst dword ptr [ecx + edx*4] */ W_F32((u32)(r_ecx+r_edx*4), ST(0));
    /* 0087a49f: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087a4a2: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a4a4: fstp dword ptr [eax + edx*4] */ W_F32((u32)(r_eax+r_edx*4), ST(0)); FPOP();
    /* 0087a4a7: fld dword ptr [ebp - 4] */ FPUSH(R_F32((u32)(r_ebp+0xfffffffcu)));
    /* 0087a4aa: fadd dword ptr [0x99ac80] */ ST(0) = ST(0) + R_F32((u32)(0x99ac80u));
    /* 0087a4b0: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087a4b1: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0087a4b4: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087a4b6: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a4b8: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0087a4ba: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087a4bc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a4be: jl 0x87a449 */ if ((fS!=fO)) goto L_0087a449;
L_0087a4c0:; BB(0x0087a4c0);
    /* 0087a4c0: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0087a4c2: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0087a4c4: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0087a4c6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a4c8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a4ca: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
L_0087a4cd:; BB(0x0087a4cd);
    /* 0087a4cd: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0087a4cf: fld dword ptr [0x99ac84] */ FPUSH(R_F32((u32)(0x99ac84u)));
    /* 0087a4d5: fldz  */ FPUSH(0.0);
    /* 0087a4d7: fldz  */ FPUSH(0.0);
    /* 0087a4d9: fldz  */ FPUSH(0.0);
    /* 0087a4db: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0087a4dd: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
L_0087a4e0:; BB(0x0087a4e0);
    /* 0087a4e0: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0087a4e3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087a4e5: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087a4e8: mov edi, dword ptr [eax + edx] */ r_edi = R32((u32)(r_eax+r_edx));
    /* 0087a4eb: mov esi, edi */ r_esi = r_edi;
    /* 0087a4ed: sar esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0087a4f0: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0087a4f2: jge 0x87a587 */ if ((fS==fO)) goto L_0087a587;
L_0087a4f8:; BB(0x0087a4f8);
    /* 0087a4f8: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0087a4fa: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0087a4fc: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a4fe: movzx edi, di */ r_edi = (u32)(u16)r_edi;
    /* 0087a501: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087a503: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087a505: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0087a507: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087a50a: fld dword ptr [esi + eax] */ FPUSH(R_F32((u32)(r_esi+r_eax)));
    /* 0087a50d: fadd dword ptr [eax + edi*4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_edi*4));
    /* 0087a510: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0087a513: fld dword ptr [eax + edi*4] */ FPUSH(R_F32((u32)(r_eax+r_edi*4)));
    /* 0087a516: fsub dword ptr [esi + eax] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax));
    /* 0087a519: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087a51c: fld dword ptr [esi + eax] */ FPUSH(R_F32((u32)(r_esi+r_eax)));
    /* 0087a51f: fadd dword ptr [eax + edi*4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_edi*4));
    /* 0087a522: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0087a525: fld dword ptr [esi + eax] */ FPUSH(R_F32((u32)(r_esi+r_eax)));
    /* 0087a528: fadd dword ptr [eax + edi*4] */ ST(0) = ST(0) + R_F32((u32)(r_eax+r_edi*4));
    /* 0087a52b: mov eax, dword ptr [ebp - 0x1c] */ r_eax = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087a52e: fld dword ptr [eax + edi*4] */ FPUSH(R_F32((u32)(r_eax+r_edi*4)));
    /* 0087a531: fsub dword ptr [esi + eax] */ ST(0) = ST(0) - R_F32((u32)(r_esi+r_eax));
    /* 0087a534: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0087a536: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0087a538: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 0087a53a: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0087a53c: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0087a53e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087a540: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0087a542: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a544: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0087a546: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0087a548: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a54a: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0087a54c: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087a54e: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0087a550: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a552: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0087a554: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0087a556: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0087a558: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087a55a: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 0087a55c: fcom dword ptr [ebp - 0x14] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xffffffecu))); 
    /* 0087a55f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087a561: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087a562: jae 0x87a56c */ if (!fC) goto L_0087a56c;
L_0087a564:; BB(0x0087a564);
    /* 0087a564: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a566: fld dword ptr [0x99ac84] */ FPUSH(R_F32((u32)(0x99ac84u)));
L_0087a56c:; BB(0x0087a56c);
    /* 0087a56c: fsub dword ptr [ebp - 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0087a56f: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 0087a572: fstp dword ptr [eax + edx] */ W_F32((u32)(r_eax+r_edx), ST(0)); FPOP();
    /* 0087a575: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087a576: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a578: fadd dword ptr [0x99ac80] */ ST(0) = ST(0) + R_F32((u32)(0x99ac80u));
    /* 0087a57e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087a580: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a582: jmp 0x87a4e0 */ goto L_0087a4e0;
L_0087a587:; BB(0x0087a587);
    /* 0087a587: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 0087a58a: fstp dword ptr [ebp - 0x14] */ W_F32((u32)(r_ebp+0xffffffecu), ST(0)); FPOP();
L_0087a58d:; BB(0x0087a58d);
    /* 0087a58d: movzx eax, di */ r_eax = (u32)(u16)r_edi;
    /* 0087a590: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0087a593: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087a595: jge 0x87a631 */ if ((fS==fO)) goto L_0087a631;
L_0087a59b:; BB(0x0087a59b);
    /* 0087a59b: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0087a59d: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0087a59f: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a5a1: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087a5a4: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0087a5a7: fsub dword ptr [edi + esi*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_esi*4));
    /* 0087a5aa: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0087a5ad: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0087a5b0: fsub dword ptr [edi + esi*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_esi*4));
    /* 0087a5b3: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087a5b6: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0087a5b9: fsub dword ptr [edi + esi*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_esi*4));
    /* 0087a5bc: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0087a5bf: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0087a5c2: fsub dword ptr [edi + esi*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_esi*4));
    /* 0087a5c5: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087a5c8: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0087a5cb: fsub dword ptr [edi + esi*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_esi*4));
    /* 0087a5ce: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0087a5d0: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0087a5d2: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 0087a5d4: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0087a5d6: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0087a5d8: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087a5da: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0087a5dc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a5de: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0087a5e0: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0087a5e2: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a5e4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0087a5e6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087a5e8: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0087a5ea: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a5ec: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0087a5ee: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0087a5f0: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0087a5f2: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087a5f4: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 0087a5f6: fcom dword ptr [ebp - 0x14] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xffffffecu))); 
    /* 0087a5f9: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087a5fb: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087a5fc: jae 0x87a606 */ if (!fC) goto L_0087a606;
L_0087a5fe:; BB(0x0087a5fe);
    /* 0087a5fe: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a600: fld dword ptr [0x99ac84] */ FPUSH(R_F32((u32)(0x99ac84u)));
L_0087a606:; BB(0x0087a606);
    /* 0087a606: fsub dword ptr [ebp - 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0087a609: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 0087a60c: fstp dword ptr [eax + edx] */ W_F32((u32)(r_eax+r_edx), ST(0)); FPOP();
    /* 0087a60f: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087a610: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a612: fadd dword ptr [0x99ac80] */ ST(0) = ST(0) + R_F32((u32)(0x99ac80u));
    /* 0087a618: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0087a61b: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087a61d: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087a620: mov edi, dword ptr [esi + edx] */ r_edi = R32((u32)(r_esi+r_edx));
    /* 0087a623: mov esi, edi */ r_esi = r_edi;
    /* 0087a625: sar esi, 0x10 */ { u32 c = (16u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 0087a628: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087a62a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a62c: jmp 0x87a58d */ goto L_0087a58d;
L_0087a631:; BB(0x0087a631);
    /* 0087a631: fld dword ptr [ebp - 0x14] */ FPUSH(R_F32((u32)(r_ebp+0xffffffecu)));
    /* 0087a634: mov eax, edi */ r_eax = r_edi;
    /* 0087a636: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087a638: jge 0x87a9c0 */ if ((fS==fO)) goto L_0087a9c0;
L_0087a63e:; BB(0x0087a63e);
    /* 0087a63e: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087a640: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087a643: jl 0x87a6fc */ if ((fS!=fO)) goto L_0087a6fc;
L_0087a649:; BB(0x0087a649);
    /* 0087a649: fld dword ptr [0x99ac74] */ FPUSH(R_F32((u32)(0x99ac74u)));
    /* 0087a64f: mov eax, edi */ r_eax = r_edi;
    /* 0087a651: lea esi, [eax - 5] */ r_esi = (u32)(r_eax+0xfffffffbu);
    /* 0087a654: mov edi, dword ptr [ebx + 0x14] */ r_edi = R32((u32)(r_ebx+0x14u));
    /* 0087a657: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 0087a65a: jmp 0x87a665 */ goto L_0087a665;
L_0087a65c:; BB(0x0087a65c);
    /* 0087a65c: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0087a65f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087a661: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a663: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
L_0087a665:; BB(0x0087a665);
    /* 0087a665: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 0087a667: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0087a669: fadd st(7) */ ST(0) = ST(0) + ST(7);
    /* 0087a66b: fdiv st(5) */ ST(0) = ST(0) / ST(5);
    /* 0087a66d: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0087a66f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087a671: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087a672: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a674: jae 0x87a678 */ if (!fC) goto L_0087a678;
L_0087a676:; BB(0x0087a676);
    /* 0087a676: fst st(3) */ ST(3) = ST(0);
L_0087a678:; BB(0x0087a678);
    /* 0087a678: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a67a: fsub st(3), st(0) */ ST(3) = ST(3) - ST(0);
    /* 0087a67c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a67e: fstp dword ptr [edi + edx] */ W_F32((u32)(r_edi+r_edx), ST(0)); FPOP();
    /* 0087a681: fld dword ptr [0x99ac80] */ FPUSH(R_F32((u32)(0x99ac80u)));
    /* 0087a687: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 0087a689: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0087a68b: fadd st(7) */ ST(0) = ST(0) + ST(7);
    /* 0087a68d: fdiv st(5) */ ST(0) = ST(0) / ST(5);
    /* 0087a68f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087a691: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087a693: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087a694: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a696: jae 0x87a69a */ if (!fC) goto L_0087a69a;
L_0087a698:; BB(0x0087a698);
    /* 0087a698: fst st(1) */ ST(1) = ST(0);
L_0087a69a:; BB(0x0087a69a);
    /* 0087a69a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a69c: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0087a69e: fstp dword ptr [edi + edx + 4] */ W_F32((u32)(r_edi+r_edx+0x4u), ST(0)); FPOP();
    /* 0087a6a2: fld dword ptr [0x99ac7c] */ FPUSH(R_F32((u32)(0x99ac7cu)));
    /* 0087a6a8: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 0087a6aa: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0087a6ac: fadd st(7) */ ST(0) = ST(0) + ST(7);
    /* 0087a6ae: fdiv st(5) */ ST(0) = ST(0) / ST(5);
    /* 0087a6b0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087a6b2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087a6b4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087a6b5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a6b7: jae 0x87a6bb */ if (!fC) goto L_0087a6bb;
L_0087a6b9:; BB(0x0087a6b9);
    /* 0087a6b9: fst st(1) */ ST(1) = ST(0);
L_0087a6bb:; BB(0x0087a6bb);
    /* 0087a6bb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a6bd: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0087a6bf: fstp dword ptr [edi + edx + 8] */ W_F32((u32)(r_edi+r_edx+0x8u), ST(0)); FPOP();
    /* 0087a6c3: fld dword ptr [0x99ac78] */ FPUSH(R_F32((u32)(0x99ac78u)));
    /* 0087a6c9: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 0087a6cb: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0087a6cd: fadd st(7) */ ST(0) = ST(0) + ST(7);
    /* 0087a6cf: fdiv st(5) */ ST(0) = ST(0) / ST(5);
    /* 0087a6d1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087a6d3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087a6d5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087a6d6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a6d8: jae 0x87a6dc */ if (!fC) goto L_0087a6dc;
L_0087a6da:; BB(0x0087a6da);
    /* 0087a6da: fst st(1) */ ST(1) = ST(0);
L_0087a6dc:; BB(0x0087a6dc);
    /* 0087a6dc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a6de: fsub st(3) */ ST(0) = ST(0) - ST(3);
    /* 0087a6e0: fstp dword ptr [edi + edx + 0xc] */ W_F32((u32)(r_edi+r_edx+0xcu), ST(0)); FPOP();
    /* 0087a6e4: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a6e6: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 0087a6e8: add ecx, 4 */ {  u32 a = r_ecx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087a6eb: cmp ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087a6ed: jle 0x87a65c */ if ((fZ||fS!=fO)) goto L_0087a65c;
L_0087a6f3:; BB(0x0087a6f3);
    /* 0087a6f3: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a6f5: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a6f7: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0087a6fa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_0087a6fc:; BB(0x0087a6fc);
    /* 0087a6fc: mov esi, dword ptr [ebx + 0x14] */ r_esi = R32((u32)(r_ebx+0x14u));
    /* 0087a6ff: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0087a702: fld dword ptr [0x99ac80] */ FPUSH(R_F32((u32)(0x99ac80u)));
    /* 0087a708: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
    /* 0087a70b: jmp 0x87a716 */ goto L_0087a716;
L_0087a70d:; BB(0x0087a70d);
    /* 0087a70d: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 0087a710: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087a712: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a714: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
L_0087a716:; BB(0x0087a716);
    /* 0087a716: fld st(5) */ { long double v = ST(5); FPUSH(v); }
    /* 0087a718: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0087a71a: fadd st(7) */ ST(0) = ST(0) + ST(7);
    /* 0087a71c: fdiv st(5) */ ST(0) = ST(0) / ST(5);
    /* 0087a71e: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 0087a720: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087a722: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087a723: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a725: jae 0x87a729 */ if (!fC) goto L_0087a729;
L_0087a727:; BB(0x0087a727);
    /* 0087a727: fst st(3) */ ST(3) = ST(0);
L_0087a729:; BB(0x0087a729);
    /* 0087a729: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a72b: fsub st(3), st(0) */ ST(3) = ST(3) - ST(0);
    /* 0087a72d: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a72f: fstp dword ptr [esi + edx] */ W_F32((u32)(r_esi+r_edx), ST(0)); FPOP();
    /* 0087a732: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087a733: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a735: fadd st(5), st(0) */ ST(5) = ST(5) + ST(0);
    /* 0087a737: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087a739: jl 0x87a70d */ if ((fS!=fO)) goto L_0087a70d;
L_0087a73b:; BB(0x0087a73b);
    /* 0087a73b: fstp st(5) */ ST(5) = ST(0); FPOP();
    /* 0087a73d: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0087a73f: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087a741:; BB(0x0087a741);
    /* 0087a741: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0087a744: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0087a746: jle 0x87a9c7 */ if ((fZ||fS!=fO)) goto L_0087a9c7;
L_0087a74c:; BB(0x0087a74c);
    /* 0087a74c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087a74e: mov eax, dword ptr [ebx + 0x1c] */ r_eax = R32((u32)(r_ebx+0x1cu));
    /* 0087a751: mov ecx, eax */ r_ecx = r_eax;
    /* 0087a753: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 0087a756: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087a758: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0087a75a: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0087a75d: mov esi, dword ptr [ebx + 0x14] */ r_esi = R32((u32)(r_ebx+0x14u));
L_0087a760:; BB(0x0087a760);
    /* 0087a760: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087a763: lea ecx, [edx + eax] */ r_ecx = (u32)(r_edx+r_eax);
    /* 0087a766: mov eax, ecx */ r_eax = r_ecx;
    /* 0087a768: sub eax, dword ptr [ebx + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087a76b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0087a76d: jge 0x87a7f6 */ if ((fS==fO)) goto L_0087a7f6;
L_0087a773:; BB(0x0087a773);
    /* 0087a773: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0087a775: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0087a777: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a779: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087a77b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087a77d: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087a77f: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087a782: fld dword ptr [eax + edi] */ FPUSH(R_F32((u32)(r_eax+r_edi)));
    /* 0087a785: fadd dword ptr [edi + ecx*4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_ecx*4));
    /* 0087a788: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0087a78b: fld dword ptr [edi + ecx*4] */ FPUSH(R_F32((u32)(r_edi+r_ecx*4)));
    /* 0087a78e: fsub dword ptr [eax + edi] */ ST(0) = ST(0) - R_F32((u32)(r_eax+r_edi));
    /* 0087a791: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087a794: fld dword ptr [eax + edi] */ FPUSH(R_F32((u32)(r_eax+r_edi)));
    /* 0087a797: fadd dword ptr [edi + ecx*4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_ecx*4));
    /* 0087a79a: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0087a79d: fld dword ptr [eax + edi] */ FPUSH(R_F32((u32)(r_eax+r_edi)));
    /* 0087a7a0: fadd dword ptr [edi + ecx*4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_ecx*4));
    /* 0087a7a3: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087a7a6: fld dword ptr [edi + ecx*4] */ FPUSH(R_F32((u32)(r_edi+r_ecx*4)));
    /* 0087a7a9: fsub dword ptr [eax + edi] */ ST(0) = ST(0) - R_F32((u32)(r_eax+r_edi));
    /* 0087a7ac: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0087a7ae: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0087a7b0: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 0087a7b2: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0087a7b4: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0087a7b6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087a7b8: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0087a7ba: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a7bc: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0087a7be: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0087a7c0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a7c2: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0087a7c4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087a7c6: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0087a7c8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a7ca: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0087a7cc: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0087a7ce: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0087a7d0: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087a7d2: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 0087a7d4: fsub dword ptr [ebp - 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0087a7d7: fcom dword ptr [esi + edx*4] */ fx_compare(ST(0), R_F32((u32)(r_esi+r_edx*4))); 
    /* 0087a7da: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087a7dc: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087a7dd: jae 0x87a7e2 */ if (!fC) goto L_0087a7e2;
L_0087a7df:; BB(0x0087a7df);
    /* 0087a7df: fst dword ptr [esi + edx*4] */ W_F32((u32)(r_esi+r_edx*4), ST(0));
L_0087a7e2:; BB(0x0087a7e2);
    /* 0087a7e2: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a7e4: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087a7e5: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a7e7: fadd dword ptr [0x99ac80] */ ST(0) = ST(0) + R_F32((u32)(0x99ac80u));
    /* 0087a7ed: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087a7ef: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a7f1: jmp 0x87a760 */ goto L_0087a760;
L_0087a7f6:; BB(0x0087a7f6);
    /* 0087a7f6: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0087a7f9: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087a7fc: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0087a7ff: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0087a802: mov esi, dword ptr [ebx + 0x14] */ r_esi = R32((u32)(r_ebx+0x14u));
L_0087a805:; BB(0x0087a805);
    /* 0087a805: mov edi, dword ptr [ebp - 0x30] */ r_edi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0087a808: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087a80a: jge 0x87a898 */ if ((fS==fO)) goto L_0087a898;
L_0087a810:; BB(0x0087a810);
    /* 0087a810: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0087a812: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0087a814: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a816: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 0087a819: fld dword ptr [edi + ecx*4] */ FPUSH(R_F32((u32)(r_edi+r_ecx*4)));
    /* 0087a81c: fsub dword ptr [edi + eax*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_eax*4));
    /* 0087a81f: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 0087a822: fld dword ptr [edi + ecx*4] */ FPUSH(R_F32((u32)(r_edi+r_ecx*4)));
    /* 0087a825: fsub dword ptr [edi + eax*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_eax*4));
    /* 0087a828: mov edi, dword ptr [ebp - 0x24] */ r_edi = R32((u32)(r_ebp+0xffffffdcu));
    /* 0087a82b: fld dword ptr [edi + ecx*4] */ FPUSH(R_F32((u32)(r_edi+r_ecx*4)));
    /* 0087a82e: fsub dword ptr [edi + eax*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_eax*4));
    /* 0087a831: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 0087a834: fld dword ptr [edi + ecx*4] */ FPUSH(R_F32((u32)(r_edi+r_ecx*4)));
    /* 0087a837: fsub dword ptr [edi + eax*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_eax*4));
    /* 0087a83a: mov edi, dword ptr [ebp - 0x1c] */ r_edi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0087a83d: fld dword ptr [edi + ecx*4] */ FPUSH(R_F32((u32)(r_edi+r_ecx*4)));
    /* 0087a840: fsub dword ptr [edi + eax*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_eax*4));
    /* 0087a843: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 0087a845: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0087a847: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 0087a849: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0087a84b: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 0087a84d: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087a84f: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0087a851: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a853: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0087a855: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 0087a857: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a859: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0087a85b: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087a85d: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0087a85f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a861: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0087a863: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0087a865: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 0087a867: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087a869: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 0087a86b: fsub dword ptr [ebp - 0x10] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xfffffff0u));
    /* 0087a86e: fcom dword ptr [esi + edx*4] */ fx_compare(ST(0), R_F32((u32)(r_esi+r_edx*4))); 
    /* 0087a871: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087a873: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087a874: jae 0x87a879 */ if (!fC) goto L_0087a879;
L_0087a876:; BB(0x0087a876);
    /* 0087a876: fst dword ptr [esi + edx*4] */ W_F32((u32)(r_esi+r_edx*4), ST(0));
L_0087a879:; BB(0x0087a879);
    /* 0087a879: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a87b: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087a87c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a87e: fadd dword ptr [0x99ac80] */ ST(0) = ST(0) + R_F32((u32)(0x99ac80u));
    /* 0087a884: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0087a887: lea ecx, [eax + edx] */ r_ecx = (u32)(r_eax+r_edx);
    /* 0087a88a: mov eax, ecx */ r_eax = r_ecx;
    /* 0087a88c: sub eax, dword ptr [ebx + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087a88f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087a891: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a893: jmp 0x87a805 */ goto L_0087a805;
L_0087a898:; BB(0x0087a898);
    /* 0087a898: mov eax, edi */ r_eax = r_edi;
    /* 0087a89a: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0087a89c: jge 0x87a9d1 */ if ((fS==fO)) goto L_0087a9d1;
L_0087a8a2:; BB(0x0087a8a2);
    /* 0087a8a2: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087a8a4: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087a8a7: jl 0x87a95f */ if ((fS!=fO)) goto L_0087a95f;
L_0087a8ad:; BB(0x0087a8ad);
    /* 0087a8ad: fld dword ptr [0x99ac74] */ FPUSH(R_F32((u32)(0x99ac74u)));
    /* 0087a8b3: mov eax, edi */ r_eax = r_edi;
    /* 0087a8b5: lea ecx, [eax - 5] */ r_ecx = (u32)(r_eax+0xfffffffbu);
    /* 0087a8b8: mov esi, dword ptr [ebx + 0x14] */ r_esi = R32((u32)(r_ebx+0x14u));
    /* 0087a8bb: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
L_0087a8be:; BB(0x0087a8be);
    /* 0087a8be: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 0087a8c0: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0087a8c2: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 0087a8c4: fdiv st(4) */ ST(0) = ST(0) / ST(4);
    /* 0087a8c6: fld dword ptr [esi + edx*4] */ FPUSH(R_F32((u32)(r_esi+r_edx*4)));
    /* 0087a8c9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a8cb: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0087a8cd: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087a8cf: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087a8d1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087a8d2: ja 0x87a8d6 */ if ((!fC&&!fZ)) goto L_0087a8d6;
L_0087a8d4:; BB(0x0087a8d4);
    /* 0087a8d4: fst st(1) */ ST(1) = ST(0);
L_0087a8d6:; BB(0x0087a8d6);
    /* 0087a8d6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a8d8: fstp dword ptr [esi + edx*4] */ W_F32((u32)(r_esi+r_edx*4), ST(0)); FPOP();
    /* 0087a8db: fld dword ptr [0x99ac80] */ FPUSH(R_F32((u32)(0x99ac80u)));
    /* 0087a8e1: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0087a8e3: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0087a8e5: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 0087a8e7: fdiv st(4) */ ST(0) = ST(0) / ST(4);
    /* 0087a8e9: fld dword ptr [esi + edx*4 + 4] */ FPUSH(R_F32((u32)(r_esi+r_edx*4+0x4u)));
    /* 0087a8ed: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a8ef: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0087a8f1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087a8f3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087a8f5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087a8f6: ja 0x87a8fa */ if ((!fC&&!fZ)) goto L_0087a8fa;
L_0087a8f8:; BB(0x0087a8f8);
    /* 0087a8f8: fst st(1) */ ST(1) = ST(0);
L_0087a8fa:; BB(0x0087a8fa);
    /* 0087a8fa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a8fc: fstp dword ptr [esi + edx*4 + 4] */ W_F32((u32)(r_esi+r_edx*4+0x4u), ST(0)); FPOP();
    /* 0087a900: fld dword ptr [0x99ac7c] */ FPUSH(R_F32((u32)(0x99ac7cu)));
    /* 0087a906: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0087a908: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0087a90a: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 0087a90c: fdiv st(4) */ ST(0) = ST(0) / ST(4);
    /* 0087a90e: fld dword ptr [esi + edx*4 + 8] */ FPUSH(R_F32((u32)(r_esi+r_edx*4+0x8u)));
    /* 0087a912: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a914: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0087a916: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087a918: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087a91a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087a91b: ja 0x87a91f */ if ((!fC&&!fZ)) goto L_0087a91f;
L_0087a91d:; BB(0x0087a91d);
    /* 0087a91d: fst st(1) */ ST(1) = ST(0);
L_0087a91f:; BB(0x0087a91f);
    /* 0087a91f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a921: fstp dword ptr [esi + edx*4 + 8] */ W_F32((u32)(r_esi+r_edx*4+0x8u), ST(0)); FPOP();
    /* 0087a925: fld dword ptr [0x99ac78] */ FPUSH(R_F32((u32)(0x99ac78u)));
    /* 0087a92b: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0087a92d: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0087a92f: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 0087a931: fdiv st(4) */ ST(0) = ST(0) / ST(4);
    /* 0087a933: fld dword ptr [esi + edx*4 + 0xc] */ FPUSH(R_F32((u32)(r_esi+r_edx*4+0xcu)));
    /* 0087a937: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a939: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0087a93b: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087a93d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087a93f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087a940: ja 0x87a944 */ if ((!fC&&!fZ)) goto L_0087a944;
L_0087a942:; BB(0x0087a942);
    /* 0087a942: fst st(1) */ ST(1) = ST(0);
L_0087a944:; BB(0x0087a944);
    /* 0087a944: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a946: fstp dword ptr [esi + edx*4 + 0xc] */ W_F32((u32)(r_esi+r_edx*4+0xcu), ST(0)); FPOP();
    /* 0087a94a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a94c: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 0087a94e: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087a951: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087a953: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a955: jle 0x87a8be */ if ((fZ||fS!=fO)) goto L_0087a8be;
L_0087a95b:; BB(0x0087a95b);
    /* 0087a95b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a95d: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087a95f:; BB(0x0087a95f);
    /* 0087a95f: mov ecx, dword ptr [ebx + 0x14] */ r_ecx = R32((u32)(r_ebx+0x14u));
    /* 0087a962: mov esi, dword ptr [ebp - 0x30] */ r_esi = R32((u32)(r_ebp+0xffffffd0u));
    /* 0087a965: fld dword ptr [0x99ac80] */ FPUSH(R_F32((u32)(0x99ac80u)));
    /* 0087a96b: fld dword ptr [ebp - 0x10] */ FPUSH(R_F32((u32)(r_ebp+0xfffffff0u)));
L_0087a96e:; BB(0x0087a96e);
    /* 0087a96e: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 0087a970: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0087a972: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 0087a974: fdiv st(4) */ ST(0) = ST(0) / ST(4);
    /* 0087a976: fld dword ptr [ecx + edx*4] */ FPUSH(R_F32((u32)(r_ecx+r_edx*4)));
    /* 0087a979: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a97b: fsub st(2) */ ST(0) = ST(0) - ST(2);
    /* 0087a97d: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087a97f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087a981: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087a982: ja 0x87a986 */ if ((!fC&&!fZ)) goto L_0087a986;
L_0087a984:; BB(0x0087a984);
    /* 0087a984: fst st(1) */ ST(1) = ST(0);
L_0087a986:; BB(0x0087a986);
    /* 0087a986: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a988: fstp dword ptr [ecx + edx*4] */ W_F32((u32)(r_ecx+r_edx*4), ST(0)); FPOP();
    /* 0087a98b: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087a98c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a98e: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 0087a990: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0087a992: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a994: jl 0x87a96e */ if ((fS!=fO)) goto L_0087a96e;
L_0087a996:; BB(0x0087a996);
    /* 0087a996: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0087a998: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 0087a99a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a99c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a99e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a9a0: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087a9a2:; BB(0x0087a9a2);
    /* 0087a9a2: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 0087a9a5: mov edi, dword ptr [ebp - 0x34] */ r_edi = R32((u32)(r_ebp+0xffffffccu));
    /* 0087a9a8: mov esp, ebp */ r_esp = r_ebp;
    /* 0087a9aa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087a9ab: mov esp, ebx */ r_esp = r_ebx;
    /* 0087a9ad: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0087a9ae: ret  */ FN_RET(0x00879998); r_esp += 4; return;
L_0087a9af:; BB(0x0087a9af);
    /* 0087a9af: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a9b1: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a9b3: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a9b5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a9b7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a9b9: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a9bb: jmp 0x87a4cd */ goto L_0087a4cd;
L_0087a9c0:; BB(0x0087a9c0);
    /* 0087a9c0: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0087a9c2: jmp 0x87a741 */ goto L_0087a741;
L_0087a9c7:; BB(0x0087a9c7);
    /* 0087a9c7: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0087a9c9: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0087a9cb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a9cd: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a9cf: jmp 0x87a9a2 */ goto L_0087a9a2;
L_0087a9d1:; BB(0x0087a9d1);
    /* 0087a9d1: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0087a9d3: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0087a9d5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a9d7: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a9d9: jmp 0x87a9a2 */ goto L_0087a9a2;
}

void f_00879b40(void)
{
    FN_ENTER(0x00879b40);
    /* 00879b40: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
    /* 00879b43: fld dword ptr [0x99ac90] */ FPUSH(R_F32((u32)(0x99ac90u)));
    /* 00879b49: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00879b4b: fldz  */ FPUSH(0.0);
    /* 00879b4d: fldz  */ FPUSH(0.0);
    /* 00879b4f: fld dword ptr [0x99ac94] */ FPUSH(R_F32((u32)(0x99ac94u)));
    /* 00879b55: fldz  */ FPUSH(0.0);
    /* 00879b57: fstp st(4) */ ST(4) = ST(0); FPOP();
    /* 00879b59: jmp 0x879bf4 */ goto L_00879bf4;
L_00879b5e:; BB(0x00879b5e);
    /* 00879b5e: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00879b60: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00879b62: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00879b64: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 00879b67: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00879b69: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00879b6b: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
    /* 00879b6e: mov esi, edi */ r_esi = r_edi;
    /* 00879b70: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00879b72: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00879b74: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 00879b77: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00879b78: fadd dword ptr [edi + edx*4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_edx*4));
    /* 00879b7b: mov edi, esi */ r_edi = r_esi;
    /* 00879b7d: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00879b7f: fld dword ptr [esi + edx*4] */ FPUSH(R_F32((u32)(r_esi+r_edx*4)));
    /* 00879b82: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 00879b84: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00879b87: mov esi, edi */ r_esi = r_edi;
    /* 00879b89: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00879b8b: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00879b8d: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00879b8f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00879b91: fadd dword ptr [edi + edx*4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_edx*4));
    /* 00879b94: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 00879b97: mov esi, edi */ r_esi = r_edi;
    /* 00879b99: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00879b9b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00879b9d: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00879b9f: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00879ba2: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00879ba4: fadd dword ptr [edi + edx*4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_edx*4));
    /* 00879ba7: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00879ba9: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00879bab: fld dword ptr [esi + edx*4] */ FPUSH(R_F32((u32)(r_esi+r_edx*4)));
    /* 00879bae: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00879bb0: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00879bb2: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00879bb4: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00879bb6: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00879bb8: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 00879bba: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00879bbc: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00879bbe: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00879bc0: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00879bc2: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00879bc4: fsubrp st(4) */ ST(4) = ST(0) - ST(4); FPOP();
    /* 00879bc6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00879bc8: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00879bca: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 00879bcc: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00879bce: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00879bd0: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00879bd2: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00879bd4: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00879bd7: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00879bda: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00879bdc: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00879bde: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00879bdf: fcmovb st(0), st(1) */ if (fC) ST(0) = ST(1);
    /* 00879be1: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00879be3: mov eax, dword ptr [ebx + 0x14] */ r_eax = R32((u32)(r_ebx+0x14u));
    /* 00879be6: fsub dword ptr [ebp - 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffb4u));
    /* 00879be9: fstp dword ptr [eax + edx] */ W_F32((u32)(r_eax+r_edx), ST(0)); FPOP();
    /* 00879bec: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00879bee: fadd dword ptr [0x99ac90] */ ST(0) = ST(0) + R_F32((u32)(0x99ac90u));
L_00879bf4:; BB(0x00879bf4);
    /* 00879bf4: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 00879bf7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00879bf9: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00879bfc: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00879bff: mov edx, dword ptr [eax + edx] */ r_edx = R32((u32)(r_eax+r_edx));
    /* 00879c02: mov eax, edx */ r_eax = r_edx;
    /* 00879c04: sar eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00879c07: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00879c09: jl 0x879b5e */ if ((fS!=fO)) goto L_00879b5e;
L_00879c0f:; BB(0x00879c0f);
    /* 00879c0f: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00879c12: fld dword ptr [0x99ac90] */ FPUSH(R_F32((u32)(0x99ac90u)));
    /* 00879c18: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00879c1a: jmp 0x879cb2 */ goto L_00879cb2;
L_00879c1f:; BB(0x00879c1f);
    /* 00879c1f: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00879c21: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00879c23: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00879c25: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
    /* 00879c28: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00879c29: fld dword ptr [edi + edx*4] */ FPUSH(R_F32((u32)(r_edi+r_edx*4)));
    /* 00879c2c: fsub dword ptr [edi + eax*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_eax*4));
    /* 00879c2f: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 00879c32: fld dword ptr [edi + edx*4] */ FPUSH(R_F32((u32)(r_edi+r_edx*4)));
    /* 00879c35: fsub dword ptr [edi + eax*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_eax*4));
    /* 00879c38: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00879c3b: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00879c3d: fld dword ptr [edi + edx*4] */ FPUSH(R_F32((u32)(r_edi+r_edx*4)));
    /* 00879c40: fsub dword ptr [edi + eax*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_eax*4));
    /* 00879c43: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 00879c46: fld dword ptr [edi + edx*4] */ FPUSH(R_F32((u32)(r_edi+r_edx*4)));
    /* 00879c49: fsub dword ptr [edi + eax*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_eax*4));
    /* 00879c4c: mov edi, dword ptr [ebp - 0x44] */ r_edi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00879c4f: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00879c51: fld dword ptr [edi + edx*4] */ FPUSH(R_F32((u32)(r_edi+r_edx*4)));
    /* 00879c54: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00879c56: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00879c58: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00879c5a: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00879c5c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00879c5e: fsub dword ptr [edi + eax*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_eax*4));
    /* 00879c61: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00879c63: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00879c65: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 00879c67: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00879c69: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00879c6b: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 00879c6d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00879c6f: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00879c71: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00879c73: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00879c75: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 00879c77: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00879c79: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00879c7b: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00879c7d: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00879c7f: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00879c82: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00879c84: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00879c86: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00879c87: fcmovb st(0), st(1) */ if (fC) ST(0) = ST(1);
    /* 00879c89: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00879c8b: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 00879c8e: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00879c91: fsub dword ptr [ebp - 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffb4u));
    /* 00879c94: fstp dword ptr [edx + esi] */ W_F32((u32)(r_edx+r_esi), ST(0)); FPOP();
    /* 00879c97: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00879c99: fadd dword ptr [0x99ac90] */ ST(0) = ST(0) + R_F32((u32)(0x99ac90u));
    /* 00879c9f: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 00879ca2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00879ca4: mov edx, dword ptr [eax + esi] */ r_edx = R32((u32)(r_eax+r_esi));
    /* 00879ca7: mov eax, edx */ r_eax = r_edx;
    /* 00879ca9: sar eax, 0x10 */ { u32 c = (16u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00879cac: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00879cae: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00879cb0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_00879cb2:; BB(0x00879cb2);
    /* 00879cb2: movzx edx, dx */ r_edx = (u32)(u16)r_edx;
    /* 00879cb5: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 00879cb8: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00879cba: jl 0x879c1f */ if ((fS!=fO)) goto L_00879c1f;
L_00879cc0:; BB(0x00879cc0);
    /* 00879cc0: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
    /* 00879cc3: mov eax, edi */ r_eax = r_edi;
    /* 00879cc5: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00879cc7: fld dword ptr [0x99ac90] */ FPUSH(R_F32((u32)(0x99ac90u)));
    /* 00879ccd: jge 0x87a30c */ if ((fS==fO)) goto L_0087a30c;
L_00879cd3:; BB(0x00879cd3);
    /* 00879cd3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00879cd5: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00879cd8: mov eax, edi */ r_eax = r_edi;
    /* 00879cda: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00879cdc: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00879cdf: jb 0x87a2e9 */ if (fC) goto L_0087a2e9;
L_00879ce5:; BB(0x00879ce5);
    /* 00879ce5: mov edx, eax */ r_edx = r_eax;
    /* 00879ce7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00879ce9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00879ceb: add ecx, dword ptr [ebx + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00879cee: mov edi, ecx */ r_edi = r_ecx;
    /* 00879cf0: and edi, 0xf */ {  u32 a = r_edi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00879cf3: je 0x879d6d */ if (fZ) goto L_00879d6d;
L_00879cf5:; BB(0x00879cf5);
    /* 00879cf5: test edi, 3 */ {  u32 a = r_edi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00879cfb: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00879cfd: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00879cff: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00879d01: jne 0x879ec5 */ if (!fZ) goto L_00879ec5;
L_00879d07:; BB(0x00879d07);
    /* 00879d07: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00879d09: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00879d0c: shr edi, 2 */ { u32 c = (2u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00879d0f: mov edx, eax */ r_edx = r_eax;
    /* 00879d11: sub edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00879d13: mov esi, dword ptr [ebp - 0x18] */ r_esi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00879d16: mov dword ptr [ebp - 0x58], eax */ W32((u32)(r_ebp+0xffffffa8u), r_eax);
    /* 00879d19: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00879d1c: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
    /* 00879d1f: jmp 0x879d25 */ goto L_00879d25;
L_00879d21:; BB(0x00879d21);
    /* 00879d21: fstp dword ptr [ecx + esi*4 - 4] */ W_F32((u32)(r_ecx+r_esi*4+0xfffffffcu), ST(0)); FPOP();
L_00879d25:; BB(0x00879d25);
    /* 00879d25: mov dword ptr [ebp - 0x98], esi */ W32((u32)(r_ebp+0xffffff68u), r_esi);
    /* 00879d2b: mov eax, esi */ r_eax = r_esi;
    /* 00879d2d: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00879d30: fild dword ptr [ebp - 0x98] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff68u)));
    /* 00879d36: fadd dword ptr [eax*4 + 0x99ab60] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x99ab60u));
    /* 00879d3d: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00879d3f: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00879d41: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 00879d43: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00879d45: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00879d47: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00879d49: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00879d4a: fcmovbe st(0), st(2) */ if (fC || fZ) ST(0) = ST(2);
    /* 00879d4c: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00879d4e: inc esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00879d4f: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00879d51: jb 0x879d21 */ if (fC) goto L_00879d21;
L_00879d53:; BB(0x00879d53);
    /* 00879d53: fstp dword ptr [ecx + esi*4 - 4] */ W_F32((u32)(r_ecx+r_esi*4+0xfffffffcu), ST(0)); FPOP();
    /* 00879d57: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00879d5a: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00879d5d: mov esi, dword ptr [ebx + 0x1c] */ r_esi = R32((u32)(r_ebx+0x1cu));
    /* 00879d60: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00879d62: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 00879d65: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00879d67: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00879d69: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00879d6b: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
L_00879d6d:; BB(0x00879d6d);
    /* 00879d6d: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00879d70: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00879d72: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00879d74: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00879d76: fst dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0));
    /* 00879d7c: movss xmm0, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 00879d84: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 00879d88: movaps xmm7, xmmword ptr [0x99a840] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x99a840u), 16); xmm[7] = s; }
    /* 00879d8f: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00879d92: fld st(4) */ { long double v = ST(4); FPUSH(v); }
    /* 00879d94: mov dword ptr [ebp - 0x90], edi */ W32((u32)(r_ebp+0xffffff70u), r_edi);
    /* 00879d9a: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00879d9d: fild dword ptr [ebp - 0x90] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff70u)));
    /* 00879da3: movaps xmmword ptr [ebp - 0x78], xmm0 */ memcpy((void *)(uintptr_t)(u32)(r_ebp+0xffffff88u), &xmm[0], 16);
    /* 00879da7: fadd dword ptr [edi*4 + 0x99ab60] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x99ab60u));
    /* 00879dae: fadd st(3) */ ST(0) = ST(0) + ST(3);
    /* 00879db0: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00879db2: fld dword ptr [0x99ac8c] */ FPUSH(R_F32((u32)(0x99ac8cu)));
    /* 00879db8: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00879dba: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00879dbd: fstp dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 00879dc3: movss xmm1, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 00879dcb: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00879dcd: fstp dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 00879dd3: movss xmm3, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 00879ddb: unpcklps xmm3, xmm1 */ { XMM s = xmm[1]; u32 a0 = xmm[3].d[0], a1 = xmm[3].d[1]; xmm[3].d[0] = a0; xmm[3].d[1] = s.d[0]; xmm[3].d[2] = a1; xmm[3].d[3] = s.d[1]; }
    /* 00879dde: fld dword ptr [0x99ac88] */ FPUSH(R_F32((u32)(0x99ac88u)));
    /* 00879de4: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00879de6: fstp dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 00879dec: movss xmm2, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 00879df4: fstp dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 00879dfa: movss xmm6, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[6].d[0] = v; xmm[6].d[1] = 0; xmm[6].d[2] = 0; xmm[6].d[3] = 0; }
    /* 00879e02: unpcklps xmm6, xmm2 */ { XMM s = xmm[2]; u32 a0 = xmm[6].d[0], a1 = xmm[6].d[1]; xmm[6].d[0] = a0; xmm[6].d[1] = s.d[0]; xmm[6].d[2] = a1; xmm[6].d[3] = s.d[1]; }
    /* 00879e05: unpcklps xmm6, xmm3 */ { XMM s = xmm[3]; u32 a0 = xmm[6].d[0], a1 = xmm[6].d[1]; xmm[6].d[0] = a0; xmm[6].d[1] = s.d[0]; xmm[6].d[2] = a1; xmm[6].d[3] = s.d[1]; }
    /* 00879e08: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00879e0a: fst dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0));
    /* 00879e10: movss xmm5, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 00879e18: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 00879e1c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00879e1e: fst dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0));
    /* 00879e24: movss xmm2, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 00879e2c: shufps xmm2, xmm2, 0 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[0]; u32 lo2 = xmm[2].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 00879e30: xorps xmm1, xmm1 */ { XMM s = xmm[1]; xmm[1].q[0] = xmm[1].q[0] ^ s.q[0]; xmm[1].q[1] = xmm[1].q[1] ^ s.q[1]; }
    /* 00879e33: movaps xmmword ptr [ebp - 0x28], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_ebp+0xffffffd8u), &xmm[2], 16);
    /* 00879e37: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
    /* 00879e3a: fstp dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 00879e40: movss xmm3, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[3].d[0] = v; xmm[3].d[1] = 0; xmm[3].d[2] = 0; xmm[3].d[3] = 0; }
    /* 00879e48: shufps xmm3, xmm3, 0 */ { XMM s = xmm[3]; u32 lo = xmm[3].d[0]; u32 lo2 = xmm[3].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[3].d[0] = lo; xmm[3].d[1] = lo2; xmm[3].d[2] = hi; xmm[3].d[3] = hi2; }
    /* 00879e4c: movaps xmmword ptr [ebp - 0x68], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_ebp+0xffffff98u), &xmm[3], 16);
L_00879e50:; BB(0x00879e50);
    /* 00879e50: movaps xmm2, xmm6 */ { XMM s = xmm[6]; xmm[2] = s; }
    /* 00879e53: mulps xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 00879e56: movaps xmm0, xmmword ptr [ebp - 0x78] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ebp+0xffffff88u), 16); xmm[0] = s; }
    /* 00879e5a: addps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 00879e5d: movaps xmm1, xmmword ptr [ebp - 0x28] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ebp+0xffffffd8u), 16); xmm[1] = s; }
    /* 00879e61: movaps xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3] = s; }
    /* 00879e64: rcpps xmm4, xmm1 */ { XMM s = xmm[1]; xmm[4].fs[0] = 1.0f / s.fs[0]; xmm[4].fs[1] = 1.0f / s.fs[1]; xmm[4].fs[2] = 1.0f / s.fs[2]; xmm[4].fs[3] = 1.0f / s.fs[3]; }
    /* 00879e67: mulps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 00879e6a: mulps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 00879e6d: addps xmm4, xmm4 */ { XMM s = xmm[4]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 00879e70: subps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] - s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] - s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] - s.fs[3]; }
    /* 00879e73: mulps xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 00879e76: xorps xmm3, xmm3 */ { XMM s = xmm[3]; xmm[3].q[0] = xmm[3].q[0] ^ s.q[0]; xmm[3].q[1] = xmm[3].q[1] ^ s.q[1]; }
    /* 00879e79: maxps xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = (xmm[2].fs[0] > s.fs[0]) ? xmm[2].fs[0] : s.fs[0]; xmm[2].fs[1] = (xmm[2].fs[1] > s.fs[1]) ? xmm[2].fs[1] : s.fs[1]; xmm[2].fs[2] = (xmm[2].fs[2] > s.fs[2]) ? xmm[2].fs[2] : s.fs[2]; xmm[2].fs[3] = (xmm[2].fs[3] > s.fs[3]) ? xmm[2].fs[3] : s.fs[3]; }
    /* 00879e7c: movaps xmm4, xmmword ptr [ebp - 0x68] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ebp+0xffffff98u), 16); xmm[4] = s; }
    /* 00879e80: subps xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] - s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] - s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] - s.fs[3]; }
    /* 00879e83: movaps xmmword ptr [ecx + edi*4], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_ecx+r_edi*4), &xmm[2], 16);
    /* 00879e87: addps xmm6, xmm7 */ { XMM s = xmm[7]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] + s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] + s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] + s.fs[3]; }
    /* 00879e8a: movaps xmm2, xmm5 */ { XMM s = xmm[5]; xmm[2] = s; }
    /* 00879e8d: mulps xmm2, xmm6 */ { XMM s = xmm[6]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 00879e90: addps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2].fs[0] = xmm[2].fs[0] + s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] + s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] + s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] + s.fs[3]; }
    /* 00879e93: addps xmm6, xmm7 */ { XMM s = xmm[7]; xmm[6].fs[0] = xmm[6].fs[0] + s.fs[0]; xmm[6].fs[1] = xmm[6].fs[1] + s.fs[1]; xmm[6].fs[2] = xmm[6].fs[2] + s.fs[2]; xmm[6].fs[3] = xmm[6].fs[3] + s.fs[3]; }
    /* 00879e96: rcpps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = 1.0f / s.fs[0]; xmm[0].fs[1] = 1.0f / s.fs[1]; xmm[0].fs[2] = 1.0f / s.fs[2]; xmm[0].fs[3] = 1.0f / s.fs[3]; }
    /* 00879e99: mulps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 00879e9c: mulps xmm1, xmm0 */ { XMM s = xmm[0]; xmm[1].fs[0] = xmm[1].fs[0] * s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] * s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] * s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] * s.fs[3]; }
    /* 00879e9f: addps xmm0, xmm0 */ { XMM s = xmm[0]; xmm[0].fs[0] = xmm[0].fs[0] + s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] + s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] + s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] + s.fs[3]; }
    /* 00879ea2: subps xmm0, xmm1 */ { XMM s = xmm[1]; xmm[0].fs[0] = xmm[0].fs[0] - s.fs[0]; xmm[0].fs[1] = xmm[0].fs[1] - s.fs[1]; xmm[0].fs[2] = xmm[0].fs[2] - s.fs[2]; xmm[0].fs[3] = xmm[0].fs[3] - s.fs[3]; }
    /* 00879ea5: mulps xmm2, xmm0 */ { XMM s = xmm[0]; xmm[2].fs[0] = xmm[2].fs[0] * s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] * s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] * s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] * s.fs[3]; }
    /* 00879ea8: maxps xmm2, xmm3 */ { XMM s = xmm[3]; xmm[2].fs[0] = (xmm[2].fs[0] > s.fs[0]) ? xmm[2].fs[0] : s.fs[0]; xmm[2].fs[1] = (xmm[2].fs[1] > s.fs[1]) ? xmm[2].fs[1] : s.fs[1]; xmm[2].fs[2] = (xmm[2].fs[2] > s.fs[2]) ? xmm[2].fs[2] : s.fs[2]; xmm[2].fs[3] = (xmm[2].fs[3] > s.fs[3]) ? xmm[2].fs[3] : s.fs[3]; }
    /* 00879eab: subps xmm2, xmm4 */ { XMM s = xmm[4]; xmm[2].fs[0] = xmm[2].fs[0] - s.fs[0]; xmm[2].fs[1] = xmm[2].fs[1] - s.fs[1]; xmm[2].fs[2] = xmm[2].fs[2] - s.fs[2]; xmm[2].fs[3] = xmm[2].fs[3] - s.fs[3]; }
    /* 00879eae: movaps xmmword ptr [ecx + edi*4 + 0x10], xmm2 */ memcpy((void *)(uintptr_t)(u32)(r_ecx+r_edi*4+0x10u), &xmm[2], 16);
    /* 00879eb3: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00879eb6: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00879eb8: jb 0x879e50 */ if (fC) goto L_00879e50;
L_00879eba:; BB(0x00879eba);
    /* 00879eba: mov dword ptr [ebp - 0x18], edi */ W32((u32)(r_ebp+0xffffffe8u), r_edi);
    /* 00879ebd: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00879ebf: jae 0x87a313 */ if (!fC) goto L_0087a313;
L_00879ec5:; BB(0x00879ec5);
    /* 00879ec5: mov edx, eax */ r_edx = r_eax;
    /* 00879ec7: mov edi, dword ptr [ebp - 0x18] */ r_edi = R32((u32)(r_ebp+0xffffffe8u));
    /* 00879eca: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00879ecd: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
    /* 00879ed0: jmp 0x879ed6 */ goto L_00879ed6;
L_00879ed2:; BB(0x00879ed2);
    /* 00879ed2: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
L_00879ed6:; BB(0x00879ed6);
    /* 00879ed6: mov dword ptr [ebp - 0x90], edi */ W32((u32)(r_ebp+0xffffff70u), r_edi);
    /* 00879edc: mov eax, edi */ r_eax = r_edi;
    /* 00879ede: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00879ee1: fild dword ptr [ebp - 0x90] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff70u)));
    /* 00879ee7: fadd dword ptr [eax*4 + 0x99ab60] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x99ab60u));
    /* 00879eee: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 00879ef0: fmul st(6) */ ST(0) = ST(0) * ST(6);
    /* 00879ef2: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 00879ef4: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00879ef6: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00879ef8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00879efa: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00879efb: fcmovbe st(0), st(2) */ if (fC || fZ) ST(0) = ST(2);
    /* 00879efd: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00879eff: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00879f00: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00879f02: jb 0x879ed2 */ if (fC) goto L_00879ed2;
L_00879f04:; BB(0x00879f04);
    /* 00879f04: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
    /* 00879f08: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00879f0a: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 00879f0d: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00879f0f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00879f11: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00879f13: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
L_00879f15:; BB(0x00879f15);
    /* 00879f15: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00879f17: jle 0x87a320 */ if ((fZ||fS!=fO)) goto L_0087a320;
L_00879f1d:; BB(0x00879f1d);
    /* 00879f1d: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00879f1f: mov edi, esi */ r_edi = r_esi;
    /* 00879f21: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00879f24: add edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00879f26: sar edi, 1 */ { u32 c = (1u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00879f28: mov dword ptr [ebp - 0xc], edi */ W32((u32)(r_ebp+0xfffffff4u), r_edi);
    /* 00879f2b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00879f2d: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00879f30: jmp 0x879fc5 */ goto L_00879fc5;
L_00879f35:; BB(0x00879f35);
    /* 00879f35: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 00879f37: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00879f39: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00879f3b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00879f3d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00879f3f: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
    /* 00879f42: mov esi, edi */ r_esi = r_edi;
    /* 00879f44: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00879f46: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00879f48: mov esi, dword ptr [ebp - 0x3c] */ r_esi = R32((u32)(r_ebp+0xffffffc4u));
    /* 00879f4b: fadd dword ptr [edi + edx*4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_edx*4));
    /* 00879f4e: mov edi, esi */ r_edi = r_esi;
    /* 00879f50: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00879f52: fld dword ptr [esi + edx*4] */ FPUSH(R_F32((u32)(r_esi+r_edx*4)));
    /* 00879f55: fsub dword ptr [edi] */ ST(0) = ST(0) - R_F32((u32)(r_edi));
    /* 00879f57: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00879f5a: mov esi, edi */ r_esi = r_edi;
    /* 00879f5c: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00879f5e: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00879f60: fld st(1) */ { long double v = ST(1); FPUSH(v); }
    /* 00879f62: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00879f64: fadd dword ptr [edi + edx*4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_edx*4));
    /* 00879f67: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 00879f6a: mov esi, edi */ r_esi = r_edi;
    /* 00879f6c: sub esi, eax */ {  u32 a = r_esi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00879f6e: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00879f70: fld dword ptr [esi] */ FPUSH(R_F32((u32)(r_esi)));
    /* 00879f72: mov esi, dword ptr [ebp - 0x44] */ r_esi = R32((u32)(r_ebp+0xffffffbcu));
    /* 00879f75: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00879f77: fadd dword ptr [edi + edx*4] */ ST(0) = ST(0) + R_F32((u32)(r_edi+r_edx*4));
    /* 00879f7a: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 00879f7c: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00879f7e: fld dword ptr [esi + edx*4] */ FPUSH(R_F32((u32)(r_esi+r_edx*4)));
    /* 00879f81: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00879f83: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00879f85: fxch st(5) */ { long double t = ST(0); ST(0) = ST(5); ST(5) = t; }
    /* 00879f87: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00879f89: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00879f8b: fsub dword ptr [eax] */ ST(0) = ST(0) - R_F32((u32)(r_eax));
    /* 00879f8d: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 00879f8f: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00879f91: fsubp st(1) */ ST(1) = ST(1) - ST(0); FPOP();
    /* 00879f93: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00879f95: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 00879f97: fsubrp st(4) */ ST(4) = ST(0) - ST(4); FPOP();
    /* 00879f99: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00879f9b: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 00879f9d: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 00879f9f: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 00879fa1: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00879fa3: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00879fa5: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 00879fa7: mov edx, dword ptr [ebx + 0x14] */ r_edx = R32((u32)(r_ebx+0x14u));
    /* 00879faa: fsub dword ptr [ebp - 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffb4u));
    /* 00879fad: fld dword ptr [edx + ecx*4] */ FPUSH(R_F32((u32)(r_edx+r_ecx*4)));
    /* 00879fb0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00879fb2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00879fb4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00879fb5: fcmovnbe st(0), st(1) */ if (!(fC || fZ)) ST(0) = ST(1);
    /* 00879fb7: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00879fb9: fstp dword ptr [edx + ecx*4] */ W_F32((u32)(r_edx+r_ecx*4), ST(0)); FPOP();
    /* 00879fbc: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00879fbd: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00879fbf: fadd dword ptr [0x99ac90] */ ST(0) = ST(0) + R_F32((u32)(0x99ac90u));
L_00879fc5:; BB(0x00879fc5);
    /* 00879fc5: mov eax, dword ptr [ebp - 0xc] */ r_eax = R32((u32)(r_ebp+0xfffffff4u));
    /* 00879fc8: lea edx, [ecx + eax] */ r_edx = (u32)(r_ecx+r_eax);
    /* 00879fcb: mov eax, edx */ r_eax = r_edx;
    /* 00879fcd: sub eax, dword ptr [ebx + 0x1c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ebx+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00879fd0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00879fd2: jl 0x879f35 */ if ((fS!=fO)) goto L_00879f35;
L_00879fd8:; BB(0x00879fd8);
    /* 00879fd8: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00879fdb: mov edi, dword ptr [ebp - 0xc] */ r_edi = R32((u32)(r_ebp+0xfffffff4u));
    /* 00879fde: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 00879fe1: mov edx, eax */ r_edx = r_eax;
    /* 00879fe3: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 00879fe6: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 00879fe9: mov esi, dword ptr [ebx + 0x14] */ r_esi = R32((u32)(r_ebx+0x14u));
    /* 00879fec: fld dword ptr [0x99ac90] */ FPUSH(R_F32((u32)(0x99ac90u)));
    /* 00879ff2: mov dword ptr [ebp - 0xc], edi */ W32((u32)(r_ebp+0xfffffff4u), r_edi);
    /* 00879ff5: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00879ff7: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 00879ffa: jmp 0x87a08a */ goto L_0087a08a;
L_00879fff:; BB(0x00879fff);
    /* 00879fff: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0087a001: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a003: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a005: mov edi, dword ptr [ebp - 0x40] */ r_edi = R32((u32)(r_ebp+0xffffffc0u));
    /* 0087a008: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0087a00b: fsub dword ptr [edi + edx*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_edx*4));
    /* 0087a00e: mov edi, dword ptr [ebp - 0x3c] */ r_edi = R32((u32)(r_ebp+0xffffffc4u));
    /* 0087a011: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0087a014: fsub dword ptr [edi + edx*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_edx*4));
    /* 0087a017: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 0087a01a: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0087a01c: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0087a01f: fsub dword ptr [edi + edx*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_edx*4));
    /* 0087a022: mov edi, dword ptr [ebp - 0x10] */ r_edi = R32((u32)(r_ebp+0xfffffff0u));
    /* 0087a025: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0087a028: fsub dword ptr [edi + edx*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_edx*4));
    /* 0087a02b: mov edi, dword ptr [ebp - 0x44] */ r_edi = R32((u32)(r_ebp+0xffffffbcu));
    /* 0087a02e: fld st(0) */ { long double v = ST(0); FPUSH(v); }
    /* 0087a030: fld dword ptr [edi + eax*4] */ FPUSH(R_F32((u32)(r_edi+r_eax*4)));
    /* 0087a033: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a035: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 0087a037: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087a039: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0087a03b: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a03d: fsub dword ptr [edi + edx*4] */ ST(0) = ST(0) - R_F32((u32)(r_edi+r_edx*4));
    /* 0087a040: fmul st(4), st(0) */ ST(4) = ST(4) * ST(0);
    /* 0087a042: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0087a044: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 0087a046: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a048: fmul st(5) */ ST(0) = ST(0) * ST(5);
    /* 0087a04a: fsubrp st(3) */ ST(3) = ST(0) - ST(3); FPOP();
    /* 0087a04c: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a04e: fmulp st(4) */ ST(4) = ST(4) * ST(0); FPOP();
    /* 0087a050: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087a052: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 0087a054: fsubp st(3) */ ST(3) = ST(3) - ST(0); FPOP();
    /* 0087a056: fld st(3) */ { long double v = ST(3); FPUSH(v); }
    /* 0087a058: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 0087a05a: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0087a05c: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 0087a05e: fsub dword ptr [ebp - 0x4c] */ ST(0) = ST(0) - R_F32((u32)(r_ebp+0xffffffb4u));
    /* 0087a061: mov edx, dword ptr [ebp - 0xc] */ r_edx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0087a064: fld dword ptr [esi + ecx*4] */ FPUSH(R_F32((u32)(r_esi+r_ecx*4)));
    /* 0087a067: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087a069: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087a06b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087a06c: fcmovnbe st(0), st(1) */ if (!(fC || fZ)) ST(0) = ST(1);
    /* 0087a06e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a070: fstp dword ptr [esi + ecx*4] */ W_F32((u32)(r_esi+r_ecx*4), ST(0)); FPOP();
    /* 0087a073: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087a074: lea eax, [edx + ecx] */ r_eax = (u32)(r_edx+r_ecx);
    /* 0087a077: mov edx, eax */ r_edx = r_eax;
    /* 0087a079: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a07b: fadd dword ptr [0x99ac90] */ ST(0) = ST(0) + R_F32((u32)(0x99ac90u));
    /* 0087a081: sub edx, dword ptr [ebx + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x1cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087a084: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a086: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a088: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_0087a08a:; BB(0x0087a08a);
    /* 0087a08a: mov edi, dword ptr [ebp - 0x48] */ r_edi = R32((u32)(r_ebp+0xffffffb8u));
    /* 0087a08d: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087a08f: jl 0x879fff */ if ((fS!=fO)) goto L_00879fff;
L_0087a095:; BB(0x0087a095);
    /* 0087a095: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 0087a098: mov eax, edi */ r_eax = r_edi;
    /* 0087a09a: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0087a09c: fld dword ptr [0x99ac90] */ FPUSH(R_F32((u32)(0x99ac90u)));
    /* 0087a0a2: jge 0x87a32a */ if ((fS==fO)) goto L_0087a32a;
L_0087a0a8:; BB(0x0087a0a8);
    /* 0087a0a8: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0087a0aa: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087a0ac: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0087a0af: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087a0b2: jb 0x87a2dc */ if (fC) goto L_0087a2dc;
L_0087a0b8:; BB(0x0087a0b8);
    /* 0087a0b8: mov edx, eax */ r_edx = r_eax;
    /* 0087a0ba: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087a0bc: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087a0be: add ecx, dword ptr [ebx + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087a0c1: mov esi, ecx */ r_esi = r_ecx;
    /* 0087a0c3: and esi, 0xf */ {  u32 a = r_esi; u32 b = 0xfu; u32 r = (a & b) & 0xffffffffu; r_esi = r; fZ = (r == 0); }
    /* 0087a0c6: je 0x87a128 */ if (fZ) goto L_0087a128;
L_0087a0c8:; BB(0x0087a0c8);
    /* 0087a0c8: test esi, 3 */ {  u32 a = r_esi; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087a0ce: jne 0x87a334 */ if (!fZ) goto L_0087a334;
L_0087a0d4:; BB(0x0087a0d4);
    /* 0087a0d4: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 0087a0d6: add esi, 0x10 */ {  u32 a = r_esi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0087a0d9: shr esi, 2 */ { u32 c = (2u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0087a0dc: sub edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087a0de: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 0087a0e1: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
    /* 0087a0e4: jmp 0x87a0ea */ goto L_0087a0ea;
L_0087a0e6:; BB(0x0087a0e6);
    /* 0087a0e6: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
L_0087a0ea:; BB(0x0087a0ea);
    /* 0087a0ea: mov dword ptr [ebp - 0x90], edi */ W32((u32)(r_ebp+0xffffff70u), r_edi);
    /* 0087a0f0: mov eax, edi */ r_eax = r_edi;
    /* 0087a0f2: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0087a0f5: fild dword ptr [ebp - 0x90] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff70u)));
    /* 0087a0fb: fadd dword ptr [eax*4 + 0x99ab60] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x99ab60u));
    /* 0087a102: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0087a104: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0087a106: fadd st(6) */ ST(0) = ST(0) + ST(6);
    /* 0087a108: fdiv st(5) */ ST(0) = ST(0) / ST(5);
    /* 0087a10a: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0087a10c: fld dword ptr [ecx + edi*4] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4)));
    /* 0087a10f: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087a111: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087a113: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087a114: fcmovnbe st(0), st(1) */ if (!(fC || fZ)) ST(0) = ST(1);
    /* 0087a116: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a118: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087a119: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087a11b: jb 0x87a0e6 */ if (fC) goto L_0087a0e6;
L_0087a11d:; BB(0x0087a11d);
    /* 0087a11d: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
    /* 0087a121: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a123: fstp dword ptr [ebp - 0x54] */ W_F32((u32)(r_ebp+0xffffffacu), ST(0)); FPOP();
    /* 0087a126: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087a128:; BB(0x0087a128);
    /* 0087a128: and edx, 7 */ {  u32 a = r_edx; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0087a12b: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087a12d: movaps xmm3, xmmword ptr [0x99a840] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x99a840u), 16); xmm[3] = s; }
    /* 0087a134: add edx, dword ptr [ebp - 0x48] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebp+0xffffffb8u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087a137: mov esi, edi */ r_esi = r_edi;
    /* 0087a139: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0087a13c: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a13e: fst dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0));
    /* 0087a144: movss xmm2, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[2].d[0] = v; xmm[2].d[1] = 0; xmm[2].d[2] = 0; xmm[2].d[3] = 0; }
    /* 0087a14c: shufps xmm2, xmm2, 0 */ { XMM s = xmm[2]; u32 lo = xmm[2].d[0]; u32 lo2 = xmm[2].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[2].d[0] = lo; xmm[2].d[1] = lo2; xmm[2].d[2] = hi; xmm[2].d[3] = hi2; }
    /* 0087a150: mov dword ptr [ebp - 0x90], edi */ W32((u32)(r_ebp+0xffffff70u), r_edi);
    /* 0087a156: fild dword ptr [ebp - 0x90] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff70u)));
    /* 0087a15c: fadd dword ptr [esi*4 + 0x99ab60] */ ST(0) = ST(0) + R_F32((u32)(r_esi*4+0x99ab60u));
    /* 0087a163: fadd dword ptr [ebp - 0x54] */ ST(0) = ST(0) + R_F32((u32)(r_ebp+0xffffffacu));
    /* 0087a166: fadd st(4), st(0) */ ST(4) = ST(4) + ST(0);
    /* 0087a168: fld dword ptr [0x99ac8c] */ FPUSH(R_F32((u32)(0x99ac8cu)));
    /* 0087a16e: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 0087a170: fstp dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 0087a176: movss xmm4, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 0087a17e: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0087a180: fstp dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 0087a186: movss xmm5, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 0087a18e: unpcklps xmm5, xmm4 */ { XMM s = xmm[4]; u32 a0 = xmm[5].d[0], a1 = xmm[5].d[1]; xmm[5].d[0] = a0; xmm[5].d[1] = s.d[0]; xmm[5].d[2] = a1; xmm[5].d[3] = s.d[1]; }
    /* 0087a191: fld dword ptr [0x99ac88] */ FPUSH(R_F32((u32)(0x99ac88u)));
    /* 0087a197: fadd st(4) */ ST(0) = ST(0) + ST(4);
    /* 0087a199: fstp dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 0087a19f: movss xmm0, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087a1a7: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a1a9: fstp dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 0087a1af: movss xmm1, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[1].d[0] = v; xmm[1].d[1] = 0; xmm[1].d[2] = 0; xmm[1].d[3] = 0; }
    /* 0087a1b7: unpcklps xmm1, xmm0 */ { XMM s = xmm[0]; u32 a0 = xmm[1].d[0], a1 = xmm[1].d[1]; xmm[1].d[0] = a0; xmm[1].d[1] = s.d[0]; xmm[1].d[2] = a1; xmm[1].d[3] = s.d[1]; }
    /* 0087a1ba: unpcklps xmm1, xmm5 */ { XMM s = xmm[5]; u32 a0 = xmm[1].d[0], a1 = xmm[1].d[1]; xmm[1].d[0] = a0; xmm[1].d[1] = s.d[0]; xmm[1].d[2] = a1; xmm[1].d[3] = s.d[1]; }
    /* 0087a1bd: fst dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0));
    /* 0087a1c3: movss xmm0, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[0].d[0] = v; xmm[0].d[1] = 0; xmm[0].d[2] = 0; xmm[0].d[3] = 0; }
    /* 0087a1cb: shufps xmm0, xmm0, 0 */ { XMM s = xmm[0]; u32 lo = xmm[0].d[0]; u32 lo2 = xmm[0].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[0].d[0] = lo; xmm[0].d[1] = lo2; xmm[0].d[2] = hi; xmm[0].d[3] = hi2; }
    /* 0087a1cf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a1d1: fst dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0));
    /* 0087a1d7: movss xmm4, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[4].d[0] = v; xmm[4].d[1] = 0; xmm[4].d[2] = 0; xmm[4].d[3] = 0; }
    /* 0087a1df: shufps xmm4, xmm4, 0 */ { XMM s = xmm[4]; u32 lo = xmm[4].d[0]; u32 lo2 = xmm[4].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[4].d[0] = lo; xmm[4].d[1] = lo2; xmm[4].d[2] = hi; xmm[4].d[3] = hi2; }
    /* 0087a1e3: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
    /* 0087a1e6: movaps xmmword ptr [ebp - 0x68], xmm4 */ memcpy((void *)(uintptr_t)(u32)(r_ebp+0xffffff98u), &xmm[4], 16);
    /* 0087a1ea: fstp dword ptr [ebp - 0x90] */ W_F32((u32)(r_ebp+0xffffff70u), ST(0)); FPOP();
    /* 0087a1f0: movss xmm5, dword ptr [ebp - 0x90] */ { u32 v = R32((u32)(r_ebp+0xffffff70u)); xmm[5].d[0] = v; xmm[5].d[1] = 0; xmm[5].d[2] = 0; xmm[5].d[3] = 0; }
    /* 0087a1f8: shufps xmm5, xmm5, 0 */ { XMM s = xmm[5]; u32 lo = xmm[5].d[0]; u32 lo2 = xmm[5].d[0]; u32 hi = s.d[0]; u32 hi2 = s.d[0]; xmm[5].d[0] = lo; xmm[5].d[1] = lo2; xmm[5].d[2] = hi; xmm[5].d[3] = hi2; }
    /* 0087a1fc: movaps xmmword ptr [ebp - 0x78], xmm5 */ memcpy((void *)(uintptr_t)(u32)(r_ebp+0xffffff88u), &xmm[5], 16);
L_0087a200:; BB(0x0087a200);
    /* 0087a200: prefetchnta byte ptr [ecx + edi*4 + 0x40] */ ;
    /* 0087a205: movaps xmm5, xmm1 */ { XMM s = xmm[1]; xmm[5] = s; }
    /* 0087a208: mulps xmm5, xmm0 */ { XMM s = xmm[0]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 0087a20b: addps xmm5, xmm2 */ { XMM s = xmm[2]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 0087a20e: movaps xmm7, xmmword ptr [ebp - 0x68] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ebp+0xffffff98u), 16); xmm[7] = s; }
    /* 0087a212: movaps xmm3, xmm7 */ { XMM s = xmm[7]; xmm[3] = s; }
    /* 0087a215: rcpps xmm4, xmm7 */ { XMM s = xmm[7]; xmm[4].fs[0] = 1.0f / s.fs[0]; xmm[4].fs[1] = 1.0f / s.fs[1]; xmm[4].fs[2] = 1.0f / s.fs[2]; xmm[4].fs[3] = 1.0f / s.fs[3]; }
    /* 0087a218: mulps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 0087a21b: mulps xmm3, xmm4 */ { XMM s = xmm[4]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 0087a21e: addps xmm4, xmm4 */ { XMM s = xmm[4]; xmm[4].fs[0] = xmm[4].fs[0] + s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] + s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] + s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] + s.fs[3]; }
    /* 0087a221: subps xmm4, xmm3 */ { XMM s = xmm[3]; xmm[4].fs[0] = xmm[4].fs[0] - s.fs[0]; xmm[4].fs[1] = xmm[4].fs[1] - s.fs[1]; xmm[4].fs[2] = xmm[4].fs[2] - s.fs[2]; xmm[4].fs[3] = xmm[4].fs[3] - s.fs[3]; }
    /* 0087a224: mulps xmm5, xmm4 */ { XMM s = xmm[4]; xmm[5].fs[0] = xmm[5].fs[0] * s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] * s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] * s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] * s.fs[3]; }
    /* 0087a227: movaps xmm6, xmmword ptr [ebp - 0x78] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ebp+0xffffff88u), 16); xmm[6] = s; }
    /* 0087a22b: subps xmm5, xmm6 */ { XMM s = xmm[6]; xmm[5].fs[0] = xmm[5].fs[0] - s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] - s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] - s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] - s.fs[3]; }
    /* 0087a22e: movaps xmm4, xmmword ptr [0x99a840] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(0x99a840u), 16); xmm[4] = s; }
    /* 0087a235: minps xmm5, xmmword ptr [ecx + edi*4] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_edi*4), 16); xmm[5].fs[0] = (xmm[5].fs[0] < s.fs[0]) ? xmm[5].fs[0] : s.fs[0]; xmm[5].fs[1] = (xmm[5].fs[1] < s.fs[1]) ? xmm[5].fs[1] : s.fs[1]; xmm[5].fs[2] = (xmm[5].fs[2] < s.fs[2]) ? xmm[5].fs[2] : s.fs[2]; xmm[5].fs[3] = (xmm[5].fs[3] < s.fs[3]) ? xmm[5].fs[3] : s.fs[3]; }
    /* 0087a239: movaps xmmword ptr [ecx + edi*4], xmm5 */ memcpy((void *)(uintptr_t)(u32)(r_ecx+r_edi*4), &xmm[5], 16);
    /* 0087a23d: addps xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 0087a240: movaps xmm3, xmm0 */ { XMM s = xmm[0]; xmm[3] = s; }
    /* 0087a243: mulps xmm3, xmm1 */ { XMM s = xmm[1]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 0087a246: addps xmm3, xmm2 */ { XMM s = xmm[2]; xmm[3].fs[0] = xmm[3].fs[0] + s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] + s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] + s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] + s.fs[3]; }
    /* 0087a249: rcpps xmm5, xmm7 */ { XMM s = xmm[7]; xmm[5].fs[0] = 1.0f / s.fs[0]; xmm[5].fs[1] = 1.0f / s.fs[1]; xmm[5].fs[2] = 1.0f / s.fs[2]; xmm[5].fs[3] = 1.0f / s.fs[3]; }
    /* 0087a24c: mulps xmm7, xmm5 */ { XMM s = xmm[5]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 0087a24f: mulps xmm7, xmm5 */ { XMM s = xmm[5]; xmm[7].fs[0] = xmm[7].fs[0] * s.fs[0]; xmm[7].fs[1] = xmm[7].fs[1] * s.fs[1]; xmm[7].fs[2] = xmm[7].fs[2] * s.fs[2]; xmm[7].fs[3] = xmm[7].fs[3] * s.fs[3]; }
    /* 0087a252: addps xmm5, xmm5 */ { XMM s = xmm[5]; xmm[5].fs[0] = xmm[5].fs[0] + s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] + s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] + s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] + s.fs[3]; }
    /* 0087a255: subps xmm5, xmm7 */ { XMM s = xmm[7]; xmm[5].fs[0] = xmm[5].fs[0] - s.fs[0]; xmm[5].fs[1] = xmm[5].fs[1] - s.fs[1]; xmm[5].fs[2] = xmm[5].fs[2] - s.fs[2]; xmm[5].fs[3] = xmm[5].fs[3] - s.fs[3]; }
    /* 0087a258: mulps xmm3, xmm5 */ { XMM s = xmm[5]; xmm[3].fs[0] = xmm[3].fs[0] * s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] * s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] * s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] * s.fs[3]; }
    /* 0087a25b: subps xmm3, xmm6 */ { XMM s = xmm[6]; xmm[3].fs[0] = xmm[3].fs[0] - s.fs[0]; xmm[3].fs[1] = xmm[3].fs[1] - s.fs[1]; xmm[3].fs[2] = xmm[3].fs[2] - s.fs[2]; xmm[3].fs[3] = xmm[3].fs[3] - s.fs[3]; }
    /* 0087a25e: addps xmm1, xmm4 */ { XMM s = xmm[4]; xmm[1].fs[0] = xmm[1].fs[0] + s.fs[0]; xmm[1].fs[1] = xmm[1].fs[1] + s.fs[1]; xmm[1].fs[2] = xmm[1].fs[2] + s.fs[2]; xmm[1].fs[3] = xmm[1].fs[3] + s.fs[3]; }
    /* 0087a261: minps xmm3, xmmword ptr [ecx + edi*4 + 0x10] */ { XMM s; memcpy(&s, (void *)(uintptr_t)(u32)(r_ecx+r_edi*4+0x10u), 16); xmm[3].fs[0] = (xmm[3].fs[0] < s.fs[0]) ? xmm[3].fs[0] : s.fs[0]; xmm[3].fs[1] = (xmm[3].fs[1] < s.fs[1]) ? xmm[3].fs[1] : s.fs[1]; xmm[3].fs[2] = (xmm[3].fs[2] < s.fs[2]) ? xmm[3].fs[2] : s.fs[2]; xmm[3].fs[3] = (xmm[3].fs[3] < s.fs[3]) ? xmm[3].fs[3] : s.fs[3]; }
    /* 0087a266: movaps xmmword ptr [ecx + edi*4 + 0x10], xmm3 */ memcpy((void *)(uintptr_t)(u32)(r_ecx+r_edi*4+0x10u), &xmm[3], 16);
    /* 0087a26b: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087a26e: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0087a270: jb 0x87a200 */ if (fC) goto L_0087a200;
L_0087a272:; BB(0x0087a272);
    /* 0087a272: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0087a275: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0087a277: jae 0x87a33d */ if (!fC) goto L_0087a33d;
L_0087a27d:; BB(0x0087a27d);
    /* 0087a27d: mov edx, eax */ r_edx = r_eax;
    /* 0087a27f: fld dword ptr [ebp - 0x54] */ FPUSH(R_F32((u32)(r_ebp+0xffffffacu)));
    /* 0087a282: fld dword ptr [ebp - 0x4c] */ FPUSH(R_F32((u32)(r_ebp+0xffffffb4u)));
    /* 0087a285: jmp 0x87a28b */ goto L_0087a28b;
L_0087a287:; BB(0x0087a287);
    /* 0087a287: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
L_0087a28b:; BB(0x0087a28b);
    /* 0087a28b: mov dword ptr [ebp - 0x90], edi */ W32((u32)(r_ebp+0xffffff70u), r_edi);
    /* 0087a291: mov esi, edi */ r_esi = r_edi;
    /* 0087a293: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 0087a296: fild dword ptr [ebp - 0x90] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffff70u)));
    /* 0087a29c: fadd dword ptr [esi*4 + 0x99ab60] */ ST(0) = ST(0) + R_F32((u32)(r_esi*4+0x99ab60u));
    /* 0087a2a3: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0087a2a5: fmul st(4) */ ST(0) = ST(0) * ST(4);
    /* 0087a2a7: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 0087a2a9: fdiv st(3) */ ST(0) = ST(0) / ST(3);
    /* 0087a2ab: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0087a2ad: fld dword ptr [ecx + edi*4] */ FPUSH(R_F32((u32)(r_ecx+r_edi*4)));
    /* 0087a2b0: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 0087a2b2: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0087a2b4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0087a2b5: fcmovnbe st(0), st(1) */ if (!(fC || fZ)) ST(0) = ST(1);
    /* 0087a2b7: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a2b9: inc edi */ { u32 x = r_edi; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0087a2ba: cmp edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0087a2bc: jb 0x87a287 */ if (fC) goto L_0087a287;
L_0087a2be:; BB(0x0087a2be);
    /* 0087a2be: fstp dword ptr [ecx + edi*4 - 4] */ W_F32((u32)(r_ecx+r_edi*4+0xfffffffcu), ST(0)); FPOP();
    /* 0087a2c2: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a2c4: fstp st(3) */ ST(3) = ST(0); FPOP();
    /* 0087a2c6: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a2c8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a2ca: fstp st(0) */ ST(0) = ST(0); FPOP();
L_0087a2cc:; BB(0x0087a2cc);
    /* 0087a2cc: mov esi, dword ptr [ebp - 0x50] */ r_esi = R32((u32)(r_ebp+0xffffffb0u));
    /* 0087a2cf: mov edi, dword ptr [ebp - 0x88] */ r_edi = R32((u32)(r_ebp+0xffffff78u));
    /* 0087a2d5: mov esp, ebp */ r_esp = r_ebp;
    /* 0087a2d7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087a2d8: mov esp, ebx */ r_esp = r_ebx;
    /* 0087a2da: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0087a2db: ret  */ FN_RET(0x00879b40); r_esp += 4; return;
L_0087a2dc:; BB(0x0087a2dc);
    /* 0087a2dc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a2de: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087a2e0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087a2e2: add ecx, dword ptr [ebx + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087a2e5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a2e7: jmp 0x87a27d */ goto L_0087a27d;
L_0087a2e9:; BB(0x0087a2e9);
    /* 0087a2e9: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087a2eb: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087a2ed: add ecx, dword ptr [ebx + 0x14] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_ebx+0x14u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087a2f0: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0087a2f2: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087a2f4: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a2f6: jmp 0x879ec5 */ goto L_00879ec5;
L_0087a30c:; BB(0x0087a30c);
    /* 0087a30c: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a30e: jmp 0x879f15 */ goto L_00879f15;
L_0087a313:; BB(0x0087a313);
    /* 0087a313: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a315: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 0087a317: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a319: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0087a31b: jmp 0x879f15 */ goto L_00879f15;
L_0087a320:; BB(0x0087a320);
    /* 0087a320: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a322: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0087a324: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a326: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a328: jmp 0x87a2cc */ goto L_0087a2cc;
L_0087a32a:; BB(0x0087a32a);
    /* 0087a32a: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a32c: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0087a32e: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0087a330: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a332: jmp 0x87a2cc */ goto L_0087a2cc;
L_0087a334:; BB(0x0087a334);
    /* 0087a334: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a336: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0087a338: jmp 0x87a27d */ goto L_0087a27d;
L_0087a33d:; BB(0x0087a33d);
    /* 0087a33d: fstp st(2) */ ST(2) = ST(0); FPOP();
    /* 0087a33f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a341: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0087a343: jmp 0x87a2cc */ goto L_0087a2cc;
}

