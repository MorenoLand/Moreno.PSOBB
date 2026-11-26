#include "protos.h"

void f_00632060(void) /* sub_632060 */
{
    FN_ENTER(0x00632060);
    /* 00632060: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00632061: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632062: mov esi, ecx */ r_esi = r_ecx;
    /* 00632064: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00632068: movsx eax, word ptr [ebx] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx));
    /* 0063206b: mov dword ptr [esi + 0xac], eax */ W32((u32)(r_esi+0xacu), r_eax);
    /* 00632071: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632074: jne 0x63208e */ if (!fZ) goto L_0063208e;
L_00632076:; BB(0x00632076);
    /* 00632076: push dword ptr [esi + 0xd0] */ { u32 v = R32((u32)(r_esi+0xd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063207c: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x632081u); f_006bb100();
    /* 00632081: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632082: mov dword ptr [esi + 0xc8], 1 */ W32((u32)(r_esi+0xc8u), 0x1u);
    /* 0063208c: jmp 0x6320b2 */ goto L_006320b2;
L_0063208e:; BB(0x0063208e);
    /* 0063208e: push dword ptr [esi + 0xd0] */ { u32 v = R32((u32)(r_esi+0xd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00632094: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x632099u); f_006bb254();
    /* 00632099: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063209a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063209c: je 0x6320b2 */ if (fZ) goto L_006320b2;
L_0063209e:; BB(0x0063209e);
    /* 0063209e: mov dword ptr [esi + 0xac], 2 */ W32((u32)(r_esi+0xacu), 0x2u);
    /* 006320a8: mov dword ptr [esi + 0xc8], 1 */ W32((u32)(r_esi+0xc8u), 0x1u);
L_006320b2:; BB(0x006320b2);
    /* 006320b2: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 006320b4: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6320b9u); f_006bb254();
    /* 006320b9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006320ba: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006320bc: je 0x6320de */ if (fZ) goto L_006320de;
L_006320be:; BB(0x006320be);
    /* 006320be: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 006320c0: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6320c5u); f_006bb254();
    /* 006320c5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006320c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006320c8: je 0x6320de */ if (fZ) goto L_006320de;
L_006320ca:; BB(0x006320ca);
    /* 006320ca: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 006320cc: call 0x6bb254 */ r_esp -= 4; W32(r_esp, 0x6320d1u); f_006bb254();
    /* 006320d1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006320d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006320d4: je 0x6320de */ if (fZ) goto L_006320de;
L_006320d6:; BB(0x006320d6);
    /* 006320d6: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 006320d8: call 0x6bb100 */ r_esp -= 4; W32(r_esp, 0x6320ddu); f_006bb100();
    /* 006320dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_006320de:; BB(0x006320de);
    /* 006320de: mov eax, dword ptr [esi + 0x80] */ r_eax = R32((u32)(r_esi+0x80u));
    /* 006320e4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006320e6: je 0x63210e */ if (fZ) goto L_0063210e;
L_006320e8:; BB(0x006320e8);
    /* 006320e8: movsx ecx, word ptr [eax + 4] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_eax+0x4u));
    /* 006320ec: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006320ee: jl 0x63210e */ if ((fS!=fO)) goto L_0063210e;
L_006320f0:; BB(0x006320f0);
    /* 006320f0: cmp ecx, 0xb9f */ {  u32 a = r_ecx; u32 b = 0xb9fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006320f6: jg 0x63210e */ if ((!fZ&&fS==fO)) goto L_0063210e;
L_006320f8:; BB(0x006320f8);
    /* 006320f8: mov edx, dword ptr [0xab02bc] */ r_edx = R32((u32)(0xab02bcu));
    /* 006320fe: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00632101: mov word ptr [edx + ecx*4], ax */ W16((u32)(r_edx+r_ecx*4), (u16)r_eax);
    /* 00632105: movzx ebx, word ptr [ebx + 2] */ r_ebx = (u32)R16((u32)(r_ebx+0x2u));
    /* 00632109: mov word ptr [edx + ecx*4 + 2], bx */ W16((u32)(r_edx+r_ecx*4+0x2u), (u16)r_ebx);
L_0063210e:; BB(0x0063210e);
    /* 0063210e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0063210f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00632110: ret 8 */ FN_RET(0x00632060); r_esp += 12; return;
}

void f_00632114(void) /* sub_632114 */
{
    FN_ENTER(0x00632114);
    /* 00632114: mov dword ptr [0xa8f004], 0x3f800000 */ W32((u32)(0xa8f004u), 0x3f800000u);
    /* 0063211e: mov dword ptr [0xa8f008], 0x41000000 */ W32((u32)(0xa8f008u), 0x41000000u);
    /* 00632128: mov dword ptr [0xa8f00c], 0x3fc00000 */ W32((u32)(0xa8f00cu), 0x3fc00000u);
    /* 00632132: ret  */ FN_RET(0x00632114); r_esp += 4; return;
}

void f_00632134(void) /* sub_632134 */
{
    FN_ENTER(0x00632134);
    /* 00632134: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632135: mov ebp, esp */ r_ebp = r_esp;
    /* 00632137: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00632139: push 0x8e3a3e */ { u32 v = 0x8e3a3eu; r_esp -= 4; W32(r_esp, v); }
    /* 0063213e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00632144: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632145: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063214c: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063214f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00632152: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00632155: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00632158: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063215b: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x632160u); f_00807ac0();
    /* 00632160: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632163: jne 0x6321b8 */ if (!fZ) goto L_006321b8;
L_00632165:; BB(0x00632165);
    /* 00632165: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
    /* 0063216c: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00632171: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x632176u); f_008581c5();
    /* 00632176: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632177: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0063217a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063217c: je 0x632265 */ if (fZ) goto L_00632265;
L_00632182:; BB(0x00632182);
    /* 00632182: mov dword ptr [ebp - 0x20], 1 */ W32((u32)(r_ebp+0xffffffe0u), 0x1u);
    /* 00632189: mov dword ptr [ebp - 4], 2 */ W32((u32)(r_ebp+0xfffffffcu), 0x2u);
    /* 00632190: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00632193: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00632195: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632196: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632197: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632198: push 0x9c6134 */ { u32 v = 0x9c6134u; r_esp -= 4; W32(r_esp, v); }
    /* 0063219d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0063219f: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6321a4u); f_005b7a84();
    /* 006321a4: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006321a7: mov dword ptr [ebp - 0x20], 0 */ W32((u32)(r_ebp+0xffffffe0u), 0x0u);
L_006321ae:; BB(0x006321ae);
    /* 006321ae: mov dword ptr [0xa8f010], eax */ W32((u32)(0xa8f010u), r_eax);
    /* 006321b3: jmp 0x632257 */ goto L_00632257;
L_006321b8:; BB(0x006321b8);
    /* 006321b8: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006321bb: jne 0x63220d */ if (!fZ) goto L_0063220d;
L_006321bd:; BB(0x006321bd);
    /* 006321bd: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006321c4: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006321c9: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6321ceu); f_008581c5();
    /* 006321ce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006321cf: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006321d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006321d4: je 0x63226c */ if (fZ) goto L_0063226c;
L_006321da:; BB(0x006321da);
    /* 006321da: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006321e1: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006321e8: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 006321eb: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006321ed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006321ee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006321ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006321f0: push 0x9c614c */ { u32 v = 0x9c614cu; r_esp -= 4; W32(r_esp, v); }
    /* 006321f5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 006321f7: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6321fcu); f_005b7a84();
    /* 006321fc: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 006321ff: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00632206:; BB(0x00632206);
    /* 00632206: mov dword ptr [0xa8f010], eax */ W32((u32)(0xa8f010u), r_eax);
    /* 0063220b: jmp 0x632257 */ goto L_00632257;
L_0063220d:; BB(0x0063220d);
    /* 0063220d: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 00632214: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00632219: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x63221eu); f_008581c5();
    /* 0063221e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063221f: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00632222: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632224: je 0x632270 */ if (fZ) goto L_00632270;
L_00632226:; BB(0x00632226);
    /* 00632226: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 0063222d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00632234: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00632237: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00632239: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063223a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063223b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063223c: push 0x9c611c */ { u32 v = 0x9c611cu; r_esp -= 4; W32(r_esp, v); }
    /* 00632241: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00632243: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x632248u); f_005b7a84();
    /* 00632248: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0063224b: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00632252:; BB(0x00632252);
    /* 00632252: mov dword ptr [0xa8f010], eax */ W32((u32)(0xa8f010u), r_eax);
L_00632257:; BB(0x00632257);
    /* 00632257: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063225a: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00632261: mov esp, ebp */ r_esp = r_ebp;
    /* 00632263: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632264: ret  */ FN_RET(0x00632134); r_esp += 4; return;
L_00632265:; BB(0x00632265);
    /* 00632265: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00632267: jmp 0x6321ae */ goto L_006321ae;
L_0063226c:; BB(0x0063226c);
    /* 0063226c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0063226e: jmp 0x632206 */ goto L_00632206;
L_00632270:; BB(0x00632270);
    /* 00632270: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00632272: jmp 0x632252 */ goto L_00632252;
}

void f_00632274(void) /* sub_632274 */
{
    FN_ENTER(0x00632274);
    /* 00632274: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632275: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00632277: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00632279: call 0x632298 */ r_esp -= 4; W32(r_esp, 0x63227eu); f_00632298();
    /* 0063227e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00632282: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00632284: jne 0x63228a */ if (!fZ) goto L_0063228a;
L_00632286:; BB(0x00632286);
    /* 00632286: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632287: ret 4 */ FN_RET(0x00632274); r_esp += 8; return;
L_0063228a:; BB(0x0063228a);
    /* 0063228a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0063228b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x632290u); f_005c2f74();
    /* 00632290: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632291: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632292: ret 4 */ FN_RET(0x00632274); r_esp += 8; return;
}

void f_00632298(void) /* sub_632298 */
{
    FN_ENTER(0x00632298);
    /* 00632298: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632299: mov ebp, esp */ r_ebp = r_esp;
    /* 0063229b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063229d: push 0x8e3a58 */ { u32 v = 0x8e3a58u; r_esp -= 4; W32(r_esp, v); }
    /* 006322a2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006322a8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006322a9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006322b0: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006322b3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006322b6: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006322b9: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006322bc: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006322bf: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 006322c2: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006322c5: mov dword ptr [ecx], 0xb2b2d0 */ W32((u32)(r_ecx), 0xb2b2d0u);
    /* 006322cb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006322d2: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x6322d7u); f_006131f4();
    /* 006322d7: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006322da: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006322e1: mov esp, ebp */ r_esp = r_ebp;
    /* 006322e3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006322e4: ret  */ FN_RET(0x00632298); r_esp += 4; return;
}

void f_006322e8(void) /* sub_6322E8 */
{
    FN_ENTER(0x006322e8);
    /* 006322e8: mov ecx, dword ptr [0xa8f024] */ r_ecx = R32((u32)(0xa8f024u));
    /* 006322ee: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006322f0: je 0x632305 */ if (fZ) goto L_00632305;
L_006322f2:; BB(0x006322f2);
    /* 006322f2: je 0x6322fb */ if (fZ) goto L_006322fb;
L_006322f4:; BB(0x006322f4);
    /* 006322f4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006322f6: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x6322fbu); f_004066a8();
L_006322fb:; BB(0x006322fb);
    /* 006322fb: mov dword ptr [0xa8f024], 0 */ W32((u32)(0xa8f024u), 0x0u);
L_00632305:; BB(0x00632305);
    /* 00632305: ret  */ FN_RET(0x006322e8); r_esp += 4; return;
}

void f_00632308(void)
{
    FN_ENTER(0x00632308);
    /* 00632308: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632309: mov ebp, esp */ r_ebp = r_esp;
    /* 0063230b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0063230d: push 0x8e3a80 */ { u32 v = 0x8e3a80u; r_esp -= 4; W32(r_esp, v); }
    /* 00632312: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00632318: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632319: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00632320: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00632323: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00632326: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00632329: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 0063232c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063232f: push 0xe0 */ { u32 v = 0xe0u; r_esp -= 4; W32(r_esp, v); }
    /* 00632334: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063233b: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x632340u); f_005caba4();
    /* 00632340: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632341: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00632344: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632346: je 0x63237f */ if (fZ) goto L_0063237f;
L_00632348:; BB(0x00632348);
    /* 00632348: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063234f: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00632356: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00632359: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063235f: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632362: call 0x632384 */ r_esp -= 4; W32(r_esp, 0x632367u); f_00632384();
    /* 00632367: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0063236a: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00632371:; BB(0x00632371);
    /* 00632371: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632374: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063237b: mov esp, ebp */ r_esp = r_ebp;
    /* 0063237d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063237e: ret  */ FN_RET(0x00632308); r_esp += 4; return;
L_0063237f:; BB(0x0063237f);
    /* 0063237f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00632381: jmp 0x632371 */ goto L_00632371;
}

void f_00632384(void) /* sub_632384 */
{
    FN_ENTER(0x00632384);
    /* 00632384: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632385: mov ebp, esp */ r_ebp = r_esp;
    /* 00632387: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00632389: push 0x8e3a9c */ { u32 v = 0x8e3a9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063238e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00632394: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632395: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063239c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063239f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006323a2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006323a5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006323a8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006323ab: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006323ae: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006323b1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006323b4: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006323b7: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x6323bcu); f_006132e4();
    /* 006323bc: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006323c3: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006323c6: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 006323c9: mov dword ptr [ecx], 0xb2b2d0 */ W32((u32)(r_ecx), 0xb2b2d0u);
    /* 006323cf: mov eax, dword ptr [0x9c61a4] */ r_eax = R32((u32)(0x9c61a4u));
    /* 006323d4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006323d5: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 006323d8: call dword ptr [0xb2b2e4] */ { u32 t = R32((u32)(0xb2b2e4u)); r_esp -= 4; W32(r_esp, 0x6323deu); call_ind(t); }
    /* 006323de: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006323e1: mov ebx, dword ptr [0xa8f024] */ r_ebx = R32((u32)(0xa8f024u));
    /* 006323e7: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 006323ed: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 006323f0: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 006323f3: mov esi, dword ptr [ebx + 0x42c] */ r_esi = R32((u32)(r_ebx+0x42cu));
    /* 006323f9: mov edi, dword ptr [esi + 0xc] */ r_edi = R32((u32)(r_esi+0xcu));
    /* 006323fc: mov dword ptr [ecx + 0xc0], 0x43c80000 */ W32((u32)(r_ecx+0xc0u), 0x43c80000u);
    /* 00632406: mov dword ptr [ecx + 0x24], edi */ W32((u32)(r_ecx+0x24u), r_edi);
    /* 00632409: mov dword ptr [ecx + 0xc4], 0x471c4000 */ W32((u32)(r_ecx+0xc4u), 0x471c4000u);
    /* 00632413: mov dword ptr [ecx + 0xcc], 0 */ W32((u32)(r_ecx+0xccu), 0x0u);
    /* 0063241d: call 0x632440 */ r_esp -= 4; W32(r_esp, 0x632422u); f_00632440();
    /* 00632422: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00632425: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632428: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 0063242b: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0063242e: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632431: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00632438: mov esp, ebp */ r_esp = r_ebp;
    /* 0063243a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0063243b: ret 8 */ FN_RET(0x00632384); r_esp += 12; return;
}

void f_00632440(void) /* sub_632440 */
{
    FN_ENTER(0x00632440);
    /* 00632440: fild dword ptr [ecx + 0x84] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x84u)));
    /* 00632446: fdiv dword ptr [0x932fbc] */ ST(0) = ST(0) / R_F32((u32)(0x932fbcu));
    /* 0063244c: fild dword ptr [ecx + 0x8c] */ FPUSH((long double)(i32)R32((u32)(r_ecx+0x8cu)));
    /* 00632452: fadd dword ptr [0x932fb0] */ ST(0) = ST(0) + R_F32((u32)(0x932fb0u));
    /* 00632458: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0063245a: fadd dword ptr [0x932fb8] */ ST(0) = ST(0) + R_F32((u32)(0x932fb8u));
    /* 00632460: fdivr dword ptr [0x932fb4] */ ST(0) = R_F32((u32)(0x932fb4u)) / ST(0);
    /* 00632466: mov eax, dword ptr [ecx + 0x68] */ r_eax = R32((u32)(r_ecx+0x68u));
    /* 00632469: mov edx, dword ptr [ecx + 0x6c] */ r_edx = R32((u32)(r_ecx+0x6cu));
    /* 0063246c: fstp dword ptr [ecx + 0xc8] */ W_F32((u32)(r_ecx+0xc8u), ST(0)); FPOP();
    /* 00632472: fstp dword ptr [ecx + 0xd0] */ W_F32((u32)(r_ecx+0xd0u), ST(0)); FPOP();
    /* 00632478: mov dword ptr [ecx + 0xd4], eax */ W32((u32)(r_ecx+0xd4u), r_eax);
    /* 0063247e: mov eax, dword ptr [ecx + 0x70] */ r_eax = R32((u32)(r_ecx+0x70u));
    /* 00632481: mov dword ptr [ecx + 0xd8], edx */ W32((u32)(r_ecx+0xd8u), r_edx);
    /* 00632487: mov dword ptr [ecx + 0xdc], eax */ W32((u32)(r_ecx+0xdcu), r_eax);
    /* 0063248d: ret  */ FN_RET(0x00632440); r_esp += 4; return;
}

void f_00632490(void) /* sub_632490 */
{
    FN_ENTER(0x00632490);
    /* 00632490: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632491: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00632493: push dword ptr [ebx + 0xd0] */ { u32 v = R32((u32)(r_ebx+0xd0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00632499: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0063249b: call 0x632678 */ r_esp -= 4; W32(r_esp, 0x6324a0u); f_00632678();
    /* 006324a0: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006324a3: je 0x632509 */ if (fZ) goto L_00632509;
L_006324a5:; BB(0x006324a5);
    /* 006324a5: mov eax, 1 */ r_eax = 0x1u;
L_006324aa:; BB(0x006324aa);
    /* 006324aa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006324ad: jne 0x6324d6 */ if (!fZ) goto L_006324d6;
L_006324af:; BB(0x006324af);
    /* 006324af: fld dword ptr [0x932fa8] */ FPUSH(R_F32((u32)(0x932fa8u)));
    /* 006324b5: fld dword ptr [ebx + 0xcc] */ FPUSH(R_F32((u32)(r_ebx+0xccu)));
    /* 006324bb: fadd dword ptr [ebx + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0xc8u));
    /* 006324c1: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006324c3: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006324c5: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006324c6: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006324c8: jb 0x6324cc */ if (fC) goto L_006324cc;
L_006324ca:; BB(0x006324ca);
    /* 006324ca: fst st(1) */ ST(1) = ST(0);
L_006324cc:; BB(0x006324cc);
    /* 006324cc: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006324ce: fstp dword ptr [ebx + 0xcc] */ W_F32((u32)(r_ebx+0xccu), ST(0)); FPOP();
    /* 006324d4: jmp 0x632500 */ goto L_00632500;
L_006324d6:; BB(0x006324d6);
    /* 006324d6: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006324d9: jne 0x632500 */ if (!fZ) goto L_00632500;
L_006324db:; BB(0x006324db);
    /* 006324db: fld dword ptr [0x932fac] */ FPUSH(R_F32((u32)(0x932facu)));
    /* 006324e1: fld dword ptr [ebx + 0xcc] */ FPUSH(R_F32((u32)(r_ebx+0xccu)));
    /* 006324e7: fsub dword ptr [ebx + 0xc8] */ ST(0) = ST(0) - R_F32((u32)(r_ebx+0xc8u));
    /* 006324ed: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006324ef: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006324f1: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006324f2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006324f4: ja 0x6324f8 */ if ((!fC&&!fZ)) goto L_006324f8;
L_006324f6:; BB(0x006324f6);
    /* 006324f6: fst st(1) */ ST(1) = ST(0);
L_006324f8:; BB(0x006324f8);
    /* 006324f8: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 006324fa: fstp dword ptr [ebx + 0xcc] */ W_F32((u32)(r_ebx+0xccu), ST(0)); FPOP();
L_00632500:; BB(0x00632500);
    /* 00632500: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00632502: call 0x61345c */ r_esp -= 4; W32(r_esp, 0x632507u); f_0061345c();
    /* 00632507: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632508: ret  */ FN_RET(0x00632490); r_esp += 4; return;
L_00632509:; BB(0x00632509);
    /* 00632509: mov eax, 2 */ r_eax = 0x2u;
    /* 0063250e: jmp 0x6324aa */ goto L_006324aa;
}

void f_00632510(void) /* sub_632510 */
{
    FN_ENTER(0x00632510);
    /* 00632510: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632511: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00632514: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00632516: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 00632519: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0063251b: push dword ptr [ebp + 0xc4] */ { u32 v = R32((u32)(r_ebp+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00632521: push dword ptr [ebp + 0xc0] */ { u32 v = R32((u32)(r_ebp+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00632527: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x63252au); call_ind(t); }
    /* 0063252a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063252c: je 0x6325e4 */ if (fZ) goto L_006325e4;
L_00632532:; BB(0x00632532);
    /* 00632532: fld dword ptr [0x932fa4] */ FPUSH(R_F32((u32)(0x932fa4u)));
    /* 00632538: fcomp dword ptr [ebp + 0xcc] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xccu))); FPOP();
    /* 0063253e: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00632540: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00632541: jae 0x6325e4 */ if (!fC) goto L_006325e4;
L_00632547:; BB(0x00632547);
    /* 00632547: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x63254cu); f_0082dbac();
    /* 0063254c: mov ecx, dword ptr [ebp + 0x24] */ r_ecx = R32((u32)(r_ebp+0x24u));
    /* 0063254f: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x632554u); f_00829cc8();
    /* 00632554: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00632559: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 00632561: mov dword ptr [0xaab518], eax */ W32((u32)(0xaab518u), r_eax);
    /* 00632566: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 0063256e: or eax, 0x20 */ {  u32 a = r_eax; u32 b = 0x20u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00632571: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00632576: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 0063257e: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x632583u); f_004f7c84();
    /* 00632583: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632586: je 0x6325e9 */ if (fZ) goto L_006325e9;
L_00632588:; BB(0x00632588);
    /* 00632588: mov eax, dword ptr [ebp + 0xcc] */ r_eax = R32((u32)(r_ebp+0xccu));
    /* 0063258e: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
L_00632591:; BB(0x00632591);
    /* 00632591: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00632594: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632595: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x63259au); f_0082d710();
    /* 0063259a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063259b: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6325a0u); f_0082d7b0();
    /* 006325a0: lea ecx, [ebp + 0x38] */ r_ecx = (u32)(r_ebp+0x38u);
    /* 006325a3: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6325a8u); f_0082d838();
    /* 006325a8: mov edx, dword ptr [ebp + 0x60] */ r_edx = R32((u32)(r_ebp+0x60u));
    /* 006325ab: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006325ad: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6325b2u); f_0082d8bc();
    /* 006325b2: lea ecx, [ebp + 0xd4] */ r_ecx = (u32)(r_ebp+0xd4u);
    /* 006325b8: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x6325bdu); f_00831290();
    /* 006325bd: mov ecx, dword ptr [ebp + 0x34] */ r_ecx = R32((u32)(r_ebp+0x34u));
    /* 006325c0: call 0x831758 */ r_esp -= 4; W32(r_esp, 0x6325c5u); f_00831758();
    /* 006325c5: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6325cau); f_0082da80();
    /* 006325ca: push 0x9ff9b0 */ { u32 v = 0x9ff9b0u; r_esp -= 4; W32(r_esp, v); }
    /* 006325cf: call 0x82d710 */ r_esp -= 4; W32(r_esp, 0x6325d4u); f_0082d710();
    /* 006325d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006325d5: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 006325da: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 006325df: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x6325e4u); f_0082dab0();
L_006325e4:; BB(0x006325e4);
    /* 006325e4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006325e7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006325e8: ret  */ FN_RET(0x00632510); r_esp += 4; return;
L_006325e9:; BB(0x006325e9);
    /* 006325e9: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 006325f0: jmp 0x632591 */ goto L_00632591;
}

void f_006325f4(void) /* sub_6325F4 */
{
    FN_ENTER(0x006325f4);
    /* 006325f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006325f5: mov ebp, esp */ r_ebp = r_esp;
    /* 006325f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006325f9: push 0x8e3ac4 */ { u32 v = 0x8e3ac4u; r_esp -= 4; W32(r_esp, v); }
    /* 006325fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00632604: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632605: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0063260c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0063260f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00632612: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00632615: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00632618: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0063261b: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 00632620: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 00632627: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x63262cu); f_008581c5();
    /* 0063262c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063262d: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00632630: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00632632: je 0x632673 */ if (fZ) goto L_00632673;
L_00632634:; BB(0x00632634);
    /* 00632634: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 0063263b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00632642: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632645: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00632647: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632648: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632649: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063264a: push 0x9c6194 */ { u32 v = 0x9c6194u; r_esp -= 4; W32(r_esp, v); }
    /* 0063264f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00632651: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x632656u); f_005b7a84();
    /* 00632656: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632659: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_00632660:; BB(0x00632660);
    /* 00632660: mov dword ptr [0xa8f024], eax */ W32((u32)(0xa8f024u), r_eax);
    /* 00632665: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632668: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0063266f: mov esp, ebp */ r_esp = r_ebp;
    /* 00632671: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632672: ret  */ FN_RET(0x006325f4); r_esp += 4; return;
L_00632673:; BB(0x00632673);
    /* 00632673: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00632675: jmp 0x632660 */ goto L_00632660;
}

void f_00632678(void) /* sub_632678 */
{
    FN_ENTER(0x00632678);
    /* 00632678: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632679: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0063267b: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 00632682: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632683: call 0x7b4d18 */ r_esp -= 4; W32(r_esp, 0x632688u); f_007b4d18();
    /* 00632688: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632689: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063268b: je 0x6326af */ if (fZ) goto L_006326af;
L_0063268d:; BB(0x0063268d);
    /* 0063268d: add ebx, 0x38 */ {  u32 a = r_ebx; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00632690: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00632693: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632694: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632695: call 0x7a9180 */ r_esp -= 4; W32(r_esp, 0x63269au); f_007a9180();
    /* 0063269a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fO = (((a ^ r) & (b ^ r)) >> 31) & 1; }
    /* 0063269d: fcomp dword ptr [esp + 8] */ fx_compare(ST(0), R_F32((u32)(r_esp+0x8u))); FPOP();
    /* 006326a1: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006326a3: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006326a4: jae 0x6326af */ if (!fC) goto L_006326af;
L_006326a6:; BB(0x006326a6);
    /* 006326a6: mov eax, 1 */ r_eax = 0x1u;
    /* 006326ab: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006326ac: ret 4 */ FN_RET(0x00632678); r_esp += 8; return;
L_006326af:; BB(0x006326af);
    /* 006326af: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006326b1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006326b2: ret 4 */ FN_RET(0x00632678); r_esp += 8; return;
}

void f_006326b8(void) /* sub_6326B8 */
{
    FN_ENTER(0x006326b8);
    /* 006326b8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006326b9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 006326bb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006326bd: call 0x6326dc */ r_esp -= 4; W32(r_esp, 0x6326c2u); f_006326dc();
    /* 006326c2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006326c6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006326c8: jne 0x6326ce */ if (!fZ) goto L_006326ce;
L_006326ca:; BB(0x006326ca);
    /* 006326ca: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006326cb: ret 4 */ FN_RET(0x006326b8); r_esp += 8; return;
L_006326ce:; BB(0x006326ce);
    /* 006326ce: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006326cf: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x6326d4u); f_005c2f74();
    /* 006326d4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006326d5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006326d6: ret 4 */ FN_RET(0x006326b8); r_esp += 8; return;
}

void f_006326dc(void) /* sub_6326DC */
{
    FN_ENTER(0x006326dc);
    /* 006326dc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006326dd: mov ebp, esp */ r_ebp = r_esp;
    /* 006326df: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006326e1: push 0x8e3ae0 */ { u32 v = 0x8e3ae0u; r_esp -= 4; W32(r_esp, v); }
    /* 006326e6: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006326ec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006326ed: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006326f4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006326f7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006326fa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006326fd: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00632700: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00632703: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00632706: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632709: mov dword ptr [ecx], 0xb2b3a0 */ W32((u32)(r_ecx), 0xb2b3a0u);
    /* 0063270f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00632716: call 0x6131f4 */ r_esp -= 4; W32(r_esp, 0x63271bu); f_006131f4();
    /* 0063271b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0063271e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00632725: mov esp, ebp */ r_esp = r_ebp;
    /* 00632727: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632728: ret  */ FN_RET(0x006326dc); r_esp += 4; return;
}

void f_0063272c(void) /* sub_63272C */
{
    FN_ENTER(0x0063272c);
    /* 0063272c: mov ecx, dword ptr [0xa8f030] */ r_ecx = R32((u32)(0xa8f030u));
    /* 00632732: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00632734: je 0x632749 */ if (fZ) goto L_00632749;
L_00632736:; BB(0x00632736);
    /* 00632736: je 0x63273f */ if (fZ) goto L_0063273f;
L_00632738:; BB(0x00632738);
    /* 00632738: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0063273a: call 0x4066a8 */ r_esp -= 4; W32(r_esp, 0x63273fu); f_004066a8();
L_0063273f:; BB(0x0063273f);
    /* 0063273f: mov dword ptr [0xa8f030], 0 */ W32((u32)(0xa8f030u), 0x0u);
L_00632749:; BB(0x00632749);
    /* 00632749: ret  */ FN_RET(0x0063272c); r_esp += 4; return;
}

void f_0063274c(void)
{
    FN_ENTER(0x0063274c);
    /* 0063274c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0063274d: mov ebp, esp */ r_ebp = r_esp;
    /* 0063274f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00632751: push 0x8e3b08 */ { u32 v = 0x8e3b08u; r_esp -= 4; W32(r_esp, v); }
    /* 00632756: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0063275c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0063275d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00632764: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00632767: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0063276a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 0063276d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00632770: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00632773: push 0xd0 */ { u32 v = 0xd0u; r_esp -= 4; W32(r_esp, v); }
    /* 00632778: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 0063277f: call 0x5caba4 */ r_esp -= 4; W32(r_esp, 0x632784u); f_005caba4();
    /* 00632784: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632785: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00632788: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0063278a: je 0x6327c3 */ if (fZ) goto L_006327c3;
L_0063278c:; BB(0x0063278c);
    /* 0063278c: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 00632793: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0063279a: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063279d: push dword ptr [0xaca350] */ { u32 v = R32((u32)(0xaca350u)); r_esp -= 4; W32(r_esp, v); }
    /* 006327a3: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006327a6: call 0x6327c8 */ r_esp -= 4; W32(r_esp, 0x6327abu); f_006327c8();
    /* 006327ab: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006327ae: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006327b5:; BB(0x006327b5);
    /* 006327b5: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006327b8: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006327bf: mov esp, ebp */ r_esp = r_ebp;
    /* 006327c1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006327c2: ret  */ FN_RET(0x0063274c); r_esp += 4; return;
L_006327c3:; BB(0x006327c3);
    /* 006327c3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006327c5: jmp 0x6327b5 */ goto L_006327b5;
}

void f_006327c8(void) /* sub_6327C8 */
{
    FN_ENTER(0x006327c8);
    /* 006327c8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006327c9: mov ebp, esp */ r_ebp = r_esp;
    /* 006327cb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006327cd: push 0x8e3b24 */ { u32 v = 0x8e3b24u; r_esp -= 4; W32(r_esp, v); }
    /* 006327d2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006327d8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006327d9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006327e0: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006327e3: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006327e6: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006327e9: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006327ec: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006327ef: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 006327f2: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006327f5: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 006327f8: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006327fb: call 0x6132e4 */ r_esp -= 4; W32(r_esp, 0x632800u); f_006132e4();
    /* 00632800: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00632807: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0063280a: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0063280d: mov dword ptr [ecx], 0xb2b3a0 */ W32((u32)(r_ecx), 0xb2b3a0u);
    /* 00632813: mov eax, dword ptr [0x9c61c8] */ r_eax = R32((u32)(0x9c61c8u));
    /* 00632818: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00632819: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0063281c: call dword ptr [0xb2b3b4] */ { u32 t = R32((u32)(0xb2b3b4u)); r_esp -= 4; W32(r_esp, 0x632822u); call_ind(t); }
    /* 00632822: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00632825: mov ebx, dword ptr [0xa8f030] */ r_ebx = R32((u32)(0xa8f030u));
    /* 0063282b: mov eax, dword ptr [ebx + 0x42c] */ r_eax = R32((u32)(r_ebx+0x42cu));
    /* 00632831: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00632834: fld dword ptr [ecx + 0x68] */ FPUSH(R_F32((u32)(r_ecx+0x68u)));
    /* 00632837: fmul dword ptr [0x933018] */ ST(0) = ST(0) * R_F32((u32)(0x933018u));
    /* 0063283d: fdiv dword ptr [0x933014] */ ST(0) = ST(0) / R_F32((u32)(0x933014u));
    /* 00632843: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 00632846: mov edi, dword ptr [ebx + 0x42c] */ r_edi = R32((u32)(r_ebx+0x42cu));
    /* 0063284c: mov esi, dword ptr [edi + 0xc] */ r_esi = R32((u32)(r_edi+0xcu));
    /* 0063284f: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632852: mov dword ptr [ecx + 0x24], esi */ W32((u32)(r_ecx+0x24u), r_esi);
    /* 00632855: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00632858: mov eax, dword ptr [ebx + 0x430] */ r_eax = R32((u32)(r_ebx+0x430u));
    /* 0063285e: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00632861: mov dword ptr [ecx + 0xb8], 0x3f4ccccd */ W32((u32)(r_ecx+0xb8u), 0x3f4ccccdu);
    /* 0063286b: mov dword ptr [ecx + 0xbc], eax */ W32((u32)(r_ecx+0xbcu), r_eax);
    /* 00632871: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00632874: mov ebx, dword ptr [eax + 4] */ r_ebx = R32((u32)(r_eax+0x4u));
    /* 00632877: mov dword ptr [ecx + 0xc0], 0x43fa0000 */ W32((u32)(r_ecx+0xc0u), 0x43fa0000u);
    /* 00632881: shr ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ebx = r;  } }
    /* 00632884: fadd dword ptr [ebx*4 + 0x933008] */ ST(0) = ST(0) + R_F32((u32)(r_ebx*4+0x933008u));
    /* 0063288b: fadd dword ptr [0x93301c] */ ST(0) = ST(0) + R_F32((u32)(0x93301cu));
    /* 00632891: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00632894: fstp dword ptr [ecx + 0xb4] */ W_F32((u32)(r_ecx+0xb4u), ST(0)); FPOP();
    /* 0063289a: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 0063289d: mov eax, dword ptr [eax + 0x14] */ r_eax = R32((u32)(r_eax+0x14u));
    /* 006328a0: mov dword ptr [ecx + 0xc4], eax */ W32((u32)(r_ecx+0xc4u), r_eax);
    /* 006328a6: fnstcw word ptr [ebp - 0x2c] */ W16((u32)(r_ebp+0xffffffd4u), fcw);
    /* 006328a9: movzx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd4u));
    /* 006328ad: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006328b2: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 006328b5: fldcw word ptr [ebp - 0x24] */ fcw = R16((u32)(r_ebp+0xffffffdcu));
    /* 006328b8: fistp dword ptr [ecx + 0xcc] */ W32((u32)(r_ecx+0xccu), (u32)fx_int32(ST(0))); FPOP();
    /* 006328be: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 006328c1: mov dword ptr [ecx + 0xc8], 0 */ W32((u32)(r_ecx+0xc8u), 0x0u);
    /* 006328cb: mov eax, ecx */ r_eax = r_ecx;
    /* 006328cd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006328d0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006328d7: mov esp, ebp */ r_esp = r_ebp;
    /* 006328d9: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006328da: ret 8 */ FN_RET(0x006327c8); r_esp += 12; return;
}

void f_006328e0(void) /* sub_6328E0 */
{
    FN_ENTER(0x006328e0);
    /* 006328e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006328e1: mov ebp, ecx */ r_ebp = r_ecx;
    /* 006328e3: call 0x4f7c84 */ r_esp -= 4; W32(r_esp, 0x6328e8u); f_004f7c84();
    /* 006328e8: mov eax, dword ptr [ebp + 0xcc] */ r_eax = R32((u32)(r_ebp+0xccu));
    /* 006328ee: add dword ptr [ebp + 0xc8], eax */ { u32 ad = (u32)(r_ebp+0xc8u);  u32 a = R32(ad); u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006328f4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006328f5: ret  */ FN_RET(0x006328e0); r_esp += 4; return;
}

void f_006328f8(void) /* sub_6328F8 */
{
    FN_ENTER(0x006328f8);
    /* 006328f8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006328f9: mov esi, ecx */ r_esi = r_ecx;
    /* 006328fb: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 006328fd: mov ecx, esi */ r_ecx = r_esi;
    /* 006328ff: push dword ptr [esi + 0xc4] */ { u32 v = R32((u32)(r_esi+0xc4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00632905: push dword ptr [esi + 0xc0] */ { u32 v = R32((u32)(r_esi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063290b: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x63290eu); call_ind(t); }
    /* 0063290e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00632910: je 0x63298e */ if (fZ) goto L_0063298e;
L_00632912:; BB(0x00632912);
    /* 00632912: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x632917u); f_0082d7b0();
    /* 00632917: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 0063291a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x63291fu); f_0082d838();
    /* 0063291f: mov edx, dword ptr [esi + 0x64] */ r_edx = R32((u32)(r_esi+0x64u));
    /* 00632922: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00632924: call 0x830c04 */ r_esp -= 4; W32(r_esp, 0x632929u); f_00830c04();
    /* 00632929: mov edx, dword ptr [esi + 0x5c] */ r_edx = R32((u32)(r_esi+0x5cu));
    /* 0063292c: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0063292e: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x632933u); f_0082e9e4();
    /* 00632933: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 00632936: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00632938: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x63293du); f_0082d8bc();
    /* 0063293d: mov ecx, dword ptr [esi + 0x24] */ r_ecx = R32((u32)(r_esi+0x24u));
    /* 00632940: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x632945u); f_00829cc8();
    /* 00632945: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 00632948: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063294b: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x632950u); f_008321d8();
    /* 00632950: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632951: mov edx, dword ptr [esi + 0xc8] */ r_edx = R32((u32)(r_esi+0xc8u));
    /* 00632957: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00632959: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x63295eu); f_0082d8bc();
    /* 0063295e: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 00632961: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00632964: push dword ptr [edx + 4] */ { u32 v = R32((u32)(r_edx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00632967: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x63296cu); f_008321d8();
    /* 0063296c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0063296d: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x632972u); f_0082dbac();
    /* 00632972: mov eax, dword ptr [esi + 0x34] */ r_eax = R32((u32)(r_esi+0x34u));
    /* 00632975: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 00632978: mov ecx, dword ptr [edx + 0x2c] */ r_ecx = R32((u32)(r_edx+0x2cu));
    /* 0063297b: push dword ptr [ecx + 4] */ { u32 v = R32((u32)(r_ecx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0063297e: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x632983u); f_008321d8();
    /* 00632983: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632984: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x632989u); f_0082dab0();
    /* 00632989: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x63298eu); f_0082da80();
L_0063298e:; BB(0x0063298e);
    /* 0063298e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0063298f: ret  */ FN_RET(0x006328f8); r_esp += 4; return;
}

void f_00632990(void) /* sub_632990 */
{
    FN_ENTER(0x00632990);
    /* 00632990: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632991: mov ebp, esp */ r_ebp = r_esp;
    /* 00632993: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00632995: push 0x8e3b4c */ { u32 v = 0x8e3b4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0063299a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006329a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006329a1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006329a8: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006329ab: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006329ae: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 006329b1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 006329b4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 006329b7: push 0x440 */ { u32 v = 0x440u; r_esp -= 4; W32(r_esp, v); }
    /* 006329bc: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
    /* 006329c3: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6329c8u); f_008581c5();
    /* 006329c8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006329c9: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 006329cc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006329ce: je 0x632a0f */ if (fZ) goto L_00632a0f;
L_006329d0:; BB(0x006329d0);
    /* 006329d0: mov dword ptr [ebp - 0x24], 1 */ W32((u32)(r_ebp+0xffffffdcu), 0x1u);
    /* 006329d7: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006329de: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 006329e1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006329e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006329e4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006329e5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006329e6: push 0x9c61b8 */ { u32 v = 0x9c61b8u; r_esp -= 4; W32(r_esp, v); }
    /* 006329eb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006329ed: call 0x5b7a84 */ r_esp -= 4; W32(r_esp, 0x6329f2u); f_005b7a84();
    /* 006329f2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 006329f5: mov dword ptr [ebp - 0x24], 0 */ W32((u32)(r_ebp+0xffffffdcu), 0x0u);
L_006329fc:; BB(0x006329fc);
    /* 006329fc: mov dword ptr [0xa8f030], eax */ W32((u32)(0xa8f030u), r_eax);
    /* 00632a01: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632a04: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00632a0b: mov esp, ebp */ r_esp = r_ebp;
    /* 00632a0d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632a0e: ret  */ FN_RET(0x00632990); r_esp += 4; return;
L_00632a0f:; BB(0x00632a0f);
    /* 00632a0f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00632a11: jmp 0x6329fc */ goto L_006329fc;
}

void f_00632a14(void) /* sub_632A14 */
{
    FN_ENTER(0x00632a14);
    /* 00632a14: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632a15: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00632a17: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00632a19: call 0x632b0c */ r_esp -= 4; W32(r_esp, 0x632a1eu); f_00632b0c();
    /* 00632a1e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00632a22: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00632a24: jne 0x632a2a */ if (!fZ) goto L_00632a2a;
L_00632a26:; BB(0x00632a26);
    /* 00632a26: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632a27: ret 4 */ FN_RET(0x00632a14); r_esp += 8; return;
L_00632a2a:; BB(0x00632a2a);
    /* 00632a2a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632a2b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x632a30u); f_005c2f74();
    /* 00632a30: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632a31: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632a32: ret 4 */ FN_RET(0x00632a14); r_esp += 8; return;
}

void f_00632a38(void) /* sub_632A38 */
{
    FN_ENTER(0x00632a38);
    /* 00632a38: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632a39: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00632a3b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00632a3d: call 0x632c74 */ r_esp -= 4; W32(r_esp, 0x632a42u); f_00632c74();
    /* 00632a42: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00632a46: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00632a48: jne 0x632a4e */ if (!fZ) goto L_00632a4e;
L_00632a4a:; BB(0x00632a4a);
    /* 00632a4a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632a4b: ret 4 */ FN_RET(0x00632a38); r_esp += 8; return;
L_00632a4e:; BB(0x00632a4e);
    /* 00632a4e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632a4f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x632a54u); f_005c2f74();
    /* 00632a54: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632a55: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632a56: ret 4 */ FN_RET(0x00632a38); r_esp += 8; return;
}

void f_00632a5c(void) /* sub_632A5C */
{
    FN_ENTER(0x00632a5c);
    /* 00632a5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632a5d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00632a5f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00632a61: call 0x63323c */ r_esp -= 4; W32(r_esp, 0x632a66u); f_0063323c();
    /* 00632a66: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00632a6a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00632a6c: jne 0x632a72 */ if (!fZ) goto L_00632a72;
L_00632a6e:; BB(0x00632a6e);
    /* 00632a6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632a6f: ret 4 */ FN_RET(0x00632a5c); r_esp += 8; return;
L_00632a72:; BB(0x00632a72);
    /* 00632a72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632a73: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x632a78u); f_005c2f74();
    /* 00632a78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632a79: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632a7a: ret 4 */ FN_RET(0x00632a5c); r_esp += 8; return;
}

void f_00632a80(void) /* sub_632A80 */
{
    FN_ENTER(0x00632a80);
    /* 00632a80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632a81: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00632a83: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00632a85: call 0x632aa4 */ r_esp -= 4; W32(r_esp, 0x632a8au); f_00632aa4();
    /* 00632a8a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00632a8e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00632a90: jne 0x632a96 */ if (!fZ) goto L_00632a96;
L_00632a92:; BB(0x00632a92);
    /* 00632a92: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632a93: ret 4 */ FN_RET(0x00632a80); r_esp += 8; return;
L_00632a96:; BB(0x00632a96);
    /* 00632a96: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632a97: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x632a9cu); f_005c2f74();
    /* 00632a9c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632a9d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632a9e: ret 4 */ FN_RET(0x00632a80); r_esp += 8; return;
}

void f_00632aa4(void) /* sub_632AA4 */
{
    FN_ENTER(0x00632aa4);
    /* 00632aa4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632aa5: mov ebp, esp */ r_ebp = r_esp;
    /* 00632aa7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00632aa9: push 0x8e3b68 */ { u32 v = 0x8e3b68u; r_esp -= 4; W32(r_esp, v); }
    /* 00632aae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00632ab4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632ab5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00632abc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00632abf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00632ac2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00632ac5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00632ac8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00632acb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00632ace: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00632ad5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632ad8: mov dword ptr [eax], 0xb2bcc0 */ W32((u32)(r_eax), 0xb2bcc0u);
    /* 00632ade: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632adf: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x632ae4u); f_007b4e84();
    /* 00632ae4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632ae5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632ae8: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x632aedu); f_007b9c8c();
    /* 00632aed: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00632af4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632af7: call 0x632b0c */ r_esp -= 4; W32(r_esp, 0x632afcu); f_00632b0c();
    /* 00632afc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632aff: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00632b06: mov esp, ebp */ r_esp = r_ebp;
    /* 00632b08: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632b09: ret  */ FN_RET(0x00632aa4); r_esp += 4; return;
}

void f_00632b0c(void) /* sub_632B0C */
{
    FN_ENTER(0x00632b0c);
    /* 00632b0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632b0d: mov ebp, esp */ r_ebp = r_esp;
    /* 00632b0f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00632b11: push 0x8e3b84 */ { u32 v = 0x8e3b84u; r_esp -= 4; W32(r_esp, v); }
    /* 00632b16: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00632b1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632b1d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00632b24: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00632b27: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00632b2a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00632b2d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00632b30: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00632b33: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00632b36: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632b39: mov dword ptr [ecx], 0xb2bbe0 */ W32((u32)(r_ecx), 0xb2bbe0u);
    /* 00632b3f: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00632b46: call 0x7b4aec */ r_esp -= 4; W32(r_esp, 0x632b4bu); f_007b4aec();
    /* 00632b4b: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632b4e: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00632b55: mov esp, ebp */ r_esp = r_ebp;
    /* 00632b57: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632b58: ret  */ FN_RET(0x00632b0c); r_esp += 4; return;
}

void f_00632b5c(void) /* sub_632B5C */
{
    FN_ENTER(0x00632b5c);
    /* 00632b5c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632b5d: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00632b5f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00632b61: call 0x632b80 */ r_esp -= 4; W32(r_esp, 0x632b66u); f_00632b80();
    /* 00632b66: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00632b6a: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00632b6c: jne 0x632b72 */ if (!fZ) goto L_00632b72;
L_00632b6e:; BB(0x00632b6e);
    /* 00632b6e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632b6f: ret 4 */ FN_RET(0x00632b5c); r_esp += 8; return;
L_00632b72:; BB(0x00632b72);
    /* 00632b72: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632b73: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x632b78u); f_005c2f74();
    /* 00632b78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632b79: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632b7a: ret 4 */ FN_RET(0x00632b5c); r_esp += 8; return;
}

void f_00632b75(void)
{
    FN_ENTER(0x00632b75);
    /* 00632b75: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00632b77: call ptr [ecx + 0x5b] */ { u32 t = R32((u32)(r_ecx+0x5bu)); r_esp -= 4; W32(r_esp, 0x632b7au); call_ind(t); }
    /* 00632b7a: ret 4 */ FN_RET(0x00632b75); r_esp += 8; return;
}

void f_00632b80(void) /* sub_632B80 */
{
    FN_ENTER(0x00632b80);
    /* 00632b80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632b81: mov ebp, esp */ r_ebp = r_esp;
    /* 00632b83: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00632b85: push 0x8e3ba0 */ { u32 v = 0x8e3ba0u; r_esp -= 4; W32(r_esp, v); }
    /* 00632b8a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00632b90: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632b91: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00632b98: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00632b9b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00632b9e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00632ba1: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00632ba4: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00632ba7: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00632baa: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00632bb1: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632bb4: mov dword ptr [eax], 0xb2bd68 */ W32((u32)(r_eax), 0xb2bd68u);
    /* 00632bba: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632bbb: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x632bc0u); f_007b4e84();
    /* 00632bc0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632bc1: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632bc4: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x632bc9u); f_007b9c8c();
    /* 00632bc9: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00632bd0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632bd3: call 0x632b0c */ r_esp -= 4; W32(r_esp, 0x632bd8u); f_00632b0c();
    /* 00632bd8: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632bdb: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00632be2: mov esp, ebp */ r_esp = r_ebp;
    /* 00632be4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632be5: ret  */ FN_RET(0x00632b80); r_esp += 4; return;
}

void f_00632be8(void) /* sub_632BE8 */
{
    FN_ENTER(0x00632be8);
    /* 00632be8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632be9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00632beb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00632bed: call 0x632c0c */ r_esp -= 4; W32(r_esp, 0x632bf2u); f_00632c0c();
    /* 00632bf2: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00632bf6: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00632bf8: jne 0x632bfe */ if (!fZ) goto L_00632bfe;
L_00632bfa:; BB(0x00632bfa);
    /* 00632bfa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632bfb: ret 4 */ FN_RET(0x00632be8); r_esp += 8; return;
L_00632bfe:; BB(0x00632bfe);
    /* 00632bfe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632bff: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x632c04u); f_005c2f74();
    /* 00632c04: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632c05: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632c06: ret 4 */ FN_RET(0x00632be8); r_esp += 8; return;
}

void f_00632c0c(void) /* sub_632C0C */
{
    FN_ENTER(0x00632c0c);
    /* 00632c0c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632c0d: mov ebp, esp */ r_ebp = r_esp;
    /* 00632c0f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00632c11: push 0x8e3bbc */ { u32 v = 0x8e3bbcu; r_esp -= 4; W32(r_esp, v); }
    /* 00632c16: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00632c1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632c1d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00632c24: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00632c27: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00632c2a: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00632c2d: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00632c30: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00632c33: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00632c36: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00632c3d: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632c40: mov dword ptr [eax], 0xb2be10 */ W32((u32)(r_eax), 0xb2be10u);
    /* 00632c46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632c47: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x632c4cu); f_007b4e84();
    /* 00632c4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632c4d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632c50: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x632c55u); f_007b9c8c();
    /* 00632c55: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00632c5c: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632c5f: call 0x632c74 */ r_esp -= 4; W32(r_esp, 0x632c64u); f_00632c74();
    /* 00632c64: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632c67: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00632c6e: mov esp, ebp */ r_esp = r_ebp;
    /* 00632c70: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632c71: ret  */ FN_RET(0x00632c0c); r_esp += 4; return;
}

void f_00632c74(void) /* sub_632C74 */
{
    FN_ENTER(0x00632c74);
    /* 00632c74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632c75: mov ebp, esp */ r_ebp = r_esp;
    /* 00632c77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00632c79: push 0x8e3bd8 */ { u32 v = 0x8e3bd8u; r_esp -= 4; W32(r_esp, v); }
    /* 00632c7e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00632c84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632c85: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00632c8c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00632c8f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00632c92: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00632c95: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00632c98: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00632c9b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00632c9e: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632ca1: mov dword ptr [ecx], 0xb2bc18 */ W32((u32)(r_ecx), 0xb2bc18u);
    /* 00632ca7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00632cae: call 0x632b0c */ r_esp -= 4; W32(r_esp, 0x632cb3u); f_00632b0c();
    /* 00632cb3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632cb6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00632cbd: mov esp, ebp */ r_esp = r_ebp;
    /* 00632cbf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632cc0: ret  */ FN_RET(0x00632c74); r_esp += 4; return;
}

void f_00632cc4(void) /* sub_632CC4 */
{
    FN_ENTER(0x00632cc4);
    /* 00632cc4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632cc5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00632cc7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00632cc9: call 0x632ce8 */ r_esp -= 4; W32(r_esp, 0x632cceu); f_00632ce8();
    /* 00632cce: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00632cd2: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00632cd4: jne 0x632cda */ if (!fZ) goto L_00632cda;
L_00632cd6:; BB(0x00632cd6);
    /* 00632cd6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632cd7: ret 4 */ FN_RET(0x00632cc4); r_esp += 8; return;
L_00632cda:; BB(0x00632cda);
    /* 00632cda: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632cdb: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x632ce0u); f_005c2f74();
    /* 00632ce0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632ce1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632ce2: ret 4 */ FN_RET(0x00632cc4); r_esp += 8; return;
}

void f_00632ce8(void) /* sub_632CE8 */
{
    FN_ENTER(0x00632ce8);
    /* 00632ce8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632ce9: mov ebp, esp */ r_ebp = r_esp;
    /* 00632ceb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00632ced: push 0x8e3bf4 */ { u32 v = 0x8e3bf4u; r_esp -= 4; W32(r_esp, v); }
    /* 00632cf2: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00632cf8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632cf9: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00632d00: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00632d03: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00632d06: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00632d09: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00632d0c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00632d0f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00632d12: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00632d19: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632d1c: mov dword ptr [eax], 0xb2beb8 */ W32((u32)(r_eax), 0xb2beb8u);
    /* 00632d22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632d23: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x632d28u); f_007b4e84();
    /* 00632d28: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632d29: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632d2c: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x632d31u); f_007b9c8c();
    /* 00632d31: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00632d38: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632d3b: call 0x632b0c */ r_esp -= 4; W32(r_esp, 0x632d40u); f_00632b0c();
    /* 00632d40: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632d43: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00632d4a: mov esp, ebp */ r_esp = r_ebp;
    /* 00632d4c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632d4d: ret  */ FN_RET(0x00632ce8); r_esp += 4; return;
}

void f_00632d50(void) /* sub_632D50 */
{
    FN_ENTER(0x00632d50);
    /* 00632d50: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632d51: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00632d53: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00632d55: call 0x632d74 */ r_esp -= 4; W32(r_esp, 0x632d5au); f_00632d74();
    /* 00632d5a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00632d5e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00632d60: jne 0x632d66 */ if (!fZ) goto L_00632d66;
L_00632d62:; BB(0x00632d62);
    /* 00632d62: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632d63: ret 4 */ FN_RET(0x00632d50); r_esp += 8; return;
L_00632d66:; BB(0x00632d66);
    /* 00632d66: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632d67: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x632d6cu); f_005c2f74();
    /* 00632d6c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632d6d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632d6e: ret 4 */ FN_RET(0x00632d50); r_esp += 8; return;
}

void f_00632d74(void) /* sub_632D74 */
{
    FN_ENTER(0x00632d74);
    /* 00632d74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632d75: mov ebp, esp */ r_ebp = r_esp;
    /* 00632d77: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00632d79: push 0x8e3c10 */ { u32 v = 0x8e3c10u; r_esp -= 4; W32(r_esp, v); }
    /* 00632d7e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00632d84: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632d85: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00632d8c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00632d8f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00632d92: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00632d95: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00632d98: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00632d9b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00632d9e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00632da5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632da8: mov dword ptr [eax], 0xb2bcf8 */ W32((u32)(r_eax), 0xb2bcf8u);
    /* 00632dae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632daf: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x632db4u); f_007b4e84();
    /* 00632db4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632db5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632db8: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x632dbdu); f_007b9c8c();
    /* 00632dbd: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00632dc4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632dc7: call 0x632b0c */ r_esp -= 4; W32(r_esp, 0x632dccu); f_00632b0c();
    /* 00632dcc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632dcf: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00632dd6: mov esp, ebp */ r_esp = r_ebp;
    /* 00632dd8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632dd9: ret  */ FN_RET(0x00632d74); r_esp += 4; return;
}

void f_00632ddc(void) /* sub_632DDC */
{
    FN_ENTER(0x00632ddc);
    /* 00632ddc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632ddd: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00632ddf: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00632de1: call 0x632e00 */ r_esp -= 4; W32(r_esp, 0x632de6u); f_00632e00();
    /* 00632de6: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00632dea: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00632dec: jne 0x632df2 */ if (!fZ) goto L_00632df2;
L_00632dee:; BB(0x00632dee);
    /* 00632dee: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632def: ret 4 */ FN_RET(0x00632ddc); r_esp += 8; return;
L_00632df2:; BB(0x00632df2);
    /* 00632df2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632df3: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x632df8u); f_005c2f74();
    /* 00632df8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632df9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632dfa: ret 4 */ FN_RET(0x00632ddc); r_esp += 8; return;
}

void f_00632e00(void) /* sub_632E00 */
{
    FN_ENTER(0x00632e00);
    /* 00632e00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632e01: mov ebp, esp */ r_ebp = r_esp;
    /* 00632e03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00632e05: push 0x8e3c2c */ { u32 v = 0x8e3c2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00632e0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00632e10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632e11: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00632e18: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00632e1b: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00632e1e: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00632e21: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00632e24: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00632e27: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00632e2a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00632e31: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632e34: mov dword ptr [eax], 0xb2bda0 */ W32((u32)(r_eax), 0xb2bda0u);
    /* 00632e3a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632e3b: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x632e40u); f_007b4e84();
    /* 00632e40: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632e41: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632e44: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x632e49u); f_007b9c8c();
    /* 00632e49: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00632e50: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632e53: call 0x632b0c */ r_esp -= 4; W32(r_esp, 0x632e58u); f_00632b0c();
    /* 00632e58: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632e5b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00632e62: mov esp, ebp */ r_esp = r_ebp;
    /* 00632e64: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632e65: ret  */ FN_RET(0x00632e00); r_esp += 4; return;
}

void f_00632e68(void) /* sub_632E68 */
{
    FN_ENTER(0x00632e68);
    /* 00632e68: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632e69: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00632e6b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00632e6d: call 0x632e8c */ r_esp -= 4; W32(r_esp, 0x632e72u); f_00632e8c();
    /* 00632e72: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00632e76: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00632e78: jne 0x632e7e */ if (!fZ) goto L_00632e7e;
L_00632e7a:; BB(0x00632e7a);
    /* 00632e7a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632e7b: ret 4 */ FN_RET(0x00632e68); r_esp += 8; return;
L_00632e7e:; BB(0x00632e7e);
    /* 00632e7e: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632e7f: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x632e84u); f_005c2f74();
    /* 00632e84: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632e85: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632e86: ret 4 */ FN_RET(0x00632e68); r_esp += 8; return;
}

void f_00632e8c(void) /* sub_632E8C */
{
    FN_ENTER(0x00632e8c);
    /* 00632e8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632e8d: mov ebp, esp */ r_ebp = r_esp;
    /* 00632e8f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00632e91: push 0x8e3c48 */ { u32 v = 0x8e3c48u; r_esp -= 4; W32(r_esp, v); }
    /* 00632e96: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00632e9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632e9d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00632ea4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00632ea7: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00632eaa: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00632ead: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00632eb0: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00632eb3: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00632eb6: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00632ebd: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632ec0: mov dword ptr [eax], 0xb2be48 */ W32((u32)(r_eax), 0xb2be48u);
    /* 00632ec6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632ec7: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x632eccu); f_007b4e84();
    /* 00632ecc: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632ecd: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632ed0: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x632ed5u); f_007b9c8c();
    /* 00632ed5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00632edc: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632edf: call 0x632c74 */ r_esp -= 4; W32(r_esp, 0x632ee4u); f_00632c74();
    /* 00632ee4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632ee7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00632eee: mov esp, ebp */ r_esp = r_ebp;
    /* 00632ef0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632ef1: ret  */ FN_RET(0x00632e8c); r_esp += 4; return;
}

void f_00632ef4(void) /* sub_632EF4 */
{
    FN_ENTER(0x00632ef4);
    /* 00632ef4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632ef5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00632ef7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00632ef9: call 0x632f18 */ r_esp -= 4; W32(r_esp, 0x632efeu); f_00632f18();
    /* 00632efe: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00632f02: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00632f04: jne 0x632f0a */ if (!fZ) goto L_00632f0a;
L_00632f06:; BB(0x00632f06);
    /* 00632f06: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632f07: ret 4 */ FN_RET(0x00632ef4); r_esp += 8; return;
L_00632f0a:; BB(0x00632f0a);
    /* 00632f0a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632f0b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x632f10u); f_005c2f74();
    /* 00632f10: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632f11: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632f12: ret 4 */ FN_RET(0x00632ef4); r_esp += 8; return;
}

void f_00632f18(void) /* sub_632F18 */
{
    FN_ENTER(0x00632f18);
    /* 00632f18: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632f19: mov ebp, esp */ r_ebp = r_esp;
    /* 00632f1b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00632f1d: push 0x8e3c64 */ { u32 v = 0x8e3c64u; r_esp -= 4; W32(r_esp, v); }
    /* 00632f22: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00632f28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632f29: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00632f30: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00632f33: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00632f36: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00632f39: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00632f3c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00632f3f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00632f42: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00632f49: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632f4c: mov dword ptr [eax], 0xb2bef0 */ W32((u32)(r_eax), 0xb2bef0u);
    /* 00632f52: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632f53: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x632f58u); f_007b4e84();
    /* 00632f58: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632f59: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632f5c: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x632f61u); f_007b9c8c();
    /* 00632f61: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00632f68: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632f6b: call 0x632b0c */ r_esp -= 4; W32(r_esp, 0x632f70u); f_00632b0c();
    /* 00632f70: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632f73: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00632f7a: mov esp, ebp */ r_esp = r_ebp;
    /* 00632f7c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00632f7d: ret  */ FN_RET(0x00632f18); r_esp += 4; return;
}

void f_00632f80(void) /* sub_632F80 */
{
    FN_ENTER(0x00632f80);
    /* 00632f80: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632f81: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00632f83: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00632f85: call 0x632fa4 */ r_esp -= 4; W32(r_esp, 0x632f8au); f_00632fa4();
    /* 00632f8a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00632f8e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00632f90: jne 0x632f96 */ if (!fZ) goto L_00632f96;
L_00632f92:; BB(0x00632f92);
    /* 00632f92: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632f93: ret 4 */ FN_RET(0x00632f80); r_esp += 8; return;
L_00632f96:; BB(0x00632f96);
    /* 00632f96: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00632f97: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x632f9cu); f_005c2f74();
    /* 00632f9c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632f9d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00632f9e: ret 4 */ FN_RET(0x00632f80); r_esp += 8; return;
}

void f_00632fa4(void) /* sub_632FA4 */
{
    FN_ENTER(0x00632fa4);
    /* 00632fa4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00632fa5: mov ebp, esp */ r_ebp = r_esp;
    /* 00632fa7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00632fa9: push 0x8e3c80 */ { u32 v = 0x8e3c80u; r_esp -= 4; W32(r_esp, v); }
    /* 00632fae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00632fb4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632fb5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00632fbc: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00632fbf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00632fc2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00632fc5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00632fc8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00632fcb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00632fce: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00632fd5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632fd8: mov dword ptr [eax], 0xb2bd30 */ W32((u32)(r_eax), 0xb2bd30u);
    /* 00632fde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00632fdf: call 0x7b4e84 */ r_esp -= 4; W32(r_esp, 0x632fe4u); f_007b4e84();
    /* 00632fe4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00632fe5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632fe8: call 0x7b9c8c */ r_esp -= 4; W32(r_esp, 0x632fedu); f_007b9c8c();
    /* 00632fed: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00632ff4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00632ff7: call 0x632b0c */ r_esp -= 4; W32(r_esp, 0x632ffcu); f_00632b0c();
    /* 00632ffc: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00632fff: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00633006: mov esp, ebp */ r_esp = r_ebp;
    /* 00633008: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00633009: ret  */ FN_RET(0x00632fa4); r_esp += 4; return;
}

