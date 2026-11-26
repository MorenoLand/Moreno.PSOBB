#include "protos.h"

void f_00815170(void) /* sub_815170 */
{
    FN_ENTER(0x00815170);
    /* 00815170: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00815171: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00815172: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00815173: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x815178u); f_00483748();
    /* 00815178: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081517a: jne 0x815180 */ if (!fZ) goto L_00815180;
L_0081517c:; BB(0x0081517c);
    /* 0081517c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081517d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0081517e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0081517f: ret  */ FN_RET(0x00815170); r_esp += 4; return;
L_00815180:; BB(0x00815180);
    /* 00815180: mov edx, dword ptr [0xac9cd0] */ r_edx = R32((u32)(0xac9cd0u));
    /* 00815186: mov esi, dword ptr [0xac9d1c] */ r_esi = R32((u32)(0xac9d1cu));
    /* 0081518c: movsx ecx, word ptr [esi*8 + 0xac9d2e] */ r_ecx = (u32)(i32)(i16)R16((u32)(r_esi*8+0xac9d2eu));
    /* 00815194: mov eax, dword ptr [0xac9cf4] */ r_eax = R32((u32)(0xac9cf4u));
    /* 00815199: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0081519b: mov eax, dword ptr [eax + edx*4 + 0x30] */ r_eax = R32((u32)(r_eax+r_edx*4+0x30u));
    /* 0081519f: lea edi, [edx + 1] */ r_edi = (u32)(r_edx+0x1u);
    /* 008151a2: mov dword ptr [0xac9cd0], edi */ W32((u32)(0xac9cd0u), r_edi);
    /* 008151a8: lea ebp, [ecx + ecx] */ r_ebp = (u32)(r_ecx+r_ecx);
    /* 008151ab: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008151ad: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 008151af: movsx esi, word ptr [eax + ebp*2 + 8] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+r_ebp*2+0x8u));
    /* 008151b4: lea edx, [esi + esi] */ r_edx = (u32)(r_esi+r_esi);
    /* 008151b7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008151b9: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008151bb: movsx ebp, word ptr [eax + edx*2 + 2] */ r_ebp = (u32)(i32)(i16)R16((u32)(r_eax+r_edx*2+0x2u));
    /* 008151c0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008151c1: push dword ptr [0xac9ca0] */ { u32 v = R32((u32)(0xac9ca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008151c7: call 0x86e114 */ r_esp -= 4; W32(r_esp, 0x8151ccu); f_0086e114();
    /* 008151cc: mov edx, dword ptr [0xac9d1c] */ r_edx = R32((u32)(0xac9d1cu));
    /* 008151d2: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008151d4: mov word ptr [edx*8 + 0xac9d34], di */ W16((u32)(r_edx*8+0xac9d34u), (u16)r_edi);
    /* 008151dc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008151de: mov word ptr [edx*8 + 0xac9d36], si */ W16((u32)(r_edx*8+0xac9d36u), (u16)r_esi);
    /* 008151e6: mov word ptr [edx*8 + 0xac9d38], ax */ W16((u32)(r_edx*8+0xac9d38u), (u16)r_eax);
    /* 008151ee: mov word ptr [edx*8 + 0xac9d3a], ax */ W16((u32)(r_edx*8+0xac9d3au), (u16)r_eax);
    /* 008151f6: mov dword ptr [edx*4 + 0xac9cd8], ebp */ W32((u32)(r_edx*4+0xac9cd8u), r_ebp);
    /* 008151fd: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008151fe: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008151ff: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00815200: ret  */ FN_RET(0x00815170); r_esp += 4; return;
}

void f_00815204(void) /* sub_815204 */
{
    FN_ENTER(0x00815204);
    /* 00815204: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x815209u); f_00483748();
    /* 00815209: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081520b: je 0x815220 */ if (fZ) goto L_00815220;
L_0081520d:; BB(0x0081520d);
    /* 0081520d: mov eax, dword ptr [0xac9cf8] */ r_eax = R32((u32)(0xac9cf8u));
    /* 00815212: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00815215: jne 0x815220 */ if (!fZ) goto L_00815220;
L_00815217:; BB(0x00815217);
    /* 00815217: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0081521b: mov dword ptr [0xac9cc8], eax */ W32((u32)(0xac9cc8u), r_eax);
L_00815220:; BB(0x00815220);
    /* 00815220: ret  */ FN_RET(0x00815204); r_esp += 4; return;
}

void f_00815224(void) /* sub_815224 */
{
    FN_ENTER(0x00815224);
    /* 00815224: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00815225: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00815228: mov esi, dword ptr [esp + 0x10] */ r_esi = R32((u32)(r_esp+0x10u));
    /* 0081522c: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x815231u); f_00483748();
    /* 00815231: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815233: je 0x815247 */ if (fZ) goto L_00815247;
L_00815235:; BB(0x00815235);
    /* 00815235: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00815237: jl 0x815247 */ if ((fS!=fO)) goto L_00815247;
L_00815239:; BB(0x00815239);
    /* 00815239: cmp esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0081523c: jge 0x815247 */ if ((fS==fO)) goto L_00815247;
L_0081523e:; BB(0x0081523e);
    /* 0081523e: mov eax, dword ptr [0xac9cb0] */ r_eax = R32((u32)(0xac9cb0u));
    /* 00815243: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815245: je 0x81524c */ if (fZ) goto L_0081524c;
L_00815247:; BB(0x00815247);
    /* 00815247: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081524a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0081524b: ret  */ FN_RET(0x00815224); r_esp += 4; return;
L_0081524c:; BB(0x0081524c);
    /* 0081524c: call 0x81541c */ r_esp -= 4; W32(r_esp, 0x815251u); f_0081541c();
    /* 00815251: push dword ptr [0xac9ca0] */ { u32 v = R32((u32)(0xac9ca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00815257: mov dword ptr [0xac9cb0], 1 */ W32((u32)(0xac9cb0u), 0x1u);
    /* 00815261: call 0x86def8 */ r_esp -= 4; W32(r_esp, 0x815266u); f_0086def8();
    /* 00815266: push dword ptr [0xac9ca4] */ { u32 v = R32((u32)(0xac9ca4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0081526c: call 0x86def8 */ r_esp -= 4; W32(r_esp, 0x815271u); f_0086def8();
    /* 00815271: mov eax, dword ptr [esi*4 + 0xa15748] */ r_eax = R32((u32)(r_esi*4+0xa15748u));
    /* 00815278: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0081527a: mov dword ptr [0xac9ca0], edx */ W32((u32)(0xac9ca0u), r_edx);
    /* 00815280: mov dword ptr [0xac9ca4], edx */ W32((u32)(0xac9ca4u), r_edx);
    /* 00815286: call 0x814c00 */ r_esp -= 4; W32(r_esp, 0x81528bu); f_00814c00();
    /* 0081528b: mov edx, 0xab5ba0 */ r_edx = 0xab5ba0u;
    /* 00815290: call 0x8152cc */ r_esp -= 4; W32(r_esp, 0x815295u); f_008152cc();
    /* 00815295: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00815297: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00815298: push 0xab5ba0 */ { u32 v = 0xab5ba0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081529d: push dword ptr [0xac9cac] */ { u32 v = R32((u32)(0xac9cacu)); r_esp -= 4; W32(r_esp, v); }
    /* 008152a3: call 0x86df54 */ r_esp -= 4; W32(r_esp, 0x8152a8u); f_0086df54();
    /* 008152a8: push dword ptr [0xab5a0c] */ { u32 v = R32((u32)(0xab5a0cu)); r_esp -= 4; W32(r_esp, v); }
    /* 008152ae: push dword ptr [0xac9cac] */ { u32 v = R32((u32)(0xac9cacu)); r_esp -= 4; W32(r_esp, v); }
    /* 008152b4: call 0x86e078 */ r_esp -= 4; W32(r_esp, 0x8152b9u); f_0086e078();
    /* 008152b9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008152bb: push dword ptr [0xac9cac] */ { u32 v = R32((u32)(0xac9cacu)); r_esp -= 4; W32(r_esp, v); }
    /* 008152c1: call 0x86e09c */ r_esp -= 4; W32(r_esp, 0x8152c6u); f_0086e09c();
    /* 008152c6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008152c9: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008152ca: ret  */ FN_RET(0x00815224); r_esp += 4; return;
}

void f_008152cc(void) /* sub_8152CC */
{
    FN_ENTER(0x008152cc);
    /* 008152cc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008152cd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008152ce: mov esi, edx */ r_esi = r_edx;
    /* 008152d0: push 0x92b680 */ { u32 v = 0x92b680u; r_esp -= 4; W32(r_esp, v); }
    /* 008152d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008152d6: call 0x85957c */ r_esp -= 4; W32(r_esp, 0x8152dbu); f_0085957c();
    /* 008152db: mov ebp, eax */ r_ebp = r_eax;
    /* 008152dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008152e0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008152e2: je 0x81530a */ if (fZ) goto L_0081530a;
L_008152e4:; BB(0x008152e4);
    /* 008152e4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008152e5: call 0x8caaa0 */ r_esp -= 4; W32(r_esp, 0x8152eau); f_008caaa0();
    /* 008152ea: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008152eb: call 0x8caaa8 */ r_esp -= 4; W32(r_esp, 0x8152f0u); f_008caaa8();
    /* 008152f0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008152f1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008152f2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008152f4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008152f5: call 0x859678 */ r_esp -= 4; W32(r_esp, 0x8152fau); f_00859678();
    /* 008152fa: mov esi, eax */ r_esi = r_eax;
    /* 008152fc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008152fd: call 0x859710 */ r_esp -= 4; W32(r_esp, 0x815302u); f_00859710();
    /* 00815302: mov eax, esi */ r_eax = r_esi;
    /* 00815304: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00815307: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00815308: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00815309: ret  */ FN_RET(0x008152cc); r_esp += 4; return;
L_0081530a:; BB(0x0081530a);
    /* 0081530a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081530c: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081530d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0081530e: ret  */ FN_RET(0x008152cc); r_esp += 4; return;
}

void f_00815310(void) /* sub_815310 */
{
    FN_ENTER(0x00815310);
    /* 00815310: mov eax, dword ptr [0xac9d20] */ r_eax = R32((u32)(0xac9d20u));
    /* 00815315: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00815318: je 0x815320 */ if (fZ) goto L_00815320;
L_0081531a:; BB(0x0081531a);
    /* 0081531a: mov eax, dword ptr [0xa15744] */ r_eax = R32((u32)(0xa15744u));
    /* 0081531f: ret  */ FN_RET(0x00815310); r_esp += 4; return;
L_00815320:; BB(0x00815320);
    /* 00815320: mov edx, dword ptr [0xac9d1c] */ r_edx = R32((u32)(0xac9d1cu));
    /* 00815326: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00815328: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081532a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081532c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081532e: lea eax, [edx + edx + 0xab5b60] */ r_eax = (u32)(r_edx+r_edx+0xab5b60u);
    /* 00815335: ret  */ FN_RET(0x00815310); r_esp += 4; return;
}

void f_00815338(void) /* sub_815338 */
{
    FN_ENTER(0x00815338);
    /* 00815338: mov eax, dword ptr [0xa15740] */ r_eax = R32((u32)(0xa15740u));
    /* 0081533d: mov dword ptr [0xac9ce0], eax */ W32((u32)(0xac9ce0u), r_eax);
    /* 00815342: ret  */ FN_RET(0x00815338); r_esp += 4; return;
}

void f_00815344(void) /* sub_815344 */
{
    FN_ENTER(0x00815344);
    /* 00815344: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x815349u); f_00483748();
    /* 00815349: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081534b: je 0x8153a3 */ if (fZ) goto L_008153a3;
L_0081534d:; BB(0x0081534d);
    /* 0081534d: mov eax, dword ptr [0xac9cb0] */ r_eax = R32((u32)(0xac9cb0u));
    /* 00815352: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00815354: je 0x8153a3 */ if (fZ) goto L_008153a3;
L_00815356:; BB(0x00815356);
    /* 00815356: push dword ptr [0xac9ca0] */ { u32 v = R32((u32)(0xac9ca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0081535c: mov dword ptr [0xac9cc4], 0xa */ W32((u32)(0xac9cc4u), 0xau);
    /* 00815366: mov dword ptr [0xa1575c], 0x64 */ W32((u32)(0xa1575cu), 0x64u);
    /* 00815370: call 0x86def8 */ r_esp -= 4; W32(r_esp, 0x815375u); f_0086def8();
    /* 00815375: push dword ptr [0xac9ca4] */ { u32 v = R32((u32)(0xac9ca4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0081537b: call 0x86def8 */ r_esp -= 4; W32(r_esp, 0x815380u); f_0086def8();
    /* 00815380: call 0x86dd80 */ r_esp -= 4; W32(r_esp, 0x815385u); f_0086dd80();
    /* 00815385: mov dword ptr [0xac9ca0], eax */ W32((u32)(0xac9ca0u), r_eax);
    /* 0081538a: call 0x86dd80 */ r_esp -= 4; W32(r_esp, 0x81538fu); f_0086dd80();
    /* 0081538f: mov dword ptr [0xac9cb0], 0 */ W32((u32)(0xac9cb0u), 0x0u);
    /* 00815399: mov dword ptr [0xac9ca4], eax */ W32((u32)(0xac9ca4u), r_eax);
    /* 0081539e: call 0x8146ac */ r_esp -= 4; W32(r_esp, 0x8153a3u); f_008146ac();
L_008153a3:; BB(0x008153a3);
    /* 008153a3: ret  */ FN_RET(0x00815344); r_esp += 4; return;
}

void f_008153a4(void) /* sub_8153A4 */
{
    FN_ENTER(0x008153a4);
    /* 008153a4: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x8153a9u); f_00483748();
    /* 008153a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008153ab: je 0x8153b8 */ if (fZ) goto L_008153b8;
L_008153ad:; BB(0x008153ad);
    /* 008153ad: push dword ptr [0xac9ca8] */ { u32 v = R32((u32)(0xac9ca8u)); r_esp -= 4; W32(r_esp, v); }
    /* 008153b3: call 0x86e130 */ r_esp -= 4; W32(r_esp, 0x8153b8u); f_0086e130();
L_008153b8:; BB(0x008153b8);
    /* 008153b8: ret  */ FN_RET(0x008153a4); r_esp += 4; return;
}

void f_008153bc(void) /* sub_8153BC */
{
    FN_ENTER(0x008153bc);
    /* 008153bc: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008153bd: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008153c0: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 008153c4: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x8153c9u); f_00483748();
    /* 008153c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008153cb: je 0x81540a */ if (fZ) goto L_0081540a;
L_008153cd:; BB(0x008153cd);
    /* 008153cd: mov eax, dword ptr [0xac9d24] */ r_eax = R32((u32)(0xac9d24u));
    /* 008153d2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008153d4: jne 0x81540f */ if (!fZ) goto L_0081540f;
L_008153d6:; BB(0x008153d6);
    /* 008153d6: mov eax, dword ptr [0xac9d1c] */ r_eax = R32((u32)(0xac9d1cu));
    /* 008153db: mov dword ptr [0xac9cb4], ebp */ W32((u32)(0xac9cb4u), r_ebp);
    /* 008153e1: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 008153e4: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 008153e7: fdivr dword ptr [0xa15758] */ ST(0) = R_F32((u32)(0xa15758u)) / ST(0);
    /* 008153ed: fstp dword ptr [0xac9cc0] */ W_F32((u32)(0xac9cc0u), ST(0)); FPOP();
    /* 008153f3: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008153f5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008153f8: mov dword ptr [0xac9d1c], eax */ W32((u32)(0xac9d1cu), r_eax);
    /* 008153fd: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008153ff: mov dword ptr [eax*4 + 0xac9cbc], 0 */ W32((u32)(r_eax*4+0xac9cbcu), 0x0u);
L_0081540a:; BB(0x0081540a);
    /* 0081540a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081540d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081540e: ret  */ FN_RET(0x008153bc); r_esp += 4; return;
L_0081540f:; BB(0x0081540f);
    /* 0081540f: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x815414u); f_00815434();
    /* 00815414: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00815417: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00815418: ret  */ FN_RET(0x008153bc); r_esp += 4; return;
}

void f_0081541c(void) /* sub_81541C */
{
    FN_ENTER(0x0081541c);
    /* 0081541c: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x815421u); f_00483748();
    /* 00815421: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00815423: jne 0x815426 */ if (!fZ) goto L_00815426;
L_00815425:; BB(0x00815425);
    /* 00815425: ret  */ FN_RET(0x0081541c); r_esp += 4; return;
L_00815426:; BB(0x00815426);
    /* 00815426: call 0x815434 */ r_esp -= 4; W32(r_esp, 0x81542bu); f_00815434();
    /* 0081542b: call 0x8153a4 */ r_esp -= 4; W32(r_esp, 0x815430u); f_008153a4();
    /* 00815430: ret  */ FN_RET(0x0081541c); r_esp += 4; return;
}

void f_00815434(void) /* sub_815434 */
{
    FN_ENTER(0x00815434);
    /* 00815434: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00815437: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x81543cu); f_00483748();
    /* 0081543c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081543e: jne 0x815444 */ if (!fZ) goto L_00815444;
L_00815440:; BB(0x00815440);
    /* 00815440: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00815443: ret  */ FN_RET(0x00815434); r_esp += 4; return;
L_00815444:; BB(0x00815444);
    /* 00815444: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00815448: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 0081544b: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0081544d: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0081544f: mov ebx, eax */ r_ebx = r_eax;
    /* 00815451: mov esi, edx */ r_esi = r_edx;
L_00815453:; BB(0x00815453);
    /* 00815453: mov ecx, dword ptr [0xac9d24] */ r_ecx = R32((u32)(0xac9d24u));
    /* 00815459: cmp ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081545c: je 0x81549a */ if (fZ) goto L_0081549a;
L_0081545e:; BB(0x0081545e);
    /* 0081545e: push dword ptr [ebx + 0xac9ca0] */ { u32 v = R32((u32)(r_ebx+0xac9ca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00815464: call 0x86e130 */ r_esp -= 4; W32(r_esp, 0x815469u); f_0086e130();
    /* 00815469: mov dword ptr [ebx + 0xac9cb8], 0 */ W32((u32)(r_ebx+0xac9cb8u), 0x0u);
    /* 00815473: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00815476: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00815479: cmp ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0081547c: jl 0x815453 */ if ((fS!=fO)) goto L_00815453;
L_0081547e:; BB(0x0081547e);
    /* 0081547e: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00815482: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00815485: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00815487: mov dword ptr [0xac9cb4], eax */ W32((u32)(0xac9cb4u), r_eax);
    /* 0081548c: mov dword ptr [0xac9d24], eax */ W32((u32)(0xac9d24u), r_eax);
    /* 00815491: mov dword ptr [0xac9d20], eax */ W32((u32)(0xac9d20u), r_eax);
    /* 00815496: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00815499: ret  */ FN_RET(0x00815434); r_esp += 4; return;
L_0081549a:; BB(0x0081549a);
    /* 0081549a: push dword ptr [esi + 0xac9ca0] */ { u32 v = R32((u32)(r_esi+0xac9ca0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008154a0: call 0x86e0c8 */ r_esp -= 4; W32(r_esp, 0x8154a5u); f_0086e0c8();
    /* 008154a5: jmp 0x81545e */ goto L_0081545e;
}

void f_008154a8(void) /* sub_8154A8 */
{
    FN_ENTER(0x008154a8);
    /* 008154a8: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008154a9: call 0x483748 */ r_esp -= 4; W32(r_esp, 0x8154aeu); f_00483748();
    /* 008154ae: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008154b0: jne 0x8154c6 */ if (!fZ) goto L_008154c6;
L_008154b2:; BB(0x008154b2);
    /* 008154b2: mov edx, 0xac9ca0 */ r_edx = 0xac9ca0u;
    /* 008154b7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008154b9: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 008154bb: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 008154be: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 008154c1: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 008154c4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008154c5: ret  */ FN_RET(0x008154a8); r_esp += 4; return;
L_008154c6:; BB(0x008154c6);
    /* 008154c6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008154c8: mov ebx, eax */ r_ebx = r_eax;
L_008154ca:; BB(0x008154ca);
    /* 008154ca: call 0x86dd80 */ r_esp -= 4; W32(r_esp, 0x8154cfu); f_0086dd80();
    /* 008154cf: mov dword ptr [ebx*4 + 0xac9ca0], eax */ W32((u32)(r_ebx*4+0xac9ca0u), r_eax);
    /* 008154d6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008154d8: je 0x815564 */ if (fZ) goto L_00815564;
L_008154de:; BB(0x008154de);
    /* 008154de: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008154e1: cmp ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008154e4: jl 0x8154ca */ if ((fS!=fO)) goto L_008154ca;
L_008154e6:; BB(0x008154e6);
    /* 008154e6: call 0x86dd80 */ r_esp -= 4; W32(r_esp, 0x8154ebu); f_0086dd80();
    /* 008154eb: mov dword ptr [0xac9ca8], eax */ W32((u32)(0xac9ca8u), r_eax);
    /* 008154f0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008154f2: je 0x815553 */ if (fZ) goto L_00815553;
L_008154f4:; BB(0x008154f4);
    /* 008154f4: call 0x86dd80 */ r_esp -= 4; W32(r_esp, 0x8154f9u); f_0086dd80();
    /* 008154f9: mov dword ptr [0xac9cac], eax */ W32((u32)(0xac9cacu), r_eax);
    /* 008154fe: mov eax, dword ptr [0xac9ca0] */ r_eax = R32((u32)(0xac9ca0u));
    /* 00815503: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815505: je 0x815542 */ if (fZ) goto L_00815542;
L_00815507:; BB(0x00815507);
    /* 00815507: mov dword ptr [0xac9d08], 0x723c8 */ W32((u32)(0xac9d08u), 0x723c8u);
    /* 00815511: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00815513: mov dword ptr [0xac9d24], eax */ W32((u32)(0xac9d24u), r_eax);
    /* 00815518: mov dword ptr [0xac9d04], 0x10924 */ W32((u32)(0xac9d04u), 0x10924u);
    /* 00815522: mov dword ptr [0xac9d20], eax */ W32((u32)(0xac9d20u), r_eax);
    /* 00815527: mov dword ptr [0xac9d10], eax */ W32((u32)(0xac9d10u), r_eax);
    /* 0081552c: mov dword ptr [0xac9cb4], eax */ W32((u32)(0xac9cb4u), r_eax);
    /* 00815531: mov byte ptr [0xab5b80], al */ W8((u32)(0xab5b80u), (u8)r_eax);
    /* 00815536: mov byte ptr [0xab5b60], al */ W8((u32)(0xab5b60u), (u8)r_eax);
    /* 0081553b: mov dword ptr [0xac9cb0], eax */ W32((u32)(0xac9cb0u), r_eax);
    /* 00815540: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00815541: ret  */ FN_RET(0x008154a8); r_esp += 4; return;
L_00815542:; BB(0x00815542);
    /* 00815542: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00815544: push 0x98940c */ { u32 v = 0x98940cu; r_esp -= 4; W32(r_esp, v); }
    /* 00815549: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x81554eu); f_0061cdb0();
    /* 0081554e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00815551: jmp 0x815507 */ goto L_00815507;
L_00815553:; BB(0x00815553);
    /* 00815553: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00815555: push 0x9893f0 */ { u32 v = 0x9893f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0081555a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x81555fu); f_0061cdb0();
    /* 0081555f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00815562: jmp 0x8154f4 */ goto L_008154f4;
L_00815564:; BB(0x00815564);
    /* 00815564: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00815565: push 0x9893d4 */ { u32 v = 0x9893d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0081556a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x81556fu); f_0061cdb0();
    /* 0081556f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00815572: jmp 0x8154de */ goto L_008154de;
}

void f_00815578(void) /* sub_815578 */
{
    FN_ENTER(0x00815578);
    /* 00815578: call 0x829ad0 */ r_esp -= 4; W32(r_esp, 0x81557du); f_00829ad0();
    /* 0081557d: call 0x828c38 */ r_esp -= 4; W32(r_esp, 0x815582u); f_00828c38();
    /* 00815582: ret  */ FN_RET(0x00815578); r_esp += 4; return;
}

void f_00815584(void) /* sub_815584 */
{
    FN_ENTER(0x00815584);
    /* 00815584: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00815588: call 0x828d40 */ r_esp -= 4; W32(r_esp, 0x81558du); f_00828d40();
    /* 0081558d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0081558e: ret  */ FN_RET(0x00815584); r_esp += 4; return;
}

void f_00815590(void) /* sub_815590 */
{
    FN_ENTER(0x00815590);
    /* 00815590: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00815591: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00815593: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00815597: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00815598: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 0081559b: call 0x80c2a4 */ r_esp -= 4; W32(r_esp, 0x8155a0u); f_0080c2a4();
    /* 008155a0: mov dword ptr [ebx + 0x18], eax */ W32((u32)(r_ebx+0x18u), r_eax);
    /* 008155a3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008155a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008155a5: ret 8 */ FN_RET(0x00815590); r_esp += 12; return;
}

void f_008155a8(void) /* sub_8155A8 */
{
    FN_ENTER(0x008155a8);
    /* 008155a8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008155a9: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008155ac: mov edi, ecx */ r_edi = r_ecx;
    /* 008155ae: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 008155b1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008155b2: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 008155b5: call 0x80bf14 */ r_esp -= 4; W32(r_esp, 0x8155bau); f_0080bf14();
    /* 008155ba: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008155bd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008155bf: je 0x8155d2 */ if (fZ) goto L_008155d2;
L_008155c1:; BB(0x008155c1);
    /* 008155c1: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 008155c4: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 008155c7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008155c9: call dword ptr [eax + edx*8 + 0xa160c8] */ { u32 t = R32((u32)(r_eax+r_edx*8+0xa160c8u)); r_esp -= 4; W32(r_esp, 0x8155d0u); call_ind(t); }
    /* 008155d0: jmp 0x8155e1 */ goto L_008155e1;
L_008155d2:; BB(0x008155d2);
    /* 008155d2: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 008155d5: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 008155d8: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008155da: call dword ptr [eax + edx*8 + 0xa160c8] */ { u32 t = R32((u32)(r_eax+r_edx*8+0xa160c8u)); r_esp -= 4; W32(r_esp, 0x8155e1u); call_ind(t); }
L_008155e1:; BB(0x008155e1);
    /* 008155e1: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 008155e4: mov edx, dword ptr [edi + 0xc] */ r_edx = R32((u32)(r_edi+0xcu));
    /* 008155e7: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 008155e9: mov eax, dword ptr [edi + 0x18] */ r_eax = R32((u32)(r_edi+0x18u));
    /* 008155ec: mov dword ptr [edi + 4], edx */ W32((u32)(r_edi+0x4u), r_edx);
    /* 008155ef: mov dword ptr [edi + 0x10], eax */ W32((u32)(r_edi+0x10u), r_eax);
    /* 008155f2: call 0x80c324 */ r_esp -= 4; W32(r_esp, 0x8155f7u); f_0080c324();
    /* 008155f7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008155fa: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008155fb: ret  */ FN_RET(0x008155a8); r_esp += 4; return;
}

void f_008155fc(void) /* sub_8155FC */
{
    FN_ENTER(0x008155fc);
    /* 008155fc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008155fd: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00815600: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00815602: lea eax, [esp] */ r_eax = (u32)(r_esp);
    /* 00815605: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00815606: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00815609: call 0x80bf14 */ r_esp -= 4; W32(r_esp, 0x81560eu); f_0080bf14();
    /* 0081560e: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00815611: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815613: je 0x815626 */ if (fZ) goto L_00815626;
L_00815615:; BB(0x00815615);
    /* 00815615: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00815618: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0081561b: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081561d: call dword ptr [eax + edx*8 + 0xa160c8] */ { u32 t = R32((u32)(r_eax+r_edx*8+0xa160c8u)); r_esp -= 4; W32(r_esp, 0x815624u); call_ind(t); }
    /* 00815624: jmp 0x815635 */ goto L_00815635;
L_00815626:; BB(0x00815626);
    /* 00815626: mov edx, dword ptr [ebx + 4] */ r_edx = R32((u32)(r_ebx+0x4u));
    /* 00815629: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0081562c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081562e: call dword ptr [eax + edx*8 + 0xa160c8] */ { u32 t = R32((u32)(r_eax+r_edx*8+0xa160c8u)); r_esp -= 4; W32(r_esp, 0x815635u); call_ind(t); }
L_00815635:; BB(0x00815635);
    /* 00815635: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00815637: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 0081563a: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 0081563d: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 00815640: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00815643: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00815644: ret  */ FN_RET(0x008155fc); r_esp += 4; return;
}

void f_00815648(void) /* sub_815648 */
{
    FN_ENTER(0x00815648);
    /* 00815648: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00815649: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0081564b: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
    /* 0081564e: cmp eax, 0x11 */ {  u32 a = r_eax; u32 b = 0x11u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00815651: jg 0x81568f */ if ((!fZ&&fS==fO)) goto L_0081568f;
L_00815653:; BB(0x00815653);
    /* 00815653: mov edx, dword ptr [ebp + 0x20] */ r_edx = R32((u32)(r_ebp+0x20u));
    /* 00815656: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00815659: je 0x815662 */ if (fZ) goto L_00815662;
L_0081565b:; BB(0x0081565b);
    /* 0081565b: mov eax, 2 */ r_eax = 0x2u;
    /* 00815660: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00815661: ret  */ FN_RET(0x00815648); r_esp += 4; return;
L_00815662:; BB(0x00815662);
    /* 00815662: mov edx, dword ptr [0xaafdb8] */ r_edx = R32((u32)(0xaafdb8u));
    /* 00815668: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0081566a: jne 0x81567b */ if (!fZ) goto L_0081567b;
L_0081566c:; BB(0x0081566c);
    /* 0081566c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0081566d: call 0x80c2dc */ r_esp -= 4; W32(r_esp, 0x815672u); f_0080c2dc();
    /* 00815672: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00815673: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815676: je 0x815696 */ if (fZ) goto L_00815696;
L_00815678:; BB(0x00815678);
    /* 00815678: mov eax, dword ptr [ebp] */ r_eax = R32((u32)(r_ebp));
L_0081567b:; BB(0x0081567b);
    /* 0081567b: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 0081567e: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00815680: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00815682: jl 0x81568b */ if ((fS!=fO)) goto L_0081568b;
L_00815684:; BB(0x00815684);
    /* 00815684: mov eax, 1 */ r_eax = 0x1u;
    /* 00815689: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081568a: ret  */ FN_RET(0x00815648); r_esp += 4; return;
L_0081568b:; BB(0x0081568b);
    /* 0081568b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0081568d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0081568e: ret  */ FN_RET(0x00815648); r_esp += 4; return;
L_0081568f:; BB(0x0081568f);
    /* 0081568f: mov eax, 4 */ r_eax = 0x4u;
    /* 00815694: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00815695: ret  */ FN_RET(0x00815648); r_esp += 4; return;
L_00815696:; BB(0x00815696);
    /* 00815696: push dword ptr [ebp + 4] */ { u32 v = R32((u32)(r_ebp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00815699: call 0x80c2dc */ r_esp -= 4; W32(r_esp, 0x81569eu); f_0080c2dc();
    /* 0081569e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0081569f: cmp eax, 8 */ {  u32 a = r_eax; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008156a2: jl 0x81568b */ if ((fS!=fO)) goto L_0081568b;
L_008156a4:; BB(0x008156a4);
    /* 008156a4: cmp eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008156a7: jg 0x81568b */ if ((!fZ&&fS==fO)) goto L_0081568b;
L_008156a9:; BB(0x008156a9);
    /* 008156a9: mov eax, 1 */ r_eax = 0x1u;
    /* 008156ae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008156af: ret  */ FN_RET(0x00815648); r_esp += 4; return;
}

void f_008156b0(void) /* sub_8156B0 */
{
    FN_ENTER(0x008156b0);
    /* 008156b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008156b1: mov edi, ecx */ r_edi = r_ecx;
    /* 008156b3: call 0x807ac0 */ r_esp -= 4; W32(r_esp, 0x8156b8u); f_00807ac0();
    /* 008156b8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008156b9: call 0x8076d4 */ r_esp -= 4; W32(r_esp, 0x8156beu); f_008076d4();
    /* 008156be: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008156bf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008156c1: jne 0x8156cc */ if (!fZ) goto L_008156cc;
L_008156c3:; BB(0x008156c3);
    /* 008156c3: mov eax, dword ptr [edi + 0x20] */ r_eax = R32((u32)(r_edi+0x20u));
    /* 008156c6: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008156c9: mov dword ptr [edi + 0x20], eax */ W32((u32)(r_edi+0x20u), r_eax);
L_008156cc:; BB(0x008156cc);
    /* 008156cc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008156cd: ret  */ FN_RET(0x008156b0); r_esp += 4; return;
}

void f_008156d0(void) /* sub_8156D0 */
{
    FN_ENTER(0x008156d0);
    /* 008156d0: mov dword ptr [0xac9d40], 0x3f800000 */ W32((u32)(0xac9d40u), 0x3f800000u);
    /* 008156da: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008156dc: mov eax, 1 */ r_eax = 0x1u;
    /* 008156e1: mov dword ptr [0xac9d44], 0x41000000 */ W32((u32)(0xac9d44u), 0x41000000u);
    /* 008156eb: mov dword ptr [0xac9d50], edx */ W32((u32)(0xac9d50u), r_edx);
    /* 008156f1: mov dword ptr [0xac9d54], eax */ W32((u32)(0xac9d54u), r_eax);
    /* 008156f6: mov dword ptr [0xac9d48], 0x3fc00000 */ W32((u32)(0xac9d48u), 0x3fc00000u);
    /* 00815700: mov dword ptr [0xac9d58], eax */ W32((u32)(0xac9d58u), r_eax);
    /* 00815705: mov dword ptr [0xac9d4c], 0xffffffff */ W32((u32)(0xac9d4cu), 0xffffffffu);
    /* 0081570f: mov dword ptr [0xac9d5c], edx */ W32((u32)(0xac9d5cu), r_edx);
    /* 00815715: mov dword ptr [0xac9d60], edx */ W32((u32)(0xac9d60u), r_edx);
    /* 0081571b: mov dword ptr [0xac9d64], edx */ W32((u32)(0xac9d64u), r_edx);
    /* 00815721: mov dword ptr [0xac9d68], edx */ W32((u32)(0xac9d68u), r_edx);
    /* 00815727: mov dword ptr [0xac9d6c], edx */ W32((u32)(0xac9d6cu), r_edx);
    /* 0081572d: ret  */ FN_RET(0x008156d0); r_esp += 4; return;
}

void f_00815730(void) /* sub_815730 */
{
    FN_ENTER(0x00815730);
    /* 00815730: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00815731: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00815734: mov edi, ecx */ r_edi = r_ecx;
    /* 00815736: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00815739: call 0x806fa0 */ r_esp -= 4; W32(r_esp, 0x81573eu); f_00806fa0();
    /* 0081573e: lea edx, [esp + 4] */ r_edx = (u32)(r_esp+0x4u);
    /* 00815742: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00815743: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00815746: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 00815749: mov dword ptr [0xaafc98], eax */ W32((u32)(0xaafc98u), r_eax);
    /* 0081574e: call 0x80bf14 */ r_esp -= 4; W32(r_esp, 0x815753u); f_0080bf14();
    /* 00815753: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00815756: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815758: je 0x81576e */ if (fZ) goto L_0081576e;
L_0081575a:; BB(0x0081575a);
    /* 0081575a: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0081575d: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00815760: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00815762: call dword ptr [eax + edx*8 + 0xa160c4] */ { u32 t = R32((u32)(r_eax+r_edx*8+0xa160c4u)); r_esp -= 4; W32(r_esp, 0x815769u); call_ind(t); }
    /* 00815769: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081576c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0081576d: ret  */ FN_RET(0x00815730); r_esp += 4; return;
L_0081576e:; BB(0x0081576e);
    /* 0081576e: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00815771: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00815774: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00815776: call dword ptr [eax + edx*8 + 0xa160c4] */ { u32 t = R32((u32)(r_eax+r_edx*8+0xa160c4u)); r_esp -= 4; W32(r_esp, 0x81577du); call_ind(t); }
    /* 0081577d: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00815780: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00815781: ret  */ FN_RET(0x00815730); r_esp += 4; return;
}

void f_00815784(void) /* sub_815784 */
{
    FN_ENTER(0x00815784);
    /* 00815784: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00815785: mov ebp, esp */ r_ebp = r_esp;
    /* 00815787: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00815789: push 0x8f746c */ { u32 v = 0x8f746cu; r_esp -= 4; W32(r_esp, v); }
    /* 0081578e: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00815794: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00815795: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 0081579c: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0081579f: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 008157a2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 008157a5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 008157a8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 008157ab: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 008157ae: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 008157b1: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 008157b8: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x8157bdu); f_008171e8();
    /* 008157bd: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 008157c0: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 008157c2: jne 0x8157d4 */ if (!fZ) goto L_008157d4;
L_008157c4:; BB(0x008157c4);
    /* 008157c4: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 008157c7: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 008157ce: mov esp, ebp */ r_esp = r_ebp;
    /* 008157d0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008157d1: ret 4 */ FN_RET(0x00815784); r_esp += 8; return;
L_008157d4:; BB(0x008157d4);
    /* 008157d4: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 008157d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008157d8: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x8157ddu); f_005c2f74();
    /* 008157dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 008157de: jmp 0x8157c4 */ goto L_008157c4;
}

void f_008157e0(void) /* sub_8157E0 */
{
    FN_ENTER(0x008157e0);
    /* 008157e0: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008157e1: mov ebp, esp */ r_ebp = r_esp;
    /* 008157e3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008157e5: push 0x8f7496 */ { u32 v = 0x8f7496u; r_esp -= 4; W32(r_esp, v); }
    /* 008157ea: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 008157f0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 008157f1: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 008157f8: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008157fb: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 008157fe: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00815801: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00815804: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00815807: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 0081580a: mov dword ptr [ebp - 0x2c], ecx */ W32((u32)(r_ebp+0xffffffd4u), r_ecx);
    /* 0081580d: mov eax, ecx */ r_eax = r_ecx;
    /* 0081580f: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00815812: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00815819: call 0x8171e8 */ r_esp -= 4; W32(r_esp, 0x81581eu); f_008171e8();
    /* 0081581e: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 00815821: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00815823: jne 0x815835 */ if (!fZ) goto L_00815835;
L_00815825:; BB(0x00815825);
    /* 00815825: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00815828: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0081582f: mov esp, ebp */ r_esp = r_ebp;
    /* 00815831: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00815832: ret 4 */ FN_RET(0x008157e0); r_esp += 8; return;
L_00815835:; BB(0x00815835);
    /* 00815835: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 00815838: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00815839: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x81583eu); f_005c2f74();
    /* 0081583e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0081583f: jmp 0x815825 */ goto L_00815825;
}

void f_00815844(void) /* sub_815844 */
{
    FN_ENTER(0x00815844);
    /* 00815844: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00815845: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00815848: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 0081584c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0081584d: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x815852u); f_00858009();
    /* 00815852: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00815853: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00815855: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00815857: jl 0x8158fb */ if ((fS!=fO)) goto L_008158fb;
L_0081585d:; BB(0x0081585d);
    /* 0081585d: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00815860: jl 0x8158d5 */ if ((fS!=fO)) goto L_008158d5;
L_00815862:; BB(0x00815862);
    /* 00815862: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
L_00815866:; BB(0x00815866);
    /* 00815866: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00815869: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081586b: movzx ebx, word ptr [ecx] */ r_ebx = (u32)R16((u32)(r_ecx));
    /* 0081586e: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00815871: jg 0x815945 */ if ((!fZ&&fS==fO)) goto L_00815945;
L_00815877:; BB(0x00815877);
    /* 00815877: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081587a: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 0081587d: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0081587f: movzx ebx, word ptr [ecx] */ r_ebx = (u32)R16((u32)(r_ecx));
    /* 00815882: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00815885: jg 0x81595d */ if ((!fZ&&fS==fO)) goto L_0081595d;
L_0081588b:; BB(0x0081588b);
    /* 0081588b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081588e: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00815891: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815893: movzx ebx, word ptr [ecx] */ r_ebx = (u32)R16((u32)(r_ecx));
    /* 00815896: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00815899: jg 0x815957 */ if ((!fZ&&fS==fO)) goto L_00815957;
L_0081589f:; BB(0x0081589f);
    /* 0081589f: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008158a2: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 008158a5: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008158a7: movzx ebx, word ptr [ecx] */ r_ebx = (u32)R16((u32)(r_ecx));
    /* 008158aa: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008158ad: jg 0x815951 */ if ((!fZ&&fS==fO)) goto L_00815951;
L_008158b3:; BB(0x008158b3);
    /* 008158b3: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008158b6: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 008158b9: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008158bb: movzx ebx, word ptr [ecx] */ r_ebx = (u32)R16((u32)(r_ecx));
    /* 008158be: cmp ebx, 0x20 */ {  u32 a = r_ebx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008158c1: jg 0x81594b */ if ((!fZ&&fS==fO)) goto L_0081594b;
L_008158c7:; BB(0x008158c7);
    /* 008158c7: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008158ca: lea ecx, [eax - 6] */ r_ecx = (u32)(r_eax+0xfffffffau);
    /* 008158cd: cmp edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008158cf: jle 0x815866 */ if ((fZ||fS!=fO)) goto L_00815866;
L_008158d1:; BB(0x008158d1);
    /* 008158d1: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
L_008158d5:; BB(0x008158d5);
    /* 008158d5: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 008158d9: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 008158dc: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
L_008158df:; BB(0x008158df);
    /* 008158df: lea ebx, [edi + ecx] */ r_ebx = (u32)(r_edi+r_ecx);
    /* 008158e2: movzx esi, word ptr [ebx] */ r_esi = (u32)R16((u32)(r_ebx));
    /* 008158e5: cmp esi, 0x20 */ {  u32 a = r_esi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008158e8: jg 0x81590e */ if ((!fZ&&fS==fO)) goto L_0081590e;
L_008158ea:; BB(0x008158ea);
    /* 008158ea: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008158ed: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008158f0: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008158f2: jle 0x8158df */ if ((fZ||fS!=fO)) goto L_008158df;
L_008158f4:; BB(0x008158f4);
    /* 008158f4: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 008158f8: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_008158fb:; BB(0x008158fb);
    /* 008158fb: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 00815900: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00815901: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x815906u); f_00857fed();
    /* 00815906: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00815909:; BB(0x00815909);
    /* 00815909: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0081590c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0081590d: ret  */ FN_RET(0x00815844); r_esp += 4; return;
L_0081590e:; BB(0x0081590e);
    /* 0081590e: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00815911: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00815913: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
L_00815917:; BB(0x00815917);
    /* 00815917: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00815919: jg 0x8158fb */ if ((!fZ&&fS==fO)) goto L_008158fb;
L_0081591b:; BB(0x0081591b);
    /* 0081591b: movzx edx, word ptr [edi + eax*2] */ r_edx = (u32)R16((u32)(r_edi+r_eax*2));
    /* 0081591f: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00815922: jle 0x815930 */ if ((fZ||fS!=fO)) goto L_00815930;
L_00815924:; BB(0x00815924);
    /* 00815924: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00815925: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00815926: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x81592bu); f_00857fed();
    /* 0081592b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0081592e: jmp 0x815909 */ goto L_00815909;
L_00815930:; BB(0x00815930);
    /* 00815930: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00815932: mov word ptr [edi + eax*2], dx */ W16((u32)(r_edi+r_eax*2), (u16)r_edx);
    /* 00815936: movzx edx, word ptr [edi + eax*2 - 2] */ r_edx = (u32)R16((u32)(r_edi+r_eax*2+0xfffffffeu));
    /* 0081593b: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0081593e: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00815941: jle 0x815930 */ if ((fZ||fS!=fO)) goto L_00815930;
L_00815943:; BB(0x00815943);
    /* 00815943: jmp 0x815924 */ goto L_00815924;
L_00815945:; BB(0x00815945);
    /* 00815945: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00815949: jmp 0x815917 */ goto L_00815917;
L_0081594b:; BB(0x0081594b);
    /* 0081594b: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0081594f: jmp 0x815917 */ goto L_00815917;
L_00815951:; BB(0x00815951);
    /* 00815951: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00815955: jmp 0x815917 */ goto L_00815917;
L_00815957:; BB(0x00815957);
    /* 00815957: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 0081595b: jmp 0x815917 */ goto L_00815917;
L_0081595d:; BB(0x0081595d);
    /* 0081595d: mov ebx, dword ptr [esp + 4] */ r_ebx = R32((u32)(r_esp+0x4u));
    /* 00815961: jmp 0x815917 */ goto L_00815917;
}

void f_00815964(void) /* sub_815964 */
{
    FN_ENTER(0x00815964);
    /* 00815964: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00815965: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00815966: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00815967: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0081596b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0081596c: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x815971u); f_00858009();
    /* 00815971: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00815972: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00815974: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00815976: jl 0x815998 */ if ((fS!=fO)) goto L_00815998;
L_00815978:; BB(0x00815978);
    /* 00815978: lea ecx, [edi + edi] */ r_ecx = (u32)(r_edi+r_edi);
L_0081597b:; BB(0x0081597b);
    /* 0081597b: movzx edx, word ptr [ebp + edi*2] */ r_edx = (u32)R16((u32)(r_ebp+r_edi*2));
    /* 00815980: lea ebx, [ebp + ecx] */ r_ebx = (u32)(r_ebp+r_ecx);
    /* 00815984: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815987: je 0x8159df */ if (fZ) goto L_008159df;
L_00815989:; BB(0x00815989);
    /* 00815989: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0081598c: jg 0x8159aa */ if ((!fZ&&fS==fO)) goto L_008159aa;
L_0081598e:; BB(0x0081598e);
    /* 0081598e: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815991: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00815994: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00815996: jle 0x81597b */ if ((fZ||fS!=fO)) goto L_0081597b;
L_00815998:; BB(0x00815998);
    /* 00815998: push 0x8f8818 */ { u32 v = 0x8f8818u; r_esp -= 4; W32(r_esp, v); }
    /* 0081599d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0081599e: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x8159a3u); f_00857fed();
    /* 008159a3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008159a6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008159a7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008159a8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008159a9: ret  */ FN_RET(0x00815964); r_esp += 4; return;
L_008159aa:; BB(0x008159aa);
    /* 008159aa: mov ecx, ebx */ r_ecx = r_ebx;
L_008159ac:; BB(0x008159ac);
    /* 008159ac: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008159af: je 0x8159d1 */ if (fZ) goto L_008159d1;
L_008159b1:; BB(0x008159b1);
    /* 008159b1: lea eax, [ebp + eax*2 + 2] */ r_eax = (u32)(r_ebp+r_eax*2+0x2u);
L_008159b5:; BB(0x008159b5);
    /* 008159b5: movzx edx, word ptr [eax - 2] */ r_edx = (u32)R16((u32)(r_eax+0xfffffffeu));
    /* 008159b9: cmp edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008159bc: jg 0x8159d1 */ if ((!fZ&&fS==fO)) goto L_008159d1;
L_008159be:; BB(0x008159be);
    /* 008159be: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008159c0: mov word ptr [eax - 2], dx */ W16((u32)(r_eax+0xfffffffeu), (u16)r_edx);
    /* 008159c4: movzx edx, word ptr [ebp + edi*2] */ r_edx = (u32)R16((u32)(r_ebp+r_edi*2));
    /* 008159c9: add eax, -2 */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008159cc: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008159cf: jne 0x8159b5 */ if (!fZ) goto L_008159b5;
L_008159d1:; BB(0x008159d1);
    /* 008159d1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008159d2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008159d3: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x8159d8u); f_00857fed();
    /* 008159d8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008159db: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008159dc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008159dd: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008159de: ret  */ FN_RET(0x00815964); r_esp += 4; return;
L_008159df:; BB(0x008159df);
    /* 008159df: mov ecx, ebx */ r_ecx = r_ebx;
    /* 008159e1: jmp 0x8159ac */ goto L_008159ac;
}

void f_008159e4(void) /* sub_8159E4 */
{
    FN_ENTER(0x008159e4);
    /* 008159e4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008159e5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008159e6: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008159e7: mov esi, ecx */ r_esi = r_ecx;
    /* 008159e9: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 008159ed: mov ecx, esi */ r_ecx = r_esi;
    /* 008159ef: call 0x815a84 */ r_esp -= 4; W32(r_esp, 0x8159f4u); f_00815a84();
    /* 008159f4: mov eax, edi */ r_eax = r_edi;
    /* 008159f6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008159f8: mov ebx, edx */ r_ebx = r_edx;
L_008159fa:; BB(0x008159fa);
    /* 008159fa: movzx edx, word ptr [edi] */ r_edx = (u32)R16((u32)(r_edi));
    /* 008159fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008159ff: je 0x815a76 */ if (fZ) goto L_00815a76;
L_00815a01:; BB(0x00815a01);
    /* 00815a01: cmp edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815a04: je 0x815a23 */ if (fZ) goto L_00815a23;
L_00815a06:; BB(0x00815a06);
    /* 00815a06: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00815a09: jl 0x815a1e */ if ((fS!=fO)) goto L_00815a1e;
L_00815a0b:; BB(0x00815a0b);
    /* 00815a0b: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00815a0e: jle 0x815a15 */ if ((fZ||fS!=fO)) goto L_00815a15;
L_00815a10:; BB(0x00815a10);
    /* 00815a10: cmp edx, 0x2c */ {  u32 a = r_edx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815a13: jne 0x815a1e */ if (!fZ) goto L_00815a1e;
L_00815a15:; BB(0x00815a15);
    /* 00815a15: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815a17: je 0x815a41 */ if (fZ) goto L_00815a41;
L_00815a19:; BB(0x00815a19);
    /* 00815a19: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00815a1c: jmp 0x8159fa */ goto L_008159fa;
L_00815a1e:; BB(0x00815a1e);
    /* 00815a1e: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00815a21: jmp 0x8159fa */ goto L_008159fa;
L_00815a23:; BB(0x00815a23);
    /* 00815a23: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815a25: je 0x815a35 */ if (fZ) goto L_00815a35;
L_00815a27:; BB(0x00815a27);
    /* 00815a27: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00815a29: mov ecx, edi */ r_ecx = r_edi;
    /* 00815a2b: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00815a2e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00815a30: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00815a33: jmp 0x8159fa */ goto L_008159fa;
L_00815a35:; BB(0x00815a35);
    /* 00815a35: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00815a3a: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00815a3d: mov eax, edi */ r_eax = r_edi;
    /* 00815a3f: jmp 0x8159fa */ goto L_008159fa;
L_00815a41:; BB(0x00815a41);
    /* 00815a41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00815a42: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00815a44: mov word ptr [edi], dx */ W16((u32)(r_edi), (u16)r_edx);
    /* 00815a47: mov ecx, dword ptr [esi + 0x209c] */ r_ecx = R32((u32)(r_esi+0x209cu));
    /* 00815a4d: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 00815a50: mov dword ptr [esi + 0x209c], edx */ W32((u32)(r_esi+0x209cu), r_edx);
    /* 00815a56: add edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00815a59: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815a5b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815a5d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815a5f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815a61: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815a63: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815a65: lea edx, [esi + ecx + 0x1c] */ r_edx = (u32)(r_esi+r_ecx+0x1cu);
    /* 00815a69: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00815a6a: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x815a6fu); f_00857fed();
    /* 00815a6f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00815a72: mov eax, edi */ r_eax = r_edi;
    /* 00815a74: jmp 0x8159fa */ goto L_008159fa;
L_00815a76:; BB(0x00815a76);
    /* 00815a76: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00815a77: mov ecx, esi */ r_ecx = r_esi;
    /* 00815a79: call 0x815aa8 */ r_esp -= 4; W32(r_esp, 0x815a7eu); f_00815aa8();
    /* 00815a7e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00815a7f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00815a80: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00815a81: ret 4 */ FN_RET(0x008159e4); r_esp += 8; return;
}

void f_00815a84(void) /* sub_815A84 */
{
    FN_ENTER(0x00815a84);
    /* 00815a84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00815a85: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00815a87: lea eax, [ebp + 0x1c] */ r_eax = (u32)(r_ebp+0x1cu);
    /* 00815a8a: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 00815a8f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00815a91: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00815a92: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x815a97u); f_0086b688();
    /* 00815a97: mov dword ptr [ebp + 0x209c], 0 */ W32((u32)(r_ebp+0x209cu), 0x0u);
    /* 00815aa1: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00815aa4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00815aa5: ret  */ FN_RET(0x00815a84); r_esp += 4; return;
}

void f_00815aa8(void) /* sub_815AA8 */
{
    FN_ENTER(0x00815aa8);
    /* 00815aa8: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00815aac: mov edx, dword ptr [ecx + 0x209c] */ r_edx = R32((u32)(r_ecx+0x209cu));
    /* 00815ab2: lea eax, [edx + 1] */ r_eax = (u32)(r_edx+0x1u);
    /* 00815ab5: mov dword ptr [ecx + 0x209c], eax */ W32((u32)(r_ecx+0x209cu), r_eax);
    /* 00815abb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00815abd: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00815abf: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00815ac1: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00815ac3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00815ac5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00815ac7: lea eax, [edx + ecx + 0x1c] */ r_eax = (u32)(r_edx+r_ecx+0x1cu);
    /* 00815acb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00815acc: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x815ad1u); f_00857fed();
    /* 00815ad1: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00815ad4: ret 4 */ FN_RET(0x00815aa8); r_esp += 8; return;
}

void f_00815ad8(void) /* sub_815AD8 */
{
    FN_ENTER(0x00815ad8);
    /* 00815ad8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00815ad9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00815ada: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00815adb: mov esi, ecx */ r_esi = r_ecx;
    /* 00815add: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00815ae1: mov ecx, esi */ r_ecx = r_esi;
    /* 00815ae3: call 0x815a84 */ r_esp -= 4; W32(r_esp, 0x815ae8u); f_00815a84();
    /* 00815ae8: mov eax, edi */ r_eax = r_edi;
    /* 00815aea: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00815aec: mov ebx, edi */ r_ebx = r_edi;
    /* 00815aee: mov edi, edx */ r_edi = r_edx;
L_00815af0:; BB(0x00815af0);
    /* 00815af0: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 00815af3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815af5: je 0x815b67 */ if (fZ) goto L_00815b67;
L_00815af7:; BB(0x00815af7);
    /* 00815af7: cmp edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815afa: jne 0x815b1a */ if (!fZ) goto L_00815b1a;
L_00815afc:; BB(0x00815afc);
    /* 00815afc: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815afe: je 0x815b0e */ if (fZ) goto L_00815b0e;
L_00815b00:; BB(0x00815b00);
    /* 00815b00: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00815b02: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00815b04: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00815b07: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00815b09: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00815b0c: jmp 0x815af0 */ goto L_00815af0;
L_00815b0e:; BB(0x00815b0e);
    /* 00815b0e: mov edi, 1 */ r_edi = 0x1u;
    /* 00815b13: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00815b16: mov eax, ebx */ r_eax = r_ebx;
    /* 00815b18: jmp 0x815af0 */ goto L_00815af0;
L_00815b1a:; BB(0x00815b1a);
    /* 00815b1a: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00815b1d: jl 0x815b62 */ if ((fS!=fO)) goto L_00815b62;
L_00815b1f:; BB(0x00815b1f);
    /* 00815b1f: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00815b22: jg 0x815b62 */ if ((!fZ&&fS==fO)) goto L_00815b62;
L_00815b24:; BB(0x00815b24);
    /* 00815b24: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815b26: je 0x815b2d */ if (fZ) goto L_00815b2d;
L_00815b28:; BB(0x00815b28);
    /* 00815b28: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00815b2b: jmp 0x815af0 */ goto L_00815af0;
L_00815b2d:; BB(0x00815b2d);
    /* 00815b2d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00815b2e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00815b30: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 00815b33: mov ecx, dword ptr [esi + 0x209c] */ r_ecx = R32((u32)(r_esi+0x209cu));
    /* 00815b39: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 00815b3c: mov dword ptr [esi + 0x209c], edx */ W32((u32)(r_esi+0x209cu), r_edx);
    /* 00815b42: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00815b45: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815b47: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815b49: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815b4b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815b4d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815b4f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815b51: lea edx, [esi + ecx + 0x1c] */ r_edx = (u32)(r_esi+r_ecx+0x1cu);
    /* 00815b55: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00815b56: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x815b5bu); f_00857fed();
    /* 00815b5b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00815b5e: mov eax, ebx */ r_eax = r_ebx;
    /* 00815b60: jmp 0x815af0 */ goto L_00815af0;
L_00815b62:; BB(0x00815b62);
    /* 00815b62: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00815b65: jmp 0x815af0 */ goto L_00815af0;
L_00815b67:; BB(0x00815b67);
    /* 00815b67: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00815b68: mov ecx, esi */ r_ecx = r_esi;
    /* 00815b6a: call 0x815aa8 */ r_esp -= 4; W32(r_esp, 0x815b6fu); f_00815aa8();
    /* 00815b6f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00815b70: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00815b71: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00815b72: ret 4 */ FN_RET(0x00815ad8); r_esp += 8; return;
}

void f_00815b78(void) /* sub_815B78 */
{
    FN_ENTER(0x00815b78);
    /* 00815b78: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00815b79: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00815b7a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00815b7b: mov esi, ecx */ r_esi = r_ecx;
    /* 00815b7d: mov edi, dword ptr [esp + 0x10] */ r_edi = R32((u32)(r_esp+0x10u));
    /* 00815b81: mov ecx, esi */ r_ecx = r_esi;
    /* 00815b83: call 0x815a84 */ r_esp -= 4; W32(r_esp, 0x815b88u); f_00815a84();
    /* 00815b88: mov eax, edi */ r_eax = r_edi;
    /* 00815b8a: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00815b8c: mov ebx, edi */ r_ebx = r_edi;
    /* 00815b8e: mov edi, edx */ r_edi = r_edx;
L_00815b90:; BB(0x00815b90);
    /* 00815b90: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 00815b93: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815b95: je 0x815c02 */ if (fZ) goto L_00815c02;
L_00815b97:; BB(0x00815b97);
    /* 00815b97: cmp edx, 0x22 */ {  u32 a = r_edx; u32 b = 0x22u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815b9a: jne 0x815bba */ if (!fZ) goto L_00815bba;
L_00815b9c:; BB(0x00815b9c);
    /* 00815b9c: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815b9e: je 0x815bae */ if (fZ) goto L_00815bae;
L_00815ba0:; BB(0x00815ba0);
    /* 00815ba0: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00815ba2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00815ba4: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00815ba7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00815ba9: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00815bac: jmp 0x815b90 */ goto L_00815b90;
L_00815bae:; BB(0x00815bae);
    /* 00815bae: mov edi, 1 */ r_edi = 0x1u;
    /* 00815bb3: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00815bb6: mov eax, ebx */ r_eax = r_ebx;
    /* 00815bb8: jmp 0x815b90 */ goto L_00815b90;
L_00815bba:; BB(0x00815bba);
    /* 00815bba: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815bbd: jne 0x815bfd */ if (!fZ) goto L_00815bfd;
L_00815bbf:; BB(0x00815bbf);
    /* 00815bbf: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815bc1: je 0x815bc8 */ if (fZ) goto L_00815bc8;
L_00815bc3:; BB(0x00815bc3);
    /* 00815bc3: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00815bc6: jmp 0x815b90 */ goto L_00815b90;
L_00815bc8:; BB(0x00815bc8);
    /* 00815bc8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00815bc9: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00815bcb: mov word ptr [ebx], dx */ W16((u32)(r_ebx), (u16)r_edx);
    /* 00815bce: mov ecx, dword ptr [esi + 0x209c] */ r_ecx = R32((u32)(r_esi+0x209cu));
    /* 00815bd4: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 00815bd7: mov dword ptr [esi + 0x209c], edx */ W32((u32)(r_esi+0x209cu), r_edx);
    /* 00815bdd: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00815be0: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815be2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815be4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815be6: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815be8: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815bea: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815bec: lea edx, [esi + ecx + 0x1c] */ r_edx = (u32)(r_esi+r_ecx+0x1cu);
    /* 00815bf0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00815bf1: call 0x857fed */ r_esp -= 4; W32(r_esp, 0x815bf6u); f_00857fed();
    /* 00815bf6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00815bf9: mov eax, ebx */ r_eax = r_ebx;
    /* 00815bfb: jmp 0x815b90 */ goto L_00815b90;
L_00815bfd:; BB(0x00815bfd);
    /* 00815bfd: add ebx, 2 */ {  u32 a = r_ebx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00815c00: jmp 0x815b90 */ goto L_00815b90;
L_00815c02:; BB(0x00815c02);
    /* 00815c02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00815c03: mov ecx, esi */ r_ecx = r_esi;
    /* 00815c05: call 0x815aa8 */ r_esp -= 4; W32(r_esp, 0x815c0au); f_00815aa8();
    /* 00815c0a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00815c0b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00815c0c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00815c0d: ret 4 */ FN_RET(0x00815b78); r_esp += 8; return;
}

void f_00815c10(void) /* sub_815C10 */
{
    FN_ENTER(0x00815c10);
    /* 00815c10: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00815c13: mov edx, ecx */ r_edx = r_ecx;
    /* 00815c15: mov ecx, dword ptr [edx + 0x209c] */ r_ecx = R32((u32)(r_edx+0x209cu));
    /* 00815c1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00815c1d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00815c1f: jle 0x815c81 */ if ((fZ||fS!=fO)) goto L_00815c81;
L_00815c21:; BB(0x00815c21);
    /* 00815c21: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00815c25: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00815c29: mov esi, eax */ r_esi = r_eax;
    /* 00815c2b: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00815c2e: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815c30: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00815c33: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815c35: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815c37: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815c39: lea ecx, [ecx + ecx + 0x1c] */ r_ecx = (u32)(r_ecx+r_ecx+0x1cu);
    /* 00815c3d: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815c3f: mov edi, edx */ r_edi = r_edx;
    /* 00815c41: mov ebx, ecx */ r_ebx = r_ecx;
L_00815c43:; BB(0x00815c43);
    /* 00815c43: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00815c44: call 0x708898 */ r_esp -= 4; W32(r_esp, 0x815c49u); f_00708898();
    /* 00815c49: mov ecx, eax */ r_ecx = r_eax;
    /* 00815c4b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00815c4c: mov edx, dword ptr [edi + 0x20a0] */ r_edx = R32((u32)(r_edi+0x20a0u));
    /* 00815c52: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00815c55: mov eax, esi */ r_eax = r_esi;
    /* 00815c57: add eax, dword ptr [edi + 0x20a4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x20a4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00815c5d: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00815c5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00815c60: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x815c65u); f_0061cdb0();
    /* 00815c65: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00815c68: add ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00815c6b: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00815c6e: cmp esi, dword ptr [edi + 0x209c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x209cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00815c74: jl 0x815c43 */ if ((fS!=fO)) goto L_00815c43;
L_00815c76:; BB(0x00815c76);
    /* 00815c76: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00815c7a: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00815c7e: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00815c81:; BB(0x00815c81);
    /* 00815c81: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00815c84: ret  */ FN_RET(0x00815c10); r_esp += 4; return;
}

void f_00815c88(void) /* sub_815C88 */
{
    FN_ENTER(0x00815c88);
    /* 00815c88: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00815c89: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00815c8b: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00815c8f: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00815c93: push dword ptr [esp + 0x10] */ { u32 v = R32((u32)(r_esp+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00815c97: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00815c99: call 0x815cc0 */ r_esp -= 4; W32(r_esp, 0x815c9eu); f_00815cc0();
    /* 00815c9e: mov dword ptr [ebx], 0xb47908 */ W32((u32)(r_ebx), 0xb47908u);
    /* 00815ca4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00815ca6: mov dword ptr [ebx + 0x20a8], edx */ W32((u32)(r_ebx+0x20a8u), r_edx);
    /* 00815cac: mov dword ptr [ebx + 0x20b0], edx */ W32((u32)(r_ebx+0x20b0u), r_edx);
    /* 00815cb2: mov dword ptr [ebx + 0x20ac], edx */ W32((u32)(r_ebx+0x20acu), r_edx);
    /* 00815cb8: mov eax, ebx */ r_eax = r_ebx;
    /* 00815cba: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00815cbb: ret 0xc */ FN_RET(0x00815c88); r_esp += 16; return;
}

void f_00815cc0(void) /* sub_815CC0 */
{
    FN_ENTER(0x00815cc0);
    /* 00815cc0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00815cc1: mov edi, ecx */ r_edi = r_ecx;
    /* 00815cc3: push dword ptr [esp + 8] */ { u32 v = R32((u32)(r_esp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00815cc7: mov ecx, edi */ r_ecx = r_edi;
    /* 00815cc9: call 0x8193cc */ r_esp -= 4; W32(r_esp, 0x815cceu); f_008193cc();
    /* 00815cce: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00815cd2: mov edx, dword ptr [esp + 0x10] */ r_edx = R32((u32)(r_esp+0x10u));
    /* 00815cd6: mov dword ptr [edi], 0xb478f8 */ W32((u32)(r_edi), 0xb478f8u);
    /* 00815cdc: mov dword ptr [edi + 0x20a0], eax */ W32((u32)(r_edi+0x20a0u), r_eax);
    /* 00815ce2: push 0x2000 */ { u32 v = 0x2000u; r_esp -= 4; W32(r_esp, v); }
    /* 00815ce7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00815ce9: mov dword ptr [edi + 0x20a4], edx */ W32((u32)(r_edi+0x20a4u), r_edx);
    /* 00815cef: lea eax, [edi + 0x1c] */ r_eax = (u32)(r_edi+0x1cu);
    /* 00815cf2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00815cf3: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x815cf8u); f_0086b688();
    /* 00815cf8: mov dword ptr [edi + 0x209c], 0 */ W32((u32)(r_edi+0x209cu), 0x0u);
    /* 00815d02: mov eax, edi */ r_eax = r_edi;
    /* 00815d04: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00815d07: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00815d08: ret 0xc */ FN_RET(0x00815cc0); r_esp += 16; return;
}

void f_00815d0c(void) /* sub_815D0C */
{
    FN_ENTER(0x00815d0c);
    /* 00815d0c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00815d0d: mov edi, ecx */ r_edi = r_ecx;
    /* 00815d0f: mov ecx, edi */ r_ecx = r_edi;
    /* 00815d11: call 0x815d34 */ r_esp -= 4; W32(r_esp, 0x815d16u); f_00815d34();
    /* 00815d16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00815d18: je 0x815d31 */ if (fZ) goto L_00815d31;
L_00815d1a:; BB(0x00815d1a);
    /* 00815d1a: mov edx, dword ptr [edi + 0x20b0] */ r_edx = R32((u32)(r_edi+0x20b0u));
    /* 00815d20: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00815d22: je 0x815d31 */ if (fZ) goto L_00815d31;
L_00815d24:; BB(0x00815d24);
    /* 00815d24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00815d25: push dword ptr [edi + 0x20a8] */ { u32 v = R32((u32)(r_edi+0x20a8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00815d2b: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00815d2c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x815d2eu); call_ind(t); }
    /* 00815d2e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00815d31:; BB(0x00815d31);
    /* 00815d31: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00815d32: ret  */ FN_RET(0x00815d0c); r_esp += 4; return;
}

void f_00815d34(void) /* sub_815D34 */
{
    FN_ENTER(0x00815d34);
    /* 00815d34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00815d35: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00815d36: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00815d38: mov edx, dword ptr [ebx + 0x20ac] */ r_edx = R32((u32)(r_ebx+0x20acu));
    /* 00815d3e: lea ecx, [edx + edx*4] */ r_ecx = (u32)(r_edx+r_edx*4);
    /* 00815d41: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815d43: lea eax, [ecx + ecx] */ r_eax = (u32)(r_ecx+r_ecx);
    /* 00815d46: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00815d48: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00815d4a: mov edi, dword ptr [eax + 0xaae764] */ r_edi = R32((u32)(r_eax+0xaae764u));
    /* 00815d50: test dword ptr [0xa0f664], edi */ {  u32 a = R32((u32)(0xa0f664u)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815d56: mov edx, 0 */ r_edx = 0x0u;
    /* 00815d5b: je 0x815d75 */ if (fZ) goto L_00815d75;
L_00815d5d:; BB(0x00815d5d);
    /* 00815d5d: mov eax, dword ptr [ebx + 0x20a8] */ r_eax = R32((u32)(r_ebx+0x20a8u));
    /* 00815d63: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00815d66: mov dword ptr [ebx + 0x20a8], eax */ W32((u32)(r_ebx+0x20a8u), r_eax);
    /* 00815d6c: mov edi, dword ptr [ecx*8 + 0xaae764] */ r_edi = R32((u32)(r_ecx*8+0xaae764u));
    /* 00815d73: jmp 0x815d7b */ goto L_00815d7b;
L_00815d75:; BB(0x00815d75);
    /* 00815d75: mov eax, dword ptr [ebx + 0x20a8] */ r_eax = R32((u32)(r_ebx+0x20a8u));
L_00815d7b:; BB(0x00815d7b);
    /* 00815d7b: test dword ptr [0xa0f668], edi */ {  u32 a = R32((u32)(0xa0f668u)); u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815d81: je 0x815d86 */ if (fZ) goto L_00815d86;
L_00815d83:; BB(0x00815d83);
    /* 00815d83: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00815d86:; BB(0x00815d86);
    /* 00815d86: mov edi, dword ptr [ebx + 0x209c] */ r_edi = R32((u32)(r_ebx+0x209cu));
    /* 00815d8c: cmp eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00815d8e: jl 0x815d93 */ if ((fS!=fO)) goto L_00815d93;
L_00815d90:; BB(0x00815d90);
    /* 00815d90: lea eax, [edi - 1] */ r_eax = (u32)(r_edi+0xffffffffu);
L_00815d93:; BB(0x00815d93);
    /* 00815d93: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00815d95: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00815d97: jg 0x815d9b */ if ((!fZ&&fS==fO)) goto L_00815d9b;
L_00815d99:; BB(0x00815d99);
    /* 00815d99: mov eax, edi */ r_eax = r_edi;
L_00815d9b:; BB(0x00815d9b);
    /* 00815d9b: mov dword ptr [ebx + 0x20a8], eax */ W32((u32)(r_ebx+0x20a8u), r_eax);
    /* 00815da1: mov eax, dword ptr [ecx*8 + 0xaae764] */ r_eax = R32((u32)(r_ecx*8+0xaae764u));
    /* 00815da8: test dword ptr [0xa0f674], eax */ {  u32 a = R32((u32)(0xa0f674u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815dae: je 0x815db5 */ if (fZ) goto L_00815db5;
L_00815db0:; BB(0x00815db0);
    /* 00815db0: mov edx, 1 */ r_edx = 0x1u;
L_00815db5:; BB(0x00815db5);
    /* 00815db5: test dword ptr [0xa0f678], eax */ {  u32 a = R32((u32)(0xa0f678u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815dbb: je 0x815dc0 */ if (fZ) goto L_00815dc0;
L_00815dbd:; BB(0x00815dbd);
    /* 00815dbd: or edx, 2 */ {  u32 a = r_edx; u32 b = 0x2u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
L_00815dc0:; BB(0x00815dc0);
    /* 00815dc0: test dword ptr [0xa0f67c], eax */ {  u32 a = R32((u32)(0xa0f67cu)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815dc6: je 0x815dcb */ if (fZ) goto L_00815dcb;
L_00815dc8:; BB(0x00815dc8);
    /* 00815dc8: or edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
L_00815dcb:; BB(0x00815dcb);
    /* 00815dcb: test dword ptr [0xa0f680], eax */ {  u32 a = R32((u32)(0xa0f680u)); u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00815dd1: je 0x815dd6 */ if (fZ) goto L_00815dd6;
L_00815dd3:; BB(0x00815dd3);
    /* 00815dd3: or edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
L_00815dd6:; BB(0x00815dd6);
    /* 00815dd6: mov eax, edx */ r_eax = r_edx;
    /* 00815dd8: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00815dd9: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00815dda: ret  */ FN_RET(0x00815d34); r_esp += 4; return;
}

void f_00815ddc(void) /* sub_815DDC */
{
    FN_ENTER(0x00815ddc);
    /* 00815ddc: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00815ddf: mov edx, ecx */ r_edx = r_ecx;
    /* 00815de1: mov ecx, dword ptr [edx + 0x209c] */ r_ecx = R32((u32)(r_edx+0x209cu));
    /* 00815de7: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00815de9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00815deb: jle 0x815e4f */ if ((fZ||fS!=fO)) goto L_00815e4f;
L_00815ded:; BB(0x00815ded);
    /* 00815ded: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00815df1: mov dword ptr [esp + 4], esi */ W32((u32)(r_esp+0x4u), r_esi);
    /* 00815df5: mov esi, eax */ r_esi = r_eax;
    /* 00815df7: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00815dfa: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815dfc: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00815dff: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815e01: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815e03: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815e05: lea ecx, [ecx + ecx + 0x1c] */ r_ecx = (u32)(r_ecx+r_ecx+0x1cu);
    /* 00815e09: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815e0b: mov edi, edx */ r_edi = r_edx;
    /* 00815e0d: mov ebx, ecx */ r_ebx = r_ecx;
L_00815e0f:; BB(0x00815e0f);
    /* 00815e0f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00815e10: call 0x708898 */ r_esp -= 4; W32(r_esp, 0x815e15u); f_00708898();
    /* 00815e15: mov ecx, eax */ r_ecx = r_eax;
    /* 00815e17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00815e18: mov edx, dword ptr [edi + 0x20a0] */ r_edx = R32((u32)(r_edi+0x20a0u));
    /* 00815e1e: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00815e21: mov eax, esi */ r_eax = r_esi;
    /* 00815e23: add eax, dword ptr [edi + 0x20a4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edi+0x20a4u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00815e29: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00815e2b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00815e2c: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x815e31u); f_0061cdb0();
    /* 00815e31: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00815e34: add ebx, 0x40 */ {  u32 a = r_ebx; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00815e37: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00815e3a: cmp esi, dword ptr [edi + 0x209c] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edi+0x209cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00815e40: jl 0x815e0f */ if ((fS!=fO)) goto L_00815e0f;
L_00815e42:; BB(0x00815e42);
    /* 00815e42: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 00815e46: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
    /* 00815e4a: mov edx, edi */ r_edx = r_edi;
    /* 00815e4c: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00815e4f:; BB(0x00815e4f);
    /* 00815e4f: push 0x97d384 */ { u32 v = 0x97d384u; r_esp -= 4; W32(r_esp, v); }
    /* 00815e54: mov ecx, dword ptr [edx + 0x20a0] */ r_ecx = R32((u32)(r_edx+0x20a0u));
    /* 00815e5a: mov eax, dword ptr [edx + 0x20a4] */ r_eax = R32((u32)(r_edx+0x20a4u));
    /* 00815e60: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00815e63: add eax, dword ptr [edx + 0x20a8] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x20a8u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00815e69: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00815e6c: or ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00815e6e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00815e6f: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x815e74u); f_0061cdb0();
    /* 00815e74: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00815e77: ret  */ FN_RET(0x00815ddc); r_esp += 4; return;
}

void f_00815e78(void) /* sub_815E78 */
{
    FN_ENTER(0x00815e78);
    /* 00815e78: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 00815e7d: movzx edx, ax */ r_edx = (u32)(u16)r_eax;
    /* 00815e80: cmp edx, 0x61 */ {  u32 a = r_edx; u32 b = 0x61u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00815e83: jl 0x815e8a */ if ((fS!=fO)) goto L_00815e8a;
L_00815e85:; BB(0x00815e85);
    /* 00815e85: cmp edx, 0x7a */ {  u32 a = r_edx; u32 b = 0x7au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00815e88: jle 0x815e9a */ if ((fZ||fS!=fO)) goto L_00815e9a;
L_00815e8a:; BB(0x00815e8a);
    /* 00815e8a: cmp edx, 0xc0 */ {  u32 a = r_edx; u32 b = 0xc0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00815e90: jl 0x815ea0 */ if ((fS!=fO)) goto L_00815ea0;
L_00815e92:; BB(0x00815e92);
    /* 00815e92: cmp edx, 0xff */ {  u32 a = r_edx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00815e98: jg 0x815ea0 */ if ((!fZ&&fS==fO)) goto L_00815ea0;
L_00815e9a:; BB(0x00815e9a);
    /* 00815e9a: add edx, -0x20 */ {  u32 a = r_edx; u32 b = 0xffffffe0u; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00815e9d: movzx eax, dx */ r_eax = (u32)(u16)r_edx;
L_00815ea0:; BB(0x00815ea0);
    /* 00815ea0: ret  */ FN_RET(0x00815e78); r_esp += 4; return;
}

void f_00815ea4(void) /* sub_815EA4 */
{
    FN_ENTER(0x00815ea4);
    /* 00815ea4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00815ea5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00815ea6: mov eax, dword ptr [esp + 0xc] */ r_eax = R32((u32)(r_esp+0xcu));
    /* 00815eaa: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 00815ead: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815eaf: je 0x815ef8 */ if (fZ) goto L_00815ef8;
L_00815eb1:; BB(0x00815eb1);
    /* 00815eb1: cmp edx, 9 */ {  u32 a = r_edx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815eb4: jne 0x815ebf */ if (!fZ) goto L_00815ebf;
L_00815eb6:; BB(0x00815eb6);
    /* 00815eb6: movzx edx, word ptr [eax + 2] */ r_edx = (u32)R16((u32)(r_eax+0x2u));
    /* 00815eba: cmp edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815ebd: je 0x815ef8 */ if (fZ) goto L_00815ef8;
L_00815ebf:; BB(0x00815ebf);
    /* 00815ebf: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00815ec1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00815ec2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00815ec3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00815ec4: call 0x7ac580 */ r_esp -= 4; W32(r_esp, 0x815ec9u); f_007ac580();
    /* 00815ec9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00815ecc: movzx ecx, word ptr [eax] */ r_ecx = (u32)R16((u32)(r_eax));
    /* 00815ecf: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815ed1: je 0x815ef8 */ if (fZ) goto L_00815ef8;
L_00815ed3:; BB(0x00815ed3);
    /* 00815ed3: cmp ecx, 9 */ {  u32 a = r_ecx; u32 b = 0x9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815ed6: je 0x815f15 */ if (fZ) goto L_00815f15;
L_00815ed8:; BB(0x00815ed8);
    /* 00815ed8: lea ebx, [eax + 2] */ r_ebx = (u32)(r_eax+0x2u);
L_00815edb:; BB(0x00815edb);
    /* 00815edb: mov esi, dword ptr [0xac9f8c] */ r_esi = R32((u32)(0xac9f8cu));
    /* 00815ee1: lea edx, [eax + 2] */ r_edx = (u32)(r_eax+0x2u);
    /* 00815ee4: lea eax, [esi + 2] */ r_eax = (u32)(r_esi+0x2u);
    /* 00815ee7: mov dword ptr [0xac9f8c], eax */ W32((u32)(0xac9f8cu), r_eax);
    /* 00815eec: mov word ptr [esi], cx */ W16((u32)(r_esi), (u16)r_ecx);
    /* 00815eef: movzx edx, word ptr [edx] */ r_edx = (u32)R16((u32)(r_edx));
    /* 00815ef2: mov eax, ebx */ r_eax = r_ebx;
    /* 00815ef4: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815ef6: jne 0x815eb1 */ if (!fZ) goto L_00815eb1;
L_00815ef8:; BB(0x00815ef8);
    /* 00815ef8: mov ecx, dword ptr [0xac9f8c] */ r_ecx = R32((u32)(0xac9f8cu));
    /* 00815efe: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00815f00: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 00815f03: movzx edx, word ptr [eax] */ r_edx = (u32)R16((u32)(r_eax));
    /* 00815f06: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815f08: jne 0x815f0f */ if (!fZ) goto L_00815f0f;
L_00815f0a:; BB(0x00815f0a);
    /* 00815f0a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00815f0c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00815f0d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00815f0e: ret  */ FN_RET(0x00815ea4); r_esp += 4; return;
L_00815f0f:; BB(0x00815f0f);
    /* 00815f0f: add eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00815f12: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00815f13: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00815f14: ret  */ FN_RET(0x00815ea4); r_esp += 4; return;
L_00815f15:; BB(0x00815f15);
    /* 00815f15: lea ebx, [eax + 2] */ r_ebx = (u32)(r_eax+0x2u);
    /* 00815f18: movzx edx, word ptr [ebx] */ r_edx = (u32)R16((u32)(r_ebx));
    /* 00815f1b: cmp edx, 0x50 */ {  u32 a = r_edx; u32 b = 0x50u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815f1e: je 0x815ef8 */ if (fZ) goto L_00815ef8;
L_00815f20:; BB(0x00815f20);
    /* 00815f20: jmp 0x815edb */ goto L_00815edb;
}

void f_00815f24(void) /* sub_815F24 */
{
    FN_ENTER(0x00815f24);
    /* 00815f24: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00815f25: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00815f26: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00815f27: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00815f28: sub esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00815f2b: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00815f2f: mov eax, dword ptr [0xac9f8c] */ r_eax = R32((u32)(0xac9f8cu));
    /* 00815f34: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00815f38: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00815f3a: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00815f3d: je 0x8162b0 */ if (fZ) goto L_008162b0;
L_00815f43:; BB(0x00815f43);
    /* 00815f43: mov eax, edx */ r_eax = r_edx;
    /* 00815f45: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00815f47: jge 0x815f62 */ if ((fS==fO)) goto L_00815f62;
L_00815f49:; BB(0x00815f49);
    /* 00815f49: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00815f4c: mov edi, ebp */ r_edi = r_ebp;
    /* 00815f4e: add ebp, 2 */ {  u32 a = r_ebp; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00815f51: mov esi, 0x2d */ r_esi = 0x2du;
    /* 00815f56: mov word ptr [edi], si */ W16((u32)(r_edi), (u16)r_esi);
    /* 00815f59: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00815f5c: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00815f5e: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
L_00815f62:; BB(0x00815f62);
    /* 00815f62: mov ecx, eax */ r_ecx = r_eax;
    /* 00815f64: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00815f69: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00815f6b: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00815f6d: mov esi, ecx */ r_esi = r_ecx;
    /* 00815f6f: mov ebx, edx */ r_ebx = r_edx;
    /* 00815f71: sar ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00815f74: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00815f77: sub ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00815f79: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 00815f7c: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00815f7e: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00815f80: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00815f82: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00815f84: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00815f86: mov dword ptr [esp + 8], ecx */ W32((u32)(r_esp+0x8u), r_ecx);
    /* 00815f8a: jle 0x816276 */ if ((fZ||fS!=fO)) goto L_00816276;
L_00815f90:; BB(0x00815f90);
    /* 00815f90: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00815f95: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00815f97: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00815f9c: mov esi, ebx */ r_esi = r_ebx;
    /* 00815f9e: mov ecx, edx */ r_ecx = r_edx;
    /* 00815fa0: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00815fa3: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00815fa6: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00815fa8: lea edi, [ecx + ecx] */ r_edi = (u32)(r_ecx+r_ecx);
    /* 00815fab: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00815fad: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00815faf: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00815fb1: sub ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00815fb3: mov byte ptr [esp + 0xd], bl */ W8((u32)(r_esp+0xdu), (u8)r_ebx);
    /* 00815fb7: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00815fb9: jle 0x81626c */ if ((fZ||fS!=fO)) goto L_0081626c;
L_00815fbf:; BB(0x00815fbf);
    /* 00815fbf: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00815fc4: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00815fc6: mov ebp, 2 */ r_ebp = 0x2u;
    /* 00815fcb: mov esi, ecx */ r_esi = r_ecx;
    /* 00815fcd: mov ebx, edx */ r_ebx = r_edx;
    /* 00815fcf: sar ebx, 2 */ { u32 c = (2u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00815fd2: sar esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_esi = r;  } }
    /* 00815fd5: sub ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00815fd7: lea edi, [ebx + ebx] */ r_edi = (u32)(r_ebx+r_ebx);
    /* 00815fda: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00815fdc: add edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00815fde: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00815fe0: sub ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00815fe2: mov byte ptr [esp + 0xe], cl */ W8((u32)(r_esp+0xeu), (u8)r_ecx);
    /* 00815fe6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00815fe8: jle 0x81626c */ if ((fZ||fS!=fO)) goto L_0081626c;
L_00815fee:; BB(0x00815fee);
    /* 00815fee: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00815ff3: imul ebx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ebx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00815ff5: mov ebp, 3 */ r_ebp = 0x3u;
    /* 00815ffa: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00815ffc: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00815fff: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00816002: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00816004: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00816007: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0081600b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081600d: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081600f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816011: sub ebx, esi */ {  u32 a = r_ebx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00816013: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00816015: mov byte ptr [esp + 0xf], bl */ W8((u32)(r_esp+0xfu), (u8)r_ebx);
    /* 00816019: jle 0x81626c */ if ((fZ||fS!=fO)) goto L_0081626c;
L_0081601f:; BB(0x0081601f);
    /* 0081601f: mov ecx, edx */ r_ecx = r_edx;
    /* 00816021: mov ebx, edx */ r_ebx = r_edx;
    /* 00816023: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00816028: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0081602a: mov ebp, 4 */ r_ebp = 0x4u;
    /* 0081602f: mov eax, ecx */ r_eax = r_ecx;
    /* 00816031: mov ecx, edx */ r_ecx = r_edx;
    /* 00816033: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00816036: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00816039: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0081603b: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 0081603e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816040: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816042: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816044: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00816046: mov byte ptr [esp + 0x10], al */ W8((u32)(r_esp+0x10u), (u8)r_eax);
    /* 0081604a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0081604c: jle 0x81626c */ if ((fZ||fS!=fO)) goto L_0081626c;
L_00816052:; BB(0x00816052);
    /* 00816052: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00816057: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00816059: mov ebp, 5 */ r_ebp = 0x5u;
    /* 0081605e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00816060: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00816063: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00816066: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00816068: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 0081606b: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0081606f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816071: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816073: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816075: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00816077: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00816079: mov byte ptr [esp + 0x11], cl */ W8((u32)(r_esp+0x11u), (u8)r_ecx);
    /* 0081607d: jle 0x81626c */ if ((fZ||fS!=fO)) goto L_0081626c;
L_00816083:; BB(0x00816083);
    /* 00816083: mov ecx, edx */ r_ecx = r_edx;
    /* 00816085: mov ebx, edx */ r_ebx = r_edx;
    /* 00816087: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0081608c: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0081608e: mov ebp, 6 */ r_ebp = 0x6u;
    /* 00816093: mov eax, ecx */ r_eax = r_ecx;
    /* 00816095: mov ecx, edx */ r_ecx = r_edx;
    /* 00816097: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0081609a: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0081609d: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0081609f: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 008160a2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008160a4: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008160a6: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008160a8: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008160aa: mov byte ptr [esp + 0x12], al */ W8((u32)(r_esp+0x12u), (u8)r_eax);
    /* 008160ae: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008160b0: jle 0x81626c */ if ((fZ||fS!=fO)) goto L_0081626c;
L_008160b6:; BB(0x008160b6);
    /* 008160b6: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 008160bb: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008160bd: mov ebp, 7 */ r_ebp = 0x7u;
    /* 008160c2: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008160c4: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008160c7: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008160ca: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008160cc: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 008160cf: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 008160d3: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008160d5: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008160d7: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008160d9: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008160db: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008160dd: mov byte ptr [esp + 0x13], cl */ W8((u32)(r_esp+0x13u), (u8)r_ecx);
    /* 008160e1: jle 0x81626c */ if ((fZ||fS!=fO)) goto L_0081626c;
L_008160e7:; BB(0x008160e7);
    /* 008160e7: mov ecx, edx */ r_ecx = r_edx;
    /* 008160e9: mov ebx, edx */ r_ebx = r_edx;
    /* 008160eb: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 008160f0: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008160f2: mov ebp, 8 */ r_ebp = 0x8u;
    /* 008160f7: mov eax, ecx */ r_eax = r_ecx;
    /* 008160f9: mov ecx, edx */ r_ecx = r_edx;
    /* 008160fb: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008160fe: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00816101: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00816103: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 00816106: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816108: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081610a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081610c: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0081610e: mov byte ptr [esp + 0x14], al */ W8((u32)(r_esp+0x14u), (u8)r_eax);
    /* 00816112: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00816114: jle 0x81626c */ if ((fZ||fS!=fO)) goto L_0081626c;
L_0081611a:; BB(0x0081611a);
    /* 0081611a: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 0081611f: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00816121: mov ebp, 9 */ r_ebp = 0x9u;
    /* 00816126: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00816128: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0081612b: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 0081612e: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00816130: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00816133: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00816137: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816139: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081613b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081613d: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0081613f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00816141: mov byte ptr [esp + 0x15], cl */ W8((u32)(r_esp+0x15u), (u8)r_ecx);
    /* 00816145: jle 0x81626c */ if ((fZ||fS!=fO)) goto L_0081626c;
L_0081614b:; BB(0x0081614b);
    /* 0081614b: mov ecx, edx */ r_ecx = r_edx;
    /* 0081614d: mov ebx, edx */ r_ebx = r_edx;
    /* 0081614f: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00816154: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00816156: mov ebp, 0xa */ r_ebp = 0xau;
    /* 0081615b: mov eax, ecx */ r_eax = r_ecx;
    /* 0081615d: mov ecx, edx */ r_ecx = r_edx;
    /* 0081615f: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00816162: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00816165: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00816167: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 0081616a: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081616c: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081616e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816170: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00816172: mov byte ptr [esp + 0x16], al */ W8((u32)(r_esp+0x16u), (u8)r_eax);
    /* 00816176: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00816178: jle 0x81626c */ if ((fZ||fS!=fO)) goto L_0081626c;
L_0081617e:; BB(0x0081617e);
    /* 0081617e: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00816183: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00816185: mov ebp, 0xb */ r_ebp = 0xbu;
    /* 0081618a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0081618c: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0081618f: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00816192: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00816194: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00816197: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 0081619b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081619d: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081619f: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008161a1: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008161a3: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008161a5: mov byte ptr [esp + 0x17], cl */ W8((u32)(r_esp+0x17u), (u8)r_ecx);
    /* 008161a9: jle 0x81626c */ if ((fZ||fS!=fO)) goto L_0081626c;
L_008161af:; BB(0x008161af);
    /* 008161af: mov ecx, edx */ r_ecx = r_edx;
    /* 008161b1: mov ebx, edx */ r_ebx = r_edx;
    /* 008161b3: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 008161b8: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008161ba: mov ebp, 0xc */ r_ebp = 0xcu;
    /* 008161bf: mov eax, ecx */ r_eax = r_ecx;
    /* 008161c1: mov ecx, edx */ r_ecx = r_edx;
    /* 008161c3: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 008161c6: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008161c9: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008161cb: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 008161ce: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008161d0: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008161d2: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008161d4: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008161d6: mov byte ptr [esp + 0x18], al */ W8((u32)(r_esp+0x18u), (u8)r_eax);
    /* 008161da: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008161dc: jle 0x81626c */ if ((fZ||fS!=fO)) goto L_0081626c;
L_008161e2:; BB(0x008161e2);
    /* 008161e2: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 008161e7: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008161e9: mov ebp, 0xd */ r_ebp = 0xdu;
    /* 008161ee: mov ebx, ecx */ r_ebx = r_ecx;
    /* 008161f0: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008161f3: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 008161f6: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008161f8: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 008161fb: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 008161ff: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816201: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816203: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816205: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00816207: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00816209: mov byte ptr [esp + 0x19], cl */ W8((u32)(r_esp+0x19u), (u8)r_ecx);
    /* 0081620d: jle 0x81626c */ if ((fZ||fS!=fO)) goto L_0081626c;
L_0081620f:; BB(0x0081620f);
    /* 0081620f: mov ecx, edx */ r_ecx = r_edx;
    /* 00816211: mov ebx, edx */ r_ebx = r_edx;
    /* 00816213: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00816218: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0081621a: mov ebp, 0xe */ r_ebp = 0xeu;
    /* 0081621f: mov eax, ecx */ r_eax = r_ecx;
    /* 00816221: mov ecx, edx */ r_ecx = r_edx;
    /* 00816223: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00816226: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00816229: sub ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0081622b: lea esi, [ecx + ecx] */ r_esi = (u32)(r_ecx+r_ecx);
    /* 0081622e: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816230: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816232: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816234: sub eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00816236: mov byte ptr [esp + 0x1a], al */ W8((u32)(r_esp+0x1au), (u8)r_eax);
    /* 0081623a: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0081623c: jle 0x81626c */ if ((fZ||fS!=fO)) goto L_0081626c;
L_0081623e:; BB(0x0081623e);
    /* 0081623e: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00816243: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00816245: mov ebp, 0xf */ r_ebp = 0xfu;
    /* 0081624a: mov ebx, ecx */ r_ebx = r_ecx;
    /* 0081624c: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0081624f: sar ebx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ebx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebx = r;  } }
    /* 00816252: sub edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00816254: lea esi, [edx + edx] */ r_esi = (u32)(r_edx+r_edx);
    /* 00816257: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00816259: add esi, edx */ {  u32 a = r_esi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081625b: add esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081625d: sub ecx, esi */ {  u32 a = r_ecx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0081625f: mov byte ptr [esp + 0x1b], cl */ W8((u32)(r_esp+0x1bu), (u8)r_ecx);
    /* 00816263: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00816265: jle 0x81626c */ if ((fZ||fS!=fO)) goto L_0081626c;
L_00816267:; BB(0x00816267);
    /* 00816267: mov ebp, 0x10 */ r_ebp = 0x10u;
L_0081626c:; BB(0x0081626c);
    /* 0081626c: cmp ebp, 0x10 */ {  u32 a = r_ebp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 0081626f: jb 0x816276 */ if (fC) goto L_00816276;
L_00816271:; BB(0x00816271);
    /* 00816271: mov ebp, 0xf */ r_ebp = 0xfu;
L_00816276:; BB(0x00816276);
    /* 00816276: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00816278: mov eax, ebp */ r_eax = r_ebp;
    /* 0081627a: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0081627d: je 0x8162a6 */ if (fZ) goto L_008162a6;
L_0081627f:; BB(0x0081627f);
    /* 0081627f: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00816283: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00816286: mov byte ptr [esp + 0xc], cl */ W8((u32)(r_esp+0xcu), (u8)r_ecx);
L_0081628a:; BB(0x0081628a);
    /* 0081628a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0081628c: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0081628e: movzx ebx, byte ptr [esp + ecx + 0xc] */ r_ebx = (u32)R8((u32)(r_esp+r_ecx+0xcu));
    /* 00816293: add ebx, 0x30 */ {  u32 a = r_ebx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00816296: mov word ptr [esi], bx */ W16((u32)(r_esi), (u16)r_ebx);
    /* 00816299: add esi, 2 */ {  u32 a = r_esi; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0081629c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0081629f: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008162a1: jb 0x81628a */ if (fC) goto L_0081628a;
L_008162a3:; BB(0x008162a3);
    /* 008162a3: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
L_008162a6:; BB(0x008162a6);
    /* 008162a6: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 008162a9: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008162ab: mov word ptr [edx], ax */ W16((u32)(r_edx), (u16)r_eax);
    /* 008162ae: jmp 0x8162c5 */ goto L_008162c5;
L_008162b0:; BB(0x008162b0);
    /* 008162b0: mov ecx, eax */ r_ecx = r_eax;
    /* 008162b2: mov eax, 0x30 */ r_eax = 0x30u;
    /* 008162b7: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 008162ba: add ecx, 2 */ {  u32 a = r_ecx; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008162bd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008162bf: mov word ptr [ecx], dx */ W16((u32)(r_ecx), (u16)r_edx);
    /* 008162c2: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
L_008162c5:; BB(0x008162c5);
    /* 008162c5: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 008162c8: mov dword ptr [0xac9f8c], eax */ W32((u32)(0xac9f8cu), r_eax);
    /* 008162cd: add esp, 0x1c */ {  u32 a = r_esp; u32 b = 0x1cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008162d0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008162d1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008162d2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008162d3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008162d4: ret  */ FN_RET(0x00815f24); r_esp += 4; return;
}

