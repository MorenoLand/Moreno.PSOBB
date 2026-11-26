#include "protos.h"

void f_004db4e4(void) /* sub_4DB4E4 */
{
    FN_ENTER(0x004db4e4);
    /* 004db4e4: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004db4e7: mov eax, dword ptr [esp + 0x10] */ r_eax = R32((u32)(r_esp+0x10u));
    /* 004db4eb: mov edx, dword ptr [0xa49510] */ r_edx = R32((u32)(0xa49510u));
    /* 004db4f1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db4f3: je 0x4db543 */ if (fZ) goto L_004db543;
L_004db4f5:; BB(0x004db4f5);
    /* 004db4f5: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 004db4fb: cmp edx, dword ptr [0xa9c4dc] */ {  u32 a = r_edx; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db501: mov dword ptr [0xa9cd68], eax */ W32((u32)(0xa9cd68u), r_eax);
    /* 004db506: jne 0x4db53a */ if (!fZ) goto L_004db53a;
L_004db508:; BB(0x004db508);
    /* 004db508: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 004db50e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db510: je 0x4db53a */ if (fZ) goto L_004db53a;
L_004db512:; BB(0x004db512);
    /* 004db512: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004db516: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004db51e: mov edx, 0xc */ r_edx = 0xcu;
    /* 004db523: mov word ptr [esp], dx */ W16((u32)(r_esp), (u16)r_edx);
    /* 004db527: mov byte ptr [esp + 2], 0xdf */ W8((u32)(r_esp+0x2u), 0xdfu);
    /* 004db52c: mov byte ptr [esp + 3], 3 */ W8((u32)(r_esp+0x3u), 0x3u);
    /* 004db531: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004db534: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db535: call 0x7c4fb4 */ r_esp -= 4; W32(r_esp, 0x4db53au); f_007c4fb4();
L_004db53a:; BB(0x004db53a);
    /* 004db53a: mov eax, 1 */ r_eax = 0x1u;
    /* 004db53f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004db542: ret  */ FN_RET(0x004db4e4); r_esp += 4; return;
L_004db543:; BB(0x004db543);
    /* 004db543: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004db545: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004db548: ret  */ FN_RET(0x004db4e4); r_esp += 4; return;
}

void f_004db54c(void) /* sub_4DB54C */
{
    FN_ENTER(0x004db54c);
    /* 004db54c: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004db54f: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 004db553: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 004db557: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 004db55c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db55e: je 0x4db5c6 */ if (fZ) goto L_004db5c6;
L_004db560:; BB(0x004db560);
    /* 004db560: fcom dword ptr [0x909910] */ fx_compare(ST(0), R_F32((u32)(0x909910u))); 
    /* 004db566: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004db568: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004db569: jb 0x4db5c6 */ if (fC) goto L_004db5c6;
L_004db56b:; BB(0x004db56b);
    /* 004db56b: fcom dword ptr [0x90990c] */ fx_compare(ST(0), R_F32((u32)(0x90990cu))); 
    /* 004db571: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004db573: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004db574: ja 0x4db5c6 */ if ((!fC&&!fZ)) goto L_004db5c6;
L_004db576:; BB(0x004db576);
    /* 004db576: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004db578: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 004db57d: cmp eax, dword ptr [0xa9c4dc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db583: mov dword ptr [0xa48be4], edx */ W32((u32)(0xa48be4u), r_edx);
    /* 004db589: jne 0x4db5bd */ if (!fZ) goto L_004db5bd;
L_004db58b:; BB(0x004db58b);
    /* 004db58b: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 004db591: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db593: je 0x4db5bd */ if (fZ) goto L_004db5bd;
L_004db595:; BB(0x004db595);
    /* 004db595: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004db599: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004db5a1: mov eax, 0xc */ r_eax = 0xcu;
    /* 004db5a6: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 004db5aa: mov byte ptr [esp + 2], 0xdf */ W8((u32)(r_esp+0x2u), 0xdfu);
    /* 004db5af: mov byte ptr [esp + 3], 4 */ W8((u32)(r_esp+0x3u), 0x4u);
    /* 004db5b4: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004db5b7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004db5b8: call 0x7c4fb4 */ r_esp -= 4; W32(r_esp, 0x4db5bdu); f_007c4fb4();
L_004db5bd:; BB(0x004db5bd);
    /* 004db5bd: mov eax, 1 */ r_eax = 0x1u;
    /* 004db5c2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004db5c5: ret  */ FN_RET(0x004db54c); r_esp += 4; return;
L_004db5c6:; BB(0x004db5c6);
    /* 004db5c6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004db5c8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004db5ca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004db5cd: ret  */ FN_RET(0x004db54c); r_esp += 4; return;
}

void f_004db5d0(void) /* sub_4DB5D0 */
{
    FN_ENTER(0x004db5d0);
    /* 004db5d0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004db5d1: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 004db5d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db5d8: je 0x4db5e2 */ if (fZ) goto L_004db5e2;
L_004db5da:; BB(0x004db5da);
    /* 004db5da: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 004db5dd: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db5e0: je 0x4db5e6 */ if (fZ) goto L_004db5e6;
L_004db5e2:; BB(0x004db5e2);
    /* 004db5e2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004db5e4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004db5e5: ret  */ FN_RET(0x004db5d0); r_esp += 4; return;
L_004db5e6:; BB(0x004db5e6);
    /* 004db5e6: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004db5e9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004db5eb: mov ebx, eax */ r_ebx = r_eax;
L_004db5ed:; BB(0x004db5ed);
    /* 004db5ed: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004db5ee: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4db5f3u); f_0068d5a8();
    /* 004db5f3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004db5f4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db5f6: je 0x4db603 */ if (fZ) goto L_004db603;
L_004db5f8:; BB(0x004db5f8);
    /* 004db5f8: mov ecx, eax */ r_ecx = r_eax;
    /* 004db5fa: call 0x6926bc */ r_esp -= 4; W32(r_esp, 0x4db5ffu); f_006926bc();
    /* 004db5ff: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db601: je 0x4db61f */ if (fZ) goto L_004db61f;
L_004db603:; BB(0x004db603);
    /* 004db603: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004db606: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004db609: jl 0x4db5ed */ if ((fS!=fO)) goto L_004db5ed;
L_004db60b:; BB(0x004db60b);
    /* 004db60b: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 004db60e: mov dword ptr [0xa48c00], 1 */ W32((u32)(0xa48c00u), 0x1u);
    /* 004db618: mov eax, 1 */ r_eax = 0x1u;
    /* 004db61d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004db61e: ret  */ FN_RET(0x004db5d0); r_esp += 4; return;
L_004db61f:; BB(0x004db61f);
    /* 004db61f: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 004db622: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004db624: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004db625: ret  */ FN_RET(0x004db5d0); r_esp += 4; return;
}

void f_004db628(void) /* sub_4DB628 */
{
    FN_ENTER(0x004db628);
    /* 004db628: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004db629: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 004db62e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db630: je 0x4db63a */ if (fZ) goto L_004db63a;
L_004db632:; BB(0x004db632);
    /* 004db632: mov eax, dword ptr [eax + 0x1c] */ r_eax = R32((u32)(r_eax+0x1cu));
    /* 004db635: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db638: je 0x4db63e */ if (fZ) goto L_004db63e;
L_004db63a:; BB(0x004db63a);
    /* 004db63a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004db63c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004db63d: ret  */ FN_RET(0x004db628); r_esp += 4; return;
L_004db63e:; BB(0x004db63e);
    /* 004db63e: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 004db641: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004db643: mov ebx, eax */ r_ebx = r_eax;
L_004db645:; BB(0x004db645);
    /* 004db645: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004db646: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4db64bu); f_0068d5a8();
    /* 004db64b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004db64c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db64e: je 0x4db65b */ if (fZ) goto L_004db65b;
L_004db650:; BB(0x004db650);
    /* 004db650: mov ecx, eax */ r_ecx = r_eax;
    /* 004db652: call 0x6926bc */ r_esp -= 4; W32(r_esp, 0x4db657u); f_006926bc();
    /* 004db657: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004db659: jne 0x4db66a */ if (!fZ) goto L_004db66a;
L_004db65b:; BB(0x004db65b);
    /* 004db65b: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 004db65e: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004db661: jl 0x4db645 */ if ((fS!=fO)) goto L_004db645;
L_004db663:; BB(0x004db663);
    /* 004db663: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 004db666: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004db668: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004db669: ret  */ FN_RET(0x004db628); r_esp += 4; return;
L_004db66a:; BB(0x004db66a);
    /* 004db66a: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 004db66d: mov dword ptr [0xa48c00], 1 */ W32((u32)(0xa48c00u), 0x1u);
    /* 004db677: mov eax, 1 */ r_eax = 0x1u;
    /* 004db67c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004db67d: ret  */ FN_RET(0x004db628); r_esp += 4; return;
}

void f_004db680(void) /* sub_4DB680 */
{
    FN_ENTER(0x004db680);
    /* 004db680: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004db681: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004db684: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 004db688: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004db689: call 0x4d8d9c */ r_esp -= 4; W32(r_esp, 0x4db68eu); f_004d8d9c();
    /* 004db68e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004db68f: mov edx, dword ptr [0xa48bec] */ r_edx = R32((u32)(0xa48becu));
    /* 004db695: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004db696: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004db698: add edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004db69a: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004db69e: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 004db6a2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004db6a5: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4db6aau); f_0082e900();
    /* 004db6aa: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004db6ac: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 004db6b0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004db6b1: call 0x4db9b4 */ r_esp -= 4; W32(r_esp, 0x4db6b6u); f_004db9b4();
    /* 004db6b6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004db6b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004db6ba: ret  */ FN_RET(0x004db680); r_esp += 4; return;
}

void f_004db6bc(void) /* sub_4DB6BC */
{
    FN_ENTER(0x004db6bc);
    /* 004db6bc: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004db6bf: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 004db6c3: mov dword ptr [esp + 0x10], esi */ W32((u32)(r_esp+0x10u), r_esi);
    /* 004db6c7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004db6c9: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004db6cc: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004db6d0: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004db6d4: mov dword ptr [esp + 0xc], eax */ W32((u32)(r_esp+0xcu), r_eax);
    /* 004db6d8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004db6da: mov esi, eax */ r_esi = r_eax;
L_004db6dc:; BB(0x004db6dc);
    /* 004db6dc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004db6dd: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4db6e2u); f_0068d5a8();
    /* 004db6e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004db6e3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db6e5: je 0x4db712 */ if (fZ) goto L_004db712;
L_004db6e7:; BB(0x004db6e7);
    /* 004db6e7: mov edx, dword ptr [esi*4 + 0xa494ec] */ r_edx = R32((u32)(r_esi*4+0xa494ecu));
    /* 004db6ee: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db6f0: je 0x4db7c2 */ if (fZ) goto L_004db7c2;
L_004db6f6:; BB(0x004db6f6);
    /* 004db6f6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004db6f7: call 0x4d9604 */ r_esp -= 4; W32(r_esp, 0x4db6fcu); f_004d9604();
    /* 004db6fc: mov ebx, eax */ r_ebx = r_eax;
    /* 004db6fe: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004db6ff: call 0x4d8d9c */ r_esp -= 4; W32(r_esp, 0x4db704u); f_004d8d9c();
    /* 004db704: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004db707: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db709: jne 0x4db7b1 */ if (!fZ) goto L_004db7b1;
L_004db70f:; BB(0x004db70f);
    /* 004db70f: mov dword ptr [esp + esi*4], ebx */ W32((u32)(r_esp+r_esi*4), r_ebx);
L_004db712:; BB(0x004db712);
    /* 004db712: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 004db715: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004db718: jl 0x4db6dc */ if ((fS!=fO)) goto L_004db6dc;
L_004db71a:; BB(0x004db71a);
    /* 004db71a: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 004db71e: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 004db722: movzx eax, byte ptr [0xa49558] */ r_eax = (u32)R8((u32)(0xa49558u));
    /* 004db729: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004db72b: je 0x4db735 */ if (fZ) goto L_004db735;
L_004db72d:; BB(0x004db72d);
    /* 004db72d: mov edx, dword ptr [0xa4955c] */ r_edx = R32((u32)(0xa4955cu));
    /* 004db733: jmp 0x4db758 */ goto L_004db758;
L_004db735:; BB(0x004db735);
    /* 004db735: call 0x4d8dc0 */ r_esp -= 4; W32(r_esp, 0x4db73au); f_004d8dc0();
    /* 004db73a: mov edx, eax */ r_edx = r_eax;
    /* 004db73c: movzx ecx, byte ptr [0xa49558] */ r_ecx = (u32)R8((u32)(0xa49558u));
    /* 004db743: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004db746: mov dword ptr [0xa4955c], edx */ W32((u32)(0xa4955cu), r_edx);
    /* 004db74c: or ecx, 0xffffff01 */ {  u32 a = r_ecx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 004db752: mov byte ptr [0xa49558], cl */ W8((u32)(0xa49558u), (u8)r_ecx);
L_004db758:; BB(0x004db758);
    /* 004db758: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 004db75b: mov eax, edx */ r_eax = r_edx;
    /* 004db75d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db75f: je 0x4db76a */ if (fZ) goto L_004db76a;
L_004db761:; BB(0x004db761);
    /* 004db761: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 004db764: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004db766: jg 0x4db76a */ if ((!fZ&&fS==fO)) goto L_004db76a;
L_004db768:; BB(0x004db768);
    /* 004db768: mov eax, edx */ r_eax = r_edx;
L_004db76a:; BB(0x004db76a);
    /* 004db76a: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 004db76e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db770: je 0x4db77c */ if (fZ) goto L_004db77c;
L_004db772:; BB(0x004db772);
    /* 004db772: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 004db776: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004db778: jle 0x4db77c */ if ((fZ||fS!=fO)) goto L_004db77c;
L_004db77a:; BB(0x004db77a);
    /* 004db77a: mov eax, ecx */ r_eax = r_ecx;
L_004db77c:; BB(0x004db77c);
    /* 004db77c: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 004db780: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db782: je 0x4db78e */ if (fZ) goto L_004db78e;
L_004db784:; BB(0x004db784);
    /* 004db784: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 004db788: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004db78a: jle 0x4db78e */ if ((fZ||fS!=fO)) goto L_004db78e;
L_004db78c:; BB(0x004db78c);
    /* 004db78c: mov eax, ecx */ r_eax = r_ecx;
L_004db78e:; BB(0x004db78e);
    /* 004db78e: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 004db792: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db794: je 0x4db7a0 */ if (fZ) goto L_004db7a0;
L_004db796:; BB(0x004db796);
    /* 004db796: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 004db79a: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004db79c: jle 0x4db7a0 */ if ((fZ||fS!=fO)) goto L_004db7a0;
L_004db79e:; BB(0x004db79e);
    /* 004db79e: mov eax, ecx */ r_eax = r_ecx;
L_004db7a0:; BB(0x004db7a0);
    /* 004db7a0: cmp eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db7a2: jne 0x4db7ad */ if (!fZ) goto L_004db7ad;
L_004db7a4:; BB(0x004db7a4);
    /* 004db7a4: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 004db7a9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004db7ac: ret  */ FN_RET(0x004db6bc); r_esp += 4; return;
L_004db7ad:; BB(0x004db7ad);
    /* 004db7ad: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004db7b0: ret  */ FN_RET(0x004db6bc); r_esp += 4; return;
L_004db7b1:; BB(0x004db7b1);
    /* 004db7b1: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 004db7b5: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 004db7b9: mov eax, 0xfffffffe */ r_eax = 0xfffffffeu;
    /* 004db7be: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004db7c1: ret  */ FN_RET(0x004db6bc); r_esp += 4; return;
L_004db7c2:; BB(0x004db7c2);
    /* 004db7c2: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 004db7c6: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 004db7ca: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004db7cf: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004db7d2: ret  */ FN_RET(0x004db6bc); r_esp += 4; return;
}

void f_004db7d4(void) /* sub_4DB7D4 */
{
    FN_ENTER(0x004db7d4);
    /* 004db7d4: mov eax, dword ptr [0xa48c00] */ r_eax = R32((u32)(0xa48c00u));
    /* 004db7d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db7db: jne 0x4db7e1 */ if (!fZ) goto L_004db7e1;
L_004db7dd:; BB(0x004db7dd);
    /* 004db7dd: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004db7df: jmp 0x4db7e6 */ goto L_004db7e6;
L_004db7e1:; BB(0x004db7e1);
    /* 004db7e1: mov eax, dword ptr [0xa48c04] */ r_eax = R32((u32)(0xa48c04u));
L_004db7e6:; BB(0x004db7e6);
    /* 004db7e6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004db7e9: jne 0x4db800 */ if (!fZ) goto L_004db800;
L_004db7eb:; BB(0x004db7eb);
    /* 004db7eb: mov eax, dword ptr [0xa48c08] */ r_eax = R32((u32)(0xa48c08u));
    /* 004db7f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004db7f2: je 0x4db7fa */ if (fZ) goto L_004db7fa;
L_004db7f4:; BB(0x004db7f4);
    /* 004db7f4: mov eax, 1 */ r_eax = 0x1u;
    /* 004db7f9: ret  */ FN_RET(0x004db7d4); r_esp += 4; return;
L_004db7fa:; BB(0x004db7fa);
    /* 004db7fa: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 004db7ff: ret  */ FN_RET(0x004db7d4); r_esp += 4; return;
L_004db800:; BB(0x004db800);
    /* 004db800: ret  */ FN_RET(0x004db7d4); r_esp += 4; return;
}

void f_004db804(void) /* sub_4DB804 */
{
    FN_ENTER(0x004db804);
    /* 004db804: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 004db809: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004db80b: je 0x4db826 */ if (fZ) goto L_004db826;
L_004db80d:; BB(0x004db80d);
    /* 004db80d: call 0x4dc208 */ r_esp -= 4; W32(r_esp, 0x4db812u); f_004dc208();
    /* 004db812: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004db814: je 0x4db826 */ if (fZ) goto L_004db826;
L_004db816:; BB(0x004db816);
    /* 004db816: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 004db81b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004db81d: je 0x4db826 */ if (fZ) goto L_004db826;
L_004db81f:; BB(0x004db81f);
    /* 004db81f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db820: call 0x4dc270 */ r_esp -= 4; W32(r_esp, 0x4db825u); f_004dc270();
    /* 004db825: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004db826:; BB(0x004db826);
    /* 004db826: ret  */ FN_RET(0x004db804); r_esp += 4; return;
}

void f_004db828(void) /* sub_4DB828 */
{
    FN_ENTER(0x004db828);
    /* 004db828: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 004db82d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004db82f: je 0x4db84a */ if (fZ) goto L_004db84a;
L_004db831:; BB(0x004db831);
    /* 004db831: call 0x4dc208 */ r_esp -= 4; W32(r_esp, 0x4db836u); f_004dc208();
    /* 004db836: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004db838: je 0x4db84a */ if (fZ) goto L_004db84a;
L_004db83a:; BB(0x004db83a);
    /* 004db83a: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 004db83f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004db841: je 0x4db84a */ if (fZ) goto L_004db84a;
L_004db843:; BB(0x004db843);
    /* 004db843: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004db844: call 0x4dcc70 */ r_esp -= 4; W32(r_esp, 0x4db849u); f_004dcc70();
    /* 004db849: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004db84a:; BB(0x004db84a);
    /* 004db84a: ret  */ FN_RET(0x004db828); r_esp += 4; return;
}

void f_004db84c(void) /* sub_4DB84C */
{
    FN_ENTER(0x004db84c);
    /* 004db84c: mov edx, dword ptr [0xa49510] */ r_edx = R32((u32)(0xa49510u));
    /* 004db852: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004db854: je 0x4db8b0 */ if (fZ) goto L_004db8b0;
L_004db856:; BB(0x004db856);
    /* 004db856: mov dword ptr [0xa48c04], 0xffffffff */ W32((u32)(0xa48c04u), 0xffffffffu);
    /* 004db860: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004db862: mov dword ptr [0xa48bec], eax */ W32((u32)(0xa48becu), r_eax);
    /* 004db867: mov dword ptr [0xa48c00], eax */ W32((u32)(0xa48c00u), r_eax);
    /* 004db86c: mov dword ptr [0xa48c08], eax */ W32((u32)(0xa48c08u), r_eax);
    /* 004db871: mov dword ptr [0xa48c10], eax */ W32((u32)(0xa48c10u), r_eax);
    /* 004db876: mov dword ptr [0xa48c18], eax */ W32((u32)(0xa48c18u), r_eax);
    /* 004db87b: mov dword ptr [0xa494ec], eax */ W32((u32)(0xa494ecu), r_eax);
    /* 004db880: mov dword ptr [0xa48c1c], eax */ W32((u32)(0xa48c1cu), r_eax);
    /* 004db885: mov dword ptr [0xa494f0], eax */ W32((u32)(0xa494f0u), r_eax);
    /* 004db88a: mov dword ptr [0xa48c20], eax */ W32((u32)(0xa48c20u), r_eax);
    /* 004db88f: mov dword ptr [0xa494f4], eax */ W32((u32)(0xa494f4u), r_eax);
    /* 004db894: mov dword ptr [0xa48c24], eax */ W32((u32)(0xa48c24u), r_eax);
    /* 004db899: mov dword ptr [0xa494f8], eax */ W32((u32)(0xa494f8u), r_eax);
    /* 004db89e: mov dword ptr [edx + 0x28], 1 */ W32((u32)(r_edx+0x28u), 0x1u);
    /* 004db8a5: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 004db8a8: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 004db8ab: call 0x73c250 */ r_esp -= 4; W32(r_esp, 0x4db8b0u); f_0073c250();
L_004db8b0:; BB(0x004db8b0);
    /* 004db8b0: ret  */ FN_RET(0x004db84c); r_esp += 4; return;
}

void f_004db8b4(void) /* sub_4DB8B4 */
{
    FN_ENTER(0x004db8b4);
    /* 004db8b4: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004db8b8: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 004db8bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004db8bf: je 0x4db8d3 */ if (fZ) goto L_004db8d3;
L_004db8c1:; BB(0x004db8c1);
    /* 004db8c1: cmp edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004db8c4: je 0x4db8cc */ if (fZ) goto L_004db8cc;
L_004db8c6:; BB(0x004db8c6);
    /* 004db8c6: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004db8c8: je 0x4db8cc */ if (fZ) goto L_004db8cc;
L_004db8ca:; BB(0x004db8ca);
    /* 004db8ca: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_004db8cc:; BB(0x004db8cc);
    /* 004db8cc: mov dword ptr [0xa48c0c], edx */ W32((u32)(0xa48c0cu), r_edx);
    /* 004db8d2: ret  */ FN_RET(0x004db8b4); r_esp += 4; return;
L_004db8d3:; BB(0x004db8d3);
    /* 004db8d3: mov dword ptr [0xa48c0c], 0 */ W32((u32)(0xa48c0cu), 0x0u);
    /* 004db8dd: ret  */ FN_RET(0x004db8b4); r_esp += 4; return;
}

void f_004db8e0(void) /* sub_4DB8E0 */
{
    FN_ENTER(0x004db8e0);
    /* 004db8e0: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 004db8e5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004db8e7: je 0x4db904 */ if (fZ) goto L_004db904;
L_004db8e9:; BB(0x004db8e9);
    /* 004db8e9: mov eax, dword ptr [0xa48c0c] */ r_eax = R32((u32)(0xa48c0cu));
    /* 004db8ee: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004db8f1: je 0x4db903 */ if (fZ) goto L_004db903;
L_004db8f3:; BB(0x004db8f3);
    /* 004db8f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004db8f5: je 0x4db903 */ if (fZ) goto L_004db903;
L_004db8f7:; BB(0x004db8f7);
    /* 004db8f7: mov dword ptr [0xa48c0c], 0 */ W32((u32)(0xa48c0cu), 0x0u);
    /* 004db901: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_004db903:; BB(0x004db903);
    /* 004db903: ret  */ FN_RET(0x004db8e0); r_esp += 4; return;
L_004db904:; BB(0x004db904);
    /* 004db904: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004db906: ret  */ FN_RET(0x004db8e0); r_esp += 4; return;
}

void f_004db908(void) /* sub_4DB908 */
{
    FN_ENTER(0x004db908);
    /* 004db908: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004db90c: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 004db911: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004db913: je 0x4db92f */ if (fZ) goto L_004db92f;
L_004db915:; BB(0x004db915);
    /* 004db915: cmp edx, 0x3c */ {  u32 a = r_edx; u32 b = 0x3cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004db918: jl 0x4db92f */ if ((fS!=fO)) goto L_004db92f;
L_004db91a:; BB(0x004db91a);
    /* 004db91a: cmp edx, 0xe10 */ {  u32 a = r_edx; u32 b = 0xe10u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004db920: jg 0x4db92f */ if ((!fZ&&fS==fO)) goto L_004db92f;
L_004db922:; BB(0x004db922);
    /* 004db922: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004db923: call 0x4d9554 */ r_esp -= 4; W32(r_esp, 0x4db928u); f_004d9554();
    /* 004db928: mov dword ptr [0xa48bf0], eax */ W32((u32)(0xa48bf0u), r_eax);
    /* 004db92d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004db92e: ret  */ FN_RET(0x004db908); r_esp += 4; return;
L_004db92f:; BB(0x004db92f);
    /* 004db92f: ret  */ FN_RET(0x004db908); r_esp += 4; return;
}

void f_004db930(void) /* sub_4DB930 */
{
    FN_ENTER(0x004db930);
    /* 004db930: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 004db935: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004db937: je 0x4db944 */ if (fZ) goto L_004db944;
L_004db939:; BB(0x004db939);
    /* 004db939: mov dword ptr [0xa48c14], 1 */ W32((u32)(0xa48c14u), 0x1u);
    /* 004db943: ret  */ FN_RET(0x004db930); r_esp += 4; return;
L_004db944:; BB(0x004db944);
    /* 004db944: ret  */ FN_RET(0x004db930); r_esp += 4; return;
}

void f_004db948(void) /* sub_4DB948 */
{
    FN_ENTER(0x004db948);
    /* 004db948: mov dword ptr [0xa49560], 0x3f800000 */ W32((u32)(0xa49560u), 0x3f800000u);
    /* 004db952: mov dword ptr [0xa49564], 0x41000000 */ W32((u32)(0xa49564u), 0x41000000u);
    /* 004db95c: mov dword ptr [0xa49568], 0x3fc00000 */ W32((u32)(0xa49568u), 0x3fc00000u);
    /* 004db966: ret  */ FN_RET(0x004db948); r_esp += 4; return;
}

void f_004db968(void) /* sub_4DB968 */
{
    FN_ENTER(0x004db968);
    /* 004db968: sub esp, 0x148 */ {  u32 a = r_esp; u32 b = 0x148u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004db96e: mov byte ptr [esp], 0x7c */ W8((u32)(r_esp), 0x7cu);
    /* 004db972: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 004db977: mov byte ptr [esp + 1], 0x52 */ W8((u32)(r_esp+0x1u), 0x52u);
    /* 004db97c: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 004db981: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004db984: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4db989u); f_008003e0();
    /* 004db989: add esp, 0x148 */ {  u32 a = r_esp; u32 b = 0x148u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004db98f: ret  */ FN_RET(0x004db968); r_esp += 4; return;
}

void f_004db990(void) /* sub_4DB990 */
{
    FN_ENTER(0x004db990);
    /* 004db990: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004db993: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 004db997: mov byte ptr [esp], 0x8a */ W8((u32)(r_esp), 0x8au);
    /* 004db99b: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 004db9a0: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004db9a4: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004db9a7: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4db9acu); f_008003e0();
    /* 004db9ac: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004db9af: ret 4 */ FN_RET(0x004db990); r_esp += 8; return;
}

void f_004db9b4(void) /* sub_4DB9B4 */
{
    FN_ENTER(0x004db9b4);
    /* 004db9b4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004db9b7: mov byte ptr [esp], 0x95 */ W8((u32)(r_esp), 0x95u);
    /* 004db9bb: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 004db9c0: push dword ptr [esp + 0x18] */ { u32 v = R32((u32)(r_esp+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 004db9c4: call 0x4d9554 */ r_esp -= 4; W32(r_esp, 0x4db9c9u); f_004d9554();
    /* 004db9c9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004db9ca: mov edx, dword ptr [0xa9c4f4] */ r_edx = R32((u32)(0xa9c4f4u));
    /* 004db9d0: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004db9d4: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004db9d8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004db9db: xor edx, dword ptr [esp + 0x1c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x1cu)); u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004db9df: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 004db9e3: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004db9e6: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4db9ebu); f_008003e0();
    /* 004db9eb: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004db9ee: ret  */ FN_RET(0x004db9b4); r_esp += 4; return;
}

void f_004db9f0(void) /* sub_4DB9F0 */
{
    FN_ENTER(0x004db9f0);
    /* 004db9f0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004db9f1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004db9f2: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 004db9f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004db9f9: je 0x4dba4f */ if (fZ) goto L_004dba4f;
L_004db9fb:; BB(0x004db9fb);
    /* 004db9fb: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dba00: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 004dba05: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dba07: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dba09: lea edx, [eax + eax*8] */ r_edx = (u32)(r_eax+r_eax*8);
    /* 004dba0c: lea edi, [edx + edx*8 + 0xa48fe0] */ r_edi = (u32)(r_edx+r_edx*8+0xa48fe0u);
    /* 004dba13: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x4dba18u); f_006c1bd4();
    /* 004dba18: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dba19: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dba1b: je 0x4dba4f */ if (fZ) goto L_004dba4f;
L_004dba1d:; BB(0x004dba1d);
    /* 004dba1d: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dba22: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x4dba27u); f_006c1bd4();
    /* 004dba27: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dba28: add eax, 0x27dc */ {  u32 a = r_eax; u32 b = 0x27dcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dba2d: mov esi, eax */ r_esi = r_eax;
    /* 004dba2f: mov ecx, 0x140 */ r_ecx = 0x140u;
    /* 004dba34: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dba35: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004dba38: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 004dba3a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dba3b: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004dba3e: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 004dba40: mov ecx, dword ptr [0xa49510] */ r_ecx = R32((u32)(0xa49510u));
    /* 004dba46: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dba48: je 0x4dba4f */ if (fZ) goto L_004dba4f;
L_004dba4a:; BB(0x004dba4a);
    /* 004dba4a: call 0x4dbacc */ r_esp -= 4; W32(r_esp, 0x4dba4fu); f_004dbacc();
L_004dba4f:; BB(0x004dba4f);
    /* 004dba4f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004dba50: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004dba51: ret  */ FN_RET(0x004db9f0); r_esp += 4; return;
}

void f_004dba54(void) /* sub_4DBA54 */
{
    FN_ENTER(0x004dba54);
    /* 004dba54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dba55: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004dba56: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dba57: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 004dba5b: mov ecx, dword ptr [0xa49510] */ r_ecx = R32((u32)(0xa49510u));
    /* 004dba61: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dba63: je 0x4dbabc */ if (fZ) goto L_004dbabc;
L_004dba65:; BB(0x004dba65);
    /* 004dba65: movzx eax, word ptr [esi + 4] */ r_eax = (u32)R16((u32)(r_esi+0x4u));
    /* 004dba69: cmp eax, dword ptr [0xa9c4f4] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4f4u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004dba6f: je 0x4dbabc */ if (fZ) goto L_004dbabc;
L_004dba71:; BB(0x004dba71);
    /* 004dba71: cmp eax, 0xffff */ {  u32 a = r_eax; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dba76: je 0x4dbac0 */ if (fZ) goto L_004dbac0;
L_004dba78:; BB(0x004dba78);
    /* 004dba78: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dba7a: jl 0x4dbabc */ if ((fS!=fO)) goto L_004dbabc;
L_004dba7c:; BB(0x004dba7c);
    /* 004dba7c: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004dba7f: jge 0x4dbabc */ if ((fS==fO)) goto L_004dbabc;
L_004dba81:; BB(0x004dba81);
    /* 004dba81: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dba83: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dba85: lea ebp, [eax + eax*8] */ r_ebp = (u32)(r_eax+r_eax*8);
    /* 004dba88: lea edi, [ebp + ebp*8 + 0xa48fdc] */ r_edi = (u32)(r_ebp+r_ebp*8+0xa48fdcu);
    /* 004dba8f: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004dba91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dba93: jne 0x4dba9a */ if (!fZ) goto L_004dba9a;
L_004dba95:; BB(0x004dba95);
    /* 004dba95: call 0x4dbacc */ r_esp -= 4; W32(r_esp, 0x4dba9au); f_004dbacc();
L_004dba9a:; BB(0x004dba9a);
    /* 004dba9a: mov dword ptr [ebp + ebp*8 + 0xa48fdc], 1 */ W32((u32)(r_ebp+r_ebp*8+0xa48fdcu), 0x1u);
    /* 004dbaa5: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004dbaa8: lea esi, [esi + 8] */ r_esi = (u32)(r_esi+0x8u);
    /* 004dbaab: mov ecx, 0x140 */ r_ecx = 0x140u;
    /* 004dbab0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dbab1: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004dbab4: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 004dbab6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dbab7: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dbaba: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
L_004dbabc:; BB(0x004dbabc);
    /* 004dbabc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dbabd: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004dbabe: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004dbabf: ret  */ FN_RET(0x004dba54); r_esp += 4; return;
L_004dbac0:; BB(0x004dbac0);
    /* 004dbac0: call 0x4dbacc */ r_esp -= 4; W32(r_esp, 0x4dbac5u); f_004dbacc();
    /* 004dbac5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dbac6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004dbac7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004dbac8: ret  */ FN_RET(0x004dba54); r_esp += 4; return;
}

void f_004dbacc(void) /* sub_4DBACC */
{
    FN_ENTER(0x004dbacc);
    /* 004dbacc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dbacd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004dbace: sub esp, 0x148 */ {  u32 a = r_esp; u32 b = 0x148u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004dbad4: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 004dbad9: mov byte ptr [esp], 0x7c */ W8((u32)(r_esp), 0x7cu);
    /* 004dbadd: mov word ptr [esp + 4], ax */ W16((u32)(r_esp+0x4u), (u16)r_eax);
    /* 004dbae2: mov byte ptr [esp + 1], 0x52 */ W8((u32)(r_esp+0x1u), 0x52u);
    /* 004dbae7: push 0xffff */ { u32 v = 0xffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dbaec: call 0x6c1bd4 */ r_esp -= 4; W32(r_esp, 0x4dbaf1u); f_006c1bd4();
    /* 004dbaf1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dbaf2: lea edi, [esp + 8] */ r_edi = (u32)(r_esp+0x8u);
    /* 004dbaf6: add eax, 0x27dc */ {  u32 a = r_eax; u32 b = 0x27dcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dbafb: mov esi, eax */ r_esi = r_eax;
    /* 004dbafd: mov ecx, 0x140 */ r_ecx = 0x140u;
    /* 004dbb02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004dbb03: shr ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 004dbb06: rep movsd dword ptr es:[edi], dword ptr [esi] */ while (r_ecx) { W32(r_edi, R32(r_esi)); r_esi += rt_df ? -4 : 4; r_edi += rt_df ? -4 : 4; r_ecx--; }
    /* 004dbb08: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dbb09: and ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a & b) & 0xffffffffu; r_ecx = r;  }
    /* 004dbb0c: rep movsb byte ptr es:[edi], byte ptr [esi] */ while (r_ecx) { W8(r_edi, R8(r_esi)); r_esi += rt_df ? -1 : 1; r_edi += rt_df ? -1 : 1; r_ecx--; }
    /* 004dbb0e: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004dbb11: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4dbb16u); f_008003e0();
    /* 004dbb16: add esp, 0x148 */ {  u32 a = r_esp; u32 b = 0x148u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004dbb1c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004dbb1d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004dbb1e: ret  */ FN_RET(0x004dbacc); r_esp += 4; return;
}

void f_004dbb20(void)
{
    FN_ENTER(0x004dbb20);
    /* 004dbb20: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004dbb24: mov ecx, dword ptr [0xa49510] */ r_ecx = R32((u32)(0xa49510u));
    /* 004dbb2a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dbb2c: je 0x4dbb41 */ if (fZ) goto L_004dbb41;
L_004dbb2e:; BB(0x004dbb2e);
    /* 004dbb2e: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 004dbb31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dbb33: jl 0x4dbb3a */ if ((fS!=fO)) goto L_004dbb3a;
L_004dbb35:; BB(0x004dbb35);
    /* 004dbb35: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004dbb38: jl 0x4dbb3b */ if ((fS!=fO)) goto L_004dbb3b;
L_004dbb3a:; BB(0x004dbb3a);
    /* 004dbb3a: ret  */ FN_RET(0x004dbb20); r_esp += 4; return;
L_004dbb3b:; BB(0x004dbb3b);
    /* 004dbb3b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dbb3c: call 0x4d9d1c */ r_esp -= 4; W32(r_esp, 0x4dbb41u); f_004d9d1c();
L_004dbb41:; BB(0x004dbb41);
    /* 004dbb41: ret  */ FN_RET(0x004dbb20); r_esp += 4; return;
}

void f_004dbb44(void) /* sub_4DBB44 */
{
    FN_ENTER(0x004dbb44);
    /* 004dbb44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dbb45: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004dbb46: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004dbb4a: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 004dbb4f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dbb51: je 0x4dbb69 */ if (fZ) goto L_004dbb69;
L_004dbb53:; BB(0x004dbb53);
    /* 004dbb53: mov edi, dword ptr [edx + 4] */ r_edi = R32((u32)(r_edx+0x4u));
    /* 004dbb56: mov esi, dword ptr [edx + 8] */ r_esi = R32((u32)(r_edx+0x8u));
    /* 004dbb59: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004dbb5a: call 0x4d9604 */ r_esp -= 4; W32(r_esp, 0x4dbb5fu); f_004d9604();
    /* 004dbb5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dbb60: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dbb62: jl 0x4dbb69 */ if ((fS!=fO)) goto L_004dbb69;
L_004dbb64:; BB(0x004dbb64);
    /* 004dbb64: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004dbb67: jl 0x4dbb6c */ if ((fS!=fO)) goto L_004dbb6c;
L_004dbb69:; BB(0x004dbb69);
    /* 004dbb69: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004dbb6a: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004dbb6b: ret  */ FN_RET(0x004dbb44); r_esp += 4; return;
L_004dbb6c:; BB(0x004dbb6c);
    /* 004dbb6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dbb6d: call 0x4d8d9c */ r_esp -= 4; W32(r_esp, 0x4dbb72u); f_004d8d9c();
    /* 004dbb72: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dbb73: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dbb75: je 0x4dbb86 */ if (fZ) goto L_004dbb86;
L_004dbb77:; BB(0x004dbb77);
    /* 004dbb77: push 0x8c9f */ { u32 v = 0x8c9fu; r_esp -= 4; W32(r_esp, v); }
    /* 004dbb7c: call 0x4d9554 */ r_esp -= 4; W32(r_esp, 0x4dbb81u); f_004d9554();
    /* 004dbb81: mov esi, eax */ r_esi = r_eax;
    /* 004dbb83: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_004dbb86:; BB(0x004dbb86);
    /* 004dbb86: mov dword ptr [edi*4 + 0xa494ec], esi */ W32((u32)(r_edi*4+0xa494ecu), r_esi);
    /* 004dbb8d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004dbb8e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004dbb8f: ret  */ FN_RET(0x004dbb44); r_esp += 4; return;
}

void f_004dbb90(void)
{
    FN_ENTER(0x004dbb90);
    /* 004dbb90: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 004dbb94: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 004dbb99: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dbb9b: je 0x4dbbb1 */ if (fZ) goto L_004dbbb1;
L_004dbb9d:; BB(0x004dbb9d);
    /* 004dbb9d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004dbba0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004dbba2: jl 0x4dbba9 */ if ((fS!=fO)) goto L_004dbba9;
L_004dbba4:; BB(0x004dbba4);
    /* 004dbba4: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004dbba7: jle 0x4dbbab */ if ((fZ||fS!=fO)) goto L_004dbbab;
L_004dbba9:; BB(0x004dbba9);
    /* 004dbba9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_004dbbab:; BB(0x004dbbab);
    /* 004dbbab: mov dword ptr [0xa48c04], eax */ W32((u32)(0xa48c04u), r_eax);
    /* 004dbbb0: ret  */ FN_RET(0x004dbb90); r_esp += 4; return;
L_004dbbb1:; BB(0x004dbbb1);
    /* 004dbbb1: ret  */ FN_RET(0x004dbb90); r_esp += 4; return;
}

void f_004dbbb4(void) /* sub_4DBBB4 */
{
    FN_ENTER(0x004dbbb4);
    /* 004dbbb4: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004dbbb7: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 004dbbbb: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 004dbbc0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbbc2: je 0x4dbbe2 */ if (fZ) goto L_004dbbe2;
L_004dbbc4:; BB(0x004dbbc4);
    /* 004dbbc4: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 004dbbc9: mov byte ptr [esp], 0x97 */ W8((u32)(r_esp), 0x97u);
    /* 004dbbcd: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004dbbd1: mov byte ptr [esp + 1], 5 */ W8((u32)(r_esp+0x1u), 0x5u);
    /* 004dbbd6: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 004dbbda: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004dbbdd: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4dbbe2u); f_008003e0();
L_004dbbe2:; BB(0x004dbbe2);
    /* 004dbbe2: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004dbbe5: ret  */ FN_RET(0x004dbbb4); r_esp += 4; return;
}

void f_004dbbe8(void) /* sub_4DBBE8 */
{
    FN_ENTER(0x004dbbe8);
    /* 004dbbe8: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004dbbeb: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 004dbbef: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 004dbbf4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbbf6: je 0x4dbc16 */ if (fZ) goto L_004dbc16;
L_004dbbf8:; BB(0x004dbbf8);
    /* 004dbbf8: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004dbbfa: jl 0x4dbc16 */ if ((fS!=fO)) goto L_004dbc16;
L_004dbbfc:; BB(0x004dbbfc);
    /* 004dbbfc: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dbbff: jge 0x4dbc16 */ if ((fS==fO)) goto L_004dbc16;
L_004dbc01:; BB(0x004dbc01);
    /* 004dbc01: mov byte ptr [esp], 0x9d */ W8((u32)(r_esp), 0x9du);
    /* 004dbc05: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 004dbc09: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 004dbc0c: mov byte ptr [esp + 1], 2 */ W8((u32)(r_esp+0x1u), 0x2u);
    /* 004dbc11: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4dbc16u); f_008003e0();
L_004dbc16:; BB(0x004dbc16);
    /* 004dbc16: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004dbc19: ret  */ FN_RET(0x004dbbe8); r_esp += 4; return;
}

void f_004dbc1c(void) /* sub_4DBC1C */
{
    FN_ENTER(0x004dbc1c);
    /* 004dbc1c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dbc1d: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 004dbc21: mov eax, dword ptr [0xa49510] */ r_eax = R32((u32)(0xa49510u));
    /* 004dbc26: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dbc28: je 0x4dbc36 */ if (fZ) goto L_004dbc36;
L_004dbc2a:; BB(0x004dbc2a);
    /* 004dbc2a: mov ebx, dword ptr [edx + 4] */ r_ebx = R32((u32)(r_edx+0x4u));
    /* 004dbc2d: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dbc2f: jl 0x4dbc36 */ if ((fS!=fO)) goto L_004dbc36;
L_004dbc31:; BB(0x004dbc31);
    /* 004dbc31: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004dbc34: jl 0x4dbc38 */ if ((fS!=fO)) goto L_004dbc38;
L_004dbc36:; BB(0x004dbc36);
    /* 004dbc36: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dbc37: ret  */ FN_RET(0x004dbc1c); r_esp += 4; return;
L_004dbc38:; BB(0x004dbc38);
    /* 004dbc38: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dbc39: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4dbc3eu); f_0068d5a8();
    /* 004dbc3e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dbc3f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dbc41: je 0x4dbc36 */ if (fZ) goto L_004dbc36;
L_004dbc43:; BB(0x004dbc43);
    /* 004dbc43: mov dword ptr [ebx*4 + 0xa48c18], 1 */ W32((u32)(r_ebx*4+0xa48c18u), 0x1u);
    /* 004dbc4e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dbc4f: ret  */ FN_RET(0x004dbc1c); r_esp += 4; return;
}

void f_004dbc50(void) /* sub_4DBC50 */
{
    FN_ENTER(0x004dbc50);
    /* 004dbc50: mov dword ptr [0xa4956c], 0x3f800000 */ W32((u32)(0xa4956cu), 0x3f800000u);
    /* 004dbc5a: mov dword ptr [0xa49570], 0x41000000 */ W32((u32)(0xa49570u), 0x41000000u);
    /* 004dbc64: mov dword ptr [0xa49574], 0x3fc00000 */ W32((u32)(0xa49574u), 0x3fc00000u);
    /* 004dbc6e: ret  */ FN_RET(0x004dbc50); r_esp += 4; return;
}

void f_004dbc70(void) /* sub_4DBC70 */
{
    FN_ENTER(0x004dbc70);
    /* 004dbc70: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dbc71: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004dbc73: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004dbc75: call 0x4dbc94 */ r_esp -= 4; W32(r_esp, 0x4dbc7au); f_004dbc94();
    /* 004dbc7a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004dbc7e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dbc80: jne 0x4dbc86 */ if (!fZ) goto L_004dbc86;
L_004dbc82:; BB(0x004dbc82);
    /* 004dbc82: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dbc83: ret 4 */ FN_RET(0x004dbc70); r_esp += 8; return;
L_004dbc86:; BB(0x004dbc86);
    /* 004dbc86: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dbc87: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x4dbc8cu); f_005c2f74();
    /* 004dbc8c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dbc8d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dbc8e: ret 4 */ FN_RET(0x004dbc70); r_esp += 8; return;
}

void f_004dbc94(void) /* sub_4DBC94 */
{
    FN_ENTER(0x004dbc94);
    /* 004dbc94: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dbc95: mov ebp, esp */ r_ebp = r_esp;
    /* 004dbc97: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dbc99: push 0x8d23e0 */ { u32 v = 0x8d23e0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dbc9e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 004dbca4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dbca5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 004dbcac: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004dbcaf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 004dbcb2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 004dbcb5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 004dbcb8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 004dbcbb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 004dbcbe: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 004dbcc5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 004dbcc8: mov eax, dword ptr [ecx + 0x20] */ r_eax = R32((u32)(r_ecx+0x20u));
    /* 004dbccb: mov dword ptr [ecx], 0xafcd50 */ W32((u32)(r_ecx), 0xafcd50u);
    /* 004dbcd1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbcd3: je 0x4dbce7 */ if (fZ) goto L_004dbce7;
L_004dbcd5:; BB(0x004dbcd5);
    /* 004dbcd5: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 004dbcd8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbcda: jne 0x4dbce7 */ if (!fZ) goto L_004dbce7;
L_004dbcdc:; BB(0x004dbcdc);
    /* 004dbcdc: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dbcde: call 0x4dbbb4 */ r_esp -= 4; W32(r_esp, 0x4dbce3u); f_004dbbb4();
    /* 004dbce3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dbce4: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_004dbce7:; BB(0x004dbce7);
    /* 004dbce7: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 004dbcee: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x4dbcf3u); f_008171e8();
    /* 004dbcf3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 004dbcf6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 004dbcfd: mov esp, ebp */ r_esp = r_ebp;
    /* 004dbcff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dbd00: ret  */ FN_RET(0x004dbc94); r_esp += 4; return;
}

void f_004dbd04(void) /* sub_4DBD04 */
{
    FN_ENTER(0x004dbd04);
    /* 004dbd04: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dbd05: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 004dbd06: mov esi, ecx */ r_esi = r_ecx;
    /* 004dbd08: mov eax, dword ptr [0xa9c4f4] */ r_eax = R32((u32)(0xa9c4f4u));
    /* 004dbd0d: cmp eax, dword ptr [0xa9c4dc] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa9c4dcu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbd13: jne 0x4dbd1c */ if (!fZ) goto L_004dbd1c;
L_004dbd15:; BB(0x004dbd15);
    /* 004dbd15: mov eax, 1 */ r_eax = 0x1u;
    /* 004dbd1a: jmp 0x4dbd1e */ goto L_004dbd1e;
L_004dbd1c:; BB(0x004dbd1c);
    /* 004dbd1c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
L_004dbd1e:; BB(0x004dbd1e);
    /* 004dbd1e: mov dword ptr [esi + 0x20], eax */ W32((u32)(r_esi+0x20u), r_eax);
    /* 004dbd21: mov eax, dword ptr [esi + 0x1c] */ r_eax = R32((u32)(r_esi+0x1cu));
    /* 004dbd24: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbd26: je 0x4dbdf0 */ if (fZ) goto L_004dbdf0;
L_004dbd2c:; BB(0x004dbd2c);
    /* 004dbd2c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbd2f: je 0x4dbd8a */ if (fZ) goto L_004dbd8a;
L_004dbd31:; BB(0x004dbd31);
    /* 004dbd31: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbd34: je 0x4dbd52 */ if (fZ) goto L_004dbd52;
L_004dbd36:; BB(0x004dbd36);
    /* 004dbd36: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbd39: jne 0x4dbd44 */ if (!fZ) goto L_004dbd44;
L_004dbd3b:; BB(0x004dbd3b);
    /* 004dbd3b: mov ecx, esi */ r_ecx = r_esi;
    /* 004dbd3d: call 0x4dbfb8 */ r_esp -= 4; W32(r_esp, 0x4dbd42u); f_004dbfb8();
    /* 004dbd42: jmp 0x4dbd59 */ goto L_004dbd59;
L_004dbd44:; BB(0x004dbd44);
    /* 004dbd44: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbd47: jne 0x4dbd59 */ if (!fZ) goto L_004dbd59;
L_004dbd49:; BB(0x004dbd49);
    /* 004dbd49: mov ecx, esi */ r_ecx = r_esi;
    /* 004dbd4b: call 0x4dbf74 */ r_esp -= 4; W32(r_esp, 0x4dbd50u); f_004dbf74();
    /* 004dbd50: jmp 0x4dbd59 */ goto L_004dbd59;
L_004dbd52:; BB(0x004dbd52);
    /* 004dbd52: mov ecx, esi */ r_ecx = r_esi;
    /* 004dbd54: call 0x4dc160 */ r_esp -= 4; W32(r_esp, 0x4dbd59u); f_004dc160();
L_004dbd59:; BB(0x004dbd59);
    /* 004dbd59: call 0x4dc208 */ r_esp -= 4; W32(r_esp, 0x4dbd5eu); f_004dc208();
    /* 004dbd5e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dbd60: jne 0x4dbd87 */ if (!fZ) goto L_004dbd87;
L_004dbd62:; BB(0x004dbd62);
    /* 004dbd62: mov ecx, esi */ r_ecx = r_esi;
    /* 004dbd64: call 0x4dc224 */ r_esp -= 4; W32(r_esp, 0x4dbd69u); f_004dc224();
    /* 004dbd69: mov ecx, esi */ r_ecx = r_esi;
    /* 004dbd6b: call 0x4dc120 */ r_esp -= 4; W32(r_esp, 0x4dbd70u); f_004dc120();
    /* 004dbd70: mov ecx, esi */ r_ecx = r_esi;
    /* 004dbd72: call 0x4dc140 */ r_esp -= 4; W32(r_esp, 0x4dbd77u); f_004dc140();
    /* 004dbd77: movzx eax, word ptr [esi + 8] */ r_eax = (u32)R16((u32)(r_esi+0x8u));
    /* 004dbd7b: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dbd80: mov word ptr [esi + 8], ax */ W16((u32)(r_esi+0x8u), (u16)r_eax);
    /* 004dbd84: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004dbd85: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004dbd86: ret  */ FN_RET(0x004dbd04); r_esp += 4; return;
L_004dbd87:; BB(0x004dbd87);
    /* 004dbd87: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 004dbd88: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004dbd89: ret  */ FN_RET(0x004dbd04); r_esp += 4; return;
L_004dbd8a:; BB(0x004dbd8a);
    /* 004dbd8a: mov ecx, esi */ r_ecx = r_esi;
    /* 004dbd8c: call 0x4dbeb4 */ r_esp -= 4; W32(r_esp, 0x4dbd91u); f_004dbeb4();
    /* 004dbd91: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dbd97: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4dbd9cu); f_0068d5a8();
    /* 004dbd9c: mov edi, eax */ r_edi = r_eax;
    /* 004dbd9e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dbda1: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbda3: je 0x4dbd59 */ if (fZ) goto L_004dbd59;
L_004dbda5:; BB(0x004dbda5);
    /* 004dbda5: mov ecx, edi */ r_ecx = r_edi;
    /* 004dbda7: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x4dbdacu); f_00689410();
    /* 004dbdac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbdae: jne 0x4dbd59 */ if (!fZ) goto L_004dbd59;
L_004dbdb0:; BB(0x004dbdb0);
    /* 004dbdb0: mov ecx, edi */ r_ecx = r_edi;
    /* 004dbdb2: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x4dbdb7u); f_00694780();
    /* 004dbdb7: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dbdbd: lea eax, [eax + eax*4] */ r_eax = (u32)(r_eax+r_eax*4);
    /* 004dbdc0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dbdc2: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dbdc4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dbdc6: lea ecx, [eax + eax + 0xaae75c] */ r_ecx = (u32)(r_eax+r_eax+0xaae75cu);
    /* 004dbdcd: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x4dbdd2u); f_007c1160();
    /* 004dbdd2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbdd4: je 0x4dbd59 */ if (fZ) goto L_004dbd59;
L_004dbdd6:; BB(0x004dbdd6);
    /* 004dbdd6: mov ecx, esi */ r_ecx = r_esi;
    /* 004dbdd8: call 0x4dc224 */ r_esp -= 4; W32(r_esp, 0x4dbdddu); f_004dc224();
    /* 004dbddd: mov ecx, esi */ r_ecx = r_esi;
    /* 004dbddf: call 0x4dbf5c */ r_esp -= 4; W32(r_esp, 0x4dbde4u); f_004dbf5c();
    /* 004dbde4: mov dword ptr [esi + 0x1c], 2 */ W32((u32)(r_esi+0x1cu), 0x2u);
    /* 004dbdeb: jmp 0x4dbd59 */ goto L_004dbd59;
L_004dbdf0:; BB(0x004dbdf0);
    /* 004dbdf0: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x4dbdf5u); f_00807ac0();
    /* 004dbdf5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dbdf6: call 0x807e20 */ r_esp -= 4; W32(r_esp, 0x4dbdfbu); f_00807e20();
    /* 004dbdfb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dbdfc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbdfe: je 0x4dbd59 */ if (fZ) goto L_004dbd59;
L_004dbe04:; BB(0x004dbe04);
    /* 004dbe04: call 0x719914 */ r_esp -= 4; W32(r_esp, 0x4dbe09u); f_00719914();
    /* 004dbe09: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbe0b: je 0x4dbd59 */ if (fZ) goto L_004dbd59;
L_004dbe11:; BB(0x004dbe11);
    /* 004dbe11: mov ecx, esi */ r_ecx = r_esi;
    /* 004dbe13: call 0x4dbe80 */ r_esp -= 4; W32(r_esp, 0x4dbe18u); f_004dbe80();
    /* 004dbe18: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_004dbe1a:; BB(0x004dbe1a);
    /* 004dbe1a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004dbe1b: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4dbe20u); f_0068d5a8();
    /* 004dbe20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dbe21: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbe23: je 0x4dbe33 */ if (fZ) goto L_004dbe33;
L_004dbe25:; BB(0x004dbe25);
    /* 004dbe25: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 004dbe28: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbe2d: jne 0x4dbd59 */ if (!fZ) goto L_004dbd59;
L_004dbe33:; BB(0x004dbe33);
    /* 004dbe33: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004dbe36: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004dbe39: jl 0x4dbe1a */ if ((fS!=fO)) goto L_004dbe1a;
L_004dbe3b:; BB(0x004dbe3b);
    /* 004dbe3b: mov eax, dword ptr [esi + 0x20] */ r_eax = R32((u32)(r_esi+0x20u));
    /* 004dbe3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbe40: je 0x4dbe5c */ if (fZ) goto L_004dbe5c;
L_004dbe42:; BB(0x004dbe42);
    /* 004dbe42: mov ecx, esi */ r_ecx = r_esi;
    /* 004dbe44: call 0x4dc224 */ r_esp -= 4; W32(r_esp, 0x4dbe49u); f_004dc224();
    /* 004dbe49: mov ecx, esi */ r_ecx = r_esi;
    /* 004dbe4b: call 0x4dbf5c */ r_esp -= 4; W32(r_esp, 0x4dbe50u); f_004dbf5c();
    /* 004dbe50: mov dword ptr [esi + 0x1c], 2 */ W32((u32)(r_esi+0x1cu), 0x2u);
    /* 004dbe57: jmp 0x4dbd59 */ goto L_004dbd59;
L_004dbe5c:; BB(0x004dbe5c);
    /* 004dbe5c: mov ecx, esi */ r_ecx = r_esi;
    /* 004dbe5e: call 0x4dc224 */ r_esp -= 4; W32(r_esp, 0x4dbe63u); f_004dc224();
    /* 004dbe63: mov ecx, esi */ r_ecx = r_esi;
    /* 004dbe65: call 0x4dbe80 */ r_esp -= 4; W32(r_esp, 0x4dbe6au); f_004dbe80();
    /* 004dbe6a: mov ecx, esi */ r_ecx = r_esi;
    /* 004dbe6c: call 0x4dbecc */ r_esp -= 4; W32(r_esp, 0x4dbe71u); f_004dbecc();
    /* 004dbe71: mov dword ptr [esi + 0x1c], 3 */ W32((u32)(r_esi+0x1cu), 0x3u);
    /* 004dbe78: jmp 0x4dbd59 */ goto L_004dbd59;
}

void f_004dbe80(void) /* sub_4DBE80 */
{
    FN_ENTER(0x004dbe80);
    /* 004dbe80: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dbe86: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4dbe8bu); f_0068d5a8();
    /* 004dbe8b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dbe8c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dbe8e: je 0x4dbeb1 */ if (fZ) goto L_004dbeb1;
L_004dbe90:; BB(0x004dbe90);
    /* 004dbe90: mov edx, dword ptr [eax + 0x33c] */ r_edx = R32((u32)(r_eax+0x33cu));
    /* 004dbe96: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004dbe99: je 0x4dbea2 */ if (fZ) goto L_004dbea2;
L_004dbe9b:; BB(0x004dbe9b);
    /* 004dbe9b: mov edx, 1 */ r_edx = 0x1u;
    /* 004dbea0: jmp 0x4dbea4 */ goto L_004dbea4;
L_004dbea2:; BB(0x004dbea2);
    /* 004dbea2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_004dbea4:; BB(0x004dbea4);
    /* 004dbea4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dbea6: jne 0x4dbeb1 */ if (!fZ) goto L_004dbeb1;
L_004dbea8:; BB(0x004dbea8);
    /* 004dbea8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 004dbeaa: mov ecx, eax */ r_ecx = r_eax;
    /* 004dbeac: call 0x6854a8 */ r_esp -= 4; W32(r_esp, 0x4dbeb1u); f_006854a8();
L_004dbeb1:; BB(0x004dbeb1);
    /* 004dbeb1: ret  */ FN_RET(0x004dbe80); r_esp += 4; return;
}

void f_004dbeb4(void) /* sub_4DBEB4 */
{
    FN_ENTER(0x004dbeb4);
    /* 004dbeb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dbeb5: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004dbeb7: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dbebd: call 0x7181b8 */ r_esp -= 4; W32(r_esp, 0x4dbec2u); f_007181b8();
    /* 004dbec2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dbec3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004dbec5: call 0x4dbe80 */ r_esp -= 4; W32(r_esp, 0x4dbecau); f_004dbe80();
    /* 004dbeca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dbecb: ret  */ FN_RET(0x004dbeb4); r_esp += 4; return;
}

void f_004dbecc(void) /* sub_4DBECC */
{
    FN_ENTER(0x004dbecc);
    /* 004dbecc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dbecd: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004dbecf: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 004dbed2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbed4: je 0x4dbeea */ if (fZ) goto L_004dbeea;
L_004dbed6:; BB(0x004dbed6);
    /* 004dbed6: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x4dbedbu); f_007127b0();
    /* 004dbedb: mov dword ptr [ebp + 0x30], 0 */ W32((u32)(r_ebp+0x30u), 0x0u);
    /* 004dbee2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004dbee4: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x4dbee9u); f_00791748();
    /* 004dbee9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_004dbeea:; BB(0x004dbeea);
    /* 004dbeea: movzx eax, byte ptr [0xa49578] */ r_eax = (u32)R8((u32)(0xa49578u));
    /* 004dbef1: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004dbef3: jne 0x4dbf13 */ if (!fZ) goto L_004dbf13;
L_004dbef5:; BB(0x004dbef5);
    /* 004dbef5: mov dword ptr [0xa4957c], 0x43b40000 */ W32((u32)(0xa4957cu), 0x43b40000u);
    /* 004dbeff: or eax, 0xffffff01 */ {  u32 a = r_eax; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004dbf04: mov byte ptr [0xa49578], al */ W8((u32)(0xa49578u), (u8)r_eax);
    /* 004dbf09: mov dword ptr [0xa49580], 0x42fa0000 */ W32((u32)(0xa49580u), 0x42fa0000u);
L_004dbf13:; BB(0x004dbf13);
    /* 004dbf13: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 004dbf15: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x4dbf1au); f_0073ec50();
    /* 004dbf1a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004dbf1c: push 0xa4957c */ { u32 v = 0xa4957cu; r_esp -= 4; W32(r_esp, v); }
    /* 004dbf21: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dbf22: call 0x73a8dc */ r_esp -= 4; W32(r_esp, 0x4dbf27u); f_0073a8dc();
    /* 004dbf27: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dbf2a: mov dword ptr [ebp + 0x30], eax */ W32((u32)(r_ebp+0x30u), r_eax);
    /* 004dbf2d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dbf2f: je 0x4dbf59 */ if (fZ) goto L_004dbf59;
L_004dbf31:; BB(0x004dbf31);
    /* 004dbf31: push 0x47891c00 */ { u32 v = 0x47891c00u; r_esp -= 4; W32(r_esp, v); }
    /* 004dbf36: mov ecx, eax */ r_ecx = r_eax;
    /* 004dbf38: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x4dbf3du); f_00712624();
    /* 004dbf3d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004dbf3f: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x4dbf44u); f_00791748();
    /* 004dbf44: push 0x5e */ { u32 v = 0x5eu; r_esp -= 4; W32(r_esp, v); }
    /* 004dbf46: call 0x7930dc */ r_esp -= 4; W32(r_esp, 0x4dbf4bu); f_007930dc();
    /* 004dbf4b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dbf4e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004dbf50: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dbf51: mov ecx, dword ptr [ebp + 0x30] */ r_ecx = R32((u32)(r_ebp+0x30u));
    /* 004dbf54: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x4dbf59u); f_0073ae38();
L_004dbf59:; BB(0x004dbf59);
    /* 004dbf59: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dbf5a: ret  */ FN_RET(0x004dbecc); r_esp += 4; return;
}

void f_004dbf5c(void) /* sub_4DBF5C */
{
    FN_ENTER(0x004dbf5c);
    /* 004dbf5c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dbf5d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004dbf5f: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004dbf65: call 0x717f08 */ r_esp -= 4; W32(r_esp, 0x4dbf6au); f_00717f08();
    /* 004dbf6a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dbf6b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004dbf6d: call 0x4dbe80 */ r_esp -= 4; W32(r_esp, 0x4dbf72u); f_004dbe80();
    /* 004dbf72: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dbf73: ret  */ FN_RET(0x004dbf5c); r_esp += 4; return;
}

void f_004dbf74(void) /* sub_4DBF74 */
{
    FN_ENTER(0x004dbf74);
    /* 004dbf74: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004dbf75: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004dbf77: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004dbf79: call 0x4dbeb4 */ r_esp -= 4; W32(r_esp, 0x4dbf7eu); f_004dbeb4();
    /* 004dbf7e: mov eax, dword ptr [ebp + 0x28] */ r_eax = R32((u32)(r_ebp+0x28u));
    /* 004dbf81: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004dbf84: mov dword ptr [ebp + 0x28], eax */ W32((u32)(r_ebp+0x28u), r_eax);
    /* 004dbf87: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dbf89: jle 0x4dbf8d */ if ((fZ||fS!=fO)) goto L_004dbf8d;
L_004dbf8b:; BB(0x004dbf8b);
    /* 004dbf8b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dbf8c: ret  */ FN_RET(0x004dbf74); r_esp += 4; return;
L_004dbf8d:; BB(0x004dbf8d);
    /* 004dbf8d: call 0x4da0c8 */ r_esp -= 4; W32(r_esp, 0x4dbf92u); f_004da0c8();
    /* 004dbf92: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004dbf94: call 0x4dc224 */ r_esp -= 4; W32(r_esp, 0x4dbf99u); f_004dc224();
    /* 004dbf99: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004dbf9b: call 0x4dc120 */ r_esp -= 4; W32(r_esp, 0x4dbfa0u); f_004dc120();
    /* 004dbfa0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004dbfa2: call 0x4dc140 */ r_esp -= 4; W32(r_esp, 0x4dbfa7u); f_004dc140();
    /* 004dbfa7: movzx eax, word ptr [ebp + 8] */ r_eax = (u32)R16((u32)(r_ebp+0x8u));
    /* 004dbfab: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dbfb0: mov word ptr [ebp + 8], ax */ W16((u32)(r_ebp+0x8u), (u16)r_eax);
    /* 004dbfb4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004dbfb5: ret  */ FN_RET(0x004dbf74); r_esp += 4; return;
}

void f_004dbfb8(void) /* sub_4DBFB8 */
{
    FN_ENTER(0x004dbfb8);
    /* 004dbfb8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004dbfb9: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004dbfbb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004dbfbd: call 0x4dbe80 */ r_esp -= 4; W32(r_esp, 0x4dbfc2u); f_004dbe80();
    /* 004dbfc2: call 0x4da6f0 */ r_esp -= 4; W32(r_esp, 0x4dbfc7u); f_004da6f0();
    /* 004dbfc7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbfc9: jne 0x4dbffa */ if (!fZ) goto L_004dbffa;
L_004dbfcb:; BB(0x004dbfcb);
    /* 004dbfcb: push 0x909948 */ { u32 v = 0x909948u; r_esp -= 4; W32(r_esp, v); }
    /* 004dbfd0: call 0x814f0c */ r_esp -= 4; W32(r_esp, 0x4dbfd5u); f_00814f0c();
    /* 004dbfd5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004dbfd6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004dbfd8: call 0x4dc224 */ r_esp -= 4; W32(r_esp, 0x4dbfddu); f_004dc224();
    /* 004dbfdd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004dbfdf: call 0x4dc120 */ r_esp -= 4; W32(r_esp, 0x4dbfe4u); f_004dc120();
    /* 004dbfe4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004dbfe6: call 0x4dc140 */ r_esp -= 4; W32(r_esp, 0x4dbfebu); f_004dc140();
    /* 004dbfeb: movzx eax, word ptr [ebx + 8] */ r_eax = (u32)R16((u32)(r_ebx+0x8u));
    /* 004dbfef: or eax, 0xffff0001 */ {  u32 a = r_eax; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dbff4: mov word ptr [ebx + 8], ax */ W16((u32)(r_ebx+0x8u), (u16)r_eax);
    /* 004dbff8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dbff9: ret  */ FN_RET(0x004dbfb8); r_esp += 4; return;
L_004dbffa:; BB(0x004dbffa);
    /* 004dbffa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004dbffd: jne 0x4dc03d */ if (!fZ) goto L_004dc03d;
L_004dbfff:; BB(0x004dbfff);
    /* 004dbfff: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004dc001: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc002: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc003: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004dc004: push 0x581 */ { u32 v = 0x581u; r_esp -= 4; W32(r_esp, v); }
    /* 004dc009: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4dc00eu); f_00814298();
    /* 004dc00e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004dc011: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004dc013: call 0x4dc224 */ r_esp -= 4; W32(r_esp, 0x4dc018u); f_004dc224();
    /* 004dc018: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004dc01a: call 0x4dbeb4 */ r_esp -= 4; W32(r_esp, 0x4dc01fu); f_004dbeb4();
    /* 004dc01f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004dc021: call 0x4dc140 */ r_esp -= 4; W32(r_esp, 0x4dc026u); f_004dc140();
    /* 004dc026: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004dc028: call 0x4dc120 */ r_esp -= 4; W32(r_esp, 0x4dc02du); f_004dc120();
    /* 004dc02d: mov dword ptr [ebx + 0x28], 0x1e */ W32((u32)(r_ebx+0x28u), 0x1eu);
    /* 004dc034: mov dword ptr [ebx + 0x1c], 4 */ W32((u32)(r_ebx+0x1cu), 0x4u);
    /* 004dc03b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dc03c: ret  */ FN_RET(0x004dbfb8); r_esp += 4; return;
L_004dc03d:; BB(0x004dc03d);
    /* 004dc03d: mov eax, dword ptr [ebx + 0x20] */ r_eax = R32((u32)(r_ebx+0x20u));
    /* 004dc040: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dc042: je 0x4dc070 */ if (fZ) goto L_004dc070;
L_004dc044:; BB(0x004dc044);
    /* 004dc044: mov eax, dword ptr [ebx + 0x24] */ r_eax = R32((u32)(r_ebx+0x24u));
    /* 004dc047: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004dc049: jne 0x4dc070 */ if (!fZ) goto L_004dc070;
L_004dc04b:; BB(0x004dc04b);
    /* 004dc04b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004dc04d: call 0x4dc224 */ r_esp -= 4; W32(r_esp, 0x4dc052u); f_004dc224();
    /* 004dc052: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004dc054: call 0x4dbf5c */ r_esp -= 4; W32(r_esp, 0x4dc059u); f_004dbf5c();
    /* 004dc059: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004dc05b: call 0x4dc140 */ r_esp -= 4; W32(r_esp, 0x4dc060u); f_004dc140();
    /* 004dc060: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004dc062: call 0x4dc074 */ r_esp -= 4; W32(r_esp, 0x4dc067u); f_004dc074();
    /* 004dc067: mov dword ptr [ebx + 0x1c], 2 */ W32((u32)(r_ebx+0x1cu), 0x2u);
    /* 004dc06e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dc06f: ret  */ FN_RET(0x004dbfb8); r_esp += 4; return;
L_004dc070:; BB(0x004dc070);
    /* 004dc070: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004dc071: ret  */ FN_RET(0x004dbfb8); r_esp += 4; return;
}

