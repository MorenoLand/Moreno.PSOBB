#include "protos.h"

void f_004a323c(void) /* sub_4A323C */
{
    FN_ENTER(0x004a323c);
    /* 004a323c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a323d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a323e: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a3241: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004a3243: mov eax, dword ptr [0x9038a0] */ r_eax = R32((u32)(0x9038a0u));
    /* 004a3248: mov edx, dword ptr [0x9038b0] */ r_edx = R32((u32)(0x9038b0u));
    /* 004a324e: mov dword ptr [esp + 4], 0 */ W32((u32)(r_esp+0x4u), 0x0u);
    /* 004a3256: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004a3259: mov dword ptr [esp + 8], 0 */ W32((u32)(r_esp+0x8u), 0x0u);
    /* 004a3261: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a3263: mov dword ptr [esp + 0xc], 0x40e00000 */ W32((u32)(r_esp+0xcu), 0x40e00000u);
    /* 004a326b: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 004a326f: mov edx, dword ptr [ebp + 0x580] */ r_edx = R32((u32)(r_ebp+0x580u));
    /* 004a3275: mov edi, dword ptr [edx + 0xc] */ r_edi = R32((u32)(r_edx+0xcu));
    /* 004a3278: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a327a: jle 0x4a328c */ if ((fZ||fS!=fO)) goto L_004a328c;
L_004a327c:; BB(0x004a327c);
    /* 004a327c: mov edi, dword ptr [edx] */ r_edi = R32((u32)(r_edx));
    /* 004a327e: mov ecx, dword ptr [edx + 4] */ r_ecx = R32((u32)(r_edx+0x4u));
    /* 004a3281: mov dword ptr [edi + eax*4], ecx */ W32((u32)(r_edi+r_eax*4), r_ecx);
    /* 004a3284: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a3287: cmp eax, dword ptr [edx + 0xc] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0xcu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a328a: jl 0x4a327c */ if ((fS!=fO)) goto L_004a327c;
L_004a328c:; BB(0x004a328c);
    /* 004a328c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a328e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a328f: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 004a3292: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a3294: push dword ptr [0xa47654] */ { u32 v = R32((u32)(0xa47654u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a329a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a329b: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4a32a0u); f_00520c70();
    /* 004a32a0: mov dword ptr [esp + 8], 0x41f00000 */ W32((u32)(r_esp+0x8u), 0x41f00000u);
    /* 004a32a8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a32ab: lea edi, [ebp + 0x44c] */ r_edi = (u32)(r_ebp+0x44cu);
    /* 004a32b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a32b2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a32b3: call 0x4ab94c */ r_esp -= 4; W32(r_esp, 0x4a32b8u); f_004ab94c();
    /* 004a32b8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a32bb: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a32be: push dword ptr [ebp + 0x580] */ { u32 v = R32((u32)(r_ebp+0x580u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a32c4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a32c5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a32c7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a32c8: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4a32cdu); f_0051fdf8();
    /* 004a32cd: mov dword ptr [esp + 8], 0x42480000 */ W32((u32)(r_esp+0x8u), 0x42480000u);
    /* 004a32d5: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a32d8: lea edi, [ebp + 0x3c8] */ r_edi = (u32)(r_ebp+0x3c8u);
    /* 004a32de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a32df: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a32e0: call 0x4ab94c */ r_esp -= 4; W32(r_esp, 0x4a32e5u); f_004ab94c();
    /* 004a32e5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a32e8: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a32eb: push dword ptr [ebp + 0x580] */ { u32 v = R32((u32)(r_ebp+0x580u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a32f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a32f2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a32f4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a32f5: call 0x51fdf8 */ r_esp -= 4; W32(r_esp, 0x4a32fau); f_0051fdf8();
    /* 004a32fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a32fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a32fd: push dword ptr [0xa47648] */ { u32 v = R32((u32)(0xa47648u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a3303: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a3304: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a3306: call 0x520c70 */ r_esp -= 4; W32(r_esp, 0x4a330bu); f_00520c70();
    /* 004a330b: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a330e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a330f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a3310: ret  */ FN_RET(0x004a323c); r_esp += 4; return;
}

void f_004a3314(void) /* sub_4A3314 */
{
    FN_ENTER(0x004a3314);
    /* 004a3314: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a3315: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a3318: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a331a: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 004a331d: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4a3322u); f_0082dcbc();
    /* 004a3322: fld dword ptr [0x903e4c] */ FPUSH(R_F32((u32)(0x903e4cu)));
    /* 004a3328: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a332a: fadd dword ptr [ebx + 0x44c] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x44cu));
    /* 004a3330: mov ecx, dword ptr [ebx + 0x60] */ r_ecx = R32((u32)(r_ebx+0x60u));
    /* 004a3333: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004a3336: fld dword ptr [0x903e48] */ FPUSH(R_F32((u32)(0x903e48u)));
    /* 004a333c: fadd dword ptr [ebx + 0x450] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x450u));
    /* 004a3342: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004a3346: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4a334bu); f_0082ddd8();
    /* 004a334b: fld dword ptr [0x903e4c] */ FPUSH(R_F32((u32)(0x903e4cu)));
    /* 004a3351: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 004a3354: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a3356: fadd dword ptr [ebx + 0x454] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x454u));
    /* 004a335c: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004a3360: mov dword ptr [esp + 0xc], 0x4000 */ W32((u32)(r_esp+0xcu), 0x4000u);
    /* 004a3368: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004a336c: mov ecx, dword ptr [ebx + 0x72c] */ r_ecx = R32((u32)(r_ebx+0x72cu));
    /* 004a3372: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3374: je 0x4a341b */ if (fZ) goto L_004a341b;
L_004a337a:; BB(0x004a337a);
    /* 004a337a: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a337d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a337e: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4a3383u); f_00508db8();
    /* 004a3383: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004a3387: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a3388: mov ecx, dword ptr [ebx + 0x72c] */ r_ecx = R32((u32)(r_ebx+0x72cu));
    /* 004a338e: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x4a3393u); f_00508dd0();
L_004a3393:; BB(0x004a3393);
    /* 004a3393: mov ecx, dword ptr [ebx + 0x730] */ r_ecx = R32((u32)(r_ebx+0x730u));
    /* 004a3399: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a339b: je 0x4a33fc */ if (fZ) goto L_004a33fc;
L_004a339d:; BB(0x004a339d);
    /* 004a339d: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a33a0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a33a1: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4a33a6u); f_00508db8();
L_004a33a6:; BB(0x004a33a6);
    /* 004a33a6: mov ecx, dword ptr [ebx + 0x734] */ r_ecx = R32((u32)(r_ebx+0x734u));
    /* 004a33ac: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a33ae: je 0x4a33ce */ if (fZ) goto L_004a33ce;
L_004a33b0:; BB(0x004a33b0);
    /* 004a33b0: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 004a33b3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a33b4: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4a33b9u); f_00508db8();
    /* 004a33b9: lea eax, [esp + 0xc] */ r_eax = (u32)(r_esp+0xcu);
    /* 004a33bd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a33be: mov ecx, dword ptr [ebx + 0x734] */ r_ecx = R32((u32)(r_ebx+0x734u));
    /* 004a33c4: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x4a33c9u); f_00508dd0();
    /* 004a33c9: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a33cc: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a33cd: ret  */ FN_RET(0x004a3314); r_esp += 4; return;
L_004a33ce:; BB(0x004a33ce);
    /* 004a33ce: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004a33d1: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a33d3: mov eax, dword ptr [ebx + 0x5f8] */ r_eax = R32((u32)(r_ebx+0x5f8u));
    /* 004a33d9: push dword ptr [eax + 0x20] */ { u32 v = R32((u32)(r_eax+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a33dc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a33dd: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4a33e2u); f_0050981c();
    /* 004a33e2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a33e5: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004a33e9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a33ea: mov dword ptr [ebx + 0x734], eax */ W32((u32)(r_ebx+0x734u), r_eax);
    /* 004a33f0: mov ecx, eax */ r_ecx = r_eax;
    /* 004a33f2: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x4a33f7u); f_00508dd0();
    /* 004a33f7: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a33fa: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a33fb: ret  */ FN_RET(0x004a3314); r_esp += 4; return;
L_004a33fc:; BB(0x004a33fc);
    /* 004a33fc: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004a33ff: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a3401: mov eax, dword ptr [ebx + 0x5f8] */ r_eax = R32((u32)(r_ebx+0x5f8u));
    /* 004a3407: push dword ptr [eax + 0x1c] */ { u32 v = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004a340a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a340b: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4a3410u); f_0050981c();
    /* 004a3410: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a3413: mov dword ptr [ebx + 0x730], eax */ W32((u32)(r_ebx+0x730u), r_eax);
    /* 004a3419: jmp 0x4a33a6 */ goto L_004a33a6;
L_004a341b:; BB(0x004a341b);
    /* 004a341b: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 004a341e: push 0x2040 */ { u32 v = 0x2040u; r_esp -= 4; W32(r_esp, v); }
    /* 004a3423: mov eax, dword ptr [ebx + 0x5f8] */ r_eax = R32((u32)(r_ebx+0x5f8u));
    /* 004a3429: push dword ptr [eax + 0x18] */ { u32 v = R32((u32)(r_eax+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a342c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a342d: call 0x50981c */ r_esp -= 4; W32(r_esp, 0x4a3432u); f_0050981c();
    /* 004a3432: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a3435: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 004a3439: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a343a: mov dword ptr [ebx + 0x72c], eax */ W32((u32)(r_ebx+0x72cu), r_eax);
    /* 004a3440: mov ecx, eax */ r_ecx = r_eax;
    /* 004a3442: call 0x508dd0 */ r_esp -= 4; W32(r_esp, 0x4a3447u); f_00508dd0();
    /* 004a3447: jmp 0x4a3393 */ goto L_004a3393;
}

void f_004a344c(void) /* sub_4A344C */
{
    FN_ENTER(0x004a344c);
    /* 004a344c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a344d: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a344e: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a3451: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a3453: mov eax, dword ptr [esp + 0x30] */ r_eax = R32((u32)(r_esp+0x30u));
    /* 004a3457: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a345a: je 0x4a369a */ if (fZ) goto L_004a369a;
L_004a3460:; BB(0x004a3460);
    /* 004a3460: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3463: je 0x4a3668 */ if (fZ) goto L_004a3668;
L_004a3469:; BB(0x004a3469);
    /* 004a3469: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a346c: je 0x4a3668 */ if (fZ) goto L_004a3668;
L_004a3472:; BB(0x004a3472);
    /* 004a3472: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3475: je 0x4a3668 */ if (fZ) goto L_004a3668;
L_004a347b:; BB(0x004a347b);
    /* 004a347b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a347d: jne 0x4a365c */ if (!fZ) goto L_004a365c;
L_004a3483:; BB(0x004a3483);
    /* 004a3483: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a3485: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a348au); f_007aa094();
    /* 004a348a: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 004a348d: fld dword ptr [ebx + 0x38] */ FPUSH(R_F32((u32)(r_ebx+0x38u)));
    /* 004a3490: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004a3492: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 004a3495: fld dword ptr [ebx + 0x40] */ FPUSH(R_F32((u32)(r_ebx+0x40u)));
    /* 004a3498: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 004a349a: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004a349c: mov ebp, dword ptr [ebx + 0x4c4] */ r_ebp = R32((u32)(r_ebx+0x4c4u));
    /* 004a34a2: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a34a4: fcomp dword ptr [ebp + 0xc] */ fx_compare(ST(0), R_F32((u32)(r_ebp+0xcu))); FPOP();
    /* 004a34a7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a34a9: mov edx, 0x4000 */ r_edx = 0x4000u;
    /* 004a34ae: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a34af: jbe 0x4a34b6 */ if ((fC||fZ)) goto L_004a34b6;
L_004a34b1:; BB(0x004a34b1);
    /* 004a34b1: mov edx, 0x5000 */ r_edx = 0x5000u;
L_004a34b6:; BB(0x004a34b6);
    /* 004a34b6: fld dword ptr [ebp + 8] */ FPUSH(R_F32((u32)(r_ebp+0x8u)));
    /* 004a34b9: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 004a34bd: fpatan  */ ST(1) = atan2l(ST(1), ST(0)); FPOP();
    /* 004a34bf: fmul qword ptr [0x903a98] */ ST(0) = ST(0) * R_F64((u32)(0x903a98u));
    /* 004a34c5: fdiv qword ptr [0x903a90] */ ST(0) = ST(0) / R_F64((u32)(0x903a90u));
    /* 004a34cb: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004a34ce: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004a34d2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a34d7: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a34db: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a34df: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a34e3: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004a34e6: mov eax, dword ptr [ebp + 4] */ r_eax = R32((u32)(r_ebp+0x4u));
    /* 004a34e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a34eb: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004a34ef: jle 0x4a3670 */ if ((fZ||fS!=fO)) goto L_004a3670;
L_004a34f5:; BB(0x004a34f5);
    /* 004a34f5: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a34f7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a34f8: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a34fb: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x4a3500u); f_007a900c();
    /* 004a3500: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a3503: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 004a3505: jle 0x4a3516 */ if ((fZ||fS!=fO)) goto L_004a3516;
L_004a3507:; BB(0x004a3507);
    /* 004a3507: mov edx, dword ptr [ebx + 0x4c4] */ r_edx = R32((u32)(r_ebx+0x4c4u));
    /* 004a350d: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 004a3510: add dword ptr [ebx + 0x488], ebp */ { u32 ad = (u32)(r_ebx+0x488u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
L_004a3516:; BB(0x004a3516);
    /* 004a3516: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a3517: mov dword ptr [esp + 0x1c], eax */ W32((u32)(r_esp+0x1cu), r_eax);
    /* 004a351b: fild dword ptr [esp + 0x1c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x1cu)));
    /* 004a351f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004a3522: call 0x82e900 */ r_esp -= 4; W32(r_esp, 0x4a3527u); f_0082e900();
    /* 004a3527: fcomp dword ptr [0x903e44] */ fx_compare(ST(0), R_F32((u32)(0x903e44u))); FPOP();
    /* 004a352d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a352f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a3530: jbe 0x4a3540 */ if ((fC||fZ)) goto L_004a3540;
L_004a3532:; BB(0x004a3532);
    /* 004a3532: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004a3536: fmul dword ptr [0x903e40] */ ST(0) = ST(0) * R_F32((u32)(0x903e40u));
    /* 004a353c: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
L_004a3540:; BB(0x004a3540);
    /* 004a3540: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 004a3543: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a3546: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004a354a: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004a354d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a354f: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004a3553: call 0x4a15ac */ r_esp -= 4; W32(r_esp, 0x4a3558u); f_004a15ac();
    /* 004a3558: mov edx, dword ptr [ebx + 0x4c4] */ r_edx = R32((u32)(r_ebx+0x4c4u));
    /* 004a355e: movsx ecx, word ptr [edx + 2] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_edx+0x2u));
    /* 004a3562: mov dword ptr [esp + 0x18], ecx */ W32((u32)(r_esp+0x18u), r_ecx);
    /* 004a3566: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004a356a: fcomp dword ptr [0x903e3c] */ fx_compare(ST(0), R_F32((u32)(0x903e3cu))); FPOP();
    /* 004a3570: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a3572: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a3573: jbe 0x4a35fd */ if ((fC||fZ)) goto L_004a35fd;
L_004a3579:; BB(0x004a3579);
    /* 004a3579: fild dword ptr [ebx + 0x488] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x488u)));
    /* 004a357f: fmul dword ptr [0x903e38] */ ST(0) = ST(0) * R_F32((u32)(0x903e38u));
    /* 004a3585: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004a3588: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004a358c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a3591: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a3595: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a3599: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a359d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004a35a0: mov eax, 0x600 */ r_eax = 0x600u;
    /* 004a35a5: mov edx, 0xfffffa00 */ r_edx = 0xfffffa00u;
    /* 004a35aa: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 004a35ae: cmp ebp, 0x600 */ {  u32 a = r_ebp; u32 b = 0x600u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a35b4: jl 0x4a35b8 */ if ((fS!=fO)) goto L_004a35b8;
L_004a35b6:; BB(0x004a35b6);
    /* 004a35b6: mov ebp, eax */ r_ebp = r_eax;
L_004a35b8:; BB(0x004a35b8);
    /* 004a35b8: cmp ebp, 0xfffffa00 */ {  u32 a = r_ebp; u32 b = 0xfffffa00u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a35be: jg 0x4a35c2 */ if ((!fZ&&fS==fO)) goto L_004a35c2;
L_004a35c0:; BB(0x004a35c0);
    /* 004a35c0: mov ebp, edx */ r_ebp = r_edx;
L_004a35c2:; BB(0x004a35c2);
    /* 004a35c2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a35c3: push dword ptr [ebx + 0x64] */ { u32 v = R32((u32)(r_ebx+0x64u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a35c6: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x4a35cbu); f_007a900c();
    /* 004a35cb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a35ce: fild dword ptr [ebx + 0x64] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x64u)));
    /* 004a35d1: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 004a35d5: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004a35d9: fmul dword ptr [0x903e34] */ ST(0) = ST(0) * R_F32((u32)(0x903e34u));
    /* 004a35df: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a35e1: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004a35e4: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004a35e8: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a35ed: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a35f1: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a35f5: fistp dword ptr [ebx + 0x64] */ W32((u32)(r_ebx+0x64u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a35f8: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004a35fb: jmp 0x4a360a */ goto L_004a360a;
L_004a35fd:; BB(0x004a35fd);
    /* 004a35fd: mov ebp, dword ptr [ebx + 0x64] */ r_ebp = R32((u32)(r_ebx+0x64u));
    /* 004a3600: mov eax, ebp */ r_eax = r_ebp;
    /* 004a3602: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 004a3603: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x004a3603, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x004a3603, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 004a3605: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 004a3607: mov dword ptr [ebx + 0x64], ebp */ W32((u32)(r_ebx+0x64u), r_ebp);
L_004a360a:; BB(0x004a360a);
    /* 004a360a: mov eax, dword ptr [ebx + 0x4c8] */ r_eax = R32((u32)(r_ebx+0x4c8u));
    /* 004a3610: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3615: je 0x4a362d */ if (fZ) goto L_004a362d;
L_004a3617:; BB(0x004a3617);
    /* 004a3617: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a3619: call 0x4a323c */ r_esp -= 4; W32(r_esp, 0x4a361eu); f_004a323c();
    /* 004a361e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a3620: call 0x4a3314 */ r_esp -= 4; W32(r_esp, 0x4a3625u); f_004a3314();
    /* 004a3625: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a3628: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a3629: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a362a: ret 4 */ FN_RET(0x004a344c); r_esp += 8; return;
L_004a362d:; BB(0x004a362d);
    /* 004a362d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a362f: call 0x4a2bb0 */ r_esp -= 4; W32(r_esp, 0x4a3634u); f_004a2bb0();
    /* 004a3634: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a3636: call 0x4a2ea8 */ r_esp -= 4; W32(r_esp, 0x4a363bu); f_004a2ea8();
    /* 004a363b: lea edx, [ebx + 0x568] */ r_edx = (u32)(r_ebx+0x568u);
    /* 004a3641: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a3643: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a3644: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a3645: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a3646: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a3647: push 0x39c */ { u32 v = 0x39cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a364c: call 0x8144b0 */ r_esp -= 4; W32(r_esp, 0x4a3651u); f_008144b0();
    /* 004a3651: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a3654: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a3657: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a3658: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a3659: ret 4 */ FN_RET(0x004a344c); r_esp += 8; return;
L_004a365c:; BB(0x004a365c);
    /* 004a365c: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a365f: jne 0x4a3668 */ if (!fZ) goto L_004a3668;
L_004a3661:; BB(0x004a3661);
    /* 004a3661: mov dword ptr [ebx + 0x64], 0 */ W32((u32)(r_ebx+0x64u), 0x0u);
L_004a3668:; BB(0x004a3668);
    /* 004a3668: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a366b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a366c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a366d: ret 4 */ FN_RET(0x004a344c); r_esp += 8; return;
L_004a3670:; BB(0x004a3670);
    /* 004a3670: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 004a3672: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 004a3673: push dword ptr [ebx + 0x60] */ { u32 v = R32((u32)(r_ebx+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a3676: call 0x7a900c */ r_esp -= 4; W32(r_esp, 0x4a367bu); f_007a900c();
    /* 004a367b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a367e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 004a3680: jge 0x4a3516 */ if ((fS==fO)) goto L_004a3516;
L_004a3686:; BB(0x004a3686);
    /* 004a3686: mov edx, dword ptr [ebx + 0x4c4] */ r_edx = R32((u32)(r_ebx+0x4c4u));
    /* 004a368c: mov ebp, dword ptr [edx + 4] */ r_ebp = R32((u32)(r_edx+0x4u));
    /* 004a368f: add dword ptr [ebx + 0x488], ebp */ { u32 ad = (u32)(r_ebx+0x488u);  u32 a = R32(ad); u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; W32(ad, r);  }
    /* 004a3695: jmp 0x4a3516 */ goto L_004a3516;
L_004a369a:; BB(0x004a369a);
    /* 004a369a: mov eax, dword ptr [ebx + 0x4c8] */ r_eax = R32((u32)(r_ebx+0x4c8u));
    /* 004a36a0: test eax, 0x100 */ {  u32 a = r_eax; u32 b = 0x100u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a36a5: je 0x4a36b5 */ if (fZ) goto L_004a36b5;
L_004a36a7:; BB(0x004a36a7);
    /* 004a36a7: mov eax, 0x14 */ r_eax = 0x14u;
    /* 004a36ac: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 004a36b3: jmp 0x4a36c1 */ goto L_004a36c1;
L_004a36b5:; BB(0x004a36b5);
    /* 004a36b5: mov eax, 7 */ r_eax = 0x7u;
    /* 004a36ba: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
L_004a36c1:; BB(0x004a36c1);
    /* 004a36c1: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 004a36c3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a36c5: call dword ptr [eax + 0x188] */ { u32 t = R32((u32)(r_eax+0x188u)); r_esp -= 4; W32(r_esp, 0x4a36cbu); call_ind(t); }
    /* 004a36cb: mov dword ptr [ebx + 0x4ec], 2 */ W32((u32)(r_ebx+0x4ecu), 0x2u);
    /* 004a36d5: mov dword ptr [ebx + 0x3c], 0x42860000 */ W32((u32)(r_ebx+0x3cu), 0x42860000u);
    /* 004a36dc: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a36df: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a36e0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a36e1: ret 4 */ FN_RET(0x004a344c); r_esp += 8; return;
}

void f_004a36e4(void) /* sub_4A36E4 */
{
    FN_ENTER(0x004a36e4);
    /* 004a36e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a36e5: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a36e8: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004a36ea: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 004a36ee: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a36f1: je 0x4a3871 */ if (fZ) goto L_004a3871;
L_004a36f7:; BB(0x004a36f7);
    /* 004a36f7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a36f9: jne 0x4a384d */ if (!fZ) goto L_004a384d;
L_004a36ff:; BB(0x004a36ff);
    /* 004a36ff: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a3701: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a3706u); f_007aa094();
    /* 004a3706: mov eax, dword ptr [ebp + 0x6e4] */ r_eax = R32((u32)(r_ebp+0x6e4u));
    /* 004a370c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a370e: jne 0x4a3823 */ if (!fZ) goto L_004a3823;
L_004a3714:; BB(0x004a3714);
    /* 004a3714: push dword ptr [ebp + 0x60] */ { u32 v = R32((u32)(r_ebp+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a3717: push 0x3fc00000 */ { u32 v = 0x3fc00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a371c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a371e: call 0x4a15ac */ r_esp -= 4; W32(r_esp, 0x4a3723u); f_004a15ac();
    /* 004a3723: movzx edx, byte ptr [0xa474c8] */ r_edx = (u32)R8((u32)(0xa474c8u));
    /* 004a372a: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a372d: jne 0x4a3763 */ if (!fZ) goto L_004a3763;
L_004a372f:; BB(0x004a372f);
    /* 004a372f: mov eax, dword ptr [0xa47564] */ r_eax = R32((u32)(0xa47564u));
    /* 004a3734: mov dword ptr [0xa474e4], 0x42860000 */ W32((u32)(0xa474e4u), 0x42860000u);
    /* 004a373e: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004a3744: mov dword ptr [0xa474f4], 0x42d60000 */ W32((u32)(0xa474f4u), 0x42d60000u);
    /* 004a374e: mov dword ptr [0xa47514], eax */ W32((u32)(0xa47514u), r_eax);
    /* 004a3753: mov byte ptr [0xa474c8], dl */ W8((u32)(0xa474c8u), (u8)r_edx);
    /* 004a3759: mov dword ptr [0xa47504], 0x43130000 */ W32((u32)(0xa47504u), 0x43130000u);
L_004a3763:; BB(0x004a3763);
    /* 004a3763: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a3765: call 0x7aabd8 */ r_esp -= 4; W32(r_esp, 0x4a376au); f_007aabd8();
    /* 004a376a: fld dword ptr [0x903e1c] */ FPUSH(R_F32((u32)(0x903e1cu)));
    /* 004a3770: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004a3772: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004a3776: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 004a377a: mov dword ptr [esp], 0xa474e0 */ W32((u32)(r_esp), 0xa474e0u);
    /* 004a3781: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004a3785: mov dword ptr [esp + 4], 4 */ W32((u32)(r_esp+0x4u), 0x4u);
    /* 004a378d: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 004a3795: call 0x7be6b8 */ r_esp -= 4; W32(r_esp, 0x4a379au); f_007be6b8();
    /* 004a379a: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004a379e: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a37a3: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 004a37a6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a37a8: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a37adu); f_007aaa30();
    /* 004a37ad: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a37af: je 0x4a38f0 */ if (fZ) goto L_004a38f0;
L_004a37b5:; BB(0x004a37b5);
    /* 004a37b5: mov eax, dword ptr [0xa47564] */ r_eax = R32((u32)(0xa47564u));
    /* 004a37ba: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004a37bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a37bd: mov dword ptr [ebp + 0x4ec], edx */ W32((u32)(r_ebp+0x4ecu), r_edx);
    /* 004a37c3: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 004a37c6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a37c7: lea eax, [ebp + 0x568] */ r_eax = (u32)(r_ebp+0x568u);
    /* 004a37cd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a37ce: push 0x3a7 */ { u32 v = 0x3a7u; r_esp -= 4; W32(r_esp, v); }
    /* 004a37d3: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4a37d8u); f_00814298();
    /* 004a37d8: mov eax, dword ptr [ebp + 0x38] */ r_eax = R32((u32)(r_ebp+0x38u));
    /* 004a37db: mov edx, dword ptr [ebp + 0x40] */ r_edx = R32((u32)(r_ebp+0x40u));
    /* 004a37de: mov dword ptr [esp + 0x34], 0 */ W32((u32)(r_esp+0x34u), 0x0u);
    /* 004a37e6: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004a37ea: mov eax, dword ptr [ebp + 0x5f8] */ r_eax = R32((u32)(r_ebp+0x5f8u));
    /* 004a37f0: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 004a37f4: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 004a37f8: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a37fa: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a37fd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a37fe: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4a3803u); f_0050b7a4();
    /* 004a3803: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a3805: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x4a380au); f_004d4288();
    /* 004a380a: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a380d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a380f: call 0x4a1f34 */ r_esp -= 4; W32(r_esp, 0x4a3814u); f_004a1f34();
    /* 004a3814: mov dword ptr [ebp + 0x6e4], 1 */ W32((u32)(r_ebp+0x6e4u), 0x1u);
    /* 004a381e: jmp 0x4a38f0 */ goto L_004a38f0;
L_004a3823:; BB(0x004a3823);
    /* 004a3823: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3826: jne 0x4a38f0 */ if (!fZ) goto L_004a38f0;
L_004a382c:; BB(0x004a382c);
    /* 004a382c: fld dword ptr [ebp + 0xc8] */ FPUSH(R_F32((u32)(r_ebp+0xc8u)));
    /* 004a3832: fcomp dword ptr [0x903e30] */ fx_compare(ST(0), R_F32((u32)(0x903e30u))); FPOP();
    /* 004a3838: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a383a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a383b: ja 0x4a38f0 */ if ((!fC&&!fZ)) goto L_004a38f0;
L_004a3841:; BB(0x004a3841);
    /* 004a3841: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a3843: call 0x4a7e20 */ r_esp -= 4; W32(r_esp, 0x4a3848u); f_004a7e20();
    /* 004a3848: jmp 0x4a38f0 */ goto L_004a38f0;
L_004a384d:; BB(0x004a384d);
    /* 004a384d: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3850: jne 0x4a38f0 */ if (!fZ) goto L_004a38f0;
L_004a3856:; BB(0x004a3856);
    /* 004a3856: mov eax, dword ptr [ebp + 0x4c8] */ r_eax = R32((u32)(r_ebp+0x4c8u));
    /* 004a385c: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a385f: mov dword ptr [ebp + 0x4c8], eax */ W32((u32)(r_ebp+0x4c8u), r_eax);
    /* 004a3865: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a3867: call 0x4a8a88 */ r_esp -= 4; W32(r_esp, 0x4a386cu); f_004a8a88();
    /* 004a386c: jmp 0x4a38f0 */ goto L_004a38f0;
L_004a3871:; BB(0x004a3871);
    /* 004a3871: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004a3874: mov eax, 9 */ r_eax = 0x9u;
    /* 004a3879: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004a3880: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a3882: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4a3888u); call_ind(t); }
    /* 004a3888: mov eax, dword ptr [ebp + 0x4c8] */ r_eax = R32((u32)(r_ebp+0x4c8u));
    /* 004a388e: mov dword ptr [ebp + 0x4ec], 1 */ W32((u32)(r_ebp+0x4ecu), 0x1u);
    /* 004a3898: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a389b: mov dword ptr [ebp + 0x4c8], eax */ W32((u32)(r_ebp+0x4c8u), r_eax);
    /* 004a38a1: mov dword ptr [ebp + 0x3c], 0x43340000 */ W32((u32)(r_ebp+0x3cu), 0x43340000u);
    /* 004a38a8: mov dword ptr [esp + 0x2c], esi */ W32((u32)(r_esp+0x2cu), r_esi);
    /* 004a38ac: lea edx, [ebp + 0x73c] */ r_edx = (u32)(r_ebp+0x73cu);
    /* 004a38b2: mov dword ptr [esp + 0x30], edi */ W32((u32)(r_esp+0x30u), r_edi);
    /* 004a38b6: lea eax, [ebp + 0x77c] */ r_eax = (u32)(r_ebp+0x77cu);
    /* 004a38bc: mov esi, eax */ r_esi = r_eax;
    /* 004a38be: mov edi, edx */ r_edi = r_edx;
L_004a38c0:; BB(0x004a38c0);
    /* 004a38c0: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 004a38c2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a38c4: je 0x4a38d7 */ if (fZ) goto L_004a38d7;
L_004a38c6:; BB(0x004a38c6);
    /* 004a38c6: push 0x9a810c */ { u32 v = 0x9a810cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a38cb: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4a38d0u); f_00508db8();
    /* 004a38d0: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 004a38d2: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4a38d7u); f_00508f48();
L_004a38d7:; BB(0x004a38d7);
    /* 004a38d7: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004a38da: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004a38dc: ja 0x4a38c0 */ if ((!fC&&!fZ)) goto L_004a38c0;
L_004a38de:; BB(0x004a38de);
    /* 004a38de: mov esi, dword ptr [esp + 0x2c] */ r_esi = R32((u32)(r_esp+0x2cu));
    /* 004a38e2: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 004a38e6: mov dword ptr [ebp + 0x6e4], 0 */ W32((u32)(r_ebp+0x6e4u), 0x0u);
L_004a38f0:; BB(0x004a38f0);
    /* 004a38f0: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a38f3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a38f4: ret 4 */ FN_RET(0x004a36e4); r_esp += 8; return;
}

void f_004a38f8(void) /* sub_4A38F8 */
{
    FN_ENTER(0x004a38f8);
    /* 004a38f8: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004a38f9: sub esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a38fc: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004a38fe: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 004a3902: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3905: je 0x4a3b6d */ if (fZ) goto L_004a3b6d;
L_004a390b:; BB(0x004a390b);
    /* 004a390b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a390d: jne 0x4a3b42 */ if (!fZ) goto L_004a3b42;
L_004a3913:; BB(0x004a3913);
    /* 004a3913: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a3915: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a391au); f_007aa094();
    /* 004a391a: mov eax, dword ptr [ebp + 0x6e4] */ r_eax = R32((u32)(r_ebp+0x6e4u));
    /* 004a3920: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3922: jne 0x4a3a6f */ if (!fZ) goto L_004a3a6f;
L_004a3928:; BB(0x004a3928);
    /* 004a3928: fild dword ptr [ebp + 0x6e8] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0x6e8u)));
    /* 004a392e: fld dword ptr [0x903e08] */ FPUSH(R_F32((u32)(0x903e08u)));
    /* 004a3934: fld dword ptr [0xa475a8] */ FPUSH(R_F32((u32)(0xa475a8u)));
    /* 004a393a: fsub dword ptr [0x903fd4] */ ST(0) = ST(0) - R_F32((u32)(0x903fd4u));
    /* 004a3940: fmul dword ptr [0x903e04] */ ST(0) = ST(0) * R_F32((u32)(0x903e04u));
    /* 004a3946: fld dword ptr [0x903e00] */ FPUSH(R_F32((u32)(0x903e00u)));
    /* 004a394c: mov edx, dword ptr [ebp + 0x6e8] */ r_edx = R32((u32)(r_ebp+0x6e8u));
    /* 004a3952: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 004a3954: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a3956: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004a3958: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 004a395c: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004a3960: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a3962: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004a3966: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a3967: jbe 0x4a39b0 */ if ((fC||fZ)) goto L_004a39b0;
L_004a3969:; BB(0x004a3969);
    /* 004a3969: fld dword ptr [0x903e10] */ FPUSH(R_F32((u32)(0x903e10u)));
    /* 004a396f: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 004a3973: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 004a3975: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004a3978: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004a397c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a3981: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a3985: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a3989: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a398d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004a3990: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004a3994: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4a3999u); f_0082ddd8();
    /* 004a3999: fld dword ptr [0x903fd4] */ FPUSH(R_F32((u32)(0x903fd4u)));
    /* 004a399f: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004a39a3: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 004a39a5: fchs  */ ST(0) = -ST(0);
    /* 004a39a7: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004a39a9: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a39ab: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004a39ae: jmp 0x4a3a06 */ goto L_004a3a06;
L_004a39b0:; BB(0x004a39b0);
    /* 004a39b0: fld dword ptr [0x903e10] */ FPUSH(R_F32((u32)(0x903e10u)));
    /* 004a39b6: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004a39b8: add edx, 0x27 */ {  u32 a = r_edx; u32 b = 0x27u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a39bb: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 004a39bf: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004a39c3: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004a39c5: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004a39c7: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004a39c9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a39cb: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004a39cf: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004a39d2: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004a39d6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a39db: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a39df: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a39e3: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a39e7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004a39ea: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004a39ee: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4a39f3u); f_0082ddd8();
    /* 004a39f3: fld dword ptr [0x903fd4] */ FPUSH(R_F32((u32)(0x903fd4u)));
    /* 004a39f9: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004a39fd: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 004a39ff: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 004a3a01: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 004a3a03: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
L_004a3a06:; BB(0x004a3a06);
    /* 004a3a06: fld dword ptr [esp + 0x2c] */ FPUSH(R_F32((u32)(r_esp+0x2cu)));
    /* 004a3a0a: fmul dword ptr [0x903dfc] */ ST(0) = ST(0) * R_F32((u32)(0x903dfcu));
    /* 004a3a10: fdiv dword ptr [0x903e00] */ ST(0) = ST(0) / R_F32((u32)(0x903e00u));
    /* 004a3a16: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004a3a19: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004a3a1d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a3a22: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a3a26: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a3a2a: fistp dword ptr [ebp + 0x5c] */ W32((u32)(r_ebp+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004a3a2d: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004a3a30: mov eax, dword ptr [ebp + 0x6e8] */ r_eax = R32((u32)(r_ebp+0x6e8u));
    /* 004a3a36: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a3a39: mov dword ptr [ebp + 0x6e8], eax */ W32((u32)(r_ebp+0x6e8u), r_eax);
    /* 004a3a3f: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3a42: je 0x4a3bf7 */ if (fZ) goto L_004a3bf7;
L_004a3a48:; BB(0x004a3a48);
    /* 004a3a48: cmp eax, 0x27 */ {  u32 a = r_eax; u32 b = 0x27u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a3a4b: jle 0x4a3b25 */ if ((fZ||fS!=fO)) goto L_004a3b25;
L_004a3a51:; BB(0x004a3a51);
    /* 004a3a51: mov eax, dword ptr [0xa475a8] */ r_eax = R32((u32)(0xa475a8u));
    /* 004a3a56: mov dword ptr [ebp + 0x5c], 0 */ W32((u32)(r_ebp+0x5cu), 0x0u);
    /* 004a3a5d: mov dword ptr [ebp + 0x3c], eax */ W32((u32)(r_ebp+0x3cu), r_eax);
    /* 004a3a60: mov dword ptr [ebp + 0x6e4], 1 */ W32((u32)(r_ebp+0x6e4u), 0x1u);
    /* 004a3a6a: jmp 0x4a3b25 */ goto L_004a3b25;
L_004a3a6f:; BB(0x004a3a6f);
    /* 004a3a6f: fldz  */ FPUSH(0.0);
    /* 004a3a71: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 004a3a75: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3a78: jne 0x4a3b25 */ if (!fZ) goto L_004a3b25;
L_004a3a7e:; BB(0x004a3a7e);
    /* 004a3a7e: fld dword ptr [0x903e14] */ FPUSH(R_F32((u32)(0x903e14u)));
    /* 004a3a84: fld dword ptr [ebp + 0xc4] */ FPUSH(R_F32((u32)(r_ebp+0xc4u)));
    /* 004a3a8a: fsub dword ptr [0x903df8] */ ST(0) = ST(0) - R_F32((u32)(0x903df8u));
    /* 004a3a90: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a3a92: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 004a3a96: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004a3a9a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a3a9c: call 0x7aabd8 */ r_esp -= 4; W32(r_esp, 0x4a3aa1u); f_007aabd8();
    /* 004a3aa1: fsub dword ptr [0x903df8] */ ST(0) = ST(0) - R_F32((u32)(0x903df8u));
    /* 004a3aa7: fmul dword ptr [0x903e10] */ ST(0) = ST(0) * R_F32((u32)(0x903e10u));
    /* 004a3aad: fdiv dword ptr [esp + 0x28] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x28u));
    /* 004a3ab1: fld dword ptr [0xa475a8] */ FPUSH(R_F32((u32)(0xa475a8u)));
    /* 004a3ab7: fsub dword ptr [0x903fd8] */ ST(0) = ST(0) - R_F32((u32)(0x903fd8u));
    /* 004a3abd: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a3abf: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004a3ac2: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004a3ac6: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a3acb: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a3acf: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a3ad3: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a3ad7: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004a3ada: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004a3ade: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004a3ae2: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4a3ae7u); f_0082dcbc();
    /* 004a3ae7: fld dword ptr [esp + 0x28] */ FPUSH(R_F32((u32)(r_esp+0x28u)));
    /* 004a3aeb: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a3aed: fsubr dword ptr [0xa475a8] */ ST(0) = R_F32((u32)(0xa475a8u)) - ST(0);
    /* 004a3af3: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 004a3af6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a3af8: push 0x41880000 */ { u32 v = 0x41880000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a3afd: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a3b02u); f_007aaa30();
    /* 004a3b02: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3b04: je 0x4a3b0d */ if (fZ) goto L_004a3b0d;
L_004a3b06:; BB(0x004a3b06);
    /* 004a3b06: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a3b08: call 0x4a15fc */ r_esp -= 4; W32(r_esp, 0x4a3b0du); f_004a15fc();
L_004a3b0d:; BB(0x004a3b0d);
    /* 004a3b0d: fld dword ptr [ebp + 0xc8] */ FPUSH(R_F32((u32)(r_ebp+0xc8u)));
    /* 004a3b13: fcomp dword ptr [0x903e18] */ fx_compare(ST(0), R_F32((u32)(0x903e18u))); FPOP();
    /* 004a3b19: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a3b1b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a3b1c: ja 0x4a3b25 */ if ((!fC&&!fZ)) goto L_004a3b25;
L_004a3b1e:; BB(0x004a3b1e);
    /* 004a3b1e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a3b20: call 0x4a7e20 */ r_esp -= 4; W32(r_esp, 0x4a3b25u); f_004a7e20();
L_004a3b25:; BB(0x004a3b25);
    /* 004a3b25: mov eax, dword ptr [ebp + 0x60] */ r_eax = R32((u32)(r_ebp+0x60u));
    /* 004a3b28: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a3b2b: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 004a3b2f: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004a3b32: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a3b34: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004a3b38: call 0x4a15ac */ r_esp -= 4; W32(r_esp, 0x4a3b3du); f_004a15ac();
    /* 004a3b3d: jmp 0x4a3bf0 */ goto L_004a3bf0;
L_004a3b42:; BB(0x004a3b42);
    /* 004a3b42: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3b45: jne 0x4a3bf0 */ if (!fZ) goto L_004a3bf0;
L_004a3b4b:; BB(0x004a3b4b);
    /* 004a3b4b: mov eax, dword ptr [ebp + 0x4c8] */ r_eax = R32((u32)(r_ebp+0x4c8u));
    /* 004a3b51: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a3b54: mov dword ptr [ebp + 0x4c8], eax */ W32((u32)(r_ebp+0x4c8u), r_eax);
    /* 004a3b5a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a3b5c: call 0x4a8a88 */ r_esp -= 4; W32(r_esp, 0x4a3b61u); f_004a8a88();
    /* 004a3b61: mov dword ptr [ebp + 0x5c], 0 */ W32((u32)(r_ebp+0x5cu), 0x0u);
    /* 004a3b68: jmp 0x4a3bf0 */ goto L_004a3bf0;
L_004a3b6d:; BB(0x004a3b6d);
    /* 004a3b6d: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004a3b70: mov eax, 7 */ r_eax = 0x7u;
    /* 004a3b75: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004a3b7c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004a3b7e: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4a3b84u); call_ind(t); }
    /* 004a3b84: mov eax, dword ptr [ebp + 0x4c8] */ r_eax = R32((u32)(r_ebp+0x4c8u));
    /* 004a3b8a: mov dword ptr [ebp + 0x4ec], 1 */ W32((u32)(r_ebp+0x4ecu), 0x1u);
    /* 004a3b94: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a3b97: mov dword ptr [ebp + 0x4c8], eax */ W32((u32)(r_ebp+0x4c8u), r_eax);
    /* 004a3b9d: mov dword ptr [ebp + 0x3c], 0x43340000 */ W32((u32)(r_ebp+0x3cu), 0x43340000u);
    /* 004a3ba4: mov dword ptr [esp + 0x20], esi */ W32((u32)(r_esp+0x20u), r_esi);
    /* 004a3ba8: lea edx, [ebp + 0x73c] */ r_edx = (u32)(r_ebp+0x73cu);
    /* 004a3bae: mov dword ptr [esp + 0x24], edi */ W32((u32)(r_esp+0x24u), r_edi);
    /* 004a3bb2: lea eax, [ebp + 0x77c] */ r_eax = (u32)(r_ebp+0x77cu);
    /* 004a3bb8: mov esi, eax */ r_esi = r_eax;
    /* 004a3bba: mov edi, edx */ r_edi = r_edx;
L_004a3bbc:; BB(0x004a3bbc);
    /* 004a3bbc: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 004a3bbe: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3bc0: je 0x4a3bd3 */ if (fZ) goto L_004a3bd3;
L_004a3bc2:; BB(0x004a3bc2);
    /* 004a3bc2: push 0x9a810c */ { u32 v = 0x9a810cu; r_esp -= 4; W32(r_esp, v); }
    /* 004a3bc7: call 0x508db8 */ r_esp -= 4; W32(r_esp, 0x4a3bccu); f_00508db8();
    /* 004a3bcc: mov ecx, dword ptr [edi] */ r_ecx = R32((u32)(r_edi));
    /* 004a3bce: call 0x508f48 */ r_esp -= 4; W32(r_esp, 0x4a3bd3u); f_00508f48();
L_004a3bd3:; BB(0x004a3bd3);
    /* 004a3bd3: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 004a3bd6: cmp esi, edi */ {  u32 a = r_esi; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004a3bd8: ja 0x4a3bbc */ if ((!fC&&!fZ)) goto L_004a3bbc;
L_004a3bda:; BB(0x004a3bda);
    /* 004a3bda: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
    /* 004a3bde: mov edi, dword ptr [esp + 0x24] */ r_edi = R32((u32)(r_esp+0x24u));
    /* 004a3be2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004a3be4: mov dword ptr [ebp + 0x6e4], eax */ W32((u32)(r_ebp+0x6e4u), r_eax);
    /* 004a3bea: mov dword ptr [ebp + 0x6e8], eax */ W32((u32)(r_ebp+0x6e8u), r_eax);
L_004a3bf0:; BB(0x004a3bf0);
    /* 004a3bf0: add esp, 0x34 */ {  u32 a = r_esp; u32 b = 0x34u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a3bf3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004a3bf4: ret 4 */ FN_RET(0x004a38f8); r_esp += 8; return;
L_004a3bf7:; BB(0x004a3bf7);
    /* 004a3bf7: mov eax, 8 */ r_eax = 0x8u;
    /* 004a3bfc: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004a3c03: jmp 0x4a3b25 */ goto L_004a3b25;
}

void f_004a3c08(void) /* sub_4A3C08 */
{
    FN_ENTER(0x004a3c08);
    /* 004a3c08: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 004a3c09: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a3c0c: mov ebx, ecx */ r_ebx = r_ecx;
    /* 004a3c0e: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 004a3c12: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3c15: je 0x4a3ed6 */ if (fZ) goto L_004a3ed6;
L_004a3c1b:; BB(0x004a3c1b);
    /* 004a3c1b: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3c1e: je 0x4a3ecf */ if (fZ) goto L_004a3ecf;
L_004a3c24:; BB(0x004a3c24);
    /* 004a3c24: cmp eax, 9 */ {  u32 a = r_eax; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3c27: je 0x4a3ecf */ if (fZ) goto L_004a3ecf;
L_004a3c2d:; BB(0x004a3c2d);
    /* 004a3c2d: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3c30: je 0x4a3ecf */ if (fZ) goto L_004a3ecf;
L_004a3c36:; BB(0x004a3c36);
    /* 004a3c36: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3c38: jne 0x4a3ea3 */ if (!fZ) goto L_004a3ea3;
L_004a3c3e:; BB(0x004a3c3e);
    /* 004a3c3e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a3c40: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a3c45u); f_007aa094();
    /* 004a3c45: mov eax, dword ptr [ebx + 0x6e4] */ r_eax = R32((u32)(r_ebx+0x6e4u));
    /* 004a3c4b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3c4d: je 0x4a3de7 */ if (fZ) goto L_004a3de7;
L_004a3c53:; BB(0x004a3c53);
    /* 004a3c53: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3c56: jne 0x4a3db3 */ if (!fZ) goto L_004a3db3;
L_004a3c5c:; BB(0x004a3c5c);
    /* 004a3c5c: fild dword ptr [ebx + 0x6e8] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x6e8u)));
    /* 004a3c62: fld dword ptr [0x903df0] */ FPUSH(R_F32((u32)(0x903df0u)));
    /* 004a3c68: fld dword ptr [0xa475ac] */ FPUSH(R_F32((u32)(0xa475acu)));
    /* 004a3c6e: fsub dword ptr [0x903fd4] */ ST(0) = ST(0) - R_F32((u32)(0x903fd4u));
    /* 004a3c74: fmul dword ptr [0x903dec] */ ST(0) = ST(0) * R_F32((u32)(0x903decu));
    /* 004a3c7a: fld dword ptr [0x903de8] */ FPUSH(R_F32((u32)(0x903de8u)));
    /* 004a3c80: mov edx, dword ptr [ebx + 0x6e8] */ r_edx = R32((u32)(r_ebx+0x6e8u));
    /* 004a3c86: fcom st(3) */ fx_compare(ST(0), ST(3)); 
    /* 004a3c88: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a3c8a: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004a3c8c: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004a3c90: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 004a3c94: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a3c96: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004a3c9a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a3c9b: jbe 0x4a3cee */ if ((fC||fZ)) goto L_004a3cee;
L_004a3c9d:; BB(0x004a3c9d);
    /* 004a3c9d: fld dword ptr [0x903de4] */ FPUSH(R_F32((u32)(0x903de4u)));
    /* 004a3ca3: fmul dword ptr [esp + 0x24] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x24u));
    /* 004a3ca7: fdivrp st(1) */ ST(1) = ST(0) / ST(1); FPOP();
    /* 004a3ca9: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004a3cac: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004a3cb0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a3cb5: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a3cb9: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a3cbd: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a3cc1: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004a3cc4: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004a3cc8: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4a3ccdu); f_0082ddd8();
    /* 004a3ccd: fld dword ptr [0x903fd4] */ FPUSH(R_F32((u32)(0x903fd4u)));
    /* 004a3cd3: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004a3cd7: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004a3cdb: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 004a3cdd: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a3cdf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a3ce1: fadd st(2), st(0) */ ST(2) = ST(2) + ST(0);
    /* 004a3ce3: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a3ce5: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004a3ce7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a3ce9: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 004a3cec: jmp 0x4a3d4e */ goto L_004a3d4e;
L_004a3cee:; BB(0x004a3cee);
    /* 004a3cee: fld dword ptr [0x903de4] */ FPUSH(R_F32((u32)(0x903de4u)));
    /* 004a3cf4: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 004a3cf6: add edx, 0x14 */ {  u32 a = r_edx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004a3cf9: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 004a3cfd: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 004a3d01: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 004a3d03: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004a3d05: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004a3d07: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a3d09: fstp dword ptr [esp + 0x24] */ W_F32((u32)(r_esp+0x24u), ST(0)); FPOP();
    /* 004a3d0d: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004a3d10: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004a3d14: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a3d19: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a3d1d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a3d21: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a3d25: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004a3d28: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004a3d2c: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4a3d31u); f_0082ddd8();
    /* 004a3d31: fld dword ptr [0x903fd4] */ FPUSH(R_F32((u32)(0x903fd4u)));
    /* 004a3d37: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004a3d3b: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004a3d3f: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 004a3d41: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a3d43: fchs  */ ST(0) = -ST(0);
    /* 004a3d45: fmulp st(3) */ ST(3) = ST(3) * ST(0); FPOP();
    /* 004a3d47: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 004a3d49: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a3d4b: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
L_004a3d4e:; BB(0x004a3d4e);
    /* 004a3d4e: fld dword ptr [esp + 0x24] */ FPUSH(R_F32((u32)(r_esp+0x24u)));
    /* 004a3d52: fmul dword ptr [0x903de0] */ ST(0) = ST(0) * R_F32((u32)(0x903de0u));
    /* 004a3d58: fdiv dword ptr [0x903de8] */ ST(0) = ST(0) / R_F32((u32)(0x903de8u));
    /* 004a3d5e: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004a3d61: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004a3d65: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a3d6a: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a3d6e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a3d72: fistp dword ptr [ebx + 0x5c] */ W32((u32)(r_ebx+0x5cu), (u32)fx_int32(ST(0))); FPOP();
    /* 004a3d75: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004a3d78: mov eax, dword ptr [ebx + 0x6e8] */ r_eax = R32((u32)(r_ebx+0x6e8u));
    /* 004a3d7e: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004a3d81: mov dword ptr [ebx + 0x6e8], eax */ W32((u32)(r_ebx+0x6e8u), r_eax);
    /* 004a3d87: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004a3d8a: jg 0x4a3d93 */ if ((!fZ&&fS==fO)) goto L_004a3d93;
L_004a3d8c:; BB(0x004a3d8c);
    /* 004a3d8c: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004a3d8e: jmp 0x4a3e6d */ goto L_004a3e6d;
L_004a3d93:; BB(0x004a3d93);
    /* 004a3d93: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 004a3d96: mov dword ptr [ebx + 0x5c], 0 */ W32((u32)(r_ebx+0x5cu), 0x0u);
    /* 004a3d9d: mov eax, 2 */ r_eax = 0x2u;
    /* 004a3da2: mov dword ptr [ebx + 0x4ec], eax */ W32((u32)(r_ebx+0x4ecu), r_eax);
    /* 004a3da8: mov dword ptr [ebx + 0x6e4], eax */ W32((u32)(r_ebx+0x6e4u), r_eax);
    /* 004a3dae: jmp 0x4a3e6d */ goto L_004a3e6d;
L_004a3db3:; BB(0x004a3db3);
    /* 004a3db3: fldz  */ FPUSH(0.0);
    /* 004a3db5: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004a3db9: cmp eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3dbc: jne 0x4a3e6d */ if (!fZ) goto L_004a3e6d;
L_004a3dc2:; BB(0x004a3dc2);
    /* 004a3dc2: fld dword ptr [0x903df0] */ FPUSH(R_F32((u32)(0x903df0u)));
    /* 004a3dc8: mov eax, dword ptr [ebx + 0xb4] */ r_eax = R32((u32)(r_ebx+0xb4u));
    /* 004a3dce: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004a3dd2: cmp eax, 0x14 */ {  u32 a = r_eax; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3dd5: jne 0x4a3e6d */ if (!fZ) goto L_004a3e6d;
L_004a3ddb:; BB(0x004a3ddb);
    /* 004a3ddb: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a3ddd: call 0x4a7e20 */ r_esp -= 4; W32(r_esp, 0x4a3de2u); f_004a7e20();
    /* 004a3de2: jmp 0x4a3e6d */ goto L_004a3e6d;
L_004a3de7:; BB(0x004a3de7);
    /* 004a3de7: fld dword ptr [0x903ddc] */ FPUSH(R_F32((u32)(0x903ddcu)));
    /* 004a3ded: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004a3df1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a3df3: call 0x7aabd8 */ r_esp -= 4; W32(r_esp, 0x4a3df8u); f_007aabd8();
    /* 004a3df8: fmul dword ptr [0x903de4] */ ST(0) = ST(0) * R_F32((u32)(0x903de4u));
    /* 004a3dfe: fdiv dword ptr [0x903dd0] */ ST(0) = ST(0) / R_F32((u32)(0x903dd0u));
    /* 004a3e04: fld dword ptr [0xa475ac] */ FPUSH(R_F32((u32)(0xa475acu)));
    /* 004a3e0a: fsub dword ptr [0x903fd8] */ ST(0) = ST(0) - R_F32((u32)(0x903fd8u));
    /* 004a3e10: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004a3e12: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004a3e15: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004a3e19: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a3e1e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004a3e22: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004a3e26: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 004a3e2a: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004a3e2d: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 004a3e31: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 004a3e35: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4a3e3au); f_0082dcbc();
    /* 004a3e3a: fld dword ptr [esp + 0x20] */ FPUSH(R_F32((u32)(r_esp+0x20u)));
    /* 004a3e3e: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 004a3e40: fadd dword ptr [0x903fd8] */ ST(0) = ST(0) + R_F32((u32)(0x903fd8u));
    /* 004a3e46: fstp dword ptr [ebx + 0x3c] */ W_F32((u32)(r_ebx+0x3cu), ST(0)); FPOP();
    /* 004a3e49: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a3e4b: push 0x41100000 */ { u32 v = 0x41100000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a3e50: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a3e55u); f_007aaa30();
    /* 004a3e55: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3e57: je 0x4a3e6d */ if (fZ) goto L_004a3e6d;
L_004a3e59:; BB(0x004a3e59);
    /* 004a3e59: mov dword ptr [ebx + 0x6e4], 1 */ W32((u32)(r_ebx+0x6e4u), 0x1u);
    /* 004a3e63: mov dword ptr [ebx + 0x6e8], 0 */ W32((u32)(r_ebx+0x6e8u), 0x0u);
L_004a3e6d:; BB(0x004a3e6d);
    /* 004a3e6d: mov eax, dword ptr [ebx + 0x60] */ r_eax = R32((u32)(r_ebx+0x60u));
    /* 004a3e70: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a3e73: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 004a3e77: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004a3e7a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a3e7c: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 004a3e80: call 0x4a15ac */ r_esp -= 4; W32(r_esp, 0x4a3e85u); f_004a15ac();
    /* 004a3e85: push 0x40a00000 */ { u32 v = 0x40a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a3e8a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a3e8c: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a3e91u); f_007aaa30();
    /* 004a3e91: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3e93: je 0x4a3ecf */ if (fZ) goto L_004a3ecf;
L_004a3e95:; BB(0x004a3e95);
    /* 004a3e95: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a3e97: call 0x4a15fc */ r_esp -= 4; W32(r_esp, 0x4a3e9cu); f_004a15fc();
    /* 004a3e9c: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a3e9f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a3ea0: ret 4 */ FN_RET(0x004a3c08); r_esp += 8; return;
L_004a3ea3:; BB(0x004a3ea3);
    /* 004a3ea3: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3ea6: jne 0x4a3ecf */ if (!fZ) goto L_004a3ecf;
L_004a3ea8:; BB(0x004a3ea8);
    /* 004a3ea8: mov eax, dword ptr [ebx + 0x4c8] */ r_eax = R32((u32)(r_ebx+0x4c8u));
    /* 004a3eae: mov dword ptr [ebx + 0x4ec], 2 */ W32((u32)(r_ebx+0x4ecu), 0x2u);
    /* 004a3eb8: and eax, 0xfffffffb */ {  u32 a = r_eax; u32 b = 0xfffffffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a3ebb: mov dword ptr [ebx + 0x4c8], eax */ W32((u32)(r_ebx+0x4c8u), r_eax);
    /* 004a3ec1: mov dword ptr [ebx + 0x3c], 0x42860000 */ W32((u32)(r_ebx+0x3cu), 0x42860000u);
    /* 004a3ec8: mov dword ptr [ebx + 0x5c], 0 */ W32((u32)(r_ebx+0x5cu), 0x0u);
L_004a3ecf:; BB(0x004a3ecf);
    /* 004a3ecf: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a3ed2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a3ed3: ret 4 */ FN_RET(0x004a3c08); r_esp += 8; return;
L_004a3ed6:; BB(0x004a3ed6);
    /* 004a3ed6: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 004a3ed8: mov eax, 0x13 */ r_eax = 0x13u;
    /* 004a3edd: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 004a3ee4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 004a3ee6: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4a3eecu); call_ind(t); }
    /* 004a3eec: mov eax, dword ptr [ebx + 0x4c8] */ r_eax = R32((u32)(r_ebx+0x4c8u));
    /* 004a3ef2: mov dword ptr [ebx + 0x4ec], 1 */ W32((u32)(r_ebx+0x4ecu), 0x1u);
    /* 004a3efc: or eax, 0x104 */ {  u32 a = r_eax; u32 b = 0x104u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a3f01: mov dword ptr [ebx + 0x4c8], eax */ W32((u32)(r_ebx+0x4c8u), r_eax);
    /* 004a3f07: mov dword ptr [ebx + 0x3c], 0x43340000 */ W32((u32)(r_ebx+0x3cu), 0x43340000u);
    /* 004a3f0e: mov dword ptr [ebx + 0x6e4], 0 */ W32((u32)(r_ebx+0x6e4u), 0x0u);
    /* 004a3f18: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a3f1b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 004a3f1c: ret 4 */ FN_RET(0x004a3c08); r_esp += 8; return;
}

void f_004a3f20(void) /* sub_4A3F20 */
{
    FN_ENTER(0x004a3f20);
    /* 004a3f20: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004a3f21: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004a3f24: mov edi, ecx */ r_edi = r_ecx;
    /* 004a3f26: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 004a3f2a: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3f2d: je 0x4a40bb */ if (fZ) goto L_004a40bb;
L_004a3f33:; BB(0x004a3f33);
    /* 004a3f33: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3f35: jne 0x4a4097 */ if (!fZ) goto L_004a4097;
L_004a3f3b:; BB(0x004a3f3b);
    /* 004a3f3b: mov ecx, edi */ r_ecx = r_edi;
    /* 004a3f3d: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4a3f42u); f_007aa094();
    /* 004a3f42: mov eax, dword ptr [edi + 0x6e4] */ r_eax = R32((u32)(r_edi+0x6e4u));
    /* 004a3f48: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3f4a: jne 0x4a405c */ if (!fZ) goto L_004a405c;
L_004a3f50:; BB(0x004a3f50);
    /* 004a3f50: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a3f53: push 0x3fc00000 */ { u32 v = 0x3fc00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a3f58: mov ecx, edi */ r_ecx = r_edi;
    /* 004a3f5a: call 0x4a15ac */ r_esp -= 4; W32(r_esp, 0x4a3f5fu); f_004a15ac();
    /* 004a3f5f: movzx edx, byte ptr [0xa474cc] */ r_edx = (u32)R8((u32)(0xa474ccu));
    /* 004a3f66: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 004a3f69: jne 0x4a3f9f */ if (!fZ) goto L_004a3f9f;
L_004a3f6b:; BB(0x004a3f6b);
    /* 004a3f6b: mov eax, dword ptr [0xa47564] */ r_eax = R32((u32)(0xa47564u));
    /* 004a3f70: mov dword ptr [0xa47524], 0x42860000 */ W32((u32)(0xa47524u), 0x42860000u);
    /* 004a3f7a: or edx, 0xffffff01 */ {  u32 a = r_edx; u32 b = 0xffffff01u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 004a3f80: mov dword ptr [0xa47534], 0x431d0000 */ W32((u32)(0xa47534u), 0x431d0000u);
    /* 004a3f8a: mov dword ptr [0xa47554], eax */ W32((u32)(0xa47554u), r_eax);
    /* 004a3f8f: mov byte ptr [0xa474cc], dl */ W8((u32)(0xa474ccu), (u8)r_edx);
    /* 004a3f95: mov dword ptr [0xa47544], 0x43998000 */ W32((u32)(0xa47544u), 0x43998000u);
L_004a3f9f:; BB(0x004a3f9f);
    /* 004a3f9f: mov ecx, edi */ r_ecx = r_edi;
    /* 004a3fa1: call 0x7aabd8 */ r_esp -= 4; W32(r_esp, 0x4a3fa6u); f_007aabd8();
    /* 004a3fa6: fld dword ptr [0x903db4] */ FPUSH(R_F32((u32)(0x903db4u)));
    /* 004a3fac: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 004a3fae: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004a3fb2: lea eax, [esp + 0x14] */ r_eax = (u32)(r_esp+0x14u);
    /* 004a3fb6: mov dword ptr [esp], 0xa47520 */ W32((u32)(r_esp), 0xa47520u);
    /* 004a3fbd: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004a3fc1: mov dword ptr [esp + 4], 4 */ W32((u32)(r_esp+0x4u), 0x4u);
    /* 004a3fc9: mov dword ptr [esp + 0xc], 0 */ W32((u32)(r_esp+0xcu), 0x0u);
    /* 004a3fd1: call 0x7be6b8 */ r_esp -= 4; W32(r_esp, 0x4a3fd6u); f_007be6b8();
    /* 004a3fd6: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004a3fda: push 0x41880000 */ { u32 v = 0x41880000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a3fdf: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 004a3fe2: mov ecx, edi */ r_ecx = r_edi;
    /* 004a3fe4: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a3fe9u); f_007aaa30();
    /* 004a3fe9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a3feb: je 0x4a4079 */ if (fZ) goto L_004a4079;
L_004a3ff1:; BB(0x004a3ff1);
    /* 004a3ff1: mov eax, dword ptr [0xa47564] */ r_eax = R32((u32)(0xa47564u));
    /* 004a3ff6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004a3ff8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a3ff9: mov dword ptr [edi + 0x4ec], edx */ W32((u32)(r_edi+0x4ecu), r_edx);
    /* 004a3fff: mov dword ptr [edi + 0x3c], eax */ W32((u32)(r_edi+0x3cu), r_eax);
    /* 004a4002: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a4003: lea eax, [edi + 0x568] */ r_eax = (u32)(r_edi+0x568u);
    /* 004a4009: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004a400a: push 0x3a7 */ { u32 v = 0x3a7u; r_esp -= 4; W32(r_esp, v); }
    /* 004a400f: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x4a4014u); f_00814298();
    /* 004a4014: mov eax, dword ptr [edi + 0x38] */ r_eax = R32((u32)(r_edi+0x38u));
    /* 004a4017: mov edx, dword ptr [edi + 0x40] */ r_edx = R32((u32)(r_edi+0x40u));
    /* 004a401a: mov dword ptr [esp + 0x34], 0 */ W32((u32)(r_esp+0x34u), 0x0u);
    /* 004a4022: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004a4026: mov eax, dword ptr [edi + 0x5f8] */ r_eax = R32((u32)(r_edi+0x5f8u));
    /* 004a402c: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 004a4030: lea edx, [esp + 0x30] */ r_edx = (u32)(r_esp+0x30u);
    /* 004a4034: push 0x40 */ { u32 v = 0x40u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4036: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004a4039: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004a403a: call 0x50b7a4 */ r_esp -= 4; W32(r_esp, 0x4a403fu); f_0050b7a4();
    /* 004a403f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004a4041: call 0x4d4288 */ r_esp -= 4; W32(r_esp, 0x4a4046u); f_004d4288();
    /* 004a4046: add esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004a4049: mov ecx, edi */ r_ecx = r_edi;
    /* 004a404b: call 0x4a1f34 */ r_esp -= 4; W32(r_esp, 0x4a4050u); f_004a1f34();
    /* 004a4050: mov dword ptr [edi + 0x6e4], 1 */ W32((u32)(r_edi+0x6e4u), 0x1u);
    /* 004a405a: jmp 0x4a4079 */ goto L_004a4079;
L_004a405c:; BB(0x004a405c);
    /* 004a405c: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a405f: jne 0x4a4079 */ if (!fZ) goto L_004a4079;
L_004a4061:; BB(0x004a4061);
    /* 004a4061: fld dword ptr [edi + 0xc8] */ FPUSH(R_F32((u32)(r_edi+0xc8u)));
    /* 004a4067: fcomp dword ptr [0x903dcc] */ fx_compare(ST(0), R_F32((u32)(0x903dccu))); FPOP();
    /* 004a406d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004a406f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004a4070: ja 0x4a4079 */ if ((!fC&&!fZ)) goto L_004a4079;
L_004a4072:; BB(0x004a4072);
    /* 004a4072: mov ecx, edi */ r_ecx = r_edi;
    /* 004a4074: call 0x4a7e20 */ r_esp -= 4; W32(r_esp, 0x4a4079u); f_004a7e20();
L_004a4079:; BB(0x004a4079);
    /* 004a4079: push 0x40800000 */ { u32 v = 0x40800000u; r_esp -= 4; W32(r_esp, v); }
    /* 004a407e: mov ecx, edi */ r_ecx = r_edi;
    /* 004a4080: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4a4085u); f_007aaa30();
    /* 004a4085: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a4087: je 0x4a4102 */ if (fZ) goto L_004a4102;
L_004a4089:; BB(0x004a4089);
    /* 004a4089: mov ecx, edi */ r_ecx = r_edi;
    /* 004a408b: call 0x4a15fc */ r_esp -= 4; W32(r_esp, 0x4a4090u); f_004a15fc();
    /* 004a4090: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a4093: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a4094: ret 4 */ FN_RET(0x004a3f20); r_esp += 8; return;
L_004a4097:; BB(0x004a4097);
    /* 004a4097: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004a409a: jne 0x4a4102 */ if (!fZ) goto L_004a4102;
L_004a409c:; BB(0x004a409c);
    /* 004a409c: mov eax, dword ptr [edi + 0x4c8] */ r_eax = R32((u32)(r_edi+0x4c8u));
    /* 004a40a2: and eax, 0xfffffefb */ {  u32 a = r_eax; u32 b = 0xfffffefbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004a40a7: mov dword ptr [edi + 0x4c8], eax */ W32((u32)(r_edi+0x4c8u), r_eax);
    /* 004a40ad: mov ecx, edi */ r_ecx = r_edi;
    /* 004a40af: call 0x4a8a24 */ r_esp -= 4; W32(r_esp, 0x4a40b4u); f_004a8a24();
    /* 004a40b4: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a40b7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a40b8: ret 4 */ FN_RET(0x004a3f20); r_esp += 8; return;
L_004a40bb:; BB(0x004a40bb);
    /* 004a40bb: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004a40bd: mov eax, 0x16 */ r_eax = 0x16u;
    /* 004a40c2: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 004a40c9: mov ecx, edi */ r_ecx = r_edi;
    /* 004a40cb: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4a40d1u); call_ind(t); }
    /* 004a40d1: mov eax, dword ptr [edi + 0x4c8] */ r_eax = R32((u32)(r_edi+0x4c8u));
    /* 004a40d7: mov dword ptr [edi + 0x4ec], 1 */ W32((u32)(r_edi+0x4ecu), 0x1u);
    /* 004a40e1: or eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004a40e4: mov dword ptr [edi + 0x4c8], eax */ W32((u32)(r_edi+0x4c8u), r_eax);
    /* 004a40ea: mov dword ptr [edi + 0x3c], 0x43340000 */ W32((u32)(r_edi+0x3cu), 0x43340000u);
    /* 004a40f1: mov ecx, edi */ r_ecx = r_edi;
    /* 004a40f3: call 0x4a410c */ r_esp -= 4; W32(r_esp, 0x4a40f8u); f_004a410c();
    /* 004a40f8: mov dword ptr [edi + 0x6e4], 0 */ W32((u32)(r_edi+0x6e4u), 0x0u);
L_004a4102:; BB(0x004a4102);
    /* 004a4102: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004a4105: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004a4106: ret 4 */ FN_RET(0x004a3f20); r_esp += 8; return;
}

