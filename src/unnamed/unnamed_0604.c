#include "protos.h"

void f_006041dc(void) /* sub_6041DC */
{
    FN_ENTER(0x006041dc);
    /* 006041dc: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006041dd: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006041de: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 006041df: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 006041e0: sub esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 006041e3: mov edx, dword ptr [ecx + 0x408] */ r_edx = R32((u32)(r_ecx+0x408u));
    /* 006041e9: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006041eb: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 006041ee: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006041f0: mov eax, dword ptr [ecx + 0x40c] */ r_eax = R32((u32)(r_ecx+0x40cu));
    /* 006041f6: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 006041f8: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 006041fb: mov edi, dword ptr [eax] */ r_edi = R32((u32)(r_eax));
    /* 006041fd: mov eax, dword ptr [ecx + 0x410] */ r_eax = R32((u32)(r_ecx+0x410u));
    /* 00604203: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00604205: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00604208: mov esi, dword ptr [eax] */ r_esi = R32((u32)(r_eax));
    /* 0060420a: mov eax, dword ptr [ecx + 0x414] */ r_eax = R32((u32)(r_ecx+0x414u));
    /* 00604210: mov eax, dword ptr [eax] */ r_eax = R32((u32)(r_eax));
    /* 00604212: mov eax, dword ptr [eax + 4] */ r_eax = R32((u32)(r_eax+0x4u));
    /* 00604215: mov ebp, dword ptr [eax] */ r_ebp = R32((u32)(r_eax));
    /* 00604217: mov dword ptr [esp + 0x44], ecx */ W32((u32)(r_esp+0x44u), r_ecx);
    /* 0060421b: mov eax, 0x3e8 */ r_eax = 0x3e8u;
    /* 00604220: mov ebx, edx */ r_ebx = r_edx;
L_00604222:; BB(0x00604222);
    /* 00604222: movzx ecx, byte ptr [ebx] */ r_ecx = (u32)R8((u32)(r_ebx));
    /* 00604225: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00604228: cmp ecx, 0x29 */ {  u32 a = r_ecx; u32 b = 0x29u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060422b: je 0x60425b */ if (fZ) goto L_0060425b;
L_0060422d:; BB(0x0060422d);
    /* 0060422d: cmp ecx, 0x2c */ {  u32 a = r_ecx; u32 b = 0x2cu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604230: jne 0x60423d */ if (!fZ) goto L_0060423d;
L_00604232:; BB(0x00604232);
    /* 00604232: mov ecx, 4 */ r_ecx = 0x4u;
    /* 00604237: mov dword ptr [esp + 0x60], ecx */ W32((u32)(r_esp+0x60u), r_ecx);
    /* 0060423b: jmp 0x604264 */ goto L_00604264;
L_0060423d:; BB(0x0060423d);
    /* 0060423d: cmp ecx, 0xff */ {  u32 a = r_ecx; u32 b = 0xffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604243: jne 0x604250 */ if (!fZ) goto L_00604250;
L_00604245:; BB(0x00604245);
    /* 00604245: mov ecx, 0xffffffff */ r_ecx = 0xffffffffu;
    /* 0060424a: mov dword ptr [esp + 0x60], ecx */ W32((u32)(r_esp+0x60u), r_ecx);
    /* 0060424e: jmp 0x604264 */ goto L_00604264;
L_00604250:; BB(0x00604250);
    /* 00604250: mov ecx, 0xfffffffe */ r_ecx = 0xfffffffeu;
    /* 00604255: mov dword ptr [esp + 0x60], ecx */ W32((u32)(r_esp+0x60u), r_ecx);
    /* 00604259: jmp 0x604264 */ goto L_00604264;
L_0060425b:; BB(0x0060425b);
    /* 0060425b: mov ecx, 3 */ r_ecx = 0x3u;
    /* 00604260: mov dword ptr [esp + 0x60], ecx */ W32((u32)(r_esp+0x60u), r_ecx);
L_00604264:; BB(0x00604264);
    /* 00604264: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00604266: jl 0x604542 */ if ((fS!=fO)) goto L_00604542;
L_0060426c:; BB(0x0060426c);
    /* 0060426c: movzx edx, word ptr [ebx + 6] */ r_edx = (u32)R16((u32)(r_ebx+0x6u));
    /* 00604270: add ebx, 8 */ {  u32 a = r_ebx; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00604273: add edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00604276: add esi, 8 */ {  u32 a = r_esi; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00604279: add ebp, 8 */ {  u32 a = r_ebp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 0060427c: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0060427e: jle 0x60453a */ if ((fZ||fS!=fO)) goto L_0060453a;
L_00604284:; BB(0x00604284);
    /* 00604284: mov dword ptr [esp + 0x3c], edx */ W32((u32)(r_esp+0x3cu), r_edx);
    /* 00604288: mov dword ptr [esp + 0x38], eax */ W32((u32)(r_esp+0x38u), r_eax);
    /* 0060428c: lea ecx, [ecx - 3] */ r_ecx = (u32)(r_ecx+0xfffffffdu);
    /* 0060428f: mov dword ptr [esp + 0x40], ecx */ W32((u32)(r_esp+0x40u), r_ecx);
L_00604293:; BB(0x00604293);
    /* 00604293: mov dword ptr [esp + 0x50], ebx */ W32((u32)(r_esp+0x50u), r_ebx);
    /* 00604297: mov eax, 3 */ r_eax = 0x3u;
    /* 0060429c: mov ebx, eax */ r_ebx = r_eax;
L_0060429e:; BB(0x0060429e);
    /* 0060429e: mov edx, edi */ r_edx = r_edi;
    /* 006042a0: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 006042a2: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 006042a5: call 0x7a908c */ r_esp -= 4; W32(r_esp, 0x6042aau); f_007a908c();
    /* 006042aa: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 006042ae: mov edx, esi */ r_edx = r_esi;
    /* 006042b0: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 006042b2: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006042b5: call 0x7a908c */ r_esp -= 4; W32(r_esp, 0x6042bau); f_007a908c();
    /* 006042ba: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 006042be: mov edx, ebp */ r_edx = r_ebp;
    /* 006042c0: push dword ptr [edx] */ { u32 v = R32((u32)(r_edx)); r_esp -= 4; W32(r_esp, v); }
    /* 006042c2: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006042c5: call 0x7a908c */ r_esp -= 4; W32(r_esp, 0x6042cau); f_007a908c();
    /* 006042ca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006042cd: mov edx, dword ptr [esp + 0x44] */ r_edx = R32((u32)(r_esp+0x44u));
    /* 006042d1: fld dword ptr [edx + 0x3fc] */ FPUSH(R_F32((u32)(r_edx+0x3fcu)));
    /* 006042d7: fmul dword ptr [esp + 0x48] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x48u));
    /* 006042db: fld dword ptr [edx + 0x400] */ FPUSH(R_F32((u32)(r_edx+0x400u)));
    /* 006042e1: fmul dword ptr [esp + 0x4c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4cu));
    /* 006042e5: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006042e7: fld dword ptr [edx + 0x404] */ FPUSH(R_F32((u32)(r_edx+0x404u)));
    /* 006042ed: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 006042ef: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006042f1: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 006042f4: call 0x7a909c */ r_esp -= 4; W32(r_esp, 0x6042f9u); f_007a909c();
    /* 006042f9: mov edx, dword ptr [esp + 0x50] */ r_edx = R32((u32)(r_esp+0x50u));
    /* 006042fd: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 006042ff: add edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00604302: mov dword ptr [esp + 0x50], edx */ W32((u32)(r_esp+0x50u), r_edx);
    /* 00604306: add ebx, -1 */ {  u32 a = r_ebx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00604309: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0060430b: jg 0x60429e */ if ((!fZ&&fS==fO)) goto L_0060429e;
L_0060430d:; BB(0x0060430d);
    /* 0060430d: mov ebx, edx */ r_ebx = r_edx;
    /* 0060430f: mov ecx, dword ptr [esp + 0x60] */ r_ecx = R32((u32)(r_esp+0x60u));
    /* 00604313: cmp ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00604316: jl 0x604482 */ if ((fS!=fO)) goto L_00604482;
L_0060431c:; BB(0x0060431c);
    /* 0060431c: lea eax, [edi + 4] */ r_eax = (u32)(r_edi+0x4u);
    /* 0060431f: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00604323: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 00604325: call 0x7a908c */ r_esp -= 4; W32(r_esp, 0x60432au); f_007a908c();
    /* 0060432a: fstp dword ptr [esp + 0x4c] */ W_F32((u32)(r_esp+0x4cu), ST(0)); FPOP();
    /* 0060432e: lea eax, [esi + 4] */ r_eax = (u32)(r_esi+0x4u);
    /* 00604331: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00604335: push dword ptr [esi] */ { u32 v = R32((u32)(r_esi)); r_esp -= 4; W32(r_esp, v); }
    /* 00604337: call 0x7a908c */ r_esp -= 4; W32(r_esp, 0x60433cu); f_007a908c();
    /* 0060433c: fstp dword ptr [esp + 0x54] */ W_F32((u32)(r_esp+0x54u), ST(0)); FPOP();
    /* 00604340: lea eax, [ebp + 4] */ r_eax = (u32)(r_ebp+0x4u);
    /* 00604343: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 00604347: push dword ptr [ebp] */ { u32 v = R32((u32)(r_ebp)); r_esp -= 4; W32(r_esp, v); }
    /* 0060434a: call 0x7a908c */ r_esp -= 4; W32(r_esp, 0x60434fu); f_007a908c();
    /* 0060434f: mov eax, dword ptr [esp + 0x50] */ r_eax = R32((u32)(r_esp+0x50u));
    /* 00604353: mov ecx, dword ptr [esp + 0x60] */ r_ecx = R32((u32)(r_esp+0x60u));
    /* 00604357: fld dword ptr [eax + 0x3fc] */ FPUSH(R_F32((u32)(r_eax+0x3fcu)));
    /* 0060435d: fmul dword ptr [esp + 0x54] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x54u));
    /* 00604361: fld dword ptr [eax + 0x400] */ FPUSH(R_F32((u32)(r_eax+0x400u)));
    /* 00604367: fmul dword ptr [esp + 0x58] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x58u));
    /* 0060436b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0060436d: fld dword ptr [eax + 0x404] */ FPUSH(R_F32((u32)(r_eax+0x404u)));
    /* 00604373: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00604375: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00604377: fstp dword ptr [esp + 0x10] */ W_F32((u32)(r_esp+0x10u), ST(0)); FPOP();
    /* 0060437b: push dword ptr [ecx] */ { u32 v = R32((u32)(r_ecx)); r_esp -= 4; W32(r_esp, v); }
    /* 0060437d: call 0x7a908c */ r_esp -= 4; W32(r_esp, 0x604382u); f_007a908c();
    /* 00604382: fstp dword ptr [esp + 0x58] */ W_F32((u32)(r_esp+0x58u), ST(0)); FPOP();
    /* 00604386: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 0060438a: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0060438c: call 0x7a908c */ r_esp -= 4; W32(r_esp, 0x604391u); f_007a908c();
    /* 00604391: fstp dword ptr [esp + 0x60] */ W_F32((u32)(r_esp+0x60u), ST(0)); FPOP();
    /* 00604395: mov eax, dword ptr [esp + 0x70] */ r_eax = R32((u32)(r_esp+0x70u));
    /* 00604399: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 0060439b: call 0x7a908c */ r_esp -= 4; W32(r_esp, 0x6043a0u); f_007a908c();
    /* 006043a0: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
    /* 006043a4: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 006043a8: fld dword ptr [edi + 0x3fc] */ FPUSH(R_F32((u32)(r_edi+0x3fcu)));
    /* 006043ae: fmul dword ptr [esp + 0x60] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x60u));
    /* 006043b2: fld dword ptr [edi + 0x400] */ FPUSH(R_F32((u32)(r_edi+0x400u)));
    /* 006043b8: fmul dword ptr [esp + 0x64] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x64u));
    /* 006043bc: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006043be: fld dword ptr [edi + 0x404] */ FPUSH(R_F32((u32)(r_edi+0x404u)));
    /* 006043c4: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 006043c6: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006043c8: fstp dword ptr [esp + 0x20] */ W_F32((u32)(r_esp+0x20u), ST(0)); FPOP();
    /* 006043cc: lea edi, [eax + 8] */ r_edi = (u32)(r_eax+0x8u);
    /* 006043cf: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006043d2: call 0x7a908c */ r_esp -= 4; W32(r_esp, 0x6043d7u); f_007a908c();
    /* 006043d7: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 006043db: mov eax, dword ptr [esp + 0x74] */ r_eax = R32((u32)(r_esp+0x74u));
    /* 006043df: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006043e2: lea esi, [eax + 8] */ r_esi = (u32)(r_eax+0x8u);
    /* 006043e5: call 0x7a908c */ r_esp -= 4; W32(r_esp, 0x6043eau); f_007a908c();
    /* 006043ea: fstp dword ptr [esp + 0x68] */ W_F32((u32)(r_esp+0x68u), ST(0)); FPOP();
    /* 006043ee: mov eax, dword ptr [esp + 0x7c] */ r_eax = R32((u32)(r_esp+0x7cu));
    /* 006043f2: push dword ptr [eax + 4] */ { u32 v = R32((u32)(r_eax+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006043f5: lea ebp, [eax + 8] */ r_ebp = (u32)(r_eax+0x8u);
    /* 006043f8: call 0x7a908c */ r_esp -= 4; W32(r_esp, 0x6043fdu); f_007a908c();
    /* 006043fd: add esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604400: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 00604404: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00604408: fld dword ptr [eax + 0x3fc] */ FPUSH(R_F32((u32)(r_eax+0x3fcu)));
    /* 0060440e: fmul dword ptr [esp + 0x4c] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x4cu));
    /* 00604412: fld dword ptr [eax + 0x400] */ FPUSH(R_F32((u32)(r_eax+0x400u)));
    /* 00604418: fmul dword ptr [esp + 0x48] */ ST(0) = ST(0) * R_F32((u32)(r_esp+0x48u));
    /* 0060441c: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0060441e: fld dword ptr [eax + 0x404] */ FPUSH(R_F32((u32)(r_eax+0x404u)));
    /* 00604424: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00604426: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00604428: fstp dword ptr [esp + 0xc] */ W_F32((u32)(r_esp+0xcu), ST(0)); FPOP();
    /* 0060442c: call 0x83173c */ r_esp -= 4; W32(r_esp, 0x604431u); f_0083173c();
    /* 00604431: fcomp dword ptr [0x92e318] */ fx_compare(ST(0), R_F32((u32)(0x92e318u))); FPOP();
    /* 00604437: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00604439: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0060443a: je 0x604447 */ if (fZ) goto L_00604447;
L_0060443c:; BB(0x0060443c);
    /* 0060443c: lea ecx, [esp + 4] */ r_ecx = (u32)(r_esp+0x4u);
    /* 00604440: call 0x82df08 */ r_esp -= 4; W32(r_esp, 0x604445u); f_0082df08();
    /* 00604445: fstp st(0) */ ST(0) = ST(0); FPOP();
L_00604447:; BB(0x00604447);
    /* 00604447: push dword ptr [esp + 4] */ { u32 v = R32((u32)(r_esp+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060444b: call 0x7a909c */ r_esp -= 4; W32(r_esp, 0x604450u); f_007a909c();
    /* 00604450: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 00604452: lea eax, [ebx + 4] */ r_eax = (u32)(r_ebx+0x4u);
    /* 00604455: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 00604459: push dword ptr [esp + 0xc] */ { u32 v = R32((u32)(r_esp+0xcu)); r_esp -= 4; W32(r_esp, v); }
    /* 0060445d: call 0x7a909c */ r_esp -= 4; W32(r_esp, 0x604462u); f_007a909c();
    /* 00604462: mov edx, dword ptr [esp + 0x64] */ r_edx = R32((u32)(r_esp+0x64u));
    /* 00604466: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00604468: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 0060446c: call 0x7a909c */ r_esp -= 4; W32(r_esp, 0x604471u); f_007a909c();
    /* 00604471: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604474: mov ecx, dword ptr [esp + 0x5c] */ r_ecx = R32((u32)(r_esp+0x5cu));
    /* 00604478: lea ebx, [ecx + 8] */ r_ebx = (u32)(r_ecx+0x8u);
    /* 0060447b: mov dword ptr [ecx + 4], eax */ W32((u32)(r_ecx+0x4u), r_eax);
    /* 0060447e: mov ecx, dword ptr [esp + 0x40] */ r_ecx = R32((u32)(r_esp+0x40u));
L_00604482:; BB(0x00604482);
    /* 00604482: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00604484: jle 0x604513 */ if ((fZ||fS!=fO)) goto L_00604513;
L_0060448a:; BB(0x0060448a);
    /* 0060448a: mov eax, edi */ r_eax = r_edi;
    /* 0060448c: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 00604490: mov dword ptr [esp + 0x10], eax */ W32((u32)(r_esp+0x10u), r_eax);
    /* 00604494: fild dword ptr [esp + 0x10] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x10u)));
    /* 00604498: add edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0060449b: mov eax, esi */ r_eax = r_esi;
    /* 0060449d: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 006044a1: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006044a5: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 006044a9: add esi, 4 */ {  u32 a = r_esi; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 006044ac: mov eax, ebp */ r_eax = r_ebp;
    /* 006044ae: movzx eax, word ptr [eax + 2] */ r_eax = (u32)R16((u32)(r_eax+0x2u));
    /* 006044b2: add ebp, 4 */ {  u32 a = r_ebp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 006044b5: mov dword ptr [esp + 0x18], eax */ W32((u32)(r_esp+0x18u), r_eax);
    /* 006044b9: fild dword ptr [esp + 0x18] */ FPUSH((long double)(i32)R32((u32)(r_esp+0x18u)));
    /* 006044bd: add ecx, -1 */ {  u32 a = r_ecx; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006044c0: mov eax, dword ptr [esp + 0x44] */ r_eax = R32((u32)(r_esp+0x44u));
    /* 006044c4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006044c6: fmul dword ptr [eax + 0x3fc] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x3fcu));
    /* 006044cc: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006044ce: fmul dword ptr [eax + 0x400] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x400u));
    /* 006044d4: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006044d6: fmul dword ptr [eax + 0x404] */ ST(0) = ST(0) * R_F32((u32)(r_eax+0x404u));
    /* 006044dc: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006044de: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006044e0: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006044e2: fnstcw word ptr [esp + 0x20] */ W16((u32)(r_esp+0x20u), fcw);
    /* 006044e6: movzx eax, word ptr [esp + 0x20] */ r_eax = (u32)R16((u32)(r_esp+0x20u));
    /* 006044eb: or eax, 0xc00 */ {  u32 a = r_eax; u32 b = 0xc00u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006044f0: mov dword ptr [esp + 0x28], eax */ W32((u32)(r_esp+0x28u), r_eax);
    /* 006044f4: fldcw word ptr [esp + 0x28] */ fcw = R16((u32)(r_esp+0x28u));
    /* 006044f8: fistp dword ptr [esp + 0x30] */ W32((u32)(r_esp+0x30u), (u32)fx_int32(ST(0))); FPOP();
    /* 006044fc: fldcw word ptr [esp + 0x20] */ fcw = R16((u32)(r_esp+0x20u));
    /* 00604500: movzx eax, word ptr [ebx] */ r_eax = (u32)R16((u32)(r_ebx));
    /* 00604503: mov edx, dword ptr [esp + 0x30] */ r_edx = R32((u32)(r_esp+0x30u));
    /* 00604507: shl edx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0060450a: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r;  }
    /* 0060450c: mov eax, ebx */ r_eax = r_ebx;
    /* 0060450e: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00604511: mov dword ptr [eax], edx */ W32((u32)(r_eax), r_edx);
L_00604513:; BB(0x00604513);
    /* 00604513: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00604515: jle 0x604523 */ if ((fZ||fS!=fO)) goto L_00604523;
L_00604517:; BB(0x00604517);
    /* 00604517: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00604519: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060451b: add ebx, ecx */ {  u32 a = r_ebx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 0060451d: add edi, ecx */ {  u32 a = r_edi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 0060451f: add esi, ecx */ {  u32 a = r_esi; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 00604521: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
L_00604523:; BB(0x00604523);
    /* 00604523: mov eax, dword ptr [esp + 0x3c] */ r_eax = R32((u32)(r_esp+0x3cu));
    /* 00604527: add eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060452a: mov dword ptr [esp + 0x3c], eax */ W32((u32)(r_esp+0x3cu), r_eax);
    /* 0060452e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00604530: jg 0x604293 */ if ((!fZ&&fS==fO)) goto L_00604293;
L_00604536:; BB(0x00604536);
    /* 00604536: mov eax, dword ptr [esp + 0x38] */ r_eax = R32((u32)(r_esp+0x38u));
L_0060453a:; BB(0x0060453a);
    /* 0060453a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0060453c: jg 0x604222 */ if ((!fZ&&fS==fO)) goto L_00604222;
L_00604542:; BB(0x00604542);
    /* 00604542: mov eax, 1 */ r_eax = 0x1u;
    /* 00604547: add esp, 0x64 */ {  u32 a = r_esp; u32 b = 0x64u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 0060454a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060454b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0060454c: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0060454d: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0060454e: ret  */ FN_RET(0x006041dc); r_esp += 4; return;
}

void f_00604550(void) /* sub_604550 */
{
    FN_ENTER(0x00604550);
    /* 00604550: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00604551: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00604552: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00604553: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00604554: mov esi, ecx */ r_esi = r_ecx;
    /* 00604556: mov ebx, dword ptr [esp + 0x14] */ r_ebx = R32((u32)(r_esp+0x14u));
    /* 0060455a: mov eax, ebx */ r_eax = r_ebx;
    /* 0060455c: call 0x6045e8 */ r_esp -= 4; W32(r_esp, 0x604561u); f_006045e8();
    /* 00604561: mov dword ptr [esi + 0x3f8], eax */ W32((u32)(r_esi+0x3f8u), r_eax);
    /* 00604567: fld dword ptr [ebx] */ FPUSH(R_F32((u32)(r_ebx)));
    /* 00604569: fld dword ptr [ebx + 4] */ FPUSH(R_F32((u32)(r_ebx+0x4u)));
    /* 0060456c: lea edi, [eax + eax] */ r_edi = (u32)(r_eax+r_eax);
    /* 0060456f: add edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00604571: mov ecx, dword ptr [edi + eax*8 + 0x9c3de0] */ r_ecx = R32((u32)(r_edi+r_eax*8+0x9c3de0u));
    /* 00604578: mov edx, dword ptr [edi + eax*8 + 0x9c3de4] */ r_edx = R32((u32)(r_edi+r_eax*8+0x9c3de4u));
    /* 0060457f: mov edi, dword ptr [edi + eax*8 + 0x9c3de8] */ r_edi = R32((u32)(r_edi+r_eax*8+0x9c3de8u));
    /* 00604586: fld dword ptr [ecx*8 + 0x9c3d84] */ FPUSH(R_F32((u32)(r_ecx*8+0x9c3d84u)));
    /* 0060458d: fsub st(1), st(0) */ ST(1) = ST(1) - ST(0);
    /* 0060458f: fld dword ptr [edx*8 + 0x9c3d84] */ FPUSH(R_F32((u32)(r_edx*8+0x9c3d84u)));
    /* 00604596: fsub st(1) */ ST(0) = ST(0) - ST(1);
    /* 00604598: fld dword ptr [ecx*8 + 0x9c3d80] */ FPUSH(R_F32((u32)(r_ecx*8+0x9c3d80u)));
    /* 0060459f: fsub st(4), st(0) */ ST(4) = ST(4) - ST(0);
    /* 006045a1: fld dword ptr [edi*8 + 0x9c3d80] */ FPUSH(R_F32((u32)(r_edi*8+0x9c3d80u)));
    /* 006045a8: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 006045aa: fdivp st(4) */ ST(4) = ST(4) / ST(0); FPOP();
    /* 006045ac: fld dword ptr [edi*8 + 0x9c3d84] */ FPUSH(R_F32((u32)(r_edi*8+0x9c3d84u)));
    /* 006045b3: fxch st(4) */ { long double t = ST(0); ST(0) = ST(4); ST(4) = t; }
    /* 006045b5: fst dword ptr [esi + 0x404] */ W_F32((u32)(r_esi+0x404u), ST(0));
    /* 006045bb: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 006045bd: fsubp st(4) */ ST(4) = ST(4) - ST(0); FPOP();
    /* 006045bf: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 006045c1: fmul st(3), st(0) */ ST(3) = ST(3) * ST(0);
    /* 006045c3: fxch st(3) */ { long double t = ST(0); ST(0) = ST(3); ST(3) = t; }
    /* 006045c5: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 006045c7: fdivp st(1) */ ST(1) = ST(1) / ST(0); FPOP();
    /* 006045c9: fst dword ptr [esi + 0x400] */ W_F32((u32)(r_esi+0x400u), ST(0));
    /* 006045cf: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 006045d1: fsubr dword ptr [0x92e314] */ ST(0) = R_F32((u32)(0x92e314u)) - ST(0);
    /* 006045d7: fstp dword ptr [esi + 0x3fc] */ W_F32((u32)(r_esi+0x3fcu), ST(0)); FPOP();
    /* 006045dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006045de: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006045df: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006045e0: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006045e1: ret 4 */ FN_RET(0x00604550); r_esp += 8; return;
}

void f_006045e8(void) /* sub_6045E8 */
{
    FN_ENTER(0x006045e8);
    /* 006045e8: mov edx, eax */ r_edx = r_eax;
    /* 006045ea: fld dword ptr [0x92e304] */ FPUSH(R_F32((u32)(0x92e304u)));
    /* 006045f0: fld dword ptr [edx] */ FPUSH(R_F32((u32)(r_edx)));
    /* 006045f2: fcom st(1) */ fx_compare(ST(0), ST(1)); 
    /* 006045f4: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 006045f6: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 006045f7: jbe 0x604615 */ if ((fC||fZ)) goto L_00604615;
L_006045f9:; BB(0x006045f9);
    /* 006045f9: fsubrp st(1) */ ST(1) = ST(0) - ST(1); FPOP();
    /* 006045fb: fmul dword ptr [0x92e308] */ ST(0) = ST(0) * R_F32((u32)(0x92e308u));
    /* 00604601: fcomp dword ptr [edx + 4] */ fx_compare(ST(0), R_F32((u32)(r_edx+0x4u))); FPOP();
    /* 00604604: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00604606: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00604607: ja 0x60460f */ if ((!fC&&!fZ)) goto L_0060460f;
L_00604609:; BB(0x00604609);
    /* 00604609: mov eax, 6 */ r_eax = 0x6u;
    /* 0060460e: ret  */ FN_RET(0x006045e8); r_esp += 4; return;
L_0060460f:; BB(0x0060460f);
    /* 0060460f: mov eax, 7 */ r_eax = 0x7u;
    /* 00604614: ret  */ FN_RET(0x006045e8); r_esp += 4; return;
L_00604615:; BB(0x00604615);
    /* 00604615: fcom dword ptr [0x92e300] */ fx_compare(ST(0), R_F32((u32)(0x92e300u))); 
    /* 0060461b: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0060461d: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0060461e: ja 0x604658 */ if ((!fC&&!fZ)) goto L_00604658;
L_00604620:; BB(0x00604620);
    /* 00604620: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00604623: fmul st(2), st(0) */ ST(2) = ST(2) * ST(0);
    /* 00604625: fxch st(2) */ { long double t = ST(0); ST(0) = ST(2); ST(2) = t; }
    /* 00604627: fcomp st(1) */ fx_compare(ST(0), ST(1)); FPOP();
    /* 00604629: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0060462b: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 0060462c: jbe 0x604651 */ if ((fC||fZ)) goto L_00604651;
L_0060462e:; BB(0x0060462e);
    /* 0060462e: fld dword ptr [0x92e30c] */ FPUSH(R_F32((u32)(0x92e30cu)));
    /* 00604634: fsubp st(2) */ ST(2) = ST(2) - ST(0); FPOP();
    /* 00604636: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00604638: fmul dword ptr [0x92e310] */ ST(0) = ST(0) * R_F32((u32)(0x92e310u));
    /* 0060463e: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00604640: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00604642: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00604643: jb 0x60464b */ if (fC) goto L_0060464b;
L_00604645:; BB(0x00604645);
    /* 00604645: mov eax, 1 */ r_eax = 0x1u;
    /* 0060464a: ret  */ FN_RET(0x006045e8); r_esp += 4; return;
L_0060464b:; BB(0x0060464b);
    /* 0060464b: mov eax, 2 */ r_eax = 0x2u;
    /* 00604650: ret  */ FN_RET(0x006045e8); r_esp += 4; return;
L_00604651:; BB(0x00604651);
    /* 00604651: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 00604653: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00604655: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00604657: ret  */ FN_RET(0x006045e8); r_esp += 4; return;
L_00604658:; BB(0x00604658);
    /* 00604658: fld dword ptr [0x92e30c] */ FPUSH(R_F32((u32)(0x92e30cu)));
    /* 0060465e: fld dword ptr [edx + 4] */ FPUSH(R_F32((u32)(r_edx+0x4u)));
    /* 00604661: fsubr st(1), st(0) */ ST(1) = ST(0) - ST(1);
    /* 00604663: fxch st(1) */ { long double t = ST(0); ST(0) = ST(1); ST(1) = t; }
    /* 00604665: fmul dword ptr [0x92e310] */ ST(0) = ST(0) * R_F32((u32)(0x92e310u));
    /* 0060466b: fcomp st(2) */ fx_compare(ST(0), ST(2)); FPOP();
    /* 0060466d: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 0060466f: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00604670: jae 0x604687 */ if (!fC) goto L_00604687;
L_00604672:; BB(0x00604672);
    /* 00604672: fmulp st(2) */ ST(2) = ST(2) * ST(0); FPOP();
    /* 00604674: fcompp  */ fx_compare(ST(0), ST(1)); FPOP(); FPOP();
    /* 00604676: fnstsw ax */ r_eax = (r_eax & 0xffff0000u) | fx_sw();
    /* 00604678: sahf  */ { u32 h = (r_eax >> 8) & 0xff; fS = (h >> 7) & 1; fZ = (h >> 6) & 1; fA = (h >> 4) & 1; fP = (h >> 2) & 1; fC = h & 1; }
    /* 00604679: jb 0x604681 */ if (fC) goto L_00604681;
L_0060467b:; BB(0x0060467b);
    /* 0060467b: mov eax, 4 */ r_eax = 0x4u;
    /* 00604680: ret  */ FN_RET(0x006045e8); r_esp += 4; return;
L_00604681:; BB(0x00604681);
    /* 00604681: mov eax, 5 */ r_eax = 0x5u;
    /* 00604686: ret  */ FN_RET(0x006045e8); r_esp += 4; return;
L_00604687:; BB(0x00604687);
    /* 00604687: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 00604689: fstp st(1) */ ST(1) = ST(0); FPOP();
    /* 0060468b: fstp st(0) */ ST(0) = ST(0); FPOP();
    /* 0060468d: mov eax, 3 */ r_eax = 0x3u;
    /* 00604692: ret  */ FN_RET(0x006045e8); r_esp += 4; return;
}

void f_00604694(void) /* sub_604694 */
{
    FN_ENTER(0x00604694);
    /* 00604694: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00604695: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00604696: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00604697: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00604699: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 0060469f: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 006046a2: je 0x6046a8 */ if (fZ) goto L_006046a8;
L_006046a4:; BB(0x006046a4);
    /* 006046a4: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 006046a5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 006046a6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 006046a7: ret  */ FN_RET(0x00604694); r_esp += 4; return;
L_006046a8:; BB(0x006046a8);
    /* 006046a8: push dword ptr [ebx + 0x3a4] */ { u32 v = R32((u32)(r_ebx+0x3a4u)); r_esp -= 4; W32(r_esp, v); }
    /* 006046ae: push dword ptr [ebx + 0x3a0] */ { u32 v = R32((u32)(r_ebx+0x3a0u)); r_esp -= 4; W32(r_esp, v); }
    /* 006046b4: mov eax, dword ptr [ebx] */ r_eax = R32((u32)(r_ebx));
    /* 006046b6: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006046b8: call dword ptr [eax + 0x24] */ { u32 t = R32((u32)(r_eax+0x24u)); r_esp -= 4; W32(r_esp, 0x6046bbu); call_ind(t); }
    /* 006046bb: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006046bd: je 0x60490a */ if (fZ) goto L_0060490a;
L_006046c3:; BB(0x006046c3);
    /* 006046c3: mov eax, dword ptr [ebx + 0x398] */ r_eax = R32((u32)(r_ebx+0x398u));
    /* 006046c9: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 006046cb: je 0x60490a */ if (fZ) goto L_0060490a;
L_006046d1:; BB(0x006046d1);
    /* 006046d1: call 0x82dbac */ r_esp -= 4; W32(r_esp, 0x6046d6u); f_0082dbac();
    /* 006046d6: mov edi, dword ptr [ebx + 0x3e0] */ r_edi = R32((u32)(r_ebx+0x3e0u));
    /* 006046dc: lea esi, [edi + 0x23600] */ r_esi = (u32)(r_edi+0x23600u);
    /* 006046e2: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 006046e4: jae 0x604766 */ if (!fC) goto L_00604766;
L_006046ea:; BB(0x006046ea);
    /* 006046ea: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 006046ec: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006046ee: je 0x60475c */ if (fZ) goto L_0060475c;
L_006046f0:; BB(0x006046f0);
    /* 006046f0: mov eax, dword ptr [edi + 0x14] */ r_eax = R32((u32)(r_edi+0x14u));
    /* 006046f3: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006046f5: je 0x6046fe */ if (fZ) goto L_006046fe;
L_006046f7:; BB(0x006046f7);
    /* 006046f7: mov eax, dword ptr [edi + 0x10] */ r_eax = R32((u32)(r_edi+0x10u));
    /* 006046fa: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006046fc: je 0x60475c */ if (fZ) goto L_0060475c;
L_006046fe:; BB(0x006046fe);
    /* 006046fe: mov eax, dword ptr [edi + 0x188] */ r_eax = R32((u32)(r_edi+0x188u));
    /* 00604704: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604706: je 0x604712 */ if (fZ) goto L_00604712;
L_00604708:; BB(0x00604708);
    /* 00604708: mov eax, dword ptr [edi + 0x184] */ r_eax = R32((u32)(r_edi+0x184u));
    /* 0060470e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604710: je 0x60475c */ if (fZ) goto L_0060475c;
L_00604712:; BB(0x00604712);
    /* 00604712: mov eax, dword ptr [edi + 0x2f8] */ r_eax = R32((u32)(r_edi+0x2f8u));
    /* 00604718: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060471a: je 0x60475c */ if (fZ) goto L_0060475c;
L_0060471c:; BB(0x0060471c);
    /* 0060471c: mov edx, dword ptr [ebx + 0x3cc] */ r_edx = R32((u32)(r_ebx+0x3ccu));
    /* 00604722: mov al, byte ptr [edi + 0xe] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edi+0xeu))) & 0xffu);
    /* 00604725: cmp al, byte ptr [edx + 0x30] */ {  u32 a = (u8)r_eax; u32 b = R8((u32)(r_edx+0x30u)); u32 r = (a - b) & 0xffu;  fZ = (r == 0); }
    /* 00604728: jne 0x60475c */ if (!fZ) goto L_0060475c;
L_0060472a:; BB(0x0060472a);
    /* 0060472a: movsx eax, word ptr [edi + 4] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x4u));
    /* 0060472e: cmp ax, word ptr [edx + 0x38] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0x38u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00604732: jne 0x60475c */ if (!fZ) goto L_0060475c;
L_00604734:; BB(0x00604734);
    /* 00604734: movsx eax, word ptr [edi + 6] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x6u));
    /* 00604738: cmp ax, word ptr [edx + 0x3a] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0x3au)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0060473c: jne 0x60475c */ if (!fZ) goto L_0060475c;
L_0060473e:; BB(0x0060473e);
    /* 0060473e: movsx eax, word ptr [edi + 8] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0x8u));
    /* 00604742: cmp ax, word ptr [edx + 0x3c] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0x3cu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00604746: jne 0x60475c */ if (!fZ) goto L_0060475c;
L_00604748:; BB(0x00604748);
    /* 00604748: movsx eax, word ptr [edi + 0xa] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xau));
    /* 0060474c: cmp ax, word ptr [edx + 0x3e] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0x3eu)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 00604750: jne 0x60475c */ if (!fZ) goto L_0060475c;
L_00604752:; BB(0x00604752);
    /* 00604752: movsx eax, word ptr [edi + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_edi+0xcu));
    /* 00604756: cmp ax, word ptr [edx + 0x40] */ {  u32 a = (u16)r_eax; u32 b = R16((u32)(r_edx+0x40u)); u32 r = (a - b) & 0xffffu;  fZ = (r == 0); }
    /* 0060475a: je 0x604766 */ if (fZ) goto L_00604766;
L_0060475c:; BB(0x0060475c);
    /* 0060475c: add edi, 0x46c */ {  u32 a = r_edi; u32 b = 0x46cu; u32 r = (a + b) & 0xffffffffu; r_edi = r;  }
    /* 00604762: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fC = (a < b); }
    /* 00604764: jb 0x6046ea */ if (fC) goto L_006046ea;
L_00604766:; BB(0x00604766);
    /* 00604766: cmp edi, esi */ {  u32 a = r_edi; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604768: je 0x604a1c */ if (fZ) goto L_00604a1c;
L_0060476e:; BB(0x0060476e);
    /* 0060476e: mov dword ptr [ebx + 0x3e4], edi */ W32((u32)(r_ebx+0x3e4u), r_edi);
L_00604774:; BB(0x00604774);
    /* 00604774: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00604775: call 0x794548 */ r_esp -= 4; W32(r_esp, 0x60477au); f_00794548();
    /* 0060477a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060477b: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 00604780: or eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00604783: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00604788: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x60478du); f_0082d7b0();
    /* 0060478d: lea edx, [ebx + 0x38] */ r_edx = (u32)(r_ebx+0x38u);
    /* 00604790: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00604792: call 0x8316b4 */ r_esp -= 4; W32(r_esp, 0x604797u); f_008316b4();
    /* 00604797: mov edx, dword ptr [ebx + 0x60] */ r_edx = R32((u32)(r_ebx+0x60u));
    /* 0060479a: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0060479c: call 0x82d8bc */ r_esp -= 4; W32(r_esp, 0x6047a1u); f_0082d8bc();
    /* 006047a1: mov ecx, dword ptr [ebx + 0x3e4] */ r_ecx = R32((u32)(r_ebx+0x3e4u));
    /* 006047a7: add ecx, 0x460 */ {  u32 a = r_ecx; u32 b = 0x460u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006047ad: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6047b2u); f_00829cc8();
    /* 006047b2: mov edx, dword ptr [ebx + 0xf8] */ r_edx = R32((u32)(r_ebx+0xf8u));
    /* 006047b8: movzx eax, word ptr [edx + 0xa] */ r_eax = (u32)R16((u32)(r_edx+0xau));
    /* 006047bc: or eax, 0xffff0080 */ {  u32 a = r_eax; u32 b = 0xffff0080u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 006047c1: mov word ptr [edx + 0xa], ax */ W16((u32)(r_edx+0xau), (u16)r_eax);
    /* 006047c5: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006047c7: call 0x7aa8c8 */ r_esp -= 4; W32(r_esp, 0x6047ccu); f_007aa8c8();
    /* 006047cc: mov ecx, dword ptr [ebx + 0xe0] */ r_ecx = R32((u32)(r_ebx+0xe0u));
    /* 006047d2: add ecx, 0xe80 */ {  u32 a = r_ecx; u32 b = 0xe80u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006047d8: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x6047ddu); f_0082d990();
    /* 006047dd: mov ecx, dword ptr [ebx + 0x3e4] */ r_ecx = R32((u32)(r_ebx+0x3e4u));
    /* 006047e3: add ecx, 0x2ec */ {  u32 a = r_ecx; u32 b = 0x2ecu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006047e9: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6047eeu); f_00829cc8();
    /* 006047ee: mov eax, dword ptr [ebx + 0x3e4] */ r_eax = R32((u32)(r_ebx+0x3e4u));
    /* 006047f4: movsx esi, word ptr [eax + 0xa] */ r_esi = (u32)(i32)(i16)R16((u32)(r_eax+0xau));
    /* 006047f8: mov edx, dword ptr [ebx + 0x420] */ r_edx = R32((u32)(r_ebx+0x420u));
    /* 006047fe: push dword ptr [edx + esi*8 + 4] */ { u32 v = R32((u32)(r_edx+r_esi*8+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00604802: call 0x6926e8 */ r_esp -= 4; W32(r_esp, 0x604807u); f_006926e8();
    /* 00604807: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00604808: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x60480du); f_0082da80();
    /* 0060480d: mov eax, dword ptr [ebx + 0x3e4] */ r_eax = R32((u32)(r_ebx+0x3e4u));
    /* 00604813: movsx eax, word ptr [eax + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 00604817: mov edx, dword ptr [ebx + 0x41c] */ r_edx = R32((u32)(r_ebx+0x41cu));
    /* 0060481d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060481f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00604821: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00604823: mov esi, dword ptr [edx + eax + 4] */ r_esi = R32((u32)(r_edx+r_eax+0x4u));
    /* 00604827: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604829: je 0x604873 */ if (fZ) goto L_00604873;
L_0060482b:; BB(0x0060482b);
    /* 0060482b: call 0x4e71a8 */ r_esp -= 4; W32(r_esp, 0x604830u); f_004e71a8();
    /* 00604830: mov ecx, dword ptr [ebx + 0xe0] */ r_ecx = R32((u32)(r_ebx+0xe0u));
    /* 00604836: add ecx, 0xec0 */ {  u32 a = r_ecx; u32 b = 0xec0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060483c: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x604841u); f_0082d990();
    /* 00604841: mov ecx, dword ptr [ebx + 0x3e4] */ r_ecx = R32((u32)(r_ebx+0x3e4u));
    /* 00604847: add ecx, 0x178 */ {  u32 a = r_ecx; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0060484d: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x604852u); f_00829cc8();
    /* 00604852: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00604853: call 0x6926e8 */ r_esp -= 4; W32(r_esp, 0x604858u); f_006926e8();
    /* 00604858: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00604859: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x60485eu); f_0082da80();
    /* 0060485e: call 0x4e71c8 */ r_esp -= 4; W32(r_esp, 0x604863u); f_004e71c8();
    /* 00604863: mov eax, dword ptr [ebx + 0x3e4] */ r_eax = R32((u32)(r_ebx+0x3e4u));
    /* 00604869: movsx eax, word ptr [eax + 0xc] */ r_eax = (u32)(i32)(i16)R16((u32)(r_eax+0xcu));
    /* 0060486d: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0060486f: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00604871: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
L_00604873:; BB(0x00604873);
    /* 00604873: mov edx, dword ptr [ebx + 0x418] */ r_edx = R32((u32)(r_ebx+0x418u));
    /* 00604879: mov esi, dword ptr [eax + edx + 4] */ r_esi = R32((u32)(r_eax+r_edx+0x4u));
    /* 0060487d: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0060487f: je 0x6048c1 */ if (fZ) goto L_006048c1;
L_00604881:; BB(0x00604881);
    /* 00604881: call 0x4e71a8 */ r_esp -= 4; W32(r_esp, 0x604886u); f_004e71a8();
    /* 00604886: mov ecx, dword ptr [ebx + 0xe0] */ r_ecx = R32((u32)(r_ebx+0xe0u));
    /* 0060488c: add ecx, 0xec0 */ {  u32 a = r_ecx; u32 b = 0xec0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00604892: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x604897u); f_0082d990();
    /* 00604897: mov ecx, dword ptr [ebx + 0x3e4] */ r_ecx = R32((u32)(r_ebx+0x3e4u));
    /* 0060489d: add ecx, 0x178 */ {  u32 a = r_ecx; u32 b = 0x178u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 006048a3: call 0x829cc8 */ r_esp -= 4; W32(r_esp, 0x6048a8u); f_00829cc8();
    /* 006048a8: push dword ptr [ebx + 0x3cc] */ { u32 v = R32((u32)(r_ebx+0x3ccu)); r_esp -= 4; W32(r_esp, v); }
    /* 006048ae: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006048af: call 0x4e7010 */ r_esp -= 4; W32(r_esp, 0x6048b4u); f_004e7010();
    /* 006048b4: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 006048b7: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6048bcu); f_0082da80();
    /* 006048bc: call 0x4e71c8 */ r_esp -= 4; W32(r_esp, 0x6048c1u); f_004e71c8();
L_006048c1:; BB(0x006048c1);
    /* 006048c1: mov eax, dword ptr [ebx + 0x3c8] */ r_eax = R32((u32)(r_ebx+0x3c8u));
    /* 006048c7: cmp eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006048ca: jne 0x6048e3 */ if (!fZ) goto L_006048e3;
L_006048cc:; BB(0x006048cc);
    /* 006048cc: mov eax, dword ptr [ebx + 0x43c] */ r_eax = R32((u32)(r_ebx+0x43cu));
    /* 006048d2: cmp eax, -1 */ {  u32 a = r_eax; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006048d5: je 0x6048e3 */ if (fZ) goto L_006048e3;
L_006048d7:; BB(0x006048d7);
    /* 006048d7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006048d8: call 0x5d783c */ r_esp -= 4; W32(r_esp, 0x6048ddu); f_005d783c();
    /* 006048dd: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006048de: cmp eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006048e1: je 0x60490e */ if (fZ) goto L_0060490e;
L_006048e3:; BB(0x006048e3);
    /* 006048e3: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x6048e8u); f_0082da80();
    /* 006048e8: mov eax, dword ptr [0xaf034c] */ r_eax = R32((u32)(0xaf034cu));
    /* 006048ed: and eax, 0xfffffffe */ {  u32 a = r_eax; u32 b = 0xfffffffeu; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 006048f0: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 006048f5: call 0x794750 */ r_esp -= 4; W32(r_esp, 0x6048fau); f_00794750();
    /* 006048fa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 006048fc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006048fd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 006048fe: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00604900: call 0x779d4c */ r_esp -= 4; W32(r_esp, 0x604905u); f_00779d4c();
    /* 00604905: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x60490au); f_0082dab0();
L_0060490a:; BB(0x0060490a);
    /* 0060490a: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0060490b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0060490c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0060490d: ret  */ FN_RET(0x00604694); r_esp += 4; return;
L_0060490e:; BB(0x0060490e);
    /* 0060490e: push dword ptr [ebx + 0x43c] */ { u32 v = R32((u32)(r_ebx+0x43cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00604914: call 0x5d7af0 */ r_esp -= 4; W32(r_esp, 0x604919u); f_005d7af0();
    /* 00604919: mov edi, eax */ r_edi = r_eax;
    /* 0060491b: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0060491e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604920: je 0x6048e3 */ if (fZ) goto L_006048e3;
L_00604922:; BB(0x00604922);
    /* 00604922: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00604924: call 0x7a94a0 */ r_esp -= 4; W32(r_esp, 0x604929u); f_007a94a0();
    /* 00604929: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0060492a: mov edx, dword ptr [0xaf034c] */ r_edx = R32((u32)(0xaf034cu));
    /* 00604930: mov esi, dword ptr [0xaf0360] */ r_esi = R32((u32)(0xaf0360u));
    /* 00604936: mov dword ptr [0xaab518], edx */ W32((u32)(0xaab518u), r_edx);
    /* 0060493c: mov edx, dword ptr [0xaf0364] */ r_edx = R32((u32)(0xaf0364u));
    /* 00604942: mov dword ptr [0xaab504], esi */ W32((u32)(0xaab504u), r_esi);
    /* 00604948: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00604949: mov dword ptr [0xaab500], edx */ W32((u32)(0xaab500u), r_edx);
    /* 0060494f: mov ecx, ebx */ r_ecx = r_ebx;
    /* 00604951: mov edx, dword ptr [0xaf0370] */ r_edx = R32((u32)(0xaf0370u));
    /* 00604957: mov dword ptr [0xaab508], edx */ W32((u32)(0xaab508u), r_edx);
    /* 0060495d: mov edx, dword ptr [0xaf0374] */ r_edx = R32((u32)(0xaf0374u));
    /* 00604963: mov dword ptr [0xaab50c], edx */ W32((u32)(0xaab50cu), r_edx);
    /* 00604969: mov edx, dword ptr [0xaf0378] */ r_edx = R32((u32)(0xaf0378u));
    /* 0060496f: mov dword ptr [0xaab510], edx */ W32((u32)(0xaab510u), r_edx);
    /* 00604975: mov edx, dword ptr [0xaf037c] */ r_edx = R32((u32)(0xaf037cu));
    /* 0060497b: mov dword ptr [0xaab514], edx */ W32((u32)(0xaab514u), r_edx);
    /* 00604981: call 0x604ef8 */ r_esp -= 4; W32(r_esp, 0x604986u); f_00604ef8();
    /* 00604986: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00604988: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0060498a: xor esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a ^ b) & 0xffffffffu; r_esi = r;  }
    /* 0060498c: mov ecx, ebx */ r_ecx = r_ebx;
    /* 0060498e: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 0060498f: call 0x604a34 */ r_esp -= 4; W32(r_esp, 0x604994u); f_00604a34();
    /* 00604994: mov edx, dword ptr [ebx + 0x484] */ r_edx = R32((u32)(r_ebx+0x484u));
    /* 0060499a: test edx, 0x400 */ {  u32 a = r_edx; u32 b = 0x400u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006049a0: je 0x6049c1 */ if (fZ) goto L_006049c1;
L_006049a2:; BB(0x006049a2);
    /* 006049a2: movzx edx, byte ptr [ebx + 0x440] */ r_edx = (u32)R8((u32)(r_ebx+0x440u));
    /* 006049a9: cmp edx, 0x89 */ {  u32 a = r_edx; u32 b = 0x89u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006049af: jne 0x6049b6 */ if (!fZ) goto L_006049b6;
L_006049b1:; BB(0x006049b1);
    /* 006049b1: mov esi, 1 */ r_esi = 0x1u;
L_006049b6:; BB(0x006049b6);
    /* 006049b6: push 0x23 */ { u32 v = 0x23u; r_esp -= 4; W32(r_esp, v); }
    /* 006049b8: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 006049b9: mov ecx, ebx */ r_ecx = r_ebx;
    /* 006049bb: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 006049bc: call 0x604a34 */ r_esp -= 4; W32(r_esp, 0x6049c1u); f_00604a34();
L_006049c1:; BB(0x006049c1);
    /* 006049c1: mov eax, dword ptr [0xaab508] */ r_eax = R32((u32)(0xaab508u));
    /* 006049c6: mov edx, dword ptr [0xaab50c] */ r_edx = R32((u32)(0xaab50cu));
    /* 006049cc: mov esi, dword ptr [0xaab510] */ r_esi = R32((u32)(0xaab510u));
    /* 006049d2: mov edi, dword ptr [0xaab514] */ r_edi = R32((u32)(0xaab514u));
    /* 006049d8: mov dword ptr [0xaf0370], eax */ W32((u32)(0xaf0370u), r_eax);
    /* 006049dd: mov eax, dword ptr [0xaab504] */ r_eax = R32((u32)(0xaab504u));
    /* 006049e2: mov dword ptr [0xaf0374], edx */ W32((u32)(0xaf0374u), r_edx);
    /* 006049e8: mov dword ptr [0xaf0378], esi */ W32((u32)(0xaf0378u), r_esi);
    /* 006049ee: mov dword ptr [0xaf037c], edi */ W32((u32)(0xaf037cu), r_edi);
    /* 006049f4: mov dword ptr [0xaf0360], eax */ W32((u32)(0xaf0360u), r_eax);
    /* 006049f9: mov eax, dword ptr [0xaab500] */ r_eax = R32((u32)(0xaab500u));
    /* 006049fe: mov dword ptr [0xaf0364], eax */ W32((u32)(0xaf0364u), r_eax);
    /* 00604a03: mov eax, dword ptr [0xaab518] */ r_eax = R32((u32)(0xaab518u));
    /* 00604a08: mov dword ptr [0xaf034c], eax */ W32((u32)(0xaf034cu), r_eax);
    /* 00604a0d: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x604a12u); f_007a9044();
    /* 00604a12: call 0x7a94b0 */ r_esp -= 4; W32(r_esp, 0x604a17u); f_007a94b0();
    /* 00604a17: jmp 0x6048e3 */ goto L_006048e3;
L_00604a1c:; BB(0x00604a1c);
    /* 00604a1c: mov eax, dword ptr [ebx + 0x3e4] */ r_eax = R32((u32)(r_ebx+0x3e4u));
    /* 00604a22: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604a24: jne 0x604774 */ if (!fZ) goto L_00604774;
L_00604a2a:; BB(0x00604a2a);
    /* 00604a2a: call 0x82dab0 */ r_esp -= 4; W32(r_esp, 0x604a2fu); f_0082dab0();
    /* 00604a2f: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00604a30: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00604a31: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00604a32: ret  */ FN_RET(0x00604694); r_esp += 4; return;
}

void f_00604a34(void) /* sub_604A34 */
{
    FN_ENTER(0x00604a34);
    /* 00604a34: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00604a35: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00604a36: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604a37: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00604a38: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00604a3b: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00604a3d: mov edi, dword ptr [esp + 0x20] */ r_edi = R32((u32)(r_esp+0x20u));
    /* 00604a41: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00604a45: mov ebp, dword ptr [esp + 0x28] */ r_ebp = R32((u32)(r_esp+0x28u));
    /* 00604a49: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604a4b: je 0x604dd0 */ if (fZ) goto L_00604dd0;
L_00604a51:; BB(0x00604a51);
    /* 00604a51: mov eax, dword ptr [edi + esi*4] */ r_eax = R32((u32)(r_edi+r_esi*4));
    /* 00604a54: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604a56: je 0x604dd0 */ if (fZ) goto L_00604dd0;
L_00604a5c:; BB(0x00604a5c);
    /* 00604a5c: mov eax, dword ptr [ebx + 0x450] */ r_eax = R32((u32)(r_ebx+0x450u));
    /* 00604a62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604a64: je 0x604dd0 */ if (fZ) goto L_00604dd0;
L_00604a6a:; BB(0x00604a6a);
    /* 00604a6a: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00604a6d: mov dword ptr [0xa8e464], 0 */ W32((u32)(0xa8e464u), 0x0u);
    /* 00604a77: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x604a7cu); f_0081a9b8();
    /* 00604a7c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00604a7d: movzx eax, byte ptr [ebx + 0x49f] */ r_eax = (u32)R8((u32)(r_ebx+0x49fu));
    /* 00604a84: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604a87: jne 0x604a8e */ if (!fZ) goto L_00604a8e;
L_00604a89:; BB(0x00604a89);
    /* 00604a89: mov ebp, 0x31 */ r_ebp = 0x31u;
L_00604a8e:; BB(0x00604a8e);
    /* 00604a8e: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00604a90: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00604a92: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00604a94: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00604a96: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00604a98: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00604a9a: add ebp, dword ptr [ebx + 0xe0] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ebx+0xe0u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00604aa0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00604aa2: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x604aa7u); f_0082d990();
    /* 00604aa7: movzx eax, word ptr [ebx + 0x498] */ r_eax = (u32)R16((u32)(r_ebx+0x498u));
    /* 00604aae: mov dword ptr [0xa8e448], ebx */ W32((u32)(0xa8e448u), r_ebx);
    /* 00604ab4: mov word ptr [0xa8e44c], ax */ W16((u32)(0xa8e44cu), (u16)r_eax);
    /* 00604aba: mov eax, dword ptr [ebx + 0x450] */ r_eax = R32((u32)(r_ebx+0x450u));
    /* 00604ac0: movzx edx, byte ptr [eax + 0x25] */ r_edx = (u32)R8((u32)(r_eax+0x25u));
    /* 00604ac4: mov word ptr [0xa8e450], dx */ W16((u32)(0xa8e450u), (u16)r_edx);
    /* 00604acb: movzx ebp, byte ptr [eax + 0x26] */ r_ebp = (u32)R8((u32)(r_eax+0x26u));
    /* 00604acf: mov word ptr [0xa8e452], bp */ W16((u32)(0xa8e452u), (u16)r_ebp);
    /* 00604ad6: movzx eax, byte ptr [eax + 0x27] */ r_eax = (u32)R8((u32)(r_eax+0x27u));
    /* 00604ada: mov dword ptr [ebx + 0x4f0], 0x6050b8 */ W32((u32)(r_ebx+0x4f0u), 0x6050b8u);
    /* 00604ae4: mov word ptr [0xa8e454], ax */ W16((u32)(0xa8e454u), (u16)r_eax);
    /* 00604aea: call 0x5cb0c8 */ r_esp -= 4; W32(r_esp, 0x604aefu); f_005cb0c8();
    /* 00604aef: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00604af4: call 0x5cb158 */ r_esp -= 4; W32(r_esp, 0x604af9u); f_005cb158();
    /* 00604af9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00604afa: mov eax, dword ptr [ebx + 0x484] */ r_eax = R32((u32)(r_ebx+0x484u));
    /* 00604b00: test eax, 0x3000000 */ {  u32 a = r_eax; u32 b = 0x3000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604b05: je 0x604b43 */ if (fZ) goto L_00604b43;
L_00604b07:; BB(0x00604b07);
    /* 00604b07: test eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604b0c: je 0x604b17 */ if (fZ) goto L_00604b17;
L_00604b0e:; BB(0x00604b0e);
    /* 00604b0e: movzx ebp, byte ptr [ebx + 0x505] */ r_ebp = (u32)R8((u32)(r_ebx+0x505u));
    /* 00604b15: jmp 0x604b19 */ goto L_00604b19;
L_00604b17:; BB(0x00604b17);
    /* 00604b17: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00604b19:; BB(0x00604b19);
    /* 00604b19: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604b1e: je 0x604b29 */ if (fZ) goto L_00604b29;
L_00604b20:; BB(0x00604b20);
    /* 00604b20: movzx edx, byte ptr [ebx + 0x505] */ r_edx = (u32)R8((u32)(r_ebx+0x505u));
    /* 00604b27: jmp 0x604b2b */ goto L_00604b2b;
L_00604b29:; BB(0x00604b29);
    /* 00604b29: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00604b2b:; BB(0x00604b2b);
    /* 00604b2b: movsx eax, byte ptr [ebx + 0x504] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x504u));
    /* 00604b32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604b33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00604b34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604b35: call 0x5cb350 */ r_esp -= 4; W32(r_esp, 0x604b3au); f_005cb350();
    /* 00604b3a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604b3d: mov eax, dword ptr [ebx + 0x484] */ r_eax = R32((u32)(r_ebx+0x484u));
L_00604b43:; BB(0x00604b43);
    /* 00604b43: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00604b45: jne 0x604c6f */ if (!fZ) goto L_00604c6f;
L_00604b4b:; BB(0x00604b4b);
    /* 00604b4b: mov esi, dword ptr [edi + esi*4] */ r_esi = R32((u32)(r_edi+r_esi*4));
    /* 00604b4e: mov ebp, dword ptr [ebx + 0x4f0] */ r_ebp = R32((u32)(r_ebx+0x4f0u));
    /* 00604b54: mov dword ptr [0xaab530], 0 */ W32((u32)(0xaab530u), 0x0u);
L_00604b5e:; BB(0x00604b5e);
    /* 00604b5e: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00604b60: mov eax, edi */ r_eax = r_edi;
    /* 00604b62: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00604b65: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604b68: jne 0x604bc5 */ if (!fZ) goto L_00604bc5;
L_00604b6a:; BB(0x00604b6a);
    /* 00604b6a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x604b6fu); f_0082d7b0();
    /* 00604b6f: mov ecx, dword ptr [0xaab530] */ r_ecx = R32((u32)(0xaab530u));
    /* 00604b75: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604b77: je 0x604b8b */ if (fZ) goto L_00604b8b;
L_00604b79:; BB(0x00604b79);
    /* 00604b79: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x604b7eu); f_00831650();
    /* 00604b7e: mov eax, dword ptr [0xaab530] */ r_eax = R32((u32)(0xaab530u));
    /* 00604b83: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00604b86: mov dword ptr [0xaab530], eax */ W32((u32)(0xaab530u), r_eax);
L_00604b8b:; BB(0x00604b8b);
    /* 00604b8b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604b8d: je 0x604b93 */ if (fZ) goto L_00604b93;
L_00604b8f:; BB(0x00604b8f);
    /* 00604b8f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00604b90: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x604b92u); call_ind(t); }
    /* 00604b92: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00604b93:; BB(0x00604b93);
    /* 00604b93: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604b99: jne 0x604ba4 */ if (!fZ) goto L_00604ba4;
L_00604b9b:; BB(0x00604b9b);
    /* 00604b9b: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00604b9e: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x604ba3u); f_008321d8();
    /* 00604ba3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00604ba4:; BB(0x00604ba4);
    /* 00604ba4: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604baa: jne 0x604bbb */ if (!fZ) goto L_00604bbb;
L_00604bac:; BB(0x00604bac);
    /* 00604bac: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 00604baf: mov edx, 0x8321d8 */ r_edx = 0x8321d8u;
    /* 00604bb4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00604bb6: call 0x604de8 */ r_esp -= 4; W32(r_esp, 0x604bbbu); f_00604de8();
L_00604bbb:; BB(0x00604bbb);
    /* 00604bbb: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x604bc0u); f_0082da80();
    /* 00604bc0: jmp 0x604c50 */ goto L_00604c50;
L_00604bc5:; BB(0x00604bc5);
    /* 00604bc5: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x604bcau); f_0082d7b0();
    /* 00604bca: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604bd0: jne 0x604bda */ if (!fZ) goto L_00604bda;
L_00604bd2:; BB(0x00604bd2);
    /* 00604bd2: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 00604bd5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x604bdau); f_0082d838();
L_00604bda:; BB(0x00604bda);
    /* 00604bda: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604be0: jne 0x604bef */ if (!fZ) goto L_00604bef;
L_00604be2:; BB(0x00604be2);
    /* 00604be2: lea ecx, [esi + 0x14] */ r_ecx = (u32)(r_esi+0x14u);
    /* 00604be5: mov edx, edi */ r_edx = r_edi;
    /* 00604be7: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00604bea: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x604befu); f_00830df8();
L_00604bef:; BB(0x00604bef);
    /* 00604bef: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604bf5: jne 0x604bff */ if (!fZ) goto L_00604bff;
L_00604bf7:; BB(0x00604bf7);
    /* 00604bf7: lea ecx, [esi + 0x20] */ r_ecx = (u32)(r_esi+0x20u);
    /* 00604bfa: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x604bffu); f_00831290();
L_00604bff:; BB(0x00604bff);
    /* 00604bff: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604c01: je 0x604c07 */ if (fZ) goto L_00604c07;
L_00604c03:; BB(0x00604c03);
    /* 00604c03: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00604c04: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x604c06u); call_ind(t); }
    /* 00604c06: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00604c07:; BB(0x00604c07);
    /* 00604c07: mov ecx, dword ptr [0xaab530] */ r_ecx = R32((u32)(0xaab530u));
    /* 00604c0d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604c0f: je 0x604c23 */ if (fZ) goto L_00604c23;
L_00604c11:; BB(0x00604c11);
    /* 00604c11: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x604c16u); f_00831650();
    /* 00604c16: mov eax, dword ptr [0xaab530] */ r_eax = R32((u32)(0xaab530u));
    /* 00604c1b: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00604c1e: mov dword ptr [0xaab530], eax */ W32((u32)(0xaab530u), r_eax);
L_00604c23:; BB(0x00604c23);
    /* 00604c23: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604c29: jne 0x604c34 */ if (!fZ) goto L_00604c34;
L_00604c2b:; BB(0x00604c2b);
    /* 00604c2b: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00604c2e: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x604c33u); f_008321d8();
    /* 00604c33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00604c34:; BB(0x00604c34);
    /* 00604c34: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604c3a: jne 0x604c4b */ if (!fZ) goto L_00604c4b;
L_00604c3c:; BB(0x00604c3c);
    /* 00604c3c: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 00604c3f: mov edx, 0x8321d8 */ r_edx = 0x8321d8u;
    /* 00604c44: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00604c46: call 0x604de8 */ r_esp -= 4; W32(r_esp, 0x604c4bu); f_00604de8();
L_00604c4b:; BB(0x00604c4b);
    /* 00604c4b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x604c50u); f_0082da80();
L_00604c50:; BB(0x00604c50);
    /* 00604c50: mov esi, dword ptr [esi + 0x30] */ r_esi = R32((u32)(r_esi+0x30u));
    /* 00604c53: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604c55: jne 0x604b5e */ if (!fZ) goto L_00604b5e;
L_00604c5b:; BB(0x00604c5b);
    /* 00604c5b: mov dword ptr [0xaab530], 0 */ W32((u32)(0xaab530u), 0x0u);
    /* 00604c65: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x604c6au); f_007a9044();
    /* 00604c6a: jmp 0x604d8e */ goto L_00604d8e;
L_00604c6f:; BB(0x00604c6f);
    /* 00604c6f: mov esi, dword ptr [edi + esi*4] */ r_esi = R32((u32)(r_edi+r_esi*4));
    /* 00604c72: mov ebp, dword ptr [ebx + 0x4f0] */ r_ebp = R32((u32)(r_ebx+0x4f0u));
    /* 00604c78: mov dword ptr [0xaab530], 0 */ W32((u32)(0xaab530u), 0x0u);
L_00604c82:; BB(0x00604c82);
    /* 00604c82: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00604c84: mov eax, edi */ r_eax = r_edi;
    /* 00604c86: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00604c89: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604c8c: jne 0x604ce9 */ if (!fZ) goto L_00604ce9;
L_00604c8e:; BB(0x00604c8e);
    /* 00604c8e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x604c93u); f_0082d7b0();
    /* 00604c93: mov ecx, dword ptr [0xaab530] */ r_ecx = R32((u32)(0xaab530u));
    /* 00604c99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604c9b: je 0x604caf */ if (fZ) goto L_00604caf;
L_00604c9d:; BB(0x00604c9d);
    /* 00604c9d: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x604ca2u); f_00831650();
    /* 00604ca2: mov eax, dword ptr [0xaab530] */ r_eax = R32((u32)(0xaab530u));
    /* 00604ca7: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00604caa: mov dword ptr [0xaab530], eax */ W32((u32)(0xaab530u), r_eax);
L_00604caf:; BB(0x00604caf);
    /* 00604caf: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604cb1: je 0x604cb7 */ if (fZ) goto L_00604cb7;
L_00604cb3:; BB(0x00604cb3);
    /* 00604cb3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00604cb4: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x604cb6u); call_ind(t); }
    /* 00604cb6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00604cb7:; BB(0x00604cb7);
    /* 00604cb7: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604cbd: jne 0x604cc8 */ if (!fZ) goto L_00604cc8;
L_00604cbf:; BB(0x00604cbf);
    /* 00604cbf: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00604cc2: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x604cc7u); f_008321d8();
    /* 00604cc7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00604cc8:; BB(0x00604cc8);
    /* 00604cc8: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604cce: jne 0x604cdf */ if (!fZ) goto L_00604cdf;
L_00604cd0:; BB(0x00604cd0);
    /* 00604cd0: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 00604cd3: mov edx, 0x8321d8 */ r_edx = 0x8321d8u;
    /* 00604cd8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00604cda: call 0x604de8 */ r_esp -= 4; W32(r_esp, 0x604cdfu); f_00604de8();
L_00604cdf:; BB(0x00604cdf);
    /* 00604cdf: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x604ce4u); f_0082da80();
    /* 00604ce4: jmp 0x604d74 */ goto L_00604d74;
L_00604ce9:; BB(0x00604ce9);
    /* 00604ce9: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x604ceeu); f_0082d7b0();
    /* 00604cee: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604cf4: jne 0x604cfe */ if (!fZ) goto L_00604cfe;
L_00604cf6:; BB(0x00604cf6);
    /* 00604cf6: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 00604cf9: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x604cfeu); f_0082d838();
L_00604cfe:; BB(0x00604cfe);
    /* 00604cfe: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604d04: jne 0x604d13 */ if (!fZ) goto L_00604d13;
L_00604d06:; BB(0x00604d06);
    /* 00604d06: lea ecx, [esi + 0x14] */ r_ecx = (u32)(r_esi+0x14u);
    /* 00604d09: mov edx, edi */ r_edx = r_edi;
    /* 00604d0b: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00604d0e: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x604d13u); f_00830df8();
L_00604d13:; BB(0x00604d13);
    /* 00604d13: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604d19: jne 0x604d23 */ if (!fZ) goto L_00604d23;
L_00604d1b:; BB(0x00604d1b);
    /* 00604d1b: lea ecx, [esi + 0x20] */ r_ecx = (u32)(r_esi+0x20u);
    /* 00604d1e: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x604d23u); f_00831290();
L_00604d23:; BB(0x00604d23);
    /* 00604d23: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604d25: je 0x604d2b */ if (fZ) goto L_00604d2b;
L_00604d27:; BB(0x00604d27);
    /* 00604d27: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00604d28: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x604d2au); call_ind(t); }
    /* 00604d2a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00604d2b:; BB(0x00604d2b);
    /* 00604d2b: mov ecx, dword ptr [0xaab530] */ r_ecx = R32((u32)(0xaab530u));
    /* 00604d31: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604d33: je 0x604d47 */ if (fZ) goto L_00604d47;
L_00604d35:; BB(0x00604d35);
    /* 00604d35: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x604d3au); f_00831650();
    /* 00604d3a: mov eax, dword ptr [0xaab530] */ r_eax = R32((u32)(0xaab530u));
    /* 00604d3f: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00604d42: mov dword ptr [0xaab530], eax */ W32((u32)(0xaab530u), r_eax);
L_00604d47:; BB(0x00604d47);
    /* 00604d47: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604d4d: jne 0x604d58 */ if (!fZ) goto L_00604d58;
L_00604d4f:; BB(0x00604d4f);
    /* 00604d4f: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00604d52: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x604d57u); f_008321d8();
    /* 00604d57: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00604d58:; BB(0x00604d58);
    /* 00604d58: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604d5e: jne 0x604d6f */ if (!fZ) goto L_00604d6f;
L_00604d60:; BB(0x00604d60);
    /* 00604d60: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 00604d63: mov edx, 0x8321d8 */ r_edx = 0x8321d8u;
    /* 00604d68: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00604d6a: call 0x604de8 */ r_esp -= 4; W32(r_esp, 0x604d6fu); f_00604de8();
L_00604d6f:; BB(0x00604d6f);
    /* 00604d6f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x604d74u); f_0082da80();
L_00604d74:; BB(0x00604d74);
    /* 00604d74: mov esi, dword ptr [esi + 0x30] */ r_esi = R32((u32)(r_esi+0x30u));
    /* 00604d77: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604d79: jne 0x604c82 */ if (!fZ) goto L_00604c82;
L_00604d7f:; BB(0x00604d7f);
    /* 00604d7f: mov dword ptr [0xaab530], 0 */ W32((u32)(0xaab530u), 0x0u);
    /* 00604d89: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x604d8eu); f_007a9044();
L_00604d8e:; BB(0x00604d8e);
    /* 00604d8e: mov eax, dword ptr [ebx + 0x484] */ r_eax = R32((u32)(r_ebx+0x484u));
    /* 00604d94: test eax, 0x3000000 */ {  u32 a = r_eax; u32 b = 0x3000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604d99: je 0x604da0 */ if (fZ) goto L_00604da0;
L_00604d9b:; BB(0x00604d9b);
    /* 00604d9b: call 0x66fab8 */ r_esp -= 4; W32(r_esp, 0x604da0u); f_0066fab8();
L_00604da0:; BB(0x00604da0);
    /* 00604da0: call 0x5cb228 */ r_esp -= 4; W32(r_esp, 0x604da5u); f_005cb228();
    /* 00604da5: call 0x5cb114 */ r_esp -= 4; W32(r_esp, 0x604daau); f_005cb114();
    /* 00604daa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00604dac: mov dword ptr [0xa8e46c], eax */ W32((u32)(0xa8e46cu), r_eax);
    /* 00604db1: mov dword ptr [ebx + 0x4f0], eax */ W32((u32)(r_ebx+0x4f0u), r_eax);
    /* 00604db7: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x604dbcu); f_0082da80();
    /* 00604dbc: mov dword ptr [0xa8e464], 0 */ W32((u32)(0xa8e464u), 0x0u);
    /* 00604dc6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00604dc9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00604dca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604dcb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00604dcc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00604dcd: ret 0xc */ FN_RET(0x00604a34); r_esp += 16; return;
L_00604dd0:; BB(0x00604dd0);
    /* 00604dd0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00604dd3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00604dd4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604dd5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00604dd6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00604dd7: ret 0xc */ FN_RET(0x00604a34); r_esp += 16; return;
}

void f_00604a62(void)
{
    FN_ENTER(0x00604a62);
    /* 00604a62: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604a64: je 0x604dd0 */ if (fZ) goto L_00604dd0;
L_00604a6a:; BB(0x00604a6a);
    /* 00604a6a: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00604a6d: mov dword ptr [0xa8e464], 0 */ W32((u32)(0xa8e464u), 0x0u);
    /* 00604a77: call 0x81a9b8 */ r_esp -= 4; W32(r_esp, 0x604a7cu); f_0081a9b8();
    /* 00604a7c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00604a7d: movzx eax, byte ptr [ebx + 0x49f] */ r_eax = (u32)R8((u32)(r_ebx+0x49fu));
    /* 00604a84: cmp eax, 0xd */ {  u32 a = r_eax; u32 b = 0xdu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604a87: jne 0x604a8e */ if (!fZ) goto L_00604a8e;
L_00604a89:; BB(0x00604a89);
    /* 00604a89: mov ebp, 0x31 */ r_ebp = 0x31u;
L_00604a8e:; BB(0x00604a8e);
    /* 00604a8e: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00604a90: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00604a92: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00604a94: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00604a96: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00604a98: add ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00604a9a: add ebp, dword ptr [ebx + 0xe0] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_ebx+0xe0u)); u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00604aa0: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00604aa2: call 0x82d990 */ r_esp -= 4; W32(r_esp, 0x604aa7u); f_0082d990();
    /* 00604aa7: movzx eax, word ptr [ebx + 0x498] */ r_eax = (u32)R16((u32)(r_ebx+0x498u));
    /* 00604aae: mov dword ptr [0xa8e448], ebx */ W32((u32)(0xa8e448u), r_ebx);
    /* 00604ab4: mov word ptr [0xa8e44c], ax */ W16((u32)(0xa8e44cu), (u16)r_eax);
    /* 00604aba: mov eax, dword ptr [ebx + 0x450] */ r_eax = R32((u32)(r_ebx+0x450u));
    /* 00604ac0: movzx edx, byte ptr [eax + 0x25] */ r_edx = (u32)R8((u32)(r_eax+0x25u));
    /* 00604ac4: mov word ptr [0xa8e450], dx */ W16((u32)(0xa8e450u), (u16)r_edx);
    /* 00604acb: movzx ebp, byte ptr [eax + 0x26] */ r_ebp = (u32)R8((u32)(r_eax+0x26u));
    /* 00604acf: mov word ptr [0xa8e452], bp */ W16((u32)(0xa8e452u), (u16)r_ebp);
    /* 00604ad6: movzx eax, byte ptr [eax + 0x27] */ r_eax = (u32)R8((u32)(r_eax+0x27u));
    /* 00604ada: mov dword ptr [ebx + 0x4f0], 0x6050b8 */ W32((u32)(r_ebx+0x4f0u), 0x6050b8u);
    /* 00604ae4: mov word ptr [0xa8e454], ax */ W16((u32)(0xa8e454u), (u16)r_eax);
    /* 00604aea: call 0x5cb0c8 */ r_esp -= 4; W32(r_esp, 0x604aefu); f_005cb0c8();
    /* 00604aef: push 0x3f800000 */ { u32 v = 0x3f800000u; r_esp -= 4; W32(r_esp, v); }
    /* 00604af4: call 0x5cb158 */ r_esp -= 4; W32(r_esp, 0x604af9u); f_005cb158();
    /* 00604af9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00604afa: mov eax, dword ptr [ebx + 0x484] */ r_eax = R32((u32)(r_ebx+0x484u));
    /* 00604b00: test eax, 0x3000000 */ {  u32 a = r_eax; u32 b = 0x3000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604b05: je 0x604b43 */ if (fZ) goto L_00604b43;
L_00604b07:; BB(0x00604b07);
    /* 00604b07: test eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604b0c: je 0x604b17 */ if (fZ) goto L_00604b17;
L_00604b0e:; BB(0x00604b0e);
    /* 00604b0e: movzx ebp, byte ptr [ebx + 0x505] */ r_ebp = (u32)R8((u32)(r_ebx+0x505u));
    /* 00604b15: jmp 0x604b19 */ goto L_00604b19;
L_00604b17:; BB(0x00604b17);
    /* 00604b17: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
L_00604b19:; BB(0x00604b19);
    /* 00604b19: test eax, 0x2000000 */ {  u32 a = r_eax; u32 b = 0x2000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604b1e: je 0x604b29 */ if (fZ) goto L_00604b29;
L_00604b20:; BB(0x00604b20);
    /* 00604b20: movzx edx, byte ptr [ebx + 0x505] */ r_edx = (u32)R8((u32)(r_ebx+0x505u));
    /* 00604b27: jmp 0x604b2b */ goto L_00604b2b;
L_00604b29:; BB(0x00604b29);
    /* 00604b29: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
L_00604b2b:; BB(0x00604b2b);
    /* 00604b2b: movsx eax, byte ptr [ebx + 0x504] */ r_eax = (u32)(i32)(i8)R8((u32)(r_ebx+0x504u));
    /* 00604b32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00604b33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00604b34: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604b35: call 0x5cb350 */ r_esp -= 4; W32(r_esp, 0x604b3au); f_005cb350();
    /* 00604b3a: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00604b3d: mov eax, dword ptr [ebx + 0x484] */ r_eax = R32((u32)(r_ebx+0x484u));
L_00604b43:; BB(0x00604b43);
    /* 00604b43: test al, 0x40 */ {  u32 a = (u8)r_eax; u32 b = 0x40u; u32 r = (a & b) & 0xffu;  fZ = (r == 0); }
    /* 00604b45: jne 0x604c6f */ if (!fZ) goto L_00604c6f;
L_00604b4b:; BB(0x00604b4b);
    /* 00604b4b: mov esi, dword ptr [edi + esi*4] */ r_esi = R32((u32)(r_edi+r_esi*4));
    /* 00604b4e: mov ebp, dword ptr [ebx + 0x4f0] */ r_ebp = R32((u32)(r_ebx+0x4f0u));
    /* 00604b54: mov dword ptr [0xaab530], 0 */ W32((u32)(0xaab530u), 0x0u);
L_00604b5e:; BB(0x00604b5e);
    /* 00604b5e: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00604b60: mov eax, edi */ r_eax = r_edi;
    /* 00604b62: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00604b65: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604b68: jne 0x604bc5 */ if (!fZ) goto L_00604bc5;
L_00604b6a:; BB(0x00604b6a);
    /* 00604b6a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x604b6fu); f_0082d7b0();
    /* 00604b6f: mov ecx, dword ptr [0xaab530] */ r_ecx = R32((u32)(0xaab530u));
    /* 00604b75: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604b77: je 0x604b8b */ if (fZ) goto L_00604b8b;
L_00604b79:; BB(0x00604b79);
    /* 00604b79: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x604b7eu); f_00831650();
    /* 00604b7e: mov eax, dword ptr [0xaab530] */ r_eax = R32((u32)(0xaab530u));
    /* 00604b83: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00604b86: mov dword ptr [0xaab530], eax */ W32((u32)(0xaab530u), r_eax);
L_00604b8b:; BB(0x00604b8b);
    /* 00604b8b: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604b8d: je 0x604b93 */ if (fZ) goto L_00604b93;
L_00604b8f:; BB(0x00604b8f);
    /* 00604b8f: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00604b90: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x604b92u); call_ind(t); }
    /* 00604b92: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00604b93:; BB(0x00604b93);
    /* 00604b93: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604b99: jne 0x604ba4 */ if (!fZ) goto L_00604ba4;
L_00604b9b:; BB(0x00604b9b);
    /* 00604b9b: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00604b9e: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x604ba3u); f_008321d8();
    /* 00604ba3: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00604ba4:; BB(0x00604ba4);
    /* 00604ba4: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604baa: jne 0x604bbb */ if (!fZ) goto L_00604bbb;
L_00604bac:; BB(0x00604bac);
    /* 00604bac: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 00604baf: mov edx, 0x8321d8 */ r_edx = 0x8321d8u;
    /* 00604bb4: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00604bb6: call 0x604de8 */ r_esp -= 4; W32(r_esp, 0x604bbbu); f_00604de8();
L_00604bbb:; BB(0x00604bbb);
    /* 00604bbb: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x604bc0u); f_0082da80();
    /* 00604bc0: jmp 0x604c50 */ goto L_00604c50;
L_00604bc5:; BB(0x00604bc5);
    /* 00604bc5: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x604bcau); f_0082d7b0();
    /* 00604bca: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604bd0: jne 0x604bda */ if (!fZ) goto L_00604bda;
L_00604bd2:; BB(0x00604bd2);
    /* 00604bd2: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 00604bd5: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x604bdau); f_0082d838();
L_00604bda:; BB(0x00604bda);
    /* 00604bda: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604be0: jne 0x604bef */ if (!fZ) goto L_00604bef;
L_00604be2:; BB(0x00604be2);
    /* 00604be2: lea ecx, [esi + 0x14] */ r_ecx = (u32)(r_esi+0x14u);
    /* 00604be5: mov edx, edi */ r_edx = r_edi;
    /* 00604be7: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00604bea: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x604befu); f_00830df8();
L_00604bef:; BB(0x00604bef);
    /* 00604bef: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604bf5: jne 0x604bff */ if (!fZ) goto L_00604bff;
L_00604bf7:; BB(0x00604bf7);
    /* 00604bf7: lea ecx, [esi + 0x20] */ r_ecx = (u32)(r_esi+0x20u);
    /* 00604bfa: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x604bffu); f_00831290();
L_00604bff:; BB(0x00604bff);
    /* 00604bff: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604c01: je 0x604c07 */ if (fZ) goto L_00604c07;
L_00604c03:; BB(0x00604c03);
    /* 00604c03: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00604c04: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x604c06u); call_ind(t); }
    /* 00604c06: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00604c07:; BB(0x00604c07);
    /* 00604c07: mov ecx, dword ptr [0xaab530] */ r_ecx = R32((u32)(0xaab530u));
    /* 00604c0d: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604c0f: je 0x604c23 */ if (fZ) goto L_00604c23;
L_00604c11:; BB(0x00604c11);
    /* 00604c11: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x604c16u); f_00831650();
    /* 00604c16: mov eax, dword ptr [0xaab530] */ r_eax = R32((u32)(0xaab530u));
    /* 00604c1b: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00604c1e: mov dword ptr [0xaab530], eax */ W32((u32)(0xaab530u), r_eax);
L_00604c23:; BB(0x00604c23);
    /* 00604c23: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604c29: jne 0x604c34 */ if (!fZ) goto L_00604c34;
L_00604c2b:; BB(0x00604c2b);
    /* 00604c2b: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00604c2e: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x604c33u); f_008321d8();
    /* 00604c33: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00604c34:; BB(0x00604c34);
    /* 00604c34: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604c3a: jne 0x604c4b */ if (!fZ) goto L_00604c4b;
L_00604c3c:; BB(0x00604c3c);
    /* 00604c3c: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 00604c3f: mov edx, 0x8321d8 */ r_edx = 0x8321d8u;
    /* 00604c44: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00604c46: call 0x604de8 */ r_esp -= 4; W32(r_esp, 0x604c4bu); f_00604de8();
L_00604c4b:; BB(0x00604c4b);
    /* 00604c4b: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x604c50u); f_0082da80();
L_00604c50:; BB(0x00604c50);
    /* 00604c50: mov esi, dword ptr [esi + 0x30] */ r_esi = R32((u32)(r_esi+0x30u));
    /* 00604c53: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604c55: jne 0x604b5e */ if (!fZ) goto L_00604b5e;
L_00604c5b:; BB(0x00604c5b);
    /* 00604c5b: mov dword ptr [0xaab530], 0 */ W32((u32)(0xaab530u), 0x0u);
    /* 00604c65: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x604c6au); f_007a9044();
    /* 00604c6a: jmp 0x604d8e */ goto L_00604d8e;
L_00604c6f:; BB(0x00604c6f);
    /* 00604c6f: mov esi, dword ptr [edi + esi*4] */ r_esi = R32((u32)(r_edi+r_esi*4));
    /* 00604c72: mov ebp, dword ptr [ebx + 0x4f0] */ r_ebp = R32((u32)(r_ebx+0x4f0u));
    /* 00604c78: mov dword ptr [0xaab530], 0 */ W32((u32)(0xaab530u), 0x0u);
L_00604c82:; BB(0x00604c82);
    /* 00604c82: mov edi, dword ptr [esi] */ r_edi = R32((u32)(r_esi));
    /* 00604c84: mov eax, edi */ r_eax = r_edi;
    /* 00604c86: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00604c89: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604c8c: jne 0x604ce9 */ if (!fZ) goto L_00604ce9;
L_00604c8e:; BB(0x00604c8e);
    /* 00604c8e: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x604c93u); f_0082d7b0();
    /* 00604c93: mov ecx, dword ptr [0xaab530] */ r_ecx = R32((u32)(0xaab530u));
    /* 00604c99: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604c9b: je 0x604caf */ if (fZ) goto L_00604caf;
L_00604c9d:; BB(0x00604c9d);
    /* 00604c9d: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x604ca2u); f_00831650();
    /* 00604ca2: mov eax, dword ptr [0xaab530] */ r_eax = R32((u32)(0xaab530u));
    /* 00604ca7: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00604caa: mov dword ptr [0xaab530], eax */ W32((u32)(0xaab530u), r_eax);
L_00604caf:; BB(0x00604caf);
    /* 00604caf: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604cb1: je 0x604cb7 */ if (fZ) goto L_00604cb7;
L_00604cb3:; BB(0x00604cb3);
    /* 00604cb3: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00604cb4: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x604cb6u); call_ind(t); }
    /* 00604cb6: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00604cb7:; BB(0x00604cb7);
    /* 00604cb7: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604cbd: jne 0x604cc8 */ if (!fZ) goto L_00604cc8;
L_00604cbf:; BB(0x00604cbf);
    /* 00604cbf: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00604cc2: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x604cc7u); f_008321d8();
    /* 00604cc7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00604cc8:; BB(0x00604cc8);
    /* 00604cc8: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604cce: jne 0x604cdf */ if (!fZ) goto L_00604cdf;
L_00604cd0:; BB(0x00604cd0);
    /* 00604cd0: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 00604cd3: mov edx, 0x8321d8 */ r_edx = 0x8321d8u;
    /* 00604cd8: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00604cda: call 0x604de8 */ r_esp -= 4; W32(r_esp, 0x604cdfu); f_00604de8();
L_00604cdf:; BB(0x00604cdf);
    /* 00604cdf: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x604ce4u); f_0082da80();
    /* 00604ce4: jmp 0x604d74 */ goto L_00604d74;
L_00604ce9:; BB(0x00604ce9);
    /* 00604ce9: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x604ceeu); f_0082d7b0();
    /* 00604cee: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604cf4: jne 0x604cfe */ if (!fZ) goto L_00604cfe;
L_00604cf6:; BB(0x00604cf6);
    /* 00604cf6: lea ecx, [esi + 8] */ r_ecx = (u32)(r_esi+0x8u);
    /* 00604cf9: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x604cfeu); f_0082d838();
L_00604cfe:; BB(0x00604cfe);
    /* 00604cfe: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604d04: jne 0x604d13 */ if (!fZ) goto L_00604d13;
L_00604d06:; BB(0x00604d06);
    /* 00604d06: lea ecx, [esi + 0x14] */ r_ecx = (u32)(r_esi+0x14u);
    /* 00604d09: mov edx, edi */ r_edx = r_edi;
    /* 00604d0b: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00604d0e: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x604d13u); f_00830df8();
L_00604d13:; BB(0x00604d13);
    /* 00604d13: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604d19: jne 0x604d23 */ if (!fZ) goto L_00604d23;
L_00604d1b:; BB(0x00604d1b);
    /* 00604d1b: lea ecx, [esi + 0x20] */ r_ecx = (u32)(r_esi+0x20u);
    /* 00604d1e: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x604d23u); f_00831290();
L_00604d23:; BB(0x00604d23);
    /* 00604d23: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604d25: je 0x604d2b */ if (fZ) goto L_00604d2b;
L_00604d27:; BB(0x00604d27);
    /* 00604d27: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00604d28: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x604d2au); call_ind(t); }
    /* 00604d2a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00604d2b:; BB(0x00604d2b);
    /* 00604d2b: mov ecx, dword ptr [0xaab530] */ r_ecx = R32((u32)(0xaab530u));
    /* 00604d31: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604d33: je 0x604d47 */ if (fZ) goto L_00604d47;
L_00604d35:; BB(0x00604d35);
    /* 00604d35: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x604d3au); f_00831650();
    /* 00604d3a: mov eax, dword ptr [0xaab530] */ r_eax = R32((u32)(0xaab530u));
    /* 00604d3f: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00604d42: mov dword ptr [0xaab530], eax */ W32((u32)(0xaab530u), r_eax);
L_00604d47:; BB(0x00604d47);
    /* 00604d47: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604d4d: jne 0x604d58 */ if (!fZ) goto L_00604d58;
L_00604d4f:; BB(0x00604d4f);
    /* 00604d4f: push dword ptr [esi + 4] */ { u32 v = R32((u32)(r_esi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00604d52: call 0x8321d8 */ r_esp -= 4; W32(r_esp, 0x604d57u); f_008321d8();
    /* 00604d57: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00604d58:; BB(0x00604d58);
    /* 00604d58: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604d5e: jne 0x604d6f */ if (!fZ) goto L_00604d6f;
L_00604d60:; BB(0x00604d60);
    /* 00604d60: mov eax, dword ptr [esi + 0x2c] */ r_eax = R32((u32)(r_esi+0x2cu));
    /* 00604d63: mov edx, 0x8321d8 */ r_edx = 0x8321d8u;
    /* 00604d68: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00604d6a: call 0x604de8 */ r_esp -= 4; W32(r_esp, 0x604d6fu); f_00604de8();
L_00604d6f:; BB(0x00604d6f);
    /* 00604d6f: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x604d74u); f_0082da80();
L_00604d74:; BB(0x00604d74);
    /* 00604d74: mov esi, dword ptr [esi + 0x30] */ r_esi = R32((u32)(r_esi+0x30u));
    /* 00604d77: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604d79: jne 0x604c82 */ if (!fZ) goto L_00604c82;
L_00604d7f:; BB(0x00604d7f);
    /* 00604d7f: mov dword ptr [0xaab530], 0 */ W32((u32)(0xaab530u), 0x0u);
    /* 00604d89: call 0x7a9044 */ r_esp -= 4; W32(r_esp, 0x604d8eu); f_007a9044();
L_00604d8e:; BB(0x00604d8e);
    /* 00604d8e: mov eax, dword ptr [ebx + 0x484] */ r_eax = R32((u32)(r_ebx+0x484u));
    /* 00604d94: test eax, 0x3000000 */ {  u32 a = r_eax; u32 b = 0x3000000u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604d99: je 0x604da0 */ if (fZ) goto L_00604da0;
L_00604d9b:; BB(0x00604d9b);
    /* 00604d9b: call 0x66fab8 */ r_esp -= 4; W32(r_esp, 0x604da0u); f_0066fab8();
L_00604da0:; BB(0x00604da0);
    /* 00604da0: call 0x5cb228 */ r_esp -= 4; W32(r_esp, 0x604da5u); f_005cb228();
    /* 00604da5: call 0x5cb114 */ r_esp -= 4; W32(r_esp, 0x604daau); f_005cb114();
    /* 00604daa: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00604dac: mov dword ptr [0xa8e46c], eax */ W32((u32)(0xa8e46cu), r_eax);
    /* 00604db1: mov dword ptr [ebx + 0x4f0], eax */ W32((u32)(r_ebx+0x4f0u), r_eax);
    /* 00604db7: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x604dbcu); f_0082da80();
    /* 00604dbc: mov dword ptr [0xa8e464], 0 */ W32((u32)(0xa8e464u), 0x0u);
    /* 00604dc6: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00604dc9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00604dca: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604dcb: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00604dcc: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00604dcd: ret 0xc */ FN_RET(0x00604a62); r_esp += 16; return;
L_00604dd0:; BB(0x00604dd0);
    /* 00604dd0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00604dd3: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00604dd4: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604dd5: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00604dd6: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00604dd7: ret 0xc */ FN_RET(0x00604a62); r_esp += 16; return;
}

void f_00604bf8(void)
{
    FN_ENTER(0x00604bf8);
    /* 00604bf8: dec esi */ { u32 x = r_esi; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_esi = r;  }
    /* 00604bf9: and al, ch */ {  u32 a = (u8)r_eax; u32 b = (u8)(r_ecx>>8); u32 r = (a & b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
    /* 00604bfb: xchg ecx, eax */ { u32 x = r_ecx; u32 y = r_eax; r_ecx = y; r_eax = x; }
    UNSUP(0x00604bfc, "falls out of decoded code");
}

void f_00604de8(void) /* sub_604DE8 */
{
    FN_ENTER(0x00604de8);
    /* 00604de8: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00604de9: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00604dea: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00604deb: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00604dec: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00604def: mov ebx, eax */ r_ebx = r_eax;
    /* 00604df1: mov ebp, edx */ r_ebp = r_edx;
    /* 00604df3: mov esi, ecx */ r_esi = r_ecx;
L_00604df5:; BB(0x00604df5);
    /* 00604df5: mov edi, dword ptr [ebx] */ r_edi = R32((u32)(r_ebx));
    /* 00604df7: mov eax, edi */ r_eax = r_edi;
    /* 00604df9: and eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a & b) & 0xffffffffu; r_eax = r;  }
    /* 00604dfc: cmp eax, 7 */ {  u32 a = r_eax; u32 b = 0x7u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604dff: jne 0x604e5a */ if (!fZ) goto L_00604e5a;
L_00604e01:; BB(0x00604e01);
    /* 00604e01: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x604e06u); f_0082d7b0();
    /* 00604e06: mov ecx, dword ptr [0xaab530] */ r_ecx = R32((u32)(0xaab530u));
    /* 00604e0c: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604e0e: je 0x604e22 */ if (fZ) goto L_00604e22;
L_00604e10:; BB(0x00604e10);
    /* 00604e10: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x604e15u); f_00831650();
    /* 00604e15: mov eax, dword ptr [0xaab530] */ r_eax = R32((u32)(0xaab530u));
    /* 00604e1a: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00604e1d: mov dword ptr [0xaab530], eax */ W32((u32)(0xaab530u), r_eax);
L_00604e22:; BB(0x00604e22);
    /* 00604e22: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604e24: je 0x604e2a */ if (fZ) goto L_00604e2a;
L_00604e26:; BB(0x00604e26);
    /* 00604e26: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00604e27: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x604e29u); call_ind(t); }
    /* 00604e29: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00604e2a:; BB(0x00604e2a);
    /* 00604e2a: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604e30: jne 0x604e3c */ if (!fZ) goto L_00604e3c;
L_00604e32:; BB(0x00604e32);
    /* 00604e32: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604e34: je 0x604e3c */ if (fZ) goto L_00604e3c;
L_00604e36:; BB(0x00604e36);
    /* 00604e36: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00604e39: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x604e3bu); call_ind(t); }
    /* 00604e3b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00604e3c:; BB(0x00604e3c);
    /* 00604e3c: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604e42: jne 0x604e50 */ if (!fZ) goto L_00604e50;
L_00604e44:; BB(0x00604e44);
    /* 00604e44: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 00604e47: mov edx, ebp */ r_edx = r_ebp;
    /* 00604e49: mov ecx, esi */ r_ecx = r_esi;
    /* 00604e4b: call 0x604de8 */ r_esp -= 4; W32(r_esp, 0x604e50u); f_00604de8();
L_00604e50:; BB(0x00604e50);
    /* 00604e50: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x604e55u); f_0082da80();
    /* 00604e55: jmp 0x604ee3 */ goto L_00604ee3;
L_00604e5a:; BB(0x00604e5a);
    /* 00604e5a: call 0x82d7b0 */ r_esp -= 4; W32(r_esp, 0x604e5fu); f_0082d7b0();
    /* 00604e5f: test edi, 1 */ {  u32 a = r_edi; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604e65: jne 0x604e6f */ if (!fZ) goto L_00604e6f;
L_00604e67:; BB(0x00604e67);
    /* 00604e67: lea ecx, [ebx + 8] */ r_ecx = (u32)(r_ebx+0x8u);
    /* 00604e6a: call 0x82d838 */ r_esp -= 4; W32(r_esp, 0x604e6fu); f_0082d838();
L_00604e6f:; BB(0x00604e6f);
    /* 00604e6f: test edi, 2 */ {  u32 a = r_edi; u32 b = 0x2u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604e75: jne 0x604e84 */ if (!fZ) goto L_00604e84;
L_00604e77:; BB(0x00604e77);
    /* 00604e77: mov edx, edi */ r_edx = r_edi;
    /* 00604e79: and edx, 0x20 */ {  u32 a = r_edx; u32 b = 0x20u; u32 r = (a & b) & 0xffffffffu; r_edx = r;  }
    /* 00604e7c: lea ecx, [ebx + 0x14] */ r_ecx = (u32)(r_ebx+0x14u);
    /* 00604e7f: call 0x830df8 */ r_esp -= 4; W32(r_esp, 0x604e84u); f_00830df8();
L_00604e84:; BB(0x00604e84);
    /* 00604e84: test edi, 4 */ {  u32 a = r_edi; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604e8a: jne 0x604e94 */ if (!fZ) goto L_00604e94;
L_00604e8c:; BB(0x00604e8c);
    /* 00604e8c: lea ecx, [ebx + 0x20] */ r_ecx = (u32)(r_ebx+0x20u);
    /* 00604e8f: call 0x831290 */ r_esp -= 4; W32(r_esp, 0x604e94u); f_00831290();
L_00604e94:; BB(0x00604e94);
    /* 00604e94: test esi, esi */ {  u32 a = r_esi; u32 b = r_esi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604e96: je 0x604e9c */ if (fZ) goto L_00604e9c;
L_00604e98:; BB(0x00604e98);
    /* 00604e98: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00604e99: call esi */ { u32 t = r_esi; r_esp -= 4; W32(r_esp, 0x604e9bu); call_ind(t); }
    /* 00604e9b: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00604e9c:; BB(0x00604e9c);
    /* 00604e9c: mov ecx, dword ptr [0xaab530] */ r_ecx = R32((u32)(0xaab530u));
    /* 00604ea2: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604ea4: je 0x604eb8 */ if (fZ) goto L_00604eb8;
L_00604ea6:; BB(0x00604ea6);
    /* 00604ea6: call 0x831650 */ r_esp -= 4; W32(r_esp, 0x604eabu); f_00831650();
    /* 00604eab: mov eax, dword ptr [0xaab530] */ r_eax = R32((u32)(0xaab530u));
    /* 00604eb0: add eax, 0x40 */ {  u32 a = r_eax; u32 b = 0x40u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00604eb3: mov dword ptr [0xaab530], eax */ W32((u32)(0xaab530u), r_eax);
L_00604eb8:; BB(0x00604eb8);
    /* 00604eb8: test edi, 8 */ {  u32 a = r_edi; u32 b = 0x8u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604ebe: jne 0x604eca */ if (!fZ) goto L_00604eca;
L_00604ec0:; BB(0x00604ec0);
    /* 00604ec0: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604ec2: je 0x604eca */ if (fZ) goto L_00604eca;
L_00604ec4:; BB(0x00604ec4);
    /* 00604ec4: push dword ptr [ebx + 4] */ { u32 v = R32((u32)(r_ebx+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00604ec7: call ebp */ { u32 t = r_ebp; r_esp -= 4; W32(r_esp, 0x604ec9u); call_ind(t); }
    /* 00604ec9: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
L_00604eca:; BB(0x00604eca);
    /* 00604eca: test edi, 0x10 */ {  u32 a = r_edi; u32 b = 0x10u; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604ed0: jne 0x604ede */ if (!fZ) goto L_00604ede;
L_00604ed2:; BB(0x00604ed2);
    /* 00604ed2: mov eax, dword ptr [ebx + 0x2c] */ r_eax = R32((u32)(r_ebx+0x2cu));
    /* 00604ed5: mov edx, ebp */ r_edx = r_ebp;
    /* 00604ed7: mov ecx, esi */ r_ecx = r_esi;
    /* 00604ed9: call 0x604de8 */ r_esp -= 4; W32(r_esp, 0x604edeu); f_00604de8();
L_00604ede:; BB(0x00604ede);
    /* 00604ede: call 0x82da80 */ r_esp -= 4; W32(r_esp, 0x604ee3u); f_0082da80();
L_00604ee3:; BB(0x00604ee3);
    /* 00604ee3: mov ebx, dword ptr [ebx + 0x30] */ r_ebx = R32((u32)(r_ebx+0x30u));
    /* 00604ee6: test ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604ee8: jne 0x604df5 */ if (!fZ) goto L_00604df5;
L_00604eee:; BB(0x00604eee);
    /* 00604eee: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00604ef1: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00604ef2: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00604ef3: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00604ef4: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00604ef5: ret  */ FN_RET(0x00604de8); r_esp += 4; return;
}

void f_00604ef8(void) /* sub_604EF8 */
{
    FN_ENTER(0x00604ef8);
    /* 00604ef8: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00604efc: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00604efe: je 0x605037 */ if (fZ) goto L_00605037;
L_00604f04:; BB(0x00604f04);
    /* 00604f04: movzx edx, byte ptr [ecx + 0x440] */ r_edx = (u32)R8((u32)(r_ecx+0x440u));
    /* 00604f0b: cmp edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604f0e: je 0x604f39 */ if (fZ) goto L_00604f39;
L_00604f10:; BB(0x00604f10);
    /* 00604f10: cmp edx, 8 */ {  u32 a = r_edx; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604f13: je 0x604f39 */ if (fZ) goto L_00604f39;
L_00604f15:; BB(0x00604f15);
    /* 00604f15: cmp edx, 0x18 */ {  u32 a = r_edx; u32 b = 0x18u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604f18: je 0x604f39 */ if (fZ) goto L_00604f39;
L_00604f1a:; BB(0x00604f1a);
    /* 00604f1a: cmp edx, 0x36 */ {  u32 a = r_edx; u32 b = 0x36u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604f1d: je 0x604f39 */ if (fZ) goto L_00604f39;
L_00604f1f:; BB(0x00604f1f);
    /* 00604f1f: cmp edx, 0x38 */ {  u32 a = r_edx; u32 b = 0x38u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604f22: je 0x604f39 */ if (fZ) goto L_00604f39;
L_00604f24:; BB(0x00604f24);
    /* 00604f24: cmp edx, 0x62 */ {  u32 a = r_edx; u32 b = 0x62u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604f27: je 0x604f39 */ if (fZ) goto L_00604f39;
L_00604f29:; BB(0x00604f29);
    /* 00604f29: cmp edx, 0x89 */ {  u32 a = r_edx; u32 b = 0x89u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604f2f: je 0x604f39 */ if (fZ) goto L_00604f39;
L_00604f31:; BB(0x00604f31);
    /* 00604f31: cmp edx, 0xa0 */ {  u32 a = r_edx; u32 b = 0xa0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604f37: jne 0x604f4a */ if (!fZ) goto L_00604f4a;
L_00604f39:; BB(0x00604f39);
    /* 00604f39: mov eax, dword ptr [ecx + 0x484] */ r_eax = R32((u32)(r_ecx+0x484u));
    /* 00604f3f: or eax, 0x400 */ {  u32 a = r_eax; u32 b = 0x400u; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00604f44: mov dword ptr [ecx + 0x484], eax */ W32((u32)(r_ecx+0x484u), r_eax);
L_00604f4a:; BB(0x00604f4a);
    /* 00604f4a: cmp edx, 0x1b */ {  u32 a = r_edx; u32 b = 0x1bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604f4d: je 0x60503a */ if (fZ) goto L_0060503a;
L_00604f53:; BB(0x00604f53);
    /* 00604f53: cmp edx, 0x21 */ {  u32 a = r_edx; u32 b = 0x21u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604f56: je 0x604ffe */ if (fZ) goto L_00604ffe;
L_00604f5c:; BB(0x00604f5c);
    /* 00604f5c: cmp edx, 0x9d */ {  u32 a = r_edx; u32 b = 0x9du; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00604f62: jne 0x604fac */ if (!fZ) goto L_00604fac;
L_00604f64:; BB(0x00604f64);
    /* 00604f64: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00604f68: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00604f6a: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00604f6d: mov eax, dword ptr [eax + 0x30] */ r_eax = R32((u32)(r_eax+0x30u));
    /* 00604f70: mov dword ptr [ecx + 0x4fc], eax */ W32((u32)(r_ecx+0x4fcu), r_eax);
    /* 00604f76: mov eax, 0x10 */ r_eax = 0x10u;
    /* 00604f7b: mov byte ptr [ecx + 0x505], 4 */ W8((u32)(r_ecx+0x505u), 0x4u);
    /* 00604f82: mov word ptr [ecx + 0x500], ax */ W16((u32)(r_ecx+0x500u), (u16)r_eax);
    /* 00604f89: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00604f8b: mov word ptr [ecx + 0x502], ax */ W16((u32)(r_ecx+0x502u), (u16)r_eax);
    /* 00604f92: mov byte ptr [ecx + 0x504], al */ W8((u32)(r_ecx+0x504u), (u8)r_eax);
    /* 00604f98: mov eax, dword ptr [ecx + 0x484] */ r_eax = R32((u32)(r_ecx+0x484u));
    /* 00604f9e: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00604fa3: mov dword ptr [ecx + 0x484], eax */ W32((u32)(r_ecx+0x484u), r_eax);
    /* 00604fa9: ret 4 */ FN_RET(0x00604ef8); r_esp += 8; return;
L_00604fac:; BB(0x00604fac);
    /* 00604fac: cmp edx, 0x1a */ {  u32 a = r_edx; u32 b = 0x1au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00604faf: jne 0x605037 */ if (!fZ) goto L_00605037;
L_00604fb5:; BB(0x00604fb5);
    /* 00604fb5: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00604fb9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00604fbb: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00604fbe: mov dword ptr [ecx + 0x4fc], eax */ W32((u32)(r_ecx+0x4fcu), r_eax);
    /* 00604fc4: mov eax, 2 */ r_eax = 0x2u;
    /* 00604fc9: mov word ptr [ecx + 0x500], ax */ W16((u32)(r_ecx+0x500u), (u16)r_eax);
    /* 00604fd0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00604fd2: mov word ptr [ecx + 0x502], ax */ W16((u32)(r_ecx+0x502u), (u16)r_eax);
    /* 00604fd9: mov eax, 1 */ r_eax = 0x1u;
    /* 00604fde: mov byte ptr [ecx + 0x504], al */ W8((u32)(r_ecx+0x504u), (u8)r_eax);
    /* 00604fe4: mov byte ptr [ecx + 0x505], al */ W8((u32)(r_ecx+0x505u), (u8)r_eax);
    /* 00604fea: mov eax, dword ptr [ecx + 0x484] */ r_eax = R32((u32)(r_ecx+0x484u));
    /* 00604ff0: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00604ff5: mov dword ptr [ecx + 0x484], eax */ W32((u32)(r_ecx+0x484u), r_eax);
    /* 00604ffb: ret 4 */ FN_RET(0x00604ef8); r_esp += 8; return;
L_00604ffe:; BB(0x00604ffe);
    /* 00604ffe: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00605002: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00605004: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00605007: mov dword ptr [ecx + 0x4fc], eax */ W32((u32)(r_ecx+0x4fcu), r_eax);
    /* 0060500d: mov eax, 0x23 */ r_eax = 0x23u;
    /* 00605012: mov word ptr [ecx + 0x500], ax */ W16((u32)(r_ecx+0x500u), (u16)r_eax);
    /* 00605019: mov byte ptr [ecx + 0x504], 0 */ W8((u32)(r_ecx+0x504u), 0x0u);
    /* 00605020: mov byte ptr [ecx + 0x505], al */ W8((u32)(r_ecx+0x505u), (u8)r_eax);
    /* 00605026: mov eax, dword ptr [ecx + 0x484] */ r_eax = R32((u32)(r_ecx+0x484u));
    /* 0060502c: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00605031: mov dword ptr [ecx + 0x484], eax */ W32((u32)(r_ecx+0x484u), r_eax);
L_00605037:; BB(0x00605037);
    /* 00605037: ret 4 */ FN_RET(0x00604ef8); r_esp += 8; return;
L_0060503a:; BB(0x0060503a);
    /* 0060503a: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 0060503e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00605040: mov eax, dword ptr [edx + 0x2c] */ r_eax = R32((u32)(r_edx+0x2cu));
    /* 00605043: mov dword ptr [ecx + 0x4fc], eax */ W32((u32)(r_ecx+0x4fcu), r_eax);
    /* 00605049: mov edx, 2 */ r_edx = 0x2u;
    /* 0060504e: mov word ptr [ecx + 0x500], dx */ W16((u32)(r_ecx+0x500u), (u16)r_edx);
    /* 00605055: mov byte ptr [ecx + 0x504], 1 */ W8((u32)(r_ecx+0x504u), 0x1u);
    /* 0060505c: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0060505e: mov word ptr [ecx + 0x502], ax */ W16((u32)(r_ecx+0x502u), (u16)r_eax);
    /* 00605065: mov eax, dword ptr [ecx + 0x484] */ r_eax = R32((u32)(r_ecx+0x484u));
    /* 0060506b: or eax, 0x1000000 */ {  u32 a = r_eax; u32 b = 0x1000000u; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00605070: mov byte ptr [ecx + 0x505], dl */ W8((u32)(r_ecx+0x505u), (u8)r_edx);
    /* 00605076: mov dword ptr [ecx + 0x484], eax */ W32((u32)(r_ecx+0x484u), r_eax);
    /* 0060507c: ret 4 */ FN_RET(0x00604ef8); r_esp += 8; return;
}

