#include "protos.h"

void f_008440d4(void) /* sub_8440D4 */
{
    FN_ENTER(0x008440d4);
    /* 008440d4: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008440d5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008440d6: mov edx, 0xae6dcc */ r_edx = 0xae6dccu;
    /* 008440db: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008440dd: mov ebx, eax */ r_ebx = r_eax;
    /* 008440df: mov esi, edx */ r_esi = r_edx;
L_008440e1:; BB(0x008440e1);
    /* 008440e1: mov ecx, dword ptr [esi] */ r_ecx = R32((u32)(r_esi));
    /* 008440e3: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008440e5: je 0x8440ee */ if (fZ) goto L_008440ee;
L_008440e7:; BB(0x008440e7);
    /* 008440e7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 008440e8: call dword ptr [0x8f807c] */ { u32 t = R32((u32)(0x8f807cu)); r_esp -= 4; W32(r_esp, 0x8440eeu); call_ind(t); }
L_008440ee:; BB(0x008440ee);
    /* 008440ee: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008440f1: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008440f4: cmp ebx, 5 */ {  u32 a = r_ebx; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008440f7: jl 0x8440e1 */ if ((fS!=fO)) goto L_008440e1;
L_008440f9:; BB(0x008440f9);
    /* 008440f9: push dword ptr [0xae6de0] */ { u32 v = R32((u32)(0xae6de0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008440ff: call dword ptr [0x8f807c] */ { u32 t = R32((u32)(0x8f807cu)); r_esp -= 4; W32(r_esp, 0x844105u); call_ind(t); }
    /* 00844105: push dword ptr [0xae6de4] */ { u32 v = R32((u32)(0xae6de4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0084410b: call dword ptr [0x8f8080] */ { u32 t = R32((u32)(0x8f8080u)); r_esp -= 4; W32(r_esp, 0x844111u); call_ind(t); }
    /* 00844111: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x844116u); f_0061cdb0();
    /* 00844116: call 0x844120 */ r_esp -= 4; W32(r_esp, 0x84411bu); f_00844120();
    /* 0084411b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084411c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084411d: ret  */ FN_RET(0x008440d4); r_esp += 4; return;
}

void f_00844120(void) /* sub_844120 */
{
    FN_ENTER(0x00844120);
    /* 00844120: push dword ptr [0xae6de8] */ { u32 v = R32((u32)(0xae6de8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00844126: call 0x858882 */ r_esp -= 4; W32(r_esp, 0x84412bu); f_00858882();
    /* 0084412b: mov dword ptr [0xae6de8], 0 */ W32((u32)(0xae6de8u), 0x0u);
    /* 00844135: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00844136: ret  */ FN_RET(0x00844120); r_esp += 4; return;
}

void f_00844138(void) /* sub_844138 */
{
    FN_ENTER(0x00844138);
    /* 00844138: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00844139: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084413a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084413b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084413c: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084413f: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 00844143: movzx edx, word ptr [esp + 0x1c] */ r_edx = (u32)R16((u32)(r_esp+0x1cu));
    /* 00844148: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 0084414c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0084414d: call 0x841a44 */ r_esp -= 4; W32(r_esp, 0x844152u); f_00841a44();
    /* 00844152: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00844153: push dword ptr [eax*4 + 0xae6dcc] */ { u32 v = R32((u32)(r_eax*4+0xae6dccu)); r_esp -= 4; W32(r_esp, v); }
    /* 0084415a: push dword ptr [0xae6de4] */ { u32 v = R32((u32)(0xae6de4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00844160: call dword ptr [0x8f80a0] */ { u32 t = R32((u32)(0x8f80a0u)); r_esp -= 4; W32(r_esp, 0x844166u); call_ind(t); }
    /* 00844166: mov ebx, dword ptr [0xae6de4] */ r_ebx = R32((u32)(0xae6de4u));
    /* 0084416c: mov ebp, dword ptr [0xae6dec] */ r_ebp = R32((u32)(0xae6decu));
    /* 00844172: mov esi, dword ptr [0xae6df0] */ r_esi = R32((u32)(0xae6df0u));
    /* 00844178: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0084417a: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0084417c: mov edi, ebp */ r_edi = r_ebp;
    /* 0084417e: imul edi, esi */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_esi; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00844181: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00844182: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00844184: push dword ptr [0xae6df4] */ { u32 v = R32((u32)(0xae6df4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0084418a: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x84418fu); f_0086b688();
    /* 0084418f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00844192: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 00844196: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00844198: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00844199: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0084419b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084419c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0084419d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0084419f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008441a0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008441a1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008441a2: call dword ptr [0x8f8078] */ { u32 t = R32((u32)(0x8f8078u)); r_esp -= 4; W32(r_esp, 0x8441a8u); call_ind(t); }
    /* 008441a8: mov ebx, dword ptr [0xae6df4] */ r_ebx = R32((u32)(0xae6df4u));
    /* 008441ae: add ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008441b0: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008441b2: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008441b4: je 0x8441d6 */ if (fZ) goto L_008441d6;
L_008441b6:; BB(0x008441b6);
    /* 008441b6: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 008441b9: mov esi, dword ptr [esp + 4] */ r_esi = R32((u32)(r_esp+0x4u));
L_008441bd:; BB(0x008441bd);
    /* 008441bd: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008441be: sub ebx, ebp */ {  u32 a = r_ebx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008441c0: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008441c1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008441c2: call 0x86b6b8 */ r_esp -= 4; W32(r_esp, 0x8441c7u); f_0086b6b8();
    /* 008441c7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008441ca: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 008441cd: add esi, ebp */ {  u32 a = r_esi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 008441cf: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008441d2: cmp edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008441d4: jne 0x8441bd */ if (!fZ) goto L_008441bd;
L_008441d6:; BB(0x008441d6);
    /* 008441d6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008441d9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008441da: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008441db: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008441dc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008441dd: ret  */ FN_RET(0x00844138); r_esp += 4; return;
}

void f_008441e0(void) /* sub_8441E0 */
{
    FN_ENTER(0x008441e0);
    /* 008441e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008441e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008441e2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008441e3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 008441e4: sub esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008441e7: movzx edi, word ptr [esp + 0x24] */ r_edi = (u32)R16((u32)(r_esp+0x24u));
    /* 008441ec: cmp edi, 0x20 */ {  u32 a = r_edi; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008441ef: jge 0x8441fe */ if ((fS==fO)) goto L_008441fe;
L_008441f1:; BB(0x008441f1);
    /* 008441f1: mov eax, dword ptr [0xae6dec] */ r_eax = R32((u32)(0xae6decu));
    /* 008441f6: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008441f9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 008441fa: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 008441fb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 008441fc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 008441fd: ret  */ FN_RET(0x008441e0); r_esp += 4; return;
L_008441fe:; BB(0x008441fe);
    /* 008441fe: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008441ff: call 0x841a44 */ r_esp -= 4; W32(r_esp, 0x844204u); f_00841a44();
    /* 00844204: mov esi, eax */ r_esi = r_eax;
    /* 00844206: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00844209: mov ecx, dword ptr [0xae6e04] */ r_ecx = R32((u32)(0xae6e04u));
    /* 0084420f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00844211: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00844213: mov edx, ecx */ r_edx = r_ecx;
    /* 00844215: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844217: je 0x844235 */ if (fZ) goto L_00844235;
L_00844219:; BB(0x00844219);
    /* 00844219: cmp esi, dword ptr [edx] */ {  u32 a = r_esi; u32 b = R32((u32)(r_edx)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084421b: jne 0x844229 */ if (!fZ) goto L_00844229;
L_0084421d:; BB(0x0084421d);
    /* 0084421d: movzx ebx, word ptr [edx + 4] */ r_ebx = (u32)R16((u32)(r_edx+0x4u));
    /* 00844221: cmp ebx, edi */ {  u32 a = r_ebx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844223: je 0x844335 */ if (fZ) goto L_00844335;
L_00844229:; BB(0x00844229);
    /* 00844229: mov ebx, edx */ r_ebx = r_edx;
    /* 0084422b: mov edx, dword ptr [edx + 0xc] */ r_edx = R32((u32)(r_edx+0xcu));
    /* 0084422e: add ebp, 1 */ {  u32 a = r_ebp; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00844231: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844233: jne 0x844219 */ if (!fZ) goto L_00844219;
L_00844235:; BB(0x00844235);
    /* 00844235: mov edx, dword ptr [0xae6dec] */ r_edx = R32((u32)(0xae6decu));
    /* 0084423b: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0084423e: mov word ptr [esp + 4], di */ W16((u32)(r_esp+0x4u), (u16)r_edi);
    /* 00844243: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00844245: mov word ptr [esp + 6], cx */ W16((u32)(r_esp+0x6u), (u16)r_ecx);
    /* 0084424a: cmp edi, 0xff */ {  u32 a = r_edi; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00844250: jg 0x844288 */ if ((!fZ&&fS==fO)) goto L_00844288;
L_00844252:; BB(0x00844252);
    /* 00844252: push dword ptr [esi*4 + 0xae6dcc] */ { u32 v = R32((u32)(r_esi*4+0xae6dccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00844259: push dword ptr [0xae6de4] */ { u32 v = R32((u32)(0xae6de4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0084425f: call dword ptr [0x8f80a0] */ { u32 t = R32((u32)(0x8f80a0u)); r_esp -= 4; W32(r_esp, 0x844265u); call_ind(t); }
    /* 00844265: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00844269: lea edx, [esp + 8] */ r_edx = (u32)(r_esp+0x8u);
    /* 0084426d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0084426e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00844270: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00844271: push dword ptr [0xae6de4] */ { u32 v = R32((u32)(0xae6de4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00844277: call dword ptr [0x8f8088] */ { u32 t = R32((u32)(0x8f8088u)); r_esp -= 4; W32(r_esp, 0x84427du); call_ind(t); }
    /* 0084427d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084427f: je 0x844288 */ if (fZ) goto L_00844288;
L_00844281:; BB(0x00844281);
    /* 00844281: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 00844285: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
L_00844288:; BB(0x00844288);
    /* 00844288: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084428a: je 0x844298 */ if (fZ) goto L_00844298;
L_0084428c:; BB(0x0084428c);
    /* 0084428c: cmp ebp, 0x400 */ {  u32 a = r_ebp; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844292: je 0x84437a */ if (fZ) goto L_0084437a;
L_00844298:; BB(0x00844298);
    /* 00844298: mov ecx, dword ptr [0xae6de8] */ r_ecx = R32((u32)(0xae6de8u));
    /* 0084429e: lea edx, [ecx + 0x5000] */ r_edx = (u32)(r_ecx+0x5000u);
    /* 008442a4: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008442a6: jae 0x8442f8 */ if (!fC) goto L_008442f8;
L_008442a8:; BB(0x008442a8);
    /* 008442a8: mov ebx, edx */ r_ebx = r_edx;
    /* 008442aa: sub ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 008442ac: cmp ebx, 0x78 */ {  u32 a = r_ebx; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008442af: jb 0x8442ea */ if (fC) goto L_008442ea;
L_008442b1:; BB(0x008442b1);
    /* 008442b1: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 008442b3: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008442b6: je 0x8442f8 */ if (fZ) goto L_008442f8;
L_008442b8:; BB(0x008442b8);
    /* 008442b8: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008442bb: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 008442bd: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008442c0: je 0x8442f8 */ if (fZ) goto L_008442f8;
L_008442c2:; BB(0x008442c2);
    /* 008442c2: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008442c5: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 008442c7: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008442ca: je 0x8442f8 */ if (fZ) goto L_008442f8;
L_008442cc:; BB(0x008442cc);
    /* 008442cc: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008442cf: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 008442d1: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008442d4: je 0x8442f8 */ if (fZ) goto L_008442f8;
L_008442d6:; BB(0x008442d6);
    /* 008442d6: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008442d9: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 008442db: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008442de: je 0x8442f8 */ if (fZ) goto L_008442f8;
L_008442e0:; BB(0x008442e0);
    /* 008442e0: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008442e3: lea ebx, [edx - 0x78] */ r_ebx = (u32)(r_edx+0xffffff88u);
    /* 008442e6: cmp ecx, ebx */ {  u32 a = r_ecx; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 008442e8: jbe 0x8442b1 */ if ((fC||fZ)) goto L_008442b1;
L_008442ea:; BB(0x008442ea);
    /* 008442ea: mov ebx, dword ptr [ecx] */ r_ebx = R32((u32)(r_ecx));
    /* 008442ec: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008442ef: je 0x8442f8 */ if (fZ) goto L_008442f8;
L_008442f1:; BB(0x008442f1);
    /* 008442f1: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008442f4: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008442f6: jb 0x8442ea */ if (fC) goto L_008442ea;
L_008442f8:; BB(0x008442f8);
    /* 008442f8: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008442fa: je 0x844375 */ if (fZ) goto L_00844375;
L_008442fc:; BB(0x008442fc);
    /* 008442fc: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 008442ff: mov dword ptr [ecx + 0x10], 0xae6df8 */ W32((u32)(r_ecx+0x10u), 0xae6df8u);
    /* 00844306: mov dword ptr [ecx], esi */ W32((u32)(r_ecx), r_esi);
    /* 00844308: mov word ptr [ecx + 4], di */ W16((u32)(r_ecx+0x4u), (u16)r_edi);
    /* 0084430c: mov dword ptr [ecx + 8], eax */ W32((u32)(r_ecx+0x8u), r_eax);
    /* 0084430f: mov edx, dword ptr [0xae6e04] */ r_edx = R32((u32)(0xae6e04u));
    /* 00844315: mov dword ptr [ecx + 0xc], edx */ W32((u32)(r_ecx+0xcu), r_edx);
    /* 00844318: mov eax, dword ptr [0xae6e04] */ r_eax = R32((u32)(0xae6e04u));
    /* 0084431d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084431f: je 0x844324 */ if (fZ) goto L_00844324;
L_00844321:; BB(0x00844321);
    /* 00844321: mov dword ptr [eax + 0x10], ecx */ W32((u32)(r_eax+0x10u), r_ecx);
L_00844324:; BB(0x00844324);
    /* 00844324: mov dword ptr [0xae6e04], ecx */ W32((u32)(0xae6e04u), r_ecx);
L_0084432a:; BB(0x0084432a);
    /* 0084432a: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0084432d: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00844330: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00844331: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00844332: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00844333: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00844334: ret  */ FN_RET(0x008441e0); r_esp += 4; return;
L_00844335:; BB(0x00844335);
    /* 00844335: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844337: je 0x84436d */ if (fZ) goto L_0084436d;
L_00844339:; BB(0x00844339);
    /* 00844339: mov ecx, dword ptr [edx + 0x10] */ r_ecx = R32((u32)(r_edx+0x10u));
    /* 0084433c: mov eax, dword ptr [edx + 0xc] */ r_eax = R32((u32)(r_edx+0xcu));
    /* 0084433f: mov dword ptr [ecx + 0xc], eax */ W32((u32)(r_ecx+0xcu), r_eax);
    /* 00844342: mov ecx, dword ptr [edx + 0xc] */ r_ecx = R32((u32)(r_edx+0xcu));
    /* 00844345: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844347: je 0x84434f */ if (fZ) goto L_0084434f;
L_00844349:; BB(0x00844349);
    /* 00844349: mov eax, dword ptr [edx + 0x10] */ r_eax = R32((u32)(r_edx+0x10u));
    /* 0084434c: mov dword ptr [ecx + 0x10], eax */ W32((u32)(r_ecx+0x10u), r_eax);
L_0084434f:; BB(0x0084434f);
    /* 0084434f: mov dword ptr [edx + 0x10], 0xae6df8 */ W32((u32)(r_edx+0x10u), 0xae6df8u);
    /* 00844356: mov eax, dword ptr [0xae6e04] */ r_eax = R32((u32)(0xae6e04u));
    /* 0084435b: mov dword ptr [edx + 0xc], eax */ W32((u32)(r_edx+0xcu), r_eax);
    /* 0084435e: mov ecx, dword ptr [0xae6e04] */ r_ecx = R32((u32)(0xae6e04u));
    /* 00844364: mov dword ptr [ecx + 0x10], edx */ W32((u32)(r_ecx+0x10u), r_edx);
    /* 00844367: mov dword ptr [0xae6e04], edx */ W32((u32)(0xae6e04u), r_edx);
L_0084436d:; BB(0x0084436d);
    /* 0084436d: mov eax, dword ptr [edx + 8] */ r_eax = R32((u32)(r_edx+0x8u));
    /* 00844370: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00844373: jmp 0x84432a */ goto L_0084432a;
L_00844375:; BB(0x00844375);
    /* 00844375: jmp 0x844375 */ goto L_00844375;
L_0084437a:; BB(0x0084437a);
    /* 0084437a: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 0084437d: mov edx, dword ptr [ebx + 0x10] */ r_edx = R32((u32)(r_ebx+0x10u));
    /* 00844380: mov dword ptr [ebx], esi */ W32((u32)(r_ebx), r_esi);
    /* 00844382: mov word ptr [ebx + 4], di */ W16((u32)(r_ebx+0x4u), (u16)r_edi);
    /* 00844386: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 00844389: mov dword ptr [edx + 0xc], 0 */ W32((u32)(r_edx+0xcu), 0x0u);
    /* 00844390: mov dword ptr [ebx + 0x10], 0xae6df8 */ W32((u32)(r_ebx+0x10u), 0xae6df8u);
    /* 00844397: mov ecx, dword ptr [0xae6e04] */ r_ecx = R32((u32)(0xae6e04u));
    /* 0084439d: mov dword ptr [ebx + 0xc], ecx */ W32((u32)(r_ebx+0xcu), r_ecx);
    /* 008443a0: mov ebp, dword ptr [0xae6e04] */ r_ebp = R32((u32)(0xae6e04u));
    /* 008443a6: mov dword ptr [ebp + 0x10], ebx */ W32((u32)(r_ebp+0x10u), r_ebx);
    /* 008443a9: mov dword ptr [0xae6e04], ebx */ W32((u32)(0xae6e04u), r_ebx);
    /* 008443af: jmp 0x84432a */ goto L_0084432a;
}

void f_008443b4(void) /* sub_8443B4 */
{
    FN_ENTER(0x008443b4);
    /* 008443b4: movzx eax, word ptr [esp + 4] */ r_eax = (u32)R16((u32)(r_esp+0x4u));
    /* 008443b9: ret  */ FN_RET(0x008443b4); r_esp += 4; return;
}

void f_008443bc(void) /* sub_8443BC */
{
    FN_ENTER(0x008443bc);
    /* 008443bc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008443bd: push 0x5000 */ { u32 v = 0x5000u; r_esp -= 4; W32(r_esp, v); }
    /* 008443c2: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x8443c7u); f_00859c55();
    /* 008443c7: mov ecx, eax */ r_ecx = r_eax;
    /* 008443c9: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008443cc: mov dword ptr [0xae6de8], ecx */ W32((u32)(0xae6de8u), r_ecx);
    /* 008443d2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008443d4: mov dword ptr [0xae6e04], edx */ W32((u32)(0xae6e04u), r_edx);
    /* 008443da: mov dword ptr [0xae6e08], edx */ W32((u32)(0xae6e08u), r_edx);
    /* 008443e0: lea edx, [ecx + 0x5000] */ r_edx = (u32)(r_ecx+0x5000u);
    /* 008443e6: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 008443e8: jae 0x844423 */ if (!fC) goto L_00844423;
L_008443ea:; BB(0x008443ea);
    /* 008443ea: mov eax, edx */ r_eax = r_edx;
    /* 008443ec: sub eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 008443ee: cmp eax, 0x78 */ {  u32 a = r_eax; u32 b = 0x78u; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008443f1: jb 0x844416 */ if (fC) goto L_00844416;
L_008443f3:; BB(0x008443f3);
    /* 008443f3: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 008443f6: lea eax, [edx - 0x78] */ r_eax = (u32)(r_edx+0xffffff88u);
L_008443f9:; BB(0x008443f9);
    /* 008443f9: mov ebp, 0xffffffff */ r_ebp = 0xffffffffu;
    /* 008443fe: mov dword ptr [ecx], ebp */ W32((u32)(r_ecx), r_ebp);
    /* 00844400: mov dword ptr [ecx + 0x14], ebp */ W32((u32)(r_ecx+0x14u), r_ebp);
    /* 00844403: mov dword ptr [ecx + 0x28], ebp */ W32((u32)(r_ecx+0x28u), r_ebp);
    /* 00844406: mov dword ptr [ecx + 0x3c], ebp */ W32((u32)(r_ecx+0x3cu), r_ebp);
    /* 00844409: mov dword ptr [ecx + 0x50], ebp */ W32((u32)(r_ecx+0x50u), r_ebp);
    /* 0084440c: add ecx, 0x64 */ {  u32 a = r_ecx; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084440f: cmp ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00844411: jbe 0x8443f9 */ if ((fC||fZ)) goto L_008443f9;
L_00844413:; BB(0x00844413);
    /* 00844413: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_00844416:; BB(0x00844416);
    /* 00844416: mov dword ptr [ecx], 0xffffffff */ W32((u32)(r_ecx), 0xffffffffu);
    /* 0084441c: add ecx, 0x14 */ {  u32 a = r_ecx; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0084441f: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00844421: jb 0x844416 */ if (fC) goto L_00844416;
L_00844423:; BB(0x00844423);
    /* 00844423: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00844424: ret  */ FN_RET(0x008443bc); r_esp += 4; return;
}

void f_00844428(void) /* sub_844428 */
{
    FN_ENTER(0x00844428);
    /* 00844428: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00844429: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0084442a: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084442b: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084442e: mov ebx, dword ptr [esp + 0x3c] */ r_ebx = R32((u32)(r_esp+0x3cu));
    /* 00844432: mov edi, dword ptr [esp + 0x40] */ r_edi = R32((u32)(r_esp+0x40u));
    /* 00844436: call 0x841b18 */ r_esp -= 4; W32(r_esp, 0x84443bu); f_00841b18();
    /* 0084443b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0084443d: call dword ptr [0x8f8084] */ { u32 t = R32((u32)(0x8f8084u)); r_esp -= 4; W32(r_esp, 0x844443u); call_ind(t); }
    /* 00844443: mov esi, eax */ r_esi = r_eax;
    /* 00844445: mov dword ptr [0xae6dec], edi */ W32((u32)(0xae6decu), r_edi);
    /* 0084444b: mov dword ptr [0xae6df0], ebx */ W32((u32)(0xae6df0u), r_ebx);
    /* 00844451: mov dword ptr [0xae6de4], esi */ W32((u32)(0xae6de4u), r_esi);
    /* 00844457: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00844459: mov dword ptr [esp], edx */ W32((u32)(r_esp), r_edx);
    /* 0084445c: mov dword ptr [esp + 4], edx */ W32((u32)(r_esp+0x4u), r_edx);
    /* 00844460: mov dword ptr [esp + 8], edx */ W32((u32)(r_esp+0x8u), r_edx);
    /* 00844464: mov dword ptr [esp + 0xc], edx */ W32((u32)(r_esp+0xcu), r_edx);
    /* 00844468: mov dword ptr [esp + 0x10], edx */ W32((u32)(r_esp+0x10u), r_edx);
    /* 0084446c: mov dword ptr [esp + 0x14], edx */ W32((u32)(r_esp+0x14u), r_edx);
    /* 00844470: mov dword ptr [esp + 0x18], edx */ W32((u32)(r_esp+0x18u), r_edx);
    /* 00844474: mov dword ptr [esp + 0x1c], edx */ W32((u32)(r_esp+0x1cu), r_edx);
    /* 00844478: mov dword ptr [esp + 0x20], edx */ W32((u32)(r_esp+0x20u), r_edx);
    /* 0084447c: mov dword ptr [esp + 0x24], edx */ W32((u32)(r_esp+0x24u), r_edx);
    /* 00844480: mov dword ptr [esp], 0x28 */ W32((u32)(r_esp), 0x28u);
    /* 00844487: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0084448b: mov edx, 1 */ r_edx = 0x1u;
    /* 00844490: mov dword ptr [esp + 8], ebx */ W32((u32)(r_esp+0x8u), r_ebx);
    /* 00844494: mov word ptr [esp + 0xc], dx */ W16((u32)(r_esp+0xcu), (u16)r_edx);
    /* 00844499: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 0084449c: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0084449e: mov dword ptr [esp + 0x10], edi */ W32((u32)(r_esp+0x10u), r_edi);
    /* 008444a2: mov ecx, 0x20 */ r_ecx = 0x20u;
    /* 008444a7: mov word ptr [esp + 0xe], cx */ W16((u32)(r_esp+0xeu), (u16)r_ecx);
    /* 008444ac: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008444ad: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008444ae: push 0xae6df4 */ { u32 v = 0xae6df4u; r_esp -= 4; W32(r_esp, v); }
    /* 008444b3: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008444b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008444b5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008444b6: call dword ptr [0x8f8074] */ { u32 t = R32((u32)(0x8f8074u)); r_esp -= 4; W32(r_esp, 0x8444bcu); call_ind(t); }
    /* 008444bc: mov dword ptr [0xae6de0], eax */ W32((u32)(0xae6de0u), r_eax);
    /* 008444c1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 008444c3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008444c4: call dword ptr [0x8f8094] */ { u32 t = R32((u32)(0x8f8094u)); r_esp -= 4; W32(r_esp, 0x8444cau); call_ind(t); }
    /* 008444ca: push 0xffffff */ { u32 v = 0xffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 008444cf: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008444d0: call dword ptr [0x8f8090] */ { u32 t = R32((u32)(0x8f8090u)); r_esp -= 4; W32(r_esp, 0x8444d6u); call_ind(t); }
    /* 008444d6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008444d8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008444d9: call dword ptr [0x8f8098] */ { u32 t = R32((u32)(0x8f8098u)); r_esp -= 4; W32(r_esp, 0x8444dfu); call_ind(t); }
    /* 008444df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 008444e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008444e2: call dword ptr [0x8f808c] */ { u32 t = R32((u32)(0x8f808cu)); r_esp -= 4; W32(r_esp, 0x8444e8u); call_ind(t); }
    /* 008444e8: push dword ptr [0xae6de0] */ { u32 v = R32((u32)(0xae6de0u)); r_esp -= 4; W32(r_esp, v); }
    /* 008444ee: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008444ef: call dword ptr [0x8f80a0] */ { u32 t = R32((u32)(0x8f80a0u)); r_esp -= 4; W32(r_esp, 0x8444f5u); call_ind(t); }
    /* 008444f5: mov edi, 0xae6dcc */ r_edi = 0xae6dccu;
    /* 008444fa: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
L_008444fc:; BB(0x008444fc);
    /* 008444fc: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008444fd: call 0x841a10 */ r_esp -= 4; W32(r_esp, 0x844502u); f_00841a10();
    /* 00844502: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00844503: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00844505: lea edx, [eax + 0x18] */ r_edx = (u32)(r_eax+0x18u);
    /* 00844508: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00844509: push dword ptr [eax + 0x14] */ { u32 v = R32((u32)(r_eax+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0084450c: push dword ptr [eax + 0x10] */ { u32 v = R32((u32)(r_eax+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 0084450f: push dword ptr [eax + 0xc] */ { u32 v = R32((u32)(r_eax+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00844512: push dword ptr [eax + 8] */ { u32 v = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00844515: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00844518: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00844519: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0084451a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0084451b: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0084451d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0084451e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0084451f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00844520: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00844521: call dword ptr [0x8f809c] */ { u32 t = R32((u32)(0x8f809cu)); r_esp -= 4; W32(r_esp, 0x844527u); call_ind(t); }
    /* 00844527: mov dword ptr [edi], eax */ W32((u32)(r_edi), r_eax);
    /* 00844529: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0084452c: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0084452f: cmp esi, 5 */ {  u32 a = r_esi; u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00844532: jl 0x8444fc */ if ((fS!=fO)) goto L_008444fc;
L_00844534:; BB(0x00844534);
    /* 00844534: call 0x8443bc */ r_esp -= 4; W32(r_esp, 0x844539u); f_008443bc();
    /* 00844539: add esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084453c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084453d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084453e: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084453f: ret  */ FN_RET(0x00844428); r_esp += 4; return;
}

void f_00844540(void) /* sub_844540 */
{
    FN_ENTER(0x00844540);
    /* 00844540: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00844541: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00844542: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00844543: sub esp, 0xf4 */ {  u32 a = r_esp; u32 b = 0xf4u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00844549: mov edi, dword ptr [esp + 0x104] */ r_edi = R32((u32)(r_esp+0x104u));
    /* 00844550: mov esi, dword ptr [esp + 0x108] */ r_esi = R32((u32)(r_esp+0x108u));
    /* 00844557: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0084455b: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 0084455d: mov ecx, edi */ r_ecx = r_edi;
    /* 0084455f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844560: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 00844564: call 0x84a90c */ r_esp -= 4; W32(r_esp, 0x844569u); f_0084a90c();
    /* 00844569: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 0084456d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084456e: lea edx, [esp + 0x2c] */ r_edx = (u32)(r_esp+0x2cu);
    /* 00844572: mov ecx, esi */ r_ecx = r_esi;
    /* 00844574: call 0x84a90c */ r_esp -= 4; W32(r_esp, 0x844579u); f_0084a90c();
    /* 00844579: lea edx, [esp + 0x28] */ r_edx = (u32)(r_esp+0x28u);
    /* 0084457d: lea eax, [esp + 0x1c] */ r_eax = (u32)(r_esp+0x1cu);
    /* 00844581: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844582: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00844583: lea ecx, [esp + 0x18] */ r_ecx = (u32)(r_esp+0x18u);
    /* 00844587: lea edx, [esp + 0xc] */ r_edx = (u32)(r_esp+0xcu);
    /* 0084458b: call 0x84aa18 */ r_esp -= 4; W32(r_esp, 0x844590u); f_0084aa18();
    /* 00844590: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844592: je 0x844825 */ if (fZ) goto L_00844825;
L_00844598:; BB(0x00844598);
    /* 00844598: mov eax, 0x98b400 */ r_eax = 0x98b400u;
    /* 0084459d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0084459f: mov dword ptr [esp + 0x34], edx */ W32((u32)(r_esp+0x34u), r_edx);
    /* 008445a3: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 008445a6: mov dword ptr [esp + 0x38], edx */ W32((u32)(r_esp+0x38u), r_edx);
    /* 008445aa: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 008445ad: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 008445b1: mov edx, dword ptr [eax + 0xc] */ r_edx = R32((u32)(r_eax+0xcu));
    /* 008445b4: mov dword ptr [esp + 0x40], edx */ W32((u32)(r_esp+0x40u), r_edx);
    /* 008445b8: mov edx, dword ptr [eax + 0x10] */ r_edx = R32((u32)(r_eax+0x10u));
    /* 008445bb: mov dword ptr [esp + 0x44], edx */ W32((u32)(r_esp+0x44u), r_edx);
    /* 008445bf: mov edx, dword ptr [eax + 0x14] */ r_edx = R32((u32)(r_eax+0x14u));
    /* 008445c2: mov dword ptr [esp + 0x48], edx */ W32((u32)(r_esp+0x48u), r_edx);
    /* 008445c6: mov edx, dword ptr [eax + 0x18] */ r_edx = R32((u32)(r_eax+0x18u));
    /* 008445c9: mov dword ptr [esp + 0x4c], edx */ W32((u32)(r_esp+0x4cu), r_edx);
    /* 008445cd: mov edx, dword ptr [eax + 0x1c] */ r_edx = R32((u32)(r_eax+0x1cu));
    /* 008445d0: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 008445d4: mov edx, dword ptr [eax + 0x20] */ r_edx = R32((u32)(r_eax+0x20u));
    /* 008445d7: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 008445db: mov edx, dword ptr [eax + 0x24] */ r_edx = R32((u32)(r_eax+0x24u));
    /* 008445de: mov dword ptr [esp + 0x58], edx */ W32((u32)(r_esp+0x58u), r_edx);
    /* 008445e2: mov edx, dword ptr [eax + 0x28] */ r_edx = R32((u32)(r_eax+0x28u));
    /* 008445e5: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 008445e9: mov edx, dword ptr [eax + 0x2c] */ r_edx = R32((u32)(r_eax+0x2cu));
    /* 008445ec: mov dword ptr [esp + 0x60], edx */ W32((u32)(r_esp+0x60u), r_edx);
    /* 008445f0: mov edx, dword ptr [eax + 0x30] */ r_edx = R32((u32)(r_eax+0x30u));
    /* 008445f3: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 008445f7: mov edx, dword ptr [eax + 0x34] */ r_edx = R32((u32)(r_eax+0x34u));
    /* 008445fa: mov dword ptr [esp + 0x68], edx */ W32((u32)(r_esp+0x68u), r_edx);
    /* 008445fe: mov edx, dword ptr [eax + 0x38] */ r_edx = R32((u32)(r_eax+0x38u));
    /* 00844601: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 00844605: mov edx, dword ptr [eax + 0x3c] */ r_edx = R32((u32)(r_eax+0x3cu));
    /* 00844608: mov dword ptr [esp + 0x70], edx */ W32((u32)(r_esp+0x70u), r_edx);
    /* 0084460c: mov edx, dword ptr [eax + 0x40] */ r_edx = R32((u32)(r_eax+0x40u));
    /* 0084460f: mov dword ptr [esp + 0x74], edx */ W32((u32)(r_esp+0x74u), r_edx);
    /* 00844613: mov edx, dword ptr [eax + 0x44] */ r_edx = R32((u32)(r_eax+0x44u));
    /* 00844616: mov dword ptr [esp + 0x78], edx */ W32((u32)(r_esp+0x78u), r_edx);
    /* 0084461a: mov edx, dword ptr [eax + 0x48] */ r_edx = R32((u32)(r_eax+0x48u));
    /* 0084461d: mov dword ptr [esp + 0x7c], edx */ W32((u32)(r_esp+0x7cu), r_edx);
    /* 00844621: mov edx, dword ptr [eax + 0x4c] */ r_edx = R32((u32)(r_eax+0x4cu));
    /* 00844624: mov dword ptr [esp + 0x80], edx */ W32((u32)(r_esp+0x80u), r_edx);
    /* 0084462b: mov edx, dword ptr [eax + 0x50] */ r_edx = R32((u32)(r_eax+0x50u));
    /* 0084462e: mov dword ptr [esp + 0x84], edx */ W32((u32)(r_esp+0x84u), r_edx);
    /* 00844635: mov edx, dword ptr [eax + 0x54] */ r_edx = R32((u32)(r_eax+0x54u));
    /* 00844638: mov dword ptr [esp + 0x88], edx */ W32((u32)(r_esp+0x88u), r_edx);
    /* 0084463f: mov edx, dword ptr [eax + 0x58] */ r_edx = R32((u32)(r_eax+0x58u));
    /* 00844642: mov eax, dword ptr [eax + 0x5c] */ r_eax = R32((u32)(r_eax+0x5cu));
    /* 00844645: mov dword ptr [esp + 0x8c], edx */ W32((u32)(r_esp+0x8cu), r_edx);
    /* 0084464c: mov dword ptr [esp + 0x90], eax */ W32((u32)(r_esp+0x90u), r_eax);
    /* 00844653: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
    /* 00844656: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00844658: mov ebx, eax */ r_ebx = r_eax;
    /* 0084465a: mov ecx, edi */ r_ecx = r_edi;
L_0084465c:; BB(0x0084465c);
    /* 0084465c: mov edx, dword ptr [esp + ebx + 0x34] */ r_edx = R32((u32)(r_esp+r_ebx+0x34u));
    /* 00844660: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00844662: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00844664: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00844667: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00844669: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 0084466c: mov dword ptr [esp + 0x94], edx */ W32((u32)(r_esp+0x94u), r_edx);
    /* 00844673: mov edx, dword ptr [eax + ecx + 4] */ r_edx = R32((u32)(r_eax+r_ecx+0x4u));
    /* 00844677: mov dword ptr [esp + 0x98], edx */ W32((u32)(r_esp+0x98u), r_edx);
    /* 0084467e: mov edx, dword ptr [eax + ecx + 8] */ r_edx = R32((u32)(r_eax+r_ecx+0x8u));
    /* 00844682: mov dword ptr [esp + 0x9c], edx */ W32((u32)(r_esp+0x9cu), r_edx);
    /* 00844689: mov edx, dword ptr [esp + ebx + 0x38] */ r_edx = R32((u32)(r_esp+r_ebx+0x38u));
    /* 0084468d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084468f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00844691: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00844694: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00844696: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 00844699: mov dword ptr [esp + 0xa0], edx */ W32((u32)(r_esp+0xa0u), r_edx);
    /* 008446a0: mov edx, dword ptr [eax + ecx + 4] */ r_edx = R32((u32)(r_eax+r_ecx+0x4u));
    /* 008446a4: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 008446a6: mov dword ptr [esp + 0xa4], edx */ W32((u32)(r_esp+0xa4u), r_edx);
    /* 008446ad: mov edx, dword ptr [eax + ecx + 8] */ r_edx = R32((u32)(r_eax+r_ecx+0x8u));
    /* 008446b1: mov eax, dword ptr [esp + ebx + 0x3c] */ r_eax = R32((u32)(r_esp+r_ebx+0x3cu));
    /* 008446b5: mov dword ptr [esp + 0xa8], edx */ W32((u32)(r_esp+0xa8u), r_edx);
    /* 008446bc: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008446be: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008446c0: lea edx, [eax + eax] */ r_edx = (u32)(r_eax+r_eax);
    /* 008446c3: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008446c5: mov eax, dword ptr [edx + ecx] */ r_eax = R32((u32)(r_edx+r_ecx));
    /* 008446c8: mov dword ptr [esp + 0xac], eax */ W32((u32)(r_esp+0xacu), r_eax);
    /* 008446cf: mov eax, dword ptr [edx + ecx + 4] */ r_eax = R32((u32)(r_edx+r_ecx+0x4u));
    /* 008446d3: mov dword ptr [esp + 0xb0], eax */ W32((u32)(r_esp+0xb0u), r_eax);
    /* 008446da: mov edx, dword ptr [edx + ecx + 8] */ r_edx = R32((u32)(r_edx+r_ecx+0x8u));
    /* 008446de: mov dword ptr [esp + 0xb4], edx */ W32((u32)(r_esp+0xb4u), r_edx);
    /* 008446e5: mov edx, dword ptr [esp + ebx + 0x40] */ r_edx = R32((u32)(r_esp+r_ebx+0x40u));
    /* 008446e9: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008446eb: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008446ed: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 008446f0: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008446f2: mov edx, dword ptr [eax + ecx] */ r_edx = R32((u32)(r_eax+r_ecx));
    /* 008446f5: mov dword ptr [esp + 0xb8], edx */ W32((u32)(r_esp+0xb8u), r_edx);
    /* 008446fc: mov edx, dword ptr [eax + ecx + 4] */ r_edx = R32((u32)(r_eax+r_ecx+0x4u));
    /* 00844700: mov dword ptr [esp + 0xbc], edx */ W32((u32)(r_esp+0xbcu), r_edx);
    /* 00844707: mov edx, dword ptr [eax + ecx + 8] */ r_edx = R32((u32)(r_eax+r_ecx+0x8u));
    /* 0084470b: mov dword ptr [esp + 0xc0], edx */ W32((u32)(r_esp+0xc0u), r_edx);
L_00844712:; BB(0x00844712);
    /* 00844712: mov edx, dword ptr [esp + edi + 0x34] */ r_edx = R32((u32)(r_esp+r_edi+0x34u));
    /* 00844716: lea ecx, [esp + 0x94] */ r_ecx = (u32)(r_esp+0x94u);
    /* 0084471d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084471f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00844721: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00844724: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00844726: mov edx, dword ptr [eax + esi] */ r_edx = R32((u32)(r_eax+r_esi));
    /* 00844729: mov dword ptr [esp + 0xc4], edx */ W32((u32)(r_esp+0xc4u), r_edx);
    /* 00844730: mov edx, dword ptr [eax + esi + 4] */ r_edx = R32((u32)(r_eax+r_esi+0x4u));
    /* 00844734: mov dword ptr [esp + 0xc8], edx */ W32((u32)(r_esp+0xc8u), r_edx);
    /* 0084473b: mov edx, dword ptr [eax + esi + 8] */ r_edx = R32((u32)(r_eax+r_esi+0x8u));
    /* 0084473f: mov dword ptr [esp + 0xcc], edx */ W32((u32)(r_esp+0xccu), r_edx);
    /* 00844746: mov edx, dword ptr [esp + edi + 0x38] */ r_edx = R32((u32)(r_esp+r_edi+0x38u));
    /* 0084474a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084474c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084474e: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00844751: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00844753: mov edx, dword ptr [eax + esi] */ r_edx = R32((u32)(r_eax+r_esi));
    /* 00844756: mov dword ptr [esp + 0xd0], edx */ W32((u32)(r_esp+0xd0u), r_edx);
    /* 0084475d: mov edx, dword ptr [eax + esi + 4] */ r_edx = R32((u32)(r_eax+r_esi+0x4u));
    /* 00844761: mov dword ptr [esp + 0xd4], edx */ W32((u32)(r_esp+0xd4u), r_edx);
    /* 00844768: mov edx, dword ptr [eax + esi + 8] */ r_edx = R32((u32)(r_eax+r_esi+0x8u));
    /* 0084476c: mov dword ptr [esp + 0xd8], edx */ W32((u32)(r_esp+0xd8u), r_edx);
    /* 00844773: mov edx, dword ptr [esp + edi + 0x3c] */ r_edx = R32((u32)(r_esp+r_edi+0x3cu));
    /* 00844777: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00844779: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084477b: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0084477e: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00844780: mov edx, dword ptr [eax + esi] */ r_edx = R32((u32)(r_eax+r_esi));
    /* 00844783: mov dword ptr [esp + 0xdc], edx */ W32((u32)(r_esp+0xdcu), r_edx);
    /* 0084478a: mov edx, dword ptr [eax + esi + 4] */ r_edx = R32((u32)(r_eax+r_esi+0x4u));
    /* 0084478e: mov dword ptr [esp + 0xe0], edx */ W32((u32)(r_esp+0xe0u), r_edx);
    /* 00844795: mov edx, dword ptr [eax + esi + 8] */ r_edx = R32((u32)(r_eax+r_esi+0x8u));
    /* 00844799: mov dword ptr [esp + 0xe4], edx */ W32((u32)(r_esp+0xe4u), r_edx);
    /* 008447a0: mov edx, dword ptr [esp + edi + 0x40] */ r_edx = R32((u32)(r_esp+r_edi+0x40u));
    /* 008447a4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008447a6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008447a8: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 008447ab: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008447ad: mov edx, dword ptr [eax + esi] */ r_edx = R32((u32)(r_eax+r_esi));
    /* 008447b0: mov dword ptr [esp + 0xe8], edx */ W32((u32)(r_esp+0xe8u), r_edx);
    /* 008447b7: mov edx, dword ptr [eax + esi + 4] */ r_edx = R32((u32)(r_eax+r_esi+0x4u));
    /* 008447bb: mov dword ptr [esp + 0xec], edx */ W32((u32)(r_esp+0xecu), r_edx);
    /* 008447c2: mov edx, dword ptr [eax + esi + 8] */ r_edx = R32((u32)(r_eax+r_esi+0x8u));
    /* 008447c6: mov dword ptr [esp + 0xf0], edx */ W32((u32)(r_esp+0xf0u), r_edx);
    /* 008447cd: lea edx, [esp + 0xc4] */ r_edx = (u32)(r_esp+0xc4u);
    /* 008447d4: call 0x84aff4 */ r_esp -= 4; W32(r_esp, 0x8447d9u); f_0084aff4();
    /* 008447d9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008447db: jne 0x844831 */ if (!fZ) goto L_00844831;
L_008447dd:; BB(0x008447dd);
    /* 008447dd: lea ecx, [esp + 0x94] */ r_ecx = (u32)(r_esp+0x94u);
    /* 008447e4: lea edx, [esp + 0xc4] */ r_edx = (u32)(r_esp+0xc4u);
    /* 008447eb: call 0x84c1f4 */ r_esp -= 4; W32(r_esp, 0x8447f0u); f_0084c1f4();
    /* 008447f0: or ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_ebp = r;  }
    /* 008447f2: cmp ebp, 7 */ {  u32 a = r_ebp; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008447f5: je 0x844843 */ if (fZ) goto L_00844843;
L_008447f7:; BB(0x008447f7);
    /* 008447f7: add edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008447fa: cmp edi, 0x60 */ {  u32 a = r_edi; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008447fd: jl 0x844712 */ if ((fS!=fO)) goto L_00844712;
L_00844803:; BB(0x00844803);
    /* 00844803: mov ecx, dword ptr [esp + 0x104] */ r_ecx = R32((u32)(r_esp+0x104u));
    /* 0084480a: add ebx, 0x10 */ {  u32 a = r_ebx; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0084480d: cmp ebx, 0x60 */ {  u32 a = r_ebx; u32 b = 0x60u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00844810: jl 0x84465c */ if ((fS!=fO)) goto L_0084465c;
L_00844816:; BB(0x00844816);
    /* 00844816: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00844819: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084481b: add esp, 0xf4 */ {  u32 a = r_esp; u32 b = 0xf4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00844821: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00844822: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00844823: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00844824: ret  */ FN_RET(0x00844540); r_esp += 4; return;
L_00844825:; BB(0x00844825);
    /* 00844825: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00844827: add esp, 0xf4 */ {  u32 a = r_esp; u32 b = 0xf4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084482d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0084482e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084482f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00844830: ret  */ FN_RET(0x00844540); r_esp += 4; return;
L_00844831:; BB(0x00844831);
    /* 00844831: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00844834: mov eax, 1 */ r_eax = 0x1u;
    /* 00844839: add esp, 0xf4 */ {  u32 a = r_esp; u32 b = 0xf4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084483f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00844840: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00844841: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00844842: ret  */ FN_RET(0x00844540); r_esp += 4; return;
L_00844843:; BB(0x00844843);
    /* 00844843: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00844846: mov eax, 1 */ r_eax = 0x1u;
    /* 0084484b: add esp, 0xf4 */ {  u32 a = r_esp; u32 b = 0xf4u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00844851: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00844852: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00844853: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00844854: ret  */ FN_RET(0x00844540); r_esp += 4; return;
}

void f_00844858(void) /* sub_844858 */
{
    FN_ENTER(0x00844858);
    /* 00844858: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00844859: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0084485a: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0084485d: mov ebx, 1 */ r_ebx = 0x1u;
    /* 00844862: mov eax, 1 */ r_eax = 0x1u;
    /* 00844867: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844869: je 0x844896 */ if (fZ) goto L_00844896;
L_0084486b:; BB(0x0084486b);
    /* 0084486b: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 0084486f: mov esi, edx */ r_esi = r_edx;
    /* 00844871: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00844874: neg esi */ { u32 x = r_esi; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
L_00844876:; BB(0x00844876);
    /* 00844876: imul ebx, edx */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_edx; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00844879: mov edi, ecx */ r_edi = r_ecx;
    /* 0084487b: imul edi, eax */ { i64 t = (i64)(i32)r_edi * (i64)(i32)r_eax; r_edi = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0084487e: mov ebp, esi */ r_ebp = r_esi;
    /* 00844880: imul ebp, eax */ { i64 t = (i64)(i32)r_ebp * (i64)(i32)r_eax; r_ebp = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 00844883: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00844886: add edi, ebp */ {  u32 a = r_edi; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00844888: add eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0084488a: add edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0084488d: jne 0x844876 */ if (!fZ) goto L_00844876;
L_0084488f:; BB(0x0084488f);
    /* 0084488f: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00844893: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_00844896:; BB(0x00844896);
    /* 00844896: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00844897: idiv ebx */ { i32 d = (i32)r_ebx; if (!d) UNSUP(0x00844897, "divide by zero"); { i64 n = (i64)(((u64)r_edx << 32) | r_eax); i64 q = n / d; if (q != (i64)(i32)q) UNSUP(0x00844897, "divide overflow"); r_eax = (u32)q; r_edx = (u32)(n % d); } }
    /* 00844899: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0084489c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0084489d: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0084489e: ret  */ FN_RET(0x00844858); r_esp += 4; return;
}

void f_008448a0(void) /* sub_8448A0 */
{
    FN_ENTER(0x008448a0);
    /* 008448a0: imul ecx, edx */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)r_edx; r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008448a3: imul ecx, dword ptr [esp + 4] */ { i64 t = (i64)(i32)r_ecx * (i64)(i32)R32((u32)(r_esp+0x4u)); r_ecx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 008448a8: add ecx, 0x36 */ {  u32 a = r_ecx; u32 b = 0x36u; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 008448ab: mov eax, ecx */ r_eax = r_ecx;
    /* 008448ad: ret 4 */ FN_RET(0x008448a0); r_esp += 8; return;
}

void f_008448b0(void) /* sub_8448B0 */
{
    FN_ENTER(0x008448b0);
    /* 008448b0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 008448b1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 008448b2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 008448b3: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 008448b6: mov ebp, edx */ r_ebp = r_edx;
    /* 008448b8: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
    /* 008448bc: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008448be: je 0x844a24 */ if (fZ) goto L_00844a24;
L_008448c4:; BB(0x008448c4);
    /* 008448c4: mov dword ptr [ecx + 0xa], 0x36 */ W32((u32)(r_ecx+0xau), 0x36u);
    /* 008448cb: lea esi, [ecx + 0x36] */ r_esi = (u32)(r_ecx+0x36u);
    /* 008448ce: mov eax, 0x4d42 */ r_eax = 0x4d42u;
    /* 008448d3: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 008448d6: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
    /* 008448da: mov dword ptr [ecx + 0xe], 0x28 */ W32((u32)(r_ecx+0xeu), 0x28u);
    /* 008448e1: mov dword ptr [ecx + 2], eax */ W32((u32)(r_ecx+0x2u), r_eax);
    /* 008448e4: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008448e6: mov word ptr [ecx + 6], dx */ W16((u32)(r_ecx+0x6u), (u16)r_edx);
    /* 008448ea: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 008448ee: mov dword ptr [ecx + 0x12], ebp */ W32((u32)(r_ecx+0x12u), r_ebp);
    /* 008448f1: mov dword ptr [ecx + 0x16], edi */ W32((u32)(r_ecx+0x16u), r_edi);
    /* 008448f4: mov eax, 1 */ r_eax = 0x1u;
    /* 008448f9: mov word ptr [ecx + 0x1a], ax */ W16((u32)(r_ecx+0x1au), (u16)r_eax);
    /* 008448fd: mov eax, 0x18 */ r_eax = 0x18u;
    /* 00844902: mov word ptr [ecx + 0x1c], ax */ W16((u32)(r_ecx+0x1cu), (u16)r_eax);
    /* 00844906: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 0084490b: mov dword ptr [ecx + 0x1e], edx */ W32((u32)(r_ecx+0x1eu), r_edx);
    /* 0084490e: mov dword ptr [ecx + 0x22], edx */ W32((u32)(r_ecx+0x22u), r_edx);
    /* 00844911: mov dword ptr [ecx + 0x26], edx */ W32((u32)(r_ecx+0x26u), r_edx);
    /* 00844914: mov dword ptr [ecx + 0x2a], edx */ W32((u32)(r_ecx+0x2au), r_edx);
    /* 00844917: mov dword ptr [ecx + 0x2e], edx */ W32((u32)(r_ecx+0x2eu), r_edx);
    /* 0084491a: mov dword ptr [ecx + 0x32], edx */ W32((u32)(r_ecx+0x32u), r_edx);
    /* 0084491d: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00844920: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00844922: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00844923: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 00844925: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00844926: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00844927: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844928: call dword ptr [edx + 0x6c] */ { u32 t = R32((u32)(r_edx+0x6cu)); r_esp -= 4; W32(r_esp, 0x84492bu); call_ind(t); }
    /* 0084492b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084492d: jne 0x844a24 */ if (!fZ) goto L_00844a24;
L_00844933:; BB(0x00844933);
    /* 00844933: mov edx, dword ptr [0xacd528] */ r_edx = R32((u32)(0xacd528u));
    /* 00844939: lea eax, [esp + 4] */ r_eax = (u32)(r_esp+0x4u);
    /* 0084493d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0084493e: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00844940: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00844942: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844943: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844944: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00844945: call dword ptr [ecx + 0x40] */ { u32 t = R32((u32)(r_ecx+0x40u)); r_esp -= 4; W32(r_esp, 0x844948u); call_ind(t); }
    /* 00844948: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0084494a: jne 0x844a1b */ if (!fZ) goto L_00844a1b;
L_00844950:; BB(0x00844950);
    /* 00844950: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00844952: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00844953: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00844955: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00844956: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00844957: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0084495b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0084495c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0084495d: push dword ptr [esp + 0x1c] */ { u32 v = R32((u32)(r_esp+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00844961: call 0x88fd39 */ r_esp -= 4; W32(r_esp, 0x844966u); f_0088fd39();
    /* 00844966: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 0084496a: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0084496b: mov eax, dword ptr [ecx] */ r_eax = R32((u32)(r_ecx));
    /* 0084496d: call dword ptr [eax + 8] */ { u32 t = R32((u32)(r_eax+0x8u)); r_esp -= 4; W32(r_esp, 0x844970u); call_ind(t); }
    /* 00844970: mov dword ptr [esp + 0x18], esi */ W32((u32)(r_esp+0x18u), r_esi);
    /* 00844974: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
    /* 00844977: lea ecx, [esp + 8] */ r_ecx = (u32)(r_esp+0x8u);
    /* 0084497b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0084497d: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00844981: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844982: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844983: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 00844985: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00844986: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00844987: mov esi, dword ptr [esp + 0x28] */ r_esi = R32((u32)(r_esp+0x28u));
    /* 0084498b: call dword ptr [edx + 0x24] */ { u32 t = R32((u32)(r_edx+0x24u)); r_esp -= 4; W32(r_esp, 0x84498eu); call_ind(t); }
    /* 0084498e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844990: jne 0x844a1b */ if (!fZ) goto L_00844a1b;
L_00844996:; BB(0x00844996);
    /* 00844996: lea edx, [ebp + ebp] */ r_edx = (u32)(r_ebp+r_ebp);
    /* 0084499a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0084499c: imul edx, edi */ { i64 t = (i64)(i32)r_edx * (i64)(i32)r_edi; r_edx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0084499f: add edx, dword ptr [esp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008449a3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008449a5: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008449a7: je 0x844a12 */ if (fZ) goto L_00844a12;
L_008449a9:; BB(0x008449a9);
    /* 008449a9: mov dword ptr [esp + 0x1c], ebx */ W32((u32)(r_esp+0x1cu), r_ebx);
    /* 008449ad: mov edi, edx */ r_edi = r_edx;
    /* 008449af: mov dword ptr [esp + 0x20], eax */ W32((u32)(r_esp+0x20u), r_eax);
    /* 008449b3: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 008449b7: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008449b9: neg ecx */ { u32 x = r_ecx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 008449bb: mov dword ptr [esp + 0x14], ecx */ W32((u32)(r_esp+0x14u), r_ecx);
    /* 008449bf: lea ecx, [ebp + ebp] */ r_ecx = (u32)(r_ebp+r_ebp);
    /* 008449c3: add ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008449c5: mov dword ptr [esp + 0x10], ecx */ W32((u32)(r_esp+0x10u), r_ecx);
    /* 008449c9: mov eax, esi */ r_eax = r_esi;
    /* 008449cb: mov esi, dword ptr [esp + 0x20] */ r_esi = R32((u32)(r_esp+0x20u));
L_008449cf:; BB(0x008449cf);
    /* 008449cf: add edi, dword ptr [esp + 0x14] */ {  u32 a = r_edi; u32 b = R32((u32)(r_esp+0x14u)); u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 008449d3: mov ebx, edi */ r_ebx = r_edi;
    /* 008449d5: mov ecx, eax */ r_ecx = r_eax;
    /* 008449d7: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008449d9: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008449db: je 0x8449ff */ if (fZ) goto L_008449ff;
L_008449dd:; BB(0x008449dd);
    /* 008449dd: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
L_008449e1:; BB(0x008449e1);
    /* 008449e1: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 008449e4: mov word ptr [ecx], ax */ W16((u32)(r_ecx), (u16)r_eax);
    /* 008449e7: movzx eax, byte ptr [ebx + 2] */ r_eax = (u32)R8((u32)(r_ebx+0x2u));
    /* 008449eb: mov byte ptr [ecx + 2], al */ W8((u32)(r_ecx+0x2u), (u8)r_eax);
    /* 008449ee: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 008449f1: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008449f4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008449f7: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 008449f9: jb 0x8449e1 */ if (fC) goto L_008449e1;
L_008449fb:; BB(0x008449fb);
    /* 008449fb: mov eax, dword ptr [esp + 0x18] */ r_eax = R32((u32)(r_esp+0x18u));
L_008449ff:; BB(0x008449ff);
    /* 008449ff: add eax, dword ptr [esp + 0x10] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x10u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00844a03: mov ecx, dword ptr [esp + 0x34] */ r_ecx = R32((u32)(r_esp+0x34u));
    /* 00844a07: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00844a0a: cmp esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00844a0c: jb 0x8449cf */ if (fC) goto L_008449cf;
L_00844a0e:; BB(0x00844a0e);
    /* 00844a0e: mov ebx, dword ptr [esp + 0x1c] */ r_ebx = R32((u32)(r_esp+0x1cu));
L_00844a12:; BB(0x00844a12);
    /* 00844a12: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00844a15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844a16: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00844a18: call dword ptr [edx + 0x28] */ { u32 t = R32((u32)(r_edx+0x28u)); r_esp -= 4; W32(r_esp, 0x844a1bu); call_ind(t); }
L_00844a1b:; BB(0x00844a1b);
    /* 00844a1b: mov eax, dword ptr [esp] */ r_eax = R32((u32)(r_esp));
    /* 00844a1e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844a1f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00844a21: call dword ptr [edx + 8] */ { u32 t = R32((u32)(r_edx+0x8u)); r_esp -= 4; W32(r_esp, 0x844a24u); call_ind(t); }
L_00844a24:; BB(0x00844a24);
    /* 00844a24: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00844a27: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00844a28: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00844a29: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00844a2a: ret 8 */ FN_RET(0x008448b0); r_esp += 12; return;
}

void f_00844a30(void) /* sub_844A30 */
{
    FN_ENTER(0x00844a30);
    /* 00844a30: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00844a31: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00844a32: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00844a33: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00844a35: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00844a39: call 0x83c350 */ r_esp -= 4; W32(r_esp, 0x844a3eu); f_0083c350();
    /* 00844a3e: mov ebp, eax */ r_ebp = r_eax;
    /* 00844a40: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00844a43: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844a45: je 0x844aa0 */ if (fZ) goto L_00844aa0;
L_00844a47:; BB(0x00844a47);
    /* 00844a47: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00844a4a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00844a4b: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00844a4c: call 0x83c488 */ r_esp -= 4; W32(r_esp, 0x844a51u); f_0083c488();
    /* 00844a51: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00844a54: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844a57: je 0x844a67 */ if (fZ) goto L_00844a67;
L_00844a59:; BB(0x00844a59);
    /* 00844a59: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00844a5a: call 0x83c3cc */ r_esp -= 4; W32(r_esp, 0x844a5fu); f_0083c3cc();
    /* 00844a5f: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00844a61: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00844a64: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00844a65: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00844a66: ret  */ FN_RET(0x00844a30); r_esp += 4; return;
L_00844a67:; BB(0x00844a67);
    /* 00844a67: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 00844a6a: shl edx, 0xb */ { u32 c = (11u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 00844a6d: add edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00844a70: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00844a71: call 0x82e940 */ r_esp -= 4; W32(r_esp, 0x844a76u); f_0082e940();
    /* 00844a76: mov ebx, eax */ r_ebx = r_eax;
    /* 00844a78: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00844a7b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844a7d: je 0x844ab4 */ if (fZ) goto L_00844ab4;
L_00844a7f:; BB(0x00844a7f);
    /* 00844a7f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00844a80: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00844a84: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00844a85: call 0x83c3f0 */ r_esp -= 4; W32(r_esp, 0x844a8au); f_0083c3f0();
    /* 00844a8a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00844a8d: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844a8f: je 0x844aa6 */ if (fZ) goto L_00844aa6;
L_00844a91:; BB(0x00844a91);
    /* 00844a91: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00844a92: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x844a97u); f_0082e960();
    /* 00844a97: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00844a98: call 0x83c3cc */ r_esp -= 4; W32(r_esp, 0x844a9du); f_0083c3cc();
    /* 00844a9d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00844aa0:; BB(0x00844aa0);
    /* 00844aa0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00844aa2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00844aa3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00844aa4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00844aa5: ret  */ FN_RET(0x00844a30); r_esp += 4; return;
L_00844aa6:; BB(0x00844aa6);
    /* 00844aa6: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00844aa7: call 0x83c3cc */ r_esp -= 4; W32(r_esp, 0x844aacu); f_0083c3cc();
    /* 00844aac: mov eax, ebx */ r_eax = r_ebx;
    /* 00844aae: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00844ab1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00844ab2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00844ab3: ret  */ FN_RET(0x00844a30); r_esp += 4; return;
L_00844ab4:; BB(0x00844ab4);
    /* 00844ab4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00844ab5: call 0x83c3cc */ r_esp -= 4; W32(r_esp, 0x844abau); f_0083c3cc();
    /* 00844aba: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00844abc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00844abf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00844ac0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00844ac1: ret  */ FN_RET(0x00844a30); r_esp += 4; return;
}

void f_00844ac4(void) /* sub_844AC4 */
{
    FN_ENTER(0x00844ac4);
    /* 00844ac4: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00844ac8: call 0x82e960 */ r_esp -= 4; W32(r_esp, 0x844acdu); f_0082e960();
    /* 00844acd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00844ace: ret  */ FN_RET(0x00844ac4); r_esp += 4; return;
}

void f_00844ad0(void) /* sub_844AD0 */
{
    FN_ENTER(0x00844ad0);
    /* 00844ad0: push 0xacd420 */ { u32 v = 0xacd420u; r_esp -= 4; W32(r_esp, v); }
    /* 00844ad5: push dword ptr [0xaf0328] */ { u32 v = R32((u32)(0xaf0328u)); r_esp -= 4; W32(r_esp, v); }
    /* 00844adb: push 0xae6e60 */ { u32 v = 0xae6e60u; r_esp -= 4; W32(r_esp, v); }
    /* 00844ae0: call 0x891536 */ r_esp -= 4; W32(r_esp, 0x844ae5u); f_00891536();
    /* 00844ae5: push 0xae6e20 */ { u32 v = 0xae6e20u; r_esp -= 4; W32(r_esp, v); }
    /* 00844aea: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00844aef: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00844af1: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00844af6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844af7: call dword ptr [edx + 0x94] */ { u32 t = R32((u32)(r_edx+0x94u)); r_esp -= 4; W32(r_esp, 0x844afdu); call_ind(t); }
    /* 00844afd: push 0xae6ea0 */ { u32 v = 0xae6ea0u; r_esp -= 4; W32(r_esp, v); }
    /* 00844b02: push dword ptr [0xaf0328] */ { u32 v = R32((u32)(0xaf0328u)); r_esp -= 4; W32(r_esp, v); }
    /* 00844b08: push 0xae6ee0 */ { u32 v = 0xae6ee0u; r_esp -= 4; W32(r_esp, v); }
    /* 00844b0d: call 0x891536 */ r_esp -= 4; W32(r_esp, 0x844b12u); f_00891536();
    /* 00844b12: ret  */ FN_RET(0x00844ad0); r_esp += 4; return;
}

void f_00844b14(void) /* sub_844B14 */
{
    FN_ENTER(0x00844b14);
    /* 00844b14: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00844b15: mov esi, ecx */ r_esi = r_ecx;
    /* 00844b17: push 0xacd420 */ { u32 v = 0xacd420u; r_esp -= 4; W32(r_esp, v); }
    /* 00844b1c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00844b1d: push 0xae6e20 */ { u32 v = 0xae6e20u; r_esp -= 4; W32(r_esp, v); }
    /* 00844b22: call 0x891536 */ r_esp -= 4; W32(r_esp, 0x844b27u); f_00891536();
    /* 00844b27: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00844b28: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00844b2a: push 0xae6ea0 */ { u32 v = 0xae6ea0u; r_esp -= 4; W32(r_esp, v); }
    /* 00844b2f: call 0x891a42 */ r_esp -= 4; W32(r_esp, 0x844b34u); f_00891a42();
    /* 00844b34: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00844b35: ret  */ FN_RET(0x00844b14); r_esp += 4; return;
}

void f_00844b38(void) /* sub_844B38 */
{
    FN_ENTER(0x00844b38);
    /* 00844b38: push 0xae6e60 */ { u32 v = 0xae6e60u; r_esp -= 4; W32(r_esp, v); }
    /* 00844b3d: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00844b42: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00844b47: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844b48: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00844b4a: call dword ptr [edx + 0x94] */ { u32 t = R32((u32)(r_edx+0x94u)); r_esp -= 4; W32(r_esp, 0x844b50u); call_ind(t); }
    /* 00844b50: ret  */ FN_RET(0x00844b38); r_esp += 4; return;
}

void f_00844b54(void) /* sub_844B54 */
{
    FN_ENTER(0x00844b54);
    /* 00844b54: push 0xacd460 */ { u32 v = 0xacd460u; r_esp -= 4; W32(r_esp, v); }
    /* 00844b59: mov eax, dword ptr [0xacd528] */ r_eax = R32((u32)(0xacd528u));
    /* 00844b5e: push 0x100 */ { u32 v = 0x100u; r_esp -= 4; W32(r_esp, v); }
    /* 00844b63: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844b64: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00844b66: call dword ptr [edx + 0x94] */ { u32 t = R32((u32)(r_edx+0x94u)); r_esp -= 4; W32(r_esp, 0x844b6cu); call_ind(t); }
    /* 00844b6c: ret  */ FN_RET(0x00844b54); r_esp += 4; return;
}

void f_00844b70(void) /* sub_844B70 */
{
    FN_ENTER(0x00844b70);
    /* 00844b70: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00844b71: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00844b72: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844b74: je 0x844bb3 */ if (fZ) goto L_00844bb3;
L_00844b76:; BB(0x00844b76);
    /* 00844b76: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844b78: je 0x844bb3 */ if (fZ) goto L_00844bb3;
L_00844b7a:; BB(0x00844b7a);
    /* 00844b7a: movsx eax, byte ptr [edx + 1] */ r_eax = (u32)(i32)(i8)R8((u32)(r_edx+0x1u));
    /* 00844b7e: cmp eax, 0x3a */ {  u32 a = r_eax; u32 b = 0x3au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844b81: je 0x844b9f */ if (fZ) goto L_00844b9f;
L_00844b83:; BB(0x00844b83);
    /* 00844b83: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00844b84: push 0xaf03a0 */ { u32 v = 0xaf03a0u; r_esp -= 4; W32(r_esp, v); }
    /* 00844b89: push 0x98b078 */ { u32 v = 0x98b078u; r_esp -= 4; W32(r_esp, v); }
    /* 00844b8e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00844b8f: call 0x858bf5 */ r_esp -= 4; W32(r_esp, 0x844b94u); f_00858bf5();
    /* 00844b94: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00844b97:; BB(0x00844b97);
    /* 00844b97: mov eax, 1 */ r_eax = 0x1u;
    /* 00844b9c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00844b9d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00844b9e: ret  */ FN_RET(0x00844b70); r_esp += 4; return;
L_00844b9f:; BB(0x00844b9f);
    /* 00844b9f: mov esi, ecx */ r_esi = r_ecx;
    /* 00844ba1: mov edi, edx */ r_edi = r_edx;
L_00844ba3:; BB(0x00844ba3);
    /* 00844ba3: mov dl, byte ptr [edi] */ r_edx = (r_edx & 0xffffff00u) | ((R8((u32)(r_edi))) & 0xffu);
    /* 00844ba5: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00844ba8: mov byte ptr [esi], dl */ W8((u32)(r_esi), (u8)r_edx);
    /* 00844baa: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00844bad: test dl, dl */ {  u32 a = (u8)r_edx; u32 b = (u8)r_edx; u32 r = (a & b) & 0xffu;  fZ = (r == 0); fS = ((r >> 7) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00844baf: jne 0x844ba3 */ if (!fZ) goto L_00844ba3;
L_00844bb1:; BB(0x00844bb1);
    /* 00844bb1: jmp 0x844b97 */ goto L_00844b97;
L_00844bb3:; BB(0x00844bb3);
    /* 00844bb3: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00844bb5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00844bb6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00844bb7: ret  */ FN_RET(0x00844b70); r_esp += 4; return;
}

void f_00844bb8(void) /* sub_844BB8 */
{
    FN_ENTER(0x00844bb8);
    /* 00844bb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00844bb9: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00844bba: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00844bc0: mov eax, ecx */ r_eax = r_ecx;
    /* 00844bc2: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00844bc5: mov edx, eax */ r_edx = r_eax;
    /* 00844bc7: call 0x844b70 */ r_esp -= 4; W32(r_esp, 0x844bccu); f_00844b70();
    /* 00844bcc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844bcf: je 0x844bdc */ if (fZ) goto L_00844bdc;
L_00844bd1:; BB(0x00844bd1);
    /* 00844bd1: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00844bd3: add esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00844bd9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00844bda: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00844bdb: ret  */ FN_RET(0x00844bb8); r_esp += 4; return;
L_00844bdc:; BB(0x00844bdc);
    /* 00844bdc: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00844bdf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00844be1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844be2: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00844be7: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00844be9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844bea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00844bec: push 0x80000000 */ { u32 v = 0x80000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00844bf1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00844bf2: call dword ptr [0x8f8144] */ { u32 t = R32((u32)(0x8f8144u)); r_esp -= 4; W32(r_esp, 0x844bf8u); call_ind(t); }
    /* 00844bf8: mov ebx, eax */ r_ebx = r_eax;
    /* 00844bfa: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844bfd: je 0x844bd1 */ if (fZ) goto L_00844bd1;
L_00844bff:; BB(0x00844bff);
    /* 00844bff: lea edx, [esp + 0x104] */ r_edx = (u32)(r_esp+0x104u);
    /* 00844c06: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00844c07: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00844c08: call dword ptr [0x8f8138] */ { u32 t = R32((u32)(0x8f8138u)); r_esp -= 4; W32(r_esp, 0x844c0eu); call_ind(t); }
    /* 00844c0e: mov edi, eax */ r_edi = r_eax;
    /* 00844c10: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00844c11: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x844c17u); call_ind(t); }
    /* 00844c17: mov eax, edi */ r_eax = r_edi;
    /* 00844c19: add esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00844c1f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00844c20: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00844c21: ret  */ FN_RET(0x00844bb8); r_esp += 4; return;
}

void f_00844c24(void) /* sub_844C24 */
{
    FN_ENTER(0x00844c24);
    /* 00844c24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00844c25: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00844c26: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00844c27: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00844c2d: mov ebp, edx */ r_ebp = r_edx;
    /* 00844c2f: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00844c31: mov esi, dword ptr [esp + 0x118] */ r_esi = R32((u32)(r_esp+0x118u));
    /* 00844c38: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844c3a: jne 0x844c45 */ if (!fZ) goto L_00844c45;
L_00844c3c:; BB(0x00844c3c);
    /* 00844c3c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00844c3e: call 0x844bb8 */ r_esp -= 4; W32(r_esp, 0x844c43u); f_00844bb8();
    /* 00844c43: mov esi, eax */ r_esi = r_eax;
L_00844c45:; BB(0x00844c45);
    /* 00844c45: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00844c48: mov edx, ebx */ r_edx = r_ebx;
    /* 00844c4a: call 0x844b70 */ r_esp -= 4; W32(r_esp, 0x844c4fu); f_00844b70();
    /* 00844c4f: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844c52: je 0x844c60 */ if (fZ) goto L_00844c60;
L_00844c54:; BB(0x00844c54);
    /* 00844c54: add esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00844c5a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00844c5b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00844c5c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00844c5d: ret 4 */ FN_RET(0x00844c24); r_esp += 8; return;
L_00844c60:; BB(0x00844c60);
    /* 00844c60: lea ebx, [esp] */ r_ebx = (u32)(r_esp);
    /* 00844c63: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00844c65: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00844c66: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00844c6b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00844c6d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00844c6e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00844c70: push 0x80000000 */ { u32 v = 0x80000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00844c75: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00844c76: call dword ptr [0x8f8144] */ { u32 t = R32((u32)(0x8f8144u)); r_esp -= 4; W32(r_esp, 0x844c7cu); call_ind(t); }
    /* 00844c7c: mov ebx, eax */ r_ebx = r_eax;
    /* 00844c7e: cmp ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844c81: je 0x844c54 */ if (fZ) goto L_00844c54;
L_00844c83:; BB(0x00844c83);
    /* 00844c83: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00844c85: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00844c86: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00844c87: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00844c88: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00844c89: call dword ptr [0x8f81a0] */ { u32 t = R32((u32)(0x8f81a0u)); r_esp -= 4; W32(r_esp, 0x844c8fu); call_ind(t); }
    /* 00844c8f: lea ecx, [esp + 0x104] */ r_ecx = (u32)(r_esp+0x104u);
    /* 00844c96: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00844c98: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00844c99: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00844c9a: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00844c9b: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00844c9c: call dword ptr [0x8f813c] */ { u32 t = R32((u32)(0x8f813cu)); r_esp -= 4; W32(r_esp, 0x844ca2u); call_ind(t); }
    /* 00844ca2: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00844ca3: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x844ca9u); call_ind(t); }
    /* 00844ca9: add esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00844caf: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00844cb0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00844cb1: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00844cb2: ret 4 */ FN_RET(0x00844c24); r_esp += 8; return;
}

void f_00844cb8(void) /* sub_844CB8 */
{
    FN_ENTER(0x00844cb8);
    /* 00844cb8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00844cb9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00844cba: sub esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00844cc0: mov edi, edx */ r_edi = r_edx;
    /* 00844cc2: mov edx, ecx */ r_edx = r_ecx;
    /* 00844cc4: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00844cc7: call 0x844b70 */ r_esp -= 4; W32(r_esp, 0x844cccu); f_00844b70();
    /* 00844ccc: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844ccf: je 0x844cdc */ if (fZ) goto L_00844cdc;
L_00844cd1:; BB(0x00844cd1);
    /* 00844cd1: add esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00844cd7: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00844cd8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00844cd9: ret 4 */ FN_RET(0x00844cb8); r_esp += 8; return;
L_00844cdc:; BB(0x00844cdc);
    /* 00844cdc: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00844cdf: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00844ce1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844ce2: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00844ce7: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00844ce9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844cea: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00844cec: push 0x40000000 */ { u32 v = 0x40000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00844cf1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00844cf2: call dword ptr [0x8f8144] */ { u32 t = R32((u32)(0x8f8144u)); r_esp -= 4; W32(r_esp, 0x844cf8u); call_ind(t); }
    /* 00844cf8: mov esi, eax */ r_esi = r_eax;
    /* 00844cfa: cmp esi, -1 */ {  u32 a = r_esi; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844cfd: je 0x844cd1 */ if (fZ) goto L_00844cd1;
L_00844cff:; BB(0x00844cff);
    /* 00844cff: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00844d01: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00844d02: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00844d03: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00844d04: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00844d05: call dword ptr [0x8f81a0] */ { u32 t = R32((u32)(0x8f81a0u)); r_esp -= 4; W32(r_esp, 0x844d0bu); call_ind(t); }
    /* 00844d0b: lea ecx, [esp + 0x104] */ r_ecx = (u32)(r_esp+0x104u);
    /* 00844d12: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00844d14: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00844d15: push dword ptr [esp + 0x11c] */ { u32 v = R32((u32)(r_esp+0x11cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00844d1c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00844d1d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00844d1e: call dword ptr [0x8f81c0] */ { u32 t = R32((u32)(0x8f81c0u)); r_esp -= 4; W32(r_esp, 0x844d24u); call_ind(t); }
    /* 00844d24: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00844d25: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x844d2bu); call_ind(t); }
    /* 00844d2b: add esp, 0x108 */ {  u32 a = r_esp; u32 b = 0x108u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00844d31: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00844d32: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00844d33: ret 4 */ FN_RET(0x00844cb8); r_esp += 8; return;
}

void f_00844d38(void) /* sub_844D38 */
{
    FN_ENTER(0x00844d38);
    /* 00844d38: mov eax, 0x30d40000 */ r_eax = 0x30d40000u;
    /* 00844d3d: ret  */ FN_RET(0x00844d38); r_esp += 4; return;
}

void f_00844d40(void) /* sub_844D40 */
{
    FN_ENTER(0x00844d40);
    /* 00844d40: sub esp, 0x104 */ {  u32 a = r_esp; u32 b = 0x104u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00844d46: mov eax, ecx */ r_eax = r_ecx;
    /* 00844d48: lea ecx, [esp] */ r_ecx = (u32)(r_esp);
    /* 00844d4b: mov edx, eax */ r_edx = r_eax;
    /* 00844d4d: call 0x844b70 */ r_esp -= 4; W32(r_esp, 0x844d52u); f_00844b70();
    /* 00844d52: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844d55: je 0x844d60 */ if (fZ) goto L_00844d60;
L_00844d57:; BB(0x00844d57);
    /* 00844d57: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00844d59: add esp, 0x104 */ {  u32 a = r_esp; u32 b = 0x104u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00844d5f: ret  */ FN_RET(0x00844d40); r_esp += 4; return;
L_00844d60:; BB(0x00844d60);
    /* 00844d60: lea edx, [esp] */ r_edx = (u32)(r_esp);
    /* 00844d63: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00844d65: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844d66: push 0x80 */ { u32 v = 0x80u; r_esp -= 4; W32(r_esp, v); }
    /* 00844d6b: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 00844d6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844d6e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00844d70: push 0x80000000 */ { u32 v = 0x80000000u; r_esp -= 4; W32(r_esp, v); }
    /* 00844d75: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00844d76: call dword ptr [0x8f8144] */ { u32 t = R32((u32)(0x8f8144u)); r_esp -= 4; W32(r_esp, 0x844d7cu); call_ind(t); }
    /* 00844d7c: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844d7f: je 0x844d57 */ if (fZ) goto L_00844d57;
L_00844d81:; BB(0x00844d81);
    /* 00844d81: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844d82: call dword ptr [0x8f8140] */ { u32 t = R32((u32)(0x8f8140u)); r_esp -= 4; W32(r_esp, 0x844d88u); call_ind(t); }
    /* 00844d88: mov eax, 1 */ r_eax = 0x1u;
    /* 00844d8d: add esp, 0x104 */ {  u32 a = r_esp; u32 b = 0x104u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00844d93: ret  */ FN_RET(0x00844d40); r_esp += 4; return;
}

void f_00844d94(void) /* sub_844D94 */
{
    FN_ENTER(0x00844d94);
    /* 00844d94: mov ecx, 0xae6f60 */ r_ecx = 0xae6f60u;
    /* 00844d99: call 0x84509c */ r_esp -= 4; W32(r_esp, 0x844d9eu); f_0084509c();
    /* 00844d9e: ret  */ FN_RET(0x00844d94); r_esp += 4; return;
}

void f_00844da0(void) /* sub_844DA0 */
{
    FN_ENTER(0x00844da0);
    /* 00844da0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00844da1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00844da2: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00844da3: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00844da4: sub esp, 0x814 */ {  u32 a = r_esp; u32 b = 0x814u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00844daa: mov edi, ecx */ r_edi = r_ecx;
    /* 00844dac: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 00844db0: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 00844db5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00844db7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844db8: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x844dbdu); f_0086b688();
    /* 00844dbd: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 00844dc2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00844dc4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00844dc5: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x844dcau); f_0086b688();
    /* 00844dca: lea eax, [esp + 0x828] */ r_eax = (u32)(r_esp+0x828u);
    /* 00844dd1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844dd2: call 0x859d2d */ r_esp -= 4; W32(r_esp, 0x844dd7u); f_00859d2d();
    /* 00844dd7: lea eax, [esp + 0x82c] */ r_eax = (u32)(r_esp+0x82cu);
    /* 00844dde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844ddf: call 0x85a27d */ r_esp -= 4; W32(r_esp, 0x844de4u); f_0085a27d();
    /* 00844de4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844de5: push 0x98b4f8 */ { u32 v = 0x98b4f8u; r_esp -= 4; W32(r_esp, v); }
    /* 00844dea: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 00844def: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00844df0: call 0x85b7a5 */ r_esp -= 4; W32(r_esp, 0x844df5u); f_0085b7a5();
    /* 00844df5: mov eax, dword ptr [esp + 0x858] */ r_eax = R32((u32)(r_esp+0x858u));
    /* 00844dfc: lea edx, [esp + 0x40] */ r_edx = (u32)(r_esp+0x40u);
    /* 00844e00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844e01: push 0x98b520 */ { u32 v = 0x98b520u; r_esp -= 4; W32(r_esp, v); }
    /* 00844e06: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 00844e0b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00844e0c: call 0x859d66 */ r_esp -= 4; W32(r_esp, 0x844e11u); f_00859d66();
    /* 00844e11: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00844e12: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x844e17u); f_00858009();
    /* 00844e17: mov ebx, eax */ r_ebx = r_eax;
    /* 00844e19: lea edx, [esp + 0x54] */ r_edx = (u32)(r_esp+0x54u);
    /* 00844e1d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00844e1e: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x844e23u); f_00858009();
    /* 00844e23: add esp, 0x48 */ {  u32 a = r_esp; u32 b = 0x48u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00844e26: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00844e28: add ebx, 0x800 */ {  u32 a = r_ebx; u32 b = 0x800u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00844e2e: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00844e30: jbe 0x844e42 */ if ((fC||fZ)) goto L_00844e42;
L_00844e32:; BB(0x00844e32);
    /* 00844e32: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00844e33: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x844e38u); f_00858009();
    /* 00844e38: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00844e39: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00844e3b: add eax, 0x800 */ {  u32 a = r_eax; u32 b = 0x800u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00844e40: jmp 0x844e4d */ goto L_00844e4d;
L_00844e42:; BB(0x00844e42);
    /* 00844e42: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 00844e46: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844e47: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x844e4cu); f_00858009();
    /* 00844e4c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00844e4d:; BB(0x00844e4d);
    /* 00844e4d: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00844e51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844e52: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00844e53: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00844e54: call 0x858b0f */ r_esp -= 4; W32(r_esp, 0x844e59u); f_00858b0f();
    /* 00844e59: lea edx, [esp + 0x1c] */ r_edx = (u32)(r_esp+0x1cu);
    /* 00844e5d: mov eax, dword ptr [edi + 0x800] */ r_eax = R32((u32)(r_edi+0x800u));
    /* 00844e63: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00844e67: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00844e69: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00844e6b: mov dword ptr [esp + 0x14], ebx */ W32((u32)(r_esp+0x14u), r_ebx);
    /* 00844e6f: mov dword ptr [esp + 0xc], ebp */ W32((u32)(r_esp+0xcu), r_ebp);
    /* 00844e73: push 0x800 */ { u32 v = 0x800u; r_esp -= 4; W32(r_esp, v); }
    /* 00844e78: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00844e7a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00844e7b: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 00844e7d: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00844e7f: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 00844e81: call 0x86b688 */ r_esp -= 4; W32(r_esp, 0x844e86u); f_0086b688();
    /* 00844e86: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00844e89: mov ecx, dword ptr [edi + 0x800] */ r_ecx = R32((u32)(r_edi+0x800u));
    /* 00844e8f: movzx edx, word ptr [ecx] */ r_edx = (u32)R16((u32)(r_ecx));
    /* 00844e92: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844e94: je 0x844f07 */ if (fZ) goto L_00844f07;
L_00844e96:; BB(0x00844e96);
    /* 00844e96: mov dword ptr [esp + 0xc], edi */ W32((u32)(r_esp+0xcu), r_edi);
    /* 00844e9a: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00844e9e: lea eax, [esi + esi] */ r_eax = (u32)(r_esi+r_esi);
L_00844ea1:; BB(0x00844ea1);
    /* 00844ea1: cmp edx, 0xd */ {  u32 a = r_edx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844ea4: je 0x844fd4 */ if (fZ) goto L_00844fd4;
L_00844eaa:; BB(0x00844eaa);
    /* 00844eaa: cmp edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844ead: je 0x844fd4 */ if (fZ) goto L_00844fd4;
L_00844eb3:; BB(0x00844eb3);
    /* 00844eb3: cmp ebx, 0xd */ {  u32 a = r_ebx; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844eb6: je 0x844fa4 */ if (fZ) goto L_00844fa4;
L_00844ebc:; BB(0x00844ebc);
    /* 00844ebc: cmp ebx, 0xa */ {  u32 a = r_ebx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844ebf: je 0x844fa4 */ if (fZ) goto L_00844fa4;
L_00844ec5:; BB(0x00844ec5);
    /* 00844ec5: mov ebx, dword ptr [esp + 0x828] */ r_ebx = R32((u32)(r_esp+0x828u));
    /* 00844ecc: cmp ebx, dword ptr [edi*4 + 0xa22b80] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi*4+0xa22b80u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844ed3: jne 0x844ee0 */ if (!fZ) goto L_00844ee0;
L_00844ed5:; BB(0x00844ed5);
    /* 00844ed5: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844ed7: jne 0x844ee4 */ if (!fZ) goto L_00844ee4;
L_00844ed9:; BB(0x00844ed9);
    /* 00844ed9: mov ebp, 1 */ r_ebp = 0x1u;
    /* 00844ede: jmp 0x844ee4 */ goto L_00844ee4;
L_00844ee0:; BB(0x00844ee0);
    /* 00844ee0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844ee2: je 0x844ef2 */ if (fZ) goto L_00844ef2;
L_00844ee4:; BB(0x00844ee4);
    /* 00844ee4: mov ebx, dword ptr [esp] */ r_ebx = R32((u32)(r_esp));
    /* 00844ee7: mov word ptr [esp + ebx*2 + 0x10], dx */ W16((u32)(r_esp+r_ebx*2+0x10u), (u16)r_edx);
    /* 00844eec: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00844eef: mov dword ptr [esp], ebx */ W32((u32)(r_esp), r_ebx);
L_00844ef2:; BB(0x00844ef2);
    /* 00844ef2: mov ebx, edx */ r_ebx = r_edx;
    /* 00844ef4: movzx edx, word ptr [ecx + esi*2 + 2] */ r_edx = (u32)R16((u32)(r_ecx+r_esi*2+0x2u));
    /* 00844ef9: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00844efc: add esi, 1 */ {  u32 a = r_esi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00844eff: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844f01: jne 0x844ea1 */ if (!fZ) goto L_00844ea1;
L_00844f03:; BB(0x00844f03);
    /* 00844f03: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
L_00844f07:; BB(0x00844f07);
    /* 00844f07: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 00844f0b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844f0c: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x844f11u); f_00858009();
    /* 00844f11: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00844f12: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fC = 0; }
    /* 00844f14: ja 0x844f4d */ if ((!fC&&!fZ)) goto L_00844f4d;
L_00844f16:; BB(0x00844f16);
    /* 00844f16: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00844f1a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844f1b: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x844f20u); f_00858009();
    /* 00844f20: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00844f21: cmp eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00844f26: jbe 0x844f2f */ if ((fC||fZ)) goto L_00844f2f;
L_00844f28:; BB(0x00844f28);
    /* 00844f28: mov eax, 0x400 */ r_eax = 0x400u;
    /* 00844f2d: jmp 0x844f3a */ goto L_00844f3a;
L_00844f2f:; BB(0x00844f2f);
    /* 00844f2f: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00844f33: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844f34: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x844f39u); f_00858009();
    /* 00844f39: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00844f3a:; BB(0x00844f3a);
    /* 00844f3a: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00844f3e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844f3f: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00844f43: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844f44: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00844f45: call 0x858b0f */ r_esp -= 4; W32(r_esp, 0x844f4au); f_00858b0f();
    /* 00844f4a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00844f4d:; BB(0x00844f4d);
    /* 00844f4d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00844f4e: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x844f53u); f_00858009();
    /* 00844f53: mov ebx, eax */ r_ebx = r_eax;
    /* 00844f55: lea edx, [esp + 0x14] */ r_edx = (u32)(r_esp+0x14u);
    /* 00844f59: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00844f5a: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x844f5fu); f_00858009();
    /* 00844f5f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00844f62: neg ebx */ { u32 x = r_ebx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_ebx = r;  }
    /* 00844f64: add ebx, 0x400 */ {  u32 a = r_ebx; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00844f6a: cmp eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 00844f6c: jbe 0x844f7e */ if ((fC||fZ)) goto L_00844f7e;
L_00844f6e:; BB(0x00844f6e);
    /* 00844f6e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00844f6f: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x844f74u); f_00858009();
    /* 00844f74: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00844f75: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00844f77: add eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00844f7c: jmp 0x844f89 */ goto L_00844f89;
L_00844f7e:; BB(0x00844f7e);
    /* 00844f7e: lea eax, [esp + 0x10] */ r_eax = (u32)(r_esp+0x10u);
    /* 00844f82: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844f83: call 0x858009 */ r_esp -= 4; W32(r_esp, 0x844f88u); f_00858009();
    /* 00844f88: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00844f89:; BB(0x00844f89);
    /* 00844f89: lea edx, [esp + 0x10] */ r_edx = (u32)(r_esp+0x10u);
    /* 00844f8d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00844f8e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00844f8f: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00844f90: call 0x858b0f */ r_esp -= 4; W32(r_esp, 0x844f95u); f_00858b0f();
    /* 00844f95: mov eax, edi */ r_eax = r_edi;
    /* 00844f97: add esp, 0x820 */ {  u32 a = r_esp; u32 b = 0x820u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00844f9d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00844f9e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00844f9f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00844fa0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00844fa1: ret 4 */ FN_RET(0x00844da0); r_esp += 8; return;
L_00844fa4:; BB(0x00844fa4);
    /* 00844fa4: lea ebx, [ecx + eax] */ r_ebx = (u32)(r_ecx+r_eax);
    /* 00844fa7: mov dword ptr [esp + 4], ebx */ W32((u32)(r_esp+0x4u), r_ebx);
    /* 00844fab: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844fad: jne 0x844fcb */ if (!fZ) goto L_00844fcb;
L_00844faf:; BB(0x00844faf);
    /* 00844faf: mov ebx, dword ptr [esp + 0x828] */ r_ebx = R32((u32)(r_esp+0x828u));
    /* 00844fb6: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00844fb9: cmp ebx, dword ptr [edi*4 + 0xa22b80] */ {  u32 a = r_ebx; u32 b = R32((u32)(r_edi*4+0xa22b80u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844fc0: je 0x844ed9 */ if (fZ) goto L_00844ed9;
L_00844fc6:; BB(0x00844fc6);
    /* 00844fc6: jmp 0x844ef2 */ goto L_00844ef2;
L_00844fcb:; BB(0x00844fcb);
    /* 00844fcb: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00844fcf: jmp 0x844f07 */ goto L_00844f07;
L_00844fd4:; BB(0x00844fd4);
    /* 00844fd4: cmp ebx, edx */ {  u32 a = r_ebx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844fd6: jne 0x844ef2 */ if (!fZ) goto L_00844ef2;
L_00844fdc:; BB(0x00844fdc);
    /* 00844fdc: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00844fde: jne 0x844fe8 */ if (!fZ) goto L_00844fe8;
L_00844fe0:; BB(0x00844fe0);
    /* 00844fe0: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00844fe3: jmp 0x844ef2 */ goto L_00844ef2;
L_00844fe8:; BB(0x00844fe8);
    /* 00844fe8: mov edi, dword ptr [esp + 0xc] */ r_edi = R32((u32)(r_esp+0xcu));
    /* 00844fec: jmp 0x844f07 */ goto L_00844f07;
}

void f_00844ff4(void) /* sub_844FF4 */
{
    FN_ENTER(0x00844ff4);
    /* 00844ff4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00844ff5: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00844ff6: mov edi, ecx */ r_edi = r_ecx;
    /* 00844ff8: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00844ffc: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00845000: mov ecx, edi */ r_ecx = r_edi;
    /* 00845002: call 0x844da0 */ r_esp -= 4; W32(r_esp, 0x845007u); f_00844da0();
    /* 00845007: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00845009: je 0x845024 */ if (fZ) goto L_00845024;
L_0084500b:; BB(0x0084500b);
    /* 0084500b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0084500d: push 0x989848 */ { u32 v = 0x989848u; r_esp -= 4; W32(r_esp, v); }
    /* 00845012: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00845013: push dword ptr [0xacbed8] */ { u32 v = R32((u32)(0xacbed8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00845019: call dword ptr [0x8f8350] */ { u32 t = R32((u32)(0x8f8350u)); r_esp -= 4; W32(r_esp, 0x84501fu); call_ind(t); }
    /* 0084501f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00845020: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00845021: ret 8 */ FN_RET(0x00844ff4); r_esp += 12; return;
L_00845024:; BB(0x00845024);
    /* 00845024: push 0x9795dc */ { u32 v = 0x9795dcu; r_esp -= 4; W32(r_esp, v); }
    /* 00845029: push dword ptr [0xa22be0] */ { u32 v = R32((u32)(0xa22be0u)); r_esp -= 4; W32(r_esp, v); }
    /* 0084502f: call 0x85a807 */ r_esp -= 4; W32(r_esp, 0x845034u); f_0085a807();
    /* 00845034: mov ebp, eax */ r_ebp = r_eax;
    /* 00845036: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00845039: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0084503b: je 0x845058 */ if (fZ) goto L_00845058;
L_0084503d:; BB(0x0084503d);
    /* 0084503d: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084503e: push dword ptr [edi + 0x800] */ { u32 v = R32((u32)(r_edi+0x800u)); r_esp -= 4; W32(r_esp, v); }
    /* 00845044: call 0x85b918 */ r_esp -= 4; W32(r_esp, 0x845049u); f_0085b918();
    /* 00845049: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0084504a: call 0x85bae6 */ r_esp -= 4; W32(r_esp, 0x84504fu); f_0085bae6();
    /* 0084504f: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00845050: call 0x859710 */ r_esp -= 4; W32(r_esp, 0x845055u); f_00859710();
    /* 00845055: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
L_00845058:; BB(0x00845058);
    /* 00845058: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00845059: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0084505a: ret 8 */ FN_RET(0x00844ff4); r_esp += 12; return;
}

