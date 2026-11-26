#include "protos.h"

void f_004c7011(void)
{
    FN_ENTER(0x004c7011);
    /* 004c7011: mov eax, dword ptr [edi + 0x85c] */ r_eax = R32((u32)(r_edi+0x85cu));
    /* 004c7017: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c701a: cmp eax, 0x1e */ {  u32 a = r_eax; u32 b = 0x1eu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c701d: jge 0x4c702f */ if ((fS==fO)) goto L_004c702f;
L_004c701f:; BB(0x004c701f);
    /* 004c701f: mov dword ptr [edi + 0x85c], eax */ W32((u32)(r_edi+0x85cu), r_eax);
    /* 004c7025: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c702b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c702c: ret 4 */ FN_RET(0x004c7011); r_esp += 8; return;
L_004c702f:; BB(0x004c702f);
    /* 004c702f: mov edx, dword ptr [edi + 0x6e0] */ r_edx = R32((u32)(r_edi+0x6e0u));
    /* 004c7035: mov dword ptr [edi + 0x85c], 0 */ W32((u32)(r_edi+0x85cu), 0x0u);
    /* 004c703f: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 004c7042: fcomp dword ptr [0x9088fc] */ fx_compare(ST(0), R_F32((u32)(0x9088fcu))); FPOP();
    /* 004c7048: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c704a: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c704b: ja 0x4c7061 */ if ((!fC&&!fZ)) goto L_004c7061;
L_004c704d:; BB(0x004c704d);
    /* 004c704d: mov dword ptr [edi + 0x860], 1 */ W32((u32)(r_edi+0x860u), 0x1u);
    /* 004c7057: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c705d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c705e: ret 4 */ FN_RET(0x004c7011); r_esp += 8; return;
L_004c7061:; BB(0x004c7061);
    /* 004c7061: mov eax, dword ptr [edx + 0x1c] */ r_eax = R32((u32)(r_edx+0x1cu));
    /* 004c7064: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c7065: mov dword ptr [edi + 0x86c], eax */ W32((u32)(r_edi+0x86cu), r_eax);
    /* 004c706b: mov ecx, edi */ r_ecx = r_edi;
    /* 004c706d: call 0x4c7670 */ r_esp -= 4; W32(r_esp, 0x4c7072u); f_004c7670();
    /* 004c7072: mov ecx, edi */ r_ecx = r_edi;
    /* 004c7074: call 0x4c0a9c */ r_esp -= 4; W32(r_esp, 0x4c7079u); f_004c0a9c();
    /* 004c7079: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c707f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c7080: ret 4 */ FN_RET(0x004c7011); r_esp += 8; return;
}

void f_004c7026(void)
{
    FN_ENTER(0x004c7026);
    /* 004c7026: les ecx, ptr [ecx + eax] */ UNSUP(0x004c7026, "les ecx, ptr [ecx + eax]");
    /* 004c7029: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r); fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 7) & 1; fC = (r < a); }
    /* 004c702b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c702c: ret 4 */ FN_RET(0x004c7026); r_esp += 8; return;
}

void f_004c7083(void)
{
    FN_ENTER(0x004c7083);
    /* 004c7083: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 004c7084: mov ecx, edi */ r_ecx = r_edi;
    /* 004c7086: call 0x4c7644 */ r_esp -= 4; W32(r_esp, 0x4c708bu); f_004c7644();
    /* 004c708b: jmp 0x4c74a3 */ goto L_004c74a3;
L_004c74a3:; BB(0x004c74a3);
    /* 004c74a3: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c74a9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c74aa: ret 4 */ FN_RET(0x004c7083); r_esp += 8; return;
}

void f_004c7090(void)
{
    FN_ENTER(0x004c7090);
    /* 004c7090: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c7093: mov ecx, edi */ r_ecx = r_edi;
    /* 004c7095: call 0x4c7670 */ r_esp -= 4; W32(r_esp, 0x4c709au); f_004c7670();
    /* 004c709a: jmp 0x4c74a3 */ goto L_004c74a3;
L_004c74a3:; BB(0x004c74a3);
    /* 004c74a3: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c74a9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c74aa: ret 4 */ FN_RET(0x004c7090); r_esp += 8; return;
}

void f_004c709f(void)
{
    FN_ENTER(0x004c709f);
    /* 004c709f: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 004c70a1: mov eax, 1 */ r_eax = 0x1u;
    /* 004c70a6: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 004c70ad: mov ecx, edi */ r_ecx = r_edi;
    /* 004c70af: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4c70b5u); call_ind(t); }
    /* 004c70b5: mov dword ptr [edi + 0x3ec], 0 */ W32((u32)(r_edi+0x3ecu), 0x0u);
    /* 004c70bf: mov ecx, edi */ r_ecx = r_edi;
    /* 004c70c1: call 0x4cb184 */ r_esp -= 4; W32(r_esp, 0x4c70c6u); f_004cb184();
    /* 004c70c6: mov eax, dword ptr [edi + 0x3c8] */ r_eax = R32((u32)(r_edi+0x3c8u));
    /* 004c70cc: and eax, 0xffffffc9 */ {  u32 a = r_eax; u32 b = 0xffffffc9u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c70cf: mov dword ptr [edi + 0x3c8], eax */ W32((u32)(r_edi+0x3c8u), r_eax);
    /* 004c70d5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 004c70d7: mov dword ptr [edi + 0x85c], edx */ W32((u32)(r_edi+0x85cu), r_edx);
    /* 004c70dd: mov dword ptr [edi + 0x860], edx */ W32((u32)(r_edi+0x860u), r_edx);
    /* 004c70e3: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c70e9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c70ea: ret 4 */ FN_RET(0x004c709f); r_esp += 8; return;
}

void f_004c70ed(void)
{
    FN_ENTER(0x004c70ed);
    /* 004c70ed: mov eax, dword ptr [edi + 0x860] */ r_eax = R32((u32)(r_edi+0x860u));
    /* 004c70f3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c70f6: je 0x4c7572 */ if (fZ) goto L_004c7572;
L_004c70fc:; BB(0x004c70fc);
    /* 004c70fc: mov eax, dword ptr [edi + 0x6e0] */ r_eax = R32((u32)(r_edi+0x6e0u));
    /* 004c7102: mov eax, dword ptr [eax + 8] */ r_eax = R32((u32)(r_eax+0x8u));
    /* 004c7105: test dword ptr [0xa0f674], eax */ {  u32 a = R32((u32)(0xa0f674u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c710b: jne 0x4c72b3 */ if (!fZ) goto L_004c72b3;
L_004c7111:; BB(0x004c7111);
    /* 004c7111: test dword ptr [0xa0f678], eax */ {  u32 a = R32((u32)(0xa0f678u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c7117: jne 0x4c71ee */ if (!fZ) goto L_004c71ee;
L_004c711d:; BB(0x004c711d);
    /* 004c711d: test dword ptr [0xa0f67c], eax */ {  u32 a = R32((u32)(0xa0f67cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c7123: je 0x4c74a3 */ if (fZ) goto L_004c74a3;
L_004c7129:; BB(0x004c7129);
    /* 004c7129: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c712b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004c712d: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004c712f: mov ecx, edi */ r_ecx = r_edi;
    /* 004c7131: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c7137u); call_ind(t); }
    /* 004c7137: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 004c713b: mov ecx, dword ptr [edi + 0x694] */ r_ecx = R32((u32)(r_edi+0x694u));
    /* 004c7141: mov byte ptr [esp + 0xac], 0xa8 */ W8((u32)(r_esp+0xacu), 0xa8u);
    /* 004c7149: mov edx, 5 */ r_edx = 0x5u;
    /* 004c714e: mov byte ptr [esp + 0xad], 6 */ W8((u32)(r_esp+0xadu), 0x6u);
    /* 004c7156: mov word ptr [esp + 0xae], ax */ W16((u32)(r_esp+0xaeu), (u16)r_eax);
    /* 004c715e: mov eax, dword ptr [edi + 0x67c] */ r_eax = R32((u32)(r_edi+0x67cu));
    /* 004c7164: mov word ptr [esp + 0xb0], dx */ W16((u32)(r_esp+0xb0u), (u16)r_edx);
    /* 004c716c: mov word ptr [esp + 0xb2], ax */ W16((u32)(r_esp+0xb2u), (u16)r_eax);
    /* 004c7174: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 004c717b: mov dword ptr [esp + 0xb4], eax */ W32((u32)(r_esp+0xb4u), r_eax);
    /* 004c7182: mov eax, dword ptr [edi + 0x690] */ r_eax = R32((u32)(r_edi+0x690u));
    /* 004c7188: mov dword ptr [esp + 0xb8], eax */ W32((u32)(r_esp+0xb8u), r_eax);
    /* 004c718f: mov dword ptr [esp + 0xbc], ecx */ W32((u32)(r_esp+0xbcu), r_ecx);
    /* 004c7196: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c719bu); f_008587a5();
    /* 004c719b: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c719f: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c71a3: fdiv dword ptr [0x9085b0] */ ST(0) = ST(0) / R_F32((u32)(0x9085b0u));
    /* 004c71a9: fmul dword ptr [0x9085b4] */ ST(0) = ST(0) * R_F32((u32)(0x9085b4u));
    /* 004c71af: lea ecx, [esp + 0xac] */ r_ecx = (u32)(r_esp+0xacu);
    /* 004c71b6: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c71ba: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c71bf: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c71c4: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c71c8: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c71cc: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c71d0: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c71d4: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c71d8: mov byte ptr [esp + 0xc0], al */ W8((u32)(r_esp+0xc0u), (u8)r_eax);
    /* 004c71df: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c71e4u); f_008003e0();
    /* 004c71e4: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c71ea: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c71eb: ret 4 */ FN_RET(0x004c70ed); r_esp += 8; return;
L_004c71ee:; BB(0x004c71ee);
    /* 004c71ee: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c71f0: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004c71f2: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004c71f4: mov ecx, edi */ r_ecx = r_edi;
    /* 004c71f6: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c71fcu); call_ind(t); }
    /* 004c71fc: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 004c7200: mov ecx, dword ptr [edi + 0x694] */ r_ecx = R32((u32)(r_edi+0x694u));
    /* 004c7206: mov byte ptr [esp + 0xc4], 0xa8 */ W8((u32)(r_esp+0xc4u), 0xa8u);
    /* 004c720e: mov edx, 4 */ r_edx = 0x4u;
    /* 004c7213: mov byte ptr [esp + 0xc5], 6 */ W8((u32)(r_esp+0xc5u), 0x6u);
    /* 004c721b: mov word ptr [esp + 0xc6], ax */ W16((u32)(r_esp+0xc6u), (u16)r_eax);
    /* 004c7223: mov eax, dword ptr [edi + 0x67c] */ r_eax = R32((u32)(r_edi+0x67cu));
    /* 004c7229: mov word ptr [esp + 0xc8], dx */ W16((u32)(r_esp+0xc8u), (u16)r_edx);
    /* 004c7231: mov word ptr [esp + 0xca], ax */ W16((u32)(r_esp+0xcau), (u16)r_eax);
    /* 004c7239: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 004c7240: mov dword ptr [esp + 0xcc], eax */ W32((u32)(r_esp+0xccu), r_eax);
    /* 004c7247: mov eax, dword ptr [edi + 0x690] */ r_eax = R32((u32)(r_edi+0x690u));
    /* 004c724d: mov dword ptr [esp + 0xd0], eax */ W32((u32)(r_esp+0xd0u), r_eax);
    /* 004c7254: mov dword ptr [esp + 0xd4], ecx */ W32((u32)(r_esp+0xd4u), r_ecx);
    /* 004c725b: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c7260u); f_008587a5();
    /* 004c7260: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c7264: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c7268: fdiv dword ptr [0x9085b0] */ ST(0) = ST(0) / R_F32((u32)(0x9085b0u));
    /* 004c726e: fmul dword ptr [0x9085b4] */ ST(0) = ST(0) * R_F32((u32)(0x9085b4u));
    /* 004c7274: lea ecx, [esp + 0xc4] */ r_ecx = (u32)(r_esp+0xc4u);
    /* 004c727b: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c727f: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c7284: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c7289: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c728d: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c7291: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c7295: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c7299: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c729d: mov byte ptr [esp + 0xd8], al */ W8((u32)(r_esp+0xd8u), (u8)r_eax);
    /* 004c72a4: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c72a9u); f_008003e0();
    /* 004c72a9: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c72af: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c72b0: ret 4 */ FN_RET(0x004c70ed); r_esp += 8; return;
L_004c72b3:; BB(0x004c72b3);
    /* 004c72b3: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c72b5: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004c72b7: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004c72b9: mov ecx, edi */ r_ecx = r_edi;
    /* 004c72bb: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c72c1u); call_ind(t); }
    /* 004c72c1: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 004c72c5: mov ecx, dword ptr [edi + 0x694] */ r_ecx = R32((u32)(r_edi+0x694u));
    /* 004c72cb: mov byte ptr [esp + 0xdc], 0xa8 */ W8((u32)(r_esp+0xdcu), 0xa8u);
    /* 004c72d3: mov edx, 3 */ r_edx = 0x3u;
    /* 004c72d8: mov byte ptr [esp + 0xdd], 6 */ W8((u32)(r_esp+0xddu), 0x6u);
    /* 004c72e0: mov word ptr [esp + 0xde], ax */ W16((u32)(r_esp+0xdeu), (u16)r_eax);
    /* 004c72e8: mov eax, dword ptr [edi + 0x67c] */ r_eax = R32((u32)(r_edi+0x67cu));
    /* 004c72ee: mov word ptr [esp + 0xe0], dx */ W16((u32)(r_esp+0xe0u), (u16)r_edx);
    /* 004c72f6: mov word ptr [esp + 0xe2], ax */ W16((u32)(r_esp+0xe2u), (u16)r_eax);
    /* 004c72fe: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 004c7305: mov dword ptr [esp + 0xe4], eax */ W32((u32)(r_esp+0xe4u), r_eax);
    /* 004c730c: mov eax, dword ptr [edi + 0x690] */ r_eax = R32((u32)(r_edi+0x690u));
    /* 004c7312: mov dword ptr [esp + 0xe8], eax */ W32((u32)(r_esp+0xe8u), r_eax);
    /* 004c7319: mov dword ptr [esp + 0xec], ecx */ W32((u32)(r_esp+0xecu), r_ecx);
    /* 004c7320: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c7325u); f_008587a5();
    /* 004c7325: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c7329: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c732d: fdiv dword ptr [0x9085b0] */ ST(0) = ST(0) / R_F32((u32)(0x9085b0u));
    /* 004c7333: fmul dword ptr [0x9085b4] */ ST(0) = ST(0) * R_F32((u32)(0x9085b4u));
    /* 004c7339: lea ecx, [esp + 0xdc] */ r_ecx = (u32)(r_esp+0xdcu);
    /* 004c7340: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c7344: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c7349: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c734e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c7352: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c7356: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c735a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c735e: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c7362: mov byte ptr [esp + 0xf0], al */ W8((u32)(r_esp+0xf0u), (u8)r_eax);
    /* 004c7369: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c736eu); f_008003e0();
    /* 004c736e: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c7374: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c7375: ret 4 */ FN_RET(0x004c70ed); r_esp += 8; return;
L_004c74a3:; BB(0x004c74a3);
    /* 004c74a3: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c74a9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c74aa: ret 4 */ FN_RET(0x004c70ed); r_esp += 8; return;
L_004c7572:; BB(0x004c7572);
    /* 004c7572: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c7574: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 004c7576: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004c7578: mov ecx, edi */ r_ecx = r_edi;
    /* 004c757a: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c7580u); call_ind(t); }
    /* 004c7580: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 004c7584: mov ecx, dword ptr [edi + 0x694] */ r_ecx = R32((u32)(r_edi+0x694u));
    /* 004c758a: mov byte ptr [esp + 0xf4], 0xa8 */ W8((u32)(r_esp+0xf4u), 0xa8u);
    /* 004c7592: mov edx, 0x18 */ r_edx = 0x18u;
    /* 004c7597: mov byte ptr [esp + 0xf5], 6 */ W8((u32)(r_esp+0xf5u), 0x6u);
    /* 004c759f: mov word ptr [esp + 0xf6], ax */ W16((u32)(r_esp+0xf6u), (u16)r_eax);
    /* 004c75a7: mov eax, dword ptr [edi + 0x67c] */ r_eax = R32((u32)(r_edi+0x67cu));
    /* 004c75ad: mov word ptr [esp + 0xf8], dx */ W16((u32)(r_esp+0xf8u), (u16)r_edx);
    /* 004c75b5: mov word ptr [esp + 0xfa], ax */ W16((u32)(r_esp+0xfau), (u16)r_eax);
    /* 004c75bd: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 004c75c4: mov dword ptr [esp + 0xfc], eax */ W32((u32)(r_esp+0xfcu), r_eax);
    /* 004c75cb: mov eax, dword ptr [edi + 0x690] */ r_eax = R32((u32)(r_edi+0x690u));
    /* 004c75d1: mov dword ptr [esp + 0x100], eax */ W32((u32)(r_esp+0x100u), r_eax);
    /* 004c75d8: mov dword ptr [esp + 0x104], ecx */ W32((u32)(r_esp+0x104u), r_ecx);
    /* 004c75df: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c75e4u); f_008587a5();
    /* 004c75e4: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c75e8: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c75ec: fdiv dword ptr [0x9085b0] */ ST(0) = ST(0) / R_F32((u32)(0x9085b0u));
    /* 004c75f2: fmul dword ptr [0x9085b4] */ ST(0) = ST(0) * R_F32((u32)(0x9085b4u));
    /* 004c75f8: lea ecx, [esp + 0xf4] */ r_ecx = (u32)(r_esp+0xf4u);
    /* 004c75ff: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c7603: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c7608: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c760d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c7611: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c7615: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c7619: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c761d: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c7621: mov byte ptr [esp + 0x108], al */ W8((u32)(r_esp+0x108u), (u8)r_eax);
    /* 004c7628: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c762du); f_008003e0();
    /* 004c762d: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c7633: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c7634: ret 4 */ FN_RET(0x004c70ed); r_esp += 8; return;
}

void f_004c7378(void)
{
    FN_ENTER(0x004c7378);
    /* 004c7378: mov ecx, edi */ r_ecx = r_edi;
    /* 004c737a: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c737fu); f_007aa094();
    /* 004c737f: movsx eax, word ptr [edi + 0xb8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xb8u));
    /* 004c7386: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c7389: je 0x4c7637 */ if (fZ) goto L_004c7637;
L_004c738f:; BB(0x004c738f);
    /* 004c738f: push 0x41c00000 */ { u32 v = 0x41c00000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c7394: mov ecx, edi */ r_ecx = r_edi;
    /* 004c7396: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c739bu); f_007aaa30();
    /* 004c739b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c739d: je 0x4c73a8 */ if (fZ) goto L_004c73a8;
L_004c739f:; BB(0x004c739f);
    /* 004c739f: mov ecx, edi */ r_ecx = r_edi;
    /* 004c73a1: call 0x4c0f0c */ r_esp -= 4; W32(r_esp, 0x4c73a6u); f_004c0f0c();
    /* 004c73a6: jmp 0x4c73bf */ goto L_004c73bf;
L_004c73a8:; BB(0x004c73a8);
    /* 004c73a8: push 0x40400000 */ { u32 v = 0x40400000u; r_esp -= 4; W32(r_esp, v); }
    /* 004c73ad: mov ecx, edi */ r_ecx = r_edi;
    /* 004c73af: call 0x7aaa30 */ r_esp -= 4; W32(r_esp, 0x4c73b4u); f_007aaa30();
    /* 004c73b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c73b6: je 0x4c73bf */ if (fZ) goto L_004c73bf;
L_004c73b8:; BB(0x004c73b8);
    /* 004c73b8: mov ecx, edi */ r_ecx = r_edi;
    /* 004c73ba: call 0x4c0e4c */ r_esp -= 4; W32(r_esp, 0x4c73bfu); f_004c0e4c();
L_004c73bf:; BB(0x004c73bf);
    /* 004c73bf: fld dword ptr [0x9085a8] */ FPUSH(R_F32((u32)(0x9085a8u)));
    /* 004c73c5: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
    /* 004c73c9: fld dword ptr [edi + 0xc0] */ FPUSH(R_F32((u32)(r_edi+0xc0u)));
    /* 004c73cf: fcom dword ptr [0x9085a0] */ fx_compare(ST(0), R_F32((u32)(0x9085a0u))); 
    /* 004c73d5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c73d7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c73d8: mov dword ptr [edi + 0xc8], 0x3ef5c290 */ W32((u32)(r_edi+0xc8u), 0x3ef5c290u);
    /* 004c73e2: jbe 0x4c73fb */ if ((fC||fZ)) goto L_004c73fb;
L_004c73e4:; BB(0x004c73e4);
    /* 004c73e4: fcom dword ptr [0x90859c] */ fx_compare(ST(0), R_F32((u32)(0x90859cu))); 
    /* 004c73ea: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c73ec: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c73ed: jae 0x4c73fb */ if (!fC) goto L_004c73fb;
L_004c73ef:; BB(0x004c73ef);
    /* 004c73ef: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c73f1: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c73f7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c73f8: ret 4 */ FN_RET(0x004c7378); r_esp += 8; return;
L_004c73fb:; BB(0x004c73fb);
    /* 004c73fb: fcom dword ptr [0x9085ac] */ fx_compare(ST(0), R_F32((u32)(0x9085acu))); 
    /* 004c7401: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c7403: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c7404: jbe 0x4c741d */ if ((fC||fZ)) goto L_004c741d;
L_004c7406:; BB(0x004c7406);
    /* 004c7406: fcom dword ptr [0x908598] */ fx_compare(ST(0), R_F32((u32)(0x908598u))); 
    /* 004c740c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c740e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c740f: jae 0x4c741d */ if (!fC) goto L_004c741d;
L_004c7411:; BB(0x004c7411);
    /* 004c7411: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c7413: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c7419: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c741a: ret 4 */ FN_RET(0x004c7378); r_esp += 8; return;
L_004c741d:; BB(0x004c741d);
    /* 004c741d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 004c741f: push 0x200 */ { u32 v = 0x200u; r_esp -= 4; W32(r_esp, v); }
    /* 004c7424: push dword ptr [edi + 0x86c] */ { u32 v = R32((u32)(r_edi+0x86cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c742a: push dword ptr [edi + 0x60] */ { u32 v = R32((u32)(r_edi+0x60u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c742d: call 0x7a8c74 */ r_esp -= 4; W32(r_esp, 0x4c7432u); f_007a8c74();
    /* 004c7432: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c7435: mov dword ptr [edi + 0x60], eax */ W32((u32)(r_edi+0x60u), r_eax);
    /* 004c7438: mov ecx, eax */ r_ecx = r_eax;
    /* 004c743a: call 0x82dcbc */ r_esp -= 4; W32(r_esp, 0x4c743fu); f_0082dcbc();
    /* 004c743f: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 004c7443: mov ecx, dword ptr [edi + 0x60] */ r_ecx = R32((u32)(r_edi+0x60u));
    /* 004c7446: call 0x82ddd8 */ r_esp -= 4; W32(r_esp, 0x4c744bu); f_0082ddd8();
    /* 004c744b: fstp dword ptr [esp + 0x2c] */ W_F32((u32)(r_esp+0x2cu), ST(0)); FPOP();
    /* 004c744f: mov eax, dword ptr [edi + 0x75c] */ r_eax = R32((u32)(r_edi+0x75cu));
    /* 004c7455: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c7457: je 0x4c7480 */ if (fZ) goto L_004c7480;
L_004c7459:; BB(0x004c7459);
    /* 004c7459: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c745c: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 004c7460: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 004c7464: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 004c7466: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004c7469: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004c746d: mov dword ptr [esp + 8], 0x3f4ccccd */ W32((u32)(r_esp+0x8u), 0x3f4ccccdu);
    /* 004c7475: mov ecx, edi */ r_ecx = r_edi;
    /* 004c7477: call 0x4c32d8 */ r_esp -= 4; W32(r_esp, 0x4c747cu); f_004c32d8();
    /* 004c747c: fstp dword ptr [esp + 0x30] */ W_F32((u32)(r_esp+0x30u), ST(0)); FPOP();
L_004c7480:; BB(0x004c7480);
    /* 004c7480: add esp, -0xc */ {  u32 a = r_esp; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c7483: fld dword ptr [esp + 0x34] */ FPUSH(R_F32((u32)(r_esp+0x34u)));
    /* 004c7487: fld dword ptr [esp + 0x38] */ FPUSH(R_F32((u32)(r_esp+0x38u)));
    /* 004c748b: fld dword ptr [esp + 0x3c] */ FPUSH(R_F32((u32)(r_esp+0x3cu)));
    /* 004c748f: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 004c7491: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 004c7494: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 004c7498: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 004c749c: mov ecx, edi */ r_ecx = r_edi;
    /* 004c749e: call 0x52069c */ r_esp -= 4; W32(r_esp, 0x4c74a3u); f_0052069c();
    /* 004c74a3: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c74a9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c74aa: ret 4 */ FN_RET(0x004c7378); r_esp += 8; return;
L_004c7637:; BB(0x004c7637);
    /* 004c7637: mov ecx, edi */ r_ecx = r_edi;
    /* 004c7639: call 0x4c0dc4 */ r_esp -= 4; W32(r_esp, 0x4c763eu); f_004c0dc4();
    /* 004c763e: jmp 0x4c738f */ goto L_004c738f;
}

void f_004c74a3(void)
{
    FN_ENTER(0x004c74a3);
    /* 004c74a3: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c74a9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c74aa: ret 4 */ FN_RET(0x004c74a3); r_esp += 8; return;
}

void f_004c7644(void) /* sub_4C7644 */
{
    FN_ENTER(0x004c7644);
    /* 004c7644: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c7647: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 004c764b: fld dword ptr [ecx + 0x698] */ FPUSH(R_F32((u32)(r_ecx+0x698u)));
    /* 004c7651: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 004c7654: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 004c7658: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c765d: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 004c7661: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c7665: fistp dword ptr [edx] */ W32((u32)(r_edx), (u32)fx_int32(ST(0))); FPOP();
    /* 004c7667: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 004c766a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c766d: ret 4 */ FN_RET(0x004c7644); r_esp += 8; return;
}

void f_004c7670(void) /* sub_4C7670 */
{
    FN_ENTER(0x004c7670);
    /* 004c7670: fild dword ptr [esp + 4] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x4u)));
    /* 004c7674: fstp dword ptr [ecx + 0x690] */ W_F32((u32)(r_ecx+0x690u), ST(0)); FPOP();
    /* 004c767a: mov dword ptr [ecx + 0x694], 0 */ W32((u32)(r_ecx+0x694u), 0x0u);
    /* 004c7684: ret 4 */ FN_RET(0x004c7670); r_esp += 8; return;
}

void f_004c7688(void) /* sub_4C7688 */
{
    FN_ENTER(0x004c7688);
    /* 004c7688: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c7689: sub esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c768f: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004c7691: mov eax, dword ptr [esp + 0xf0] */ r_eax = R32((u32)(r_esp+0xf0u));
    /* 004c7698: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004c769b: ja 0x4c7d81 */ if ((!fC&&!fZ)) goto L_004c7d81;
L_004c76a1:; BB(0x004c76a1);
    /* 004c76a1: mov eax, dword ptr [eax*4 + 0x907c3c] */ r_eax = R32((u32)(r_eax*4+0x907c3cu));
    /* 004c76a8: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004c7d81:; BB(0x004c7d81);
    /* 004c7d81: add esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c7d87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7d88: ret 4 */ FN_RET(0x004c7688); r_esp += 8; return;
}

void f_004c76aa(void)
{
    FN_ENTER(0x004c76aa);
    /* 004c76aa: mov eax, dword ptr [ebp + 0x764] */ r_eax = R32((u32)(r_ebp+0x764u));
    /* 004c76b0: cmp eax, 0x1c2 */ {  u32 a = r_eax; u32 b = 0x1c2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c76b5: jg 0x4c790e */ if ((!fZ&&fS==fO)) goto L_004c790e;
L_004c76bb:; BB(0x004c76bb);
    /* 004c76bb: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c76c1: mov eax, dword ptr [ebp + 0x6e0] */ r_eax = R32((u32)(r_ebp+0x6e0u));
    /* 004c76c7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c76c9: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c76cc: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x4c76d1u); f_004c6c54();
    /* 004c76d1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c76d3: jne 0x4c790e */ if (!fZ) goto L_004c790e;
L_004c76d9:; BB(0x004c76d9);
    /* 004c76d9: mov edx, dword ptr [ebp + 0x6e0] */ r_edx = R32((u32)(r_ebp+0x6e0u));
    /* 004c76df: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 004c76e2: fcomp dword ptr [0x9088fc] */ fx_compare(ST(0), R_F32((u32)(0x9088fcu))); FPOP();
    /* 004c76e8: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c76ea: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c76eb: jbe 0x4c7797 */ if ((fC||fZ)) goto L_004c7797;
L_004c76f1:; BB(0x004c76f1);
    /* 004c76f1: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c76f3: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 004c76f5: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c76f8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c76fa: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c7700u); call_ind(t); }
    /* 004c7700: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c7704: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c770a: mov byte ptr [esp + 0x58], 0xa8 */ W8((u32)(r_esp+0x58u), 0xa8u);
    /* 004c770f: mov edx, 0x1b */ r_edx = 0x1bu;
    /* 004c7714: mov byte ptr [esp + 0x59], 6 */ W8((u32)(r_esp+0x59u), 0x6u);
    /* 004c7719: mov word ptr [esp + 0x5a], ax */ W16((u32)(r_esp+0x5au), (u16)r_eax);
    /* 004c771e: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c7724: mov word ptr [esp + 0x5c], dx */ W16((u32)(r_esp+0x5cu), (u16)r_edx);
    /* 004c7729: mov word ptr [esp + 0x5e], ax */ W16((u32)(r_esp+0x5eu), (u16)r_eax);
    /* 004c772e: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c7735: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 004c7739: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c773f: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 004c7743: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 004c7747: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c774cu); f_008587a5();
    /* 004c774c: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004c774f: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004c7752: fdiv dword ptr [0x90858c] */ ST(0) = ST(0) / R_F32((u32)(0x90858cu));
    /* 004c7758: fmul dword ptr [0x908590] */ ST(0) = ST(0) * R_F32((u32)(0x908590u));
    /* 004c775e: lea ecx, [esp + 0x58] */ r_ecx = (u32)(r_esp+0x58u);
    /* 004c7762: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c7766: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c776b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c7770: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c7774: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c7778: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c777c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c7780: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c7784: mov byte ptr [esp + 0x6c], al */ W8((u32)(r_esp+0x6cu), (u8)r_eax);
    /* 004c7788: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c778du); f_008003e0();
    /* 004c778d: add esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c7793: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7794: ret 4 */ FN_RET(0x004c76aa); r_esp += 8; return;
L_004c7797:; BB(0x004c7797);
    /* 004c7797: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c779d: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c77a0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c77a2: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x4c77a7u); f_004c6c54();
    /* 004c77a7: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c77a9: je 0x4c7857 */ if (fZ) goto L_004c7857;
L_004c77af:; BB(0x004c77af);
    /* 004c77af: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c77b1: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004c77b3: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c77b6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c77b8: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c77beu); call_ind(t); }
    /* 004c77be: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c77c2: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c77c8: mov byte ptr [esp + 0x40], 0xa8 */ W8((u32)(r_esp+0x40u), 0xa8u);
    /* 004c77cd: mov edx, 7 */ r_edx = 0x7u;
    /* 004c77d2: mov byte ptr [esp + 0x41], 6 */ W8((u32)(r_esp+0x41u), 0x6u);
    /* 004c77d7: mov word ptr [esp + 0x42], ax */ W16((u32)(r_esp+0x42u), (u16)r_eax);
    /* 004c77dc: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c77e2: mov word ptr [esp + 0x44], dx */ W16((u32)(r_esp+0x44u), (u16)r_edx);
    /* 004c77e7: mov word ptr [esp + 0x46], ax */ W16((u32)(r_esp+0x46u), (u16)r_eax);
    /* 004c77ec: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c77f3: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004c77f7: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c77fd: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 004c7801: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 004c7805: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c780au); f_008587a5();
    /* 004c780a: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c780e: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c7812: fdiv dword ptr [0x90858c] */ ST(0) = ST(0) / R_F32((u32)(0x90858cu));
    /* 004c7818: fmul dword ptr [0x908590] */ ST(0) = ST(0) * R_F32((u32)(0x908590u));
    /* 004c781e: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 004c7822: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c7826: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c782b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c7830: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c7834: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c7838: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c783c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c7840: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c7844: mov byte ptr [esp + 0x54], al */ W8((u32)(r_esp+0x54u), (u8)r_eax);
    /* 004c7848: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c784du); f_008003e0();
    /* 004c784d: add esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c7853: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7854: ret 4 */ FN_RET(0x004c76aa); r_esp += 8; return;
L_004c7857:; BB(0x004c7857);
    /* 004c7857: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c7859: call 0x4c7d8c */ r_esp -= 4; W32(r_esp, 0x4c785eu); f_004c7d8c();
    /* 004c785e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c7860: je 0x4c7d81 */ if (fZ) goto L_004c7d81;
L_004c7866:; BB(0x004c7866);
    /* 004c7866: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c7868: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004c786a: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c786d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c786f: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c7875u); call_ind(t); }
    /* 004c7875: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c7879: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c787f: mov byte ptr [esp + 0x28], 0xa8 */ W8((u32)(r_esp+0x28u), 0xa8u);
    /* 004c7884: mov edx, 0xf */ r_edx = 0xfu;
    /* 004c7889: mov byte ptr [esp + 0x29], 6 */ W8((u32)(r_esp+0x29u), 0x6u);
    /* 004c788e: mov word ptr [esp + 0x2a], ax */ W16((u32)(r_esp+0x2au), (u16)r_eax);
    /* 004c7893: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c7899: mov word ptr [esp + 0x2c], dx */ W16((u32)(r_esp+0x2cu), (u16)r_edx);
    /* 004c789e: mov word ptr [esp + 0x2e], ax */ W16((u32)(r_esp+0x2eu), (u16)r_eax);
    /* 004c78a3: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c78aa: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004c78ae: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c78b4: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 004c78b8: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 004c78bc: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c78c1u); f_008587a5();
    /* 004c78c1: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c78c5: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c78c9: fdiv dword ptr [0x90858c] */ ST(0) = ST(0) / R_F32((u32)(0x90858cu));
    /* 004c78cf: fmul dword ptr [0x908590] */ ST(0) = ST(0) * R_F32((u32)(0x908590u));
    /* 004c78d5: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 004c78d9: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c78dd: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c78e2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c78e7: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c78eb: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c78ef: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c78f3: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c78f7: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c78fb: mov byte ptr [esp + 0x3c], al */ W8((u32)(r_esp+0x3cu), (u8)r_eax);
    /* 004c78ff: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c7904u); f_008003e0();
    /* 004c7904: add esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c790a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c790b: ret 4 */ FN_RET(0x004c76aa); r_esp += 8; return;
L_004c790e:; BB(0x004c790e);
    /* 004c790e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c7910: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c7912: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c7915: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c7917: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c791du); call_ind(t); }
    /* 004c791d: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c7921: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c7927: mov byte ptr [esp + 0x70], 0xa8 */ W8((u32)(r_esp+0x70u), 0xa8u);
    /* 004c792c: mov edx, 8 */ r_edx = 0x8u;
    /* 004c7931: mov byte ptr [esp + 0x71], 6 */ W8((u32)(r_esp+0x71u), 0x6u);
    /* 004c7936: mov word ptr [esp + 0x72], ax */ W16((u32)(r_esp+0x72u), (u16)r_eax);
    /* 004c793b: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c7941: mov word ptr [esp + 0x74], dx */ W16((u32)(r_esp+0x74u), (u16)r_edx);
    /* 004c7946: mov word ptr [esp + 0x76], ax */ W16((u32)(r_esp+0x76u), (u16)r_eax);
    /* 004c794b: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c7952: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 004c7956: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c795c: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 004c7960: mov dword ptr [esp + 0x80], ecx */ W32((u32)(r_esp+0x80u), r_ecx);
    /* 004c7967: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c796cu); f_008587a5();
    /* 004c796c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c7970: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c7974: fdiv dword ptr [0x90858c] */ ST(0) = ST(0) / R_F32((u32)(0x90858cu));
    /* 004c797a: fmul dword ptr [0x908590] */ ST(0) = ST(0) * R_F32((u32)(0x908590u));
    /* 004c7980: lea ecx, [esp + 0x70] */ r_ecx = (u32)(r_esp+0x70u);
    /* 004c7984: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c7988: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c798d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c7992: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c7996: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c799a: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c799e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c79a2: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c79a6: mov byte ptr [esp + 0x84], al */ W8((u32)(r_esp+0x84u), (u8)r_eax);
    /* 004c79ad: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c79b2u); f_008003e0();
    /* 004c79b2: add esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c79b8: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c79b9: ret 4 */ FN_RET(0x004c76aa); r_esp += 8; return;
L_004c7d81:; BB(0x004c7d81);
    /* 004c7d81: add esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c7d87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7d88: ret 4 */ FN_RET(0x004c76aa); r_esp += 8; return;
}

void f_004c7773(void)
{
    FN_ENTER(0x004c7773);
    /* 004c7773: adc cl, bl */ { u32 c = fC; u32 a = (u8)r_ecx; u32 b = (u8)r_ebx; u32 r = (a + b + c) & 0xffu; r_ecx = (r_ecx & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004c7775: insb byte ptr es:[edi], dx */ UNSUP(0x004c7775, "insb byte ptr es:[edi], dx");
    /* 004c7776: and al, 0x10 */ {  u32 a = (u8)r_eax; u32 b = 0x10u; u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 004c7778: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c777c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c7780: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c7784: mov byte ptr [esp + 0x6c], al */ W8((u32)(r_esp+0x6cu), (u8)r_eax);
    /* 004c7788: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c778du); f_008003e0();
    /* 004c778d: add esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c7793: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7794: ret 4 */ FN_RET(0x004c7773); r_esp += 8; return;
}

void f_004c79bc(void)
{
    FN_ENTER(0x004c79bc);
    /* 004c79bc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c79be: call 0x4c32b0 */ r_esp -= 4; W32(r_esp, 0x4c79c3u); f_004c32b0();
    /* 004c79c3: jmp 0x4c7d81 */ goto L_004c7d81;
L_004c7d81:; BB(0x004c7d81);
    /* 004c7d81: add esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c7d87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7d88: ret 4 */ FN_RET(0x004c79bc); r_esp += 8; return;
}

void f_004c79c8(void)
{
    FN_ENTER(0x004c79c8);
    /* 004c79c8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c79ca: call 0x4c32c4 */ r_esp -= 4; W32(r_esp, 0x4c79cfu); f_004c32c4();
    /* 004c79cf: jmp 0x4c7d81 */ goto L_004c7d81;
L_004c7d81:; BB(0x004c7d81);
    /* 004c7d81: add esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c7d87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7d88: ret 4 */ FN_RET(0x004c79c8); r_esp += 8; return;
}

void f_004c79d4(void)
{
    FN_ENTER(0x004c79d4);
    /* 004c79d4: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004c79d7: mov eax, 0x10 */ r_eax = 0x10u;
    /* 004c79dc: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004c79e3: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c79e5: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4c79ebu); call_ind(t); }
    /* 004c79eb: mov dword ptr [ebp + 0x3ec], 1 */ W32((u32)(r_ebp+0x3ecu), 0x1u);
    /* 004c79f5: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c79f7: call 0x4c1f00 */ r_esp -= 4; W32(r_esp, 0x4c79fcu); f_004c1f00();
    /* 004c79fc: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 004c7a02: and eax, 0xffffffc9 */ {  u32 a = r_eax; u32 b = 0xffffffc9u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c7a05: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 004c7a0b: add esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c7a11: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7a12: ret 4 */ FN_RET(0x004c79d4); r_esp += 8; return;
}

void f_004c7a15(void)
{
    FN_ENTER(0x004c7a15);
    /* 004c7a15: mov edx, dword ptr [ebp + 0x6e0] */ r_edx = R32((u32)(r_ebp+0x6e0u));
    /* 004c7a1b: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 004c7a1e: fcomp dword ptr [0x9088fc] */ fx_compare(ST(0), R_F32((u32)(0x9088fcu))); FPOP();
    /* 004c7a24: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c7a26: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c7a27: ja 0x4c7ca6 */ if ((!fC&&!fZ)) goto L_004c7ca6;
L_004c7a2d:; BB(0x004c7a2d);
    /* 004c7a2d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004c7a30: test dword ptr [0xa0f674], eax */ {  u32 a = R32((u32)(0xa0f674u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c7a36: jne 0x4c7be0 */ if (!fZ) goto L_004c7be0;
L_004c7a3c:; BB(0x004c7a3c);
    /* 004c7a3c: test dword ptr [0xa0f678], eax */ {  u32 a = R32((u32)(0xa0f678u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c7a42: jne 0x4c7b1a */ if (!fZ) goto L_004c7b1a;
L_004c7a48:; BB(0x004c7a48);
    /* 004c7a48: test dword ptr [0xa0f67c], eax */ {  u32 a = R32((u32)(0xa0f67cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c7a4e: je 0x4c7d81 */ if (fZ) goto L_004c7d81;
L_004c7a54:; BB(0x004c7a54);
    /* 004c7a54: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c7a56: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c7a58: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c7a5b: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c7a5d: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c7a63u); call_ind(t); }
    /* 004c7a63: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c7a67: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c7a6d: mov byte ptr [esp + 0x88], 0xa8 */ W8((u32)(r_esp+0x88u), 0xa8u);
    /* 004c7a75: mov edx, 8 */ r_edx = 0x8u;
    /* 004c7a7a: mov byte ptr [esp + 0x89], 6 */ W8((u32)(r_esp+0x89u), 0x6u);
    /* 004c7a82: mov word ptr [esp + 0x8a], ax */ W16((u32)(r_esp+0x8au), (u16)r_eax);
    /* 004c7a8a: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c7a90: mov word ptr [esp + 0x8c], dx */ W16((u32)(r_esp+0x8cu), (u16)r_edx);
    /* 004c7a98: mov word ptr [esp + 0x8e], ax */ W16((u32)(r_esp+0x8eu), (u16)r_eax);
    /* 004c7aa0: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c7aa7: mov dword ptr [esp + 0x90], eax */ W32((u32)(r_esp+0x90u), r_eax);
    /* 004c7aae: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c7ab4: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 004c7abb: mov dword ptr [esp + 0x98], ecx */ W32((u32)(r_esp+0x98u), r_ecx);
    /* 004c7ac2: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c7ac7u); f_008587a5();
    /* 004c7ac7: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c7acb: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c7acf: fdiv dword ptr [0x90858c] */ ST(0) = ST(0) / R_F32((u32)(0x90858cu));
    /* 004c7ad5: fmul dword ptr [0x908590] */ ST(0) = ST(0) * R_F32((u32)(0x908590u));
    /* 004c7adb: lea ecx, [esp + 0x88] */ r_ecx = (u32)(r_esp+0x88u);
    /* 004c7ae2: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c7ae6: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c7aeb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c7af0: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c7af4: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c7af8: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c7afc: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c7b00: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c7b04: mov byte ptr [esp + 0x9c], al */ W8((u32)(r_esp+0x9cu), (u8)r_eax);
    /* 004c7b0b: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c7b10u); f_008003e0();
    /* 004c7b10: add esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c7b16: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7b17: ret 4 */ FN_RET(0x004c7a15); r_esp += 8; return;
L_004c7b1a:; BB(0x004c7b1a);
    /* 004c7b1a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c7b1c: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004c7b1e: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c7b21: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c7b23: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c7b29u); call_ind(t); }
    /* 004c7b29: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c7b2d: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c7b33: mov byte ptr [esp + 0xa0], 0xa8 */ W8((u32)(r_esp+0xa0u), 0xa8u);
    /* 004c7b3b: mov edx, 0xf */ r_edx = 0xfu;
    /* 004c7b40: mov byte ptr [esp + 0xa1], 6 */ W8((u32)(r_esp+0xa1u), 0x6u);
    /* 004c7b48: mov word ptr [esp + 0xa2], ax */ W16((u32)(r_esp+0xa2u), (u16)r_eax);
    /* 004c7b50: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c7b56: mov word ptr [esp + 0xa4], dx */ W16((u32)(r_esp+0xa4u), (u16)r_edx);
    /* 004c7b5e: mov word ptr [esp + 0xa6], ax */ W16((u32)(r_esp+0xa6u), (u16)r_eax);
    /* 004c7b66: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c7b6d: mov dword ptr [esp + 0xa8], eax */ W32((u32)(r_esp+0xa8u), r_eax);
    /* 004c7b74: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c7b7a: mov dword ptr [esp + 0xac], eax */ W32((u32)(r_esp+0xacu), r_eax);
    /* 004c7b81: mov dword ptr [esp + 0xb0], ecx */ W32((u32)(r_esp+0xb0u), r_ecx);
    /* 004c7b88: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c7b8du); f_008587a5();
    /* 004c7b8d: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c7b91: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c7b95: fdiv dword ptr [0x90858c] */ ST(0) = ST(0) / R_F32((u32)(0x90858cu));
    /* 004c7b9b: fmul dword ptr [0x908590] */ ST(0) = ST(0) * R_F32((u32)(0x908590u));
    /* 004c7ba1: lea ecx, [esp + 0xa0] */ r_ecx = (u32)(r_esp+0xa0u);
    /* 004c7ba8: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c7bac: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c7bb1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c7bb6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c7bba: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c7bbe: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c7bc2: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c7bc6: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c7bca: mov byte ptr [esp + 0xb4], al */ W8((u32)(r_esp+0xb4u), (u8)r_eax);
    /* 004c7bd1: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c7bd6u); f_008003e0();
    /* 004c7bd6: add esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c7bdc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7bdd: ret 4 */ FN_RET(0x004c7a15); r_esp += 8; return;
L_004c7be0:; BB(0x004c7be0);
    /* 004c7be0: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c7be2: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004c7be4: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c7be7: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c7be9: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c7befu); call_ind(t); }
    /* 004c7bef: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c7bf3: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c7bf9: mov byte ptr [esp + 0xb8], 0xa8 */ W8((u32)(r_esp+0xb8u), 0xa8u);
    /* 004c7c01: mov edx, 7 */ r_edx = 0x7u;
    /* 004c7c06: mov byte ptr [esp + 0xb9], 6 */ W8((u32)(r_esp+0xb9u), 0x6u);
    /* 004c7c0e: mov word ptr [esp + 0xba], ax */ W16((u32)(r_esp+0xbau), (u16)r_eax);
    /* 004c7c16: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c7c1c: mov word ptr [esp + 0xbc], dx */ W16((u32)(r_esp+0xbcu), (u16)r_edx);
    /* 004c7c24: mov word ptr [esp + 0xbe], ax */ W16((u32)(r_esp+0xbeu), (u16)r_eax);
    /* 004c7c2c: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c7c33: mov dword ptr [esp + 0xc0], eax */ W32((u32)(r_esp+0xc0u), r_eax);
    /* 004c7c3a: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c7c40: mov dword ptr [esp + 0xc4], eax */ W32((u32)(r_esp+0xc4u), r_eax);
    /* 004c7c47: mov dword ptr [esp + 0xc8], ecx */ W32((u32)(r_esp+0xc8u), r_ecx);
    /* 004c7c4e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c7c53u); f_008587a5();
    /* 004c7c53: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c7c57: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c7c5b: fdiv dword ptr [0x90858c] */ ST(0) = ST(0) / R_F32((u32)(0x90858cu));
    /* 004c7c61: fmul dword ptr [0x908590] */ ST(0) = ST(0) * R_F32((u32)(0x908590u));
    /* 004c7c67: lea ecx, [esp + 0xb8] */ r_ecx = (u32)(r_esp+0xb8u);
    /* 004c7c6e: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c7c72: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c7c77: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c7c7c: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c7c80: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c7c84: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c7c88: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c7c8c: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c7c90: mov byte ptr [esp + 0xcc], al */ W8((u32)(r_esp+0xccu), (u8)r_eax);
    /* 004c7c97: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c7c9cu); f_008003e0();
    /* 004c7c9c: add esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c7ca2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7ca3: ret 4 */ FN_RET(0x004c7a15); r_esp += 8; return;
L_004c7ca6:; BB(0x004c7ca6);
    /* 004c7ca6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c7ca8: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 004c7caa: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c7cad: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c7caf: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c7cb5u); call_ind(t); }
    /* 004c7cb5: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c7cb9: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c7cbf: mov byte ptr [esp + 0xd0], 0xa8 */ W8((u32)(r_esp+0xd0u), 0xa8u);
    /* 004c7cc7: mov edx, 0x1b */ r_edx = 0x1bu;
    /* 004c7ccc: mov byte ptr [esp + 0xd1], 6 */ W8((u32)(r_esp+0xd1u), 0x6u);
    /* 004c7cd4: mov word ptr [esp + 0xd2], ax */ W16((u32)(r_esp+0xd2u), (u16)r_eax);
    /* 004c7cdc: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c7ce2: mov word ptr [esp + 0xd4], dx */ W16((u32)(r_esp+0xd4u), (u16)r_edx);
    /* 004c7cea: mov word ptr [esp + 0xd6], ax */ W16((u32)(r_esp+0xd6u), (u16)r_eax);
    /* 004c7cf2: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c7cf9: mov dword ptr [esp + 0xd8], eax */ W32((u32)(r_esp+0xd8u), r_eax);
    /* 004c7d00: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c7d06: mov dword ptr [esp + 0xdc], eax */ W32((u32)(r_esp+0xdcu), r_eax);
    /* 004c7d0d: mov dword ptr [esp + 0xe0], ecx */ W32((u32)(r_esp+0xe0u), r_ecx);
    /* 004c7d14: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c7d19u); f_008587a5();
    /* 004c7d19: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c7d1d: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c7d21: fdiv dword ptr [0x90858c] */ ST(0) = ST(0) / R_F32((u32)(0x90858cu));
    /* 004c7d27: fmul dword ptr [0x908590] */ ST(0) = ST(0) * R_F32((u32)(0x908590u));
    /* 004c7d2d: lea ecx, [esp + 0xd0] */ r_ecx = (u32)(r_esp+0xd0u);
    /* 004c7d34: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c7d38: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c7d3d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c7d42: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c7d46: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c7d4a: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c7d4e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c7d52: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c7d56: mov byte ptr [esp + 0xe4], al */ W8((u32)(r_esp+0xe4u), (u8)r_eax);
    /* 004c7d5d: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c7d62u); f_008003e0();
    /* 004c7d62: add esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c7d68: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7d69: ret 4 */ FN_RET(0x004c7a15); r_esp += 8; return;
L_004c7d81:; BB(0x004c7d81);
    /* 004c7d81: add esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c7d87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7d88: ret 4 */ FN_RET(0x004c7a15); r_esp += 8; return;
}

void f_004c7d6c(void)
{
    FN_ENTER(0x004c7d6c);
    /* 004c7d6c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c7d6e: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c7d73u); f_007aa094();
    /* 004c7d73: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c7d75: call 0x4c53d8 */ r_esp -= 4; W32(r_esp, 0x4c7d7au); f_004c53d8();
    /* 004c7d7a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c7d7c: call 0x4c1f18 */ r_esp -= 4; W32(r_esp, 0x4c7d81u); f_004c1f18();
    /* 004c7d81: add esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c7d87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7d88: ret 4 */ FN_RET(0x004c7d6c); r_esp += 8; return;
}

void f_004c7d81(void)
{
    FN_ENTER(0x004c7d81);
    /* 004c7d81: add esp, 0xe8 */ {  u32 a = r_esp; u32 b = 0xe8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c7d87: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7d88: ret 4 */ FN_RET(0x004c7d81); r_esp += 8; return;
}

void f_004c7d8c(void) /* sub_4C7D8C */
{
    FN_ENTER(0x004c7d8c);
    /* 004c7d8c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c7d8d: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004c7d8f: mov eax, dword ptr [ebp + 0x6e0] */ r_eax = R32((u32)(r_ebp+0x6e0u));
    /* 004c7d95: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c7d97: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c7d9d: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c7da0: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x4c7da5u); f_004c6c54();
    /* 004c7da5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c7da7: jne 0x4c7dad */ if (!fZ) goto L_004c7dad;
L_004c7da9:; BB(0x004c7da9);
    /* 004c7da9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c7dab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7dac: ret  */ FN_RET(0x004c7d8c); r_esp += 4; return;
L_004c7dad:; BB(0x004c7dad);
    /* 004c7dad: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c7db3: cmp eax, 0x32 */ {  u32 a = r_eax; u32 b = 0x32u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004c7db6: jl 0x4c7dbf */ if ((fS!=fO)) goto L_004c7dbf;
L_004c7db8:; BB(0x004c7db8);
    /* 004c7db8: mov eax, 1 */ r_eax = 0x1u;
    /* 004c7dbd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7dbe: ret  */ FN_RET(0x004c7d8c); r_esp += 4; return;
L_004c7dbf:; BB(0x004c7dbf);
    /* 004c7dbf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c7dc1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7dc2: ret  */ FN_RET(0x004c7d8c); r_esp += 4; return;
}

void f_004c7dc4(void) /* sub_4C7DC4 */
{
    FN_ENTER(0x004c7dc4);
    /* 004c7dc4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c7dc5: sub esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c7dcb: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004c7dcd: lea edx, [ebp + 0x86c] */ r_edx = (u32)(r_ebp+0x86cu);
    /* 004c7dd3: mov eax, dword ptr [esp + 0xf8] */ r_eax = R32((u32)(r_esp+0xf8u));
    /* 004c7dda: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004c7ddd: ja 0x4c8467 */ if ((!fC&&!fZ)) goto L_004c8467;
L_004c7de3:; BB(0x004c7de3);
    /* 004c7de3: mov eax, dword ptr [eax*4 + 0x907c6c] */ r_eax = R32((u32)(r_eax*4+0x907c6cu));
    /* 004c7dea: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004c8467:; BB(0x004c8467);
    /* 004c8467: add esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c846d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c846e: ret 4 */ FN_RET(0x004c7dc4); r_esp += 8; return;
}

void f_004c7dec(void)
{
    FN_ENTER(0x004c7dec);
    /* 004c7dec: mov eax, dword ptr [ebp + 0x764] */ r_eax = R32((u32)(r_ebp+0x764u));
    /* 004c7df2: cmp eax, 0x1c2 */ {  u32 a = r_eax; u32 b = 0x1c2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c7df7: jg 0x4c7fa5 */ if ((!fZ&&fS==fO)) goto L_004c7fa5;
L_004c7dfd:; BB(0x004c7dfd);
    /* 004c7dfd: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c7e03: mov eax, dword ptr [ebp + 0x6e0] */ r_eax = R32((u32)(r_ebp+0x6e0u));
    /* 004c7e09: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c7e0b: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c7e0e: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x4c7e13u); f_004c6c54();
    /* 004c7e13: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c7e15: jne 0x4c7fa5 */ if (!fZ) goto L_004c7fa5;
L_004c7e1b:; BB(0x004c7e1b);
    /* 004c7e1b: mov eax, dword ptr [ebp + 0x860] */ r_eax = R32((u32)(r_ebp+0x860u));
    /* 004c7e21: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c7e24: je 0x4c8471 */ if (fZ) goto L_004c8471;
L_004c7e2a:; BB(0x004c7e2a);
    /* 004c7e2a: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c7e30: mov eax, dword ptr [ebp + 0x6e0] */ r_eax = R32((u32)(r_ebp+0x6e0u));
    /* 004c7e36: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c7e38: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c7e3b: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x4c7e40u); f_004c6c54();
    /* 004c7e40: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c7e42: je 0x4c7eee */ if (fZ) goto L_004c7eee;
L_004c7e48:; BB(0x004c7e48);
    /* 004c7e48: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c7e4a: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 004c7e4c: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c7e4f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c7e51: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c7e57u); call_ind(t); }
    /* 004c7e57: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c7e5b: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c7e61: mov byte ptr [esp + 0x48], 0xa8 */ W8((u32)(r_esp+0x48u), 0xa8u);
    /* 004c7e66: mov edx, 7 */ r_edx = 0x7u;
    /* 004c7e6b: mov byte ptr [esp + 0x49], 6 */ W8((u32)(r_esp+0x49u), 0x6u);
    /* 004c7e70: mov word ptr [esp + 0x4a], ax */ W16((u32)(r_esp+0x4au), (u16)r_eax);
    /* 004c7e75: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c7e7b: mov word ptr [esp + 0x4c], dx */ W16((u32)(r_esp+0x4cu), (u16)r_edx);
    /* 004c7e80: mov word ptr [esp + 0x4e], ax */ W16((u32)(r_esp+0x4eu), (u16)r_eax);
    /* 004c7e85: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c7e8c: mov dword ptr [esp + 0x50], eax */ W32((u32)(r_esp+0x50u), r_eax);
    /* 004c7e90: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c7e96: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 004c7e9a: mov dword ptr [esp + 0x58], ecx */ W32((u32)(r_esp+0x58u), r_ecx);
    /* 004c7e9e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c7ea3u); f_008587a5();
    /* 004c7ea3: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004c7ea6: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004c7ea9: fdiv dword ptr [0x908584] */ ST(0) = ST(0) / R_F32((u32)(0x908584u));
    /* 004c7eaf: fmul dword ptr [0x908588] */ ST(0) = ST(0) * R_F32((u32)(0x908588u));
    /* 004c7eb5: lea ecx, [esp + 0x48] */ r_ecx = (u32)(r_esp+0x48u);
    /* 004c7eb9: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c7ebd: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c7ec2: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c7ec7: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c7ecb: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c7ecf: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c7ed3: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c7ed7: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c7edb: mov byte ptr [esp + 0x5c], al */ W8((u32)(r_esp+0x5cu), (u8)r_eax);
    /* 004c7edf: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c7ee4u); f_008003e0();
    /* 004c7ee4: add esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c7eea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7eeb: ret 4 */ FN_RET(0x004c7dec); r_esp += 8; return;
L_004c7eee:; BB(0x004c7eee);
    /* 004c7eee: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c7ef0: call 0x4c7d8c */ r_esp -= 4; W32(r_esp, 0x4c7ef5u); f_004c7d8c();
    /* 004c7ef5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c7ef7: je 0x4c8467 */ if (fZ) goto L_004c8467;
L_004c7efd:; BB(0x004c7efd);
    /* 004c7efd: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c7eff: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 004c7f01: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c7f04: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c7f06: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c7f0cu); call_ind(t); }
    /* 004c7f0c: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c7f10: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c7f16: mov byte ptr [esp + 0x30], 0xa8 */ W8((u32)(r_esp+0x30u), 0xa8u);
    /* 004c7f1b: mov edx, 0xf */ r_edx = 0xfu;
    /* 004c7f20: mov byte ptr [esp + 0x31], 6 */ W8((u32)(r_esp+0x31u), 0x6u);
    /* 004c7f25: mov word ptr [esp + 0x32], ax */ W16((u32)(r_esp+0x32u), (u16)r_eax);
    /* 004c7f2a: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c7f30: mov word ptr [esp + 0x34], dx */ W16((u32)(r_esp+0x34u), (u16)r_edx);
    /* 004c7f35: mov word ptr [esp + 0x36], ax */ W16((u32)(r_esp+0x36u), (u16)r_eax);
    /* 004c7f3a: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c7f41: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 004c7f45: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c7f4b: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 004c7f4f: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
    /* 004c7f53: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c7f58u); f_008587a5();
    /* 004c7f58: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c7f5c: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c7f60: fdiv dword ptr [0x908584] */ ST(0) = ST(0) / R_F32((u32)(0x908584u));
    /* 004c7f66: fmul dword ptr [0x908588] */ ST(0) = ST(0) * R_F32((u32)(0x908588u));
    /* 004c7f6c: lea ecx, [esp + 0x30] */ r_ecx = (u32)(r_esp+0x30u);
    /* 004c7f70: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c7f74: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c7f79: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c7f7e: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c7f82: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c7f86: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c7f8a: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c7f8e: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c7f92: mov byte ptr [esp + 0x44], al */ W8((u32)(r_esp+0x44u), (u8)r_eax);
    /* 004c7f96: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c7f9bu); f_008003e0();
    /* 004c7f9b: add esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c7fa1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c7fa2: ret 4 */ FN_RET(0x004c7dec); r_esp += 8; return;
L_004c7fa5:; BB(0x004c7fa5);
    /* 004c7fa5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c7fa7: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c7fa9: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c7fac: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c7fae: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c7fb4u); call_ind(t); }
    /* 004c7fb4: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c7fb8: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c7fbe: mov byte ptr [esp + 0x78], 0xa8 */ W8((u32)(r_esp+0x78u), 0xa8u);
    /* 004c7fc3: mov edx, 8 */ r_edx = 0x8u;
    /* 004c7fc8: mov byte ptr [esp + 0x79], 6 */ W8((u32)(r_esp+0x79u), 0x6u);
    /* 004c7fcd: mov word ptr [esp + 0x7a], ax */ W16((u32)(r_esp+0x7au), (u16)r_eax);
    /* 004c7fd2: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c7fd8: mov word ptr [esp + 0x7c], dx */ W16((u32)(r_esp+0x7cu), (u16)r_edx);
    /* 004c7fdd: mov word ptr [esp + 0x7e], ax */ W16((u32)(r_esp+0x7eu), (u16)r_eax);
    /* 004c7fe2: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c7fe9: mov dword ptr [esp + 0x80], eax */ W32((u32)(r_esp+0x80u), r_eax);
    /* 004c7ff0: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c7ff6: mov dword ptr [esp + 0x84], eax */ W32((u32)(r_esp+0x84u), r_eax);
    /* 004c7ffd: mov dword ptr [esp + 0x88], ecx */ W32((u32)(r_esp+0x88u), r_ecx);
    /* 004c8004: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c8009u); f_008587a5();
    /* 004c8009: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c800d: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c8011: fdiv dword ptr [0x908584] */ ST(0) = ST(0) / R_F32((u32)(0x908584u));
    /* 004c8017: fmul dword ptr [0x908588] */ ST(0) = ST(0) * R_F32((u32)(0x908588u));
    /* 004c801d: lea ecx, [esp + 0x78] */ r_ecx = (u32)(r_esp+0x78u);
    /* 004c8021: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c8025: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c802a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c802f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c8033: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c8037: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c803b: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c803f: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c8043: mov byte ptr [esp + 0x8c], al */ W8((u32)(r_esp+0x8cu), (u8)r_eax);
    /* 004c804a: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c804fu); f_008003e0();
    /* 004c804f: add esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c8055: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c8056: ret 4 */ FN_RET(0x004c7dec); r_esp += 8; return;
L_004c8467:; BB(0x004c8467);
    /* 004c8467: add esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c846d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c846e: ret 4 */ FN_RET(0x004c7dec); r_esp += 8; return;
L_004c8471:; BB(0x004c8471);
    /* 004c8471: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c8473: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 004c8475: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c8478: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c847a: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c8480u); call_ind(t); }
    /* 004c8480: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c8484: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c848a: mov byte ptr [esp + 0x60], 0xa8 */ W8((u32)(r_esp+0x60u), 0xa8u);
    /* 004c848f: mov edx, 0x1a */ r_edx = 0x1au;
    /* 004c8494: mov byte ptr [esp + 0x61], 6 */ W8((u32)(r_esp+0x61u), 0x6u);
    /* 004c8499: mov word ptr [esp + 0x62], ax */ W16((u32)(r_esp+0x62u), (u16)r_eax);
    /* 004c849e: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c84a4: mov word ptr [esp + 0x64], dx */ W16((u32)(r_esp+0x64u), (u16)r_edx);
    /* 004c84a9: mov word ptr [esp + 0x66], ax */ W16((u32)(r_esp+0x66u), (u16)r_eax);
    /* 004c84ae: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c84b5: mov dword ptr [esp + 0x68], eax */ W32((u32)(r_esp+0x68u), r_eax);
    /* 004c84b9: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c84bf: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 004c84c3: mov dword ptr [esp + 0x70], ecx */ W32((u32)(r_esp+0x70u), r_ecx);
    /* 004c84c7: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c84ccu); f_008587a5();
    /* 004c84cc: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c84d0: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c84d4: fdiv dword ptr [0x908584] */ ST(0) = ST(0) / R_F32((u32)(0x908584u));
    /* 004c84da: fmul dword ptr [0x908588] */ ST(0) = ST(0) * R_F32((u32)(0x908588u));
    /* 004c84e0: lea ecx, [esp + 0x60] */ r_ecx = (u32)(r_esp+0x60u);
    /* 004c84e4: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c84e8: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c84ed: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c84f2: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c84f6: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c84fa: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c84fe: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c8502: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c8506: mov byte ptr [esp + 0x74], al */ W8((u32)(r_esp+0x74u), (u8)r_eax);
    /* 004c850a: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c850fu); f_008003e0();
    /* 004c850f: add esp, 0xf0 */ {  u32 a = r_esp; u32 b = 0xf0u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c8515: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c8516: ret 4 */ FN_RET(0x004c7dec); r_esp += 8; return;
}

