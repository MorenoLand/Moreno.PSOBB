#include "protos.h"

void f_00753060(void) /* sub_753060 */
{
    FN_ENTER(0x00753060);
    /* 00753060: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00753061: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00753062: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00753065: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00753067: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 0075306a: call 0x5dc1e0 */ r_esp -= 4; W32(r_esp, 0x75306fu); f_005dc1e0();
    /* 0075306f: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00753072: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753073: mov ecx, dword ptr [ebx + 0x2c] */ r_ecx = R32((u32)(r_ebx+0x2cu));
    /* 00753076: call 0x5d4108 */ r_esp -= 4; W32(r_esp, 0x75307bu); f_005d4108();
    /* 0075307b: movsx eax, byte ptr [ebx + 0x1e] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x1eu));
    /* 0075307f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753080: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00753084: call 0x5dbc08 */ r_esp -= 4; W32(r_esp, 0x753089u); f_005dbc08();
    /* 00753089: mov ebp, eax */ r_ebp = r_eax;
    /* 0075308b: cmp ebp, -1 */ {  u32 a = r_ebp; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075308e: jne 0x753098 */ if (!fZ) goto L_00753098;
L_00753090:; BB(0x00753090);
    /* 00753090: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00753092: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00753095: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00753096: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00753097: ret  */ FN_RET(0x00753060); r_esp += 4; return;
L_00753098:; BB(0x00753098);
    /* 00753098: call 0x816d30 */ r_esp -= 4; W32(r_esp, 0x75309du); f_00816d30();
    /* 0075309d: push 0x77 */ { u32 v = 0x77u; r_esp -= 4; W32(r_esp, v); }
    /* 0075309f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7530a4u); f_0079317c();
    /* 007530a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007530a5: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x7530aau); f_00816cb8();
    /* 007530aa: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007530ad: call 0x816994 */ r_esp -= 4; W32(r_esp, 0x7530b2u); f_00816994();
    /* 007530b2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007530b3: call 0x793064 */ r_esp -= 4; W32(r_esp, 0x7530b8u); f_00793064();
    /* 007530b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007530b9: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x7530beu); f_00816cb8();
    /* 007530be: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 007530c0: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7530c5u); f_0079317c();
    /* 007530c5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007530c6: call 0x816cb8 */ r_esp -= 4; W32(r_esp, 0x7530cbu); f_00816cb8();
    /* 007530cb: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 007530d0: call 0x7ac344 */ r_esp -= 4; W32(r_esp, 0x7530d5u); f_007ac344();
    /* 007530d5: mov ebp, eax */ r_ebp = r_eax;
    /* 007530d7: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007530da: mov edx, dword ptr [0xa48a3c] */ r_edx = R32((u32)(0xa48a3cu));
    /* 007530e0: cmp edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007530e3: jle 0x7530f1 */ if ((fZ||fS!=fO)) goto L_007530f1;
L_007530e5:; BB(0x007530e5);
    /* 007530e5: fld dword ptr [0x973e58] */ FPUSH(R_F32((u32)(0x973e58u)));
    /* 007530eb: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
    /* 007530ef: jmp 0x7530fb */ goto L_007530fb;
L_007530f1:; BB(0x007530f1);
    /* 007530f1: fld dword ptr [0x973e5c] */ FPUSH(R_F32((u32)(0x973e5cu)));
    /* 007530f7: fstp dword ptr [esp + 0x28] */ W_F32((u32)(r_esp+0x28u), ST(0)); FPOP();
L_007530fb:; BB(0x007530fb);
    /* 007530fb: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 007530fd: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x753102u); f_0073ec50();
    /* 00753102: fld dword ptr [0x973e50] */ FPUSH(R_F32((u32)(0x973e50u)));
    /* 00753108: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0075310a: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 0075310e: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00753111: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00753115: mov dword ptr [esp + 0x20], 0x42200000 */ W32((u32)(r_esp+0x20u), 0x42200000u);
    /* 0075311d: mov dword ptr [esp + 0x24], ebp */ W32((u32)(r_esp+0x24u), r_ebp);
    /* 00753121: fild dword ptr [esp + 0x24] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x24u)));
    /* 00753125: fmul st(1), st(0) */ ST(1) = ST(1) * ST(0);
    /* 00753127: fadd dword ptr [0x973e4c] */ ST(0) = ST(0) + R_F32((u32)(0x973e4cu));
    /* 0075312d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075312f: fadd dword ptr [0x973e54] */ ST(0) = ST(0) + R_F32((u32)(0x973e54u));
    /* 00753135: fmul dword ptr [esp + 0x2c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x2cu));
    /* 00753139: fadd dword ptr [esp + 0x14] */ ST(0) = ST(0) + R_F32((u32)(r_esp+0x14u));
    /* 0075313d: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0075313f: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00753143: fstp dword ptr [esp + 0x14] */ W_F32((u32)(r_esp+0x14u), ST(0)); FPOP();
    /* 00753147: lea ebp, [esp + 0x14] */ r_ebp = (u32)(r_esp+0x14u);
    /* 0075314b: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 0075314f: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 00753152: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00753154: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753155: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00753156: call 0x73aa40 */ r_esp -= 4; W32(r_esp, 0x75315bu); f_0073aa40();
    /* 0075315b: mov ebp, eax */ r_ebp = r_eax;
    /* 0075315d: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00753160: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00753162: mov ecx, dword ptr [ebx + 0x30] */ r_ecx = R32((u32)(r_ebx+0x30u));
    /* 00753165: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x75316au); f_007336fc();
    /* 0075316a: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075316b: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0075316e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00753170: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x753175u); f_00712624();
    /* 00753175: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 0075317a: push 0xac9d80 */ { u32 v = 0xac9d80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075317f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00753181: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x753186u); f_0073ae38();
    /* 00753186: add esp, -8 */ {  u32 a = r_esp; u32 b = 0xfffffff8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00753189: fld dword ptr [esp + 0x30] */ FPUSH(R_F32((u32)(r_esp+0x30u)));
    /* 0075318d: fst dword ptr [esp] */ W_F32((u32)(r_esp), ST(0));
    /* 00753190: fstp dword ptr [esp + 4] */ W_F32((u32)(r_esp+0x4u), ST(0)); FPOP();
    /* 00753194: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00753196: call 0x70f5a4 */ r_esp -= 4; W32(r_esp, 0x75319bu); f_0070f5a4();
    /* 0075319b: mov eax, ebp */ r_eax = r_ebp;
    /* 0075319d: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007531a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007531a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007531a2: ret  */ FN_RET(0x00753060); r_esp += 4; return;
}

void f_007531a4(void) /* sub_7531A4 */
{
    FN_ENTER(0x007531a4);
    /* 007531a4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007531a5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007531a6: mov esi, ecx */ r_esi = r_ecx;
    /* 007531a8: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 007531aa: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x7531afu); f_0073ec50();
    /* 007531af: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 007531b2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007531b4: push 0x973e34 */ { u32 v = 0x973e34u; r_esp -= 4; W32(r_esp, v); }
    /* 007531b9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007531ba: call 0x73aa40 */ r_esp -= 4; W32(r_esp, 0x7531bfu); f_0073aa40();
    /* 007531bf: mov edi, eax */ r_edi = r_eax;
    /* 007531c1: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007531c4: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 007531c6: mov ecx, dword ptr [esi + 0x30] */ r_ecx = R32((u32)(r_esi+0x30u));
    /* 007531c9: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x7531ceu); f_007336fc();
    /* 007531ce: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007531cf: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007531d2: mov ecx, edi */ r_ecx = r_edi;
    /* 007531d4: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7531d9u); f_00712624();
    /* 007531d9: mov dword ptr [edi + 0x5c], 0x186a0 */ W32((u32)(r_edi+0x5cu), 0x186a0u);
    /* 007531e0: push dword ptr [esi + 0x28] */ { u32 v = R32((u32)(r_esi+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 007531e3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007531e4: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x7531e9u); f_0061cdb0();
    /* 007531e9: mov eax, edi */ r_eax = r_edi;
    /* 007531eb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007531ee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007531ef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007531f0: ret  */ FN_RET(0x007531a4); r_esp += 4; return;
}

void f_007531f4(void) /* sub_7531F4 */
{
    FN_ENTER(0x007531f4);
    /* 007531f4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007531f5: mov ebx, ecx */ r_ebx = r_ecx;
    /* 007531f7: push dword ptr [ebx + 0x28] */ { u32 v = R32((u32)(r_ebx+0x28u)); r_esp -= 4; W32(r_esp, v); }
    /* 007531fa: push dword ptr [ebx + 0x4c] */ { u32 v = R32((u32)(r_ebx+0x4cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007531fd: call 0x71ba28 */ r_esp -= 4; W32(r_esp, 0x753202u); f_0071ba28();
    /* 00753202: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00753205: mov eax, dword ptr [ebx + 0x48] */ r_eax = R32((u32)(r_ebx+0x48u));
    /* 00753208: movsx edx, byte ptr [eax + 0x61] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax+0x61u));
    /* 0075320c: mov edx, dword ptr [eax + edx*4 + 0x64] */ r_edx = R32((u32)(r_eax+r_edx*4+0x64u));
    /* 00753210: movsx eax, byte ptr [ebx + 0x1d] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x1du));
    /* 00753214: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00753216: je 0x753238 */ if (fZ) goto L_00753238;
L_00753218:; BB(0x00753218);
    /* 00753218: mov byte ptr [ebx + 0x1d], dl */ W8((u32)(r_ebx+0x1du), (u8)r_edx);
    /* 0075321b: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075321e: je 0x75323a */ if (fZ) goto L_0075323a;
L_00753220:; BB(0x00753220);
    /* 00753220: add edx, 0x27 */ {  u32 a = r_edx; u32 b = 0x27u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00753223: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00753224: call 0x7930b4 */ r_esp -= 4; W32(r_esp, 0x753229u); f_007930b4();
    /* 00753229: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075322a: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075322f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753230: mov ecx, dword ptr [ebx + 0x4c] */ r_ecx = R32((u32)(r_ebx+0x4cu));
    /* 00753233: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x753238u); f_0073ae38();
L_00753238:; BB(0x00753238);
    /* 00753238: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00753239: ret  */ FN_RET(0x007531f4); r_esp += 4; return;
L_0075323a:; BB(0x0075323a);
    /* 0075323a: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 0075323f: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 00753244: mov ecx, dword ptr [ebx + 0x4c] */ r_ecx = R32((u32)(r_ebx+0x4cu));
    /* 00753247: call 0x73ae38 */ r_esp -= 4; W32(r_esp, 0x75324cu); f_0073ae38();
    /* 0075324c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075324d: ret  */ FN_RET(0x007531f4); r_esp += 4; return;
}

void f_00753250(void) /* sub_753250 */
{
    FN_ENTER(0x00753250);
    /* 00753250: mov dword ptr [0xa9ac44], 0x3f800000 */ W32((u32)(0xa9ac44u), 0x3f800000u);
    /* 0075325a: mov dword ptr [0xa9ac48], 0x41000000 */ W32((u32)(0xa9ac48u), 0x41000000u);
    /* 00753264: mov dword ptr [0xa9ac4c], 0x3fc00000 */ W32((u32)(0xa9ac4cu), 0x3fc00000u);
    /* 0075326e: ret  */ FN_RET(0x00753250); r_esp += 4; return;
}

void f_00753270(void) /* sub_753270 */
{
    FN_ENTER(0x00753270);
    /* 00753270: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00753271: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00753273: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753275: call 0x753294 */ r_esp -= 4; W32(r_esp, 0x75327au); f_00753294();
    /* 0075327a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0075327e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00753280: jne 0x753286 */ if (!fZ) goto L_00753286;
L_00753282:; BB(0x00753282);
    /* 00753282: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00753283: ret 4 */ FN_RET(0x00753270); r_esp += 8; return;
L_00753286:; BB(0x00753286);
    /* 00753286: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00753287: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x75328cu); f_005c2f74();
    /* 0075328c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075328d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075328e: ret 4 */ FN_RET(0x00753270); r_esp += 8; return;
}

void f_00753294(void) /* sub_753294 */
{
    FN_ENTER(0x00753294);
    /* 00753294: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00753295: mov ebp, esp */ r_ebp = r_esp;
    /* 00753297: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00753299: push 0x8f2dcc */ { u32 v = 0x8f2dccu; r_esp -= 4; W32(r_esp, v); }
    /* 0075329e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 007532a4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007532a5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 007532ac: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 007532af: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 007532b2: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 007532b5: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 007532b8: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 007532bb: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 007532be: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 007532c5: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007532c8: mov dword ptr [eax], 0xb42538 */ W32((u32)(r_eax), 0xb42538u);
    /* 007532ce: call 0x7917b8 */ r_esp -= 4; W32(r_esp, 0x7532d3u); f_007917b8();
    /* 007532d3: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 007532d6: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007532d9: je 0x753300 */ if (fZ) goto L_00753300;
L_007532db:; BB(0x007532db);
    /* 007532db: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007532dd: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x7532e2u); f_00791748();
    /* 007532e2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_007532e3:; BB(0x007532e3);
    /* 007532e3: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007532ea: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007532ed: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x7532f2u); f_00710c28();
    /* 007532f2: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007532f5: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007532fc: mov esp, ebp */ r_esp = r_ebp;
    /* 007532fe: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007532ff: ret  */ FN_RET(0x00753294); r_esp += 4; return;
L_00753300:; BB(0x00753300);
    /* 00753300: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00753302: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x753307u); f_00791748();
    /* 00753307: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753308: jmp 0x7532e3 */ goto L_007532e3;
}

void f_0075330c(void) /* sub_75330C */
{
    FN_ENTER(0x0075330c);
    /* 0075330c: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075330d: mov ebp, esp */ r_ebp = r_esp;
    /* 0075330f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00753311: push 0x8f2de8 */ { u32 v = 0x8f2de8u; r_esp -= 4; W32(r_esp, v); }
    /* 00753316: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0075331c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075331d: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00753324: sub esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00753327: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 0075332a: mov dword ptr [ebp - 0x28], edi */ W32((u32)(r_ebp+0xffffffd8u), r_edi);
    /* 0075332d: mov dword ptr [ebp - 0x24], esi */ W32((u32)(r_ebp+0xffffffdcu), r_esi);
    /* 00753330: mov dword ptr [ebp - 0x20], ebx */ W32((u32)(r_ebp+0xffffffe0u), r_ebx);
    /* 00753333: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 00753336: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00753339: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0075333c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075333d: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00753340: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00753343: movsx eax, word ptr [ebp + 0x10] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x10u));
    /* 00753347: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0075334a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075334b: push 0x9f44ec */ { u32 v = 0x9f44ecu; r_esp -= 4; W32(r_esp, v); }
    /* 00753350: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x753355u); f_00710d30();
    /* 00753355: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0075335c: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0075335f: mov ebx, dword ptr [ebp - 0x14] */ r_ebx = R32((u32)(r_ebp+0xffffffecu));
    /* 00753362: mov dword ptr [ecx], 0xb42538 */ W32((u32)(r_ecx), 0xb42538u);
    /* 00753368: mov eax, dword ptr [0x9f44e8] */ r_eax = R32((u32)(0x9f44e8u));
    /* 0075336d: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 00753370: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 00753372: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 00753375: mov esi, dword ptr [ebx + 4] */ r_esi = R32((u32)(r_ebx+0x4u));
    /* 00753378: mov dword ptr [ecx + 0x34], esi */ W32((u32)(r_ecx+0x34u), r_esi);
    /* 0075337b: call 0x710f64 */ r_esp -= 4; W32(r_esp, 0x753380u); f_00710f64();
    /* 00753380: mov ebx, dword ptr [ebp - 0x2c] */ r_ebx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00753383: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 00753386: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00753389: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 0075338c: mov word ptr [ebx + 0x20], ax */ W16((u32)(r_ebx+0x20u), (u16)r_eax);
    /* 00753390: mov dword ptr [ebx + 0x70], edx */ W32((u32)(r_ebx+0x70u), r_edx);
    /* 00753393: mov byte ptr [ebx + 0x60], 0 */ W8((u32)(r_ebx+0x60u), 0x0u);
    /* 00753397: mov byte ptr [ebx + 0x61], 1 */ W8((u32)(r_ebx+0x61u), 0x1u);
    /* 0075339b: add word ptr [ebx + 0x62], 1 */ { u32 ad = (u32)(r_ebx+0x62u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r);  }
    /* 007533a0: call 0x5dc1e0 */ r_esp -= 4; W32(r_esp, 0x7533a5u); f_005dc1e0();
    /* 007533a5: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 007533a8: lea eax, [ebp - 0x3c] */ r_eax = (u32)(r_ebp+0xffffffc4u);
    /* 007533ab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007533ac: mov ecx, dword ptr [edx + 0x70] */ r_ecx = R32((u32)(r_edx+0x70u));
    /* 007533af: call 0x5d4108 */ r_esp -= 4; W32(r_esp, 0x7533b4u); f_005d4108();
    /* 007533b4: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_007533b6:; BB(0x007533b6);
    /* 007533b6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007533b7: lea ecx, [ebp - 0x3c] */ r_ecx = (u32)(r_ebp+0xffffffc4u);
    /* 007533ba: call 0x5dbc08 */ r_esp -= 4; W32(r_esp, 0x7533bfu); f_005dbc08();
    /* 007533bf: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 007533c2: movsx edx, byte ptr [ebx + 0x973e84] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ebx+0x973e84u));
    /* 007533c9: mov dword ptr [ecx + edx*4 + 0x64], eax */ W32((u32)(r_ecx+r_edx*4+0x64u), r_eax);
    /* 007533cd: mov esi, dword ptr [ecx + 0x28] */ r_esi = R32((u32)(r_ecx+0x28u));
    /* 007533d0: mov edx, dword ptr [esi + ebx*4 + 4] */ r_edx = R32((u32)(r_esi+r_ebx*4+0x4u));
    /* 007533d4: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007533d7: je 0x753414 */ if (fZ) goto L_00753414;
L_007533d9:; BB(0x007533d9);
    /* 007533d9: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 007533dc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007533dd: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007533df: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007533e0: call 0x70ff48 */ r_esp -= 4; W32(r_esp, 0x7533e5u); f_0070ff48();
    /* 007533e5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_007533e8:; BB(0x007533e8);
    /* 007533e8: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007533eb: cmp ebx, 3 */ {  u32 a = r_ebx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007533ee: jl 0x7533b6 */ if ((fS!=fO)) goto L_007533b6;
L_007533f0:; BB(0x007533f0);
    /* 007533f0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007533f2: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x7533f7u); f_00791748();
    /* 007533f7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007533f8: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 007533fb: mov edi, dword ptr [ebp - 0x28] */ r_edi = R32((u32)(r_ebp+0xffffffd8u));
    /* 007533fe: mov esi, dword ptr [ebp - 0x24] */ r_esi = R32((u32)(r_ebp+0xffffffdcu));
    /* 00753401: mov ebx, dword ptr [ebp - 0x20] */ r_ebx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00753404: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00753407: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0075340e: mov esp, ebp */ r_esp = r_ebp;
    /* 00753410: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00753411: ret 0xc */ FN_RET(0x0075330c); r_esp += 16; return;
L_00753414:; BB(0x00753414);
    /* 00753414: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00753416: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753417: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753418: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00753419: call 0x70ff48 */ r_esp -= 4; W32(r_esp, 0x75341eu); f_0070ff48();
    /* 0075341e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00753421: jmp 0x7533e8 */ goto L_007533e8;
}

void f_00753424(void) /* sub_753424 */
{
    FN_ENTER(0x00753424);
    /* 00753424: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00753425: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00753426: mov esi, ecx */ r_esi = r_ecx;
    /* 00753428: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0075342c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075342d: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x753432u); f_00719140();
    /* 00753432: mov edi, eax */ r_edi = r_eax;
    /* 00753434: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00753437: movzx edx, byte ptr [esi + 0x60] */ r_edx = (u32)R8((u32)(r_esi+0x60u));
    /* 0075343b: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075343e: jne 0x75348f */ if (!fZ) goto L_0075348f;
L_00753440:; BB(0x00753440);
    /* 00753440: mov ecx, esi */ r_ecx = r_esi;
    /* 00753442: call 0x7534ac */ r_esp -= 4; W32(r_esp, 0x753447u); f_007534ac();
    /* 00753447: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 0075344c: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00753452: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753453: lea edi, [edi + edi*4] */ r_edi = (u32)(r_edi+r_edi*4);
    /* 00753456: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00753458: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0075345a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0075345c: lea edi, [edi + edi + 0xaae75c] */ r_edi = (u32)(r_edi+r_edi+0xaae75cu);
    /* 00753463: mov ecx, edi */ r_ecx = r_edi;
    /* 00753465: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75346au); f_007c1160();
    /* 0075346a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075346c: je 0x753475 */ if (fZ) goto L_00753475;
L_0075346e:; BB(0x0075346e);
    /* 0075346e: mov ecx, esi */ r_ecx = r_esi;
    /* 00753470: call 0x743798 */ r_esp -= 4; W32(r_esp, 0x753475u); f_00743798();
L_00753475:; BB(0x00753475);
    /* 00753475: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 0075347a: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075347c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075347d: mov ecx, edi */ r_ecx = r_edi;
    /* 0075347f: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x753484u); f_007c1160();
    /* 00753484: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00753486: je 0x75348f */ if (fZ) goto L_0075348f;
L_00753488:; BB(0x00753488);
    /* 00753488: mov ecx, esi */ r_ecx = r_esi;
    /* 0075348a: call 0x74943c */ r_esp -= 4; W32(r_esp, 0x75348fu); f_0074943c();
L_0075348f:; BB(0x0075348f);
    /* 0075348f: mov ecx, esi */ r_ecx = r_esi;
    /* 00753491: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x753496u); f_00710db4();
    /* 00753496: lea eax, [esi + 0x24] */ r_eax = (u32)(r_esi+0x24u);
    /* 00753499: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075349a: mov ecx, esi */ r_ecx = r_esi;
    /* 0075349c: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x7534a1u); f_0072a5ec();
    /* 007534a1: add word ptr [esi + 0x62], 1 */ { u32 ad = (u32)(r_esi+0x62u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 007534a6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007534a7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007534a8: ret  */ FN_RET(0x00753424); r_esp += 4; return;
}

void f_00753425(void)
{
    FN_ENTER(0x00753425);
    /* 00753425: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00753426: mov esi, ecx */ r_esi = r_ecx;
    /* 00753428: movsx eax, word ptr [esi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_esi+0x20u));
    /* 0075342c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075342d: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x753432u); f_00719140();
    /* 00753432: mov edi, eax */ r_edi = r_eax;
    /* 00753434: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00753437: movzx edx, byte ptr [esi + 0x60] */ r_edx = (u32)R8((u32)(r_esi+0x60u));
    /* 0075343b: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0075343e: jne 0x75348f */ if (!fZ) goto L_0075348f;
L_00753440:; BB(0x00753440);
    /* 00753440: mov ecx, esi */ r_ecx = r_esi;
    /* 00753442: call 0x7534ac */ r_esp -= 4; W32(r_esp, 0x753447u); f_007534ac();
    /* 00753447: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 0075344c: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00753452: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753453: lea edi, [edi + edi*4] */ r_edi = (u32)(r_edi+r_edi*4);
    /* 00753456: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00753458: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0075345a: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0075345c: lea edi, [edi + edi + 0xaae75c] */ r_edi = (u32)(r_edi+r_edi+0xaae75cu);
    /* 00753463: mov ecx, edi */ r_ecx = r_edi;
    /* 00753465: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x75346au); f_007c1160();
    /* 0075346a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075346c: je 0x753475 */ if (fZ) goto L_00753475;
L_0075346e:; BB(0x0075346e);
    /* 0075346e: mov ecx, esi */ r_ecx = r_esi;
    /* 00753470: call 0x743798 */ r_esp -= 4; W32(r_esp, 0x753475u); f_00743798();
L_00753475:; BB(0x00753475);
    /* 00753475: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 0075347a: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0075347c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075347d: mov ecx, edi */ r_ecx = r_edi;
    /* 0075347f: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x753484u); f_007c1160();
    /* 00753484: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00753486: je 0x75348f */ if (fZ) goto L_0075348f;
L_00753488:; BB(0x00753488);
    /* 00753488: mov ecx, esi */ r_ecx = r_esi;
    /* 0075348a: call 0x74943c */ r_esp -= 4; W32(r_esp, 0x75348fu); f_0074943c();
L_0075348f:; BB(0x0075348f);
    /* 0075348f: mov ecx, esi */ r_ecx = r_esi;
    /* 00753491: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x753496u); f_00710db4();
    /* 00753496: lea eax, [esi + 0x24] */ r_eax = (u32)(r_esi+0x24u);
    /* 00753499: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075349a: mov ecx, esi */ r_ecx = r_esi;
    /* 0075349c: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x7534a1u); f_0072a5ec();
    /* 007534a1: add word ptr [esi + 0x62], 1 */ { u32 ad = (u32)(r_esi+0x62u);  u32 a = R16(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffffu; W16(ad, r); fZ = (r == 0); fS = ((r >> 15) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 15) & 1; fC = (r < a); }
    /* 007534a6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007534a7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007534a8: ret  */ FN_RET(0x00753425); r_esp += 4; return;
}

void f_007534ac(void) /* sub_7534AC */
{
    FN_ENTER(0x007534ac);
    /* 007534ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007534ad: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 007534ae: mov edi, ecx */ r_edi = r_ecx;
    /* 007534b0: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 007534b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007534b5: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x7534bau); f_00719140();
    /* 007534ba: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007534bb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 007534bd: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007534bf: lea ebx, [eax + eax*4] */ r_ebx = (u32)(r_eax+r_eax*4);
    /* 007534c2: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007534c4: mov eax, dword ptr [0xa0f670] */ r_eax = R32((u32)(0xa0f670u));
    /* 007534c9: or eax, dword ptr [0xa0f66c] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f66cu)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007534cf: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007534d1: add ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007534d3: or eax, dword ptr [0xa0f664] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f664u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007534d9: or eax, dword ptr [0xa0f668] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f668u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007534df: lea ebx, [ebx + ebx + 0xaae75c] */ r_ebx = (u32)(r_ebx+r_ebx+0xaae75cu);
    /* 007534e6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007534e7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007534e9: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x7534eeu); f_007c09fc();
    /* 007534ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007534f0: jne 0x7534f5 */ if (!fZ) goto L_007534f5;
L_007534f2:; BB(0x007534f2);
    /* 007534f2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007534f3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007534f4: ret  */ FN_RET(0x007534ac); r_esp += 4; return;
L_007534f5:; BB(0x007534f5);
    /* 007534f5: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 007534f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007534f8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007534f9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007534fa: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 007534ff: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x753504u); f_00814298();
    /* 00753504: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00753507: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00753509: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075350b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075350d: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 00753513: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x753518u); f_007c09fc();
    /* 00753518: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075351a: je 0x753520 */ if (fZ) goto L_00753520;
L_0075351c:; BB(0x0075351c);
    /* 0075351c: add byte ptr [edi + 0x61], 1 */ { u32 ad = (u32)(r_edi+0x61u);  u32 a = R8(ad); u32 b = 0x1u; u32 r = (a + b) & 0xffu; W8(ad, r);  }
L_00753520:; BB(0x00753520);
    /* 00753520: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00753522: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00753524: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753526: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 0075352c: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x753531u); f_007c09fc();
    /* 00753531: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00753533: jne 0x75353b */ if (!fZ) goto L_0075353b;
L_00753535:; BB(0x00753535);
    /* 00753535: movsx eax, byte ptr [edi + 0x61] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x61u));
    /* 00753539: jmp 0x753545 */ goto L_00753545;
L_0075353b:; BB(0x0075353b);
    /* 0075353b: movsx eax, byte ptr [edi + 0x61] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x61u));
    /* 0075353f: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00753542: mov byte ptr [edi + 0x61], al */ W8((u32)(r_edi+0x61u), (u8)r_eax);
L_00753545:; BB(0x00753545);
    /* 00753545: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00753548: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 0075354a: jge 0x753555 */ if ((fS==fO)) goto L_00753555;
L_0075354c:; BB(0x0075354c);
    /* 0075354c: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0075354f: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00753552: mov byte ptr [edi + 0x61], al */ W8((u32)(r_edi+0x61u), (u8)r_eax);
L_00753555:; BB(0x00753555);
    /* 00753555: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00753558: jl 0x753560 */ if ((fS!=fO)) goto L_00753560;
L_0075355a:; BB(0x0075355a);
    /* 0075355a: add eax, -3 */ {  u32 a = r_eax; u32 b = 0xfffffffdu; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0075355d: mov byte ptr [edi + 0x61], al */ W8((u32)(r_edi+0x61u), (u8)r_eax);
L_00753560:; BB(0x00753560);
    /* 00753560: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00753561: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753562: ret  */ FN_RET(0x007534ac); r_esp += 4; return;
}

void f_00753564(void) /* sub_753564 */
{
    FN_ENTER(0x00753564);
    /* 00753564: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00753565: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00753566: mov esi, ecx */ r_esi = r_ecx;
    /* 00753568: mov ecx, esi */ r_ecx = r_esi;
    /* 0075356a: call 0x712644 */ r_esp -= 4; W32(r_esp, 0x75356fu); f_00712644();
    /* 0075356f: mov edi, eax */ r_edi = r_eax;
    /* 00753571: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00753572: mov ecx, esi */ r_ecx = r_esi;
    /* 00753574: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x753579u); f_00710f80();
    /* 00753579: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0075357a: lea edx, [esi + 0x24] */ r_edx = (u32)(r_esi+0x24u);
    /* 0075357d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075357e: mov ecx, esi */ r_ecx = r_esi;
    /* 00753580: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x753585u); f_0072a648();
    /* 00753585: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00753586: mov ecx, esi */ r_ecx = r_esi;
    /* 00753588: call 0x753590 */ r_esp -= 4; W32(r_esp, 0x75358du); f_00753590();
    /* 0075358d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075358e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075358f: ret  */ FN_RET(0x00753564); r_esp += 4; return;
}

void f_00753590(void) /* sub_753590 */
{
    FN_ENTER(0x00753590);
    /* 00753590: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00753591: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00753594: mov esi, ecx */ r_esi = r_ecx;
    /* 00753596: mov ecx, esi */ r_ecx = r_esi;
    /* 00753598: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 0075359b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075359c: call 0x7535c0 */ r_esp -= 4; W32(r_esp, 0x7535a1u); f_007535c0();
    /* 007535a1: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 007535a4: movsx esi, word ptr [esi + 0x62] */ r_esi = (u32)(i32)(i16)R16((u32)(r_esi+0x62u));
    /* 007535a8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007535a9: push 0x3f4ccccd */ { u32 v = 0x3f4ccccdu; r_esp -= 4; W32(r_esp, v); }
    /* 007535ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007535af: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 007535b3: call 0x74a050 */ r_esp -= 4; W32(r_esp, 0x7535b8u); f_0074a050();
    /* 007535b8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007535bb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007535bc: ret 4 */ FN_RET(0x00753590); r_esp += 8; return;
}

void f_007535c0(void) /* sub_7535C0 */
{
    FN_ENTER(0x007535c0);
    /* 007535c0: movzx eax, byte ptr [ecx + 0x61] */ r_eax = (u32)R8((u32)(r_ecx+0x61u));
    /* 007535c4: movzx eax, byte ptr [eax + 0x973e88] */ r_eax = (u32)R8((u32)(r_eax+0x973e88u));
    /* 007535cb: mov edx, dword ptr [ecx + 0x28] */ r_edx = R32((u32)(r_ecx+0x28u));
    /* 007535ce: push dword ptr [edx + eax*4] */ { u32 v = R32((u32)(r_edx+r_eax*4)); r_esp -= 4; W32(r_esp, v); }
    /* 007535d1: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 007535d5: call 0x749d74 */ r_esp -= 4; W32(r_esp, 0x7535dau); f_00749d74();
    /* 007535da: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007535dd: ret 4 */ FN_RET(0x007535c0); r_esp += 8; return;
}

void f_007535e0(void) /* sub_7535E0 */
{
    FN_ENTER(0x007535e0);
    /* 007535e0: mov dword ptr [0xa9ac54], 0x3f800000 */ W32((u32)(0xa9ac54u), 0x3f800000u);
    /* 007535ea: mov dword ptr [0xa9ac58], 0x41000000 */ W32((u32)(0xa9ac58u), 0x41000000u);
    /* 007535f4: mov dword ptr [0xa9ac5c], 0x3fc00000 */ W32((u32)(0xa9ac5cu), 0x3fc00000u);
    /* 007535fe: ret  */ FN_RET(0x007535e0); r_esp += 4; return;
}

void f_00753600(void) /* sub_753600 */
{
    FN_ENTER(0x00753600);
    /* 00753600: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00753601: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00753603: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753605: call 0x753624 */ r_esp -= 4; W32(r_esp, 0x75360au); f_00753624();
    /* 0075360a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 0075360e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00753610: jne 0x753616 */ if (!fZ) goto L_00753616;
L_00753612:; BB(0x00753612);
    /* 00753612: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00753613: ret 4 */ FN_RET(0x00753600); r_esp += 8; return;
L_00753616:; BB(0x00753616);
    /* 00753616: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00753617: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x75361cu); f_005c2f74();
    /* 0075361c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075361d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0075361e: ret 4 */ FN_RET(0x00753600); r_esp += 8; return;
}

void f_00753624(void) /* sub_753624 */
{
    FN_ENTER(0x00753624);
    /* 00753624: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00753625: mov ebp, esp */ r_ebp = r_esp;
    /* 00753627: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00753629: push 0x8f2e04 */ { u32 v = 0x8f2e04u; r_esp -= 4; W32(r_esp, v); }
    /* 0075362e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00753634: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753635: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075363c: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075363f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00753642: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00753645: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00753648: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 0075364b: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 0075364e: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00753655: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00753658: mov ecx, dword ptr [eax + 0x38] */ r_ecx = R32((u32)(r_eax+0x38u));
    /* 0075365b: mov dword ptr [eax], 0xb42598 */ W32((u32)(r_eax), 0xb42598u);
    /* 00753661: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00753663: je 0x753674 */ if (fZ) goto L_00753674;
L_00753665:; BB(0x00753665);
    /* 00753665: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75366au); f_0073d160();
    /* 0075366a: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 0075366d: mov dword ptr [eax + 0x38], 0 */ W32((u32)(r_eax+0x38u), 0x0u);
L_00753674:; BB(0x00753674);
    /* 00753674: mov ecx, dword ptr [eax + 0x34] */ r_ecx = R32((u32)(r_eax+0x34u));
    /* 00753677: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00753679: je 0x75368a */ if (fZ) goto L_0075368a;
L_0075367b:; BB(0x0075367b);
    /* 0075367b: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x753680u); f_007127b0();
    /* 00753680: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00753683: mov dword ptr [eax + 0x34], 0 */ W32((u32)(r_eax+0x34u), 0x0u);
L_0075368a:; BB(0x0075368a);
    /* 0075368a: mov ecx, dword ptr [eax + 0x30] */ r_ecx = R32((u32)(r_eax+0x30u));
    /* 0075368d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075368f: je 0x7536a0 */ if (fZ) goto L_007536a0;
L_00753691:; BB(0x00753691);
    /* 00753691: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x753696u); f_007127b0();
    /* 00753696: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00753699: mov dword ptr [eax + 0x30], 0 */ W32((u32)(r_eax+0x30u), 0x0u);
L_007536a0:; BB(0x007536a0);
    /* 007536a0: mov ecx, dword ptr [eax + 0x2c] */ r_ecx = R32((u32)(r_eax+0x2cu));
    /* 007536a3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007536a5: je 0x7536b6 */ if (fZ) goto L_007536b6;
L_007536a7:; BB(0x007536a7);
    /* 007536a7: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x7536acu); f_007127b0();
    /* 007536ac: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 007536af: mov dword ptr [eax + 0x2c], 0 */ W32((u32)(r_eax+0x2cu), 0x0u);
L_007536b6:; BB(0x007536b6);
    /* 007536b6: call 0x792220 */ r_esp -= 4; W32(r_esp, 0x7536bbu); f_00792220();
    /* 007536bb: call 0x792734 */ r_esp -= 4; W32(r_esp, 0x7536c0u); f_00792734();
    /* 007536c0: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 007536c3: mov eax, dword ptr [ecx + 0x24] */ r_eax = R32((u32)(r_ecx+0x24u));
    /* 007536c6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007536c8: je 0x7536d8 */ if (fZ) goto L_007536d8;
L_007536ca:; BB(0x007536ca);
    /* 007536ca: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 007536d0: call 0x7f26d4 */ r_esp -= 4; W32(r_esp, 0x7536d5u); f_007f26d4();
    /* 007536d5: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
L_007536d8:; BB(0x007536d8);
    /* 007536d8: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 007536df: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x7536e4u); f_008171e8();
    /* 007536e4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 007536e7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 007536ee: mov esp, ebp */ r_esp = r_ebp;
    /* 007536f0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007536f1: ret  */ FN_RET(0x00753624); r_esp += 4; return;
}

void f_007536f4(void) /* sub_7536F4 */
{
    FN_ENTER(0x007536f4);
    /* 007536f4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007536f5: mov ebp, esp */ r_ebp = r_esp;
    /* 007536f7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 007536f9: push 0x8f2e20 */ { u32 v = 0x8f2e20u; r_esp -= 4; W32(r_esp, v); }
    /* 007536fe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00753704: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753705: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0075370c: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0075370f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00753712: mov dword ptr [ebp - 0x24], edi */ W32((u32)(r_ebp+0xffffffdcu), r_edi);
    /* 00753715: mov dword ptr [ebp - 0x20], esi */ W32((u32)(r_ebp+0xffffffe0u), r_esi);
    /* 00753718: mov dword ptr [ebp - 0x1c], ebx */ W32((u32)(r_ebp+0xffffffe4u), r_ebx);
    /* 0075371b: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0075371e: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00753721: mov dword ptr [ebp - 0x28], ecx */ W32((u32)(r_ebp+0xffffffd8u), r_ecx);
    /* 00753724: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00753725: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 00753728: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0075372b: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x753730u); f_008193cc();
    /* 00753730: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00753737: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0075373a: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0075373d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00753740: mov dword ptr [ecx + 0x28], eax */ W32((u32)(r_ecx+0x28u), r_eax);
    /* 00753743: mov dword ptr [ecx + 0x20], edx */ W32((u32)(r_ecx+0x20u), r_edx);
    /* 00753746: mov dword ptr [ecx], 0xb42598 */ W32((u32)(r_ecx), 0xb42598u);
    /* 0075374c: call 0x75377c */ r_esp -= 4; W32(r_esp, 0x753751u); f_0075377c();
    /* 00753751: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00753754: mov dword ptr [ecx + 0x2c], eax */ W32((u32)(r_ecx+0x2cu), r_eax);
    /* 00753757: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00753759: mov dword ptr [ecx + 0x30], edx */ W32((u32)(r_ecx+0x30u), r_edx);
    /* 0075375c: mov dword ptr [ecx + 0x34], edx */ W32((u32)(r_ecx+0x34u), r_edx);
    /* 0075375f: mov dword ptr [ecx + 0x38], edx */ W32((u32)(r_ecx+0x38u), r_edx);
    /* 00753762: mov byte ptr [ecx + 0x1c], dl */ W8((u32)(r_ecx+0x1cu), (u8)r_edx);
    /* 00753765: mov dword ptr [ecx + 0x24], edx */ W32((u32)(r_ecx+0x24u), r_edx);
    /* 00753768: mov eax, ecx */ r_eax = r_ecx;
    /* 0075376a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0075376d: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00753774: mov esp, ebp */ r_esp = r_ebp;
    /* 00753776: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00753777: ret 8 */ FN_RET(0x007536f4); r_esp += 12; return;
}

void f_0075377c(void) /* sub_75377C */
{
    FN_ENTER(0x0075377c);
    /* 0075377c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0075377d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0075377e: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00753780: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 00753782: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x753787u); f_0073ec50();
    /* 00753787: mov esi, eax */ r_esi = r_eax;
    /* 00753789: push 0x3d */ { u32 v = 0x3du; r_esp -= 4; W32(r_esp, v); }
    /* 0075378b: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753790u); f_0079317c();
    /* 00753790: push dword ptr [ebp + 0x20] */ { u32 v = R32((u32)(r_ebp+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00753793: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753794: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 00753796: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00753797: call 0x73566c */ r_esp -= 4; W32(r_esp, 0x75379cu); f_0073566c();
    /* 0075379c: mov esi, eax */ r_esi = r_eax;
    /* 0075379e: push 0x79 */ { u32 v = 0x79u; r_esp -= 4; W32(r_esp, v); }
    /* 007537a0: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x7537a5u); f_0079317c();
    /* 007537a5: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007537a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007537aa: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007537ac: mov ecx, esi */ r_ecx = r_esi;
    /* 007537ae: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007537af: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7537b4u); f_00735c90();
    /* 007537b4: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007537b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007537b8: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7537bdu); f_00792fe8();
    /* 007537bd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007537c0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007537c2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007537c4: mov ecx, esi */ r_ecx = r_esi;
    /* 007537c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007537c7: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7537ccu); f_00735c90();
    /* 007537cc: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 007537ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007537d0: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7537d5u); f_00792fe8();
    /* 007537d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007537d8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007537da: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007537dc: mov ecx, esi */ r_ecx = r_esi;
    /* 007537de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007537df: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7537e4u); f_00735c90();
    /* 007537e4: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 007537e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007537e8: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7537edu); f_00792fe8();
    /* 007537ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007537f0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007537f2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007537f4: mov ecx, esi */ r_ecx = r_esi;
    /* 007537f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007537f7: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7537fcu); f_00735c90();
    /* 007537fc: call 0x842458 */ r_esp -= 4; W32(r_esp, 0x753801u); f_00842458();
    /* 00753801: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00753803: jne 0x75381f */ if (!fZ) goto L_0075381f;
L_00753805:; BB(0x00753805);
    /* 00753805: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00753807: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00753809: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x75380eu); f_00792fe8();
    /* 0075380e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00753811: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00753813: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00753815: mov ecx, esi */ r_ecx = r_esi;
    /* 00753817: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753818: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75381du); f_00735ee0();
    /* 0075381d: jmp 0x753837 */ goto L_00753837;
L_0075381f:; BB(0x0075381f);
    /* 0075381f: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00753821: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00753823: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x753828u); f_00792fe8();
    /* 00753828: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075382b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0075382d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075382f: mov ecx, esi */ r_ecx = r_esi;
    /* 00753831: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753832: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x753837u); f_00735c90();
L_00753837:; BB(0x00753837);
    /* 00753837: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00753839: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075383a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075383b: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x753840u); f_00792fe8();
    /* 00753840: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00753843: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00753845: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00753847: mov ecx, esi */ r_ecx = r_esi;
    /* 00753849: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075384a: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75384fu); f_00735c90();
    /* 0075384f: push 0x7b */ { u32 v = 0x7bu; r_esp -= 4; W32(r_esp, v); }
    /* 00753851: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753856u); f_0079317c();
    /* 00753856: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753857: mov edx, 6 */ r_edx = 0x6u;
    /* 0075385c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075385d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075385e: mov ecx, esi */ r_ecx = r_esi;
    /* 00753860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753861: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x753866u); f_00735c90();
    /* 00753866: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00753868: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75386du); f_0079317c();
    /* 0075386d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075386e: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00753870: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00753872: mov ecx, esi */ r_ecx = r_esi;
    /* 00753874: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753875: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75387au); f_00735c90();
    /* 0075387a: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 0075387f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753884u); f_0079317c();
    /* 00753884: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753885: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00753887: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00753889: mov ecx, esi */ r_ecx = r_esi;
    /* 0075388b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075388c: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x753891u); f_00735c90();
    /* 00753891: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 00753896: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75389bu); f_0079317c();
    /* 0075389b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075389c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0075389e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007538a0: mov ecx, esi */ r_ecx = r_esi;
    /* 007538a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007538a3: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7538a8u); f_00735c90();
    /* 007538a8: push 0x43430000 */ { u32 v = 0x43430000u; r_esp -= 4; W32(r_esp, v); }
    /* 007538ad: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 007538b4: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007538ba: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 007538c1: mov ecx, esi */ r_ecx = r_esi;
    /* 007538c3: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x7538c8u); f_00736138();
    /* 007538c8: mov ecx, esi */ r_ecx = r_esi;
    /* 007538ca: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x7538cfu); f_00736458();
    /* 007538cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007538d1: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 007538d4: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x7538d9u); f_007336fc();
    /* 007538d9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007538da: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007538dd: mov ecx, esi */ r_ecx = r_esi;
    /* 007538df: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7538e4u); f_00712624();
    /* 007538e4: mov eax, esi */ r_eax = r_esi;
    /* 007538e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007538e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007538e8: ret  */ FN_RET(0x0075377c); r_esp += 4; return;
}

void f_007537c0(void)
{
    FN_ENTER(0x007537c0);
    /* 007537c0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007537c2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007537c4: mov ecx, esi */ r_ecx = r_esi;
    /* 007537c6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007537c7: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7537ccu); f_00735c90();
    /* 007537cc: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 007537ce: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007537d0: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7537d5u); f_00792fe8();
    /* 007537d5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007537d8: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007537da: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007537dc: mov ecx, esi */ r_ecx = r_esi;
    /* 007537de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007537df: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7537e4u); f_00735c90();
    /* 007537e4: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 007537e6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007537e8: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x7537edu); f_00792fe8();
    /* 007537ed: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007537f0: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 007537f2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007537f4: mov ecx, esi */ r_ecx = r_esi;
    /* 007537f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007537f7: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7537fcu); f_00735c90();
    /* 007537fc: call 0x842458 */ r_esp -= 4; W32(r_esp, 0x753801u); f_00842458();
    /* 00753801: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00753803: jne 0x75381f */ if (!fZ) goto L_0075381f;
L_00753805:; BB(0x00753805);
    /* 00753805: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00753807: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00753809: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x75380eu); f_00792fe8();
    /* 0075380e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00753811: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00753813: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00753815: mov ecx, esi */ r_ecx = r_esi;
    /* 00753817: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753818: call 0x735ee0 */ r_esp -= 4; W32(r_esp, 0x75381du); f_00735ee0();
    /* 0075381d: jmp 0x753837 */ goto L_00753837;
L_0075381f:; BB(0x0075381f);
    /* 0075381f: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 00753821: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00753823: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x753828u); f_00792fe8();
    /* 00753828: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0075382b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0075382d: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0075382f: mov ecx, esi */ r_ecx = r_esi;
    /* 00753831: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753832: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x753837u); f_00735c90();
L_00753837:; BB(0x00753837);
    /* 00753837: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00753839: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075383a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075383b: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x753840u); f_00792fe8();
    /* 00753840: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00753843: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00753845: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00753847: mov ecx, esi */ r_ecx = r_esi;
    /* 00753849: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075384a: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75384fu); f_00735c90();
    /* 0075384f: push 0x7b */ { u32 v = 0x7bu; r_esp -= 4; W32(r_esp, v); }
    /* 00753851: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753856u); f_0079317c();
    /* 00753856: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753857: mov edx, 6 */ r_edx = 0x6u;
    /* 0075385c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075385d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075385e: mov ecx, esi */ r_ecx = r_esi;
    /* 00753860: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753861: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x753866u); f_00735c90();
    /* 00753866: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00753868: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75386du); f_0079317c();
    /* 0075386d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075386e: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 00753870: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00753872: mov ecx, esi */ r_ecx = r_esi;
    /* 00753874: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753875: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x75387au); f_00735c90();
    /* 0075387a: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 0075387f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753884u); f_0079317c();
    /* 00753884: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753885: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 00753887: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00753889: mov ecx, esi */ r_ecx = r_esi;
    /* 0075388b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0075388c: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x753891u); f_00735c90();
    /* 00753891: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 00753896: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x75389bu); f_0079317c();
    /* 0075389b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0075389c: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0075389e: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 007538a0: mov ecx, esi */ r_ecx = r_esi;
    /* 007538a2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007538a3: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x7538a8u); f_00735c90();
    /* 007538a8: push 0x43430000 */ { u32 v = 0x43430000u; r_esp -= 4; W32(r_esp, v); }
    /* 007538ad: movzx edx, word ptr [esi + 0x84] */ r_edx = (u32)R16((u32)(r_esi+0x84u));
    /* 007538b4: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 007538ba: mov word ptr [esi + 0x84], dx */ W16((u32)(r_esi+0x84u), (u16)r_edx);
    /* 007538c1: mov ecx, esi */ r_ecx = r_esi;
    /* 007538c3: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x7538c8u); f_00736138();
    /* 007538c8: mov ecx, esi */ r_ecx = r_esi;
    /* 007538ca: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x7538cfu); f_00736458();
    /* 007538cf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 007538d1: mov ecx, dword ptr [ebp + 0x28] */ r_ecx = R32((u32)(r_ebp+0x28u));
    /* 007538d4: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x7538d9u); f_007336fc();
    /* 007538d9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007538da: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007538dd: mov ecx, esi */ r_ecx = r_esi;
    /* 007538df: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7538e4u); f_00712624();
    /* 007538e4: mov eax, esi */ r_eax = r_esi;
    /* 007538e6: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007538e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007538e8: ret  */ FN_RET(0x007537c0); r_esp += 4; return;
}

void f_007538ec(void) /* sub_7538EC */
{
    FN_ENTER(0x007538ec);
    /* 007538ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007538ed: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 007538ee: mov edi, ecx */ r_edi = r_ecx;
    /* 007538f0: movsx eax, byte ptr [edi + 0x1c] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edi+0x1cu));
    /* 007538f4: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007538f7: ja 0x753b70 */ if ((!fC&&!fZ)) goto L_00753b70;
L_007538fd:; BB(0x007538fd);
    /* 007538fd: mov eax, dword ptr [eax*4 + 0x973e9c] */ r_eax = R32((u32)(r_eax*4+0x973e9cu));
    /* 00753904: jmp eax */ { u32 t = r_eax; jmp_ind(t); return; }
L_00753b70:; BB(0x00753b70);
    /* 00753b70: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753b71: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753b72: ret  */ FN_RET(0x007538ec); r_esp += 4; return;
}

void f_00753906(void)
{
    FN_ENTER(0x00753906);
    /* 00753906: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 00753909: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0075390b: je 0x753b70 */ if (fZ) goto L_00753b70;
L_00753911:; BB(0x00753911);
    /* 00753911: call 0x73ce50 */ r_esp -= 4; W32(r_esp, 0x753916u); f_0073ce50();
    /* 00753916: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00753918: je 0x753987 */ if (fZ) goto L_00753987;
L_0075391a:; BB(0x0075391a);
    /* 0075391a: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 0075391d: call 0x73d134 */ r_esp -= 4; W32(r_esp, 0x753922u); f_0073d134();
    /* 00753922: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00753924: jne 0x75394d */ if (!fZ) goto L_0075394d;
L_00753926:; BB(0x00753926);
    /* 00753926: call 0x791b50 */ r_esp -= 4; W32(r_esp, 0x75392bu); f_00791b50();
    /* 0075392b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0075392d: je 0x75393b */ if (fZ) goto L_0075393b;
L_0075392f:; BB(0x0075392f);
    /* 0075392f: call 0x791b50 */ r_esp -= 4; W32(r_esp, 0x753934u); f_00791b50();
    /* 00753934: mov ecx, eax */ r_ecx = r_eax;
    /* 00753936: call 0x792c64 */ r_esp -= 4; W32(r_esp, 0x75393bu); f_00792c64();
L_0075393b:; BB(0x0075393b);
    /* 0075393b: mov ecx, dword ptr [0xaab284] */ r_ecx = R32((u32)(0xaab284u));
    /* 00753941: call 0x7f2900 */ r_esp -= 4; W32(r_esp, 0x753946u); f_007f2900();
    /* 00753946: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 0075394a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0075394b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0075394c: ret  */ FN_RET(0x00753906); r_esp += 4; return;
L_0075394d:; BB(0x0075394d);
    /* 0075394d: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 00753950: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x753955u); f_0073d160();
    /* 00753955: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00753958: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
    /* 0075395f: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00753966: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 00753969: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0075396e: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00753975: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00753977: je 0x753980 */ if (fZ) goto L_00753980;
L_00753979:; BB(0x00753979);
    /* 00753979: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0075397b: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x753980u); f_00760acc();
L_00753980:; BB(0x00753980);
    /* 00753980: mov byte ptr [edi + 0x1c], 6 */ W8((u32)(r_edi+0x1cu), 0x6u);
    /* 00753984: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753985: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753986: ret  */ FN_RET(0x00753906); r_esp += 4; return;
L_00753987:; BB(0x00753987);
    /* 00753987: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 0075398a: call 0x73d114 */ r_esp -= 4; W32(r_esp, 0x75398fu); f_0073d114();
    /* 0075398f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00753991: je 0x753b70 */ if (fZ) goto L_00753b70;
L_00753997:; BB(0x00753997);
    /* 00753997: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 0075399a: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x75399fu); f_0073d160();
    /* 0075399f: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 007539a2: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
    /* 007539a9: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 007539b0: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 007539b3: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 007539b8: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 007539bf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007539c1: je 0x7539ca */ if (fZ) goto L_007539ca;
L_007539c3:; BB(0x007539c3);
    /* 007539c3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 007539c5: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x7539cau); f_00760acc();
L_007539ca:; BB(0x007539ca);
    /* 007539ca: mov byte ptr [edi + 0x1c], 6 */ W8((u32)(r_edi+0x1cu), 0x6u);
    /* 007539ce: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007539cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007539d0: ret  */ FN_RET(0x00753906); r_esp += 4; return;
L_00753b70:; BB(0x00753b70);
    /* 00753b70: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753b71: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753b72: ret  */ FN_RET(0x00753906); r_esp += 4; return;
}

void f_007539d1(void)
{
    FN_ENTER(0x007539d1);
    /* 007539d1: call 0x792758 */ r_esp -= 4; W32(r_esp, 0x7539d6u); f_00792758();
    /* 007539d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007539d8: je 0x753b70 */ if (fZ) goto L_00753b70;
L_007539de:; BB(0x007539de);
    /* 007539de: call 0x792734 */ r_esp -= 4; W32(r_esp, 0x7539e3u); f_00792734();
    /* 007539e3: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 007539e7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007539e8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007539e9: ret  */ FN_RET(0x007539d1); r_esp += 4; return;
L_00753b70:; BB(0x00753b70);
    /* 00753b70: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753b71: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753b72: ret  */ FN_RET(0x007539d1); r_esp += 4; return;
}

void f_007539ea(void)
{
    FN_ENTER(0x007539ea);
    /* 007539ea: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 007539ed: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007539ef: je 0x753b70 */ if (fZ) goto L_00753b70;
L_007539f5:; BB(0x007539f5);
    /* 007539f5: movzx eax, word ptr [ecx + 0x84] */ r_eax = (u32)R16((u32)(r_ecx+0x84u));
    /* 007539fc: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007539fe: je 0x753a56 */ if (fZ) goto L_00753a56;
L_00753a00:; BB(0x00753a00);
    /* 00753a00: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x753a05u); f_007365f4();
    /* 00753a05: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00753a07: jne 0x753a40 */ if (!fZ) goto L_00753a40;
L_00753a09:; BB(0x00753a09);
    /* 00753a09: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00753a0c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00753a0d: call 0x73cd8c */ r_esp -= 4; W32(r_esp, 0x753a12u); f_0073cd8c();
    /* 00753a12: push 0x56 */ { u32 v = 0x56u; r_esp -= 4; W32(r_esp, v); }
    /* 00753a14: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00753a16: mov dword ptr [edi + 0x38], eax */ W32((u32)(r_edi+0x38u), r_eax);
    /* 00753a19: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x753a1eu); f_00792fe8();
    /* 00753a1e: mov esi, eax */ r_esi = r_eax;
    /* 00753a20: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 00753a22: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x753a27u); f_0073ec50();
    /* 00753a27: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00753a2a: push 0x43480000 */ { u32 v = 0x43480000u; r_esp -= 4; W32(r_esp, v); }
    /* 00753a2f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753a30: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 00753a33: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00753a34: call 0x73ce70 */ r_esp -= 4; W32(r_esp, 0x753a39u); f_0073ce70();
    /* 00753a39: mov byte ptr [edi + 0x1c], 8 */ W8((u32)(r_edi+0x1cu), 0x8u);
    /* 00753a3d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753a3e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753a3f: ret  */ FN_RET(0x007539ea); r_esp += 4; return;
L_00753a40:; BB(0x00753a40);
    /* 00753a40: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00753a43: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x753a48u); f_007365f4();
    /* 00753a48: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00753a4b: jne 0x753b70 */ if (!fZ) goto L_00753b70;
L_00753a51:; BB(0x00753a51);
    /* 00753a51: jmp 0x753b73 */ goto L_00753b73;
L_00753a56:; BB(0x00753a56);
    /* 00753a56: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00753a58: je 0x753b70 */ if (fZ) goto L_00753b70;
L_00753a5e:; BB(0x00753a5e);
    /* 00753a5e: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 00753a62: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753a63: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753a64: ret  */ FN_RET(0x007539ea); r_esp += 4; return;
L_00753b70:; BB(0x00753b70);
    /* 00753b70: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753b71: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753b72: ret  */ FN_RET(0x007539ea); r_esp += 4; return;
L_00753b73:; BB(0x00753b73);
    /* 00753b73: call 0x792268 */ r_esp -= 4; W32(r_esp, 0x753b78u); f_00792268();
    /* 00753b78: mov byte ptr [edi + 0x1c], 7 */ W8((u32)(r_edi+0x1cu), 0x7u);
    /* 00753b7c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753b7d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753b7e: ret  */ FN_RET(0x007539ea); r_esp += 4; return;
}

void f_00753a65(void)
{
    FN_ENTER(0x00753a65);
    /* 00753a65: call 0x792244 */ r_esp -= 4; W32(r_esp, 0x753a6au); f_00792244();
    /* 00753a6a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00753a6c: je 0x753b70 */ if (fZ) goto L_00753b70;
L_00753a72:; BB(0x00753a72);
    /* 00753a72: call 0x792220 */ r_esp -= 4; W32(r_esp, 0x753a77u); f_00792220();
    /* 00753a77: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 00753a7b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753a7c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753a7d: ret  */ FN_RET(0x00753a65); r_esp += 4; return;
L_00753b70:; BB(0x00753b70);
    /* 00753b70: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753b71: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753b72: ret  */ FN_RET(0x00753a65); r_esp += 4; return;
}

void f_00753a7e(void)
{
    FN_ENTER(0x00753a7e);
    /* 00753a7e: mov ecx, edi */ r_ecx = r_edi;
    /* 00753a80: call 0x753c24 */ r_esp -= 4; W32(r_esp, 0x753a85u); f_00753c24();
    /* 00753a85: mov ecx, edi */ r_ecx = r_edi;
    /* 00753a87: call 0x753c70 */ r_esp -= 4; W32(r_esp, 0x753a8cu); f_00753c70();
    /* 00753a8c: mov eax, dword ptr [edi + 0x34] */ r_eax = R32((u32)(r_edi+0x34u));
    /* 00753a8f: movzx edx, word ptr [eax + 0x84] */ r_edx = (u32)R16((u32)(r_eax+0x84u));
    /* 00753a96: test dl, 4 */ {  u32 a = (u8)r_edx; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00753a99: je 0x753b70 */ if (fZ) goto L_00753b70;
L_00753a9f:; BB(0x00753a9f);
    /* 00753a9f: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 00753aa2: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x753aa7u); f_007365f4();
    /* 00753aa7: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00753aaa: je 0x753b7f */ if (fZ) goto L_00753b7f;
L_00753ab0:; BB(0x00753ab0);
    /* 00753ab0: mov byte ptr [edi + 0x1c], 1 */ W8((u32)(r_edi+0x1cu), 0x1u);
    /* 00753ab4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753ab5: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753ab6: ret  */ FN_RET(0x00753a7e); r_esp += 4; return;
L_00753b70:; BB(0x00753b70);
    /* 00753b70: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753b71: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753b72: ret  */ FN_RET(0x00753a7e); r_esp += 4; return;
L_00753b7f:; BB(0x00753b7f);
    /* 00753b7f: call 0x482a40 */ r_esp -= 4; W32(r_esp, 0x753b84u); f_00482a40();
    /* 00753b84: call 0x482a80 */ r_esp -= 4; W32(r_esp, 0x753b89u); f_00482a80();
    /* 00753b89: jmp 0x753ab0 */ goto L_00753ab0;
}

void f_00753ab7(void)
{
    FN_ENTER(0x00753ab7);
    /* 00753ab7: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 00753aba: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x753abfu); f_007365f4();
    /* 00753abf: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00753ac2: je 0x753b9a */ if (fZ) goto L_00753b9a;
L_00753ac8:; BB(0x00753ac8);
    /* 00753ac8: cmp eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00753acb: je 0x753b8e */ if (fZ) goto L_00753b8e;
L_00753ad1:; BB(0x00753ad1);
    /* 00753ad1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753ad2: mov ecx, edi */ r_ecx = r_edi;
    /* 00753ad4: call 0x753d84 */ r_esp -= 4; W32(r_esp, 0x753ad9u); f_00753d84();
    /* 00753ad9: mov byte ptr [edi + 0x1c], 4 */ W8((u32)(r_edi+0x1cu), 0x4u);
    /* 00753add: mov dword ptr [edi + 0x34], eax */ W32((u32)(r_edi+0x34u), r_eax);
    /* 00753ae0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753ae1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753ae2: ret  */ FN_RET(0x00753ab7); r_esp += 4; return;
L_00753b8e:; BB(0x00753b8e);
    /* 00753b8e: call 0x791b58 */ r_esp -= 4; W32(r_esp, 0x753b93u); f_00791b58();
    /* 00753b93: mov byte ptr [edi + 0x1c], 5 */ W8((u32)(r_edi+0x1cu), 0x5u);
    /* 00753b97: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753b98: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753b99: ret  */ FN_RET(0x00753ab7); r_esp += 4; return;
L_00753b9a:; BB(0x00753b9a);
    /* 00753b9a: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 00753b9c: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x753ba1u); f_0073ec50();
    /* 00753ba1: push dword ptr [edi + 0x20] */ { u32 v = R32((u32)(r_edi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00753ba4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00753ba6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753ba7: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x753bacu); f_007354fc();
    /* 00753bac: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 00753bae: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00753bb0: mov dword ptr [edi + 0x30], eax */ W32((u32)(r_edi+0x30u), r_eax);
    /* 00753bb3: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x753bb8u); f_00792fe8();
    /* 00753bb8: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00753bbb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00753bbd: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00753bbf: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00753bc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753bc3: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x753bc8u); f_00735c90();
    /* 00753bc8: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 00753bca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00753bcc: call 0x792fe8 */ r_esp -= 4; W32(r_esp, 0x753bd1u); f_00792fe8();
    /* 00753bd1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00753bd4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00753bd6: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 00753bd8: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00753bdb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753bdc: call 0x735c90 */ r_esp -= 4; W32(r_esp, 0x753be1u); f_00735c90();
    /* 00753be1: push 0x43430000 */ { u32 v = 0x43430000u; r_esp -= 4; W32(r_esp, v); }
    /* 00753be6: mov edx, dword ptr [edi + 0x30] */ r_edx = R32((u32)(r_edi+0x30u));
    /* 00753be9: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00753bf0: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00753bf5: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00753bfc: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00753bff: call 0x736138 */ r_esp -= 4; W32(r_esp, 0x753c04u); f_00736138();
    /* 00753c04: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00753c06: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 00753c09: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x753c0eu); f_007336fc();
    /* 00753c0e: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00753c11: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00753c12: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00753c15: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x753c1au); f_00712624();
    /* 00753c1a: mov byte ptr [edi + 0x1c], 6 */ W8((u32)(r_edi+0x1cu), 0x6u);
    /* 00753c1e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753c1f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753c20: ret  */ FN_RET(0x00753ab7); r_esp += 4; return;
}

void f_00753ae3(void)
{
    FN_ENTER(0x00753ae3);
    /* 00753ae3: mov ecx, dword ptr [edi + 0x38] */ r_ecx = R32((u32)(r_edi+0x38u));
    /* 00753ae6: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00753ae8: je 0x753af6 */ if (fZ) goto L_00753af6;
L_00753aea:; BB(0x00753aea);
    /* 00753aea: call 0x73d160 */ r_esp -= 4; W32(r_esp, 0x753aefu); f_0073d160();
    /* 00753aef: mov dword ptr [edi + 0x38], 0 */ W32((u32)(r_edi+0x38u), 0x0u);
L_00753af6:; BB(0x00753af6);
    /* 00753af6: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 00753af9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00753afb: je 0x753b09 */ if (fZ) goto L_00753b09;
L_00753afd:; BB(0x00753afd);
    /* 00753afd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x753b02u); f_007127b0();
    /* 00753b02: mov dword ptr [edi + 0x34], 0 */ W32((u32)(r_edi+0x34u), 0x0u);
L_00753b09:; BB(0x00753b09);
    /* 00753b09: mov ecx, dword ptr [edi + 0x30] */ r_ecx = R32((u32)(r_edi+0x30u));
    /* 00753b0c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00753b0e: je 0x753b1c */ if (fZ) goto L_00753b1c;
L_00753b10:; BB(0x00753b10);
    /* 00753b10: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x753b15u); f_007127b0();
    /* 00753b15: mov dword ptr [edi + 0x30], 0 */ W32((u32)(r_edi+0x30u), 0x0u);
L_00753b1c:; BB(0x00753b1c);
    /* 00753b1c: mov edx, dword ptr [edi + 0x2c] */ r_edx = R32((u32)(r_edi+0x2cu));
    /* 00753b1f: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00753b26: and eax, 0xfffd */ {  u32 a = r_eax; u32 b = 0xfffdu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00753b2b: mov ecx, dword ptr [edx + 0x60] */ r_ecx = R32((u32)(r_edx+0x60u));
    /* 00753b2e: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 00753b35: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00753b37: je 0x753b40 */ if (fZ) goto L_00753b40;
L_00753b39:; BB(0x00753b39);
    /* 00753b39: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00753b3b: call 0x760acc */ r_esp -= 4; W32(r_esp, 0x753b40u); f_00760acc();
L_00753b40:; BB(0x00753b40);
    /* 00753b40: mov byte ptr [edi + 0x1c], 2 */ W8((u32)(r_edi+0x1cu), 0x2u);
    /* 00753b44: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 00753b47: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 00753b4e: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00753b50: je 0x753b61 */ if (fZ) goto L_00753b61;
L_00753b52:; BB(0x00753b52);
    /* 00753b52: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 00753b55: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00753b57: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x753b5au); call_ind(t); }
    /* 00753b5a: mov byte ptr [edi + 0x1c], 9 */ W8((u32)(r_edi+0x1cu), 0x9u);
    /* 00753b5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753b5f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753b60: ret  */ FN_RET(0x00753ae3); r_esp += 4; return;
L_00753b61:; BB(0x00753b61);
    /* 00753b61: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00753b63: je 0x753b70 */ if (fZ) goto L_00753b70;
L_00753b65:; BB(0x00753b65);
    /* 00753b65: mov dword ptr [edi + 0x24], 1 */ W32((u32)(r_edi+0x24u), 0x1u);
    /* 00753b6c: mov byte ptr [edi + 0x1c], 3 */ W8((u32)(r_edi+0x1cu), 0x3u);
L_00753b70:; BB(0x00753b70);
    /* 00753b70: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753b71: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753b72: ret  */ FN_RET(0x00753ae3); r_esp += 4; return;
}

void f_00753b44(void)
{
    FN_ENTER(0x00753b44);
    /* 00753b44: mov eax, dword ptr [edi + 0x2c] */ r_eax = R32((u32)(r_edi+0x2cu));
    /* 00753b47: movzx eax, word ptr [eax + 0x84] */ r_eax = (u32)R16((u32)(r_eax+0x84u));
    /* 00753b4e: test al, 4 */ {  u32 a = (u8)r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00753b50: je 0x753b61 */ if (fZ) goto L_00753b61;
L_00753b52:; BB(0x00753b52);
    /* 00753b52: mov ecx, dword ptr [edi + 0x28] */ r_ecx = R32((u32)(r_edi+0x28u));
    /* 00753b55: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 00753b57: call dword ptr [eax + 0x1c] */ { u32 t = R32((u32)(r_eax+0x1cu)); r_esp -= 4; W32(r_esp, 0x753b5au); call_ind(t); }
    /* 00753b5a: mov byte ptr [edi + 0x1c], 9 */ W8((u32)(r_edi+0x1cu), 0x9u);
    /* 00753b5e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753b5f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753b60: ret  */ FN_RET(0x00753b44); r_esp += 4; return;
L_00753b61:; BB(0x00753b61);
    /* 00753b61: test al, 2 */ {  u32 a = (u8)r_eax; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00753b63: je 0x753b70 */ if (fZ) goto L_00753b70;
L_00753b65:; BB(0x00753b65);
    /* 00753b65: mov dword ptr [edi + 0x24], 1 */ W32((u32)(r_edi+0x24u), 0x1u);
    /* 00753b6c: mov byte ptr [edi + 0x1c], 3 */ W8((u32)(r_edi+0x1cu), 0x3u);
L_00753b70:; BB(0x00753b70);
    /* 00753b70: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753b71: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753b72: ret  */ FN_RET(0x00753b44); r_esp += 4; return;
}

void f_00753c24(void) /* sub_753C24 */
{
    FN_ENTER(0x00753c24);
    /* 00753c24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00753c25: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00753c26: mov edi, ecx */ r_edi = r_ecx;
    /* 00753c28: mov ecx, dword ptr [edi + 0x2c] */ r_ecx = R32((u32)(r_edi+0x2cu));
    /* 00753c2b: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x753c30u); f_007365f4();
    /* 00753c30: mov esi, eax */ r_esi = r_eax;
    /* 00753c32: mov ecx, dword ptr [edi + 0x34] */ r_ecx = R32((u32)(r_edi+0x34u));
    /* 00753c35: call 0x751c44 */ r_esp -= 4; W32(r_esp, 0x753c3au); f_00751c44();
    /* 00753c3a: cmp esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00753c3d: je 0x753c42 */ if (fZ) goto L_00753c42;
L_00753c3f:; BB(0x00753c3f);
    /* 00753c3f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753c40: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753c41: ret  */ FN_RET(0x00753c24); r_esp += 4; return;
L_00753c42:; BB(0x00753c42);
    /* 00753c42: movsx edx, byte ptr [edi + 0x1d] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edi+0x1du));
    /* 00753c46: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00753c48: je 0x753c6b */ if (fZ) goto L_00753c6b;
L_00753c4a:; BB(0x00753c4a);
    /* 00753c4a: movsx eax, al */ r_eax = (u32)(i32)(i8)(u8)r_eax;
    /* 00753c4d: mov byte ptr [edi + 0x1d], al */ W8((u32)(r_edi+0x1du), (u8)r_eax);
    /* 00753c50: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00753c52: je 0x753c57 */ if (fZ) goto L_00753c57;
L_00753c54:; BB(0x00753c54);
    /* 00753c54: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753c55: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753c56: ret  */ FN_RET(0x00753c24); r_esp += 4; return;
L_00753c57:; BB(0x00753c57);
    /* 00753c57: movsx eax, word ptr [edi + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x20u));
    /* 00753c5b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753c5c: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 00753c5e: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00753c63: call 0x6ff4ac */ r_esp -= 4; W32(r_esp, 0x753c68u); f_006ff4ac();
    /* 00753c68: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00753c6b:; BB(0x00753c6b);
    /* 00753c6b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753c6c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753c6d: ret  */ FN_RET(0x00753c24); r_esp += 4; return;
}

void f_00753c70(void) /* sub_753C70 */
{
    FN_ENTER(0x00753c70);
    /* 00753c70: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00753c71: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00753c72: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00753c73: mov esi, ecx */ r_esi = r_ecx;
    /* 00753c75: mov ecx, dword ptr [esi + 0x2c] */ r_ecx = R32((u32)(r_esi+0x2cu));
    /* 00753c78: call 0x7365f4 */ r_esp -= 4; W32(r_esp, 0x753c7du); f_007365f4();
    /* 00753c7d: mov edi, eax */ r_edi = r_eax;
    /* 00753c7f: mov ecx, dword ptr [esi + 0x34] */ r_ecx = R32((u32)(r_esi+0x34u));
    /* 00753c82: call 0x751c44 */ r_esp -= 4; W32(r_esp, 0x753c87u); f_00751c44();
    /* 00753c87: mov ebp, eax */ r_ebp = r_eax;
    /* 00753c89: cmp edi, 0xa */ {  u32 a = r_edi; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00753c8c: ja 0x753d7f */ if ((!fC&&!fZ)) goto L_00753d7f;
L_00753c92:; BB(0x00753c92);
    /* 00753c92: mov edx, dword ptr [edi*4 + 0x973ec0] */ r_edx = R32((u32)(r_edi*4+0x973ec0u));
    /* 00753c99: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_00753d7f:; BB(0x00753d7f);
    /* 00753d7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00753d80: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753d81: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753d82: ret  */ FN_RET(0x00753c70); r_esp += 4; return;
}

void f_00753c9b(void)
{
    FN_ENTER(0x00753c9b);
    /* 00753c9b: movzx eax, bp */ r_eax = (u32)(u16)r_ebp;
    /* 00753c9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753c9f: call 0x482a60 */ r_esp -= 4; W32(r_esp, 0x753ca4u); f_00482a60();
    /* 00753ca4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753ca5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00753ca6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753ca7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753ca8: ret  */ FN_RET(0x00753c9b); r_esp += 4; return;
}

void f_00753ca9(void)
{
    FN_ENTER(0x00753ca9);
    /* 00753ca9: push 0xffffe3ff */ { u32 v = 0xffffe3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 00753cae: shl ebp, 0xa */ { u32 c = (10u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00753cb1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00753cb2: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00753cb5: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x753cbau); f_007be17c();
    /* 00753cba: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00753cbd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00753cbe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753cbf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753cc0: ret  */ FN_RET(0x00753ca9); r_esp += 4; return;
}

void f_00753cc1(void)
{
    FN_ENTER(0x00753cc1);
    /* 00753cc1: push -9 */ { u32 v = 0xfffffff7u; r_esp -= 4; W32(r_esp, v); }
    /* 00753cc3: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00753cc5: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00753cc7: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00753cc9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00753cca: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00753ccd: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x753cd2u); f_007be17c();
    /* 00753cd2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00753cd5: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00753cd6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753cd7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753cd8: ret  */ FN_RET(0x00753cc1); r_esp += 4; return;
}

void f_00753cd9(void)
{
    FN_ENTER(0x00753cd9);
    /* 00753cd9: push 0xfffffcff */ { u32 v = 0xfffffcffu; r_esp -= 4; W32(r_esp, v); }
    /* 00753cde: shl ebp, 8 */ { u32 c = (8u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00753ce1: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00753ce2: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00753ce5: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x753ceau); f_007be17c();
    /* 00753cea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00753ced: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00753cee: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753cef: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753cf0: ret  */ FN_RET(0x00753cd9); r_esp += 4; return;
}

void f_00753cf1(void)
{
    FN_ENTER(0x00753cf1);
    /* 00753cf1: push -5 */ { u32 v = 0xfffffffbu; r_esp -= 4; W32(r_esp, v); }
    /* 00753cf3: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00753cf5: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00753cf7: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00753cf8: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00753cfb: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x753d00u); f_007be17c();
    /* 00753d00: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00753d03: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00753d04: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753d05: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753d06: ret  */ FN_RET(0x00753cf1); r_esp += 4; return;
}

void f_00753d07(void)
{
    FN_ENTER(0x00753d07);
    /* 00753d07: push -3 */ { u32 v = 0xfffffffdu; r_esp -= 4; W32(r_esp, v); }
    /* 00753d09: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00753d0b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00753d0c: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00753d0f: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x753d14u); f_007be17c();
    /* 00753d14: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00753d17: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00753d18: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753d19: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753d1a: ret  */ FN_RET(0x00753d07); r_esp += 4; return;
}

void f_00753d1b(void)
{
    FN_ENTER(0x00753d1b);
    /* 00753d1b: push 0xff8fffff */ { u32 v = 0xff8fffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00753d20: mov edx, ebp */ r_edx = r_ebp;
    /* 00753d22: shl edx, 0x14 */ { u32 c = (20u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00753d25: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00753d26: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00753d29: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x753d2eu); f_007be17c();
    /* 00753d2e: and ebp, 0xff */ {  u32 a = r_ebp; u32 b = 0xffu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00753d34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00753d35: call 0x708a58 */ r_esp -= 4; W32(r_esp, 0x753d3au); f_00708a58();
    /* 00753d3a: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00753d3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00753d3e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753d3f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753d40: ret  */ FN_RET(0x00753d1b); r_esp += 4; return;
}

void f_00753d41(void)
{
    FN_ENTER(0x00753d41);
    /* 00753d41: push 0xfeffffff */ { u32 v = 0xfeffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00753d46: shl ebp, 0x18 */ { u32 c = (24u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00753d49: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00753d4a: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00753d4d: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x753d52u); f_007be17c();
    /* 00753d52: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00753d55: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00753d56: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753d57: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753d58: ret  */ FN_RET(0x00753d41); r_esp += 4; return;
}

void f_00753d59(void)
{
    FN_ENTER(0x00753d59);
    /* 00753d59: push 0xfdffffff */ { u32 v = 0xfdffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00753d5e: shl ebp, 0x19 */ { u32 c = (25u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ebp = r;  } }
    /* 00753d61: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00753d62: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00753d65: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x753d6au); f_007be17c();
    /* 00753d6a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00753d6d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00753d6e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753d6f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753d70: ret  */ FN_RET(0x00753d59); r_esp += 4; return;
}

void f_00753d71(void)
{
    FN_ENTER(0x00753d71);
    /* 00753d71: push -2 */ { u32 v = 0xfffffffeu; r_esp -= 4; W32(r_esp, v); }
    /* 00753d73: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00753d74: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00753d77: call 0x7be17c */ r_esp -= 4; W32(r_esp, 0x753d7cu); f_007be17c();
    /* 00753d7c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00753d7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00753d80: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753d81: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753d82: ret  */ FN_RET(0x00753d71); r_esp += 4; return;
}

void f_00753d7f(void)
{
    FN_ENTER(0x00753d7f);
    /* 00753d7f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00753d80: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00753d81: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00753d82: ret  */ FN_RET(0x00753d7f); r_esp += 4; return;
}

void f_00753d84(void) /* sub_753D84 */
{
    FN_ENTER(0x00753d84);
    /* 00753d84: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00753d85: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00753d86: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00753d87: mov esi, ecx */ r_esi = r_ecx;
    /* 00753d89: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00753d8d: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 00753d8f: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x753d94u); f_0073ec50();
    /* 00753d94: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00753d97: push 0x973f18 */ { u32 v = 0x973f18u; r_esp -= 4; W32(r_esp, v); }
    /* 00753d9c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753d9d: call 0x714ac8 */ r_esp -= 4; W32(r_esp, 0x753da2u); f_00714ac8();
    /* 00753da2: mov ebx, eax */ r_ebx = r_eax;
    /* 00753da4: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00753da7: cmp ebp, 0xa */ {  u32 a = r_ebp; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00753daa: ja 0x75417b */ if ((!fC&&!fZ)) goto L_0075417b;
L_00753db0:; BB(0x00753db0);
    /* 00753db0: mov edx, dword ptr [ebp*4 + 0x973eec] */ r_edx = R32((u32)(r_ebp*4+0x973eecu));
    /* 00753db7: jmp edx */ { u32 t = r_edx; jmp_ind(t); return; }
L_0075417b:; BB(0x0075417b);
    /* 0075417b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075417c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075417e: call 0x714e5c */ r_esp -= 4; W32(r_esp, 0x754183u); f_00714e5c();
    /* 00754183: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00754185: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 0075418c: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00754192: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 00754199: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 0075419c: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x7541a1u); f_007336fc();
    /* 007541a1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007541a2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007541a5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007541a7: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7541acu); f_00712624();
    /* 007541ac: mov eax, ebx */ r_eax = r_ebx;
    /* 007541ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007541af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007541b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007541b1: ret 4 */ FN_RET(0x00753d84); r_esp += 8; return;
}

void f_00753db9(void)
{
    FN_ENTER(0x00753db9);
    /* 00753db9: push 0x82 */ { u32 v = 0x82u; r_esp -= 4; W32(r_esp, v); }
    /* 00753dbe: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753dc3u); f_0079317c();
    /* 00753dc3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753dc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753dc5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753dc7: call 0x737ae4 */ r_esp -= 4; W32(r_esp, 0x753dccu); f_00737ae4();
    /* 00753dcc: push 0x92 */ { u32 v = 0x92u; r_esp -= 4; W32(r_esp, v); }
    /* 00753dd1: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753dd6u); f_0079317c();
    /* 00753dd6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753dd7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00753dd9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753dda: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753ddc: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x753de1u); f_00714d34();
    /* 00753de1: push 0x93 */ { u32 v = 0x93u; r_esp -= 4; W32(r_esp, v); }
    /* 00753de6: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753debu); f_0079317c();
    /* 00753deb: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753dec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00753dee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753def: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753df1: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x753df6u); f_00714d34();
    /* 00753df6: push 0x94 */ { u32 v = 0x94u; r_esp -= 4; W32(r_esp, v); }
    /* 00753dfb: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753e00u); f_0079317c();
    /* 00753e00: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753e01: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00753e03: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753e04: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753e06: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x753e0bu); f_00714d34();
    /* 00753e0b: push 0x95 */ { u32 v = 0x95u; r_esp -= 4; W32(r_esp, v); }
    /* 00753e10: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753e15u); f_0079317c();
    /* 00753e15: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753e16: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00753e18: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753e19: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753e1b: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x753e20u); f_00714d34();
    /* 00753e20: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 00753e25: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753e2au); f_0079317c();
    /* 00753e2a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753e2b: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00753e2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753e2e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753e30: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x753e35u); f_00714d34();
    /* 00753e35: call 0x482a38 */ r_esp -= 4; W32(r_esp, 0x753e3au); f_00482a38();
    /* 00753e3a: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00753e3d: jmp 0x75417b */ goto L_0075417b;
L_0075417b:; BB(0x0075417b);
    /* 0075417b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075417c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075417e: call 0x714e5c */ r_esp -= 4; W32(r_esp, 0x754183u); f_00714e5c();
    /* 00754183: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00754185: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 0075418c: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00754192: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 00754199: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 0075419c: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x7541a1u); f_007336fc();
    /* 007541a1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007541a2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007541a5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007541a7: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7541acu); f_00712624();
    /* 007541ac: mov eax, ebx */ r_eax = r_ebx;
    /* 007541ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007541af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007541b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007541b1: ret 4 */ FN_RET(0x00753db9); r_esp += 8; return;
}

void f_00753e42(void)
{
    FN_ENTER(0x00753e42);
    /* 00753e42: push 0x81 */ { u32 v = 0x81u; r_esp -= 4; W32(r_esp, v); }
    /* 00753e47: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753e4cu); f_0079317c();
    /* 00753e4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753e4d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753e4e: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753e50: call 0x737ae4 */ r_esp -= 4; W32(r_esp, 0x753e55u); f_00737ae4();
    /* 00753e55: push 0x8d */ { u32 v = 0x8du; r_esp -= 4; W32(r_esp, v); }
    /* 00753e5a: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753e5fu); f_0079317c();
    /* 00753e5f: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753e60: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00753e62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753e63: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753e65: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x753e6au); f_00714d34();
    /* 00753e6a: push 0x8e */ { u32 v = 0x8eu; r_esp -= 4; W32(r_esp, v); }
    /* 00753e6f: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753e74u); f_0079317c();
    /* 00753e74: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753e75: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00753e77: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753e78: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753e7a: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x753e7fu); f_00714d34();
    /* 00753e7f: push 0x8f */ { u32 v = 0x8fu; r_esp -= 4; W32(r_esp, v); }
    /* 00753e84: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753e89u); f_0079317c();
    /* 00753e89: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753e8a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00753e8c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753e8d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753e8f: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x753e94u); f_00714d34();
    /* 00753e94: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 00753e99: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753e9eu); f_0079317c();
    /* 00753e9e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753e9f: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00753ea1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753ea2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753ea4: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x753ea9u); f_00714d34();
    /* 00753ea9: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00753eac: call 0x7be210 */ r_esp -= 4; W32(r_esp, 0x753eb1u); f_007be210();
    /* 00753eb1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753eb2: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00753eb5: jmp 0x75417b */ goto L_0075417b;
L_0075417b:; BB(0x0075417b);
    /* 0075417b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075417c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075417e: call 0x714e5c */ r_esp -= 4; W32(r_esp, 0x754183u); f_00714e5c();
    /* 00754183: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00754185: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 0075418c: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00754192: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 00754199: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 0075419c: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x7541a1u); f_007336fc();
    /* 007541a1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007541a2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007541a5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007541a7: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7541acu); f_00712624();
    /* 007541ac: mov eax, ebx */ r_eax = r_ebx;
    /* 007541ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007541af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007541b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007541b1: ret 4 */ FN_RET(0x00753e42); r_esp += 8; return;
}

void f_00753eba(void)
{
    FN_ENTER(0x00753eba);
    /* 00753eba: push 0x7d */ { u32 v = 0x7du; r_esp -= 4; W32(r_esp, v); }
    /* 00753ebc: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753ec1u); f_0079317c();
    /* 00753ec1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753ec2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753ec3: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753ec5: call 0x737ae4 */ r_esp -= 4; W32(r_esp, 0x753ecau); f_00737ae4();
    /* 00753eca: push 0xc4 */ { u32 v = 0xc4u; r_esp -= 4; W32(r_esp, v); }
    /* 00753ecf: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753ed4u); f_0079317c();
    /* 00753ed4: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753ed5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00753ed7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753ed8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753eda: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x753edfu); f_00714d34();
    /* 00753edf: push 0xc5 */ { u32 v = 0xc5u; r_esp -= 4; W32(r_esp, v); }
    /* 00753ee4: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753ee9u); f_0079317c();
    /* 00753ee9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753eea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00753eec: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753eed: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753eef: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x753ef4u); f_00714d34();
    /* 00753ef4: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 00753ef6: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00753ef9: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x753efeu); f_007be19c();
    /* 00753efe: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00753f01: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00753f04: mov byte ptr [esi + 0x1d], dl */ W8((u32)(r_esi+0x1du), (u8)r_edx);
    /* 00753f07: jmp 0x75417b */ goto L_0075417b;
L_0075417b:; BB(0x0075417b);
    /* 0075417b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075417c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075417e: call 0x714e5c */ r_esp -= 4; W32(r_esp, 0x754183u); f_00714e5c();
    /* 00754183: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00754185: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 0075418c: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00754192: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 00754199: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 0075419c: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x7541a1u); f_007336fc();
    /* 007541a1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007541a2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007541a5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007541a7: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7541acu); f_00712624();
    /* 007541ac: mov eax, ebx */ r_eax = r_ebx;
    /* 007541ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007541af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007541b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007541b1: ret 4 */ FN_RET(0x00753eba); r_esp += 8; return;
}

void f_00753f0c(void)
{
    FN_ENTER(0x00753f0c);
    /* 00753f0c: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 00753f0e: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753f13u); f_0079317c();
    /* 00753f13: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753f14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753f15: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753f17: call 0x737ae4 */ r_esp -= 4; W32(r_esp, 0x753f1cu); f_00737ae4();
    /* 00753f1c: push 0x89 */ { u32 v = 0x89u; r_esp -= 4; W32(r_esp, v); }
    /* 00753f21: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753f26u); f_0079317c();
    /* 00753f26: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753f27: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00753f29: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753f2a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753f2c: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x753f31u); f_00714d34();
    /* 00753f31: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 00753f36: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753f3bu); f_0079317c();
    /* 00753f3b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753f3c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00753f3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753f3f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753f41: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x753f46u); f_00714d34();
    /* 00753f46: push 0x8b */ { u32 v = 0x8bu; r_esp -= 4; W32(r_esp, v); }
    /* 00753f4b: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753f50u); f_0079317c();
    /* 00753f50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753f51: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 00753f53: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753f54: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753f56: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x753f5bu); f_00714d34();
    /* 00753f5b: push 0x8c */ { u32 v = 0x8cu; r_esp -= 4; W32(r_esp, v); }
    /* 00753f60: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753f65u); f_0079317c();
    /* 00753f65: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753f66: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00753f68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753f69: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753f6b: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x753f70u); f_00714d34();
    /* 00753f70: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00753f73: call 0x7be1d0 */ r_esp -= 4; W32(r_esp, 0x753f78u); f_007be1d0();
    /* 00753f78: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753f79: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00753f7c: jmp 0x75417b */ goto L_0075417b;
L_0075417b:; BB(0x0075417b);
    /* 0075417b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075417c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075417e: call 0x714e5c */ r_esp -= 4; W32(r_esp, 0x754183u); f_00714e5c();
    /* 00754183: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00754185: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 0075418c: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00754192: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 00754199: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 0075419c: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x7541a1u); f_007336fc();
    /* 007541a1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007541a2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007541a5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007541a7: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7541acu); f_00712624();
    /* 007541ac: mov eax, ebx */ r_eax = r_ebx;
    /* 007541ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007541af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007541b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007541b1: ret 4 */ FN_RET(0x00753f0c); r_esp += 8; return;
}

void f_00753f81(void)
{
    FN_ENTER(0x00753f81);
    /* 00753f81: push 0x7b */ { u32 v = 0x7bu; r_esp -= 4; W32(r_esp, v); }
    /* 00753f83: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753f88u); f_0079317c();
    /* 00753f88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753f89: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753f8a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753f8c: call 0x737ae4 */ r_esp -= 4; W32(r_esp, 0x753f91u); f_00737ae4();
    /* 00753f91: push 0x87 */ { u32 v = 0x87u; r_esp -= 4; W32(r_esp, v); }
    /* 00753f96: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753f9bu); f_0079317c();
    /* 00753f9b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753f9c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00753f9e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753f9f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753fa1: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x753fa6u); f_00714d34();
    /* 00753fa6: push 0x88 */ { u32 v = 0x88u; r_esp -= 4; W32(r_esp, v); }
    /* 00753fab: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753fb0u); f_0079317c();
    /* 00753fb0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753fb1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00753fb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753fb4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753fb6: call 0x714d34 */ r_esp -= 4; W32(r_esp, 0x753fbbu); f_00714d34();
    /* 00753fbb: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00753fbd: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 00753fc0: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x753fc5u); f_007be19c();
    /* 00753fc5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00753fc8: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 00753fcb: jmp 0x75417b */ goto L_0075417b;
L_0075417b:; BB(0x0075417b);
    /* 0075417b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075417c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075417e: call 0x714e5c */ r_esp -= 4; W32(r_esp, 0x754183u); f_00714e5c();
    /* 00754183: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00754185: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 0075418c: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00754192: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 00754199: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 0075419c: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x7541a1u); f_007336fc();
    /* 007541a1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007541a2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007541a5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007541a7: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7541acu); f_00712624();
    /* 007541ac: mov eax, ebx */ r_eax = r_ebx;
    /* 007541ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007541af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007541b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007541b1: ret 4 */ FN_RET(0x00753f81); r_esp += 8; return;
}

void f_00753fd0(void)
{
    FN_ENTER(0x00753fd0);
    /* 00753fd0: push 0x7a */ { u32 v = 0x7au; r_esp -= 4; W32(r_esp, v); }
    /* 00753fd2: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753fd7u); f_0079317c();
    /* 00753fd7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753fd8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753fd9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753fdb: call 0x737ae4 */ r_esp -= 4; W32(r_esp, 0x753fe0u); f_00737ae4();
    /* 00753fe0: push 0x85 */ { u32 v = 0x85u; r_esp -= 4; W32(r_esp, v); }
    /* 00753fe5: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753feau); f_0079317c();
    /* 00753fea: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00753feb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00753fed: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00753fee: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00753ff0: call 0x714d4c */ r_esp -= 4; W32(r_esp, 0x753ff5u); f_00714d4c();
    /* 00753ff5: push 0x86 */ { u32 v = 0x86u; r_esp -= 4; W32(r_esp, v); }
    /* 00753ffa: call 0x79317c */ r_esp -= 4; W32(r_esp, 0x753fffu); f_0079317c();
    /* 00753fff: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00754000: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00754002: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00754003: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00754005: call 0x714d4c */ r_esp -= 4; W32(r_esp, 0x75400au); f_00714d4c();
    /* 0075400a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0075400c: push dword ptr [esi + 0x20] */ { u32 v = R32((u32)(r_esi+0x20u)); r_esp -= 4; W32(r_esp, v); }
    /* 0075400f: call 0x7be19c */ r_esp -= 4; W32(r_esp, 0x754014u); f_007be19c();
    /* 00754014: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00754017: movsx edx, ax */ r_edx = (u32)(i32)(i16)(u16)r_eax;
    /* 0075401a: jmp 0x75417b */ goto L_0075417b;
L_0075417b:; BB(0x0075417b);
    /* 0075417b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0075417c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0075417e: call 0x714e5c */ r_esp -= 4; W32(r_esp, 0x754183u); f_00714e5c();
    /* 00754183: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00754185: movzx edx, word ptr [ebx + 0x84] */ r_edx = (u32)R16((u32)(r_ebx+0x84u));
    /* 0075418c: or edx, 0xffff0010 */ {  u32 a = r_edx; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00754192: mov word ptr [ebx + 0x84], dx */ W16((u32)(r_ebx+0x84u), (u16)r_edx);
    /* 00754199: mov ecx, dword ptr [esi + 0x28] */ r_ecx = R32((u32)(r_esi+0x28u));
    /* 0075419c: call 0x7336fc */ r_esp -= 4; W32(r_esp, 0x7541a1u); f_007336fc();
    /* 007541a1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007541a2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 007541a5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 007541a7: call 0x712624 */ r_esp -= 4; W32(r_esp, 0x7541acu); f_00712624();
    /* 007541ac: mov eax, ebx */ r_eax = r_ebx;
    /* 007541ae: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007541af: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007541b0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007541b1: ret 4 */ FN_RET(0x00753fd0); r_esp += 8; return;
}

