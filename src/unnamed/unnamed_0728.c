#include "protos.h"

void f_00728278(void) /* sub_728278 */
{
    FN_ENTER(0x00728278);
    /* 00728278: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00728279: mov esi, ecx */ r_esi = r_ecx;
    /* 0072827b: mov ecx, esi */ r_ecx = r_esi;
    /* 0072827d: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x728282u); f_0061cdb0();
    /* 00728282: mov ecx, esi */ r_ecx = r_esi;
    /* 00728284: call 0x712644 */ r_esp -= 4; W32(r_esp, 0x728289u); f_00712644();
    /* 00728289: mov edx, dword ptr [esi + 0x2c] */ r_edx = R32((u32)(r_esi+0x2cu));
    /* 0072828c: test dl, 1 */ {  u32 a = (u8)r_edx; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072828f: je 0x7282b0 */ if (fZ) goto L_007282b0;
L_00728291:; BB(0x00728291);
    /* 00728291: mov ecx, dword ptr [esi + 0x6c] */ r_ecx = R32((u32)(r_esi+0x6cu));
    /* 00728294: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728296: je 0x7282b0 */ if (fZ) goto L_007282b0;
L_00728298:; BB(0x00728298);
    /* 00728298: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00728299: call 0x73e60c */ r_esp -= 4; W32(r_esp, 0x72829eu); f_0073e60c();
    /* 0072829e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007282a0: je 0x7282b0 */ if (fZ) goto L_007282b0;
L_007282a2:; BB(0x007282a2);
    /* 007282a2: mov eax, dword ptr [esi + 0x6c] */ r_eax = R32((u32)(r_esi+0x6cu));
    /* 007282a5: movsx edx, byte ptr [eax] */ r_edx = (u32)(i32)(i8)R8((u32)(r_eax));
    /* 007282a8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007282a9: mov ecx, esi */ r_ecx = r_esi;
    /* 007282ab: call 0x728340 */ r_esp -= 4; W32(r_esp, 0x7282b0u); f_00728340();
L_007282b0:; BB(0x007282b0);
    /* 007282b0: mov ecx, esi */ r_ecx = r_esi;
    /* 007282b2: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x7282b7u); f_00710db4();
    /* 007282b7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007282b8: ret  */ FN_RET(0x00728278); r_esp += 4; return;
}

void f_007282bc(void) /* sub_7282BC */
{
    FN_ENTER(0x007282bc);
    /* 007282bc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007282bd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 007282be: mov ebp, ecx */ r_ebp = r_ecx;
    /* 007282c0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007282c2: call 0x712644 */ r_esp -= 4; W32(r_esp, 0x7282c7u); f_00712644();
    /* 007282c7: mov edi, eax */ r_edi = r_eax;
    /* 007282c9: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007282ca: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007282cc: call 0x710f80 */ r_esp -= 4; W32(r_esp, 0x7282d1u); f_00710f80();
    /* 007282d1: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007282d2: lea edx, [ebp + 0x24] */ r_edx = (u32)(r_ebp+0x24u);
    /* 007282d5: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007282d6: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007282d8: call 0x72a648 */ r_esp -= 4; W32(r_esp, 0x7282ddu); f_0072a648();
    /* 007282dd: mov edx, dword ptr [ebp + 0x6c] */ r_edx = R32((u32)(r_ebp+0x6cu));
    /* 007282e0: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007282e2: je 0x728333 */ if (fZ) goto L_00728333;
L_007282e4:; BB(0x007282e4);
    /* 007282e4: movsx edx, byte ptr [edx] */ r_edx = (u32)(i32)(i8)R8((u32)(r_edx));
    /* 007282e7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007282e8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 007282ea: call 0x728340 */ r_esp -= 4; W32(r_esp, 0x7282efu); f_00728340();
L_007282ef:; BB(0x007282ef);
    /* 007282ef: mov edx, dword ptr [ebp + 0x2c] */ r_edx = R32((u32)(r_ebp+0x2cu));
    /* 007282f2: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007282f5: jne 0x728321 */ if (!fZ) goto L_00728321;
L_007282f7:; BB(0x007282f7);
    /* 007282f7: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 007282fa: jne 0x72831c */ if (!fZ) goto L_0072831c;
L_007282fc:; BB(0x007282fc);
    /* 007282fc: mov eax, dword ptr [ebp + 0x6c] */ r_eax = R32((u32)(r_ebp+0x6cu));
    /* 007282ff: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00728301: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728303: je 0x728308 */ if (fZ) goto L_00728308;
L_00728305:; BB(0x00728305);
    /* 00728305: movsx ecx, byte ptr [eax] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_eax));
L_00728308:; BB(0x00728308);
    /* 00728308: mov edx, dword ptr [ebp + 0x64] */ r_edx = R32((u32)(r_ebp+0x64u));
    /* 0072830b: mov ecx, dword ptr [edx + ecx*4] */ r_ecx = R32((u32)(r_edx+r_ecx*4));
    /* 0072830e: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728310: je 0x728324 */ if (fZ) goto L_00728324;
L_00728312:; BB(0x00728312);
    /* 00728312: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00728314: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x728317u); call_ind(t); }
    /* 00728317: mov eax, dword ptr [ebp + 0x6c] */ r_eax = R32((u32)(r_ebp+0x6cu));
    /* 0072831a: jmp 0x728324 */ goto L_00728324;
L_0072831c:; BB(0x0072831c);
    /* 0072831c: mov eax, dword ptr [ebp + 0x6c] */ r_eax = R32((u32)(r_ebp+0x6cu));
    /* 0072831f: jmp 0x728324 */ goto L_00728324;
L_00728321:; BB(0x00728321);
    /* 00728321: mov eax, dword ptr [ebp + 0x6c] */ r_eax = R32((u32)(r_ebp+0x6cu));
L_00728324:; BB(0x00728324);
    /* 00728324: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00728326: je 0x728330 */ if (fZ) goto L_00728330;
L_00728328:; BB(0x00728328);
    /* 00728328: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00728329: mov ecx, eax */ r_ecx = r_eax;
    /* 0072832b: call 0x73e6b4 */ r_esp -= 4; W32(r_esp, 0x728330u); f_0073e6b4();
L_00728330:; BB(0x00728330);
    /* 00728330: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00728331: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00728332: ret  */ FN_RET(0x007282bc); r_esp += 4; return;
L_00728333:; BB(0x00728333);
    /* 00728333: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00728335: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00728337: call 0x728340 */ r_esp -= 4; W32(r_esp, 0x72833cu); f_00728340();
    /* 0072833c: jmp 0x7282ef */ goto L_007282ef;
}

void f_00728340(void) /* sub_728340 */
{
    FN_ENTER(0x00728340);
    /* 00728340: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00728341: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00728342: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00728343: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00728344: sub esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00728347: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00728349: movsx edi, byte ptr [ebp + 0x68] */ r_edi = (u32)(i32)(i8)R8((u32)(r_ebp+0x68u));
    /* 0072834d: movsx ebx, byte ptr [esp + 0x84] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_esp+0x84u));
    /* 00728355: cmp edi, ebx */ {  u32 a = r_edi; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728357: je 0x7288b0 */ if (fZ) goto L_007288b0;
L_0072835d:; BB(0x0072835d);
    /* 0072835d: cmp bl, byte ptr [ebp + 0x69] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(r_ebp+0x69u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00728360: je 0x7288b0 */ if (fZ) goto L_007288b0;
L_00728366:; BB(0x00728366);
    /* 00728366: cmp bl, byte ptr [ebp + 0x6a] */ {  u32 a = (u8)r_ebx; u32 b = R8((u32)(r_ebp+0x6au)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00728369: je 0x7288b0 */ if (fZ) goto L_007288b0;
L_0072836f:; BB(0x0072836f);
    /* 0072836f: movsx ecx, byte ptr [ebp + 0x6b] */ r_ecx = (u32)(i32)(i8)R8((u32)(r_ebp+0x6bu));
    /* 00728373: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00728375: lea eax, [edi + 1] */ r_eax = (u32)(r_edi+0x1u);
    /* 00728378: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00728379: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x00728379, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00728379, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 0072837b: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072837d: je 0x728390 */ if (fZ) goto L_00728390;
L_0072837f:; BB(0x0072837f);
    /* 0072837f: lea eax, [edi + ecx - 1] */ r_eax = (u32)(r_edi+r_ecx+0xffffffffu);
    /* 00728383: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728385: je 0x728390 */ if (fZ) goto L_00728390;
L_00728387:; BB(0x00728387);
    /* 00728387: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072838a: jne 0x7288ba */ if (!fZ) goto L_007288ba;
L_00728390:; BB(0x00728390);
    /* 00728390: movsx eax, byte ptr [ebp + 0x69] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x69u));
    /* 00728394: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 00728398: mov esi, 1 */ r_esi = 0x1u;
    /* 0072839d: lea eax, [eax + 1] */ r_eax = (u32)(r_eax+0x1u);
    /* 007283a0: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007283a1: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x007283a1, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007283a1, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007283a3: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007283a5: je 0x7283bc */ if (fZ) goto L_007283bc;
L_007283a7:; BB(0x007283a7);
    /* 007283a7: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 007283ab: lea edx, [ecx + eax - 1] */ r_edx = (u32)(r_ecx+r_eax+0xffffffffu);
    /* 007283af: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007283b1: je 0x7283bc */ if (fZ) goto L_007283bc;
L_007283b3:; BB(0x007283b3);
    /* 007283b3: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007283b6: jne 0x7288ba */ if (!fZ) goto L_007288ba;
L_007283bc:; BB(0x007283bc);
    /* 007283bc: movsx eax, byte ptr [ebp + 0x6a] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebp+0x6au));
    /* 007283c0: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 007283c4: mov esi, 2 */ r_esi = 0x2u;
    /* 007283c9: lea eax, [eax + 1] */ r_eax = (u32)(r_eax+0x1u);
    /* 007283cc: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 007283cd: idiv ecx */ { i32 d = (i32)r_ecx; if (!d) UNSUP(0x007283cd, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x007283cd, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 007283cf: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007283d1: je 0x7283e8 */ if (fZ) goto L_007283e8;
L_007283d3:; BB(0x007283d3);
    /* 007283d3: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 007283d7: lea edx, [ecx + eax - 1] */ r_edx = (u32)(r_ecx+r_eax+0xffffffffu);
    /* 007283db: cmp edx, ebx */ {  u32 a = r_edx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007283dd: je 0x7283e8 */ if (fZ) goto L_007283e8;
L_007283df:; BB(0x007283df);
    /* 007283df: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007283e2: jne 0x7288ba */ if (!fZ) goto L_007288ba;
L_007283e8:; BB(0x007283e8);
    /* 007283e8: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007283ea: cmp edi, -1 */ {  u32 a = r_edi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007283ed: jne 0x7288de */ if (!fZ) goto L_007288de;
L_007283f3:; BB(0x007283f3);
    /* 007283f3: mov eax, dword ptr [esp + 0x64] */ r_eax = R32((u32)(r_esp+0x64u));
    /* 007283f7: mov edx, 1 */ r_edx = 0x1u;
    /* 007283fc: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007283ff: jne 0x7288de */ if (!fZ) goto L_007288de;
L_00728405:; BB(0x00728405);
    /* 00728405: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 00728409: mov edx, 2 */ r_edx = 0x2u;
    /* 0072840e: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728411: jne 0x7288de */ if (!fZ) goto L_007288de;
L_00728417:; BB(0x00728417);
    /* 00728417: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00728419: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
L_0072841d:; BB(0x0072841d);
    /* 0072841d: mov esi, dword ptr [ebp + 0x64] */ r_esi = R32((u32)(r_ebp+0x64u));
    /* 00728420: mov ecx, dword ptr [esi + eax*4] */ r_ecx = R32((u32)(r_esi+r_eax*4));
    /* 00728423: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728425: je 0x72842c */ if (fZ) goto L_0072842c;
L_00728427:; BB(0x00728427);
    /* 00728427: call 0x7288ec */ r_esp -= 4; W32(r_esp, 0x72842cu); f_007288ec();
L_0072842c:; BB(0x0072842c);
    /* 0072842c: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 00728430: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
L_00728432:; BB(0x00728432);
    /* 00728432: lea edx, [ebp + ecx] */ r_edx = (u32)(r_ebp+r_ecx);
    /* 00728436: cmp al, byte ptr [edx + 0x68] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_edx+0x68u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00728439: je 0x7288d5 */ if (fZ) goto L_007288d5;
L_0072843f:; BB(0x0072843f);
    /* 0072843f: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00728442: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00728445: jl 0x728432 */ if ((fS!=fO)) goto L_00728432;
L_00728447:; BB(0x00728447);
    /* 00728447: mov eax, dword ptr [ebp + 0x64] */ r_eax = R32((u32)(r_ebp+0x64u));
    /* 0072844a: mov esi, dword ptr [eax + ebx*4] */ r_esi = R32((u32)(r_eax+r_ebx*4));
    /* 0072844d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072844f: je 0x7288b0 */ if (fZ) goto L_007288b0;
L_00728455:; BB(0x00728455);
    /* 00728455: lea edi, [esi + 0x1c] */ r_edi = (u32)(r_esi+0x1cu);
    /* 00728458: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0072845a: mov dh, byte ptr [edi] */ r_edx = (r_edx & 0xffff00ffu) | (((R8((u32)(r_edi))) & 0xffu) << 8);
    /* 0072845c: mov ecx, edi */ r_ecx = r_edi;
    /* 0072845e: test dh, dh */ {  u32 a = (u8)(r_edx>>8); u32 b = (u8)(r_edx>>8); u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00728460: je 0x72846e */ if (fZ) goto L_0072846e;
L_00728462:; BB(0x00728462);
    /* 00728462: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00728465: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00728468: mov dl, byte ptr [ecx] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_ecx))) & 0xffu);
    /* 0072846a: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 0072846c: jne 0x728462 */ if (!fZ) goto L_00728462;
L_0072846e:; BB(0x0072846e);
    /* 0072846e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00728470: ja 0x728483 */ if ((!fC&&!fZ)) goto L_00728483;
L_00728472:; BB(0x00728472);
    /* 00728472: mov dword ptr [esi + 0x164], 0 */ W32((u32)(r_esi+0x164u), 0x0u);
    /* 0072847c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072847e: jmp 0x72876a */ goto L_0072876a;
L_00728483:; BB(0x00728483);
    /* 00728483: mov ecx, esi */ r_ecx = r_esi;
    /* 00728485: call 0x7288ec */ r_esp -= 4; W32(r_esp, 0x72848au); f_007288ec();
    /* 0072848a: call 0x8379ac */ r_esp -= 4; W32(r_esp, 0x72848fu); f_008379ac();
    /* 0072848f: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 00728493: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
    /* 0072849a: lea eax, [esi + 0x120] */ r_eax = (u32)(r_esi+0x120u);
    /* 007284a0: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 007284a4: call 0x837a00 */ r_esp -= 4; W32(r_esp, 0x7284a9u); f_00837a00();
    /* 007284a9: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 007284ad: call 0x8379b4 */ r_esp -= 4; W32(r_esp, 0x7284b2u); f_008379b4();
    /* 007284b2: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 007284b5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007284b6: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007284b8: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007284b9: mov ecx, dword ptr [esp + 0x68] */ r_ecx = R32((u32)(r_esp+0x68u));
    /* 007284bd: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007284be: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007284bf: mov ecx, 1 */ r_ecx = 0x1u;
    /* 007284c4: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007284c5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007284c6: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 007284c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007284c9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007284ca: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 007284cf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007284d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007284d1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 007284d2: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007284d3: mov edi, dword ptr [esp + 0x98] */ r_edi = R32((u32)(r_esp+0x98u));
    /* 007284da: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007284db: call 0x8908fc */ r_esp -= 4; W32(r_esp, 0x7284e0u); f_008908fc();
    /* 007284e0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007284e2: je 0x7284f5 */ if (fZ) goto L_007284f5;
L_007284e4:; BB(0x007284e4);
    /* 007284e4: mov dword ptr [esi + 0x164], 0 */ W32((u32)(r_esi+0x164u), 0x0u);
    /* 007284ee: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 007284f0: jmp 0x72876a */ goto L_0072876a;
L_007284f5:; BB(0x007284f5);
    /* 007284f5: fild dword ptr [esi + 0x120] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x120u)));
    /* 007284fb: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 007284ff: fild dword ptr [eax] */ FPUSH((long double)(i32)R32((u32)(r_eax)));
    /* 00728501: fild dword ptr [eax + 4] */ FPUSH((long double)(i32)R32((u32)(r_eax+0x4u)));
    /* 00728504: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 00728506: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00728509: mov eax, dword ptr [esi + 0x120] */ r_eax = R32((u32)(r_esi+0x120u));
    /* 0072850f: shr edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edi = r;  } }
    /* 00728512: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00728514: fadd dword ptr [edi*4 + 0x9707c8] */ ST(0) = ST(0) + R_F32((u32)(r_edi*4+0x9707c8u));
    /* 0072851b: fdiv dword ptr [0x9707f8] */ ST(0) = ST(0) / R_F32((u32)(0x9707f8u));
    /* 00728521: fst dword ptr [esi + 0x13c] */ W_F32((u32)(r_esi+0x13cu), ST(0));
    /* 00728527: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0072852a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072852c: fadd dword ptr [edx*4 + 0x9707c8] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x9707c8u));
    /* 00728533: fdiv dword ptr [0x9707f4] */ ST(0) = ST(0) / R_F32((u32)(0x9707f4u));
    /* 00728539: fst dword ptr [esi + 0x140] */ W_F32((u32)(r_esi+0x140u), ST(0));
    /* 0072853f: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00728541: fst dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0));
    /* 00728545: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00728547: fst dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0));
    /* 0072854b: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0072854e: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00728550: fadd dword ptr [eax*4 + 0x9707c8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x9707c8u));
    /* 00728557: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00728559: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0072855d: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 00728562: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00728567: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0072856b: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 0072856f: fistp qword ptr [esp + 0x34] */ W64((u32)(r_esp+0x34u), (u64)fx_int64(ST(0))); FPOP();
    /* 00728573: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 00728577: fild dword ptr [esi + 0x124] */ FPUSH((long double)(i32)R32((u32)(r_esi+0x124u)));
    /* 0072857d: mov edx, dword ptr [esp + 0x34] */ r_edx = R32((u32)(r_esp+0x34u));
    /* 00728581: mov eax, dword ptr [esi + 0x124] */ r_eax = R32((u32)(r_esi+0x124u));
    /* 00728587: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0072858a: fadd dword ptr [eax*4 + 0x9707c8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x9707c8u));
    /* 00728591: fmulp st(1) */ ST(1) = ST(1) * ST(0); FPOP();
    /* 00728593: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 00728597: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0072859b: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 007285a0: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007285a5: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 007285a9: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 007285ad: fistp qword ptr [esp + 0x34] */ W64((u32)(r_esp+0x34u), (u64)fx_int64(ST(0))); FPOP();
    /* 007285b1: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 007285b5: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 007285b9: movzx eax, byte ptr [esi + 0x160] */ r_eax = (u32)R8((u32)(r_esi+0x160u));
    /* 007285c0: mov ecx, eax */ r_ecx = r_eax;
    /* 007285c2: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 007285c5: shr ecx, 0x1d */ { u32 c = (29u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 007285c8: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007285ca: sar ecx, 3 */ { u32 c = (3u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 007285cd: movzx ecx, cl */ r_ecx = (u32)(u8)r_ecx;
    /* 007285d0: imul edx, edi */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edi; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 007285d3: imul edx, ecx */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_ecx; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 007285d6: mov dword ptr [esp + 0x64], ecx */ W32((u32)(r_esp+0x64u), r_ecx);
    /* 007285da: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007285db: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x7285e0u); f_008581c5();
    /* 007285e0: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 007285e1: mov ecx, dword ptr [esp] */ r_ecx = R32((u32)(r_esp));
    /* 007285e4: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 007285e8: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 007285ed: mov dword ptr [esi + 0x144], eax */ W32((u32)(r_esi+0x144u), r_eax);
    /* 007285f3: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 007285f5: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 007285f7: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007285f8: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 007285fc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007285fd: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007285fe: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007285ff: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 00728603: call dword ptr [eax + 0x40] */ { u32 t = R32((u32)(r_eax+0x40u)); r_esp -= 4; W32(r_esp, 0x728606u); call_ind(t); }
    /* 00728606: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728608: jne 0x728744 */ if (!fZ) goto L_00728744;
L_0072860e:; BB(0x0072860e);
    /* 0072860e: mov ecx, dword ptr [esp + 8] */ r_ecx = R32((u32)(r_esp+0x8u));
    /* 00728612: mov eax, dword ptr [esi + 0x144] */ r_eax = R32((u32)(r_esi+0x144u));
    /* 00728618: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0072861a: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0072861c: jbe 0x728728 */ if ((fC||fZ)) goto L_00728728;
L_00728622:; BB(0x00728622);
    /* 00728622: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
    /* 00728626: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 0072862a: mov dword ptr [esp + 0x60], ecx */ W32((u32)(r_esp+0x60u), r_ecx);
    /* 0072862e: mov dword ptr [esp + 0x48], esi */ W32((u32)(r_esp+0x48u), r_esi);
    /* 00728632: mov esi, dword ptr [esp + 0x6c] */ r_esi = R32((u32)(r_esp+0x6cu));
    /* 00728636: mov dword ptr [esp + 0x44], ebp */ W32((u32)(r_esp+0x44u), r_ebp);
L_0072863a:; BB(0x0072863a);
    /* 0072863a: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0072863c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 0072863e: jbe 0x72870b */ if ((fC||fZ)) goto L_0072870b;
L_00728644:; BB(0x00728644);
    /* 00728644: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00728648: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 0072864c: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 00728650: mov ebx, esi */ r_ebx = r_esi;
    /* 00728652: imul ebx, edx */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_edx; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00728655: mov eax, edx */ r_eax = r_edx;
    /* 00728657: mov dword ptr [esp + 0x4c], edi */ W32((u32)(r_esp+0x4cu), r_edi);
    /* 0072865b: mov edi, dword ptr [esp + 0x64] */ r_edi = R32((u32)(r_esp+0x64u));
    /* 0072865f: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00728662: fadd dword ptr [eax*4 + 0x9707c8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x9707c8u));
    /* 00728669: fdiv st(1) */ ST(0) = ST(0) / ST(1);
    /* 0072866b: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 0072866f: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 00728674: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00728679: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 0072867d: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 00728681: fistp qword ptr [esp + 0x34] */ W64((u32)(r_esp+0x34u), (u64)fx_int64(ST(0))); FPOP();
    /* 00728685: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 00728689: add ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0072868b: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 0072868f: mov dword ptr [esp + 0x58], eax */ W32((u32)(r_esp+0x58u), r_eax);
    /* 00728693: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00728695:; BB(0x00728695);
    /* 00728695: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00728699: imul edx, dword ptr [esp + 0x58] */ { i64 t = (i64)(i32)r_edx * (i64)(i32)R32((u32)(r_esp+0x58u)); r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0072869e: add edx, dword ptr [esp + 0x60] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x60u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007286a2: mov ecx, edi */ r_ecx = r_edi;
    /* 007286a4: imul ecx, ebx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_ebx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 007286a7: add ecx, dword ptr [esp + 0x5c] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x5cu)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 007286ab: mov eax, ebp */ r_eax = r_ebp;
    /* 007286ad: mov dword ptr [esp + 0x3c], ebp */ W32((u32)(r_esp+0x3cu), r_ebp);
    /* 007286b1: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 007286b5: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 007286b8: fadd dword ptr [eax*4 + 0x9707c8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x9707c8u));
    /* 007286bf: fdiv dword ptr [esp + 0x68] */ ST(0) = ST(0) / R_F32((u32)(r_esp+0x68u));
    /* 007286c3: fnstcw word ptr [esp + 0x24] */ W16((u32)(r_esp+0x24u), fcw);
    /* 007286c7: movzx eax, word ptr [esp + 0x24] */ r_eax = (u32)R16((u32)(r_esp+0x24u));
    /* 007286cc: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007286d1: mov dword ptr [esp + 0x2c], eax */ W32((u32)(r_esp+0x2cu), r_eax);
    /* 007286d5: fldcw word ptr [esp + 0x2c] */ fcw = R16((u32)(r_esp+0x2cu));
    /* 007286d9: fistp qword ptr [esp + 0x34] */ W64((u32)(r_esp+0x34u), (u64)fx_int64(ST(0))); FPOP();
    /* 007286dd: fldcw word ptr [esp + 0x24] */ fcw = R16((u32)(r_esp+0x24u));
    /* 007286e1: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 007286e5: imul eax, edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 007286e8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007286e9: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007286eb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007286ec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 007286ed: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x7286f2u); f_0086b6b8();
    /* 007286f2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 007286f5: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 007286f8: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 007286fb: cmp ebp, esi */ {  u32 a = r_ebp; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 007286fd: jb 0x728695 */ if (fC) goto L_00728695;
L_007286ff:; BB(0x007286ff);
    /* 007286ff: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 00728703: mov edi, dword ptr [esp + 0x4c] */ r_edi = R32((u32)(r_esp+0x4cu));
    /* 00728707: fld dword ptr [esp + 0x54] */ FPUSH(R_F32((u32)(r_esp+0x54u)));
L_0072870b:; BB(0x0072870b);
    /* 0072870b: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0072870e: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00728710: jb 0x72863a */ if (fC) goto L_0072863a;
L_00728716:; BB(0x00728716);
    /* 00728716: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00728718: mov esi, dword ptr [esp + 0x48] */ r_esi = R32((u32)(r_esp+0x48u));
    /* 0072871c: movsx ebx, byte ptr [esp + 0x84] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_esp+0x84u));
    /* 00728724: mov ebp, dword ptr [esp + 0x44] */ r_ebp = R32((u32)(r_esp+0x44u));
L_00728728:; BB(0x00728728);
    /* 00728728: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0072872b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0072872d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0072872e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00728730: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x728733u); call_ind(t); }
    /* 00728733: mov dword ptr [esi + 0x164], 1 */ W32((u32)(r_esi+0x164u), 0x1u);
    /* 0072873d: mov edx, 1 */ r_edx = 0x1u;
    /* 00728742: jmp 0x728750 */ goto L_00728750;
L_00728744:; BB(0x00728744);
    /* 00728744: mov dword ptr [esi + 0x164], 0 */ W32((u32)(r_esi+0x164u), 0x0u);
    /* 0072874e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00728750:; BB(0x00728750);
    /* 00728750: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00728753: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728755: je 0x72876a */ if (fZ) goto L_0072876a;
L_00728757:; BB(0x00728757);
    /* 00728757: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00728758: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0072875a: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x72875du); call_ind(t); }
    /* 0072875d: mov edx, dword ptr [esi + 0x164] */ r_edx = R32((u32)(r_esi+0x164u));
    /* 00728763: mov dword ptr [esp], 0 */ W32((u32)(r_esp), 0x0u);
L_0072876a:; BB(0x0072876a);
    /* 0072876a: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072876c: jne 0x728799 */ if (!fZ) goto L_00728799;
L_0072876e:; BB(0x0072876e);
    /* 0072876e: lea edx, [esi + 0x120] */ r_edx = (u32)(r_esi+0x120u);
    /* 00728774: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00728776: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00728778: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 0072877b: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 0072877e: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00728781: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 00728784: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 00728787: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 0072878a: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 0072878d: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00728790: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 00728793: mov edx, dword ptr [esi + 0x164] */ r_edx = R32((u32)(r_esi+0x164u));
L_00728799:; BB(0x00728799);
    /* 00728799: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0072879b: jne 0x7287a7 */ if (!fZ) goto L_007287a7;
L_0072879d:; BB(0x0072879d);
    /* 0072879d: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007287a0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007287a1: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007287a2: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007287a3: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007287a4: ret 4 */ FN_RET(0x00728340); r_esp += 8; return;
L_007287a7:; BB(0x007287a7);
    /* 007287a7: call 0x837a00 */ r_esp -= 4; W32(r_esp, 0x7287acu); f_00837a00();
    /* 007287ac: mov edi, eax */ r_edi = r_eax;
    /* 007287ae: mov edx, 8 */ r_edx = 0x8u;
    /* 007287b3: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 007287b7: mov ecx, esi */ r_ecx = r_esi;
    /* 007287b9: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 007287bd: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 007287bf: add edx, -0x10 */ {  u32 a = r_edx; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007287c2: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 007287c6: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 007287c8: add edx, -0x10 */ {  u32 a = r_edx; u32 b = 0xfffffff0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007287cb: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 007287cf: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 007287d3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 007287d4: call 0x728938 */ r_esp -= 4; W32(r_esp, 0x7287d9u); f_00728938();
    /* 007287d9: fld dword ptr [0x9707f0] */ FPUSH(R_F32((u32)(0x9707f0u)));
    /* 007287df: mov edx, dword ptr [esi + 0x120] */ r_edx = R32((u32)(r_esi+0x120u));
    /* 007287e5: fld dword ptr [ebp + 0x40] */ FPUSH(R_F32((u32)(r_ebp+0x40u)));
    /* 007287e8: mov ecx, dword ptr [ebp + 0x40] */ r_ecx = R32((u32)(r_ebp+0x40u));
    /* 007287eb: fld dword ptr [ebp + 0x44] */ FPUSH(R_F32((u32)(r_ebp+0x44u)));
    /* 007287ee: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007287f1: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 007287f5: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 007287f9: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 007287fc: fadd dword ptr [edx*4 + 0x9707c8] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x9707c8u));
    /* 00728803: fst dword ptr [ebp + 0x48] */ W_F32((u32)(r_ebp+0x48u), ST(0));
    /* 00728806: mov edx, dword ptr [esi + 0x124] */ r_edx = R32((u32)(r_esi+0x124u));
    /* 0072880c: add edx, 0x10 */ {  u32 a = r_edx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0072880f: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00728813: fild dword ptr [esp + 0x3c] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x3cu)));
    /* 00728817: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0072881a: fadd dword ptr [edx*4 + 0x9707c8] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x9707c8u));
    /* 00728821: fst dword ptr [ebp + 0x4c] */ W_F32((u32)(r_ebp+0x4cu), ST(0));
    /* 00728824: fild dword ptr [edi] */ FPUSH((long double)(i32)R32((u32)(r_edi)));
    /* 00728826: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00728828: shr edx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 0072882b: fadd dword ptr [edx*4 + 0x9707c8] */ ST(0) = ST(0) + R_F32((u32)(r_edx*4+0x9707c8u));
    /* 00728832: fsub st(4) */ ST(0) = ST(0) - ST(4);
    /* 00728834: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 00728836: fadd st(5) */ ST(0) = ST(0) + ST(5);
    /* 00728838: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 0072883a: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 0072883c: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0072883e: mov edx, dword ptr [ebp + 0x44] */ r_edx = R32((u32)(r_ebp+0x44u));
    /* 00728841: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00728842: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00728844: jb 0x728848 */ if (fC) goto L_00728848;
L_00728846:; BB(0x00728846);
    /* 00728846: fst st(2) */ ST(2) = ST(0);
L_00728848:; BB(0x00728848);
    /* 00728848: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072884a: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 0072884c: fst dword ptr [ebp + 0x48] */ W_F32((u32)(r_ebp+0x48u), ST(0));
    /* 0072884f: fild dword ptr [edi + 4] */ FPUSH((long double)(i32)R32((u32)(r_edi+0x4u)));
    /* 00728852: mov eax, dword ptr [edi + 4] */ r_eax = R32((u32)(r_edi+0x4u));
    /* 00728855: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00728857: fstp dword ptr [ebp + 0x38] */ W_F32((u32)(r_ebp+0x38u), ST(0)); FPOP();
    /* 0072885a: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 0072885c: fstp dword ptr [esp + 0x1c] */ W_F32((u32)(r_esp+0x1cu), ST(0)); FPOP();
    /* 00728860: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00728863: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00728865: fadd dword ptr [eax*4 + 0x9707c8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x9707c8u));
    /* 0072886c: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 0072886e: fcom st(2) */ fx_compare(ST(0), ST(2)); 
    /* 00728870: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00728872: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 00728874: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00728876: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 0072887a: lea edi, [esp + 0x1c] */ r_edi = (u32)(r_esp+0x1cu);
    /* 0072887e: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0072887f: jb 0x728883 */ if (fC) goto L_00728883;
L_00728881:; BB(0x00728881);
    /* 00728881: fst st(1) */ ST(1) = ST(0);
L_00728883:; BB(0x00728883);
    /* 00728883: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00728885: fst dword ptr [ebp + 0x4c] */ W_F32((u32)(r_ebp+0x4cu), ST(0));
    /* 00728888: fstp dword ptr [ebp + 0x3c] */ W_F32((u32)(r_ebp+0x3cu), ST(0)); FPOP();
    /* 0072888b: mov dword ptr [ebp + 0x30], ecx */ W32((u32)(r_ebp+0x30u), r_ecx);
    /* 0072888e: mov dword ptr [ebp + 0x34], edx */ W32((u32)(r_ebp+0x34u), r_edx);
    /* 00728891: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00728892: mov ecx, esi */ r_ecx = r_esi;
    /* 00728894: call 0x728964 */ r_esp -= 4; W32(r_esp, 0x728899u); f_00728964();
    /* 00728899: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0072889b:; BB(0x0072889b);
    /* 0072889b: lea eax, [ebp + edx] */ r_eax = (u32)(r_ebp+r_edx);
    /* 0072889f: movsx esi, byte ptr [eax + 0x68] */ r_esi = (u32)(i32)(i8)R8((u32)(r_eax+0x68u));
    /* 007288a3: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007288a6: je 0x7288c8 */ if (fZ) goto L_007288c8;
L_007288a8:; BB(0x007288a8);
    /* 007288a8: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007288ab: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007288ae: jl 0x72889b */ if ((fS!=fO)) goto L_0072889b;
L_007288b0:; BB(0x007288b0);
    /* 007288b0: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007288b3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007288b4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007288b5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007288b6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007288b7: ret 4 */ FN_RET(0x00728340); r_esp += 8; return;
L_007288ba:; BB(0x007288ba);
    /* 007288ba: movsx eax, byte ptr [esi + ebp + 0x68] */ r_eax = (u32)(i32)(i8)R8((u32)(r_esi+r_ebp+0x68u));
    /* 007288bf: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 007288c3: jmp 0x72841d */ goto L_0072841d;
L_007288c8:; BB(0x007288c8);
    /* 007288c8: mov byte ptr [eax + 0x68], bl */ W8((u32)(r_eax+0x68u), (u8)r_ebx);
    /* 007288cb: add esp, 0x70 */ {  u32 a = r_esp; u32 b = 0x70u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007288ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007288cf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 007288d0: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007288d1: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007288d2: ret 4 */ FN_RET(0x00728340); r_esp += 8; return;
L_007288d5:; BB(0x007288d5);
    /* 007288d5: mov byte ptr [edx + 0x68], 0xff */ W8((u32)(r_edx+0x68u), 0xffu);
    /* 007288d9: jmp 0x728447 */ goto L_00728447;
L_007288de:; BB(0x007288de);
    /* 007288de: movsx eax, byte ptr [edx + ebp + 0x68] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+r_ebp+0x68u));
    /* 007288e3: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 007288e7: jmp 0x72841d */ goto L_0072841d;
}

void f_007288ec(void) /* sub_7288EC */
{
    FN_ENTER(0x007288ec);
    /* 007288ec: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 007288ed: mov edi, ecx */ r_edi = r_ecx;
    /* 007288ef: mov eax, dword ptr [edi + 0x164] */ r_eax = R32((u32)(r_edi+0x164u));
    /* 007288f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 007288f7: je 0x728934 */ if (fZ) goto L_00728934;
L_007288f9:; BB(0x007288f9);
    /* 007288f9: push dword ptr [edi + 0x144] */ { u32 v = R32((u32)(r_edi+0x144u)); r_esp -= 4; W32(r_esp, v); }
    /* 007288ff: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x728904u); f_00857e98();
    /* 00728904: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00728905: lea edx, [edi + 0x120] */ r_edx = (u32)(r_edi+0x120u);
    /* 0072890b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0072890d: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 0072890f: mov dword ptr [edx + 4], eax */ W32((u32)(r_edx+0x4u), r_eax);
    /* 00728912: mov dword ptr [edx + 8], eax */ W32((u32)(r_edx+0x8u), r_eax);
    /* 00728915: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 00728918: mov dword ptr [edx + 0x10], eax */ W32((u32)(r_edx+0x10u), r_eax);
    /* 0072891b: mov dword ptr [edx + 0x14], eax */ W32((u32)(r_edx+0x14u), r_eax);
    /* 0072891e: mov dword ptr [edx + 0x18], eax */ W32((u32)(r_edx+0x18u), r_eax);
    /* 00728921: mov dword ptr [edx + 0x1c], eax */ W32((u32)(r_edx+0x1cu), r_eax);
    /* 00728924: mov dword ptr [edx + 0x20], eax */ W32((u32)(r_edx+0x20u), r_eax);
    /* 00728927: mov dword ptr [edx + 0x24], eax */ W32((u32)(r_edx+0x24u), r_eax);
    /* 0072892a: mov dword ptr [edi + 0x164], 0 */ W32((u32)(r_edi+0x164u), 0x0u);
L_00728934:; BB(0x00728934);
    /* 00728934: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00728935: ret  */ FN_RET(0x007288ec); r_esp += 4; return;
}

void f_00728938(void) /* sub_728938 */
{
    FN_ENTER(0x00728938);
    /* 00728938: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0072893c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0072893e: mov dword ptr [ecx + 0x150], edx */ W32((u32)(r_ecx+0x150u), r_edx);
    /* 00728944: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00728947: mov dword ptr [ecx + 0x154], edx */ W32((u32)(r_ecx+0x154u), r_edx);
    /* 0072894d: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 00728950: mov dword ptr [ecx + 0x158], edx */ W32((u32)(r_ecx+0x158u), r_edx);
    /* 00728956: mov eax, dword ptr [eax + 0xc] */ r_eax = R32((u32)(r_eax+0xcu));
    /* 00728959: mov dword ptr [ecx + 0x15c], eax */ W32((u32)(r_ecx+0x15cu), r_eax);
    /* 0072895f: ret 4 */ FN_RET(0x00728938); r_esp += 8; return;
}

void f_00728964(void) /* sub_728964 */
{
    FN_ENTER(0x00728964);
    /* 00728964: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00728968: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0072896a: mov dword ptr [ecx + 0x148], eax */ W32((u32)(r_ecx+0x148u), r_eax);
    /* 00728970: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00728973: mov dword ptr [ecx + 0x14c], eax */ W32((u32)(r_ecx+0x14cu), r_eax);
    /* 00728979: ret 4 */ FN_RET(0x00728964); r_esp += 8; return;
}

void f_0072897c(void) /* sub_72897C */
{
    FN_ENTER(0x0072897c);
    /* 0072897c: fld dword ptr [0x9707ec] */ FPUSH(R_F32((u32)(0x9707ecu)));
    /* 00728982: fld dword ptr [ecx + 0x40] */ FPUSH(R_F32((u32)(r_ecx+0x40u)));
    /* 00728985: fadd st(1) */ ST(0) = ST(0) + ST(1);
    /* 00728987: fld dword ptr [ecx + 0x44] */ FPUSH(R_F32((u32)(r_ecx+0x44u)));
    /* 0072898a: faddp st(2) */ ST(2) = ST(2) + ST(0); FPOP();
    /* 0072898c: movsx edx, byte ptr [ecx + 0x68] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x68u));
    /* 00728990: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728993: je 0x7289ab */ if (fZ) goto L_007289ab;
L_00728995:; BB(0x00728995);
    /* 00728995: mov eax, dword ptr [ecx + 0x64] */ r_eax = R32((u32)(r_ecx+0x64u));
    /* 00728998: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 0072899b: fst dword ptr [edx + 0x148] */ W_F32((u32)(r_edx+0x148u), ST(0));
    /* 007289a1: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007289a3: fst dword ptr [edx + 0x14c] */ W_F32((u32)(r_edx+0x14cu), ST(0));
    /* 007289a9: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_007289ab:; BB(0x007289ab);
    /* 007289ab: movsx edx, byte ptr [ecx + 0x69] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x69u));
    /* 007289af: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 007289b2: je 0x7289ca */ if (fZ) goto L_007289ca;
L_007289b4:; BB(0x007289b4);
    /* 007289b4: mov eax, dword ptr [ecx + 0x64] */ r_eax = R32((u32)(r_ecx+0x64u));
    /* 007289b7: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 007289ba: fst dword ptr [edx + 0x148] */ W_F32((u32)(r_edx+0x148u), ST(0));
    /* 007289c0: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007289c2: fst dword ptr [edx + 0x14c] */ W_F32((u32)(r_edx+0x14cu), ST(0));
    /* 007289c8: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_007289ca:; BB(0x007289ca);
    /* 007289ca: movsx edx, byte ptr [ecx + 0x6a] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x6au));
    /* 007289ce: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 007289d1: je 0x7289e9 */ if (fZ) goto L_007289e9;
L_007289d3:; BB(0x007289d3);
    /* 007289d3: mov eax, dword ptr [ecx + 0x64] */ r_eax = R32((u32)(r_ecx+0x64u));
    /* 007289d6: mov edx, dword ptr [eax + edx*4] */ r_edx = R32((u32)(r_eax+r_edx*4));
    /* 007289d9: fst dword ptr [edx + 0x148] */ W_F32((u32)(r_edx+0x148u), ST(0));
    /* 007289df: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 007289e1: fst dword ptr [edx + 0x14c] */ W_F32((u32)(r_edx+0x14cu), ST(0));
    /* 007289e7: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
L_007289e9:; BB(0x007289e9);
    /* 007289e9: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 007289eb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007289ed: ret  */ FN_RET(0x0072897c); r_esp += 4; return;
}

void f_007289f0(void) /* sub_7289F0 */
{
    FN_ENTER(0x007289f0);
    /* 007289f0: mov dword ptr [0xa9a818], 0x3f800000 */ W32((u32)(0xa9a818u), 0x3f800000u);
    /* 007289fa: mov dword ptr [0xa9a81c], 0x41000000 */ W32((u32)(0xa9a81cu), 0x41000000u);
    /* 00728a04: mov dword ptr [0xa9a820], 0x3fc00000 */ W32((u32)(0xa9a820u), 0x3fc00000u);
    /* 00728a0e: ret  */ FN_RET(0x007289f0); r_esp += 4; return;
}

void f_00728a10(void) /* sub_728A10 */
{
    FN_ENTER(0x00728a10);
    /* 00728a10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00728a11: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00728a13: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00728a15: call 0x761340 */ r_esp -= 4; W32(r_esp, 0x728a1au); f_00761340();
    /* 00728a1a: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00728a1e: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00728a20: jne 0x728a26 */ if (!fZ) goto L_00728a26;
L_00728a22:; BB(0x00728a22);
    /* 00728a22: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00728a23: ret 4 */ FN_RET(0x00728a10); r_esp += 8; return;
L_00728a26:; BB(0x00728a26);
    /* 00728a26: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00728a27: call 0x857e98 */ r_esp -= 4; W32(r_esp, 0x728a2cu); f_00857e98();
    /* 00728a2c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00728a2d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00728a2e: ret 4 */ FN_RET(0x00728a10); r_esp += 8; return;
}

void f_00728a34(void) /* sub_728A34 */
{
    FN_ENTER(0x00728a34);
    /* 00728a34: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00728a35: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00728a37: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00728a39: call 0x728a58 */ r_esp -= 4; W32(r_esp, 0x728a3eu); f_00728a58();
    /* 00728a3e: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00728a42: test al, 1 */ {  u32 a = (u8)r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00728a44: jne 0x728a4a */ if (!fZ) goto L_00728a4a;
L_00728a46:; BB(0x00728a46);
    /* 00728a46: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00728a47: ret 4 */ FN_RET(0x00728a34); r_esp += 8; return;
L_00728a4a:; BB(0x00728a4a);
    /* 00728a4a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00728a4b: call 0x5c2f74 */ r_esp -= 4; W32(r_esp, 0x728a50u); f_005c2f74();
    /* 00728a50: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00728a51: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00728a52: ret 4 */ FN_RET(0x00728a34); r_esp += 8; return;
}

void f_00728a58(void) /* sub_728A58 */
{
    FN_ENTER(0x00728a58);
    /* 00728a58: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00728a59: mov ebp, esp */ r_ebp = r_esp;
    /* 00728a5b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00728a5d: push 0x8f1070 */ { u32 v = 0x8f1070u; r_esp -= 4; W32(r_esp, v); }
    /* 00728a62: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00728a68: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00728a69: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00728a70: sub esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00728a73: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00728a76: mov dword ptr [ebp - 0x1c], edi */ W32((u32)(r_ebp+0xffffffe4u), r_edi);
    /* 00728a79: mov dword ptr [ebp - 0x18], esi */ W32((u32)(r_ebp+0xffffffe8u), r_esi);
    /* 00728a7c: mov dword ptr [ebp - 0x14], ebx */ W32((u32)(r_ebp+0xffffffecu), r_ebx);
    /* 00728a7f: mov dword ptr [ebp - 0x20], ecx */ W32((u32)(r_ebp+0xffffffe0u), r_ecx);
    /* 00728a82: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00728a89: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
    /* 00728a8c: mov ecx, dword ptr [eax + 0x74] */ r_ecx = R32((u32)(r_eax+0x74u));
    /* 00728a8f: mov dword ptr [eax], 0xb40158 */ W32((u32)(r_eax), 0xb40158u);
    /* 00728a95: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728a97: je 0x728aa5 */ if (fZ) goto L_00728aa5;
L_00728a99:; BB(0x00728a99);
    /* 00728a99: je 0x728aa5 */ if (fZ) goto L_00728aa5;
L_00728a9b:; BB(0x00728a9b);
    /* 00728a9b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00728a9d: call 0x728a10 */ r_esp -= 4; W32(r_esp, 0x728aa2u); f_00728a10();
    /* 00728aa2: mov eax, dword ptr [ebp - 0x20] */ r_eax = R32((u32)(r_ebp+0xffffffe0u));
L_00728aa5:; BB(0x00728aa5);
    /* 00728aa5: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00728aac: mov ecx, eax */ r_ecx = r_eax;
    /* 00728aae: call 0x710c28 */ r_esp -= 4; W32(r_esp, 0x728ab3u); f_00710c28();
    /* 00728ab3: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00728ab6: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00728abd: mov esp, ebp */ r_esp = r_ebp;
    /* 00728abf: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00728ac0: ret  */ FN_RET(0x00728a58); r_esp += 4; return;
}

void f_00728ac4(void) /* sub_728AC4 */
{
    FN_ENTER(0x00728ac4);
    /* 00728ac4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00728ac5: mov ebp, esp */ r_ebp = r_esp;
    /* 00728ac7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00728ac9: push 0x8f1094 */ { u32 v = 0x8f1094u; r_esp -= 4; W32(r_esp, v); }
    /* 00728ace: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00728ad4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00728ad5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00728adc: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00728adf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00728ae2: mov dword ptr [ebp - 0x2c], edi */ W32((u32)(r_ebp+0xffffffd4u), r_edi);
    /* 00728ae5: mov dword ptr [ebp - 0x28], esi */ W32((u32)(r_ebp+0xffffffd8u), r_esi);
    /* 00728ae8: mov dword ptr [ebp - 0x24], ebx */ W32((u32)(r_ebp+0xffffffdcu), r_ebx);
    /* 00728aeb: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00728aee: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00728af1: mov edx, dword ptr [ebp + 0x10] */ r_edx = R32((u32)(r_ebp+0x10u));
    /* 00728af4: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 00728af7: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00728afa: mov eax, dword ptr [ebp + 0x14] */ r_eax = R32((u32)(r_ebp+0x14u));
    /* 00728afd: mov dword ptr [ebp - 0x18], edx */ W32((u32)(r_ebp+0xffffffe8u), r_edx);
    /* 00728b00: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00728b03: movsx eax, word ptr [ebp + 0x18] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebp+0x18u));
    /* 00728b07: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 00728b0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00728b0b: push 0x9f2c48 */ { u32 v = 0x9f2c48u; r_esp -= 4; W32(r_esp, v); }
    /* 00728b10: call 0x710d30 */ r_esp -= 4; W32(r_esp, 0x728b15u); f_00710d30();
    /* 00728b15: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00728b1c: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00728b1f: mov ebx, dword ptr [ebp - 0x1c] */ r_ebx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00728b22: mov esi, dword ptr [ebp - 0x20] */ r_esi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00728b25: mov edi, dword ptr [ebp - 0x14] */ r_edi = R32((u32)(r_ebp+0xffffffecu));
    /* 00728b28: mov word ptr [edx + 0x20], bx */ W16((u32)(r_edx+0x20u), (u16)r_ebx);
    /* 00728b2c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00728b2e: mov dword ptr [edx], 0xb40158 */ W32((u32)(r_edx), 0xb40158u);
    /* 00728b34: mov ecx, dword ptr [0x9f2c20] */ r_ecx = R32((u32)(0x9f2c20u));
    /* 00728b3a: mov dword ptr [edx + 4], ecx */ W32((u32)(r_edx+0x4u), r_ecx);
    /* 00728b3d: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00728b40: mov dword ptr [edx + 0x78], 0x3f800000 */ W32((u32)(r_edx+0x78u), 0x3f800000u);
    /* 00728b47: mov word ptr [edx + 0x60], ax */ W16((u32)(r_edx+0x60u), (u16)r_eax);
    /* 00728b4b: mov byte ptr [edx + 0x64], al */ W8((u32)(r_edx+0x64u), (u8)r_eax);
    /* 00728b4e: mov dword ptr [edx + 0x7c], 0x3f800000 */ W32((u32)(r_edx+0x7cu), 0x3f800000u);
    /* 00728b55: mov dword ptr [edx + 0x68], esi */ W32((u32)(r_edx+0x68u), r_esi);
    /* 00728b58: mov dword ptr [edx + 0x6c], ecx */ W32((u32)(r_edx+0x6cu), r_ecx);
    /* 00728b5b: mov dword ptr [edx + 0x70], edi */ W32((u32)(r_edx+0x70u), r_edi);
    /* 00728b5e: mov dword ptr [edx + 0x74], eax */ W32((u32)(r_edx+0x74u), r_eax);
    /* 00728b61: mov byte ptr [edx + 0x63], al */ W8((u32)(r_edx+0x63u), (u8)r_eax);
    /* 00728b64: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00728b66: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00728b68: jle 0x728ba7 */ if ((fZ||fS!=fO)) goto L_00728ba7;
L_00728b6a:; BB(0x00728b6a);
    /* 00728b6a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00728b6c: cmp ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00728b6f: jl 0x728ba7 */ if ((fS!=fO)) goto L_00728ba7;
L_00728b71:; BB(0x00728b71);
    /* 00728b71: mov eax, 1 */ r_eax = 0x1u;
    /* 00728b76: cmp ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00728b79: jl 0x728ba7 */ if ((fS!=fO)) goto L_00728ba7;
L_00728b7b:; BB(0x00728b7b);
    /* 00728b7b: mov eax, 2 */ r_eax = 0x2u;
    /* 00728b80: cmp ecx, 0x3e8 */ {  u32 a = r_ecx; u32 b = 0x3e8u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00728b86: jl 0x728ba7 */ if ((fS!=fO)) goto L_00728ba7;
L_00728b88:; BB(0x00728b88);
    /* 00728b88: mov eax, 3 */ r_eax = 0x3u;
    /* 00728b8d: cmp ecx, 0x2710 */ {  u32 a = r_ecx; u32 b = 0x2710u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00728b93: jl 0x728ba7 */ if ((fS!=fO)) goto L_00728ba7;
L_00728b95:; BB(0x00728b95);
    /* 00728b95: cmp ecx, 0x186a0 */ {  u32 a = r_ecx; u32 b = 0x186a0u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00728b9b: mov eax, 4 */ r_eax = 0x4u;
    /* 00728ba0: jl 0x728ba7 */ if ((fS!=fO)) goto L_00728ba7;
L_00728ba2:; BB(0x00728ba2);
    /* 00728ba2: mov eax, 5 */ r_eax = 0x5u;
L_00728ba7:; BB(0x00728ba7);
    /* 00728ba7: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00728baa: mov byte ptr [edx + 0x62], al */ W8((u32)(r_edx+0x62u), (u8)r_eax);
    /* 00728bad: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00728baf:; BB(0x00728baf);
    /* 00728baf: mov esi, dword ptr [ebp - 0x14] */ r_esi = R32((u32)(r_ebp+0xffffffecu));
    /* 00728bb2: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00728bb7: mov edi, dword ptr [edx + 0x28] */ r_edi = R32((u32)(r_edx+0x28u));
    /* 00728bba: imul esi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_esi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00728bbc: mov ecx, dword ptr [edi + ebx*4] */ r_ecx = R32((u32)(r_edi+r_ebx*4));
    /* 00728bbf: mov eax, esi */ r_eax = r_esi;
    /* 00728bc1: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00728bc4: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00728bc7: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00728bc9: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00728bcc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00728bce: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00728bd0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00728bd2: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00728bd4: add eax, esi */ {  u32 a = r_eax; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00728bd6: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 00728bd9: call 0x72cdd0 */ r_esp -= 4; W32(r_esp, 0x728bdeu); f_0072cdd0();
    /* 00728bde: mov ecx, esi */ r_ecx = r_esi;
    /* 00728be0: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00728be5: imul ecx */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_ecx; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00728be7: sar ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00728bea: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00728bec: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00728bef: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00728bf1: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00728bf4: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00728bf7: cmp ebx, 6 */ {  u32 a = r_ebx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00728bfa: jae 0x728c01 */ if (!fC) goto L_00728c01;
L_00728bfc:; BB(0x00728bfc);
    /* 00728bfc: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00728bff: jmp 0x728baf */ goto L_00728baf;
L_00728c01:; BB(0x00728c01);
    /* 00728c01: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00728c04: fld dword ptr [0x9709f4] */ FPUSH(R_F32((u32)(0x9709f4u)));
    /* 00728c0a: fld dword ptr [0x9709f8] */ FPUSH(R_F32((u32)(0x9709f8u)));
    /* 00728c10: fadd dword ptr [edx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_edx+0x38u));
    /* 00728c13: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00728c15: movsx ebx, byte ptr [edx + 0x62] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+0x62u));
    /* 00728c19: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00728c1c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00728c1e: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00728c21: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00728c23: mov dword ptr [ebp - 0x34], ecx */ W32((u32)(r_ebp+0xffffffccu), r_ecx);
    /* 00728c26: fild dword ptr [ebp - 0x34] */ FPUSH((long double)(i32)R32((u32)(r_ebp+0xffffffccu)));
    /* 00728c29: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00728c2b: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00728c2d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00728c2f: fadd dword ptr [0x9709f0] */ ST(0) = ST(0) + R_F32((u32)(0x9709f0u));
    /* 00728c35: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00728c37: jle 0x8f108b */ if ((fZ||fS!=fO)) goto L_008f108b;
L_00728c3d:; BB(0x00728c3d);
    /* 00728c3d: fld dword ptr [0x9709ec] */ FPUSH(R_F32((u32)(0x9709ecu)));
L_00728c43:; BB(0x00728c43);
    /* 00728c43: mov edx, dword ptr [edx + 0x28] */ r_edx = R32((u32)(r_edx+0x28u));
    /* 00728c46: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 00728c49: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00728c4c: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 00728c4f: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00728c51: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 00728c53: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 00728c56: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 00728c58: movsx ebx, byte ptr [edx + 0x62] */ r_ebx = (u32)(i32)(i8)R8((u32)(r_edx+0x62u));
    /* 00728c5c: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00728c5f: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00728c61: jl 0x728c43 */ if ((fS!=fO)) goto L_00728c43;
L_00728c63:; BB(0x00728c63);
    /* 00728c63: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00728c65: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00728c67: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00728c69: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00728c6c: jge 0x728d29 */ if ((fS==fO)) goto L_00728d29;
L_00728c72:; BB(0x00728c72);
    /* 00728c72: mov ecx, eax */ r_ecx = r_eax;
    /* 00728c74: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00728c76: add ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00728c79: cmp ecx, 6 */ {  u32 a = r_ecx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00728c7c: jl 0x728d05 */ if ((fS!=fO)) goto L_00728d05;
L_00728c82:; BB(0x00728c82);
    /* 00728c82: mov esi, dword ptr [ebp - 0x38] */ r_esi = R32((u32)(r_ebp+0xffffffc8u));
    /* 00728c85: mov edx, dword ptr [edx + 0x28] */ r_edx = R32((u32)(r_edx+0x28u));
    /* 00728c88: mov ebx, dword ptr [edx + eax*4] */ r_ebx = R32((u32)(r_edx+r_eax*4));
    /* 00728c8b: movzx ecx, word ptr [ebx + 4] */ r_ecx = (u32)R16((u32)(r_ebx+0x4u));
    /* 00728c8f: or ecx, 0xffff0002 */ {  u32 a = r_ecx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00728c95: mov word ptr [ebx + 4], cx */ W16((u32)(r_ebx+0x4u), (u16)r_ecx);
    /* 00728c99: mov edi, dword ptr [esi + 0x28] */ r_edi = R32((u32)(r_esi+0x28u));
    /* 00728c9c: mov ecx, dword ptr [edi + eax*4 + 4] */ r_ecx = R32((u32)(r_edi+r_eax*4+0x4u));
    /* 00728ca0: movzx edx, word ptr [ecx + 4] */ r_edx = (u32)R16((u32)(r_ecx+0x4u));
    /* 00728ca4: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00728caa: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 00728cae: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00728cb1: mov edx, dword ptr [edx + 0x28] */ r_edx = R32((u32)(r_edx+0x28u));
    /* 00728cb4: mov ecx, dword ptr [edx + eax*4 + 8] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x8u));
    /* 00728cb8: movzx edx, word ptr [ecx + 4] */ r_edx = (u32)R16((u32)(r_ecx+0x4u));
    /* 00728cbc: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00728cc2: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 00728cc6: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00728cc9: mov edx, dword ptr [edx + 0x28] */ r_edx = R32((u32)(r_edx+0x28u));
    /* 00728ccc: mov ecx, dword ptr [edx + eax*4 + 0xc] */ r_ecx = R32((u32)(r_edx+r_eax*4+0xcu));
    /* 00728cd0: movzx edx, word ptr [ecx + 4] */ r_edx = (u32)R16((u32)(r_ecx+0x4u));
    /* 00728cd4: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00728cda: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 00728cde: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00728ce1: mov edx, dword ptr [edx + 0x28] */ r_edx = R32((u32)(r_edx+0x28u));
    /* 00728ce4: mov ecx, dword ptr [edx + eax*4 + 0x10] */ r_ecx = R32((u32)(r_edx+r_eax*4+0x10u));
    /* 00728ce8: movzx edx, word ptr [ecx + 4] */ r_edx = (u32)R16((u32)(r_ecx+0x4u));
    /* 00728cec: or edx, 0xffff0002 */ {  u32 a = r_edx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 00728cf2: mov word ptr [ecx + 4], dx */ W16((u32)(r_ecx+0x4u), (u16)r_edx);
    /* 00728cf6: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00728cf9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00728cfb: jge 0x728d02 */ if ((fS==fO)) goto L_00728d02;
L_00728cfd:; BB(0x00728cfd);
    /* 00728cfd: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00728d00: jmp 0x728c82 */ goto L_00728c82;
L_00728d02:; BB(0x00728d02);
    /* 00728d02: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
L_00728d05:; BB(0x00728d05);
    /* 00728d05: mov edx, dword ptr [edx + 0x28] */ r_edx = R32((u32)(r_edx+0x28u));
    /* 00728d08: mov ebx, dword ptr [edx + eax*4] */ r_ebx = R32((u32)(r_edx+r_eax*4));
    /* 00728d0b: movzx ecx, word ptr [ebx + 4] */ r_ecx = (u32)R16((u32)(r_ebx+0x4u));
    /* 00728d0f: or ecx, 0xffff0002 */ {  u32 a = r_ecx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00728d15: mov word ptr [ebx + 4], cx */ W16((u32)(r_ebx+0x4u), (u16)r_ecx);
    /* 00728d19: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00728d1c: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00728d1f: jge 0x728d26 */ if ((fS==fO)) goto L_00728d26;
L_00728d21:; BB(0x00728d21);
    /* 00728d21: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 00728d24: jmp 0x728d05 */ goto L_00728d05;
L_00728d26:; BB(0x00728d26);
    /* 00728d26: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
L_00728d29:; BB(0x00728d29);
    /* 00728d29: mov edi, dword ptr [ebp - 0x2c] */ r_edi = R32((u32)(r_ebp+0xffffffd4u));
    /* 00728d2c: mov esi, dword ptr [ebp - 0x28] */ r_esi = R32((u32)(r_ebp+0xffffffd8u));
    /* 00728d2f: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00728d32: mov eax, edx */ r_eax = r_edx;
    /* 00728d34: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00728d37: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00728d3e: mov esp, ebp */ r_esp = r_ebp;
    /* 00728d40: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00728d41: ret 0x14 */ FN_RET(0x00728ac4); r_esp += 24; return;
L_008f108b:; BB(0x008f108b);
    /* 008f108b: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 008f108d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 008f108f: jmp 0x728c72 */ goto L_00728c72;
}

void f_00728d44(void) /* sub_728D44 */
{
    FN_ENTER(0x00728d44);
    /* 00728d44: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00728d45: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00728d46: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00728d48: movsx eax, word ptr [ebx + 0x20] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x20u));
    /* 00728d4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00728d4d: call 0x719140 */ r_esp -= 4; W32(r_esp, 0x728d52u); f_00719140();
    /* 00728d52: mov edi, eax */ r_edi = r_eax;
    /* 00728d54: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00728d57: mov edx, dword ptr [ebx + 0x2c] */ r_edx = R32((u32)(r_ebx+0x2cu));
    /* 00728d5a: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00728d5d: jne 0x728d66 */ if (!fZ) goto L_00728d66;
L_00728d5f:; BB(0x00728d5f);
    /* 00728d5f: mov dword ptr [ebx + 0x5c], 0x1000000 */ W32((u32)(r_ebx+0x5cu), 0x1000000u);
L_00728d66:; BB(0x00728d66);
    /* 00728d66: movzx edx, word ptr [ebx + 0x60] */ r_edx = (u32)R16((u32)(r_ebx+0x60u));
    /* 00728d6a: test dl, 2 */ {  u32 a = (u8)r_edx; u32 b = 0x2u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00728d6d: jne 0x728f21 */ if (!fZ) goto L_00728f21;
L_00728d73:; BB(0x00728d73);
    /* 00728d73: test dl, 0x40 */ {  u32 a = (u8)r_edx; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00728d76: jne 0x728f21 */ if (!fZ) goto L_00728f21;
L_00728d7c:; BB(0x00728d7c);
    /* 00728d7c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00728d7e: call 0x712480 */ r_esp -= 4; W32(r_esp, 0x728d83u); f_00712480();
    /* 00728d83: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728d85: je 0x728f21 */ if (fZ) goto L_00728f21;
L_00728d8b:; BB(0x00728d8b);
    /* 00728d8b: movzx edx, word ptr [ebx + 0x60] */ r_edx = (u32)R16((u32)(r_ebx+0x60u));
    /* 00728d8f: test dl, 0x10 */ {  u32 a = (u8)r_edx; u32 b = 0x10u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00728d92: je 0x728e45 */ if (fZ) goto L_00728e45;
L_00728d98:; BB(0x00728d98);
    /* 00728d98: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00728d9a: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00728d9c: lea eax, [edi + edi*4] */ r_eax = (u32)(r_edi+r_edi*4);
    /* 00728d9f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00728da1: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 00728da7: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00728da9: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00728dab: lea edi, [eax + eax + 0xaae75c] */ r_edi = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00728db2: mov ecx, edi */ r_ecx = r_edi;
    /* 00728db4: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x728db9u); f_007c09fc();
    /* 00728db9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728dbb: je 0x728dc4 */ if (fZ) goto L_00728dc4;
L_00728dbd:; BB(0x00728dbd);
    /* 00728dbd: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00728dbf: call 0x728f58 */ r_esp -= 4; W32(r_esp, 0x728dc4u); f_00728f58();
L_00728dc4:; BB(0x00728dc4);
    /* 00728dc4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00728dc6: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00728dc8: mov ecx, edi */ r_ecx = r_edi;
    /* 00728dca: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 00728dd0: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x728dd5u); f_007c09fc();
    /* 00728dd5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728dd7: je 0x728de0 */ if (fZ) goto L_00728de0;
L_00728dd9:; BB(0x00728dd9);
    /* 00728dd9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00728ddb: call 0x7290f0 */ r_esp -= 4; W32(r_esp, 0x728de0u); f_007290f0();
L_00728de0:; BB(0x00728de0);
    /* 00728de0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00728de2: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00728de4: mov ecx, edi */ r_ecx = r_edi;
    /* 00728de6: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00728dec: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x728df1u); f_007c09fc();
    /* 00728df1: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728df3: jne 0x728e07 */ if (!fZ) goto L_00728e07;
L_00728df5:; BB(0x00728df5);
    /* 00728df5: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x728dfau); f_00791b48();
    /* 00728dfa: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00728dfc: mov ecx, eax */ r_ecx = r_eax;
    /* 00728dfe: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x728e03u); f_0078fd68();
    /* 00728e03: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728e05: je 0x728e0e */ if (fZ) goto L_00728e0e;
L_00728e07:; BB(0x00728e07);
    /* 00728e07: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00728e09: call 0x729288 */ r_esp -= 4; W32(r_esp, 0x728e0eu); f_00729288();
L_00728e0e:; BB(0x00728e0e);
    /* 00728e0e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00728e10: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00728e12: mov ecx, edi */ r_ecx = r_edi;
    /* 00728e14: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 00728e1a: call 0x7c09fc */ r_esp -= 4; W32(r_esp, 0x728e1fu); f_007c09fc();
    /* 00728e1f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728e21: jne 0x728e39 */ if (!fZ) goto L_00728e39;
L_00728e23:; BB(0x00728e23);
    /* 00728e23: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x728e28u); f_00791b48();
    /* 00728e28: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00728e2a: mov ecx, eax */ r_ecx = r_eax;
    /* 00728e2c: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x728e31u); f_0078fd68();
    /* 00728e31: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728e33: je 0x728ee9 */ if (fZ) goto L_00728ee9;
L_00728e39:; BB(0x00728e39);
    /* 00728e39: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00728e3b: call 0x7292d0 */ r_esp -= 4; W32(r_esp, 0x728e40u); f_007292d0();
    /* 00728e40: jmp 0x728ee9 */ goto L_00728ee9;
L_00728e45:; BB(0x00728e45);
    /* 00728e45: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00728e47: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00728e49: lea eax, [edi + edi*4] */ r_eax = (u32)(r_edi+r_edi*4);
    /* 00728e4c: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00728e4e: push dword ptr [0xa0f664] */ { u32 v = R32((u32)(0xa0f664u)); r_esp -= 4; W32(r_esp, v); }
    /* 00728e54: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00728e56: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00728e58: lea edi, [eax + eax + 0xaae75c] */ r_edi = (u32)(r_eax+r_eax+0xaae75cu);
    /* 00728e5f: mov ecx, edi */ r_ecx = r_edi;
    /* 00728e61: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x728e66u); f_007c0c6c();
    /* 00728e66: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728e68: je 0x728e71 */ if (fZ) goto L_00728e71;
L_00728e6a:; BB(0x00728e6a);
    /* 00728e6a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00728e6c: call 0x728f58 */ r_esp -= 4; W32(r_esp, 0x728e71u); f_00728f58();
L_00728e71:; BB(0x00728e71);
    /* 00728e71: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00728e73: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00728e75: mov ecx, edi */ r_ecx = r_edi;
    /* 00728e77: push dword ptr [0xa0f668] */ { u32 v = R32((u32)(0xa0f668u)); r_esp -= 4; W32(r_esp, v); }
    /* 00728e7d: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x728e82u); f_007c0c6c();
    /* 00728e82: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728e84: je 0x728e8d */ if (fZ) goto L_00728e8d;
L_00728e86:; BB(0x00728e86);
    /* 00728e86: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00728e88: call 0x7290f0 */ r_esp -= 4; W32(r_esp, 0x728e8du); f_007290f0();
L_00728e8d:; BB(0x00728e8d);
    /* 00728e8d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00728e8f: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00728e91: mov ecx, edi */ r_ecx = r_edi;
    /* 00728e93: push dword ptr [0xa0f66c] */ { u32 v = R32((u32)(0xa0f66cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00728e99: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x728e9eu); f_007c0c6c();
    /* 00728e9e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728ea0: jne 0x728eb4 */ if (!fZ) goto L_00728eb4;
L_00728ea2:; BB(0x00728ea2);
    /* 00728ea2: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x728ea7u); f_00791b48();
    /* 00728ea7: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 00728ea9: mov ecx, eax */ r_ecx = r_eax;
    /* 00728eab: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x728eb0u); f_0078fd68();
    /* 00728eb0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728eb2: je 0x728ebb */ if (fZ) goto L_00728ebb;
L_00728eb4:; BB(0x00728eb4);
    /* 00728eb4: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00728eb6: call 0x729288 */ r_esp -= 4; W32(r_esp, 0x728ebbu); f_00729288();
L_00728ebb:; BB(0x00728ebb);
    /* 00728ebb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 00728ebd: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00728ebf: mov ecx, edi */ r_ecx = r_edi;
    /* 00728ec1: push dword ptr [0xa0f670] */ { u32 v = R32((u32)(0xa0f670u)); r_esp -= 4; W32(r_esp, v); }
    /* 00728ec7: call 0x7c0c6c */ r_esp -= 4; W32(r_esp, 0x728eccu); f_007c0c6c();
    /* 00728ecc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728ece: jne 0x728ee2 */ if (!fZ) goto L_00728ee2;
L_00728ed0:; BB(0x00728ed0);
    /* 00728ed0: call 0x791b48 */ r_esp -= 4; W32(r_esp, 0x728ed5u); f_00791b48();
    /* 00728ed5: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 00728ed7: mov ecx, eax */ r_ecx = r_eax;
    /* 00728ed9: call 0x78fd68 */ r_esp -= 4; W32(r_esp, 0x728edeu); f_0078fd68();
    /* 00728ede: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728ee0: je 0x728ee9 */ if (fZ) goto L_00728ee9;
L_00728ee2:; BB(0x00728ee2);
    /* 00728ee2: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00728ee4: call 0x7292d0 */ r_esp -= 4; W32(r_esp, 0x728ee9u); f_007292d0();
L_00728ee9:; BB(0x00728ee9);
    /* 00728ee9: mov eax, dword ptr [0xa0f674] */ r_eax = R32((u32)(0xa0f674u));
    /* 00728eee: or eax, dword ptr [0xa0f698] */ {  u32 a = r_eax; u32 b = R32((u32)(0xa0f698u)); u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00728ef4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00728ef5: mov ecx, edi */ r_ecx = r_edi;
    /* 00728ef7: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x728efcu); f_007c1160();
    /* 00728efc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728efe: je 0x728f07 */ if (fZ) goto L_00728f07;
L_00728f00:; BB(0x00728f00);
    /* 00728f00: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00728f02: call 0x729318 */ r_esp -= 4; W32(r_esp, 0x728f07u); f_00729318();
L_00728f07:; BB(0x00728f07);
    /* 00728f07: mov eax, dword ptr [0xa0f678] */ r_eax = R32((u32)(0xa0f678u));
    /* 00728f0c: or eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00728f0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00728f0f: mov ecx, edi */ r_ecx = r_edi;
    /* 00728f11: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x728f16u); f_007c1160();
    /* 00728f16: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728f18: je 0x728f21 */ if (fZ) goto L_00728f21;
L_00728f1a:; BB(0x00728f1a);
    /* 00728f1a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00728f1c: call 0x72936c */ r_esp -= 4; W32(r_esp, 0x728f21u); f_0072936c();
L_00728f21:; BB(0x00728f21);
    /* 00728f21: mov ecx, dword ptr [ebx + 0x74] */ r_ecx = R32((u32)(r_ebx+0x74u));
    /* 00728f24: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00728f26: je 0x728f3b */ if (fZ) goto L_00728f3b;
L_00728f28:; BB(0x00728f28);
    /* 00728f28: fild dword ptr [ebx + 0x5c] */ FPUSH((long double)(i32)R32((u32)(r_ebx+0x5cu)));
    /* 00728f2b: fcomp dword ptr [0x9709e8] */ fx_compare(ST(0), R_F32((u32)(0x9709e8u))); FPOP();
    /* 00728f31: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00728f33: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00728f34: jb 0x728f3b */ if (fC) goto L_00728f3b;
L_00728f36:; BB(0x00728f36);
    /* 00728f36: call 0x761388 */ r_esp -= 4; W32(r_esp, 0x728f3bu); f_00761388();
L_00728f3b:; BB(0x00728f3b);
    /* 00728f3b: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00728f3d: call 0x710db4 */ r_esp -= 4; W32(r_esp, 0x728f42u); f_00710db4();
    /* 00728f42: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00728f44: call 0x710ee4 */ r_esp -= 4; W32(r_esp, 0x728f49u); f_00710ee4();
    /* 00728f49: lea eax, [ebx + 0x24] */ r_eax = (u32)(r_ebx+0x24u);
    /* 00728f4c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00728f4d: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00728f4f: call 0x72a5ec */ r_esp -= 4; W32(r_esp, 0x728f54u); f_0072a5ec();
    /* 00728f54: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00728f55: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00728f56: ret  */ FN_RET(0x00728d44); r_esp += 4; return;
}

void f_00728f58(void) /* sub_728F58 */
{
    FN_ENTER(0x00728f58);
    /* 00728f58: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00728f59: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00728f5a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00728f5b: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00728f5e: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00728f60: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00728f62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00728f63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00728f64: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00728f65: push 0x56f */ { u32 v = 0x56fu; r_esp -= 4; W32(r_esp, v); }
    /* 00728f6a: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x728f6fu); f_00814298();
    /* 00728f6f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00728f72: movzx eax, byte ptr [ebx + 0x64] */ r_eax = (u32)R8((u32)(r_ebx+0x64u));
    /* 00728f76: mov edx, dword ptr [ebx + 0x70] */ r_edx = R32((u32)(r_ebx+0x70u));
    /* 00728f79: add edx, dword ptr [eax*4 + 0x970a00] */ {  u32 a = r_edx; u32 b = R32((u32)(r_eax*4+0x970a00u)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00728f80: cmp edx, dword ptr [ebx + 0x6c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ebx+0x6cu)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00728f83: jle 0x728f8d */ if ((fZ||fS!=fO)) goto L_00728f8d;
L_00728f85:; BB(0x00728f85);
    /* 00728f85: mov edx, dword ptr [ebx + 0x68] */ r_edx = R32((u32)(r_ebx+0x68u));
    /* 00728f88: mov dword ptr [ebx + 0x70], edx */ W32((u32)(r_ebx+0x70u), r_edx);
    /* 00728f8b: jmp 0x728f90 */ goto L_00728f90;
L_00728f8d:; BB(0x00728f8d);
    /* 00728f8d: mov dword ptr [ebx + 0x70], edx */ W32((u32)(r_ebx+0x70u), r_edx);
L_00728f90:; BB(0x00728f90);
    /* 00728f90: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00728f92: mov esi, eax */ r_esi = r_eax;
    /* 00728f94: mov edi, edx */ r_edi = r_edx;
L_00728f96:; BB(0x00728f96);
    /* 00728f96: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00728f9b: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00728f9d: mov ecx, dword ptr [ebx + 0x28] */ r_ecx = R32((u32)(r_ebx+0x28u));
    /* 00728fa0: mov ecx, dword ptr [ecx + esi*4] */ r_ecx = R32((u32)(r_ecx+r_esi*4));
    /* 00728fa3: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00728fa6: mov eax, edi */ r_eax = r_edi;
    /* 00728fa8: sar eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00728fab: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00728fad: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00728fb0: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00728fb2: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00728fb4: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00728fb6: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00728fb8: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00728fba: mov dword ptr [ecx + 0x20], eax */ W32((u32)(r_ecx+0x20u), r_eax);
    /* 00728fbd: call 0x72cdd0 */ r_esp -= 4; W32(r_esp, 0x728fc2u); f_0072cdd0();
    /* 00728fc2: mov eax, 0x66666667 */ r_eax = 0x66666667u;
    /* 00728fc7: imul edi */ { i64 t = (i64)(i32)r_eax * (i64)(i32)r_edi; r_eax = (u32)t; r_edx = (u32)((u64)t >> 32); fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00728fc9: sar edi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00728fcc: neg edi */ { u32 x = r_edi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edi = r;  }
    /* 00728fce: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00728fd1: add edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00728fd3: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00728fd6: cmp esi, 6 */ {  u32 a = r_esi; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00728fd9: jb 0x728f96 */ if (fC) goto L_00728f96;
L_00728fdb:; BB(0x00728fdb);
    /* 00728fdb: fld dword ptr [0x9709e0] */ FPUSH(R_F32((u32)(0x9709e0u)));
    /* 00728fe1: fld dword ptr [0x9709e4] */ FPUSH(R_F32((u32)(0x9709e4u)));
    /* 00728fe7: fadd dword ptr [ebx + 0x38] */ ST(0) = ST(0) + R_F32((u32)(r_ebx+0x38u));
    /* 00728fea: fmul st(1) */ ST(0) = ST(0) * ST(1);
    /* 00728fec: movsx eax, byte ptr [ebx + 0x62] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x62u));
    /* 00728ff0: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 00728ff3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00728ff5: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00728ff8: add ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00728ffa: mov dword ptr [esp], ecx */ W32((u32)(r_esp), r_ecx);
    /* 00728ffd: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00729000: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00729002: fmul st(2) */ ST(0) = ST(0) * ST(2);
    /* 00729004: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00729006: fadd dword ptr [0x9709dc] */ ST(0) = ST(0) + R_F32((u32)(0x9709dcu));
    /* 0072900c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0072900e: jle 0x7290e4 */ if ((fZ||fS!=fO)) goto L_007290e4;
L_00729014:; BB(0x00729014);
    /* 00729014: fld dword ptr [0x9709d8] */ FPUSH(R_F32((u32)(0x9709d8u)));
    /* 0072901a: jmp 0x72901e */ goto L_0072901e;
L_0072901c:; BB(0x0072901c);
    /* 0072901c: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
L_0072901e:; BB(0x0072901e);
    /* 0072901e: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00729021: mov ecx, dword ptr [eax + edx*4] */ r_ecx = R32((u32)(r_eax+r_edx*4));
    /* 00729024: fld dword ptr [ecx + 0x10] */ FPUSH(R_F32((u32)(r_ecx+0x10u)));
    /* 00729027: fmul st(3) */ ST(0) = ST(0) * ST(3);
    /* 00729029: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0072902c: fadd st(2) */ ST(0) = ST(0) + ST(2);
    /* 0072902e: fstp dword ptr [ecx + 8] */ W_F32((u32)(r_ecx+0x8u), ST(0)); FPOP();
    /* 00729031: movsx eax, byte ptr [ebx + 0x62] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x62u));
    /* 00729035: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00729037: jl 0x72901c */ if ((fS!=fO)) goto L_0072901c;
L_00729039:; BB(0x00729039);
    /* 00729039: fadd st(1), st(0) */ ST(1) = ST(1) + ST(0);
    /* 0072903b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072903d: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0072903f: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00729041: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00729044: jge 0x7290dd */ if ((fS==fO)) goto L_007290dd;
L_0072904a:; BB(0x0072904a);
    /* 0072904a: mov eax, edx */ r_eax = r_edx;
    /* 0072904c: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0072904e: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00729051: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00729054: jl 0x7290c1 */ if ((fS!=fO)) goto L_007290c1;
L_00729056:; BB(0x00729056);
    /* 00729056: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00729059: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 0072905c: movzx ecx, word ptr [eax + 4] */ r_ecx = (u32)R16((u32)(r_eax+0x4u));
    /* 00729060: or ecx, 0xffff0002 */ {  u32 a = r_ecx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 00729066: mov word ptr [eax + 4], cx */ W16((u32)(r_eax+0x4u), (u16)r_ecx);
    /* 0072906a: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 0072906d: mov ecx, dword ptr [eax + edx*4 + 4] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00729071: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 00729075: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072907a: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 0072907e: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00729081: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00729085: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 00729089: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0072908e: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 00729092: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 00729095: mov ecx, dword ptr [eax + edx*4 + 0xc] */ r_ecx = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00729099: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 0072909d: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007290a2: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 007290a6: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 007290a9: mov ecx, dword ptr [eax + edx*4 + 0x10] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 007290ad: movzx eax, word ptr [ecx + 4] */ r_eax = (u32)R16((u32)(r_ecx+0x4u));
    /* 007290b1: or eax, 0xffff0002 */ {  u32 a = r_eax; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 007290b6: mov word ptr [ecx + 4], ax */ W16((u32)(r_ecx+0x4u), (u16)r_eax);
    /* 007290ba: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007290bd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 007290bf: jl 0x729056 */ if ((fS!=fO)) goto L_00729056;
L_007290c1:; BB(0x007290c1);
    /* 007290c1: mov eax, dword ptr [ebx + 0x28] */ r_eax = R32((u32)(r_ebx+0x28u));
    /* 007290c4: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 007290c7: movzx ecx, word ptr [eax + 4] */ r_ecx = (u32)R16((u32)(r_eax+0x4u));
    /* 007290cb: or ecx, 0xffff0002 */ {  u32 a = r_ecx; u32 b = 0xffff0002u; u32 r = (a | b) & 0xffffffffu; r_ecx = r;  }
    /* 007290d1: mov word ptr [eax + 4], cx */ W16((u32)(r_eax+0x4u), (u16)r_ecx);
    /* 007290d5: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 007290d8: cmp edx, 6 */ {  u32 a = r_edx; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 007290db: jl 0x7290c1 */ if ((fS!=fO)) goto L_007290c1;
L_007290dd:; BB(0x007290dd);
    /* 007290dd: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 007290e0: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 007290e1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 007290e2: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 007290e3: ret  */ FN_RET(0x00728f58); r_esp += 4; return;
L_007290e4:; BB(0x007290e4);
    /* 007290e4: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007290e6: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 007290e8: jmp 0x72904a */ goto L_0072904a;
}

