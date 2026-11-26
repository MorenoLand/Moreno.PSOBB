#include "protos.h"

void f_0087533f(void)
{
    FN_ENTER(0x0087533f);
    goto L_0087533f;
L_00875187:; BB(0x00875187);
    /* 00875187: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0087518a: cmp dword ptr [esi + 0x24], 0 */ {  u32 a = R32((u32)(r_esi+0x24u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087518e: je 0x87542a */ if (fZ) goto L_0087542a;
L_00875194:; BB(0x00875194);
    /* 00875194: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00875196: je 0x8752e3 */ if (fZ) goto L_008752e3;
L_0087519c:; BB(0x0087519c);
    /* 0087519c: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008751a0: mov edx, dword ptr [eax + 8] */ r_edx = R32((u32)(r_eax+0x8u));
    /* 008751a3: sub edx, dword ptr [esp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008751a7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008751a8: call 0x88417c */ r_esp -= 4; W32(r_esp, 0x8751adu); f_0088417c();
    /* 008751ad: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 008751b1: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008751b4: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 008751b7: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 008751bb: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 008751be: mov dword ptr [esp + 0x54], ecx */ W32((u32)(r_esp+0x54u), r_ecx);
    /* 008751c2: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 008751c5: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 008751c9: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
    /* 008751cc: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 008751d0: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 008751d2: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 008751d5: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 008751d7: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 008751db: mov edx, dword ptr [esp + 0x18] */ r_edx = R32((u32)(r_esp+0x18u));
    /* 008751df: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 008751e1: jle 0x875717 */ if ((fZ||fS!=fO)) goto L_00875717;
L_008751e7:; BB(0x008751e7);
    /* 008751e7: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008751ea: jl 0x875786 */ if ((fS!=fO)) goto L_00875786;
L_008751f0:; BB(0x008751f0);
    /* 008751f0: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 008751f4: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 008751f8: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
    /* 008751fb: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 008751ff: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00875203: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 00875206: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875208: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087520a: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 0087520e: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 00875212: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 00875216: jmp 0x87521c */ goto L_0087521c;
L_00875218:; BB(0x00875218);
    /* 00875218: fstp dword ptr [ebp + ecx*4 - 4] */ W_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
L_0087521c:; BB(0x0087521c);
    /* 0087521c: fld dword ptr [ebp + ecx*4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4)));
    /* 00875220: mov edi, dword ptr [esp + 0x5c] */ r_edi = R32((u32)(r_esp+0x5cu));
    /* 00875224: fmul dword ptr [edi + edx - 4] */ ST(0) = ST(0) * R_F32((u32)(r_edi+r_edx+0xfffffffcu));
    /* 00875228: fld dword ptr [eax + ecx*4] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4)));
    /* 0087522b: fmul dword ptr [esi + ecx*4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ecx*4));
    /* 0087522e: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00875230: fstp dword ptr [ebp + ecx*4] */ W_F32((u32)(r_ebp+r_ecx*4), ST(0)); FPOP();
    /* 00875234: fld dword ptr [ebp + ecx*4 + 4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4+0x4u)));
    /* 00875238: fmul dword ptr [edi + edx - 8] */ ST(0) = ST(0) * R_F32((u32)(r_edi+r_edx+0xfffffff8u));
    /* 0087523c: fld dword ptr [eax + ecx*4 + 4] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x4u)));
    /* 00875240: fmul dword ptr [esi + ecx*4 + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ecx*4+0x4u));
    /* 00875244: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00875246: fstp dword ptr [ebp + ecx*4 + 4] */ W_F32((u32)(r_ebp+r_ecx*4+0x4u), ST(0)); FPOP();
    /* 0087524a: fld dword ptr [ebp + ecx*4 + 8] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4+0x8u)));
    /* 0087524e: fmul dword ptr [edi + edx - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edi+r_edx+0xfffffff4u));
    /* 00875252: fld dword ptr [eax + ecx*4 + 8] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x8u)));
    /* 00875256: fmul dword ptr [esi + ecx*4 + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ecx*4+0x8u));
    /* 0087525a: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087525c: add edx, -0xc */ {  u32 a = r_edx; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087525f: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00875262: mov edi, dword ptr [esp + 0x58] */ r_edi = R32((u32)(r_esp+0x58u));
    /* 00875266: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875268: jle 0x875218 */ if ((fZ||fS!=fO)) goto L_00875218;
L_0087526a:; BB(0x0087526a);
    /* 0087526a: fstp dword ptr [ebp + ecx*4 - 4] */ W_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
    /* 0087526e: mov dword ptr [esp + 0x6c], ecx */ W32((u32)(r_esp+0x6cu), r_ecx);
    /* 00875272: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00875276: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 00875279: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
L_0087527c:; BB(0x0087527c);
    /* 0087527c: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 00875280: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 00875283: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875285: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00875287: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 0087528b: mov eax, dword ptr [esp + 0x5c] */ r_eax = R32((u32)(r_esp+0x5cu));
    /* 0087528f: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 00875293: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 00875297: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 0087529b: jmp 0x8752a1 */ goto L_008752a1;
L_0087529d:; BB(0x0087529d);
    /* 0087529d: fstp dword ptr [ebp + ecx*4 - 4] */ W_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
L_008752a1:; BB(0x008752a1);
    /* 008752a1: fld dword ptr [ebp + ecx*4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4)));
    /* 008752a5: fmul dword ptr [edx + eax - 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_eax+0xfffffffcu));
    /* 008752a9: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 008752ad: fld dword ptr [edi + ecx*4] */ FPUSH(R_F32((u32)(r_edi+r_ecx*4)));
    /* 008752b0: fmul dword ptr [esi + ecx*4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ecx*4));
    /* 008752b3: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008752b5: add edx, -4 */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008752b8: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008752b9: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 008752bd: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008752bf: jl 0x87529d */ if ((fS!=fO)) goto L_0087529d;
L_008752c1:; BB(0x008752c1);
    /* 008752c1: fstp dword ptr [ebp + ecx*4 - 4] */ W_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
    /* 008752c5: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 008752c9: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 008752cc: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 008752cf: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008752d1: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 008752d4: mov edx, dword ptr [esp + 0x54] */ r_edx = R32((u32)(r_esp+0x54u));
    /* 008752d8: mov ecx, dword ptr [ecx + edx*2] */ r_ecx = R32((u32)(r_ecx+r_edx*2));
    /* 008752db: mov eax, dword ptr [eax + edx*2] */ r_eax = R32((u32)(r_eax+r_edx*2));
    /* 008752de: jmp 0x875717 */ goto L_00875717;
L_008752e3:; BB(0x008752e3);
    /* 008752e3: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008752e7: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 008752ea: sub edx, dword ptr [esp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008752ee: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008752ef: call 0x88417c */ r_esp -= 4; W32(r_esp, 0x8752f4u); f_0088417c();
    /* 008752f4: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 008752f8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008752fb: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 008752fe: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00875302: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 00875305: mov dword ptr [esp + 0x5c], ecx */ W32((u32)(r_esp+0x5cu), r_ecx);
    /* 00875309: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 0087530c: mov edx, dword ptr [esp + 0x40] */ r_edx = R32((u32)(r_esp+0x40u));
    /* 00875310: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
    /* 00875313: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 00875317: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00875319: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0087531c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 0087531e: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 00875322: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00875326: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00875328: jle 0x875717 */ if ((fZ||fS!=fO)) goto L_00875717;
L_0087532e:; BB(0x0087532e);
    /* 0087532e: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875331: jl 0x87579a */ if ((fS!=fO)) goto L_0087579a;
L_00875337:; BB(0x00875337);
    /* 00875337: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0087533b: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
L_0087533f:; BB(0x0087533f);
    /* 0087533f: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
    /* 00875342: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00875346: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 0087534a: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 0087534d: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087534f: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00875351: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 00875355: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 00875359: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 0087535d: jmp 0x875363 */ goto L_00875363;
L_0087535f:; BB(0x0087535f);
    /* 0087535f: fstp dword ptr [ebp + ecx*4 - 4] */ W_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
L_00875363:; BB(0x00875363);
    /* 00875363: fld dword ptr [ebp + ecx*4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4)));
    /* 00875367: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 0087536b: fmul dword ptr [edi + edx - 4] */ ST(0) = ST(0) * R_F32((u32)(r_edi+r_edx+0xfffffffcu));
    /* 0087536f: fld dword ptr [eax + ecx*4] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4)));
    /* 00875372: fmul dword ptr [esi + ecx*4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ecx*4));
    /* 00875375: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00875377: fstp dword ptr [ebp + ecx*4] */ W_F32((u32)(r_ebp+r_ecx*4), ST(0)); FPOP();
    /* 0087537b: fld dword ptr [ebp + ecx*4 + 4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4+0x4u)));
    /* 0087537f: fmul dword ptr [edi + edx - 8] */ ST(0) = ST(0) * R_F32((u32)(r_edi+r_edx+0xfffffff8u));
    /* 00875383: fld dword ptr [eax + ecx*4 + 4] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x4u)));
    /* 00875387: fmul dword ptr [esi + ecx*4 + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ecx*4+0x4u));
    /* 0087538b: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087538d: fstp dword ptr [ebp + ecx*4 + 4] */ W_F32((u32)(r_ebp+r_ecx*4+0x4u), ST(0)); FPOP();
    /* 00875391: fld dword ptr [ebp + ecx*4 + 8] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4+0x8u)));
    /* 00875395: fmul dword ptr [edi + edx - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edi+r_edx+0xfffffff4u));
    /* 00875399: fld dword ptr [eax + ecx*4 + 8] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x8u)));
    /* 0087539d: fmul dword ptr [esi + ecx*4 + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ecx*4+0x8u));
    /* 008753a1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008753a3: add edx, -0xc */ {  u32 a = r_edx; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008753a6: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008753a9: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 008753ad: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008753af: jle 0x87535f */ if ((fZ||fS!=fO)) goto L_0087535f;
L_008753b1:; BB(0x008753b1);
    /* 008753b1: fstp dword ptr [ebp + ecx*4 - 4] */ W_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
    /* 008753b5: mov dword ptr [esp + 0x6c], ecx */ W32((u32)(r_esp+0x6cu), r_ecx);
    /* 008753b9: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 008753bd: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 008753c0: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
L_008753c3:; BB(0x008753c3);
    /* 008753c3: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 008753c7: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 008753ca: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008753cc: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008753ce: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 008753d2: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 008753d6: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 008753da: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 008753de: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 008753e2: jmp 0x8753e8 */ goto L_008753e8;
L_008753e4:; BB(0x008753e4);
    /* 008753e4: fstp dword ptr [ebp + ecx*4 - 4] */ W_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
L_008753e8:; BB(0x008753e8);
    /* 008753e8: fld dword ptr [ebp + ecx*4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4)));
    /* 008753ec: fmul dword ptr [edx + eax - 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_eax+0xfffffffcu));
    /* 008753f0: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 008753f4: fld dword ptr [edi + ecx*4] */ FPUSH(R_F32((u32)(r_edi+r_ecx*4)));
    /* 008753f7: fmul dword ptr [esi + ecx*4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ecx*4));
    /* 008753fa: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008753fc: add edx, -4 */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008753ff: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00875400: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00875404: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875406: jl 0x8753e4 */ if ((fS!=fO)) goto L_008753e4;
L_00875408:; BB(0x00875408);
    /* 00875408: fstp dword ptr [ebp + ecx*4 - 4] */ W_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
    /* 0087540c: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00875410: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 00875413: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 00875416: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00875418: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 0087541b: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 0087541f: mov ecx, dword ptr [ecx + edx*2] */ r_ecx = R32((u32)(r_ecx+r_edx*2));
    /* 00875422: mov eax, dword ptr [eax + edx*2] */ r_eax = R32((u32)(r_eax+r_edx*2));
    /* 00875425: jmp 0x875717 */ goto L_00875717;
L_0087542a:; BB(0x0087542a);
    /* 0087542a: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087542c: je 0x8755d5 */ if (fZ) goto L_008755d5;
L_00875432:; BB(0x00875432);
    /* 00875432: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00875436: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 00875439: sub edx, dword ptr [esp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0087543d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0087543e: call 0x88417c */ r_esp -= 4; W32(r_esp, 0x875443u); f_0088417c();
    /* 00875443: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 00875447: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0087544a: mov edx, dword ptr [esp + 0x24] */ r_edx = R32((u32)(r_esp+0x24u));
    /* 0087544e: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00875451: mov dword ptr [esp + 0x5c], eax */ W32((u32)(r_esp+0x5cu), r_eax);
    /* 00875455: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 00875458: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 0087545b: add eax, dword ptr [esp + 0x28] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x28u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087545f: mov dword ptr [esp + 0x64], eax */ W32((u32)(r_esp+0x64u), r_eax);
    /* 00875463: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 00875465: mov eax, dword ptr [eax + edx*4] */ r_eax = R32((u32)(r_eax+r_edx*4));
    /* 00875468: add eax, dword ptr [esp + 0x3c] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x3cu)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087546c: mov dword ptr [esp + 0x54], eax */ W32((u32)(r_esp+0x54u), r_eax);
    /* 00875470: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00875472: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00875476: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00875478: jle 0x875552 */ if ((fZ||fS!=fO)) goto L_00875552;
L_0087547e:; BB(0x0087547e);
    /* 0087547e: cmp eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875481: jl 0x875a1a */ if ((fS!=fO)) goto L_00875a1a;
L_00875487:; BB(0x00875487);
    /* 00875487: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0087548b: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 0087548f: lea eax, [eax + ecx] */ r_eax = (u32)(r_eax+r_ecx);
    /* 00875492: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 00875496: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 00875499: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087549b: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087549d: mov ecx, dword ptr [esp + 0x60] */ r_ecx = R32((u32)(r_esp+0x60u));
    /* 008754a1: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 008754a5: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 008754a9: jmp 0x8754af */ goto L_008754af;
L_008754ab:; BB(0x008754ab);
    /* 008754ab: fstp dword ptr [ebp + edx*4 - 4] */ W_F32((u32)(r_ebp+r_edx*4+0xfffffffcu), ST(0)); FPOP();
L_008754af:; BB(0x008754af);
    /* 008754af: fld dword ptr [ebp + edx*4] */ FPUSH(R_F32((u32)(r_ebp+r_edx*4)));
    /* 008754b3: fmul dword ptr [ecx + eax - 4] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+r_eax+0xfffffffcu));
    /* 008754b7: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 008754bb: fld dword ptr [edi + edx*4] */ FPUSH(R_F32((u32)(r_edi+r_edx*4)));
    /* 008754be: fmul dword ptr [esi + edx*4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_edx*4));
    /* 008754c1: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008754c3: fstp dword ptr [ebp + edx*4] */ W_F32((u32)(r_ebp+r_edx*4), ST(0)); FPOP();
    /* 008754c7: fld dword ptr [ebp + edx*4 + 4] */ FPUSH(R_F32((u32)(r_ebp+r_edx*4+0x4u)));
    /* 008754cb: fmul dword ptr [ecx + eax - 8] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+r_eax+0xfffffff8u));
    /* 008754cf: fld dword ptr [edi + edx*4 + 4] */ FPUSH(R_F32((u32)(r_edi+r_edx*4+0x4u)));
    /* 008754d3: fmul dword ptr [esi + edx*4 + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_edx*4+0x4u));
    /* 008754d7: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008754d9: fstp dword ptr [ebp + edx*4 + 4] */ W_F32((u32)(r_ebp+r_edx*4+0x4u), ST(0)); FPOP();
    /* 008754dd: fld dword ptr [ebp + edx*4 + 8] */ FPUSH(R_F32((u32)(r_ebp+r_edx*4+0x8u)));
    /* 008754e1: fmul dword ptr [ecx + eax - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_ecx+r_eax+0xfffffff4u));
    /* 008754e5: fld dword ptr [edi + edx*4 + 8] */ FPUSH(R_F32((u32)(r_edi+r_edx*4+0x8u)));
    /* 008754e9: fmul dword ptr [esi + edx*4 + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_edx*4+0x8u));
    /* 008754ed: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008754ef: add eax, -0xc */ {  u32 a = r_eax; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008754f2: add edx, 3 */ {  u32 a = r_edx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008754f5: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 008754f9: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008754fb: jle 0x8754ab */ if ((fZ||fS!=fO)) goto L_008754ab;
L_008754fd:; BB(0x008754fd);
    /* 008754fd: fstp dword ptr [ebp + edx*4 - 4] */ W_F32((u32)(r_ebp+r_edx*4+0xfffffffcu), ST(0)); FPOP();
    /* 00875501: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00875505: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 00875508: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
L_0087550b:; BB(0x0087550b);
    /* 0087550b: lea eax, [edx + edx] */ r_eax = (u32)(r_edx+r_edx);
    /* 0087550e: add eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00875510: neg eax */ { u32 x = r_eax; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00875512: mov ecx, dword ptr [esp + 0x60] */ r_ecx = R32((u32)(r_esp+0x60u));
    /* 00875516: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 0087551a: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 0087551e: jmp 0x875524 */ goto L_00875524;
L_00875520:; BB(0x00875520);
    /* 00875520: fstp dword ptr [ebp + edx*4 - 4] */ W_F32((u32)(r_ebp+r_edx*4+0xfffffffcu), ST(0)); FPOP();
L_00875524:; BB(0x00875524);
    /* 00875524: fld dword ptr [ebp + edx*4] */ FPUSH(R_F32((u32)(r_ebp+r_edx*4)));
    /* 00875528: fmul dword ptr [eax + ecx - 4] */ ST(0) = ST(0) * R_F32((u32)(r_eax+r_ecx+0xfffffffcu));
    /* 0087552c: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 00875530: fld dword ptr [edi + edx*4] */ FPUSH(R_F32((u32)(r_edi+r_edx*4)));
    /* 00875533: fmul dword ptr [esi + edx*4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_edx*4));
    /* 00875536: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00875538: add eax, -4 */ {  u32 a = r_eax; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087553b: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087553c: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 00875540: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875542: jl 0x875520 */ if ((fS!=fO)) goto L_00875520;
L_00875544:; BB(0x00875544);
    /* 00875544: fstp dword ptr [ebp + edx*4 - 4] */ W_F32((u32)(r_ebp+r_edx*4+0xfffffffcu), ST(0)); FPOP();
    /* 00875548: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 0087554c: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 0087554f: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
L_00875552:; BB(0x00875552);
    /* 00875552: mov eax, dword ptr [esp + 0x34] */ r_eax = R32((u32)(r_esp+0x34u));
    /* 00875556: cmp edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875558: jge 0x8757ae */ if ((fS==fO)) goto L_008757ae;
L_0087555e:; BB(0x0087555e);
    /* 0087555e: sub eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 00875560: cmp eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875563: jl 0x8755a4 */ if ((fS!=fO)) goto L_008755a4;
L_00875565:; BB(0x00875565);
    /* 00875565: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 00875569: mov ecx, dword ptr [esp + 0x64] */ r_ecx = R32((u32)(r_esp+0x64u));
    /* 0087556d: mov esi, dword ptr [esp + 0x38] */ r_esi = R32((u32)(r_esp+0x38u));
L_00875571:; BB(0x00875571);
    /* 00875571: mov edi, dword ptr [eax + edx*4] */ r_edi = R32((u32)(r_eax+r_edx*4));
    /* 00875574: mov dword ptr [ecx + edx*4], edi */ W32((u32)(r_ecx+r_edx*4), r_edi);
    /* 00875577: mov edi, dword ptr [eax + edx*4 + 4] */ r_edi = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 0087557b: mov dword ptr [ecx + edx*4 + 4], edi */ W32((u32)(r_ecx+r_edx*4+0x4u), r_edi);
    /* 0087557f: mov edi, dword ptr [eax + edx*4 + 8] */ r_edi = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00875583: mov dword ptr [ecx + edx*4 + 8], edi */ W32((u32)(r_ecx+r_edx*4+0x8u), r_edi);
    /* 00875587: mov edi, dword ptr [eax + edx*4 + 0xc] */ r_edi = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 0087558b: mov dword ptr [ecx + edx*4 + 0xc], edi */ W32((u32)(r_ecx+r_edx*4+0xcu), r_edi);
    /* 0087558f: mov edi, dword ptr [eax + edx*4 + 0x10] */ r_edi = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00875593: mov dword ptr [ecx + edx*4 + 0x10], edi */ W32((u32)(r_ecx+r_edx*4+0x10u), r_edi);
    /* 00875597: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0087559a: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087559c: jle 0x875571 */ if ((fZ||fS!=fO)) goto L_00875571;
L_0087559e:; BB(0x0087559e);
    /* 0087559e: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 008755a1: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
L_008755a4:; BB(0x008755a4);
    /* 008755a4: mov ecx, dword ptr [esp + 0x54] */ r_ecx = R32((u32)(r_esp+0x54u));
    /* 008755a8: mov esi, dword ptr [esp + 0x64] */ r_esi = R32((u32)(r_esp+0x64u));
    /* 008755ac: mov edi, dword ptr [esp + 0x34] */ r_edi = R32((u32)(r_esp+0x34u));
L_008755b0:; BB(0x008755b0);
    /* 008755b0: mov eax, dword ptr [ecx + edx*4] */ r_eax = R32((u32)(r_ecx+r_edx*4));
    /* 008755b3: mov dword ptr [esi + edx*4], eax */ W32((u32)(r_esi+r_edx*4), r_eax);
    /* 008755b6: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008755b7: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008755b9: jl 0x8755b0 */ if ((fS!=fO)) goto L_008755b0;
L_008755bb:; BB(0x008755bb);
    /* 008755bb: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 008755be: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 008755c1: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008755c3: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 008755c6: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 008755ca: mov ecx, dword ptr [ecx + edx*2] */ r_ecx = R32((u32)(r_ecx+r_edx*2));
    /* 008755cd: mov eax, dword ptr [eax + edx*2] */ r_eax = R32((u32)(r_eax+r_edx*2));
    /* 008755d0: jmp 0x875717 */ goto L_00875717;
L_008755d5:; BB(0x008755d5);
    /* 008755d5: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 008755d9: mov edx, dword ptr [eax + 4] */ r_edx = R32((u32)(r_eax+0x4u));
    /* 008755dc: sub edx, dword ptr [esp + 0xc] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0xcu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008755e0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 008755e1: call 0x88417c */ r_esp -= 4; W32(r_esp, 0x8755e6u); f_0088417c();
    /* 008755e6: mov dword ptr [esp + 0x6c], eax */ W32((u32)(r_esp+0x6cu), r_eax);
    /* 008755ea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 008755ed: mov edx, dword ptr [esi + 8] */ r_edx = R32((u32)(r_esi+0x8u));
    /* 008755f0: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 008755f4: lea ecx, [eax + eax] */ r_ecx = (u32)(r_eax+r_eax);
    /* 008755f7: mov dword ptr [esp + 0x5c], ecx */ W32((u32)(r_esp+0x5cu), r_ecx);
    /* 008755fb: mov ecx, dword ptr [edx + eax*4] */ r_ecx = R32((u32)(r_edx+r_eax*4));
    /* 008755fe: mov edx, dword ptr [esp + 0x28] */ r_edx = R32((u32)(r_esp+0x28u));
    /* 00875602: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
    /* 00875605: mov dword ptr [esp + 0x64], edx */ W32((u32)(r_esp+0x64u), r_edx);
    /* 00875609: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 0087560b: mov eax, dword ptr [edx + eax*4] */ r_eax = R32((u32)(r_edx+r_eax*4));
    /* 0087560e: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00875610: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 00875614: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00875618: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 0087561a: jle 0x875717 */ if ((fZ||fS!=fO)) goto L_00875717;
L_00875620:; BB(0x00875620);
    /* 00875620: cmp edx, 4 */ {  u32 a = r_edx; u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875623: jl 0x875a06 */ if ((fS!=fO)) goto L_00875a06;
L_00875629:; BB(0x00875629);
    /* 00875629: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0087562d: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 00875631: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
    /* 00875634: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00875638: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 0087563c: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 0087563f: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875641: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00875643: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 00875647: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 0087564b: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 0087564f: jmp 0x875655 */ goto L_00875655;
L_00875651:; BB(0x00875651);
    /* 00875651: fstp dword ptr [ebp + ecx*4 - 4] */ W_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
L_00875655:; BB(0x00875655);
    /* 00875655: fld dword ptr [ebp + ecx*4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4)));
    /* 00875659: mov edi, dword ptr [esp + 0x54] */ r_edi = R32((u32)(r_esp+0x54u));
    /* 0087565d: fmul dword ptr [edx + edi - 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_edi+0xfffffffcu));
    /* 00875661: fld dword ptr [eax + ecx*4] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4)));
    /* 00875664: fmul dword ptr [esi + ecx*4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ecx*4));
    /* 00875667: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00875669: fstp dword ptr [ebp + ecx*4] */ W_F32((u32)(r_ebp+r_ecx*4), ST(0)); FPOP();
    /* 0087566d: fld dword ptr [ebp + ecx*4 + 4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4+0x4u)));
    /* 00875671: fmul dword ptr [edx + edi - 8] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_edi+0xfffffff8u));
    /* 00875675: fld dword ptr [eax + ecx*4 + 4] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x4u)));
    /* 00875679: fmul dword ptr [esi + ecx*4 + 4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ecx*4+0x4u));
    /* 0087567d: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 0087567f: fstp dword ptr [ebp + ecx*4 + 4] */ W_F32((u32)(r_ebp+r_ecx*4+0x4u), ST(0)); FPOP();
    /* 00875683: fld dword ptr [ebp + ecx*4 + 8] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4+0x8u)));
    /* 00875687: fmul dword ptr [edx + edi - 0xc] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_edi+0xfffffff4u));
    /* 0087568b: fld dword ptr [eax + ecx*4 + 8] */ FPUSH(R_F32((u32)(r_eax+r_ecx*4+0x8u)));
    /* 0087568f: fmul dword ptr [esi + ecx*4 + 8] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ecx*4+0x8u));
    /* 00875693: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 00875695: add edx, -0xc */ {  u32 a = r_edx; u32 b = 0xfffffff4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875698: add ecx, 3 */ {  u32 a = r_ecx; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087569b: mov edi, dword ptr [esp + 0x30] */ r_edi = R32((u32)(r_esp+0x30u));
    /* 0087569f: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008756a1: jle 0x875651 */ if ((fZ||fS!=fO)) goto L_00875651;
L_008756a3:; BB(0x008756a3);
    /* 008756a3: fstp dword ptr [ebp + ecx*4 - 4] */ W_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
    /* 008756a7: mov dword ptr [esp + 0x6c], ecx */ W32((u32)(r_esp+0x6cu), r_ecx);
    /* 008756ab: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 008756af: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 008756b2: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
L_008756b5:; BB(0x008756b5);
    /* 008756b5: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 008756b9: lea edx, [edx + edx] */ r_edx = (u32)(r_edx+r_edx);
    /* 008756bc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008756be: neg edx */ { u32 x = r_edx; u32 a = 0u; u32 b = x; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008756c0: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 008756c4: mov eax, dword ptr [esp + 0x54] */ r_eax = R32((u32)(r_esp+0x54u));
    /* 008756c8: mov ecx, dword ptr [esp + 0x6c] */ r_ecx = R32((u32)(r_esp+0x6cu));
    /* 008756cc: mov ebp, dword ptr [esp + 0x64] */ r_ebp = R32((u32)(r_esp+0x64u));
    /* 008756d0: mov esi, dword ptr [esp + 0x68] */ r_esi = R32((u32)(r_esp+0x68u));
    /* 008756d4: jmp 0x8756da */ goto L_008756da;
L_008756d6:; BB(0x008756d6);
    /* 008756d6: fstp dword ptr [ebp + ecx*4 - 4] */ W_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
L_008756da:; BB(0x008756da);
    /* 008756da: fld dword ptr [ebp + ecx*4] */ FPUSH(R_F32((u32)(r_ebp+r_ecx*4)));
    /* 008756de: fmul dword ptr [edx + eax - 4] */ ST(0) = ST(0) * R_F32((u32)(r_edx+r_eax+0xfffffffcu));
    /* 008756e2: mov edi, dword ptr [esp + 0x60] */ r_edi = R32((u32)(r_esp+0x60u));
    /* 008756e6: fld dword ptr [edi + ecx*4] */ FPUSH(R_F32((u32)(r_edi+r_ecx*4)));
    /* 008756e9: fmul dword ptr [esi + ecx*4] */ ST(0) = ST(0) * R_F32((u32)(r_esi+r_ecx*4));
    /* 008756ec: faddp st(1) */ ST(1) = ST(1) + ST(0); FPOP();
    /* 008756ee: add edx, -4 */ {  u32 a = r_edx; u32 b = 0xfffffffcu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008756f1: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 008756f2: mov edi, dword ptr [esp + 0x14] */ r_edi = R32((u32)(r_esp+0x14u));
    /* 008756f6: cmp ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008756f8: jl 0x8756d6 */ if ((fS!=fO)) goto L_008756d6;
L_008756fa:; BB(0x008756fa);
    /* 008756fa: fstp dword ptr [ebp + ecx*4 - 4] */ W_F32((u32)(r_ebp+r_ecx*4+0xfffffffcu), ST(0)); FPOP();
    /* 008756fe: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00875702: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 00875705: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
    /* 00875708: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 0087570a: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 0087570d: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 00875711: mov ecx, dword ptr [ecx + edx*2] */ r_ecx = R32((u32)(r_ecx+r_edx*2));
    /* 00875714: mov eax, dword ptr [eax + edx*2] */ r_eax = R32((u32)(r_eax+r_edx*2));
L_00875717:; BB(0x00875717);
    /* 00875717: add ecx, dword ptr [esp + 0x44] */ {  u32 a = r_ecx; u32 b = R32((u32)(r_esp+0x44u)); u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0087571b: add eax, dword ptr [esp + 0x48] */ {  u32 a = r_eax; u32 b = R32((u32)(r_esp+0x48u)); u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087571f: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00875721: test ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = 0; }
    /* 00875723: jle 0x87576f */ if ((fZ||fS!=fO)) goto L_0087576f;
L_00875725:; BB(0x00875725);
    /* 00875725: cmp ebp, 6 */ {  u32 a = r_ebp; u32 b = 0x6u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875728: jl 0x875761 */ if ((fS!=fO)) goto L_00875761;
L_0087572a:; BB(0x0087572a);
    /* 0087572a: mov esi, dword ptr [esp + 0x4c] */ r_esi = R32((u32)(r_esp+0x4cu));
L_0087572e:; BB(0x0087572e);
    /* 0087572e: mov edi, dword ptr [eax + edx*4] */ r_edi = R32((u32)(r_eax+r_edx*4));
    /* 00875731: mov dword ptr [ecx + edx*4], edi */ W32((u32)(r_ecx+r_edx*4), r_edi);
    /* 00875734: mov edi, dword ptr [eax + edx*4 + 4] */ r_edi = R32((u32)(r_eax+r_edx*4+0x4u));
    /* 00875738: mov dword ptr [ecx + edx*4 + 4], edi */ W32((u32)(r_ecx+r_edx*4+0x4u), r_edi);
    /* 0087573c: mov edi, dword ptr [eax + edx*4 + 8] */ r_edi = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 00875740: mov dword ptr [ecx + edx*4 + 8], edi */ W32((u32)(r_ecx+r_edx*4+0x8u), r_edi);
    /* 00875744: mov edi, dword ptr [eax + edx*4 + 0xc] */ r_edi = R32((u32)(r_eax+r_edx*4+0xcu));
    /* 00875748: mov dword ptr [ecx + edx*4 + 0xc], edi */ W32((u32)(r_ecx+r_edx*4+0xcu), r_edi);
    /* 0087574c: mov edi, dword ptr [eax + edx*4 + 0x10] */ r_edi = R32((u32)(r_eax+r_edx*4+0x10u));
    /* 00875750: mov dword ptr [ecx + edx*4 + 0x10], edi */ W32((u32)(r_ecx+r_edx*4+0x10u), r_edi);
    /* 00875754: add edx, 5 */ {  u32 a = r_edx; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875757: cmp edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875759: jle 0x87572e */ if ((fZ||fS!=fO)) goto L_0087572e;
L_0087575b:; BB(0x0087575b);
    /* 0087575b: mov edi, dword ptr [ebx + 0xc] */ r_edi = R32((u32)(r_ebx+0xcu));
    /* 0087575e: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
L_00875761:; BB(0x00875761);
    /* 00875761: mov esi, dword ptr [eax + edx*4] */ r_esi = R32((u32)(r_eax+r_edx*4));
    /* 00875764: mov dword ptr [ecx + edx*4], esi */ W32((u32)(r_ecx+r_edx*4), r_esi);
    /* 00875767: inc edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875768: cmp edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087576a: jl 0x875761 */ if ((fS!=fO)) goto L_00875761;
L_0087576c:; BB(0x0087576c);
    /* 0087576c: mov esi, dword ptr [ebx + 8] */ r_esi = R32((u32)(r_ebx+0x8u));
L_0087576f:; BB(0x0087576f);
    /* 0087576f: mov eax, dword ptr [esp + 0x24] */ r_eax = R32((u32)(r_esp+0x24u));
    /* 00875773: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00875774: mov dword ptr [esp + 0x24], eax */ W32((u32)(r_esp+0x24u), r_eax);
    /* 00875778: mov edx, dword ptr [esp] */ r_edx = R32((u32)(r_esp));
    /* 0087577b: cmp eax, dword ptr [edx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_edx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0087577e: jl 0x875187 */ if ((fS!=fO)) goto L_00875187;
L_00875784:; BB(0x00875784);
    /* 00875784: jmp 0x8757c2 */ goto L_008757c2;
L_00875786:; BB(0x00875786);
    /* 00875786: mov ecx, dword ptr [esp + 0x50] */ r_ecx = R32((u32)(r_esp+0x50u));
    /* 0087578a: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 0087578e: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
    /* 00875791: mov dword ptr [esp + 0x5c], edx */ W32((u32)(r_esp+0x5cu), r_edx);
    /* 00875795: jmp 0x87527c */ goto L_0087527c;
L_0087579a:; BB(0x0087579a);
    /* 0087579a: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 0087579e: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 008757a2: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
    /* 008757a5: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 008757a9: jmp 0x8753c3 */ goto L_008753c3;
L_008757ae:; BB(0x008757ae);
    /* 008757ae: mov eax, dword ptr [edi] */ r_eax = R32((u32)(r_edi));
    /* 008757b0: mov ecx, dword ptr [esi + 8] */ r_ecx = R32((u32)(r_esi+0x8u));
    /* 008757b3: mov edx, dword ptr [esp + 0x5c] */ r_edx = R32((u32)(r_esp+0x5cu));
    /* 008757b7: mov ecx, dword ptr [ecx + edx*2] */ r_ecx = R32((u32)(r_ecx+r_edx*2));
    /* 008757ba: mov eax, dword ptr [eax + edx*2] */ r_eax = R32((u32)(r_eax+r_edx*2));
    /* 008757bd: jmp 0x875717 */ goto L_00875717;
L_008757c2:; BB(0x008757c2);
    /* 008757c2: mov eax, dword ptr [esp + 0x20] */ r_eax = R32((u32)(r_esp+0x20u));
    /* 008757c6: mov edi, dword ptr [esp + 0x18] */ r_edi = R32((u32)(r_esp+0x18u));
    /* 008757ca: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
    /* 008757ce: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 008757d1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008757d3: je 0x8757de */ if (fZ) goto L_008757de;
L_008757d5:; BB(0x008757d5);
    /* 008757d5: mov dword ptr [esi + 0x30], 0 */ W32((u32)(r_esi+0x30u), 0x0u);
    /* 008757dc: jmp 0x8757e1 */ goto L_008757e1;
L_008757de:; BB(0x008757de);
    /* 008757de: mov dword ptr [esi + 0x30], edi */ W32((u32)(r_esi+0x30u), r_edi);
L_008757e1:; BB(0x008757e1);
    /* 008757e1: mov edx, dword ptr [esi + 0x18] */ r_edx = R32((u32)(r_esi+0x18u));
    /* 008757e4: cmp edx, -1 */ {  u32 a = r_edx; u32 b = 0xffffffffu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 008757e7: je 0x8759f7 */ if (fZ) goto L_008759f7;
L_008757ed:; BB(0x008757ed);
    /* 008757ed: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 008757f0: mov edx, dword ptr [esi + 0x24] */ r_edx = R32((u32)(r_esi+0x24u));
    /* 008757f3: mov ecx, dword ptr [ebp + edx*4] */ r_ecx = R32((u32)(r_ebp+r_edx*4));
    /* 008757f7: mov edx, dword ptr [esi + 0x28] */ r_edx = R32((u32)(r_esi+0x28u));
    /* 008757fa: mov edi, dword ptr [ebp + edx*4] */ r_edi = R32((u32)(r_ebp+r_edx*4));
    /* 008757fe: mov edx, ecx */ r_edx = r_ecx;
    /* 00875800: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00875802: shr edx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00875805: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875807: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0087580a: mov ecx, edi */ r_ecx = r_edi;
    /* 0087580c: sar ecx, 1 */ { u32 c = (1u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 0087580e: shr ecx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00875811: add ecx, edi */ {  u32 a = r_ecx; u32 b = r_edi; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00875813: sar ecx, 2 */ { u32 c = (2u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ecx = r;  } }
    /* 00875816: add edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_edx = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00875818: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 0087581c: sar edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0087581e: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00875820: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
L_00875823:; BB(0x00875823);
    /* 00875823: mov edi, dword ptr [esp + 8] */ r_edi = R32((u32)(r_esp+0x8u));
    /* 00875827: mov ecx, dword ptr [edi + 0xb8] */ r_ecx = R32((u32)(r_edi+0xb8u));
    /* 0087582d: mov edi, dword ptr [edi + 0xbc] */ r_edi = R32((u32)(r_edi+0xbcu));
    /* 00875833: lea edx, [ecx + 1] */ r_edx = (u32)(r_ecx+0x1u);
    /* 00875836: lea eax, [edi + 1] */ r_eax = (u32)(r_edi+0x1u);
    /* 00875839: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 0087583b: je 0x8759e0 */ if (fZ) goto L_008759e0;
L_00875841:; BB(0x00875841);
    /* 00875841: mov dword ptr [esp + 4], ebp */ W32((u32)(r_esp+0x4u), r_ebp);
    /* 00875845: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 00875848: mov edx, dword ptr [ebp + eax*4] */ r_edx = R32((u32)(r_ebp+r_eax*4));
    /* 0087584c: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 0087584f: mov ebp, dword ptr [ebp + eax*4] */ r_ebp = R32((u32)(r_ebp+r_eax*4));
    /* 00875853: mov eax, edx */ r_eax = r_edx;
    /* 00875855: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 00875857: shr eax, 0x1e */ { u32 c = (30u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 0087585a: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087585c: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 0087585f: mov edx, ebp */ r_edx = r_ebp;
    /* 00875861: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00875863: shr edx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00875866: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875868: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 0087586b: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0087586d: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 0087586e: add ecx, eax */ {  u32 a = r_ecx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_ecx = r; fC = (r < a); }
    /* 00875870: adc edi, edx */ { u32 c = fC; u32 a = r_edi; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_edi = r;  }
    /* 00875872: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00875876: mov dword ptr [eax + 0xb8], ecx */ W32((u32)(r_eax+0xb8u), r_ecx);
    /* 0087587c: mov dword ptr [eax + 0xbc], edi */ W32((u32)(r_eax+0xbcu), r_edi);
    /* 00875882: mov ebp, dword ptr [esp + 4] */ r_ebp = R32((u32)(r_esp+0x4u));
L_00875886:; BB(0x00875886);
    /* 00875886: mov edi, dword ptr [esi + 0x38] */ r_edi = R32((u32)(r_esi+0x38u));
    /* 00875889: mov ecx, dword ptr [esi + 0x3c] */ r_ecx = R32((u32)(r_esi+0x3cu));
    /* 0087588c: lea edx, [edi + 1] */ r_edx = (u32)(r_edi+0x1u);
    /* 0087588f: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 00875892: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00875894: je 0x875950 */ if (fZ) goto L_00875950;
L_0087589a:; BB(0x0087589a);
    /* 0087589a: mov eax, dword ptr [esi + 0x24] */ r_eax = R32((u32)(r_esi+0x24u));
    /* 0087589d: mov edx, dword ptr [ebp + eax*4] */ r_edx = R32((u32)(r_ebp+r_eax*4));
    /* 008758a1: mov eax, dword ptr [esi + 0x28] */ r_eax = R32((u32)(r_esi+0x28u));
    /* 008758a4: mov ebp, dword ptr [ebp + eax*4] */ r_ebp = R32((u32)(r_ebp+r_eax*4));
    /* 008758a8: mov eax, edx */ r_eax = r_edx;
    /* 008758aa: sar eax, 1 */ { u32 c = (1u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008758ac: shr eax, 0x1e */ { u32 c = (30u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_eax = r;  } }
    /* 008758af: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008758b1: sar eax, 2 */ { u32 c = (2u) & 31; u32 a = r_eax; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_eax = r;  } }
    /* 008758b4: mov edx, ebp */ r_edx = r_ebp;
    /* 008758b6: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008758b8: shr edx, 0x1e */ { u32 c = (30u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 008758bb: add edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008758bd: sar edx, 2 */ { u32 c = (2u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 008758c0: add eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 008758c2: cdq  */ r_edx = (r_eax >> 31) ? 0xffffffffu : 0;
    /* 008758c3: add edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edi = r; fC = (r < a); }
    /* 008758c5: adc ecx, edx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_edx; u32 r = (a + b + c) & 0xffffffffu; r_ecx = r;  }
    /* 008758c7: mov dword ptr [esi + 0x38], edi */ W32((u32)(r_esi+0x38u), r_edi);
    /* 008758ca: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 008758cd: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 008758d0: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 008758d3: mov edx, dword ptr [edx + 0x34] */ r_edx = R32((u32)(r_edx+0x34u));
    /* 008758d6: mov dword ptr [esp + 0x6c], edx */ W32((u32)(r_esp+0x6cu), r_edx);
    /* 008758da: lea ebp, [eax + 1] */ r_ebp = (u32)(r_eax+0x1u);
    /* 008758dd: lea edx, [edx + 1] */ r_edx = (u32)(r_edx+0x1u);
    /* 008758e0: or ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 008758e2: je 0x875934 */ if (fZ) goto L_00875934;
L_008758e4:; BB(0x008758e4);
    /* 008758e4: mov ebp, edi */ r_ebp = r_edi;
    /* 008758e6: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r;  }
    /* 008758e8: mov edx, ecx */ r_edx = r_ecx;
    /* 008758ea: sub edx, dword ptr [esp + 0x6c] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esp+0x6cu)); u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008758ee: or ebp, edx */ {  u32 a = r_ebp; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 008758f0: je 0x875934 */ if (fZ) goto L_00875934;
L_008758f2:; BB(0x008758f2);
    /* 008758f2: mov ebp, edi */ r_ebp = r_edi;
    /* 008758f4: sub ebp, eax */ {  u32 a = r_ebp; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_ebp = r; fC = (a < b); }
    /* 008758f6: mov edx, dword ptr [esp + 0x6c] */ r_edx = R32((u32)(r_esp+0x6cu));
    /* 008758fa: sbb ecx, edx */ { u32 c = fC; u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b - c) & 0xffffffffu; r_ecx = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008758fc: jl 0x87592a */ if ((fS!=fO)) goto L_0087592a;
L_008758fe:; BB(0x008758fe);
    /* 008758fe: or ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_ebp = r; fZ = (r == 0); }
    /* 00875900: je 0x87592a */ if (fZ) goto L_0087592a;
L_00875902:; BB(0x00875902);
    /* 00875902: sub edi, eax */ {  u32 a = r_edi; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); }
    /* 00875904: je 0x87592a */ if (fZ) goto L_0087592a;
L_00875906:; BB(0x00875906);
    /* 00875906: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00875909: cmp dword ptr [edx + 0x2c], 0 */ {  u32 a = R32((u32)(r_edx+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 0087590d: je 0x87592a */ if (fZ) goto L_0087592a;
L_0087590f:; BB(0x0087590f);
    /* 0087590f: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 00875913: sar edi, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edi; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edi = r;  } }
    /* 00875915: mov eax, dword ptr [esi + 0x14] */ r_eax = R32((u32)(r_esi+0x14u));
    /* 00875918: sub eax, edi */ {  u32 a = r_eax; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0087591a: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 0087591d: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 00875920: mov eax, dword ptr [edx + 0x30] */ r_eax = R32((u32)(r_edx+0x30u));
    /* 00875923: mov ebp, dword ptr [edx + 0x34] */ r_ebp = R32((u32)(r_edx+0x34u));
    /* 00875926: mov dword ptr [esp + 0x6c], ebp */ W32((u32)(r_esp+0x6cu), r_ebp);
L_0087592a:; BB(0x0087592a);
    /* 0087592a: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 0087592d: mov eax, dword ptr [esp + 0x6c] */ r_eax = R32((u32)(r_esp+0x6cu));
    /* 00875931: mov dword ptr [esi + 0x3c], eax */ W32((u32)(r_esi+0x3cu), r_eax);
L_00875934:; BB(0x00875934);
    /* 00875934: mov eax, dword ptr [ebx + 0xc] */ r_eax = R32((u32)(r_ebx+0xcu));
    /* 00875937: cmp dword ptr [eax + 0x2c], 0 */ {  u32 a = R32((u32)(r_eax+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0087593b: je 0x875944 */ if (fZ) goto L_00875944;
L_0087593d:; BB(0x0087593d);
    /* 0087593d: mov dword ptr [esi + 0x20], 1 */ W32((u32)(r_esi+0x20u), 0x1u);
L_00875944:; BB(0x00875944);
    /* 00875944: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00875946: add esp, 0x74 */ {  u32 a = r_esp; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00875949: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0087594a: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0087594b: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 0087594c: mov esp, ebx */ r_esp = r_ebx;
    /* 0087594e: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0087594f: ret  */ FN_RET(0x0087533f); r_esp += 4; return;
L_00875950:; BB(0x00875950);
    /* 00875950: mov ecx, dword ptr [ebx + 0xc] */ r_ecx = R32((u32)(r_ebx+0xcu));
    /* 00875953: mov ebp, dword ptr [ecx + 0x30] */ r_ebp = R32((u32)(r_ecx+0x30u));
    /* 00875956: mov ecx, dword ptr [ecx + 0x34] */ r_ecx = R32((u32)(r_ecx+0x34u));
    /* 00875959: lea edx, [ebp + 1] */ r_edx = (u32)(r_ebp+0x1u);
    /* 0087595c: lea eax, [ecx + 1] */ r_eax = (u32)(r_ecx+0x1u);
    /* 0087595f: or edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00875961: je 0x875934 */ if (fZ) goto L_00875934;
L_00875963:; BB(0x00875963);
    /* 00875963: mov dword ptr [esi + 0x38], ebp */ W32((u32)(r_esi+0x38u), r_ebp);
    /* 00875966: mov dword ptr [esi + 0x3c], ecx */ W32((u32)(r_esi+0x3cu), r_ecx);
    /* 00875969: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 0087596d: mov eax, dword ptr [edx + 0xb8] */ r_eax = R32((u32)(r_edx+0xb8u));
    /* 00875973: mov edi, dword ptr [edx + 0xbc] */ r_edi = R32((u32)(r_edx+0xbcu));
    /* 00875979: mov dword ptr [esp + 0x68], edi */ W32((u32)(r_esp+0x68u), r_edi);
    /* 0087597d: mov edx, eax */ r_edx = r_eax;
    /* 0087597f: sub edx, ebp */ {  u32 a = r_edx; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_edx = r; fC = (a < b); }
    /* 00875981: sbb edi, ecx */ { u32 c = fC; u32 a = r_edi; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_edi = r; fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875983: jl 0x875934 */ if ((fS!=fO)) goto L_00875934;
L_00875985:; BB(0x00875985);
    /* 00875985: or edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a | b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00875987: je 0x875934 */ if (fZ) goto L_00875934;
L_00875989:; BB(0x00875989);
    /* 00875989: mov edx, dword ptr [ebx + 0xc] */ r_edx = R32((u32)(r_ebx+0xcu));
    /* 0087598c: cmp dword ptr [edx + 0x2c], 0 */ {  u32 a = R32((u32)(r_edx+0x2cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00875990: je 0x8759b3 */ if (fZ) goto L_008759b3;
L_00875992:; BB(0x00875992);
    /* 00875992: mov edi, dword ptr [esi + 0x14] */ r_edi = R32((u32)(r_esi+0x14u));
    /* 00875995: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 00875999: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 0087599b: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 0087599f: sbb edx, ecx */ { u32 c = fC; u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 008759a1: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008759a5: call 0x8cac90 */ r_esp -= 4; W32(r_esp, 0x8759aau); f_008cac90();
    /* 008759aa: mov edx, edi */ r_edx = r_edi;
    /* 008759ac: sub edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 008759ae: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 008759b1: jmp 0x875934 */ goto L_00875934;
L_008759b3:; BB(0x008759b3);
    /* 008759b3: mov edi, dword ptr [esi + 0x18] */ r_edi = R32((u32)(r_esi+0x18u));
    /* 008759b6: mov dword ptr [esp + 0x6c], edi */ W32((u32)(r_esp+0x6cu), r_edi);
    /* 008759ba: sub eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a - b) & 0xffffffffu; r_eax = r; fC = (a < b); }
    /* 008759bc: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 008759c0: sbb edx, ecx */ { u32 c = fC; u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b - c) & 0xffffffffu; r_edx = r;  }
    /* 008759c2: mov ecx, dword ptr [esp + 0xc] */ r_ecx = R32((u32)(r_esp+0xcu));
    /* 008759c6: call 0x8cac90 */ r_esp -= 4; W32(r_esp, 0x8759cbu); f_008cac90();
    /* 008759cb: mov edx, edi */ r_edx = r_edi;
    /* 008759cd: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 008759cf: mov ecx, dword ptr [esi + 0x14] */ r_ecx = R32((u32)(r_esi+0x14u));
    /* 008759d2: cmp ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 008759d4: jl 0x8759d8 */ if ((fS!=fO)) goto L_008759d8;
L_008759d6:; BB(0x008759d6);
    /* 008759d6: mov ecx, edx */ r_ecx = r_edx;
L_008759d8:; BB(0x008759d8);
    /* 008759d8: mov dword ptr [esi + 0x18], ecx */ W32((u32)(r_esi+0x18u), r_ecx);
    /* 008759db: jmp 0x875934 */ goto L_00875934;
L_008759e0:; BB(0x008759e0);
    /* 008759e0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 008759e2: mov edx, dword ptr [esp + 8] */ r_edx = R32((u32)(r_esp+0x8u));
    /* 008759e6: mov dword ptr [edx + 0xb8], eax */ W32((u32)(r_edx+0xb8u), r_eax);
    /* 008759ec: mov dword ptr [edx + 0xbc], eax */ W32((u32)(r_edx+0xbcu), r_eax);
    /* 008759f2: jmp 0x875886 */ goto L_00875886;
L_008759f7:; BB(0x008759f7);
    /* 008759f7: mov eax, dword ptr [esp + 0x1c] */ r_eax = R32((u32)(r_esp+0x1cu));
    /* 008759fb: mov dword ptr [esi + 0x18], eax */ W32((u32)(r_esi+0x18u), r_eax);
    /* 008759fe: mov dword ptr [esi + 0x14], eax */ W32((u32)(r_esi+0x14u), r_eax);
    /* 00875a01: jmp 0x875823 */ goto L_00875823;
L_00875a06:; BB(0x00875a06);
    /* 00875a06: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00875a0a: mov edx, dword ptr [esp + 0x68] */ r_edx = R32((u32)(r_esp+0x68u));
    /* 00875a0e: lea edx, [edx + ecx] */ r_edx = (u32)(r_edx+r_ecx);
    /* 00875a11: mov dword ptr [esp + 0x54], edx */ W32((u32)(r_esp+0x54u), r_edx);
    /* 00875a15: jmp 0x8756b5 */ goto L_008756b5;
L_00875a1a:; BB(0x00875a1a);
    /* 00875a1a: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00875a1e: mov eax, dword ptr [esp + 0x68] */ r_eax = R32((u32)(r_esp+0x68u));
    /* 00875a22: lea eax, [eax + ecx] */ r_eax = (u32)(r_eax+r_ecx);
    /* 00875a25: mov dword ptr [esp + 0x60], eax */ W32((u32)(r_esp+0x60u), r_eax);
    /* 00875a29: jmp 0x87550b */ goto L_0087550b;
}

void f_00875a30(void) /* sub_875A30 */
{
    FN_ENTER(0x00875a30);
    /* 00875a30: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00875a31: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00875a32: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00875a33: mov ebp, dword ptr [esp + 0x10] */ r_ebp = R32((u32)(r_esp+0x10u));
    /* 00875a37: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 00875a3a: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00875a3d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = 0; }
    /* 00875a3f: jl 0x875a78 */ if ((fS!=fO)) goto L_00875a78;
L_00875a41:; BB(0x00875a41);
    /* 00875a41: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
    /* 00875a44: cmp edx, edi */ {  u32 a = r_edx; u32 b = r_edi; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875a46: jge 0x875a78 */ if ((fS==fO)) goto L_00875a78;
L_00875a48:; BB(0x00875a48);
    /* 00875a48: mov eax, dword ptr [esp + 0x14] */ r_eax = R32((u32)(r_esp+0x14u));
    /* 00875a4c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00875a4e: je 0x875a90 */ if (fZ) goto L_00875a90;
L_00875a50:; BB(0x00875a50);
    /* 00875a50: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00875a52: cmp dword ptr [ecx + 4], 0 */ {  u32 a = R32((u32)(r_ecx+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875a56: jle 0x875a81 */ if ((fZ||fS!=fO)) goto L_00875a81;
L_00875a58:; BB(0x00875a58);
    /* 00875a58: mov dword ptr [esp], esi */ W32((u32)(r_esp), r_esi);
    /* 00875a5b: jmp 0x875a60 */ goto L_00875a60;
L_00875a5d:; BB(0x00875a5d);
    /* 00875a5d: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
L_00875a60:; BB(0x00875a60);
    /* 00875a60: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875a62: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875a64: mov esi, dword ptr [ebp + 8] */ r_esi = R32((u32)(r_ebp+0x8u));
    /* 00875a67: add edx, dword ptr [esi + eax*4] */ {  u32 a = r_edx; u32 b = R32((u32)(r_esi+r_eax*4)); u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875a6a: mov edi, dword ptr [ebp + 0xc] */ r_edi = R32((u32)(r_ebp+0xcu));
    /* 00875a6d: mov dword ptr [edi + eax*4], edx */ W32((u32)(r_edi+r_eax*4), r_edx);
    /* 00875a70: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00875a71: cmp eax, dword ptr [ecx + 4] */ {  u32 a = r_eax; u32 b = R32((u32)(r_ecx+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875a74: jl 0x875a5d */ if ((fS!=fO)) goto L_00875a5d;
L_00875a76:; BB(0x00875a76);
    /* 00875a76: jmp 0x875a7e */ goto L_00875a7e;
L_00875a78:; BB(0x00875a78);
    /* 00875a78: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00875a7a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00875a7b: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00875a7c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00875a7d: ret  */ FN_RET(0x00875a30); r_esp += 4; return;
L_00875a7e:; BB(0x00875a7e);
    /* 00875a7e: mov esi, dword ptr [esp] */ r_esi = R32((u32)(r_esp));
L_00875a81:; BB(0x00875a81);
    /* 00875a81: mov eax, dword ptr [ebp + 0xc] */ r_eax = R32((u32)(r_ebp+0xcu));
    /* 00875a84: mov edx, dword ptr [esp + 0x14] */ r_edx = R32((u32)(r_esp+0x14u));
    /* 00875a88: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00875a8a: mov edx, dword ptr [ebp + 0x18] */ r_edx = R32((u32)(r_ebp+0x18u));
    /* 00875a8d: mov edi, dword ptr [ebp + 0x14] */ r_edi = R32((u32)(r_ebp+0x14u));
L_00875a90:; BB(0x00875a90);
    /* 00875a90: sub edi, edx */ {  u32 a = r_edi; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_edi = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00875a92: mov eax, edi */ r_eax = r_edi;
    /* 00875a94: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00875a95: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00875a96: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00875a97: ret  */ FN_RET(0x00875a30); r_esp += 4; return;
}

void f_00875a98(void) /* sub_875A98 */
{
    FN_ENTER(0x00875a98);
    /* 00875a98: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00875a9c: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00875aa0: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00875aa2: je 0x875ab4 */ if (fZ) goto L_00875ab4;
L_00875aa4:; BB(0x00875aa4);
    /* 00875aa4: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00875aa7: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875aa9: cmp edx, dword ptr [ecx + 0x14] */ {  u32 a = r_edx; u32 b = R32((u32)(r_ecx+0x14u)); u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; fC = (a < b); }
    /* 00875aac: jle 0x875ab9 */ if ((fZ||fS!=fO)) goto L_00875ab9;
L_00875aae:; BB(0x00875aae);
    /* 00875aae: mov eax, 0xffffff7d */ r_eax = 0xffffff7du;
    /* 00875ab3: ret  */ FN_RET(0x00875a98); r_esp += 4; return;
L_00875ab4:; BB(0x00875ab4);
    /* 00875ab4: mov edx, dword ptr [ecx + 0x18] */ r_edx = R32((u32)(r_ecx+0x18u));
    /* 00875ab7: add edx, eax */ {  u32 a = r_edx; u32 b = r_eax; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
L_00875ab9:; BB(0x00875ab9);
    /* 00875ab9: mov dword ptr [ecx + 0x18], edx */ W32((u32)(r_ecx+0x18u), r_edx);
    /* 00875abc: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00875abe: ret  */ FN_RET(0x00875a98); r_esp += 4; return;
}

void f_00875ac0(void) /* sub_875AC0 */
{
    FN_ENTER(0x00875ac0);
    /* 00875ac0: mov eax, dword ptr [esp + 4] */ r_eax = R32((u32)(r_esp+0x4u));
    /* 00875ac4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00875ac5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00875ac6: mov esi, eax */ r_esi = r_eax;
    /* 00875ac8: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00875acb: mov edi, dword ptr [esi + 0x68] */ r_edi = R32((u32)(r_esi+0x68u));
    /* 00875ace: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00875ad0: je 0x875b21 */ if (fZ) goto L_00875b21;
L_00875ad2:; BB(0x00875ad2);
    /* 00875ad2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00875ad4: je 0x875b21 */ if (fZ) goto L_00875b21;
L_00875ad6:; BB(0x00875ad6);
    /* 00875ad6: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 00875ad9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00875adb: je 0x875b21 */ if (fZ) goto L_00875b21;
L_00875add:; BB(0x00875add);
    /* 00875add: mov eax, dword ptr [edx + 0xe78] */ r_eax = R32((u32)(r_edx+0xe78u));
    /* 00875ae3: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00875ae6: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 00875ae9: sar edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00875aeb: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 00875aee: mov ecx, eax */ r_ecx = r_eax;
    /* 00875af0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00875af2: sar edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00875af4: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 00875af7: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00875afc: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 00875aff: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 00875b02: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 00875b05: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 00875b08: mov dword ptr [esi + 0x44], edx */ W32((u32)(r_esi+0x44u), r_edx);
    /* 00875b0b: mov dword ptr [esi + 0x20], 0 */ W32((u32)(r_esi+0x20u), 0x0u);
    /* 00875b12: mov dword ptr [edi + 0xb8], edx */ W32((u32)(r_edi+0xb8u), r_edx);
    /* 00875b18: mov dword ptr [edi + 0xbc], edx */ W32((u32)(r_edi+0xbcu), r_edx);
    /* 00875b1e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00875b1f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00875b20: ret  */ FN_RET(0x00875ac0); r_esp += 4; return;
L_00875b21:; BB(0x00875b21);
    /* 00875b21: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00875b26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00875b27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00875b28: ret  */ FN_RET(0x00875ac0); r_esp += 4; return;
}

void f_00875ac4(void)
{
    FN_ENTER(0x00875ac4);
    /* 00875ac4: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00875ac5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00875ac6: mov esi, eax */ r_esi = r_eax;
    /* 00875ac8: mov edx, dword ptr [esi + 4] */ r_edx = R32((u32)(r_esi+0x4u));
    /* 00875acb: mov edi, dword ptr [esi + 0x68] */ r_edi = R32((u32)(r_esi+0x68u));
    /* 00875ace: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00875ad0: je 0x875b21 */ if (fZ) goto L_00875b21;
L_00875ad2:; BB(0x00875ad2);
    /* 00875ad2: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00875ad4: je 0x875b21 */ if (fZ) goto L_00875b21;
L_00875ad6:; BB(0x00875ad6);
    /* 00875ad6: mov edx, dword ptr [edx + 0x1c] */ r_edx = R32((u32)(r_edx+0x1cu));
    /* 00875ad9: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00875adb: je 0x875b21 */ if (fZ) goto L_00875b21;
L_00875add:; BB(0x00875add);
    /* 00875add: mov eax, dword ptr [edx + 0xe78] */ r_eax = R32((u32)(r_edx+0xe78u));
    /* 00875ae3: mov edx, dword ptr [edx + 4] */ r_edx = R32((u32)(r_edx+0x4u));
    /* 00875ae6: lea ecx, [eax + 1] */ r_ecx = (u32)(r_eax+0x1u);
    /* 00875ae9: sar edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00875aeb: mov dword ptr [esi + 0x30], edx */ W32((u32)(r_esi+0x30u), r_edx);
    /* 00875aee: mov ecx, eax */ r_ecx = r_eax;
    /* 00875af0: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00875af2: sar edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r; fC = ((i32)a >> ((c > 31 ? 31 : c - 1))) & 1; fO = 0; fZ = (r == 0); fS = (r >> 31) & 1; fP = !__builtin_parity(r & 0xffu); } }
    /* 00875af4: mov dword ptr [esi + 0x14], edx */ W32((u32)(r_esi+0x14u), r_edx);
    /* 00875af7: mov edx, 0xffffffff */ r_edx = 0xffffffffu;
    /* 00875afc: mov dword ptr [esi + 0x18], edx */ W32((u32)(r_esi+0x18u), r_edx);
    /* 00875aff: mov dword ptr [esi + 0x38], edx */ W32((u32)(r_esi+0x38u), r_edx);
    /* 00875b02: mov dword ptr [esi + 0x3c], edx */ W32((u32)(r_esi+0x3cu), r_edx);
    /* 00875b05: mov dword ptr [esi + 0x40], edx */ W32((u32)(r_esi+0x40u), r_edx);
    /* 00875b08: mov dword ptr [esi + 0x44], edx */ W32((u32)(r_esi+0x44u), r_edx);
    /* 00875b0b: mov dword ptr [esi + 0x20], 0 */ W32((u32)(r_esi+0x20u), 0x0u);
    /* 00875b12: mov dword ptr [edi + 0xb8], edx */ W32((u32)(r_edi+0xb8u), r_edx);
    /* 00875b18: mov dword ptr [edi + 0xbc], edx */ W32((u32)(r_edi+0xbcu), r_edx);
    /* 00875b1e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00875b1f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00875b20: ret  */ FN_RET(0x00875ac4); r_esp += 4; return;
L_00875b21:; BB(0x00875b21);
    /* 00875b21: mov eax, 0xffffffff */ r_eax = 0xffffffffu;
    /* 00875b26: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00875b27: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00875b28: ret  */ FN_RET(0x00875ac4); r_esp += 4; return;
}

void f_00875b2c(void) /* sub_875B2C */
{
    FN_ENTER(0x00875b2c);
    /* 00875b2c: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00875b2d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00875b2e: mov ebx, dword ptr [esp + 0xc] */ r_ebx = R32((u32)(r_esp+0xcu));
    /* 00875b32: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 00875b34: push dword ptr [esp + 0x14] */ { u32 v = R32((u32)(r_esp+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00875b38: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00875b39: call 0x875b5c */ r_esp -= 4; W32(r_esp, 0x875b3eu); f_00875b5c();
    /* 00875b3e: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00875b41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00875b43: je 0x875b4d */ if (fZ) goto L_00875b4d;
L_00875b45:; BB(0x00875b45);
    /* 00875b45: mov eax, 1 */ r_eax = 0x1u;
    /* 00875b4a: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00875b4b: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00875b4c: ret  */ FN_RET(0x00875b2c); r_esp += 4; return;
L_00875b4d:; BB(0x00875b4d);
    /* 00875b4d: mov eax, ebx */ r_eax = r_ebx;
    /* 00875b4f: call 0x875ac4 */ r_esp -= 4; W32(r_esp, 0x875b54u); f_00875ac4();
    /* 00875b54: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00875b56: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 00875b57: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00875b58: ret  */ FN_RET(0x00875b2c); r_esp += 4; return;
}

void f_00875b5c(void) /* sub_875B5C */
{
    FN_ENTER(0x00875b5c);
    /* 00875b5c: push edi */ { u32 v = r_edi; r_esp -= 4; W32(r_esp, v); }
    /* 00875b5d: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00875b5e: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00875b5f: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00875b60: sub esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00875b63: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00875b67: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 00875b6b: mov edi, dword ptr [ebp + 0x1c] */ r_edi = R32((u32)(r_ebp+0x1cu));
    /* 00875b6e: test edi, edi */ {  u32 a = r_edi; u32 b = r_edi; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00875b70: je 0x875f34 */ if (fZ) goto L_00875f34;
L_00875b76:; BB(0x00875b76);
    /* 00875b76: mov eax, dword ptr [edi + 0xe78] */ r_eax = R32((u32)(r_edi+0xe78u));
    /* 00875b7c: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00875b7e: mov dword ptr [esp + 4], eax */ W32((u32)(r_esp+0x4u), r_eax);
    /* 00875b82: mov dword ptr [ebx], edx */ W32((u32)(r_ebx), r_edx);
    /* 00875b84: mov dword ptr [ebx + 4], edx */ W32((u32)(r_ebx+0x4u), r_edx);
    /* 00875b87: mov dword ptr [ebx + 8], edx */ W32((u32)(r_ebx+0x8u), r_edx);
    /* 00875b8a: mov dword ptr [ebx + 0xc], edx */ W32((u32)(r_ebx+0xcu), r_edx);
    /* 00875b8d: mov dword ptr [ebx + 0x10], edx */ W32((u32)(r_ebx+0x10u), r_edx);
    /* 00875b90: mov dword ptr [ebx + 0x14], edx */ W32((u32)(r_ebx+0x14u), r_edx);
    /* 00875b93: mov dword ptr [ebx + 0x18], edx */ W32((u32)(r_ebx+0x18u), r_edx);
    /* 00875b96: mov dword ptr [ebx + 0x1c], edx */ W32((u32)(r_ebx+0x1cu), r_edx);
    /* 00875b99: mov dword ptr [ebx + 0x20], edx */ W32((u32)(r_ebx+0x20u), r_edx);
    /* 00875b9c: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 00875b9f: mov dword ptr [ebx + 0x28], edx */ W32((u32)(r_ebx+0x28u), r_edx);
    /* 00875ba2: mov dword ptr [ebx + 0x2c], edx */ W32((u32)(r_ebx+0x2cu), r_edx);
    /* 00875ba5: mov dword ptr [ebx + 0x30], edx */ W32((u32)(r_ebx+0x30u), r_edx);
    /* 00875ba8: mov dword ptr [ebx + 0x34], edx */ W32((u32)(r_ebx+0x34u), r_edx);
    /* 00875bab: mov dword ptr [ebx + 0x38], edx */ W32((u32)(r_ebx+0x38u), r_edx);
    /* 00875bae: mov dword ptr [ebx + 0x3c], edx */ W32((u32)(r_ebx+0x3cu), r_edx);
    /* 00875bb1: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 00875bb4: mov dword ptr [ebx + 0x44], edx */ W32((u32)(r_ebx+0x44u), r_edx);
    /* 00875bb7: mov dword ptr [ebx + 0x48], edx */ W32((u32)(r_ebx+0x48u), r_edx);
    /* 00875bba: mov dword ptr [ebx + 0x4c], edx */ W32((u32)(r_ebx+0x4cu), r_edx);
    /* 00875bbd: mov dword ptr [ebx + 0x50], edx */ W32((u32)(r_ebx+0x50u), r_edx);
    /* 00875bc0: mov dword ptr [ebx + 0x54], edx */ W32((u32)(r_ebx+0x54u), r_edx);
    /* 00875bc3: mov dword ptr [ebx + 0x58], edx */ W32((u32)(r_ebx+0x58u), r_edx);
    /* 00875bc6: mov dword ptr [ebx + 0x5c], edx */ W32((u32)(r_ebx+0x5cu), r_edx);
    /* 00875bc9: mov dword ptr [ebx + 0x60], edx */ W32((u32)(r_ebx+0x60u), r_edx);
    /* 00875bcc: mov dword ptr [ebx + 0x64], edx */ W32((u32)(r_ebx+0x64u), r_edx);
    /* 00875bcf: mov dword ptr [ebx + 0x68], edx */ W32((u32)(r_ebx+0x68u), r_edx);
    /* 00875bd2: mov dword ptr [ebx + 0x6c], edx */ W32((u32)(r_ebx+0x6cu), r_edx);
    /* 00875bd5: push 0xc0 */ { u32 v = 0xc0u; r_esp -= 4; W32(r_esp, v); }
    /* 00875bda: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00875bdc: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x875be1u); f_008587c7();
    /* 00875be1: mov esi, eax */ r_esi = r_eax;
    /* 00875be3: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00875be6: mov dword ptr [ebx + 0x68], esi */ W32((u32)(r_ebx+0x68u), r_esi);
    /* 00875be9: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00875beb: mov dword ptr [ebx + 4], ebp */ W32((u32)(r_ebx+0x4u), r_ebp);
    /* 00875bee: mov edx, dword ptr [edi + 8] */ r_edx = R32((u32)(r_edi+0x8u));
    /* 00875bf1: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00875bf3: je 0x875bff */ if (fZ) goto L_00875bff;
L_00875bf5:; BB(0x00875bf5);
    /* 00875bf5: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00875bf6: je 0x875bff */ if (fZ) goto L_00875bff;
L_00875bf8:; BB(0x00875bf8);
    /* 00875bf8: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00875bf9: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00875bfb: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00875bfd: jne 0x875bf8 */ if (!fZ) goto L_00875bf8;
L_00875bff:; BB(0x00875bff);
    /* 00875bff: mov dword ptr [esi + 0x2c], ecx */ W32((u32)(r_esi+0x2cu), r_ecx);
    /* 00875c02: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00875c04: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00875c06: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x875c0bu); f_008587c7();
    /* 00875c0b: mov dword ptr [esi + 0xc], eax */ W32((u32)(r_esi+0xcu), r_eax);
    /* 00875c0e: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00875c10: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00875c12: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x875c17u); f_008587c7();
    /* 00875c17: mov dword ptr [esi + 0x10], eax */ W32((u32)(r_esi+0x10u), r_eax);
    /* 00875c1a: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00875c1c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00875c1e: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x875c23u); f_008587c7();
    /* 00875c23: mov edx, dword ptr [esi + 0xc] */ r_edx = R32((u32)(r_esi+0xcu));
    /* 00875c26: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00875c28: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 00875c2a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00875c2c: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x875c31u); f_008587c7();
    /* 00875c31: mov edx, dword ptr [esi + 0x10] */ r_edx = R32((u32)(r_esi+0x10u));
    /* 00875c34: mov ecx, dword ptr [esp + 0x24] */ r_ecx = R32((u32)(r_esp+0x24u));
    /* 00875c38: mov dword ptr [edx], eax */ W32((u32)(r_edx), r_eax);
    /* 00875c3a: mov eax, dword ptr [esi + 0xc] */ r_eax = R32((u32)(r_esi+0xcu));
    /* 00875c3d: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00875c3f: sar edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00875c41: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00875c42: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00875c44: call 0x878e58 */ r_esp -= 4; W32(r_esp, 0x875c49u); f_00878e58();
    /* 00875c49: mov eax, dword ptr [esi + 0x10] */ r_eax = R32((u32)(r_esi+0x10u));
    /* 00875c4c: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00875c4f: mov ecx, dword ptr [esp + 0x2c] */ r_ecx = R32((u32)(r_esp+0x2cu));
    /* 00875c53: sar edx, cl */ { u32 c = ((u8)r_ecx) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00875c55: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00875c56: push dword ptr [eax] */ { u32 v = R32((u32)(r_eax)); r_esp -= 4; W32(r_esp, v); }
    /* 00875c58: call 0x878e58 */ r_esp -= 4; W32(r_esp, 0x875c5du); f_00878e58();
    /* 00875c5d: add esp, 0x30 */ {  u32 a = r_esp; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00875c60: mov edx, dword ptr [edi] */ r_edx = R32((u32)(r_edi));
    /* 00875c62: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00875c64: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00875c66: je 0x875c72 */ if (fZ) goto L_00875c72;
L_00875c68:; BB(0x00875c68);
    /* 00875c68: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00875c69: je 0x875c72 */ if (fZ) goto L_00875c72;
L_00875c6b:; BB(0x00875c6b);
    /* 00875c6b: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00875c6c: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00875c6e: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00875c70: jne 0x875c6b */ if (!fZ) goto L_00875c6b;
L_00875c72:; BB(0x00875c72);
    /* 00875c72: add ecx, -6 */ {  u32 a = r_ecx; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00875c75: mov dword ptr [esi + 4], ecx */ W32((u32)(r_esi+0x4u), r_ecx);
    /* 00875c78: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00875c7b: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00875c7d: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00875c7f: je 0x875c8b */ if (fZ) goto L_00875c8b;
L_00875c81:; BB(0x00875c81);
    /* 00875c81: dec edx */ { u32 x = r_edx; u32 a = x; u32 b = 1u; u32 r = (a - b) & 0xffffffffu; r_edx = r; fZ = (r == 0); }
    /* 00875c82: je 0x875c8b */ if (fZ) goto L_00875c8b;
L_00875c84:; BB(0x00875c84);
    /* 00875c84: inc ecx */ { u32 x = r_ecx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00875c85: shr edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_edx = r;  } }
    /* 00875c87: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00875c89: jne 0x875c84 */ if (!fZ) goto L_00875c84;
L_00875c8b:; BB(0x00875c8b);
    /* 00875c8b: add ecx, -6 */ {  u32 a = r_ecx; u32 b = 0xfffffffau; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00875c8e: cmp dword ptr [esp + 0x28], 0 */ {  u32 a = R32((u32)(r_esp+0x28u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00875c93: mov dword ptr [esi + 8], ecx */ W32((u32)(r_esi+0x8u), r_ecx);
    /* 00875c96: jne 0x875e19 */ if (!fZ) goto L_00875e19;
L_00875c9c:; BB(0x00875c9c);
    /* 00875c9c: cmp dword ptr [edi + 0xb20], 0 */ {  u32 a = R32((u32)(r_edi+0xb20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00875ca3: je 0x875d9e */ if (fZ) goto L_00875d9e;
L_00875ca9:; BB(0x00875ca9);
    /* 00875ca9: mov edx, dword ptr [edi + 4] */ r_edx = R32((u32)(r_edi+0x4u));
    /* 00875cac: mov dword ptr [ebx + 0x10], edx */ W32((u32)(r_ebx+0x10u), r_edx);
    /* 00875caf: mov ecx, dword ptr [ebp + 4] */ r_ecx = R32((u32)(r_ebp+0x4u));
    /* 00875cb2: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00875cb4: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00875cb6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00875cb7: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x875cbcu); f_00859c55();
    /* 00875cbc: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 00875cbf: mov edx, dword ptr [ebp + 4] */ r_edx = R32((u32)(r_ebp+0x4u));
    /* 00875cc2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875cc4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875cc6: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00875cc7: call 0x859c55 */ r_esp -= 4; W32(r_esp, 0x875cccu); f_00859c55();
    /* 00875ccc: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00875ccf: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 00875cd2: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00875cd4: cmp dword ptr [ebp + 4], 0 */ {  u32 a = R32((u32)(r_ebp+0x4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875cd8: jle 0x875cfd */ if ((fZ||fS!=fO)) goto L_00875cfd;
L_00875cda:; BB(0x00875cda);
    /* 00875cda: mov dword ptr [esp], edi */ W32((u32)(r_esp), r_edi);
    /* 00875cdd: mov edi, ebp */ r_edi = r_ebp;
    /* 00875cdf: mov ebp, eax */ r_ebp = r_eax;
L_00875ce1:; BB(0x00875ce1);
    /* 00875ce1: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00875ce3: push dword ptr [ebx + 0x10] */ { u32 v = R32((u32)(r_ebx+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00875ce6: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x875cebu); f_008587c7();
    /* 00875ceb: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00875cee: mov edx, dword ptr [ebx + 8] */ r_edx = R32((u32)(r_ebx+0x8u));
    /* 00875cf1: mov dword ptr [edx + ebp*4], eax */ W32((u32)(r_edx+r_ebp*4), r_eax);
    /* 00875cf4: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00875cf5: cmp ebp, dword ptr [edi + 4] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x4u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875cf8: jl 0x875ce1 */ if ((fS!=fO)) goto L_00875ce1;
L_00875cfa:; BB(0x00875cfa);
    /* 00875cfa: mov edi, dword ptr [esp] */ r_edi = R32((u32)(r_esp));
L_00875cfd:; BB(0x00875cfd);
    /* 00875cfd: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00875cff: mov dword ptr [ebx + 0x24], edx */ W32((u32)(r_ebx+0x24u), r_edx);
    /* 00875d02: mov dword ptr [ebx + 0x28], edx */ W32((u32)(r_ebx+0x28u), r_edx);
    /* 00875d05: mov ebp, dword ptr [edi + 4] */ r_ebp = R32((u32)(r_edi+0x4u));
    /* 00875d08: mov ecx, ebp */ r_ecx = r_ebp;
    /* 00875d0a: shr ecx, 0x1f */ { u32 c = (31u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_ecx = r;  } }
    /* 00875d0d: add ebp, ecx */ {  u32 a = r_ebp; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00875d0f: sar ebp, 1 */ { u32 c = (1u) & 31; u32 a = r_ebp; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_ebp = r;  } }
    /* 00875d11: mov dword ptr [ebx + 0x30], ebp */ W32((u32)(r_ebx+0x30u), r_ebp);
    /* 00875d14: mov dword ptr [ebx + 0x14], ebp */ W32((u32)(r_ebx+0x14u), r_ebp);
    /* 00875d17: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00875d19: push dword ptr [edi + 0x10] */ { u32 v = R32((u32)(r_edi+0x10u)); r_esp -= 4; W32(r_esp, v); }
    /* 00875d1c: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x875d21u); f_008587c7();
    /* 00875d21: mov dword ptr [esi + 0x30], eax */ W32((u32)(r_esi+0x30u), r_eax);
    /* 00875d24: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 00875d26: push dword ptr [edi + 0x14] */ { u32 v = R32((u32)(r_edi+0x14u)); r_esp -= 4; W32(r_esp, v); }
    /* 00875d29: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x875d2eu); f_008587c7();
    /* 00875d2e: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00875d31: mov dword ptr [esi + 0x34], eax */ W32((u32)(r_esi+0x34u), r_eax);
    /* 00875d34: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00875d36: cmp dword ptr [edi + 0x10], 0 */ {  u32 a = R32((u32)(r_edi+0x10u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875d3a: jle 0x875d64 */ if ((fZ||fS!=fO)) goto L_00875d64;
L_00875d3c:; BB(0x00875d3c);
    /* 00875d3c: mov edx, dword ptr [edi + ebp*4 + 0x320] */ r_edx = R32((u32)(r_edi+r_ebp*4+0x320u));
    /* 00875d43: mov ecx, dword ptr [edx*4 + 0xa25340] */ r_ecx = R32((u32)(r_edx*4+0xa25340u));
    /* 00875d4a: push dword ptr [edi + ebp*4 + 0x420] */ { u32 v = R32((u32)(r_edi+r_ebp*4+0x420u)); r_esp -= 4; W32(r_esp, v); }
    /* 00875d51: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00875d52: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x875d55u); call_ind(t); }
    /* 00875d55: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00875d58: mov edx, dword ptr [esi + 0x30] */ r_edx = R32((u32)(r_esi+0x30u));
    /* 00875d5b: mov dword ptr [edx + ebp*4], eax */ W32((u32)(r_edx+r_ebp*4), r_eax);
    /* 00875d5e: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00875d5f: cmp ebp, dword ptr [edi + 0x10] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x10u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875d62: jl 0x875d3c */ if ((fS!=fO)) goto L_00875d3c;
L_00875d64:; BB(0x00875d64);
    /* 00875d64: xor ebp, ebp */ {  u32 a = r_ebp; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ebp = r;  }
    /* 00875d66: cmp dword ptr [edi + 0x14], 0 */ {  u32 a = R32((u32)(r_edi+0x14u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875d6a: jle 0x875d94 */ if ((fZ||fS!=fO)) goto L_00875d94;
L_00875d6c:; BB(0x00875d6c);
    /* 00875d6c: mov edx, dword ptr [edi + ebp*4 + 0x520] */ r_edx = R32((u32)(r_edi+r_ebp*4+0x520u));
    /* 00875d73: mov ecx, dword ptr [edx*4 + 0xa25348] */ r_ecx = R32((u32)(r_edx*4+0xa25348u));
    /* 00875d7a: push dword ptr [edi + ebp*4 + 0x620] */ { u32 v = R32((u32)(r_edi+r_ebp*4+0x620u)); r_esp -= 4; W32(r_esp, v); }
    /* 00875d81: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00875d82: call dword ptr [ecx + 8] */ { u32 t = R32((u32)(r_ecx+0x8u)); r_esp -= 4; W32(r_esp, 0x875d85u); call_ind(t); }
    /* 00875d85: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00875d88: mov edx, dword ptr [esi + 0x34] */ r_edx = R32((u32)(r_esi+0x34u));
    /* 00875d8b: mov dword ptr [edx + ebp*4], eax */ W32((u32)(r_edx+r_ebp*4), r_eax);
    /* 00875d8e: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00875d8f: cmp ebp, dword ptr [edi + 0x14] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x14u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875d92: jl 0x875d6c */ if ((fS!=fO)) goto L_00875d6c;
L_00875d94:; BB(0x00875d94);
    /* 00875d94: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00875d96: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00875d99: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00875d9a: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00875d9b: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00875d9c: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00875d9d: ret  */ FN_RET(0x00875b5c); r_esp += 4; return;
L_00875d9e:; BB(0x00875d9e);
    /* 00875d9e: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00875da0: push dword ptr [edi + 0x18] */ { u32 v = R32((u32)(r_edi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00875da3: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x875da8u); f_008587c7();
    /* 00875da8: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00875dab: mov dword ptr [edi + 0xb20], eax */ W32((u32)(r_edi+0xb20u), r_eax);
    /* 00875db1: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00875db3: cmp dword ptr [edi + 0x18], 0 */ {  u32 a = R32((u32)(r_edi+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875db7: jle 0x875ca9 */ if ((fZ||fS!=fO)) goto L_00875ca9;
L_00875dbd:; BB(0x00875dbd);
    /* 00875dbd: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 00875dc0: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875dc2: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00875dc4: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875dc6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875dc8: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00875dca: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875dcc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875dce: mov ebx, edx */ r_ebx = r_edx;
    /* 00875dd0: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00875dd2: jmp 0x875dda */ goto L_00875dda;
L_00875dd4:; BB(0x00875dd4);
    /* 00875dd4: mov eax, dword ptr [edi + 0xb20] */ r_eax = R32((u32)(r_edi+0xb20u));
L_00875dda:; BB(0x00875dda);
    /* 00875dda: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00875ddc: push dword ptr [edi + ebp*4 + 0x720] */ { u32 v = R32((u32)(r_edi+r_ebp*4+0x720u)); r_esp -= 4; W32(r_esp, v); }
    /* 00875de3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00875de4: call 0x884f08 */ r_esp -= 4; W32(r_esp, 0x875de9u); f_00884f08();
    /* 00875de9: push dword ptr [edi + ebp*4 + 0x720] */ { u32 v = R32((u32)(r_edi+r_ebp*4+0x720u)); r_esp -= 4; W32(r_esp, v); }
    /* 00875df0: call 0x884a00 */ r_esp -= 4; W32(r_esp, 0x875df5u); f_00884a00();
    /* 00875df5: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00875df8: mov dword ptr [edi + ebp*4 + 0x720], 0 */ W32((u32)(r_edi+r_ebp*4+0x720u), 0x0u);
    /* 00875e03: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00875e06: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00875e07: cmp ebp, dword ptr [edi + 0x18] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x18u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875e0a: jl 0x875dd4 */ if ((fS!=fO)) goto L_00875dd4;
L_00875e0c:; BB(0x00875e0c);
    /* 00875e0c: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 00875e10: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00875e14: jmp 0x875ca9 */ goto L_00875ca9;
L_00875e19:; BB(0x00875e19);
    /* 00875e19: lea edx, [esi + 0x14] */ r_edx = (u32)(r_esi+0x14u);
    /* 00875e1c: push dword ptr [edi] */ { u32 v = R32((u32)(r_edi)); r_esp -= 4; W32(r_esp, v); }
    /* 00875e1e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00875e1f: call 0x88413c */ r_esp -= 4; W32(r_esp, 0x875e24u); f_0088413c();
    /* 00875e24: lea edx, [esi + 0x20] */ r_edx = (u32)(r_esi+0x20u);
    /* 00875e27: push dword ptr [edi + 4] */ { u32 v = R32((u32)(r_edi+0x4u)); r_esp -= 4; W32(r_esp, v); }
    /* 00875e2a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00875e2b: call 0x88413c */ r_esp -= 4; W32(r_esp, 0x875e30u); f_0088413c();
    /* 00875e30: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00875e33: cmp dword ptr [edi + 0xb20], 0 */ {  u32 a = R32((u32)(r_edi+0xb20u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00875e3a: je 0x875ed0 */ if (fZ) goto L_00875ed0;
L_00875e40:; BB(0x00875e40);
    /* 00875e40: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 00875e42: push dword ptr [edi + 0x1c] */ { u32 v = R32((u32)(r_edi+0x1cu)); r_esp -= 4; W32(r_esp, v); }
    /* 00875e45: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x875e4au); f_008587c7();
    /* 00875e4a: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00875e4d: mov dword ptr [esi + 0x38], eax */ W32((u32)(r_esi+0x38u), r_eax);
    /* 00875e50: xor edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a ^ b) & 0xffffffffu; r_edx = r;  }
    /* 00875e52: cmp dword ptr [edi + 0x1c], 0 */ {  u32 a = R32((u32)(r_edi+0x1cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875e56: jle 0x875ec5 */ if ((fZ||fS!=fO)) goto L_00875ec5;
L_00875e58:; BB(0x00875e58);
    /* 00875e58: lea ecx, [edi + 0xb34] */ r_ecx = (u32)(r_edi+0xb34u);
    /* 00875e5e: mov ebp, edx */ r_ebp = r_edx;
    /* 00875e60: mov dword ptr [esp + 4], ecx */ W32((u32)(r_esp+0x4u), r_ecx);
    /* 00875e64: lea ecx, [edx + edx] */ r_ecx = (u32)(r_edx+r_edx);
    /* 00875e67: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00875e69: sub ecx, edx */ {  u32 a = r_ecx; u32 b = r_edx; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 00875e6b: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00875e6d: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00875e6f: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00875e71: add ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00875e73: mov ebx, ecx */ r_ebx = r_ecx;
    /* 00875e75: mov dword ptr [esp + 8], esi */ W32((u32)(r_esp+0x8u), r_esi);
    /* 00875e79: jmp 0x875e82 */ goto L_00875e82;
L_00875e7b:; BB(0x00875e7b);
    /* 00875e7b: mov eax, dword ptr [esp + 8] */ r_eax = R32((u32)(r_esp+0x8u));
    /* 00875e7f: mov eax, dword ptr [eax + 0x38] */ r_eax = R32((u32)(r_eax+0x38u));
L_00875e82:; BB(0x00875e82);
    /* 00875e82: mov ecx, dword ptr [edi + ebp*4 + 0xb24] */ r_ecx = R32((u32)(r_edi+r_ebp*4+0xb24u));
    /* 00875e89: mov esi, dword ptr [ecx] */ r_esi = R32((u32)(r_ecx));
    /* 00875e8b: mov edx, dword ptr [edi + esi*4] */ r_edx = R32((u32)(r_edi+r_esi*4));
    /* 00875e8e: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00875e90: mov esi, edx */ r_esi = r_edx;
    /* 00875e92: shr esi, 0x1f */ { u32 c = (31u) & 31; u32 a = r_esi; u32 r = a; if (c) { r = (c >= 32) ? 0 : (a >> c); r_esi = r;  } }
    /* 00875e95: add edx, esi */ {  u32 a = r_edx; u32 b = r_esi; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875e97: sar edx, 1 */ { u32 c = (1u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (u32)((i32)a >> (c > 31 ? 31 : c)) & 0xffffffffu; r_edx = r;  } }
    /* 00875e99: mov esi, dword ptr [esp + 0x24] */ r_esi = R32((u32)(r_esp+0x24u));
    /* 00875e9d: push dword ptr [esi + 8] */ { u32 v = R32((u32)(r_esi+0x8u)); r_esp -= 4; W32(r_esp, v); }
    /* 00875ea0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00875ea1: mov esi, dword ptr [esp + 0xc] */ r_esi = R32((u32)(r_esp+0xcu));
    /* 00875ea5: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 00875ea6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 00875ea7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00875ea8: call 0x87f1ec */ r_esp -= 4; W32(r_esp, 0x875eadu); f_0087f1ec();
    /* 00875ead: add esp, 0x14 */ {  u32 a = r_esp; u32 b = 0x14u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00875eb0: add ebx, 0x30 */ {  u32 a = r_ebx; u32 b = 0x30u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00875eb3: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00875eb4: cmp ebp, dword ptr [edi + 0x1c] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x1cu)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875eb7: jl 0x875e7b */ if ((fS!=fO)) goto L_00875e7b;
L_00875eb9:; BB(0x00875eb9);
    /* 00875eb9: mov esi, dword ptr [esp + 8] */ r_esi = R32((u32)(r_esp+0x8u));
    /* 00875ebd: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 00875ec1: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
L_00875ec5:; BB(0x00875ec5);
    /* 00875ec5: mov dword ptr [ebx], 1 */ W32((u32)(r_ebx), 0x1u);
    /* 00875ecb: jmp 0x875ca9 */ goto L_00875ca9;
L_00875ed0:; BB(0x00875ed0);
    /* 00875ed0: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 00875ed2: push dword ptr [edi + 0x18] */ { u32 v = R32((u32)(r_edi+0x18u)); r_esp -= 4; W32(r_esp, v); }
    /* 00875ed5: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x875edau); f_008587c7();
    /* 00875eda: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00875edd: mov dword ptr [edi + 0xb20], eax */ W32((u32)(r_edi+0xb20u), r_eax);
    /* 00875ee3: xor ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 00875ee5: cmp dword ptr [edi + 0x18], 0 */ {  u32 a = R32((u32)(r_edi+0x18u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875ee9: jle 0x875e40 */ if ((fZ||fS!=fO)) goto L_00875e40;
L_00875eef:; BB(0x00875eef);
    /* 00875eef: lea edx, [ecx + ecx] */ r_edx = (u32)(r_ecx+r_ecx);
    /* 00875ef2: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875ef4: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00875ef6: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875ef8: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875efa: sub edx, ecx */ {  u32 a = r_edx; u32 b = r_ecx; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 00875efc: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875efe: add edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00875f00: mov ebx, edx */ r_ebx = r_edx;
    /* 00875f02: mov ebp, ecx */ r_ebp = r_ecx;
    /* 00875f04: jmp 0x875f0c */ goto L_00875f0c;
L_00875f06:; BB(0x00875f06);
    /* 00875f06: mov eax, dword ptr [edi + 0xb20] */ r_eax = R32((u32)(r_edi+0xb20u));
L_00875f0c:; BB(0x00875f0c);
    /* 00875f0c: add eax, ebx */ {  u32 a = r_eax; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00875f0e: push dword ptr [edi + ebp*4 + 0x720] */ { u32 v = R32((u32)(r_edi+r_ebp*4+0x720u)); r_esp -= 4; W32(r_esp, v); }
    /* 00875f15: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00875f16: call 0x8859cc */ r_esp -= 4; W32(r_esp, 0x875f1bu); f_008859cc();
    /* 00875f1b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00875f1e: add ebx, 0x2c */ {  u32 a = r_ebx; u32 b = 0x2cu; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00875f21: inc ebp */ { u32 x = r_ebp; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebp = r;  }
    /* 00875f22: cmp ebp, dword ptr [edi + 0x18] */ {  u32 a = r_ebp; u32 b = R32((u32)(r_edi+0x18u)); u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00875f25: jl 0x875f06 */ if ((fS!=fO)) goto L_00875f06;
L_00875f27:; BB(0x00875f27);
    /* 00875f27: mov ebp, dword ptr [esp + 0x24] */ r_ebp = R32((u32)(r_esp+0x24u));
    /* 00875f2b: mov ebx, dword ptr [esp + 0x20] */ r_ebx = R32((u32)(r_esp+0x20u));
    /* 00875f2f: jmp 0x875e40 */ goto L_00875e40;
L_00875f34:; BB(0x00875f34);
    /* 00875f34: mov eax, 1 */ r_eax = 0x1u;
    /* 00875f39: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = (((a ^ r) & (b ^ r)) >> 31) & 1; fC = (r < a); }
    /* 00875f3c: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00875f3d: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00875f3e: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 00875f3f: pop edi */ { u32 v = R32(r_esp); r_esp += 4; r_edi = v; }
    /* 00875f40: ret  */ FN_RET(0x00875b5c); r_esp += 4; return;
}

void f_00875f44(void) /* sub_875F44 */
{
    FN_ENTER(0x00875f44);
    /* 00875f44: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00875f45: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00875f46: mov edx, dword ptr [esp + 0xc] */ r_edx = R32((u32)(r_esp+0xcu));
    /* 00875f4a: mov ebx, dword ptr [esp + 0x10] */ r_ebx = R32((u32)(r_esp+0x10u));
    /* 00875f4e: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00875f50: mov dword ptr [ebx], eax */ W32((u32)(r_ebx), r_eax);
    /* 00875f52: mov dword ptr [ebx + 4], eax */ W32((u32)(r_ebx+0x4u), r_eax);
    /* 00875f55: mov dword ptr [ebx + 8], eax */ W32((u32)(r_ebx+0x8u), r_eax);
    /* 00875f58: mov dword ptr [ebx + 0xc], eax */ W32((u32)(r_ebx+0xcu), r_eax);
    /* 00875f5b: mov dword ptr [ebx + 0x10], eax */ W32((u32)(r_ebx+0x10u), r_eax);
    /* 00875f5e: mov dword ptr [ebx + 0x14], eax */ W32((u32)(r_ebx+0x14u), r_eax);
    /* 00875f61: mov dword ptr [ebx + 0x18], eax */ W32((u32)(r_ebx+0x18u), r_eax);
    /* 00875f64: mov dword ptr [ebx + 0x1c], eax */ W32((u32)(r_ebx+0x1cu), r_eax);
    /* 00875f67: mov dword ptr [ebx + 0x20], eax */ W32((u32)(r_ebx+0x20u), r_eax);
    /* 00875f6a: mov dword ptr [ebx + 0x24], eax */ W32((u32)(r_ebx+0x24u), r_eax);
    /* 00875f6d: mov dword ptr [ebx + 0x28], eax */ W32((u32)(r_ebx+0x28u), r_eax);
    /* 00875f70: mov dword ptr [ebx + 0x2c], eax */ W32((u32)(r_ebx+0x2cu), r_eax);
    /* 00875f73: mov dword ptr [ebx + 0x30], eax */ W32((u32)(r_ebx+0x30u), r_eax);
    /* 00875f76: mov dword ptr [ebx + 0x34], eax */ W32((u32)(r_ebx+0x34u), r_eax);
    /* 00875f79: mov dword ptr [ebx + 0x38], eax */ W32((u32)(r_ebx+0x38u), r_eax);
    /* 00875f7c: mov dword ptr [ebx + 0x3c], eax */ W32((u32)(r_ebx+0x3cu), r_eax);
    /* 00875f7f: mov dword ptr [ebx + 0x40], eax */ W32((u32)(r_ebx+0x40u), r_eax);
    /* 00875f82: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 00875f85: mov dword ptr [ebx + 0x48], eax */ W32((u32)(r_ebx+0x48u), r_eax);
    /* 00875f88: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 00875f8b: mov dword ptr [ebx + 0x50], eax */ W32((u32)(r_ebx+0x50u), r_eax);
    /* 00875f8e: mov dword ptr [ebx + 0x54], eax */ W32((u32)(r_ebx+0x54u), r_eax);
    /* 00875f91: mov dword ptr [ebx + 0x58], eax */ W32((u32)(r_ebx+0x58u), r_eax);
    /* 00875f94: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 00875f97: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00875f9a: mov dword ptr [ebx + 0x64], eax */ W32((u32)(r_ebx+0x64u), r_eax);
    /* 00875f9d: mov dword ptr [ebx + 0x68], eax */ W32((u32)(r_ebx+0x68u), r_eax);
    /* 00875fa0: mov dword ptr [ebx + 0x6c], eax */ W32((u32)(r_ebx+0x6cu), r_eax);
    /* 00875fa3: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 00875fa6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00875fa8: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 00875fab: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 00875fae: cmp dword ptr [edx], 0 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00875fb1: je 0x875fd4 */ if (fZ) goto L_00875fd4;
L_00875fb3:; BB(0x00875fb3);
    /* 00875fb3: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00875fb5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00875fb7: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x875fbcu); f_008587c7();
    /* 00875fbc: mov ebp, eax */ r_ebp = r_eax;
    /* 00875fbe: mov dword ptr [ebx + 0x68], ebp */ W32((u32)(r_ebx+0x68u), r_ebp);
    /* 00875fc1: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00875fc4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00875fc5: call 0x877dcc */ r_esp -= 4; W32(r_esp, 0x875fcau); f_00877dcc();
    /* 00875fca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00875fcd: mov dword ptr [ebp + 4], 0xc61c3c00 */ W32((u32)(r_ebp+0x4u), 0xc61c3c00u);
L_00875fd4:; BB(0x00875fd4);
    /* 00875fd4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00875fd6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00875fd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00875fd8: ret  */ FN_RET(0x00875f44); r_esp += 4; return;
}

void f_00875f74(void)
{
    FN_ENTER(0x00875f74);
    /* 00875f74: inc ebx */ { u32 x = r_ebx; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00875f75: xor byte ptr [ecx + 0x43893443], cl */ { u32 ad = (u32)(r_ecx+0x43893443u);  u32 a = R8(ad); u32 b = (u8)r_ecx; u32 r = (a ^ b) & 0xffu; W8(ad, r);  }
    /* 00875f7b: cmp byte ptr [ecx + 0x43893c43], cl */ {  u32 a = R8((u32)(r_ecx+0x43893c43u)); u32 b = (u8)r_ecx; u32 r = (a - b) & 0xffu;   }
    /* 00875f81: inc eax */ { u32 x = r_eax; u32 a = x; u32 b = 1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00875f82: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 00875f85: mov dword ptr [ebx + 0x48], eax */ W32((u32)(r_ebx+0x48u), r_eax);
    /* 00875f88: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 00875f8b: mov dword ptr [ebx + 0x50], eax */ W32((u32)(r_ebx+0x50u), r_eax);
    /* 00875f8e: mov dword ptr [ebx + 0x54], eax */ W32((u32)(r_ebx+0x54u), r_eax);
    /* 00875f91: mov dword ptr [ebx + 0x58], eax */ W32((u32)(r_ebx+0x58u), r_eax);
    /* 00875f94: mov dword ptr [ebx + 0x5c], eax */ W32((u32)(r_ebx+0x5cu), r_eax);
    /* 00875f97: mov dword ptr [ebx + 0x60], eax */ W32((u32)(r_ebx+0x60u), r_eax);
    /* 00875f9a: mov dword ptr [ebx + 0x64], eax */ W32((u32)(r_ebx+0x64u), r_eax);
    /* 00875f9d: mov dword ptr [ebx + 0x68], eax */ W32((u32)(r_ebx+0x68u), r_eax);
    /* 00875fa0: mov dword ptr [ebx + 0x6c], eax */ W32((u32)(r_ebx+0x6cu), r_eax);
    /* 00875fa3: mov dword ptr [ebx + 0x40], edx */ W32((u32)(r_ebx+0x40u), r_edx);
    /* 00875fa6: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00875fa8: mov dword ptr [ebx + 0x4c], eax */ W32((u32)(r_ebx+0x4cu), r_eax);
    /* 00875fab: mov dword ptr [ebx + 0x44], eax */ W32((u32)(r_ebx+0x44u), r_eax);
    /* 00875fae: cmp dword ptr [edx], 0 */ {  u32 a = R32((u32)(r_edx)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00875fb1: je 0x875fd4 */ if (fZ) goto L_00875fd4;
L_00875fb3:; BB(0x00875fb3);
    /* 00875fb3: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 00875fb5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00875fb7: call 0x8587c7 */ r_esp -= 4; W32(r_esp, 0x875fbcu); f_008587c7();
    /* 00875fbc: mov ebp, eax */ r_ebp = r_eax;
    /* 00875fbe: mov dword ptr [ebx + 0x68], ebp */ W32((u32)(r_ebx+0x68u), r_ebp);
    /* 00875fc1: add ebx, 4 */ {  u32 a = r_ebx; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_ebx = r;  }
    /* 00875fc4: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 00875fc5: call 0x877dcc */ r_esp -= 4; W32(r_esp, 0x875fcau); f_00877dcc();
    /* 00875fca: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 00875fcd: mov dword ptr [ebp + 4], 0xc61c3c00 */ W32((u32)(r_ebp+0x4u), 0xc61c3c00u);
L_00875fd4:; BB(0x00875fd4);
    /* 00875fd4: xor eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a ^ b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00875fd6: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 00875fd7: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00875fd8: ret  */ FN_RET(0x00875f74); r_esp += 4; return;
}

void f_00875fdc(void) /* sub_875FDC */
{
    FN_ENTER(0x00875fdc);
    /* 00875fdc: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00875fe0: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00875fe2: movzx eax, byte ptr [ecx + 5] */ r_eax = (u32)R8((u32)(r_ecx+0x5u));
    /* 00875fe6: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00875fe9: ret  */ FN_RET(0x00875fdc); r_esp += 4; return;
}

void f_00875fec(void) /* sub_875FEC */
{
    FN_ENTER(0x00875fec);
    /* 00875fec: mov edx, dword ptr [esp + 4] */ r_edx = R32((u32)(r_esp+0x4u));
    /* 00875ff0: mov ecx, dword ptr [edx] */ r_ecx = R32((u32)(r_edx));
    /* 00875ff2: movzx eax, byte ptr [ecx + 5] */ r_eax = (u32)R8((u32)(r_ecx+0x5u));
    /* 00875ff6: and eax, 4 */ {  u32 a = r_eax; u32 b = 0x4u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00875ff9: ret  */ FN_RET(0x00875fec); r_esp += 4; return;
}

void f_00875ffc(void) /* sub_875FFC */
{
    FN_ENTER(0x00875ffc);
    /* 00875ffc: mov ecx, dword ptr [esp + 4] */ r_ecx = R32((u32)(r_esp+0x4u));
    /* 00876000: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00876002: movzx eax, byte ptr [edx + 0xe] */ r_eax = (u32)R8((u32)(r_edx+0xeu));
    /* 00876006: movzx ecx, byte ptr [edx + 0xf] */ r_ecx = (u32)R8((u32)(r_edx+0xfu));
    /* 0087600a: shl ecx, 8 */ { u32 c = (8u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 0087600d: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 0087600f: movzx ecx, byte ptr [edx + 0x10] */ r_ecx = (u32)R8((u32)(r_edx+0x10u));
    /* 00876013: shl ecx, 0x10 */ { u32 c = (16u) & 31; u32 a = r_ecx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_ecx = r;  } }
    /* 00876016: or eax, ecx */ {  u32 a = r_eax; u32 b = r_ecx; u32 r = (a | b) & 0xffffffffu; r_eax = r;  }
    /* 00876018: movzx edx, byte ptr [edx + 0x11] */ r_edx = (u32)R8((u32)(r_edx+0x11u));
    /* 0087601c: shl edx, 0x18 */ { u32 c = (24u) & 31; u32 a = r_edx; u32 r = a; if (c) { r = (a << c) & 0xffffffffu; r_edx = r;  } }
    /* 0087601f: or eax, edx */ {  u32 a = r_eax; u32 b = r_edx; u32 r = (a | b) & 0xffffffffu; r_eax = r; fZ = (r == 0); fS = ((r >> 31) & 1); fP = !__builtin_parity(r & 0xffu); fA = (((a ^ b ^ r) & 0x10u) != 0); fO = 0; fC = 0; }
    /* 00876021: ret  */ FN_RET(0x00875ffc); r_esp += 4; return;
}

