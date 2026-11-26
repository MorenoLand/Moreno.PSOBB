#include "protos.h"

void f_00669048(void) /* sub_669048 */
{
    FN_ENTER(0x00669048);
    /* 00669048: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00669049: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066904a: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0066904d: mov esi, ecx */ r_esi = r_ecx;
    /* 0066904f: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x669054u); f_006dc358();
    /* 00669054: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669057: je 0x66916d */ if (fZ) goto L_0066916d;
L_0066905d:; BB(0x0066905d);
    /* 0066905d: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 00669064: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00669065: push dword ptr [esi + 0xac] */ { u32 v = R32((u32)(r_esi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 0066906b: mov ecx, esi */ r_ecx = r_esi;
    /* 0066906d: call 0x669a58 */ r_esp -= 4; W32(r_esp, 0x669072u); f_00669a58();
    /* 00669072: mov ebx, eax */ r_ebx = r_eax;
    /* 00669074: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669076: je 0x669339 */ if (fZ) goto L_00669339;
L_0066907c:; BB(0x0066907c);
    /* 0066907c: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0066907e: mov ecx, esi */ r_ecx = r_esi;
    /* 00669080: call dword ptr [edx + 0x38] */ { u32 t = R32((u32)(r_edx+0x38u)); r_esp -= 4; W32(r_esp, 0x669083u); call_ind(t); }
    /* 00669083: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669085: jne 0x6690a6 */ if (!fZ) goto L_006690a6;
L_00669087:; BB(0x00669087);
    /* 00669087: mov ecx, dword ptr [esi + 0xb0] */ r_ecx = R32((u32)(r_esi+0xb0u));
    /* 0066908d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066908f: je 0x6690a0 */ if (fZ) goto L_006690a0;
L_00669091:; BB(0x00669091);
    /* 00669091: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x669096u); f_007127b0();
    /* 00669096: mov dword ptr [esi + 0xb0], 0 */ W32((u32)(r_esi+0xb0u), 0x0u);
L_006690a0:; BB(0x006690a0);
    /* 006690a0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006690a3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006690a4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006690a5: ret  */ FN_RET(0x00669048); r_esp += 4; return;
L_006690a6:; BB(0x006690a6);
    /* 006690a6: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006690ac: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006690ae: je 0x6690d2 */ if (fZ) goto L_006690d2;
L_006690b0:; BB(0x006690b0);
    /* 006690b0: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 006690b4: and edx, 0xfffb */ {  u32 a = r_edx; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006690ba: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
    /* 006690be: mov eax, dword ptr [esi + 0xb0] */ r_eax = R32((u32)(r_esi+0xb0u));
    /* 006690c4: movzx edx, word ptr [eax + 8] */ r_edx = (u32)R16((u32)(r_eax+0x8u));
    /* 006690c8: and edx, 0xffef */ {  u32 a = r_edx; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 006690ce: mov word ptr [eax + 8], dx */ W16((u32)(r_eax+0x8u), (u16)r_edx);
L_006690d2:; BB(0x006690d2);
    /* 006690d2: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006690d4: je 0x669326 */ if (fZ) goto L_00669326;
L_006690da:; BB(0x006690da);
    /* 006690da: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006690e0: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 006690e2: mov ecx, esi */ r_ecx = r_esi;
    /* 006690e4: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x6690e7u); call_ind(t); }
    /* 006690e7: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006690e9: call 0x68c0b4 */ r_esp -= 4; W32(r_esp, 0x6690eeu); f_0068c0b4();
    /* 006690ee: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006690f0: jne 0x6690f8 */ if (!fZ) goto L_006690f8;
L_006690f2:; BB(0x006690f2);
    /* 006690f2: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006690f5: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006690f6: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006690f7: ret  */ FN_RET(0x00669048); r_esp += 4; return;
L_006690f8:; BB(0x006690f8);
    /* 006690f8: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006690fa: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x6690ffu); f_00694780();
    /* 006690ff: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 00669105: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 00669108: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066910a: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066910c: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0066910e: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 00669115: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x66911au); f_007c1160();
    /* 0066911a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066911c: je 0x669135 */ if (fZ) goto L_00669135;
L_0066911e:; BB(0x0066911e);
    /* 0066911e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00669120: mov dword ptr [esi + 0xbc], 1 */ W32((u32)(r_esi+0xbcu), 0x1u);
    /* 0066912a: mov ecx, esi */ r_ecx = r_esi;
    /* 0066912c: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x66912fu); call_ind(t); }
    /* 0066912f: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00669132: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00669133: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00669134: ret  */ FN_RET(0x00669048); r_esp += 4; return;
L_00669135:; BB(0x00669135);
    /* 00669135: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00669137: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x66913cu); f_00694780();
    /* 0066913c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066913d: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 0066913f: mov ecx, esi */ r_ecx = r_esi;
    /* 00669141: call dword ptr [edx + 0x40] */ { u32 t = R32((u32)(r_edx+0x40u)); r_esp -= 4; W32(r_esp, 0x669144u); call_ind(t); }
    /* 00669144: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669146: jne 0x66914e */ if (!fZ) goto L_0066914e;
L_00669148:; BB(0x00669148);
    /* 00669148: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066914b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066914c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066914d: ret  */ FN_RET(0x00669048); r_esp += 4; return;
L_0066914e:; BB(0x0066914e);
    /* 0066914e: push dword ptr [esi + 0x84] */ { u32 v = R32((u32)(r_esi+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 00669154: movzx edx, word ptr [ebx + 0x1c] */ r_edx = (u32)R16((u32)(r_ebx+0x1cu));
    /* 00669158: lea eax, [esi + 0xc0] */ r_eax = (u32)(r_esi+0xc0u);
    /* 0066915e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066915f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00669160: call 0x69b184 */ r_esp -= 4; W32(r_esp, 0x669165u); f_0069b184();
    /* 00669165: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00669168: jmp 0x669320 */ goto L_00669320;
L_0066916d:; BB(0x0066916d);
    /* 0066916d: mov dword ptr [esp + 4], edi */ W32((u32)(r_esp+0x4u), r_edi);
    /* 00669171: mov dword ptr [esp], ebp */ W32((u32)(r_esp), r_ebp);
    /* 00669174: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
L_00669176:; BB(0x00669176);
    /* 00669176: fld dword ptr [esi + 0xac] */ FPUSH(R_F32((u32)(r_esi+0xacu)));
    /* 0066917c: fstp dword ptr [esp + 8] */ W_F32((u32)(r_esp+0x8u), ST(0)); FPOP();
    /* 00669180: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00669181: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x669186u); f_0068d5a8();
    /* 00669186: mov edi, eax */ r_edi = r_eax;
    /* 00669188: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066918b: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066918d: je 0x6691be */ if (fZ) goto L_006691be;
L_0066918f:; BB(0x0066918f);
    /* 0066918f: lea ebp, [esi + 0x38] */ r_ebp = (u32)(r_esi+0x38u);
    /* 00669192: lea edx, [edi + 0x38] */ r_edx = (u32)(r_edi+0x38u);
    /* 00669195: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00669196: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00669197: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x66919cu); f_0078ea50();
    /* 0066919c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066919f: fld dword ptr [esp + 8] */ FPUSH(R_F32((u32)(r_esp+0x8u)));
    /* 006691a3: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 006691a5: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006691a7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006691a9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006691aa: jbe 0x6691be */ if ((fC||fZ)) goto L_006691be;
L_006691ac:; BB(0x006691ac);
    /* 006691ac: mov ecx, edi */ r_ecx = r_edi;
    /* 006691ae: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6691b3u); f_00689410();
    /* 006691b3: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006691b6: je 0x669348 */ if (fZ) goto L_00669348;
L_006691bc:; BB(0x006691bc);
    /* 006691bc: jmp 0x6691c0 */ goto L_006691c0;
L_006691be:; BB(0x006691be);
    /* 006691be: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
L_006691c0:; BB(0x006691c0);
    /* 006691c0: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006691c2: je 0x669382 */ if (fZ) goto L_00669382;
L_006691c8:; BB(0x006691c8);
    /* 006691c8: cmp ebx, 0xffff */ {  u32 a = r_ebx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006691ce: mov ebp, 0 */ r_ebp = 0x0u;
    /* 006691d3: je 0x6691f7 */ if (fZ) goto L_006691f7;
L_006691d5:; BB(0x006691d5);
    /* 006691d5: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006691d6: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6691dbu); f_0068d5a8();
    /* 006691db: mov ebp, eax */ r_ebp = r_eax;
    /* 006691dd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006691e0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006691e2: je 0x6692ef */ if (fZ) goto L_006692ef;
L_006691e8:; BB(0x006691e8);
    /* 006691e8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 006691ea: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x6691efu); f_00689410();
    /* 006691ef: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006691f1: jne 0x6692ef */ if (!fZ) goto L_006692ef;
L_006691f7:; BB(0x006691f7);
    /* 006691f7: mov edx, dword ptr [0x9c9558] */ r_edx = R32((u32)(0x9c9558u));
    /* 006691fd: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006691ff: je 0x6692ef */ if (fZ) goto L_006692ef;
L_00669205:; BB(0x00669205);
    /* 00669205: mov edx, dword ptr [0xaab1f4] */ r_edx = R32((u32)(0xaab1f4u));
    /* 0066920b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066920d: jne 0x6692ef */ if (!fZ) goto L_006692ef;
L_00669213:; BB(0x00669213);
    /* 00669213: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669215: je 0x669246 */ if (fZ) goto L_00669246;
L_00669217:; BB(0x00669217);
    /* 00669217: mov edx, dword ptr [ebp] */ r_edx = R32((u32)(r_ebp));
    /* 0066921a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0066921c: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x669222u); call_ind(t); }
    /* 00669222: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669224: jne 0x6692ef */ if (!fZ) goto L_006692ef;
L_0066922a:; BB(0x0066922a);
    /* 0066922a: mov ecx, ebp */ r_ecx = r_ebp;
    /* 0066922c: call 0x689428 */ r_esp -= 4; W32(r_esp, 0x669231u); f_00689428();
    /* 00669231: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669233: jne 0x66923c */ if (!fZ) goto L_0066923c;
L_00669235:; BB(0x00669235);
    /* 00669235: mov edx, 1 */ r_edx = 0x1u;
    /* 0066923a: jmp 0x66923e */ goto L_0066923e;
L_0066923c:; BB(0x0066923c);
    /* 0066923c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_0066923e:; BB(0x0066923e);
    /* 0066923e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669240: je 0x6692ef */ if (fZ) goto L_006692ef;
L_00669246:; BB(0x00669246);
    /* 00669246: mov ebp, dword ptr [esi + ebx*4 + 0xf0] */ r_ebp = R32((u32)(r_esi+r_ebx*4+0xf0u));
    /* 0066924d: lea eax, [ebx + ebx] */ r_eax = (u32)(r_ebx+r_ebx);
    /* 00669250: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669252: je 0x669277 */ if (fZ) goto L_00669277;
L_00669254:; BB(0x00669254);
    /* 00669254: movzx edx, word ptr [ebp + 8] */ r_edx = (u32)R16((u32)(r_ebp+0x8u));
    /* 00669258: and edx, 0xfffb */ {  u32 a = r_edx; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0066925e: mov word ptr [ebp + 8], dx */ W16((u32)(r_ebp+0x8u), (u16)r_edx);
    /* 00669262: mov edx, dword ptr [esi + eax*2 + 0xf0] */ r_edx = R32((u32)(r_esi+r_eax*2+0xf0u));
    /* 00669269: movzx ebp, word ptr [edx + 8] */ r_ebp = (u32)R16((u32)(r_edx+0x8u));
    /* 0066926d: and ebp, 0xffef */ {  u32 a = r_ebp; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_ebp = r;  }
    /* 00669273: mov word ptr [edx + 8], bp */ W16((u32)(r_edx+0x8u), (u16)r_ebp);
L_00669277:; BB(0x00669277);
    /* 00669277: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669279: je 0x66936e */ if (fZ) goto L_0066936e;
L_0066927f:; BB(0x0066927f);
    /* 0066927f: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 00669283: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00669284: mov ebp, dword ptr [esi] */ r_ebp = R32((u32)(r_esi));
    /* 00669286: mov ecx, esi */ r_ecx = r_esi;
    /* 00669288: call dword ptr [ebp + 0x34] */ { u32 t = R32((u32)(r_ebp+0x34u)); r_esp -= 4; W32(r_esp, 0x66928bu); call_ind(t); }
    /* 0066928b: mov ecx, edi */ r_ecx = r_edi;
    /* 0066928d: call 0x68c0b4 */ r_esp -= 4; W32(r_esp, 0x669292u); f_0068c0b4();
    /* 00669292: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669294: je 0x66930d */ if (fZ) goto L_0066930d;
L_00669296:; BB(0x00669296);
    /* 00669296: mov ecx, edi */ r_ecx = r_edi;
    /* 00669298: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x66929du); f_00694780();
    /* 0066929d: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 006692a3: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006692a6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006692a8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006692aa: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006692ac: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006692b3: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6692b8u); f_007c1160();
    /* 006692b8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006692ba: jne 0x66934f */ if (!fZ) goto L_0066934f;
L_006692c0:; BB(0x006692c0);
    /* 006692c0: mov ecx, edi */ r_ecx = r_edi;
    /* 006692c2: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x6692c7u); f_00694780();
    /* 006692c7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006692c8: mov edx, dword ptr [esi] */ r_edx = R32((u32)(r_esi));
    /* 006692ca: mov ecx, esi */ r_ecx = r_esi;
    /* 006692cc: call dword ptr [edx + 0x40] */ { u32 t = R32((u32)(r_edx+0x40u)); r_esp -= 4; W32(r_esp, 0x6692cfu); call_ind(t); }
    /* 006692cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006692d1: je 0x66930d */ if (fZ) goto L_0066930d;
L_006692d3:; BB(0x006692d3);
    /* 006692d3: push dword ptr [esi + 0x84] */ { u32 v = R32((u32)(r_esi+0x84u)); r_esp -= 4; W32(r_esp, v); }
    /* 006692d9: movzx edx, word ptr [edi + 0x1c] */ r_edx = (u32)R16((u32)(r_edi+0x1cu));
    /* 006692dd: lea eax, [esi + 0xc0] */ r_eax = (u32)(r_esi+0xc0u);
    /* 006692e3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006692e4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006692e5: call 0x69b184 */ r_esp -= 4; W32(r_esp, 0x6692eau); f_0069b184();
    /* 006692ea: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006692ed: jmp 0x66930d */ goto L_0066930d;
L_006692ef:; BB(0x006692ef);
    /* 006692ef: mov ecx, dword ptr [esi + ebx*4 + 0xf0] */ r_ecx = R32((u32)(r_esi+r_ebx*4+0xf0u));
    /* 006692f6: lea ebp, [ebx + ebx] */ r_ebp = (u32)(r_ebx+r_ebx);
    /* 006692f9: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006692fb: je 0x66930d */ if (fZ) goto L_0066930d;
L_006692fd:; BB(0x006692fd);
    /* 006692fd: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x669302u); f_007127b0();
    /* 00669302: mov dword ptr [esi + ebp*2 + 0xf0], 0 */ W32((u32)(r_esi+r_ebp*2+0xf0u), 0x0u);
L_0066930d:; BB(0x0066930d);
    /* 0066930d: add ebx, 1 */ {  u32 a = r_ebx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00669310: cmp ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00669313: jl 0x669176 */ if ((fS!=fO)) goto L_00669176;
L_00669319:; BB(0x00669319);
    /* 00669319: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 0066931d: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
L_00669320:; BB(0x00669320);
    /* 00669320: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00669323: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00669324: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00669325: ret  */ FN_RET(0x00669048); r_esp += 4; return;
L_00669326:; BB(0x00669326);
    /* 00669326: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00669328: mov dword ptr [esi + 0xbc], 0 */ W32((u32)(r_esi+0xbcu), 0x0u);
    /* 00669332: mov ecx, esi */ r_ecx = r_esi;
    /* 00669334: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x669337u); call_ind(t); }
    /* 00669337: jmp 0x669320 */ goto L_00669320;
L_00669339:; BB(0x00669339);
    /* 00669339: mov dword ptr [esi + 0xbc], 0 */ W32((u32)(r_esi+0xbcu), 0x0u);
    /* 00669343: jmp 0x66907c */ goto L_0066907c;
L_00669348:; BB(0x00669348);
    /* 00669348: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 0066934a: jmp 0x6691c0 */ goto L_006691c0;
L_0066934f:; BB(0x0066934f);
    /* 0066934f: mov edi, dword ptr [esp + 4] */ r_edi = R32((u32)(r_esp+0x4u));
    /* 00669353: mov ebp, dword ptr [esp] */ r_ebp = R32((u32)(r_esp));
    /* 00669356: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00669358: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00669359: mov ecx, esi */ r_ecx = r_esi;
    /* 0066935b: mov dword ptr [esi + 0xbc], 1 */ W32((u32)(r_esi+0xbcu), 0x1u);
    /* 00669365: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x669368u); call_ind(t); }
    /* 00669368: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066936b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066936c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066936d: ret  */ FN_RET(0x00669048); r_esp += 4; return;
L_0066936e:; BB(0x0066936e);
    /* 0066936e: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00669370: mov dword ptr [esi + 0xbc], 0 */ W32((u32)(r_esi+0xbcu), 0x0u);
    /* 0066937a: mov ecx, esi */ r_ecx = r_esi;
    /* 0066937c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0066937d: call dword ptr [eax + 0x48] */ { u32 t = R32((u32)(r_eax+0x48u)); r_esp -= 4; W32(r_esp, 0x669380u); call_ind(t); }
    /* 00669380: jmp 0x66930d */ goto L_0066930d;
L_00669382:; BB(0x00669382);
    /* 00669382: mov dword ptr [esi + 0xbc], 0 */ W32((u32)(r_esi+0xbcu), 0x0u);
    /* 0066938c: jmp 0x6691c8 */ goto L_006691c8;
}

void f_00669394(void) /* sub_669394 */
{
    FN_ENTER(0x00669394);
    /* 00669394: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00669395: mov esi, ecx */ r_esi = r_ecx;
    /* 00669397: mov eax, dword ptr [esi] */ r_eax = R32((u32)(r_esi));
    /* 00669399: mov ecx, esi */ r_ecx = r_esi;
    /* 0066939b: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 006693a0: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 006693a5: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x6693a8u); call_ind(t); }
    /* 006693a8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006693aa: jne 0x6693ae */ if (!fZ) goto L_006693ae;
L_006693ac:; BB(0x006693ac);
    /* 006693ac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006693ad: ret  */ FN_RET(0x00669394); r_esp += 4; return;
L_006693ae:; BB(0x006693ae);
    /* 006693ae: mov ecx, dword ptr [esi + 0x110] */ r_ecx = R32((u32)(r_esi+0x110u));
    /* 006693b4: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6693b9u); f_00829cc8();
    /* 006693b9: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x6693beu); f_0082d7b0();
    /* 006693be: lea ecx, [esi + 0x38] */ r_ecx = (u32)(r_esi+0x38u);
    /* 006693c1: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x6693c6u); f_0082d838();
    /* 006693c6: mov edx, dword ptr [esi + 0x60] */ r_edx = R32((u32)(r_esi+0x60u));
    /* 006693c9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 006693cb: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6693d0u); f_0082d8bc();
    /* 006693d0: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x6693d5u); f_00835068();
    /* 006693d5: mov ecx, dword ptr [esi + 0x104] */ r_ecx = R32((u32)(r_esi+0x104u));
    /* 006693db: call 0x835090 */ r_esp -= 4; W32(r_esp, 0x6693e0u); f_00835090();
    /* 006693e0: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x6693e5u); f_0082dbac();
    /* 006693e5: push dword ptr [esi + 0x100] */ { u32 v = R32((u32)(r_esi+0x100u)); r_esp -= 4; W32(r_esp, v); }
    /* 006693eb: mov ecx, dword ptr [esi + 0x108] */ r_ecx = R32((u32)(r_esi+0x108u));
    /* 006693f1: mov edx, dword ptr [esi + 0x10c] */ r_edx = R32((u32)(r_esi+0x10cu));
    /* 006693f7: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x6693fcu); f_00835574();
    /* 006693fc: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x669401u); f_0082dab0();
    /* 00669401: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x669406u); f_00835078();
    /* 00669406: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x66940bu); f_0082da80();
    /* 0066940b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066940c: ret  */ FN_RET(0x00669394); r_esp += 4; return;
}

void f_00669410(void) /* sub_669410 */
{
    FN_ENTER(0x00669410);
    /* 00669410: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00669411: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00669413: mov eax, dword ptr [ebx + 0xb0] */ r_eax = R32((u32)(r_ebx+0xb0u));
    /* 00669419: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066941b: je 0x669421 */ if (fZ) goto L_00669421;
L_0066941d:; BB(0x0066941d);
    /* 0066941d: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0066941e: ret 4 */ FN_RET(0x00669410); r_esp += 8; return;
L_00669421:; BB(0x00669421);
    /* 00669421: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 00669423: call 0x73ec50 */ r_esp -= 4; W32(r_esp, 0x669428u); f_0073ec50();
    /* 00669428: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 0066942c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0066942d: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066942f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00669430: call 0x7354fc */ r_esp -= 4; W32(r_esp, 0x669435u); f_007354fc();
    /* 00669435: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00669438: mov dword ptr [ebx + 0xb0], eax */ W32((u32)(r_ebx+0xb0u), r_eax);
    /* 0066943e: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x669443u); f_0078b1c4();
    /* 00669443: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669446: je 0x6694ed */ if (fZ) goto L_006694ed;
L_0066944c:; BB(0x0066944c);
    /* 0066944c: push dword ptr [ebx + 0xc0] */ { u32 v = R32((u32)(r_ebx+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00669452: call 0x80c2dc */ r_esp -= 4; W32(r_esp, 0x669457u); f_0080c2dc();
    /* 00669457: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00669458: call 0x79313c */ r_esp -= 4; W32(r_esp, 0x66945du); f_0079313c();
    /* 0066945d: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00669460: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669462: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669464: mov ecx, dword ptr [ebx + 0xb0] */ r_ecx = R32((u32)(r_ebx+0xb0u));
    /* 0066946a: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0066946c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066946d: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x669472u); f_00735db8();
L_00669472:; BB(0x00669472);
    /* 00669472: mov ecx, dword ptr [ebx + 0xb0] */ r_ecx = R32((u32)(r_ebx+0xb0u));
    /* 00669478: call 0x73608c */ r_esp -= 4; W32(r_esp, 0x66947du); f_0073608c();
    /* 0066947d: mov ecx, dword ptr [ebx + 0xb0] */ r_ecx = R32((u32)(r_ebx+0xb0u));
    /* 00669483: call 0x736458 */ r_esp -= 4; W32(r_esp, 0x669488u); f_00736458();
    /* 00669488: mov edx, dword ptr [ebx + 0xb0] */ r_edx = R32((u32)(r_ebx+0xb0u));
    /* 0066948e: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 00669495: or eax, 0xffff0010 */ {  u32 a = r_eax; u32 b = 0xffff0010u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0066949a: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006694a1: mov edx, dword ptr [ebx + 0xb0] */ r_edx = R32((u32)(r_ebx+0xb0u));
    /* 006694a7: movzx eax, word ptr [edx + 0x84] */ r_eax = (u32)R16((u32)(r_edx+0x84u));
    /* 006694ae: or eax, 0xffff0040 */ {  u32 a = r_eax; u32 b = 0xffff0040u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006694b3: mov word ptr [edx + 0x84], ax */ W16((u32)(r_edx+0x84u), (u16)r_eax);
    /* 006694ba: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 006694be: movzx eax, ax */ r_eax = (u32)(u16)r_eax;
    /* 006694c1: mov word ptr [ebx + 0xb8], ax */ W16((u32)(r_ebx+0xb8u), (u16)r_eax);
    /* 006694c8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006694c9: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x6694ceu); f_0068d5a8();
    /* 006694ce: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006694cf: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006694d1: je 0x6694e1 */ if (fZ) goto L_006694e1;
L_006694d3:; BB(0x006694d3);
    /* 006694d3: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 006694d9: not edx */ r_edx = ~r_edx;
    /* 006694db: and dword ptr [eax + 0x630], edx */ { u32 ad = (u32)(r_eax+0x630u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a & b) & 0xffffffffu; W32(ad, r);  }
L_006694e1:; BB(0x006694e1);
    /* 006694e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006694e3: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x6694e8u); f_00791748();
    /* 006694e8: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006694e9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006694ea: ret 4 */ FN_RET(0x00669410); r_esp += 8; return;
L_006694ed:; BB(0x006694ed);
    /* 006694ed: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006694ef: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006694f1: mov ecx, dword ptr [ebx + 0xb0] */ r_ecx = R32((u32)(r_ebx+0xb0u));
    /* 006694f7: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 006694f9: push 0xa48ba0 */ { u32 v = 0xa48ba0u; r_esp -= 4; W32(r_esp, v); }
    /* 006694fe: call 0x735db8 */ r_esp -= 4; W32(r_esp, 0x669503u); f_00735db8();
    /* 00669503: jmp 0x669472 */ goto L_00669472;
}

void f_00669508(void) /* sub_669508 */
{
    FN_ENTER(0x00669508);
    /* 00669508: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00669509: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066950a: mov ebp, ecx */ r_ebp = r_ecx;
    /* 0066950c: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x669511u); f_006dc358();
    /* 00669511: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669514: jne 0x66953e */ if (!fZ) goto L_0066953e;
L_00669516:; BB(0x00669516);
    /* 00669516: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00669519: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066951b: mov edi, eax */ r_edi = r_eax;
L_0066951d:; BB(0x0066951d);
    /* 0066951d: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0066951e: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x669523u); f_0068d5a8();
    /* 00669523: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00669524: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669526: je 0x669533 */ if (fZ) goto L_00669533;
L_00669528:; BB(0x00669528);
    /* 00669528: mov ecx, eax */ r_ecx = r_eax;
    /* 0066952a: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x66952fu); f_00689410();
    /* 0066952f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669531: jne 0x669548 */ if (!fZ) goto L_00669548;
L_00669533:; BB(0x00669533);
    /* 00669533: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00669536: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00669539: jl 0x66951d */ if ((fS!=fO)) goto L_0066951d;
L_0066953b:; BB(0x0066953b);
    /* 0066953b: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_0066953e:; BB(0x0066953e);
    /* 0066953e: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00669540: call 0x669550 */ r_esp -= 4; W32(r_esp, 0x669545u); f_00669550();
    /* 00669545: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00669546: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00669547: ret  */ FN_RET(0x00669508); r_esp += 4; return;
L_00669548:; BB(0x00669548);
    /* 00669548: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
    /* 0066954b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066954d: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066954e: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0066954f: ret  */ FN_RET(0x00669508); r_esp += 4; return;
}

void f_00669550(void) /* sub_669550 */
{
    FN_ENTER(0x00669550);
    /* 00669550: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00669551: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00669552: mov edi, ecx */ r_edi = r_ecx;
    /* 00669554: movzx edx, word ptr [edi + 0xb8] */ r_edx = (u32)R16((u32)(r_edi+0xb8u));
    /* 0066955b: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669561: mov ebx, 0 */ r_ebx = 0x0u;
    /* 00669566: je 0x669587 */ if (fZ) goto L_00669587;
L_00669568:; BB(0x00669568);
    /* 00669568: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00669569: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66956eu); f_0068d5a8();
    /* 0066956e: mov ebx, eax */ r_ebx = r_eax;
    /* 00669570: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00669573: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669575: je 0x669582 */ if (fZ) goto L_00669582;
L_00669577:; BB(0x00669577);
    /* 00669577: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00669579: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x66957eu); f_00689410();
    /* 0066957e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669580: je 0x669587 */ if (fZ) goto L_00669587;
L_00669582:; BB(0x00669582);
    /* 00669582: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00669584: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00669585: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00669586: ret  */ FN_RET(0x00669550); r_esp += 4; return;
L_00669587:; BB(0x00669587);
    /* 00669587: mov edx, dword ptr [0x9c9558] */ r_edx = R32((u32)(0x9c9558u));
    /* 0066958d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066958f: je 0x6695cc */ if (fZ) goto L_006695cc;
L_00669591:; BB(0x00669591);
    /* 00669591: mov edx, dword ptr [0xaab1f4] */ r_edx = R32((u32)(0xaab1f4u));
    /* 00669597: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669599: jne 0x6695cc */ if (!fZ) goto L_006695cc;
L_0066959b:; BB(0x0066959b);
    /* 0066959b: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066959d: je 0x6695c1 */ if (fZ) goto L_006695c1;
L_0066959f:; BB(0x0066959f);
    /* 0066959f: mov edx, dword ptr [ebx] */ r_edx = R32((u32)(r_ebx));
    /* 006695a1: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006695a3: call dword ptr [edx + 0x8c] */ { u32 t = R32((u32)(r_edx+0x8cu)); r_esp -= 4; W32(r_esp, 0x6695a9u); call_ind(t); }
    /* 006695a9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006695ab: jne 0x6695cc */ if (!fZ) goto L_006695cc;
L_006695ad:; BB(0x006695ad);
    /* 006695ad: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006695af: call 0x689428 */ r_esp -= 4; W32(r_esp, 0x6695b4u); f_00689428();
    /* 006695b4: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006695b6: mov eax, 0 */ r_eax = 0x0u;
    /* 006695bb: sete al */ r_eax = (r_eax & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 006695be: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006695bf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006695c0: ret  */ FN_RET(0x00669550); r_esp += 4; return;
L_006695c1:; BB(0x006695c1);
    /* 006695c1: mov eax, dword ptr [edi + 0xbc] */ r_eax = R32((u32)(r_edi+0xbcu));
    /* 006695c7: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006695ca: jne 0x6695d1 */ if (!fZ) goto L_006695d1;
L_006695cc:; BB(0x006695cc);
    /* 006695cc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006695ce: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006695cf: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006695d0: ret  */ FN_RET(0x00669550); r_esp += 4; return;
L_006695d1:; BB(0x006695d1);
    /* 006695d1: mov eax, 1 */ r_eax = 0x1u;
    /* 006695d6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006695d7: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006695d8: ret  */ FN_RET(0x00669550); r_esp += 4; return;
}

void f_006695dc(void) /* sub_6695DC */
{
    FN_ENTER(0x006695dc);
    /* 006695dc: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006695dd: mov ebx, dword ptr [esp + 8] */ r_ebx = R32((u32)(r_esp+0x8u));
    /* 006695e1: movsx eax, word ptr [ebx + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_ebx+0x4u));
    /* 006695e5: cmp eax, dword ptr [0xaafca0] */ {  u32 a = r_eax; u32 b = R32((u32)(0xaafca0u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006695eb: jne 0x6695ef */ if (!fZ) goto L_006695ef;
L_006695ed:; BB(0x006695ed);
    /* 006695ed: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006695ee: ret  */ FN_RET(0x006695dc); r_esp += 4; return;
L_006695ef:; BB(0x006695ef);
    /* 006695ef: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006695f0: call 0x80c2a4 */ r_esp -= 4; W32(r_esp, 0x6695f5u); f_0080c2a4();
    /* 006695f5: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006695f6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006695f7: movsx edx, word ptr [ebx + 4] */ r_edx = (u32)(i32)(i16)R16((u32)(r_ebx+0x4u));
    /* 006695fb: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 006695fc: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 00669601: call 0x815590 */ r_esp -= 4; W32(r_esp, 0x669606u); f_00815590();
    /* 00669606: call 0x7a6114 */ r_esp -= 4; W32(r_esp, 0x66960bu); f_007a6114();
    /* 0066960b: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00669611: call 0x717f08 */ r_esp -= 4; W32(r_esp, 0x669616u); f_00717f08();
    /* 00669616: push dword ptr [0xac9d58] */ { u32 v = R32((u32)(0xac9d58u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066961c: call 0x7b41f4 */ r_esp -= 4; W32(r_esp, 0x669621u); f_007b41f4();
    /* 00669621: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00669627: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x66962cu); f_0068d5a8();
    /* 0066962c: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066962f: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00669631: je 0x669640 */ if (fZ) goto L_00669640;
L_00669633:; BB(0x00669633);
    /* 00669633: push dword ptr [0xac9d58] */ { u32 v = R32((u32)(0xac9d58u)); r_esp -= 4; W32(r_esp, v); }
    /* 00669639: mov ecx, eax */ r_ecx = r_eax;
    /* 0066963b: call 0x692398 */ r_esp -= 4; W32(r_esp, 0x669640u); f_00692398();
L_00669640:; BB(0x00669640);
    /* 00669640: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00669641: ret  */ FN_RET(0x006695dc); r_esp += 4; return;
}

void f_00669650(void) /* sub_669650 */
{
    FN_ENTER(0x00669650);
    /* 00669650: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00669651: mov esi, ecx */ r_esi = r_ecx;
    /* 00669653: push dword ptr [esi + 0xc0] */ { u32 v = R32((u32)(r_esi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00669659: call 0x80c2a4 */ r_esp -= 4; W32(r_esp, 0x66965eu); f_0080c2a4();
    /* 0066965e: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066965f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00669660: push dword ptr [esi + 0xc0] */ { u32 v = R32((u32)(r_esi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00669666: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 0066966b: call 0x815590 */ r_esp -= 4; W32(r_esp, 0x669670u); f_00815590();
    /* 00669670: call 0x7a6114 */ r_esp -= 4; W32(r_esp, 0x669675u); f_007a6114();
    /* 00669675: push dword ptr [0xac9d58] */ { u32 v = R32((u32)(0xac9d58u)); r_esp -= 4; W32(r_esp, v); }
    /* 0066967b: call 0x7b41f4 */ r_esp -= 4; W32(r_esp, 0x669680u); f_007b41f4();
    /* 00669680: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00669681: push dword ptr [0xac9d58] */ { u32 v = R32((u32)(0xac9d58u)); r_esp -= 4; W32(r_esp, v); }
    /* 00669687: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0066968b: call 0x692398 */ r_esp -= 4; W32(r_esp, 0x669690u); f_00692398();
    /* 00669690: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00669692: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00669693: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00669694: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00669695: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 00669697: call 0x814298 */ r_esp -= 4; W32(r_esp, 0x66969cu); f_00814298();
    /* 0066969c: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066969f: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006696a0: ret 4 */ FN_RET(0x00669650); r_esp += 8; return;
}

void f_006696a4(void) /* sub_6696A4 */
{
    FN_ENTER(0x006696a4);
    /* 006696a4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006696a5: mov ebp, esp */ r_ebp = r_esp;
    /* 006696a7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 006696a9: push 0x8e8b1e */ { u32 v = 0x8e8b1eu; r_esp -= 4; W32(r_esp, v); }
    /* 006696ae: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 006696b4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006696b5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 006696bc: sub esp, 0x20 */ {  u32 a = r_esp; u32 b = 0x20u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006696bf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 006696c2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 006696c5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 006696c8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 006696cb: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 006696ce: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 006696d1: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 006696d4: call 0x66982c */ r_esp -= 4; W32(r_esp, 0x6696d9u); f_0066982c();
    /* 006696d9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006696e0: mov ebx, dword ptr [ebp - 0x24] */ r_ebx = R32((u32)(r_ebp+0xffffffdcu));
    /* 006696e3: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 006696e9: mov dword ptr [ebx], 0xb35140 */ W32((u32)(r_ebx), 0xb35140u);
    /* 006696ef: mov ecx, dword ptr [0x9c9540] */ r_ecx = R32((u32)(0x9c9540u));
    /* 006696f5: mov dword ptr [ebx + 0xc8], 0 */ W32((u32)(r_ebx+0xc8u), 0x0u);
    /* 006696ff: mov dword ptr [ebx + 4], ecx */ W32((u32)(r_ebx+0x4u), r_ecx);
    /* 00669702: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00669703: mov dword ptr [ebx + 0xcc], 0 */ W32((u32)(r_ebx+0xccu), 0x0u);
    /* 0066970d: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066970f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00669711: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00669714: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00669716: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00669718: mov dword ptr [ebx + 0x8c], eax */ W32((u32)(r_ebx+0x8cu), r_eax);
    /* 0066971e: call 0x78b1c4 */ r_esp -= 4; W32(r_esp, 0x669723u); f_0078b1c4();
    /* 00669723: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669726: jne 0x669758 */ if (!fZ) goto L_00669758;
L_00669728:; BB(0x00669728);
    /* 00669728: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066972b: mov eax, dword ptr [ecx + 0x8c] */ r_eax = R32((u32)(r_ecx+0x8cu));
    /* 00669731: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669733: jne 0x669758 */ if (!fZ) goto L_00669758;
L_00669735:; BB(0x00669735);
    /* 00669735: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00669738: movzx edx, word ptr [ecx + 8] */ r_edx = (u32)R16((u32)(r_ecx+0x8u));
    /* 0066973c: or edx, 0xffff0001 */ {  u32 a = r_edx; u32 b = 0xffff0001u; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00669742: mov word ptr [ecx + 8], dx */ W16((u32)(r_ecx+0x8u), (u16)r_edx);
    /* 00669746: mov eax, ecx */ r_eax = r_ecx;
    /* 00669748: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0066974b: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00669752: mov esp, ebp */ r_esp = r_ebp;
    /* 00669754: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00669755: ret 8 */ FN_RET(0x006696a4); r_esp += 12; return;
L_00669758:; BB(0x00669758);
    /* 00669758: mov ecx, dword ptr [0xa8fcbc] */ r_ecx = R32((u32)(0xa8fcbcu));
    /* 0066975e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669760: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x669765u); f_005b8610();
    /* 00669765: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00669768: mov ecx, dword ptr [0xa8fcbc] */ r_ecx = R32((u32)(0xa8fcbcu));
    /* 0066976e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00669770: mov dword ptr [edx + 0xd0], eax */ W32((u32)(r_edx+0xd0u), r_eax);
    /* 00669776: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x66977bu); f_005b8610();
    /* 0066977b: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0066977e: mov ecx, dword ptr [0xa8fcbc] */ r_ecx = R32((u32)(0xa8fcbcu));
    /* 00669784: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669786: mov dword ptr [edx + 0xd4], eax */ W32((u32)(r_edx+0xd4u), r_eax);
    /* 0066978c: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x669791u); f_005b8638();
    /* 00669791: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00669794: mov dword ptr [edx + 0xd8], eax */ W32((u32)(r_edx+0xd8u), r_eax);
    /* 0066979a: mov eax, dword ptr [0xa8fcb8] */ r_eax = R32((u32)(0xa8fcb8u));
    /* 0066979f: mov dword ptr [edx + 0xdc], eax */ W32((u32)(r_edx+0xdcu), r_eax);
    /* 006697a5: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x6697aau); f_006dc358();
    /* 006697aa: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006697ad: je 0x6697cf */ if (fZ) goto L_006697cf;
L_006697af:; BB(0x006697af);
    /* 006697af: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 006697b2: mov dword ptr [eax + 0xc4], 0 */ W32((u32)(r_eax+0xc4u), 0x0u);
L_006697bc:; BB(0x006697bc);
    /* 006697bc: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 006697bf: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006697c2: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006697c9: mov esp, ebp */ r_esp = r_ebp;
    /* 006697cb: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006697cc: ret 8 */ FN_RET(0x006696a4); r_esp += 12; return;
L_006697cf:; BB(0x006697cf);
    /* 006697cf: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
    /* 006697d6: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 006697db: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x6697e0u); f_008581c5();
    /* 006697e0: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 006697e3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006697e6: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 006697e9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006697eb: je 0x669824 */ if (fZ) goto L_00669824;
L_006697ed:; BB(0x006697ed);
    /* 006697ed: mov dword ptr [ebp - 0x2c], 1 */ W32((u32)(r_ebp+0xffffffd4u), 0x1u);
    /* 006697f4: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 006697fb: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00669800: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00669803: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00669806: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00669809: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066980a: call 0x640fb4 */ r_esp -= 4; W32(r_esp, 0x66980fu); f_00640fb4();
    /* 0066980f: mov dword ptr [ebp - 0x2c], 0 */ W32((u32)(r_ebp+0xffffffd4u), 0x0u);
L_00669816:; BB(0x00669816);
    /* 00669816: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 00669819: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 0066981c: mov dword ptr [eax + 0xc4], edx */ W32((u32)(r_eax+0xc4u), r_edx);
    /* 00669822: jmp 0x6697bc */ goto L_006697bc;
L_00669824:; BB(0x00669824);
    /* 00669824: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00669826: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00669829: jmp 0x669816 */ goto L_00669816;
}

void f_0066982c(void) /* sub_66982C */
{
    FN_ENTER(0x0066982c);
    /* 0066982c: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0066982d: mov esi, ecx */ r_esi = r_ecx;
    /* 0066982f: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00669833: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00669837: mov ecx, esi */ r_ecx = r_esi;
    /* 00669839: call 0x668b74 */ r_esp -= 4; W32(r_esp, 0x66983eu); f_00668b74();
    /* 0066983e: mov dword ptr [esi], 0xb350e0 */ W32((u32)(r_esi), 0xb350e0u);
    /* 00669844: mov eax, dword ptr [0x9c953c] */ r_eax = R32((u32)(0x9c953cu));
    /* 00669849: mov edx, dword ptr [0xa8fcb4] */ r_edx = R32((u32)(0xa8fcb4u));
    /* 0066984f: mov dword ptr [esi + 4], eax */ W32((u32)(r_esi+0x4u), r_eax);
    /* 00669852: mov eax, dword ptr [esi + 0x84] */ r_eax = R32((u32)(r_esi+0x84u));
    /* 00669858: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 0066985a: jne 0x669864 */ if (!fZ) goto L_00669864;
L_0066985c:; BB(0x0066985c);
    /* 0066985c: mov dword ptr [esi + 0xc0], eax */ W32((u32)(r_esi+0xc0u), r_eax);
    /* 00669862: jmp 0x669872 */ goto L_00669872;
L_00669864:; BB(0x00669864);
    /* 00669864: mov eax, dword ptr [0xaafca0] */ r_eax = R32((u32)(0xaafca0u));
    /* 00669869: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066986c: mov dword ptr [esi + 0xc0], eax */ W32((u32)(r_esi+0xc0u), r_eax);
L_00669872:; BB(0x00669872);
    /* 00669872: mov dword ptr [esi + 0xc4], 0 */ W32((u32)(r_esi+0xc4u), 0x0u);
    /* 0066987c: mov eax, esi */ r_eax = r_esi;
    /* 0066987e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066987f: ret 8 */ FN_RET(0x0066982c); r_esp += 12; return;
}

void f_00669884(void) /* sub_669884 */
{
    FN_ENTER(0x00669884);
    /* 00669884: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00669887: fld dword ptr [0x939a2c] */ FPUSH(R_F32((u32)(0x939a2cu)));
    /* 0066988d: fadd dword ptr [ecx + 0xc8] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xc8u));
    /* 00669893: mov edx, dword ptr [ecx + 0xd8] */ r_edx = R32((u32)(r_ecx+0xd8u));
    /* 00669899: fst dword ptr [ecx + 0xc8] */ W_F32((u32)(r_ecx+0xc8u), ST(0));
    /* 0066989f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 006698a2: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006698a5: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 006698a8: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 006698ab: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 006698ae: fadd dword ptr [eax*4 + 0x9399a8] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x9399a8u));
    /* 006698b5: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 006698b7: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006698b9: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006698ba: jae 0x6698c6 */ if (!fC) goto L_006698c6;
L_006698bc:; BB(0x006698bc);
    /* 006698bc: mov dword ptr [ecx + 0xc8], 0 */ W32((u32)(r_ecx+0xc8u), 0x0u);
L_006698c6:; BB(0x006698c6);
    /* 006698c6: mov eax, dword ptr [ecx + 0xcc] */ r_eax = R32((u32)(r_ecx+0xccu));
    /* 006698cc: add eax, 0x150 */ {  u32 a = r_eax; u32 b = 0x150u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006698d1: mov dword ptr [ecx + 0xcc], eax */ W32((u32)(r_ecx+0xccu), r_eax);
    /* 006698d7: call 0x6698e0 */ r_esp -= 4; W32(r_esp, 0x6698dcu); f_006698e0();
    /* 006698dc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 006698df: ret  */ FN_RET(0x00669884); r_esp += 4; return;
}

void f_006698e0(void) /* sub_6698E0 */
{
    FN_ENTER(0x006698e0);
    /* 006698e0: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006698e1: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006698e2: mov edi, ecx */ r_edi = r_ecx;
    /* 006698e4: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 006698eb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006698ec: push dword ptr [edi + 0xac] */ { u32 v = R32((u32)(r_edi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 006698f2: mov ecx, edi */ r_ecx = r_edi;
    /* 006698f4: call 0x669a58 */ r_esp -= 4; W32(r_esp, 0x6698f9u); f_00669a58();
    /* 006698f9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006698fb: je 0x669a49 */ if (fZ) goto L_00669a49;
L_00669901:; BB(0x00669901);
    /* 00669901: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00669903: mov ecx, edi */ r_ecx = r_edi;
    /* 00669905: call dword ptr [eax + 0x38] */ { u32 t = R32((u32)(r_eax+0x38u)); r_esp -= 4; W32(r_esp, 0x669908u); call_ind(t); }
    /* 00669908: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066990a: jne 0x669975 */ if (!fZ) goto L_00669975;
L_0066990c:; BB(0x0066990c);
    /* 0066990c: mov ecx, dword ptr [edi + 0xb0] */ r_ecx = R32((u32)(r_edi+0xb0u));
    /* 00669912: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00669914: je 0x669972 */ if (fZ) goto L_00669972;
L_00669916:; BB(0x00669916);
    /* 00669916: call 0x7127b0 */ r_esp -= 4; W32(r_esp, 0x66991bu); f_007127b0();
    /* 0066991b: movzx eax, word ptr [edi + 0xb8] */ r_eax = (u32)R16((u32)(r_edi+0xb8u));
    /* 00669922: mov dword ptr [edi + 0xb0], 0 */ W32((u32)(r_edi+0xb0u), 0x0u);
    /* 0066992c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0066992d: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x669932u); f_0068d5a8();
    /* 00669932: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00669933: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669935: je 0x669943 */ if (fZ) goto L_00669943;
L_00669937:; BB(0x00669937);
    /* 00669937: mov edx, dword ptr [0xa0f674] */ r_edx = R32((u32)(0xa0f674u));
    /* 0066993d: or dword ptr [eax + 0x630], edx */ { u32 ad = (u32)(r_eax+0x630u);  u32 a = R32(ad); u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; W32(ad, r);  }
L_00669943:; BB(0x00669943);
    /* 00669943: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00669949: mov eax, 0xffff */ r_eax = 0xffffu;
    /* 0066994e: mov word ptr [edi + 0xb8], ax */ W16((u32)(r_edi+0xb8u), (u16)r_eax);
    /* 00669955: call 0x716ba0 */ r_esp -= 4; W32(r_esp, 0x66995au); f_00716ba0();
    /* 0066995a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0066995b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066995d: je 0x66996a */ if (fZ) goto L_0066996a;
L_0066995f:; BB(0x0066995f);
    /* 0066995f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669961: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x669966u); f_00791748();
    /* 00669966: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00669967: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00669968: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00669969: ret  */ FN_RET(0x006698e0); r_esp += 4; return;
L_0066996a:; BB(0x0066996a);
    /* 0066996a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0066996c: call 0x791748 */ r_esp -= 4; W32(r_esp, 0x669971u); f_00791748();
    /* 00669971: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00669972:; BB(0x00669972);
    /* 00669972: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00669973: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00669974: ret  */ FN_RET(0x006698e0); r_esp += 4; return;
L_00669975:; BB(0x00669975);
    /* 00669975: mov edx, dword ptr [edi + 0xb0] */ r_edx = R32((u32)(r_edi+0xb0u));
    /* 0066997b: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066997d: je 0x6699a0 */ if (fZ) goto L_006699a0;
L_0066997f:; BB(0x0066997f);
    /* 0066997f: movzx eax, word ptr [edx + 8] */ r_eax = (u32)R16((u32)(r_edx+0x8u));
    /* 00669983: and eax, 0xfffb */ {  u32 a = r_eax; u32 b = 0xfffbu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00669988: mov word ptr [edx + 8], ax */ W16((u32)(r_edx+0x8u), (u16)r_eax);
    /* 0066998c: mov esi, dword ptr [edi + 0xb0] */ r_esi = R32((u32)(r_edi+0xb0u));
    /* 00669992: movzx edx, word ptr [esi + 8] */ r_edx = (u32)R16((u32)(r_esi+0x8u));
    /* 00669996: and edx, 0xffef */ {  u32 a = r_edx; u32 b = 0xffefu; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 0066999c: mov word ptr [esi + 8], dx */ W16((u32)(r_esi+0x8u), (u16)r_edx);
L_006699a0:; BB(0x006699a0);
    /* 006699a0: movzx eax, word ptr [0xa9c4f4] */ r_eax = (u32)R16((u32)(0xa9c4f4u));
    /* 006699a7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006699a8: push dword ptr [edi + 0xac] */ { u32 v = R32((u32)(r_edi+0xacu)); r_esp -= 4; W32(r_esp, v); }
    /* 006699ae: mov ecx, edi */ r_ecx = r_edi;
    /* 006699b0: call 0x669a58 */ r_esp -= 4; W32(r_esp, 0x6699b5u); f_00669a58();
    /* 006699b5: mov esi, eax */ r_esi = r_eax;
    /* 006699b7: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006699b9: je 0x669a35 */ if (fZ) goto L_00669a35;
L_006699bb:; BB(0x006699bb);
    /* 006699bb: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 006699be: test edx, 0x800 */ {  u32 a = r_edx; u32 b = 0x800u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006699c4: jne 0x669a35 */ if (!fZ) goto L_00669a35;
L_006699c6:; BB(0x006699c6);
    /* 006699c6: push dword ptr [0xa9c4f4] */ { u32 v = R32((u32)(0xa9c4f4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006699cc: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 006699ce: mov ecx, edi */ r_ecx = r_edi;
    /* 006699d0: call dword ptr [edx + 0x34] */ { u32 t = R32((u32)(r_edx+0x34u)); r_esp -= 4; W32(r_esp, 0x6699d3u); call_ind(t); }
    /* 006699d3: mov ecx, esi */ r_ecx = r_esi;
    /* 006699d5: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x6699dau); f_00694780();
    /* 006699da: push dword ptr [0xa0f678] */ { u32 v = R32((u32)(0xa0f678u)); r_esp -= 4; W32(r_esp, v); }
    /* 006699e0: lea edx, [eax + eax*4] */ r_edx = (u32)(r_eax+r_eax*4);
    /* 006699e3: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006699e5: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006699e7: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006699e9: lea ecx, [edx + edx + 0xaae75c] */ r_ecx = (u32)(r_edx+r_edx+0xaae75cu);
    /* 006699f0: call 0x7c1160 */ r_esp -= 4; W32(r_esp, 0x6699f5u); f_007c1160();
    /* 006699f5: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006699f7: je 0x669a0d */ if (fZ) goto L_00669a0d;
L_006699f9:; BB(0x006699f9);
    /* 006699f9: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006699fb: mov dword ptr [edi + 0xbc], 1 */ W32((u32)(r_edi+0xbcu), 0x1u);
    /* 00669a05: mov ecx, edi */ r_ecx = r_edi;
    /* 00669a07: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x669a0au); call_ind(t); }
    /* 00669a0a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00669a0b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00669a0c: ret  */ FN_RET(0x006698e0); r_esp += 4; return;
L_00669a0d:; BB(0x00669a0d);
    /* 00669a0d: mov ecx, esi */ r_ecx = r_esi;
    /* 00669a0f: call 0x694780 */ r_esp -= 4; W32(r_esp, 0x669a14u); f_00694780();
    /* 00669a14: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00669a15: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00669a17: mov ecx, edi */ r_ecx = r_edi;
    /* 00669a19: call dword ptr [edx + 0x40] */ { u32 t = R32((u32)(r_edx+0x40u)); r_esp -= 4; W32(r_esp, 0x669a1cu); call_ind(t); }
    /* 00669a1c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00669a1e: jne 0x669a23 */ if (!fZ) goto L_00669a23;
L_00669a20:; BB(0x00669a20);
    /* 00669a20: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00669a21: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00669a22: ret  */ FN_RET(0x006698e0); r_esp += 4; return;
L_00669a23:; BB(0x00669a23);
    /* 00669a23: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00669a25: mov ecx, edi */ r_ecx = r_edi;
    /* 00669a27: call dword ptr [edx + 0x30] */ { u32 t = R32((u32)(r_edx+0x30u)); r_esp -= 4; W32(r_esp, 0x669a2au); call_ind(t); }
    /* 00669a2a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00669a2b: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00669a2d: mov ecx, edi */ r_ecx = r_edi;
    /* 00669a2f: call dword ptr [edx + 0x44] */ { u32 t = R32((u32)(r_edx+0x44u)); r_esp -= 4; W32(r_esp, 0x669a32u); call_ind(t); }
    /* 00669a32: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00669a33: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00669a34: ret  */ FN_RET(0x006698e0); r_esp += 4; return;
L_00669a35:; BB(0x00669a35);
    /* 00669a35: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00669a37: mov dword ptr [edi + 0xbc], 0 */ W32((u32)(r_edi+0xbcu), 0x0u);
    /* 00669a41: mov ecx, edi */ r_ecx = r_edi;
    /* 00669a43: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x669a46u); call_ind(t); }
    /* 00669a46: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00669a47: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00669a48: ret  */ FN_RET(0x006698e0); r_esp += 4; return;
L_00669a49:; BB(0x00669a49);
    /* 00669a49: mov dword ptr [edi + 0xbc], 0 */ W32((u32)(r_edi+0xbcu), 0x0u);
    /* 00669a53: jmp 0x669901 */ goto L_00669901;
}

void f_00669a3b(void)
{
    FN_ENTER(0x00669a3b);
    /* 00669a3b: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00669a3d: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00669a3f: add byte ptr [eax], al */ { u32 ad = (u32)(r_eax);  u32 a = R8(ad); u32 b = (u8)r_eax; u32 r = (a + b) & 0xffu; W8(ad, r);  }
    /* 00669a41: mov ecx, edi */ r_ecx = r_edi;
    /* 00669a43: call dword ptr [eax + 0x30] */ { u32 t = R32((u32)(r_eax+0x30u)); r_esp -= 4; W32(r_esp, 0x669a46u); call_ind(t); }
    /* 00669a46: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00669a47: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00669a48: ret  */ FN_RET(0x00669a3b); r_esp += 4; return;
}

void f_00669a58(void) /* sub_669A58 */
{
    FN_ENTER(0x00669a58);
    /* 00669a58: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00669a59: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00669a5a: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00669a5b: mov esi, ecx */ r_esi = r_ecx;
    /* 00669a5d: fld dword ptr [esp + 0x10] */ FPUSH(R_F32((u32)(r_esp+0x10u)));
    /* 00669a61: movzx eax, word ptr [esp + 0x14] */ r_eax = (u32)R16((u32)(r_esp+0x14u));
    /* 00669a66: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 00669a69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00669a6a: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x669a6fu); f_0068d5a8();
    /* 00669a6f: mov ebp, eax */ r_ebp = r_eax;
    /* 00669a71: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00669a74: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669a76: je 0x669aa8 */ if (fZ) goto L_00669aa8;
L_00669a78:; BB(0x00669a78);
    /* 00669a78: add esi, 0x38 */ {  u32 a = r_esi; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00669a7b: lea edx, [ebp + 0x38] */ r_edx = (u32)(r_ebp+0x38u);
    /* 00669a7e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00669a7f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00669a80: call 0x78ea50 */ r_esp -= 4; W32(r_esp, 0x669a85u); f_0078ea50();
    /* 00669a85: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00669a88: fld dword ptr [esp] */ FPUSH(R_F32((u32)(r_esp)));
    /* 00669a8b: fmul st(0) */ ST(0) = ST(0) * ST(0);
    /* 00669a8d: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00669a8f: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00669a91: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00669a92: jbe 0x669aa8 */ if ((fC||fZ)) goto L_00669aa8;
L_00669a94:; BB(0x00669a94);
    /* 00669a94: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00669a96: call 0x689410 */ r_esp -= 4; W32(r_esp, 0x669a9bu); f_00689410();
    /* 00669a9b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00669a9e: je 0x669aa8 */ if (fZ) goto L_00669aa8;
L_00669aa0:; BB(0x00669aa0);
    /* 00669aa0: mov eax, ebp */ r_eax = r_ebp;
    /* 00669aa2: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00669aa3: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00669aa4: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00669aa5: ret 8 */ FN_RET(0x00669a58); r_esp += 12; return;
L_00669aa8:; BB(0x00669aa8);
    /* 00669aa8: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00669aaa: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00669aab: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00669aac: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00669aad: ret 8 */ FN_RET(0x00669a58); r_esp += 12; return;
}

void f_00669ab0(void) /* sub_669AB0 */
{
    FN_ENTER(0x00669ab0);
    /* 00669ab0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00669ab1: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00669ab2: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00669ab3: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00669ab5: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00669aba: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00669abc: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00669abe: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00669ac3: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x669ac6u); call_ind(t); }
    /* 00669ac6: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00669ac8: je 0x669bd1 */ if (fZ) goto L_00669bd1;
L_00669ace:; BB(0x00669ace);
    /* 00669ace: mov esi, dword ptr [ebx + 0xd4] */ r_esi = R32((u32)(r_ebx+0xd4u));
    /* 00669ad4: mov esi, dword ptr [esi + 0x2c] */ r_esi = R32((u32)(r_esi+0x2cu));
    /* 00669ad7: mov eax, 3 */ r_eax = 0x3u;
    /* 00669adc: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 00669ae0: mov edx, 2 */ r_edx = 0x2u;
    /* 00669ae5: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 00669aea: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669aec: je 0x669b10 */ if (fZ) goto L_00669b10;
L_00669aee:; BB(0x00669aee);
    /* 00669aee: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00669af1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669af3: je 0x669b09 */ if (fZ) goto L_00669b09;
L_00669af5:; BB(0x00669af5);
    /* 00669af5: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 00669afb: movzx edx, word ptr [esp + eax*2] */ r_edx = (u32)R16((u32)(r_esp+r_eax*2));
    /* 00669aff: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00669b00: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00669b01: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x669b06u); f_0081a588();
    /* 00669b06: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00669b09:; BB(0x00669b09);
    /* 00669b09: mov esi, dword ptr [esi + 0x2c] */ r_esi = R32((u32)(r_esi+0x2cu));
    /* 00669b0c: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669b0e: jne 0x669aee */ if (!fZ) goto L_00669aee;
L_00669b10:; BB(0x00669b10);
    /* 00669b10: mov esi, dword ptr [ebx + 0xd0] */ r_esi = R32((u32)(r_ebx+0xd0u));
    /* 00669b16: mov ecx, dword ptr [ebx + 0xdc] */ r_ecx = R32((u32)(r_ebx+0xdcu));
    /* 00669b1c: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x669b21u); f_00829cc8();
    /* 00669b21: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x669b26u); f_00835068();
    /* 00669b26: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x669b2bu); f_0082d7b0();
    /* 00669b2b: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00669b2e: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x669b33u); f_0082d838();
    /* 00669b33: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00669b36: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00669b38: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x669b3du); f_0082d8bc();
    /* 00669b3d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x669b42u); f_0082d7b0();
    /* 00669b42: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 00669b45: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x669b4au); f_0082d838();
    /* 00669b4a: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00669b4d: call 0x835120 */ r_esp -= 4; W32(r_esp, 0x669b52u); f_00835120();
    /* 00669b52: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x669b57u); f_0082dbac();
    /* 00669b57: mov esi, dword ptr [esi + 0x2c] */ r_esi = R32((u32)(r_esi+0x2cu));
    /* 00669b5a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669b5c: je 0x669b9c */ if (fZ) goto L_00669b9c;
L_00669b5e:; BB(0x00669b5e);
    /* 00669b5e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x669b63u); f_0082d7b0();
    /* 00669b63: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 00669b66: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x669b6bu); f_0082d838();
    /* 00669b6b: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00669b6e: push dword ptr [esi + 0x18] */ { u32 v = R32((u32)(r_esi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00669b71: mov edx, dword ptr [esi + 0x14] */ r_edx = R32((u32)(r_esi+0x14u));
    /* 00669b74: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00669b76: call 0x82df5c */ r_esp -= 4; W32(r_esp, 0x669b7bu); f_0082df5c();
    /* 00669b7b: mov edx, dword ptr [ebx + 0xcc] */ r_edx = R32((u32)(r_ebx+0xccu));
    /* 00669b81: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00669b83: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x669b88u); f_0082e9e4();
    /* 00669b88: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00669b8b: call 0x835120 */ r_esp -= 4; W32(r_esp, 0x669b90u); f_00835120();
    /* 00669b90: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x669b95u); f_0082da80();
    /* 00669b95: mov esi, dword ptr [esi + 0x30] */ r_esi = R32((u32)(r_esi+0x30u));
    /* 00669b98: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669b9a: jne 0x669b5e */ if (!fZ) goto L_00669b5e;
L_00669b9c:; BB(0x00669b9c);
    /* 00669b9c: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x669ba1u); f_0082dab0();
    /* 00669ba1: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x669ba6u); f_0082da80();
    /* 00669ba6: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x669babu); f_0082dbac();
    /* 00669bab: push dword ptr [ebx + 0xc8] */ { u32 v = R32((u32)(r_ebx+0xc8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00669bb1: mov ecx, dword ptr [ebx + 0xd4] */ r_ecx = R32((u32)(r_ebx+0xd4u));
    /* 00669bb7: mov edx, dword ptr [ebx + 0xd8] */ r_edx = R32((u32)(r_ebx+0xd8u));
    /* 00669bbd: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x669bc2u); f_00835574();
    /* 00669bc2: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x669bc7u); f_0082dab0();
    /* 00669bc7: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x669bccu); f_0082da80();
    /* 00669bcc: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x669bd1u); f_00835078();
L_00669bd1:; BB(0x00669bd1);
    /* 00669bd1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00669bd2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00669bd3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00669bd4: ret  */ FN_RET(0x00669ab0); r_esp += 4; return;
}

void f_00669bd8(void) /* sub_669BD8 */
{
    FN_ENTER(0x00669bd8);
    /* 00669bd8: mov eax, dword ptr [ecx + 0x84] */ r_eax = R32((u32)(r_ecx+0x84u));
    /* 00669bde: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00669bdf: mov dword ptr [ecx + 0xc0], eax */ W32((u32)(r_ecx+0xc0u), r_eax);
    /* 00669be5: push 0x939b48 */ { u32 v = 0x939b48u; r_esp -= 4; W32(r_esp, v); }
    /* 00669bea: push 0x130020 */ { u32 v = 0x130020u; r_esp -= 4; W32(r_esp, v); }
    /* 00669bef: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x669bf4u); f_0061cdb0();
    /* 00669bf4: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00669bf7: ret  */ FN_RET(0x00669bd8); r_esp += 4; return;
}

void f_00669bf8(void) /* sub_669BF8 */
{
    FN_ENTER(0x00669bf8);
    /* 00669bf8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00669bf9: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00669bfa: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00669bfb: mov edi, ecx */ r_edi = r_ecx;
    /* 00669bfd: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00669c01: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00669c07: call 0x80c2a4 */ r_esp -= 4; W32(r_esp, 0x669c0cu); f_0080c2a4();
    /* 00669c0c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00669c0d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00669c0e: push dword ptr [edi + 0xc0] */ { u32 v = R32((u32)(r_edi+0xc0u)); r_esp -= 4; W32(r_esp, v); }
    /* 00669c14: mov ecx, 0xac9d4c */ r_ecx = 0xac9d4cu;
    /* 00669c19: call 0x815590 */ r_esp -= 4; W32(r_esp, 0x669c1eu); f_00815590();
    /* 00669c1e: call 0x7a6114 */ r_esp -= 4; W32(r_esp, 0x669c23u); f_007a6114();
    /* 00669c23: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669c25: je 0x669cac */ if (fZ) goto L_00669cac;
L_00669c2b:; BB(0x00669c2b);
    /* 00669c2b: mov eax, dword ptr [edi + 0xc8] */ r_eax = R32((u32)(r_edi+0xc8u));
    /* 00669c31: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00669c34: jle 0x669c42 */ if ((fZ||fS!=fO)) goto L_00669c42;
L_00669c36:; BB(0x00669c36);
    /* 00669c36: mov dword ptr [ebp + 0x3d4], eax */ W32((u32)(r_ebp+0x3d4u), r_eax);
    /* 00669c3c: mov eax, dword ptr [edi + 0xc8] */ r_eax = R32((u32)(r_edi+0xc8u));
L_00669c42:; BB(0x00669c42);
    /* 00669c42: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00669c45: jle 0x669c8d */ if ((fZ||fS!=fO)) goto L_00669c8d;
L_00669c47:; BB(0x00669c47);
    /* 00669c47: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00669c4a: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00669c4c: mov esi, edi */ r_esi = r_edi;
    /* 00669c4e: mov edi, eax */ r_edi = r_eax;
L_00669c50:; BB(0x00669c50);
    /* 00669c50: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00669c51: call 0x68d5a8 */ r_esp -= 4; W32(r_esp, 0x669c56u); f_0068d5a8();
    /* 00669c56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00669c57: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669c59: je 0x669c82 */ if (fZ) goto L_00669c82;
L_00669c5b:; BB(0x00669c5b);
    /* 00669c5b: movsx edx, word ptr [eax + 0x32c] */ r_edx = (u32)(i32)(i16)R16((u32)(r_eax+0x32cu));
    /* 00669c62: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669c65: jne 0x669c82 */ if (!fZ) goto L_00669c82;
L_00669c67:; BB(0x00669c67);
    /* 00669c67: movzx edx, word ptr [eax + 0x750] */ r_edx = (u32)R16((u32)(r_eax+0x750u));
    /* 00669c6e: cmp edx, 0xffff */ {  u32 a = r_edx; u32 b = 0xffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669c74: je 0x669c82 */ if (fZ) goto L_00669c82;
L_00669c76:; BB(0x00669c76);
    /* 00669c76: mov edx, dword ptr [esi + 0xc8] */ r_edx = R32((u32)(r_esi+0xc8u));
    /* 00669c7c: mov dword ptr [eax + 0x3d4], edx */ W32((u32)(r_eax+0x3d4u), r_edx);
L_00669c82:; BB(0x00669c82);
    /* 00669c82: add edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00669c85: cmp edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00669c88: jl 0x669c50 */ if ((fS!=fO)) goto L_00669c50;
L_00669c8a:; BB(0x00669c8a);
    /* 00669c8a: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_00669c8d:; BB(0x00669c8d);
    /* 00669c8d: push dword ptr [0xac9d58] */ { u32 v = R32((u32)(0xac9d58u)); r_esp -= 4; W32(r_esp, v); }
    /* 00669c93: call 0x7b41f4 */ r_esp -= 4; W32(r_esp, 0x669c98u); f_007b41f4();
    /* 00669c98: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00669c99: push dword ptr [0xac9d58] */ { u32 v = R32((u32)(0xac9d58u)); r_esp -= 4; W32(r_esp, v); }
    /* 00669c9f: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00669ca1: call 0x692398 */ r_esp -= 4; W32(r_esp, 0x669ca6u); f_00692398();
    /* 00669ca6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00669ca7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00669ca8: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00669ca9: ret 4 */ FN_RET(0x00669bf8); r_esp += 8; return;
L_00669cac:; BB(0x00669cac);
    /* 00669cac: mov eax, dword ptr [edi + 0xc8] */ r_eax = R32((u32)(r_edi+0xc8u));
    /* 00669cb2: jmp 0x669c42 */ goto L_00669c42;
}

void f_00669cb4(void) /* sub_669CB4 */
{
    FN_ENTER(0x00669cb4);
    /* 00669cb4: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00669cb5: mov ebp, esp */ r_ebp = r_esp;
    /* 00669cb7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00669cb9: push 0x8e8b52 */ { u32 v = 0x8e8b52u; r_esp -= 4; W32(r_esp, v); }
    /* 00669cbe: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00669cc4: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00669cc5: mov dword ptr fs:[0], esp */ W32((u32)(TEB), r_esp);
    /* 00669ccc: sub esp, 0x2c */ {  u32 a = r_esp; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00669ccf: mov dword ptr [ebp - 0x10], esp */ W32((u32)(r_ebp+0xfffffff0u), r_esp);
    /* 00669cd2: mov dword ptr [ebp - 0x20], edi */ W32((u32)(r_ebp+0xffffffe0u), r_edi);
    /* 00669cd5: mov dword ptr [ebp - 0x1c], esi */ W32((u32)(r_ebp+0xffffffe4u), r_esi);
    /* 00669cd8: mov dword ptr [ebp - 0x18], ebx */ W32((u32)(r_ebp+0xffffffe8u), r_ebx);
    /* 00669cdb: push dword ptr [ebp + 0xc] */ { u32 v = R32((u32)(r_ebp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 00669cde: push dword ptr [ebp + 8] */ { u32 v = R32((u32)(r_ebp+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00669ce1: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00669ce4: call 0x66982c */ r_esp -= 4; W32(r_esp, 0x669ce9u); f_0066982c();
    /* 00669ce9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00669cf0: mov ebx, dword ptr [ebp - 0x30] */ r_ebx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00669cf3: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 00669cf9: fld dword ptr [ebx + 0x68] */ FPUSH(R_F32((u32)(r_ebx+0x68u)));
    /* 00669cfc: xor edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a ^ b) & 0xffffffffu; r_edi = r;  }
    /* 00669cfe: mov dword ptr [ebx + 0xd0], edi */ W32((u32)(r_ebx+0xd0u), r_edi);
    /* 00669d04: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 00669d05: mov dword ptr [ebx], 0xb351a0 */ W32((u32)(r_ebx), 0xb351a0u);
    /* 00669d0b: mov esi, dword ptr [0x9c9544] */ r_esi = R32((u32)(0x9c9544u));
    /* 00669d11: mov dword ptr [ebx + 0xcc], 0 */ W32((u32)(r_ebx+0xccu), 0x0u);
    /* 00669d1b: mov dword ptr [ebx + 4], esi */ W32((u32)(r_ebx+0x4u), r_esi);
    /* 00669d1e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00669d1f: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00669d21: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00669d23: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00669d26: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00669d28: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00669d2a: mov dword ptr [ebx + 0x8c], eax */ W32((u32)(r_ebx+0x8cu), r_eax);
    /* 00669d30: mov ecx, dword ptr [0xa8fcbc] */ r_ecx = R32((u32)(0xa8fcbcu));
    /* 00669d36: fnstcw word ptr [ebp - 0x2c] */ W16((u32)(r_ebp+0xffffffd4u), fcw);
    /* 00669d39: movzx eax, word ptr [ebp - 0x2c] */ r_eax = (u32)R16((u32)(r_ebp+0xffffffd4u));
    /* 00669d3d: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00669d42: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 00669d45: fldcw word ptr [ebp - 0x24] */ fcw = R16((u32)(r_ebp+0xffffffdcu));
    /* 00669d48: fistp dword ptr [ebx + 0xc8] */ W32((u32)(r_ebx+0xc8u), (u32)fx_int32(ST(0))); FPOP();
    /* 00669d4e: fldcw word ptr [ebp - 0x2c] */ fcw = R16((u32)(r_ebp+0xffffffd4u));
    /* 00669d51: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x669d56u); f_005b8610();
    /* 00669d56: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00669d59: mov ecx, dword ptr [0xa8fcbc] */ r_ecx = R32((u32)(0xa8fcbcu));
    /* 00669d5f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00669d61: mov dword ptr [edx + 0xd4], eax */ W32((u32)(r_edx+0xd4u), r_eax);
    /* 00669d67: call 0x5b8610 */ r_esp -= 4; W32(r_esp, 0x669d6cu); f_005b8610();
    /* 00669d6c: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00669d6f: mov ecx, dword ptr [0xa8fcbc] */ r_ecx = R32((u32)(0xa8fcbcu));
    /* 00669d75: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00669d77: mov dword ptr [edx + 0xd8], eax */ W32((u32)(r_edx+0xd8u), r_eax);
    /* 00669d7d: call 0x5b8638 */ r_esp -= 4; W32(r_esp, 0x669d82u); f_005b8638();
    /* 00669d82: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00669d85: mov dword ptr [edx + 0xdc], eax */ W32((u32)(r_edx+0xdcu), r_eax);
    /* 00669d8b: mov eax, dword ptr [0xa8fcb8] */ r_eax = R32((u32)(0xa8fcb8u));
    /* 00669d90: mov dword ptr [edx + 0xe0], eax */ W32((u32)(r_edx+0xe0u), r_eax);
    /* 00669d96: call 0x6dc358 */ r_esp -= 4; W32(r_esp, 0x669d9bu); f_006dc358();
    /* 00669d9b: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00669d9e: je 0x669dc6 */ if (fZ) goto L_00669dc6;
L_00669da0:; BB(0x00669da0);
    /* 00669da0: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00669da3: mov dword ptr [eax + 0xc4], 0 */ W32((u32)(r_eax+0xc4u), 0x0u);
L_00669dad:; BB(0x00669dad);
    /* 00669dad: mov edi, dword ptr [ebp - 0x20] */ r_edi = R32((u32)(r_ebp+0xffffffe0u));
    /* 00669db0: mov esi, dword ptr [ebp - 0x1c] */ r_esi = R32((u32)(r_ebp+0xffffffe4u));
    /* 00669db3: mov ebx, dword ptr [ebp - 0x18] */ r_ebx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00669db6: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00669db9: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 00669dc0: mov esp, ebp */ r_esp = r_ebp;
    /* 00669dc2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00669dc3: ret 8 */ FN_RET(0x00669cb4); r_esp += 12; return;
L_00669dc6:; BB(0x00669dc6);
    /* 00669dc6: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
    /* 00669dcd: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 00669dd2: call 0x8581c5 */ r_esp -= 4; W32(r_esp, 0x669dd7u); f_008581c5();
    /* 00669dd7: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00669dda: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00669ddd: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00669de0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669de2: je 0x669e1b */ if (fZ) goto L_00669e1b;
L_00669de4:; BB(0x00669de4);
    /* 00669de4: mov dword ptr [ebp - 0x38], 1 */ W32((u32)(r_ebp+0xffffffc8u), 0x1u);
    /* 00669deb: mov dword ptr [ebp - 4], 1 */ W32((u32)(r_ebp+0xfffffffcu), 0x1u);
    /* 00669df2: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00669df7: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00669dfa: add eax, 0x38 */ {  u32 a = r_eax; u32 b = 0x38u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00669dfd: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00669e00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00669e01: call 0x640fb4 */ r_esp -= 4; W32(r_esp, 0x669e06u); f_00640fb4();
    /* 00669e06: mov dword ptr [ebp - 0x38], 0 */ W32((u32)(r_ebp+0xffffffc8u), 0x0u);
L_00669e0d:; BB(0x00669e0d);
    /* 00669e0d: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 00669e10: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00669e13: mov dword ptr [eax + 0xc4], edx */ W32((u32)(r_eax+0xc4u), r_edx);
    /* 00669e19: jmp 0x669dad */ goto L_00669dad;
L_00669e1b:; BB(0x00669e1b);
    /* 00669e1b: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00669e1d: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 00669e20: jmp 0x669e0d */ goto L_00669e0d;
}

void f_00669e24(void) /* sub_669E24 */
{
    FN_ENTER(0x00669e24);
    /* 00669e24: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00669e27: fld dword ptr [0x939a2c] */ FPUSH(R_F32((u32)(0x939a2cu)));
    /* 00669e2d: fadd dword ptr [ecx + 0xcc] */ ST(0) = ST(0) + R_F32((u32)(r_ecx+0xccu));
    /* 00669e33: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 00669e39: fst dword ptr [ecx + 0xcc] */ W_F32((u32)(r_ecx+0xccu), ST(0));
    /* 00669e3f: mov eax, dword ptr [edx + 4] */ r_eax = R32((u32)(r_edx+0x4u));
    /* 00669e42: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00669e45: mov dword ptr [esp], eax */ W32((u32)(r_esp), r_eax);
    /* 00669e48: fild dword ptr [esp] */ FPUSH((long double)(i32)R32((u32)(r_esp)));
    /* 00669e4b: shr eax, 0x1f */ { u32 c = (31u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 00669e4e: fadd dword ptr [eax*4 + 0x9399a0] */ ST(0) = ST(0) + R_F32((u32)(r_eax*4+0x9399a0u));
    /* 00669e55: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00669e57: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00669e59: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00669e5a: jae 0x669e66 */ if (!fC) goto L_00669e66;
L_00669e5c:; BB(0x00669e5c);
    /* 00669e5c: mov dword ptr [ecx + 0xcc], 0 */ W32((u32)(r_ecx+0xccu), 0x0u);
L_00669e66:; BB(0x00669e66);
    /* 00669e66: mov eax, dword ptr [ecx + 0xd0] */ r_eax = R32((u32)(r_ecx+0xd0u));
    /* 00669e6c: add eax, 0x150 */ {  u32 a = r_eax; u32 b = 0x150u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00669e71: mov dword ptr [ecx + 0xd0], eax */ W32((u32)(r_ecx+0xd0u), r_eax);
    /* 00669e77: call 0x6698e0 */ r_esp -= 4; W32(r_esp, 0x669e7cu); f_006698e0();
    /* 00669e7c: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00669e7f: ret  */ FN_RET(0x00669e24); r_esp += 4; return;
}

void f_00669e80(void) /* sub_669E80 */
{
    FN_ENTER(0x00669e80);
    /* 00669e80: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00669e81: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00669e82: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00669e83: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00669e85: push 0x41a00000 */ { u32 v = 0x41a00000u; r_esp -= 4; W32(r_esp, v); }
    /* 00669e8a: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00669e8c: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 00669e8e: push 0x43c80000 */ { u32 v = 0x43c80000u; r_esp -= 4; W32(r_esp, v); }
    /* 00669e93: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x669e96u); call_ind(t); }
    /* 00669e96: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00669e98: je 0x669fa1 */ if (fZ) goto L_00669fa1;
L_00669e9e:; BB(0x00669e9e);
    /* 00669e9e: mov esi, dword ptr [ebx + 0xd8] */ r_esi = R32((u32)(r_ebx+0xd8u));
    /* 00669ea4: mov esi, dword ptr [esi + 0x2c] */ r_esi = R32((u32)(r_esi+0x2cu));
    /* 00669ea7: mov eax, 3 */ r_eax = 0x3u;
    /* 00669eac: mov word ptr [esp], ax */ W16((u32)(r_esp), (u16)r_eax);
    /* 00669eb0: mov edx, 2 */ r_edx = 0x2u;
    /* 00669eb5: mov word ptr [esp + 2], dx */ W16((u32)(r_esp+0x2u), (u16)r_edx);
    /* 00669eba: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669ebc: je 0x669ee0 */ if (fZ) goto L_00669ee0;
L_00669ebe:; BB(0x00669ebe);
    /* 00669ebe: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00669ec1: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669ec3: je 0x669ed9 */ if (fZ) goto L_00669ed9;
L_00669ec5:; BB(0x00669ec5);
    /* 00669ec5: mov eax, dword ptr [ebx + 0x8c] */ r_eax = R32((u32)(r_ebx+0x8cu));
    /* 00669ecb: movzx edx, word ptr [esp + eax*2] */ r_edx = (u32)R16((u32)(r_esp+r_eax*2));
    /* 00669ecf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00669ed0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00669ed1: call 0x81a588 */ r_esp -= 4; W32(r_esp, 0x669ed6u); f_0081a588();
    /* 00669ed6: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00669ed9:; BB(0x00669ed9);
    /* 00669ed9: mov esi, dword ptr [esi + 0x2c] */ r_esi = R32((u32)(r_esi+0x2cu));
    /* 00669edc: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669ede: jne 0x669ebe */ if (!fZ) goto L_00669ebe;
L_00669ee0:; BB(0x00669ee0);
    /* 00669ee0: mov esi, dword ptr [ebx + 0xd4] */ r_esi = R32((u32)(r_ebx+0xd4u));
    /* 00669ee6: mov ecx, dword ptr [ebx + 0xe0] */ r_ecx = R32((u32)(r_ebx+0xe0u));
    /* 00669eec: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x669ef1u); f_00829cc8();
    /* 00669ef1: call 0x835068 */ r_esp -= 4; W32(r_esp, 0x669ef6u); f_00835068();
    /* 00669ef6: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x669efbu); f_0082d7b0();
    /* 00669efb: lea ecx, [ebx + 0x38] */ r_ecx = (u32)(r_ebx+0x38u);
    /* 00669efe: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x669f03u); f_0082d838();
    /* 00669f03: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 00669f06: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00669f08: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x669f0du); f_0082d8bc();
    /* 00669f0d: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x669f12u); f_0082d7b0();
    /* 00669f12: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 00669f15: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x669f1au); f_0082d838();
    /* 00669f1a: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00669f1d: call 0x835120 */ r_esp -= 4; W32(r_esp, 0x669f22u); f_00835120();
    /* 00669f22: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x669f27u); f_0082dbac();
    /* 00669f27: mov esi, dword ptr [esi + 0x2c] */ r_esi = R32((u32)(r_esi+0x2cu));
    /* 00669f2a: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669f2c: je 0x669f6c */ if (fZ) goto L_00669f6c;
L_00669f2e:; BB(0x00669f2e);
    /* 00669f2e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x669f33u); f_0082d7b0();
    /* 00669f33: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 00669f36: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x669f3bu); f_0082d838();
    /* 00669f3b: push dword ptr [esi + 0x1c] */ { u32 v = R32((u32)(r_esi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00669f3e: push dword ptr [esi + 0x18] */ { u32 v = R32((u32)(r_esi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00669f41: mov edx, dword ptr [esi + 0x14] */ r_edx = R32((u32)(r_esi+0x14u));
    /* 00669f44: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00669f46: call 0x82df5c */ r_esp -= 4; W32(r_esp, 0x669f4bu); f_0082df5c();
    /* 00669f4b: mov edx, dword ptr [ebx + 0xd0] */ r_edx = R32((u32)(r_ebx+0xd0u));
    /* 00669f51: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00669f53: call 0x82e9e4 */ r_esp -= 4; W32(r_esp, 0x669f58u); f_0082e9e4();
    /* 00669f58: mov ecx, dword ptr [esi + 4] */ r_ecx = R32((u32)(r_esi+0x4u));
    /* 00669f5b: call 0x835120 */ r_esp -= 4; W32(r_esp, 0x669f60u); f_00835120();
    /* 00669f60: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x669f65u); f_0082da80();
    /* 00669f65: mov esi, dword ptr [esi + 0x30] */ r_esi = R32((u32)(r_esi+0x30u));
    /* 00669f68: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00669f6a: jne 0x669f2e */ if (!fZ) goto L_00669f2e;
L_00669f6c:; BB(0x00669f6c);
    /* 00669f6c: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x669f71u); f_0082dab0();
    /* 00669f71: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x669f76u); f_0082da80();
    /* 00669f76: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x669f7bu); f_0082dbac();
    /* 00669f7b: push dword ptr [ebx + 0xcc] */ { u32 v = R32((u32)(r_ebx+0xccu)); r_esp -= 4; W32(r_esp, v); }
    /* 00669f81: mov ecx, dword ptr [ebx + 0xd8] */ r_ecx = R32((u32)(r_ebx+0xd8u));
    /* 00669f87: mov edx, dword ptr [ebx + 0xdc] */ r_edx = R32((u32)(r_ebx+0xdcu));
    /* 00669f8d: call 0x835574 */ r_esp -= 4; W32(r_esp, 0x669f92u); f_00835574();
    /* 00669f92: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x669f97u); f_0082dab0();
    /* 00669f97: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x669f9cu); f_0082da80();
    /* 00669f9c: call 0x835078 */ r_esp -= 4; W32(r_esp, 0x669fa1u); f_00835078();
L_00669fa1:; BB(0x00669fa1);
    /* 00669fa1: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00669fa2: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00669fa3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00669fa4: ret  */ FN_RET(0x00669e80); r_esp += 4; return;
}

void f_00669fa8(void) /* sub_669FA8 */
{
    FN_ENTER(0x00669fa8);
    /* 00669fa8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00669fa9: sub esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00669fac: mov esi, ecx */ r_esi = r_ecx;
    /* 00669fae: mov ecx, esi */ r_ecx = r_esi;
    /* 00669fb0: call 0x669bd8 */ r_esp -= 4; W32(r_esp, 0x669fb5u); f_00669bd8();
    /* 00669fb5: fld dword ptr [0x939a0c] */ FPUSH(R_F32((u32)(0x939a0cu)));
    /* 00669fbb: fld dword ptr [esi + 0x68] */ FPUSH(R_F32((u32)(r_esi+0x68u)));
    /* 00669fbe: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 00669fc0: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00669fc2: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00669fc4: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00669fc5: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00669fc7: ja 0x669fcb */ if ((!fC&&!fZ)) goto L_00669fcb;
L_00669fc9:; BB(0x00669fc9);
    /* 00669fc9: fst st(1) */ ST(1) = ST(0);
L_00669fcb:; BB(0x00669fcb);
    /* 00669fcb: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00669fcd: fst dword ptr [esi + 0x68] */ W_F32((u32)(r_esi+0x68u), ST(0));
    /* 00669fd0: fnstcw word ptr [esp] */ W16((u32)(r_esp), fcw);
    /* 00669fd3: movzx eax, word ptr [esp] */ r_eax = (u32)R16((u32)(r_esp));
    /* 00669fd7: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00669fdc: mov dword ptr [esp + 8], eax */ W32((u32)(r_esp+0x8u), r_eax);
    /* 00669fe0: fldcw word ptr [esp + 8] */ fcw = R16((u32)(r_esp+0x8u));
    /* 00669fe4: fistp dword ptr [esp + 0x10] */ W32((u32)(r_esp+0x10u), (u32)fx_int32(ST(0))); FPOP();
    /* 00669fe8: fldcw word ptr [esp] */ fcw = R16((u32)(r_esp));
    /* 00669feb: mov ecx, dword ptr [esp + 0x10] */ r_ecx = R32((u32)(r_esp+0x10u));
    /* 00669fef: mov eax, dword ptr [esi + 0x8c] */ r_eax = R32((u32)(r_esi+0x8cu));
    /* 00669ff5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00669ff6: mov dword ptr [esi + 0xc8], ecx */ W32((u32)(r_esi+0xc8u), r_ecx);
    /* 00669ffc: push 0x938fec */ { u32 v = 0x938fecu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a001: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0066a003: push 0x13001c */ { u32 v = 0x13001cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a008: jg 0x66a00c */ if ((!fZ&&fS==fO)) goto L_0066a00c;
L_0066a00a:; BB(0x0066a00a);
    /* 0066a00a: mov eax, edx */ r_eax = r_edx;
L_0066a00c:; BB(0x0066a00c);
    /* 0066a00c: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0066a00d: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066a00f: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066a011: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 0066a014: xor eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0066a016: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0066a018: mov dword ptr [esi + 0x8c], eax */ W32((u32)(r_esi+0x8cu), r_eax);
    /* 0066a01e: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66a023u); f_0061cdb0();
    /* 0066a023: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066a026: mov eax, dword ptr [esi + 0x8c] */ r_eax = R32((u32)(r_esi+0x8cu));
    /* 0066a02c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0066a02e: jne 0x66a047 */ if (!fZ) goto L_0066a047;
L_0066a030:; BB(0x0066a030);
    /* 0066a030: push 0x939b5c */ { u32 v = 0x939b5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a035: push 0x130022 */ { u32 v = 0x130022u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a03a: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66a03fu); f_0061cdb0();
    /* 0066a03f: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066a042: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066a045: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066a046: ret  */ FN_RET(0x00669fa8); r_esp += 4; return;
L_0066a047:; BB(0x0066a047);
    /* 0066a047: push 0x939b6c */ { u32 v = 0x939b6cu; r_esp -= 4; W32(r_esp, v); }
    /* 0066a04c: push 0x130022 */ { u32 v = 0x130022u; r_esp -= 4; W32(r_esp, v); }
    /* 0066a051: call 0x61cdb0 */ r_esp -= 4; W32(r_esp, 0x66a056u); f_0061cdb0();
    /* 0066a056: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0066a059: add esp, 0x18 */ {  u32 a = r_esp; u32 b = 0x18u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0066a05c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0066a05d: ret  */ FN_RET(0x00669fa8); r_esp += 4; return;
}

