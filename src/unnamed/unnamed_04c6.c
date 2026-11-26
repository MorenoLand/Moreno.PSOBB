#include "protos.h"

void f_004c6334(void)
{
    FN_ENTER(0x004c6334);
    /* 004c6334: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c6335: mov edi, ecx */ r_edi = r_ecx;
    /* 004c6337: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 004c633b: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c633e: je 0x4c63a5 */ if (fZ) goto L_004c63a5;
L_004c6340:; BB(0x004c6340);
    /* 004c6340: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004c6343: je 0x4c637b */ if (fZ) goto L_004c637b;
L_004c6345:; BB(0x004c6345);
    /* 004c6345: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6348: je 0x4c6365 */ if (fZ) goto L_004c6365;
L_004c634a:; BB(0x004c634a);
    /* 004c634a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c634c: jne 0x4c637b */ if (!fZ) goto L_004c637b;
L_004c634e:; BB(0x004c634e);
    /* 004c634e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6350: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4c6355u); f_0068d5a8();
    /* 004c6355: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c6356: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6358: je 0x4c637f */ if (fZ) goto L_004c637f;
L_004c635a:; BB(0x004c635a);
    /* 004c635a: add dword ptr [edi + 0x85c], 1 */ { u32 ad = (u32)(r_edi+0x85cu);  u32 a = R32(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; W32(ad, r); fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c6361: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c6362: ret 4 */ FN_RET(0x004c6334); r_esp += 8; return;
L_004c6365:; BB(0x004c6365);
    /* 004c6365: mov eax, dword ptr [edi + 0x85c] */ r_eax = R32((u32)(r_edi+0x85cu));
    /* 004c636b: cmp eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004c6370: jle 0x4c637b */ if ((fZ||fS!=fO)) goto L_004c637b;
L_004c6372:; BB(0x004c6372);
    /* 004c6372: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6374: mov ecx, edi */ r_ecx = r_edi;
    /* 004c6376: call 0x51f62c */ r_esp -= 4; W32(r_esp, 0x4c637bu); f_0051f62c();
L_004c637b:; BB(0x004c637b);
    /* 004c637b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c637c: ret 4 */ FN_RET(0x004c6334); r_esp += 8; return;
L_004c637f:; BB(0x004c637f);
    /* 004c637f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6381: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4c6386u); f_0068d5a8();
    /* 004c6386: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c6387: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6389: jne 0x4c635a */ if (!fZ) goto L_004c635a;
L_004c638b:; BB(0x004c638b);
    /* 004c638b: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c638d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4c6392u); f_0068d5a8();
    /* 004c6392: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c6393: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6395: jne 0x4c635a */ if (!fZ) goto L_004c635a;
L_004c6397:; BB(0x004c6397);
    /* 004c6397: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6399: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4c639eu); f_0068d5a8();
    /* 004c639e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c639f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c63a1: jne 0x4c635a */ if (!fZ) goto L_004c635a;
L_004c63a3:; BB(0x004c63a3);
    /* 004c63a3: jmp 0x4c637b */ goto L_004c637b;
L_004c63a5:; BB(0x004c63a5);
    /* 004c63a5: mov dword ptr [edi + 0x3c], 0 */ W32((u32)(r_edi+0x3cu), 0x0u);
    /* 004c63ac: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c63ae: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 004c63b5: mov dword ptr [edi + 0x85c], eax */ W32((u32)(r_edi+0x85cu), r_eax);
    /* 004c63bb: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c63bc: ret 4 */ FN_RET(0x004c6334); r_esp += 8; return;
}

void f_004c63c0(void)
{
    FN_ENTER(0x004c63c0);
    /* 004c63c0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 004c63c4: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004c63c7: je 0x4c6423 */ if (fZ) goto L_004c6423;
L_004c63c9:; BB(0x004c63c9);
    /* 004c63c9: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004c63cc: je 0x4c6420 */ if (fZ) goto L_004c6420;
L_004c63ce:; BB(0x004c63ce);
    /* 004c63ce: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 004c63d1: je 0x4c6420 */ if (fZ) goto L_004c6420;
L_004c63d3:; BB(0x004c63d3);
    /* 004c63d3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c63d5: jne 0x4c6420 */ if (!fZ) goto L_004c6420;
L_004c63d7:; BB(0x004c63d7);
    /* 004c63d7: mov eax, dword ptr [ecx + 0x85c] */ r_eax = R32((u32)(r_ecx+0x85cu));
    /* 004c63dd: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 004c63e0: cmp eax, 0x5a */ {  u32 a = r_eax; u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c63e3: jle 0x4c6415 */ if ((fZ||fS!=fO)) goto L_004c6415;
L_004c63e5:; BB(0x004c63e5);
    /* 004c63e5: movsx edx, word ptr [ecx + 0xb8] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ecx+0xb8u));
    /* 004c63ec: mov dword ptr [ecx + 0x85c], 0 */ W32((u32)(r_ecx+0x85cu), 0x0u);
    /* 004c63f6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 004c63f9: movsx eax, dx */ r_eax = (u32)(i32)(i16)(u16)r_edx;
    /* 004c63fc: cmp eax, 0x1c */ {  u32 a = r_eax; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c63ff: jl 0x4c640c */ if ((fS!=fO)) goto L_004c640c;
L_004c6401:; BB(0x004c6401);
    /* 004c6401: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c6403: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 004c640a: jmp 0x4c641b */ goto L_004c641b;
L_004c640c:; BB(0x004c640c);
    /* 004c640c: mov word ptr [ecx + 0xb8], dx */ W16((u32)(r_ecx+0xb8u), (u16)r_edx);
    /* 004c6413: jmp 0x4c641b */ goto L_004c641b;
L_004c6415:; BB(0x004c6415);
    /* 004c6415: mov dword ptr [ecx + 0x85c], eax */ W32((u32)(r_ecx+0x85cu), r_eax);
L_004c641b:; BB(0x004c641b);
    /* 004c641b: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c6420u); f_007aa094();
L_004c6420:; BB(0x004c6420);
    /* 004c6420: ret 4 */ FN_RET(0x004c63c0); r_esp += 8; return;
L_004c6423:; BB(0x004c6423);
    /* 004c6423: mov dword ptr [ecx + 0x85c], 0 */ W32((u32)(r_ecx+0x85cu), 0x0u);
    /* 004c642d: mov eax, 0xb */ r_eax = 0xbu;
    /* 004c6432: mov word ptr [ecx + 0xb8], ax */ W16((u32)(r_ecx+0xb8u), (u16)r_eax);
    /* 004c6439: ret 4 */ FN_RET(0x004c63c0); r_esp += 8; return;
}

void f_004c643c(void) /* sub_4C643C */
{
    FN_ENTER(0x004c643c);
    /* 004c643c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 004c643d: sub esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c6443: mov ebp, ecx */ r_ebp = r_ecx;
    /* 004c6445: mov eax, dword ptr [esp + 0x108] */ r_eax = R32((u32)(r_esp+0x108u));
    /* 004c644c: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004c644f: ja 0x4c6c14 */ if ((!fC&&!fZ)) goto L_004c6c14;
L_004c6455:; BB(0x004c6455);
    /* 004c6455: mov eax, dword ptr [eax*4 + 0x907bdc] */ r_eax = R32((u32)(r_eax*4+0x907bdcu));
    /* 004c645c: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004c6c14:; BB(0x004c6c14);
    /* 004c6c14: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c6c1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6c1b: ret 4 */ FN_RET(0x004c643c); r_esp += 8; return;
}

void f_004c645e(void)
{
    FN_ENTER(0x004c645e);
    /* 004c645e: mov edx, dword ptr [ebp + 0x6e0] */ r_edx = R32((u32)(r_ebp+0x6e0u));
    /* 004c6464: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 004c6467: fcomp dword ptr [0x9088fc] */ fx_compare(ST(0), R_F32((u32)(0x9088fcu))); FPOP();
    /* 004c646d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c646f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c6470: jbe 0x4c653a */ if ((fC||fZ)) goto L_004c653a;
L_004c6476:; BB(0x004c6476);
    /* 004c6476: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6478: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 004c647a: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c647d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c647f: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c6485u); call_ind(t); }
    /* 004c6485: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c6489: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c648f: mov byte ptr [esp + 0x88], 0xa8 */ W8((u32)(r_esp+0x88u), 0xa8u);
    /* 004c6497: mov edx, 0x19 */ r_edx = 0x19u;
    /* 004c649c: mov byte ptr [esp + 0x89], 6 */ W8((u32)(r_esp+0x89u), 0x6u);
    /* 004c64a4: mov word ptr [esp + 0x8a], ax */ W16((u32)(r_esp+0x8au), (u16)r_eax);
    /* 004c64ac: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c64b2: mov word ptr [esp + 0x8c], dx */ W16((u32)(r_esp+0x8cu), (u16)r_edx);
    /* 004c64ba: mov word ptr [esp + 0x8e], ax */ W16((u32)(r_esp+0x8eu), (u16)r_eax);
    /* 004c64c2: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c64c9: mov dword ptr [esp + 0x90], eax */ W32((u32)(r_esp+0x90u), r_eax);
    /* 004c64d0: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c64d6: mov dword ptr [esp + 0x94], eax */ W32((u32)(r_esp+0x94u), r_eax);
    /* 004c64dd: mov dword ptr [esp + 0x98], ecx */ W32((u32)(r_esp+0x98u), r_ecx);
    /* 004c64e4: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c64e9u); f_008587a5();
    /* 004c64e9: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004c64ec: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004c64ef: fdiv dword ptr [0x9085b8] */ ST(0) = ST(0) / R_F32((u32)(0x9085b8u));
    /* 004c64f5: fmul dword ptr [0x9085bc] */ ST(0) = ST(0) * R_F32((u32)(0x9085bcu));
    /* 004c64fb: lea ecx, [esp + 0x88] */ r_ecx = (u32)(r_esp+0x88u);
    /* 004c6502: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c6506: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c650b: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c6510: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c6514: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c6518: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c651c: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c6520: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c6524: mov byte ptr [esp + 0x9c], al */ W8((u32)(r_esp+0x9cu), (u8)r_eax);
    /* 004c652b: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c6530u); f_008003e0();
    /* 004c6530: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c6536: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6537: ret 4 */ FN_RET(0x004c645e); r_esp += 8; return;
L_004c653a:; BB(0x004c653a);
    /* 004c653a: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c6540: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c6543: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c6545: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x4c654au); f_004c6c54();
    /* 004c654a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c654c: je 0x4c6600 */ if (fZ) goto L_004c6600;
L_004c6552:; BB(0x004c6552);
    /* 004c6552: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6554: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6556: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c6559: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c655b: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c6561u); call_ind(t); }
    /* 004c6561: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c6565: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c656b: mov byte ptr [esp + 0x70], 0xa8 */ W8((u32)(r_esp+0x70u), 0xa8u);
    /* 004c6570: mov edx, 3 */ r_edx = 0x3u;
    /* 004c6575: mov byte ptr [esp + 0x71], 6 */ W8((u32)(r_esp+0x71u), 0x6u);
    /* 004c657a: mov word ptr [esp + 0x72], ax */ W16((u32)(r_esp+0x72u), (u16)r_eax);
    /* 004c657f: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c6585: mov word ptr [esp + 0x74], dx */ W16((u32)(r_esp+0x74u), (u16)r_edx);
    /* 004c658a: mov word ptr [esp + 0x76], ax */ W16((u32)(r_esp+0x76u), (u16)r_eax);
    /* 004c658f: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c6596: mov dword ptr [esp + 0x78], eax */ W32((u32)(r_esp+0x78u), r_eax);
    /* 004c659a: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c65a0: mov dword ptr [esp + 0x7c], eax */ W32((u32)(r_esp+0x7cu), r_eax);
    /* 004c65a4: mov dword ptr [esp + 0x80], ecx */ W32((u32)(r_esp+0x80u), r_ecx);
    /* 004c65ab: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c65b0u); f_008587a5();
    /* 004c65b0: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c65b4: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c65b8: fdiv dword ptr [0x9085b8] */ ST(0) = ST(0) / R_F32((u32)(0x9085b8u));
    /* 004c65be: fmul dword ptr [0x9085bc] */ ST(0) = ST(0) * R_F32((u32)(0x9085bcu));
    /* 004c65c4: lea ecx, [esp + 0x70] */ r_ecx = (u32)(r_esp+0x70u);
    /* 004c65c8: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c65cc: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c65d1: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c65d6: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c65da: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c65de: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c65e2: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c65e6: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c65ea: mov byte ptr [esp + 0x84], al */ W8((u32)(r_esp+0x84u), (u8)r_eax);
    /* 004c65f1: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c65f6u); f_008003e0();
    /* 004c65f6: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c65fc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c65fd: ret 4 */ FN_RET(0x004c645e); r_esp += 8; return;
L_004c6600:; BB(0x004c6600);
    /* 004c6600: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c6606: mov eax, dword ptr [ebp + 0x6e0] */ r_eax = R32((u32)(r_ebp+0x6e0u));
    /* 004c660c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c660e: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c6611: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x4c6616u); f_004c6c54();
    /* 004c6616: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6618: je 0x4c66c6 */ if (fZ) goto L_004c66c6;
L_004c661e:; BB(0x004c661e);
    /* 004c661e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6620: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6622: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c6625: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c6627: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c662du); call_ind(t); }
    /* 004c662d: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c6631: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c6637: mov byte ptr [esp + 0x58], 0xa8 */ W8((u32)(r_esp+0x58u), 0xa8u);
    /* 004c663c: mov edx, 4 */ r_edx = 0x4u;
    /* 004c6641: mov byte ptr [esp + 0x59], 6 */ W8((u32)(r_esp+0x59u), 0x6u);
    /* 004c6646: mov word ptr [esp + 0x5a], ax */ W16((u32)(r_esp+0x5au), (u16)r_eax);
    /* 004c664b: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c6651: mov word ptr [esp + 0x5c], dx */ W16((u32)(r_esp+0x5cu), (u16)r_edx);
    /* 004c6656: mov word ptr [esp + 0x5e], ax */ W16((u32)(r_esp+0x5eu), (u16)r_eax);
    /* 004c665b: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c6662: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 004c6666: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c666c: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 004c6670: mov dword ptr [esp + 0x68], ecx */ W32((u32)(r_esp+0x68u), r_ecx);
    /* 004c6674: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c6679u); f_008587a5();
    /* 004c6679: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c667d: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c6681: fdiv dword ptr [0x9085b8] */ ST(0) = ST(0) / R_F32((u32)(0x9085b8u));
    /* 004c6687: fmul dword ptr [0x9085bc] */ ST(0) = ST(0) * R_F32((u32)(0x9085bcu));
    /* 004c668d: lea ecx, [esp + 0x58] */ r_ecx = (u32)(r_esp+0x58u);
    /* 004c6691: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c6695: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c669a: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c669f: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c66a3: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c66a7: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c66ab: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c66af: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c66b3: mov byte ptr [esp + 0x6c], al */ W8((u32)(r_esp+0x6cu), (u8)r_eax);
    /* 004c66b7: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c66bcu); f_008003e0();
    /* 004c66bc: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c66c2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c66c3: ret 4 */ FN_RET(0x004c645e); r_esp += 8; return;
L_004c66c6:; BB(0x004c66c6);
    /* 004c66c6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c66c8: call 0x4c6c20 */ r_esp -= 4; W32(r_esp, 0x4c66cdu); f_004c6c20();
    /* 004c66cd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c66cf: je 0x4c677d */ if (fZ) goto L_004c677d;
L_004c66d5:; BB(0x004c66d5);
    /* 004c66d5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c66d7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004c66d9: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c66dc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c66de: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c66e4u); call_ind(t); }
    /* 004c66e4: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c66e8: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c66ee: mov byte ptr [esp + 0x40], 0xa8 */ W8((u32)(r_esp+0x40u), 0xa8u);
    /* 004c66f3: mov edx, 5 */ r_edx = 0x5u;
    /* 004c66f8: mov byte ptr [esp + 0x41], 6 */ W8((u32)(r_esp+0x41u), 0x6u);
    /* 004c66fd: mov word ptr [esp + 0x42], ax */ W16((u32)(r_esp+0x42u), (u16)r_eax);
    /* 004c6702: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c6708: mov word ptr [esp + 0x44], dx */ W16((u32)(r_esp+0x44u), (u16)r_edx);
    /* 004c670d: mov word ptr [esp + 0x46], ax */ W16((u32)(r_esp+0x46u), (u16)r_eax);
    /* 004c6712: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c6719: mov dword ptr [esp + 0x48], eax */ W32((u32)(r_esp+0x48u), r_eax);
    /* 004c671d: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c6723: mov dword ptr [esp + 0x4c], eax */ W32((u32)(r_esp+0x4cu), r_eax);
    /* 004c6727: mov dword ptr [esp + 0x50], ecx */ W32((u32)(r_esp+0x50u), r_ecx);
    /* 004c672b: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c6730u); f_008587a5();
    /* 004c6730: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c6734: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c6738: fdiv dword ptr [0x9085b8] */ ST(0) = ST(0) / R_F32((u32)(0x9085b8u));
    /* 004c673e: fmul dword ptr [0x9085bc] */ ST(0) = ST(0) * R_F32((u32)(0x9085bcu));
    /* 004c6744: lea ecx, [esp + 0x40] */ r_ecx = (u32)(r_esp+0x40u);
    /* 004c6748: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c674c: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c6751: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c6756: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c675a: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c675e: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c6762: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c6766: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c676a: mov byte ptr [esp + 0x54], al */ W8((u32)(r_esp+0x54u), (u8)r_eax);
    /* 004c676e: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c6773u); f_008003e0();
    /* 004c6773: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c6779: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c677a: ret 4 */ FN_RET(0x004c645e); r_esp += 8; return;
L_004c677d:; BB(0x004c677d);
    /* 004c677d: movzx eax, word ptr [0xa485f0] */ r_eax = (u32)R16((u32)(0xa485f0u));
    /* 004c6784: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6786: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c6787: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x4c678cu); f_007be19c();
    /* 004c678c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c678f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6791: je 0x4c679a */ if (fZ) goto L_004c679a;
L_004c6793:; BB(0x004c6793);
    /* 004c6793: mov eax, dword ptr [0xa0f684] */ r_eax = R32((u32)(0xa0f684u));
    /* 004c6798: jmp 0x4c679f */ goto L_004c679f;
L_004c679a:; BB(0x004c679a);
    /* 004c679a: mov eax, dword ptr [0xa0f688] */ r_eax = R32((u32)(0xa0f688u));
L_004c679f:; BB(0x004c679f);
    /* 004c679f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c67a0: mov edx, dword ptr [ebp + 0x6e0] */ r_edx = R32((u32)(r_ebp+0x6e0u));
    /* 004c67a6: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c67a9: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c67ab: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x4c67b0u); f_004c6c54();
    /* 004c67b0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c67b2: je 0x4c6c14 */ if (fZ) goto L_004c6c14;
L_004c67b8:; BB(0x004c67b8);
    /* 004c67b8: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c67ba: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004c67bc: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c67bf: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c67c1: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c67c7u); call_ind(t); }
    /* 004c67c7: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c67cb: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c67d1: mov byte ptr [esp + 0x28], 0xa8 */ W8((u32)(r_esp+0x28u), 0xa8u);
    /* 004c67d6: mov edx, 9 */ r_edx = 0x9u;
    /* 004c67db: mov byte ptr [esp + 0x29], 6 */ W8((u32)(r_esp+0x29u), 0x6u);
    /* 004c67e0: mov word ptr [esp + 0x2a], ax */ W16((u32)(r_esp+0x2au), (u16)r_eax);
    /* 004c67e5: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c67eb: mov word ptr [esp + 0x2c], dx */ W16((u32)(r_esp+0x2cu), (u16)r_edx);
    /* 004c67f0: mov word ptr [esp + 0x2e], ax */ W16((u32)(r_esp+0x2eu), (u16)r_eax);
    /* 004c67f5: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c67fc: mov dword ptr [esp + 0x30], eax */ W32((u32)(r_esp+0x30u), r_eax);
    /* 004c6800: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c6806: mov dword ptr [esp + 0x34], eax */ W32((u32)(r_esp+0x34u), r_eax);
    /* 004c680a: mov dword ptr [esp + 0x38], ecx */ W32((u32)(r_esp+0x38u), r_ecx);
    /* 004c680e: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c6813u); f_008587a5();
    /* 004c6813: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c6817: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c681b: fdiv dword ptr [0x9085b8] */ ST(0) = ST(0) / R_F32((u32)(0x9085b8u));
    /* 004c6821: fmul dword ptr [0x9085bc] */ ST(0) = ST(0) * R_F32((u32)(0x9085bcu));
    /* 004c6827: lea ecx, [esp + 0x28] */ r_ecx = (u32)(r_esp+0x28u);
    /* 004c682b: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c682f: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c6834: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c6839: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c683d: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c6841: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c6845: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c6849: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c684d: mov byte ptr [esp + 0x3c], al */ W8((u32)(r_esp+0x3cu), (u8)r_eax);
    /* 004c6851: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c6856u); f_008003e0();
    /* 004c6856: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c685c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c685d: ret 4 */ FN_RET(0x004c645e); r_esp += 8; return;
L_004c6c14:; BB(0x004c6c14);
    /* 004c6c14: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c6c1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6c1b: ret 4 */ FN_RET(0x004c645e); r_esp += 8; return;
}

void f_004c6860(void)
{
    FN_ENTER(0x004c6860);
    /* 004c6860: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c6862: call 0x4c32b0 */ r_esp -= 4; W32(r_esp, 0x4c6867u); f_004c32b0();
    /* 004c6867: jmp 0x4c6c14 */ goto L_004c6c14;
L_004c6c14:; BB(0x004c6c14);
    /* 004c6c14: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c6c1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6c1b: ret 4 */ FN_RET(0x004c6860); r_esp += 8; return;
}

void f_004c686c(void)
{
    FN_ENTER(0x004c686c);
    /* 004c686c: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c686e: call 0x4c32c4 */ r_esp -= 4; W32(r_esp, 0x4c6873u); f_004c32c4();
    /* 004c6873: jmp 0x4c6c14 */ goto L_004c6c14;
L_004c6c14:; BB(0x004c6c14);
    /* 004c6c14: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c6c1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6c1b: ret 4 */ FN_RET(0x004c686c); r_esp += 8; return;
}

void f_004c6878(void)
{
    FN_ENTER(0x004c6878);
    /* 004c6878: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 004c687b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 004c687d: mov word ptr [ebp + 0xb8], ax */ W16((u32)(r_ebp+0xb8u), (u16)r_eax);
    /* 004c6884: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c6886: call dword ptr [edx + 0x188] */ { u32 t = R32((u32)(r_edx+0x188u)); r_esp -= 4; W32(r_esp, 0x4c688cu); call_ind(t); }
    /* 004c688c: mov dword ptr [ebp + 0x3ec], 0 */ W32((u32)(r_ebp+0x3ecu), 0x0u);
    /* 004c6896: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c6898: call 0x4cb184 */ r_esp -= 4; W32(r_esp, 0x4c689du); f_004cb184();
    /* 004c689d: mov eax, dword ptr [ebp + 0x3c8] */ r_eax = R32((u32)(r_ebp+0x3c8u));
    /* 004c68a3: and eax, 0xffffffc9 */ {  u32 a = r_eax; u32 b = 0xffffffc9u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 004c68a6: mov dword ptr [ebp + 0x3c8], eax */ W32((u32)(r_ebp+0x3c8u), r_eax);
    /* 004c68ac: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c68b2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c68b3: ret 4 */ FN_RET(0x004c6878); r_esp += 8; return;
}

void f_004c68b6(void)
{
    FN_ENTER(0x004c68b6);
    /* 004c68b6: mov edx, dword ptr [ebp + 0x6e0] */ r_edx = R32((u32)(r_ebp+0x6e0u));
    /* 004c68bc: fld dword ptr [edx + 0x24] */ FPUSH(R_F32((u32)(r_edx+0x24u)));
    /* 004c68bf: fcomp dword ptr [0x9088fc] */ fx_compare(ST(0), R_F32((u32)(0x9088fcu))); FPOP();
    /* 004c68c5: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 004c68c7: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 004c68c8: ja 0x4c6b47 */ if ((!fC&&!fZ)) goto L_004c6b47;
L_004c68ce:; BB(0x004c68ce);
    /* 004c68ce: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 004c68d1: test dword ptr [0xa0f674], eax */ {  u32 a = R32((u32)(0xa0f674u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c68d7: jne 0x4c6a81 */ if (!fZ) goto L_004c6a81;
L_004c68dd:; BB(0x004c68dd);
    /* 004c68dd: test dword ptr [0xa0f678], eax */ {  u32 a = R32((u32)(0xa0f678u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c68e3: jne 0x4c69bb */ if (!fZ) goto L_004c69bb;
L_004c68e9:; BB(0x004c68e9);
    /* 004c68e9: test dword ptr [0xa0f67c], eax */ {  u32 a = R32((u32)(0xa0f67cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c68ef: je 0x4c6c14 */ if (fZ) goto L_004c6c14;
L_004c68f5:; BB(0x004c68f5);
    /* 004c68f5: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c68f7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004c68f9: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c68fc: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c68fe: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c6904u); call_ind(t); }
    /* 004c6904: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c6908: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c690e: mov byte ptr [esp + 0xa0], 0xa8 */ W8((u32)(r_esp+0xa0u), 0xa8u);
    /* 004c6916: mov edx, 5 */ r_edx = 0x5u;
    /* 004c691b: mov byte ptr [esp + 0xa1], 6 */ W8((u32)(r_esp+0xa1u), 0x6u);
    /* 004c6923: mov word ptr [esp + 0xa2], ax */ W16((u32)(r_esp+0xa2u), (u16)r_eax);
    /* 004c692b: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c6931: mov word ptr [esp + 0xa4], dx */ W16((u32)(r_esp+0xa4u), (u16)r_edx);
    /* 004c6939: mov word ptr [esp + 0xa6], ax */ W16((u32)(r_esp+0xa6u), (u16)r_eax);
    /* 004c6941: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c6948: mov dword ptr [esp + 0xa8], eax */ W32((u32)(r_esp+0xa8u), r_eax);
    /* 004c694f: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c6955: mov dword ptr [esp + 0xac], eax */ W32((u32)(r_esp+0xacu), r_eax);
    /* 004c695c: mov dword ptr [esp + 0xb0], ecx */ W32((u32)(r_esp+0xb0u), r_ecx);
    /* 004c6963: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c6968u); f_008587a5();
    /* 004c6968: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c696c: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c6970: fdiv dword ptr [0x9085b8] */ ST(0) = ST(0) / R_F32((u32)(0x9085b8u));
    /* 004c6976: fmul dword ptr [0x9085bc] */ ST(0) = ST(0) * R_F32((u32)(0x9085bcu));
    /* 004c697c: lea ecx, [esp + 0xa0] */ r_ecx = (u32)(r_esp+0xa0u);
    /* 004c6983: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c6987: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c698c: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c6991: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c6995: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c6999: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c699d: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c69a1: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c69a5: mov byte ptr [esp + 0xb4], al */ W8((u32)(r_esp+0xb4u), (u8)r_eax);
    /* 004c69ac: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c69b1u); f_008003e0();
    /* 004c69b1: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c69b7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c69b8: ret 4 */ FN_RET(0x004c68b6); r_esp += 8; return;
L_004c69bb:; BB(0x004c69bb);
    /* 004c69bb: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c69bd: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004c69bf: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c69c2: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c69c4: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c69cau); call_ind(t); }
    /* 004c69ca: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c69ce: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c69d4: mov byte ptr [esp + 0xb8], 0xa8 */ W8((u32)(r_esp+0xb8u), 0xa8u);
    /* 004c69dc: mov edx, 4 */ r_edx = 0x4u;
    /* 004c69e1: mov byte ptr [esp + 0xb9], 6 */ W8((u32)(r_esp+0xb9u), 0x6u);
    /* 004c69e9: mov word ptr [esp + 0xba], ax */ W16((u32)(r_esp+0xbau), (u16)r_eax);
    /* 004c69f1: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c69f7: mov word ptr [esp + 0xbc], dx */ W16((u32)(r_esp+0xbcu), (u16)r_edx);
    /* 004c69ff: mov word ptr [esp + 0xbe], ax */ W16((u32)(r_esp+0xbeu), (u16)r_eax);
    /* 004c6a07: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c6a0e: mov dword ptr [esp + 0xc0], eax */ W32((u32)(r_esp+0xc0u), r_eax);
    /* 004c6a15: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c6a1b: mov dword ptr [esp + 0xc4], eax */ W32((u32)(r_esp+0xc4u), r_eax);
    /* 004c6a22: mov dword ptr [esp + 0xc8], ecx */ W32((u32)(r_esp+0xc8u), r_ecx);
    /* 004c6a29: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c6a2eu); f_008587a5();
    /* 004c6a2e: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c6a32: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c6a36: fdiv dword ptr [0x9085b8] */ ST(0) = ST(0) / R_F32((u32)(0x9085b8u));
    /* 004c6a3c: fmul dword ptr [0x9085bc] */ ST(0) = ST(0) * R_F32((u32)(0x9085bcu));
    /* 004c6a42: lea ecx, [esp + 0xb8] */ r_ecx = (u32)(r_esp+0xb8u);
    /* 004c6a49: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c6a4d: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c6a52: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c6a57: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c6a5b: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c6a5f: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c6a63: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c6a67: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c6a6b: mov byte ptr [esp + 0xcc], al */ W8((u32)(r_esp+0xccu), (u8)r_eax);
    /* 004c6a72: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c6a77u); f_008003e0();
    /* 004c6a77: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c6a7d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6a7e: ret 4 */ FN_RET(0x004c68b6); r_esp += 8; return;
L_004c6a81:; BB(0x004c6a81);
    /* 004c6a81: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6a83: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6a85: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c6a88: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c6a8a: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c6a90u); call_ind(t); }
    /* 004c6a90: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c6a94: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c6a9a: mov byte ptr [esp + 0xd0], 0xa8 */ W8((u32)(r_esp+0xd0u), 0xa8u);
    /* 004c6aa2: mov edx, 3 */ r_edx = 0x3u;
    /* 004c6aa7: mov byte ptr [esp + 0xd1], 6 */ W8((u32)(r_esp+0xd1u), 0x6u);
    /* 004c6aaf: mov word ptr [esp + 0xd2], ax */ W16((u32)(r_esp+0xd2u), (u16)r_eax);
    /* 004c6ab7: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c6abd: mov word ptr [esp + 0xd4], dx */ W16((u32)(r_esp+0xd4u), (u16)r_edx);
    /* 004c6ac5: mov word ptr [esp + 0xd6], ax */ W16((u32)(r_esp+0xd6u), (u16)r_eax);
    /* 004c6acd: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c6ad4: mov dword ptr [esp + 0xd8], eax */ W32((u32)(r_esp+0xd8u), r_eax);
    /* 004c6adb: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c6ae1: mov dword ptr [esp + 0xdc], eax */ W32((u32)(r_esp+0xdcu), r_eax);
    /* 004c6ae8: mov dword ptr [esp + 0xe0], ecx */ W32((u32)(r_esp+0xe0u), r_ecx);
    /* 004c6aef: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c6af4u); f_008587a5();
    /* 004c6af4: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c6af8: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c6afc: fdiv dword ptr [0x9085b8] */ ST(0) = ST(0) / R_F32((u32)(0x9085b8u));
    /* 004c6b02: fmul dword ptr [0x9085bc] */ ST(0) = ST(0) * R_F32((u32)(0x9085bcu));
    /* 004c6b08: lea ecx, [esp + 0xd0] */ r_ecx = (u32)(r_esp+0xd0u);
    /* 004c6b0f: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c6b13: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c6b18: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c6b1d: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c6b21: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c6b25: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c6b29: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c6b2d: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c6b31: mov byte ptr [esp + 0xe4], al */ W8((u32)(r_esp+0xe4u), (u8)r_eax);
    /* 004c6b38: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c6b3du); f_008003e0();
    /* 004c6b3d: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c6b43: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6b44: ret 4 */ FN_RET(0x004c68b6); r_esp += 8; return;
L_004c6b47:; BB(0x004c6b47);
    /* 004c6b47: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6b49: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6b4b: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 004c6b4e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c6b50: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c6b56u); call_ind(t); }
    /* 004c6b56: movzx eax, word ptr [ebp + 0x1c] */ r_eax = (u32)R16((u32)(r_ebp+0x1cu));
    /* 004c6b5a: mov ecx, dword ptr [ebp + 0x694] */ r_ecx = R32((u32)(r_ebp+0x694u));
    /* 004c6b60: mov byte ptr [esp + 0xe8], 0xa8 */ W8((u32)(r_esp+0xe8u), 0xa8u);
    /* 004c6b68: mov edx, 0x19 */ r_edx = 0x19u;
    /* 004c6b6d: mov byte ptr [esp + 0xe9], 6 */ W8((u32)(r_esp+0xe9u), 0x6u);
    /* 004c6b75: mov word ptr [esp + 0xea], ax */ W16((u32)(r_esp+0xeau), (u16)r_eax);
    /* 004c6b7d: mov eax, dword ptr [ebp + 0x67c] */ r_eax = R32((u32)(r_ebp+0x67cu));
    /* 004c6b83: mov word ptr [esp + 0xec], dx */ W16((u32)(r_esp+0xecu), (u16)r_edx);
    /* 004c6b8b: mov word ptr [esp + 0xee], ax */ W16((u32)(r_esp+0xeeu), (u16)r_eax);
    /* 004c6b93: movzx eax, word ptr [ebp + 0x394] */ r_eax = (u32)R16((u32)(r_ebp+0x394u));
    /* 004c6b9a: mov dword ptr [esp + 0xf0], eax */ W32((u32)(r_esp+0xf0u), r_eax);
    /* 004c6ba1: mov eax, dword ptr [ebp + 0x690] */ r_eax = R32((u32)(r_ebp+0x690u));
    /* 004c6ba7: mov dword ptr [esp + 0xf4], eax */ W32((u32)(r_esp+0xf4u), r_eax);
    /* 004c6bae: mov dword ptr [esp + 0xf8], ecx */ W32((u32)(r_esp+0xf8u), r_ecx);
    /* 004c6bb5: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c6bbau); f_008587a5();
    /* 004c6bba: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c6bbe: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c6bc2: fdiv dword ptr [0x9085b8] */ ST(0) = ST(0) / R_F32((u32)(0x9085b8u));
    /* 004c6bc8: fmul dword ptr [0x9085bc] */ ST(0) = ST(0) * R_F32((u32)(0x9085bcu));
    /* 004c6bce: lea ecx, [esp + 0xe8] */ r_ecx = (u32)(r_esp+0xe8u);
    /* 004c6bd5: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c6bd9: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c6bde: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c6be3: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c6be7: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c6beb: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c6bef: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c6bf3: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c6bf7: mov byte ptr [esp + 0xfc], al */ W8((u32)(r_esp+0xfcu), (u8)r_eax);
    /* 004c6bfe: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c6c03u); f_008003e0();
    /* 004c6c03: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c6c09: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6c0a: ret 4 */ FN_RET(0x004c68b6); r_esp += 8; return;
L_004c6c14:; BB(0x004c6c14);
    /* 004c6c14: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c6c1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6c1b: ret 4 */ FN_RET(0x004c68b6); r_esp += 8; return;
}

void f_004c6c0d(void)
{
    FN_ENTER(0x004c6c0d);
    /* 004c6c0d: mov ecx, ebp */ r_ecx = r_ebp;
    /* 004c6c0f: call 0x7aa094 */ r_esp -= 4; W32(r_esp, 0x4c6c14u); f_007aa094();
    /* 004c6c14: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c6c1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6c1b: ret 4 */ FN_RET(0x004c6c0d); r_esp += 8; return;
}

void f_004c6c14(void)
{
    FN_ENTER(0x004c6c14);
    /* 004c6c14: add esp, 0x100 */ {  u32 a = r_esp; u32 b = 0x100u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c6c1a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 004c6c1b: ret 4 */ FN_RET(0x004c6c14); r_esp += 8; return;
}

void f_004c6c20(void) /* sub_4C6C20 */
{
    FN_ENTER(0x004c6c20);
    /* 004c6c20: mov eax, dword ptr [ecx + 0x764] */ r_eax = R32((u32)(r_ecx+0x764u));
    /* 004c6c26: cmp eax, 0x96 */ {  u32 a = r_eax; u32 b = 0x96u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 004c6c2b: jge 0x4c6c30 */ if ((fS==fO)) goto L_004c6c30;
L_004c6c2d:; BB(0x004c6c2d);
    /* 004c6c2d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c6c2f: ret  */ FN_RET(0x004c6c20); r_esp += 4; return;
L_004c6c30:; BB(0x004c6c30);
    /* 004c6c30: push dword ptr [0xa0f67c] */ { u32 v = R32((u32)(0xa0f67cu)); r_esp -= 4; W32(r_esp, v); }
    /* 004c6c36: mov eax, dword ptr [ecx + 0x6e0] */ r_eax = R32((u32)(r_ecx+0x6e0u));
    /* 004c6c3c: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c6c3f: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x4c6c44u); f_004c6c54();
    /* 004c6c44: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c6c46: je 0x4c6c4e */ if (fZ) goto L_004c6c4e;
L_004c6c48:; BB(0x004c6c48);
    /* 004c6c48: mov eax, 1 */ r_eax = 0x1u;
    /* 004c6c4d: ret  */ FN_RET(0x004c6c20); r_esp += 4; return;
L_004c6c4e:; BB(0x004c6c4e);
    /* 004c6c4e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c6c50: ret  */ FN_RET(0x004c6c20); r_esp += 4; return;
}

void f_004c6c54(void) /* sub_4C6C54 */
{
    FN_ENTER(0x004c6c54);
    /* 004c6c54: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c6c55: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 004c6c59: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c6c5f: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x4c6c64u); f_0068d5a8();
    /* 004c6c64: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 004c6c65: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6c67: je 0x4c6c74 */ if (fZ) goto L_004c6c74;
L_004c6c69:; BB(0x004c6c69);
    /* 004c6c69: mov ecx, eax */ r_ecx = r_eax;
    /* 004c6c6b: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x4c6c70u); f_00689410();
    /* 004c6c70: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6c72: je 0x4c6c9b */ if (fZ) goto L_004c6c9b;
L_004c6c74:; BB(0x004c6c74);
    /* 004c6c74: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 004c6c79: or eax, dword ptr [0xa0f67c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f67cu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c6c7f: or eax, dword ptr [0xa0f680] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f680u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c6c85: or eax, dword ptr [0xa0f678] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f678u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c6c8b: or eax, dword ptr [0xa0f684] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f684u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c6c91: or eax, dword ptr [0xa0f688] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f688u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c6c97: not eax */ r_eax = ~r_eax;
    /* 004c6c99: and edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu; r_edi = r;  }
L_004c6c9b:; BB(0x004c6c9b);
    /* 004c6c9b: and edi, dword ptr [esp + 0xc] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a & b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 004c6c9f: mov eax, edi */ r_eax = r_edi;
    /* 004c6ca1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c6ca2: ret 8 */ FN_RET(0x004c6c54); r_esp += 12; return;
}

void f_004c6ca8(void) /* sub_4C6CA8 */
{
    FN_ENTER(0x004c6ca8);
    /* 004c6ca8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 004c6ca9: sub esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 004c6caf: mov edi, ecx */ r_edi = r_ecx;
    /* 004c6cb1: lea edx, [edi + 0x86c] */ r_edx = (u32)(r_edi+0x86cu);
    /* 004c6cb7: mov eax, dword ptr [esp + 0x114] */ r_eax = R32((u32)(r_esp+0x114u));
    /* 004c6cbe: cmp eax, 0xb */ {  u32 a = r_eax; u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 004c6cc1: ja 0x4c74a3 */ if ((!fC&&!fZ)) goto L_004c74a3;
L_004c6cc7:; BB(0x004c6cc7);
    /* 004c6cc7: mov eax, dword ptr [eax*4 + 0x907c0c] */ r_eax = R32((u32)(r_eax*4+0x907c0cu));
    /* 004c6cce: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_004c74a3:; BB(0x004c74a3);
    /* 004c74a3: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c74a9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c74aa: ret 4 */ FN_RET(0x004c6ca8); r_esp += 8; return;
}

void f_004c6cd0(void)
{
    FN_ENTER(0x004c6cd0);
    /* 004c6cd0: mov eax, dword ptr [edi + 0x860] */ r_eax = R32((u32)(r_edi+0x860u));
    /* 004c6cd6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6cd9: je 0x4c74ad */ if (fZ) goto L_004c74ad;
L_004c6cdf:; BB(0x004c6cdf);
    /* 004c6cdf: push dword ptr [0xa0f674] */ { u32 v = R32((u32)(0xa0f674u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c6ce5: mov eax, dword ptr [edi + 0x6e0] */ r_eax = R32((u32)(r_edi+0x6e0u));
    /* 004c6ceb: mov ecx, edi */ r_ecx = r_edi;
    /* 004c6ced: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c6cf0: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x4c6cf5u); f_004c6c54();
    /* 004c6cf5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6cf7: je 0x4c6db4 */ if (fZ) goto L_004c6db4;
L_004c6cfd:; BB(0x004c6cfd);
    /* 004c6cfd: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6cff: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6d01: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004c6d03: mov ecx, edi */ r_ecx = r_edi;
    /* 004c6d05: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c6d0bu); call_ind(t); }
    /* 004c6d0b: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 004c6d0f: mov ecx, dword ptr [edi + 0x694] */ r_ecx = R32((u32)(r_edi+0x694u));
    /* 004c6d15: mov byte ptr [esp + 0x7c], 0xa8 */ W8((u32)(r_esp+0x7cu), 0xa8u);
    /* 004c6d1a: mov edx, 3 */ r_edx = 0x3u;
    /* 004c6d1f: mov byte ptr [esp + 0x7d], 6 */ W8((u32)(r_esp+0x7du), 0x6u);
    /* 004c6d24: mov word ptr [esp + 0x7e], ax */ W16((u32)(r_esp+0x7eu), (u16)r_eax);
    /* 004c6d29: mov eax, dword ptr [edi + 0x67c] */ r_eax = R32((u32)(r_edi+0x67cu));
    /* 004c6d2f: mov word ptr [esp + 0x80], dx */ W16((u32)(r_esp+0x80u), (u16)r_edx);
    /* 004c6d37: mov word ptr [esp + 0x82], ax */ W16((u32)(r_esp+0x82u), (u16)r_eax);
    /* 004c6d3f: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 004c6d46: mov dword ptr [esp + 0x84], eax */ W32((u32)(r_esp+0x84u), r_eax);
    /* 004c6d4d: mov eax, dword ptr [edi + 0x690] */ r_eax = R32((u32)(r_edi+0x690u));
    /* 004c6d53: mov dword ptr [esp + 0x88], eax */ W32((u32)(r_esp+0x88u), r_eax);
    /* 004c6d5a: mov dword ptr [esp + 0x8c], ecx */ W32((u32)(r_esp+0x8cu), r_ecx);
    /* 004c6d61: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c6d66u); f_008587a5();
    /* 004c6d66: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 004c6d69: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 004c6d6c: fdiv dword ptr [0x9085b0] */ ST(0) = ST(0) / R_F32((u32)(0x9085b0u));
    /* 004c6d72: fmul dword ptr [0x9085b4] */ ST(0) = ST(0) * R_F32((u32)(0x9085b4u));
    /* 004c6d78: lea ecx, [esp + 0x7c] */ r_ecx = (u32)(r_esp+0x7cu);
    /* 004c6d7c: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c6d80: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c6d85: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c6d8a: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c6d8e: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c6d92: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c6d96: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c6d9a: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c6d9e: mov byte ptr [esp + 0x90], al */ W8((u32)(r_esp+0x90u), (u8)r_eax);
    /* 004c6da5: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c6daau); f_008003e0();
    /* 004c6daa: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c6db0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c6db1: ret 4 */ FN_RET(0x004c6cd0); r_esp += 8; return;
L_004c6db4:; BB(0x004c6db4);
    /* 004c6db4: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c6dba: mov eax, dword ptr [edi + 0x6e0] */ r_eax = R32((u32)(r_edi+0x6e0u));
    /* 004c6dc0: mov ecx, edi */ r_ecx = r_edi;
    /* 004c6dc2: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c6dc5: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x4c6dcau); f_004c6c54();
    /* 004c6dca: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6dcc: je 0x4c6e79 */ if (fZ) goto L_004c6e79;
L_004c6dd2:; BB(0x004c6dd2);
    /* 004c6dd2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6dd4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6dd6: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004c6dd8: mov ecx, edi */ r_ecx = r_edi;
    /* 004c6dda: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c6de0u); call_ind(t); }
    /* 004c6de0: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 004c6de4: mov ecx, dword ptr [edi + 0x694] */ r_ecx = R32((u32)(r_edi+0x694u));
    /* 004c6dea: mov byte ptr [esp + 0x64], 0xa8 */ W8((u32)(r_esp+0x64u), 0xa8u);
    /* 004c6def: mov edx, 4 */ r_edx = 0x4u;
    /* 004c6df4: mov byte ptr [esp + 0x65], 6 */ W8((u32)(r_esp+0x65u), 0x6u);
    /* 004c6df9: mov word ptr [esp + 0x66], ax */ W16((u32)(r_esp+0x66u), (u16)r_eax);
    /* 004c6dfe: mov eax, dword ptr [edi + 0x67c] */ r_eax = R32((u32)(r_edi+0x67cu));
    /* 004c6e04: mov word ptr [esp + 0x68], dx */ W16((u32)(r_esp+0x68u), (u16)r_edx);
    /* 004c6e09: mov word ptr [esp + 0x6a], ax */ W16((u32)(r_esp+0x6au), (u16)r_eax);
    /* 004c6e0e: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 004c6e15: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 004c6e19: mov eax, dword ptr [edi + 0x690] */ r_eax = R32((u32)(r_edi+0x690u));
    /* 004c6e1f: mov dword ptr [esp + 0x70], eax */ W32((u32)(r_esp+0x70u), r_eax);
    /* 004c6e23: mov dword ptr [esp + 0x74], ecx */ W32((u32)(r_esp+0x74u), r_ecx);
    /* 004c6e27: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c6e2cu); f_008587a5();
    /* 004c6e2c: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c6e30: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c6e34: fdiv dword ptr [0x9085b0] */ ST(0) = ST(0) / R_F32((u32)(0x9085b0u));
    /* 004c6e3a: fmul dword ptr [0x9085b4] */ ST(0) = ST(0) * R_F32((u32)(0x9085b4u));
    /* 004c6e40: lea ecx, [esp + 0x64] */ r_ecx = (u32)(r_esp+0x64u);
    /* 004c6e44: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c6e48: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c6e4d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c6e52: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c6e56: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c6e5a: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c6e5e: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c6e62: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c6e66: mov byte ptr [esp + 0x78], al */ W8((u32)(r_esp+0x78u), (u8)r_eax);
    /* 004c6e6a: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c6e6fu); f_008003e0();
    /* 004c6e6f: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c6e75: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c6e76: ret 4 */ FN_RET(0x004c6cd0); r_esp += 8; return;
L_004c6e79:; BB(0x004c6e79);
    /* 004c6e79: mov ecx, edi */ r_ecx = r_edi;
    /* 004c6e7b: call 0x4c6c20 */ r_esp -= 4; W32(r_esp, 0x4c6e80u); f_004c6c20();
    /* 004c6e80: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6e82: je 0x4c6f2f */ if (fZ) goto L_004c6f2f;
L_004c6e88:; BB(0x004c6e88);
    /* 004c6e88: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6e8a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6e8c: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004c6e8e: mov ecx, edi */ r_ecx = r_edi;
    /* 004c6e90: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c6e96u); call_ind(t); }
    /* 004c6e96: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 004c6e9a: mov ecx, dword ptr [edi + 0x694] */ r_ecx = R32((u32)(r_edi+0x694u));
    /* 004c6ea0: mov byte ptr [esp + 0x4c], 0xa8 */ W8((u32)(r_esp+0x4cu), 0xa8u);
    /* 004c6ea5: mov edx, 5 */ r_edx = 0x5u;
    /* 004c6eaa: mov byte ptr [esp + 0x4d], 6 */ W8((u32)(r_esp+0x4du), 0x6u);
    /* 004c6eaf: mov word ptr [esp + 0x4e], ax */ W16((u32)(r_esp+0x4eu), (u16)r_eax);
    /* 004c6eb4: mov eax, dword ptr [edi + 0x67c] */ r_eax = R32((u32)(r_edi+0x67cu));
    /* 004c6eba: mov word ptr [esp + 0x50], dx */ W16((u32)(r_esp+0x50u), (u16)r_edx);
    /* 004c6ebf: mov word ptr [esp + 0x52], ax */ W16((u32)(r_esp+0x52u), (u16)r_eax);
    /* 004c6ec4: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 004c6ecb: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 004c6ecf: mov eax, dword ptr [edi + 0x690] */ r_eax = R32((u32)(r_edi+0x690u));
    /* 004c6ed5: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 004c6ed9: mov dword ptr [esp + 0x5c], ecx */ W32((u32)(r_esp+0x5cu), r_ecx);
    /* 004c6edd: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c6ee2u); f_008587a5();
    /* 004c6ee2: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c6ee6: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c6eea: fdiv dword ptr [0x9085b0] */ ST(0) = ST(0) / R_F32((u32)(0x9085b0u));
    /* 004c6ef0: fmul dword ptr [0x9085b4] */ ST(0) = ST(0) * R_F32((u32)(0x9085b4u));
    /* 004c6ef6: lea ecx, [esp + 0x4c] */ r_ecx = (u32)(r_esp+0x4cu);
    /* 004c6efa: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c6efe: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c6f03: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c6f08: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c6f0c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c6f10: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c6f14: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c6f18: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c6f1c: mov byte ptr [esp + 0x60], al */ W8((u32)(r_esp+0x60u), (u8)r_eax);
    /* 004c6f20: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c6f25u); f_008003e0();
    /* 004c6f25: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c6f2b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c6f2c: ret 4 */ FN_RET(0x004c6cd0); r_esp += 8; return;
L_004c6f2f:; BB(0x004c6f2f);
    /* 004c6f2f: movzx eax, word ptr [0xa485f0] */ r_eax = (u32)R16((u32)(0xa485f0u));
    /* 004c6f36: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6f38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c6f39: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x4c6f3eu); f_007be19c();
    /* 004c6f3e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 004c6f41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6f43: je 0x4c6f4c */ if (fZ) goto L_004c6f4c;
L_004c6f45:; BB(0x004c6f45);
    /* 004c6f45: mov eax, dword ptr [0xa0f684] */ r_eax = R32((u32)(0xa0f684u));
    /* 004c6f4a: jmp 0x4c6f51 */ goto L_004c6f51;
L_004c6f4c:; BB(0x004c6f4c);
    /* 004c6f4c: mov eax, dword ptr [0xa0f688] */ r_eax = R32((u32)(0xa0f688u));
L_004c6f51:; BB(0x004c6f51);
    /* 004c6f51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 004c6f52: mov edx, dword ptr [edi + 0x6e0] */ r_edx = R32((u32)(r_edi+0x6e0u));
    /* 004c6f58: push dword ptr [edx + 8] */ { u32 v = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 004c6f5b: mov ecx, edi */ r_ecx = r_edi;
    /* 004c6f5d: call 0x4c6c54 */ r_esp -= 4; W32(r_esp, 0x4c6f62u); f_004c6c54();
    /* 004c6f62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 004c6f64: je 0x4c74a3 */ if (fZ) goto L_004c74a3;
L_004c6f6a:; BB(0x004c6f6a);
    /* 004c6f6a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6f6c: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 004c6f6e: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004c6f70: mov ecx, edi */ r_ecx = r_edi;
    /* 004c6f72: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c6f78u); call_ind(t); }
    /* 004c6f78: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 004c6f7c: mov ecx, dword ptr [edi + 0x694] */ r_ecx = R32((u32)(r_edi+0x694u));
    /* 004c6f82: mov byte ptr [esp + 0x34], 0xa8 */ W8((u32)(r_esp+0x34u), 0xa8u);
    /* 004c6f87: mov edx, 9 */ r_edx = 0x9u;
    /* 004c6f8c: mov byte ptr [esp + 0x35], 6 */ W8((u32)(r_esp+0x35u), 0x6u);
    /* 004c6f91: mov word ptr [esp + 0x36], ax */ W16((u32)(r_esp+0x36u), (u16)r_eax);
    /* 004c6f96: mov eax, dword ptr [edi + 0x67c] */ r_eax = R32((u32)(r_edi+0x67cu));
    /* 004c6f9c: mov word ptr [esp + 0x38], dx */ W16((u32)(r_esp+0x38u), (u16)r_edx);
    /* 004c6fa1: mov word ptr [esp + 0x3a], ax */ W16((u32)(r_esp+0x3au), (u16)r_eax);
    /* 004c6fa6: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 004c6fad: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 004c6fb1: mov eax, dword ptr [edi + 0x690] */ r_eax = R32((u32)(r_edi+0x690u));
    /* 004c6fb7: mov dword ptr [esp + 0x40], eax */ W32((u32)(r_esp+0x40u), r_eax);
    /* 004c6fbb: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 004c6fbf: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c6fc4u); f_008587a5();
    /* 004c6fc4: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c6fc8: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c6fcc: fdiv dword ptr [0x9085b0] */ ST(0) = ST(0) / R_F32((u32)(0x9085b0u));
    /* 004c6fd2: fmul dword ptr [0x9085b4] */ ST(0) = ST(0) * R_F32((u32)(0x9085b4u));
    /* 004c6fd8: lea ecx, [esp + 0x34] */ r_ecx = (u32)(r_esp+0x34u);
    /* 004c6fdc: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c6fe0: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c6fe5: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c6fea: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c6fee: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c6ff2: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c6ff6: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c6ffa: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c6ffe: mov byte ptr [esp + 0x48], al */ W8((u32)(r_esp+0x48u), (u8)r_eax);
    /* 004c7002: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c7007u); f_008003e0();
    /* 004c7007: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c700d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c700e: ret 4 */ FN_RET(0x004c6cd0); r_esp += 8; return;
L_004c74a3:; BB(0x004c74a3);
    /* 004c74a3: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c74a9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c74aa: ret 4 */ FN_RET(0x004c6cd0); r_esp += 8; return;
L_004c74ad:; BB(0x004c74ad);
    /* 004c74ad: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 004c74af: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 004c74b1: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 004c74b3: mov ecx, edi */ r_ecx = r_edi;
    /* 004c74b5: call dword ptr [eax + 0x164] */ { u32 t = R32((u32)(r_eax+0x164u)); r_esp -= 4; W32(r_esp, 0x4c74bbu); call_ind(t); }
    /* 004c74bb: movzx eax, word ptr [edi + 0x1c] */ r_eax = (u32)R16((u32)(r_edi+0x1cu));
    /* 004c74bf: mov ecx, dword ptr [edi + 0x694] */ r_ecx = R32((u32)(r_edi+0x694u));
    /* 004c74c5: mov byte ptr [esp + 0x94], 0xa8 */ W8((u32)(r_esp+0x94u), 0xa8u);
    /* 004c74cd: mov edx, 0x18 */ r_edx = 0x18u;
    /* 004c74d2: mov byte ptr [esp + 0x95], 6 */ W8((u32)(r_esp+0x95u), 0x6u);
    /* 004c74da: mov word ptr [esp + 0x96], ax */ W16((u32)(r_esp+0x96u), (u16)r_eax);
    /* 004c74e2: mov eax, dword ptr [edi + 0x67c] */ r_eax = R32((u32)(r_edi+0x67cu));
    /* 004c74e8: mov word ptr [esp + 0x98], dx */ W16((u32)(r_esp+0x98u), (u16)r_edx);
    /* 004c74f0: mov word ptr [esp + 0x9a], ax */ W16((u32)(r_esp+0x9au), (u16)r_eax);
    /* 004c74f8: movzx eax, word ptr [edi + 0x394] */ r_eax = (u32)R16((u32)(r_edi+0x394u));
    /* 004c74ff: mov dword ptr [esp + 0x9c], eax */ W32((u32)(r_esp+0x9cu), r_eax);
    /* 004c7506: mov eax, dword ptr [edi + 0x690] */ r_eax = R32((u32)(r_edi+0x690u));
    /* 004c750c: mov dword ptr [esp + 0xa0], eax */ W32((u32)(r_esp+0xa0u), r_eax);
    /* 004c7513: mov dword ptr [esp + 0xa4], ecx */ W32((u32)(r_esp+0xa4u), r_ecx);
    /* 004c751a: call 0x8587a5 */ r_esp -= 4; W32(r_esp, 0x4c751fu); f_008587a5();
    /* 004c751f: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 004c7523: fild dword ptr [esp + 0x20] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x20u)));
    /* 004c7527: fdiv dword ptr [0x9085b0] */ ST(0) = ST(0) / R_F32((u32)(0x9085b0u));
    /* 004c752d: fmul dword ptr [0x9085b4] */ ST(0) = ST(0) * R_F32((u32)(0x9085b4u));
    /* 004c7533: lea ecx, [esp + 0x94] */ r_ecx = (u32)(r_esp+0x94u);
    /* 004c753a: fnstcw word ptr [esp + 8] */ W16((u32)(r_esp+0x8u), fcw);
    /* 004c753e: movzx eax, word ptr [esp + 8] */ r_eax = (u32)R16((u32)(r_esp+0x8u));
    /* 004c7543: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 004c7548: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 004c754c: fldcw word ptr [esp + 0x10] */ fcw = R16((u32)(r_esp+0x10u));
    /* 004c7550: fistp dword ptr [esp + 0x18] */ W32((u32)(r_esp+0x18u), (u32)fx_int32(ST(0))); FPOP();
    /* 004c7554: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 004c7558: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
    /* 004c755c: mov byte ptr [esp + 0xa8], al */ W8((u32)(r_esp+0xa8u), (u8)r_eax);
    /* 004c7563: call 0x8003e0 */ r_esp -= 4; W32(r_esp, 0x4c7568u); f_008003e0();
    /* 004c7568: add esp, 0x10c */ {  u32 a = r_esp; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 004c756e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 004c756f: ret 4 */ FN_RET(0x004c6cd0); r_esp += 8; return;
}

